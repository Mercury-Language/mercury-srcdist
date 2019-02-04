/*
** Automatically generated from `size_prof.m'
** by the Mercury compiler,
** version rotd-2007-04-03, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__size_prof__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 520 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.size_prof.c"
#line 526 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.size_prof.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.size_prof.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.size_prof.c"
#line 28 "../library/array.int2"
#include "array.mh"

#line 43 "transform_hlds.size_prof.c"
#line 44 "transform_hlds.size_prof.c"
#include "transform_hlds.size_prof.mh"

#line 47 "transform_hlds.size_prof.c"
#line 48 "transform_hlds.size_prof.c"
#ifndef TRANSFORM_HLDS__SIZE_PROF_DECL_GUARD
#define TRANSFORM_HLDS__SIZE_PROF_DECL_GUARD

#line 52 "transform_hlds.size_prof.c"
#line 53 "transform_hlds.size_prof.c"

#endif
#line 56 "transform_hlds.size_prof.c"


struct mercury_type_0 {
	MR_Word * f1[2];
};
static const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
static const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_String f1;
};
static const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
static const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
};
static const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[3];
};
static const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
static const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
static const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
static const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
static const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__size_prof__type_ctor_info_type_info_map_0,
	mercury_data_transform_hlds__size_prof__type_ctor_info_type_ctor_map_0,
	mercury_data_transform_hlds__size_prof__type_ctor_info_rev_type_info_map_0,
	mercury_data_transform_hlds__size_prof__type_ctor_info_rev_type_ctor_map_0,
	mercury_data_transform_hlds__size_prof__type_ctor_info_known_size_map_0,
	mercury_data_transform_hlds__size_prof__type_ctor_info_info_0,
	mercury_data_transform_hlds__size_prof__type_ctor_info_construct_transform_0;
MR_decl_label5(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_0, 22,5,4,8,3)
MR_decl_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0, 2,3,4,5,8,11,10,7)
MR_decl_label5(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0, 12,13,14,15,16)
MR_decl_label2(transform_hlds__size_prof__binds_arg_in_cell_2_0, 2,1)
MR_decl_label5(transform_hlds__size_prof__construct_rev_map_4_0, 19,4,7,5,3)
MR_decl_label8(transform_hlds__size_prof__construct_type_info_9_0, 2,3,4,6,7,8,9,5)
MR_decl_label4(transform_hlds__size_prof__construct_type_info_9_0, 11,10,14,15)
MR_decl_label4(transform_hlds__size_prof__ctor_is_type_info_related_2_0, 2,3,5,1)
MR_decl_label6(transform_hlds__size_prof__find_defined_args_5_0, 3,9,11,13,10,8)
MR_decl_label6(transform_hlds__size_prof__generate_size_var_7_0, 17,4,5,6,7,8)
MR_decl_label6(transform_hlds__size_prof__get_new_var_5_0, 2,3,4,5,6,7)
MR_decl_label3(transform_hlds__size_prof__include_in_target_map_4_0, 3,5,2)
MR_decl_label5(transform_hlds__size_prof__make_size_goal_8_0, 2,3,5,6,7)
MR_decl_label6(transform_hlds__size_prof__make_type_ctor_info_6_0, 3,2,7,6,10,12)
MR_decl_label8(transform_hlds__size_prof__make_type_info_6_0, 3,2,7,6,12,15,11,20)
MR_decl_label8(transform_hlds__size_prof__make_type_info_6_0, 22,24,23,26,28,29,30,31)
MR_decl_label2(transform_hlds__size_prof__make_type_info_6_0, 18,32)
MR_decl_label8(transform_hlds__size_prof__process_args_9_0, 4,6,5,9,8,11,12,13)
MR_decl_label3(transform_hlds__size_prof__process_args_9_0, 16,17,3)
MR_decl_label5(transform_hlds__size_prof__process_conj_4_0, 4,5,9,6,3)
MR_decl_label8(transform_hlds__size_prof__process_cons_deconstruct_7_0, 2,3,4,7,6,8,9,10)
MR_decl_label3(transform_hlds__size_prof__process_cons_deconstruct_7_0, 11,12,13)
MR_decl_label8(transform_hlds__size_prof__process_construct_14_0, 2,5,4,7,9,10,11,14)
MR_decl_label8(transform_hlds__size_prof__process_construct_14_0, 18,22,25,16,31,34,29,13)
MR_decl_label2(transform_hlds__size_prof__process_construct_14_0, 39,43)
MR_decl_label8(transform_hlds__size_prof__process_deconstruct_8_0, 2,5,4,8,9,10,12,13)
MR_decl_label7(transform_hlds__size_prof__process_deconstruct_8_0, 16,17,18,15,11,20,24)
MR_decl_label6(transform_hlds__size_prof__process_disj_14_0, 2,5,6,7,8,4)
MR_decl_label8(transform_hlds__size_prof__process_goal_4_0, 110,5,11,14,8,9,111,18)
MR_decl_label8(transform_hlds__size_prof__process_goal_4_0, 112,21,22,23,24,113,28,27)
MR_decl_label8(transform_hlds__size_prof__process_goal_4_0, 29,30,31,114,35,36,37,38)
MR_decl_label8(transform_hlds__size_prof__process_goal_4_0, 34,39,40,41,42,43,115,47)
MR_decl_label8(transform_hlds__size_prof__process_goal_4_0, 46,49,50,51,45,52,53,116)
MR_decl_label8(transform_hlds__size_prof__process_goal_4_0, 55,117,57,118,59,60,61,62)
MR_decl_label8(transform_hlds__size_prof__process_goal_4_0, 63,64,65,66,67,68,119,70)
MR_decl_label3(transform_hlds__size_prof__process_par_conj_8_0, 4,5,3)
MR_decl_label8(transform_hlds__size_prof__process_proc_9_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__size_prof__process_proc_9_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(transform_hlds__size_prof__process_proc_9_0, 18,19,20,21,22,23,24,25)
MR_decl_label7(transform_hlds__size_prof__process_proc_msg_9_0, 2,4,6,7,8,9,10)
MR_decl_label6(transform_hlds__size_prof__process_switch_14_0, 2,5,6,7,8,4)
MR_decl_label1(transform_hlds__size_prof__record_known_size_4_0, 2)
MR_decl_label2(transform_hlds__size_prof__record_known_type_ctor_info_6_0, 2,3)
MR_decl_label5(transform_hlds__size_prof__record_known_type_info_5_0, 3,6,8,9,2)
MR_decl_label4(transform_hlds__size_prof__record_type_info_var_4_0, 2,4,3,6)
MR_decl_label6(transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_0, 2,5,7,6,9,4)
MR_decl_label8(transform_hlds__size_prof__update_rev_maps_2_0, 2,3,4,5,6,7,8,9)
MR_decl_label1(transform_hlds__size_prof__update_rev_maps_2_0, 10)
MR_decl_label3(transform_hlds__size_prof__update_target_map_2_0, 2,3,4)
MR_decl_label1(fn__transform_hlds__size_prof__compute_functor_size_2_0, 3)
MR_decl_label8(__Unify___transform_hlds__size_prof__info_0_0, 2,4,6,8,10,12,14,16)
MR_decl_label2(__Unify___transform_hlds__size_prof__info_0_0, 18,1)
MR_decl_label8(__Compare___transform_hlds__size_prof__info_0_0, 3,7,11,15,19,23,27,31)
MR_decl_label3(__Compare___transform_hlds__size_prof__info_0_0, 35,39,52)
MR_decl_static(transform_hlds__size_prof__make_type_ctor_info_6_0)
MR_decl_static(transform_hlds__size_prof__construct_type_info_9_0)
MR_decl_static(transform_hlds__size_prof__record_type_info_var_4_0)
MR_decl_static(fn__transform_hlds__size_prof__this_file_0_0)
MR_decl_static(transform_hlds__size_prof__make_type_info_6_0)
MR_decl_static(transform_hlds__size_prof__get_new_var_5_0)
MR_decl_static(transform_hlds__size_prof__make_size_goal_8_0)
MR_decl_static(transform_hlds__size_prof__process_args_9_0)
MR_decl_static(transform_hlds__size_prof__generate_size_var_7_0)
MR_decl_static(transform_hlds__size_prof__record_known_size_4_0)
MR_decl_static(fn__transform_hlds__size_prof__compute_functor_size_2_0)
MR_decl_static(transform_hlds__size_prof__binds_arg_in_cell_2_0)
MR_decl_static(transform_hlds__size_prof__find_defined_args_5_0)
MR_decl_static(transform_hlds__size_prof__record_known_type_ctor_info_6_0)
MR_decl_static(transform_hlds__size_prof__record_known_type_info_5_0)
MR_decl_static(transform_hlds__size_prof__ctor_is_type_info_related_2_0)
MR_decl_static(transform_hlds__size_prof__process_construct_14_0)
MR_decl_static(transform_hlds__size_prof__process_cons_deconstruct_7_0)
MR_decl_static(transform_hlds__size_prof__process_deconstruct_8_0)
MR_decl_static(transform_hlds__size_prof__construct_rev_map_4_0)
MR_decl_static(transform_hlds__size_prof__update_rev_maps_2_0)
MR_decl_static(transform_hlds__size_prof__update_target_map_2_0)
MR_decl_static(transform_hlds__size_prof__process_goal_4_0)
MR_decl_static(transform_hlds__size_prof__process_conj_4_0)
MR_decl_static(transform_hlds__size_prof__process_par_conj_8_0)
MR_decl_static(transform_hlds__size_prof__process_disj_14_0)
MR_decl_static(transform_hlds__size_prof__process_switch_14_0)
MR_decl_static(transform_hlds__size_prof__process_proc_9_0)
MR_def_extern_entry(transform_hlds__size_prof__process_proc_msg_9_0)
MR_decl_static(transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_0)
MR_decl_static(transform_hlds__size_prof__include_in_target_map_4_0)
MR_def_extern_entry(__Unify___transform_hlds__size_prof__construct_transform_0_0)
MR_def_extern_entry(__Compare___transform_hlds__size_prof__construct_transform_0_0)
MR_decl_static(__Unify___transform_hlds__size_prof__info_0_0)
MR_decl_static(__Compare___transform_hlds__size_prof__info_0_0)
MR_decl_static(__Unify___transform_hlds__size_prof__known_size_map_0_0)
MR_decl_static(__Compare___transform_hlds__size_prof__known_size_map_0_0)
MR_decl_static(__Unify___transform_hlds__size_prof__rev_type_ctor_map_0_0)
MR_decl_static(__Compare___transform_hlds__size_prof__rev_type_ctor_map_0_0)
MR_decl_static(__Unify___transform_hlds__size_prof__rev_type_info_map_0_0)
MR_decl_static(__Compare___transform_hlds__size_prof__rev_type_info_map_0_0)
MR_decl_static(__Unify___transform_hlds__size_prof__type_ctor_map_0_0)
MR_decl_static(__Compare___transform_hlds__size_prof__type_ctor_map_0_0)
MR_decl_static(__Unify___transform_hlds__size_prof__type_info_map_0_0)
MR_decl_static(__Compare___transform_hlds__size_prof__type_info_map_0_0)
MR_decl_static(transform_hlds__size_prof__IntroducedFrom__pred__process_goal__430__1_3_0)
MR_decl_static(transform_hlds__size_prof__IntroducedFrom__pred__process_disj__537__1_3_0)
MR_decl_static(transform_hlds__size_prof__IntroducedFrom__pred__process_switch__577__1_3_0)
MR_decl_static(transform_hlds__size_prof__IntroducedFrom__pred__process_cons_construct__708__1_2_0)
MR_decl_static(transform_hlds__size_prof__IntroducedFrom__pred__process_cons_deconstruct__751__1_2_0)
MR_decl_static(transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1083__1_3_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_51_48_95_95_49_95_95_91_50_93_95_48_3_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_51_55_95_95_49_95_95_91_50_93_95_48_3_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_53_55_55_95_95_49_95_95_91_50_93_95_48_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
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
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
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
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__size_prof__construct_type_info_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__size_prof__type_ctor_info_info_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__size_prof__construct_type_info_9_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(0,1),
MR_COMMON(0,2),
MR_CTOR0_ADDR(transform_hlds__size_prof, info),
MR_CTOR0_ADDR(transform_hlds__size_prof, info)
}
},
};

static const struct mercury_type_2 mercury_common_2[3] =
{
{
MR_string_const("TupleArity", 10)
},
{
MR_string_const("TypeClassInfoSlot", 17)
},
{
MR_string_const("KnownSize", 9)
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
1,
0,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_5 mercury_common_5[5] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,4),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(0,4)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(0,4)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_TAG_COMMON(0,0,0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__size_prof__record_known_type_info_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__size_prof__process_goal_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__size_prof__process_disj_14_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__size_prof__process_switch_14_0_1;
static const struct mercury_type_6 mercury_common_6[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__size_prof__record_known_type_info_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(5,0),
MR_COMMON(0,1),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__size_prof__process_goal_4_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__size_prof__process_disj_14_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__size_prof__process_switch_14_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__size_prof__process_cons_deconstruct_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__size_prof__process_goal_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0_1;
static const struct mercury_type_7 mercury_common_7[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__size_prof__process_cons_deconstruct_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,2),
MR_COMMON(0,2)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__size_prof__process_goal_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__size_prof, info),
MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode)
},
{
(MR_Word *) &mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,2),
MR_COMMON(0,2)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__size_prof__update_target_map_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__size_prof__process_proc_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
static const struct mercury_type_8 mercury_common_8[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__size_prof__update_target_map_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(5,1),
MR_COMMON(5,2),
MR_COMMON(5,1),
MR_COMMON(5,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__size_prof__process_proc_9_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_rtti, rtti_varmaps),
MR_COMMON(0,5),
MR_CTOR0_ADDR(transform_hlds__size_prof, info),
MR_CTOR0_ADDR(transform_hlds__size_prof, info)
}
},
};

static const struct mercury_type_9 mercury_common_9[3] =
{
{
MR_COMMON(6,1),
MR_ENTRY_AP(transform_hlds__size_prof__IntroducedFrom__pred__process_goal__430__1_3_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(transform_hlds__size_prof__IntroducedFrom__pred__process_disj__537__1_3_0),
0
},
{
MR_COMMON(6,3),
MR_ENTRY_AP(transform_hlds__size_prof__IntroducedFrom__pred__process_switch__577__1_3_0),
0
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__size_prof__type_ctor_info_type_info_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__size_prof__type_info_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__size_prof__type_info_map_0_0)),
	"transform_hlds.size_prof",
	"type_info_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__size_prof__type_ctor_info_type_ctor_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__size_prof__type_ctor_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__size_prof__type_ctor_map_0_0)),
	"transform_hlds.size_prof",
	"type_ctor_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__size_prof__type_ctor_info_rev_type_info_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__size_prof__rev_type_info_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__size_prof__rev_type_info_map_0_0)),
	"transform_hlds.size_prof",
	"rev_type_info_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__size_prof__type_ctor_info_rev_type_ctor_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__size_prof__rev_type_ctor_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__size_prof__rev_type_ctor_map_0_0)),
	"transform_hlds.size_prof",
	"rev_type_ctor_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__size_prof__type_ctor_info_known_size_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__size_prof__known_size_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__size_prof__known_size_map_0_0)),
	"transform_hlds.size_prof",
	"known_size_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__size_prof__type_ctor_info_construct_transform_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__size_prof__field_types_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__size_prof__type_ctor_info_construct_transform_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0
};

const MR_ConstString mercury_data_transform_hlds__size_prof__field_names_info_0_0[] = {
	"type_ctor_map",
	"type_info_map",
	"rev_type_ctor_map",
	"rev_type_info_map",
	"target_type_info_map",
	"known_size_map",
	"varset",
	"vartypes",
	"transform_op",
	"rtti_varmaps",
	"module_info"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__size_prof__du_functor_desc_info_0_0 = {
	"size_prof_info",
	11,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__size_prof__field_types_info_0_0,
	mercury_data_transform_hlds__size_prof__field_names_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__size_prof__du_stag_ordered_info_0_0[] = {
	&mercury_data_transform_hlds__size_prof__du_functor_desc_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__size_prof__du_ptag_ordered_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__size_prof__du_stag_ordered_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__size_prof__du_name_ordered_info_0[] = {
	&mercury_data_transform_hlds__size_prof__du_functor_desc_info_0_0
};

const MR_Integer mercury_data_transform_hlds__size_prof__functor_number_map_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__size_prof__type_ctor_info_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__size_prof__info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__size_prof__info_0_0)),
	"transform_hlds.size_prof",
	"info",
	{ (void *)mercury_data_transform_hlds__size_prof__du_name_ordered_info_0 },
	{ (void *)mercury_data_transform_hlds__size_prof__du_ptag_ordered_info_0 },
	1,
	4,
	mercury_data_transform_hlds__size_prof__functor_number_map_info_0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0 = {
	"term_words",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1 = {
	"term_cells",
	1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__size_prof__enum_value_ordered_construct_transform_0[] = {
	&mercury_data_transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0,
	&mercury_data_transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__size_prof__enum_name_ordered_construct_transform_0[] = {
	&mercury_data_transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1,
	&mercury_data_transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0
};

const MR_Integer mercury_data_transform_hlds__size_prof__functor_number_map_construct_transform_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__size_prof__type_ctor_info_construct_transform_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__size_prof__construct_transform_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__size_prof__construct_transform_0_0)),
	"transform_hlds.size_prof",
	"construct_transform",
	{ (void *)mercury_data_transform_hlds__size_prof__enum_name_ordered_construct_transform_0 },
	{ (void *)mercury_data_transform_hlds__size_prof__enum_value_ordered_construct_transform_0 },
	2,
	4,
	mercury_data_transform_hlds__size_prof__functor_number_map_construct_transform_0
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__size_prof__construct_type_info_9_0_1 = {
{
MR_PREDICATE,
"transform_hlds.size_prof",
"transform_hlds.size_prof",
"make_type_info",
6,
0
},
"transform_hlds.size_prof",
"size_prof.m",
916,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__size_prof__record_known_type_info_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.size_prof",
"transform_hlds.size_prof",
"lambda_size_prof_m_1083",
3,
0
},
"transform_hlds.size_prof",
"size_prof.m",
1083,
"d1;c7;t;c2;?;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__size_prof__process_cons_deconstruct_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.size_prof",
"transform_hlds.size_prof",
"lambda_size_prof_m_751",
2,
0
},
"transform_hlds.size_prof",
"size_prof.m",
751,
"d1;c14;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__size_prof__update_target_map_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.size_prof",
"transform_hlds.size_prof",
"include_in_target_map",
4,
0
},
"transform_hlds.size_prof",
"size_prof.m",
1223,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__size_prof__process_goal_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.size_prof",
"transform_hlds.size_prof",
"binds_arg_in_cell",
2,
0
},
"transform_hlds.size_prof",
"size_prof.m",
297,
"d1;c6;d1;c2;e;?;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__size_prof__process_goal_4_0_2 = {
{
MR_PREDICATE,
"transform_hlds.size_prof",
"transform_hlds.size_prof",
"lambda_size_prof_m_430",
3,
0
},
"transform_hlds.size_prof",
"size_prof.m",
430,
"d1;c6;d8;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__size_prof__process_disj_14_0_1 = {
{
MR_PREDICATE,
"transform_hlds.size_prof",
"transform_hlds.size_prof",
"lambda_size_prof_m_537",
3,
0
},
"transform_hlds.size_prof",
"size_prof.m",
537,
"d1;c23;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__size_prof__process_switch_14_0_1 = {
{
MR_PREDICATE,
"transform_hlds.size_prof",
"transform_hlds.size_prof",
"lambda_size_prof_m_577",
3,
0
},
"transform_hlds.size_prof",
"size_prof.m",
577,
"d1;c25;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__size_prof__process_proc_9_0_1 = {
{
MR_PREDICATE,
"transform_hlds.size_prof",
"transform_hlds.size_prof",
"record_typeinfo_in_type_info_varmap",
4,
0
},
"transform_hlds.size_prof",
"size_prof.m",
260,
"d1;c26;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0_1 = {
{
MR_PREDICATE,
"transform_hlds.size_prof",
"transform_hlds.size_prof",
"lambda_size_prof_m_708",
2,
0
},
"transform_hlds.size_prof",
"size_prof.m",
708,
"d1;c21;d1;c2;"
};

MR_decl_entry(map__search_3_0);
MR_decl_entry(parse_tree__prog_type__type_ctor_is_higher_order_4_0);
MR_decl_entry(parse_tree__prog_type__construct_higher_order_type_5_0);
MR_decl_entry(parse_tree__prog_type__construct_type_3_0);
MR_decl_entry(check_hlds__polymorphism__init_const_type_ctor_info_var_11_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module0)
	MR_init_entry1(transform_hlds__size_prof__make_type_ctor_info_6_0);
	MR_init_label6(transform_hlds__size_prof__make_type_ctor_info_6_0,3,2,7,6,10,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__make_type_ctor_info_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__size_prof__make_type_ctor_info_6_0_i3);
MR_def_label(transform_hlds__size_prof__make_type_ctor_info_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__make_type_ctor_info_6_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__size_prof__make_type_ctor_info_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_higher_order_4_0,
		transform_hlds__size_prof__make_type_ctor_info_6_0_i7);
MR_def_label(transform_hlds__size_prof__make_type_ctor_info_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__make_type_ctor_info_6_0_i6);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__construct_higher_order_type_5_0,
		transform_hlds__size_prof__make_type_ctor_info_6_0_i10);
MR_def_label(transform_hlds__size_prof__make_type_ctor_info_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		transform_hlds__size_prof__make_type_ctor_info_6_0_i10);
MR_def_label(transform_hlds__size_prof__make_type_ctor_info_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r4 = MR_ctfield(0, MR_tempr1, 6);
	MR_r5 = MR_ctfield(0, MR_tempr1, 7);
	MR_r6 = MR_ctfield(0, MR_tempr1, 9);
	MR_r3 = MR_ctfield(0, MR_tempr1, 10);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__init_const_type_ctor_info_var_11_0,
		transform_hlds__size_prof__make_type_ctor_info_6_0_i12);
MR_def_label(transform_hlds__size_prof__make_type_ctor_info_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 11);
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_r3;
	MR_tfield(0, MR_tempr2, 7) = MR_r4;
	MR_tfield(0, MR_tempr2, 8) = MR_ctfield(0, MR_tempr3, 8);
	MR_tfield(0, MR_tempr2, 9) = MR_r5;
	MR_tfield(0, MR_tempr2, 10) = MR_ctfield(0, MR_tempr3, 10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map2_foldl_6_1);
MR_decl_entry(fn__list__condense_1_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(hlds__hlds_goal__make_int_const_construction_alloc_8_0);
MR_decl_entry(fn__list__append_2_0);
MR_decl_entry(check_hlds__polymorphism__init_type_info_var_11_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module1)
	MR_init_entry1(transform_hlds__size_prof__construct_type_info_9_0);
	MR_init_label8(transform_hlds__size_prof__construct_type_info_9_0,2,3,4,6,7,8,9,5)
	MR_init_label4(transform_hlds__size_prof__construct_type_info_9_0,11,10,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__construct_type_info_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__size_prof__make_type_info_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__size_prof, info);
	MR_r5 = MR_tempr1;
	MR_r7 = MR_r6;
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__map2_foldl_6_1,
		transform_hlds__size_prof__construct_type_info_9_0_i2);
MR_def_label(transform_hlds__size_prof__construct_type_info_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(fn__list__condense_1_0,
		transform_hlds__size_prof__construct_type_info_9_0_i3);
MR_def_label(transform_hlds__size_prof__construct_type_info_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__size_prof__make_type_ctor_info_6_0,
		transform_hlds__size_prof__construct_type_info_9_0_i4);
MR_def_label(transform_hlds__size_prof__construct_type_info_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__construct_type_info_9_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 9);
	MR_sv(8) = MR_tempr2;
	MR_r3 = MR_ctfield(0, MR_r3, 4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(transform_hlds__size_prof__construct_type_info_9_0_i5);
	}
MR_def_label(transform_hlds__size_prof__construct_type_info_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__size_prof__construct_type_info_9_0_i7);
MR_def_label(transform_hlds__size_prof__construct_type_info_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_r3 = MR_ctfield(0, MR_tempr1, 6);
	MR_r4 = MR_ctfield(0, MR_tempr1, 7);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_int_const_construction_alloc_8_0,
		transform_hlds__size_prof__construct_type_info_9_0_i8);
MR_def_label(transform_hlds__size_prof__construct_type_info_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_sv(8) = MR_tempr1;
	MR_tempr4 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr4, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr4, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r3;
	MR_tfield(0, MR_tempr1, 7) = MR_r4;
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr4, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr4, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr4, 10);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__list__append_2_0,
		transform_hlds__size_prof__construct_type_info_9_0_i9);
MR_def_label(transform_hlds__size_prof__construct_type_info_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_sv(3) = MR_r1;
	MR_tempr3 = MR_sv(8);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 6);
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 7);
	MR_sv(7) = MR_ctfield(0, MR_tempr3, 9);
	MR_r3 = MR_ctfield(0, MR_tempr3, 4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	}
MR_def_label(transform_hlds__size_prof__construct_type_info_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__size_prof__construct_type_info_9_0_i11);
MR_def_label(transform_hlds__size_prof__construct_type_info_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__construct_type_info_9_0_i10);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__polymorphism__init_type_info_var_11_0,
		transform_hlds__size_prof__construct_type_info_9_0_i14);
MR_def_label(transform_hlds__size_prof__construct_type_info_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__polymorphism__init_type_info_var_11_0,
		transform_hlds__size_prof__construct_type_info_9_0_i14);
MR_def_label(transform_hlds__size_prof__construct_type_info_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr5 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr5, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr5, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr5, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr5, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr5, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr5, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r3;
	MR_tfield(0, MR_tempr1, 7) = MR_r4;
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr5, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_r5;
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr5, 10);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		transform_hlds__size_prof__construct_type_info_9_0_i15);
MR_def_label(transform_hlds__size_prof__construct_type_info_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__set_4_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module2)
	MR_init_entry1(transform_hlds__size_prof__record_type_info_var_4_0);
	MR_init_label4(transform_hlds__size_prof__record_type_info_var_4_0,2,4,3,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__record_type_info_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_ctfield(0, MR_r3, 1);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__size_prof__record_type_info_var_4_0_i2);
MR_def_label(transform_hlds__size_prof__record_type_info_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__size_prof__record_type_info_var_4_0_i4);
MR_def_label(transform_hlds__size_prof__record_type_info_var_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__record_type_info_var_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(transform_hlds__size_prof__record_type_info_var_4_0_i6);
MR_def_label(transform_hlds__size_prof__record_type_info_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(transform_hlds__size_prof__record_type_info_var_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module3)
	MR_init_entry1(fn__transform_hlds__size_prof__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__size_prof__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("size_prof.m", 11);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_has_variable_arity_ctor_3_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
MR_decl_entry(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0);
MR_decl_entry(check_hlds__polymorphism__new_type_info_var_raw_9_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_decl_entry(hlds__goal_util__generate_simple_call_12_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module4)
	MR_init_entry1(transform_hlds__size_prof__make_type_info_6_0);
	MR_init_label8(transform_hlds__size_prof__make_type_info_6_0,3,2,7,6,12,15,11,20)
	MR_init_label8(transform_hlds__size_prof__make_type_info_6_0,22,24,23,26,28,29,30,31)
	MR_init_label2(transform_hlds__size_prof__make_type_info_6_0,18,32)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__make_type_info_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_ctfield(0, MR_r3, 1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__size_prof__make_type_info_6_0_i3);
MR_def_label(transform_hlds__size_prof__make_type_info_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__make_type_info_6_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__size_prof__make_type_info_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_has_variable_arity_ctor_3_0,
		transform_hlds__size_prof__make_type_info_6_0_i7);
MR_def_label(transform_hlds__size_prof__make_type_info_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__make_type_info_6_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(transform_hlds__size_prof__construct_type_info_9_0);
MR_def_label(transform_hlds__size_prof__make_type_info_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		transform_hlds__size_prof__make_type_info_6_0_i12);
MR_def_label(transform_hlds__size_prof__make_type_info_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__make_type_info_6_0_i11);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__make_type_info_6_0_i15);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(transform_hlds__size_prof__make_type_ctor_info_6_0);
MR_def_label(transform_hlds__size_prof__make_type_info_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(transform_hlds__size_prof__construct_type_info_9_0);
MR_def_label(transform_hlds__size_prof__make_type_info_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__make_type_info_6_0_i18);
	}
	MR_r1 = MR_ctfield(0, MR_sv(7), 9);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0,
		transform_hlds__size_prof__make_type_info_6_0_i20);
MR_def_label(transform_hlds__size_prof__make_type_info_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__make_type_info_6_0_i22);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__size_prof__make_type_info_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 4);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__size_prof__make_type_info_6_0_i24);
MR_def_label(transform_hlds__size_prof__make_type_info_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__make_type_info_6_0_i23);
	}
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_sv(5) = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__make_int_const_construction_alloc_8_0,
		transform_hlds__size_prof__make_type_info_6_0_i28);
MR_def_label(transform_hlds__size_prof__make_type_info_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_ctfield(0, MR_sv(7), 9);
	MR_np_call_localret_ent(check_hlds__polymorphism__new_type_info_var_raw_9_0,
		transform_hlds__size_prof__make_type_info_6_0_i26);
MR_def_label(transform_hlds__size_prof__make_type_info_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_sv(5) = MR_tempr1;
	MR_tempr3 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr3, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_r4;
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr3, 10);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_int_const_construction_alloc_8_0,
		transform_hlds__size_prof__make_type_info_6_0_i28);
MR_def_label(transform_hlds__size_prof__make_type_info_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_sv(7) = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r3;
	MR_tfield(0, MR_tempr1, 7) = MR_r4;
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		transform_hlds__size_prof__make_type_info_6_0_i29);
MR_def_label(transform_hlds__size_prof__make_type_info_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r9 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_string_const("type_info_from_typeclass_info", 29);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_ctfield(0, MR_sv(7), 10);
	MR_r11 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		transform_hlds__size_prof__make_type_info_6_0_i30);
MR_def_label(transform_hlds__size_prof__make_type_info_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__size_prof__record_type_info_var_4_0,
		transform_hlds__size_prof__make_type_info_6_0_i31);
MR_def_label(transform_hlds__size_prof__make_type_info_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__size_prof__make_type_info_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__size_prof__this_file_0_0,
		transform_hlds__size_prof__make_type_info_6_0_i32);
MR_def_label(transform_hlds__size_prof__make_type_info_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("size_prof.make_type_info: cannot happen", 39);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_var_3_0);
MR_decl_entry(term__var_to_int_2_0);
MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(string__append_3_2);
MR_decl_entry(varset__name_var_4_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module5)
	MR_init_entry1(transform_hlds__size_prof__get_new_var_5_0);
	MR_init_label6(transform_hlds__size_prof__get_new_var_5_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__get_new_var_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 6);
	}
	MR_np_call_localret_ent(varset__new_var_3_0,
		transform_hlds__size_prof__get_new_var_5_0_i2);
MR_def_label(transform_hlds__size_prof__get_new_var_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(term__var_to_int_2_0,
		transform_hlds__size_prof__get_new_var_5_0_i3);
MR_def_label(transform_hlds__size_prof__get_new_var_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__int_to_string_2_0,
		transform_hlds__size_prof__get_new_var_5_0_i4);
MR_def_label(transform_hlds__size_prof__get_new_var_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__append_3_2,
		transform_hlds__size_prof__get_new_var_5_0_i5);
MR_def_label(transform_hlds__size_prof__get_new_var_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(varset__name_var_4_0,
		transform_hlds__size_prof__get_new_var_5_0_i6);
MR_def_label(transform_hlds__size_prof__get_new_var_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__size_prof__get_new_var_5_0_i7);
MR_def_label(transform_hlds__size_prof__get_new_var_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_type__int_type_0_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module6)
	MR_init_entry1(transform_hlds__size_prof__make_size_goal_8_0);
	MR_init_label5(transform_hlds__size_prof__make_size_goal_8_0,2,3,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__make_size_goal_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		transform_hlds__size_prof__make_size_goal_8_0_i2);
MR_def_label(transform_hlds__size_prof__make_size_goal_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("SizeVar", 7);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__size_prof__get_new_var_5_0,
		transform_hlds__size_prof__make_size_goal_8_0_i3);
MR_def_label(transform_hlds__size_prof__make_size_goal_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__make_size_goal_8_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_string_const("measure_size", 12);
	MR_sv(5) = MR_r2;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_0,
		transform_hlds__size_prof__make_size_goal_8_0_i6);
MR_def_label(transform_hlds__size_prof__make_size_goal_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(1, MR_sv(4), 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_string_const("measure_size_acc", 16);
	MR_sv(5) = MR_r2;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_0,
		transform_hlds__size_prof__make_size_goal_8_0_i6);
MR_def_label(transform_hlds__size_prof__make_size_goal_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r9 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(4);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_ctfield(0, MR_sv(5), 10);
	MR_r11 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		transform_hlds__size_prof__make_size_goal_8_0_i7);
MR_def_label(transform_hlds__size_prof__make_size_goal_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(transform_hlds__term_norm__zero_size_type_2_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(transform_hlds__size_prof_module7)
	MR_init_entry1(transform_hlds__size_prof__process_args_9_0);
	MR_init_label8(transform_hlds__size_prof__process_args_9_0,4,6,5,9,8,11,12,13)
	MR_init_label3(transform_hlds__size_prof__process_args_9_0,16,17,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__process_args_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_args_9_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_tempr1, 7);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__size_prof__process_args_9_0_i4);
MR_def_label(transform_hlds__size_prof__process_args_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_ctfield(0, MR_sv(4), 5);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__size_prof__process_args_9_0_i6);
MR_def_label(transform_hlds__size_prof__process_args_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_args_9_0_i5);
	}
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_r2);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	}
	MR_np_localcall_lab(transform_hlds__size_prof__process_args_9_0,
		transform_hlds__size_prof__process_args_9_0_i16);
MR_def_label(transform_hlds__size_prof__process_args_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(4), 10);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__term_norm__zero_size_type_2_0,
		transform_hlds__size_prof__process_args_9_0_i9);
MR_def_label(transform_hlds__size_prof__process_args_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_args_9_0_i8);
	}
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(transform_hlds__size_prof__process_args_9_0,
		transform_hlds__size_prof__process_args_9_0_i16);
MR_def_label(transform_hlds__size_prof__process_args_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__size_prof__make_type_info_6_0,
		transform_hlds__size_prof__process_args_9_0_i11);
MR_def_label(transform_hlds__size_prof__process_args_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__size_prof__make_size_goal_8_0,
		transform_hlds__size_prof__process_args_9_0_i12);
MR_def_label(transform_hlds__size_prof__process_args_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__size_prof__process_args_9_0_i13);
MR_def_label(transform_hlds__size_prof__process_args_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	}
	MR_np_localcall_lab(transform_hlds__size_prof__process_args_9_0,
		transform_hlds__size_prof__process_args_9_0_i16);
MR_def_label(transform_hlds__size_prof__process_args_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__size_prof__process_args_9_0_i17);
MR_def_label(transform_hlds__size_prof__process_args_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__size_prof__process_args_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module8)
	MR_init_entry1(transform_hlds__size_prof__generate_size_var_7_0);
	MR_init_label6(transform_hlds__size_prof__generate_size_var_7_0,17,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__generate_size_var_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__generate_size_var_7_0_i17);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_proceed();
MR_def_label(transform_hlds__size_prof__generate_size_var_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_r3 = MR_ctfield(0, MR_tempr1, 6);
	MR_r4 = MR_ctfield(0, MR_r4, 7);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_int_const_construction_alloc_8_0,
		transform_hlds__size_prof__generate_size_var_7_0_i4);
MR_def_label(transform_hlds__size_prof__generate_size_var_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r3;
	MR_tfield(0, MR_tempr1, 7) = MR_r4;
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		transform_hlds__size_prof__generate_size_var_7_0_i5);
MR_def_label(transform_hlds__size_prof__generate_size_var_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("FinalSizeVar", 12);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__size_prof__get_new_var_5_0,
		transform_hlds__size_prof__generate_size_var_7_0_i6);
MR_def_label(transform_hlds__size_prof__generate_size_var_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_0,
		transform_hlds__size_prof__generate_size_var_7_0_i7);
MR_def_label(transform_hlds__size_prof__generate_size_var_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r9 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_string_const("term_size_plus", 14);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_ctfield(0, MR_sv(6), 10);
	MR_r11 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		transform_hlds__size_prof__generate_size_var_7_0_i8);
MR_def_label(transform_hlds__size_prof__generate_size_var_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module9)
	MR_init_entry1(transform_hlds__size_prof__record_known_size_4_0);
	MR_init_label1(transform_hlds__size_prof__record_known_size_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__record_known_size_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r6 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_ctfield(0, MR_sv(1), 5);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__size_prof__record_known_size_4_0_i2);
MR_def_label(transform_hlds__size_prof__record_known_size_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module10)
	MR_init_entry1(fn__transform_hlds__size_prof__compute_functor_size_2_0);
	MR_init_label1(fn__transform_hlds__size_prof__compute_functor_size_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__size_prof__compute_functor_size_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r2, 8);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__transform_hlds__size_prof__compute_functor_size_2_0_i3);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(fn__list__length_1_0);
	}
MR_def_label(fn__transform_hlds__size_prof__compute_functor_size_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_is_free_2_0);
MR_decl_entry(check_hlds__inst_match__inst_is_bound_2_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module11)
	MR_init_entry1(transform_hlds__size_prof__binds_arg_in_cell_2_0);
	MR_init_label2(transform_hlds__size_prof__binds_arg_in_cell_2_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__binds_arg_in_cell_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_ctfield(0, MR_r2, 1), 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 10);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(0, MR_ctfield(0, MR_r2, 0), 0);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		transform_hlds__size_prof__binds_arg_in_cell_2_0_i2);
MR_def_label(transform_hlds__size_prof__binds_arg_in_cell_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__binds_arg_in_cell_2_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__inst_match__inst_is_bound_2_0);
MR_def_label(transform_hlds__size_prof__binds_arg_in_cell_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module12)
	MR_init_entry1(transform_hlds__size_prof__find_defined_args_5_0);
	MR_init_label6(transform_hlds__size_prof__find_defined_args_5_0,3,9,11,13,10,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__find_defined_args_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__find_defined_args_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__find_defined_args_5_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__size_prof__find_defined_args_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__find_defined_args_5_0_i8);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r2, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(transform_hlds__size_prof__find_defined_args_5_0,
		transform_hlds__size_prof__find_defined_args_5_0_i9);
MR_def_label(transform_hlds__size_prof__find_defined_args_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_ctfield(0, MR_ctfield(0, MR_tempr2, 1), 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 10);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_ctfield(0, MR_tempr2, 0), 0);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		transform_hlds__size_prof__find_defined_args_5_0_i11);
MR_def_label(transform_hlds__size_prof__find_defined_args_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__find_defined_args_5_0_i10);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_2_0,
		transform_hlds__size_prof__find_defined_args_5_0_i13);
MR_def_label(transform_hlds__size_prof__find_defined_args_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__find_defined_args_5_0_i10);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__size_prof__find_defined_args_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__size_prof__find_defined_args_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("size_prof.m", 11);
	MR_r2 = (MR_Word) MR_string_const("size_prof.find_defined_args: length mismatch", 44);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module13)
	MR_init_entry1(transform_hlds__size_prof__record_known_type_ctor_info_6_0);
	MR_init_label2(transform_hlds__size_prof__record_known_type_ctor_info_6_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__record_known_type_ctor_info_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r4;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__size_prof__record_known_type_ctor_info_6_0_i2);
MR_def_label(transform_hlds__size_prof__record_known_type_ctor_info_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__size_prof__record_known_type_ctor_info_6_0_i3);
MR_def_label(transform_hlds__size_prof__record_known_type_ctor_info_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_2);

MR_BEGIN_MODULE(transform_hlds__size_prof_module14)
	MR_init_entry1(transform_hlds__size_prof__record_known_type_info_5_0);
	MR_init_label5(transform_hlds__size_prof__record_known_type_info_5_0,3,6,8,9,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__record_known_type_info_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r4 = MR_ctfield(0, MR_r4, 2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__size_prof__record_known_type_info_5_0_i3);
MR_def_label(transform_hlds__size_prof__record_known_type_info_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__record_known_type_info_5_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1083__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_sv(4), 3);
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	}
	MR_np_call_localret_ent(list__map_3_2,
		transform_hlds__size_prof__record_known_type_info_5_0_i6);
MR_def_label(transform_hlds__size_prof__record_known_type_info_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__record_known_type_info_5_0_i2);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__size_prof__record_known_type_info_5_0_i8);
MR_def_label(transform_hlds__size_prof__record_known_type_info_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_sv(2), 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		transform_hlds__size_prof__record_known_type_info_5_0_i9);
MR_def_label(transform_hlds__size_prof__record_known_type_info_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__size_prof__record_type_info_var_4_0);
MR_def_label(transform_hlds__size_prof__record_known_type_info_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module15)
	MR_init_entry1(transform_hlds__size_prof__ctor_is_type_info_related_2_0);
	MR_init_label4(transform_hlds__size_prof__ctor_is_type_info_related_2_0,2,3,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__ctor_is_type_info_related_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		transform_hlds__size_prof__ctor_is_type_info_related_2_0_i2);
MR_def_label(transform_hlds__size_prof__ctor_is_type_info_related_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		transform_hlds__size_prof__ctor_is_type_info_related_2_0_i3);
MR_def_label(transform_hlds__size_prof__ctor_is_type_info_related_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__ctor_is_type_info_related_2_0_i1);
	}
	if ((strcmp((char *)MR_sv(2), (char *)(MR_Word) MR_string_const("base_typeclass_info", 19)) == 0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__ctor_is_type_info_related_2_0_i5);
	}
	if ((strcmp((char *)MR_sv(2), (char *)(MR_Word) MR_string_const("type_ctor_info", 14)) == 0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__ctor_is_type_info_related_2_0_i5);
	}
	if ((strcmp((char *)MR_sv(2), (char *)(MR_Word) MR_string_const("type_info", 9)) == 0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__ctor_is_type_info_related_2_0_i5);
	}
	MR_r1 = (strcmp((char *)MR_sv(2), (char *)(MR_Word) MR_string_const("typeclass_info", 14)) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__size_prof__ctor_is_type_info_related_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__size_prof__ctor_is_type_info_related_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__type_util__type_ctor_module_2_0);
MR_decl_entry(fn__check_hlds__type_util__type_ctor_name_2_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module16)
	MR_init_entry1(transform_hlds__size_prof__process_construct_14_0);
	MR_init_label8(transform_hlds__size_prof__process_construct_14_0,2,5,4,7,9,10,11,14)
	MR_init_label8(transform_hlds__size_prof__process_construct_14_0,18,22,25,16,31,34,29,13)
	MR_init_label2(transform_hlds__size_prof__process_construct_14_0,39,43)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__process_construct_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r12;
	MR_sv(13) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_tempr1, 7);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__size_prof__process_construct_14_0_i2);
MR_def_label(transform_hlds__size_prof__process_construct_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		transform_hlds__size_prof__process_construct_14_0_i5);
MR_def_label(transform_hlds__size_prof__process_construct_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_construct_14_0_i4);
	}
	MR_r1 = MR_ctfield(0, MR_sv(13), 10);
	MR_GOTO_LAB(transform_hlds__size_prof__process_construct_14_0_i9);
MR_def_label(transform_hlds__size_prof__process_construct_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__size_prof__this_file_0_0,
		transform_hlds__size_prof__process_construct_14_0_i7);
MR_def_label(transform_hlds__size_prof__process_construct_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("size_prof.process_construct: constructing term of variable type", 63);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__size_prof__process_construct_14_0_i9);
MR_def_label(transform_hlds__size_prof__process_construct_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r2;
	MR_np_call_localret_ent(fn__check_hlds__type_util__type_ctor_module_2_0,
		transform_hlds__size_prof__process_construct_14_0_i10);
MR_def_label(transform_hlds__size_prof__process_construct_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(13), 10);
	MR_np_call_localret_ent(fn__check_hlds__type_util__type_ctor_name_2_0,
		transform_hlds__size_prof__process_construct_14_0_i11);
MR_def_label(transform_hlds__size_prof__process_construct_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_sv(12) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__size_prof__ctor_is_type_info_related_2_0,
		transform_hlds__size_prof__process_construct_14_0_i14);
MR_def_label(transform_hlds__size_prof__process_construct_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_construct_14_0_i13);
	}
	if ((strcmp((char *)MR_sv(12), (char *)(MR_Word) MR_string_const("type_info", 9)) != 0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_construct_14_0_i16);
	}
	if (MR_RTAGS_TESTR(MR_sv(6),3,5)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_construct_14_0_i18);
	}
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_construct_14_0_i18);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	MR_r4 = MR_sv(13);
	}
	MR_np_call_localret_ent(transform_hlds__size_prof__record_known_type_info_5_0,
		transform_hlds__size_prof__process_construct_14_0_i43);
MR_def_label(transform_hlds__size_prof__process_construct_14_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(6),3,3)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_construct_14_0_i22);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	MR_r4 = MR_ctfield(3, MR_tempr1, 3);
	MR_r5 = MR_sv(13);
	}
	MR_np_call_localret_ent(transform_hlds__size_prof__record_known_type_ctor_info_6_0,
		transform_hlds__size_prof__process_construct_14_0_i43);
MR_def_label(transform_hlds__size_prof__process_construct_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__size_prof__this_file_0_0,
		transform_hlds__size_prof__process_construct_14_0_i25);
MR_def_label(transform_hlds__size_prof__process_construct_14_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("process_construct: bad type_info", 32);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__size_prof__process_construct_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(12), (char *)(MR_Word) MR_string_const("type_ctor_info", 14)) != 0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_construct_14_0_i29);
	}
	if (MR_RTAGS_TESTR(MR_sv(6),3,3)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_construct_14_0_i31);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	MR_r4 = MR_ctfield(3, MR_tempr1, 3);
	MR_r5 = MR_sv(13);
	}
	MR_np_call_localret_ent(transform_hlds__size_prof__record_known_type_ctor_info_6_0,
		transform_hlds__size_prof__process_construct_14_0_i43);
MR_def_label(transform_hlds__size_prof__process_construct_14_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__size_prof__this_file_0_0,
		transform_hlds__size_prof__process_construct_14_0_i34);
MR_def_label(transform_hlds__size_prof__process_construct_14_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("process_construct: bad type_ctor_info", 37);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__size_prof__process_construct_14_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_sv(3);
	MR_tfield(0, MR_r1, 3) = MR_tempr1;
	MR_tfield(0, MR_r1, 4) = MR_sv(4);
	MR_r2 = MR_sv(13);
	MR_decr_sp_and_return(14);
	}
MR_def_label(transform_hlds__size_prof__process_construct_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_construct_14_0_i39);
	}
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_construct_14_0_i39);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(10);
	MR_r11 = MR_sv(11);
	MR_r12 = MR_sv(13);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0);
MR_def_label(transform_hlds__size_prof__process_construct_14_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(transform_hlds__size_prof__record_known_size_4_0,
		transform_hlds__size_prof__process_construct_14_0_i43);
MR_def_label(transform_hlds__size_prof__process_construct_14_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 4) = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_get_context_2_0);
MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module17)
	MR_init_entry1(transform_hlds__size_prof__process_cons_deconstruct_7_0);
	MR_init_label8(transform_hlds__size_prof__process_cons_deconstruct_7_0,2,3,4,7,6,8,9,10)
	MR_init_label3(transform_hlds__size_prof__process_cons_deconstruct_7_0,11,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__process_cons_deconstruct_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__size_prof__find_defined_args_5_0,
		transform_hlds__size_prof__process_cons_deconstruct_7_0_i2);
MR_def_label(transform_hlds__size_prof__process_cons_deconstruct_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		transform_hlds__size_prof__process_cons_deconstruct_7_0_i3);
MR_def_label(transform_hlds__size_prof__process_cons_deconstruct_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__size_prof__process_args_9_0,
		transform_hlds__size_prof__process_cons_deconstruct_7_0_i4);
MR_def_label(transform_hlds__size_prof__process_cons_deconstruct_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_cons_deconstruct_7_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__size_prof__IntroducedFrom__pred__process_cons_deconstruct__751__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_r3;
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r4;
	MR_r2 = (MR_Word) MR_string_const("size_prof.m", 11);
	MR_r3 = (MR_Word) MR_string_const("process_cons_deconstruct: nonempty ArgGoals", 43);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		transform_hlds__size_prof__process_cons_deconstruct_7_0_i7);
MR_def_label(transform_hlds__size_prof__process_cons_deconstruct_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__size_prof__process_cons_deconstruct_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__size_prof__generate_size_var_7_0,
		transform_hlds__size_prof__process_cons_deconstruct_7_0_i8);
MR_def_label(transform_hlds__size_prof__process_cons_deconstruct_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_0,
		transform_hlds__size_prof__process_cons_deconstruct_7_0_i9);
MR_def_label(transform_hlds__size_prof__process_cons_deconstruct_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("increment_size", 14);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_ctfield(0, MR_sv(7), 10);
	MR_r11 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		transform_hlds__size_prof__process_cons_deconstruct_7_0_i10);
MR_def_label(transform_hlds__size_prof__process_cons_deconstruct_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__size_prof__process_cons_deconstruct_7_0_i11);
MR_def_label(transform_hlds__size_prof__process_cons_deconstruct_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__size_prof__process_cons_deconstruct_7_0_i12);
MR_def_label(transform_hlds__size_prof__process_cons_deconstruct_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__size_prof__process_cons_deconstruct_7_0_i13);
MR_def_label(transform_hlds__size_prof__process_cons_deconstruct_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module18)
	MR_init_entry1(transform_hlds__size_prof__process_deconstruct_8_0);
	MR_init_label8(transform_hlds__size_prof__process_deconstruct_8_0,2,5,4,8,9,10,12,13)
	MR_init_label7(transform_hlds__size_prof__process_deconstruct_8_0,16,17,18,15,11,20,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__process_deconstruct_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(8) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_tempr1, 7);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__size_prof__process_deconstruct_8_0_i2);
MR_def_label(transform_hlds__size_prof__process_deconstruct_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		transform_hlds__size_prof__process_deconstruct_8_0_i5);
MR_def_label(transform_hlds__size_prof__process_deconstruct_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_deconstruct_8_0_i4);
	}
	MR_r1 = MR_ctfield(0, MR_sv(8), 10);
	MR_GOTO_LAB(transform_hlds__size_prof__process_deconstruct_8_0_i8);
MR_def_label(transform_hlds__size_prof__process_deconstruct_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("size_prof.m", 11);
	MR_r2 = (MR_Word) MR_string_const("process_deconstruct: deconstructing term of variable type", 57);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__size_prof__process_deconstruct_8_0_i8);
MR_def_label(transform_hlds__size_prof__process_deconstruct_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(fn__check_hlds__type_util__type_ctor_module_2_0,
		transform_hlds__size_prof__process_deconstruct_8_0_i9);
MR_def_label(transform_hlds__size_prof__process_deconstruct_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(8), 10);
	MR_np_call_localret_ent(fn__check_hlds__type_util__type_ctor_name_2_0,
		transform_hlds__size_prof__process_deconstruct_8_0_i10);
MR_def_label(transform_hlds__size_prof__process_deconstruct_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		transform_hlds__size_prof__process_deconstruct_8_0_i12);
MR_def_label(transform_hlds__size_prof__process_deconstruct_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		transform_hlds__size_prof__process_deconstruct_8_0_i13);
MR_def_label(transform_hlds__size_prof__process_deconstruct_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_deconstruct_8_0_i11);
	}
	if ((strcmp((char *)MR_sv(7), (char *)(MR_Word) MR_string_const("base_typeclass_info", 19)) != 0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_deconstruct_8_0_i16);
	}
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__size_prof__process_deconstruct_8_0_i15);
MR_def_label(transform_hlds__size_prof__process_deconstruct_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(7), (char *)(MR_Word) MR_string_const("type_ctor_info", 14)) != 0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_deconstruct_8_0_i17);
	}
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__size_prof__process_deconstruct_8_0_i15);
MR_def_label(transform_hlds__size_prof__process_deconstruct_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(7), (char *)(MR_Word) MR_string_const("type_info", 9)) != 0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_deconstruct_8_0_i18);
	}
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__size_prof__process_deconstruct_8_0_i15);
MR_def_label(transform_hlds__size_prof__process_deconstruct_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(7), (char *)(MR_Word) MR_string_const("typeclass_info", 14)) != 0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_deconstruct_8_0_i11);
	}
	MR_r2 = MR_sv(8);
MR_def_label(transform_hlds__size_prof__process_deconstruct_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(5), 0);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__size_prof__process_deconstruct_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_deconstruct_8_0_i20);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_deconstruct_8_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(transform_hlds__size_prof__process_cons_deconstruct_7_0);
MR_def_label(transform_hlds__size_prof__process_deconstruct_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__size_prof__record_known_size_4_0,
		transform_hlds__size_prof__process_deconstruct_8_0_i24);
MR_def_label(transform_hlds__size_prof__process_deconstruct_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(5), 0);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module19)
	MR_init_entry1(transform_hlds__size_prof__construct_rev_map_4_0);
	MR_init_label5(transform_hlds__size_prof__construct_rev_map_4_0,19,4,7,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__construct_rev_map_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__size_prof__construct_rev_map_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__construct_rev_map_4_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__size_prof__construct_rev_map_4_0_i4);
MR_def_label(transform_hlds__size_prof__construct_rev_map_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__construct_rev_map_4_0_i5);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__size_prof__construct_rev_map_4_0_i7);
MR_def_label(transform_hlds__size_prof__construct_rev_map_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__size_prof__construct_rev_map_4_0_i19);
MR_def_label(transform_hlds__size_prof__construct_rev_map_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__size_prof__construct_rev_map_4_0_i19);
MR_def_label(transform_hlds__size_prof__construct_rev_map_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_sorted_assoc_list_2_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module20)
	MR_init_entry1(transform_hlds__size_prof__update_rev_maps_2_0);
	MR_init_label8(transform_hlds__size_prof__update_rev_maps_2_0,2,3,4,5,6,7,8,9)
	MR_init_label1(transform_hlds__size_prof__update_rev_maps_2_0,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__update_rev_maps_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_ctfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(map__to_sorted_assoc_list_2_0,
		transform_hlds__size_prof__update_rev_maps_2_0_i2);
MR_def_label(transform_hlds__size_prof__update_rev_maps_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_ctfield(0, MR_sv(4), 0);
	MR_np_call_localret_ent(map__to_sorted_assoc_list_2_0,
		transform_hlds__size_prof__update_rev_maps_2_0_i3);
MR_def_label(transform_hlds__size_prof__update_rev_maps_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__size_prof__update_rev_maps_2_0_i4);
MR_def_label(transform_hlds__size_prof__update_rev_maps_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_0,
		transform_hlds__size_prof__update_rev_maps_2_0_i5);
MR_def_label(transform_hlds__size_prof__update_rev_maps_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_0,
		transform_hlds__size_prof__update_rev_maps_2_0_i6);
MR_def_label(transform_hlds__size_prof__update_rev_maps_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__update_rev_maps_2_0_i7);
MR_def_label(transform_hlds__size_prof__update_rev_maps_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__size_prof__construct_rev_map_4_0,
		transform_hlds__size_prof__update_rev_maps_2_0_i8);
MR_def_label(transform_hlds__size_prof__update_rev_maps_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__update_rev_maps_2_0_i9);
MR_def_label(transform_hlds__size_prof__update_rev_maps_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__size_prof__construct_rev_map_4_0,
		transform_hlds__size_prof__update_rev_maps_2_0_i10);
MR_def_label(transform_hlds__size_prof__update_rev_maps_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(transform_hlds__size_prof_module21)
	MR_init_entry1(transform_hlds__size_prof__update_target_map_2_0);
	MR_init_label3(transform_hlds__size_prof__update_target_map_2_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__update_target_map_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_ctfield(0, MR_sv(2), 4);
	MR_np_call_localret_ent(map__to_sorted_assoc_list_2_0,
		transform_hlds__size_prof__update_target_map_2_0_i2);
MR_def_label(transform_hlds__size_prof__update_target_map_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__size_prof__include_in_target_map_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__update_target_map_2_0_i3);
MR_def_label(transform_hlds__size_prof__update_target_map_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__size_prof__update_target_map_2_0_i4);
MR_def_label(transform_hlds__size_prof__update_target_map_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
MR_decl_entry(list__filter_3_0);
MR_decl_entry(map__union_4_1);
MR_decl_entry(fn__map__common_subset_2_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module22)
	MR_init_entry1(transform_hlds__size_prof__process_goal_4_0);
	MR_init_label8(transform_hlds__size_prof__process_goal_4_0,110,5,11,14,8,9,111,18)
	MR_init_label8(transform_hlds__size_prof__process_goal_4_0,112,21,22,23,24,113,28,27)
	MR_init_label8(transform_hlds__size_prof__process_goal_4_0,29,30,31,114,35,36,37,38)
	MR_init_label8(transform_hlds__size_prof__process_goal_4_0,34,39,40,41,42,43,115,47)
	MR_init_label8(transform_hlds__size_prof__process_goal_4_0,46,49,50,51,45,52,53,116)
	MR_init_label8(transform_hlds__size_prof__process_goal_4_0,55,117,57,118,59,60,61,62)
	MR_init_label8(transform_hlds__size_prof__process_goal_4_0,63,64,65,66,67,68,119,70)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__process_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(transform_hlds__size_prof__process_goal_4_0_i110) MR_AND
		MR_LABEL_AP(transform_hlds__size_prof__process_goal_4_0_i111) MR_AND
		MR_LABEL_AP(transform_hlds__size_prof__process_goal_4_0_i112) MR_AND
		MR_LABEL_AP(transform_hlds__size_prof__process_goal_4_0_i23));
MR_def_label(transform_hlds__size_prof__process_goal_4_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 3);
	MR_r13 = MR_tempr1;
	MR_r11 = MR_ctfield(0, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_goal_4_0_i5);
	}
	MR_sv(3) = MR_r11;
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r12 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(2) = MR_tempr2;
	MR_r3 = MR_ctfield(0, MR_r3, 2);
	MR_r4 = MR_ctfield(0, MR_sv(2), 4);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	MR_r6 = MR_ctfield(0, MR_tempr1, 1);
	MR_r7 = MR_ctfield(0, MR_tempr1, 2);
	MR_r8 = MR_ctfield(0, MR_tempr1, 3);
	MR_r9 = MR_ctfield(0, MR_tempr1, 4);
	MR_r10 = MR_ctfield(0, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(transform_hlds__size_prof__process_construct_14_0,
		transform_hlds__size_prof__process_goal_4_0_i14);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r13,1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_goal_4_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__size_prof__binds_arg_in_cell_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r11;
	MR_sv(6) = MR_tempr2;
	MR_tempr3 = MR_r13;
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(7) = MR_ctfield(1, MR_tempr3, 2);
	MR_sv(8) = MR_ctfield(1, MR_tempr3, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__size_prof__process_goal_4_0_i11);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_goal_4_0_i8);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__size_prof__process_deconstruct_8_0,
		transform_hlds__size_prof__process_goal_4_0_i14);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__size_prof__process_goal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r11 = MR_sv(3);
	MR_r2 = MR_sv(6);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r3;
	MR_tfield(0, MR_r1, 1) = MR_r11;
	MR_decr_sp_and_return(15);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_sv(6) = MR_r2;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_goal_4_0_i18);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_goal_4_0_i22);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_sv(6) = MR_r2;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_goal_4_0_i21);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_goal_4_0_i22);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__size_prof__process_goal_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(transform_hlds__size_prof__process_goal_4_0_i24) MR_AND
		MR_LABEL_AP(transform_hlds__size_prof__process_goal_4_0_i113) MR_AND
		MR_LABEL_AP(transform_hlds__size_prof__process_goal_4_0_i114) MR_AND
		MR_LABEL_AP(transform_hlds__size_prof__process_goal_4_0_i115) MR_AND
		MR_LABEL_AP(transform_hlds__size_prof__process_goal_4_0_i116) MR_AND
		MR_LABEL_AP(transform_hlds__size_prof__process_goal_4_0_i117) MR_AND
		MR_LABEL_AP(transform_hlds__size_prof__process_goal_4_0_i118) MR_AND
		MR_LABEL_AP(transform_hlds__size_prof__process_goal_4_0_i119));
MR_def_label(transform_hlds__size_prof__process_goal_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(transform_hlds__size_prof__process_goal_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r7 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_goal_4_0_i27);
	}
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(transform_hlds__size_prof__process_conj_4_0,
		transform_hlds__size_prof__process_goal_4_0_i28);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__size_prof__process_goal_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_sv(1) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 5);
	MR_r1 = MR_ctfield(3, MR_r3, 2);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__size_prof__process_par_conj_8_0,
		transform_hlds__size_prof__process_goal_4_0_i29);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_goal_4_0_i30);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_goal_4_0_i31);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr3, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr3, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr3, 10);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr2, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__size_prof__process_goal_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_r4 = MR_ctfield(3, MR_r3, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_goal_4_0_i34);
	}
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_sv(6) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_goal_4_0_i35);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_goal_4_0_i36);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_goal_4_0_i37);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_goal_4_0_i38);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__size_prof__update_rev_maps_2_0,
		transform_hlds__size_prof__process_goal_4_0_i42);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_r2;
	MR_r3 = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_tempr2, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 4);
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	MR_r6 = MR_ctfield(0, MR_tempr1, 3);
	MR_r7 = MR_ctfield(0, MR_tempr1, 0);
	MR_r8 = MR_ctfield(0, MR_tempr1, 2);
	MR_r9 = MR_ctfield(0, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(transform_hlds__size_prof__process_disj_14_0,
		transform_hlds__size_prof__process_goal_4_0_i39);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r5;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_goal_4_0_i40);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_goal_4_0_i41);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr3 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr3, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr3, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr3, 10);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__size_prof__update_rev_maps_2_0,
		transform_hlds__size_prof__process_goal_4_0_i42);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__size_prof__update_target_map_2_0,
		transform_hlds__size_prof__process_goal_4_0_i43);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__size_prof__process_goal_4_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_ctfield(3, MR_tempr1, 3);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_goal_4_0_i46);
	}
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__size_prof__this_file_0_0,
		transform_hlds__size_prof__process_goal_4_0_i47);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("size_prof.process_goal: empty switch", 36);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__size_prof__process_goal_4_0_i45);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr3 = MR_r4;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr1 = MR_r2;
	MR_r3 = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_tempr3, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 4);
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	MR_r6 = MR_ctfield(0, MR_tempr1, 3);
	MR_r7 = MR_ctfield(0, MR_tempr1, 0);
	MR_r8 = MR_ctfield(0, MR_tempr1, 2);
	MR_r9 = MR_ctfield(0, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(transform_hlds__size_prof__process_switch_14_0,
		transform_hlds__size_prof__process_goal_4_0_i49);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_sv(7) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r5;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_goal_4_0_i50);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_goal_4_0_i51);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(transform_hlds__size_prof__process_goal_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__size_prof__update_rev_maps_2_0,
		transform_hlds__size_prof__process_goal_4_0_i52);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__size_prof__update_target_map_2_0,
		transform_hlds__size_prof__process_goal_4_0_i53);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__size_prof__process_goal_4_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_localcall_lab(transform_hlds__size_prof__process_goal_4_0,
		transform_hlds__size_prof__process_goal_4_0_i55);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr3, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr3, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr3, 10);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__size_prof__process_goal_4_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__size_prof__process_goal_4_0,
		transform_hlds__size_prof__process_goal_4_0_i57);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__size_prof__process_goal_4_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_tempr2 = MR_r2;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(13) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(14);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_goal_4_0_i59);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__size_prof__process_goal_4_0,
		transform_hlds__size_prof__process_goal_4_0_i60);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__size_prof__process_goal_4_0,
		transform_hlds__size_prof__process_goal_4_0_i61);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_sv(7);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r4 = MR_ctfield(0, MR_sv(8), 4);
	}
	MR_np_call_localret_ent(map__union_4_1,
		transform_hlds__size_prof__process_goal_4_0_i62);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(12);
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_sv(5);
	}
	MR_np_localcall_lab(transform_hlds__size_prof__process_goal_4_0,
		transform_hlds__size_prof__process_goal_4_0_i63);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r3 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(8) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(14);
	MR_r4 = MR_ctfield(0, MR_sv(8), 1);
	}
	MR_np_call_localret_ent(fn__map__common_subset_2_0,
		transform_hlds__size_prof__process_goal_4_0_i64);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__map__common_subset_2_0,
		transform_hlds__size_prof__process_goal_4_0_i65);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = MR_sv(14);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_goal_4_0_i66);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__size_prof__update_rev_maps_2_0,
		transform_hlds__size_prof__process_goal_4_0_i67);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__size_prof__update_target_map_2_0,
		transform_hlds__size_prof__process_goal_4_0_i68);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__size_prof__process_goal_4_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__size_prof__this_file_0_0,
		transform_hlds__size_prof__process_goal_4_0_i70);
MR_def_label(transform_hlds__size_prof__process_goal_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("size_prof.process_goal: shorthand", 33);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module23)
	MR_init_entry1(transform_hlds__size_prof__process_conj_4_0);
	MR_init_label5(transform_hlds__size_prof__process_conj_4_0,4,5,9,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__process_conj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_conj_4_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__size_prof__process_goal_4_0,
		transform_hlds__size_prof__process_conj_4_0_i4);
MR_def_label(transform_hlds__size_prof__process_conj_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__size_prof__process_conj_4_0,
		transform_hlds__size_prof__process_conj_4_0_i5);
MR_def_label(transform_hlds__size_prof__process_conj_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_conj_4_0_i6);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_conj_4_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__list__append_2_0,
		transform_hlds__size_prof__process_conj_4_0_i9);
MR_def_label(transform_hlds__size_prof__process_conj_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(transform_hlds__size_prof__process_conj_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(transform_hlds__size_prof__process_conj_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module24)
	MR_init_entry1(transform_hlds__size_prof__process_par_conj_8_0);
	MR_init_label3(transform_hlds__size_prof__process_par_conj_8_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__process_par_conj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_par_conj_8_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_r5;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr4, 3);
	MR_tempr5 = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr5;
	MR_tempr6 = MR_r6;
	MR_tfield(0, MR_tempr1, 5) = MR_tempr6;
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr4, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr4, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr4, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr4, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr4, 10);
	MR_sv(1) = MR_tempr5;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr6;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__size_prof__process_goal_4_0,
		transform_hlds__size_prof__process_par_conj_8_0_i4);
MR_def_label(transform_hlds__size_prof__process_par_conj_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_np_localcall_lab(transform_hlds__size_prof__process_par_conj_8_0,
		transform_hlds__size_prof__process_par_conj_8_0_i5);
MR_def_label(transform_hlds__size_prof__process_par_conj_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__size_prof__process_par_conj_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module25)
	MR_init_entry1(transform_hlds__size_prof__process_disj_14_0);
	MR_init_label6(transform_hlds__size_prof__process_disj_14_0,2,5,6,7,8,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__process_disj_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_r7;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tempr4 = MR_r8;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr4;
	MR_tempr5 = MR_r6;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr5;
	MR_tempr6 = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr6, 4);
	MR_tempr7 = MR_r9;
	MR_tfield(0, MR_tempr1, 5) = MR_tempr7;
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr6, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr6, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr6, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr6, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr6, 10);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tempr5;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tempr4;
	MR_sv(7) = MR_tempr7;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__size_prof__process_goal_4_0,
		transform_hlds__size_prof__process_disj_14_0_i2);
MR_def_label(transform_hlds__size_prof__process_disj_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_disj_14_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(10) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(11) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(12) = MR_tempr2;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,1);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__union_4_1,
		transform_hlds__size_prof__process_disj_14_0_i5);
MR_def_label(transform_hlds__size_prof__process_disj_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(12);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	}
	MR_np_localcall_lab(transform_hlds__size_prof__process_disj_14_0,
		transform_hlds__size_prof__process_disj_14_0_i6);
MR_def_label(transform_hlds__size_prof__process_disj_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__map__common_subset_2_0,
		transform_hlds__size_prof__process_disj_14_0_i7);
MR_def_label(transform_hlds__size_prof__process_disj_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(fn__map__common_subset_2_0,
		transform_hlds__size_prof__process_disj_14_0_i8);
MR_def_label(transform_hlds__size_prof__process_disj_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(14);
	}
MR_def_label(transform_hlds__size_prof__process_disj_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r3 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_ctfield(0, MR_tempr1, 5);
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module26)
	MR_init_entry1(transform_hlds__size_prof__process_switch_14_0);
	MR_init_label6(transform_hlds__size_prof__process_switch_14_0,2,5,6,7,8,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__process_switch_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_r7;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tempr4 = MR_r8;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr4;
	MR_tempr5 = MR_r6;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr5;
	MR_tempr6 = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr6, 4);
	MR_tempr7 = MR_r9;
	MR_tfield(0, MR_tempr1, 5) = MR_tempr7;
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr6, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr6, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr6, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr6, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr6, 10);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tempr5;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tempr4;
	MR_sv(7) = MR_tempr7;
	MR_sv(8) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__size_prof__process_goal_4_0,
		transform_hlds__size_prof__process_switch_14_0_i2);
MR_def_label(transform_hlds__size_prof__process_switch_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_switch_14_0_i4);
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_sv(8) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(9) = MR_ctfield(0, MR_tempr3, 5);
	MR_sv(10) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(11) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(12) = MR_tempr3;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,2);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__union_4_1,
		transform_hlds__size_prof__process_switch_14_0_i5);
MR_def_label(transform_hlds__size_prof__process_switch_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(12);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	}
	MR_np_localcall_lab(transform_hlds__size_prof__process_switch_14_0,
		transform_hlds__size_prof__process_switch_14_0_i6);
MR_def_label(transform_hlds__size_prof__process_switch_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__map__common_subset_2_0,
		transform_hlds__size_prof__process_switch_14_0_i7);
MR_def_label(transform_hlds__size_prof__process_switch_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(fn__map__common_subset_2_0,
		transform_hlds__size_prof__process_switch_14_0_i8);
MR_def_label(transform_hlds__size_prof__process_switch_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(14);
	}
MR_def_label(transform_hlds__size_prof__process_switch_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r3 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_ctfield(0, MR_tempr1, 5);
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__simplify__list_to_simplifications_1_0);
MR_decl_entry(check_hlds__simplify__simplify_proc_return_msgs_10_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_tvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inst_varset_2_0);
MR_decl_entry(hlds__quantification__implicitly_quantify_clause_body_10_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_8_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module27)
	MR_init_entry1(transform_hlds__size_prof__process_proc_9_0);
	MR_init_label8(transform_hlds__size_prof__process_proc_9_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__size_prof__process_proc_9_0,10,11,12,13,14,15,16,17)
	MR_init_label8(transform_hlds__size_prof__process_proc_9_0,18,19,20,21,22,23,24,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__process_proc_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__check_hlds__simplify__list_to_simplifications_1_0,
		transform_hlds__size_prof__process_proc_9_0_i2);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_proc_return_msgs_10_0,
		transform_hlds__size_prof__process_proc_9_0_i3);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(12) = MR_tempr1;
	MR_sv(13) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__size_prof__process_proc_9_0_i4);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__size_prof__process_proc_9_0_i5);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__size_prof__process_proc_9_0_i6);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__size_prof__process_proc_9_0_i7);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		transform_hlds__size_prof__process_proc_9_0_i8);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_proc_9_0_i9);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_proc_9_0_i10);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_proc_9_0_i11);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_proc_9_0_i12);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_proc_9_0_i13);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__size_prof__process_proc_9_0_i14);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(1);
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 9) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 10) = MR_sv(13);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_tvars_2_0,
		transform_hlds__size_prof__process_proc_9_0_i15);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__size_prof, info);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__size_prof__process_proc_9_0_i16);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__size_prof__process_goal_4_0,
		transform_hlds__size_prof__process_proc_9_0_i17);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__size_prof__process_proc_9_0_i18);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		transform_hlds__size_prof__process_proc_9_0_i19);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_ctfield(0, MR_tempr1, 6);
	MR_r4 = MR_ctfield(0, MR_tempr1, 7);
	MR_r5 = MR_ctfield(0, MR_tempr1, 9);
	}
	MR_np_call_localret_ent(hlds__quantification__implicitly_quantify_clause_body_10_0,
		transform_hlds__size_prof__process_proc_9_0_i20);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(13);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_8_0,
		transform_hlds__size_prof__process_proc_9_0_i21);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__size_prof__process_proc_9_0_i22);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__size_prof__process_proc_9_0_i23);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__size_prof__process_proc_9_0_i24);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0,
		transform_hlds__size_prof__process_proc_9_0_i25);
MR_def_label(transform_hlds__size_prof__process_proc_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(hlds__hlds_out__write_pred_proc_id_pair_5_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module28)
	MR_init_entry1(transform_hlds__size_prof__process_proc_msg_9_0);
	MR_init_label7(transform_hlds__size_prof__process_proc_msg_9_0,2,4,6,7,8,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__size_prof__process_proc_msg_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Integer) 35;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__size_prof__process_proc_msg_9_0_i2);
MR_def_label(transform_hlds__size_prof__process_proc_msg_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__process_proc_msg_9_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__size_prof__process_proc_9_0);
MR_def_label(transform_hlds__size_prof__process_proc_msg_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Adding typeinfos in ", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__size_prof__process_proc_msg_9_0_i6);
MR_def_label(transform_hlds__size_prof__process_proc_msg_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__write_pred_proc_id_pair_5_0,
		transform_hlds__size_prof__process_proc_msg_9_0_i7);
MR_def_label(transform_hlds__size_prof__process_proc_msg_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__size_prof__process_proc_msg_9_0_i8);
MR_def_label(transform_hlds__size_prof__process_proc_msg_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__size_prof__process_proc_9_0,
		transform_hlds__size_prof__process_proc_msg_9_0_i9);
MR_def_label(transform_hlds__size_prof__process_proc_msg_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("done.\n", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__size_prof__process_proc_msg_9_0_i10);
MR_def_label(transform_hlds__size_prof__process_proc_msg_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module29)
	MR_init_entry1(transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_0);
	MR_init_label6(transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_0,2,5,7,6,9,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0,
		transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_0_i2);
MR_def_label(transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_0_i4);
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_tempr2 = MR_sv(3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_0_i5);
MR_def_label(transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_0_i7);
MR_def_label(transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_0_i6);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_0_i9);
MR_def_label(transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(svmap__det_insert_4_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module30)
	MR_init_entry1(transform_hlds__size_prof__include_in_target_map_4_0);
	MR_init_label3(transform_hlds__size_prof__include_in_target_map_4_0,3,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__include_in_target_map_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__size_prof__include_in_target_map_4_0_i3);
MR_def_label(transform_hlds__size_prof__include_in_target_map_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__include_in_target_map_4_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		transform_hlds__size_prof__include_in_target_map_4_0_i5);
MR_def_label(transform_hlds__size_prof__include_in_target_map_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__size_prof__include_in_target_map_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
MR_def_label(transform_hlds__size_prof__include_in_target_map_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module31)
	MR_init_entry1(__Unify___transform_hlds__size_prof__construct_transform_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__size_prof__construct_transform_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module32)
	MR_init_entry1(__Compare___transform_hlds__size_prof__construct_transform_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__size_prof__construct_transform_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0);
MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module33)
	MR_init_entry1(__Unify___transform_hlds__size_prof__info_0_0);
	MR_init_label8(__Unify___transform_hlds__size_prof__info_0_0,2,4,6,8,10,12,14,16)
	MR_init_label2(__Unify___transform_hlds__size_prof__info_0_0,18,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__size_prof__info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(22);
	MR_sv(22) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(4) = MR_ctfield(0, MR_r1, 4);
	MR_sv(5) = MR_ctfield(0, MR_r1, 5);
	MR_sv(6) = MR_ctfield(0, MR_r1, 6);
	MR_sv(7) = MR_ctfield(0, MR_r1, 7);
	MR_sv(8) = MR_ctfield(0, MR_r1, 8);
	MR_sv(9) = MR_ctfield(0, MR_r1, 9);
	MR_sv(10) = MR_ctfield(0, MR_r1, 10);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(11) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(12) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(13) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(14) = MR_ctfield(0, MR_tempr3, 4);
	MR_sv(15) = MR_ctfield(0, MR_tempr3, 5);
	MR_sv(16) = MR_ctfield(0, MR_tempr3, 6);
	MR_sv(17) = MR_ctfield(0, MR_tempr3, 7);
	MR_sv(18) = MR_ctfield(0, MR_tempr3, 8);
	MR_sv(19) = MR_ctfield(0, MR_tempr3, 9);
	MR_sv(20) = MR_ctfield(0, MR_tempr3, 10);
	MR_sv(21) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_sv(21);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__size_prof__info_0_0_i2);
MR_def_label(__Unify___transform_hlds__size_prof__info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__size_prof__info_0_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(21);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__size_prof__info_0_0_i4);
MR_def_label(__Unify___transform_hlds__size_prof__info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__size_prof__info_0_0_i1);
	}
	MR_r1 = MR_sv(21);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__size_prof__info_0_0_i6);
MR_def_label(__Unify___transform_hlds__size_prof__info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__size_prof__info_0_0_i1);
	}
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__size_prof__info_0_0_i8);
MR_def_label(__Unify___transform_hlds__size_prof__info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__size_prof__info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__size_prof__info_0_0_i10);
MR_def_label(__Unify___transform_hlds__size_prof__info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__size_prof__info_0_0_i1);
	}
	MR_r1 = MR_sv(21);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__size_prof__info_0_0_i12);
MR_def_label(__Unify___transform_hlds__size_prof__info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__size_prof__info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___transform_hlds__size_prof__info_0_0_i14);
MR_def_label(__Unify___transform_hlds__size_prof__info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__size_prof__info_0_0_i1);
	}
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__size_prof__info_0_0_i16);
MR_def_label(__Unify___transform_hlds__size_prof__info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__size_prof__info_0_0_i1);
	}
	if ((MR_sv(8) != MR_sv(18))) {
		MR_GOTO_LAB(__Unify___transform_hlds__size_prof__info_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Unify___transform_hlds__size_prof__info_0_0_i18);
MR_def_label(__Unify___transform_hlds__size_prof__info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__size_prof__info_0_0_i1);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(20);
	MR_succip_word = MR_sv(22);
	MR_decr_sp(22);
	MR_np_tailcall_ent(__Unify___hlds__hlds_module__module_info_0_0);
MR_def_label(__Unify___transform_hlds__size_prof__info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(22);
	MR_decr_sp(22);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0);
MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module34)
	MR_init_entry1(__Compare___transform_hlds__size_prof__info_0_0);
	MR_init_label8(__Compare___transform_hlds__size_prof__info_0_0,3,7,11,15,19,23,27,31)
	MR_init_label3(__Compare___transform_hlds__size_prof__info_0_0,35,39,52)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__size_prof__info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(20) = MR_ctfield(0, MR_tempr3, 10);
	MR_sv(19) = MR_ctfield(0, MR_tempr3, 9);
	MR_sv(18) = MR_ctfield(0, MR_tempr3, 8);
	MR_sv(17) = MR_ctfield(0, MR_tempr3, 7);
	MR_sv(16) = MR_ctfield(0, MR_tempr3, 6);
	MR_sv(15) = MR_ctfield(0, MR_tempr3, 5);
	MR_sv(14) = MR_ctfield(0, MR_tempr3, 4);
	MR_sv(13) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(12) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(11) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(10) = MR_ctfield(0, MR_r1, 10);
	MR_sv(9) = MR_ctfield(0, MR_r1, 9);
	MR_sv(8) = MR_ctfield(0, MR_r1, 8);
	MR_sv(7) = MR_ctfield(0, MR_r1, 7);
	MR_sv(6) = MR_ctfield(0, MR_r1, 6);
	MR_sv(5) = MR_ctfield(0, MR_r1, 5);
	MR_sv(4) = MR_ctfield(0, MR_r1, 4);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__size_prof__info_0_0_i3);
MR_def_label(__Compare___transform_hlds__size_prof__info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__size_prof__info_0_0_i52);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__size_prof__info_0_0_i7);
MR_def_label(__Compare___transform_hlds__size_prof__info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__size_prof__info_0_0_i52);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__size_prof__info_0_0_i11);
MR_def_label(__Compare___transform_hlds__size_prof__info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__size_prof__info_0_0_i52);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__size_prof__info_0_0_i15);
MR_def_label(__Compare___transform_hlds__size_prof__info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__size_prof__info_0_0_i52);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__size_prof__info_0_0_i19);
MR_def_label(__Compare___transform_hlds__size_prof__info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__size_prof__info_0_0_i52);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__size_prof__info_0_0_i23);
MR_def_label(__Compare___transform_hlds__size_prof__info_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__size_prof__info_0_0_i52);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___transform_hlds__size_prof__info_0_0_i27);
MR_def_label(__Compare___transform_hlds__size_prof__info_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__size_prof__info_0_0_i52);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__size_prof__info_0_0_i31);
MR_def_label(__Compare___transform_hlds__size_prof__info_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__size_prof__info_0_0_i52);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__size_prof__info_0_0_i35);
MR_def_label(__Compare___transform_hlds__size_prof__info_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__size_prof__info_0_0_i52);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Compare___transform_hlds__size_prof__info_0_0_i39);
MR_def_label(__Compare___transform_hlds__size_prof__info_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__size_prof__info_0_0_i52);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(20);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(__Compare___hlds__hlds_module__module_info_0_0);
MR_def_label(__Compare___transform_hlds__size_prof__info_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module35)
	MR_init_entry1(__Unify___transform_hlds__size_prof__known_size_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__size_prof__known_size_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module36)
	MR_init_entry1(__Compare___transform_hlds__size_prof__known_size_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__size_prof__known_size_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module37)
	MR_init_entry1(__Unify___transform_hlds__size_prof__rev_type_ctor_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__size_prof__rev_type_ctor_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module38)
	MR_init_entry1(__Compare___transform_hlds__size_prof__rev_type_ctor_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__size_prof__rev_type_ctor_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module39)
	MR_init_entry1(__Unify___transform_hlds__size_prof__rev_type_info_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__size_prof__rev_type_info_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module40)
	MR_init_entry1(__Compare___transform_hlds__size_prof__rev_type_info_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__size_prof__rev_type_info_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module41)
	MR_init_entry1(__Unify___transform_hlds__size_prof__type_ctor_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__size_prof__type_ctor_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module42)
	MR_init_entry1(__Compare___transform_hlds__size_prof__type_ctor_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__size_prof__type_ctor_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module43)
	MR_init_entry1(__Unify___transform_hlds__size_prof__type_info_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__size_prof__type_info_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module44)
	MR_init_entry1(__Compare___transform_hlds__size_prof__type_info_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__size_prof__type_info_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module45)
	MR_init_entry1(transform_hlds__size_prof__IntroducedFrom__pred__process_goal__430__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__IntroducedFrom__pred__process_goal__430__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_51_48_95_95_49_95_95_91_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module46)
	MR_init_entry1(transform_hlds__size_prof__IntroducedFrom__pred__process_disj__537__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__IntroducedFrom__pred__process_disj__537__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_51_55_95_95_49_95_95_91_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module47)
	MR_init_entry1(transform_hlds__size_prof__IntroducedFrom__pred__process_switch__577__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__IntroducedFrom__pred__process_switch__577__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_53_55_55_95_95_49_95_95_91_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module48)
	MR_init_entry1(transform_hlds__size_prof__IntroducedFrom__pred__process_cons_construct__708__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__IntroducedFrom__pred__process_cons_construct__708__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module49)
	MR_init_entry1(transform_hlds__size_prof__IntroducedFrom__pred__process_cons_deconstruct__751__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__IntroducedFrom__pred__process_cons_deconstruct__751__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module50)
	MR_init_entry1(transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1083__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1083__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_get_nonlocals_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module51)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0);
	MR_init_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0,2,3,4,5,8,11,10,7)
	MR_init_label5(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0,12,13,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_tempr2 = MR_r12;
	MR_sv(15) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__transform_hlds__size_prof__compute_functor_size_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0_i2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(transform_hlds__size_prof__find_defined_args_5_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0_i3);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0_i4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(15);
	MR_np_call_localret_ent(transform_hlds__size_prof__process_args_9_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__size_prof__IntroducedFrom__pred__process_cons_construct__708__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("size_prof.m", 11);
	MR_r3 = (MR_Word) MR_string_const("process_cons_construct: nonempty ArgGoals", 41);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0_i8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(14),0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0_i10);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(transform_hlds__size_prof__record_known_size_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0_i11);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(9);
	MR_tfield(0, MR_tempr2, 5) = MR_sv(10);
	MR_tfield(0, MR_tempr2, 6) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(16);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(9);
	MR_tfield(0, MR_tempr2, 5) = MR_sv(10);
	MR_tfield(0, MR_tempr2, 6) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_sv(3);
	MR_tfield(0, MR_r1, 3) = MR_tempr2;
	MR_tfield(0, MR_r1, 4) = MR_sv(4);
	MR_r2 = MR_sv(12);
	MR_decr_sp_and_return(16);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(12);
	MR_sv(12) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(transform_hlds__size_prof__generate_size_var_7_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0_i12);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(9);
	MR_tfield(0, MR_tempr2, 5) = MR_sv(10);
	MR_tfield(0, MR_tempr2, 6) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr3, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr3, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 4) = MR_sv(4);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0_i13);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0_i14);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0_i15);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0_i16);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__size_prof_module52)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_0);
	MR_init_label5(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_0,22,5,4,8,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_0_i3);
	}
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r5 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_0_i4);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_0_i8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = (MR_Integer) 1;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_0_i8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_0_i22);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module53)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module54)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_51_48_95_95_49_95_95_91_50_93_95_48_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_51_48_95_95_49_95_95_91_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module55)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_51_55_95_95_49_95_95_91_50_93_95_48_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_51_55_95_95_49_95_95_91_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__size_prof_module56)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_53_55_55_95_95_49_95_95_91_50_93_95_48_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_53_55_55_95_95_49_95_95_91_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_105_122_101_95_112_114_111_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__size_prof_maybe_bunch_0(void)
{
	transform_hlds__size_prof_module0();
	transform_hlds__size_prof_module1();
	transform_hlds__size_prof_module2();
	transform_hlds__size_prof_module3();
	transform_hlds__size_prof_module4();
	transform_hlds__size_prof_module5();
	transform_hlds__size_prof_module6();
	transform_hlds__size_prof_module7();
	transform_hlds__size_prof_module8();
	transform_hlds__size_prof_module9();
	transform_hlds__size_prof_module10();
	transform_hlds__size_prof_module11();
	transform_hlds__size_prof_module12();
	transform_hlds__size_prof_module13();
	transform_hlds__size_prof_module14();
	transform_hlds__size_prof_module15();
	transform_hlds__size_prof_module16();
	transform_hlds__size_prof_module17();
	transform_hlds__size_prof_module18();
	transform_hlds__size_prof_module19();
	transform_hlds__size_prof_module20();
	transform_hlds__size_prof_module21();
	transform_hlds__size_prof_module22();
	transform_hlds__size_prof_module23();
	transform_hlds__size_prof_module24();
	transform_hlds__size_prof_module25();
	transform_hlds__size_prof_module26();
	transform_hlds__size_prof_module27();
	transform_hlds__size_prof_module28();
	transform_hlds__size_prof_module29();
	transform_hlds__size_prof_module30();
	transform_hlds__size_prof_module31();
	transform_hlds__size_prof_module32();
	transform_hlds__size_prof_module33();
	transform_hlds__size_prof_module34();
	transform_hlds__size_prof_module35();
	transform_hlds__size_prof_module36();
	transform_hlds__size_prof_module37();
	transform_hlds__size_prof_module38();
	transform_hlds__size_prof_module39();
}

static void mercury__transform_hlds__size_prof_maybe_bunch_1(void)
{
	transform_hlds__size_prof_module40();
	transform_hlds__size_prof_module41();
	transform_hlds__size_prof_module42();
	transform_hlds__size_prof_module43();
	transform_hlds__size_prof_module44();
	transform_hlds__size_prof_module45();
	transform_hlds__size_prof_module46();
	transform_hlds__size_prof_module47();
	transform_hlds__size_prof_module48();
	transform_hlds__size_prof_module49();
	transform_hlds__size_prof_module50();
	transform_hlds__size_prof_module51();
	transform_hlds__size_prof_module52();
	transform_hlds__size_prof_module53();
	transform_hlds__size_prof_module54();
	transform_hlds__size_prof_module55();
	transform_hlds__size_prof_module56();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__size_prof__init(void);
void mercury__transform_hlds__size_prof__init_type_tables(void);
void mercury__transform_hlds__size_prof__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__size_prof__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__size_prof__init_complexity_procs(void);
#endif

void mercury__transform_hlds__size_prof__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__size_prof_maybe_bunch_0();
	mercury__transform_hlds__size_prof_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__size_prof__type_ctor_info_type_info_map_0,
		transform_hlds__size_prof__type_info_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__size_prof__type_ctor_info_type_ctor_map_0,
		transform_hlds__size_prof__type_ctor_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__size_prof__type_ctor_info_rev_type_info_map_0,
		transform_hlds__size_prof__rev_type_info_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__size_prof__type_ctor_info_rev_type_ctor_map_0,
		transform_hlds__size_prof__rev_type_ctor_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__size_prof__type_ctor_info_known_size_map_0,
		transform_hlds__size_prof__known_size_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__size_prof__type_ctor_info_info_0,
		transform_hlds__size_prof__info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__size_prof__type_ctor_info_construct_transform_0,
		transform_hlds__size_prof__construct_transform_0_0);
	mercury__transform_hlds__size_prof__init_debugger();
}

void mercury__transform_hlds__size_prof__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__size_prof__type_ctor_info_type_info_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__size_prof__type_ctor_info_type_ctor_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__size_prof__type_ctor_info_rev_type_info_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__size_prof__type_ctor_info_rev_type_ctor_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__size_prof__type_ctor_info_known_size_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__size_prof__type_ctor_info_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__size_prof__type_ctor_info_construct_transform_0);
	}
}


void mercury__transform_hlds__size_prof__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__size_prof__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__size_prof__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
