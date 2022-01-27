/*
** Automatically generated from `mdbcomp.goal_path.m'
** by the Mercury compiler,
** version rotd-2013-02-19, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__mdbcomp__goal_path__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 3 "mdbcomp.int0"
#include "mdbcomp.mh"

#line 28 "mdbcomp.goal_path.c"
#line 250 "../library/array.int"
#include "array.mh"

#line 32 "mdbcomp.goal_path.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 36 "mdbcomp.goal_path.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 40 "mdbcomp.goal_path.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 44 "mdbcomp.goal_path.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "mdbcomp.goal_path.c"
#line 49 "mdbcomp.goal_path.c"
#include "mdbcomp.goal_path.mh"

#line 52 "mdbcomp.goal_path.c"
#line 53 "mdbcomp.goal_path.c"
#ifndef MDBCOMP__GOAL_PATH_DECL_GUARD
#define MDBCOMP__GOAL_PATH_DECL_GUARD

#line 57 "mdbcomp.goal_path.c"
#line 58 "mdbcomp.goal_path.c"

#endif
#line 61 "mdbcomp.goal_path.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Integer f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
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
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
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
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdbcomp__goal_path__type_ctor_info_containing_goal_0,
	mercury_data_mdbcomp__goal_path__type_ctor_info_containing_goal_map_0,
	mercury_data_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
	mercury_data_mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
	mercury_data_mdbcomp__goal_path__type_ctor_info_goal_forward_path_map_0,
	mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0,
	mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_step_0,
	mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_string_0,
	mercury_data_mdbcomp__goal_path__type_ctor_info_goal_reverse_path_bimap_0,
	mercury_data_mdbcomp__goal_path__type_ctor_info_goal_reverse_path_map_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdbcomp__goal_path__type_ctor_info_maybe_cut_0,
	mercury_data_mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0,
	mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
MR_decl_label5(mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_0, 23,3,5,6,8)
MR_decl_label5(mdbcomp__goal_path__create_reverse_goal_path_map_2_3_0, 23,3,5,6,8)
MR_decl_label2(mdbcomp__goal_path__fgp_to_rgp_2_3_0, 5,2)
MR_decl_label6(mdbcomp__goal_path__goal_id_inside_3_0, 25,6,5,8,2,1)
MR_decl_label1(mdbcomp__goal_path__goal_path_from_string_2_0, 3)
MR_decl_label3(mdbcomp__goal_path__goal_path_from_string_det_2_0, 4,5,2)
MR_decl_label4(mdbcomp__goal_path__goal_path_from_strings_2_0, 32,4,6,1)
MR_decl_label1(mdbcomp__goal_path__goal_path_get_first_2_0, 1)
MR_decl_label2(mdbcomp__goal_path__goal_path_get_last_2_0, 3,1)
MR_decl_label4(mdbcomp__goal_path__goal_path_inside_relative_3_0, 22,5,2,1)
MR_decl_label2(mdbcomp__goal_path__goal_path_last_loop_3_0, 4,2)
MR_decl_label1(mdbcomp__goal_path__goal_path_remove_first_3_0, 1)
MR_decl_label2(mdbcomp__goal_path__goal_path_remove_last_3_0, 3,1)
MR_decl_label3(mdbcomp__goal_path__goal_path_remove_last_loop_4_0, 5,6,2)
MR_decl_label10(mdbcomp__goal_path__goal_path_step_from_string_2_0, 2,5,7,9,12,11,16,15,19,22)
MR_decl_label10(mdbcomp__goal_path__goal_path_step_from_string_2_0, 21,27,25,31,35,39,41,44,33,49)
MR_decl_label1(mdbcomp__goal_path__goal_path_step_from_string_2_0, 1)
MR_decl_label4(mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_0, 32,4,6,1)
MR_decl_label2(mdbcomp__goal_path__rev_goal_path_from_string_2_0, 3,4)
MR_decl_label4(mdbcomp__goal_path__rev_goal_path_from_string_det_2_0, 4,5,6,2)
MR_decl_label1(mdbcomp__goal_path__rev_goal_path_get_last_2_0, 1)
MR_decl_label5(mdbcomp__goal_path__rev_goal_path_inside_2_0, 2,3,4,6,1)
MR_decl_label5(mdbcomp__goal_path__rev_goal_path_inside_relative_3_0, 2,3,4,6,1)
MR_decl_label1(mdbcomp__goal_path__rev_goal_path_remove_last_3_0, 1)
MR_decl_label10(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0, 18,4,5,6,7,8,9,10,11,12)
MR_decl_label5(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0, 13,14,3,19,2)
MR_decl_label2(mdbcomp__goal_path__rgp_to_fgp_2_3_0, 5,2)
MR_decl_label3(fn__mdbcomp__goal_path__create_forward_goal_path_map_1_0, 2,3,4)
MR_decl_label2(fn__mdbcomp__goal_path__create_reverse_goal_path_bimap_1_0, 2,3)
MR_decl_label2(fn__mdbcomp__goal_path__create_reverse_goal_path_map_1_0, 2,3)
MR_decl_label2(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0, 3,5)
MR_decl_label1(fn__mdbcomp__goal_path__goal_id_to_forward_path_2_0, 2)
MR_decl_label3(fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0, 2,4,5)
MR_decl_label3(fn__mdbcomp__goal_path__goal_path_add_at_end_2_0, 6,7,2)
MR_decl_label1(fn__mdbcomp__goal_path__goal_path_to_string_1_0, 2)
MR_decl_label10(fn__mdbcomp__goal_path__goal_path_to_strings_1_0, 128,5,6,7,8,9,10,11,13,14)
MR_decl_label10(fn__mdbcomp__goal_path__goal_path_to_strings_1_0, 12,17,18,16,21,22,20,26,24,29)
MR_decl_label9(fn__mdbcomp__goal_path__goal_path_to_strings_1_0, 30,28,32,33,34,35,36,37,38)
MR_decl_label2(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0, 2,3)
MR_decl_label10(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0, 128,5,6,7,8,9,10,11,13,14)
MR_decl_label10(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0, 12,17,18,16,21,22,20,26,24,29)
MR_decl_label9(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0, 30,28,32,33,34,35,36,37,38)
MR_decl_label4(__Unify___mdbcomp__goal_path__containing_goal_0_0, 15,5,38,1)
MR_decl_label5(__Unify___mdbcomp__goal_path__forward_goal_path_0_0, 30,14,5,7,1)
MR_decl_label1(__Unify___mdbcomp__goal_path__goal_attr_array_1_0, 7)
MR_decl_label1(__Unify___mdbcomp__goal_path__goal_id_0_0, 4)
MR_decl_label10(__Unify___mdbcomp__goal_path__goal_path_step_0_0, 5,6,7,8,9,10,11,12,14,16)
MR_decl_label3(__Unify___mdbcomp__goal_path__goal_path_step_0_0, 50,18,1)
MR_decl_label3(__Unify___mdbcomp__goal_path__maybe_switch_num_functors_0_0, 10,5,1)
MR_decl_label4(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0, 14,5,7,1)
MR_decl_label6(__Compare___mdbcomp__goal_path__containing_goal_0_0, 24,7,5,9,11,16)
MR_decl_label7(__Compare___mdbcomp__goal_path__forward_goal_path_0_0, 40,24,7,5,9,11,45)
MR_decl_label2(__Compare___mdbcomp__goal_path__goal_attr_array_1_0, 3,2)
MR_decl_label2(__Compare___mdbcomp__goal_path__goal_id_0_0, 3,2)
MR_decl_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0, 7,8,9,10,11,12,13,14,15,16)
MR_decl_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0, 5,20,21,22,23,24,25,26,27,28)
MR_decl_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0, 29,18,33,34,35,36,37,38,39,40)
MR_decl_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0, 41,42,31,46,47,48,49,50,51,52)
MR_decl_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0, 53,54,55,44,59,60,61,62,63,64)
MR_decl_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0, 65,66,67,68,57,72,73,74,75,76)
MR_decl_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0, 77,78,79,80,81,70,85,86,87,88)
MR_decl_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0, 89,90,396,91,92,93,94,83,98,99)
MR_decl_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0, 100,101,102,103,104,105,107,108,96,112)
MR_decl_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0, 113,114,115,116,117,118,119,120,122,110)
MR_decl_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0, 126,127,128,129,130,131,132,133,134,135)
MR_decl_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0, 124,140,141,142,143,144,145,146,147,148)
MR_decl_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0, 149,138,153,154,155,156,157,158,159,160)
MR_decl_label7(__Compare___mdbcomp__goal_path__goal_path_step_0_0, 312,161,162,314,163,165,170)
MR_decl_label4(__Compare___mdbcomp__goal_path__maybe_switch_num_functors_0_0, 18,7,5,9)
MR_decl_label6(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0, 24,7,5,9,11,16)
MR_def_extern_entry(mdbcomp__goal_path__is_valid_goal_id_1_0)
MR_def_extern_entry(fn__mdbcomp__goal_path__whole_body_goal_id_0_0)
MR_def_extern_entry(fn__mdbcomp__goal_path__goal_path_add_at_end_2_0)
MR_def_extern_entry(fn__mdbcomp__goal_path__rev_goal_path_add_at_end_2_0)
MR_decl_static(mdbcomp__goal_path__goal_path_remove_last_loop_4_0)
MR_def_extern_entry(mdbcomp__goal_path__goal_path_remove_last_3_0)
MR_decl_static(mdbcomp__goal_path__goal_path_last_loop_3_0)
MR_def_extern_entry(mdbcomp__goal_path__goal_path_get_last_2_0)
MR_def_extern_entry(mdbcomp__goal_path__goal_path_remove_first_3_0)
MR_def_extern_entry(mdbcomp__goal_path__goal_path_get_first_2_0)
MR_def_extern_entry(mdbcomp__goal_path__rev_goal_path_remove_last_3_0)
MR_def_extern_entry(mdbcomp__goal_path__rev_goal_path_get_last_2_0)
MR_def_extern_entry(mdbcomp__goal_path__goal_path_step_from_string_2_0)
MR_decl_static(mdbcomp__goal_path__goal_path_from_strings_2_0)
MR_def_extern_entry(mdbcomp__goal_path__goal_path_from_string_2_0)
MR_def_extern_entry(mdbcomp__goal_path__goal_path_from_string_det_2_0)
MR_decl_static(mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_0)
MR_def_extern_entry(mdbcomp__goal_path__rev_goal_path_from_string_2_0)
MR_def_extern_entry(mdbcomp__goal_path__rev_goal_path_from_string_det_2_0)
MR_decl_static(fn__mdbcomp__goal_path__goal_path_to_strings_1_0)
MR_def_extern_entry(fn__mdbcomp__goal_path__goal_path_to_string_1_0)
MR_decl_static(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0)
MR_def_extern_entry(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0)
MR_def_extern_entry(mdbcomp__goal_path__is_goal_path_separator_1_0)
MR_decl_static(mdbcomp__goal_path__rgp_to_fgp_2_3_0)
MR_def_extern_entry(mdbcomp__goal_path__rgp_to_fgp_2_0)
MR_decl_static(mdbcomp__goal_path__fgp_to_rgp_2_3_0)
MR_def_extern_entry(mdbcomp__goal_path__fgp_to_rgp_2_0)
MR_def_extern_entry(mdbcomp__goal_path__goal_path_inside_relative_3_0)
MR_def_extern_entry(mdbcomp__goal_path__goal_path_inside_2_0)
MR_def_extern_entry(mdbcomp__goal_path__rev_goal_path_inside_relative_3_0)
MR_def_extern_entry(mdbcomp__goal_path__rev_goal_path_inside_2_0)
MR_def_extern_entry(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0)
MR_def_extern_entry(mdbcomp__goal_path__goal_id_inside_3_0)
MR_def_extern_entry(fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0)
MR_def_extern_entry(fn__mdbcomp__goal_path__goal_id_to_forward_path_2_0)
MR_decl_static(mdbcomp__goal_path__create_reverse_goal_path_map_2_3_0)
MR_def_extern_entry(fn__mdbcomp__goal_path__create_reverse_goal_path_map_1_0)
MR_def_extern_entry(fn__mdbcomp__goal_path__create_forward_goal_path_map_1_0)
MR_decl_static(mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_0)
MR_def_extern_entry(fn__mdbcomp__goal_path__create_reverse_goal_path_bimap_1_0)
MR_def_extern_entry(fn__mdbcomp__goal_path__create_goal_id_array_1_0)
MR_def_extern_entry(fn__mdbcomp__goal_path__create_goal_id_array_2_0)
MR_def_extern_entry(mdbcomp__goal_path__update_goal_attribute_4_0)
MR_def_extern_entry(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0)
MR_def_extern_entry(__Unify___mdbcomp__goal_path__containing_goal_0_0)
MR_def_extern_entry(__Compare___mdbcomp__goal_path__containing_goal_0_0)
MR_def_extern_entry(__Unify___mdbcomp__goal_path__containing_goal_map_0_0)
MR_def_extern_entry(__Compare___mdbcomp__goal_path__containing_goal_map_0_0)
MR_def_extern_entry(__Unify___mdbcomp__goal_path__forward_goal_path_0_0)
MR_def_extern_entry(__Compare___mdbcomp__goal_path__forward_goal_path_0_0)
MR_def_extern_entry(__Unify___mdbcomp__goal_path__goal_attr_array_1_0)
MR_def_extern_entry(__Compare___mdbcomp__goal_path__goal_attr_array_1_0)
MR_def_extern_entry(__Unify___mdbcomp__goal_path__goal_forward_path_map_0_0)
MR_def_extern_entry(__Compare___mdbcomp__goal_path__goal_forward_path_map_0_0)
MR_def_extern_entry(__Unify___mdbcomp__goal_path__goal_id_0_0)
MR_def_extern_entry(__Compare___mdbcomp__goal_path__goal_id_0_0)
MR_def_extern_entry(__Unify___mdbcomp__goal_path__goal_path_step_0_0)
MR_def_extern_entry(__Compare___mdbcomp__goal_path__goal_path_step_0_0)
MR_def_extern_entry(__Unify___mdbcomp__goal_path__goal_path_string_0_0)
MR_def_extern_entry(__Compare___mdbcomp__goal_path__goal_path_string_0_0)
MR_def_extern_entry(__Unify___mdbcomp__goal_path__goal_reverse_path_bimap_0_0)
MR_def_extern_entry(__Compare___mdbcomp__goal_path__goal_reverse_path_bimap_0_0)
MR_def_extern_entry(__Unify___mdbcomp__goal_path__goal_reverse_path_map_0_0)
MR_def_extern_entry(__Compare___mdbcomp__goal_path__goal_reverse_path_map_0_0)
MR_def_extern_entry(__Unify___mdbcomp__goal_path__maybe_cut_0_0)
MR_def_extern_entry(__Compare___mdbcomp__goal_path__maybe_cut_0_0)
MR_def_extern_entry(__Unify___mdbcomp__goal_path__maybe_switch_num_functors_0_0)
MR_def_extern_entry(__Compare___mdbcomp__goal_path__maybe_switch_num_functors_0_0)
MR_def_extern_entry(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0)
MR_def_extern_entry(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0)
MR_decl_static(mdbcomp__goal_path__IntroducedFrom__pred__goal_path_step_from_string_2__453__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_bimap__type_ctor_info_bimap_2;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id),
MR_CTOR0_ADDR(mdbcomp__goal_path, containing_goal)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id),
MR_CTOR0_ADDR(mdbcomp__goal_path, forward_goal_path)
}
},
{
{
MR_CTOR_ADDR(bimap, bimap, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id),
MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id),
MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path)
}
},
};

static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
1,
1
}
},
{
{
1,
0
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__goal_path__goal_path_step_from_string_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mdbcomp__goal_path__create_forward_goal_path_map_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__goal_path__goal_path_step_from_string_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__mdbcomp__goal_path__create_forward_goal_path_map_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path),
MR_CTOR0_ADDR(mdbcomp__goal_path, forward_goal_path)
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(mdbcomp__goal_path__IntroducedFrom__pred__goal_path_step_from_string_2__453__1_2_0),
1,
45
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__goal_path__goal_path_from_string_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__goal_path__goal_path_from_string_det_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__goal_path__rev_goal_path_from_string_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__goal_path__rev_goal_path_from_string_det_2_0_1;
static const struct mercury_type_4 mercury_common_4[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__goal_path__goal_path_from_string_2_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__goal_path__goal_path_from_string_det_2_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__goal_path__rev_goal_path_from_string_2_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__goal_path__rev_goal_path_from_string_det_2_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
};

static const struct mercury_type_5 mercury_common_5[5] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(mdbcomp__goal_path__is_goal_path_separator_1_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(mdbcomp__goal_path__is_goal_path_separator_1_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(mdbcomp__goal_path__is_goal_path_separator_1_0),
0
},
{
MR_COMMON(4,3),
MR_ENTRY_AP(mdbcomp__goal_path__is_goal_path_separator_1_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(mdbcomp__goal_path__rgp_to_fgp_2_0),
0
},
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__goal_path__du_functor_desc_containing_goal_0_0 = {
	"whole_body_goal",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_step_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__goal_path__field_types_containing_goal_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_step_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__goal_path__du_functor_desc_containing_goal_0_1 = {
	"containing_goal",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__goal_path__field_types_containing_goal_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__goal_path__du_stag_ordered_containing_goal_0_0[] = {
	&mercury_data_mdbcomp__goal_path__du_functor_desc_containing_goal_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__goal_path__du_stag_ordered_containing_goal_0_1[] = {
	&mercury_data_mdbcomp__goal_path__du_functor_desc_containing_goal_0_1

};

const MR_DuPtagLayout mercury_data_mdbcomp__goal_path__du_ptag_ordered_containing_goal_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdbcomp__goal_path__du_stag_ordered_containing_goal_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__goal_path__du_stag_ordered_containing_goal_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__goal_path__du_name_ordered_containing_goal_0[] = {
	&mercury_data_mdbcomp__goal_path__du_functor_desc_containing_goal_0_1,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_containing_goal_0_0
};

const MR_Integer mercury_data_mdbcomp__goal_path__functor_number_map_containing_goal_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__goal_path__containing_goal_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__goal_path__containing_goal_0_0)),
	"mdbcomp.goal_path",
	"containing_goal",
	{ (void *)mercury_data_mdbcomp__goal_path__du_name_ordered_containing_goal_0 },
	{ (void *)mercury_data_mdbcomp__goal_path__du_ptag_ordered_containing_goal_0 },
	2,
	4,
	mercury_data_mdbcomp__goal_path__functor_number_map_containing_goal_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0,
	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_containing_goal_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_containing_goal_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__goal_path__containing_goal_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__goal_path__containing_goal_map_0_0)),
	"mdbcomp.goal_path",
	"containing_goal_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_0 = {
	"fgp_nil",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__goal_path__field_types_forward_goal_path_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_step_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_1 = {
	"fgp_cons",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__goal_path__field_types_forward_goal_path_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_0[] = {
	&mercury_data_mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_1[] = {
	&mercury_data_mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_1

};

const MR_DuPtagLayout mercury_data_mdbcomp__goal_path__du_ptag_ordered_forward_goal_path_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__goal_path__du_name_ordered_forward_goal_path_0[] = {
	&mercury_data_mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_1,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_0
};

const MR_Integer mercury_data_mdbcomp__goal_path__functor_number_map_forward_goal_path_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__goal_path__forward_goal_path_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__goal_path__forward_goal_path_0_0)),
	"mdbcomp.goal_path",
	"forward_goal_path",
	{ (void *)mercury_data_mdbcomp__goal_path__du_name_ordered_forward_goal_path_0 },
	{ (void *)mercury_data_mdbcomp__goal_path__du_ptag_ordered_forward_goal_path_0 },
	2,
	4,
	mercury_data_mdbcomp__goal_path__functor_number_map_forward_goal_path_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_maybe__pti_maybe_1__pseudo_1 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_array__pti_array_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_PseudoTypeInfo) &mercury_data_maybe__pti_maybe_1__pseudo_1
}};

static const MR_NotagFunctorDesc mercury_data_mdbcomp__goal_path__notag_functor_desc_goal_attr_array_1 = {
	"goal_attr_array",
	(MR_PseudoTypeInfo) &mercury_data_array__pti_array_1__pseudo_maybe__pti_maybe_1__pseudo_1,
	NULL
};

const MR_Integer mercury_data_mdbcomp__goal_path__functor_number_map_goal_attr_array_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_attr_array_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__goal_path__goal_attr_array_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__goal_path__goal_attr_array_1_0)),
	"mdbcomp.goal_path",
	"goal_attr_array",
	{ (void *)&mercury_data_mdbcomp__goal_path__notag_functor_desc_goal_attr_array_1 },
	{ (void *)&mercury_data_mdbcomp__goal_path__notag_functor_desc_goal_attr_array_1 },
	1,
	4,
	mercury_data_mdbcomp__goal_path__functor_number_map_goal_attr_array_1
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0,
	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_forward_path_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__goal_path__goal_forward_path_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__goal_path__goal_forward_path_map_0_0)),
	"mdbcomp.goal_path",
	"goal_forward_path_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_NotagFunctorDesc mercury_data_mdbcomp__goal_path__notag_functor_desc_goal_id_0 = {
	"goal_id",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_mdbcomp__goal_path__functor_number_map_goal_id_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__goal_path__goal_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__goal_path__goal_id_0_0)),
	"mdbcomp.goal_path",
	"goal_id",
	{ (void *)&mercury_data_mdbcomp__goal_path__notag_functor_desc_goal_id_0 },
	{ (void *)&mercury_data_mdbcomp__goal_path__notag_functor_desc_goal_id_0 },
	1,
	4,
	mercury_data_mdbcomp__goal_path__functor_number_map_goal_id_0
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__goal_path__field_types_goal_path_step_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_0 = {
	"step_conj",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__goal_path__field_types_goal_path_step_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__goal_path__field_types_goal_path_step_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_1 = {
	"step_disj",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__goal_path__field_types_goal_path_step_0_1,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__goal_path__field_types_goal_path_step_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_2 = {
	"step_switch",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__goal_path__field_types_goal_path_step_0_2,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_3 = {
	"step_ite_cond",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_4 = {
	"step_ite_then",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_5 = {
	"step_ite_else",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_6 = {
	"step_neg",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_maybe_cut_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__goal_path__field_types_goal_path_step_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_maybe_cut_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_7 = {
	"step_scope",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	7,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__goal_path__field_types_goal_path_step_0_7,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_8 = {
	"step_lambda",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_9 = {
	"step_try",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	9,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_10 = {
	"step_atomic_main",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	10,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__goal_path__field_types_goal_path_step_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_11 = {
	"step_atomic_orelse",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	11,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__goal_path__field_types_goal_path_step_0_11,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_0[] = {
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_3,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_4,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_5,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_6,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_8,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_9,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_10

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_1[] = {
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_2[] = {
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_3[] = {
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_2,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_7,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_11

};

const MR_DuPtagLayout mercury_data_mdbcomp__goal_path__du_ptag_ordered_goal_path_step_0[] = {
	{ 7, MR_SECTAG_LOCAL,
	mercury_data_mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_2 },
	{ 3, MR_SECTAG_REMOTE,
	mercury_data_mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__goal_path__du_name_ordered_goal_path_step_0[] = {
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_10,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_11,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_0,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_1,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_3,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_5,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_4,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_8,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_6,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_7,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_2,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_goal_path_step_0_9
};

const MR_Integer mercury_data_mdbcomp__goal_path__functor_number_map_goal_path_step_0[] = {
	2,
	3,
	10,
	4,
	6,
	5,
	8,
	9,
	7,
	11,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_step_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__goal_path__goal_path_step_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__goal_path__goal_path_step_0_0)),
	"mdbcomp.goal_path",
	"goal_path_step",
	{ (void *)mercury_data_mdbcomp__goal_path__du_name_ordered_goal_path_step_0 },
	{ (void *)mercury_data_mdbcomp__goal_path__du_ptag_ordered_goal_path_step_0 },
	12,
	4,
	mercury_data_mdbcomp__goal_path__functor_number_map_goal_path_step_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_string_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__goal_path__goal_path_string_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__goal_path__goal_path_string_0_0)),
	"mdbcomp.goal_path",
	"goal_path_string",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_bimap__ti_bimap_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
	&mercury_data_bimap__type_ctor_info_bimap_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0,
	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_reverse_path_bimap_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__goal_path__goal_reverse_path_bimap_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__goal_path__goal_reverse_path_bimap_0_0)),
	"mdbcomp.goal_path",
	"goal_reverse_path_bimap",
	{ 0 },
	{ (void *)&mercury_data_bimap__ti_bimap_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0,
	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_reverse_path_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__goal_path__goal_reverse_path_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__goal_path__goal_reverse_path_map_0_0)),
	"mdbcomp.goal_path",
	"goal_reverse_path_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0 = {
	"scope_is_cut",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1 = {
	"scope_is_no_cut",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__goal_path__enum_value_ordered_maybe_cut_0[] = {
	&mercury_data_mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0,
	&mercury_data_mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__goal_path__enum_name_ordered_maybe_cut_0[] = {
	&mercury_data_mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0,
	&mercury_data_mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1
};

const MR_Integer mercury_data_mdbcomp__goal_path__functor_number_map_maybe_cut_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_maybe_cut_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__goal_path__maybe_cut_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__goal_path__maybe_cut_0_0)),
	"mdbcomp.goal_path",
	"maybe_cut",
	{ (void *)mercury_data_mdbcomp__goal_path__enum_name_ordered_maybe_cut_0 },
	{ (void *)mercury_data_mdbcomp__goal_path__enum_value_ordered_maybe_cut_0 },
	2,
	4,
	mercury_data_mdbcomp__goal_path__functor_number_map_maybe_cut_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_0 = {
	"unknown_num_functors_in_type",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__goal_path__field_types_maybe_switch_num_functors_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_1 = {
	"known_num_functors_in_type",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__goal_path__field_types_maybe_switch_num_functors_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_0[] = {
	&mercury_data_mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_1[] = {
	&mercury_data_mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_1

};

const MR_DuPtagLayout mercury_data_mdbcomp__goal_path__du_ptag_ordered_maybe_switch_num_functors_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__goal_path__du_name_ordered_maybe_switch_num_functors_0[] = {
	&mercury_data_mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_1,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_0
};

const MR_Integer mercury_data_mdbcomp__goal_path__functor_number_map_maybe_switch_num_functors_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__goal_path__maybe_switch_num_functors_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__goal_path__maybe_switch_num_functors_0_0)),
	"mdbcomp.goal_path",
	"maybe_switch_num_functors",
	{ (void *)mercury_data_mdbcomp__goal_path__du_name_ordered_maybe_switch_num_functors_0 },
	{ (void *)mercury_data_mdbcomp__goal_path__du_ptag_ordered_maybe_switch_num_functors_0 },
	2,
	4,
	mercury_data_mdbcomp__goal_path__functor_number_map_maybe_switch_num_functors_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_0 = {
	"rgp_nil",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__goal_path__field_types_reverse_goal_path_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_step_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_1 = {
	"rgp_cons",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__goal_path__field_types_reverse_goal_path_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_0[] = {
	&mercury_data_mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_1[] = {
	&mercury_data_mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_1

};

const MR_DuPtagLayout mercury_data_mdbcomp__goal_path__du_ptag_ordered_reverse_goal_path_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__goal_path__du_name_ordered_reverse_goal_path_0[] = {
	&mercury_data_mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_1,
	&mercury_data_mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_0
};

const MR_Integer mercury_data_mdbcomp__goal_path__functor_number_map_reverse_goal_path_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0)),
	"mdbcomp.goal_path",
	"reverse_goal_path",
	{ (void *)mercury_data_mdbcomp__goal_path__du_name_ordered_reverse_goal_path_0 },
	{ (void *)mercury_data_mdbcomp__goal_path__du_ptag_ordered_reverse_goal_path_0 },
	2,
	4,
	mercury_data_mdbcomp__goal_path__functor_number_map_reverse_goal_path_0
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__mdbcomp__goal_path__create_forward_goal_path_map_1_0_1 = {
{
MR_PREDICATE,
"mdbcomp.goal_path",
"mdbcomp.goal_path",
"rgp_to_fgp",
2,
0
},
"mdbcomp.goal_path",
"mdbcomp.goal_path.m",
575,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__goal_path__rev_goal_path_from_string_det_2_0_1 = {
{
MR_PREDICATE,
"mdbcomp.goal_path",
"mdbcomp.goal_path",
"is_goal_path_separator",
1,
0
},
"mdbcomp.goal_path",
"mdbcomp.goal_path.m",
422,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__goal_path__rev_goal_path_from_string_2_0_1 = {
{
MR_PREDICATE,
"mdbcomp.goal_path",
"mdbcomp.goal_path",
"is_goal_path_separator",
1,
0
},
"mdbcomp.goal_path",
"mdbcomp.goal_path.m",
422,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__goal_path__goal_path_from_string_det_2_0_1 = {
{
MR_PREDICATE,
"mdbcomp.goal_path",
"mdbcomp.goal_path",
"is_goal_path_separator",
1,
0
},
"mdbcomp.goal_path",
"mdbcomp.goal_path.m",
403,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__goal_path__goal_path_from_string_2_0_1 = {
{
MR_PREDICATE,
"mdbcomp.goal_path",
"mdbcomp.goal_path",
"is_goal_path_separator",
1,
0
},
"mdbcomp.goal_path",
"mdbcomp.goal_path.m",
403,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__goal_path__goal_path_step_from_string_2_0_1 = {
{
MR_PREDICATE,
"mdbcomp.goal_path",
"mdbcomp.goal_path",
"lambda_mdbcomp_goal_path_m_453",
2,
0
},
"mdbcomp.goal_path",
"mdbcomp.goal_path.m",
453,
"16"
};



MR_BEGIN_MODULE(mdbcomp__goal_path_module0)
	MR_init_entry1(mdbcomp__goal_path__is_valid_goal_id_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__is_valid_goal_id_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_valid_goal_id'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__is_valid_goal_id_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 >= (MR_Integer) 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module1)
	MR_init_entry1(fn__mdbcomp__goal_path__whole_body_goal_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__goal_path__whole_body_goal_id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'whole_body_goal_id'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__goal_path__whole_body_goal_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module2)
	MR_init_entry1(fn__mdbcomp__goal_path__goal_path_add_at_end_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__goal_path__goal_path_add_at_end_2_0);
	MR_init_label3(fn__mdbcomp__goal_path__goal_path_add_at_end_2_0,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_path_add_at_end'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__goal_path__goal_path_add_at_end_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__goal_path_add_at_end_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(fn__mdbcomp__goal_path__goal_path_add_at_end_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	break;
	} /* end while */
MR_def_label(fn__mdbcomp__goal_path__goal_path_add_at_end_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(fn__mdbcomp__goal_path__goal_path_add_at_end_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module3)
	MR_init_entry1(fn__mdbcomp__goal_path__rev_goal_path_add_at_end_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__goal_path__rev_goal_path_add_at_end_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rev_goal_path_add_at_end'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__goal_path__rev_goal_path_add_at_end_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module4)
	MR_init_entry1(mdbcomp__goal_path__goal_path_remove_last_loop_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__goal_path_remove_last_loop_4_0);
	MR_init_label3(mdbcomp__goal_path__goal_path_remove_last_loop_4_0,5,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_path_remove_last_loop'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__goal_path__goal_path_remove_last_loop_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_remove_last_loop_4_0_i2);
	}
	MR_r4 = (MR_Word) MR_sp;
MR_def_label(mdbcomp__goal_path__goal_path_remove_last_loop_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0))
		continue;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	break;
	} /* end while */
MR_def_label(mdbcomp__goal_path__goal_path_remove_last_loop_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r4))
		continue;
	MR_proceed();
	}
	break;
	} /* end while */
MR_def_label(mdbcomp__goal_path__goal_path_remove_last_loop_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module5)
	MR_init_entry1(mdbcomp__goal_path__goal_path_remove_last_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__goal_path_remove_last_3_0);
	MR_init_label2(mdbcomp__goal_path__goal_path_remove_last_3_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_path_remove_last'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__goal_path_remove_last_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_remove_last_3_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mdbcomp__goal_path__goal_path_remove_last_loop_4_0,
		mdbcomp__goal_path__goal_path_remove_last_3_0_i3);
MR_def_label(mdbcomp__goal_path__goal_path_remove_last_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
	}
MR_def_label(mdbcomp__goal_path__goal_path_remove_last_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module6)
	MR_init_entry1(mdbcomp__goal_path__goal_path_last_loop_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__goal_path_last_loop_3_0);
	MR_init_label2(mdbcomp__goal_path__goal_path_last_loop_3_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_path_last_loop'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__goal_path__goal_path_last_loop_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_last_loop_3_0_i2);
	}
MR_def_label(mdbcomp__goal_path__goal_path_last_loop_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0))
		continue;
	break;
	} /* end while */
MR_def_label(mdbcomp__goal_path__goal_path_last_loop_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module7)
	MR_init_entry1(mdbcomp__goal_path__goal_path_get_last_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__goal_path_get_last_2_0);
	MR_init_label2(mdbcomp__goal_path__goal_path_get_last_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_path_get_last'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__goal_path_get_last_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_get_last_2_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mdbcomp__goal_path__goal_path_last_loop_3_0,
		mdbcomp__goal_path__goal_path_get_last_2_0_i3);
MR_def_label(mdbcomp__goal_path__goal_path_get_last_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(mdbcomp__goal_path__goal_path_get_last_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module8)
	MR_init_entry1(mdbcomp__goal_path__goal_path_remove_first_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__goal_path_remove_first_3_0);
	MR_init_label1(mdbcomp__goal_path__goal_path_remove_first_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_path_remove_first'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__goal_path_remove_first_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_remove_first_3_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	MR_r3 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__goal_path__goal_path_remove_first_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module9)
	MR_init_entry1(mdbcomp__goal_path__goal_path_get_first_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__goal_path_get_first_2_0);
	MR_init_label1(mdbcomp__goal_path__goal_path_get_first_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_path_get_first'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__goal_path_get_first_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_get_first_2_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__goal_path__goal_path_get_first_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module10)
	MR_init_entry1(mdbcomp__goal_path__rev_goal_path_remove_last_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__rev_goal_path_remove_last_3_0);
	MR_init_label1(mdbcomp__goal_path__rev_goal_path_remove_last_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rev_goal_path_remove_last'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__rev_goal_path_remove_last_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_last_3_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__goal_path__rev_goal_path_remove_last_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module11)
	MR_init_entry1(mdbcomp__goal_path__rev_goal_path_get_last_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__rev_goal_path_get_last_2_0);
	MR_init_label1(mdbcomp__goal_path__rev_goal_path_get_last_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rev_goal_path_get_last'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__rev_goal_path_get_last_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_get_last_2_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__goal_path__rev_goal_path_get_last_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__first_char_3_3);
MR_decl_entry(string__to_int_2_0);
MR_decl_entry(fn__string__words_separator_2_0);

MR_BEGIN_MODULE(mdbcomp__goal_path_module12)
	MR_init_entry1(mdbcomp__goal_path__goal_path_step_from_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__goal_path_step_from_string_2_0);
	MR_init_label10(mdbcomp__goal_path__goal_path_step_from_string_2_0,2,5,7,9,12,11,16,15,19,22)
	MR_init_label10(mdbcomp__goal_path__goal_path_step_from_string_2_0,21,27,25,31,35,39,41,44,33,49)
	MR_init_label1(mdbcomp__goal_path__goal_path_step_from_string_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_path_step_from_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__goal_path_step_from_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__first_char_3_3,
		mdbcomp__goal_path__goal_path_step_from_string_2_0_i2);
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i1);
	}
	if (MR_INT_NE(MR_r2,61)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i5);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 4);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,63)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i7);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,97)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i9);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 6);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,99)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i11);
	}
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__goal_path__goal_path_step_from_string_2_0_i12);
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,100)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i15);
	}
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__goal_path__goal_path_step_from_string_2_0_i16);
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,101)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i19);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,111)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i21);
	}
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__goal_path__goal_path_step_from_string_2_0_i22);
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,113)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i25);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i27);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,1,1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,114)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i31);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 5);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,115)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i33);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		mdbcomp__goal_path__goal_path_step_from_string_2_0_i35);
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__goal_path__goal_path_step_from_string_2_0_i39);
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("na", 2)) != 0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i41);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__goal_path__goal_path_step_from_string_2_0_i44);
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,116)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i49);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,126)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__goal_path__goal_path_step_from_string_2_0,1)
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


MR_BEGIN_MODULE(mdbcomp__goal_path_module13)
	MR_init_entry1(mdbcomp__goal_path__goal_path_from_strings_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__goal_path_from_strings_2_0);
	MR_init_label4(mdbcomp__goal_path__goal_path_from_strings_2_0,32,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_path_from_strings'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__goal_path__goal_path_from_strings_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_from_strings_2_0_i32);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__goal_path__goal_path_from_strings_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(mdbcomp__goal_path__goal_path_step_from_string_2_0,
		mdbcomp__goal_path__goal_path_from_strings_2_0_i4);
MR_def_label(mdbcomp__goal_path__goal_path_from_strings_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_from_strings_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(mdbcomp__goal_path__goal_path_from_strings_2_0,
		mdbcomp__goal_path__goal_path_from_strings_2_0_i6);
MR_def_label(mdbcomp__goal_path__goal_path_from_strings_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_from_strings_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(mdbcomp__goal_path__goal_path_from_strings_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module14)
	MR_init_entry1(mdbcomp__goal_path__goal_path_from_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__goal_path_from_string_2_0);
	MR_init_label1(mdbcomp__goal_path__goal_path_from_string_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_path_from_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__goal_path_from_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		mdbcomp__goal_path__goal_path_from_string_2_0_i3);
MR_def_label(mdbcomp__goal_path__goal_path_from_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(mdbcomp__goal_path__goal_path_from_strings_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(mdbcomp__goal_path_module15)
	MR_init_entry1(mdbcomp__goal_path__goal_path_from_string_det_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__goal_path_from_string_det_2_0);
	MR_init_label3(mdbcomp__goal_path__goal_path_from_string_det_2_0,4,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_path_from_string_det'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__goal_path_from_string_det_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		mdbcomp__goal_path__goal_path_from_string_det_2_0_i4);
MR_def_label(mdbcomp__goal_path__goal_path_from_string_det_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdbcomp__goal_path__goal_path_from_strings_2_0,
		mdbcomp__goal_path__goal_path_from_string_det_2_0_i5);
MR_def_label(mdbcomp__goal_path__goal_path_from_string_det_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_from_string_det_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(mdbcomp__goal_path__goal_path_from_string_det_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdbcomp.goal_path", 17);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdbcomp.goal_path.goal_path_from_string_det\'/2", 57);
	MR_r3 = (MR_Word) MR_string_const("goal_path_from_string failed", 28);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module16)
	MR_init_entry1(mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_0);
	MR_init_label4(mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_0,32,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rev_goal_path_from_rev_strings'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_0_i32);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_0,
		mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_0_i4);
MR_def_label(mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__goal_path__goal_path_step_from_string_2_0,
		mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_0_i6);
MR_def_label(mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(mdbcomp__goal_path_module17)
	MR_init_entry1(mdbcomp__goal_path__rev_goal_path_from_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__rev_goal_path_from_string_2_0);
	MR_init_label2(mdbcomp__goal_path__rev_goal_path_from_string_2_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rev_goal_path_from_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__rev_goal_path_from_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		mdbcomp__goal_path__rev_goal_path_from_string_2_0_i3);
MR_def_label(mdbcomp__goal_path__rev_goal_path_from_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		mdbcomp__goal_path__rev_goal_path_from_string_2_0_i4);
MR_def_label(mdbcomp__goal_path__rev_goal_path_from_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module18)
	MR_init_entry1(mdbcomp__goal_path__rev_goal_path_from_string_det_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__rev_goal_path_from_string_det_2_0);
	MR_init_label4(mdbcomp__goal_path__rev_goal_path_from_string_det_2_0,4,5,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rev_goal_path_from_string_det'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__rev_goal_path_from_string_det_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		mdbcomp__goal_path__rev_goal_path_from_string_det_2_0_i4);
MR_def_label(mdbcomp__goal_path__rev_goal_path_from_string_det_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		mdbcomp__goal_path__rev_goal_path_from_string_det_2_0_i5);
MR_def_label(mdbcomp__goal_path__rev_goal_path_from_string_det_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_0,
		mdbcomp__goal_path__rev_goal_path_from_string_det_2_0_i6);
MR_def_label(mdbcomp__goal_path__rev_goal_path_from_string_det_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_from_string_det_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(mdbcomp__goal_path__rev_goal_path_from_string_det_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdbcomp.goal_path", 17);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdbcomp.goal_path.rev_goal_path_from_string_det\'/2", 61);
	MR_r3 = (MR_Word) MR_string_const("rev_goal_path_from_string failed", 32);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(mdbcomp__goal_path_module19)
	MR_init_entry1(fn__mdbcomp__goal_path__goal_path_to_strings_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__goal_path__goal_path_to_strings_1_0);
	MR_init_label10(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,128,5,6,7,8,9,10,11,13,14)
	MR_init_label10(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,12,17,18,16,21,22,20,26,24,29)
	MR_init_label9(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,30,28,32,33,34,35,36,37,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_path_to_strings'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdbcomp__goal_path__goal_path_to_strings_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i128);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,6)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Word) MR_string_const("a;", 2);
	MR_np_localcall_lab(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i38);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i6);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Word) MR_string_const("\?;", 2);
	MR_np_localcall_lab(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i38);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Word) MR_string_const("e;", 2);
	MR_np_localcall_lab(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i38);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Word) MR_string_const("t;", 2);
	MR_np_localcall_lab(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i38);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,4)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i9);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Word) MR_string_const("=;", 2);
	MR_np_localcall_lab(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i38);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i10);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Word) MR_string_const("~;", 2);
	MR_np_localcall_lab(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i38);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,5)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i11);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Word) MR_string_const("r;", 2);
	MR_np_localcall_lab(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i38);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i12);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i13);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(";", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i14);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("c", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i37);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i16);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i17);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(";", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i18);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("d", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i37);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i20);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i21);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(";", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i22);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("o", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i37);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i26);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Word) MR_string_const("q!;", 3);
	}
	MR_np_localcall_lab(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i38);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Word) MR_string_const("q;", 2);
	MR_np_localcall_lab(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i38);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(3, MR_r2, 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i28);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i29);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("-na;", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i30);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("s", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i37);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(1, MR_r3, 0);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i32);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i33);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(";", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i34);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i35);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i36);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("s", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i37);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_localcall_lab(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__goal_path_to_strings_1_0_i38);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,38)
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

MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(mdbcomp__goal_path_module20)
	MR_init_entry1(fn__mdbcomp__goal_path__goal_path_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__goal_path__goal_path_to_string_1_0);
	MR_init_label1(fn__mdbcomp__goal_path__goal_path_to_string_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_path_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__goal_path__goal_path_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__goal_path_to_string_1_0_i2);
MR_def_label(fn__mdbcomp__goal_path__goal_path_to_string_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__append_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module21)
	MR_init_entry1(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0);
	MR_init_label10(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,128,5,6,7,8,9,10,11,13,14)
	MR_init_label10(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,12,17,18,16,21,22,20,26,24,29)
	MR_init_label9(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,30,28,32,33,34,35,36,37,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rev_goal_path_to_strings'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i128);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,6)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = (MR_Word) MR_string_const("a;", 2);
	MR_np_localcall_lab(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i38);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i6);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = (MR_Word) MR_string_const("\?;", 2);
	MR_np_localcall_lab(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i38);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = (MR_Word) MR_string_const("e;", 2);
	MR_np_localcall_lab(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i38);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = (MR_Word) MR_string_const("t;", 2);
	MR_np_localcall_lab(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i38);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,4)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i9);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = (MR_Word) MR_string_const("=;", 2);
	MR_np_localcall_lab(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i38);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i10);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = (MR_Word) MR_string_const("~;", 2);
	MR_np_localcall_lab(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i38);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,5)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i11);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = (MR_Word) MR_string_const("r;", 2);
	MR_np_localcall_lab(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i38);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i12);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i13);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(";", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i14);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("c", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i37);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i16);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i17);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(";", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i18);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("d", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i37);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i20);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i21);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(";", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i22);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("o", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i37);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i26);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = (MR_Word) MR_string_const("q!;", 3);
	}
	MR_np_localcall_lab(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i38);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = (MR_Word) MR_string_const("q;", 2);
	MR_np_localcall_lab(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i38);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(3, MR_r2, 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i28);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i29);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("-na;", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i30);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("s", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i37);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r3, 0);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i32);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i33);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(";", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i34);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i35);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i36);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("s", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i37);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_localcall_lab(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0_i38);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,38)
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


MR_BEGIN_MODULE(mdbcomp__goal_path_module22)
	MR_init_entry1(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0);
	MR_init_label2(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rev_goal_path_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__rev_goal_path_to_strings_1_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0_i2);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0_i3);
MR_def_label(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__append_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module23)
	MR_init_entry1(mdbcomp__goal_path__is_goal_path_separator_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__is_goal_path_separator_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_goal_path_separator'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__is_goal_path_separator_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 59);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module24)
	MR_init_entry1(mdbcomp__goal_path__rgp_to_fgp_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__rgp_to_fgp_2_3_0);
	MR_init_label2(mdbcomp__goal_path__rgp_to_fgp_2_3_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rgp_to_fgp_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__goal_path__rgp_to_fgp_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rgp_to_fgp_2_3_0_i2);
	}
MR_def_label(mdbcomp__goal_path__rgp_to_fgp_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	}
	break;
	} /* end while */
MR_def_label(mdbcomp__goal_path__rgp_to_fgp_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module25)
	MR_init_entry1(mdbcomp__goal_path__rgp_to_fgp_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__rgp_to_fgp_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rgp_to_fgp'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__rgp_to_fgp_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(mdbcomp__goal_path__rgp_to_fgp_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module26)
	MR_init_entry1(mdbcomp__goal_path__fgp_to_rgp_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__fgp_to_rgp_2_3_0);
	MR_init_label2(mdbcomp__goal_path__fgp_to_rgp_2_3_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fgp_to_rgp_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__goal_path__fgp_to_rgp_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__fgp_to_rgp_2_3_0_i2);
	}
MR_def_label(mdbcomp__goal_path__fgp_to_rgp_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	}
	break;
	} /* end while */
MR_def_label(mdbcomp__goal_path__fgp_to_rgp_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module27)
	MR_init_entry1(mdbcomp__goal_path__fgp_to_rgp_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__fgp_to_rgp_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fgp_to_rgp'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__fgp_to_rgp_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(mdbcomp__goal_path__fgp_to_rgp_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module28)
	MR_init_entry1(mdbcomp__goal_path__goal_path_inside_relative_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__goal_path_inside_relative_3_0);
	MR_init_label4(mdbcomp__goal_path__goal_path_inside_relative_3_0,22,5,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_path_inside_relative'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__goal_path_inside_relative_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(mdbcomp__goal_path__goal_path_inside_relative_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_inside_relative_3_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_inside_relative_3_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(__Unify___mdbcomp__goal_path__goal_path_step_0_0,
		mdbcomp__goal_path__goal_path_inside_relative_3_0_i5);
MR_def_label(mdbcomp__goal_path__goal_path_inside_relative_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_path_inside_relative_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdbcomp__goal_path__goal_path_inside_relative_3_0_i22);
MR_def_label(mdbcomp__goal_path__goal_path_inside_relative_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(mdbcomp__goal_path__goal_path_inside_relative_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module29)
	MR_init_entry1(mdbcomp__goal_path__goal_path_inside_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__goal_path_inside_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_path_inside'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__goal_path_inside_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(mdbcomp__goal_path__goal_path_inside_relative_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module30)
	MR_init_entry1(mdbcomp__goal_path__rev_goal_path_inside_relative_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__rev_goal_path_inside_relative_3_0);
	MR_init_label5(mdbcomp__goal_path__rev_goal_path_inside_relative_3_0,2,3,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rev_goal_path_inside_relative'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__rev_goal_path_inside_relative_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(mdbcomp__goal_path__rgp_to_fgp_2_3_0,
		mdbcomp__goal_path__rev_goal_path_inside_relative_3_0_i2);
MR_def_label(mdbcomp__goal_path__rev_goal_path_inside_relative_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(mdbcomp__goal_path__rgp_to_fgp_2_3_0,
		mdbcomp__goal_path__rev_goal_path_inside_relative_3_0_i3);
MR_def_label(mdbcomp__goal_path__rev_goal_path_inside_relative_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__goal_path__goal_path_inside_relative_3_0,
		mdbcomp__goal_path__rev_goal_path_inside_relative_3_0_i4);
MR_def_label(mdbcomp__goal_path__rev_goal_path_inside_relative_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_inside_relative_3_0_i1);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(mdbcomp__goal_path__fgp_to_rgp_2_3_0,
		mdbcomp__goal_path__rev_goal_path_inside_relative_3_0_i6);
MR_def_label(mdbcomp__goal_path__rev_goal_path_inside_relative_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__goal_path__rev_goal_path_inside_relative_3_0,1)
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


MR_BEGIN_MODULE(mdbcomp__goal_path_module31)
	MR_init_entry1(mdbcomp__goal_path__rev_goal_path_inside_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__rev_goal_path_inside_2_0);
	MR_init_label5(mdbcomp__goal_path__rev_goal_path_inside_2_0,2,3,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rev_goal_path_inside'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__rev_goal_path_inside_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(mdbcomp__goal_path__rgp_to_fgp_2_3_0,
		mdbcomp__goal_path__rev_goal_path_inside_2_0_i2);
MR_def_label(mdbcomp__goal_path__rev_goal_path_inside_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(mdbcomp__goal_path__rgp_to_fgp_2_3_0,
		mdbcomp__goal_path__rev_goal_path_inside_2_0_i3);
MR_def_label(mdbcomp__goal_path__rev_goal_path_inside_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__goal_path__goal_path_inside_relative_3_0,
		mdbcomp__goal_path__rev_goal_path_inside_2_0_i4);
MR_def_label(mdbcomp__goal_path__rev_goal_path_inside_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_inside_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(mdbcomp__goal_path__fgp_to_rgp_2_3_0,
		mdbcomp__goal_path__rev_goal_path_inside_2_0_i6);
MR_def_label(mdbcomp__goal_path__rev_goal_path_inside_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__goal_path__rev_goal_path_inside_2_0,1)
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


MR_BEGIN_MODULE(mdbcomp__goal_path_module32)
	MR_init_entry1(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0);
	MR_init_label10(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0,18,4,5,6,7,8,9,10,11,12)
	MR_init_label5(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0,13,14,3,19,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rev_goal_path_remove_type_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,6)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i3);
MR_def_label(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i3);
MR_def_label(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i6);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i3);
MR_def_label(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i3);
MR_def_label(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,4)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i3);
MR_def_label(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i9);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i3);
MR_def_label(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,5)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i10);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i3);
MR_def_label(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i11);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i3);
MR_def_label(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i12);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i3);
MR_def_label(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i13);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i3);
MR_def_label(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i14);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i3);
MR_def_label(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_r2, 1);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	}
MR_def_label(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(mdbcomp__goal_path_module33)
	MR_init_entry1(mdbcomp__goal_path__goal_id_inside_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__goal_id_inside_3_0);
	MR_init_label6(mdbcomp__goal_path__goal_id_inside_3_0,25,6,5,8,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_id_inside'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__goal_id_inside_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(mdbcomp__goal_path__goal_id_inside_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r2)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_id_inside_3_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_GOTO_LAB(mdbcomp__goal_path__goal_id_inside_3_0_i5);
MR_def_label(mdbcomp__goal_path__goal_id_inside_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(mdbcomp__goal_path__goal_id_inside_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) == MR_sv(2))) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_id_inside_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, containing_goal);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		mdbcomp__goal_path__goal_id_inside_3_0_i8);
MR_def_label(mdbcomp__goal_path__goal_id_inside_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__goal_id_inside_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(mdbcomp__goal_path__goal_id_inside_3_0_i25);
	}
MR_def_label(mdbcomp__goal_path__goal_id_inside_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(mdbcomp__goal_path__goal_id_inside_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module34)
	MR_init_entry1(fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0);
	MR_init_label3(fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_id_to_reverse_path'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, containing_goal);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0_i2);
MR_def_label(fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_localcall_lab(fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0,
		fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0_i5);
MR_def_label(fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module35)
	MR_init_entry1(fn__mdbcomp__goal_path__goal_id_to_forward_path_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__goal_path__goal_id_to_forward_path_2_0);
	MR_init_label1(fn__mdbcomp__goal_path__goal_id_to_forward_path_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_id_to_forward_path'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__goal_path__goal_id_to_forward_path_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0,
		fn__mdbcomp__goal_path__goal_id_to_forward_path_2_0_i2);
MR_def_label(fn__mdbcomp__goal_path__goal_id_to_forward_path_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(mdbcomp__goal_path__rgp_to_fgp_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(mdbcomp__goal_path_module36)
	MR_init_entry1(mdbcomp__goal_path__create_reverse_goal_path_map_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__create_reverse_goal_path_map_2_3_0);
	MR_init_label5(mdbcomp__goal_path__create_reverse_goal_path_map_2_3_0,23,3,5,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_reverse_goal_path_map_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__goal_path__create_reverse_goal_path_map_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(mdbcomp__goal_path__create_reverse_goal_path_map_2_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__create_reverse_goal_path_map_2_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(mdbcomp__goal_path__create_reverse_goal_path_map_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r6 = MR_tempr1;
	MR_r5 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__create_reverse_goal_path_map_2_3_0_i5);
	}
	MR_r5 = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		mdbcomp__goal_path__create_reverse_goal_path_map_2_3_0_i8);
MR_def_label(mdbcomp__goal_path__create_reverse_goal_path_map_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r6, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		mdbcomp__goal_path__create_reverse_goal_path_map_2_3_0_i6);
MR_def_label(mdbcomp__goal_path__create_reverse_goal_path_map_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		mdbcomp__goal_path__create_reverse_goal_path_map_2_3_0_i8);
MR_def_label(mdbcomp__goal_path__create_reverse_goal_path_map_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(mdbcomp__goal_path__create_reverse_goal_path_map_2_3_0_i23);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(mdbcomp__goal_path_module37)
	MR_init_entry1(fn__mdbcomp__goal_path__create_reverse_goal_path_map_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__goal_path__create_reverse_goal_path_map_1_0);
	MR_init_label2(fn__mdbcomp__goal_path__create_reverse_goal_path_map_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_reverse_goal_path_map'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__goal_path__create_reverse_goal_path_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, containing_goal);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		fn__mdbcomp__goal_path__create_reverse_goal_path_map_1_0_i2);
MR_def_label(fn__mdbcomp__goal_path__create_reverse_goal_path_map_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__mdbcomp__goal_path__create_reverse_goal_path_map_1_0_i3);
MR_def_label(fn__mdbcomp__goal_path__create_reverse_goal_path_map_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(mdbcomp__goal_path__create_reverse_goal_path_map_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__map_values_only_3_0);

MR_BEGIN_MODULE(mdbcomp__goal_path_module38)
	MR_init_entry1(fn__mdbcomp__goal_path__create_forward_goal_path_map_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__goal_path__create_forward_goal_path_map_1_0);
	MR_init_label3(fn__mdbcomp__goal_path__create_forward_goal_path_map_1_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_forward_goal_path_map'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__goal_path__create_forward_goal_path_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, containing_goal);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		fn__mdbcomp__goal_path__create_forward_goal_path_map_1_0_i2);
MR_def_label(fn__mdbcomp__goal_path__create_forward_goal_path_map_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__mdbcomp__goal_path__create_forward_goal_path_map_1_0_i3);
MR_def_label(fn__mdbcomp__goal_path__create_forward_goal_path_map_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__goal_path__create_reverse_goal_path_map_2_3_0,
		fn__mdbcomp__goal_path__create_forward_goal_path_map_1_0_i4);
MR_def_label(fn__mdbcomp__goal_path__create_forward_goal_path_map_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, forward_goal_path);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,4);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(map__map_values_only_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bimap__det_insert_4_0);
MR_decl_entry(bimap__lookup_3_0);

MR_BEGIN_MODULE(mdbcomp__goal_path_module39)
	MR_init_entry1(mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_0);
	MR_init_label5(mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_0,23,3,5,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_reverse_goal_path_bimap_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r6 = MR_tempr1;
	MR_r5 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_0_i5);
	}
	MR_r5 = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	}
	MR_np_call_localret_ent(bimap__det_insert_4_0,
		mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_0_i8);
MR_def_label(mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r6, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(bimap__lookup_3_0,
		mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_0_i6);
MR_def_label(mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	}
	MR_np_call_localret_ent(bimap__det_insert_4_0,
		mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_0_i8);
MR_def_label(mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_0_i23);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__bimap__init_0_0);

MR_BEGIN_MODULE(mdbcomp__goal_path_module40)
	MR_init_entry1(fn__mdbcomp__goal_path__create_reverse_goal_path_bimap_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__goal_path__create_reverse_goal_path_bimap_1_0);
	MR_init_label2(fn__mdbcomp__goal_path__create_reverse_goal_path_bimap_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_reverse_goal_path_bimap'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__goal_path__create_reverse_goal_path_bimap_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, containing_goal);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		fn__mdbcomp__goal_path__create_reverse_goal_path_bimap_1_0_i2);
MR_def_label(fn__mdbcomp__goal_path__create_reverse_goal_path_bimap_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_np_call_localret_ent(fn__bimap__init_0_0,
		fn__mdbcomp__goal_path__create_reverse_goal_path_bimap_1_0_i3);
MR_def_label(fn__mdbcomp__goal_path__create_reverse_goal_path_bimap_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__array__init_2_0);

MR_BEGIN_MODULE(mdbcomp__goal_path_module41)
	MR_init_entry1(fn__mdbcomp__goal_path__create_goal_id_array_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__goal_path__create_goal_id_array_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_goal_id_array'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__goal_path__create_goal_id_array_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(maybe, maybe);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__array__init_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module42)
	MR_init_entry1(fn__mdbcomp__goal_path__create_goal_id_array_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__goal_path__create_goal_id_array_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_goal_id_array'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__goal_path__create_goal_id_array_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(maybe, maybe);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(fn__array__init_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__set_4_0);

MR_BEGIN_MODULE(mdbcomp__goal_path_module43)
	MR_init_entry1(mdbcomp__goal_path__update_goal_attribute_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__update_goal_attribute_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_goal_attribute'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__goal_path__update_goal_attribute_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(maybe, maybe);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(array__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__array__lookup_2_0);

MR_BEGIN_MODULE(mdbcomp__goal_path_module44)
	MR_init_entry1(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__goal_path__get_goal_attribute_det_2_0);
	MR_init_label2(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_goal_attribute_det'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__goal_path__get_goal_attribute_det_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(maybe, maybe);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__array__lookup_2_0,
		fn__mdbcomp__goal_path__get_goal_attribute_det_2_0_i3);
MR_def_label(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdbcomp.goal_path", 17);
	MR_r2 = (MR_Word) MR_string_const("function \140mdbcomp.goal_path.get_goal_attribute_det\'/2", 53);
	MR_r3 = (MR_Word) MR_string_const("Goal attribute array slot empty", 31);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module45)
	MR_init_entry1(__Unify___mdbcomp__goal_path__containing_goal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__goal_path__containing_goal_0_0);
	MR_init_label4(__Unify___mdbcomp__goal_path__containing_goal_0_0,15,5,38,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__goal_path__containing_goal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__containing_goal_0_0_i15);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__containing_goal_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(5);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__goal_path__containing_goal_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__goal_path__containing_goal_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__containing_goal_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_tempr1;
	MR_tempr4 = MR_sv(1);
	MR_r1 = MR_tfield(1, MR_tempr4, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((MR_tempr2 == MR_tempr1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__containing_goal_0_0_i38);
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	if ((MR_sv(1) != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__containing_goal_0_0_i1);
	}
	}
MR_def_label(__Unify___mdbcomp__goal_path__containing_goal_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___mdbcomp__goal_path__goal_path_step_0_0);
MR_def_label(__Unify___mdbcomp__goal_path__containing_goal_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdbcomp__goal_path_module46)
	MR_init_entry1(__Compare___mdbcomp__goal_path__containing_goal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__goal_path__containing_goal_0_0);
	MR_init_label6(__Compare___mdbcomp__goal_path__containing_goal_0_0,24,7,5,9,11,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__goal_path__containing_goal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__containing_goal_0_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__containing_goal_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__containing_goal_0_0_i7);
	}
MR_def_label(__Compare___mdbcomp__goal_path__containing_goal_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__containing_goal_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__containing_goal_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__containing_goal_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__containing_goal_0_0,9)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__goal_path__containing_goal_0_0_i11);
MR_def_label(__Compare___mdbcomp__goal_path__containing_goal_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__containing_goal_0_0_i16);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__goal_path__goal_path_step_0_0);
MR_def_label(__Compare___mdbcomp__goal_path__containing_goal_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(mdbcomp__goal_path_module47)
	MR_init_entry1(__Unify___mdbcomp__goal_path__containing_goal_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__goal_path__containing_goal_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__goal_path__containing_goal_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
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

MR_BEGIN_MODULE(mdbcomp__goal_path_module48)
	MR_init_entry1(__Compare___mdbcomp__goal_path__containing_goal_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__goal_path__containing_goal_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__goal_path__containing_goal_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
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


MR_BEGIN_MODULE(mdbcomp__goal_path_module49)
	MR_init_entry1(__Unify___mdbcomp__goal_path__forward_goal_path_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__goal_path__forward_goal_path_0_0);
	MR_init_label5(__Unify___mdbcomp__goal_path__forward_goal_path_0_0,30,14,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__goal_path__forward_goal_path_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(__Unify___mdbcomp__goal_path__forward_goal_path_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__forward_goal_path_0_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__forward_goal_path_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdbcomp__goal_path__forward_goal_path_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__goal_path__forward_goal_path_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__forward_goal_path_0_0_i1);
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
	MR_np_call_localret_ent(__Unify___mdbcomp__goal_path__goal_path_step_0_0,
		__Unify___mdbcomp__goal_path__forward_goal_path_0_0_i7);
MR_def_label(__Unify___mdbcomp__goal_path__forward_goal_path_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__forward_goal_path_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(__Unify___mdbcomp__goal_path__forward_goal_path_0_0_i30);
MR_def_label(__Unify___mdbcomp__goal_path__forward_goal_path_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module50)
	MR_init_entry1(__Compare___mdbcomp__goal_path__forward_goal_path_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__goal_path__forward_goal_path_0_0);
	MR_init_label7(__Compare___mdbcomp__goal_path__forward_goal_path_0_0,40,24,7,5,9,11,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__goal_path__forward_goal_path_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(__Compare___mdbcomp__goal_path__forward_goal_path_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__forward_goal_path_0_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__forward_goal_path_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__forward_goal_path_0_0_i7);
	}
MR_def_label(__Compare___mdbcomp__goal_path__forward_goal_path_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__forward_goal_path_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__forward_goal_path_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__forward_goal_path_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__forward_goal_path_0_0,9)
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
	MR_np_call_localret_ent(__Compare___mdbcomp__goal_path__goal_path_step_0_0,
		__Compare___mdbcomp__goal_path__forward_goal_path_0_0_i11);
MR_def_label(__Compare___mdbcomp__goal_path__forward_goal_path_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__forward_goal_path_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(__Compare___mdbcomp__goal_path__forward_goal_path_0_0_i40);
MR_def_label(__Compare___mdbcomp__goal_path__forward_goal_path_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___array__array_1_0);

MR_BEGIN_MODULE(mdbcomp__goal_path_module51)
	MR_init_entry1(__Unify___mdbcomp__goal_path__goal_attr_array_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__goal_path__goal_attr_array_1_0);
	MR_init_label1(__Unify___mdbcomp__goal_path__goal_attr_array_1_0,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__goal_path__goal_attr_array_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__goal_attr_array_1_0_i7);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(maybe, maybe);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___array__array_1_0);
MR_def_label(__Unify___mdbcomp__goal_path__goal_attr_array_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___array__array_1_0);

MR_BEGIN_MODULE(mdbcomp__goal_path_module52)
	MR_init_entry1(__Compare___mdbcomp__goal_path__goal_attr_array_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__goal_path__goal_attr_array_1_0);
	MR_init_label2(__Compare___mdbcomp__goal_path__goal_attr_array_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__goal_path__goal_attr_array_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_attr_array_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_attr_array_1_0_i2);
MR_def_label(__Compare___mdbcomp__goal_path__goal_attr_array_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__goal_path__goal_attr_array_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(maybe, maybe);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___array__array_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module53)
	MR_init_entry1(__Unify___mdbcomp__goal_path__goal_forward_path_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__goal_path__goal_forward_path_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__goal_path__goal_forward_path_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
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


MR_BEGIN_MODULE(mdbcomp__goal_path_module54)
	MR_init_entry1(__Compare___mdbcomp__goal_path__goal_forward_path_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__goal_path__goal_forward_path_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__goal_path__goal_forward_path_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
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


MR_BEGIN_MODULE(mdbcomp__goal_path_module55)
	MR_init_entry1(__Unify___mdbcomp__goal_path__goal_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__goal_path__goal_id_0_0);
	MR_init_label1(__Unify___mdbcomp__goal_path__goal_id_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__goal_path__goal_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__goal_id_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdbcomp__goal_path__goal_id_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module56)
	MR_init_entry1(__Compare___mdbcomp__goal_path__goal_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__goal_path__goal_id_0_0);
	MR_init_label2(__Compare___mdbcomp__goal_path__goal_id_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__goal_path__goal_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_id_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_id_0_0_i2);
MR_def_label(__Compare___mdbcomp__goal_path__goal_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__goal_path__goal_id_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module57)
	MR_init_entry1(__Unify___mdbcomp__goal_path__goal_path_step_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__goal_path__goal_path_step_0_0);
	MR_init_label10(__Unify___mdbcomp__goal_path__goal_path_step_0_0,5,6,7,8,9,10,11,12,14,16)
	MR_init_label3(__Unify___mdbcomp__goal_path__goal_path_step_0_0,50,18,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__goal_path__goal_path_step_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__goal_path_step_0_0_i50);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,6)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__goal_path_step_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__goal_path__goal_path_step_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__goal_path_step_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__goal_path__goal_path_step_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__goal_path_step_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__goal_path__goal_path_step_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__goal_path_step_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__goal_path__goal_path_step_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__goal_path_step_0_0_i9);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__goal_path__goal_path_step_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__goal_path_step_0_0_i10);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__goal_path__goal_path_step_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__goal_path_step_0_0_i11);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__goal_path__goal_path_step_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__goal_path_step_0_0_i12);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__goal_path_step_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__goal_path__goal_path_step_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__goal_path_step_0_0_i14);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__goal_path_step_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__goal_path__goal_path_step_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__goal_path_step_0_0_i16);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__goal_path_step_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__goal_path__goal_path_step_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__goal_path_step_0_0_i18);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__goal_path_step_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__goal_path__goal_path_step_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__goal_path__goal_path_step_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__goal_path_step_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__goal_path_step_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	MR_r2 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__goal_path__maybe_switch_num_functors_0_0);
	}
MR_def_label(__Unify___mdbcomp__goal_path__goal_path_step_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module58)
	MR_init_entry1(__Compare___mdbcomp__goal_path__goal_path_step_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__goal_path__goal_path_step_0_0);
	MR_init_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0,7,8,9,10,11,12,13,14,15,16)
	MR_init_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0,5,20,21,22,23,24,25,26,27,28)
	MR_init_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0,29,18,33,34,35,36,37,38,39,40)
	MR_init_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0,41,42,31,46,47,48,49,50,51,52)
	MR_init_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0,53,54,55,44,59,60,61,62,63,64)
	MR_init_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0,65,66,67,68,57,72,73,74,75,76)
	MR_init_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0,77,78,79,80,81,70,85,86,87,88)
	MR_init_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0,89,90,396,91,92,93,94,83,98,99)
	MR_init_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0,100,101,102,103,104,105,107,108,96,112)
	MR_init_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0,113,114,115,116,117,118,119,120,122,110)
	MR_init_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0,126,127,128,129,130,131,132,133,134,135)
	MR_init_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0,124,140,141,142,143,144,145,146,147,148)
	MR_init_label10(__Compare___mdbcomp__goal_path__goal_path_step_0_0,149,138,153,154,155,156,157,158,159,160)
	MR_init_label7(__Compare___mdbcomp__goal_path__goal_path_step_0_0,312,161,162,314,163,165,170)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__goal_path__goal_path_step_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i396);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(2),0,6)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i8);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i12);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i13);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i14);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i312);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i18);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i21);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i24);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i26);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i27);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i28);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i29);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i312);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i31);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i33);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i35);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i36);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i38);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i40);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i41);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i42);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i312);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i44);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i46);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i47);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i48);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i49);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i50);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i51);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i52);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i53);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i54);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i55);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i312);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i57);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i59);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i60);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i61);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i62);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i63);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i64);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i65);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i66);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i67);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i68);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i312);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i70);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i72);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i73);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i74);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i75);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i76);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i77);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i78);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i79);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i80);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i81);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i312);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i83);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i85);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i86);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i87);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i88);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i89);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i90);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i91);
	}
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,396)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i92);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i93);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i94);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i312);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i96);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i98);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i99);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i100);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i101);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i102);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i103);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i104);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i105);
	}
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i107);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i108);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i314);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i110);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i112);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i113);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i114);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i115);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i116);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i117);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i118);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i119);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i120);
	}
	MR_r1 = MR_tfield(2, MR_sv(2), 0);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i122);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i314);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i124);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i126);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i127);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i128);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i129);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i130);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i131);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i132);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i133);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i134);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i135);
	}
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i312);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i138);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i140);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i141);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i142);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i143);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i144);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i145);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i146);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i147);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i148);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i149);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i312);
	}
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i153);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i154);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i155);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i156);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i157);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i158);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i159);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i160);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i161);
	}
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,312)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i162);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i163);
	}
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,314)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__goal_path__goal_path_step_0_0_i165);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__goal_path_step_0_0_i170);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__goal_path__maybe_switch_num_functors_0_0);
MR_def_label(__Compare___mdbcomp__goal_path__goal_path_step_0_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module59)
	MR_init_entry1(__Unify___mdbcomp__goal_path__goal_path_string_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__goal_path__goal_path_string_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__goal_path__goal_path_string_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(mdbcomp__goal_path_module60)
	MR_init_entry1(__Compare___mdbcomp__goal_path__goal_path_string_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__goal_path__goal_path_string_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__goal_path__goal_path_string_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module61)
	MR_init_entry1(__Unify___mdbcomp__goal_path__goal_reverse_path_bimap_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__goal_path__goal_reverse_path_bimap_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__goal_path__goal_reverse_path_bimap_0_0);
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


MR_BEGIN_MODULE(mdbcomp__goal_path_module62)
	MR_init_entry1(__Compare___mdbcomp__goal_path__goal_reverse_path_bimap_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__goal_path__goal_reverse_path_bimap_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__goal_path__goal_reverse_path_bimap_0_0);
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


MR_BEGIN_MODULE(mdbcomp__goal_path_module63)
	MR_init_entry1(__Unify___mdbcomp__goal_path__goal_reverse_path_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__goal_path__goal_reverse_path_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__goal_path__goal_reverse_path_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
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


MR_BEGIN_MODULE(mdbcomp__goal_path_module64)
	MR_init_entry1(__Compare___mdbcomp__goal_path__goal_reverse_path_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__goal_path__goal_reverse_path_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__goal_path__goal_reverse_path_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
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


MR_BEGIN_MODULE(mdbcomp__goal_path_module65)
	MR_init_entry1(__Unify___mdbcomp__goal_path__maybe_cut_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__goal_path__maybe_cut_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__goal_path__maybe_cut_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module66)
	MR_init_entry1(__Compare___mdbcomp__goal_path__maybe_cut_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__goal_path__maybe_cut_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__goal_path__maybe_cut_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module67)
	MR_init_entry1(__Unify___mdbcomp__goal_path__maybe_switch_num_functors_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__goal_path__maybe_switch_num_functors_0_0);
	MR_init_label3(__Unify___mdbcomp__goal_path__maybe_switch_num_functors_0_0,10,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__goal_path__maybe_switch_num_functors_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__maybe_switch_num_functors_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__maybe_switch_num_functors_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__goal_path__maybe_switch_num_functors_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__goal_path__maybe_switch_num_functors_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__maybe_switch_num_functors_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdbcomp__goal_path__maybe_switch_num_functors_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module68)
	MR_init_entry1(__Compare___mdbcomp__goal_path__maybe_switch_num_functors_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__goal_path__maybe_switch_num_functors_0_0);
	MR_init_label4(__Compare___mdbcomp__goal_path__maybe_switch_num_functors_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__goal_path__maybe_switch_num_functors_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__maybe_switch_num_functors_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__maybe_switch_num_functors_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__maybe_switch_num_functors_0_0_i7);
	}
MR_def_label(__Compare___mdbcomp__goal_path__maybe_switch_num_functors_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__maybe_switch_num_functors_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__maybe_switch_num_functors_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__maybe_switch_num_functors_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__maybe_switch_num_functors_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module69)
	MR_init_entry1(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__goal_path__reverse_goal_path_0_0);
	MR_init_label4(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0,14,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__goal_path__reverse_goal_path_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0_i14);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0_i1);
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
	MR_np_localcall_lab(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0,
		__Unify___mdbcomp__goal_path__reverse_goal_path_0_0_i7);
MR_def_label(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__goal_path__goal_path_step_0_0);
MR_def_label(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module70)
	MR_init_entry1(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__goal_path__reverse_goal_path_0_0);
	MR_init_label6(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0,24,7,5,9,11,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__goal_path__reverse_goal_path_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0_i7);
	}
MR_def_label(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0,9)
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
	MR_np_localcall_lab(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0,
		__Compare___mdbcomp__goal_path__reverse_goal_path_0_0_i11);
MR_def_label(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0_i16);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__goal_path__goal_path_step_0_0);
MR_def_label(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__goal_path_module71)
	MR_init_entry1(mdbcomp__goal_path__IntroducedFrom__pred__goal_path_step_from_string_2__453__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__goal_path__IntroducedFrom__pred__goal_path_step_from_string_2__453__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__goal_path_step_from_string_2__453__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__goal_path__IntroducedFrom__pred__goal_path_step_from_string_2__453__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdbcomp__goal_path_maybe_bunch_0(void)
{
	mdbcomp__goal_path_module0();
	mdbcomp__goal_path_module1();
	mdbcomp__goal_path_module2();
	mdbcomp__goal_path_module3();
	mdbcomp__goal_path_module4();
	mdbcomp__goal_path_module5();
	mdbcomp__goal_path_module6();
	mdbcomp__goal_path_module7();
	mdbcomp__goal_path_module8();
	mdbcomp__goal_path_module9();
	mdbcomp__goal_path_module10();
	mdbcomp__goal_path_module11();
	mdbcomp__goal_path_module12();
	mdbcomp__goal_path_module13();
	mdbcomp__goal_path_module14();
	mdbcomp__goal_path_module15();
	mdbcomp__goal_path_module16();
	mdbcomp__goal_path_module17();
	mdbcomp__goal_path_module18();
	mdbcomp__goal_path_module19();
	mdbcomp__goal_path_module20();
	mdbcomp__goal_path_module21();
	mdbcomp__goal_path_module22();
	mdbcomp__goal_path_module23();
	mdbcomp__goal_path_module24();
	mdbcomp__goal_path_module25();
	mdbcomp__goal_path_module26();
	mdbcomp__goal_path_module27();
	mdbcomp__goal_path_module28();
	mdbcomp__goal_path_module29();
	mdbcomp__goal_path_module30();
	mdbcomp__goal_path_module31();
	mdbcomp__goal_path_module32();
	mdbcomp__goal_path_module33();
	mdbcomp__goal_path_module34();
	mdbcomp__goal_path_module35();
	mdbcomp__goal_path_module36();
	mdbcomp__goal_path_module37();
	mdbcomp__goal_path_module38();
	mdbcomp__goal_path_module39();
}

static void mercury__mdbcomp__goal_path_maybe_bunch_1(void)
{
	mdbcomp__goal_path_module40();
	mdbcomp__goal_path_module41();
	mdbcomp__goal_path_module42();
	mdbcomp__goal_path_module43();
	mdbcomp__goal_path_module44();
	mdbcomp__goal_path_module45();
	mdbcomp__goal_path_module46();
	mdbcomp__goal_path_module47();
	mdbcomp__goal_path_module48();
	mdbcomp__goal_path_module49();
	mdbcomp__goal_path_module50();
	mdbcomp__goal_path_module51();
	mdbcomp__goal_path_module52();
	mdbcomp__goal_path_module53();
	mdbcomp__goal_path_module54();
	mdbcomp__goal_path_module55();
	mdbcomp__goal_path_module56();
	mdbcomp__goal_path_module57();
	mdbcomp__goal_path_module58();
	mdbcomp__goal_path_module59();
	mdbcomp__goal_path_module60();
	mdbcomp__goal_path_module61();
	mdbcomp__goal_path_module62();
	mdbcomp__goal_path_module63();
	mdbcomp__goal_path_module64();
	mdbcomp__goal_path_module65();
	mdbcomp__goal_path_module66();
	mdbcomp__goal_path_module67();
	mdbcomp__goal_path_module68();
	mdbcomp__goal_path_module69();
	mdbcomp__goal_path_module70();
	mdbcomp__goal_path_module71();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdbcomp__goal_path__init(void);
void mercury__mdbcomp__goal_path__init_type_tables(void);
void mercury__mdbcomp__goal_path__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdbcomp__goal_path__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdbcomp__goal_path__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdbcomp__goal_path__init_threadscope_string_table(void);
#endif

void mercury__mdbcomp__goal_path__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdbcomp__goal_path_maybe_bunch_0();
	mercury__mdbcomp__goal_path_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__goal_path__type_ctor_info_containing_goal_0,
		mdbcomp__goal_path__containing_goal_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__goal_path__type_ctor_info_containing_goal_map_0,
		mdbcomp__goal_path__containing_goal_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
		mdbcomp__goal_path__forward_goal_path_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
		mdbcomp__goal_path__goal_attr_array_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__goal_path__type_ctor_info_goal_forward_path_map_0,
		mdbcomp__goal_path__goal_forward_path_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0,
		mdbcomp__goal_path__goal_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_step_0,
		mdbcomp__goal_path__goal_path_step_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_string_0,
		mdbcomp__goal_path__goal_path_string_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__goal_path__type_ctor_info_goal_reverse_path_bimap_0,
		mdbcomp__goal_path__goal_reverse_path_bimap_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__goal_path__type_ctor_info_goal_reverse_path_map_0,
		mdbcomp__goal_path__goal_reverse_path_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__goal_path__type_ctor_info_maybe_cut_0,
		mdbcomp__goal_path__maybe_cut_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0,
		mdbcomp__goal_path__maybe_switch_num_functors_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
		mdbcomp__goal_path__reverse_goal_path_0_0);
	mercury__mdbcomp__goal_path__init_debugger();
}

void mercury__mdbcomp__goal_path__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__goal_path__type_ctor_info_containing_goal_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__goal_path__type_ctor_info_containing_goal_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__goal_path__type_ctor_info_goal_attr_array_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__goal_path__type_ctor_info_goal_forward_path_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_step_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_string_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__goal_path__type_ctor_info_goal_reverse_path_bimap_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__goal_path__type_ctor_info_goal_reverse_path_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__goal_path__type_ctor_info_maybe_cut_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0);
	}
}


void mercury__mdbcomp__goal_path__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdbcomp__goal_path__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__mdbcomp__goal_path);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdbcomp__goal_path__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdbcomp__goal_path__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
