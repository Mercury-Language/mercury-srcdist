/*
** Automatically generated from `llds_to_x86_64.m'
** by the Mercury compiler,
** version rotd-2011-10-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__llds_to_x86_64__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.llds_to_x86_64.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "ll_backend.llds_to_x86_64.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "ll_backend.llds_to_x86_64.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "ll_backend.llds_to_x86_64.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "ll_backend.llds_to_x86_64.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "ll_backend.llds_to_x86_64.c"
#line 49 "ll_backend.llds_to_x86_64.c"
#include "ll_backend.llds_to_x86_64.mh"

#line 52 "ll_backend.llds_to_x86_64.c"
#line 53 "ll_backend.llds_to_x86_64.c"
#ifndef LL_BACKEND__LLDS_TO_X86_64_DECL_GUARD
#define LL_BACKEND__LLDS_TO_X86_64_DECL_GUARD

#line 57 "ll_backend.llds_to_x86_64.c"
#line 58 "ll_backend.llds_to_x86_64.c"

#endif
#line 61 "ll_backend.llds_to_x86_64.c"

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
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__llds_to_x86_64__type_ctor_info_binop_0;
MR_decl_label2(f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_97_115_109_95_95_91_49_93_95_48_3_0, 2,3)
MR_decl_label10(ll_backend__llds_to_x86_64__binop_instr_4_0, 3,7,10,14,17,20,23,27,30,33)
MR_decl_label10(ll_backend__llds_to_x86_64__binop_instr_4_0, 36,39,42,45,48,51,54,57,60,63)
MR_decl_label10(ll_backend__llds_to_x86_64__binop_instr_4_0, 67,75,79,83,87,91,94,99,103,106)
MR_decl_label10(ll_backend__llds_to_x86_64__binop_instr_4_0, 109,113,116,119,122,125,128,131,134,138)
MR_decl_label1(ll_backend__llds_to_x86_64__binop_instr_4_0, 142)
MR_decl_label10(ll_backend__llds_to_x86_64__binop_instrs_3_0, 4,5,3,8,9,10,11,7,14,15)
MR_decl_label1(ll_backend__llds_to_x86_64__binop_instrs_3_0, 13)
MR_decl_label10(ll_backend__llds_to_x86_64__code_addr_type_2_0, 3,4,5,6,7,8,9,13,12,15)
MR_decl_label1(ll_backend__llds_to_x86_64__code_addr_type_2_0, 16)
MR_decl_label10(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0, 2,4,6,11,12,13,14,15,16,17)
MR_decl_label10(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0, 18,19,20,21,22,23,25,26,27,28)
MR_decl_label10(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0, 29,30,31,32,33,34,35,36,37,38)
MR_decl_label10(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0, 39,40,41,42,43,44,45,46,47,48)
MR_decl_label3(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0, 49,9,8)
MR_decl_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 3,6,9,13,12,15,19,20,25,30)
MR_decl_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 34,27,22,46,43,18,56,55,58,63)
MR_decl_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 62,60,59,65,66,67,81,82,57,87)
MR_decl_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 88,84,96,97,95,100,103,106,110,109)
MR_decl_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 116,117,121,119,118,124,115,136,135,139)
MR_decl_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 138,141,142,147,146,144,143,153,152,150)
MR_decl_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 149,156,159,160,162,155,173,172,174,175)
MR_decl_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 188,189,134,192,191,198,201,205,206,211)
MR_decl_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 216,220,215,213,210,208,232,236,231,229)
MR_decl_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 204,242,241,245,248,251,254,258,259,260)
MR_decl_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 261,266,265,263,257,284,287,290,293,296)
MR_decl_label7(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0, 299,302,305,308,311,314,317)
MR_decl_label6(ll_backend__llds_to_x86_64__lval_reg_locn_4_0, 2,4,7,8,9,10)
MR_decl_label5(ll_backend__llds_to_x86_64__maybe_labels_to_string_3_0, 16,3,5,6,7)
MR_decl_label1(ll_backend__llds_to_x86_64__transform_block_instr_3_0, 2)
MR_decl_label4(ll_backend__llds_to_x86_64__transform_block_instr_list_3_0, 18,4,5,6)
MR_decl_label5(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0, 20,4,5,6,8)
MR_decl_label6(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0, 26,4,5,6,11,14)
MR_decl_label7(ll_backend__llds_to_x86_64__transform_livevals_3_0, 41,4,9,8,6,5,17)
MR_decl_label10(ll_backend__llds_to_x86_64__transform_lval_5_0, 311,4,3,7,8,12,10,9,19,18)
MR_decl_label10(ll_backend__llds_to_x86_64__transform_lval_5_0, 16,15,21,22,24,35,36,37,39,49)
MR_decl_label10(ll_backend__llds_to_x86_64__transform_lval_5_0, 50,6,53,54,55,57,66,67,68,69)
MR_decl_label10(ll_backend__llds_to_x86_64__transform_lval_5_0, 70,52,77,81,80,83,87,86,89,91)
MR_decl_label10(ll_backend__llds_to_x86_64__transform_lval_5_0, 93,95,100,99,97,104,103,107,108,109)
MR_decl_label10(ll_backend__llds_to_x86_64__transform_lval_5_0, 111,120,121,122,123,124,106,131,134,135)
MR_decl_label4(ll_backend__llds_to_x86_64__transform_lval_5_0, 133,136,138,141)
MR_decl_label10(ll_backend__llds_to_x86_64__transform_rval_5_0, 3,6,11,14,10,8,7,18,19,21)
MR_decl_label10(ll_backend__llds_to_x86_64__transform_rval_5_0, 33,5,36,40,41,49,47,45,43,61)
MR_decl_label10(ll_backend__llds_to_x86_64__transform_rval_5_0, 59,39,71,70,74,77,80,83,87,90)
MR_decl_label10(ll_backend__llds_to_x86_64__transform_rval_5_0, 96,383,102,105,106,111,116,117,115,113)
MR_decl_label10(ll_backend__llds_to_x86_64__transform_rval_5_0, 110,108,124,123,121,107,126,127,129,138)
MR_decl_label10(ll_backend__llds_to_x86_64__transform_rval_5_0, 137,147,148,104,151,100,152,156,154,160)
MR_decl_label10(ll_backend__llds_to_x86_64__unop_instrs_4_0, 8,7,5,3,17,20,23,26,29,32)
MR_decl_label3(ll_backend__llds_to_x86_64__unop_instrs_4_0, 35,38,41)
MR_decl_label9(__Unify___ll_backend__llds_to_x86_64__binop_0_0, 7,5,13,11,19,41,17,24,1)
MR_decl_label10(__Compare___ll_backend__llds_to_x86_64__binop_0_0, 3,2,9,7,14,5,115,18,21,16)
MR_decl_label9(__Compare___ll_backend__llds_to_x86_64__binop_0_0, 29,30,33,27,39,40,41,43,178)
MR_decl_static(ll_backend__llds_to_x86_64__binop_instr_4_0)
MR_decl_static(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0)
MR_decl_static(ll_backend__llds_to_x86_64__binop_instrs_3_0)
MR_decl_static(ll_backend__llds_to_x86_64__unop_instrs_4_0)
MR_decl_static(ll_backend__llds_to_x86_64__code_addr_type_2_0)
MR_decl_static(ll_backend__llds_to_x86_64__lval_reg_locn_4_0)
MR_decl_static(ll_backend__llds_to_x86_64__transform_lval_5_0)
MR_decl_static(ll_backend__llds_to_x86_64__transform_rval_5_0)
MR_decl_static(ll_backend__llds_to_x86_64__transform_livevals_3_0)
MR_decl_static(ll_backend__llds_to_x86_64__maybe_labels_to_string_3_0)
MR_decl_static(ll_backend__llds_to_x86_64__transform_block_instr_3_0)
MR_decl_static(ll_backend__llds_to_x86_64__transform_block_instr_list_3_0)
MR_decl_static(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0)
MR_decl_static(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0)
MR_decl_static(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0)
MR_def_extern_entry(ll_backend__llds_to_x86_64__llds_to_x86_64_asm_3_0)
MR_decl_static(__Unify___ll_backend__llds_to_x86_64__binop_0_0)
MR_decl_static(__Compare___ll_backend__llds_to_x86_64__binop_0_0)
MR_def_extern_entry(f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_97_115_109_95_95_91_49_93_95_48_3_0)

static const struct mercury_type_0 mercury_common_0[65] =
{
{
MR_string_const("<<bitwise_or>>", 14)
},
{
MR_string_const("<<body>>", 8)
},
{
MR_string_const("<<compound_eq>>", 15)
},
{
MR_string_const("<<compound_lt>>", 15)
},
{
MR_string_const("<<float_divide>>", 16)
},
{
MR_string_const("<<float_eq>>", 12)
},
{
MR_string_const("<<float_from_dword>>", 20)
},
{
MR_string_const("<<float_ge>>", 12)
},
{
MR_string_const("<<float_gt>>", 12)
},
{
MR_string_const("<<float_le>>", 12)
},
{
MR_string_const("<<float_lt>>", 12)
},
{
MR_string_const("<<float_minus>>", 15)
},
{
MR_string_const("<<float_ne>>", 12)
},
{
MR_string_const("<<float_plus>>", 14)
},
{
MR_string_const("<<float_times>>", 15)
},
{
MR_string_const("<<float_word_bits>>", 19)
},
{
MR_string_const("<<int_mod>>", 11)
},
{
MR_string_const("<<logical_and>>", 15)
},
{
MR_string_const("<<logical_or>>", 14)
},
{
MR_string_const("<<str_cmp>>", 11)
},
{
MR_string_const("<<str_eq>>", 10)
},
{
MR_string_const("<<str_ge>>", 10)
},
{
MR_string_const("<<str_gt>>", 10)
},
{
MR_string_const("<<str_le>>", 10)
},
{
MR_string_const("<<str_lt>>", 10)
},
{
MR_string_const("<<str_ne>>", 10)
},
{
MR_string_const("<<array_index>>", 15)
},
{
MR_string_const("<<hash_string>>", 15)
},
{
MR_string_const("<<hash_string2>>", 16)
},
{
MR_string_const("<<hash_string3>>", 16)
},
{
MR_string_const("<<logical_not>>", 15)
},
{
MR_string_const("<<mkbody>>", 10)
},
{
MR_string_const("<<mktag>>", 9)
},
{
MR_string_const("<<strip_tag>>", 13)
},
{
MR_string_const("<<tag>>", 7)
},
{
MR_string_const("<<unmkbody>>", 12)
},
{
MR_string_const("<<unmktag>>", 11)
},
{
MR_string_const("<<field>>", 9)
},
{
MR_string_const("<<mkword>>", 10)
},
{
MR_string_const("<<discard_ticket>>", 18)
},
{
MR_string_const("<<prune_ticket>>", 16)
},
{
MR_string_const("<<arbitrary_c_code>>", 20)
},
{
MR_string_const("<<decr_sp>> ", 12)
},
{
MR_string_const("<<foreign_proc_code>>", 21)
},
{
MR_string_const("<<fork_new_child>>", 18)
},
{
MR_string_const("<<free_heap>>", 13)
},
{
MR_string_const("<<init_sync_term>>", 18)
},
{
MR_string_const("<<join_and_continue>>", 21)
},
{
MR_string_const("<<lc_create_loop_control>>", 26)
},
{
MR_string_const("<<lc_join_and_terminate>>", 25)
},
{
MR_string_const("<<lc_spawn_off>>", 16)
},
{
MR_string_const("<<lc_wait_free_slot>>", 21)
},
{
MR_string_const("<<mark_hp>>", 11)
},
{
MR_string_const("<<mark_ticket_stack>>", 21)
},
{
MR_string_const("<<mkframe>>", 11)
},
{
MR_string_const("<<prune_tickets_to>>", 20)
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
MR_string_const("<<reset_ticket>>", 16)
},
{
MR_string_const("<<restore_hp>>", 14)
},
{
MR_string_const("<<restore_maxfr>>", 17)
},
{
MR_string_const("<<save_maxfr>>", 14)
},
{
MR_string_const("<<store_ticket>>", 16)
},
{
MR_string_const("<<use_and_maybe_pop_region_frame>>", 34)
},
};

static const struct mercury_type_1 mercury_common_1[65] =
{
{
{
MR_TAG_COMMON(0,0,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,4),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,5),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,6),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,7),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,10),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,11),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,12),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,13),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,14),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,15),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,16),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,17),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,18),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,19),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,20),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,21),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,22),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,23),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,24),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,25),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,26),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,27),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,28),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,29),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,30),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,31),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,32),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,33),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,34),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,35),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,36),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,37),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,38),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,39),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,40),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,41),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,43),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,44),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,45),
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
MR_TAG_COMMON(0,0,46),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,47),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,48),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,49),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,50),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,51),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,52),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,53),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,54),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,55),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,56),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,57),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,58),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,59),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,60),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,61),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,62),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,63),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,64),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_2 mercury_common_2[10] =
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
MR_string_const("<<llconst_data_addr>>", 21)
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
MR_string_const("<<llconst_true>>", 16)
},
{
1,
MR_string_const("<<liveval>>", 11)
},
};

static const struct mercury_type_3 mercury_common_3[8] =
{
{
MR_TAG_COMMON(3,2,2)
},
{
MR_TAG_COMMON(3,2,3)
},
{
MR_TAG_COMMON(3,2,4)
},
{
MR_TAG_COMMON(3,2,5)
},
{
MR_TAG_COMMON(3,2,6)
},
{
MR_TAG_COMMON(3,2,7)
},
{
MR_TAG_COMMON(3,2,8)
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
	15,
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_to_x86_64__binop_instr_4_0);
	MR_init_label10(ll_backend__llds_to_x86_64__binop_instr_4_0,3,7,10,14,17,20,23,27,30,33)
	MR_init_label10(ll_backend__llds_to_x86_64__binop_instr_4_0,36,39,42,45,48,51,54,57,60,63)
	MR_init_label10(ll_backend__llds_to_x86_64__binop_instr_4_0,67,75,79,83,87,91,94,99,103,106)
	MR_init_label10(ll_backend__llds_to_x86_64__binop_instr_4_0,109,113,116,119,122,125,128,131,134,138)
	MR_init_label1(ll_backend__llds_to_x86_64__binop_instr_4_0,142)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'binop_instr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__binop_instr_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i7);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 49;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,14)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i14);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,39)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i17);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,40)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i20);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,3);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,12)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,30)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i27);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,31)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i30);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,5);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,38)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i33);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,6);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,36)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i36);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,7);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,34)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i39);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,8);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,35)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i42);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,9);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,33)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i45);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,10);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,28)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i48);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,11);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,32)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i51);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,12);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,27)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i54);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,13);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,29)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i57);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,14);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,37)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i60);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,15);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i63);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tfield(2, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i67);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_r3;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,25)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i75);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,23)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i79);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,24)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i83);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,22)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i87);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i91);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,16);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i94);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_tempr2, 1) = MR_r2;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i99);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 45;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i103);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,17);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,11)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i106);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,18);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,13)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i109);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,21)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i113);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,19);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,15)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i116);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,20);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,20)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i119);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,21);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,18)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i122);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,22);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,19)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i125);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,23);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,17)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i128);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,24);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,16)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i131);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,25);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i134);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 38;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i138);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 43;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,26)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instr_4_0_i142);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instr_4_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,26);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__det_last_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module1)
	MR_init_entry1(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_to_x86_64__get_last_instr_operand_2_0);
	MR_init_label10(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,2,4,6,11,12,13,14,15,16,17)
	MR_init_label10(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,18,19,20,21,22,23,25,26,27,28)
	MR_init_label10(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,29,30,31,32,33,34,35,36,37,38)
	MR_init_label10(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,39,40,41,42,43,44,45,46,47,48)
	MR_init_label3(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,49,9,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_last_instr_operand'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__det_last_2_0,
		ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i2);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i6);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i8);
	}
	MR_r2 = MR_tfield(3, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i11);
	}
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i12);
	}
	MR_r1 = MR_tfield(2, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i13);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i14);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i15);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i16);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,9)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i17);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,10)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i18);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,11)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i19);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,12)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i20);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,13)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i21);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,15)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i22);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,16)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i9);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_decr_sp_and_return(1);
	}
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,17)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i25);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,20)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i26);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,19)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i27);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,21)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i28);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,22)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i29);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,23)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i30);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,24)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i31);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,25)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i32);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,26)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i33);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,27)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i34);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,28)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i35);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,31)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i36);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,32)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i37);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,33)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i38);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,34)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i39);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,36)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i40);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,37)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i41);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,39)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i42);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,40)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i43);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,41)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i44);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,38)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i45);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,43)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i46);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,45)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i47);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,30)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i48);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,47)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i49);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,49)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0_i9);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.get_last_instr_operand\'/2", 62);
	MR_r3 = (MR_Word) MR_string_const("last_instr_dest failed", 22);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module2)
	MR_init_entry1(ll_backend__llds_to_x86_64__binop_instrs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_to_x86_64__binop_instrs_3_0);
	MR_init_label10(ll_backend__llds_to_x86_64__binop_instrs_3_0,4,5,3,8,9,10,11,7,14,15)
	MR_init_label1(ll_backend__llds_to_x86_64__binop_instrs_3_0,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'binop_instrs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__binop_instrs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instrs_3_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	MR_sv(2) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__binop_instrs_3_0_i4);
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__binop_instr_4_0,
		ll_backend__llds_to_x86_64__binop_instrs_3_0_i5);
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instrs_3_0_i7);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 0);
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__binop_instrs_3_0_i8);
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__binop_instrs_3_0_i9);
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__binop_instr_4_0,
		ll_backend__llds_to_x86_64__binop_instrs_3_0_i10);
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__binop_instrs_3_0_i11);
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__binop_instrs_3_0_i13);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__binop_instrs_3_0_i14);
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__binop_instr_4_0,
		ll_backend__llds_to_x86_64__binop_instrs_3_0_i15);
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(ll_backend__llds_to_x86_64__binop_instrs_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__llds_to_x86_64__binop_instr_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module3)
	MR_init_entry1(ll_backend__llds_to_x86_64__unop_instrs_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_to_x86_64__unop_instrs_4_0);
	MR_init_label10(ll_backend__llds_to_x86_64__unop_instrs_4_0,8,7,5,3,17,20,23,26,29,32)
	MR_init_label3(ll_backend__llds_to_x86_64__unop_instrs_4_0,35,38,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unop_instrs'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__unop_instrs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__unop_instrs_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__unop_instrs_4_0_i5);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__unop_instrs_4_0_i7);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r3, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__unop_instrs_4_0_i8);
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,8)
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
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.unop_instrs\'/4", 51);
	MR_r3 = (MR_Word) MR_string_const("bitwise_complement: instruction operand Instrs0", 47);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 30;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,8)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__unop_instrs_4_0_i17);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,27);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,9)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__unop_instrs_4_0_i20);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,28);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__unop_instrs_4_0_i23);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,29);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__unop_instrs_4_0_i26);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,30);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__unop_instrs_4_0_i29);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,31);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__unop_instrs_4_0_i32);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,32);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__unop_instrs_4_0_i35);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,33);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__unop_instrs_4_0_i38);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,34);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__unop_instrs_4_0_i41);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,35);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__unop_instrs_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,36);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0);
MR_decl_entry(fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module4)
	MR_init_entry1(ll_backend__llds_to_x86_64__code_addr_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_to_x86_64__code_addr_type_2_0);
	MR_init_label10(ll_backend__llds_to_x86_64__code_addr_type_2_0,3,4,5,6,7,8,9,13,12,15)
	MR_init_label1(ll_backend__llds_to_x86_64__code_addr_type_2_0,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'code_addr_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__code_addr_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__code_addr_type_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("<<code_succip>>", 15);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__code_addr_type_2_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("<<do_fail>>", 11);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__code_addr_type_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("<<do_not_reached>>", 18);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__code_addr_type_2_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("<<do_redo>>", 11);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__code_addr_type_2_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("<<do_trace_redo_fail_deep>>", 27);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__code_addr_type_2_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("<<do_trace_redo_fail_shallow>>", 30);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__code_addr_type_2_0_i9);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,
		ll_backend__llds_to_x86_64__code_addr_type_2_0_i13);
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__code_addr_type_2_0_i12);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0,
		ll_backend__llds_to_x86_64__code_addr_type_2_0_i13);
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__code_addr_type_2_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("<<do_call_class_method>>", 24);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__code_addr_type_2_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("<<do_call_closure>>", 19);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__code_addr_type_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<<do_succeed>>", 14);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module5)
	MR_init_entry1(ll_backend__llds_to_x86_64__lval_reg_locn_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_to_x86_64__lval_reg_locn_4_0);
	MR_init_label6(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,2,4,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lval_reg_locn'/4 mode 0 */
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
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__llds_to_x86_64__lval_reg_locn_4_0_i7);
MR_def_label(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__lval_reg_locn_4_0_i8);
MR_def_label(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fake_reg(", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__lval_reg_locn_4_0_i9);
MR_def_label(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,
		ll_backend__llds_to_x86_64__lval_reg_locn_4_0_i10);
MR_def_label(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,10)
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
MR_decl_entry(ll_backend__x86_64_out__operand_to_string_2_0);
MR_decl_entry(require__sorry_3_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module6)
	MR_init_entry1(ll_backend__llds_to_x86_64__transform_lval_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_to_x86_64__transform_lval_5_0);
	MR_init_label10(ll_backend__llds_to_x86_64__transform_lval_5_0,311,4,3,7,8,12,10,9,19,18)
	MR_init_label10(ll_backend__llds_to_x86_64__transform_lval_5_0,16,15,21,22,24,35,36,37,39,49)
	MR_init_label10(ll_backend__llds_to_x86_64__transform_lval_5_0,50,6,53,54,55,57,66,67,68,69)
	MR_init_label10(ll_backend__llds_to_x86_64__transform_lval_5_0,70,52,77,81,80,83,87,86,89,91)
	MR_init_label10(ll_backend__llds_to_x86_64__transform_lval_5_0,93,95,100,99,97,104,103,107,108,109)
	MR_init_label10(ll_backend__llds_to_x86_64__transform_lval_5_0,111,120,121,122,123,124,106,131,134,135)
	MR_init_label4(ll_backend__llds_to_x86_64__transform_lval_5_0,133,136,138,141)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_lval'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__transform_lval_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,311)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i4);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i135);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,9)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i6);
	}
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(1) = MR_tfield(3, MR_r2, 3);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i7);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i8);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i10);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i12);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i9);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.transform_lval\'/5", 54);
	MR_sv(3) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("field: Rval1", 12);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i9);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i16);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_sv(3), 0);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i19);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i15);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.transform_lval\'/5", 54);
	MR_r3 = (MR_Word) MR_string_const("field: Rval2", 12);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i15);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i21);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i22);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i24);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,24)
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
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,37);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i35);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i36);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i37);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i39);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i50);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(1, MR_sv(2), 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 45;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i49);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i50);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i52);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i53);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i54);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i55);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i57);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 0);
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
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i66);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i67);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(") + ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i68);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i69);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044virtual_reg(", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i70);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,70)
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
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,11)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i77);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_r2, 1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i80);
	}
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i81);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i135);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,12)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i83);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i86);
	}
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i87);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i135);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,10)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i89);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ll_backend__llds_to_x86_64__transform_rval_5_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i91);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ll_backend__llds_to_x86_64__transform_rval_5_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i93);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ll_backend__llds_to_x86_64__transform_rval_5_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i95);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ll_backend__llds_to_x86_64__transform_rval_5_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i97);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i99);
	}
	MR_sv(1) = MR_r1;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i100);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i135);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.transform_lval\'/5", 54);
	MR_r3 = (MR_Word) MR_string_const("llds reg_f", 10);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,4)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i103);
	}
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 4);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i104);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i135);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i106);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i107);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i108);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 4);
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i109);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i111);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 0);
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
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i120);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i121);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(") + ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i122);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i123);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044virtual_reg(", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i124);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,124)
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
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i131);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ll_backend__llds_to_x86_64__transform_rval_5_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i133);
	}
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i134);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_lval_5_0_i135);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i136);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ll_backend__llds_to_x86_64__transform_rval_5_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i138);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(2, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(2, MR_r2, 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i311);
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_lval_5_0_i141);
	}
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.transform_lval\'/5", 54);
	MR_r3 = (MR_Word) MR_string_const("double_stackvar", 15);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_lval_5_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.transform_lval\'/5", 54);
	MR_r3 = (MR_Word) MR_string_const("parallelism is not supported", 28);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__sorry_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module7)
	MR_init_entry1(ll_backend__llds_to_x86_64__transform_rval_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_to_x86_64__transform_rval_5_0);
	MR_init_label10(ll_backend__llds_to_x86_64__transform_rval_5_0,3,6,11,14,10,8,7,18,19,21)
	MR_init_label10(ll_backend__llds_to_x86_64__transform_rval_5_0,33,5,36,40,41,49,47,45,43,61)
	MR_init_label10(ll_backend__llds_to_x86_64__transform_rval_5_0,59,39,71,70,74,77,80,83,87,90)
	MR_init_label10(ll_backend__llds_to_x86_64__transform_rval_5_0,96,383,102,105,106,111,116,117,115,113)
	MR_init_label10(ll_backend__llds_to_x86_64__transform_rval_5_0,110,108,124,123,121,107,126,127,129,138)
	MR_init_label10(ll_backend__llds_to_x86_64__transform_rval_5_0,137,147,148,104,151,100,152,156,154,160)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_rval'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__transform_rval_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i3);
	}
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_tailcall_ent(ll_backend__llds_to_x86_64__transform_lval_5_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i5);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_r2 = MR_tfield(2, MR_r2, 1);
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i6);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i8);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i10);
	}
	MR_sv(3) = MR_tfield(1, MR_r3, 0);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i11);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,38);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i14);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i7);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.transform_rval\'/5", 54);
	MR_r3 = (MR_Word) MR_string_const("mkword Rval", 11);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i7);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,1,38);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i18);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i19);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i21);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr6 = MR_sv(4);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(2, MR_tempr3, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i33);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i160);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i36);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i39);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_sv(1) = MR_tfield(3, MR_r2, 3);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i40);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i41);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i43);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i45);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i47);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i49);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_tfield(1, MR_sv(2), 0);
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r3, 0);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__binop_instrs_3_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i160);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.transform_rval\'/5", 54);
	MR_r3 = (MR_Word) MR_string_const("binop: Rval2", 12);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(1, MR_sv(2), 0);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(1, MR_r2, 0);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__binop_instrs_3_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i160);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.transform_rval\'/5", 54);
	MR_r3 = (MR_Word) MR_string_const("binop: Rval1", 12);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i59);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i61);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_sv(1), 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_r3, 0);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__binop_instrs_3_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i160);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_sv(1), 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_r2, 0);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__binop_instrs_3_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i160);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i383);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i70);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__code_addr_type_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i71);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i74);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i77);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i80);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i83);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(1, MR_r3, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i87);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i90);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r3, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 56;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tempr2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i96);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,6);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.transform_rval\'/5", 54);
	MR_r3 = (MR_Word) MR_string_const("x86_64 backend and foreign tags.", 32);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,383)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i100);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i102);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i151);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i104);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 2);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i105);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i106);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i108);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i110);
	}
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i111);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i113);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i115);
	}
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i116);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i117);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i107);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.transform_rval\'/5", 54);
	MR_r3 = (MR_Word) MR_string_const("mem_addr(heap_ref): Rval2", 25);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i107);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i107);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.transform_rval\'/5", 54);
	MR_r3 = (MR_Word) MR_string_const("mem_addr(heap_ref): Rval1", 25);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i107);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i121);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i123);
	}
	MR_sv(3) = MR_tfield(1, MR_sv(3), 0);
	MR_sv(4) = MR_tfield(1, MR_r3, 0);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i124);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i107);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.transform_rval\'/5", 54);
	MR_r3 = (MR_Word) MR_string_const("mem_addr(heap_ref): Rval2", 25);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i107);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_sv(3), 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i126);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i127);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i129);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr9 = MR_sv(5);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 45;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr4, 0) = MR_tempr3;
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i138);
	}
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_tfield(1, MR_sv(1), 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr5, 0) = MR_tempr6;
	MR_tfield(2, MR_tempr5, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr4;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i147);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.transform_rval\'/5", 54);
	MR_r3 = (MR_Word) MR_string_const("unknown tag", 11);
	MR_np_call_localret_ent(require__sorry_3_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i137);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i147);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i148);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i160);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i151);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i152);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i154);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_rval_5_0_i156);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__unop_instrs_4_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i160);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.transform_rval\'/5", 54);
	MR_r3 = (MR_Word) MR_string_const("unop: Rval", 10);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__unop_instrs_4_0,
		ll_backend__llds_to_x86_64__transform_rval_5_0_i160);
MR_def_label(ll_backend__llds_to_x86_64__transform_rval_5_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module8)
	MR_init_entry1(ll_backend__llds_to_x86_64__transform_livevals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_to_x86_64__transform_livevals_3_0);
	MR_init_label7(ll_backend__llds_to_x86_64__transform_livevals_3_0,41,4,9,8,6,5,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_livevals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__transform_livevals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_livevals_3_0_i41);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__transform_livevals_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_lval_5_0,
		ll_backend__llds_to_x86_64__transform_livevals_3_0_i4);
MR_def_label(ll_backend__llds_to_x86_64__transform_livevals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_livevals_3_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_livevals_3_0_i8);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__transform_livevals_3_0_i9);
MR_def_label(ll_backend__llds_to_x86_64__transform_livevals_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,2,9);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(2);
	}
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_livevals_3_0,
		ll_backend__llds_to_x86_64__transform_livevals_3_0_i17);
MR_def_label(ll_backend__llds_to_x86_64__transform_livevals_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.transform_livevals\'/3", 58);
	MR_r3 = (MR_Word) MR_string_const("no results", 10);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__llds_to_x86_64__transform_livevals_3_0_i5);
MR_def_label(ll_backend__llds_to_x86_64__transform_livevals_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,2,9);
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	}
MR_def_label(ll_backend__llds_to_x86_64__transform_livevals_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_livevals_3_0,
		ll_backend__llds_to_x86_64__transform_livevals_3_0_i17);
MR_def_label(ll_backend__llds_to_x86_64__transform_livevals_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module9)
	MR_init_entry1(ll_backend__llds_to_x86_64__maybe_labels_to_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_to_x86_64__maybe_labels_to_string_3_0);
	MR_init_label5(ll_backend__llds_to_x86_64__maybe_labels_to_string_3_0,16,3,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_labels_to_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__maybe_labels_to_string_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_to_x86_64__maybe_labels_to_string_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__maybe_labels_to_string_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__llds_to_x86_64__maybe_labels_to_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__maybe_labels_to_string_3_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = (MR_Word) MR_string_const("<<do_not_reached>>", 18);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__maybe_labels_to_string_3_0_i7);
MR_def_label(ll_backend__llds_to_x86_64__maybe_labels_to_string_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0,
		ll_backend__llds_to_x86_64__maybe_labels_to_string_3_0_i6);
MR_def_label(ll_backend__llds_to_x86_64__maybe_labels_to_string_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__maybe_labels_to_string_3_0_i7);
MR_def_label(ll_backend__llds_to_x86_64__maybe_labels_to_string_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__maybe_labels_to_string_3_0_i16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__condense_2_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module10)
	MR_init_entry1(ll_backend__llds_to_x86_64__transform_block_instr_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_to_x86_64__transform_block_instr_3_0);
	MR_init_label1(ll_backend__llds_to_x86_64__transform_block_instr_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_block_instr'/3 mode 0 */
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(list__condense_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__x86_64_regs__reg_map_reset_scratch_reg_info_2_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module11)
	MR_init_entry1(ll_backend__llds_to_x86_64__transform_block_instr_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_to_x86_64__transform_block_instr_list_3_0);
	MR_init_label4(ll_backend__llds_to_x86_64__transform_block_instr_list_3_0,18,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_block_instr_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__transform_block_instr_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_block_instr_list_3_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__transform_block_instr_list_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
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
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module12)
	MR_init_entry1(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_to_x86_64__instr_to_x86_64_4_0);
	MR_init_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,3,6,9,13,12,15,19,20,25,30)
	MR_init_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,34,27,22,46,43,18,56,55,58,63)
	MR_init_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,62,60,59,65,66,67,81,82,57,87)
	MR_init_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,88,84,96,97,95,100,103,106,110,109)
	MR_init_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,116,117,121,119,118,124,115,136,135,139)
	MR_init_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,138,141,142,147,146,144,143,153,152,150)
	MR_init_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,149,156,159,160,162,155,173,172,174,175)
	MR_init_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,188,189,134,192,191,198,201,205,206,211)
	MR_init_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,216,220,215,213,210,208,232,236,231,229)
	MR_init_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,204,242,241,245,248,251,254,258,259,260)
	MR_init_label10(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,261,266,265,263,257,284,287,290,293,296)
	MR_init_label7(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,299,302,305,308,311,314,317)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instr_to_x86_64'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i3);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,39);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i6);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,40);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i12);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i13);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_livevals_3_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i56);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i15);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,41);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i18);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_lval_5_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i19);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i20);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i22);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i210);
	}
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i25);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i27);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i215);
	}
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tfield(1, MR_sv(4), 0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i30);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,30)
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
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i34);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i236);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_sv(3), 0);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i236);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i43);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i231);
	}
	MR_sv(3) = MR_tfield(1, MR_sv(3), 0);
	MR_sv(4) = MR_tfield(1, MR_r3, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i46);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,46)
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
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i236);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r2, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(1, MR_sv(3), 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i55);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_block_instr_3_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i56);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i57);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i58);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i60);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i62);
	}
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_r3, 0);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i63);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__maybe_labels_to_string_3_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i65);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", 55);
	MR_r3 = (MR_Word) MR_string_const("computed_goto: Rval", 19);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i59);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__maybe_labels_to_string_3_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i65);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i66);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i67);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
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
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr5;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i81);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i82);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i236);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,25)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i84);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(3, MR_r2, 1);
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	}
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i87);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i88);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 45;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(0,0,42);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,26)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i95);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i96);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<<decr_sp_and_return>> ", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i97);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,27)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i100);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,42);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,29)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i103);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,43);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,15)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i106);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,44);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i109);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__code_addr_type_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i110);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,9)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i115);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__code_addr_type_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i116);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i117);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i119);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i121);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i118);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", 55);
	MR_r3 = (MR_Word) MR_string_const("if_val: Rval", 12);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i118);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i124);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr2, 1) = MR_r2;
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 9;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,45);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,12)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i134);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r4 = MR_tfield(3, MR_r2, 7);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i136);
	}
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_sv(4) = MR_tfield(3, MR_r2, 3);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r2, 8);
	MR_r4 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_r4, 4);
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i135);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", 55);
	MR_r3 = (MR_Word) MR_string_const("region", 6);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i135);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i139);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i141);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", 55);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("reuse", 5);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i138);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i141);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_lval_5_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i142);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i144);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i146);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i147);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i143);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", 55);
	MR_sv(5) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("incr_hp: Rval", 13);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i143);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i150);
	}
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i152);
	}
	MR_r1 = MR_tfield(1, MR_sv(5), 0);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i153);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i149);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", 55);
	MR_r3 = (MR_Word) MR_string_const("incr_hp: Lval", 13);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i149);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(5) = MR_tfield(1, MR_sv(2), 0);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i156);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i155);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tfield(1, MR_sv(4), 0);
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i159);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i160);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__x86_64_out__operand_to_string_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i162);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tempr3 = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i173);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i172);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i174);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i175);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(6);
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
	MR_tfield(3, MR_tempr6, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr5;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i188);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i189);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i236);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,24)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i191);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<<incr_sp>> ", 12);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i192);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 14;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,28)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i198);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,46);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,30)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i201);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,47);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i204);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_lval_5_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i205);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_rval_5_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i206);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i208);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i210);
	}
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tfield(1, MR_sv(4), 0);
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i211);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i213);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i215);
	}
	MR_sv(3) = MR_tfield(1, MR_sv(1), 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i216);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
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
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i220);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i236);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", 55);
	MR_r3 = (MR_Word) MR_string_const("assign: unexpected: Rval", 24);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_sv(3), 0);
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
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i236);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", 55);
	MR_r3 = (MR_Word) MR_string_const("assign: unexpected: Lval", 24);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i229);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i231);
	}
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_r3, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i232);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,232)
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
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i236);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", 55);
	MR_r3 = (MR_Word) MR_string_const("assign: unexpected: Rval", 24);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r2, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(1, MR_sv(3), 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i241);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i242);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,31)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i245);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,48);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,34)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i248);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,49);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,33)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i251);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,50);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,32)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i254);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,51);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i257);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__code_addr_type_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i258);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__code_addr_type_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i259);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__lval_reg_locn_4_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i260);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i261);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i263);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i265);
	}
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__get_last_instr_operand_2_0,
		ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i266);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,266)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,265)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.llds_to_x86_64", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", 55);
	MR_r3 = (MR_Word) MR_string_const("llcall: lval_reg_locn failed", 28);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,263)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_tfield(1, MR_sv(1), 0);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,13)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i284);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,52);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,22)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i287);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,53);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,287)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i290);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,54);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,23)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i293);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,55);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,293)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,16)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i296);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,56);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,296)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,17)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i299);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,57);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,299)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,18)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i302);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,58);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,21)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i305);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,59);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,305)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,14)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i308);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,60);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,308)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,11)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i311);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,61);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,311)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,10)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i314);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,62);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,314)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,20)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0_i317);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,63);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__instr_to_x86_64_4_0,317)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,64);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__x86_64_instrs__init_x86_64_instruction_0_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module13)
	MR_init_entry1(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_to_x86_64__transform_c_instr_list_3_0);
	MR_init_label5(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0,20,4,5,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_c_instr_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0,
		ll_backend__llds_to_x86_64__transform_c_instr_list_3_0_i8);
MR_def_label(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__x86_64_instrs__init_x86_64_proc_1_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module14)
	MR_init_entry1(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_to_x86_64__transform_c_proc_list_3_0);
	MR_init_label6(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0,26,4,5,6,11,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_c_proc_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ll_backend__x86_64_instrs__init_x86_64_proc_1_0,
		ll_backend__llds_to_x86_64__transform_c_proc_list_3_0_i4);
MR_def_label(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__x86_64_instrs__init_x86_64_instruction_0_0,
		ll_backend__llds_to_x86_64__transform_c_proc_list_3_0_i5);
MR_def_label(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(3), 5);
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
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_sv(4), 1);
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64__transform_c_instr_list_3_0,
		ll_backend__llds_to_x86_64__transform_c_proc_list_3_0_i11);
MR_def_label(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 9);
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr2, 7) = MR_tfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr2, 8) = MR_tfield(0, MR_tempr3, 8);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_localcall_lab(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0,
		ll_backend__llds_to_x86_64__transform_c_proc_list_3_0_i14);
MR_def_label(ll_backend__llds_to_x86_64__transform_c_proc_list_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module15)
	MR_init_entry1(ll_backend__llds_to_x86_64__llds_to_x86_64_asm_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_to_x86_64__llds_to_x86_64_asm_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'llds_to_x86_64_asm'/3 mode 0 */
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

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___ll_backend__x86_64_instrs__operand_0_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module16)
	MR_init_entry1(__Unify___ll_backend__llds_to_x86_64__binop_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__llds_to_x86_64__binop_0_0);
	MR_init_label9(__Unify___ll_backend__llds_to_x86_64__binop_0_0,7,5,13,11,19,41,17,24,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__llds_to_x86_64__binop_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i41);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(2, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(2, MR_tempr4, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_r3 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds_to_x86_64__binop_0_0_i7);
MR_def_label(__Unify___ll_backend__llds_to_x86_64__binop_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__llds_to_x86_64__binop_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_tempr1, 0);
	MR_r3 = MR_tfield(3, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds_to_x86_64__binop_0_0_i13);
MR_def_label(__Unify___ll_backend__llds_to_x86_64__binop_0_0,13)
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
MR_def_label(__Unify___ll_backend__llds_to_x86_64__binop_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i17);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i1);
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
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__llds_to_x86_64__binop_0_0_i19);
MR_def_label(__Unify___ll_backend__llds_to_x86_64__binop_0_0,19)
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
MR_def_label(__Unify___ll_backend__llds_to_x86_64__binop_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds_to_x86_64__binop_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0,
		__Unify___ll_backend__llds_to_x86_64__binop_0_0_i24);
MR_def_label(__Unify___ll_backend__llds_to_x86_64__binop_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_to_x86_64__binop_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Unify___ll_backend__llds_to_x86_64__binop_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___ll_backend__x86_64_instrs__operand_0_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module17)
	MR_init_entry1(__Compare___ll_backend__llds_to_x86_64__binop_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__llds_to_x86_64__binop_0_0);
	MR_init_label10(__Compare___ll_backend__llds_to_x86_64__binop_0_0,3,2,9,7,14,5,115,18,21,16)
	MR_init_label9(__Compare___ll_backend__llds_to_x86_64__binop_0_0,29,30,33,27,39,40,41,43,178)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i2);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_r3 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds_to_x86_64__binop_0_0_i9);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i178);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i115);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i16);
	}
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i18);
	}
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i115);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_tfield(3, MR_tempr3, 0);
	MR_r3 = MR_tfield(3, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds_to_x86_64__binop_0_0_i21);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i178);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i27);
	}
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i29);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i115);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__llds_to_x86_64__binop_0_0_i33);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i178);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i40);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i41);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0,
		__Compare___ll_backend__llds_to_x86_64__binop_0_0_i43);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_to_x86_64__binop_0_0_i178);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__x86_64_instrs__operand_0_0);
MR_def_label(__Compare___ll_backend__llds_to_x86_64__binop_0_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__x86_64_regs__default_x86_64_reg_mapping_1_0);
MR_decl_entry(fn__ll_backend__x86_64_regs__reg_map_init_1_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_module18)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_97_115_109_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_97_115_109_95_95_91_49_93_95_48_3_0);
	MR_init_label2(f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_97_115_109_95_95_91_49_93_95_48_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__llds_to_x86_64_asm__[1]_0'/3 mode 0 */
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
#ifdef MR_THREADSCOPE
void mercury__ll_backend__llds_to_x86_64__init_threadscope_string_table(void);
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

#ifdef MR_THREADSCOPE

void mercury__ll_backend__llds_to_x86_64__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
