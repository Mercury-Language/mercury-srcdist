/*
** Automatically generated from `llds_to_x86_64.m'
** by the Mercury compiler,
** version rotd-2007-09-21, configured for i686-pc-linux-gnu.
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
INIT mercury__ll_backend__llds_to_x86_64__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "ll_backend.llds_to_x86_64.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "ll_backend.llds_to_x86_64.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "ll_backend.llds_to_x86_64.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 39 "ll_backend.llds_to_x86_64.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 43 "ll_backend.llds_to_x86_64.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 47 "ll_backend.llds_to_x86_64.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 51 "ll_backend.llds_to_x86_64.c"
#line 52 "ll_backend.llds_to_x86_64.c"
#include "ll_backend.llds_to_x86_64.mh"

#line 55 "ll_backend.llds_to_x86_64.c"
#line 56 "ll_backend.llds_to_x86_64.c"
#ifndef LL_BACKEND__LLDS_TO_X86_64_DECL_GUARD
#define LL_BACKEND__LLDS_TO_X86_64_DECL_GUARD

#line 60 "ll_backend.llds_to_x86_64.c"
#line 61 "ll_backend.llds_to_x86_64.c"

#endif
#line 64 "ll_backend.llds_to_x86_64.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_String f1;
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

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__llds_to_x86_64__type_ctor_info_binop_0;
MR_decl_label2(f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_97_115_109_95_95_91_49_93_95_48_3_0, 2,3)
MR_decl_label8(ll_backend__llds_to_x86_64__binop_instr_4_0, 5,6,7,8,9,10,11,12)
MR_decl_label8(ll_backend__llds_to_x86_64__binop_instr_4_0, 13,14,15,16,19,20,21,22)
MR_decl_label8(ll_backend__llds_to_x86_64__binop_instr_4_0, 23,24,25,30,31,32,33,34)
MR_decl_label8(ll_backend__llds_to_x86_64__binop_instr_4_0, 35,36,37,38,39,40,41,42)
MR_decl_label1(ll_backend__llds_to_x86_64__binop_instr_4_0, 4)
MR_decl_label8(ll_backend__llds_to_x86_64__binop_instrs_3_0, 4,25,7,8,26,11,27,15)
MR_decl_label3(ll_backend__llds_to_x86_64__binop_instrs_3_0, 16,17,18)
MR_decl_label8(ll_backend__llds_to_x86_64__code_addr_type_2_0, 4,5,6,7,8,9,10,42)
MR_decl_label5(ll_backend__llds_to_x86_64__code_addr_type_2_0, 43,15,17,18,19)
MR_decl_label8(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0, 2,6,7,8,57,12,23,50)
MR_decl_label1(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0, 9)
MR_decl_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 4,5,6,338,8,10,342,343)
MR_decl_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 14,15,19,22,26,29,30,24)
MR_decl_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 17,36,39,344,42,43,48,47)
MR_decl_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 50,54,57,58,52,45,65,64)
MR_decl_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 67,62,345,70,71,72,73,78)
MR_decl_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 77,80,75,81,346,83,347,85)
MR_decl_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 348,87,92,91,94,89,88,95)
MR_decl_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 96,97,98,99,101,349,103,104)
MR_decl_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 109,108,106,105,112,113,114,350)
MR_decl_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 117,118,116,120,121,126,125,123)
MR_decl_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 122,133,132,135,130,129,137,138)
MR_decl_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 139,140,136,142,141,143,144,145)
MR_decl_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 146,147,148,149,150,151,152,153)
MR_decl_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 154,155,156,157,158,351,160,352)
MR_decl_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 162,163,353,165,166,167,168,169)
MR_decl_label1(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 170)
MR_decl_label4(ll_backend__llds_to_x86_64__labels_to_string_3_0, 12,4,5,3)
MR_decl_label6(ll_backend__llds_to_x86_64__lval_reg_locn_4_0, 2,4,5,6,7,8)
MR_decl_label1(ll_backend__llds_to_x86_64__transform_block_instr_3_0, 2)
MR_decl_label4(ll_backend__llds_to_x86_64__transform_block_instr_list_3_0, 4,5,6,3)
MR_decl_label5(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0, 4,5,6,7,3)
MR_decl_label6(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0, 4,5,6,7,8,3)
MR_decl_label7(ll_backend__llds_to_x86_64__transform_livevals_3_0, 4,8,10,6,5,11,3)
MR_decl_label8(ll_backend__llds_to_x86_64__transform_lval_5_0, 4,5,6,8,9,11,12,14)
MR_decl_label8(ll_backend__llds_to_x86_64__transform_lval_5_0, 15,17,18,20,23,26,27,25)
MR_decl_label8(ll_backend__llds_to_x86_64__transform_lval_5_0, 28,30,32,33,34,35,36,38)
MR_decl_label8(ll_backend__llds_to_x86_64__transform_lval_5_0, 39,40,41,42,44,45,47,48)
MR_decl_label8(ll_backend__llds_to_x86_64__transform_lval_5_0, 49,50,52,53,54,55,56,57)
MR_decl_label8(ll_backend__llds_to_x86_64__transform_lval_5_0, 68,69,70,75,74,72,71,82)
MR_decl_label8(ll_backend__llds_to_x86_64__transform_lval_5_0, 81,84,79,78,85,86,87,88)
MR_decl_label8(ll_backend__llds_to_x86_64__transform_lval_5_0, 89,90,92,94,95,96,98,99)
MR_decl_label8(ll_backend__llds_to_x86_64__transform_rval_5_0, 4,6,237,8,13,12,15,16)
MR_decl_label8(ll_backend__llds_to_x86_64__transform_rval_5_0, 10,9,17,18,19,20,22,76)
MR_decl_label8(ll_backend__llds_to_x86_64__transform_rval_5_0, 77,78,83,82,85,90,89,92)
MR_decl_label8(ll_backend__llds_to_x86_64__transform_rval_5_0, 93,87,80,98,97,100,95,79)
MR_decl_label8(ll_backend__llds_to_x86_64__transform_rval_5_0, 101,102,103,104,105,74,75,49)
MR_decl_label8(ll_backend__llds_to_x86_64__transform_rval_5_0, 50,51,56,55,62,61,59,53)
MR_decl_label8(ll_backend__llds_to_x86_64__transform_rval_5_0, 69,67,39,40,45,44,42,48)
MR_decl_label8(ll_backend__llds_to_x86_64__transform_rval_5_0, 23,26,27,28,241,30,32,33)
MR_decl_label5(ll_backend__llds_to_x86_64__transform_rval_5_0, 34,35,245,37,38)
MR_decl_label8(ll_backend__llds_to_x86_64__unop_instrs_4_0, 3,4,5,6,7,8,9,10)
MR_decl_label4(ll_backend__llds_to_x86_64__unop_instrs_4_0, 47,16,12,18)
MR_decl_label8(__Unify___ll_backend__llds_to_x86_64__binop_0_0, 6,8,12,14,18,20,24,26)
MR_decl_label2(__Unify___ll_backend__llds_to_x86_64__binop_0_0, 43,1)
MR_decl_label8(__Compare___ll_backend__llds_to_x86_64__binop_0_0, 3,2,6,11,19,23,25,32)
MR_decl_label8(__Compare___ll_backend__llds_to_x86_64__binop_0_0, 37,39,44,45,50,51,53,98)
MR_decl_static(ll_backend__llds_to_x86_64__binop_instr_4_0)
MR_decl_static(fn__ll_backend__llds_to_x86_64__this_file_0_0)
MR_decl_static(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0)
MR_decl_static(ll_backend__llds_to_x86_64__binop_instrs_3_0)
MR_decl_static(ll_backend__llds_to_x86_64__unop_instrs_4_0)
MR_decl_static(ll_backend__llds_to_x86_64__code_addr_type_2_0)
MR_decl_static(ll_backend__llds_to_x86_64__lval_reg_locn_4_0)
MR_decl_static(ll_backend__llds_to_x86_64__transform_lval_5_0)
MR_decl_static(ll_backend__llds_to_x86_64__transform_rval_5_0)
MR_decl_static(ll_backend__llds_to_x86_64__transform_livevals_3_0)
MR_decl_static(ll_backend__llds_to_x86_64__labels_to_string_3_0)
MR_decl_static(ll_backend__llds_to_x86_64__transform_block_instr_3_0)
MR_decl_static(ll_backend__llds_to_x86_64__transform_block_instr_list_3_0)
MR_decl_static(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0)
MR_decl_static(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0)
MR_decl_static(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0)
MR_def_extern_entry(ll_backend__llds_to_x86_64__llds_to_x86_64_asm_3_0)
MR_decl_static(__Unify___ll_backend__llds_to_x86_64__binop_0_0)
MR_decl_static(__Compare___ll_backend__llds_to_x86_64__binop_0_0)
MR_def_extern_entry(f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_97_115_109_95_95_91_49_93_95_48_3_0)

static const struct mercury_type_0 mercury_common_0[10] =
{
{
1,
MR_string_const("<<int_div>>", 11)
},
{
1,
MR_string_const("<<directive>>", 13)
},
{
1,
MR_string_const("<<lvar>>", 8)
},
{
1,
MR_string_const("<<var>>", 7)
},
{
1,
MR_string_const("<<llconst_true>>", 16)
},
{
1,
MR_string_const("<<llconst_false>>", 17)
},
{
1,
MR_string_const("<<llconst_float>>", 17)
},
{
1,
MR_string_const("<<llconst_multi_string>>", 24)
},
{
1,
MR_string_const("<<llconst_data_addr>>", 21)
},
{
1,
MR_string_const("<<liveval>>", 11)
},
};

static const struct mercury_type_1 mercury_common_1[56] =
{
{
MR_string_const("<<int_mod>>", 11)
},
{
MR_string_const("<<bitwise_or>>", 14)
},
{
MR_string_const("<<logical_and>>", 15)
},
{
MR_string_const("<<logical_or>>", 14)
},
{
MR_string_const("<<body>>", 8)
},
{
MR_string_const("<<str_eq>>", 10)
},
{
MR_string_const("<<str_ne>>", 10)
},
{
MR_string_const("<<str_lt>>", 10)
},
{
MR_string_const("<<str_gt>>", 10)
},
{
MR_string_const("<<str_le>>", 10)
},
{
MR_string_const("<<str_ge>>", 10)
},
{
MR_string_const("<<float_plus>>", 14)
},
{
MR_string_const("<<float_minus>>", 15)
},
{
MR_string_const("<<float_times>>", 15)
},
{
MR_string_const("<<float_divide>>", 16)
},
{
MR_string_const("<<float_eq>>", 12)
},
{
MR_string_const("<<float_ne>>", 12)
},
{
MR_string_const("<<float_lt>>", 12)
},
{
MR_string_const("<<float_gt>>", 12)
},
{
MR_string_const("<<float_le>>", 12)
},
{
MR_string_const("<<float_ge>>", 12)
},
{
MR_string_const("<<compound_eq>>", 15)
},
{
MR_string_const("<<compound_lt>>", 15)
},
{
MR_string_const("<<array_index>>", 15)
},
{
MR_string_const("<<mktag>>", 9)
},
{
MR_string_const("<<tag>>", 7)
},
{
MR_string_const("<<unmktag>>", 11)
},
{
MR_string_const("<<strip_tag>>", 13)
},
{
MR_string_const("<<mkbody>>", 10)
},
{
MR_string_const("<<unmkbody>>", 12)
},
{
MR_string_const("<<hash_string>>", 15)
},
{
MR_string_const("<<logical_not>>", 15)
},
{
MR_string_const("<<field>>", 9)
},
{
MR_string_const("<<mkword>>", 10)
},
{
MR_string_const("<<prune_ticket>>", 16)
},
{
MR_string_const("<<discard_ticket>>", 18)
},
{
MR_string_const("<<mkframe>>", 11)
},
{
MR_string_const("<<arbitrary_c_code>>", 20)
},
{
MR_string_const("<<save_maxfr>>", 14)
},
{
MR_string_const("<<restore_maxfr>>", 17)
},
{
MR_string_const("<<mark_hp>>", 11)
},
{
MR_string_const("<<restore_hp>>", 14)
},
{
MR_string_const("<<free_heap>>", 13)
},
{
MR_string_const("<<push_region_frame>>", 21)
},
{
MR_string_const("<<region_fill_frame>>", 21)
},
{
MR_string_const("<<region_set_fixed_slot>>", 25)
},
{
MR_string_const("<<use_and_maybe_pop_region_frame>>", 34)
},
{
MR_string_const("<<store_ticket>>", 16)
},
{
MR_string_const("<<reset_ticket>>", 16)
},
{
MR_string_const("<<mark_ticket_stack>>", 21)
},
{
MR_string_const("<<prune_tickets_to>>", 20)
},
{
MR_string_const("<<decr_sp>> ", 12)
},
{
MR_string_const("<<foreign_proc_code>>", 21)
},
{
MR_string_const("<<init_sync_term>>", 18)
},
{
MR_string_const("<<fork>>", 8)
},
{
MR_string_const("<<join_and_continue>>", 21)
},
};

static const struct mercury_type_2 mercury_common_2[56] =
{
{
{
MR_TAG_COMMON(0,1,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,4),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,5),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,6),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,7),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,10),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,11),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,12),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,13),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,14),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,15),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,16),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,17),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,18),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,19),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,20),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,21),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,22),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,23),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,24),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,25),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,26),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,27),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,28),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,29),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,30),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,31),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,32),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,33),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,34),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,35),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,36),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,37),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,3,7),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,38),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,39),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,40),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,41),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,42),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,43),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,44),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,45),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,46),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,47),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,48),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,49),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,50),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,52),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,53),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,54),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,55),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_3 mercury_common_3[8] =
{
{
MR_TAG_COMMON(3,0,2)
},
{
MR_TAG_COMMON(3,0,3)
},
{
MR_TAG_COMMON(3,0,4)
},
{
MR_TAG_COMMON(3,0,5)
},
{
MR_TAG_COMMON(3,0,6)
},
{
MR_TAG_COMMON(3,0,7)
},
{
MR_TAG_COMMON(3,0,8)
},
{
MR_tbmkword(0, 8)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds_to_x86_64__field_types_binop_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds_to_x86_64__du_functor_desc_binop_0_0 = {
	"binop_simple_operands",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds_to_x86_64__field_types_binop_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds_to_x86_64__field_types_binop_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds_to_x86_64__du_functor_desc_binop_0_1 = {
	"binop_simple_and_compound_operands",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds_to_x86_64__field_types_binop_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds_to_x86_64__field_types_binop_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds_to_x86_64__du_functor_desc_binop_0_2 = {
	"binop_compound_and_simple_operands",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds_to_x86_64__field_types_binop_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds_to_x86_64__field_types_binop_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds_to_x86_64__du_functor_desc_binop_0_3 = {
	"binop_compound_operands",
	2,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds_to_x86_64__field_types_binop_0_3,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds_to_x86_64__du_stag_ordered_binop_0_0[] = {
	&mercury_data_ll_backend__llds_to_x86_64__du_functor_desc_binop_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds_to_x86_64__du_stag_ordered_binop_0_1[] = {
	&mercury_data_ll_backend__llds_to_x86_64__du_functor_desc_binop_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds_to_x86_64__du_stag_ordered_binop_0_2[] = {
	&mercury_data_ll_backend__llds_to_x86_64__du_functor_desc_binop_0_2

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds_to_x86_64__du_stag_ordered_binop_0_3[] = {
	&mercury_data_ll_backend__llds_to_x86_64__du_functor_desc_binop_0_3

};

const MR_DuPtagLayout mercury_data_ll_backend__llds_to_x86_64__du_ptag_ordered_binop_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds_to_x86_64__du_stag_ordered_binop_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds_to_x86_64__du_stag_ordered_binop_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds_to_x86_64__du_stag_ordered_binop_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds_to_x86_64__du_stag_ordered_binop_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds_to_x86_64__du_name_ordered_binop_0[] = {
	&mercury_data_ll_backend__llds_to_x86_64__du_functor_desc_binop_0_2,
	&mercury_data_ll_backend__llds_to_x86_64__du_functor_desc_binop_0_3,
	&mercury_data_ll_backend__llds_to_x86_64__du_functor_desc_binop_0_1,
	&mercury_data_ll_backend__llds_to_x86_64__du_functor_desc_binop_0_0
};

const MR_Integer mercury_data_ll_backend__llds_to_x86_64__functor_number_map_binop_0[] = {
	3,
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds_to_x86_64__type_ctor_info_binop_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds_to_x86_64__binop_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds_to_x86_64__binop_0_0)),
	"ll_backend.llds_to_x86_64",
	"binop",
	{ (void *)mercury_data_ll_backend__llds_to_x86_64__du_name_ordered_binop_0 },
	{ (void *)mercury_data_ll_backend__llds_to_x86_64__du_ptag_ordered_binop_0 },
	4,
	4,
	mercury_data_ll_backend__llds_to_x86_64__functor_number_map_binop_0
};


MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module0)
	MR_init_entry1(ll_backend__llds_to_x86_64__binop_instr_4_0);
	MR_init_label8(ll_backend__llds_to_x86_64__binop_instr_4_0,5,6,7,8,9,10,11,12)
	MR_init_label8(ll_backend__llds_to_x86_64__binop_instr_4_0,13,14,15,16,19,20,21,22)
	MR_init_label8(ll_backend__llds_to_x86_64__binop_instr_4_0,23,24,25,30,31,32,33,34)
	MR_init_label8(ll_backend__llds_to_x86_64__binop_instr_4_0,35,36,37,38,39,40,41,42)
	MR_init_label1(ll_backend__llds_to_x86_64__binop_instr_4_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__binop_instr_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i4);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i10) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i12) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i15) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i16) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i19) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i20) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i21) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i22) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i24) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i25) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i31) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i34) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i36) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i37) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i38) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i39) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i40) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instr_4_0_i42));
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tfield(2, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 45;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_tempr2, 1) = MR_r2;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr3;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_r3;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr3, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 38;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 43;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 49;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,3);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,5);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,6);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,7);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,8);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,9);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,10);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,11);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,12);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,13);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,14);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,15);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,16);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,17);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,18);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,19);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,20);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,21);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,22);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,23);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module1)
	MR_init_entry1(fn__ll_backend__llds_to_x86_64__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__llds_to_x86_64__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("llds_to_x86_64.m", 16);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__last_det_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module2)
	MR_init_entry1(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0);
	MR_init_label8(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,2,6,7,8,57,12,23,50)
	MR_init_label1(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_np_call_localret_ent(list__last_det_2_0,
		ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i2);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i8));
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_const_mask_field(MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,3)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i12);
	}
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i57);
	}
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i9);
	}
	}
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i50));
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i9);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_decr_sp_and_return(1);
	}
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r2, 2);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("llds_to_x86_64.m", 16);
	MR_r2 = (MR_Word) MR_string_const("get_last_instr_operand: last_instr_dest failed", 46);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module3)
	MR_init_entry1(ll_backend__llds_to_x86_64__binop_instrs_3_0);
	MR_init_label8(ll_backend__llds_to_x86_64__binop_instrs_3_0,4,25,7,8,26,11,27,15)
	MR_init_label3(ll_backend__llds_to_x86_64__binop_instrs_3_0,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__binop_instrs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instrs_3_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instrs_3_0_i25) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instrs_3_0_i26) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__binop_instrs_3_0_i27));
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__llds_to_x86_64__binop_instr_4_0);
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__binop_instrs_3_0_i7);
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__binop_instr_4_0,
		ll_backend__llds_to_x86_64__binop_instrs_3_0_i8);
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(2, MR_r1, 0);
	MR_sv(3) = MR_ctfield(2, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__binop_instrs_3_0_i11);
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__binop_instr_4_0,
		ll_backend__llds_to_x86_64__binop_instrs_3_0_i18);
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 0);
	MR_sv(3) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__binop_instrs_3_0_i15);
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__binop_instrs_3_0_i16);
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__binop_instr_4_0,
		ll_backend__llds_to_x86_64__binop_instrs_3_0_i17);
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__binop_instrs_3_0_i18);
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module4)
	MR_init_entry1(ll_backend__llds_to_x86_64__unop_instrs_4_0);
	MR_init_label8(ll_backend__llds_to_x86_64__unop_instrs_4_0,3,4,5,6,7,8,9,10)
	MR_init_label4(ll_backend__llds_to_x86_64__unop_instrs_4_0,47,16,12,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__unop_instrs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ll_backend__llds_to_x86_64__unop_instrs_4_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__unop_instrs_4_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__unop_instrs_4_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__unop_instrs_4_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__unop_instrs_4_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__unop_instrs_4_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__unop_instrs_4_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__unop_instrs_4_0_i10) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__unop_instrs_4_0_i18));
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,24);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,25);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,26);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,27);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,28);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,29);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,30);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__unop_instrs_4_0_i12);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__unop_instrs_4_0_i47);
	}
	MR_r1 = (MR_Word) MR_string_const("llds_to_x86_64.m", 16);
	MR_r2 = (MR_Word) MR_string_const("unop_instrs: bitwise_complement: unexpected: instruction operand Instrs0", 72);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r3, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__unop_instrs_4_0_i16);
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 30;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 30;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,31);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__llds_out__label_to_c_string_2_0);
MR_decl_entry(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module5)
	MR_init_entry1(ll_backend__llds_to_x86_64__code_addr_type_2_0);
	MR_init_label8(ll_backend__llds_to_x86_64__code_addr_type_2_0,4,5,6,7,8,9,10,42)
	MR_init_label5(ll_backend__llds_to_x86_64__code_addr_type_2_0,43,15,17,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__code_addr_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__llds_to_x86_64__code_addr_type_2_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__code_addr_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__code_addr_type_2_0_i43) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__code_addr_type_2_0_i17));
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(ll_backend__llds_to_x86_64__code_addr_type_2_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__code_addr_type_2_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__code_addr_type_2_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__code_addr_type_2_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__code_addr_type_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__code_addr_type_2_0_i10));
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<<code_succip>>", 15);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<<do_redo>>", 11);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<<do_fail>>", 11);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<<do_trace_redo_fail_shallow>>", 30);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<<do_trace_redo_fail_deep>>", 27);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<<do_not_reached>>", 18);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ll_backend__llds_out__label_to_c_string_2_0,
		ll_backend__llds_to_x86_64__code_addr_type_2_0_i15);
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,
		ll_backend__llds_to_x86_64__code_addr_type_2_0_i15);
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044", 1);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__code_addr_type_2_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const("<<do_succeed>>", 14);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__code_addr_type_2_0_i19);
	}
	MR_r1 = (MR_Word) MR_string_const("<<do_call_closure>>", 19);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<<do_call_class_method>>", 24);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module6)
	MR_init_entry1(ll_backend__llds_to_x86_64__lval_reg_locn_4_0);
	MR_init_label6(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,2,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__lval_reg_locn_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_0,
		ll_backend__llds_to_x86_64__lval_reg_locn_4_0_i2);
MR_def_label(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__lval_reg_locn_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__llds_to_x86_64__lval_reg_locn_4_0_i5);
MR_def_label(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__lval_reg_locn_4_0_i6);
MR_def_label(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fake_reg(", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__lval_reg_locn_4_0_i7);
MR_def_label(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,
		ll_backend__llds_to_x86_64__lval_reg_locn_4_0_i8);
MR_def_label(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0);
MR_decl_entry(libs__compiler_util__sorry_2_0);
MR_decl_entry(ll_backend__x86_64_out__operand_to_string_2_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module7)
	MR_init_entry1(ll_backend__llds_to_x86_64__transform_lval_5_0);
	MR_init_label8(ll_backend__llds_to_x86_64__transform_lval_5_0,4,5,6,8,9,11,12,14)
	MR_init_label8(ll_backend__llds_to_x86_64__transform_lval_5_0,15,17,18,20,23,26,27,25)
	MR_init_label8(ll_backend__llds_to_x86_64__transform_lval_5_0,28,30,32,33,34,35,36,38)
	MR_init_label8(ll_backend__llds_to_x86_64__transform_lval_5_0,39,40,41,42,44,45,47,48)
	MR_init_label8(ll_backend__llds_to_x86_64__transform_lval_5_0,49,50,52,53,54,55,56,57)
	MR_init_label8(ll_backend__llds_to_x86_64__transform_lval_5_0,68,69,70,75,74,72,71,82)
	MR_init_label8(ll_backend__llds_to_x86_64__transform_lval_5_0,81,84,79,78,85,86,87,88)
	MR_init_label8(ll_backend__llds_to_x86_64__transform_lval_5_0,89,90,92,94,95,96,98,99)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__transform_lval_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i32));
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i17) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i20));
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i6);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i27);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i9);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i27);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i12);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i27);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i15);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i27);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 4);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i18);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i27);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i45);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i25);
	}
	MR_sv(1) = MR_r1;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i26);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i27);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i28);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("transform_lval: unexpected: llds reg_f", 38);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(2, MR_tempr2, 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i32));
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i44) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i96) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i96) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i96) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i96) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i96) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i68) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i96) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i98) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_lval_5_0_i99));
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i34);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i35);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 4);
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i36);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i38);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_r3 = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 1);
	MR_r3 = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i39);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i40);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(") + ", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i41);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i42);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044virtual_reg(", 13);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i57);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i45);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("parallelism is not supported", 28);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i48);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i49);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i50);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i52);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_r3 = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 1);
	MR_r3 = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i53);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i54);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(") + ", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i55);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i56);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044virtual_reg(", 13);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i57);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 1);
	MR_r3 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i69);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i70);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i72);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i74);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i75);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("lval_instrs: field: unexpected: Rval1", 37);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i71);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i71);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i79);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i81);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i82);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("lval_instrs: field: unexpected: Rval2", 37);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i78);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_ctfield(1, MR_sv(3), 0);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i84);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i78);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i85);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i86);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i87);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr5 = MR_sv(6);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr3, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_sv(3), 3, (MR_Integer) 1);
	MR_tfield(3, MR_sv(3), 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,32);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i88);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i89);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i90);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i92);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i95);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_sv(2), 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 45;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i94);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i95);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ll_backend__llds_to_x86_64__transform_rval_5_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r2, 1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module8)
	MR_init_entry1(ll_backend__llds_to_x86_64__transform_rval_5_0);
	MR_init_label8(ll_backend__llds_to_x86_64__transform_rval_5_0,4,6,237,8,13,12,15,16)
	MR_init_label8(ll_backend__llds_to_x86_64__transform_rval_5_0,10,9,17,18,19,20,22,76)
	MR_init_label8(ll_backend__llds_to_x86_64__transform_rval_5_0,77,78,83,82,85,90,89,92)
	MR_init_label8(ll_backend__llds_to_x86_64__transform_rval_5_0,93,87,80,98,97,100,95,79)
	MR_init_label8(ll_backend__llds_to_x86_64__transform_rval_5_0,101,102,103,104,105,74,75,49)
	MR_init_label8(ll_backend__llds_to_x86_64__transform_rval_5_0,50,51,56,55,62,61,59,53)
	MR_init_label8(ll_backend__llds_to_x86_64__transform_rval_5_0,69,67,39,40,45,44,42,48)
	MR_init_label8(ll_backend__llds_to_x86_64__transform_rval_5_0,23,26,27,28,241,30,32,33)
	MR_init_label5(ll_backend__llds_to_x86_64__transform_rval_5_0,34,35,245,37,38)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__transform_rval_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_rval_5_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_rval_5_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_rval_5_0_i237) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_rval_5_0_i22));
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_tailcall_ent(ll_backend__llds_to_x86_64__transform_lval_5_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(2, MR_r2, 0);
	MR_r2 = MR_ctfield(2, MR_r2, 1);
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i8);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i10);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i12);
	}
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i13);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("transform_rval: mkword unexpected: Rval", 39);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i9);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r3, 0);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i15);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,2,33);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i16);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i9);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r2, 0);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,2,33);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i17);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i18);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i19);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr7 = MR_sv(4);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(2, MR_tempr3, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i20);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i48);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i23);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_INT_EQ(MR_ctfield(3, MR_r2, 0),1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i39);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r2, 0),2)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i49);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i74);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i76);
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i75);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 2);
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i77);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r3;
	}
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i78);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i80);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i82);
	}
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i83);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("transform_rval: mem_addr(heap_ref) unexpected: Rval1", 52);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i79);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i85);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i87);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i89);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i90);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("transform_rval: mem_addr(heap_ref): unexpected: Rval2", 53);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i79);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_sv(3), 0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i92);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i93);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i79);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_r2, 0);
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i79);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i95);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i97);
	}
	MR_sv(1) = MR_ctfield(1, MR_sv(1), 0);
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i98);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("transform_rval: mem_addr(heap_ref): unexpected: Rval2", 53);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i79);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_sv(1), 0);
	MR_sv(4) = MR_ctfield(1, MR_r3, 0);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i100);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i79);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_sv(1), 0);
	MR_sv(3) = MR_ctfield(1, MR_r2, 0);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i101);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i102);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i103);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr10 = MR_sv(5);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 45;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr5, 0) = MR_tempr6;
	MR_tfield(2, MR_tempr5, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i104);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i105);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i48);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i75);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	}
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i50);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	}
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i51);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i53);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i55);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i56);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("rval_instrs: binop: unexpected: Rval1", 37);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i59);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i61);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i62);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("rval_instrs: binop: unexpected: Rval2", 37);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_ctfield(1, MR_sv(3), 0);
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__binop_instrs_3_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i48);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_sv(3), 0);
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__binop_instrs_3_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i48);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i67);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i69);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_sv(2), 0);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__binop_instrs_3_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i48);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_sv(2), 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__binop_instrs_3_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i48);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i40);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i42);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i44);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i45);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("transform_rval: unop: unexpected: Rval", 38);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__unop_instrs_4_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i48);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__unop_instrs_4_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i48);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r2, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_rval_5_0_i26) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_rval_5_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_rval_5_0_i241) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_rval_5_0_i32));
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i27);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_r3, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i30);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("x86_64 backend and foreign tags.", 32);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_rval_5_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_rval_5_0_i34) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_rval_5_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_rval_5_0_i245) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__transform_rval_5_0_i38));
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r3, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 56;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_r2 = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__code_addr_type_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i37);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,6);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module9)
	MR_init_entry1(ll_backend__llds_to_x86_64__transform_livevals_3_0);
	MR_init_label7(ll_backend__llds_to_x86_64__transform_livevals_3_0,4,8,10,6,5,11,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__transform_livevals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_livevals_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_lval_5_0,
		ll_backend__llds_to_x86_64__transform_livevals_3_0_i4);
MR_def_label(ll_backend__llds_to_x86_64__transform_livevals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_livevals_3_0_i6);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_livevals_3_0_i8);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("llds_to_x86_64.m", 16);
	MR_r2 = (MR_Word) MR_string_const("transform_livevals: unexpected: no results", 42);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__llds_to_x86_64__transform_livevals_3_0_i5);
MR_def_label(ll_backend__llds_to_x86_64__transform_livevals_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__transform_livevals_3_0_i10);
MR_def_label(ll_backend__llds_to_x86_64__transform_livevals_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,0,9);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(2);
	}
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_livevals_3_0,
		ll_backend__llds_to_x86_64__transform_livevals_3_0_i11);
MR_def_label(ll_backend__llds_to_x86_64__transform_livevals_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,0,9);
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_livevals_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_livevals_3_0,
		ll_backend__llds_to_x86_64__transform_livevals_3_0_i11);
MR_def_label(ll_backend__llds_to_x86_64__transform_livevals_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_livevals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module10)
	MR_init_entry1(ll_backend__llds_to_x86_64__labels_to_string_3_0);
	MR_init_label4(ll_backend__llds_to_x86_64__labels_to_string_3_0,12,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__labels_to_string_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_to_x86_64__labels_to_string_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__labels_to_string_3_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ll_backend__llds_out__label_to_c_string_2_0,
		ll_backend__llds_to_x86_64__labels_to_string_3_0_i4);
MR_def_label(ll_backend__llds_to_x86_64__labels_to_string_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__labels_to_string_3_0_i5);
MR_def_label(ll_backend__llds_to_x86_64__labels_to_string_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__labels_to_string_3_0_i12);
MR_def_label(ll_backend__llds_to_x86_64__labels_to_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__condense_2_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module11)
	MR_init_entry1(ll_backend__llds_to_x86_64__transform_block_instr_3_0);
	MR_init_label1(ll_backend__llds_to_x86_64__transform_block_instr_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__transform_block_instr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_block_instr_list_3_0,
		ll_backend__llds_to_x86_64__transform_block_instr_3_0_i2);
MR_def_label(ll_backend__llds_to_x86_64__transform_block_instr_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(list__condense_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__x86_64_regs__reg_map_reset_scratch_reg_info_2_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module12)
	MR_init_entry1(ll_backend__llds_to_x86_64__transform_block_instr_list_3_0);
	MR_init_label4(ll_backend__llds_to_x86_64__transform_block_instr_list_3_0,4,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__transform_block_instr_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_block_instr_list_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(0, MR_ctfield(1, MR_r2, 0), 0);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,
		ll_backend__llds_to_x86_64__transform_block_instr_list_3_0_i4);
MR_def_label(ll_backend__llds_to_x86_64__transform_block_instr_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_reset_scratch_reg_info_2_0,
		ll_backend__llds_to_x86_64__transform_block_instr_list_3_0_i5);
MR_def_label(ll_backend__llds_to_x86_64__transform_block_instr_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_block_instr_list_3_0,
		ll_backend__llds_to_x86_64__transform_block_instr_list_3_0_i6);
MR_def_label(ll_backend__llds_to_x86_64__transform_block_instr_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_block_instr_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module13)
	MR_init_entry1(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0);
	MR_init_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,4,5,6,338,8,10,342,343)
	MR_init_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,14,15,19,22,26,29,30,24)
	MR_init_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,17,36,39,344,42,43,48,47)
	MR_init_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,50,54,57,58,52,45,65,64)
	MR_init_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,67,62,345,70,71,72,73,78)
	MR_init_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,77,80,75,81,346,83,347,85)
	MR_init_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,348,87,92,91,94,89,88,95)
	MR_init_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,96,97,98,99,101,349,103,104)
	MR_init_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,109,108,106,105,112,113,114,350)
	MR_init_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,117,118,116,120,121,126,125,123)
	MR_init_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,122,133,132,135,130,129,137,138)
	MR_init_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,139,140,136,142,141,143,144,145)
	MR_init_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,146,147,148,149,150,151,152,153)
	MR_init_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,154,155,156,157,158,351,160,352)
	MR_init_label8(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,162,163,353,165,166,167,168,169)
	MR_init_label1(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,170)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i338) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i10));
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i5);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,34);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,35);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,338)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(2, MR_r2, 0);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i8);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_livevals_3_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i147);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i342) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i343) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i344) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i345) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i81) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i346) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i347) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i348) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i101) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i349) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i113) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i114) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i350) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i148) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i149) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i150) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i151) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i152) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i153) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i154) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i155) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i156) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i157) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i158) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i351) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i352) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i353) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i167) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i168) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i169) MR_AND
		MR_LABEL_AP(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i170));
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,342)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 3);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_block_instr_3_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i147);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,343)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r2, 2);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_lval_5_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i14);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i15);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i17);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i19);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i48);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i22);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i24);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i26);
	}
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i65);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_sv(3), 0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i29);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i30);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i147);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(2), 0);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i147);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i62);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i65);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r3, 0);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i39);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i147);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,344)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r2, 2);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_lval_5_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i42);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i43);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i45);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i47);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i48);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("instr_to_x86_64: assign: unexpected: Lval", 41);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_sv(2), 0);
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i50);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i52);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i54);
	}
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i65);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_sv(4), 0);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i57);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i58);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i147);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(2), 0);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i147);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i62);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i64);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i65);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("instr_to_x86_64: assign: unexpected: Rval", 41);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r3, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i67);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i147);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_r2, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(1, MR_sv(1), 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,345)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__code_addr_type_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i70);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__code_addr_type_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i71);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i72);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(4) = MR_r2;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i73);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i75);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i77);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i78);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("instr_to_x86_64: llcall: unexpected: lval_reg_locn failed", 57);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_sv(4), 0);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i80);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 1);
	MR_r2 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_r1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_ctfield(1, MR_sv(1), 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 1);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,36);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,346)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ll_backend__llds_out__label_to_c_string_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i83);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,347)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__code_addr_type_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i85);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 1);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,348)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r2, 2);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i87);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i89);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i91);
	}
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i92);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("instr_to_x86_64: computed_goto: unexpected: Rval", 48);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i88);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_r3, 0);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i94);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__labels_to_string_3_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i95);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_r2, 0);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_string_const("", 0);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__labels_to_string_3_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i95);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i96);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i97);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr4, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr5, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr6, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i98);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i99);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i147);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,37);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,349)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__code_addr_type_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i103);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i104);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i106);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i108);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i109);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("instr_to_x86_64: if_val: unexpected: Rval", 41);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i105);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i105);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r2, 0);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i112);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(3, MR_tempr4, 2) = (MR_Integer) 9;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 1);
	MR_r2 = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,2,38);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr4;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,39);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,40);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,350)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 7);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i117);
	}
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 3);
	MR_r2 = MR_ctfield(3, MR_r2, 4);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i120);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i118);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("instr_to_x86_64: encounter a region variable", 44);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i116);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i120);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_lval_5_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i121);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i123);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i125);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i126);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("instr_to_x86_64: incr_hp: unexpected: Rval", 42);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i122);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i122);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i130);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i132);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__llds_to_x86_64__this_file_0_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i133);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("instr_to_x86_64: incr_hp: unexpected: Lval", 42);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i129);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i135);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i129);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(5);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i137);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i136);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_sv(4), 0);
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_tempr1;
	MR_sv(5) = MR_r1;
	}
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i138);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i139);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i140);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_r2 = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr3;
	MR_tempr6 = MR_sv(5);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 1);
	MR_r2 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr5, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr5;
	MR_r2 = MR_tempr2;
	MR_r1 = MR_sv(6);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i142);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i141);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i143);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i144);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr4, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 31;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr5;
	MR_tfield(3, MR_tempr4, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr5, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr6, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr6, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i145);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i146);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i147);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,41);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,42);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,43);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,44);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,45);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,46);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,47);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,48);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,49);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,50);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,51);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,351)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("<<incr_sp>> ", 12);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i160);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 14;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,352)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_r2, 1);
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	}
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i162);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i163);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 45;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(0,1,51);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,353)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i165);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<<decr_sp_and_return>> ", 23);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i166);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,52);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,53);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,54);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,55);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__x86_64_instrs__init_x86_64_instruction_0_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module14)
	MR_init_entry1(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0);
	MR_init_label5(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0,4,5,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,
		ll_backend__llds_to_x86_64__transform_c_instr_list_3_0_i4);
MR_def_label(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_reset_scratch_reg_info_2_0,
		ll_backend__llds_to_x86_64__transform_c_instr_list_3_0_i5);
MR_def_label(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__x86_64_instrs__init_x86_64_instruction_0_0,
		ll_backend__llds_to_x86_64__transform_c_instr_list_3_0_i6);
MR_def_label(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	}
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0,
		ll_backend__llds_to_x86_64__transform_c_instr_list_3_0_i7);
MR_def_label(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__x86_64_instrs__init_x86_64_proc_1_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module15)
	MR_init_entry1(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0);
	MR_init_label6(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0,4,5,6,7,8,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ll_backend__x86_64_instrs__init_x86_64_proc_1_0,
		ll_backend__llds_to_x86_64__transform_c_proc_list_3_0_i4);
MR_def_label(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__x86_64_instrs__init_x86_64_instruction_0_0,
		ll_backend__llds_to_x86_64__transform_c_proc_list_3_0_i5);
MR_def_label(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(4), 5);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,
		ll_backend__llds_to_x86_64__transform_c_proc_list_3_0_i6);
MR_def_label(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 63;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_sv(5), 1);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0,
		ll_backend__llds_to_x86_64__transform_c_proc_list_3_0_i7);
MR_def_label(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 9);
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr2, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr2, 8) = MR_ctfield(0, MR_tempr3, 8);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r2 = MR_sv(3);
	}
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0,
		ll_backend__llds_to_x86_64__transform_c_proc_list_3_0_i8);
MR_def_label(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module16)
	MR_init_entry1(ll_backend__llds_to_x86_64__llds_to_x86_64_asm_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_to_x86_64__llds_to_x86_64_asm_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_97_115_109_95_95_91_49_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module17)
	MR_init_entry1(__Unify___ll_backend__llds_to_x86_64__binop_0_0);
	MR_init_label8(__Unify___ll_backend__llds_to_x86_64__binop_0_0,6,8,12,14,18,20,24,26)
	MR_init_label2(__Unify___ll_backend__llds_to_x86_64__binop_0_0,43,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__llds_to_x86_64__binop_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i43);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r4 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i12) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i18) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i24));
MR_def_label(__Unify___ll_backend__llds_to_x86_64__binop_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__llds_to_x86_64__binop_0_0_i8);
MR_def_label(__Unify___ll_backend__llds_to_x86_64__binop_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__llds_to_x86_64__binop_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__llds_to_x86_64__binop_0_0_i14);
MR_def_label(__Unify___ll_backend__llds_to_x86_64__binop_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__llds_to_x86_64__binop_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_ctfield(2, MR_tempr2, 1);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_ctfield(2, MR_tempr2, 0);
	MR_r3 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds_to_x86_64__binop_0_0_i20);
MR_def_label(__Unify___ll_backend__llds_to_x86_64__binop_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__llds_to_x86_64__binop_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 1);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(3, MR_tempr2, 0);
	MR_r3 = MR_ctfield(3, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds_to_x86_64__binop_0_0_i26);
MR_def_label(__Unify___ll_backend__llds_to_x86_64__binop_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__llds_to_x86_64__binop_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds_to_x86_64__binop_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module18)
	MR_init_entry1(__Compare___ll_backend__llds_to_x86_64__binop_0_0);
	MR_init_label8(__Compare___ll_backend__llds_to_x86_64__binop_0_0,3,2,6,11,19,23,25,32)
	MR_init_label8(__Compare___ll_backend__llds_to_x86_64__binop_0_0,37,39,44,45,50,51,53,98)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__llds_to_x86_64__binop_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i2);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i6) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i19) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i32) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i45));
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	if (MR_INT_NE(MR_tag(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i44);
	}
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr4, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__llds_to_x86_64__binop_0_0_i11);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i98);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i50) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i23) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i44) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i44));
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r5;
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__llds_to_x86_64__binop_0_0_i25);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i98);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i50) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i50) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i37) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i44));
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 1);
	MR_tempr4 = MR_r5;
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_ctfield(2, MR_tempr3, 0);
	MR_r3 = MR_ctfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds_to_x86_64__binop_0_0_i39);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i98);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	if (MR_INT_EQ(MR_tag(MR_r5),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i51);
	}
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_r5;
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_ctfield(3, MR_tempr3, 0);
	MR_r3 = MR_ctfield(3, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds_to_x86_64__binop_0_0_i53);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i98);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__x86_64_regs__default_x86_64_reg_mapping_1_0);
MR_decl_entry(fn__ll_backend__x86_64_regs__reg_map_init_1_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module19)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_97_115_109_95_95_91_49_93_95_48_3_0);
	MR_init_label2(f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_97_115_109_95_95_91_49_93_95_48_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_97_115_109_95_95_91_49_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ll_backend__x86_64_regs__default_x86_64_reg_mapping_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_97_115_109_95_95_91_49_93_95_48_3_0_i2);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_97_115_109_95_95_91_49_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_init_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_97_115_109_95_95_91_49_93_95_48_3_0_i3);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_97_115_109_95_95_91_49_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__llds_to_x86_64_maybe_bunch_0(void)
{
	ll_backend__llds_to_x86_64_module0();
	ll_backend__llds_to_x86_64_module1();
	ll_backend__llds_to_x86_64_module2();
	ll_backend__llds_to_x86_64_module3();
	ll_backend__llds_to_x86_64_module4();
	ll_backend__llds_to_x86_64_module5();
	ll_backend__llds_to_x86_64_module6();
	ll_backend__llds_to_x86_64_module7();
	ll_backend__llds_to_x86_64_module8();
	ll_backend__llds_to_x86_64_module9();
	ll_backend__llds_to_x86_64_module10();
	ll_backend__llds_to_x86_64_module11();
	ll_backend__llds_to_x86_64_module12();
	ll_backend__llds_to_x86_64_module13();
	ll_backend__llds_to_x86_64_module14();
	ll_backend__llds_to_x86_64_module15();
	ll_backend__llds_to_x86_64_module16();
	ll_backend__llds_to_x86_64_module17();
	ll_backend__llds_to_x86_64_module18();
	ll_backend__llds_to_x86_64_module19();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__llds_to_x86_64__init(void);
void mercury__ll_backend__llds_to_x86_64__init_type_tables(void);
void mercury__ll_backend__llds_to_x86_64__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__llds_to_x86_64__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__llds_to_x86_64__init_complexity_procs(void);
#endif

void mercury__ll_backend__llds_to_x86_64__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__llds_to_x86_64_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds_to_x86_64__type_ctor_info_binop_0,
		ll_backend__llds_to_x86_64__binop_0_0);
	mercury__ll_backend__llds_to_x86_64__init_debugger();
}

void mercury__ll_backend__llds_to_x86_64__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds_to_x86_64__type_ctor_info_binop_0);
	}
}


void mercury__ll_backend__llds_to_x86_64__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__llds_to_x86_64__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__llds_to_x86_64);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__llds_to_x86_64__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
