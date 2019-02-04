/*
** Automatically generated from `disj_gen.m'
** by the Mercury compiler,
** version rotd-2009-11-10, configured for i686-pc-linux-gnu.
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
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.disj_gen.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.disj_gen.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "ll_backend.disj_gen.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "ll_backend.disj_gen.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "ll_backend.disj_gen.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "ll_backend.disj_gen.c"
#line 48 "ll_backend.disj_gen.c"
#include "ll_backend.disj_gen.mh"

#line 51 "ll_backend.disj_gen.c"
#line 52 "ll_backend.disj_gen.c"
#ifndef LL_BACKEND__DISJ_GEN_DECL_GUARD
#define LL_BACKEND__DISJ_GEN_DECL_GUARD

#line 56 "ll_backend.disj_gen.c"
#line 57 "ll_backend.disj_gen.c"

#endif
#line 60 "ll_backend.disj_gen.c"

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
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__disj_gen__type_ctor_info_commit_disj_region_cleanup_0,
	mercury_data_ll_backend__disj_gen__type_ctor_info_lookup_disj_info_0;
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0, 4,5,7,8,9,10,11,12,13,15)
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0, 16,17,29,30,34,35,36,37,38,41)
MR_decl_label5(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0, 44,3,45,46,47)
MR_decl_label6(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0, 3,5,8,9,10,11)
MR_decl_label6(ll_backend__disj_gen__disj_protect_regions_7_0, 3,5,8,9,10,11)
MR_decl_label10(ll_backend__disj_gen__generate_disj_6_0, 5,49,8,12,10,9,13,14,18,15)
MR_decl_label1(ll_backend__disj_gen__generate_disj_6_0, 16)
MR_decl_label10(ll_backend__disj_gen__generate_disjuncts_19_0, 4,7,6,8,5,9,12,13,14,15)
MR_decl_label10(ll_backend__disj_gen__generate_disjuncts_19_0, 16,17,18,20,31,32,35,36,37,38)
MR_decl_label10(ll_backend__disj_gen__generate_disjuncts_19_0, 39,40,41,42,43,11,47,48,49,46)
MR_decl_label10(ll_backend__disj_gen__generate_disjuncts_19_0, 50,51,52,57,60,62,63,64,66,67)
MR_decl_label10(ll_backend__disj_gen__generate_disjuncts_19_0, 69,70,54,55,71,72,73,74,75,76)
MR_decl_label10(ll_backend__disj_gen__generate_disjuncts_19_0, 77,80,81,79,82,83,84,78,86,87)
MR_decl_label10(ll_backend__disj_gen__generate_disjuncts_19_0, 88,89,90,92,101,103,104,105,106,107)
MR_decl_label10(ll_backend__disj_gen__generate_disjuncts_19_0, 108,109,110,111,112,113,114,115,3,116)
MR_decl_label10(ll_backend__disj_gen__generate_lookup_disj_5_0, 3,5,6,9,10,17,22,23,24,25)
MR_decl_label10(ll_backend__disj_gen__generate_lookup_disj_5_0, 26,27,28,29,30,31,32,36,37,38)
MR_decl_label10(ll_backend__disj_gen__generate_lookup_disj_5_0, 39,40,41,42,43,67,68,77,78,79)
MR_decl_label10(ll_backend__disj_gen__generate_lookup_disj_5_0, 80,81,82,83,84,85,88,91,92,93)
MR_decl_label10(ll_backend__disj_gen__generate_lookup_disj_5_0, 94,95,96,97,98,99,100,101,102,103)
MR_decl_label7(ll_backend__disj_gen__generate_lookup_disj_5_0, 104,105,106,107,108,109,110)
MR_decl_label10(ll_backend__disj_gen__generate_real_disj_9_0, 2,3,4,7,8,9,6,10,11,12)
MR_decl_label10(ll_backend__disj_gen__generate_real_disj_9_0, 15,16,14,20,22,24,26,27,28,18)
MR_decl_label10(ll_backend__disj_gen__generate_real_disj_9_0, 29,5,31,32,33,34,35,36,37,52)
MR_decl_label7(ll_backend__disj_gen__generate_real_disj_9_0, 39,38,42,43,44,45,46)
MR_decl_label10(ll_backend__disj_gen__is_lookup_disj_8_0, 5,6,8,10,12,13,16,17,20,21)
MR_decl_label10(ll_backend__disj_gen__is_lookup_disj_8_0, 22,23,24,25,27,28,29,30,31,32)
MR_decl_label6(ll_backend__disj_gen__is_lookup_disj_8_0, 34,37,38,39,40,1)
MR_decl_label10(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0, 5,6,7,8,9,10,11,12,13,14)
MR_decl_label10(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0, 16,17,18,19,34,35,36,45,46,47)
MR_decl_label10(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0, 48,49,50,51,54,57,58,61,3,63)
MR_decl_label2(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0, 64,65)
MR_decl_label4(__Unify___ll_backend__disj_gen__commit_disj_region_cleanup_0_0, 14,5,7,1)
MR_decl_label10(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0, 5,7,9,11,13,15,17,19,21,23)
MR_decl_label6(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0, 25,27,29,32,36,1)
MR_decl_label6(__Compare___ll_backend__disj_gen__commit_disj_region_cleanup_0_0, 24,7,5,9,11,16)
MR_decl_label10(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0, 3,2,6,11,15,20,24,28,32,36)
MR_decl_label7(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0, 40,44,48,52,56,61,129)
MR_decl_static(ll_backend__disj_gen__is_lookup_disj_8_0)
MR_decl_static(ll_backend__disj_gen__generate_lookup_disj_5_0)
MR_decl_static(fn__ll_backend__disj_gen__this_file_0_0)
MR_decl_static(ll_backend__disj_gen__generate_disjuncts_19_0)
MR_decl_static(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0)
MR_decl_static(ll_backend__disj_gen__disj_protect_regions_7_0)
MR_decl_static(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0)
MR_decl_static(ll_backend__disj_gen__generate_real_disj_9_0)
MR_def_extern_entry(ll_backend__disj_gen__generate_disj_6_0)
MR_decl_static(__Unify___ll_backend__disj_gen__commit_disj_region_cleanup_0_0)
MR_decl_static(__Compare___ll_backend__disj_gen__commit_disj_region_cleanup_0_0)
MR_decl_static(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0)
MR_decl_static(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0)
MR_decl_static(ll_backend__disj_gen__IntroducedFrom__pred__is_lookup_disj__159__1_3_0)
MR_decl_static(ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__533__1_2_0)
MR_decl_static(ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__535__1_2_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
static const struct mercury_type_0 mercury_common_0[5] =
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
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, instruction)
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

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__disj_gen__generate_disjuncts_19_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__disj_gen__generate_disjuncts_19_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
static const struct mercury_type_7 mercury_common_7[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__disj_gen__generate_disjuncts_19_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,4),
MR_COMMON(0,4)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__disj_gen__generate_disjuncts_19_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval)
},
};

static const MR_DuFunctorDesc mercury_data_ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_0 = {
	"no_commit_disj_region_cleanup",
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
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_cord__type_ctor_info_cord_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__disj_gen__field_types_commit_disj_region_cleanup_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0
};

const MR_ConstString mercury_data_ll_backend__disj_gen__field_names_commit_disj_region_cleanup_0_1[] = {
	"cleanup_label",
	"cleanup_code"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_1 = {
	"commit_disj_region_cleanup",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__disj_gen__field_types_commit_disj_region_cleanup_0_1,
	mercury_data_ll_backend__disj_gen__field_names_commit_disj_region_cleanup_0_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_0[] = {
	&mercury_data_ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_1[] = {
	&mercury_data_ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__disj_gen__du_ptag_ordered_commit_disj_region_cleanup_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__disj_gen__du_name_ordered_commit_disj_region_cleanup_0[] = {
	&mercury_data_ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_1,
	&mercury_data_ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_0
};

const MR_Integer mercury_data_ll_backend__disj_gen__functor_number_map_commit_disj_region_cleanup_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__disj_gen__type_ctor_info_commit_disj_region_cleanup_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__disj_gen__commit_disj_region_cleanup_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__disj_gen__commit_disj_region_cleanup_0_0)),
	"ll_backend.disj_gen",
	"commit_disj_region_cleanup",
	{ (void *)mercury_data_ll_backend__disj_gen__du_name_ordered_commit_disj_region_cleanup_0 },
	{ (void *)mercury_data_ll_backend__disj_gen__du_ptag_ordered_commit_disj_region_cleanup_0 },
	2,
	4,
	mercury_data_ll_backend__disj_gen__functor_number_map_commit_disj_region_cleanup_0
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
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
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
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__code_info__type_ctor_info_disj_hijack_info_0,
	(MR_PseudoTypeInfo) &mercury_data_cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0,
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
mercury_data__closure_layout__ll_backend__disj_gen__generate_disjuncts_19_0_2 = {
{
MR_PREDICATE,
"ll_backend.disj_gen",
"ll_backend.disj_gen",
"lambda_disj_gen_m_535",
2,
0
},
"ll_backend.disj_gen",
"disj_gen.m",
535,
"d2;c24;d1;c6;t;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__disj_gen__generate_disjuncts_19_0_1 = {
{
MR_PREDICATE,
"ll_backend.disj_gen",
"ll_backend.disj_gen",
"lambda_disj_gen_m_533",
2,
0
},
"ll_backend.disj_gen",
"disj_gen.m",
533,
"d2;c24;d1;c6;t;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__disj_gen__is_lookup_disj_8_0_1 = {
{
MR_PREDICATE,
"ll_backend.disj_gen",
"ll_backend.disj_gen",
"lambda_disj_gen_m_159",
3,
0
},
"ll_backend.disj_gen",
"disj_gen.m",
159,
"d1;c24;"
};


MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(hlds__goal_form__goal_is_conj_of_unify_2_0);
MR_decl_entry(hlds__goal_form__all_disjuncts_are_conj_of_unify_2_0);
MR_decl_entry(ll_backend__code_info__get_maybe_trace_info_2_0);
MR_decl_entry(ll_backend__code_info__get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_1);
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
MR_decl_entry(ll_backend__lookup_util__generate_constants_for_disjunct_9_0);
MR_decl_entry(ll_backend__lookup_util__generate_constants_for_disjuncts_8_0);
MR_decl_entry(ll_backend__code_info__reset_to_position_3_0);
MR_decl_entry(ll_backend__code_info__get_exprn_opts_2_0);
MR_decl_entry(fn__ll_backend__llds__get_unboxed_floats_1_0);
MR_decl_entry(ll_backend__global_data__find_general_llds_types_4_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module0)
	MR_init_entry1(ll_backend__disj_gen__is_lookup_disj_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__disj_gen__is_lookup_disj_8_0);
	MR_init_label10(ll_backend__disj_gen__is_lookup_disj_8_0,5,6,8,10,12,13,16,17,20,21)
	MR_init_label10(ll_backend__disj_gen__is_lookup_disj_8_0,22,23,24,25,27,28,29,30,31,32)
	MR_init_label6(ll_backend__disj_gen__is_lookup_disj_8_0,34,37,38,39,40,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_lookup_disj'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__disj_gen__is_lookup_disj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_tempr4 = MR_r5;
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(6) = MR_tempr1;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i5);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__goal_form__goal_is_conj_of_unify_2_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i6);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__goal_form__all_disjuncts_are_conj_of_unify_2_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i8);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__get_maybe_trace_info_2_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i10);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i12);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 418;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		ll_backend__disj_gen__is_lookup_disj_8_0_i13);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__lookup_util__figure_out_output_vars_3_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i16);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__ll_backend__code_info__get_var_types_1_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i17);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__disj_gen__IntroducedFrom__pred__is_lookup_disj__159__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i20);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_vars_5_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i21);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_temp_slot_5_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i22);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__maybe_save_ticket_5_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i23);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i24);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___libs__globals__globals_0_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i25);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 277;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i27);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_save_hp_5_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i28);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__prepare_for_disj_hijack_5_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i29);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,29)
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
		ll_backend__disj_gen__is_lookup_disj_8_0_i30);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i31);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(15);
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__generate_constants_for_disjunct_9_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i32);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_sv(15) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__generate_constants_for_disjuncts_8_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i34);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i37);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_exprn_opts_2_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i38);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__llds__get_unboxed_floats_1_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i39);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__global_data__find_general_llds_types_4_0,
		ll_backend__disj_gen__is_lookup_disj_8_0_i40);
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__is_lookup_disj_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 15);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 11) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 12) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 13) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 14) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__disj_gen__is_lookup_disj_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
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
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
MR_decl_entry(fn__cord__singleton_1_0);
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
MR_decl_entry(fn__cord__from_list_1_0);
MR_decl_entry(ll_backend__code_info__undo_disj_hijack_4_0);
MR_decl_entry(ll_backend__code_info__after_all_branches_4_0);
MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module1)
	MR_init_entry1(ll_backend__disj_gen__generate_lookup_disj_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__disj_gen__generate_lookup_disj_5_0);
	MR_init_label10(ll_backend__disj_gen__generate_lookup_disj_5_0,3,5,6,9,10,17,22,23,24,25)
	MR_init_label10(ll_backend__disj_gen__generate_lookup_disj_5_0,26,27,28,29,30,31,32,36,37,38)
	MR_init_label10(ll_backend__disj_gen__generate_lookup_disj_5_0,39,40,41,42,43,67,68,77,78,79)
	MR_init_label10(ll_backend__disj_gen__generate_lookup_disj_5_0,80,81,82,83,84,85,88,91,92,93)
	MR_init_label10(ll_backend__disj_gen__generate_lookup_disj_5_0,94,95,96,97,98,99,100,101,102,103)
	MR_init_label7(ll_backend__disj_gen__generate_lookup_disj_5_0,104,105,106,107,108,109,110)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_lookup_disj'/5 mode 0 */
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
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 10);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 11);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 12);
	MR_sv(15) = MR_tfield(0, MR_tempr1, 13);
	MR_sv(16) = MR_tfield(0, MR_tempr1, 14);
	MR_sv(18) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(15);
	}
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i3);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i5);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(15);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(18);
	}
	MR_np_call_localret_ent(ll_backend__code_info__add_vector_static_cell_5_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i6);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,6)
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
		ll_backend__disj_gen__generate_lookup_disj_5_0_i9);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_not_in_storemap_4_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i10);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(16);
	MR_tfield(2, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr4;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Compute base address for this case", 34);
	MR_sv(19) = MR_tempr4;
	MR_sv(22) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i17);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(15);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(27) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("Setup current slot in the solution array", 40);
	MR_sv(20) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i22);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r1 = MR_sv(22);
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i23);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(22);
	}
	MR_np_call_localret_ent(ll_backend__code_info__make_resume_point_6_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i24);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__effect_resume_point_5_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i25);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(19);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__generate_offset_assigns_5_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i26);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__flush_resume_vars_to_stack_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i27);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__set_liveness_and_end_branch_6_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i31);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(19);
	MR_sv(19) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i32);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(18);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("goto end of lookup disj", 23);
	MR_sv(24) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i36);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(24);
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i37);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__generate_resume_point_4_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i38);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_sv(24) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__code_info__maybe_reset_ticket_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i39);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__maybe_restore_hp_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i40);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(24);
	MR_sv(24) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_not_in_storemap_4_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i41);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i42);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i43);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14;
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
	MR_tempr14 = MR_r1;
	MR_tfield(1, MR_tempr7, 0) = MR_tempr14;
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
	MR_sv(6) = MR_tempr14;
	MR_sv(15) = MR_r2;
	MR_sv(17) = MR_tempr4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr6;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i67);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(15);
	}
	MR_np_call_localret_ent(ll_backend__code_info__undo_disj_hijack_4_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i68);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,68)
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
	MR_tfield(2, MR_tempr1, 2) = MR_sv(17);
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
	MR_sv(6) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i77);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_sv(15);
	}
	MR_np_call_localret_ent(ll_backend__code_info__effect_resume_point_5_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i78);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(25);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__generate_offset_assigns_5_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i79);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__flush_resume_vars_to_stack_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i80);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__pop_resume_point_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i81);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__pickup_zombies_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i82);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__make_vars_forward_dead_3_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i83);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__set_liveness_and_end_branch_6_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i84);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__code_info__after_all_branches_4_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i85);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(18);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("end of lookup disj", 18);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i88);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i91);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i92);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i93);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i94);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i95);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i96);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(24);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i97);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i98);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i99);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i100);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i101);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i102);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(22);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i103);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i104);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i105);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i106);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i107);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i108);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i109);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_lookup_disj_5_0_i110);
MR_def_label(ll_backend__disj_gen__generate_lookup_disj_5_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(28);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__disj_gen_module2)
	MR_init_entry1(fn__ll_backend__disj_gen__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__disj_gen__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
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

MR_decl_entry(fn__cord__empty_0_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_resume_point_2_0);
MR_decl_entry(ll_backend__code_info__maybe_restore_and_release_hp_4_0);
MR_decl_entry(ll_backend__code_info__maybe_reset_discard_and_release_ticket_5_0);
MR_decl_entry(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0);
MR_decl_entry(ll_backend__code_gen__generate_goal_5_0);
MR_decl_entry(ll_backend__code_info__generate_branch_end_6_0);
MR_decl_entry(hlds__hlds_llds__goal_info_set_resume_point_3_0);
MR_decl_entry(hlds__goal_form__goal_may_allocate_heap_1_0);
MR_decl_entry(ll_backend__code_info__save_hp_4_0);
MR_decl_entry(ll_backend__code_info__save_hp_in_branch_6_0);
MR_decl_entry(fn__cord__list_1_0);
MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(fn__hlds__code_model__goal_info_get_code_model_1_0);
MR_decl_entry(ll_backend__code_info__maybe_release_hp_3_0);
MR_decl_entry(ll_backend__code_info__maybe_reset_prune_and_release_ticket_5_0);
MR_decl_entry(ll_backend__code_info__reset_resume_known_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module3)
	MR_init_entry1(ll_backend__disj_gen__generate_disjuncts_19_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__disj_gen__generate_disjuncts_19_0);
	MR_init_label10(ll_backend__disj_gen__generate_disjuncts_19_0,4,7,6,8,5,9,12,13,14,15)
	MR_init_label10(ll_backend__disj_gen__generate_disjuncts_19_0,16,17,18,20,31,32,35,36,37,38)
	MR_init_label10(ll_backend__disj_gen__generate_disjuncts_19_0,39,40,41,42,43,11,47,48,49,46)
	MR_init_label10(ll_backend__disj_gen__generate_disjuncts_19_0,50,51,52,57,60,62,63,64,66,67)
	MR_init_label10(ll_backend__disj_gen__generate_disjuncts_19_0,69,70,54,55,71,72,73,74,75,76)
	MR_init_label10(ll_backend__disj_gen__generate_disjuncts_19_0,77,80,81,79,82,83,84,78,86,87)
	MR_init_label10(ll_backend__disj_gen__generate_disjuncts_19_0,88,89,90,92,101,103,104,105,106,107)
	MR_init_label10(ll_backend__disj_gen__generate_disjuncts_19_0,108,109,110,111,112,113,114,115,3,116)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_disjuncts'/19 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__disj_gen__generate_disjuncts_19_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(29);
	MR_sv(29) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_19_0_i3);
	}
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
	MR_sv(12) = MR_r13;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r14;
	MR_sv(13) = MR_tempr1;
	MR_sv(14) = MR_r15;
	MR_tempr2 = MR_r1;
	MR_sv(15) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(16) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r16;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i4);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_19_0_i6);
	}
	MR_sv(17) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i7);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_sv(17);
	MR_sv(17) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(15);
	MR_sv(18) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_19_0_i5);
	}
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(3), 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__generate_resume_point_4_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i8);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(15);
	MR_sv(18) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_sv(23) = MR_r2;
	}
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_resume_point_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i9);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_19_0_i11);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(23);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_restore_and_release_hp_4_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i12);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__maybe_reset_discard_and_release_ticket_5_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i13);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__code_info__undo_disj_hijack_4_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i14);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(15);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i15);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(15);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i16);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i17);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i18);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_19_0_i20);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i32);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("Skip over cleanup code at end of disjunction", 44);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tempr5 = MR_sv(6);
	MR_tfield(3, MR_tempr2, 1) = MR_tfield(1, MR_tempr5, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("Cleanup at end of disjunction", 29);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i31);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i32);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("End of disjunction", 18);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i35);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i36);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i37);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i38);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i39);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i40);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i41);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i42);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i43);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i115);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_19_0_i46);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(15) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(21) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(21);
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i47);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i48);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i49);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(19);
	MR_sv(19) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_resume_point_3_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i52);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(15) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__code_info__maybe_restore_hp_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i50);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__maybe_reset_ticket_3_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i51);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(19);
	MR_sv(21) = MR_r1;
	MR_sv(19) = MR_sv(11);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_resume_point_3_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i52);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(18);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_19_0_i55);
	}
	MR_sv(18) = MR_tempr2;
	MR_sv(22) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_form__goal_may_allocate_heap_1_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i57);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_19_0_i54);
	}
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_19_0_i54);
	}
	MR_r1 = MR_sv(23);
	MR_np_call_localret_ent(ll_backend__code_info__save_hp_4_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i60);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(23), 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tfield(1, MR_sv(23), 0) = MR_tempr2;
	MR_sv(9) = MR_r1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__save_hp_in_branch_6_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i62);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(24) = MR_r1;
	MR_sv(25) = MR_r2;
	MR_sv(26) = MR_r3;
	MR_sv(27) = MR_r4;
	MR_sv(28) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(28);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__cord__list_1_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i63);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(24);
	MR_sv(24) = MR_r1;
	MR_r1 = MR_sv(28);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i64);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__533__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(24);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_sv(24) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__disj_gen__this_file_0_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i66);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("cannot use same code for saving hp", 34);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i67);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__535__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(25);
	MR_sv(13) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__disj_gen__this_file_0_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i69);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("cannot allocate same slot for saved hp", 38);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i70);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(15);
	MR_r4 = MR_sv(27);
	MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_19_0_i72);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(22);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_sv(22) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i71);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(15);
	MR_tempr2 = MR_sv(9);
	MR_sv(9) = MR_tempr1;
	MR_tempr3 = MR_sv(23);
	MR_sv(23) = MR_tempr2;
	MR_sv(26) = MR_sv(13);
	MR_r4 = MR_tempr3;
	}
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__make_resume_point_6_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i73);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__effect_resume_point_5_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i74);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(22);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i75);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i76);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(22);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i77);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_19_0_i79);
	}
	MR_sv(18) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__flush_resume_vars_to_stack_3_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i80);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_sv(24) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i81);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(24);
	MR_sv(24) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__pop_resume_point_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i86);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_sv(22) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i82);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(22);
	MR_sv(22) = MR_r1;
	MR_r1 = MR_sv(23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__maybe_release_hp_3_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i83);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__maybe_reset_prune_and_release_ticket_5_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i84);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(24) = MR_r1;
	MR_r1 = MR_sv(26);
	MR_np_call_localret_ent(ll_backend__code_info__reset_resume_known_3_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i78);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__pop_resume_point_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i86);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__pickup_zombies_3_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i87);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__make_vars_forward_dead_3_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i88);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i89);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(25);
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i90);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disjuncts_19_0_i92);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("skip to end of disjunction", 26);
	MR_sv(14) = MR_r1;
	MR_sv(25) = MR_r2;
	MR_sv(27) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i101);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_sv(6), 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("skip to end of disjunction after nonlast region disjunct", 56);
	MR_sv(14) = MR_r1;
	MR_sv(25) = MR_r2;
	MR_sv(27) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i101);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r13 = MR_sv(12);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r10 = MR_sv(23);
	MR_r14 = MR_sv(26);
	MR_r15 = MR_sv(14);
	MR_sv(1) = MR_tempr1;
	MR_r16 = MR_sv(27);
	}
	MR_np_localcall_lab(ll_backend__disj_gen__generate_disjuncts_19_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i103);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i104);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i105);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(24);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i106);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(22);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i107);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i108);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i109);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i110);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i111);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i112);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i113);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i114);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i115);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(29);
	}
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__disj_gen__this_file_0_0,
		ll_backend__disj_gen__generate_disjuncts_19_0_i116);
MR_def_label(ll_backend__disj_gen__generate_disjuncts_19_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("generate_disjuncts: empty disjunction!", 38);
	MR_succip_word = MR_sv(29);
	MR_decr_sp(29);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__produce_variable_5_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module4)
	MR_init_entry1(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0);
	MR_init_label6(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0,3,5,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'disj_alloc_snapshot_regions'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0_i3);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0_i11);
MR_def_label(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0_i5);
MR_def_label(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("take alloc snapshot of the region", 33);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0_i8);
MR_def_label(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0_i9);
MR_def_label(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	}
	MR_np_localcall_lab(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0,
		ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0_i10);
MR_def_label(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0_i11);
MR_def_label(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__disj_gen_module5)
	MR_init_entry1(ll_backend__disj_gen__disj_protect_regions_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__disj_gen__disj_protect_regions_7_0);
	MR_init_label6(ll_backend__disj_gen__disj_protect_regions_7_0,3,5,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'disj_protect_regions'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__disj_gen__disj_protect_regions_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__disj_protect_regions_7_0_i3);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__disj_gen__disj_protect_regions_7_0_i11);
MR_def_label(ll_backend__disj_gen__disj_protect_regions_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__disj_gen__disj_protect_regions_7_0_i5);
MR_def_label(ll_backend__disj_gen__disj_protect_regions_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("disj protect the region if needed", 33);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__disj_gen__disj_protect_regions_7_0_i8);
MR_def_label(ll_backend__disj_gen__disj_protect_regions_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__disj_protect_regions_7_0_i9);
MR_def_label(ll_backend__disj_gen__disj_protect_regions_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	}
	MR_np_localcall_lab(ll_backend__disj_gen__disj_protect_regions_7_0,
		ll_backend__disj_gen__disj_protect_regions_7_0_i10);
MR_def_label(ll_backend__disj_gen__disj_protect_regions_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__disj_protect_regions_7_0_i11);
MR_def_label(ll_backend__disj_gen__disj_protect_regions_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_slot_contents_0;
MR_decl_entry(fn__list__duplicate_2_0);
MR_decl_entry(ll_backend__code_info__acquire_several_temp_slots_8_0);
MR_decl_entry(fn__ll_backend__llds__first_nonfixed_embedded_slot_addr_2_0);
MR_decl_entry(ll_backend__code_info__acquire_reg_4_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module6)
	MR_init_entry1(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0);
	MR_init_label10(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,5,6,7,8,9,10,11,12,13,14)
	MR_init_label10(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,16,17,18,19,34,35,36,45,46,47)
	MR_init_label10(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,48,49,50,51,54,57,58,61,3,63)
	MR_init_label2(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,64,65)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_create_disj_region_frame_semi'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i5);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i6);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i7);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i8);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i9);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 258;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i10);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 263;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i11);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 264;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i12);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, slot_contents);
	MR_r2 = (((MR_Integer) MR_sv(6) + ((MR_Integer) MR_sv(5) * (MR_Integer) MR_sv(3))) + ((MR_Integer) MR_tempr1 * (MR_Integer) MR_sv(4)));
	MR_r3 = (MR_Word) MR_tbmkword(0, 8);
	}
	MR_np_call_localret_ent(fn__list__duplicate_2_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i13);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__acquire_several_temp_slots_8_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i14);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__ll_backend__llds__first_nonfixed_embedded_slot_addr_2_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i16);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i17);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i18);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i19);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Save stack pointer of embedded region nondet stack", 50);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(6);
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
	MR_tempr10 = MR_r1;
	MR_tfield(3, MR_tempr7, 1) = MR_tempr10;
	MR_tfield(3, MR_tempr7, 2) = MR_sv(3);
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
	MR_sv(3) = MR_tempr10;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i34);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__disj_gen__disj_protect_regions_7_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i35);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i36);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 2;
	MR_tempr8 = MR_sv(5);
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
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr6;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i45);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i46);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i47);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i48);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i49);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i50);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i51);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("region enter later disjunct", 27);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i54);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("region enter last disjunct", 26);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i57);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i58);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("region cleanup commit for nonlast disjunct", 42);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i61);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r4;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i63);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i64);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0_i65);
MR_def_label(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(7);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_maybe_rbmm_1_0);
MR_decl_entry(set__empty_1_0);
MR_decl_entry(ll_backend__code_info__release_several_temp_slots_4_0);
MR_decl_entry(ll_backend__code_info__set_resume_point_to_unknown_2_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module7)
	MR_init_entry1(ll_backend__disj_gen__generate_real_disj_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__disj_gen__generate_real_disj_9_0);
	MR_init_label10(ll_backend__disj_gen__generate_real_disj_9_0,2,3,4,7,8,9,6,10,11,12)
	MR_init_label10(ll_backend__disj_gen__generate_real_disj_9_0,15,16,14,20,22,24,26,27,28,18)
	MR_init_label10(ll_backend__disj_gen__generate_real_disj_9_0,29,5,31,32,33,34,35,36,37,52)
	MR_init_label7(ll_backend__disj_gen__generate_real_disj_9_0,39,38,42,43,44,45,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_real_disj'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__disj_gen__generate_real_disj_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
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
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__code_info__maybe_save_ticket_5_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i4);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_real_disj_9_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 277;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i7);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_save_hp_5_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i8);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i9);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_sv(14) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(15) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(ll_backend__disj_gen__generate_real_disj_9_0_i5);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 276;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i10);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i11);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_maybe_rbmm_1_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i12);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_real_disj_9_0_i14);
	}
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i15);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i16);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i28);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__empty_1_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i20);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_real_disj_9_0_i18);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(set__empty_1_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i22);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_real_disj_9_0_i18);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(set__empty_1_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i24);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_real_disj_9_0_i18);
	}
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i26);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i27);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i28);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(13);
	MR_sv(13) = MR_r3;
	MR_sv(14) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(15) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(ll_backend__disj_gen__generate_real_disj_9_0_i5);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i29);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_sv(14) = MR_r4;
	MR_sv(15) = MR_r5;
	MR_r2 = MR_r6;
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__prepare_for_disj_hijack_5_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i31);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i32);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(19) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i33);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(16);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(15);
	MR_r8 = MR_sv(18);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(2);
	MR_r11 = MR_sv(8);
	MR_r12 = MR_sv(12);
	MR_r13 = MR_sv(13);
	MR_r14 = MR_tempr1;
	MR_r15 = (MR_Word) MR_tbmkword(0, 0);
	MR_r16 = MR_sv(19);
	}
	MR_np_call_localret_ent(ll_backend__disj_gen__generate_disjuncts_19_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i34);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i35);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_info__after_all_branches_4_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i36);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_several_temp_slots_4_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i37);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_real_disj_9_0_i39);
	}
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(4);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_GOTO_LAB(ll_backend__disj_gen__generate_real_disj_9_0_i38);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_real_disj_9_0_i52);
	}
	MR_np_call_localret_ent(ll_backend__code_info__set_resume_point_to_unknown_2_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i52);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i42);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i43);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i44);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i45);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__disj_gen__generate_real_disj_9_0_i46);
MR_def_label(ll_backend__disj_gen__generate_real_disj_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(20);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__generate_failure_3_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(fn__ll_backend__code_info__should_add_trail_ops_2_0);
MR_decl_entry(fn__ll_backend__code_info__should_add_region_ops_2_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module8)
	MR_init_entry1(ll_backend__disj_gen__generate_disj_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__disj_gen__generate_disj_6_0);
	MR_init_label10(ll_backend__disj_gen__generate_disj_6_0,5,49,8,12,10,9,13,14,18,15)
	MR_init_label1(ll_backend__disj_gen__generate_disj_6_0,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_disj'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__disj_gen__generate_disj_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disj_6_0_i49);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disj_6_0_i5);
	}
	MR_r1 = MR_r4;
	MR_np_tailcall_ent(ll_backend__code_info__generate_failure_3_0);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("disj_gen.m", 10);
	MR_r2 = (MR_Word) MR_string_const("generate_disj: empty disjunction.", 33);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 1);
	MR_sv(7) = MR_r4;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_resume_point_2_0,
		ll_backend__disj_gen__generate_disj_6_0_i8);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disj_6_0_i10);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__disj_gen__generate_disj_6_0_i12);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(ll_backend__disj_gen__generate_disj_6_0_i9);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(7);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__code_info__should_add_trail_ops_2_0,
		ll_backend__disj_gen__generate_disj_6_0_i13);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__should_add_region_ops_2_0,
		ll_backend__disj_gen__generate_disj_6_0_i14);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disj_6_0_i16);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__disj_gen__is_lookup_disj_8_0,
		ll_backend__disj_gen__generate_disj_6_0_i18);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__disj_gen__generate_disj_6_0_i15);
	}
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__disj_gen__generate_lookup_disj_5_0);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(ll_backend__disj_gen__generate_disj_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__disj_gen__generate_real_disj_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__label_0_0);
MR_decl_entry(__Unify___cord__cord_1_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module9)
	MR_init_entry1(__Unify___ll_backend__disj_gen__commit_disj_region_cleanup_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__disj_gen__commit_disj_region_cleanup_0_0);
	MR_init_label4(__Unify___ll_backend__disj_gen__commit_disj_region_cleanup_0_0,14,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__disj_gen__commit_disj_region_cleanup_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__commit_disj_region_cleanup_0_0_i14);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__commit_disj_region_cleanup_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__disj_gen__commit_disj_region_cleanup_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__disj_gen__commit_disj_region_cleanup_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__commit_disj_region_cleanup_0_0_i1);
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
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		__Unify___ll_backend__disj_gen__commit_disj_region_cleanup_0_0_i7);
MR_def_label(__Unify___ll_backend__disj_gen__commit_disj_region_cleanup_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__commit_disj_region_cleanup_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___cord__cord_1_0);
MR_def_label(__Unify___ll_backend__disj_gen__commit_disj_region_cleanup_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ll_backend__llds__label_0_0);
MR_decl_entry(__Compare___cord__cord_1_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module10)
	MR_init_entry1(__Compare___ll_backend__disj_gen__commit_disj_region_cleanup_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__disj_gen__commit_disj_region_cleanup_0_0);
	MR_init_label6(__Compare___ll_backend__disj_gen__commit_disj_region_cleanup_0_0,24,7,5,9,11,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__disj_gen__commit_disj_region_cleanup_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__commit_disj_region_cleanup_0_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__commit_disj_region_cleanup_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__commit_disj_region_cleanup_0_0_i7);
	}
MR_def_label(__Compare___ll_backend__disj_gen__commit_disj_region_cleanup_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__disj_gen__commit_disj_region_cleanup_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__disj_gen__commit_disj_region_cleanup_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__commit_disj_region_cleanup_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__disj_gen__commit_disj_region_cleanup_0_0,9)
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
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__label_0_0,
		__Compare___ll_backend__disj_gen__commit_disj_region_cleanup_0_0_i11);
MR_def_label(__Compare___ll_backend__disj_gen__commit_disj_region_cleanup_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__commit_disj_region_cleanup_0_0_i16);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___cord__cord_1_0);
MR_def_label(__Compare___ll_backend__disj_gen__commit_disj_region_cleanup_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);
MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Unify___ll_backend__llds__lval_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_resume_map_0;
MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(__Unify___ll_backend__code_info__disj_hijack_info_0_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module11)
	MR_init_entry1(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__disj_gen__lookup_disj_info_0_0);
	MR_init_label10(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,5,7,9,11,13,15,17,19,21,23)
	MR_init_label6(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,25,27,29,32,36,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i36);
	}
	MR_incr_sp(30);
	MR_sv(30) = (MR_Word) MR_succip;
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
	MR_sv(10) = MR_tfield(0, MR_tempr1, 10);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 11);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 12);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 13);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 14);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(16) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(17) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(18) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(19) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(20) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(21) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(22) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(23) = MR_tfield(0, MR_tempr2, 9);
	MR_sv(24) = MR_tfield(0, MR_tempr2, 10);
	MR_sv(25) = MR_tfield(0, MR_tempr2, 11);
	MR_sv(26) = MR_tfield(0, MR_tempr2, 12);
	MR_sv(27) = MR_tfield(0, MR_tempr2, 13);
	MR_sv(28) = MR_tfield(0, MR_tempr2, 14);
	MR_sv(29) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(29);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i5);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = MR_sv(29);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i7);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__code_info, branch_end_info);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i9);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = MR_sv(29);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i11);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i13);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__code_info, resume_map);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i15);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___cord__cord_1_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i17);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(__Unify___cord__cord_1_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i19);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i21);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(__Unify___cord__cord_1_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i23);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(24);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i25);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(__Unify___ll_backend__code_info__disj_hijack_info_0_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i27);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(26);
	MR_np_call_localret_ent(__Unify___cord__cord_1_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i29);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(27);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__disj_gen__lookup_disj_info_0_0_i32);
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,32)
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
MR_def_label(__Unify___ll_backend__disj_gen__lookup_disj_info_0_0,36)
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
MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Compare___ll_backend__llds__lval_0_0);
MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(__Compare___ll_backend__code_info__disj_hijack_info_0_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module12)
	MR_init_entry1(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__disj_gen__lookup_disj_info_0_0);
	MR_init_label10(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,3,2,6,11,15,20,24,28,32,36)
	MR_init_label7(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,40,44,48,52,56,61,129)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_sv(28) = MR_tfield(0, MR_tempr5, 14);
	MR_sv(27) = MR_tfield(0, MR_tempr5, 13);
	MR_sv(26) = MR_tfield(0, MR_tempr5, 12);
	MR_sv(25) = MR_tfield(0, MR_tempr5, 11);
	MR_sv(24) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(23) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(22) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(21) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(19) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(14) = MR_tfield(0, MR_tempr6, 14);
	MR_sv(13) = MR_tfield(0, MR_tempr6, 13);
	MR_sv(12) = MR_tfield(0, MR_tempr6, 12);
	MR_sv(11) = MR_tfield(0, MR_tempr6, 11);
	MR_sv(10) = MR_tfield(0, MR_tempr6, 10);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i6);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i129);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i11);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i129);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__code_info, branch_end_info);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i15);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i129);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i20);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i129);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__lval_0_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i24);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i129);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__code_info, resume_map);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i28);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i129);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___cord__cord_1_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i32);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i129);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(__Compare___cord__cord_1_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i36);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i129);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i40);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i129);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(__Compare___cord__cord_1_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i44);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i129);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(24);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i48);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i129);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(__Compare___ll_backend__code_info__disj_hijack_info_0_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i52);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i129);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(26);
	MR_np_call_localret_ent(__Compare___cord__cord_1_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i56);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i129);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(27);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i61);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0_i129);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, llds_type);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(28);
	MR_succip_word = MR_sv(29);
	MR_decr_sp(29);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__disj_gen__lookup_disj_info_0_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(29);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module13)
	MR_init_entry1(ll_backend__disj_gen__IntroducedFrom__pred__is_lookup_disj__159__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__disj_gen__IntroducedFrom__pred__is_lookup_disj__159__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__is_lookup_disj__159__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__disj_gen__IntroducedFrom__pred__is_lookup_disj__159__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__disj_gen_module14)
	MR_init_entry1(ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__533__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__533__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_disjuncts__533__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__533__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
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


MR_BEGIN_MODULE(ll_backend__disj_gen_module15)
	MR_init_entry1(ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__535__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__535__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_disjuncts__535__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__535__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___ll_backend__llds__lval_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__get_forward_live_vars_2_0);
MR_decl_entry(fn__ll_backend__code_info__filter_region_vars_2_0);

MR_BEGIN_MODULE(ll_backend__disj_gen_module16)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0);
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,4,5,7,8,9,10,11,12,13,15)
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,16,17,29,30,34,35,36,37,38,41)
	MR_init_label5(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,44,3,45,46,47)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__maybe_create_disj_region_frame_nondet__[2]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_forward_live_vars_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i4);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__filter_region_vars_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i5);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i7);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i9);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 258;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i10);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 264;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i11);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, slot_contents);
	MR_r2 = ((MR_Integer) MR_sv(3) + ((MR_Integer) MR_tempr1 * (MR_Integer) MR_sv(2)));
	MR_r3 = (MR_Word) MR_tbmkword(0, 8);
	}
	MR_np_call_localret_ent(fn__list__duplicate_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i12);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__code_info__acquire_several_temp_slots_8_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r5;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__llds__first_nonfixed_embedded_slot_addr_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i15);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i16);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i17);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Save stack pointer of embedded region nondet stack", 50);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr3, 2) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("Initialize number of snapshot_infos", 35);
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 1;
	MR_tempr8 = MR_r1;
	MR_tfield(3, MR_tempr5, 1) = MR_tempr8;
	MR_tfield(3, MR_tempr5, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr6, 1) = (MR_Word) MR_string_const("Initialize pointer to nonfixed part of embedded frame", 53);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr6;
	MR_sv(3) = MR_tempr8;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i29);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__disj_gen__disj_alloc_snapshot_regions_7_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i30);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("Store the number of snapshot_infos", 34);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i34);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i35);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i36);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i37);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i38);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("region enter later disjunct", 27);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i41);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("region enter last disjunct", 26);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i44);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i45);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i46);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0_i47);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_100_105_115_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(7);
	}
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
	ll_backend__disj_gen_module14();
	ll_backend__disj_gen_module15();
	ll_backend__disj_gen_module16();
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
		mercury_data_ll_backend__disj_gen__type_ctor_info_commit_disj_region_cleanup_0,
		ll_backend__disj_gen__commit_disj_region_cleanup_0_0);
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
		&mercury_data_ll_backend__disj_gen__type_ctor_info_commit_disj_region_cleanup_0);
	}
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
