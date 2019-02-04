/*
** Automatically generated from `common.m'
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
INIT mercury__check_hlds__common__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "check_hlds.common.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "check_hlds.common.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "check_hlds.common.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "check_hlds.common.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "check_hlds.common.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "check_hlds.common.c"
#line 48 "check_hlds.common.c"
#include "check_hlds.common.mh"

#line 51 "check_hlds.common.c"
#line 52 "check_hlds.common.c"
#ifndef CHECK_HLDS__COMMON_DECL_GUARD
#define CHECK_HLDS__COMMON_DECL_GUARD

#line 56 "check_hlds.common.c"
#line 57 "check_hlds.common.c"

#endif
#line 60 "check_hlds.common.c"

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
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1[2];
	MR_Word * f2[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__common__type_ctor_info_structures_0,
	mercury_data_check_hlds__common__type_ctor_info_structure_0,
	mercury_data_check_hlds__common__type_ctor_info_struct_map_0,
	mercury_data_check_hlds__common__type_ctor_info_seen_calls_0,
	mercury_data_check_hlds__common__type_ctor_info_cons_id_map_0,
	mercury_data_check_hlds__common__type_ctor_info_common_info_0,
	mercury_data_check_hlds__common__type_ctor_info_call_args_0;
MR_decl_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0, 4,25,5,10,41,16,18,19)
MR_decl_label1(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0, 20)
MR_decl_label7(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0, 51,9,11,12,6,2,15)
MR_decl_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0, 2,3,4,5,6,9,7,12)
MR_decl_label4(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0, 13,14,15,16)
MR_decl_label8(check_hlds__common__apply_induced_tsubst_4_0, 2,3,4,22,14,16,18,19)
MR_decl_label8(check_hlds__common__apply_induced_tsubst_4_0, 9,11,12,7,24,23,5,6)
MR_decl_label3(check_hlds__common__apply_induced_tsubst_4_0, 28,34,32)
MR_decl_label1(check_hlds__common__common_info_clear_structs_2_0, 2)
MR_decl_label8(check_hlds__common__common_optimise_call_8_0, 3,4,6,5,8,9,10,11)
MR_decl_label2(check_hlds__common__common_optimise_call_8_0, 12,2)
MR_decl_label8(check_hlds__common__common_optimise_call_2_9_0, 2,4,8,10,11,12,13,15)
MR_decl_label8(check_hlds__common__common_optimise_call_2_9_0, 17,18,19,21,22,23,24,25)
MR_decl_label8(check_hlds__common__common_optimise_call_2_9_0, 14,27,28,29,30,34,31,6)
MR_decl_label5(check_hlds__common__common_optimise_call_2_9_0, 36,3,39,40,42)
MR_decl_label8(check_hlds__common__common_optimise_construct_10_0, 2,3,8,4,10,11,12,14)
MR_decl_label8(check_hlds__common__common_optimise_construct_10_0, 15,17,19,21,23,24,26,27)
MR_decl_label4(check_hlds__common__common_optimise_construct_10_0, 28,29,13,31)
MR_decl_label8(check_hlds__common__common_optimise_deconstruct_12_0, 2,4,7,3,9,10,11,15)
MR_decl_label8(check_hlds__common__common_optimise_deconstruct_12_0, 18,20,22,24,26,27,28,29)
MR_decl_label4(check_hlds__common__common_optimise_deconstruct_12_0, 30,31,12,35)
MR_decl_label7(check_hlds__common__common_optimise_higher_order_call_9_0, 3,5,4,7,8,9,2)
MR_decl_label7(check_hlds__common__common_var_lists_are_equiv_3_0, 42,3,8,7,10,12,1)
MR_decl_label5(check_hlds__common__common_vars_are_equivalent_3_0, 4,6,8,2,1)
MR_decl_label7(check_hlds__common__do_record_cell_in_struct_map_5_0, 3,6,5,9,2,12,13)
MR_decl_label4(check_hlds__common__find_matching_cell_construct_4_0, 20,5,3,1)
MR_decl_label4(check_hlds__common__find_matching_cell_deconstruct_4_0, 23,4,3,1)
MR_decl_label5(check_hlds__common__find_previous_call_5_0, 5,3,7,9,1)
MR_decl_label4(check_hlds__common__ids_vars_match_3_0, 28,3,6,1)
MR_decl_label8(check_hlds__common__partition_call_args_7_0, 64,63,8,10,12,13,16,14)
MR_decl_label5(check_hlds__common__partition_call_args_7_0, 18,20,22,2,1)
MR_decl_label3(check_hlds__common__record_cell_in_maps_6_0, 2,3,4)
MR_decl_label8(check_hlds__common__types_match_exactly_2_0, 4,8,10,14,16,31,33,27)
MR_decl_label5(check_hlds__common__types_match_exactly_2_0, 17,19,74,22,1)
MR_decl_label4(check_hlds__common__types_match_exactly_list_2_0, 24,3,6,1)
MR_decl_label3(fn__check_hlds__common__common_info_init_0_0, 2,3,4)
MR_decl_label4(fn__check_hlds__common__lookup_var_type_ctor_2_0, 2,3,5,4)
MR_decl_label4(__Unify___check_hlds__common__call_args_0_0, 4,6,10,1)
MR_decl_label5(__Unify___check_hlds__common__common_info_0_0, 4,6,8,12,1)
MR_decl_label3(__Unify___check_hlds__common__structure_0_0, 4,8,1)
MR_decl_label5(__Compare___check_hlds__common__call_args_0_0, 3,2,5,9,29)
MR_decl_label6(__Compare___check_hlds__common__common_info_0_0, 3,2,5,9,13,37)
MR_decl_label4(__Compare___check_hlds__common__structure_0_0, 3,2,5,21)
MR_decl_static(fn__check_hlds__common__lookup_var_type_ctor_2_0)
MR_decl_static(check_hlds__common__ids_vars_match_3_0)
MR_decl_static(check_hlds__common__find_matching_cell_construct_4_0)
MR_decl_static(check_hlds__common__do_record_cell_in_struct_map_5_0)
MR_decl_static(check_hlds__common__record_cell_in_maps_6_0)
MR_decl_static(check_hlds__common__types_match_exactly_2_0)
MR_decl_static(check_hlds__common__types_match_exactly_list_2_0)
MR_decl_static(check_hlds__common__apply_induced_tsubst_4_0)
MR_decl_static(check_hlds__common__common_optimise_construct_10_0)
MR_decl_static(check_hlds__common__find_matching_cell_deconstruct_4_0)
MR_decl_static(check_hlds__common__common_optimise_deconstruct_12_0)
MR_def_extern_entry(check_hlds__common__common_optimise_unification_11_0)
MR_decl_static(check_hlds__common__common_var_lists_are_equiv_3_0)
MR_decl_static(check_hlds__common__find_previous_call_5_0)
MR_decl_static(check_hlds__common__common_optimise_call_2_9_0)
MR_decl_static(check_hlds__common__partition_call_args_7_0)
MR_def_extern_entry(check_hlds__common__common_optimise_call_8_0)
MR_def_extern_entry(check_hlds__common__common_optimise_higher_order_call_9_0)
MR_def_extern_entry(check_hlds__common__common_vars_are_equivalent_3_0)
MR_def_extern_entry(fn__check_hlds__common__common_info_init_0_0)
MR_def_extern_entry(check_hlds__common__common_info_clear_structs_2_0)
MR_decl_static(__Unify___check_hlds__common__call_args_0_0)
MR_decl_static(__Compare___check_hlds__common__call_args_0_0)
MR_def_extern_entry(__Unify___check_hlds__common__common_info_0_0)
MR_def_extern_entry(__Compare___check_hlds__common__common_info_0_0)
MR_decl_static(__Unify___check_hlds__common__cons_id_map_0_0)
MR_decl_static(__Compare___check_hlds__common__cons_id_map_0_0)
MR_decl_static(__Unify___check_hlds__common__seen_calls_0_0)
MR_decl_static(__Compare___check_hlds__common__seen_calls_0_0)
MR_decl_static(__Unify___check_hlds__common__struct_map_0_0)
MR_decl_static(__Compare___check_hlds__common__struct_map_0_0)
MR_decl_static(__Unify___check_hlds__common__structure_0_0)
MR_decl_static(__Compare___check_hlds__common__structure_0_0)
MR_decl_static(__Unify___check_hlds__common__structures_0_0)
MR_decl_static(__Compare___check_hlds__common__structures_0_0)
MR_decl_static(check_hlds__common__IntroducedFrom__pred__common_optimise_construct__294__1_4_0)
MR_def_extern_entry(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_eqvclass__type_ctor_info_eqvclass_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
static const struct mercury_type_0 mercury_common_0[10] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__common, structure)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(eqvclass, eqvclass),
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(eqvclass, eqvclass),
MR_COMMON(0,5)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__common, call_args)
}
},
{
{
MR_TAG_COMMON(3,4,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_TAG_COMMON(0,0,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__common__common_optimise_construct_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__common__common_optimise_construct_10_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,4),
MR_INT_CTOR_ADDR,
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(check_hlds__common__IntroducedFrom__pred__common_optimise_construct__294__1_4_0),
0
},
};

static const struct mercury_type_4 mercury_common_4[3] =
{
{
3,
MR_string_const("Warning: redundant", 18)
},
{
2,
MR_string_const(".", 1)
},
{
3,
MR_string_const("Here is the previous", 20)
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
17,
1
},
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__common__type_ctor_info_structure_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1check_hlds__common__type_ctor_info_structure_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__common__type_ctor_info_structure_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__common__type_ctor_info_structures_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__common__structures_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__common__structures_0_0)),
	"check_hlds.common",
	"structures",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1check_hlds__common__type_ctor_info_structure_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__common__field_types_structure_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__common__du_functor_desc_structure_0_0 = {
	"structure",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__common__field_types_structure_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__common__du_stag_ordered_structure_0_0[] = {
	&mercury_data_check_hlds__common__du_functor_desc_structure_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__common__du_ptag_ordered_structure_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__common__du_stag_ordered_structure_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__common__du_name_ordered_structure_0[] = {
	&mercury_data_check_hlds__common__du_functor_desc_structure_0_0
};

const MR_Integer mercury_data_check_hlds__common__functor_number_map_structure_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__common__type_ctor_info_structure_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__common__structure_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__common__structure_0_0)),
	"check_hlds.common",
	"structure",
	{ (void *)mercury_data_check_hlds__common__du_name_ordered_structure_0 },
	{ (void *)mercury_data_check_hlds__common__du_ptag_ordered_structure_0 },
	1,
	4,
	mercury_data_check_hlds__common__functor_number_map_structure_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__common__type_ctor_info_structure_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1check_hlds__common__type_ctor_info_structure_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__common__type_ctor_info_structure_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__common__type_ctor_info_structure_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__common__type_ctor_info_struct_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__common__struct_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__common__struct_map_0_0)),
	"check_hlds.common",
	"struct_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__common__type_ctor_info_structure_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_report__type_ctor_info_seen_call_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__common__type_ctor_info_call_args_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1check_hlds__common__type_ctor_info_call_args_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__common__type_ctor_info_call_args_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_report__type_ctor_info_seen_call_id_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__common__type_ctor_info_call_args_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_check_hlds__det_report__type_ctor_info_seen_call_id_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1check_hlds__common__type_ctor_info_call_args_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__common__type_ctor_info_seen_calls_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__common__seen_calls_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__common__seen_calls_0_0)),
	"check_hlds.common",
	"seen_calls",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__common__type_ctor_info_call_args_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__common__type_ctor_info_cons_id_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__common__cons_id_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__common__cons_id_map_0_0)),
	"check_hlds.common",
	"cons_id_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__common__type_ctor_info_structure_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_eqvclass__type_ctor_info_eqvclass_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__common__field_types_common_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__common__type_ctor_info_structure_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__common__type_ctor_info_structure_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__common__type_ctor_info_call_args_0
};

const MR_ConstString mercury_data_check_hlds__common__field_names_common_info_0_0[] = {
	"var_eqv",
	"all_structs",
	"since_call_structs",
	"seen_calls"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__common__du_functor_desc_common_info_0_0 = {
	"common_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__common__field_types_common_info_0_0,
	mercury_data_check_hlds__common__field_names_common_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__common__du_stag_ordered_common_info_0_0[] = {
	&mercury_data_check_hlds__common__du_functor_desc_common_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__common__du_ptag_ordered_common_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__common__du_stag_ordered_common_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__common__du_name_ordered_common_info_0[] = {
	&mercury_data_check_hlds__common__du_functor_desc_common_info_0_0
};

const MR_Integer mercury_data_check_hlds__common__functor_number_map_common_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__common__type_ctor_info_common_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__common__common_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__common__common_info_0_0)),
	"check_hlds.common",
	"common_info",
	{ (void *)mercury_data_check_hlds__common__du_name_ordered_common_info_0 },
	{ (void *)mercury_data_check_hlds__common__du_ptag_ordered_common_info_0 },
	1,
	4,
	mercury_data_check_hlds__common__functor_number_map_common_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__common__field_types_call_args_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__common__du_functor_desc_call_args_0_0 = {
	"call_args",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__common__field_types_call_args_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__common__du_stag_ordered_call_args_0_0[] = {
	&mercury_data_check_hlds__common__du_functor_desc_call_args_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__common__du_ptag_ordered_call_args_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__common__du_stag_ordered_call_args_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__common__du_name_ordered_call_args_0[] = {
	&mercury_data_check_hlds__common__du_functor_desc_call_args_0_0
};

const MR_Integer mercury_data_check_hlds__common__functor_number_map_call_args_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__common__type_ctor_info_call_args_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__common__call_args_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__common__call_args_0_0)),
	"check_hlds.common",
	"call_args",
	{ (void *)mercury_data_check_hlds__common__du_name_ordered_call_args_0 },
	{ (void *)mercury_data_check_hlds__common__du_ptag_ordered_call_args_0 },
	1,
	4,
	mercury_data_check_hlds__common__functor_number_map_call_args_0
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__common__common_optimise_construct_10_0_1 = {
{
MR_PREDICATE,
"check_hlds.common",
"check_hlds.common",
"lambda_common_m_294",
4,
0
},
"check_hlds.common",
"common.m",
294,
"d1;c14;e;c4;"
};

MR_decl_entry(check_hlds__simplify__simplify_info_get_var_types_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(check_hlds__common_module0)
	MR_init_entry1(fn__check_hlds__common__lookup_var_type_ctor_2_0);
	MR_init_label4(fn__check_hlds__common__lookup_var_type_ctor_2_0,2,3,5,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__common__lookup_var_type_ctor_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		fn__check_hlds__common__lookup_var_type_ctor_2_0_i2);
MR_def_label(fn__check_hlds__common__lookup_var_type_ctor_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		fn__check_hlds__common__lookup_var_type_ctor_2_0_i3);
MR_def_label(fn__check_hlds__common__lookup_var_type_ctor_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		fn__check_hlds__common__lookup_var_type_ctor_2_0_i5);
MR_def_label(fn__check_hlds__common__lookup_var_type_ctor_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__common__lookup_var_type_ctor_2_0_i4);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__check_hlds__common__lookup_var_type_ctor_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("common.m", 8);
	MR_r2 = (MR_Word) MR_string_const("lookup_var_type_ctor: cannot find type_ctor", 43);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(eqvclass__partition_id_3_0);

MR_BEGIN_MODULE(check_hlds__common_module1)
	MR_init_entry1(check_hlds__common__ids_vars_match_3_0);
	MR_init_label4(check_hlds__common__ids_vars_match_3_0,28,3,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__common__ids_vars_match_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(check_hlds__common__ids_vars_match_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__common__ids_vars_match_3_0_i3);
	}
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__common__ids_vars_match_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__common__ids_vars_match_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_tempr3 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr1 = MR_tempr3;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(eqvclass__partition_id_3_0,
		check_hlds__common__ids_vars_match_3_0_i6);
MR_def_label(check_hlds__common__ids_vars_match_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__ids_vars_match_3_0_i1);
	}
	if ((MR_sv(2) != MR_r2)) {
		MR_GOTO_LAB(check_hlds__common__ids_vars_match_3_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__common__ids_vars_match_3_0_i28);
MR_def_label(check_hlds__common__ids_vars_match_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__common_module2)
	MR_init_entry1(check_hlds__common__find_matching_cell_construct_4_0);
	MR_init_label4(check_hlds__common__find_matching_cell_construct_4_0,20,5,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__common__find_matching_cell_construct_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(check_hlds__common__find_matching_cell_construct_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__common__find_matching_cell_construct_4_0_i1);
	}
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_sv(1), 1);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__common__ids_vars_match_3_0,
		check_hlds__common__find_matching_cell_construct_4_0_i5);
MR_def_label(check_hlds__common__find_matching_cell_construct_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__find_matching_cell_construct_4_0_i3);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__common__find_matching_cell_construct_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__common__find_matching_cell_construct_4_0_i20);
MR_def_label(check_hlds__common__find_matching_cell_construct_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(svmap__det_update_4_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(svmap__det_insert_4_0);

MR_BEGIN_MODULE(check_hlds__common_module3)
	MR_init_entry1(check_hlds__common__do_record_cell_in_struct_map_5_0);
	MR_init_label7(check_hlds__common__do_record_cell_in_struct_map_5_0,3,6,5,9,2,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__common__do_record_cell_in_struct_map_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__common__do_record_cell_in_struct_map_5_0_i3);
MR_def_label(check_hlds__common__do_record_cell_in_struct_map_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__do_record_cell_in_struct_map_5_0_i2);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__common__do_record_cell_in_struct_map_5_0_i6);
MR_def_label(check_hlds__common__do_record_cell_in_struct_map_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__do_record_cell_in_struct_map_5_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__common__do_record_cell_in_struct_map_5_0_i9);
MR_def_label(check_hlds__common__do_record_cell_in_struct_map_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		check_hlds__common__do_record_cell_in_struct_map_5_0_i9);
MR_def_label(check_hlds__common__do_record_cell_in_struct_map_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(svmap__det_update_4_0);
MR_def_label(check_hlds__common__do_record_cell_in_struct_map_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__common__do_record_cell_in_struct_map_5_0_i12);
MR_def_label(check_hlds__common__do_record_cell_in_struct_map_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		check_hlds__common__do_record_cell_in_struct_map_5_0_i13);
MR_def_label(check_hlds__common__do_record_cell_in_struct_map_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__simplify__simplify_info_get_common_info_2_0);
MR_decl_entry(check_hlds__simplify__simplify_info_set_common_info_3_0);

MR_BEGIN_MODULE(check_hlds__common_module4)
	MR_init_entry1(check_hlds__common__record_cell_in_maps_6_0);
	MR_init_label3(check_hlds__common__record_cell_in_maps_6_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__common__record_cell_in_maps_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_common_info_2_0,
		check_hlds__common__record_cell_in_maps_6_0_i2);
MR_def_label(check_hlds__common__record_cell_in_maps_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_ctfield(0, MR_r1, 2);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_ctfield(0, MR_sv(7), 1);
	MR_np_call_localret_ent(check_hlds__common__do_record_cell_in_struct_map_5_0,
		check_hlds__common__record_cell_in_maps_6_0_i3);
MR_def_label(check_hlds__common__record_cell_in_maps_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__common__do_record_cell_in_struct_map_5_0,
		check_hlds__common__record_cell_in_maps_6_0_i4);
MR_def_label(check_hlds__common__record_cell_in_maps_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_sv(7), 3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__simplify__simplify_info_set_common_info_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(check_hlds__common_module5)
	MR_init_entry1(check_hlds__common__types_match_exactly_2_0);
	MR_init_label8(check_hlds__common__types_match_exactly_2_0,4,8,10,14,16,31,33,27)
	MR_init_label5(check_hlds__common__types_match_exactly_2_0,17,19,74,22,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__common__types_match_exactly_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__common__types_match_exactly_2_0_i4) MR_AND
		MR_LABEL_AP(check_hlds__common__types_match_exactly_2_0_i8) MR_AND
		MR_LABEL_AP(check_hlds__common__types_match_exactly_2_0_i14) MR_AND
		MR_LABEL_AP(check_hlds__common__types_match_exactly_2_0_i16));
MR_def_label(check_hlds__common__types_match_exactly_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__common__types_match_exactly_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
	}
MR_def_label(check_hlds__common__types_match_exactly_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__common__types_match_exactly_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__common__types_match_exactly_2_0_i10);
MR_def_label(check_hlds__common__types_match_exactly_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__types_match_exactly_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__common__types_match_exactly_list_2_0);
MR_def_label(check_hlds__common__types_match_exactly_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__common__types_match_exactly_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_tempr2 = MR_ctfield(2, MR_r2, 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(check_hlds__common__types_match_exactly_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(check_hlds__common__types_match_exactly_2_0_i17);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(check_hlds__common__types_match_exactly_2_0_i27);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(check_hlds__common__types_match_exactly_2_0_i31);
	}
	MR_r1 = (MR_Word) MR_string_const("common.m", 8);
	MR_r2 = (MR_Word) MR_string_const("kind annotation", 15);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__common__types_match_exactly_2_0_i74);
MR_def_label(check_hlds__common__types_match_exactly_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(check_hlds__common__types_match_exactly_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__common__types_match_exactly_2_0_i33);
MR_def_label(check_hlds__common__types_match_exactly_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__types_match_exactly_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__common__types_match_exactly_list_2_0);
MR_def_label(check_hlds__common__types_match_exactly_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(check_hlds__common__types_match_exactly_2_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__common__types_match_exactly_list_2_0);
MR_def_label(check_hlds__common__types_match_exactly_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(check_hlds__common__types_match_exactly_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 3);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 3);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(check_hlds__common__types_match_exactly_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(check_hlds__common__types_match_exactly_list_2_0,
		check_hlds__common__types_match_exactly_2_0_i19);
MR_def_label(check_hlds__common__types_match_exactly_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__types_match_exactly_2_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(check_hlds__common__types_match_exactly_2_0_i22);
	}
	MR_r1 = ((MR_Integer) MR_sv(2) == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__common__types_match_exactly_2_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__common__types_match_exactly_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__common__types_match_exactly_2_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__common__types_match_exactly_2_0_i4) MR_AND
		MR_LABEL_AP(check_hlds__common__types_match_exactly_2_0_i8) MR_AND
		MR_LABEL_AP(check_hlds__common__types_match_exactly_2_0_i14) MR_AND
		MR_LABEL_AP(check_hlds__common__types_match_exactly_2_0_i16));
MR_def_label(check_hlds__common__types_match_exactly_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__common_module6)
	MR_init_entry1(check_hlds__common__types_match_exactly_list_2_0);
	MR_init_label4(check_hlds__common__types_match_exactly_list_2_0,24,3,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__common__types_match_exactly_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__common__types_match_exactly_list_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__common__types_match_exactly_list_2_0_i3);
	}
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__common__types_match_exactly_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__common__types_match_exactly_list_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(check_hlds__common__types_match_exactly_2_0,
		check_hlds__common__types_match_exactly_list_2_0_i6);
MR_def_label(check_hlds__common__types_match_exactly_list_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__types_match_exactly_list_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__common__types_match_exactly_list_2_0_i24);
MR_def_label(check_hlds__common__types_match_exactly_list_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_var_info_3_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(parse_tree__prog_type__type_unify_list_5_0);
MR_decl_entry(parse_tree__prog_type__type_unify_5_0);
MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(check_hlds__simplify__simplify_info_apply_type_substitution_3_0);
MR_decl_entry(hlds__hlds_rtti__rtti_var_info_duplicate_4_0);
MR_decl_entry(check_hlds__simplify__simplify_info_set_rtti_varmaps_3_0);

MR_BEGIN_MODULE(check_hlds__common_module7)
	MR_init_entry1(check_hlds__common__apply_induced_tsubst_4_0);
	MR_init_label8(check_hlds__common__apply_induced_tsubst_4_0,2,3,4,22,14,16,18,19)
	MR_init_label8(check_hlds__common__apply_induced_tsubst_4_0,9,11,12,7,24,23,5,6)
	MR_init_label3(check_hlds__common__apply_induced_tsubst_4_0,28,34,32)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__common__apply_induced_tsubst_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0,
		check_hlds__common__apply_induced_tsubst_4_0_i2);
MR_def_label(check_hlds__common__apply_induced_tsubst_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_var_info_3_0,
		check_hlds__common__apply_induced_tsubst_4_0_i3);
MR_def_label(check_hlds__common__apply_induced_tsubst_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_var_info_3_0,
		check_hlds__common__apply_induced_tsubst_4_0_i4);
MR_def_label(check_hlds__common__apply_induced_tsubst_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__common__apply_induced_tsubst_4_0_i9);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__common__apply_induced_tsubst_4_0_i14);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__common__apply_induced_tsubst_4_0_i6);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__common__apply_induced_tsubst_4_0_i22);
MR_def_label(check_hlds__common__apply_induced_tsubst_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_GOTO_LAB(check_hlds__common__apply_induced_tsubst_4_0_i7);
MR_def_label(check_hlds__common__apply_induced_tsubst_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),2)) {
		MR_GOTO_LAB(check_hlds__common__apply_induced_tsubst_4_0_i6);
	}
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(2, MR_sv(4), 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(2, MR_r1, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__common__apply_induced_tsubst_4_0_i16);
MR_def_label(check_hlds__common__apply_induced_tsubst_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__apply_induced_tsubst_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__common__apply_induced_tsubst_4_0_i18);
MR_def_label(check_hlds__common__apply_induced_tsubst_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_list_5_0,
		check_hlds__common__apply_induced_tsubst_4_0_i19);
MR_def_label(check_hlds__common__apply_induced_tsubst_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__apply_induced_tsubst_4_0_i5);
	}
	MR_r3 = MR_r2;
	MR_GOTO_LAB(check_hlds__common__apply_induced_tsubst_4_0_i7);
MR_def_label(check_hlds__common__apply_induced_tsubst_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(check_hlds__common__apply_induced_tsubst_4_0_i6);
	}
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_ctfield(1, MR_sv(4), 0);
	MR_sv(8) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__common__apply_induced_tsubst_4_0_i11);
MR_def_label(check_hlds__common__apply_induced_tsubst_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_5_0,
		check_hlds__common__apply_induced_tsubst_4_0_i12);
MR_def_label(check_hlds__common__apply_induced_tsubst_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__apply_induced_tsubst_4_0_i5);
	}
	MR_r3 = MR_r2;
MR_def_label(check_hlds__common__apply_induced_tsubst_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__is_empty_1_0,
		check_hlds__common__apply_induced_tsubst_4_0_i24);
MR_def_label(check_hlds__common__apply_induced_tsubst_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__apply_induced_tsubst_4_0_i23);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__common__apply_induced_tsubst_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__simplify__simplify_info_apply_type_substitution_3_0);
MR_def_label(check_hlds__common__apply_induced_tsubst_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
MR_def_label(check_hlds__common__apply_induced_tsubst_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__common__apply_induced_tsubst_4_0_i28);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_var_info_duplicate_4_0,
		check_hlds__common__apply_induced_tsubst_4_0_i34);
MR_def_label(check_hlds__common__apply_induced_tsubst_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__common__apply_induced_tsubst_4_0_i32);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_var_info_duplicate_4_0,
		check_hlds__common__apply_induced_tsubst_4_0_i34);
MR_def_label(check_hlds__common__apply_induced_tsubst_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__simplify__simplify_info_set_rtti_varmaps_3_0);
MR_def_label(check_hlds__common__apply_induced_tsubst_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("common.m", 8);
	MR_r2 = (MR_Word) MR_string_const("apply_induced_tsubst: inconsistent info", 39);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__simplify__simplify_info_get_module_info_2_0);
MR_decl_entry(check_hlds__mode_util__mode_get_insts_4_0);
MR_decl_entry(check_hlds__inst_match__inst_is_ground_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_eqvclass__type_ctor_info_partition_id_0;
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_search_var_3_0);
MR_decl_entry(sveqvclass__ensure_equivalence_4_0);
MR_decl_entry(check_hlds__simplify__simplify_info_set_requantify_2_0);
MR_decl_entry(transform_hlds__pd_cost__goal_cost_2_0);
MR_decl_entry(check_hlds__simplify__simplify_info_incr_cost_delta_3_0);

MR_BEGIN_MODULE(check_hlds__common_module8)
	MR_init_entry1(check_hlds__common__common_optimise_construct_10_0);
	MR_init_label8(check_hlds__common__common_optimise_construct_10_0,2,3,8,4,10,11,12,14)
	MR_init_label8(check_hlds__common__common_optimise_construct_10_0,15,17,19,21,23,24,26,27)
	MR_init_label4(check_hlds__common__common_optimise_construct_10_0,28,29,13,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__common__common_optimise_construct_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(0, MR_r4, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__common__common_optimise_construct_10_0_i2);
MR_def_label(check_hlds__common__common_optimise_construct_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__common__common_optimise_construct_10_0_i3);
MR_def_label(check_hlds__common__common_optimise_construct_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		check_hlds__common__common_optimise_construct_10_0_i8);
MR_def_label(check_hlds__common__common_optimise_construct_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_construct_10_0_i4);
	}
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_decr_sp_and_return(14);
MR_def_label(check_hlds__common__common_optimise_construct_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__common__lookup_var_type_ctor_2_0,
		check_hlds__common__common_optimise_construct_10_0_i10);
MR_def_label(check_hlds__common__common_optimise_construct_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_common_info_2_0,
		check_hlds__common__common_optimise_construct_10_0_i11);
MR_def_label(check_hlds__common__common_optimise_construct_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(eqvclass, partition_id);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_ctfield(0, MR_sv(8), 0);
	MR_np_call_localret_ent(list__map_foldl_5_1,
		check_hlds__common__common_optimise_construct_10_0_i12);
MR_def_label(check_hlds__common__common_optimise_construct_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_ctfield(0, MR_sv(8), 1);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__common__common_optimise_construct_10_0_i14);
MR_def_label(check_hlds__common__common_optimise_construct_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_search_var_3_0,
		check_hlds__common__common_optimise_construct_10_0_i15);
MR_def_label(check_hlds__common__common_optimise_construct_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_construct_10_0_i13);
	}
	MR_r3 = MR_sv(11);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__common__common_optimise_construct_10_0_i17);
MR_def_label(check_hlds__common__common_optimise_construct_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_construct_10_0_i13);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__common__common_optimise_construct_10_0_i19);
MR_def_label(check_hlds__common__common_optimise_construct_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_construct_10_0_i13);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__common__find_matching_cell_construct_4_0,
		check_hlds__common__common_optimise_construct_10_0_i21);
MR_def_label(check_hlds__common__common_optimise_construct_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_construct_10_0_i13);
	}
	MR_sv(2) = MR_ctfield(0, MR_r2, 0);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(sveqvclass__ensure_equivalence_4_0,
		check_hlds__common__common_optimise_construct_10_0_i23);
MR_def_label(check_hlds__common__common_optimise_construct_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		check_hlds__common__common_optimise_construct_10_0_i24);
MR_def_label(check_hlds__common__common_optimise_construct_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_construct_10_0_i26);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(14);
MR_def_label(check_hlds__common__common_optimise_construct_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr4 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0,
		check_hlds__common__common_optimise_construct_10_0_i27);
MR_def_label(check_hlds__common__common_optimise_construct_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__common__common_optimise_construct_10_0_i28);
MR_def_label(check_hlds__common__common_optimise_construct_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_cost__goal_cost_2_0,
		check_hlds__common__common_optimise_construct_10_0_i29);
MR_def_label(check_hlds__common__common_optimise_construct_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_incr_cost_delta_3_0,
		check_hlds__common__common_optimise_construct_10_0_i31);
MR_def_label(check_hlds__common__common_optimise_construct_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_sv(1) = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_sv(5);
	MR_r1 = MR_sv(7);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(12);
	}
	MR_np_call_localret_ent(check_hlds__common__record_cell_in_maps_6_0,
		check_hlds__common__common_optimise_construct_10_0_i31);
MR_def_label(check_hlds__common__common_optimise_construct_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__common_module9)
	MR_init_entry1(check_hlds__common__find_matching_cell_deconstruct_4_0);
	MR_init_label4(check_hlds__common__find_matching_cell_deconstruct_4_0,23,4,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__common__find_matching_cell_deconstruct_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(check_hlds__common__find_matching_cell_deconstruct_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__common__find_matching_cell_deconstruct_4_0_i1);
	}
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_ctfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(eqvclass__partition_id_3_0,
		check_hlds__common__find_matching_cell_deconstruct_4_0_i4);
MR_def_label(check_hlds__common__find_matching_cell_deconstruct_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__find_matching_cell_deconstruct_4_0_i3);
	}
	if ((MR_sv(4) != MR_r2)) {
		MR_GOTO_LAB(check_hlds__common__find_matching_cell_deconstruct_4_0_i3);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__common__find_matching_cell_deconstruct_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__common__find_matching_cell_deconstruct_4_0_i23);
MR_def_label(check_hlds__common__find_matching_cell_deconstruct_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(eqvclass__ensure_element_partition_id_4_0);
MR_decl_entry(hlds__hlds_goal__goal_info_has_feature_2_0);
MR_decl_entry(eqvclass__ensure_corresponding_equivalences_4_0);
MR_decl_entry(check_hlds__simplify__simplify_info_set_rerun_det_2_0);

MR_BEGIN_MODULE(check_hlds__common_module10)
	MR_init_entry1(check_hlds__common__common_optimise_deconstruct_12_0);
	MR_init_label8(check_hlds__common__common_optimise_deconstruct_12_0,2,4,7,3,9,10,11,15)
	MR_init_label8(check_hlds__common__common_optimise_deconstruct_12_0,18,20,22,24,26,27,28,29)
	MR_init_label4(check_hlds__common__common_optimise_deconstruct_12_0,30,31,12,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__common__common_optimise_deconstruct_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(14) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__common__common_optimise_deconstruct_12_0_i2);
MR_def_label(check_hlds__common__common_optimise_deconstruct_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_sv(8);
	MR_sv(9) = MR_r1;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__common__common_optimise_deconstruct_12_0_i4);
MR_def_label(check_hlds__common__common_optimise_deconstruct_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		check_hlds__common__common_optimise_deconstruct_12_0_i7);
MR_def_label(check_hlds__common__common_optimise_deconstruct_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_deconstruct_12_0_i3);
	}
	MR_r3 = MR_sv(6);
	MR_sv(6) = MR_sv(8);
	MR_sv(6) = MR_r3;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(14);
	MR_decr_sp_and_return(16);
MR_def_label(check_hlds__common__common_optimise_deconstruct_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__common__lookup_var_type_ctor_2_0,
		check_hlds__common__common_optimise_deconstruct_12_0_i9);
MR_def_label(check_hlds__common__common_optimise_deconstruct_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_common_info_2_0,
		check_hlds__common__common_optimise_deconstruct_12_0_i10);
MR_def_label(check_hlds__common__common_optimise_deconstruct_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(0, MR_sv(10), 0);
	MR_np_call_localret_ent(eqvclass__ensure_element_partition_id_4_0,
		check_hlds__common__common_optimise_deconstruct_12_0_i11);
MR_def_label(check_hlds__common__common_optimise_deconstruct_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_ctfield(0, MR_sv(10), 2);
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__common__common_optimise_deconstruct_12_0_i15);
MR_def_label(check_hlds__common__common_optimise_deconstruct_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_deconstruct_12_0_i12);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__common__common_optimise_deconstruct_12_0_i18);
MR_def_label(check_hlds__common__common_optimise_deconstruct_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_deconstruct_12_0_i12);
	}
	MR_r3 = MR_sv(13);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__common__common_optimise_deconstruct_12_0_i20);
MR_def_label(check_hlds__common__common_optimise_deconstruct_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_deconstruct_12_0_i12);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(13);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__common__common_optimise_deconstruct_12_0_i22);
MR_def_label(check_hlds__common__common_optimise_deconstruct_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_deconstruct_12_0_i12);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__common__find_matching_cell_deconstruct_4_0,
		check_hlds__common__common_optimise_deconstruct_12_0_i24);
MR_def_label(check_hlds__common__common_optimise_deconstruct_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_deconstruct_12_0_i12);
	}
	MR_sv(1) = MR_ctfield(0, MR_r2, 1);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(eqvclass__ensure_corresponding_equivalences_4_0,
		check_hlds__common__common_optimise_deconstruct_12_0_i26);
MR_def_label(check_hlds__common__common_optimise_deconstruct_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(14);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		check_hlds__common__common_optimise_deconstruct_12_0_i27);
MR_def_label(check_hlds__common__common_optimise_deconstruct_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0,
		check_hlds__common__common_optimise_deconstruct_12_0_i28);
MR_def_label(check_hlds__common__common_optimise_deconstruct_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(7);
	MR_tfield(0, MR_r1, 1) = MR_sv(8);
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(transform_hlds__pd_cost__goal_cost_2_0,
		check_hlds__common__common_optimise_deconstruct_12_0_i29);
MR_def_label(check_hlds__common__common_optimise_deconstruct_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_incr_cost_delta_3_0,
		check_hlds__common__common_optimise_deconstruct_12_0_i30);
MR_def_label(check_hlds__common__common_optimise_deconstruct_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__common__common_optimise_deconstruct_12_0_i31);
MR_def_label(check_hlds__common__common_optimise_deconstruct_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_deconstruct_12_0_i35);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_rerun_det_2_0,
		check_hlds__common__common_optimise_deconstruct_12_0_i35);
MR_def_label(check_hlds__common__common_optimise_deconstruct_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_sv(1) = MR_sv(7);
	MR_r1 = MR_sv(9);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(14);
	}
	MR_np_call_localret_ent(check_hlds__common__record_cell_in_maps_6_0,
		check_hlds__common__common_optimise_deconstruct_12_0_i35);
MR_def_label(check_hlds__common__common_optimise_deconstruct_12_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__common_module11)
	MR_init_entry1(check_hlds__common__common_optimise_unification_11_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__common__common_optimise_unification_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r4;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_r5 = MR_r8;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__common_module12)
	MR_init_entry1(check_hlds__common__common_var_lists_are_equiv_3_0);
	MR_init_label7(check_hlds__common__common_var_lists_are_equiv_3_0,42,3,8,7,10,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__common__common_var_lists_are_equiv_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(check_hlds__common__common_var_lists_are_equiv_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__common__common_var_lists_are_equiv_3_0_i3);
	}
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__common__common_var_lists_are_equiv_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__common__common_var_lists_are_equiv_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__common__common_var_lists_are_equiv_3_0_i8);
MR_def_label(check_hlds__common__common_var_lists_are_equiv_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__common_var_lists_are_equiv_3_0_i7);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__common__common_var_lists_are_equiv_3_0_i42);
MR_def_label(check_hlds__common__common_var_lists_are_equiv_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(eqvclass__partition_id_3_0,
		check_hlds__common__common_var_lists_are_equiv_3_0_i10);
MR_def_label(check_hlds__common__common_var_lists_are_equiv_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__common_var_lists_are_equiv_3_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(eqvclass__partition_id_3_0,
		check_hlds__common__common_var_lists_are_equiv_3_0_i12);
MR_def_label(check_hlds__common__common_var_lists_are_equiv_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__common_var_lists_are_equiv_3_0_i1);
	}
	if ((MR_sv(2) != MR_r2)) {
		MR_GOTO_LAB(check_hlds__common__common_var_lists_are_equiv_3_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__common__common_var_lists_are_equiv_3_0_i42);
MR_def_label(check_hlds__common__common_var_lists_are_equiv_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__context_0_0);

MR_BEGIN_MODULE(check_hlds__common_module13)
	MR_init_entry1(check_hlds__common__find_previous_call_5_0);
	MR_init_label5(check_hlds__common__find_previous_call_5_0,5,3,7,9,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__common__find_previous_call_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__common__find_previous_call_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__common__common_var_lists_are_equiv_3_0,
		check_hlds__common__find_previous_call_5_0_i5);
MR_def_label(check_hlds__common__find_previous_call_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__find_previous_call_5_0_i3);
	}
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__common__find_previous_call_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_np_localcall_lab(check_hlds__common__find_previous_call_5_0,
		check_hlds__common__find_previous_call_5_0_i7);
MR_def_label(check_hlds__common__find_previous_call_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__find_previous_call_5_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		check_hlds__common__find_previous_call_5_0_i9);
MR_def_label(check_hlds__common__find_previous_call_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__find_previous_call_5_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__common__find_previous_call_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__modes_to_uni_modes_4_0);
MR_decl_entry(check_hlds__simplify__simplify_do_warn_duplicate_calls_1_0);
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(fn__check_hlds__det_report__det_report_seen_call_id_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(check_hlds__simplify__simplify_info_do_add_error_spec_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);

MR_BEGIN_MODULE(check_hlds__common_module14)
	MR_init_entry1(check_hlds__common__common_optimise_call_2_9_0);
	MR_init_label8(check_hlds__common__common_optimise_call_2_9_0,2,4,8,10,11,12,13,15)
	MR_init_label8(check_hlds__common__common_optimise_call_2_9_0,17,18,19,21,22,23,24,25)
	MR_init_label8(check_hlds__common__common_optimise_call_2_9_0,14,27,28,29,30,34,31,6)
	MR_init_label5(check_hlds__common__common_optimise_call_2_9_0,36,3,39,40,42)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__common__common_optimise_call_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_common_info_2_0,
		check_hlds__common__common_optimise_call_2_9_0_i2);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r1, 3);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_ctfield(0, MR_r1, 0);
	MR_sv(9) = MR_r3;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, seen_call_id);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__common__common_optimise_call_2_9_0_i4);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_call_2_9_0_i3);
	}
	MR_r3 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__common__find_previous_call_5_0,
		check_hlds__common__common_optimise_call_2_9_0_i8);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_call_2_9_0_i6);
	}
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__common__common_optimise_call_2_9_0_i10);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r3 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_util__modes_to_uni_modes_4_0,
		check_hlds__common__common_optimise_call_2_9_0_i11);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0,
		check_hlds__common__common_optimise_call_2_9_0_i12);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_sv(11) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__common__common_optimise_call_2_9_0_i13);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_warn_duplicate_calls_1_0,
		check_hlds__common__common_optimise_call_2_9_0_i15);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_call_2_9_0_i14);
	}
	MR_r3 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		check_hlds__common__common_optimise_call_2_9_0_i17);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		check_hlds__common__common_optimise_call_2_9_0_i18);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__common__types_match_exactly_list_2_0,
		check_hlds__common__common_optimise_call_2_9_0_i19);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_call_2_9_0_i14);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__common__common_optimise_call_2_9_0_i21);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__det_report__det_report_seen_call_id_2_0,
		check_hlds__common__common_optimise_call_2_9_0_i22);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,0,8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__common__common_optimise_call_2_9_0_i23);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,4,2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__common__common_optimise_call_2_9_0_i24);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 17;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr3, 0) = (MR_Integer) 17;
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr3, 2) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr3, 3) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(2,6,0);
	MR_tfield(0, MR_r1, 2) = MR_tempr3;
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_do_add_error_spec_3_0,
		check_hlds__common__common_optimise_call_2_9_0_i25);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_sv(1) = MR_sv(7);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_cost__goal_cost_2_0,
		check_hlds__common__common_optimise_call_2_9_0_i27);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(6);
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_sv(1) = MR_sv(7);
	MR_sv(3) = MR_sv(11);
	MR_np_call_localret_ent(transform_hlds__pd_cost__goal_cost_2_0,
		check_hlds__common__common_optimise_call_2_9_0_i27);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_incr_cost_delta_3_0,
		check_hlds__common__common_optimise_call_2_9_0_i28);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__common__common_optimise_call_2_9_0_i29);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__common__common_optimise_call_2_9_0_i30);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_call_2_9_0_i31);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_rerun_det_2_0,
		check_hlds__common__common_optimise_call_2_9_0_i34);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		check_hlds__common__common_optimise_call_2_9_0_i42);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		check_hlds__common__common_optimise_call_2_9_0_i42);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__common__common_optimise_call_2_9_0_i36);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, seen_call_id);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__common__common_optimise_call_2_9_0_i40);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__common__common_optimise_call_2_9_0_i39);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, seen_call_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		check_hlds__common__common_optimise_call_2_9_0_i40);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(2) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		check_hlds__common__common_optimise_call_2_9_0_i42);
MR_def_label(check_hlds__common__common_optimise_call_2_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_matches_binding_4_0);
MR_decl_entry(check_hlds__inst_match__inst_is_not_partly_unique_2_0);
MR_decl_entry(check_hlds__inst_match__inst_is_free_2_0);

MR_BEGIN_MODULE(check_hlds__common_module15)
	MR_init_entry1(check_hlds__common__partition_call_args_7_0);
	MR_init_label8(check_hlds__common__partition_call_args_7_0,64,63,8,10,12,13,16,14)
	MR_init_label5(check_hlds__common__partition_call_args_7_0,18,20,22,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__common__partition_call_args_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__common__partition_call_args_7_0_i63);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__common__partition_call_args_7_0_i64);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__common__partition_call_args_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("common.m", 8);
	MR_r2 = (MR_Word) MR_string_const("partition_call_args: length mismatch (1)", 40);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__common__partition_call_args_7_0_i2);
MR_def_label(check_hlds__common__partition_call_args_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__common__partition_call_args_7_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("common.m", 8);
	MR_r2 = (MR_Word) MR_string_const("partition_call_args: length mismatch (2)", 40);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__common__partition_call_args_7_0_i2);
MR_def_label(check_hlds__common__partition_call_args_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_r4, 0);
	MR_sv(9) = MR_ctfield(1, MR_r3, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_r4 = MR_ctfield(1, MR_r4, 1);
	MR_np_localcall_lab(check_hlds__common__partition_call_args_7_0,
		check_hlds__common__partition_call_args_7_0_i10);
MR_def_label(check_hlds__common__partition_call_args_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__partition_call_args_7_0_i1);
	}
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__common__partition_call_args_7_0_i12);
MR_def_label(check_hlds__common__partition_call_args_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__common__partition_call_args_7_0_i13);
MR_def_label(check_hlds__common__partition_call_args_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_binding_4_0,
		check_hlds__common__partition_call_args_7_0_i16);
MR_def_label(check_hlds__common__partition_call_args_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__partition_call_args_7_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__common__partition_call_args_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_not_partly_unique_2_0,
		check_hlds__common__partition_call_args_7_0_i18);
MR_def_label(check_hlds__common__partition_call_args_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__partition_call_args_7_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_binding_4_0,
		check_hlds__common__partition_call_args_7_0_i20);
MR_def_label(check_hlds__common__partition_call_args_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__partition_call_args_7_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		check_hlds__common__partition_call_args_7_0_i22);
MR_def_label(check_hlds__common__partition_call_args_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__partition_call_args_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(6);
	MR_r2 = MR_sv(4);
	}
MR_def_label(check_hlds__common__partition_call_args_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__common__partition_call_args_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);

MR_BEGIN_MODULE(check_hlds__common_module16)
	MR_init_entry1(check_hlds__common__common_optimise_call_8_0);
	MR_init_label8(check_hlds__common__common_optimise_call_8_0,3,4,6,5,8,9,10,11)
	MR_init_label2(check_hlds__common__common_optimise_call_8_0,12,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__common__common_optimise_call_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__common__common_optimise_call_8_0_i3);
MR_def_label(check_hlds__common__common_optimise_call_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__common__common_optimise_call_8_0_i4);
MR_def_label(check_hlds__common__common_optimise_call_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_call_8_0_i6);
	}
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__common__common_optimise_call_8_0_i5);
MR_def_label(check_hlds__common__common_optimise_call_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_call_8_0_i2);
	}
	MR_r1 = MR_sv(8);
MR_def_label(check_hlds__common__common_optimise_call_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__common__common_optimise_call_8_0_i8);
MR_def_label(check_hlds__common__common_optimise_call_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__common__common_optimise_call_8_0_i9);
MR_def_label(check_hlds__common__common_optimise_call_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__common__common_optimise_call_8_0_i10);
MR_def_label(check_hlds__common__common_optimise_call_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__common__common_optimise_call_8_0_i11);
MR_def_label(check_hlds__common__common_optimise_call_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__common__partition_call_args_7_0,
		check_hlds__common__common_optimise_call_8_0_i12);
MR_def_label(check_hlds__common__common_optimise_call_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_call_8_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__common__common_optimise_call_2_9_0);
MR_def_label(check_hlds__common__common_optimise_call_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__common_module17)
	MR_init_entry1(check_hlds__common__common_optimise_higher_order_call_9_0);
	MR_init_label7(check_hlds__common__common_optimise_higher_order_call_9_0,3,5,4,7,8,9,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__common__common_optimise_higher_order_call_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__common__common_optimise_higher_order_call_9_0_i3);
MR_def_label(check_hlds__common__common_optimise_higher_order_call_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_higher_order_call_9_0_i5);
	}
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(check_hlds__common__common_optimise_higher_order_call_9_0_i4);
MR_def_label(check_hlds__common__common_optimise_higher_order_call_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_higher_order_call_9_0_i2);
	}
	MR_r1 = MR_sv(7);
MR_def_label(check_hlds__common__common_optimise_higher_order_call_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__common__common_optimise_higher_order_call_9_0_i7);
MR_def_label(check_hlds__common__common_optimise_higher_order_call_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__common__common_optimise_higher_order_call_9_0_i8);
MR_def_label(check_hlds__common__common_optimise_higher_order_call_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__common__partition_call_args_7_0,
		check_hlds__common__common_optimise_higher_order_call_9_0_i9);
MR_def_label(check_hlds__common__common_optimise_higher_order_call_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__common_optimise_higher_order_call_9_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__common__common_optimise_call_2_9_0);
	}
MR_def_label(check_hlds__common__common_optimise_higher_order_call_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__common_module18)
	MR_init_entry1(check_hlds__common__common_vars_are_equivalent_3_0);
	MR_init_label5(check_hlds__common__common_vars_are_equivalent_3_0,4,6,8,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__common__common_vars_are_equivalent_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(0, MR_r3, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__common__common_vars_are_equivalent_3_0_i4);
MR_def_label(check_hlds__common__common_vars_are_equivalent_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__common__common_vars_are_equivalent_3_0_i2);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(eqvclass__partition_id_3_0,
		check_hlds__common__common_vars_are_equivalent_3_0_i6);
MR_def_label(check_hlds__common__common_vars_are_equivalent_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__common_vars_are_equivalent_3_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(eqvclass__partition_id_3_0,
		check_hlds__common__common_vars_are_equivalent_3_0_i8);
MR_def_label(check_hlds__common__common_vars_are_equivalent_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__common__common_vars_are_equivalent_3_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_r2);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__common__common_vars_are_equivalent_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__common__common_vars_are_equivalent_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(eqvclass__init_1_0);

MR_BEGIN_MODULE(check_hlds__common_module19)
	MR_init_entry1(fn__check_hlds__common__common_info_init_0_0);
	MR_init_label3(fn__check_hlds__common__common_info_init_0_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__common__common_info_init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(eqvclass__init_1_0,
		fn__check_hlds__common__common_info_init_0_0_i2);
MR_def_label(fn__check_hlds__common__common_info_init_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(map__init_1_0,
		fn__check_hlds__common__common_info_init_0_0_i3);
MR_def_label(fn__check_hlds__common__common_info_init_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, seen_call_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_np_call_localret_ent(map__init_1_0,
		fn__check_hlds__common__common_info_init_0_0_i4);
MR_def_label(fn__check_hlds__common__common_info_init_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__common_module20)
	MR_init_entry1(check_hlds__common__common_info_clear_structs_2_0);
	MR_init_label1(check_hlds__common__common_info_clear_structs_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__common__common_info_clear_structs_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__common__common_info_clear_structs_2_0_i2);
MR_def_label(check_hlds__common__common_info_clear_structs_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__common_module21)
	MR_init_entry1(__Unify___check_hlds__common__call_args_0_0);
	MR_init_label4(__Unify___check_hlds__common__call_args_0_0,4,6,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__common__call_args_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__common__call_args_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___check_hlds__common__call_args_0_0_i4);
MR_def_label(__Unify___check_hlds__common__call_args_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__common__call_args_0_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__common__call_args_0_0_i6);
MR_def_label(__Unify___check_hlds__common__call_args_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__common__call_args_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__common__call_args_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__common__call_args_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__context_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__common_module22)
	MR_init_entry1(__Compare___check_hlds__common__call_args_0_0);
	MR_init_label5(__Compare___check_hlds__common__call_args_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__common__call_args_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__common__call_args_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__common__call_args_0_0_i2);
MR_def_label(__Compare___check_hlds__common__call_args_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__common__call_args_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___check_hlds__common__call_args_0_0_i5);
MR_def_label(__Compare___check_hlds__common__call_args_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__common__call_args_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__common__call_args_0_0_i9);
MR_def_label(__Compare___check_hlds__common__call_args_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__common__call_args_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__common__call_args_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___eqvclass__eqvclass_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__common_module23)
	MR_init_entry1(__Unify___check_hlds__common__common_info_0_0);
	MR_init_label5(__Unify___check_hlds__common__common_info_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__common__common_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__common__common_info_0_0_i12);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___eqvclass__eqvclass_1_0,
		__Unify___check_hlds__common__common_info_0_0_i4);
MR_def_label(__Unify___check_hlds__common__common_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__common__common_info_0_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__common__common_info_0_0_i6);
MR_def_label(__Unify___check_hlds__common__common_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__common__common_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__common__common_info_0_0_i8);
MR_def_label(__Unify___check_hlds__common__common_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__common__common_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, seen_call_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___check_hlds__common__common_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__common__common_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___eqvclass__eqvclass_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__common_module24)
	MR_init_entry1(__Compare___check_hlds__common__common_info_0_0);
	MR_init_label6(__Compare___check_hlds__common__common_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__common__common_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__common__common_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__common__common_info_0_0_i2);
MR_def_label(__Compare___check_hlds__common__common_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__common__common_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___eqvclass__eqvclass_1_0,
		__Compare___check_hlds__common__common_info_0_0_i5);
MR_def_label(__Compare___check_hlds__common__common_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__common__common_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__common__common_info_0_0_i9);
MR_def_label(__Compare___check_hlds__common__common_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__common__common_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__common__common_info_0_0_i13);
MR_def_label(__Compare___check_hlds__common__common_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__common__common_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, seen_call_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___check_hlds__common__common_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__common_module25)
	MR_init_entry1(__Unify___check_hlds__common__cons_id_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__common__cons_id_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__common_module26)
	MR_init_entry1(__Compare___check_hlds__common__cons_id_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__common__cons_id_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__common_module27)
	MR_init_entry1(__Unify___check_hlds__common__seen_calls_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__common__seen_calls_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, seen_call_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__common_module28)
	MR_init_entry1(__Compare___check_hlds__common__seen_calls_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__common__seen_calls_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, seen_call_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__common_module29)
	MR_init_entry1(__Unify___check_hlds__common__struct_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__common__struct_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
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


MR_BEGIN_MODULE(check_hlds__common_module30)
	MR_init_entry1(__Compare___check_hlds__common__struct_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__common__struct_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
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


MR_BEGIN_MODULE(check_hlds__common_module31)
	MR_init_entry1(__Unify___check_hlds__common__structure_0_0);
	MR_init_label3(__Unify___check_hlds__common__structure_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__common__structure_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__common__structure_0_0_i8);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__common__structure_0_0_i4);
MR_def_label(__Unify___check_hlds__common__structure_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__common__structure_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__common__structure_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__common__structure_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);

MR_BEGIN_MODULE(check_hlds__common_module32)
	MR_init_entry1(__Compare___check_hlds__common__structure_0_0);
	MR_init_label4(__Compare___check_hlds__common__structure_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__common__structure_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__common__structure_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__common__structure_0_0_i2);
MR_def_label(__Compare___check_hlds__common__structure_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__common__structure_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__common__structure_0_0_i5);
MR_def_label(__Compare___check_hlds__common__structure_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__common__structure_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__common__structure_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__common_module33)
	MR_init_entry1(__Unify___check_hlds__common__structures_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__common__structures_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__common, structure);
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


MR_BEGIN_MODULE(check_hlds__common_module34)
	MR_init_entry1(__Compare___check_hlds__common__structures_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__common__structures_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__common, structure);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__common_module35)
	MR_init_entry1(check_hlds__common__IntroducedFrom__pred__common_optimise_construct__294__1_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__common__IntroducedFrom__pred__common_optimise_construct__294__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(eqvclass__ensure_element_partition_id_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(eqvclass__ensure_equivalence_4_0);

MR_BEGIN_MODULE(check_hlds__common_module36)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0);
	MR_init_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0,4,25,5,10,41,16,18,19)
	MR_init_label1(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0_i4) MR_AND
		MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0_i10) MR_AND
		MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0_i41) MR_AND
		MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0_i16));
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_r1, 2);
	MR_r7 = MR_ctfield(0, MR_r1, 1);
	MR_r8 = MR_ctfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 6);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0_i5);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0_i5);
	}
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_proceed();
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_r7 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_r6;
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(check_hlds__common__common_optimise_construct_10_0);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r6 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r7 = MR_r3;
	MR_r3 = MR_ctfield(1, MR_tempr1, 2);
	MR_r8 = MR_r4;
	MR_r4 = MR_ctfield(1, MR_tempr1, 3);
	MR_r9 = MR_r5;
	MR_r5 = MR_ctfield(1, MR_tempr1, 4);
	MR_np_tailcall_ent(check_hlds__common__common_optimise_deconstruct_12_0);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_ctfield(2, MR_r1, 0);
	MR_sv(4) = MR_ctfield(2, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_common_info_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0_i18);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0_i25);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(3) = MR_ctfield(3, MR_r1, 1);
	MR_sv(4) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_common_info_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0_i18);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(eqvclass__ensure_equivalence_4_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0_i19);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0_i20);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_109_111_110_95_111_112_116_105_109_105_115_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_44_32_51_44_32_53_93_95_48_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__common_module37)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0);
	MR_init_label7(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0,51,9,11,12,6,2,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0_i9);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0_i11);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0_i12);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(7);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0_i51);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0_i15);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0_i15);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(8);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_117_116_112_117_116_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_49_93_95_48_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("common.m", 8);
	MR_r2 = (MR_Word) MR_string_const("create_output_unifications: mode mismatch", 41);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(hlds__instmap__instmap_delta_from_assoc_list_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_5_0);

MR_BEGIN_MODULE(check_hlds__common_module38)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0);
	MR_init_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0,2,3,4,5,6,9,7,12)
	MR_init_label4(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0,13,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(check_hlds__common__apply_induced_tsubst_4_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0_i2);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0_i3);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0_i4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0_i5);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0_i6);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_tempr3, 1), 1);
	MR_tempr2 = MR_tempr3;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_ctfield(0, MR_ctfield(0, MR_tempr2, 0), 1);
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__common__types_match_exactly_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0_i9);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tempr7 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tempr8 = MR_sv(2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 2);
	MR_tempr9 = MR_sv(1);
	MR_tfield(2, MR_tempr5, 0) = MR_tempr9;
	MR_tfield(2, MR_tempr5, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 5);
	MR_sv(4) = MR_tempr6;
	MR_tfield(0, MR_tempr6, 0) = MR_tempr9;
	MR_tfield(0, MR_tempr6, 1) = MR_tempr4;
	MR_tfield(0, MR_tempr6, 2) = MR_tempr3;
	MR_tfield(0, MR_tempr6, 3) = MR_tempr5;
	MR_tfield(0, MR_tempr6, 4) = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr9;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr3;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_assoc_list_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0_i12);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tempr8 = MR_sv(1);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr6, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr7, 2, (MR_Integer) 4);
	MR_sv(4) = MR_tempr7;
	MR_tfield(2, MR_tempr7, 0) = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_tfield(2, MR_tempr7, 1) = MR_tempr6;
	MR_tfield(2, MR_tempr7, 2) = MR_tempr5;
	MR_tfield(2, MR_tempr7, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr8;
	MR_tfield(0, MR_tempr5, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_assoc_list_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0_i12);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0_i13);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_common_info_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0_i14);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(eqvclass__ensure_equivalence_4_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0_i15);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0_i16);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_99_111_109_109_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_115_115_105_103_110_95_95_91_52_93_95_48_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__common_maybe_bunch_0(void)
{
	check_hlds__common_module0();
	check_hlds__common_module1();
	check_hlds__common_module2();
	check_hlds__common_module3();
	check_hlds__common_module4();
	check_hlds__common_module5();
	check_hlds__common_module6();
	check_hlds__common_module7();
	check_hlds__common_module8();
	check_hlds__common_module9();
	check_hlds__common_module10();
	check_hlds__common_module11();
	check_hlds__common_module12();
	check_hlds__common_module13();
	check_hlds__common_module14();
	check_hlds__common_module15();
	check_hlds__common_module16();
	check_hlds__common_module17();
	check_hlds__common_module18();
	check_hlds__common_module19();
	check_hlds__common_module20();
	check_hlds__common_module21();
	check_hlds__common_module22();
	check_hlds__common_module23();
	check_hlds__common_module24();
	check_hlds__common_module25();
	check_hlds__common_module26();
	check_hlds__common_module27();
	check_hlds__common_module28();
	check_hlds__common_module29();
	check_hlds__common_module30();
	check_hlds__common_module31();
	check_hlds__common_module32();
	check_hlds__common_module33();
	check_hlds__common_module34();
	check_hlds__common_module35();
	check_hlds__common_module36();
	check_hlds__common_module37();
	check_hlds__common_module38();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__common__init(void);
void mercury__check_hlds__common__init_type_tables(void);
void mercury__check_hlds__common__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__common__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__common__init_complexity_procs(void);
#endif

void mercury__check_hlds__common__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__common_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__common__type_ctor_info_structures_0,
		check_hlds__common__structures_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__common__type_ctor_info_structure_0,
		check_hlds__common__structure_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__common__type_ctor_info_struct_map_0,
		check_hlds__common__struct_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__common__type_ctor_info_seen_calls_0,
		check_hlds__common__seen_calls_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__common__type_ctor_info_cons_id_map_0,
		check_hlds__common__cons_id_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__common__type_ctor_info_common_info_0,
		check_hlds__common__common_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__common__type_ctor_info_call_args_0,
		check_hlds__common__call_args_0_0);
	mercury__check_hlds__common__init_debugger();
}

void mercury__check_hlds__common__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__common__type_ctor_info_structures_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__common__type_ctor_info_structure_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__common__type_ctor_info_struct_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__common__type_ctor_info_seen_calls_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__common__type_ctor_info_cons_id_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__common__type_ctor_info_common_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__common__type_ctor_info_call_args_0);
	}
}


void mercury__check_hlds__common__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__common__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__common);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__common__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
