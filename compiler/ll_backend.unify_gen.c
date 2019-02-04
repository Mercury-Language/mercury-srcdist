/*
** Automatically generated from `unify_gen.m'
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
INIT mercury__ll_backend__unify_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 130 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.unify_gen.c"
#line 136 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.unify_gen.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ll_backend.unify_gen.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 39 "ll_backend.unify_gen.c"
#line 28 "../library/array.int2"
#include "array.mh"

#line 43 "ll_backend.unify_gen.c"
#line 44 "ll_backend.unify_gen.c"
#include "ll_backend.unify_gen.mh"

#line 47 "ll_backend.unify_gen.c"
#line 48 "ll_backend.unify_gen.c"
#ifndef LL_BACKEND__UNIFY_GEN_DECL_GUARD
#define LL_BACKEND__UNIFY_GEN_DECL_GUARD

#line 52 "ll_backend.unify_gen.c"
#line 53 "ll_backend.unify_gen.c"

#endif
#line 56 "ll_backend.unify_gen.c"


struct mercury_type_0 {
	MR_Integer f1;
};
static const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1;
	MR_Word * f2;
};
static const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
static const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
};
static const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[3];
};
static const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
static const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
static const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1[2];
};
static const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
static const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_String f1;
	MR_Word * f2;
};
static const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_String f1;
};
static const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1;
	MR_String f2;
};
static const struct mercury_type_11 mercury_common_11[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__unify_gen__type_ctor_info_uni_val_0,
	mercury_data_ll_backend__unify_gen__type_ctor_info_test_sense_0;
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0, 15,18,20,22,21,25,26,30)
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0, 29,31,32,33,34,35,36,37)
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0, 38,39,40,41,42,11,43,44)
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0, 45,46,47,48,49,50,51,52)
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0, 53,54,55,56,57,58,59,60)
MR_decl_label4(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0, 61,62,63,64)
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0, 4,5,12,13,16,20,22,19)
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0, 15,24,7,31,38,40,41,42)
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0, 43,46,47,48,49,50,53,54)
MR_decl_label8(ll_backend__unify_gen__construct_cell_9_0, 2,5,7,8,9,3,11,13)
MR_decl_label8(ll_backend__unify_gen__construct_cell_9_0, 14,16,12,18,19,20,23,24)
MR_decl_label1(ll_backend__unify_gen__construct_cell_9_0, 21)
MR_decl_label6(ll_backend__unify_gen__generate_cons_args_10_0, 2,3,4,6,8,7)
MR_decl_label8(ll_backend__unify_gen__generate_cons_args_2_11_0, 80,9,10,13,15,14,16,11)
MR_decl_label5(ll_backend__unify_gen__generate_cons_args_2_11_0, 18,20,22,81,1)
MR_decl_label8(ll_backend__unify_gen__generate_construction_2_10_0, 4,5,14,13,16,7,18,21)
MR_decl_label8(ll_backend__unify_gen__generate_construction_2_10_0, 23,25,26,28,29,30,31,32)
MR_decl_label8(ll_backend__unify_gen__generate_construction_2_10_0, 34,35,36,38,39,40,41,43)
MR_decl_label8(ll_backend__unify_gen__generate_construction_2_10_0, 44,45,46,47,48,50,51,52)
MR_decl_label8(ll_backend__unify_gen__generate_construction_2_10_0, 53,54,55,59,60,61,62,63)
MR_decl_label8(ll_backend__unify_gen__generate_construction_2_10_0, 65,66,67,69,70,71,73,75)
MR_decl_label5(ll_backend__unify_gen__generate_construction_2_10_0, 76,77,78,79,80)
MR_decl_label3(ll_backend__unify_gen__generate_extra_closure_args_6_0, 4,5,3)
MR_decl_label3(ll_backend__unify_gen__generate_field_take_address_assigns_6_0, 4,5,3)
MR_decl_label7(ll_backend__unify_gen__generate_pred_args_7_0, 3,7,6,9,10,11,5)
MR_decl_label6(ll_backend__unify_gen__generate_semi_deconstruction_7_0, 2,3,4,5,6,7)
MR_decl_label8(ll_backend__unify_gen__generate_sub_assign_5_0, 6,10,9,4,3,15,16,14)
MR_decl_label8(ll_backend__unify_gen__generate_sub_unify_7_0, 2,3,4,5,16,20,19,13)
MR_decl_label7(ll_backend__unify_gen__generate_sub_unify_7_0, 25,26,24,9,28,63,32)
MR_decl_label8(ll_backend__unify_gen__generate_tag_test_7_0, 2,5,6,7,10,14,11,12)
MR_decl_label8(ll_backend__unify_gen__generate_tag_test_7_0, 24,8,3,32,33,34,37,38)
MR_decl_label8(ll_backend__unify_gen__generate_tag_test_7_0, 36,40,41,42,43,44,46,47)
MR_decl_label8(ll_backend__unify_gen__generate_tag_test_rval_2_3_0, 4,6,7,8,9,57,11,58)
MR_decl_label8(ll_backend__unify_gen__generate_tag_test_rval_2_3_0, 14,59,17,60,20,61,23,62)
MR_decl_label8(ll_backend__unify_gen__generate_tag_test_rval_2_3_0, 26,28,29,30,63,32,64,34)
MR_decl_label6(ll_backend__unify_gen__generate_test_5_0, 2,3,4,5,8,13)
MR_decl_label8(ll_backend__unify_gen__generate_unification_6_0, 2,5,8,10,9,16,14,13)
MR_decl_label8(ll_backend__unify_gen__generate_unification_6_0, 20,19,21,24,27,25,31,34)
MR_decl_label7(ll_backend__unify_gen__generate_unification_6_0, 38,40,37,32,43,45,44)
MR_decl_label2(ll_backend__unify_gen__generate_unify_args_7_0, 3,2)
MR_decl_label5(ll_backend__unify_gen__generate_unify_args_2_7_0, 42,10,11,43,1)
MR_decl_label3(ll_backend__unify_gen__make_fields_and_argvars_6_0, 4,5,2)
MR_decl_label2(ll_backend__unify_gen__var_types_3_0, 2,3)
MR_decl_label1(fn__ll_backend__unify_gen__IntroducedFrom__func__generate_tag_test_rval_2__334__1_3_0, 2)
MR_decl_label2(fn__ll_backend__unify_gen__generate_reserved_address_1_0, 5,4)
MR_decl_label3(fn__ll_backend__unify_gen__initial_may_use_atomic_1_0, 2,3,5)
MR_decl_label2(__Unify___ll_backend__unify_gen__uni_val_0_0, 3,1)
MR_decl_label3(__Compare___ll_backend__unify_gen__uni_val_0_0, 5,3,8)
MR_decl_static(ll_backend__unify_gen__generate_test_5_0)
MR_decl_static(fn__ll_backend__unify_gen__this_file_0_0)
MR_decl_static(fn__ll_backend__unify_gen__generate_reserved_address_1_0)
MR_decl_static(ll_backend__unify_gen__generate_extra_closure_args_6_0)
MR_decl_static(ll_backend__unify_gen__generate_pred_args_7_0)
MR_decl_static(fn__ll_backend__unify_gen__initial_may_use_atomic_1_0)
MR_decl_static(ll_backend__unify_gen__generate_cons_args_2_11_0)
MR_decl_static(ll_backend__unify_gen__generate_cons_args_10_0)
MR_decl_static(ll_backend__unify_gen__generate_field_take_address_assigns_6_0)
MR_decl_static(ll_backend__unify_gen__construct_cell_9_0)
MR_decl_static(ll_backend__unify_gen__var_types_3_0)
MR_decl_static(ll_backend__unify_gen__generate_sub_assign_5_0)
MR_decl_static(ll_backend__unify_gen__generate_sub_unify_7_0)
MR_decl_static(ll_backend__unify_gen__generate_construction_2_10_0)
MR_decl_static(ll_backend__unify_gen__make_fields_and_argvars_6_0)
MR_decl_static(ll_backend__unify_gen__generate_unify_args_2_7_0)
MR_decl_static(ll_backend__unify_gen__generate_unify_args_7_0)
MR_decl_static(ll_backend__unify_gen__generate_tag_test_rval_2_3_0)
MR_def_extern_entry(ll_backend__unify_gen__generate_tag_test_7_0)
MR_decl_static(ll_backend__unify_gen__generate_semi_deconstruction_7_0)
MR_def_extern_entry(ll_backend__unify_gen__generate_unification_6_0)
MR_def_extern_entry(__Unify___ll_backend__unify_gen__test_sense_0_0)
MR_def_extern_entry(__Compare___ll_backend__unify_gen__test_sense_0_0)
MR_decl_static(__Unify___ll_backend__unify_gen__uni_val_0_0)
MR_decl_static(__Compare___ll_backend__unify_gen__uni_val_0_0)
MR_decl_static(fn__ll_backend__unify_gen__IntroducedFrom__func__generate_tag_test_rval_2__334__1_3_0)
MR_decl_static(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__450__1_2_0)
MR_decl_static(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__472__1_2_0)
MR_decl_static(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__512__1_2_0)
MR_decl_static(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__514__1_2_0)
MR_decl_static(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__499__1_2_0)
MR_decl_static(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__489__1_2_0)
MR_decl_static(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__460__1_2_0)
MR_decl_static(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__440__1_2_0)
MR_decl_static(fn__ll_backend__unify_gen__IntroducedFrom__func__construct_cell__852__1_1_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0)

static const struct mercury_type_0 mercury_common_0[4] =
{
{
0
},
{
1
},
{
2
},
{
3
},
};

static const struct mercury_type_1 mercury_common_1[5] =
{
{
0,
MR_TAG_COMMON(1,0,0)
},
{
0,
MR_TAG_COMMON(1,0,1)
},
{
0,
MR_tbmkword(0, 0)
},
{
0,
MR_TAG_COMMON(1,0,2)
},
{
0,
MR_TAG_COMMON(1,0,3)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_term_size_value_0;
static const struct mercury_type_2 mercury_common_2[5] =
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
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(hlds__hlds_goal, term_size_value)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(2,1)
}
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_TAG_COMMON(3,1,0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_TAG_COMMON(0,2,0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_COMMON(2,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__construct_cell_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__construct_cell_9_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_8;
static const struct mercury_type_5 mercury_common_5[10] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__unify_gen__construct_cell_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(4,1),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__unify_gen__construct_cell_9_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(4,1),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,2),
MR_COMMON(2,2)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,3),
MR_COMMON(2,3)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,4),
MR_COMMON(2,4)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,4),
MR_COMMON(2,4)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,4),
MR_COMMON(2,4)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_6,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,4),
MR_COMMON(2,4)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_7,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,4),
MR_COMMON(2,4)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_8,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,4),
MR_COMMON(2,4)
},
};

static const struct mercury_type_6 mercury_common_6[2] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(fn__ll_backend__unify_gen__IntroducedFrom__func__construct_cell__852__1_1_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(fn__ll_backend__unify_gen__IntroducedFrom__func__construct_cell__852__1_1_0),
0
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
7,
0
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__generate_tag_test_rval_2_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_reserved_address_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__unify_gen__generate_tag_test_rval_2_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds, rval),
MR_CTOR0_ADDR(hlds__hlds_data, reserved_address),
MR_CTOR0_ADDR(ll_backend__llds, rval),
MR_CTOR0_ADDR(ll_backend__llds, rval)
}
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
MR_string_const(" (inverted test)", 16),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_10 mercury_common_10[1] =
{
{
MR_string_const("build new closure from old closure", 34)
},
};

static const struct mercury_type_11 mercury_common_11[1] =
{
{
MR_TAG_COMMON(1,10,0),
MR_string_const("", 0)
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__unify_gen__field_types_uni_val_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__unify_gen__du_functor_desc_uni_val_0_0 = {
	"ref",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__unify_gen__field_types_uni_val_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__unify_gen__field_types_uni_val_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__unify_gen__du_functor_desc_uni_val_0_1 = {
	"lval",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__unify_gen__field_types_uni_val_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__unify_gen__du_stag_ordered_uni_val_0_0[] = {
	&mercury_data_ll_backend__unify_gen__du_functor_desc_uni_val_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__unify_gen__du_stag_ordered_uni_val_0_1[] = {
	&mercury_data_ll_backend__unify_gen__du_functor_desc_uni_val_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__unify_gen__du_ptag_ordered_uni_val_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__unify_gen__du_stag_ordered_uni_val_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__unify_gen__du_stag_ordered_uni_val_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__unify_gen__du_name_ordered_uni_val_0[] = {
	&mercury_data_ll_backend__unify_gen__du_functor_desc_uni_val_0_1,
	&mercury_data_ll_backend__unify_gen__du_functor_desc_uni_val_0_0
};

const MR_Integer mercury_data_ll_backend__unify_gen__functor_number_map_uni_val_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__unify_gen__type_ctor_info_uni_val_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__unify_gen__uni_val_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__unify_gen__uni_val_0_0)),
	"ll_backend.unify_gen",
	"uni_val",
	{ (void *)mercury_data_ll_backend__unify_gen__du_name_ordered_uni_val_0 },
	{ (void *)mercury_data_ll_backend__unify_gen__du_ptag_ordered_uni_val_0 },
	2,
	4,
	mercury_data_ll_backend__unify_gen__functor_number_map_uni_val_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__unify_gen__enum_functor_desc_test_sense_0_0 = {
	"branch_on_success",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__unify_gen__enum_functor_desc_test_sense_0_1 = {
	"branch_on_failure",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__unify_gen__enum_value_ordered_test_sense_0[] = {
	&mercury_data_ll_backend__unify_gen__enum_functor_desc_test_sense_0_0,
	&mercury_data_ll_backend__unify_gen__enum_functor_desc_test_sense_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__unify_gen__enum_name_ordered_test_sense_0[] = {
	&mercury_data_ll_backend__unify_gen__enum_functor_desc_test_sense_0_1,
	&mercury_data_ll_backend__unify_gen__enum_functor_desc_test_sense_0_0
};

const MR_Integer mercury_data_ll_backend__unify_gen__functor_number_map_test_sense_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__unify_gen__type_ctor_info_test_sense_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__unify_gen__test_sense_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__unify_gen__test_sense_0_0)),
	"ll_backend.unify_gen",
	"test_sense",
	{ (void *)mercury_data_ll_backend__unify_gen__enum_name_ordered_test_sense_0 },
	{ (void *)mercury_data_ll_backend__unify_gen__enum_value_ordered_test_sense_0 },
	2,
	4,
	mercury_data_ll_backend__unify_gen__functor_number_map_test_sense_0
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__construct_cell_9_0_1 = {
{
MR_FUNCTION,
"ll_backend.unify_gen",
"ll_backend.unify_gen",
"lambda_unify_gen_m_852",
2,
0
},
"ll_backend.unify_gen",
"unify_gen.m",
852,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__construct_cell_9_0_2 = {
{
MR_FUNCTION,
"ll_backend.unify_gen",
"ll_backend.unify_gen",
"lambda_unify_gen_m_852",
2,
0
},
"ll_backend.unify_gen",
"unify_gen.m",
852,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_1 = {
{
MR_PREDICATE,
"ll_backend.unify_gen",
"ll_backend.unify_gen",
"lambda_unify_gen_m_512",
2,
0
},
"ll_backend.unify_gen",
"unify_gen.m",
512,
"d1;c11;d16;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_2 = {
{
MR_PREDICATE,
"ll_backend.unify_gen",
"ll_backend.unify_gen",
"lambda_unify_gen_m_514",
2,
0
},
"ll_backend.unify_gen",
"unify_gen.m",
514,
"d1;c11;d16;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_3 = {
{
MR_PREDICATE,
"ll_backend.unify_gen",
"ll_backend.unify_gen",
"lambda_unify_gen_m_440",
2,
0
},
"ll_backend.unify_gen",
"unify_gen.m",
440,
"d1;c11;d9;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_4 = {
{
MR_PREDICATE,
"ll_backend.unify_gen",
"ll_backend.unify_gen",
"lambda_unify_gen_m_450",
2,
0
},
"ll_backend.unify_gen",
"unify_gen.m",
450,
"d1;c11;d10;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_5 = {
{
MR_PREDICATE,
"ll_backend.unify_gen",
"ll_backend.unify_gen",
"lambda_unify_gen_m_460",
2,
0
},
"ll_backend.unify_gen",
"unify_gen.m",
460,
"d1;c11;d11;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_6 = {
{
MR_PREDICATE,
"ll_backend.unify_gen",
"ll_backend.unify_gen",
"lambda_unify_gen_m_472",
2,
0
},
"ll_backend.unify_gen",
"unify_gen.m",
472,
"d1;c11;d12;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_7 = {
{
MR_PREDICATE,
"ll_backend.unify_gen",
"ll_backend.unify_gen",
"lambda_unify_gen_m_489",
2,
0
},
"ll_backend.unify_gen",
"unify_gen.m",
489,
"d1;c11;d13;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__generate_construction_2_10_0_8 = {
{
MR_PREDICATE,
"ll_backend.unify_gen",
"ll_backend.unify_gen",
"lambda_unify_gen_m_499",
2,
0
},
"ll_backend.unify_gen",
"unify_gen.m",
499,
"d1;c11;d14;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__unify_gen__generate_tag_test_rval_2_3_0_1 = {
{
MR_FUNCTION,
"ll_backend.unify_gen",
"ll_backend.unify_gen",
"lambda_unify_gen_m_334",
4,
0
},
"ll_backend.unify_gen",
"unify_gen.m",
334,
"d1;c4;d16;c2;"
};

MR_decl_entry(ll_backend__code_info__produce_variable_5_0);
MR_decl_entry(fn__ll_backend__code_info__variable_type_2_0);
MR_decl_entry(ll_backend__code_info__fail_if_rval_is_false_4_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module0)
	MR_init_entry1(ll_backend__unify_gen__generate_test_5_0);
	MR_init_label6(ll_backend__unify_gen__generate_test_5_0,2,3,4,5,8,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__generate_test_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__unify_gen__generate_test_5_0_i2);
MR_def_label(ll_backend__unify_gen__generate_test_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__unify_gen__generate_test_5_0_i3);
MR_def_label(ll_backend__unify_gen__generate_test_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_tempr3;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_type_2_0,
		ll_backend__unify_gen__generate_test_5_0_i4);
MR_def_label(ll_backend__unify_gen__generate_test_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_test_5_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_test_5_0_i5);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 15);
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_tfield(3, MR_r1, 3) = MR_sv(1);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__code_info__fail_if_rval_is_false_4_0,
		ll_backend__unify_gen__generate_test_5_0_i13);
MR_def_label(ll_backend__unify_gen__generate_test_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_test_5_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_test_5_0_i8);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 30);
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_tfield(3, MR_r1, 3) = MR_sv(1);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__code_info__fail_if_rval_is_false_4_0,
		ll_backend__unify_gen__generate_test_5_0_i13);
MR_def_label(ll_backend__unify_gen__generate_test_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 12);
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_tfield(3, MR_r1, 3) = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__code_info__fail_if_rval_is_false_4_0,
		ll_backend__unify_gen__generate_test_5_0_i13);
MR_def_label(ll_backend__unify_gen__generate_test_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__unify_gen_module1)
	MR_init_entry1(fn__ll_backend__unify_gen__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__unify_gen__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_gen.m", 11);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module2)
	MR_init_entry1(fn__ll_backend__unify_gen__generate_reserved_address_1_0);
	MR_init_label2(fn__ll_backend__unify_gen__generate_reserved_address_1_0,5,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__unify_gen__generate_reserved_address_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__unify_gen__generate_reserved_address_1_0_i4);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__unify_gen__generate_reserved_address_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_proceed();
MR_def_label(fn__ll_backend__unify_gen__generate_reserved_address_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_gen.m", 11);
	MR_r2 = (MR_Word) MR_string_const("reserved_object", 15);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__ll_backend__unify_gen__generate_reserved_address_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__unify_gen_module3)
	MR_init_entry1(ll_backend__unify_gen__generate_extra_closure_args_6_0);
	MR_init_label3(ll_backend__unify_gen__generate_extra_closure_args_6_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__generate_extra_closure_args_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_extra_closure_args_6_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__unify_gen__generate_extra_closure_args_6_0_i4);
MR_def_label(ll_backend__unify_gen__generate_extra_closure_args_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tempr7 = MR_sv(1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(3, MR_tempr4, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_string_const("set new argument field", 22);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 3) = (MR_Word) MR_TAG_COMMON(3,1,1);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr7;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("increment argument counter", 26);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr5;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	MR_r4 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_localcall_lab(ll_backend__unify_gen__generate_extra_closure_args_6_0,
		ll_backend__unify_gen__generate_extra_closure_args_6_0_i5);
MR_def_label(ll_backend__unify_gen__generate_extra_closure_args_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__unify_gen__generate_extra_closure_args_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__type_util__update_type_may_use_atomic_alloc_4_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module4)
	MR_init_entry1(ll_backend__unify_gen__generate_pred_args_7_0);
	MR_init_label7(ll_backend__unify_gen__generate_pred_args_7_0,3,7,6,9,10,11,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__generate_pred_args_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_pred_args_7_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(ll_backend__unify_gen__generate_pred_args_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_pred_args_7_0_i5);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_r6 = MR_ctfield(0, MR_ctfield(1, MR_tempr2, 0), 1);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_pred_args_7_0_i7);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_tempr3, 0);
	MR_tag_alloc_heap(MR_sv(5), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(5), 0) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r7 = MR_tempr2;
	MR_r4 = MR_r2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_ctfield(1, MR_r7, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r7 = MR_tempr3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_sv(6) = MR_ctfield(1, MR_r7, 1);
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
	MR_GOTO_LAB(ll_backend__unify_gen__generate_pred_args_7_0_i6);
	}
MR_def_label(ll_backend__unify_gen__generate_pred_args_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 1);
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
	}
MR_def_label(ll_backend__unify_gen__generate_pred_args_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__unify_gen__generate_pred_args_7_0_i9);
MR_def_label(ll_backend__unify_gen__generate_pred_args_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__type_util__update_type_may_use_atomic_alloc_4_0,
		ll_backend__unify_gen__generate_pred_args_7_0_i10);
MR_def_label(ll_backend__unify_gen__generate_pred_args_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_np_localcall_lab(ll_backend__unify_gen__generate_pred_args_7_0,
		ll_backend__unify_gen__generate_pred_args_7_0_i11);
MR_def_label(ll_backend__unify_gen__generate_pred_args_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__unify_gen__generate_pred_args_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_gen.m", 11);
	MR_r2 = (MR_Word) MR_string_const("generate_pred_args: insufficient args", 37);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module5)
	MR_init_entry1(fn__ll_backend__unify_gen__initial_may_use_atomic_1_0);
	MR_init_label3(fn__ll_backend__unify_gen__initial_may_use_atomic_1_0,2,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__unify_gen__initial_may_use_atomic_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		fn__ll_backend__unify_gen__initial_may_use_atomic_1_0_i2);
MR_def_label(fn__ll_backend__unify_gen__initial_may_use_atomic_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 353;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__unify_gen__initial_may_use_atomic_1_0_i3);
MR_def_label(fn__ll_backend__unify_gen__initial_may_use_atomic_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__unify_gen__initial_may_use_atomic_1_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(fn__ll_backend__unify_gen__initial_may_use_atomic_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__get_module_info_2_0);
MR_decl_entry(ll_backend__code_info__get_lcmc_null_2_0);
MR_decl_entry(check_hlds__mode_util__mode_to_arg_mode_4_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module6)
	MR_init_entry1(ll_backend__unify_gen__generate_cons_args_2_11_0);
	MR_init_label8(ll_backend__unify_gen__generate_cons_args_2_11_0,80,9,10,13,15,14,16,11)
	MR_init_label5(ll_backend__unify_gen__generate_cons_args_2_11_0,18,20,22,81,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__generate_cons_args_2_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_cons_args_2_11_0_i80);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_cons_args_2_11_0_i81);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_cons_args_2_11_0_i81);
	}
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_cons_args_2_11_0_i81);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r8;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__unify_gen__generate_cons_args_2_11_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_cons_args_2_11_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_cons_args_2_11_0_i1);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r7;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_ctfield(1, MR_r1, 0);
	MR_sv(7) = MR_ctfield(1, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_sv(8) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(9) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r3;
	MR_sv(10) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(11) = MR_ctfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__unify_gen__generate_cons_args_2_11_0_i9);
MR_def_label(ll_backend__unify_gen__generate_cons_args_2_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__type_util__update_type_may_use_atomic_alloc_4_0,
		ll_backend__unify_gen__generate_cons_args_2_11_0_i10);
MR_def_label(ll_backend__unify_gen__generate_cons_args_2_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_cons_args_2_11_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(3), 0);
	if ((MR_sv(2) != MR_tempr1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_cons_args_2_11_0_i11);
	}
	MR_sv(3) = MR_ctfield(1, MR_sv(3), 1);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_lcmc_null_2_0,
		ll_backend__unify_gen__generate_cons_args_2_11_0_i13);
MR_def_label(ll_backend__unify_gen__generate_cons_args_2_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_cons_args_2_11_0_i15);
	}
	MR_r4 = MR_sv(1);
	MR_r7 = MR_sv(4);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(11);
	MR_r6 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r8 = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__unify_gen__generate_cons_args_2_11_0_i14);
MR_def_label(ll_backend__unify_gen__generate_cons_args_2_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r7 = MR_sv(4);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(11);
	MR_r6 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r8 = (MR_Integer) 1;
MR_def_label(ll_backend__unify_gen__generate_cons_args_2_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_np_localcall_lab(ll_backend__unify_gen__generate_cons_args_2_11_0,
		ll_backend__unify_gen__generate_cons_args_2_11_0_i16);
MR_def_label(ll_backend__unify_gen__generate_cons_args_2_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_cons_args_2_11_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (((MR_Integer) MR_sv(2) - (MR_Integer) 1) + (MR_Integer) MR_sv(1));
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__unify_gen__generate_cons_args_2_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_sv(10);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_ctfield(0, MR_tempr3, 0), 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_ctfield(0, MR_tempr3, 1), 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr2;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		ll_backend__unify_gen__generate_cons_args_2_11_0_i18);
MR_def_label(ll_backend__unify_gen__generate_cons_args_2_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_cons_args_2_11_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(11);
	MR_r8 = MR_sv(5);
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_sv(1) = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__unify_gen__generate_cons_args_2_11_0,
		ll_backend__unify_gen__generate_cons_args_2_11_0_i22);
MR_def_label(ll_backend__unify_gen__generate_cons_args_2_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(11);
	MR_r8 = MR_sv(5);
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(ll_backend__unify_gen__generate_cons_args_2_11_0,
		ll_backend__unify_gen__generate_cons_args_2_11_0_i22);
MR_def_label(ll_backend__unify_gen__generate_cons_args_2_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_cons_args_2_11_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__unify_gen__generate_cons_args_2_11_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(ll_backend__unify_gen__generate_cons_args_2_11_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__unify_gen_module7)
	MR_init_entry1(ll_backend__unify_gen__generate_cons_args_10_0);
	MR_init_label6(ll_backend__unify_gen__generate_cons_args_10_0,2,3,4,6,8,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__generate_cons_args_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__unify_gen__generate_cons_args_10_0_i2);
MR_def_label(ll_backend__unify_gen__generate_cons_args_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__unify_gen__generate_cons_args_10_0_i3);
MR_def_label(ll_backend__unify_gen__generate_cons_args_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 353;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__unify_gen__generate_cons_args_10_0_i4);
MR_def_label(ll_backend__unify_gen__generate_cons_args_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_cons_args_10_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__unify_gen__generate_cons_args_2_11_0,
		ll_backend__unify_gen__generate_cons_args_10_0_i8);
MR_def_label(ll_backend__unify_gen__generate_cons_args_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__unify_gen__generate_cons_args_2_11_0,
		ll_backend__unify_gen__generate_cons_args_10_0_i8);
MR_def_label(ll_backend__unify_gen__generate_cons_args_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_cons_args_10_0_i7);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__unify_gen__generate_cons_args_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_gen.m", 11);
	MR_r2 = (MR_Word) MR_string_const("generate_cons_args: length mismatch", 35);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__assign_expr_to_var_5_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module8)
	MR_init_entry1(ll_backend__unify_gen__generate_field_take_address_assigns_6_0);
	MR_init_label3(ll_backend__unify_gen__generate_field_take_address_assigns_6_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__generate_field_take_address_assigns_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_field_take_address_assigns_6_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_r2;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr4, 0) = MR_tempr1;
	MR_tempr6 = MR_r3;
	MR_tfield(2, MR_tempr4, 1) = MR_tempr6;
	MR_tfield(2, MR_tempr4, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr4;
	MR_sv(1) = MR_tempr5;
	MR_sv(2) = MR_tempr6;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(ll_backend__code_info__assign_expr_to_var_5_0,
		ll_backend__unify_gen__generate_field_take_address_assigns_6_0_i4);
MR_def_label(ll_backend__unify_gen__generate_field_take_address_assigns_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(ll_backend__unify_gen__generate_field_take_address_assigns_6_0,
		ll_backend__unify_gen__generate_field_take_address_assigns_6_0_i5);
MR_def_label(ll_backend__unify_gen__generate_field_take_address_assigns_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__unify_gen__generate_field_take_address_assigns_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(string__append_list_2_0);
MR_decl_entry(ll_backend__code_info__get_globals_2_0);
MR_decl_entry(libs__globals__get_gc_method_2_0);
MR_decl_entry(parse_tree__prog_type__is_introduced_type_info_type_1_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(ll_backend__code_info__assign_cell_to_var_11_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module9)
	MR_init_entry1(ll_backend__unify_gen__construct_cell_9_0);
	MR_init_label8(ll_backend__unify_gen__construct_cell_9_0,2,5,7,8,9,3,11,13)
	MR_init_label8(ll_backend__unify_gen__construct_cell_9_0,14,16,12,18,19,20,23,24)
	MR_init_label1(ll_backend__unify_gen__construct_cell_9_0,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__construct_cell_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_type_2_0,
		ll_backend__unify_gen__construct_cell_9_0_i2);
MR_def_label(ll_backend__unify_gen__construct_cell_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		ll_backend__unify_gen__construct_cell_9_0_i5);
MR_def_label(ll_backend__unify_gen__construct_cell_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__construct_cell_9_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		ll_backend__unify_gen__construct_cell_9_0_i7);
MR_def_label(ll_backend__unify_gen__construct_cell_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		ll_backend__unify_gen__construct_cell_9_0_i8);
MR_def_label(ll_backend__unify_gen__construct_cell_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(8);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		ll_backend__unify_gen__construct_cell_9_0_i9);
MR_def_label(ll_backend__unify_gen__construct_cell_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(ll_backend__unify_gen__construct_cell_9_0_i11);
MR_def_label(ll_backend__unify_gen__construct_cell_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r1 = (MR_Word) MR_string_const("unify_gen.m", 11);
	MR_r2 = (MR_Word) MR_string_const("type is still a type variable in var_type_msg", 45);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__unify_gen__construct_cell_9_0_i11);
MR_def_label(ll_backend__unify_gen__construct_cell_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		ll_backend__unify_gen__construct_cell_9_0_i13);
MR_def_label(ll_backend__unify_gen__construct_cell_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_gc_method_2_0,
		ll_backend__unify_gen__construct_cell_9_0_i14);
MR_def_label(ll_backend__unify_gen__construct_cell_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(ll_backend__unify_gen__construct_cell_9_0_i12);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__prog_type__is_introduced_type_info_type_1_0,
		ll_backend__unify_gen__construct_cell_9_0_i16);
MR_def_label(ll_backend__unify_gen__construct_cell_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__construct_cell_9_0_i12);
	}
	MR_r4 = MR_sv(5);
	MR_sv(7) = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_GOTO_LAB(ll_backend__unify_gen__construct_cell_9_0_i18);
MR_def_label(ll_backend__unify_gen__construct_cell_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(5);
	MR_sv(7) = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
MR_def_label(ll_backend__unify_gen__construct_cell_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__unify_gen__construct_cell_9_0_i19);
MR_def_label(ll_backend__unify_gen__construct_cell_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__assign_cell_to_var_11_0,
		ll_backend__unify_gen__construct_cell_9_0_i20);
MR_def_label(ll_backend__unify_gen__construct_cell_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__construct_cell_9_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(5);
	MR_tempr2 = MR_ctfield(1, MR_tempr5, 0);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(2, MR_tempr4, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr4, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr5, 1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__assign_expr_to_var_5_0,
		ll_backend__unify_gen__construct_cell_9_0_i23);
MR_def_label(ll_backend__unify_gen__construct_cell_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__unify_gen__generate_field_take_address_assigns_6_0,
		ll_backend__unify_gen__construct_cell_9_0_i24);
MR_def_label(ll_backend__unify_gen__construct_cell_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r1, 0) = MR_sv(3);
	MR_tfield(2, MR_r1, 1) = MR_tempr1;
	}
MR_def_label(ll_backend__unify_gen__construct_cell_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__get_proc_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(map__apply_to_list_3_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module10)
	MR_init_entry1(ll_backend__unify_gen__var_types_3_0);
	MR_init_label2(ll_backend__unify_gen__var_types_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__var_types_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_info_2_0,
		ll_backend__unify_gen__var_types_3_0_i2);
MR_def_label(ll_backend__unify_gen__var_types_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__unify_gen__var_types_3_0_i3);
MR_def_label(ll_backend__unify_gen__var_types_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(map__apply_to_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__variable_is_forward_live_2_0);
MR_decl_entry(ll_backend__code_info__assign_var_to_var_4_0);
MR_decl_entry(ll_backend__code_info__assign_lval_to_var_5_0);
MR_decl_entry(ll_backend__code_info__materialize_vars_in_lval_5_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module11)
	MR_init_entry1(ll_backend__unify_gen__generate_sub_assign_5_0);
	MR_init_label8(ll_backend__unify_gen__generate_sub_assign_5_0,6,10,9,4,3,15,16,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__generate_sub_assign_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_sub_assign_5_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__code_info__variable_is_forward_live_2_0,
		ll_backend__unify_gen__generate_sub_assign_5_0_i6);
MR_def_label(ll_backend__unify_gen__generate_sub_assign_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_sub_assign_5_0_i4);
	}
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_sub_assign_5_0_i9);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__code_info__assign_var_to_var_4_0,
		ll_backend__unify_gen__generate_sub_assign_5_0_i10);
MR_def_label(ll_backend__unify_gen__generate_sub_assign_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__unify_gen__generate_sub_assign_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__code_info__assign_lval_to_var_5_0);
MR_def_label(ll_backend__unify_gen__generate_sub_assign_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__unify_gen__generate_sub_assign_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_sub_assign_5_0_i14);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(0, MR_r2, 0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__unify_gen__generate_sub_assign_5_0_i15);
MR_def_label(ll_backend__unify_gen__generate_sub_assign_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__materialize_vars_in_lval_5_0,
		ll_backend__unify_gen__generate_sub_assign_5_0_i16);
MR_def_label(ll_backend__unify_gen__generate_sub_assign_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Copy value", 10);
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
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__unify_gen__generate_sub_assign_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_gen.m", 11);
	MR_r2 = (MR_Word) MR_string_const("generate_sub_assign: lval/lval", 30);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__unify_gen_module12)
	MR_init_entry1(ll_backend__unify_gen__generate_sub_unify_7_0);
	MR_init_label8(ll_backend__unify_gen__generate_sub_unify_7_0,2,3,4,5,16,20,19,13)
	MR_init_label7(ll_backend__unify_gen__generate_sub_unify_7_0,25,26,24,9,28,63,32)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__generate_sub_unify_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_r5;
	MR_sv(8) = MR_tempr3;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__unify_gen__generate_sub_unify_7_0_i2);
MR_def_label(ll_backend__unify_gen__generate_sub_unify_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_sv(4) = MR_r1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		ll_backend__unify_gen__generate_sub_unify_7_0_i3);
MR_def_label(ll_backend__unify_gen__generate_sub_unify_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		ll_backend__unify_gen__generate_sub_unify_7_0_i4);
MR_def_label(ll_backend__unify_gen__generate_sub_unify_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_sub_unify_7_0_i5);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_sub_unify_7_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("unify_gen.m", 11);
	MR_r2 = (MR_Word) MR_string_const("test in arg of [de]construction", 31);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__unify_gen__generate_sub_unify_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_sub_unify_7_0_i9);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_sub_unify_7_0_i9);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_sub_unify_7_0_i13);
	}
	MR_sv(2) = MR_ctfield(0, MR_sv(2), 0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_info__variable_is_forward_live_2_0,
		ll_backend__unify_gen__generate_sub_unify_7_0_i16);
MR_def_label(ll_backend__unify_gen__generate_sub_unify_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_sub_unify_7_0_i63);
	}
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_sub_unify_7_0_i19);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__assign_var_to_var_4_0,
		ll_backend__unify_gen__generate_sub_unify_7_0_i20);
MR_def_label(ll_backend__unify_gen__generate_sub_unify_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__unify_gen__generate_sub_unify_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__code_info__assign_lval_to_var_5_0);
MR_def_label(ll_backend__unify_gen__generate_sub_unify_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_sub_unify_7_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__unify_gen__generate_sub_unify_7_0_i25);
MR_def_label(ll_backend__unify_gen__generate_sub_unify_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__materialize_vars_in_lval_5_0,
		ll_backend__unify_gen__generate_sub_unify_7_0_i26);
MR_def_label(ll_backend__unify_gen__generate_sub_unify_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Copy value", 10);
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
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__unify_gen__generate_sub_unify_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_gen.m", 11);
	MR_r2 = (MR_Word) MR_string_const("generate_sub_assign: lval/lval", 30);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__unify_gen__generate_sub_unify_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_sub_unify_7_0_i28);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_sub_unify_7_0_i28);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__unify_gen__generate_sub_assign_5_0);
MR_def_label(ll_backend__unify_gen__generate_sub_unify_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_sub_unify_7_0_i32);
	}
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_sub_unify_7_0_i32);
	}
MR_def_label(ll_backend__unify_gen__generate_sub_unify_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__unify_gen__generate_sub_unify_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_gen.m", 11);
	MR_r2 = (MR_Word) MR_string_const("generate_sub_unify: some strange unify", 38);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__assign_const_to_var_4_0);
MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(fn__backend_libs__type_class_info__generate_class_name_1_0);
MR_decl_entry(fn__backend_libs__proc_label__make_proc_label_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(fn__backend_libs__rtti__make_rtti_proc_label_3_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module13)
	MR_init_entry1(ll_backend__unify_gen__generate_construction_2_10_0);
	MR_init_label8(ll_backend__unify_gen__generate_construction_2_10_0,4,5,14,13,16,7,18,21)
	MR_init_label8(ll_backend__unify_gen__generate_construction_2_10_0,23,25,26,28,29,30,31,32)
	MR_init_label8(ll_backend__unify_gen__generate_construction_2_10_0,34,35,36,38,39,40,41,43)
	MR_init_label8(ll_backend__unify_gen__generate_construction_2_10_0,44,45,46,47,48,50,51,52)
	MR_init_label8(ll_backend__unify_gen__generate_construction_2_10_0,53,54,55,59,60,61,62,63)
	MR_init_label8(ll_backend__unify_gen__generate_construction_2_10_0,65,66,67,69,70,71,73,75)
	MR_init_label5(ll_backend__unify_gen__generate_construction_2_10_0,76,77,78,79,80)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__generate_construction_2_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i21) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i25));
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_construction_2_10_0_i5);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_succip_word = MR_sv(9);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i21) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i25));
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_construction_2_10_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_construction_2_10_0_i7);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_construction_2_10_0_i7);
	}
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_construction_2_10_0_i7);
	}
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_construction_2_10_0_i13);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_r8;
	MR_sv(7) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_type_2_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i14);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__unify_gen__generate_sub_unify_7_0);
	}
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__unify_gen__this_file_0_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i16);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("generate_construction_2: notag: take_addr", 41);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__unify_gen__this_file_0_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i18);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("generate_construction_2: no_tag: arity != 1", 43);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(ll_backend__code_info__assign_const_to_var_4_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i79);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(2, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(ll_backend__code_info__assign_const_to_var_4_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i79);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i26) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i34) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i38) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i43) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i65) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i69) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i73) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i75) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i80));
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(ll_backend__code_info__assign_const_to_var_4_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i79);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__512__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r5;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(6) = MR_ctfield(3, MR_r1, 1);
	MR_sv(8) = MR_ctfield(3, MR_r1, 2);
	}
	MR_np_call_localret_ent(fn__ll_backend__unify_gen__this_file_0_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i29);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const("generate_construction_2: pred_closure_tag has take_addr", 55);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i30);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__514__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__unify_gen__this_file_0_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i31);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const("generate_construction_2: pred_closure_tag has size", 50);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i32);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__440__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r1, 2);
	MR_sv(4) = MR_ctfield(3, MR_r1, 3);
	MR_sv(7) = MR_r8;
	}
	MR_np_call_localret_ent(fn__ll_backend__unify_gen__this_file_0_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i35);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const("generate_construction_2: type_ctor_info constant has args", 57);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i36);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 14);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__code_info__assign_const_to_var_4_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i79);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__450__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_sv(3) = MR_ctfield(3, MR_r1, 3);
	MR_sv(7) = MR_r8;
	MR_sv(5) = MR_ctfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__unify_gen__this_file_0_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i39);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const("generate_construction_2: base_typeclass_info constant has args", 62);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i40);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__backend_libs__type_class_info__generate_class_name_1_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i41);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__code_info__assign_const_to_var_4_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i79);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__460__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r1, 2);
	MR_sv(7) = MR_r8;
	}
	MR_np_call_localret_ent(fn__ll_backend__unify_gen__this_file_0_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i44);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const("generate_construction_2: tabling_info constant has args", 55);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i45);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i46);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_3_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i47);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i48);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__code_info__assign_const_to_var_4_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i79);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__472__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_r8;
	MR_sv(3) = MR_ctfield(3, MR_r1, 1);
	MR_sv(4) = MR_ctfield(3, MR_r1, 2);
	}
	MR_np_call_localret_ent(fn__ll_backend__unify_gen__this_file_0_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i51);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const("generate_construction_2: deep_profiling_proc_static has args", 60);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i52);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i53);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__backend_libs__rtti__make_rtti_proc_label_3_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i54);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 13);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_construction_2_10_0_i55);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__code_info__assign_const_to_var_4_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i79);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__code_info__assign_const_to_var_4_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i79);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__489__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_r8;
	MR_sv(3) = MR_ctfield(3, MR_r1, 1);
	MR_sv(4) = MR_ctfield(3, MR_r1, 2);
	}
	MR_np_call_localret_ent(fn__ll_backend__unify_gen__this_file_0_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i60);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const("generate_construction_2: table_io_decl has args", 47);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i61);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i62);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__backend_libs__rtti__make_rtti_proc_label_3_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i63);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__code_info__assign_const_to_var_4_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i79);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(3, MR_r1, 1);
	MR_tempr2 = MR_r8;
	MR_sv(7) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__unify_gen__var_types_3_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i66);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__unify_gen__generate_cons_args_10_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i67);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__unify_gen__construct_cell_9_0);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(3, MR_r1, 2);
	MR_tempr2 = MR_r8;
	MR_sv(7) = MR_tempr2;
	MR_sv(8) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__unify_gen__var_types_3_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i70);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__unify_gen__generate_cons_args_10_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i71);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r6 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__unify_gen__construct_cell_9_0);
	}
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr2, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(2, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(ll_backend__code_info__assign_const_to_var_4_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i79);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__499__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_sv(7) = MR_r8;
	}
	MR_np_call_localret_ent(fn__ll_backend__unify_gen__this_file_0_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i76);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const("generate_construction_2: reserved_address constant has args", 59);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i77);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ll_backend__unify_gen__generate_reserved_address_1_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i78);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__assign_const_to_var_4_0,
		ll_backend__unify_gen__generate_construction_2_10_0_i79);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__unify_gen__generate_construction_2_10_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(9);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i21) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_construction_2_10_0_i25));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__unify_gen_module14)
	MR_init_entry1(ll_backend__unify_gen__make_fields_and_argvars_6_0);
	MR_init_label3(ll_backend__unify_gen__make_fields_and_argvars_6_0,4,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__make_fields_and_argvars_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__make_fields_and_argvars_6_0_i2);
	}
	MR_r9 = (MR_Word) MR_sp;
MR_def_label(ll_backend__unify_gen__make_fields_and_argvars_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr4, 2) = MR_r2;
	MR_tfield(3, MR_tempr4, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_sv(2), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(2), 0) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	break; } /* end while */
MR_def_label(ll_backend__unify_gen__make_fields_and_argvars_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp(2);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r9))
		continue;
	MR_proceed();
	}
	break; } /* end while */
MR_def_label(ll_backend__unify_gen__make_fields_and_argvars_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__unify_gen_module15)
	MR_init_entry1(ll_backend__unify_gen__generate_unify_args_2_7_0);
	MR_init_label5(ll_backend__unify_gen__generate_unify_args_2_7_0,42,10,11,43,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__generate_unify_args_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_unify_args_2_7_0_i42);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_unify_args_2_7_0_i43);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_unify_args_2_7_0_i43);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_unify_args_2_7_0_i43);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__unify_gen__generate_unify_args_2_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_unify_args_2_7_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_unify_args_2_7_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_unify_args_2_7_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_sv(3) = MR_ctfield(1, MR_r3, 1);
	MR_sv(4) = MR_ctfield(1, MR_r4, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_r4 = MR_ctfield(1, MR_r4, 0);
	MR_np_call_localret_ent(ll_backend__unify_gen__generate_sub_unify_7_0,
		ll_backend__unify_gen__generate_unify_args_2_7_0_i10);
MR_def_label(ll_backend__unify_gen__generate_unify_args_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(ll_backend__unify_gen__generate_unify_args_2_7_0,
		ll_backend__unify_gen__generate_unify_args_2_7_0_i11);
MR_def_label(ll_backend__unify_gen__generate_unify_args_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_unify_args_2_7_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__unify_gen__generate_unify_args_2_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__unify_gen__generate_unify_args_2_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__unify_gen_module16)
	MR_init_entry1(ll_backend__unify_gen__generate_unify_args_7_0);
	MR_init_label2(ll_backend__unify_gen__generate_unify_args_7_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__generate_unify_args_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ll_backend__unify_gen__generate_unify_args_2_7_0,
		ll_backend__unify_gen__generate_unify_args_7_0_i3);
MR_def_label(ll_backend__unify_gen__generate_unify_args_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_unify_args_7_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__unify_gen__generate_unify_args_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_gen.m", 11);
	MR_r2 = (MR_Word) MR_string_const("generate_unify_args: length mismatch", 36);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_reserved_address_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
MR_decl_entry(fn__list__foldr_3_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module17)
	MR_init_entry1(ll_backend__unify_gen__generate_tag_test_rval_2_3_0);
	MR_init_label8(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,4,6,7,8,9,57,11,58)
	MR_init_label8(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,14,59,17,60,20,61,23,62)
	MR_init_label8(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,26,28,29,30,63,32,64,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__generate_tag_test_rval_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i8));
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,2);
	MR_proceed();
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 15);
	MR_tfield(3, MR_r1, 2) = MR_r2;
	MR_tfield(3, MR_r1, 3) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(2, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 30);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i58) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i60) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i61) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i62) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i29) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i63) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i64));
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 12);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ll_backend__unify_gen__this_file_0_0,
		ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i11);
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Attempted higher-order unification", 34);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ll_backend__unify_gen__this_file_0_0,
		ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i14);
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Attempted type_ctor_info unification", 36);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ll_backend__unify_gen__this_file_0_0,
		ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i17);
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Attempted base_typeclass_info unification", 41);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ll_backend__unify_gen__this_file_0_0,
		ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i20);
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Attempted tabling_info unification", 34);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ll_backend__unify_gen__this_file_0_0,
		ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i23);
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Attempted deep_profiling_proc_layout_tag unification", 52);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ll_backend__unify_gen__this_file_0_0,
		ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i26);
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Attempted table_io_decl_tag unification", 39);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 12);
	MR_tfield(3, MR_r1, 2) = MR_tempr1;
	MR_tfield(3, MR_r1, 3) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tempr6 = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 12);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr4;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr6;
	MR_tfield(3, MR_tempr2, 3) = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 12);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr5;
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 10);
	MR_tfield(3, MR_r1, 2) = MR_tempr3;
	MR_tfield(3, MR_r1, 3) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr2, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(2, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 12);
	MR_tfield(3, MR_r1, 2) = MR_r2;
	MR_tfield(3, MR_r1, 3) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__unify_gen__generate_reserved_address_1_0,
		ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i32);
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 12);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ll_backend__unify_gen__IntroducedFrom__func__generate_tag_test_rval_2__334__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	}
	MR_np_localcall_lab(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,
		ll_backend__unify_gen__generate_tag_test_rval_2_3_0_i34);
MR_def_label(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, reserved_address);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__foldr_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__code_info__lookup_type_defn_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);
MR_decl_entry(fn__ll_backend__code_info__variable_to_string_2_0);
MR_decl_entry(fn__hlds__hlds_out__cons_id_to_string_1_0);
MR_decl_entry(fn__ll_backend__code_info__cons_id_to_tag_for_var_3_0);
MR_decl_entry(ll_backend__code_util__neg_rval_2_0);
MR_decl_entry(ll_backend__code_info__get_next_label_3_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module18)
	MR_init_entry1(ll_backend__unify_gen__generate_tag_test_7_0);
	MR_init_label8(ll_backend__unify_gen__generate_tag_test_7_0,2,5,6,7,10,14,11,12)
	MR_init_label8(ll_backend__unify_gen__generate_tag_test_7_0,24,8,3,32,33,34,37,38)
	MR_init_label8(ll_backend__unify_gen__generate_tag_test_7_0,36,40,41,42,43,44,46,47)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__unify_gen__generate_tag_test_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__unify_gen__generate_tag_test_7_0_i2);
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_tag_test_7_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 1);
	if (MR_INT_LE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_tag_test_7_0_i3);
	}
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(8) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_type_2_0,
		ll_backend__unify_gen__generate_tag_test_7_0_i5);
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__ll_backend__code_info__lookup_type_defn_2_0,
		ll_backend__unify_gen__generate_tag_test_7_0_i6);
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		ll_backend__unify_gen__generate_tag_test_7_0_i7);
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_tag_test_7_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ll_backend__unify_gen__generate_tag_test_7_0_i10);
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_tag_test_7_0_i12);
	}
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(0, MR_ctfield(1, MR_sv(6), 0), 0);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		ll_backend__unify_gen__generate_tag_test_7_0_i14);
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_tag_test_7_0_i11);
	}
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_tag_test_7_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(7);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_tag_test_7_0_i11);
	}
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_tempr2, 0), 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_tag_test_7_0_i11);
	}
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_tag_test_7_0_i11);
	}
	MR_tag_alloc_heap(MR_sv(6), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(6), 0) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(ll_backend__unify_gen__generate_tag_test_7_0_i32);
	}
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_tag_test_7_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_tag_test_7_0_i8);
	}
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		ll_backend__unify_gen__generate_tag_test_7_0_i24);
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_tag_test_7_0_i8);
	}
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_tag_test_7_0_i8);
	}
	if (MR_PTAG_TESTR(MR_sv(7),1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_tag_test_7_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_tag_test_7_0_i8);
	}
	MR_tag_alloc_heap(MR_sv(6), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(6), 0) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(ll_backend__unify_gen__generate_tag_test_7_0_i32);
	}
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(ll_backend__unify_gen__generate_tag_test_7_0_i32);
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(4) = MR_r1;
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r3;
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_to_string_2_0,
		ll_backend__unify_gen__generate_tag_test_7_0_i33);
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_out__cons_id_to_string_1_0,
		ll_backend__unify_gen__generate_tag_test_7_0_i34);
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_tag_test_7_0_i36);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" has functor ", 13);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("checking that ", 14);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		ll_backend__unify_gen__generate_tag_test_7_0_i37);
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__cons_id_to_tag_for_var_3_0,
		ll_backend__unify_gen__generate_tag_test_7_0_i38);
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,
		ll_backend__unify_gen__generate_tag_test_7_0_i43);
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" has functor ", 13);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("checking that ", 14);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(1, MR_sv(6), 0);
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		ll_backend__unify_gen__generate_tag_test_7_0_i40);
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__cons_id_to_tag_for_var_3_0,
		ll_backend__unify_gen__generate_tag_test_7_0_i41);
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,
		ll_backend__unify_gen__generate_tag_test_7_0_i42);
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_util__neg_rval_2_0,
		ll_backend__unify_gen__generate_tag_test_7_0_i43);
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__unify_gen__generate_tag_test_7_0_i44);
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_tag_test_7_0_i46);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("tag test", 8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr3, 1) = MR_tempr2;
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r2;
	}
	MR_np_call_localret_ent(ll_backend__code_util__neg_rval_2_0,
		ll_backend__unify_gen__generate_tag_test_7_0_i47);
MR_def_label(ll_backend__unify_gen__generate_tag_test_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("tag test", 8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(2, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr4, 1) = MR_tempr2;
	MR_r1 = MR_tempr5;
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__remember_position_2_0);
MR_decl_entry(ll_backend__code_info__generate_failure_3_0);
MR_decl_entry(ll_backend__code_info__reset_to_position_3_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module19)
	MR_init_entry1(ll_backend__unify_gen__generate_semi_deconstruction_7_0);
	MR_init_label6(ll_backend__unify_gen__generate_semi_deconstruction_7_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__generate_semi_deconstruction_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(ll_backend__unify_gen__generate_tag_test_7_0,
		ll_backend__unify_gen__generate_semi_deconstruction_7_0_i2);
MR_def_label(ll_backend__unify_gen__generate_semi_deconstruction_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__unify_gen__generate_semi_deconstruction_7_0_i3);
MR_def_label(ll_backend__unify_gen__generate_semi_deconstruction_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__generate_failure_3_0,
		ll_backend__unify_gen__generate_semi_deconstruction_7_0_i4);
MR_def_label(ll_backend__unify_gen__generate_semi_deconstruction_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__unify_gen__generate_semi_deconstruction_7_0_i5);
MR_def_label(ll_backend__unify_gen__generate_semi_deconstruction_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__ll_backend__code_info__cons_id_to_tag_for_var_3_0,
		ll_backend__unify_gen__generate_semi_deconstruction_7_0_i6);
MR_def_label(ll_backend__unify_gen__generate_semi_deconstruction_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,
		ll_backend__unify_gen__generate_semi_deconstruction_7_0_i7);
MR_def_label(ll_backend__unify_gen__generate_semi_deconstruction_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__unify_gen_module20)
	MR_init_entry1(ll_backend__unify_gen__generate_unification_6_0);
	MR_init_label8(ll_backend__unify_gen__generate_unification_6_0,2,5,8,10,9,16,14,13)
	MR_init_label8(ll_backend__unify_gen__generate_unification_6_0,20,19,21,24,27,25,31,34)
	MR_init_label7(ll_backend__unify_gen__generate_unification_6_0,38,40,37,32,43,45,44)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__unify_gen__generate_unification_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_unification_6_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unify_gen.m", 11);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("nondet unification in generate_unification", 42);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__unify_gen__generate_unification_6_0_i5);
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_r4;
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ll_backend__unify_gen__generate_unification_6_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_unification_6_0_i24) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_unification_6_0_i31) MR_AND
		MR_LABEL_AP(ll_backend__unify_gen__generate_unification_6_0_i43));
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_ctfield(0, MR_tempr1, 6);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_unification_6_0_i10);
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__unify_gen__generate_unification_6_0_i9);
	}
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr2 = MR_r4;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 1);
	}
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__variable_is_forward_live_2_0,
		ll_backend__unify_gen__generate_unification_6_0_i16);
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_unification_6_0_i14);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(ll_backend__unify_gen__generate_unification_6_0_i13);
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(8);
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_unification_6_0_i40);
	}
	MR_r3 = MR_sv(3);
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_unification_6_0_i20);
	}
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__unify_gen__generate_unification_6_0_i19);
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(1, MR_sv(6), 0);
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__code_info__cons_id_to_tag_for_var_3_0,
		ll_backend__unify_gen__generate_unification_6_0_i21);
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__unify_gen__generate_construction_2_10_0);
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 3);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 2);
	MR_r4 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r5 = MR_tempr1;
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_unification_6_0_i25);
	}
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__cons_id_to_tag_for_var_3_0,
		ll_backend__unify_gen__generate_unification_6_0_i27);
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0);
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__unify_gen__generate_semi_deconstruction_7_0);
	}
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(8) = MR_r1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__code_info__variable_is_forward_live_2_0,
		ll_backend__unify_gen__generate_unification_6_0_i34);
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_unification_6_0_i32);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__code_info__variable_is_forward_live_2_0,
		ll_backend__unify_gen__generate_unification_6_0_i38);
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_unification_6_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__assign_var_to_var_4_0,
		ll_backend__unify_gen__generate_unification_6_0_i40);
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_unification_6_0_i44);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_ctfield(3, MR_tempr1, 2);
	MR_r5 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__unify_gen__generate_unification_6_0_i45);
	}
	MR_r1 = (MR_Word) MR_string_const("unify_gen.m", 11);
	MR_r2 = (MR_Word) MR_string_const("det simple_test during code generation", 38);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
	}
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_r4;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__unify_gen__generate_test_5_0);
MR_def_label(ll_backend__unify_gen__generate_unification_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_gen.m", 11);
	MR_r2 = (MR_Word) MR_string_const("complicated unify during code generation", 40);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__unify_gen_module21)
	MR_init_entry1(__Unify___ll_backend__unify_gen__test_sense_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__unify_gen__test_sense_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module22)
	MR_init_entry1(__Compare___ll_backend__unify_gen__test_sense_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__unify_gen__test_sense_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(__Unify___ll_backend__llds__lval_0_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module23)
	MR_init_entry1(__Unify___ll_backend__unify_gen__uni_val_0_0);
	MR_init_label2(__Unify___ll_backend__unify_gen__uni_val_0_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__unify_gen__uni_val_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__unify_gen__uni_val_0_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__unify_gen__uni_val_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
	}
MR_def_label(__Unify___ll_backend__unify_gen__uni_val_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__unify_gen__uni_val_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__lval_0_0);
MR_def_label(__Unify___ll_backend__unify_gen__uni_val_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);
MR_decl_entry(__Compare___ll_backend__llds__lval_0_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module24)
	MR_init_entry1(__Compare___ll_backend__unify_gen__uni_val_0_0);
	MR_init_label3(__Compare___ll_backend__unify_gen__uni_val_0_0,5,3,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__unify_gen__uni_val_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__unify_gen__uni_val_0_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__unify_gen__uni_val_0_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
	}
MR_def_label(__Compare___ll_backend__unify_gen__uni_val_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___ll_backend__unify_gen__uni_val_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__unify_gen__uni_val_0_0_i8);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___ll_backend__unify_gen__uni_val_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__lval_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__unify_gen_module25)
	MR_init_entry1(fn__ll_backend__unify_gen__IntroducedFrom__func__generate_tag_test_rval_2__334__1_3_0);
	MR_init_label1(fn__ll_backend__unify_gen__IntroducedFrom__func__generate_tag_test_rval_2__334__1_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__unify_gen__IntroducedFrom__func__generate_tag_test_rval_2__334__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__unify_gen__generate_tag_test_rval_2_3_0,
		fn__ll_backend__unify_gen__IntroducedFrom__func__generate_tag_test_rval_2__334__1_3_0_i2);
MR_def_label(fn__ll_backend__unify_gen__IntroducedFrom__func__generate_tag_test_rval_2__334__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 10);
	MR_tfield(3, MR_r1, 2) = MR_tempr1;
	MR_tfield(3, MR_r1, 3) = MR_sv(1);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module26)
	MR_init_entry1(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__450__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__450__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__unify_gen_module27)
	MR_init_entry1(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__472__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__472__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__unify_gen_module28)
	MR_init_entry1(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__512__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__512__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_term_size_value_0;
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module29)
	MR_init_entry1(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__514__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__514__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, term_size_value);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__unify_gen_module30)
	MR_init_entry1(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__499__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__499__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__unify_gen_module31)
	MR_init_entry1(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__489__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__489__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__unify_gen_module32)
	MR_init_entry1(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__460__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__460__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__unify_gen_module33)
	MR_init_entry1(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__440__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__440__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__pair__fst_1_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module34)
	MR_init_entry1(fn__ll_backend__unify_gen__IntroducedFrom__func__construct_cell__852__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__unify_gen__IntroducedFrom__func__construct_cell__852__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_tailcall_ent(fn__pair__fst_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__code_model__proc_info_interface_code_model_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__code_model__determinism_to_code_model_2_0);
MR_decl_entry(ll_backend__code_info__acquire_reg_4_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(ll_backend__code_info__release_reg_3_0);
MR_decl_entry(fn__ll_backend__code_info__make_proc_entry_label_5_0);
MR_decl_entry(fn__ll_backend__code_util__extract_proc_label_from_code_addr_1_0);
MR_decl_entry(ll_backend__continuation_info__generate_closure_layout_4_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_context_2_0);
MR_decl_entry(term__context_file_2_0);
MR_decl_entry(term__context_line_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_goal_path_2_0);
MR_decl_entry(fn__mdbcomp__program_representation__goal_path_to_string_1_0);
MR_decl_entry(ll_backend__code_info__get_cur_proc_label_2_0);
MR_decl_entry(ll_backend__code_info__get_next_closure_seq_no_3_0);
MR_decl_entry(ll_backend__code_info__get_static_cell_info_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(ll_backend__stack_layout__construct_closure_layout_13_0);
MR_decl_entry(ll_backend__code_info__set_static_cell_info_3_0);
MR_decl_entry(ll_backend__code_info__add_closure_layout_3_0);
MR_decl_entry(ll_backend__code_info__add_scalar_static_cell_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_arg_info_2_0);
MR_decl_entry(fn__ll_backend__code_info__get_var_types_1_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module35)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0);
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,2,3,4,5,6,7,8,9)
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,15,18,20,22,21,25,26,30)
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,29,31,32,33,34,35,36,37)
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,38,39,40,41,42,11,43,44)
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,45,46,47,48,49,50,51,52)
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,53,54,55,56,57,58,59,60)
	MR_init_label4(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,61,62,63,64)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0)
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
	MR_sv(14) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i2);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i3);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i4);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i5);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i6);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i7);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__code_model__proc_info_interface_code_model_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i9);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i11);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_sv(9), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i11);
	}
	MR_tempr3 = MR_sv(4);
	MR_sv(9) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(11) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(12) = MR_ctfield(1, MR_r1, 0);
	MR_sv(13) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(15) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_ctfield(1, MR_tempr2, 1);
	MR_r3 = MR_ctfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i15);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(15),0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i11);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_ctfield(0, MR_sv(15), 0);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i18);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i11);
	}
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i20);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(10) != MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i22);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i21);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),2)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i11);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i11);
	}
	MR_r1 = MR_sv(6);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i25);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 154;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i26);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i11);
	}
	if (MR_LTAGS_TESTR(MR_sv(11),0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i29);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(ll_backend__code_info__assign_var_to_var_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i30);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(18);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i31);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i32);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i33);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i34);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i35);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,1,1);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(3,1,4);
	MR_sv(13) = MR_r2;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(list__length_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i36);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = ((MR_Integer) MR_r1 + (MR_Integer) 3);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr3;
	MR_r1 = MR_sv(9);
	MR_sv(9) = MR_tempr2;
	MR_r2 = MR_sv(13);
	MR_sv(13) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i37);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15, MR_tempr16, MR_tempr17, MR_tempr18, MR_tempr19, MR_tempr20, MR_tempr21, MR_tempr22, MR_tempr23, MR_tempr24, MR_tempr25, MR_tempr26, MR_tempr27, MR_tempr28, MR_tempr29, MR_tempr30, MR_tempr31, MR_tempr32, MR_tempr33, MR_tempr34, MR_tempr35, MR_tempr36, MR_tempr37, MR_tempr38, MR_tempr39;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tempr30 = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr30;
	MR_tempr31 = MR_sv(10);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr31;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tempr32 = MR_sv(5);
	MR_tfield(3, MR_tempr3, 1) = MR_tempr32;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("get number of arguments", 23);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr32;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr5, 2) = MR_tempr4;
	MR_tfield(3, MR_tempr5, 3) = MR_sv(13);
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 11;
	MR_tempr33 = MR_sv(6);
	MR_tfield(3, MR_tempr6, 1) = MR_tempr33;
	MR_tfield(3, MR_tempr6, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr6, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr6, 4) = MR_tempr5;
	MR_tfield(3, MR_tempr6, 5) = (MR_Word) MR_string_const("closure", 7);
	MR_tfield(3, MR_tempr6, 6) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr7, 1) = (MR_Word) MR_string_const("allocate new closure", 20);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr8, 0) = MR_tempr33;
	MR_tag_alloc_heap(MR_tempr9, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr9, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr9, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tfield(3, MR_tempr9, 2) = MR_tempr8;
	MR_tempr34 = MR_sv(7);
	MR_tfield(3, MR_tempr9, 3) = MR_tempr34;
	MR_tag_alloc_heap(MR_tempr10, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr10, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr10, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tfield(3, MR_tempr10, 2) = MR_tempr30;
	MR_tfield(3, MR_tempr10, 3) = MR_tempr34;
	MR_tag_alloc_heap(MR_tempr11, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr11, 0) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr12, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr12, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr12, 1) = MR_tempr9;
	MR_tfield(3, MR_tempr12, 2) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr11, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr11, 0) = MR_tempr12;
	MR_tfield(0, MR_tempr11, 1) = (MR_Word) MR_string_const("set closure layout structure", 28);
	MR_tag_alloc_heap(MR_tempr12, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr12, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr12, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tfield(3, MR_tempr12, 2) = MR_tempr8;
	MR_tempr35 = MR_sv(8);
	MR_tfield(3, MR_tempr12, 3) = MR_tempr35;
	MR_tag_alloc_heap(MR_tempr13, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr13, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr13, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tfield(3, MR_tempr13, 2) = MR_tempr30;
	MR_tfield(3, MR_tempr13, 3) = MR_tempr35;
	MR_tag_alloc_heap(MR_tempr14, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr14, 0) = MR_tempr13;
	MR_tag_alloc_heap(MR_tempr15, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr15, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr15, 1) = MR_tempr12;
	MR_tfield(3, MR_tempr15, 2) = MR_tempr14;
	MR_tag_alloc_heap(MR_tempr14, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr14, 0) = MR_tempr15;
	MR_tfield(0, MR_tempr14, 1) = (MR_Word) MR_string_const("set closure code pointer", 24);
	MR_tag_alloc_heap(MR_tempr15, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr15, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr15, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tfield(3, MR_tempr15, 2) = MR_tempr8;
	MR_tfield(3, MR_tempr15, 3) = MR_tempr31;
	MR_tag_alloc_heap(MR_tempr16, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr16, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr16, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr16, 2) = MR_tempr4;
	MR_tfield(3, MR_tempr16, 3) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr17, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr17, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr17, 1) = MR_tempr15;
	MR_tfield(3, MR_tempr17, 2) = MR_tempr16;
	MR_tag_alloc_heap(MR_tempr18, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr18, 0) = MR_tempr17;
	MR_tfield(0, MR_tempr18, 1) = (MR_Word) MR_string_const("set new number of arguments", 27);
	MR_tag_alloc_heap(MR_tempr17, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr17, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr17, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr17, 2) = MR_tempr4;
	MR_tempr36 = MR_sv(12);
	MR_tfield(3, MR_tempr17, 3) = MR_tempr36;
	MR_tag_alloc_heap(MR_tempr19, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr19, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr19, 1) = MR_tempr32;
	MR_tfield(3, MR_tempr19, 2) = MR_tempr17;
	MR_tag_alloc_heap(MR_tempr20, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr20, 0) = MR_tempr19;
	MR_tfield(0, MR_tempr20, 1) = (MR_Word) MR_string_const("set up loop limit", 17);
	MR_tag_alloc_heap(MR_tempr21, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr21, 0) = (MR_Integer) 1;
	MR_tempr37 = MR_sv(4);
	MR_tfield(3, MR_tempr21, 1) = MR_tempr37;
	MR_tfield(3, MR_tempr21, 2) = MR_tempr36;
	MR_tag_alloc_heap(MR_tempr22, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr22, 0) = MR_tempr21;
	MR_tfield(0, MR_tempr22, 1) = (MR_Word) MR_string_const("initialize loop counter", 23);
	MR_tag_alloc_heap(MR_tempr23, 1, (MR_Integer) 1);
	MR_tempr38 = MR_sv(2);
	MR_tfield(1, MR_tempr23, 0) = MR_tempr38;
	MR_tag_alloc_heap(MR_tempr24, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr24, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr24, 1) = MR_tempr23;
	MR_tag_alloc_heap(MR_tempr25, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr25, 0) = MR_tempr24;
	MR_tfield(0, MR_tempr25, 1) = (MR_Word) MR_string_const("enter the copy loop at the conceptual top", 41);
	MR_tag_alloc_heap(MR_tempr24, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr24, 0) = (MR_Integer) 4;
	MR_tempr39 = MR_sv(1);
	MR_tfield(3, MR_tempr24, 1) = MR_tempr39;
	MR_tag_alloc_heap(MR_tempr26, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr26, 0) = MR_tempr24;
	MR_tfield(0, MR_tempr26, 1) = (MR_Word) MR_string_const("start of loop", 13);
	MR_tag_alloc_heap(MR_tempr27, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr27, 0) = MR_tempr37;
	MR_tag_alloc_heap(MR_tempr28, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr28, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr28, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tfield(3, MR_tempr28, 2) = MR_tempr8;
	MR_tfield(3, MR_tempr28, 3) = MR_tempr27;
	MR_tag_alloc_heap(MR_tempr29, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr29, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr29, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tfield(3, MR_tempr29, 2) = MR_tempr30;
	MR_tfield(3, MR_tempr29, 3) = MR_tempr27;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr29;
	MR_tag_alloc_heap(MR_tempr9, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr9, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr9, 1) = MR_tempr28;
	MR_tfield(3, MR_tempr9, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr9;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("copy old hidden argument", 24);
	MR_tag_alloc_heap(MR_tempr9, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr9, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr9, 2) = MR_tempr27;
	MR_tfield(3, MR_tempr9, 3) = MR_tempr35;
	MR_tag_alloc_heap(MR_tempr10, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr10, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr10, 1) = MR_tempr37;
	MR_tfield(3, MR_tempr10, 2) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr12, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr12, 0) = MR_tempr10;
	MR_tfield(0, MR_tempr12, 1) = (MR_Word) MR_string_const("increment loop counter", 22);
	MR_tag_alloc_heap(MR_tempr13, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr13, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr13, 1) = MR_tempr38;
	MR_tag_alloc_heap(MR_tempr15, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr15, 0) = MR_tempr13;
	MR_tfield(0, MR_tempr15, 1) = (MR_Word) MR_string_const("do we have more old arguments to copy?", 38);
	MR_tag_alloc_heap(MR_tempr13, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr13, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr13, 1) = (MR_Word) MR_tbmkword(0, 21);
	MR_tfield(3, MR_tempr13, 2) = MR_tempr27;
	MR_tfield(3, MR_tempr13, 3) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr39;
	MR_tag_alloc_heap(MR_tempr9, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr9, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr9, 1) = MR_tempr13;
	MR_tfield(3, MR_tempr9, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr9;
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_string_const("repeat the loop?", 16);
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr15;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr12;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr26;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr25;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr22;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr20;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr18;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr14;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(0,11,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr37;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr33;
	}
	MR_np_call_localret_ent(ll_backend__unify_gen__generate_extra_closure_args_6_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i38);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i39);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i40);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i41);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__code_info__assign_lval_to_var_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i42);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(18);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ll_backend__code_info__make_proc_entry_label_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i43);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__code_util__extract_proc_label_from_code_addr_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i44);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__continuation_info__generate_closure_layout_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i45);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i46);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i47);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i48);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_sv(11) = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i49);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_goal_path_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i50);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i51);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(ll_backend__code_info__get_cur_proc_label_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i52);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(ll_backend__code_info__get_next_closure_seq_no_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i53);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(15) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_static_cell_info_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i54);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i55);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r9 = MR_sv(12);
	MR_r10 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__stack_layout__construct_closure_layout_13_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i56);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(ll_backend__code_info__set_static_cell_info_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i57);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_info__add_closure_layout_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i58);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__code_info__add_scalar_static_cell_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i59);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_sv(9) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__length_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i60);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_arg_info_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i61);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__ll_backend__code_info__get_var_types_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i62);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__ll_backend__unify_gen__initial_may_use_atomic_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i63);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__unify_gen__generate_pred_args_7_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0_i64);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_r1 = MR_sv(3);
	MR_r8 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_string_const("closure", 7);
	MR_r9 = MR_sv(9);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(ll_backend__code_info__assign_cell_to_var_11_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__type_util__is_dummy_argument_type_2_0);

MR_BEGIN_MODULE(ll_backend__unify_gen_module36)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0);
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,4,5,12,13,16,20,22,19)
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,15,24,7,31,38,40,41,42)
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,43,46,47,48,49,50,53,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i4) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i53) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i53) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i31));
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r4),0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i5);
	}
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_succip_word = MR_sv(6);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i4) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i53) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i53) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i31));
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i7);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i7);
	}
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_r5;
	MR_sv(5) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_type_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i12);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i16);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i15);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_info__variable_is_forward_live_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i20);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i19);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_info__assign_const_to_var_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i22);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_type_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i24);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ll_backend__unify_gen__generate_sub_unify_7_0);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_gen.m", 11);
	MR_r2 = (MR_Word) MR_string_const("generate_det_deconstruction: no_tag: arity != 1", 47);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i53) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i53) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i53) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i53) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i53) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i53) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i38) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i40) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i46) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i53) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i53) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i54));
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_gen.m", 11);
	MR_r2 = (MR_Word) MR_string_const("generate_det_deconstruction: table_io_decl_tag", 46);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_ctfield(3, MR_r4, 1);
	}
	MR_np_call_localret_ent(ll_backend__unify_gen__make_fields_and_argvars_6_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i41);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_info_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i42);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i43);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i50);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_ctfield(3, MR_r4, 1);
	}
	MR_np_call_localret_ent(ll_backend__unify_gen__make_fields_and_argvars_6_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i47);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_info_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i48);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i49);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i50);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ll_backend__unify_gen__generate_unify_args_7_0);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(6);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(3, MR_r4, 2);
	MR_succip_word = MR_sv(6);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i4) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i53) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i53) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_117_110_105_102_121_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_8_0_i31));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__unify_gen_maybe_bunch_0(void)
{
	ll_backend__unify_gen_module0();
	ll_backend__unify_gen_module1();
	ll_backend__unify_gen_module2();
	ll_backend__unify_gen_module3();
	ll_backend__unify_gen_module4();
	ll_backend__unify_gen_module5();
	ll_backend__unify_gen_module6();
	ll_backend__unify_gen_module7();
	ll_backend__unify_gen_module8();
	ll_backend__unify_gen_module9();
	ll_backend__unify_gen_module10();
	ll_backend__unify_gen_module11();
	ll_backend__unify_gen_module12();
	ll_backend__unify_gen_module13();
	ll_backend__unify_gen_module14();
	ll_backend__unify_gen_module15();
	ll_backend__unify_gen_module16();
	ll_backend__unify_gen_module17();
	ll_backend__unify_gen_module18();
	ll_backend__unify_gen_module19();
	ll_backend__unify_gen_module20();
	ll_backend__unify_gen_module21();
	ll_backend__unify_gen_module22();
	ll_backend__unify_gen_module23();
	ll_backend__unify_gen_module24();
	ll_backend__unify_gen_module25();
	ll_backend__unify_gen_module26();
	ll_backend__unify_gen_module27();
	ll_backend__unify_gen_module28();
	ll_backend__unify_gen_module29();
	ll_backend__unify_gen_module30();
	ll_backend__unify_gen_module31();
	ll_backend__unify_gen_module32();
	ll_backend__unify_gen_module33();
	ll_backend__unify_gen_module34();
	ll_backend__unify_gen_module35();
	ll_backend__unify_gen_module36();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__unify_gen__init(void);
void mercury__ll_backend__unify_gen__init_type_tables(void);
void mercury__ll_backend__unify_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__unify_gen__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__unify_gen__init_complexity_procs(void);
#endif

void mercury__ll_backend__unify_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__unify_gen_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__unify_gen__type_ctor_info_uni_val_0,
		ll_backend__unify_gen__uni_val_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__unify_gen__type_ctor_info_test_sense_0,
		ll_backend__unify_gen__test_sense_0_0);
	mercury__ll_backend__unify_gen__init_debugger();
}

void mercury__ll_backend__unify_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__unify_gen__type_ctor_info_uni_val_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__unify_gen__type_ctor_info_test_sense_0);
	}
}


void mercury__ll_backend__unify_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__unify_gen__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__unify_gen__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
