/*
** Automatically generated from `hlds_code_util.m'
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
INIT mercury__hlds__hlds_code_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "hlds.hlds_code_util.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "hlds.hlds_code_util.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "hlds.hlds_code_util.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "hlds.hlds_code_util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "hlds.hlds_code_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "hlds.hlds_code_util.c"
#line 49 "hlds.hlds_code_util.c"
#include "hlds.hlds_code_util.mh"

#line 52 "hlds.hlds_code_util.c"
#line 53 "hlds.hlds_code_util.c"
#ifndef HLDS__HLDS_CODE_UTIL_DECL_GUARD
#define HLDS__HLDS_CODE_UTIL_DECL_GUARD

#line 57 "hlds.hlds_code_util.c"
#line 58 "hlds.hlds_code_util.c"

#endif
#line 61 "hlds.hlds_code_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Integer f1[2];
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
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__hlds_code_util__type_ctor_info_inst_var_renaming_0,
	mercury_data_hlds__hlds_code_util__type_ctor_info_inst_var_renamings_0;
MR_decl_label4(hlds__hlds_code_util__are_valid_mutable_bound_insts_3_0, 17,4,2,1)
MR_decl_label4(hlds__hlds_code_util__are_valid_mutable_insts_3_0, 17,4,2,1)
MR_decl_label1(hlds__hlds_code_util__get_procedure_matching_argmodes_4_0, 3)
MR_decl_label5(hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_0, 21,3,6,5,1)
MR_decl_label1(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_0, 3)
MR_decl_label7(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0, 34,3,5,7,9,4,1)
MR_decl_label1(hlds__hlds_code_util__is_valid_mutable_inst_2_0, 2)
MR_decl_label9(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0, 57,32,3,5,12,14,15,9,1)
MR_decl_label1(hlds__hlds_code_util__make_instance_string_2_0, 3)
MR_decl_label7(hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0, 54,3,6,8,9,12,1)
MR_decl_label5(hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0, 45,3,6,9,1)
MR_decl_label5(hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0, 5,3,7,9,1)
MR_decl_label6(hlds__hlds_code_util__match_inst_names_with_renaming_4_0, 5,7,3,11,13,1)
MR_decl_label10(hlds__hlds_code_util__match_insts_with_renaming_4_0, 3,6,9,15,13,20,22,18,27,25)
MR_decl_label10(hlds__hlds_code_util__match_insts_with_renaming_4_0, 32,34,35,36,42,45,47,43,30,52)
MR_decl_label4(hlds__hlds_code_util__match_insts_with_renaming_4_0, 274,61,267,1)
MR_decl_label2(hlds__hlds_code_util__merge_common_inst_vars_3_0, 2,1)
MR_decl_label7(hlds__hlds_code_util__mode_list_matches_3_0, 42,3,6,8,10,12,1)
MR_decl_label8(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0, 63,3,6,8,10,12,16,1)
MR_decl_label5(hlds__hlds_code_util__type_to_string_2_0, 2,3,4,5,6)
MR_decl_label5(fn__hlds__hlds_code_util__base_typeclass_info_cons_id_4_0, 2,4,5,7,8)
MR_decl_label10(fn__hlds__hlds_code_util__cons_id_to_tag_2_0, 3,6,5,9,8,12,13,14,16,11)
MR_decl_label10(fn__hlds__hlds_code_util__cons_id_to_tag_2_0, 20,19,22,25,24,27,29,32,31,35)
MR_decl_label9(fn__hlds__hlds_code_util__cons_id_to_tag_2_0, 34,38,39,41,37,46,48,50,52)
MR_decl_label1(fn__hlds__hlds_code_util__type_ctor_info_cons_id_1_0, 2)
MR_def_extern_entry(fn__hlds__hlds_code_util__cons_id_to_tag_2_0)
MR_def_extern_entry(hlds__hlds_code_util__make_instance_string_2_0)
MR_def_extern_entry(fn__hlds__hlds_code_util__type_ctor_info_cons_id_1_0)
MR_def_extern_entry(fn__hlds__hlds_code_util__base_typeclass_info_cons_id_4_0)
MR_decl_static(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0)
MR_decl_static(hlds__hlds_code_util__are_valid_mutable_bound_insts_3_0)
MR_decl_static(hlds__hlds_code_util__are_valid_mutable_insts_3_0)
MR_def_extern_entry(hlds__hlds_code_util__is_valid_mutable_inst_2_0)
MR_decl_static(hlds__hlds_code_util__mode_list_matches_3_0)
MR_decl_static(hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_0)
MR_def_extern_entry(hlds__hlds_code_util__get_procedure_matching_argmodes_4_0)
MR_decl_static(hlds__hlds_code_util__merge_inst_var_renamings_3_0)
MR_decl_static(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0)
MR_decl_static(hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0)
MR_decl_static(hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0)
MR_decl_static(hlds__hlds_code_util__match_insts_with_renaming_4_0)
MR_decl_static(hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0)
MR_decl_static(hlds__hlds_code_util__match_inst_names_with_renaming_4_0)
MR_decl_static(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0)
MR_def_extern_entry(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_0)
MR_decl_static(hlds__hlds_code_util__type_to_string_2_0)
MR_decl_static(hlds__hlds_code_util__merge_common_inst_vars_3_0)
MR_decl_static(__Unify___hlds__hlds_code_util__inst_var_renaming_0_0)
MR_decl_static(__Compare___hlds__hlds_code_util__inst_var_renaming_0_0)
MR_decl_static(__Unify___hlds__hlds_code_util__inst_var_renamings_0_0)
MR_decl_static(__Compare___hlds__hlds_code_util__inst_var_renamings_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,0)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,1),
MR_TAG_COMMON(0,0,1)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
0,
0
}
},
{
{
11,
0
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_code_util__make_instance_string_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_code_util__base_typeclass_info_cons_id_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_code_util__get_procedure_matching_argmodes_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_0_1;
static const struct mercury_type_3 mercury_common_3[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_code_util__make_instance_string_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_code_util__base_typeclass_info_cons_id_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_code_util__get_procedure_matching_argmodes_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
},
};

MR_decl_entry(parse_tree__prog_mode__constrain_inst_vars_in_mode_2_0);
static const struct mercury_type_4 mercury_common_4[9] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(hlds__hlds_code_util__type_to_string_2_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(hlds__hlds_code_util__type_to_string_2_0),
0
},
{
MR_COMMON(3,2),
MR_ENTRY_AP(parse_tree__prog_mode__constrain_inst_vars_in_mode_2_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(hlds__hlds_code_util__merge_common_inst_vars_3_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(hlds__hlds_code_util__merge_common_inst_vars_3_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(hlds__hlds_code_util__merge_common_inst_vars_3_0),
0
},
{
MR_COMMON(5,3),
MR_ENTRY_AP(hlds__hlds_code_util__merge_inst_var_renamings_3_0),
0
},
{
MR_COMMON(5,4),
MR_ENTRY_AP(hlds__hlds_code_util__merge_inst_var_renamings_3_0),
0
},
{
MR_COMMON(3,3),
MR_ENTRY_AP(parse_tree__prog_mode__constrain_inst_vars_in_mode_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_code_util__merge_inst_var_renamings_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0_1;
static const struct mercury_type_5 mercury_common_5[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_code_util__merge_inst_var_renamings_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,3),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,3),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,3),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,1),
MR_COMMON(1,1),
MR_COMMON(1,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,1),
MR_COMMON(1,1),
MR_COMMON(1,1)
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_code_util__type_ctor_info_inst_var_renaming_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_code_util__inst_var_renaming_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_code_util__inst_var_renaming_0_0)),
	"hlds.hlds_code_util",
	"inst_var_renaming",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_code_util__type_ctor_info_inst_var_renamings_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_code_util__inst_var_renamings_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_code_util__inst_var_renamings_0_0)),
	"hlds.hlds_code_util",
	"inst_var_renamings",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"constrain_inst_vars_in_mode",
2,
0
},
"hlds.hlds_code_util",
"hlds_code_util.m",
306,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_code_util",
"hlds.hlds_code_util",
"merge_inst_var_renamings",
3,
0
},
"hlds.hlds_code_util",
"hlds_code_util.m",
344,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_code_util",
"hlds.hlds_code_util",
"merge_inst_var_renamings",
3,
0
},
"hlds.hlds_code_util",
"hlds_code_util.m",
344,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_code_util",
"hlds.hlds_code_util",
"merge_common_inst_vars",
3,
0
},
"hlds.hlds_code_util",
"hlds_code_util.m",
510,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_code_util",
"hlds.hlds_code_util",
"merge_common_inst_vars",
3,
0
},
"hlds.hlds_code_util",
"hlds_code_util.m",
510,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_code_util__merge_inst_var_renamings_3_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_code_util",
"hlds.hlds_code_util",
"merge_common_inst_vars",
3,
0
},
"hlds.hlds_code_util",
"hlds_code_util.m",
510,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_code_util__get_procedure_matching_argmodes_4_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"constrain_inst_vars_in_mode",
2,
0
},
"hlds.hlds_code_util",
"hlds_code_util.m",
274,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_code_util__base_typeclass_info_cons_id_4_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_code_util",
"hlds.hlds_code_util",
"type_to_string",
2,
0
},
"hlds.hlds_code_util",
"hlds_code_util.m",
195,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_code_util__make_instance_string_2_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_code_util",
"hlds.hlds_code_util",
"type_to_string",
2,
0
},
"hlds.hlds_code_util",
"hlds_code_util.m",
195,
"4"
};


MR_decl_entry(char__to_int_2_0);
MR_decl_entry(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
MR_decl_entry(hlds__hlds_data__lookup_type_ctor_defn_3_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__get_target_2_0);

MR_BEGIN_MODULE(hlds__hlds_code_util_module0)
	MR_init_entry1(fn__hlds__hlds_code_util__cons_id_to_tag_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_code_util__cons_id_to_tag_2_0);
	MR_init_label10(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,3,6,5,9,8,12,13,14,16,11)
	MR_init_label10(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,20,19,22,25,24,27,29,32,31,35)
	MR_init_label9(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,34,38,39,41,37,46,48,50,52)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cons_id_to_tag'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_code_util__cons_id_to_tag_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,11)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_tfield(3, MR_r2, 1);
	MR_tfield(3, MR_r1, 2) = MR_tfield(3, MR_r2, 2);
	MR_tfield(3, MR_r1, 3) = MR_tfield(3, MR_r2, 4);
	MR_proceed();
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i5);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(char__to_int_2_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i6);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i9);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_tfield(0, MR_r1, 0);
	MR_tfield(3, MR_r2, 2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i11);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i12);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_data__lookup_type_ctor_defn_3_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i13);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i14);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(map__lookup_3_0);
	}
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_code_util", 19);
	MR_r2 = (MR_Word) MR_string_const("function \140hlds.hlds_code_util.cons_id_to_tag\'/2", 47);
	MR_r3 = (MR_Word) MR_string_const("type is not d.u. type", 21);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i19);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i20);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_r2, 1) = MR_tfield(0, MR_r1, 0);
	MR_tfield(3, MR_r2, 2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i22);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 2);
	* (MR_Float *) &(MR_tfield(2, MR_r1, 0)) = MR_float_from_dword_ptr(&MR_tfield(3, MR_r2, 1));
	MR_proceed();
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,14)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i24);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_localcall_lab(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i25);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i27);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tfield(3, MR_r2, 1);
	MR_proceed();
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i29);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tfield(3, MR_r2, 1);
	MR_proceed();
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i31);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i32);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(0, MR_r1, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i34);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i35);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_r2, 1) = MR_tfield(0, MR_r1, 0);
	MR_tfield(3, MR_r2, 2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i37);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i38);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i39);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((MR_Integer) MR_r1 == (MR_Integer) 0) || ((MR_Integer) MR_r1 == (MR_Integer) 5)) || ((MR_Integer) MR_r1 == (MR_Integer) 4)))) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i41);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i41);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,10)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i46);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r1, 1) = MR_tfield(3, MR_r2, 1);
	MR_tfield(3, MR_r1, 2) = MR_tfield(3, MR_r2, 2);
	MR_tfield(3, MR_r1, 3) = MR_tfield(3, MR_r2, 3);
	MR_proceed();
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_tag(MR_r2) == MR_mktag((MR_Integer) 1)) || ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0))))) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i48);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_proceed();
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,12)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i50);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r1, 1) = MR_tfield(3, MR_r2, 1);
	MR_proceed();
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,13)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_2_0_i52);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tfield(3, MR_r2, 1);
	MR_proceed();
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_code_util", 19);
	MR_r2 = (MR_Word) MR_string_const("function \140hlds.hlds_code_util.cons_id_to_tag\'/2", 47);
	MR_r3 = (MR_Word) MR_string_const("implementation_defined_const", 28);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(hlds__hlds_code_util_module1)
	MR_init_entry1(hlds__hlds_code_util__make_instance_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_code_util__make_instance_string_2_0);
	MR_init_label1(hlds__hlds_code_util__make_instance_string_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_instance_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_code_util__make_instance_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__hlds_code_util__make_instance_string_2_0_i3);
MR_def_label(hlds__hlds_code_util__make_instance_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__append_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__type_util__type_ctor_module_name_arity_4_0);

MR_BEGIN_MODULE(hlds__hlds_code_util_module2)
	MR_init_entry1(fn__hlds__hlds_code_util__type_ctor_info_cons_id_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_code_util__type_ctor_info_cons_id_1_0);
	MR_init_label1(fn__hlds__hlds_code_util__type_ctor_info_cons_id_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_ctor_info_cons_id'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_code_util__type_ctor_info_cons_id_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(check_hlds__type_util__type_ctor_module_name_arity_4_0,
		fn__hlds__hlds_code_util__type_ctor_info_cons_id_1_0_i2);
MR_def_label(fn__hlds__hlds_code_util__type_ctor_info_cons_id_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_id_0;
MR_decl_entry(list__det_index1_3_0);

MR_BEGIN_MODULE(hlds__hlds_code_util_module3)
	MR_init_entry1(fn__hlds__hlds_code_util__base_typeclass_info_cons_id_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_code_util__base_typeclass_info_cons_id_4_0);
	MR_init_label5(fn__hlds__hlds_code_util__base_typeclass_info_cons_id_4_0,2,4,5,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'base_typeclass_info_cons_id'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_code_util__base_typeclass_info_cons_id_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__hlds__hlds_code_util__base_typeclass_info_cons_id_4_0_i2);
MR_def_label(fn__hlds__hlds_code_util__base_typeclass_info_cons_id_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__hlds__hlds_code_util__base_typeclass_info_cons_id_4_0_i4);
MR_def_label(fn__hlds__hlds_code_util__base_typeclass_info_cons_id_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__det_index1_3_0,
		fn__hlds__hlds_code_util__base_typeclass_info_cons_id_4_0_i5);
MR_def_label(fn__hlds__hlds_code_util__base_typeclass_info_cons_id_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		fn__hlds__hlds_code_util__base_typeclass_info_cons_id_4_0_i7);
MR_def_label(fn__hlds__hlds_code_util__base_typeclass_info_cons_id_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__append_list_2_0,
		fn__hlds__hlds_code_util__base_typeclass_info_cons_id_4_0_i8);
MR_def_label(fn__hlds__hlds_code_util__base_typeclass_info_cons_id_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 11;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_tfield(3, MR_r2, 2) = MR_sv(3);
	MR_tfield(3, MR_r2, 3) = MR_sv(1);
	MR_tfield(3, MR_r2, 4) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_name_0;
MR_decl_entry(set__member_2_0);
MR_decl_entry(set__insert_3_0);
MR_decl_entry(check_hlds__mode_util__inst_lookup_3_0);

MR_BEGIN_MODULE(hlds__hlds_code_util_module4)
	MR_init_entry1(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_code_util__is_valid_mutable_inst_2_3_0);
	MR_init_label9(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,57,32,3,5,12,14,15,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_valid_mutable_inst_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i3);
	}
	MR_r1 = MR_tfield(2, MR_r2, 0);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i1);
	}
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i1);
	}
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_code_util__are_valid_mutable_bound_insts_3_0);
	}
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__member_2_0,
		hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i12);
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i32);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set__insert_3_0,
		hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i14);
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i15);
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i57);
	}
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 0);
	MR_decr_sp_and_return(4);
	}
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_code_util_module5)
	MR_init_entry1(hlds__hlds_code_util__are_valid_mutable_bound_insts_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_code_util__are_valid_mutable_bound_insts_3_0);
	MR_init_label4(hlds__hlds_code_util__are_valid_mutable_bound_insts_3_0,17,4,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'are_valid_mutable_bound_insts'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_code_util__are_valid_mutable_bound_insts_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_code_util__are_valid_mutable_bound_insts_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__are_valid_mutable_bound_insts_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 1);
	MR_np_call_localret_ent(hlds__hlds_code_util__are_valid_mutable_insts_3_0,
		hlds__hlds_code_util__are_valid_mutable_bound_insts_3_0_i4);
MR_def_label(hlds__hlds_code_util__are_valid_mutable_bound_insts_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__are_valid_mutable_bound_insts_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_code_util__are_valid_mutable_bound_insts_3_0_i17);
MR_def_label(hlds__hlds_code_util__are_valid_mutable_bound_insts_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__hlds_code_util__are_valid_mutable_bound_insts_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_code_util_module6)
	MR_init_entry1(hlds__hlds_code_util__are_valid_mutable_insts_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_code_util__are_valid_mutable_insts_3_0);
	MR_init_label4(hlds__hlds_code_util__are_valid_mutable_insts_3_0,17,4,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'are_valid_mutable_insts'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_code_util__are_valid_mutable_insts_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_code_util__are_valid_mutable_insts_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__are_valid_mutable_insts_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,
		hlds__hlds_code_util__are_valid_mutable_insts_3_0_i4);
MR_def_label(hlds__hlds_code_util__are_valid_mutable_insts_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__are_valid_mutable_insts_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_code_util__are_valid_mutable_insts_3_0_i17);
MR_def_label(hlds__hlds_code_util__are_valid_mutable_insts_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__hlds_code_util__are_valid_mutable_insts_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__init_1_0);

MR_BEGIN_MODULE(hlds__hlds_code_util_module7)
	MR_init_entry1(hlds__hlds_code_util__is_valid_mutable_inst_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_code_util__is_valid_mutable_inst_2_0);
	MR_init_label1(hlds__hlds_code_util__is_valid_mutable_inst_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_valid_mutable_inst'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_code_util__is_valid_mutable_inst_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		hlds__hlds_code_util__is_valid_mutable_inst_2_0_i2);
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_get_insts_semidet_4_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_inst_0_0);

MR_BEGIN_MODULE(hlds__hlds_code_util_module8)
	MR_init_entry1(hlds__hlds_code_util__mode_list_matches_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_code_util__mode_list_matches_3_0);
	MR_init_label7(hlds__hlds_code_util__mode_list_matches_3_0,42,3,6,8,10,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_list_matches'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_code_util__mode_list_matches_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_code_util__mode_list_matches_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__mode_list_matches_3_0_i3);
	}
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(6);
MR_def_label(hlds__hlds_code_util__mode_list_matches_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__mode_list_matches_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_semidet_4_0,
		hlds__hlds_code_util__mode_list_matches_3_0_i6);
MR_def_label(hlds__hlds_code_util__mode_list_matches_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__mode_list_matches_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_semidet_4_0,
		hlds__hlds_code_util__mode_list_matches_3_0_i8);
MR_def_label(hlds__hlds_code_util__mode_list_matches_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__mode_list_matches_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		hlds__hlds_code_util__mode_list_matches_3_0_i10);
MR_def_label(hlds__hlds_code_util__mode_list_matches_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__mode_list_matches_3_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		hlds__hlds_code_util__mode_list_matches_3_0_i12);
MR_def_label(hlds__hlds_code_util__mode_list_matches_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__mode_list_matches_3_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(hlds__hlds_code_util__mode_list_matches_3_0_i42);
MR_def_label(hlds__hlds_code_util__mode_list_matches_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);

MR_BEGIN_MODULE(hlds__hlds_code_util_module9)
	MR_init_entry1(hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_0);
	MR_init_label5(hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_0,21,3,6,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_procedure_matching_argmodes_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_0_i3);
MR_def_label(hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_code_util__mode_list_matches_3_0,
		hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_0_i6);
MR_def_label(hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_0_i5);
	}
	MR_r2 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_0_i21);
MR_def_label(hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;

MR_BEGIN_MODULE(hlds__hlds_code_util_module10)
	MR_init_entry1(hlds__hlds_code_util__get_procedure_matching_argmodes_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_code_util__get_procedure_matching_argmodes_4_0);
	MR_init_label1(hlds__hlds_code_util__get_procedure_matching_argmodes_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_procedure_matching_argmodes'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_code_util__get_procedure_matching_argmodes_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__hlds_code_util__get_procedure_matching_argmodes_4_0_i3);
MR_def_label(hlds__hlds_code_util__get_procedure_matching_argmodes_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__union_4_0);

MR_BEGIN_MODULE(hlds__hlds_code_util_module11)
	MR_init_entry1(hlds__hlds_code_util__merge_inst_var_renamings_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_code_util__merge_inst_var_renamings_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_inst_var_renamings'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_code_util__merge_inst_var_renamings_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(map__union_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(hlds__hlds_code_util_module12)
	MR_init_entry1(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0);
	MR_init_label8(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0,63,3,6,8,10,12,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_list_matches_with_renaming_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0_i1);
	}
	MR_r2 = MR_r3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0_i1);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(6) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_semidet_4_0,
		hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0_i6);
MR_def_label(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_semidet_4_0,
		hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0_i8);
MR_def_label(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_code_util__match_insts_with_renaming_4_0,
		hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0_i10);
MR_def_label(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_code_util__match_insts_with_renaming_4_0,
		hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0_i12);
MR_def_label(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__append_3_1,
		hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0_i16);
MR_def_label(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0_i63);
	}
MR_def_label(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_code_util_module13)
	MR_init_entry1(hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0);
	MR_init_label5(hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0,45,3,6,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match_corresponding_inst_lists_with_renaming'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0_i1);
	}
	MR_r2 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_tfield(1, MR_r3, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(hlds__hlds_code_util__match_insts_with_renaming_4_0,
		hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0_i6);
MR_def_label(hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__union_4_0,
		hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0_i9);
MR_def_label(hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0_i45);
	}
MR_def_label(hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);
MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(hlds__hlds_code_util_module14)
	MR_init_entry1(hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0);
	MR_init_label7(hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0,54,3,6,8,9,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match_corresponding_bound_inst_lists_with_renaming'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0_i1);
	}
	MR_r2 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0_i6);
MR_def_label(hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0_i8);
MR_def_label(hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0,
		hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0_i9);
MR_def_label(hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__union_4_0,
		hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0_i12);
MR_def_label(hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0_i54);
	}
MR_def_label(hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(map__insert_4_0);
MR_decl_entry(fn__map__singleton_2_0);

MR_BEGIN_MODULE(hlds__hlds_code_util_module15)
	MR_init_entry1(hlds__hlds_code_util__match_insts_with_renaming_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_code_util__match_insts_with_renaming_4_0);
	MR_init_label10(hlds__hlds_code_util__match_insts_with_renaming_4_0,3,6,9,15,13,20,22,18,27,25)
	MR_init_label10(hlds__hlds_code_util__match_insts_with_renaming_4_0,32,34,35,36,42,45,47,43,30,52)
	MR_init_label4(hlds__hlds_code_util__match_insts_with_renaming_4_0,274,61,267,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match_insts_with_renaming'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_code_util__match_insts_with_renaming_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(map__init_1_0,
		hlds__hlds_code_util__match_insts_with_renaming_4_0_i61);
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i6);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(map__init_1_0,
		hlds__hlds_code_util__match_insts_with_renaming_4_0_i61);
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i9);
	}
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i267);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_r2, 0);
	MR_tempr2 = MR_tfield(2, MR_r3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i267);
	}
	MR_r2 = MR_tfield(2, MR_r2, 1);
	MR_r3 = MR_tfield(2, MR_r3, 1);
	MR_np_tailcall_ent(hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0);
	}
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i13);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		hlds__hlds_code_util__match_insts_with_renaming_4_0_i15);
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(map__init_1_0,
		hlds__hlds_code_util__match_insts_with_renaming_4_0_i61);
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i18);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		hlds__hlds_code_util__match_insts_with_renaming_4_0_i20);
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__hlds_code_util__match_insts_with_renaming_4_0_i22);
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0);
	}
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i25);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_tempr3 = MR_r3;
	MR_tempr2 = MR_tfield(3, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr3, 3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r1;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__hlds_code_util__match_insts_with_renaming_4_0_i27);
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_0);
	}
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i30);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i1);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(2) = MR_tfield(3, MR_r3, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_np_localcall_lab(hlds__hlds_code_util__match_insts_with_renaming_4_0,
		hlds__hlds_code_util__match_insts_with_renaming_4_0_i32);
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		hlds__hlds_code_util__match_insts_with_renaming_4_0_i34);
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		hlds__hlds_code_util__match_insts_with_renaming_4_0_i35);
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r5 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i36);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i36);
	}
	MR_r5 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i36);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i42);
	}
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_code_util", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.hlds_code_util.match_insts_with_renaming\'/4", 59);
	MR_r3 = (MR_Word) MR_string_const("non-singleton sets", 18);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__hlds_code_util__match_insts_with_renaming_4_0_i42);
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(map__search_3_0,
		hlds__hlds_code_util__match_insts_with_renaming_4_0_i45);
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i43);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		hlds__hlds_code_util__match_insts_with_renaming_4_0_i47);
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__insert_4_0);
	}
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i52);
	}
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i267);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_r3, 1);
	MR_np_tailcall_ent(hlds__hlds_code_util__match_inst_names_with_renaming_4_0);
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i274);
	}
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i267);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_tempr2 = MR_tfield(3, MR_r3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i267);
	}
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_np_tailcall_ent(hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0);
	}
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_insts_with_renaming_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	MR_r4 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__map__singleton_2_0,
		hlds__hlds_code_util__match_insts_with_renaming_4_0_i61);
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_code_util__match_insts_with_renaming_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_3);

MR_BEGIN_MODULE(hlds__hlds_code_util_module16)
	MR_init_entry1(hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0);
	MR_init_label5(hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0,5,3,7,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match_ho_inst_infos_with_renaming'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0_i5);
MR_def_label(hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_body((MR_Integer) MR_r2, (MR_Integer) 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_body((MR_Integer) MR_r3, (MR_Integer) 1);
	MR_tempr4 = MR_tfield(0, MR_tempr3, 0);
	if ((MR_tempr2 != MR_tempr4)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0_i1);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 3);
	MR_tempr4 = MR_tfield(0, MR_tempr3, 3);
	if ((MR_tempr2 != MR_tempr4)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0_i1);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr3, 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0,
		hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0_i7);
MR_def_label(hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0_i9);
MR_def_label(hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__foldl_4_3);
	}
MR_def_label(hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_0,1)
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

MR_decl_entry(__Unify___parse_tree__prog_data__inst_name_0_0);

MR_BEGIN_MODULE(hlds__hlds_code_util_module17)
	MR_init_entry1(hlds__hlds_code_util__match_inst_names_with_renaming_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_code_util__match_inst_names_with_renaming_4_0);
	MR_init_label6(hlds__hlds_code_util__match_inst_names_with_renaming_4_0,5,7,3,11,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match_inst_names_with_renaming'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_code_util__match_inst_names_with_renaming_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_inst_names_with_renaming_4_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_inst_names_with_renaming_4_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		hlds__hlds_code_util__match_inst_names_with_renaming_4_0_i5);
MR_def_label(hlds__hlds_code_util__match_inst_names_with_renaming_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_inst_names_with_renaming_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__hlds_code_util__match_inst_names_with_renaming_4_0_i7);
MR_def_label(hlds__hlds_code_util__match_inst_names_with_renaming_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_0);
	}
MR_def_label(hlds__hlds_code_util__match_inst_names_with_renaming_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 1)) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 0))) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 1))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 3))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 2))) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 2))))) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_inst_names_with_renaming_4_0_i1);
	}
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__inst_name_0_0,
		hlds__hlds_code_util__match_inst_names_with_renaming_4_0_i11);
MR_def_label(hlds__hlds_code_util__match_inst_names_with_renaming_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__match_inst_names_with_renaming_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__hlds_code_util__match_inst_names_with_renaming_4_0_i13);
MR_def_label(hlds__hlds_code_util__match_inst_names_with_renaming_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__hlds_code_util__match_inst_names_with_renaming_4_0,1)
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

MR_decl_entry(hlds__hlds_pred__proc_info_declared_argmodes_2_0);

MR_BEGIN_MODULE(hlds__hlds_code_util_module18)
	MR_init_entry1(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0);
	MR_init_label7(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0,34,3,5,7,9,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_procedure_matching_declmodes_with_renaming_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_declared_argmodes_2_0,
		hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0_i3);
MR_def_label(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_0,
		hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0_i5);
MR_def_label(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0_i4);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0_i7);
MR_def_label(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,7);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_3,
		hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0_i9);
MR_def_label(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0_i4);
	}
	MR_r2 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0_i34);
MR_def_label(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_code_util_module19)
	MR_init_entry1(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_0);
	MR_init_label1(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_procedure_matching_declmodes_with_renaming'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_0_i3);
MR_def_label(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_det_2_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0);
MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__hlds_code_util_module20)
	MR_init_entry1(hlds__hlds_code_util__type_to_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_code_util__type_to_string_2_0);
	MR_init_label5(hlds__hlds_code_util__type_to_string_2_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_code_util__type_to_string_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		hlds__hlds_code_util__type_to_string_2_0_i2);
MR_def_label(hlds__hlds_code_util__type_to_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0,
		hlds__hlds_code_util__type_to_string_2_0_i3);
MR_def_label(hlds__hlds_code_util__type_to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		hlds__hlds_code_util__type_to_string_2_0_i4);
MR_def_label(hlds__hlds_code_util__type_to_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_code_util__type_to_string_2_0_i5);
MR_def_label(hlds__hlds_code_util__type_to_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__arity", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_code_util__type_to_string_2_0_i6);
MR_def_label(hlds__hlds_code_util__type_to_string_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_code_util_module21)
	MR_init_entry1(hlds__hlds_code_util__merge_common_inst_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_code_util__merge_common_inst_vars_3_0);
	MR_init_label2(hlds__hlds_code_util__merge_common_inst_vars_3_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_common_inst_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_code_util__merge_common_inst_vars_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(builtin__unify_2_0,
		hlds__hlds_code_util__merge_common_inst_vars_3_0_i2);
MR_def_label(hlds__hlds_code_util__merge_common_inst_vars_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__merge_common_inst_vars_3_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__hlds_code_util__merge_common_inst_vars_3_0,1)
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


MR_BEGIN_MODULE(hlds__hlds_code_util_module22)
	MR_init_entry1(__Unify___hlds__hlds_code_util__inst_var_renaming_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_code_util__inst_var_renaming_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__hlds_code_util__inst_var_renaming_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
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

MR_BEGIN_MODULE(hlds__hlds_code_util_module23)
	MR_init_entry1(__Compare___hlds__hlds_code_util__inst_var_renaming_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_code_util__inst_var_renaming_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__hlds_code_util__inst_var_renaming_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
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


MR_BEGIN_MODULE(hlds__hlds_code_util_module24)
	MR_init_entry1(__Unify___hlds__hlds_code_util__inst_var_renamings_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_code_util__inst_var_renamings_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__hlds_code_util__inst_var_renamings_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
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


MR_BEGIN_MODULE(hlds__hlds_code_util_module25)
	MR_init_entry1(__Compare___hlds__hlds_code_util__inst_var_renamings_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_code_util__inst_var_renamings_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__hlds_code_util__inst_var_renamings_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
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

static void mercury__hlds__hlds_code_util_maybe_bunch_0(void)
{
	hlds__hlds_code_util_module0();
	hlds__hlds_code_util_module1();
	hlds__hlds_code_util_module2();
	hlds__hlds_code_util_module3();
	hlds__hlds_code_util_module4();
	hlds__hlds_code_util_module5();
	hlds__hlds_code_util_module6();
	hlds__hlds_code_util_module7();
	hlds__hlds_code_util_module8();
	hlds__hlds_code_util_module9();
	hlds__hlds_code_util_module10();
	hlds__hlds_code_util_module11();
	hlds__hlds_code_util_module12();
	hlds__hlds_code_util_module13();
	hlds__hlds_code_util_module14();
	hlds__hlds_code_util_module15();
	hlds__hlds_code_util_module16();
	hlds__hlds_code_util_module17();
	hlds__hlds_code_util_module18();
	hlds__hlds_code_util_module19();
	hlds__hlds_code_util_module20();
	hlds__hlds_code_util_module21();
	hlds__hlds_code_util_module22();
	hlds__hlds_code_util_module23();
	hlds__hlds_code_util_module24();
	hlds__hlds_code_util_module25();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__hlds_code_util__init(void);
void mercury__hlds__hlds_code_util__init_type_tables(void);
void mercury__hlds__hlds_code_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__hlds_code_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__hlds_code_util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__hlds_code_util__init_threadscope_string_table(void);
#endif

void mercury__hlds__hlds_code_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__hlds_code_util_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_code_util__type_ctor_info_inst_var_renaming_0,
		hlds__hlds_code_util__inst_var_renaming_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_code_util__type_ctor_info_inst_var_renamings_0,
		hlds__hlds_code_util__inst_var_renamings_0_0);
	mercury__hlds__hlds_code_util__init_debugger();
}

void mercury__hlds__hlds_code_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_code_util__type_ctor_info_inst_var_renaming_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_code_util__type_ctor_info_inst_var_renamings_0);
	}
}


void mercury__hlds__hlds_code_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__hlds_code_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__hlds__hlds_code_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__hlds_code_util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__hlds_code_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
