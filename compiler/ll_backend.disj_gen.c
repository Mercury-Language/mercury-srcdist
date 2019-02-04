/*
** Automatically generated from `disj_gen.m'
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
INIT mercury__ll_backend__disj_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.disj_gen.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.disj_gen.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "ll_backend.disj_gen.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 39 "ll_backend.disj_gen.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "ll_backend.disj_gen.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "ll_backend.disj_gen.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "ll_backend.disj_gen.c"
#line 52 "ll_backend.disj_gen.c"
#include "ll_backend.disj_gen.mh"

#line 55 "ll_backend.disj_gen.c"
#line 56 "ll_backend.disj_gen.c"
#ifndef LL_BACKEND__DISJ_GEN_DECL_GUARD
#define LL_BACKEND__DISJ_GEN_DECL_GUARD

#line 60 "ll_backend.disj_gen.c"
#line 61 "ll_backend.disj_gen.c"

#endif
#line 64 "ll_backend.disj_gen.c"

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
	MR_Word * f3[3];
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
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__disj_gen__type_ctor_info_lookup_disj_info_0;
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0, 4,5,6,7,8,9,10,11)
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0, 12,13,14,15,16,17,18,19)
MR_decl_label6(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0, 20,21,22,23,24,3)
MR_decl_label3(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0, 4,5,3)
MR_decl_label3(ll_backend__disj_gen__disj_protect_regions_7_0, 4,5,3)
MR_decl_label8(ll_backend__disj_gen__generate_disj_6_0, 25,5,51,10,13,12,11,14)
MR_decl_label4(ll_backend__disj_gen__generate_disj_6_0, 15,19,16,17)
MR_decl_label8(ll_backend__disj_gen__generate_disjuncts_18_0, 4,3,6,8,9,7,10,14)
MR_decl_label8(ll_backend__disj_gen__generate_disjuncts_18_0, 15,16,17,21,24,25,26,27)
MR_decl_label8(ll_backend__disj_gen__generate_disjuncts_18_0, 28,29,30,31,18,19,32,33)
MR_decl_label8(ll_backend__disj_gen__generate_disjuncts_18_0, 34,35,36,37,39,44,45,46)
MR_decl_label8(ll_backend__disj_gen__generate_disjuncts_18_0, 43,47,48,49,50,51,52,53)
MR_decl_label8(ll_backend__disj_gen__generate_disjuncts_18_0, 12,54,55,56,57,58,59,60)
MR_decl_label8(ll_backend__disj_gen__generate_lookup_disj_5_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ll_backend__disj_gen__generate_lookup_disj_5_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(ll_backend__disj_gen__generate_lookup_disj_5_0, 18,19,20,21,22,23,24,25)
MR_decl_label7(ll_backend__disj_gen__generate_lookup_disj_5_0, 26,27,28,29,30,31,32)
MR_decl_label8(ll_backend__disj_gen__generate_real_disj_9_0, 2,3,4,7,10,6,15,18)
MR_decl_label8(ll_backend__disj_gen__generate_real_disj_9_0, 20,16,14,22,23,24,5,25)
MR_decl_label8(ll_backend__disj_gen__generate_real_disj_9_0, 26,27,28,29,30,31,40,33)
MR_decl_label1(ll_backend__disj_gen__generate_real_disj_9_0, 34)
MR_decl_label8(ll_backend__disj_gen__is_lookup_disj_8_0, 2,4,5,11,13,14,15,16)
MR_decl_label8(ll_backend__disj_gen__is_lookup_disj_8_0, 17,18,19,20,22,23,24,25)
MR_decl_label8(ll_backend__disj_gen__is_lookup_disj_8_0, 26,27,30,29,32,33,34,36)
MR_decl_label2(ll_backend__disj_gen__is_lookup_disj_8_0, 37,1)
MR_decl_label8(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0, 4,6,8,10,12,14,16,18)
MR_decl_label8(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0, 20,22,24,26,28,30,34,1)
MR_decl_label8(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label8(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0, 29,33,37,41,45,49,53,57)
MR_decl_label1(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0, 125)
MR_decl_static(fn__ll_backend__disj_gen__this_file_0_0)
MR_decl_static(ll_backend__disj_gen__is_lookup_disj_8_0)
MR_decl_static(ll_backend__disj_gen__generate_lookup_disj_5_0)
MR_decl_static(ll_backend__disj_gen__generate_disjuncts_18_0)
MR_decl_static(ll_backend__disj_gen__disj_protect_regions_7_0)
MR_decl_static(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0)
MR_decl_static(ll_backend__disj_gen__generate_real_disj_9_0)
MR_def_extern_entry(ll_backend__disj_gen__generate_disj_6_0)
MR_decl_static(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0)
MR_decl_static(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0)
MR_decl_static(ll_backend__disj_gen__IntroducedFrom__pred__is_lookup_disj__151__1_3_0)
MR_decl_static(ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__517__1_2_0)
MR_decl_static(ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__519__1_2_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
static const struct mercury_type_0 mercury_common_0[8] =
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
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
MR_TAG_COMMON(0,6,0),
MR_tbmkword(0, 0)
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
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,6)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__disj_gen__is_lookup_disj_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__disj_gen__is_lookup_disj_8_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_COMMON(0,1),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
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

static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_string_const("lookup disj", 11)
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
MR_TAG_COMMON(1,5,0),
MR_string_const("", 0)
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
MR_TAG_COMMON(1,0,4)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__disj_gen__generate_disjuncts_18_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__disj_gen__generate_disjuncts_18_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
static const struct mercury_type_8 mercury_common_8[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__disj_gen__generate_disjuncts_18_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,7),
MR_COMMON(0,7)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__disj_gen__generate_disjuncts_18_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval)
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_branch_end_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_branch_end_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__code_info__type_ctor_info_branch_end_info_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__code_info__type_ctor_info_branch_end_info_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_lval_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1ll_backend__llds__type_ctor_info_lval_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_lval_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__tree__type_ctor_info_tree_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_libs__tree__ti_tree_1list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_libs__tree__type_ctor_info_tree_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_disj_hijack_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_rval_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1list__ti_list_1ll_backend__llds__type_ctor_info_rval_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_rval_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_llds_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_llds_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_llds_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_disj_hijack_info_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__disj_gen__field_types_lookup_disj_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__code_info__type_ctor_info_branch_end_info_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__tree__ti_tree_1list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__tree__ti_tree_1list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__tree__ti_tree_1list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__code_info__type_ctor_info_disj_hijack_info_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__tree__ti_tree_1list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1list__ti_list_1ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0
};

const MR_ConstString mercury_data_ll_backend__disj_gen__field_names_lookup_disj_info_0_0[] = {
	"ldi_variables",
	"ldi_store_map",
	"ldi_branch_end",
	"ldi_liveness",
	"lds_cur_slot",
	"lds_resume_map",
	"lds_flush_code",
	"lds_save_ticket_code",
	"lds_maybe_ticket_slot",
	"lds_save_hp_code",
	"lds_maybe_hp_slot",
	"lds_hijack_info",
	"lds_prepare_hijack_code",
	"ldi_solns",
	"ldi_field_types"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__disj_gen__du_functor_desc_lookup_disj_info_0_0 = {
	"lookup_disj_info",
	15,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__disj_gen__field_types_lookup_disj_info_0_0,
	mercury_data_ll_backend__disj_gen__field_names_lookup_disj_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__disj_gen__du_stag_ordered_lookup_disj_info_0_0[] = {
	&mercury_data_ll_backend__disj_gen__du_functor_desc_lookup_disj_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__disj_gen__du_ptag_ordered_lookup_disj_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__disj_gen__du_stag_ordered_lookup_disj_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__disj_gen__du_name_ordered_lookup_disj_info_0[] = {
	&mercury_data_ll_backend__disj_gen__du_functor_desc_lookup_disj_info_0_0
};

const MR_Integer mercury_data_ll_backend__disj_gen__functor_number_map_lookup_disj_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__disj_gen__type_ctor_info_lookup_disj_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0)),
	"ll_backend.disj_gen",
	"lookup_disj_info",
	{ (void *)mercury_data_ll_backend__disj_gen__du_name_ordered_lookup_disj_info_0 },
	{ (void *)mercury_data_ll_backend__disj_gen__du_ptag_ordered_lookup_disj_info_0 },
	1,
	4,
	mercury_data_ll_backend__disj_gen__functor_number_map_lookup_disj_info_0
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__disj_gen__is_lookup_disj_8_0_1 = {
{
MR_PREDICATE,
"ll_backend.disj_gen",
"ll_backend.disj_gen",
"lambda_disj_gen_m_151",
3,
0
},
"ll_backend.disj_gen",
"disj_gen.m",
151,
"d1;c22;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__disj_gen__generate_disjuncts_18_0_1 = {
{
MR_PREDICATE,
"ll_backend.disj_gen",
"ll_backend.disj_gen",
"lambda_disj_gen_m_517",
2,
0
},
"ll_backend.disj_gen",
"disj_gen.m",
517,
"d2;c23;d1;c6;t;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__disj_gen__generate_disjuncts_18_0_2 = {
{
MR_PREDICATE,
"ll_backend.disj_gen",
"ll_backend.disj_gen",
"lambda_disj_gen_m_519",
2,
0
},
"ll_backend.disj_gen",
"disj_gen.m",
519,
"d2;c23;d1;c6;t;c10;"
};


MR_BEGIN_MODULE(ll_backend__disj_gen_module0)
	MR_init_entry1(fn__ll_backend__disj_gen__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__disj_gen__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("disj_gen.m", 10);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__get_maybe_trace_info_2_0);
MR_decl_entry(ll_backend__code_info__get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_1);
MR_decl_entry(ll_backend__lookup_util__all_disjuncts_are_conj_of_unify_1_0);
MR_decl_entry(ll_backend__lookup_util__figure_out_output_vars_3_0);
MR_decl_entry(fn__ll_backend__code_info__get_var_types_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(ll_backend__code_info__produce_vars_5_0);
MR_decl_entry(ll_backend__code_info__acquire_temp_slot_5_0);
MR_decl_entry(ll_backend__code_info__maybe_save_ticket_5_0);
MR_decl_entry(__Unify___libs__globals__globals_0_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(ll_backend__code_info__maybe_save_hp_5_0);
MR_decl_entry(ll_backend__code_info__prepare_for_disj_hijack_5_0);
MR_decl_entry(ll_backend__code_info__remember_position_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_store_map_2_0);
MR_decl_entry(ll_backend__lookup_util__generate_constants_for_disjuncts_9_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(ll_backend__code_info__reset_to_position_3_0);
MR_decl_entry(ll_backend__global_data__find_general_llds_types_4_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module1)
	MR_init_entry1(ll_backend__disj_gen__is_lookup_disj_8_0);
	MR_init_label8(ll_backend__disj_gen__is_lookup_disj_8_0,2,4,5,11,13,14,15,16)
	MR_init_label8(ll_backend__disj_gen__is_lookup_disj_8_0,17,18,19,20,22,23,24,25)
	MR_init_label8(ll_backend__disj_gen__is_lookup_disj_8_0,26,27,30,29,32,33,34,36)
	MR_init_label2(ll_backend__disj_gen__is_lookup_disj_8_0,37,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__disj_gen__is_lookup_disj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_maybe_trace_info_2_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i2);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i4);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 371;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		ll_backend__disj_gen__is_lookup_disj_8_0_i5);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(4);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__all_disjuncts_are_conj_of_unify_1_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i11);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__lookup_util__figure_out_output_vars_3_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i13);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__ll_backend__code_info__get_var_types_1_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i14);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__disj_gen__IntroducedFrom__pred__is_lookup_disj__151__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i15);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_vars_5_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i16);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_temp_slot_5_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i17);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__maybe_save_ticket_5_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i18);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(11) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i19);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___libs__globals__globals_0_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i20);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 245;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i22);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_save_hp_5_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i23);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__prepare_for_disj_hijack_5_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i24);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(15) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i25);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i26);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(15);
	MR_np_call_localret_ent(ll_backend__lookup_util__generate_constants_for_disjuncts_9_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i27);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i30);
	}
	MR_r1 = (MR_Word) MR_string_const("disj_gen.m", 10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("is_lookup_disj: no liveness", 27);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i29);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(15) = MR_r3;
	MR_sv(16) = MR_ctfield(1, MR_r4, 0);
	MR_r2 = MR_r5;
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i32);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i33);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___libs__globals__globals_0_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i34);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 187;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i36);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__global_data__find_general_llds_types_4_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i37);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 15);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(16);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 11) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 12) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 13) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 14) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(17);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(ll_backend__code_info__add_vector_static_cell_5_0);
MR_decl_entry(ll_backend__code_info__get_next_label_3_0);
MR_decl_entry(ll_backend__code_info__acquire_reg_not_in_storemap_4_0);
MR_decl_entry(ll_backend__code_info__make_resume_point_6_0);
MR_decl_entry(ll_backend__code_info__effect_resume_point_5_0);
MR_decl_entry(ll_backend__lookup_util__generate_offset_assigns_5_0);
MR_decl_entry(ll_backend__code_info__flush_resume_vars_to_stack_3_0);
MR_decl_entry(ll_backend__code_info__pop_resume_point_2_0);
MR_decl_entry(ll_backend__code_info__pickup_zombies_3_0);
MR_decl_entry(ll_backend__code_info__make_vars_forward_dead_3_0);
MR_decl_entry(ll_backend__lookup_util__set_liveness_and_end_branch_6_0);
MR_decl_entry(ll_backend__code_info__release_reg_3_0);
MR_decl_entry(ll_backend__code_info__generate_resume_point_4_0);
MR_decl_entry(ll_backend__code_info__maybe_reset_ticket_3_0);
MR_decl_entry(ll_backend__code_info__maybe_restore_hp_2_0);
MR_decl_entry(ll_backend__code_info__undo_disj_hijack_4_0);
MR_decl_entry(ll_backend__code_info__after_all_branches_4_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module2)
	MR_init_entry1(ll_backend__disj_gen__generate_lookup_disj_5_0);
	MR_init_label8(ll_backend__disj_gen__generate_lookup_disj_5_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ll_backend__disj_gen__generate_lookup_disj_5_0,10,11,12,13,14,15,16,17)
	MR_init_label8(ll_backend__disj_gen__generate_lookup_disj_5_0,18,19,20,21,22,23,24,25)
	MR_init_label7(ll_backend__disj_gen__generate_lookup_disj_5_0,26,27,28,29,30,31,32)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__disj_gen__generate_lookup_disj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(28);
	MR_sv(28) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 10);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 11);
	MR_sv(14) = MR_ctfield(0, MR_tempr1, 12);
	MR_sv(15) = MR_ctfield(0, MR_tempr1, 13);
	MR_sv(16) = MR_ctfield(0, MR_tempr1, 14);
	MR_sv(18) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(15);
	}
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i2);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i3);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(ll_backend__code_info__add_vector_static_cell_5_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i4);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(16) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i5);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_not_in_storemap_4_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i6);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(16);
	MR_tfield(2, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_r1;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Compute base address for this case", 34);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_sv(20), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(20), 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(15);
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 2);
	MR_sv(27) = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr5, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr6, 1) = (MR_Word) MR_string_const("Setup current slot in the solution array", 40);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_sv(21), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(21), 0) = MR_tempr7;
	MR_sv(19) = MR_r1;
	MR_tempr8 = MR_r2;
	MR_sv(22) = MR_tempr8;
	MR_r1 = MR_tempr8;
	}
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i7);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(22);
	}
	MR_np_call_localret_ent(ll_backend__code_info__make_resume_point_6_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i8);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(ll_backend__code_info__effect_resume_point_5_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i9);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(ll_backend__lookup_util__generate_offset_assigns_5_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i10);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__flush_resume_vars_to_stack_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i11);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__pop_resume_point_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i12);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__pickup_zombies_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i13);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__make_vars_forward_dead_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i14);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__lookup_util__set_liveness_and_end_branch_6_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i15);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(19);
	MR_sv(19) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i16);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(18);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("goto end of lookup disj", 23);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i17);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__generate_resume_point_4_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i18);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	MR_sv(24) = MR_r2;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__code_info__maybe_reset_ticket_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i19);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_sv(12) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__maybe_restore_hp_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i20);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(24);
	MR_sv(24) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_not_in_storemap_4_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i21);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i22);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i23);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tempr11 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tempr12 = MR_sv(25);
	MR_tfield(3, MR_tempr2, 1) = MR_tempr12;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("Init later base register", 24);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr5, 0) = (((MR_Integer) MR_sv(17) - (MR_Integer) 1) * (MR_Integer) MR_sv(15));
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 24);
	MR_tfield(3, MR_tempr5, 2) = MR_tempr4;
	MR_tfield(3, MR_tempr5, 3) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_tempr13 = MR_sv(26);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr13;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr7, 1) = MR_tempr5;
	MR_tfield(3, MR_tempr7, 2) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr8, 1) = (MR_Word) MR_string_const("Jump to undo hijack code if there are no more solutions", 55);
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr7, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr7, 3) = MR_sv(27);
	MR_tag_alloc_heap(MR_tempr9, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr9, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr9, 1) = MR_tempr11;
	MR_tfield(3, MR_tempr9, 2) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr9;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("Update current slot", 19);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr7, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr9, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr9, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr9, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr10, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr10, 0) = MR_tempr9;
	MR_tfield(0, MR_tempr10, 1) = (MR_Word) MR_string_const("Jump around undo hijack code", 28);
	MR_tag_alloc_heap(MR_tempr9, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr9, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr9, 1) = MR_tempr13;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr9;
	MR_tfield(0, MR_tempr6, 1) = (MR_Word) MR_string_const("Undo hijack code", 16);
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr6;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_sv(13) = MR_tempr1;
	MR_sv(15) = MR_tempr4;
	}
	MR_np_call_localret_ent(ll_backend__code_info__undo_disj_hijack_4_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i24);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Return later answer code", 24);
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(16);
	MR_tfield(2, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(15);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(25);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("Compute base address in later array for this solution", 53);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr2;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(ll_backend__code_info__effect_resume_point_5_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i25);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(25);
	MR_np_call_localret_ent(ll_backend__lookup_util__generate_offset_assigns_5_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i26);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__flush_resume_vars_to_stack_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i27);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__pop_resume_point_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i28);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__pickup_zombies_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i29);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__make_vars_forward_dead_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i30);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__lookup_util__set_liveness_and_end_branch_6_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i31);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__code_info__after_all_branches_4_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i32);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(18);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("end of lookup disj", 18);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(24);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(19);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(23);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(22);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(21);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(20);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(28);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_llds__goal_info_get_resume_point_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_set_resume_point_3_0);
MR_decl_entry(hlds__goal_form__goal_may_allocate_heap_1_0);
MR_decl_entry(ll_backend__code_info__save_hp_4_0);
MR_decl_entry(ll_backend__code_info__save_hp_in_branch_4_0);
MR_decl_entry(libs__tree__flatten_2_0);
MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0);
MR_decl_entry(fn__hlds__code_model__goal_info_get_code_model_1_0);
MR_decl_entry(ll_backend__code_gen__generate_goal_5_0);
MR_decl_entry(ll_backend__code_info__maybe_release_hp_3_0);
MR_decl_entry(ll_backend__code_info__maybe_reset_prune_and_release_ticket_5_0);
MR_decl_entry(ll_backend__code_info__reset_resume_known_3_0);
MR_decl_entry(ll_backend__code_info__generate_branch_end_6_0);
MR_decl_entry(ll_backend__code_info__maybe_restore_and_release_hp_4_0);
MR_decl_entry(ll_backend__code_info__maybe_reset_discard_and_release_ticket_5_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module3)
	MR_init_entry1(ll_backend__disj_gen__generate_disjuncts_18_0);
	MR_init_label8(ll_backend__disj_gen__generate_disjuncts_18_0,4,3,6,8,9,7,10,14)
	MR_init_label8(ll_backend__disj_gen__generate_disjuncts_18_0,15,16,17,21,24,25,26,27)
	MR_init_label8(ll_backend__disj_gen__generate_disjuncts_18_0,28,29,30,31,18,19,32,33)
	MR_init_label8(ll_backend__disj_gen__generate_disjuncts_18_0,34,35,36,37,39,44,45,46)
	MR_init_label8(ll_backend__disj_gen__generate_disjuncts_18_0,43,47,48,49,50,51,52,53)
	MR_init_label8(ll_backend__disj_gen__generate_disjuncts_18_0,12,54,55,56,57,58,59,60)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__disj_gen__generate_disjuncts_18_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(27);
	MR_sv(27) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_18_0_i3);
	}
	MR_np_call_localret_ent(fn__ll_backend__disj_gen__this_file_0_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i4);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("generate_disjuncts: empty disjunction!", 38);
	MR_succip_word = MR_sv(27);
	MR_decr_sp(27);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r13;
	MR_sv(12) = MR_tempr1;
	MR_sv(13) = MR_r14;
	MR_sv(14) = MR_ctfield(1, MR_r1, 0);
	MR_sv(15) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r15;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i6);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_18_0_i8);
	}
	MR_sv(16) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(14);
	MR_sv(17) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(21) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_18_0_i7);
	}
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(ll_backend__code_info__generate_resume_point_4_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i9);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(14);
	MR_sv(17) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(21) = MR_r2;
	}
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_resume_point_2_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i10);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_18_0_i12);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_18_0_i14);
	}
	MR_r2 = MR_sv(18);
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(14) = MR_ctfield(1, MR_r1, 1);
	MR_sv(19) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(18) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_resume_point_3_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i17);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(14) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_restore_hp_2_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i15);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__maybe_reset_ticket_3_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i16);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(18);
	MR_sv(18) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_resume_point_3_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i17);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(17);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_18_0_i19);
	}
	MR_sv(17) = MR_r1;
	MR_sv(20) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_form__goal_may_allocate_heap_1_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i21);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_18_0_i18);
	}
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_18_0_i18);
	}
	MR_r1 = MR_sv(21);
	MR_np_call_localret_ent(ll_backend__code_info__save_hp_4_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i24);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(21), 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_tfield(1, MR_sv(21), 0) = MR_tempr1;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_sv(12) = MR_tempr1;
	MR_sv(25) = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__save_hp_in_branch_4_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i25);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_sv(23) = MR_r2;
	MR_sv(24) = MR_r3;
	MR_sv(26) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r1 = MR_sv(26);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(libs__tree__flatten_2_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i26);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(22);
	MR_sv(22) = MR_r1;
	MR_r1 = MR_sv(26);
	MR_np_call_localret_ent(libs__tree__flatten_2_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i27);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__517__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(22);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_sv(22) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__disj_gen__this_file_0_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i28);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(22);
	MR_r3 = (MR_Word) MR_string_const("cannot use same code for saving hp", 34);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i29);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__519__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(12);
	MR_tfield(0, MR_r1, 4) = MR_sv(23);
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__disj_gen__this_file_0_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i30);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r3 = (MR_Word) MR_string_const("cannot allocate same slot for saved hp", 38);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i31);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(14);
	MR_r4 = MR_sv(25);
	MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_18_0_i32);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(20);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(20) = MR_r2;
	MR_r2 = MR_sv(14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(21);
	MR_sv(21) = MR_tempr1;
	MR_sv(24) = MR_sv(12);
	}
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__make_resume_point_6_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i33);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__code_info__effect_resume_point_5_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i34);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i35);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_sv(17) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i36);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(20);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i37);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_18_0_i39);
	}
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_release_hp_3_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i44);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_18_0_i43);
	}
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_release_hp_3_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i44);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__code_info__maybe_reset_prune_and_release_ticket_5_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i45);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_r1 = MR_sv(24);
	MR_np_call_localret_ent(ll_backend__code_info__reset_resume_known_3_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i46);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__code_info__pop_resume_point_2_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i48);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__flush_resume_vars_to_stack_3_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i47);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_sv(22) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__pop_resume_point_2_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i48);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__pickup_zombies_3_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i49);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__make_vars_forward_dead_3_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i50);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i51);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i52);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr4 = MR_sv(6);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("skip to end of nondet disj", 26);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r15 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_tempr3;
	MR_r14 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr4;
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(21);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r13 = MR_sv(24);
	}
	MR_np_localcall_lab(ll_backend__disj_gen__generate_disjuncts_18_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i53);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(22);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(20);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(17);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(18);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(19);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(16);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr1;
	MR_decr_sp_and_return(27);
	}
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_restore_and_release_hp_4_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i54);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__maybe_reset_discard_and_release_ticket_5_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i55);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__undo_disj_hijack_4_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i56);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i57);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i58);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i59);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__disj_gen__generate_disjuncts_18_0_i60);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_18_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("End of nondet disj", 18);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_sv(16);
	MR_tfield(1, MR_tempr6, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr6;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(27);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__produce_variable_5_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module4)
	MR_init_entry1(ll_backend__disj_gen__disj_protect_regions_7_0);
	MR_init_label3(ll_backend__disj_gen__disj_protect_regions_7_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__disj_gen__disj_protect_regions_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__disj_protect_regions_7_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__disj_gen__disj_protect_regions_7_0_i4);
MR_def_label(ll_backend__disj_gen__disj_protect_regions_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tempr4 = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr4;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(1);
	MR_tempr5 = MR_sv(2);
	MR_tfield(3, MR_tempr1, 5) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("disj protect the region if needed", 33);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr3, 0) = MR_r1;
	MR_tfield(2, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_ctfield(3, MR_tempr1, 4);
	MR_r2 = MR_tempr5;
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr4;
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(ll_backend__disj_gen__disj_protect_regions_7_0,
		ll_backend__disj_gen__disj_protect_regions_7_0_i5);
MR_def_label(ll_backend__disj_gen__disj_protect_regions_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__disj_gen__disj_protect_regions_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__disj_gen_module5)
	MR_init_entry1(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0);
	MR_init_label3(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0_i4);
MR_def_label(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tempr4 = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr4;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(1);
	MR_tempr5 = MR_sv(2);
	MR_tfield(3, MR_tempr1, 5) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("take alloc snapshot of the region", 33);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr3, 0) = MR_r1;
	MR_tfield(2, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_ctfield(3, MR_tempr1, 4);
	MR_r2 = MR_tempr5;
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr4;
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0,
		ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0_i5);
MR_def_label(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__semidet_succeed_0_0);
MR_decl_entry(ll_backend__code_info__release_several_temp_slots_4_0);
MR_decl_entry(ll_backend__code_info__set_resume_point_to_unknown_2_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module6)
	MR_init_entry1(ll_backend__disj_gen__generate_real_disj_9_0);
	MR_init_label8(ll_backend__disj_gen__generate_real_disj_9_0,2,3,4,7,10,6,15,18)
	MR_init_label8(ll_backend__disj_gen__generate_real_disj_9_0,20,16,14,22,23,24,5,25)
	MR_init_label8(ll_backend__disj_gen__generate_real_disj_9_0,26,27,28,29,30,31,40,33)
	MR_init_label1(ll_backend__disj_gen__generate_real_disj_9_0,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__disj_gen__generate_real_disj_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = MR_r4;
	MR_r2 = MR_r7;
	MR_np_call_localret_ent(ll_backend__code_info__produce_vars_5_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i2);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i3);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__code_info__maybe_save_ticket_5_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i4);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_real_disj_9_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(8) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r2 = (MR_Integer) 244;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i7);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(builtin__semidet_succeed_0_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i10);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_real_disj_9_0_i16);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i20);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_real_disj_9_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(8) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r2 = (MR_Integer) 244;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i15);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(builtin__semidet_succeed_0_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i18);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_real_disj_9_0_i16);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i20);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_sv(14) = MR_r4;
	MR_r2 = MR_r5;
	MR_GOTO_LAB(ll_backend__disj_gen__generate_real_disj_9_0_i5);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r1 = MR_sv(3);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(10);
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(11) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(13) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(14) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__disj_gen__generate_real_disj_9_0_i5);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(8) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r2 = (MR_Integer) 245;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i22);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_save_hp_5_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i23);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(10) = MR_r2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i24);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_sv(14) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__prepare_for_disj_hijack_5_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i25);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_sv(16) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i26);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(18) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i27);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r13 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(15);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(17);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(12);
	MR_r12 = MR_sv(13);
	MR_r14 = (MR_Word) MR_tbmkword(0, 0);
	MR_r15 = MR_sv(18);
	MR_np_call_localret_ent(ll_backend__disj_gen__generate_disjuncts_18_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i28);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i29);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__code_info__after_all_branches_4_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i30);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__code_info__release_several_temp_slots_4_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i31);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_real_disj_9_0_i33);
	}
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(16);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(19);
	}
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_real_disj_9_0_i34);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(16);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 1);
	MR_r2 = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = MR_tempr2;
	MR_tempr2 = MR_tempr5;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(19);
	}
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__set_resume_point_to_unknown_2_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i40);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__generate_failure_3_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(fn__ll_backend__code_info__should_add_trail_ops_2_0);
MR_decl_entry(fn__ll_backend__code_info__should_add_region_ops_2_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module7)
	MR_init_entry1(ll_backend__disj_gen__generate_disj_6_0);
	MR_init_label8(ll_backend__disj_gen__generate_disj_6_0,25,5,51,10,13,12,11,14)
	MR_init_label4(ll_backend__disj_gen__generate_disj_6_0,15,19,16,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__disj_gen__generate_disj_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disj_6_0_i51);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disj_6_0_i5);
	}
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("disj_gen.m", 10);
	MR_r2 = (MR_Word) MR_string_const("generate_disj: empty disjunction.", 33);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disj_6_0_i25);
	}
	MR_r1 = MR_r4;
	MR_np_tailcall_ent(ll_backend__code_info__generate_failure_3_0);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 1);
	MR_sv(7) = MR_r4;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_resume_point_2_0,
		ll_backend__disj_gen__generate_disj_6_0_i10);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disj_6_0_i12);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__disj_gen__generate_disj_6_0_i13);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(ll_backend__disj_gen__generate_disj_6_0_i11);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(5) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(7);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__code_info__should_add_trail_ops_2_0,
		ll_backend__disj_gen__generate_disj_6_0_i14);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__ll_backend__code_info__should_add_region_ops_2_0,
		ll_backend__disj_gen__generate_disj_6_0_i15);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disj_6_0_i17);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__disj_gen__is_lookup_disj_8_0,
		ll_backend__disj_gen__generate_disj_6_0_i19);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disj_6_0_i16);
	}
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__disj_gen__generate_lookup_disj_5_0);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__disj_gen__generate_real_disj_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);
MR_decl_entry(__Unify___ll_backend__llds__lval_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_resume_map_0;
MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(__Unify___libs__tree__tree_1_0);
MR_decl_entry(__Unify___ll_backend__code_info__disj_hijack_info_0_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module8)
	MR_init_entry1(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0);
	MR_init_label8(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,4,6,8,10,12,14,16,18)
	MR_init_label8(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,20,22,24,26,28,30,34,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i34);
	}
	MR_incr_sp(30);
	MR_sv(30) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 10);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 11);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 12);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 13);
	MR_sv(14) = MR_ctfield(0, MR_tempr1, 14);
	MR_sv(15) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(16) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(17) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(18) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(19) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(20) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(21) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(22) = MR_ctfield(0, MR_tempr2, 8);
	MR_sv(23) = MR_ctfield(0, MR_tempr2, 9);
	MR_sv(24) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(25) = MR_ctfield(0, MR_tempr2, 11);
	MR_sv(26) = MR_ctfield(0, MR_tempr2, 12);
	MR_sv(27) = MR_ctfield(0, MR_tempr2, 13);
	MR_sv(28) = MR_ctfield(0, MR_tempr2, 14);
	MR_sv(29) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(29);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i4);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = MR_sv(29);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i6);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__code_info, branch_end_info);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i8);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = MR_sv(29);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i10);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i12);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__code_info, resume_map);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i14);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___libs__tree__tree_1_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i16);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(__Unify___libs__tree__tree_1_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i18);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i20);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(__Unify___libs__tree__tree_1_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i22);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(24);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i24);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(__Unify___ll_backend__code_info__disj_hijack_info_0_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i26);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(26);
	MR_np_call_localret_ent(__Unify___libs__tree__tree_1_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i28);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(27);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i30);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, llds_type);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(28);
	MR_succip_word = MR_sv(30);
	MR_decr_sp(30);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(30);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);
MR_decl_entry(__Compare___ll_backend__llds__lval_0_0);
MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(__Compare___libs__tree__tree_1_0);
MR_decl_entry(__Compare___ll_backend__code_info__disj_hijack_info_0_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module9)
	MR_init_entry1(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0);
	MR_init_label8(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,3,2,5,9,13,17,21,25)
	MR_init_label8(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,29,33,37,41,45,49,53,57)
	MR_init_label1(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,125)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i3);
	}
	MR_incr_sp(29);
	MR_sv(29) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i2);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(28) = MR_ctfield(0, MR_tempr5, 14);
	MR_sv(27) = MR_ctfield(0, MR_tempr5, 13);
	MR_sv(26) = MR_ctfield(0, MR_tempr5, 12);
	MR_sv(25) = MR_ctfield(0, MR_tempr5, 11);
	MR_sv(24) = MR_ctfield(0, MR_tempr5, 10);
	MR_sv(23) = MR_ctfield(0, MR_tempr5, 9);
	MR_sv(22) = MR_ctfield(0, MR_tempr5, 8);
	MR_sv(21) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(20) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(19) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(18) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(17) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(16) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(15) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(14) = MR_ctfield(0, MR_tempr6, 14);
	MR_sv(13) = MR_ctfield(0, MR_tempr6, 13);
	MR_sv(12) = MR_ctfield(0, MR_tempr6, 12);
	MR_sv(11) = MR_ctfield(0, MR_tempr6, 11);
	MR_sv(10) = MR_ctfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_ctfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_ctfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i5);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i125);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i9);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i125);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__code_info, branch_end_info);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i13);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i125);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i17);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i125);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__lval_0_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i21);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i125);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__code_info, resume_map);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i25);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i125);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___libs__tree__tree_1_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i29);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i125);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(__Compare___libs__tree__tree_1_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i33);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i125);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i37);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i125);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(__Compare___libs__tree__tree_1_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i41);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i125);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(24);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i45);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i125);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(__Compare___ll_backend__code_info__disj_hijack_info_0_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i49);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i125);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(26);
	MR_np_call_localret_ent(__Compare___libs__tree__tree_1_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i53);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i125);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(27);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i57);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i125);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, llds_type);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(28);
	MR_succip_word = MR_sv(29);
	MR_decr_sp(29);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(29);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module10)
	MR_init_entry1(ll_backend__disj_gen__IntroducedFrom__pred__is_lookup_disj__151__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__disj_gen__IntroducedFrom__pred__is_lookup_disj__151__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__disj_gen_module11)
	MR_init_entry1(ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__517__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__517__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__disj_gen_module12)
	MR_init_entry1(ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__519__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__519__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___ll_backend__llds__lval_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__get_forward_live_vars_2_0);
MR_decl_entry(fn__ll_backend__code_info__filter_region_vars_2_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_slot_contents_0;
MR_decl_entry(fn__list__duplicate_2_0);
MR_decl_entry(ll_backend__code_info__acquire_several_temp_slots_8_0);
MR_decl_entry(fn__ll_backend__llds__first_nonfixed_embedded_slot_addr_2_0);
MR_decl_entry(ll_backend__code_info__acquire_reg_4_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module13)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0);
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,4,5,6,7,8,9,10,11)
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,12,13,14,15,16,17,18,19)
	MR_init_label6(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,20,21,22,23,24,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_forward_live_vars_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i4);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__ll_backend__code_info__filter_region_vars_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i5);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i6);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i7);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i9);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i10);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 230;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i11);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 234;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i12);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r2 = (MR_Integer) 235;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, slot_contents);
	MR_r2 = (((MR_Integer) MR_sv(6) + ((MR_Integer) MR_sv(5) * (MR_Integer) MR_sv(1))) + ((MR_Integer) MR_tempr1 * (MR_Integer) MR_sv(4)));
	MR_r3 = (MR_Word) MR_tbmkword(0, 8);
	}
	MR_np_call_localret_ent(fn__list__duplicate_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i14);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__acquire_several_temp_slots_8_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i15);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__ll_backend__llds__first_nonfixed_embedded_slot_addr_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i16);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i17);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i18);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i19);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tempr10 = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Save stack pointer of embedded region nondet stack", 50);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tempr11 = MR_sv(6);
	MR_tfield(3, MR_tempr3, 1) = MR_tempr11;
	MR_tfield(3, MR_tempr3, 2) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("Initialize number of protect_infos", 34);
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr5, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr5, 2) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr6, 1) = (MR_Word) MR_string_const("Initialize number of snapshot_infos", 35);
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr7, 1) = MR_r1;
	MR_tfield(3, MR_tempr7, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr8, 1) = (MR_Word) MR_string_const("Initialize pointer to nonfixed part of embedded frame", 53);
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_sv(5), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(5), 0) = MR_tempr4;
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr11;
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr10;
	}
	MR_np_call_localret_ent(ll_backend__disj_gen__disj_protect_regions_7_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i20);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i21);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 2;
	MR_tempr8 = MR_sv(4);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr8;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("Store the number of protect_infos", 33);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr5, 1) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr5, 2) = MR_tempr8;
	MR_tfield(3, MR_tempr5, 3) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr6, 1) = (MR_Word) MR_string_const("Store the number of snapshot_infos", 34);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_sv(8), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(8), 0) = MR_tempr6;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i22);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i23);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0_i24);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tempr5 = MR_sv(4);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("region enter later disjunct", 27);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("region enter last disjunct", 26);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tempr3;
	MR_r5 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_decr_sp_and_return(9);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_95_91_50_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__disj_gen_maybe_bunch_0(void)
{
	ll_backend__disj_gen_module0();
	ll_backend__disj_gen_module1();
	ll_backend__disj_gen_module2();
	ll_backend__disj_gen_module3();
	ll_backend__disj_gen_module4();
	ll_backend__disj_gen_module5();
	ll_backend__disj_gen_module6();
	ll_backend__disj_gen_module7();
	ll_backend__disj_gen_module8();
	ll_backend__disj_gen_module9();
	ll_backend__disj_gen_module10();
	ll_backend__disj_gen_module11();
	ll_backend__disj_gen_module12();
	ll_backend__disj_gen_module13();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__disj_gen__init(void);
void mercury__ll_backend__disj_gen__init_type_tables(void);
void mercury__ll_backend__disj_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__disj_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__disj_gen__init_complexity_procs(void);
#endif

void mercury__ll_backend__disj_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__disj_gen_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__disj_gen__type_ctor_info_lookup_disj_info_0,
		ll_backend__disj_gen__lookup_disj_info_0_0);
	mercury__ll_backend__disj_gen__init_debugger();
}

void mercury__ll_backend__disj_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__disj_gen__type_ctor_info_lookup_disj_info_0);
	}
}


void mercury__ll_backend__disj_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__disj_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__disj_gen);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__disj_gen__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
