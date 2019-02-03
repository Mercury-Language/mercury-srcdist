/*
** Automatically generated from `jumpopt.m'
** by the Mercury compiler,
** version 11.07-beta-2011-07-20, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__jumpopt__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.jumpopt.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ll_backend.jumpopt.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "ll_backend.jumpopt.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "ll_backend.jumpopt.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ll_backend.jumpopt.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "ll_backend.jumpopt.c"
#line 49 "ll_backend.jumpopt.c"
#include "ll_backend.jumpopt.mh"

#line 52 "ll_backend.jumpopt.c"
#line 53 "ll_backend.jumpopt.c"
#ifndef LL_BACKEND__JUMPOPT_DECL_GUARD
#define LL_BACKEND__JUMPOPT_DECL_GUARD

#line 57 "ll_backend.jumpopt.c"
#line 58 "ll_backend.jumpopt.c"

#endif
#line 61 "ll_backend.jumpopt.c"

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
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
	MR_Word * f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
	MR_Word * f2[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__jumpopt__type_ctor_info_jump_opt_info_0,
	mercury_data_ll_backend__jumpopt__type_ctor_info_new_remain_0;
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0, 3,5,7,9,6,4,13,14)
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0, 5,10,12,7,14,16,20,23,25,4)
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0, 34,36,42,40,44,48,31,54,56,58)
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0, 61,63,65,67,68,72,76,71,79,81)
MR_decl_label6(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0, 100,57,106,108,53,2)
MR_decl_label5(ll_backend__jumpopt__adjust_livevals_3_0, 5,9,8,2,3)
MR_decl_label7(ll_backend__jumpopt__final_dest_2_6_0, 38,5,4,8,12,2,3)
MR_decl_label6(ll_backend__jumpopt__jump_opt_build_forkmap_4_0, 32,3,7,10,4,5)
MR_decl_label10(ll_backend__jumpopt__jump_opt_build_maps_14_0, 123,3,6,7,14,16,19,17,20,23)
MR_decl_label10(ll_backend__jumpopt__jump_opt_build_maps_14_0, 26,21,27,30,33,28,34,37,40,35)
MR_decl_label7(ll_backend__jumpopt__jump_opt_build_maps_14_0, 41,45,48,50,52,43,4)
MR_decl_label10(ll_backend__jumpopt__jump_opt_goto_8_0, 6,4,13,9,10,20,22,18,30,32)
MR_decl_label10(ll_backend__jumpopt__jump_opt_goto_8_0, 28,40,38,47,49,51,53,55,56,57)
MR_decl_label10(ll_backend__jumpopt__jump_opt_goto_8_0, 60,61,45,64,66,67,68,70,75,74)
MR_decl_label6(ll_backend__jumpopt__jump_opt_goto_8_0, 69,86,90,84,63,2)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_7_0, 324,3,5,8,11,9,14,7,22,25)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_7_0, 23,28,21,36,38,40,41,35,45,48)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_7_0, 46,52,44,59,61,63,64,58,68,70)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_7_0, 72,73,67,77,80,78,84,76,91,94)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_7_0, 92,97,90,105,107,109,110,104,117,120)
MR_decl_label9(ll_backend__jumpopt__jump_opt_instr_list_7_0, 118,123,129,130,114,113,4,136,327)
MR_decl_label10(ll_backend__jumpopt__jump_opt_llcall_8_0, 7,9,6,4,14,13,18,21,24,11)
MR_decl_label10(ll_backend__jumpopt__jump_opt_llcall_8_0, 12,34,39,43,30,31,50,73,45,46)
MR_decl_label10(ll_backend__jumpopt__jump_opt_llcall_8_0, 87,95,117,81,82,135,137,140,138,147)
MR_decl_label2(ll_backend__jumpopt__jump_opt_llcall_8_0, 134,2)
MR_decl_label10(ll_backend__jumpopt__needs_workaround_2_0, 5,4,9,12,8,24,22,34,3,201)
MR_decl_label1(ll_backend__jumpopt__needs_workaround_2_0, 1)
MR_decl_label10(ll_backend__jumpopt__optimize_jumps_in_proc_12_0, 2,4,6,7,8,9,10,11,12,14)
MR_decl_label10(ll_backend__jumpopt__optimize_jumps_in_proc_12_0, 16,17,18,19,13,24,22,28,30,21)
MR_decl_label4(ll_backend__jumpopt__optimize_jumps_in_proc_12_0, 32,33,35,34)
MR_decl_label10(ll_backend__jumpopt__short_foreign_proc_component_5_0, 3,4,5,39,6,9,11,8,16,15)
MR_decl_label2(ll_backend__jumpopt__short_label_3_0, 3,2)
MR_decl_label10(ll_backend__jumpopt__short_labels_lval_3_0, 3,5,6,4,8,9,10,11,13,12)
MR_decl_label10(ll_backend__jumpopt__short_labels_lval_3_0, 15,16,18,17,21,20,24,23,26,27)
MR_decl_label7(ll_backend__jumpopt__short_labels_lval_3_0, 28,30,29,32,34,33,36)
MR_decl_label10(ll_backend__jumpopt__short_labels_rval_3_0, 4,5,3,9,11,13,14,19,21,18)
MR_decl_label10(ll_backend__jumpopt__short_labels_rval_3_0, 15,27,28,52,7,31,30,54,33,35)
MR_decl_label3(ll_backend__jumpopt__short_labels_rval_3_0, 34,38,37)
MR_decl_label6(ll_backend__jumpopt__short_maybe_labels_3_0, 36,5,7,9,6,12)
MR_decl_label3(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0, 3,4,7)
MR_decl_label10(__Unify___ll_backend__jumpopt__jump_opt_info_0_0, 4,7,10,12,14,16,18,20,22,1)
MR_decl_label4(__Unify___ll_backend__jumpopt__new_remain_0_0, 14,5,7,1)
MR_decl_label10(__Compare___ll_backend__jumpopt__jump_opt_info_0_0, 3,2,5,10,15,20,25,30,35,39)
MR_decl_label2(__Compare___ll_backend__jumpopt__jump_opt_info_0_0, 43,121)
MR_decl_label6(__Compare___ll_backend__jumpopt__new_remain_0_0, 24,7,5,9,11,16)
MR_decl_static(ll_backend__jumpopt__jump_opt_build_maps_14_0)
MR_decl_static(ll_backend__jumpopt__jump_opt_build_forkmap_4_0)
MR_decl_static(fn__ll_backend__jumpopt__redirect_comment_1_0)
MR_decl_static(ll_backend__jumpopt__final_dest_2_6_0)
MR_decl_static(ll_backend__jumpopt__final_dest_5_0)
MR_decl_static(ll_backend__jumpopt__jump_opt_llcall_8_0)
MR_decl_static(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0)
MR_decl_static(ll_backend__jumpopt__adjust_livevals_3_0)
MR_decl_static(ll_backend__jumpopt__needs_workaround_2_0)
MR_decl_static(ll_backend__jumpopt__short_label_3_0)
MR_decl_static(ll_backend__jumpopt__short_maybe_labels_3_0)
MR_decl_static(ll_backend__jumpopt__short_labels_rval_3_0)
MR_decl_static(ll_backend__jumpopt__short_labels_lval_3_0)
MR_decl_static(ll_backend__jumpopt__jump_opt_instr_list_7_0)
MR_decl_static(ll_backend__jumpopt__jump_opt_goto_8_0)
MR_def_extern_entry(ll_backend__jumpopt__optimize_jumps_in_proc_12_0)
MR_decl_static(ll_backend__jumpopt__short_foreign_proc_component_5_0)
MR_decl_static(__Unify___ll_backend__jumpopt__jump_opt_info_0_0)
MR_decl_static(__Compare___ll_backend__jumpopt__jump_opt_info_0_0)
MR_decl_static(__Unify___ll_backend__jumpopt__new_remain_0_0)
MR_decl_static(__Compare___ll_backend__jumpopt__new_remain_0_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0)

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, instruction)
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
MR_TAG_COMMON(0,4,3),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_1 mercury_common_1[5] =
{
{
MR_tbmkword(0, 2)
},
{
MR_TAG_COMMON(3,2,0)
},
{
MR_TAG_COMMON(3,2,1)
},
{
MR_TAG_COMMON(3,2,2)
},
{
MR_tbmkword(0, 1)
},
};

static const struct mercury_type_2 mercury_common_2[6] =
{
{
7,
MR_TAG_COMMON(0,1,0)
},
{
3,
MR_TAG_COMMON(0,1,0)
},
{
4,
MR_TAG_COMMON(0,1,0)
},
{
0,
MR_tbmkword(0, 1)
},
{
0,
MR_tbmkword(0, 0)
},
{
6,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_3 mercury_common_3[3] =
{
{
1,
MR_tbmkword(0, 1),
MR_TAG_COMMON(0,1,1)
},
{
1,
MR_tbmkword(0, 0),
MR_TAG_COMMON(0,1,2)
},
{
1,
MR_tbmkword(0, 2),
MR_TAG_COMMON(0,1,3)
},
};

static const struct mercury_type_4 mercury_common_4[5] =
{
{
MR_TAG_COMMON(3,3,0),
MR_string_const("discard this frame", 18)
},
{
MR_TAG_COMMON(3,3,1),
MR_string_const("setup PC on return from tailcall", 32)
},
{
MR_TAG_COMMON(3,3,2),
MR_string_const("setup curfr on return from tailcall", 35)
},
{
MR_TAG_COMMON(3,2,5),
MR_string_const("shortcircuit", 12)
},
{
MR_TAG_COMMON(1,6,1),
MR_string_const("", 0)
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
2,
{
MR_tbmkword(0, 13),
MR_TAG_COMMON(0,1,0),
MR_TAG_COMMON(0,1,4)
}
},
};

static const struct mercury_type_6 mercury_common_6[2] =
{
{
MR_string_const("", 0)
},
{
MR_string_const("r1 = old r1", 11)
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
0,
1
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(8,0),
MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component),
MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
}
},
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_label_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_may_alter_rtti_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_may_alter_rtti_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__jumpopt__field_types_jump_opt_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0maybe__ti_maybe_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_may_alter_rtti_0
};

const MR_ConstString mercury_data_ll_backend__jumpopt__field_names_jump_opt_info_0_0[] = {
	"joi_instr_map",
	"joi_block_map",
	"joi_lval_map",
	"joi_proc_map",
	"joi_sdproc_map",
	"joi_fork_map",
	"joi_succ_map",
	"joi_layout_labels",
	"joi_full_jump_opt",
	"joi_may_alter_rtti"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__jumpopt__du_functor_desc_jump_opt_info_0_0 = {
	"jump_opt_info",
	10,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__jumpopt__field_types_jump_opt_info_0_0,
	mercury_data_ll_backend__jumpopt__field_names_jump_opt_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__jumpopt__du_stag_ordered_jump_opt_info_0_0[] = {
	&mercury_data_ll_backend__jumpopt__du_functor_desc_jump_opt_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__jumpopt__du_ptag_ordered_jump_opt_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__jumpopt__du_stag_ordered_jump_opt_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__jumpopt__du_name_ordered_jump_opt_info_0[] = {
	&mercury_data_ll_backend__jumpopt__du_functor_desc_jump_opt_info_0_0
};

const MR_Integer mercury_data_ll_backend__jumpopt__functor_number_map_jump_opt_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__jumpopt__type_ctor_info_jump_opt_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__jumpopt__jump_opt_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__jumpopt__jump_opt_info_0_0)),
	"ll_backend.jumpopt",
	"jump_opt_info",
	{ (void *)mercury_data_ll_backend__jumpopt__du_name_ordered_jump_opt_info_0 },
	{ (void *)mercury_data_ll_backend__jumpopt__du_ptag_ordered_jump_opt_info_0 },
	1,
	4,
	mercury_data_ll_backend__jumpopt__functor_number_map_jump_opt_info_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__jumpopt__field_types_new_remain_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
};

const MR_ConstString mercury_data_ll_backend__jumpopt__field_names_new_remain_0_0[] = {
	"new_instructions",
	"remaining_instructions"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__jumpopt__du_functor_desc_new_remain_0_0 = {
	"specified",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__jumpopt__field_types_new_remain_0_0,
	mercury_data_ll_backend__jumpopt__field_names_new_remain_0_0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__jumpopt__du_functor_desc_new_remain_0_1 = {
	"usual_case",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__jumpopt__du_stag_ordered_new_remain_0_0[] = {
	&mercury_data_ll_backend__jumpopt__du_functor_desc_new_remain_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__jumpopt__du_stag_ordered_new_remain_0_1[] = {
	&mercury_data_ll_backend__jumpopt__du_functor_desc_new_remain_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__jumpopt__du_ptag_ordered_new_remain_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__jumpopt__du_stag_ordered_new_remain_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__jumpopt__du_stag_ordered_new_remain_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__jumpopt__du_name_ordered_new_remain_0[] = {
	&mercury_data_ll_backend__jumpopt__du_functor_desc_new_remain_0_0,
	&mercury_data_ll_backend__jumpopt__du_functor_desc_new_remain_0_1
};

const MR_Integer mercury_data_ll_backend__jumpopt__functor_number_map_new_remain_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__jumpopt__type_ctor_info_new_remain_0 = {
	0,
	14,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__jumpopt__new_remain_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__jumpopt__new_remain_0_0)),
	"ll_backend.jumpopt",
	"new_remain",
	{ (void *)mercury_data_ll_backend__jumpopt__du_name_ordered_new_remain_0 },
	{ (void *)mercury_data_ll_backend__jumpopt__du_ptag_ordered_new_remain_0 },
	2,
	4,
	mercury_data_ll_backend__jumpopt__functor_number_map_new_remain_0
};


static const MR_UserClosureId
mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0_1 = {
{
MR_PREDICATE,
"ll_backend.jumpopt",
"ll_backend.jumpopt",
"short_foreign_proc_component",
5,
0
},
"ll_backend.jumpopt",
"jumpopt.m",
887,
"14"
};


MR_decl_entry(ll_backend__opt_util__skip_comments_2_0);
MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(ll_backend__opt_util__skip_comments_livevals_2_0);
MR_decl_entry(ll_backend__opt_util__is_proceed_next_2_0);
MR_decl_entry(ll_backend__opt_util__is_sdproceed_next_2_0);
MR_decl_entry(ll_backend__opt_util__is_succeed_next_2_0);
MR_decl_entry(ll_backend__opt_util__find_no_fallthrough_2_0);
MR_decl_entry(string__suffix_2_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module0)
	MR_init_entry1(ll_backend__jumpopt__jump_opt_build_maps_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__jump_opt_build_maps_14_0);
	MR_init_label10(ll_backend__jumpopt__jump_opt_build_maps_14_0,123,3,6,7,14,16,19,17,20,23)
	MR_init_label10(ll_backend__jumpopt__jump_opt_build_maps_14_0,26,21,27,30,33,28,34,37,40,35)
	MR_init_label7(ll_backend__jumpopt__jump_opt_build_maps_14_0,41,45,48,50,52,43,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'jump_opt_build_maps'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__jump_opt_build_maps_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_decr_sp_and_return(12);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_r9 = MR_tempr1;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,5)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(10) = MR_tfield(3, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i6);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i7);
	}
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_tfield(1, MR_r1, 0);
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(10);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i14);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(10);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i14);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_livevals_2_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i16);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i19);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i20);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(ll_backend__opt_util__is_proceed_next_2_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i23);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i26);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i27);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(ll_backend__opt_util__is_sdproceed_next_2_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i30);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i28);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i33);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i34);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(ll_backend__opt_util__is_succeed_next_2_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i37);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i35);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i40);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i41);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(10),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i45);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i43);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__find_no_fallthrough_2_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i50);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("nofulljump", 10);
	MR_np_call_localret_ent(string__suffix_2_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i48);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i43);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__opt_util__find_no_fallthrough_2_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i50);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i52);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r5 = MR_sv(11);
	MR_r3 = MR_sv(2);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i123);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(8);
	MR_r5 = MR_sv(11);
	MR_r3 = MR_sv(2);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i123);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r9;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i123);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__opt_util__is_forkproceed_next_3_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module1)
	MR_init_entry1(ll_backend__jumpopt__jump_opt_build_forkmap_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__jump_opt_build_forkmap_4_0);
	MR_init_label6(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,32,3,7,10,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'jump_opt_build_forkmap'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__jump_opt_build_forkmap_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_forkmap_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,5)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_forkmap_4_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(3, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__is_forkproceed_next_3_0,
		ll_backend__jumpopt__jump_opt_build_forkmap_4_0_i7);
MR_def_label(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_forkmap_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_forkmap_4_0_i10);
MR_def_label(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_forkmap_4_0_i32);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
MR_def_label(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_forkmap_4_0_i32);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module2)
	MR_init_entry1(fn__ll_backend__jumpopt__redirect_comment_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__jumpopt__redirect_comment_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'redirect_comment'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__jumpopt__redirect_comment_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" (redirected return)", 20);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module3)
	MR_init_entry1(ll_backend__jumpopt__final_dest_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__final_dest_2_6_0);
	MR_init_label7(ll_backend__jumpopt__final_dest_2_6_0,38,5,4,8,12,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'final_dest_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__final_dest_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__jumpopt__final_dest_2_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	MR_r5 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i5);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	MR_r6 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i3);
	}
	MR_sv(3) = MR_r3;
	MR_r3 = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_tempr3;
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i4);
	}
MR_def_label(ll_backend__jumpopt__final_dest_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,5)) {
		MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i3);
	}
	MR_sv(3) = MR_r3;
	MR_r3 = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r4 = MR_tfield(3, MR_r5, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
MR_def_label(ll_backend__jumpopt__final_dest_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__final_dest_2_6_0_i8);
MR_def_label(ll_backend__jumpopt__final_dest_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__jumpopt__final_dest_2_6_0_i12);
MR_def_label(ll_backend__jumpopt__final_dest_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i2);
	}
	MR_r2 = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i38);
	}
MR_def_label(ll_backend__jumpopt__final_dest_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
MR_def_label(ll_backend__jumpopt__final_dest_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module4)
	MR_init_entry1(ll_backend__jumpopt__final_dest_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__final_dest_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'final_dest'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__final_dest_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(ll_backend__jumpopt__final_dest_2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_0);
MR_decl_entry(ll_backend__opt_util__filter_out_livevals_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(counter__allocate_3_0);
MR_decl_entry(__Unify___ll_backend__llds__label_0_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module5)
	MR_init_entry1(ll_backend__jumpopt__jump_opt_llcall_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__jump_opt_llcall_8_0);
	MR_init_label10(ll_backend__jumpopt__jump_opt_llcall_8_0,7,9,6,4,14,13,18,21,24,11)
	MR_init_label10(ll_backend__jumpopt__jump_opt_llcall_8_0,12,34,39,43,30,31,50,73,45,46)
	MR_init_label10(ll_backend__jumpopt__jump_opt_llcall_8_0,87,95,117,81,82,135,137,140,138,147)
	MR_init_label2(ll_backend__jumpopt__jump_opt_llcall_8_0,134,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'jump_opt_llcall'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__jump_opt_llcall_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 2);
	MR_r7 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i2);
	}
	MR_sv(11) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(10) = MR_tfield(3, MR_r1, 6);
	MR_sv(9) = MR_tfield(3, MR_r1, 5);
	MR_sv(8) = MR_tfield(3, MR_r1, 4);
	MR_sv(7) = MR_tfield(3, MR_r1, 3);
	MR_sv(6) = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_r5;
	MR_r7 = MR_tfield(0, MR_tempr2, 7);
	MR_r8 = MR_tfield(0, MR_tempr2, 9);
	if (MR_INT_NE(MR_r8,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_r6;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i6);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_r7;
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__jumpopt__jump_opt_llcall_8_0_i9);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i4);
	}
	MR_r1 = MR_sv(14);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(15);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(14);
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i14);
	}
	MR_r4 = MR_sv(11);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i13);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r4 = MR_sv(11);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_sv(14) = MR_r6;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r4;
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_llcall_8_0_i18);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(4),2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i11);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_livevals_2_0,
		ll_backend__jumpopt__jump_opt_llcall_8_0_i21);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("", 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__jumpopt__redirect_comment_1_0,
		ll_backend__jumpopt__jump_opt_llcall_8_0_i24);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_llcall_8_0_i43);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(14);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i31);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(14) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tfield(0, MR_tempr1, 5);
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_llcall_8_0_i34);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i30);
	}
	if (MR_PTAG_TESTR(MR_sv(4),2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i30);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(4) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(6);
	MR_sv(1) = MR_r2;
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__ll_backend__jumpopt__redirect_comment_1_0,
		ll_backend__jumpopt__jump_opt_llcall_8_0_i39);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_llcall_8_0_i43);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_sv(14);
	MR_decr_sp_and_return(15);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(14);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(10),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i46);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(10), 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i46);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tempr2;
	MR_sv(14) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tfield(0, MR_tempr2, 6);
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_llcall_8_0_i50);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i45);
	}
	if (MR_PTAG_TESTR(MR_sv(4),2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i45);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i45);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i45);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i45);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i45);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i45);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(5) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r2, 1) = MR_sv(6);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__jumpopt__redirect_comment_1_0,
		ll_backend__jumpopt__jump_opt_llcall_8_0_i73);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_sv(14);
	MR_decr_sp_and_return(15);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(14);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(10),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i82);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_sv(10), 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i82);
	}
	if (MR_LTAGS_TEST(MR_r6,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i82);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tempr2;
	MR_tempr3 = MR_r6;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(14) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tfield(0, MR_tempr2, 6);
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_llcall_8_0_i87);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i81);
	}
	if (MR_PTAG_TESTR(MR_sv(4),2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i81);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i81);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i81);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i81);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i81);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i81);
	}
	MR_r1 = MR_sv(13);
	}
	MR_np_call_localret_ent(counter__allocate_3_0,
		ll_backend__jumpopt__jump_opt_llcall_8_0_i95);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(3,5,0);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("branch around if cannot tail call", 33);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_sv(10) = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_sv(11) = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr6, 1) = MR_sv(6);
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_tempr4;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ll_backend__jumpopt__redirect_comment_1_0,
		ll_backend__jumpopt__jump_opt_llcall_8_0_i117);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("non tail call", 13);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(10);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(14);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_r5, 0);
	MR_sv(14) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_llcall_8_0_i135);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i134);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_5_0,
		ll_backend__jumpopt__jump_opt_llcall_8_0_i137);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__jump_opt_llcall_8_0_i140);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_llcall_8_0_i138);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_sv(14);
	MR_decr_sp_and_return(15);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(10);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ll_backend__jumpopt__redirect_comment_1_0,
		ll_backend__jumpopt__jump_opt_llcall_8_0_i147);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_sv(14);
	MR_decr_sp_and_return(15);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(14);
	MR_decr_sp_and_return(15);
MR_def_label(ll_backend__jumpopt__jump_opt_llcall_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module6)
	MR_init_entry1(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__jumpopt__block_may_be_duplicated_1_0);
	MR_init_label3(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0,3,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'block_may_be_duplicated'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_r3 = MR_tfield(1, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_r2,3,27)) {
		MR_GOTO_LAB(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 6);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,27)) {
		MR_GOTO_LAB(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 10);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_localtailcall(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module7)
	MR_init_entry1(ll_backend__jumpopt__adjust_livevals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__adjust_livevals_3_0);
	MR_init_label5(ll_backend__jumpopt__adjust_livevals_3_0,5,9,8,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'adjust_livevals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__adjust_livevals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__adjust_livevals_3_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(2, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__jumpopt__adjust_livevals_3_0_i5);
MR_def_label(ll_backend__jumpopt__adjust_livevals_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__adjust_livevals_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__adjust_livevals_3_0_i2);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		ll_backend__jumpopt__adjust_livevals_3_0_i9);
MR_def_label(ll_backend__jumpopt__adjust_livevals_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__adjust_livevals_3_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__jumpopt__adjust_livevals_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.jumpopt", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.jumpopt.adjust_livevals\'/3", 48);
	MR_r3 = (MR_Word) MR_string_const("BetweenLivevals and PrevLivevals differ", 39);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__jumpopt__adjust_livevals_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
MR_def_label(ll_backend__jumpopt__adjust_livevals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__lval_0_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module8)
	MR_init_entry1(ll_backend__jumpopt__needs_workaround_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__needs_workaround_2_0);
	MR_init_label10(ll_backend__jumpopt__needs_workaround_2_0,5,4,9,12,8,24,22,34,3,201)
	MR_init_label1(ll_backend__jumpopt__needs_workaround_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'needs_workaround'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__needs_workaround_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,12)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i5);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i4);
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,13)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 3);
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__jumpopt__needs_workaround_2_0_i9);
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr3, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr3, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,4)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = ((MR_Integer) MR_tempr2 == (MR_Integer) 0);
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = ((MR_Integer) MR_tempr2 == (MR_Integer) 0);
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i22);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__jumpopt__needs_workaround_2_0_i24);
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr3, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr3, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,4)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = ((MR_Integer) MR_tempr2 == (MR_Integer) 0);
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__jumpopt__needs_workaround_2_0_i34);
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 0);
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i201);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,7)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i201);
	}
	MR_tempr1 = MR_tfield(3, MR_r2, 2);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i201);
	}
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__lval_0_0);
	}
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module9)
	MR_init_entry1(ll_backend__jumpopt__short_label_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__short_label_3_0);
	MR_init_label2(ll_backend__jumpopt__short_label_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short_label'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__short_label_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__short_label_3_0_i3);
MR_def_label(ll_backend__jumpopt__short_label_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_label_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__jumpopt__final_dest_2_6_0);
	}
MR_def_label(ll_backend__jumpopt__short_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module10)
	MR_init_entry1(ll_backend__jumpopt__short_maybe_labels_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__short_maybe_labels_3_0);
	MR_init_label6(ll_backend__jumpopt__short_maybe_labels_3_0,36,5,7,9,6,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short_maybe_labels'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__short_maybe_labels_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_maybe_labels_3_0_i36);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_maybe_labels_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_maybe_labels_3_0_i5);
	}
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(ll_backend__jumpopt__short_maybe_labels_3_0,
		ll_backend__jumpopt__short_maybe_labels_3_0_i12);
MR_def_label(ll_backend__jumpopt__short_maybe_labels_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__short_maybe_labels_3_0_i7);
MR_def_label(ll_backend__jumpopt__short_maybe_labels_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_maybe_labels_3_0_i6);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_2_6_0,
		ll_backend__jumpopt__short_maybe_labels_3_0_i9);
MR_def_label(ll_backend__jumpopt__short_maybe_labels_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__jumpopt__short_maybe_labels_3_0,
		ll_backend__jumpopt__short_maybe_labels_3_0_i12);
MR_def_label(ll_backend__jumpopt__short_maybe_labels_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_sv(2);
	MR_np_localcall_lab(ll_backend__jumpopt__short_maybe_labels_3_0,
		ll_backend__jumpopt__short_maybe_labels_3_0_i12);
MR_def_label(ll_backend__jumpopt__short_maybe_labels_3_0,12)
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


MR_BEGIN_MODULE(ll_backend__jumpopt_module11)
	MR_init_entry1(ll_backend__jumpopt__short_labels_rval_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__short_labels_rval_3_0);
	MR_init_label10(ll_backend__jumpopt__short_labels_rval_3_0,4,5,3,9,11,13,14,19,21,18)
	MR_init_label10(ll_backend__jumpopt__short_labels_rval_3_0,15,27,28,52,7,31,30,54,33,35)
	MR_init_label3(ll_backend__jumpopt__short_labels_rval_3_0,34,38,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short_labels_rval'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__short_labels_rval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 3);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_localcall_lab(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i4);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_localcall_lab(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i5);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_tfield(3, MR_r2, 2) = MR_sv(1);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i7);
	}
	MR_r5 = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,2,3);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i11);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,2,4);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i13);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i14);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,3)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r5, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i52);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i19);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i18);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_2_6_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i21);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,4)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i27);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i28);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i54);
	}
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i30);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_lval_3_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i31);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i33);
	}
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i34);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_r2 = MR_tfield(2, MR_r2, 1);
	MR_np_localcall_lab(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i35);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i37);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_localcall_lab(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i38);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.jumpopt", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.jumpopt.short_labels_rval\'/3", 50);
	MR_r3 = (MR_Word) MR_string_const("var", 3);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module12)
	MR_init_entry1(ll_backend__jumpopt__short_labels_lval_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__short_labels_lval_3_0);
	MR_init_label10(ll_backend__jumpopt__short_labels_lval_3_0,3,5,6,4,8,9,10,11,13,12)
	MR_init_label10(ll_backend__jumpopt__short_labels_lval_3_0,15,16,18,17,21,20,24,23,26,27)
	MR_init_label7(ll_backend__jumpopt__short_labels_lval_3_0,28,30,29,32,34,33,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short_labels_lval'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__short_labels_lval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_lval_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_lval_3_0_i4);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 3);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i5);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i6);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_tfield(3, MR_r2, 2) = MR_sv(1);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_lval_3_0_i8);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,10)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_lval_3_0_i9);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_lval_3_0_i10);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 3);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_lval_3_0_i11);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,9)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_lval_3_0_i12);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i13);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,5)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_lval_3_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_lval_3_0_i16);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_lval_3_0_i17);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i18);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_lval_3_0_i20);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i21);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_lval_3_0_i23);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i24);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_lval_3_0_i26);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,4)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_lval_3_0_i27);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 4);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_lval_3_0_i28);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_lval_3_0_i29);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i30);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_lval_3_0_i32);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_lval_3_0_i33);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i34);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_lval_3_0_i36);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.jumpopt", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.jumpopt.short_labels_lval\'/3", 50);
	MR_r3 = (MR_Word) MR_string_const("lvar", 4);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__rval_0_0);
MR_decl_entry(fn__list__reverse_1_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module13)
	MR_init_entry1(ll_backend__jumpopt__jump_opt_instr_list_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__jump_opt_instr_list_7_0);
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_7_0,324,3,5,8,11,9,14,7,22,25)
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_7_0,23,28,21,36,38,40,41,35,45,48)
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_7_0,46,52,44,59,61,63,64,58,68,70)
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_7_0,72,73,67,77,80,78,84,76,91,94)
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_7_0,92,97,90,105,107,109,110,104,117,120)
	MR_init_label9(ll_backend__jumpopt__jump_opt_instr_list_7_0,118,123,129,130,114,113,4,136,327)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'jump_opt_instr_list'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__jump_opt_instr_list_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,324)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(12);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r7 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_r6 = MR_tempr2;
	if (!((((((((((((((((((((((((((MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr2, 0) == (MR_Integer) 8)) || (MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 1))) || ((MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr2, 0) == (MR_Integer) 25))) || ((MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr2, 0) == (MR_Integer) 26))) || ((MR_Integer) MR_tempr2 == (MR_Integer) MR_tbmkword(0, 1))) || ((MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr2, 0) == (MR_Integer) 15))) || ((MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr2, 0) == (MR_Integer) 12))) || ((MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr2, 0) == (MR_Integer) 24))) || ((MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr2, 0) == (MR_Integer) 28))) || ((MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr2, 0) == (MR_Integer) 5))) || (MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 2))) || ((MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr2, 0) == (MR_Integer) 13))) || ((MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr2, 0) == (MR_Integer) 22))) || ((MR_Integer) MR_tempr2 == (MR_Integer) MR_tbmkword(0, 0))) || ((MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr2, 0) == (MR_Integer) 23))) || ((MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr2, 0) == (MR_Integer) 16))) || ((MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr2, 0) == (MR_Integer) 17))) || ((MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr2, 0) == (MR_Integer) 18))) || ((MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr2, 0) == (MR_Integer) 21))) || ((MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr2, 0) == (MR_Integer) 14))) || ((MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr2, 0) == (MR_Integer) 11))) || ((MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr2, 0) == (MR_Integer) 10))) || ((MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr2, 0) == (MR_Integer) 20))) || ((MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr2, 0) == (MR_Integer) 19))))) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_r5;
	MR_sv(7) = MR_tempr2;
	MR_r6 = (MR_Integer) 0;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r5 = MR_tempr3;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i7);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_tempr2 = MR_r7;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_tempr3 = MR_r6;
	MR_sv(7) = MR_tempr3;
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(10) = MR_tfield(3, MR_tempr3, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i8);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i11);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r6 = (MR_Integer) 0;
	MR_r1 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_sv(10);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const(" (some shortcircuits)", 21);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i14);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_sv(6);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i129);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,7)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i21);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_tempr2 = MR_r7;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_tempr3 = MR_r6;
	MR_sv(7) = MR_tempr3;
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(10) = MR_tfield(3, MR_tempr3, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_maybe_labels_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i22);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i25);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r6 = (MR_Integer) 0;
	MR_r1 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const(" (some shortcircuits)", 21);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i28);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_sv(6);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i129);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,27)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i35);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r7;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_tempr3 = MR_r6;
	MR_sv(7) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_sv(6);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i36);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r4 = MR_r7;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(10) = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i40);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i41);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i130);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r6 = (MR_Integer) 1;
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_r7;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i4);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,29)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i44);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_tempr2 = MR_r7;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_tempr3 = MR_r6;
	MR_sv(7) = MR_tempr3;
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(10) = MR_tfield(3, MR_tempr3, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_label_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i45);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i48);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i46);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r6 = (MR_Integer) 0;
	MR_r1 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 29;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const(" (redirect)", 11);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i52);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_sv(6);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i129);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,6)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i58);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r7;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_tempr3 = MR_r6;
	MR_sv(7) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_sv(6);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__jump_opt_goto_8_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i59);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i61);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r4 = MR_r7;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(10) = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i63);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i64);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i130);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r6 = (MR_Integer) 1;
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_r7;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i4);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,9)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i67);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r7;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_tempr3 = MR_r6;
	MR_sv(7) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_sv(6);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i68);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i70);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r4 = MR_r7;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(10) = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i72);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i73);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i130);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r6 = (MR_Integer) 1;
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_r7;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i4);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,30)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i76);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_tempr2 = MR_r7;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_tempr3 = MR_r6;
	MR_sv(7) = MR_tempr3;
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(3, MR_tempr3, 2);
	MR_sv(11) = MR_tfield(3, MR_tempr3, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_label_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i77);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i80);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i78);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r6 = (MR_Integer) 0;
	MR_r1 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 30;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const(" (redirect)", 11);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i84);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_sv(6);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i129);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i90);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_tempr2 = MR_r7;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_tempr3 = MR_r6;
	MR_sv(7) = MR_tempr3;
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(10) = MR_tfield(3, MR_tempr3, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i91);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i94);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i92);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r6 = (MR_Integer) 0;
	MR_r1 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_sv(10);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const(" (some shortcircuits)", 21);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i97);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_sv(6);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i129);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,3)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i104);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r7;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_tempr3 = MR_r6;
	MR_sv(7) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_sv(6);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__jump_opt_llcall_8_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i105);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i107);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r4 = MR_r7;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(10) = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i109);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i110);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i130);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r6 = (MR_Integer) 1;
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_r7;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i4);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,4)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i113);
	}
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr3 = MR_r6;
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i114);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i114);
	}
	MR_sv(1) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_sv(2) = MR_tempr4;
	MR_sv(4) = MR_r5;
	MR_tempr5 = MR_r7;
	MR_sv(5) = MR_tempr5;
	MR_sv(7) = MR_tempr3;
	MR_sv(8) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(9) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(10) = MR_r4;
	MR_r1 = MR_tfield(0, MR_tempr4, 0);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_label_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i117);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i120);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i118);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r6 = (MR_Integer) 0;
	MR_r1 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const(" (some shortcircuits)", 21);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i123);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_sv(6);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i129);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i130);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_r7;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i4);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r7;
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_r1 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.jumpopt", 18);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.jumpopt.jump_opt_instr_list\'/7", 52);
	MR_sv(2) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("block", 5);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_7_0_i4);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(7),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i327);
	}
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i136);
	}
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i324);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_7_0,327)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_7_0_i324);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__opt_util__is_this_label_next_3_0);
MR_decl_entry(ll_backend__opt_util__filter_out_labels_2_0);
MR_decl_entry(map__delete_3_0);
MR_decl_entry(fn__ll_backend__opt_util__can_instr_fall_through_1_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module14)
	MR_init_entry1(ll_backend__jumpopt__jump_opt_goto_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__jump_opt_goto_8_0);
	MR_init_label10(ll_backend__jumpopt__jump_opt_goto_8_0,6,4,13,9,10,20,22,18,30,32)
	MR_init_label10(ll_backend__jumpopt__jump_opt_goto_8_0,28,40,38,47,49,51,53,55,56,57)
	MR_init_label10(ll_backend__jumpopt__jump_opt_goto_8_0,60,61,45,64,66,67,68,70,75,74)
	MR_init_label6(ll_backend__jumpopt__jump_opt_goto_8_0,69,86,90,84,63,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'jump_opt_goto'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__jump_opt_goto_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_goto_8_0_i2);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_tempr2;
	MR_sv(10) = MR_r6;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__is_this_label_next_3_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i6);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_goto_8_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_sv(10);
	MR_decr_sp_and_return(12);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r6 = MR_sv(10);
	if (MR_RTAGS_TESTR(MR_tempr2,3,9)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_goto_8_0_i10);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 2);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_goto_8_0_i10);
	}
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__is_this_label_next_3_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i13);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_goto_8_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_sv(10);
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r6 = MR_sv(10);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(6) = MR_tempr2;
	MR_sv(10) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i20);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_goto_8_0_i18);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__jumpopt__adjust_livevals_3_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i22);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i90);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tfield(0, MR_sv(5), 4);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i30);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_goto_8_0_i28);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__jumpopt__adjust_livevals_3_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i32);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i90);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tfield(0, MR_sv(5), 6);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i40);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_goto_8_0_i38);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__jumpopt__adjust_livevals_3_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i90);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 8);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_goto_8_0_i45);
	}
	MR_sv(7) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i47);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_goto_8_0_i45);
	}
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_5_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i49);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tfield(0, MR_sv(5), 1);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i51);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_goto_8_0_i45);
	}
	MR_sv(9) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i53);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_goto_8_0_i45);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_labels_2_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i55);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__adjust_livevals_3_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i56);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(map__delete_3_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i57);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r4 = MR_sv(10);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__jump_opt_instr_list_7_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i60);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i61);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(12);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(0, MR_sv(5), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i64);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_goto_8_0_i63);
	}
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_5_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i66);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(0, MR_r2, 0);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("shortcircuited jump: ", 21);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i67);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_fall_through_1_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i68);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_goto_8_0_i70);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(0, MR_sv(5), 2);
	MR_r4 = MR_sv(9);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_goto_8_0_i69);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i75);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_goto_8_0_i74);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(0, MR_sv(5), 2);
	MR_r4 = MR_sv(9);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_goto_8_0_i69);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(9);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(0, MR_sv(5), 2);
	MR_r4 = MR_tempr5;
	}
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i86);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_goto_8_0_i84);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_goto_8_0_i84);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__adjust_livevals_3_0,
		ll_backend__jumpopt__jump_opt_goto_8_0_i90);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_sv(10);
	MR_decr_sp_and_return(12);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_sv(10);
	MR_decr_sp_and_return(12);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(10);
	MR_decr_sp_and_return(12);
MR_def_label(ll_backend__jumpopt__jump_opt_goto_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r6;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(ll_backend__opt_util__filter_out_bad_livevals_2_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module15)
	MR_init_entry1(ll_backend__jumpopt__optimize_jumps_in_proc_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__optimize_jumps_in_proc_12_0);
	MR_init_label10(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,2,4,6,7,8,9,10,11,12,14)
	MR_init_label10(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,16,17,18,19,13,24,22,28,30,21)
	MR_init_label4(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,32,33,35,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_jumps_in_proc'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__jumpopt__optimize_jumps_in_proc_12_0);
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
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i2);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i4);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i6);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i7);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i8);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i9);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__jump_opt_build_maps_14_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i10);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_sv(13) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i11);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i12);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(2);
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i13);
	}
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i16);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i17);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i18);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i19);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(2);
	MR_r1 = MR_sv(9);
	}
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i22);
	}
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__jumpopt__jump_opt_instr_list_7_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i24);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(8);
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i32);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_tempr1;
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__jump_opt_instr_list_7_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i28);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i30);
	}
	MR_sv(1) = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i32);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.jumpopt", 18);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.jumpopt.optimize_jumps_in_proc\'/12", 56);
	MR_r3 = (MR_Word) MR_string_const("lost the next label number", 26);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i21);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i32);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_bad_livevals_2_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i33);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i35);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i34);
	}
	MR_r3 = (MR_Integer) 0;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(18);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module16)
	MR_init_entry1(ll_backend__jumpopt__short_foreign_proc_component_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__short_foreign_proc_component_5_0);
	MR_init_label10(ll_backend__jumpopt__short_foreign_proc_component_5_0,3,4,5,39,6,9,11,8,16,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short_foreign_proc_component'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__short_foreign_proc_component_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_foreign_proc_component_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_foreign_proc_component_5_0_i4);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_foreign_proc_component_5_0_i5);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_foreign_proc_component_5_0_i6);
	}
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_foreign_proc_component_5_0_i39);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r4 = MR_tfield(3, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__short_foreign_proc_component_5_0_i9);
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_foreign_proc_component_5_0_i8);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_2_6_0,
		ll_backend__jumpopt__short_foreign_proc_component_5_0_i11);
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__short_foreign_proc_component_5_0_i16);
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_r2;
	MR_sv(1) = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__short_foreign_proc_component_5_0_i16);
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_foreign_proc_component_5_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module17)
	MR_init_entry1(__Unify___ll_backend__jumpopt__jump_opt_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__jumpopt__jump_opt_info_0_0);
	MR_init_label10(__Unify___ll_backend__jumpopt__jump_opt_info_0_0,4,7,10,12,14,16,18,20,22,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__jumpopt__jump_opt_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__jumpopt__jump_opt_info_0_0_i22);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__jumpopt__jump_opt_info_0_0_i4);
MR_def_label(__Unify___ll_backend__jumpopt__jump_opt_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__jumpopt__jump_opt_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__jumpopt__jump_opt_info_0_0_i7);
MR_def_label(__Unify___ll_backend__jumpopt__jump_opt_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__jumpopt__jump_opt_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__jumpopt__jump_opt_info_0_0_i10);
MR_def_label(__Unify___ll_backend__jumpopt__jump_opt_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__jumpopt__jump_opt_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__jumpopt__jump_opt_info_0_0_i12);
MR_def_label(__Unify___ll_backend__jumpopt__jump_opt_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__jumpopt__jump_opt_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__jumpopt__jump_opt_info_0_0_i14);
MR_def_label(__Unify___ll_backend__jumpopt__jump_opt_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__jumpopt__jump_opt_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__jumpopt__jump_opt_info_0_0_i16);
MR_def_label(__Unify___ll_backend__jumpopt__jump_opt_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__jumpopt__jump_opt_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__jumpopt__jump_opt_info_0_0_i18);
MR_def_label(__Unify___ll_backend__jumpopt__jump_opt_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__jumpopt__jump_opt_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___ll_backend__jumpopt__jump_opt_info_0_0_i20);
MR_def_label(__Unify___ll_backend__jumpopt__jump_opt_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__jumpopt__jump_opt_info_0_0_i1);
	}
	if ((MR_sv(8) != MR_sv(17))) {
		MR_GOTO_LAB(__Unify___ll_backend__jumpopt__jump_opt_info_0_0_i1);
	}
	MR_r1 = (MR_sv(9) == MR_sv(18));
	MR_decr_sp_and_return(19);
MR_def_label(__Unify___ll_backend__jumpopt__jump_opt_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__jumpopt__jump_opt_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module18)
	MR_init_entry1(__Compare___ll_backend__jumpopt__jump_opt_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__jumpopt__jump_opt_info_0_0);
	MR_init_label10(__Compare___ll_backend__jumpopt__jump_opt_info_0_0,3,2,5,10,15,20,25,30,35,39)
	MR_init_label2(__Compare___ll_backend__jumpopt__jump_opt_info_0_0,43,121)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__jumpopt__jump_opt_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__jump_opt_info_0_0_i3);
	}
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__jumpopt__jump_opt_info_0_0_i2);
MR_def_label(__Compare___ll_backend__jumpopt__jump_opt_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__jumpopt__jump_opt_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__jumpopt__jump_opt_info_0_0_i5);
MR_def_label(__Compare___ll_backend__jumpopt__jump_opt_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__jump_opt_info_0_0_i121);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__jumpopt__jump_opt_info_0_0_i10);
MR_def_label(__Compare___ll_backend__jumpopt__jump_opt_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__jump_opt_info_0_0_i121);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__jumpopt__jump_opt_info_0_0_i15);
MR_def_label(__Compare___ll_backend__jumpopt__jump_opt_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__jump_opt_info_0_0_i121);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__jumpopt__jump_opt_info_0_0_i20);
MR_def_label(__Compare___ll_backend__jumpopt__jump_opt_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__jump_opt_info_0_0_i121);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__jumpopt__jump_opt_info_0_0_i25);
MR_def_label(__Compare___ll_backend__jumpopt__jump_opt_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__jump_opt_info_0_0_i121);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__jumpopt__jump_opt_info_0_0_i30);
MR_def_label(__Compare___ll_backend__jumpopt__jump_opt_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__jump_opt_info_0_0_i121);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__jumpopt__jump_opt_info_0_0_i35);
MR_def_label(__Compare___ll_backend__jumpopt__jump_opt_info_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__jump_opt_info_0_0_i121);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___ll_backend__jumpopt__jump_opt_info_0_0_i39);
MR_def_label(__Compare___ll_backend__jumpopt__jump_opt_info_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__jump_opt_info_0_0_i121);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__jumpopt__jump_opt_info_0_0_i43);
MR_def_label(__Compare___ll_backend__jumpopt__jump_opt_info_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__jump_opt_info_0_0_i121);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(18);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__jumpopt__jump_opt_info_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module19)
	MR_init_entry1(__Unify___ll_backend__jumpopt__new_remain_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__jumpopt__new_remain_0_0);
	MR_init_label4(__Unify___ll_backend__jumpopt__new_remain_0_0,14,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__jumpopt__new_remain_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__jumpopt__new_remain_0_0_i14);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__jumpopt__new_remain_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__jumpopt__new_remain_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__jumpopt__new_remain_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__jumpopt__new_remain_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__jumpopt__new_remain_0_0_i7);
MR_def_label(__Unify___ll_backend__jumpopt__new_remain_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__jumpopt__new_remain_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__jumpopt__new_remain_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module20)
	MR_init_entry1(__Compare___ll_backend__jumpopt__new_remain_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__jumpopt__new_remain_0_0);
	MR_init_label6(__Compare___ll_backend__jumpopt__new_remain_0_0,24,7,5,9,11,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__jumpopt__new_remain_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__new_remain_0_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__new_remain_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__new_remain_0_0_i7);
	}
MR_def_label(__Compare___ll_backend__jumpopt__new_remain_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__jumpopt__new_remain_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__jumpopt__new_remain_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__new_remain_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__jumpopt__new_remain_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__jumpopt__new_remain_0_0_i11);
MR_def_label(__Compare___ll_backend__jumpopt__new_remain_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__new_remain_0_0_i16);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__jumpopt__new_remain_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_util__neg_rval_2_0);
MR_decl_entry(ll_backend__opt_util__filter_out_r1_3_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module21)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0);
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,5,10,12,7,14,16,20,23,25,4)
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,34,36,42,40,44,48,31,54,56,58)
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,61,63,65,67,68,72,76,71,79,81)
	MR_init_label6(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,100,57,106,108,53,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__jump_opt_if_val__[4]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(3, MR_r1, 2);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i2);
	}
	MR_tempr2 = MR_r4;
	MR_sv(9) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_sv(4) = MR_tempr1;
	MR_sv(8) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(12) = MR_r5;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i5);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i4);
	}
	MR_r4 = MR_tfield(1, MR_r1, 1);
	MR_r5 = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r5, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i7);
	}
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__member_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i10);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i4);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i12);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i4);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i14);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r5;
	MR_r1 = MR_r4;
	MR_r3 = (MR_Integer) 0;
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i4);
	}
	MR_sv(11) = MR_tfield(0, MR_r2, 1);
	MR_sv(10) = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i16);
	}
	if (MR_PTAG_TESTR(MR_sv(10),1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i4);
	}
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i20);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i23);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__code_util__neg_rval_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i25);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_sv(12);
	MR_decr_sp_and_return(13);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i31);
	}
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__search_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i34);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i31);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i36);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i31);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r6 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,6)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i31);
	}
	MR_sv(10) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(9) = MR_tfield(1, MR_r1, 1);
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	MR_r6 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i40);
	}
	MR_sv(8) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i42);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i31);
	}
	MR_r6 = MR_sv(8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r6;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__code_util__neg_rval_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i44);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_string_const(" (switched)", 11);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i48);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_sv(12);
	MR_decr_sp_and_return(13);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__search_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i54);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i53);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i56);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__opt_util__is_sdproceed_next_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i58);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i57);
	}
	MR_sv(6) = MR_r2;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__search_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i61);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i57);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__opt_util__is_sdproceed_next_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i63);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i57);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_r1_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i65);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i57);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_r1_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i67);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i68);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i57);
	}
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i57);
	}
	if (MR_LTAGS_TESTR(MR_sv(6),0,1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i72);
	}
	MR_r3 = MR_tfield(1, MR_sv(8), 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i57);
	}
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i71);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i57);
	}
	MR_r2 = MR_tfield(1, MR_sv(8), 0);
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i57);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__code_util__neg_rval_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i76);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_np_call_localret_ent(ll_backend__jumpopt__needs_workaround_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i79);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i57);
	}
	if (MR_PTAG_TESTR(MR_sv(6),0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i81);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(6), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i81);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i81);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i81);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(0,4,4);
	MR_tfield(1, MR_r2, 1) = MR_sv(7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i100);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("shortcircuit bool computation", 29);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_sv(7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i100);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(12);
	MR_decr_sp_and_return(13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i106);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i53);
	}
	MR_r1 = (MR_Word) MR_string_const("shortcircuited jump: ", 21);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0_i108);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(12);
	MR_decr_sp_and_return(13);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(12);
	MR_decr_sp_and_return(13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_105_102_95_118_97_108_95_95_91_52_93_95_48_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_component_0;
MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(ll_backend__jumpopt_module22)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0);
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0,3,5,7,9,6,4,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__jump_opt_foreign_proc_code__[4]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__jumpopt__short_foreign_proc_component_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r4, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_sv(4) = MR_tfield(3, MR_r1, 3);
	MR_sv(5) = MR_tfield(3, MR_r1, 4);
	MR_sv(6) = MR_tfield(3, MR_r1, 5);
	MR_sv(7) = MR_tfield(3, MR_r1, 6);
	MR_sv(8) = MR_tfield(3, MR_r1, 7);
	MR_sv(9) = MR_tfield(3, MR_r1, 8);
	MR_sv(10) = MR_tfield(3, MR_r1, 9);
	MR_sv(11) = MR_tfield(3, MR_r1, 10);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(15) = MR_r5;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(3, MR_tempr2, 2);
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i3);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i5);
	}
	MR_sv(13) = MR_r1;
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(15);
	MR_r3 = MR_r4;
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i4);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_tfield(1, MR_sv(8), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(map__search_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i7);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i6);
	}
	MR_r1 = MR_sv(12);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_2_6_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i9);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_sv(15);
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i4);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r1 = MR_sv(15);
	MR_r3 = (MR_Integer) 1;
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i13);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(16);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(15) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(" (some redirects)", 17);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i14);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_106_117_109_112_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_106_117_109_112_95_111_112_116_95_102_111_114_101_105_103_110_95_112_114_111_99_95_99_111_100_101_95_95_91_52_93_95_48_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 11);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(13);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 8) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 9) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 10) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(15);
	MR_decr_sp_and_return(16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__jumpopt_maybe_bunch_0(void)
{
	ll_backend__jumpopt_module0();
	ll_backend__jumpopt_module1();
	ll_backend__jumpopt_module2();
	ll_backend__jumpopt_module3();
	ll_backend__jumpopt_module4();
	ll_backend__jumpopt_module5();
	ll_backend__jumpopt_module6();
	ll_backend__jumpopt_module7();
	ll_backend__jumpopt_module8();
	ll_backend__jumpopt_module9();
	ll_backend__jumpopt_module10();
	ll_backend__jumpopt_module11();
	ll_backend__jumpopt_module12();
	ll_backend__jumpopt_module13();
	ll_backend__jumpopt_module14();
	ll_backend__jumpopt_module15();
	ll_backend__jumpopt_module16();
	ll_backend__jumpopt_module17();
	ll_backend__jumpopt_module18();
	ll_backend__jumpopt_module19();
	ll_backend__jumpopt_module20();
	ll_backend__jumpopt_module21();
	ll_backend__jumpopt_module22();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__jumpopt__init(void);
void mercury__ll_backend__jumpopt__init_type_tables(void);
void mercury__ll_backend__jumpopt__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__jumpopt__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__jumpopt__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__jumpopt__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__jumpopt__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__jumpopt_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__jumpopt__type_ctor_info_jump_opt_info_0,
		ll_backend__jumpopt__jump_opt_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__jumpopt__type_ctor_info_new_remain_0,
		ll_backend__jumpopt__new_remain_0_0);
	mercury__ll_backend__jumpopt__init_debugger();
}

void mercury__ll_backend__jumpopt__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__jumpopt__type_ctor_info_jump_opt_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__jumpopt__type_ctor_info_new_remain_0);
	}
}


void mercury__ll_backend__jumpopt__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__jumpopt__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__jumpopt);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__jumpopt__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__jumpopt__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
