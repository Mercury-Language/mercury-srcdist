/*
** Automatically generated from `mode_robdd.implications.m'
** by the Mercury compiler,
** version rotd-2009-10-23, configured for i686-pc-linux-gnu.
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
INIT mercury__mode_robdd__implications__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "mode_robdd.implications.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "mode_robdd.implications.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "mode_robdd.implications.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "mode_robdd.implications.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "mode_robdd.implications.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "mode_robdd.implications.c"
#line 48 "mode_robdd.implications.c"
#include "mode_robdd.implications.mh"

#line 51 "mode_robdd.implications.c"
#line 52 "mode_robdd.implications.c"
#ifndef MODE_ROBDD__IMPLICATIONS_DECL_GUARD
#define MODE_ROBDD__IMPLICATIONS_DECL_GUARD

#line 56 "mode_robdd.implications.c"
#line 57 "mode_robdd.implications.c"

#endif
#line 60 "mode_robdd.implications.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mode_robdd__implications__type_ctor_info_bin_clause_1,
	mercury_data_mode_robdd__implications__type_ctor_info_extract_0,
	mercury_data_mode_robdd__implications__type_ctor_info_mklit_1;
MR_decl_label5(mode_robdd__implications__empty_1_0, 4,6,8,10,1)
MR_decl_label6(mode_robdd__implications__extract_implication_vars_from_robdd_5_0, 2,3,4,7,9,5)
MR_decl_label10(mode_robdd__implications__normalise_pairs_6_0, 2,6,3,12,14,15,9,19,20,21)
MR_decl_label1(mode_robdd__implications__normalise_pairs_6_0, 22)
MR_decl_label1(mode_robdd__implications__normalise_true_false_imp_map_8_0, 8)
MR_decl_label10(mode_robdd__implications__normalise_true_false_implication_vars_7_0, 4,6,2,8,9,10,11,12,13,14)
MR_decl_label10(mode_robdd__implications__normalise_true_false_implication_vars_7_0, 15,17,18,19,20,21,22,23,26,24)
MR_decl_label7(mode_robdd__implications__propagate_equivalences_into_disimplications_3_0, 2,9,11,14,13,6,1)
MR_decl_label5(mode_robdd__implications__propagate_equivalences_into_implications_4_0, 2,4,5,7,1)
MR_decl_label2(mode_robdd__implications__propagate_equivalences_into_implications_2_4_0, 7,9)
MR_decl_label6(mode_robdd__implications__propagate_implications_into_equivalences_5_0, 8,5,12,4,2,21)
MR_decl_label3(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0, 4,7,10)
MR_decl_label1(fn__mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__362__1_4_0, 2)
MR_decl_label2(fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__587__1_6_0, 2,3)
MR_decl_label4(fn__mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__477__1_5_0, 5,9,2,11)
MR_decl_label4(fn__mode_robdd__implications__IntroducedFrom__func__filter_imp_map__121__1_5_0, 4,8,2,13)
MR_decl_label4(fn__mode_robdd__implications__IntroducedFrom__func__imp_map_difference__454__1_4_0, 5,8,2,10)
MR_decl_label10(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0, 3,5,8,11,13,2,15,17,20,24)
MR_decl_label10(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0, 14,27,30,36,32,37,38,42,43,46)
MR_decl_label9(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0, 25,49,52,55,58,56,64,47,68)
MR_decl_label5(fn__mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_0, 5,6,10,7,12)
MR_decl_label10(fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0, 5,7,10,14,15,16,17,18,2,20)
MR_decl_label3(fn__mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__466__1_4_0, 4,2,9)
MR_decl_label2(fn__mode_robdd__implications__IntroducedFrom__func__restrict_threshold__99__1_3_0, 4,5)
MR_decl_label10(fn__mode_robdd__implications__add_clause_2_2_0, 6,9,5,12,15,3,20,23,19,26)
MR_decl_label3(fn__mode_robdd__implications__add_clause_2_2_0, 29,2,1)
MR_decl_label6(fn__mode_robdd__implications__add_clauses_2_0, 3,6,8,11,4,2)
MR_decl_label4(fn__mode_robdd__implications__apply_to_coresp_imp_maps_3_0, 2,3,4,5)
MR_decl_label4(fn__mode_robdd__implications__apply_to_imp_maps_2_0, 2,3,4,5)
MR_decl_label4(fn__mode_robdd__implications__at_most_one_of_2_0, 5,11,2,13)
MR_decl_label1(fn__mode_robdd__implications__delete_var_from_imp_map_2_0, 6)
MR_decl_label2(fn__mode_robdd__implications__entry_2_0, 5,2)
MR_decl_label3(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_101_110_116_114_121_32_58_61_3_0, 4,2,12)
MR_decl_label10(fn__mode_robdd__implications__get_literals_2_0, 9,10,8,11,12,7,13,14,15,16)
MR_decl_label2(fn__mode_robdd__implications__get_resolvents_2_0, 4,5)
MR_decl_label1(fn__mode_robdd__implications__get_resolvents_2_3_0, 2)
MR_decl_label2(fn__mode_robdd__implications__imp_map_difference_2_0, 5,2)
MR_decl_label4(fn__mode_robdd__implications__init_imp_vars_0_0, 4,5,6,7)
MR_decl_label1(fn__mode_robdd__implications__intersect_2_0, 5)
MR_decl_label8(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0, 5,10,14,16,2,19,21,1)
MR_decl_label1(fn__mode_robdd__implications__neq_vars_3_0, 5)
MR_decl_label5(fn__mode_robdd__implications__restrict_threshold_2_3_0, 3,6,4,9,10)
MR_decl_label1(__Unify___mode_robdd__implications__bin_clause_1_0, 4)
MR_decl_label1(__Unify___mode_robdd__implications__mklit_1_0, 2)
MR_def_extern_entry(fn__mode_robdd__implications__init_imp_vars_0_0)
MR_def_extern_entry(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0)
MR_def_extern_entry(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_43_2_0)
MR_def_extern_entry(fn__mode_robdd__implications__difference_2_0)
MR_def_extern_entry(fn__mode_robdd__implications__delete_2_0)
MR_def_extern_entry(fn__mode_robdd__implications__restrict_threshold_2_0)
MR_def_extern_entry(fn__mode_robdd__implications__filter_2_0)
MR_def_extern_entry(fn__mode_robdd__implications__neq_vars_3_0)
MR_def_extern_entry(fn__mode_robdd__implications__imp_vars_3_0)
MR_def_extern_entry(fn__mode_robdd__implications__at_most_one_of_2_0)
MR_def_extern_entry(fn__mode_robdd__implications__not_both_3_0)
MR_def_extern_entry(fn__mode_robdd__implications__either_3_0)
MR_def_extern_entry(mode_robdd__implications__normalise_true_false_implication_vars_7_0)
MR_def_extern_entry(mode_robdd__implications__propagate_equivalences_into_implications_4_0)
MR_def_extern_entry(mode_robdd__implications__propagate_implications_into_equivalences_5_0)
MR_def_extern_entry(mode_robdd__implications__extract_implication_vars_from_robdd_5_0)
MR_def_extern_entry(fn__mode_robdd__implications__add_equalities_to_imp_vars_2_0)
MR_decl_static(fn__mode_robdd__implications__restrict_threshold_2_3_0)
MR_decl_static(fn__mode_robdd__implications__filter_imp_map_2_0)
MR_decl_static(mode_robdd__implications__normalise_true_false_imp_map_8_0)
MR_decl_static(mode_robdd__implications__normalise_pairs_6_0)
MR_decl_static(mode_robdd__implications__propagate_equivalences_into_implications_2_4_0)
MR_decl_static(mode_robdd__implications__propagate_equivalences_into_disimplications_3_0)
MR_decl_static(fn__mode_robdd__implications__entry_2_0)
MR_decl_static(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_101_110_116_114_121_32_58_61_3_0)
MR_decl_static(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0)
MR_decl_static(mode_robdd__implications__empty_1_0)
MR_decl_static(fn__mode_robdd__implications__apply_to_imp_maps_2_0)
MR_decl_static(fn__mode_robdd__implications__apply_to_coresp_imp_maps_3_0)
MR_decl_static(fn__mode_robdd__implications__intersect_2_0)
MR_decl_static(fn__mode_robdd__implications__imp_map_difference_2_0)
MR_decl_static(fn__mode_robdd__implications__remove_empty_sets_1_0)
MR_decl_static(fn__mode_robdd__implications__delete_var_from_imp_map_2_0)
MR_decl_static(fn__mode_robdd__implications__mkpos_1_0)
MR_decl_static(fn__mode_robdd__implications__mkneg_1_0)
MR_decl_static(fn__mode_robdd__implications__add_clause_2_0)
MR_decl_static(fn__mode_robdd__implications__add_clauses_2_0)
MR_decl_static(fn__mode_robdd__implications__add_clause_2_2_0)
MR_decl_static(fn__mode_robdd__implications__get_resolvents_2_0)
MR_decl_static(fn__mode_robdd__implications__get_resolvents_2_3_0)
MR_decl_static(fn__mode_robdd__implications__get_literals_2_0)
MR_decl_static(fn__mode_robdd__implications__add_imp_map_clauses_4_0)
MR_decl_static(__Unify___mode_robdd__implications__bin_clause_1_0)
MR_decl_static(__Compare___mode_robdd__implications__bin_clause_1_0)
MR_decl_static(__Unify___mode_robdd__implications__extract_0_0)
MR_decl_static(__Compare___mode_robdd__implications__extract_0_0)
MR_decl_static(__Unify___mode_robdd__implications__mklit_1_0)
MR_decl_static(__Compare___mode_robdd__implications__mklit_1_0)
MR_decl_static(fn__mode_robdd__implications__IntroducedFrom__func__restrict_threshold__99__1_3_0)
MR_decl_static(fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0)
MR_decl_static(fn__mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__362__1_4_0)
MR_decl_static(fn__mode_robdd__implications__IntroducedFrom__func__filter_imp_map__121__1_5_0)
MR_decl_static(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0)
MR_decl_static(fn__mode_robdd__implications__IntroducedFrom__func__normalise_pairs__261__1_3_0)
MR_decl_static(fn__mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_0)
MR_decl_static(fn__mode_robdd__implications__IntroducedFrom__func__intersect__446__1_3_0)
MR_decl_static(fn__mode_robdd__implications__IntroducedFrom__func__imp_map_difference__454__1_4_0)
MR_decl_static(fn__mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__466__1_4_0)
MR_decl_static(fn__mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__477__1_5_0)
MR_decl_static(fn__mode_robdd__implications__IntroducedFrom__func__get_resolvents_2__565__1_3_0)
MR_decl_static(fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__587__1_6_0)
MR_decl_static(fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__586__1_6_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_robdd__type_ctor_info_literal_1;
extern const MR_TypeCtorInfo_Struct mercury_data_robdd__type_ctor_info_imp_vars_1;
extern const MR_TypeCtorInfo_Struct mercury_data_robdd__type_ctor_info_equiv_vars_1;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
MR_CTOR1_ADDR(term, var),
1
},
{
MR_CTOR1_ADDR(robdd, literal),
1
},
{
MR_CTOR1_ADDR(robdd, imp_vars),
1
},
{
MR_CTOR1_ADDR(robdd, equiv_vars),
1
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
1,
17
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__get_literals_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__get_literals_2_0_2;
static const struct mercury_type_2 mercury_common_2[10] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_1,
MR_COMMON(1,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_2,
MR_COMMON(1,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_3,
MR_COMMON(1,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_4,
MR_COMMON(1,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_5,
MR_COMMON(1,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_6,
MR_COMMON(1,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_7,
MR_COMMON(1,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_8,
MR_COMMON(1,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mode_robdd__implications__get_literals_2_0_1,
MR_COMMON(1,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mode_robdd__implications__get_literals_2_0_2,
MR_COMMON(1,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_COMMON(0,1)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_sparse_bitset__type_ctor_info_sparse_bitset_1;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
MR_CTOR1_ADDR(sparse_bitset, sparse_bitset),
MR_COMMON(0,0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,0),
MR_COMMON(3,0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_43_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__difference_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__delete_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__restrict_threshold_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__filter_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mode_robdd__implications__normalise_pairs_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__intersect_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__get_resolvents_2_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_0_1;
static const struct mercury_type_5 mercury_common_5[9] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_43_2_0_1,
MR_COMMON(1,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(4,0),
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mode_robdd__implications__difference_2_0_1,
MR_COMMON(1,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(4,0),
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mode_robdd__implications__delete_2_0_1,
MR_COMMON(1,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mode_robdd__implications__restrict_threshold_2_0_1,
MR_COMMON(1,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mode_robdd__implications__filter_2_0_1,
MR_COMMON(1,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(6,0),
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mode_robdd__implications__normalise_pairs_6_0_1,
MR_COMMON(1,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(3,0),
MR_COMMON(3,0),
MR_COMMON(3,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mode_robdd__implications__intersect_2_0_1,
MR_COMMON(1,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(3,0),
MR_COMMON(3,0),
MR_COMMON(3,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mode_robdd__implications__get_resolvents_2_3_0_1,
MR_COMMON(1,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(10,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_0_1,
MR_COMMON(1,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,3),
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
1,
MR_COMMON(0,0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__at_most_one_of_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mode_robdd__implications__propagate_implications_into_equivalences_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__add_equalities_to_imp_vars_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__imp_map_difference_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__remove_empty_sets_1_0_1;
static const struct mercury_type_7 mercury_common_7[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mode_robdd__implications__at_most_one_of_2_0_1,
MR_COMMON(1,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_COMMON(0,0),
MR_COMMON(0,2),
MR_COMMON(0,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mode_robdd__implications__propagate_implications_into_equivalences_5_0_1,
MR_COMMON(1,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_COMMON(3,0),
MR_COMMON(8,0),
MR_COMMON(8,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mode_robdd__implications__add_equalities_to_imp_vars_2_0_1,
MR_COMMON(1,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_COMMON(0,0),
MR_COMMON(0,2),
MR_COMMON(0,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mode_robdd__implications__imp_map_difference_2_0_1,
MR_COMMON(1,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_COMMON(3,0),
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mode_robdd__implications__remove_empty_sets_1_0_1,
MR_COMMON(1,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_COMMON(3,0),
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_8 mercury_common_8[2] =
{
{
MR_CTOR0_ADDR(builtin, tuple),
4,
{
MR_BOOL_CTOR_ADDR,
MR_COMMON(0,3),
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
{
MR_CTOR0_ADDR(builtin, tuple),
4,
{
MR_COMMON(3,0),
MR_COMMON(3,0),
MR_COMMON(4,0),
MR_BOOL_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__filter_imp_map_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mode_robdd__implications__normalise_true_false_imp_map_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const MR_UserClosureId
mercury_data__closure_layout__mode_robdd__implications__propagate_equivalences_into_implications_2_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__delete_var_from_imp_map_2_0_1;
static const struct mercury_type_9 mercury_common_9[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mode_robdd__implications__filter_imp_map_2_0_1,
MR_COMMON(1,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(6,0),
MR_COMMON(0,0),
MR_COMMON(3,0),
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mode_robdd__implications__normalise_true_false_imp_map_8_0_1,
MR_COMMON(1,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_BOOL_CTOR_ADDR,
MR_COMMON(0,0),
MR_COMMON(3,0),
MR_COMMON(8,1),
MR_COMMON(8,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mode_robdd__implications__propagate_equivalences_into_implications_2_4_0_1,
MR_COMMON(1,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,3),
MR_COMMON(0,0),
MR_COMMON(3,0),
MR_COMMON(10,0),
MR_COMMON(10,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mode_robdd__implications__delete_var_from_imp_map_2_0_1,
MR_COMMON(1,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_COMMON(0,0),
MR_COMMON(3,0),
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;
static const struct mercury_type_10 mercury_common_10[3] =
{
{
MR_CTOR0_ADDR(builtin, tuple),
2,
MR_COMMON(4,0),
MR_BOOL_CTOR_ADDR
},
{
MR_CTOR0_ADDR(builtin, tuple),
2,
MR_COMMON(0,1),
MR_COMMON(0,1)
},
{
MR_CTOR0_ADDR(builtin, func),
2,
MR_COMMON(0,0),
MR_COMMON(0,1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__add_imp_map_clauses_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__586__1_6_0_1;
static const struct mercury_type_11 mercury_common_11[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mode_robdd__implications__add_imp_map_clauses_4_0_1,
MR_COMMON(1,0)
},
7,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,2),
MR_COMMON(10,2),
MR_COMMON(0,0),
MR_COMMON(3,0),
MR_COMMON(0,2),
MR_COMMON(0,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__586__1_6_0_1,
MR_COMMON(1,0)
},
7,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(10,2),
MR_COMMON(10,2),
MR_COMMON(0,0),
MR_COMMON(0,0),
MR_COMMON(0,2),
MR_COMMON(0,2)
}
},
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_robdd__pti_literal_1__pseudo_1 = {
	&mercury_data_robdd__type_ctor_info_literal_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_VA_PseudoTypeInfo_Struct2 mercury_data___vpti_tuple_2__pseudo_robdd__pti_literal_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1 = {
	&mercury_data_builtin__type_ctor_info_tuple_0,
	2,
{	(MR_PseudoTypeInfo) &mercury_data_robdd__pti_literal_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_robdd__pti_literal_1__pseudo_1
}};

const MR_TypeCtorInfo_Struct mercury_data_mode_robdd__implications__type_ctor_info_bin_clause_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mode_robdd__implications__bin_clause_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mode_robdd__implications__bin_clause_1_0)),
	"mode_robdd.implications",
	"bin_clause",
	{ 0 },
	{ (void *)&mercury_data___vpti_tuple_2__pseudo_robdd__pti_literal_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_mode_robdd__implications__enum_functor_desc_extract_0_0 = {
	"keys",
	0
};

static const MR_EnumFunctorDesc mercury_data_mode_robdd__implications__enum_functor_desc_extract_0_1 = {
	"values",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mode_robdd__implications__enum_value_ordered_extract_0[] = {
	&mercury_data_mode_robdd__implications__enum_functor_desc_extract_0_0,
	&mercury_data_mode_robdd__implications__enum_functor_desc_extract_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mode_robdd__implications__enum_name_ordered_extract_0[] = {
	&mercury_data_mode_robdd__implications__enum_functor_desc_extract_0_0,
	&mercury_data_mode_robdd__implications__enum_functor_desc_extract_0_1
};

const MR_Integer mercury_data_mode_robdd__implications__functor_number_map_extract_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mode_robdd__implications__type_ctor_info_extract_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mode_robdd__implications__extract_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mode_robdd__implications__extract_0_0)),
	"mode_robdd.implications",
	"extract",
	{ (void *)mercury_data_mode_robdd__implications__enum_name_ordered_extract_0 },
	{ (void *)mercury_data_mode_robdd__implications__enum_value_ordered_extract_0 },
	2,
	4,
	mercury_data_mode_robdd__implications__functor_number_map_extract_0
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_term__pti_var_1__pseudo_1 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_VA_PseudoTypeInfo_Struct2 mercury_data___vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1 = {
	&mercury_data_builtin__type_ctor_info_func_0,
	2,
{	(MR_PseudoTypeInfo) &mercury_data_term__pti_var_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_robdd__pti_literal_1__pseudo_1
}};

const MR_TypeCtorInfo_Struct mercury_data_mode_robdd__implications__type_ctor_info_mklit_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mode_robdd__implications__mklit_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mode_robdd__implications__mklit_1_0)),
	"mode_robdd.implications",
	"mklit",
	{ 0 },
	{ (void *)&mercury_data___vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__586__1_6_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"lambda_mode_robdd_implications_m_587",
7,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
587,
"d1;c6;q;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_0_1 = {
{
MR_PREDICATE,
"mode_robdd.equiv_vars",
"mode_robdd.equiv_vars",
"vars_are_not_equivalent",
3,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
289,
"d1;c7;q;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__add_imp_map_clauses_4_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"lambda_mode_robdd_implications_m_586",
7,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
586,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__get_literals_2_0_2 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"mkneg",
2,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
571,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__get_literals_2_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"mkpos",
2,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
570,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__get_resolvents_2_3_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"lambda_mode_robdd_implications_m_565",
4,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
565,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__delete_var_from_imp_map_2_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"lambda_mode_robdd_implications_m_477",
6,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
477,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__remove_empty_sets_1_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"lambda_mode_robdd_implications_m_466",
5,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
466,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__imp_map_difference_2_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"lambda_mode_robdd_implications_m_454",
5,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
454,
"d1;c3;e;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__intersect_2_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"lambda_mode_robdd_implications_m_446",
4,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
446,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mode_robdd__implications__propagate_equivalences_into_implications_2_4_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"lambda_mode_robdd_implications_m_287",
6,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
287,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mode_robdd__implications__normalise_pairs_6_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"lambda_mode_robdd_implications_m_261",
4,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
261,
"d1;c8;e;c2;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mode_robdd__implications__normalise_true_false_imp_map_8_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"lambda_mode_robdd_implications_m_198",
6,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
198,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__filter_imp_map_2_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"lambda_mode_robdd_implications_m_121",
6,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
121,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__add_equalities_to_imp_vars_2_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"lambda_mode_robdd_implications_m_362",
5,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
362,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mode_robdd__implications__propagate_implications_into_equivalences_5_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"lambda_mode_robdd_implications_m_317",
5,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
317,
"d1;c7;e;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__at_most_one_of_2_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"not_both",
4,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
135,
"d1;c3;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__filter_2_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"filter_imp_map",
3,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
115,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__restrict_threshold_2_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"lambda_mode_robdd_implications_m_99",
4,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
99,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__delete_2_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"delete_var_from_imp_map",
3,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
95,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mode_robdd__implications__difference_2_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"imp_map_difference",
3,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
92,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_43_2_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"intersect",
3,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
89,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_8 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"mkpos",
2,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
82,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_7 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"mkpos",
2,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
82,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_6 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"mkneg",
2,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
82,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_5 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"mkneg",
2,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
82,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_4 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"mkneg",
2,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
82,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_3 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"mkpos",
2,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
82,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_2 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"mkpos",
2,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
82,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_1 = {
{
MR_FUNCTION,
"mode_robdd.implications",
"mode_robdd.implications",
"mkneg",
2,
0
},
"mode_robdd.implications",
"mode_robdd.implications.m",
82,
"d1;c3;"
};


MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(mode_robdd__implications_module0)
	MR_init_entry1(fn__mode_robdd__implications__init_imp_vars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__init_imp_vars_0_0);
	MR_init_label4(fn__mode_robdd__implications__init_imp_vars_0_0,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_imp_vars'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mode_robdd__implications__init_imp_vars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r3, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r3, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r2, 1) = MR_r3;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__mode_robdd__implications__init_imp_vars_0_0_i4);
MR_def_label(fn__mode_robdd__implications__init_imp_vars_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__mode_robdd__implications__init_imp_vars_0_0_i5);
MR_def_label(fn__mode_robdd__implications__init_imp_vars_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__mode_robdd__implications__init_imp_vars_0_0_i6);
MR_def_label(fn__mode_robdd__implications__init_imp_vars_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(4), 1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__mode_robdd__implications__init_imp_vars_0_0_i7);
MR_def_label(fn__mode_robdd__implications__init_imp_vars_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module1)
	MR_init_entry1(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0);
	MR_init_label3(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0,4,7,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '*'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r6, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r6, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_r6, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__mkneg_1_0);
	MR_tfield(0, MR_r6, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r6, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r7, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r7, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_r7, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__mkpos_1_0);
	MR_tfield(0, MR_r7, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r7, 3) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r3, 1);
	MR_sv(2) = MR_tfield(0, MR_r3, 2);
	MR_sv(3) = MR_tfield(0, MR_r3, 3);
	MR_sv(4) = MR_r1;
	MR_r8 = MR_r2;
	MR_r2 = MR_r6;
	MR_r9 = MR_r3;
	MR_r3 = MR_r7;
	MR_r4 = MR_tfield(0, MR_r9, 0);
	MR_r5 = MR_r8;
	MR_np_call_localret_ent(fn__mode_robdd__implications__add_imp_map_clauses_4_0,
		fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_i4);
MR_def_label(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__mkpos_1_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r3, 0) = (MR_Word) MR_COMMON(2,3);
	MR_tfield(0, MR_r3, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__mkneg_1_0);
	MR_tfield(0, MR_r3, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r3, 3) = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(fn__mode_robdd__implications__add_imp_map_clauses_4_0,
		fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_i7);
MR_def_label(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,4);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__mkneg_1_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r3, 0) = (MR_Word) MR_COMMON(2,5);
	MR_tfield(0, MR_r3, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__mkneg_1_0);
	MR_tfield(0, MR_r3, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r3, 3) = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(fn__mode_robdd__implications__add_imp_map_clauses_4_0,
		fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0_i10);
MR_def_label(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,6);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__mkpos_1_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r3, 0) = (MR_Word) MR_COMMON(2,7);
	MR_tfield(0, MR_r3, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__mkpos_1_0);
	MR_tfield(0, MR_r3, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r3, 3) = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_r6;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__mode_robdd__implications__add_imp_map_clauses_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module2)
	MR_init_entry1(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_43_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_43_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '+'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_43_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_r5, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__intersect_2_0);
	MR_tfield(0, MR_r5, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r5, 3) = MR_r1;
	MR_r6 = MR_r2;
	MR_r2 = MR_r5;
	MR_r7 = MR_r3;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(fn__mode_robdd__implications__apply_to_coresp_imp_maps_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module3)
	MR_init_entry1(fn__mode_robdd__implications__difference_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__difference_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'difference'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mode_robdd__implications__difference_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_r5, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__imp_map_difference_2_0);
	MR_tfield(0, MR_r5, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r5, 3) = MR_r1;
	MR_r6 = MR_r2;
	MR_r2 = MR_r5;
	MR_r7 = MR_r3;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(fn__mode_robdd__implications__apply_to_coresp_imp_maps_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module4)
	MR_init_entry1(fn__mode_robdd__implications__delete_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__delete_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mode_robdd__implications__delete_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_r4, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__delete_var_from_imp_map_2_0);
	MR_tfield(0, MR_r4, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r4, 3) = MR_r1;
	MR_tfield(0, MR_r4, 4) = MR_r3;
	MR_r5 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_tailcall_ent(fn__mode_robdd__implications__apply_to_imp_maps_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module5)
	MR_init_entry1(fn__mode_robdd__implications__restrict_threshold_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__restrict_threshold_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restrict_threshold'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mode_robdd__implications__restrict_threshold_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_COMMON(5,3);
	MR_tfield(0, MR_r4, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__IntroducedFrom__func__restrict_threshold__99__1_3_0);
	MR_tfield(0, MR_r4, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r4, 3) = MR_r1;
	MR_tfield(0, MR_r4, 4) = MR_r2;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(fn__mode_robdd__implications__apply_to_imp_maps_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module6)
	MR_init_entry1(fn__mode_robdd__implications__filter_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__filter_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mode_robdd__implications__filter_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_COMMON(5,4);
	MR_tfield(0, MR_r4, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__filter_imp_map_2_0);
	MR_tfield(0, MR_r4, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r4, 3) = MR_r1;
	MR_tfield(0, MR_r4, 4) = MR_r2;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(fn__mode_robdd__implications__apply_to_imp_maps_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module7)
	MR_init_entry1(fn__mode_robdd__implications__neq_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__neq_vars_3_0);
	MR_init_label1(fn__mode_robdd__implications__neq_vars_3_0,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'neq_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mode_robdd__implications__neq_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r6, 0) = MR_r3;
	MR_tag_alloc_heap(MR_r7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r7, 0) = MR_r5;
	MR_tfield(0, MR_r7, 1) = MR_r6;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_r7;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(fn__mode_robdd__implications__add_clause_2_0,
		fn__mode_robdd__implications__neq_vars_3_0_i5);
MR_def_label(fn__mode_robdd__implications__neq_vars_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r4, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r5, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r4;
	MR_tfield(0, MR_r2, 1) = MR_r5;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_r4;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__mode_robdd__implications__add_clause_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module8)
	MR_init_entry1(fn__mode_robdd__implications__imp_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__imp_vars_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'imp_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mode_robdd__implications__imp_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r6, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r6, 0) = MR_r3;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r5;
	MR_tfield(0, MR_r2, 1) = MR_r6;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(fn__mode_robdd__implications__add_clause_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__[];
MR_decl_entry(sparse_bitset__remove_least_3_0);
MR_decl_entry(fn__sparse_bitset__foldl_3_0);

MR_BEGIN_MODULE(mode_robdd__implications_module9)
	MR_init_entry1(fn__mode_robdd__implications__at_most_one_of_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__at_most_one_of_2_0);
	MR_init_label4(fn__mode_robdd__implications__at_most_one_of_2_0,5,11,2,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'at_most_one_of'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mode_robdd__implications__at_most_one_of_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r4, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r5, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_r5, 1) = MR_r1;
	MR_tfield(0, MR_r5, 2) = MR_r4;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(sparse_bitset__remove_least_3_0,
		fn__mode_robdd__implications__at_most_one_of_2_0_i5);
MR_def_label(fn__mode_robdd__implications__at_most_one_of_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__at_most_one_of_2_0_i2);
	}
	MR_tag_alloc_heap(MR_r6, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r6, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_r6, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__not_both_3_0);
	MR_tfield(0, MR_r6, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r6, 3) = MR_sv(2);
	MR_tfield(0, MR_r6, 4) = MR_r2;
	MR_tag_alloc_heap(MR_r7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r7, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r7, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_r7;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(robdd, imp_vars);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_r8 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r6;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_r8;
	MR_np_call_localret_ent(fn__sparse_bitset__foldl_3_0,
		fn__mode_robdd__implications__at_most_one_of_2_0_i11);
MR_def_label(fn__mode_robdd__implications__at_most_one_of_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r4;
	MR_np_localcall_lab(fn__mode_robdd__implications__at_most_one_of_2_0,
		fn__mode_robdd__implications__at_most_one_of_2_0_i13);
MR_def_label(fn__mode_robdd__implications__at_most_one_of_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__mode_robdd__implications__at_most_one_of_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module10)
	MR_init_entry1(fn__mode_robdd__implications__not_both_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__not_both_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'not_both'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mode_robdd__implications__not_both_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r6, 0) = MR_r3;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r5;
	MR_tfield(0, MR_r2, 1) = MR_r6;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(fn__mode_robdd__implications__add_clause_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module11)
	MR_init_entry1(fn__mode_robdd__implications__either_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__either_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'either'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mode_robdd__implications__either_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r5, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r6, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r6, 0) = MR_r3;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r5;
	MR_tfield(0, MR_r2, 1) = MR_r6;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(fn__mode_robdd__implications__add_clause_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(sparse_bitset__empty_1_0);
MR_decl_entry(fn__bool__or_2_0);

MR_BEGIN_MODULE(mode_robdd__implications_module12)
	MR_init_entry1(mode_robdd__implications__normalise_true_false_implication_vars_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mode_robdd__implications__normalise_true_false_implication_vars_7_0);
	MR_init_label10(mode_robdd__implications__normalise_true_false_implication_vars_7_0,4,6,2,8,9,10,11,12,13,14)
	MR_init_label10(mode_robdd__implications__normalise_true_false_implication_vars_7_0,15,17,18,19,20,21,22,23,26,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'normalise_true_false_implication_vars'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mode_robdd__implications__normalise_true_false_implication_vars_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r5, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(13) = MR_r1;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(sparse_bitset__empty_1_0,
		mode_robdd__implications__normalise_true_false_implication_vars_7_0_i4);
MR_def_label(mode_robdd__implications__normalise_true_false_implication_vars_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mode_robdd__implications__normalise_true_false_implication_vars_7_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(sparse_bitset__empty_1_0,
		mode_robdd__implications__normalise_true_false_implication_vars_7_0_i6);
MR_def_label(mode_robdd__implications__normalise_true_false_implication_vars_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mode_robdd__implications__normalise_true_false_implication_vars_7_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(14);
MR_def_label(mode_robdd__implications__normalise_true_false_implication_vars_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_sv(3), 1);
	MR_r7 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_sv(3), 2);
	MR_r8 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r8, 3);
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_r5 = MR_tfield(0, MR_r8, 0);
	MR_np_call_localret_ent(mode_robdd__implications__normalise_true_false_imp_map_8_0,
		mode_robdd__implications__normalise_true_false_implication_vars_7_0_i8);
MR_def_label(mode_robdd__implications__normalise_true_false_implication_vars_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(13);
	MR_r7 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_r7;
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(mode_robdd__implications__normalise_true_false_imp_map_8_0,
		mode_robdd__implications__normalise_true_false_implication_vars_7_0_i9);
MR_def_label(mode_robdd__implications__normalise_true_false_implication_vars_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_sv(13);
	MR_r7 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r8 = MR_r3;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(mode_robdd__implications__normalise_true_false_imp_map_8_0,
		mode_robdd__implications__normalise_true_false_implication_vars_7_0_i10);
MR_def_label(mode_robdd__implications__normalise_true_false_implication_vars_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_sv(13);
	MR_r7 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_r7;
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(mode_robdd__implications__normalise_true_false_imp_map_8_0,
		mode_robdd__implications__normalise_true_false_implication_vars_7_0_i11);
MR_def_label(mode_robdd__implications__normalise_true_false_implication_vars_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Integer) 0;
	MR_r6 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(mode_robdd__implications__normalise_pairs_6_0,
		mode_robdd__implications__normalise_true_false_implication_vars_7_0_i12);
MR_def_label(mode_robdd__implications__normalise_true_false_implication_vars_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(mode_robdd__implications__normalise_pairs_6_0,
		mode_robdd__implications__normalise_true_false_implication_vars_7_0_i13);
MR_def_label(mode_robdd__implications__normalise_true_false_implication_vars_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(mode_robdd__implications__normalise_pairs_6_0,
		mode_robdd__implications__normalise_true_false_implication_vars_7_0_i14);
MR_def_label(mode_robdd__implications__normalise_true_false_implication_vars_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(mode_robdd__implications__normalise_pairs_6_0,
		mode_robdd__implications__normalise_true_false_implication_vars_7_0_i15);
MR_def_label(mode_robdd__implications__normalise_true_false_implication_vars_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r3, 0) = MR_sv(4);
	MR_tfield(0, MR_r3, 1) = MR_sv(5);
	MR_tfield(0, MR_r3, 2) = MR_sv(6);
	MR_tfield(0, MR_r3, 3) = MR_sv(9);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(fn__bool__or_2_0,
		mode_robdd__implications__normalise_true_false_implication_vars_7_0_i17);
MR_def_label(mode_robdd__implications__normalise_true_false_implication_vars_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__bool__or_2_0,
		mode_robdd__implications__normalise_true_false_implication_vars_7_0_i18);
MR_def_label(mode_robdd__implications__normalise_true_false_implication_vars_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__bool__or_2_0,
		mode_robdd__implications__normalise_true_false_implication_vars_7_0_i19);
MR_def_label(mode_robdd__implications__normalise_true_false_implication_vars_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__bool__or_2_0,
		mode_robdd__implications__normalise_true_false_implication_vars_7_0_i20);
MR_def_label(mode_robdd__implications__normalise_true_false_implication_vars_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__bool__or_2_0,
		mode_robdd__implications__normalise_true_false_implication_vars_7_0_i21);
MR_def_label(mode_robdd__implications__normalise_true_false_implication_vars_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__bool__or_2_0,
		mode_robdd__implications__normalise_true_false_implication_vars_7_0_i22);
MR_def_label(mode_robdd__implications__normalise_true_false_implication_vars_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__bool__or_2_0,
		mode_robdd__implications__normalise_true_false_implication_vars_7_0_i23);
MR_def_label(mode_robdd__implications__normalise_true_false_implication_vars_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mode_robdd__implications__normalise_true_false_implication_vars_7_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(5);
	MR_np_localcall_lab(mode_robdd__implications__normalise_true_false_implication_vars_7_0,
		mode_robdd__implications__normalise_true_false_implication_vars_7_0_i26);
MR_def_label(mode_robdd__implications__normalise_true_false_implication_vars_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(14);
MR_def_label(mode_robdd__implications__normalise_true_false_implication_vars_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module13)
	MR_init_entry1(mode_robdd__implications__propagate_equivalences_into_implications_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mode_robdd__implications__propagate_equivalences_into_implications_4_0);
	MR_init_label5(mode_robdd__implications__propagate_equivalences_into_implications_4_0,2,4,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_equivalences_into_implications'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mode_robdd__implications__propagate_equivalences_into_implications_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r3, 0);
	MR_sv(3) = MR_tfield(0, MR_r3, 1);
	MR_sv(4) = MR_tfield(0, MR_r3, 2);
	MR_sv(5) = MR_tfield(0, MR_r3, 3);
	MR_sv(6) = MR_r1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(mode_robdd__implications__propagate_equivalences_into_disimplications_3_0,
		mode_robdd__implications__propagate_equivalences_into_implications_4_0_i2);
MR_def_label(mode_robdd__implications__propagate_equivalences_into_implications_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mode_robdd__implications__propagate_equivalences_into_implications_4_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mode_robdd__implications__propagate_equivalences_into_implications_2_4_0,
		mode_robdd__implications__propagate_equivalences_into_implications_4_0_i4);
MR_def_label(mode_robdd__implications__propagate_equivalences_into_implications_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r4;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(mode_robdd__implications__propagate_equivalences_into_implications_2_4_0,
		mode_robdd__implications__propagate_equivalences_into_implications_4_0_i5);
MR_def_label(mode_robdd__implications__propagate_equivalences_into_implications_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r3, 0) = MR_sv(2);
	MR_tfield(0, MR_r3, 1) = MR_r2;
	MR_tfield(0, MR_r3, 2) = MR_sv(4);
	MR_tfield(0, MR_r3, 3) = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r5 = MR_r1;
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(fn__bool__or_2_0,
		mode_robdd__implications__propagate_equivalences_into_implications_4_0_i7);
MR_def_label(mode_robdd__implications__propagate_equivalences_into_implications_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mode_robdd__implications__propagate_equivalences_into_implications_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__is_empty_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
MR_decl_entry(fn__map__foldl_3_0);

MR_BEGIN_MODULE(mode_robdd__implications_module14)
	MR_init_entry1(mode_robdd__implications__propagate_implications_into_equivalences_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mode_robdd__implications__propagate_implications_into_equivalences_5_0);
	MR_init_label6(mode_robdd__implications__propagate_implications_into_equivalences_5_0,8,5,12,4,2,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_implications_into_equivalences'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mode_robdd__implications__propagate_implications_into_equivalences_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(6) = MR_tfield(0, MR_r3, 3);
	MR_sv(5) = MR_tfield(0, MR_r3, 2);
	MR_sv(4) = MR_tfield(0, MR_r3, 1);
	MR_r4 = MR_tfield(0, MR_r3, 0);
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r5, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r6, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r6, 1) = MR_r5;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(map__is_empty_1_0,
		mode_robdd__implications__propagate_implications_into_equivalences_5_0_i8);
MR_def_label(mode_robdd__implications__propagate_implications_into_equivalences_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mode_robdd__implications__propagate_implications_into_equivalences_5_0_i5);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_GOTO_LAB(mode_robdd__implications__propagate_implications_into_equivalences_5_0_i4);
MR_def_label(mode_robdd__implications__propagate_implications_into_equivalences_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(map__is_empty_1_0,
		mode_robdd__implications__propagate_implications_into_equivalences_5_0_i12);
MR_def_label(mode_robdd__implications__propagate_implications_into_equivalences_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mode_robdd__implications__propagate_implications_into_equivalences_5_0_i2);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
MR_def_label(mode_robdd__implications__propagate_implications_into_equivalences_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(8);
MR_def_label(mode_robdd__implications__propagate_implications_into_equivalences_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(7);
	MR_tag_alloc_heap(MR_r7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r7, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r7, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r8, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r8, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r8, 1) = MR_r7;
	MR_tag_alloc_heap(MR_r9, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r9, 0) = (MR_Word) MR_CTOR1_ADDR(robdd, equiv_vars);
	MR_tfield(0, MR_r9, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r10, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r10, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_r10, 1) = MR_r7;
	MR_tfield(0, MR_r10, 2) = MR_r8;
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r3, 0) = (MR_Word) MR_CTOR0_ADDR(builtin, tuple);
	MR_tfield(0, MR_r3, 1) = (MR_Integer) 4;
	MR_tfield(0, MR_r3, 2) = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_tfield(0, MR_r3, 3) = MR_r9;
	MR_tfield(0, MR_r3, 4) = MR_r10;
	MR_tfield(0, MR_r3, 5) = MR_r10;
	MR_tag_alloc_heap(MR_r11, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r11, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_r11, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0);
	MR_tfield(0, MR_r11, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r11, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r6, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r6, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_r6, 1) = MR_r2;
	MR_tfield(0, MR_r6, 2) = MR_r4;
	MR_tfield(0, MR_r6, 3) = MR_sv(4);
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_r4 = MR_r11;
	MR_r5 = MR_tfield(0, MR_r6, 2);
	MR_np_call_localret_ent(fn__map__foldl_3_0,
		mode_robdd__implications__propagate_implications_into_equivalences_5_0_i21);
MR_def_label(mode_robdd__implications__propagate_implications_into_equivalences_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r3, 0) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_r3, 1) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_r3, 2) = MR_sv(5);
	MR_tfield(0, MR_r3, 3) = MR_sv(6);
	MR_r4 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_r4, 1);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__robdd__extract_implications_1_0);
MR_decl_entry(fn__robdd__remove_implications_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_robdd__type_ctor_info_robdd_1;
MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(mode_robdd__implications_module15)
	MR_init_entry1(mode_robdd__implications__extract_implication_vars_from_robdd_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mode_robdd__implications__extract_implication_vars_from_robdd_5_0);
	MR_init_label6(mode_robdd__implications__extract_implication_vars_from_robdd_5_0,2,3,4,7,9,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'extract_implication_vars_from_robdd'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mode_robdd__implications__extract_implication_vars_from_robdd_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__robdd__extract_implications_1_0,
		mode_robdd__implications__extract_implication_vars_from_robdd_5_0_i2);
MR_def_label(mode_robdd__implications__extract_implication_vars_from_robdd_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_42_2_0,
		mode_robdd__implications__extract_implication_vars_from_robdd_5_0_i3);
MR_def_label(mode_robdd__implications__extract_implication_vars_from_robdd_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__robdd__remove_implications_2_0,
		mode_robdd__implications__extract_implication_vars_from_robdd_5_0_i4);
MR_def_label(mode_robdd__implications__extract_implication_vars_from_robdd_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(robdd, robdd);
	MR_tfield(0, MR_r4, 1) = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(builtin__unify_2_0,
		mode_robdd__implications__extract_implication_vars_from_robdd_5_0_i7);
MR_def_label(mode_robdd__implications__extract_implication_vars_from_robdd_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mode_robdd__implications__extract_implication_vars_from_robdd_5_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mode_robdd__implications__empty_1_0,
		mode_robdd__implications__extract_implication_vars_from_robdd_5_0_i9);
MR_def_label(mode_robdd__implications__extract_implication_vars_from_robdd_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mode_robdd__implications__extract_implication_vars_from_robdd_5_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(mode_robdd__implications__extract_implication_vars_from_robdd_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module16)
	MR_init_entry1(fn__mode_robdd__implications__add_equalities_to_imp_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__add_equalities_to_imp_vars_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_equalities_to_imp_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mode_robdd__implications__add_equalities_to_imp_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r7, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r7, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r8, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r8, 0) = (MR_Word) MR_CTOR1_ADDR(robdd, imp_vars);
	MR_tfield(0, MR_r8, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_r4, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__362__1_4_0);
	MR_tfield(0, MR_r4, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r4, 3) = MR_r1;
	MR_r1 = MR_r7;
	MR_r9 = MR_r2;
	MR_r2 = MR_r1;
	MR_r10 = MR_r3;
	MR_r3 = MR_r8;
	MR_r5 = MR_r9;
	MR_r6 = MR_r10;
	MR_np_tailcall_ent(fn__map__foldl_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(fn__sparse_bitset__remove_gt_2_0);

MR_BEGIN_MODULE(mode_robdd__implications_module17)
	MR_init_entry1(fn__mode_robdd__implications__restrict_threshold_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__restrict_threshold_2_3_0);
	MR_init_label5(fn__mode_robdd__implications__restrict_threshold_2_3_0,3,6,4,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restrict_threshold_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__restrict_threshold_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__restrict_threshold_2_3_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(8);
MR_def_label(fn__mode_robdd__implications__restrict_threshold_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(1, MR_r3, 1);
	MR_r5 = MR_tfield(1, MR_r3, 0);
	MR_sv(4) = MR_tfield(0, MR_r5, 1);
	MR_r6 = MR_tfield(0, MR_r5, 0);
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r5, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r6;
	MR_sv(6) = (MR_Integer) 2;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(builtin__compare_3_0,
		fn__mode_robdd__implications__restrict_threshold_2_3_0_i6);
MR_def_label(fn__mode_robdd__implications__restrict_threshold_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) != MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__restrict_threshold_2_3_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(fn__mode_robdd__implications__restrict_threshold_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r4, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_tfield(0, MR_r1, 2) = MR_r4;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__sparse_bitset__remove_gt_2_0,
		fn__mode_robdd__implications__restrict_threshold_2_3_0_i9);
MR_def_label(fn__mode_robdd__implications__restrict_threshold_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_101_110_116_114_121_32_58_61_3_0,
		fn__mode_robdd__implications__restrict_threshold_2_3_0_i10);
MR_def_label(fn__mode_robdd__implications__restrict_threshold_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_r5;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_localtailcall(fn__mode_robdd__implications__restrict_threshold_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module18)
	MR_init_entry1(fn__mode_robdd__implications__filter_imp_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__filter_imp_map_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_imp_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__filter_imp_map_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r7, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r7, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r8, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r8, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r8, 1) = MR_r7;
	MR_tag_alloc_heap(MR_r9, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r9, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_r9, 1) = MR_r7;
	MR_tfield(0, MR_r9, 2) = MR_r8;
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_r4, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__IntroducedFrom__func__filter_imp_map__121__1_5_0);
	MR_tfield(0, MR_r4, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r4, 3) = MR_r1;
	MR_tfield(0, MR_r4, 4) = MR_r2;
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_r10 = MR_r3;
	MR_r3 = MR_r9;
	MR_r5 = MR_r10;
	MR_r6 = MR_r5;
	MR_np_tailcall_ent(fn__map__foldl_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module19)
	MR_init_entry1(mode_robdd__implications__normalise_true_false_imp_map_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mode_robdd__implications__normalise_true_false_imp_map_8_0);
	MR_init_label1(mode_robdd__implications__normalise_true_false_imp_map_8_0,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'normalise_true_false_imp_map'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mode_robdd__implications__normalise_true_false_imp_map_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r7, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r7, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r8, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r8, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r8, 1) = MR_r7;
	MR_tag_alloc_heap(MR_r9, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r9, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_r9, 1) = MR_r7;
	MR_tfield(0, MR_r9, 2) = MR_r8;
	MR_tag_alloc_heap(MR_r10, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r10, 0) = (MR_Word) MR_CTOR0_ADDR(builtin, tuple);
	MR_tfield(0, MR_r10, 1) = (MR_Integer) 4;
	MR_tfield(0, MR_r10, 2) = MR_r8;
	MR_tfield(0, MR_r10, 3) = MR_r8;
	MR_tfield(0, MR_r10, 4) = MR_r9;
	MR_tfield(0, MR_r10, 5) = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_tag_alloc_heap(MR_r11, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r11, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_r11, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0);
	MR_tfield(0, MR_r11, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r11, 3) = MR_r1;
	MR_tfield(0, MR_r11, 4) = MR_r2;
	MR_tag_alloc_heap(MR_r6, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r6, 0) = MR_r3;
	MR_tfield(0, MR_r6, 1) = MR_r4;
	MR_tfield(0, MR_r6, 2) = MR_r5;
	MR_tfield(0, MR_r6, 3) = (MR_Integer) 0;
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_np_call_localret_ent(fn__map__foldl_3_0,
		mode_robdd__implications__normalise_true_false_imp_map_8_0_i8);
MR_def_label(mode_robdd__implications__normalise_true_false_imp_map_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_r2 = MR_tfield(0, MR_r5, 0);
	MR_r3 = MR_tfield(0, MR_r5, 1);
	MR_r4 = MR_tfield(0, MR_r5, 2);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__sorted_keys_1_0);
MR_decl_entry(fn__sparse_bitset__sorted_list_to_set_1_0);
MR_decl_entry(fn__sparse_bitset__union_2_0);
MR_decl_entry(fn__map__values_1_0);
MR_decl_entry(fn__sparse_bitset__init_0_0);
MR_decl_entry(fn__list__foldl_3_0);

MR_BEGIN_MODULE(mode_robdd__implications_module20)
	MR_init_entry1(mode_robdd__implications__normalise_pairs_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mode_robdd__implications__normalise_pairs_6_0);
	MR_init_label10(mode_robdd__implications__normalise_pairs_6_0,2,6,3,12,14,15,9,19,20,21)
	MR_init_label1(mode_robdd__implications__normalise_pairs_6_0,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'normalise_pairs'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mode_robdd__implications__normalise_pairs_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(fn__mode_robdd__implications__intersect_2_0,
		mode_robdd__implications__normalise_pairs_6_0_i2);
MR_def_label(mode_robdd__implications__normalise_pairs_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r4, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r2, 1) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r4;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__is_empty_1_0,
		mode_robdd__implications__normalise_pairs_6_0_i6);
MR_def_label(mode_robdd__implications__normalise_pairs_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mode_robdd__implications__normalise_pairs_6_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(7);
MR_def_label(mode_robdd__implications__normalise_pairs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(mode_robdd__implications__normalise_pairs_6_0_i9);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_sv(1) = (MR_Integer) 1;
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(fn__map__sorted_keys_1_0,
		mode_robdd__implications__normalise_pairs_6_0_i12);
MR_def_label(mode_robdd__implications__normalise_pairs_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r3, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_r3, 1) = MR_sv(4);
	MR_tfield(0, MR_r3, 2) = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(fn__sparse_bitset__sorted_list_to_set_1_0,
		mode_robdd__implications__normalise_pairs_6_0_i14);
MR_def_label(mode_robdd__implications__normalise_pairs_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(fn__sparse_bitset__union_2_0,
		mode_robdd__implications__normalise_pairs_6_0_i15);
MR_def_label(mode_robdd__implications__normalise_pairs_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(7);
MR_def_label(mode_robdd__implications__normalise_pairs_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_COMMON(5,5);
	MR_tfield(0, MR_r4, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__IntroducedFrom__func__normalise_pairs__261__1_3_0);
	MR_tfield(0, MR_r4, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r4, 3) = MR_sv(4);
	MR_sv(1) = (MR_Integer) 1;
	MR_r5 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(fn__map__values_1_0,
		mode_robdd__implications__normalise_pairs_6_0_i19);
MR_def_label(mode_robdd__implications__normalise_pairs_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__sparse_bitset__init_0_0,
		mode_robdd__implications__normalise_pairs_6_0_i20);
MR_def_label(mode_robdd__implications__normalise_pairs_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		mode_robdd__implications__normalise_pairs_6_0_i21);
MR_def_label(mode_robdd__implications__normalise_pairs_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(fn__sparse_bitset__union_2_0,
		mode_robdd__implications__normalise_pairs_6_0_i22);
MR_def_label(mode_robdd__implications__normalise_pairs_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module21)
	MR_init_entry1(mode_robdd__implications__propagate_equivalences_into_implications_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mode_robdd__implications__propagate_equivalences_into_implications_2_4_0);
	MR_init_label2(mode_robdd__implications__propagate_equivalences_into_implications_2_4_0,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_equivalences_into_implications_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mode_robdd__implications__propagate_equivalences_into_implications_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r4, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r5, 1) = MR_r4;
	MR_tag_alloc_heap(MR_r6, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r6, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_r6, 1) = MR_r4;
	MR_tfield(0, MR_r6, 2) = MR_r5;
	MR_tag_alloc_heap(MR_sv(5), 0, (MR_Integer) 4);
	MR_tfield(0, MR_sv(5), 0) = (MR_Word) MR_CTOR0_ADDR(builtin, tuple);
	MR_tfield(0, MR_sv(5), 1) = (MR_Integer) 2;
	MR_tfield(0, MR_sv(5), 2) = MR_r6;
	MR_tfield(0, MR_sv(5), 3) = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_tag_alloc_heap(MR_sv(2), 0, (MR_Integer) 5);
	MR_tfield(0, MR_sv(2), 0) = (MR_Word) MR_COMMON(9,2);
	MR_tfield(0, MR_sv(2), 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_0);
	MR_tfield(0, MR_sv(2), 2) = (MR_Integer) 2;
	MR_tfield(0, MR_sv(2), 3) = MR_r1;
	MR_tfield(0, MR_sv(2), 4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(fn__map__init_0_0,
		mode_robdd__implications__propagate_equivalences_into_implications_2_4_0_i7);
MR_def_label(mode_robdd__implications__propagate_equivalences_into_implications_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r6, 0) = MR_r1;
	MR_tfield(0, MR_r6, 1) = (MR_Integer) 0;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(fn__map__foldl_3_0,
		mode_robdd__implications__propagate_equivalences_into_implications_2_4_0_i9);
MR_def_label(mode_robdd__implications__propagate_equivalences_into_implications_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__member_3_0);
MR_decl_entry(sparse_bitset__member_2_1);
MR_decl_entry(mode_robdd__equiv_vars__vars_are_not_equivalent_3_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(mode_robdd__implications_module22)
	MR_init_entry1(mode_robdd__implications__propagate_equivalences_into_disimplications_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mode_robdd__implications__propagate_equivalences_into_disimplications_3_0);
	MR_init_label7(mode_robdd__implications__propagate_equivalences_into_disimplications_3_0,2,9,11,14,13,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_equivalences_into_disimplications'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mode_robdd__implications__propagate_equivalences_into_disimplications_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(fn__mode_robdd__implications__intersect_2_0,
		mode_robdd__implications__propagate_equivalences_into_disimplications_3_0_i2);
MR_def_label(mode_robdd__implications__propagate_equivalences_into_disimplications_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(mode_robdd__implications__propagate_equivalences_into_disimplications_3_0_i6);
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r4, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r2, 1) = MR_r4;
	MR_sv(4) = MR_r4;
	MR_r5 = MR_r1;
	MR_r1 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(map__member_3_0,
		mode_robdd__implications__propagate_equivalences_into_disimplications_3_0_i9);
MR_def_label(mode_robdd__implications__propagate_equivalences_into_disimplications_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r3, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_r3, 1) = MR_sv(3);
	MR_tfield(0, MR_r3, 2) = MR_sv(4);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(sparse_bitset__member_2_1,
		mode_robdd__implications__propagate_equivalences_into_disimplications_3_0_i11);
MR_def_label(mode_robdd__implications__propagate_equivalences_into_disimplications_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(mode_robdd__equiv_vars__vars_are_not_equivalent_3_0,
		mode_robdd__implications__propagate_equivalences_into_disimplications_3_0_i14);
MR_def_label(mode_robdd__implications__propagate_equivalences_into_disimplications_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mode_robdd__implications__propagate_equivalences_into_disimplications_3_0_i13);
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(mode_robdd__implications__propagate_equivalences_into_disimplications_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(7));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(mode_robdd__implications__propagate_equivalences_into_disimplications_3_0_i1);
MR_def_label(mode_robdd__implications__propagate_equivalences_into_disimplications_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mode_robdd__implications__propagate_equivalences_into_disimplications_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__elem_2_0);

MR_BEGIN_MODULE(mode_robdd__implications_module23)
	MR_init_entry1(fn__mode_robdd__implications__entry_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__entry_2_0);
	MR_init_label2(fn__mode_robdd__implications__entry_2_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'entry'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__entry_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r5, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r6, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r6, 1) = MR_r5;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r5;
	MR_r7 = MR_r2;
	MR_r2 = MR_r6;
	MR_r8 = MR_r3;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_np_call_localret_ent(fn__map__elem_2_0,
		fn__mode_robdd__implications__entry_2_0_i5);
MR_def_label(fn__mode_robdd__implications__entry_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__entry_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__mode_robdd__implications__entry_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__sparse_bitset__init_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__delete_2_0);
MR_decl_entry(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0);

MR_BEGIN_MODULE(mode_robdd__implications_module24)
	MR_init_entry1(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_101_110_116_114_121_32_58_61_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_101_110_116_114_121_32_58_61_3_0);
	MR_init_label3(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_101_110_116_114_121_32_58_61_3_0,4,2,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'entry :='/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_101_110_116_114_121_32_58_61_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r5, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(sparse_bitset__empty_1_0,
		fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_101_110_116_114_121_32_58_61_3_0_i4);
MR_def_label(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_101_110_116_114_121_32_58_61_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_101_110_116_114_121_32_58_61_3_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__map__delete_2_0,
		fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_101_110_116_114_121_32_58_61_3_0_i12);
MR_def_label(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_101_110_116_114_121_32_58_61_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0);
MR_def_label(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_101_110_116_114_121_32_58_61_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(sparse_bitset__contains_2_0);
MR_decl_entry(fn__sparse_bitset__insert_2_0);
MR_decl_entry(fn__sparse_bitset__make_singleton_set_1_0);

MR_BEGIN_MODULE(mode_robdd__implications_module25)
	MR_init_entry1(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0);
	MR_init_label8(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0,5,10,14,16,2,19,21,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_new_relation :='/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r5, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r6, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r6, 1) = MR_r5;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__map__elem_2_0,
		fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0_i5);
MR_def_label(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0_i2);
	}
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r4, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_tfield(0, MR_r1, 2) = MR_r4;
	MR_sv(4) = MR_r2;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(sparse_bitset__contains_2_0,
		fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0_i10);
MR_def_label(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0_i1);
	}
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r4, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_tfield(0, MR_r1, 2) = MR_r4;
	MR_r5 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(fn__sparse_bitset__insert_2_0,
		fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0_i14);
MR_def_label(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0_i16);
MR_def_label(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r3, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r3, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_tfield(0, MR_r1, 2) = MR_r3;
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(fn__sparse_bitset__make_singleton_set_1_0,
		fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0_i19);
MR_def_label(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0_i21);
MR_def_label(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0,1)
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


MR_BEGIN_MODULE(mode_robdd__implications_module26)
	MR_init_entry1(mode_robdd__implications__empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mode_robdd__implications__empty_1_0);
	MR_init_label5(mode_robdd__implications__empty_1_0,4,6,8,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mode_robdd__implications__empty_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r4, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r5, 1) = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_sv(3) = MR_tfield(0, MR_r2, 3);
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_r4;
	MR_r6 = MR_r2;
	MR_r2 = MR_r5;
	MR_r3 = MR_tfield(0, MR_r6, 0);
	MR_np_call_localret_ent(map__is_empty_1_0,
		mode_robdd__implications__empty_1_0_i4);
MR_def_label(mode_robdd__implications__empty_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mode_robdd__implications__empty_1_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__is_empty_1_0,
		mode_robdd__implications__empty_1_0_i6);
MR_def_label(mode_robdd__implications__empty_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mode_robdd__implications__empty_1_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__is_empty_1_0,
		mode_robdd__implications__empty_1_0_i8);
MR_def_label(mode_robdd__implications__empty_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mode_robdd__implications__empty_1_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__is_empty_1_0,
		mode_robdd__implications__empty_1_0_i10);
MR_def_label(mode_robdd__implications__empty_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
MR_def_label(mode_robdd__implications__empty_1_0,1)
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

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(mode_robdd__implications_module27)
	MR_init_entry1(fn__mode_robdd__implications__apply_to_imp_maps_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__apply_to_imp_maps_2_0);
	MR_init_label4(fn__mode_robdd__implications__apply_to_imp_maps_2_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_to_imp_maps'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__apply_to_imp_maps_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r3, 1);
	MR_sv(3) = MR_tfield(0, MR_r3, 2);
	MR_sv(4) = MR_tfield(0, MR_r3, 3);
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__mode_robdd__implications__apply_to_imp_maps_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__mode_robdd__implications__apply_to_imp_maps_2_0_i2);
MR_def_label(fn__mode_robdd__implications__apply_to_imp_maps_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__mode_robdd__implications__apply_to_imp_maps_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__mode_robdd__implications__apply_to_imp_maps_2_0_i3);
MR_def_label(fn__mode_robdd__implications__apply_to_imp_maps_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__mode_robdd__implications__apply_to_imp_maps_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__mode_robdd__implications__apply_to_imp_maps_2_0_i4);
MR_def_label(fn__mode_robdd__implications__apply_to_imp_maps_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__mode_robdd__implications__apply_to_imp_maps_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__mode_robdd__implications__apply_to_imp_maps_2_0_i5);
MR_def_label(fn__mode_robdd__implications__apply_to_imp_maps_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(mode_robdd__implications_module28)
	MR_init_entry1(fn__mode_robdd__implications__apply_to_coresp_imp_maps_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__apply_to_coresp_imp_maps_3_0);
	MR_init_label4(fn__mode_robdd__implications__apply_to_coresp_imp_maps_3_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_to_coresp_imp_maps'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__apply_to_coresp_imp_maps_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r3, 1);
	MR_sv(3) = MR_tfield(0, MR_r3, 2);
	MR_sv(4) = MR_tfield(0, MR_r3, 3);
	MR_sv(5) = MR_tfield(0, MR_r4, 1);
	MR_sv(6) = MR_tfield(0, MR_r4, 2);
	MR_sv(7) = MR_tfield(0, MR_r4, 3);
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_r3 = MR_tfield(0, MR_r4, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__mode_robdd__implications__apply_to_coresp_imp_maps_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__mode_robdd__implications__apply_to_coresp_imp_maps_3_0_i2);
MR_def_label(fn__mode_robdd__implications__apply_to_coresp_imp_maps_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_r3 = MR_sv(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__mode_robdd__implications__apply_to_coresp_imp_maps_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__mode_robdd__implications__apply_to_coresp_imp_maps_3_0_i3);
MR_def_label(fn__mode_robdd__implications__apply_to_coresp_imp_maps_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_r3 = MR_sv(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__mode_robdd__implications__apply_to_coresp_imp_maps_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__mode_robdd__implications__apply_to_coresp_imp_maps_3_0_i4);
MR_def_label(fn__mode_robdd__implications__apply_to_coresp_imp_maps_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__mode_robdd__implications__apply_to_coresp_imp_maps_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__mode_robdd__implications__apply_to_coresp_imp_maps_3_0_i5);
MR_def_label(fn__mode_robdd__implications__apply_to_coresp_imp_maps_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__intersect_3_0);

MR_BEGIN_MODULE(mode_robdd__implications_module29)
	MR_init_entry1(fn__mode_robdd__implications__intersect_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__intersect_2_0);
	MR_init_label1(fn__mode_robdd__implications__intersect_2_0,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intersect'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__intersect_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r6, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r6, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r7, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r7, 1) = MR_r6;
	MR_tag_alloc_heap(MR_r8, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r8, 0) = (MR_Word) MR_COMMON(5,6);
	MR_tfield(0, MR_r8, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__IntroducedFrom__func__intersect__446__1_3_0);
	MR_tfield(0, MR_r8, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r8, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r7;
	MR_r9 = MR_r2;
	MR_r2 = MR_r6;
	MR_r10 = MR_r3;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	MR_np_call_localret_ent(fn__map__intersect_3_0,
		fn__mode_robdd__implications__intersect_2_0_i5);
MR_def_label(fn__mode_robdd__implications__intersect_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__mode_robdd__implications__remove_empty_sets_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module30)
	MR_init_entry1(fn__mode_robdd__implications__imp_map_difference_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__imp_map_difference_2_0);
	MR_init_label2(fn__mode_robdd__implications__imp_map_difference_2_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'imp_map_difference'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__imp_map_difference_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r4, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r5, 1) = MR_r4;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__is_empty_1_0,
		fn__mode_robdd__implications__imp_map_difference_2_0_i5);
MR_def_label(fn__mode_robdd__implications__imp_map_difference_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__imp_map_difference_2_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(fn__mode_robdd__implications__imp_map_difference_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r3, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_r3, 1) = MR_r1;
	MR_tfield(0, MR_r3, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_r4, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__IntroducedFrom__func__imp_map_difference__454__1_4_0);
	MR_tfield(0, MR_r4, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r4, 3) = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__map__foldl_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module31)
	MR_init_entry1(fn__mode_robdd__implications__remove_empty_sets_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__remove_empty_sets_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_empty_sets'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__remove_empty_sets_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r7, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r7, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r8, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r8, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r8, 1) = MR_r7;
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r3, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_r3, 1) = MR_r7;
	MR_tfield(0, MR_r3, 2) = MR_r8;
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_COMMON(7,4);
	MR_tfield(0, MR_r4, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__466__1_4_0);
	MR_tfield(0, MR_r4, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r4, 3) = MR_r1;
	MR_r1 = MR_r7;
	MR_r9 = MR_r2;
	MR_r2 = MR_r8;
	MR_r5 = MR_r9;
	MR_r6 = MR_r5;
	MR_np_tailcall_ent(fn__map__foldl_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module32)
	MR_init_entry1(fn__mode_robdd__implications__delete_var_from_imp_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__delete_var_from_imp_map_2_0);
	MR_init_label1(fn__mode_robdd__implications__delete_var_from_imp_map_2_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_var_from_imp_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__delete_var_from_imp_map_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r5, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r6, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r6, 1) = MR_r5;
	MR_tag_alloc_heap(MR_sv(4), 0, (MR_Integer) 3);
	MR_tfield(0, MR_sv(4), 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_sv(4), 1) = MR_r5;
	MR_tfield(0, MR_sv(4), 2) = MR_r6;
	MR_tag_alloc_heap(MR_sv(1), 0, (MR_Integer) 5);
	MR_tfield(0, MR_sv(1), 0) = (MR_Word) MR_COMMON(9,3);
	MR_tfield(0, MR_sv(1), 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__477__1_5_0);
	MR_tfield(0, MR_sv(1), 2) = (MR_Integer) 2;
	MR_tfield(0, MR_sv(1), 3) = MR_r1;
	MR_tfield(0, MR_sv(1), 4) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r4 = MR_tfield(0, MR_sv(1), 4);
	MR_np_call_localret_ent(fn__map__delete_2_0,
		fn__mode_robdd__implications__delete_var_from_imp_map_2_0_i6);
MR_def_label(fn__mode_robdd__implications__delete_var_from_imp_map_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_r7;
	MR_r6 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__map__foldl_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module33)
	MR_init_entry1(fn__mode_robdd__implications__mkpos_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__mkpos_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mkpos'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__mkpos_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module34)
	MR_init_entry1(fn__mode_robdd__implications__mkneg_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__mkneg_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mkneg'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__mkneg_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module35)
	MR_init_entry1(fn__mode_robdd__implications__add_clause_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__add_clause_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_clause'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__add_clause_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r4, 0) = MR_r2;
	MR_tfield(1, MR_r4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(fn__mode_robdd__implications__add_clauses_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(mode_robdd__implications_module36)
	MR_init_entry1(fn__mode_robdd__implications__add_clauses_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__add_clauses_2_0);
	MR_init_label6(fn__mode_robdd__implications__add_clauses_2_0,3,6,8,11,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_clauses'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__add_clauses_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__add_clauses_2_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(fn__mode_robdd__implications__add_clauses_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__mode_robdd__implications__add_clause_2_2_0,
		fn__mode_robdd__implications__add_clauses_2_0_i6);
MR_def_label(fn__mode_robdd__implications__add_clauses_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__add_clauses_2_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__mode_robdd__implications__get_resolvents_2_0,
		fn__mode_robdd__implications__add_clauses_2_0_i8);
MR_def_label(fn__mode_robdd__implications__add_clauses_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(robdd, literal);
	MR_tfield(0, MR_r4, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_CTOR0_ADDR(builtin, tuple);
	MR_tfield(0, MR_r5, 1) = (MR_Integer) 2;
	MR_tfield(0, MR_r5, 2) = MR_r4;
	MR_tfield(0, MR_r5, 3) = MR_r4;
	MR_r6 = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__mode_robdd__implications__add_clauses_2_0_i11);
MR_def_label(fn__mode_robdd__implications__add_clauses_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r4;
	MR_r3 = MR_sv(1);
	MR_np_localcall_lab(fn__mode_robdd__implications__add_clauses_2_0,
		fn__mode_robdd__implications__add_clauses_2_0_i2);
MR_def_label(fn__mode_robdd__implications__add_clauses_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_localtailcall(fn__mode_robdd__implications__add_clauses_2_0);
MR_def_label(fn__mode_robdd__implications__add_clauses_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module37)
	MR_init_entry1(fn__mode_robdd__implications__add_clause_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__add_clause_2_2_0);
	MR_init_label10(fn__mode_robdd__implications__add_clause_2_2_0,6,9,5,12,15,3,20,23,19,26)
	MR_init_label3(fn__mode_robdd__implications__add_clause_2_2_0,29,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_clause_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__add_clause_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(0, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__add_clause_2_2_0_i3);
	}
	MR_r6 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__add_clause_2_2_0_i5);
	}
	MR_sv(1) = MR_tfield(1, MR_r6, 0);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r3, 3);
	MR_sv(5) = MR_tfield(0, MR_r3, 1);
	MR_sv(6) = MR_tfield(0, MR_r3, 0);
	MR_sv(7) = MR_tfield(1, MR_r5, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_r3, 2);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0,
		fn__mode_robdd__implications__add_clause_2_2_0_i6);
MR_def_label(fn__mode_robdd__implications__add_clause_2_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__add_clause_2_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r5, 0) = MR_sv(6);
	MR_tfield(0, MR_r5, 1) = MR_sv(5);
	MR_tfield(0, MR_r5, 2) = MR_r2;
	MR_tfield(0, MR_r5, 3) = MR_sv(3);
	MR_r6 = MR_sv(1);
	MR_sv(1) = MR_r5;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tfield(0, MR_r5, 2);
	MR_r4 = MR_r6;
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0,
		fn__mode_robdd__implications__add_clause_2_2_0_i9);
MR_def_label(fn__mode_robdd__implications__add_clause_2_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__add_clause_2_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r3, 0) = MR_tfield(0, MR_sv(1), 0);
	MR_tfield(0, MR_r3, 1) = MR_tfield(0, MR_sv(1), 1);
	MR_tfield(0, MR_r3, 2) = MR_r2;
	MR_tfield(0, MR_r3, 3) = MR_tfield(0, MR_sv(1), 3);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(fn__mode_robdd__implications__add_clause_2_2_0_i2);
MR_def_label(fn__mode_robdd__implications__add_clause_2_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r6, 0);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r3, 3);
	MR_sv(4) = MR_tfield(0, MR_r3, 2);
	MR_sv(6) = MR_tfield(0, MR_r3, 0);
	MR_sv(7) = MR_tfield(1, MR_r5, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_r3, 1);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0,
		fn__mode_robdd__implications__add_clause_2_2_0_i12);
MR_def_label(fn__mode_robdd__implications__add_clause_2_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__add_clause_2_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r5, 0) = MR_sv(6);
	MR_tfield(0, MR_r5, 1) = MR_r2;
	MR_tfield(0, MR_r5, 2) = MR_sv(4);
	MR_tfield(0, MR_r5, 3) = MR_sv(3);
	MR_r6 = MR_sv(1);
	MR_sv(1) = MR_r5;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tfield(0, MR_r5, 0);
	MR_r4 = MR_r6;
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0,
		fn__mode_robdd__implications__add_clause_2_2_0_i15);
MR_def_label(fn__mode_robdd__implications__add_clause_2_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__add_clause_2_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r5, 0) = MR_r2;
	MR_tfield(0, MR_r5, 1) = MR_tfield(0, MR_sv(1), 1);
	MR_tfield(0, MR_r5, 2) = MR_tfield(0, MR_sv(1), 2);
	MR_tfield(0, MR_r5, 3) = MR_tfield(0, MR_sv(1), 3);
	MR_r2 = MR_r5;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__mode_robdd__implications__add_clause_2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__add_clause_2_2_0_i19);
	}
	MR_sv(1) = MR_tfield(1, MR_r6, 0);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r3, 3);
	MR_sv(4) = MR_tfield(0, MR_r3, 2);
	MR_sv(5) = MR_tfield(0, MR_r3, 1);
	MR_sv(7) = MR_tfield(0, MR_r5, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_r3, 0);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0,
		fn__mode_robdd__implications__add_clause_2_2_0_i20);
MR_def_label(fn__mode_robdd__implications__add_clause_2_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__add_clause_2_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r5, 0) = MR_r2;
	MR_tfield(0, MR_r5, 1) = MR_sv(5);
	MR_tfield(0, MR_r5, 2) = MR_sv(4);
	MR_tfield(0, MR_r5, 3) = MR_sv(3);
	MR_r6 = MR_sv(1);
	MR_sv(1) = MR_r5;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tfield(0, MR_r5, 1);
	MR_r4 = MR_r6;
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0,
		fn__mode_robdd__implications__add_clause_2_2_0_i23);
MR_def_label(fn__mode_robdd__implications__add_clause_2_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__add_clause_2_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r5, 0) = MR_tfield(0, MR_sv(1), 0);
	MR_tfield(0, MR_r5, 1) = MR_r2;
	MR_tfield(0, MR_r5, 2) = MR_tfield(0, MR_sv(1), 2);
	MR_tfield(0, MR_r5, 3) = MR_tfield(0, MR_sv(1), 3);
	MR_r2 = MR_r5;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__mode_robdd__implications__add_clause_2_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r6, 0);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_r3, 2);
	MR_sv(5) = MR_tfield(0, MR_r3, 1);
	MR_sv(6) = MR_tfield(0, MR_r3, 0);
	MR_sv(7) = MR_tfield(0, MR_r5, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_r3, 3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0,
		fn__mode_robdd__implications__add_clause_2_2_0_i26);
MR_def_label(fn__mode_robdd__implications__add_clause_2_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__add_clause_2_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r5, 0) = MR_sv(6);
	MR_tfield(0, MR_r5, 1) = MR_sv(5);
	MR_tfield(0, MR_r5, 2) = MR_sv(4);
	MR_tfield(0, MR_r5, 3) = MR_r2;
	MR_r6 = MR_sv(1);
	MR_sv(1) = MR_r5;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tfield(0, MR_r5, 3);
	MR_r4 = MR_r6;
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_0,
		fn__mode_robdd__implications__add_clause_2_2_0_i29);
MR_def_label(fn__mode_robdd__implications__add_clause_2_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__add_clause_2_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r5, 0) = MR_tfield(0, MR_sv(1), 0);
	MR_tfield(0, MR_r5, 1) = MR_tfield(0, MR_sv(1), 1);
	MR_tfield(0, MR_r5, 2) = MR_tfield(0, MR_sv(1), 2);
	MR_tfield(0, MR_r5, 3) = MR_r2;
	MR_r2 = MR_r5;
MR_def_label(fn__mode_robdd__implications__add_clause_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__mode_robdd__implications__add_clause_2_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module38)
	MR_init_entry1(fn__mode_robdd__implications__get_resolvents_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__get_resolvents_2_0);
	MR_init_label2(fn__mode_robdd__implications__get_resolvents_2_0,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_resolvents'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__get_resolvents_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_CTOR1_ADDR(robdd, literal);
	MR_tfield(0, MR_r5, 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(5), 0, (MR_Integer) 4);
	MR_tfield(0, MR_sv(5), 0) = (MR_Word) MR_CTOR0_ADDR(builtin, tuple);
	MR_tfield(0, MR_sv(5), 1) = (MR_Integer) 2;
	MR_tfield(0, MR_sv(5), 2) = MR_r5;
	MR_tfield(0, MR_sv(5), 3) = MR_r5;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__mode_robdd__implications__get_resolvents_2_3_0,
		fn__mode_robdd__implications__get_resolvents_2_0_i4);
MR_def_label(fn__mode_robdd__implications__get_resolvents_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r5;
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__mode_robdd__implications__get_resolvents_2_3_0,
		fn__mode_robdd__implications__get_resolvents_2_0_i5);
MR_def_label(fn__mode_robdd__implications__get_resolvents_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r4;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(mode_robdd__implications_module39)
	MR_init_entry1(fn__mode_robdd__implications__get_resolvents_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__get_resolvents_2_3_0);
	MR_init_label1(fn__mode_robdd__implications__get_resolvents_2_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_resolvents_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__get_resolvents_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(fn__mode_robdd__implications__get_literals_2_0,
		fn__mode_robdd__implications__get_resolvents_2_3_0_i2);
MR_def_label(fn__mode_robdd__implications__get_resolvents_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_CTOR1_ADDR(robdd, literal);
	MR_tfield(0, MR_r5, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR0_ADDR(builtin, tuple);
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 2) = MR_r5;
	MR_tfield(0, MR_r2, 3) = MR_r5;
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r3, 0) = (MR_Word) MR_COMMON(5,7);
	MR_tfield(0, MR_r3, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__IntroducedFrom__func__get_resolvents_2__565__1_3_0);
	MR_tfield(0, MR_r3, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r3, 3) = MR_sv(2);
	MR_tfield(0, MR_r3, 4) = MR_sv(1);
	MR_r6 = MR_r1;
	MR_r1 = MR_r5;
	MR_r4 = MR_r6;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__map_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__sparse_bitset__to_sorted_list_1_0);

MR_BEGIN_MODULE(mode_robdd__implications_module40)
	MR_init_entry1(fn__mode_robdd__implications__get_literals_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__get_literals_2_0);
	MR_init_label10(fn__mode_robdd__implications__get_literals_2_0,9,10,8,11,12,7,13,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_literals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__get_literals_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_sv(6), 0, (MR_Integer) 2);
	MR_tfield(0, MR_sv(6), 0) = (MR_Word) MR_CTOR1_ADDR(robdd, literal);
	MR_tfield(0, MR_sv(6), 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(7), 0, (MR_Integer) 2);
	MR_tfield(0, MR_sv(7), 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_sv(7), 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(3), 0, (MR_Integer) 4);
	MR_tfield(0, MR_sv(3), 0) = (MR_Word) MR_COMMON(2,8);
	MR_tfield(0, MR_sv(3), 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__mkpos_1_0);
	MR_tfield(0, MR_sv(3), 2) = (MR_Integer) 1;
	MR_tfield(0, MR_sv(3), 3) = MR_r1;
	MR_tag_alloc_heap(MR_sv(8), 0, (MR_Integer) 3);
	MR_tfield(0, MR_sv(8), 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_sv(8), 1) = MR_r1;
	MR_tfield(0, MR_sv(8), 2) = MR_sv(7);
	MR_tag_alloc_heap(MR_sv(4), 0, (MR_Integer) 4);
	MR_tfield(0, MR_sv(4), 0) = (MR_Word) MR_COMMON(2,9);
	MR_tfield(0, MR_sv(4), 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__mkneg_1_0);
	MR_tfield(0, MR_sv(4), 2) = (MR_Integer) 1;
	MR_tfield(0, MR_sv(4), 3) = MR_r1;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__get_literals_2_0_i8);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_r3, 3);
	MR_np_call_localret_ent(fn__mode_robdd__implications__entry_2_0,
		fn__mode_robdd__implications__get_literals_2_0_i9);
MR_def_label(fn__mode_robdd__implications__get_literals_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_r4, 1);
	MR_np_call_localret_ent(fn__mode_robdd__implications__entry_2_0,
		fn__mode_robdd__implications__get_literals_2_0_i10);
MR_def_label(fn__mode_robdd__implications__get_literals_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(fn__mode_robdd__implications__get_literals_2_0_i7);
MR_def_label(fn__mode_robdd__implications__get_literals_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_r3, 0);
	MR_np_call_localret_ent(fn__mode_robdd__implications__entry_2_0,
		fn__mode_robdd__implications__get_literals_2_0_i11);
MR_def_label(fn__mode_robdd__implications__get_literals_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_r4, 2);
	MR_np_call_localret_ent(fn__mode_robdd__implications__entry_2_0,
		fn__mode_robdd__implications__get_literals_2_0_i12);
MR_def_label(fn__mode_robdd__implications__get_literals_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
MR_def_label(fn__mode_robdd__implications__get_literals_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__sparse_bitset__to_sorted_list_1_0,
		fn__mode_robdd__implications__get_literals_2_0_i13);
MR_def_label(fn__mode_robdd__implications__get_literals_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__mode_robdd__implications__get_literals_2_0_i14);
MR_def_label(fn__mode_robdd__implications__get_literals_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__sparse_bitset__to_sorted_list_1_0,
		fn__mode_robdd__implications__get_literals_2_0_i15);
MR_def_label(fn__mode_robdd__implications__get_literals_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__mode_robdd__implications__get_literals_2_0_i16);
MR_def_label(fn__mode_robdd__implications__get_literals_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r4;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module41)
	MR_init_entry1(fn__mode_robdd__implications__add_imp_map_clauses_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__add_imp_map_clauses_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_imp_map_clauses'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__add_imp_map_clauses_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r7, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r7, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r8, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r8, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r8, 1) = MR_r7;
	MR_tag_alloc_heap(MR_r9, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r9, 0) = (MR_Word) MR_CTOR1_ADDR(robdd, imp_vars);
	MR_tfield(0, MR_r9, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r10, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r10, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_r10, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__586__1_6_0);
	MR_tfield(0, MR_r10, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r10, 3) = MR_r1;
	MR_tfield(0, MR_r10, 4) = MR_r2;
	MR_tfield(0, MR_r10, 5) = MR_r3;
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r11 = MR_r4;
	MR_r4 = MR_r10;
	MR_r12 = MR_r5;
	MR_r5 = MR_r11;
	MR_r6 = MR_r12;
	MR_np_tailcall_ent(fn__map__foldl_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module42)
	MR_init_entry1(__Unify___mode_robdd__implications__bin_clause_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mode_robdd__implications__bin_clause_1_0);
	MR_init_label1(__Unify___mode_robdd__implications__bin_clause_1_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mode_robdd__implications__bin_clause_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(robdd, literal);
	MR_tfield(0, MR_r4, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR0_ADDR(builtin, tuple);
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 2) = MR_r4;
	MR_tfield(0, MR_r1, 3) = MR_r4;
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mode_robdd__implications__bin_clause_1_0_i4);
MR_def_label(__Unify___mode_robdd__implications__bin_clause_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module43)
	MR_init_entry1(__Compare___mode_robdd__implications__bin_clause_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mode_robdd__implications__bin_clause_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mode_robdd__implications__bin_clause_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(robdd, literal);
	MR_tfield(0, MR_r4, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR0_ADDR(builtin, tuple);
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 2) = MR_r4;
	MR_tfield(0, MR_r1, 3) = MR_r4;
	MR_np_tailcall_ent(builtin__compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module44)
	MR_init_entry1(__Unify___mode_robdd__implications__extract_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mode_robdd__implications__extract_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mode_robdd__implications__extract_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mode_robdd__implications_module45)
	MR_init_entry1(__Compare___mode_robdd__implications__extract_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mode_robdd__implications__extract_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mode_robdd__implications__extract_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(mode_robdd__implications_module46)
	MR_init_entry1(__Unify___mode_robdd__implications__mklit_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mode_robdd__implications__mklit_1_0);
	MR_init_label1(__Unify___mode_robdd__implications__mklit_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mode_robdd__implications__mklit_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___mode_robdd__implications__mklit_1_0_i2);
MR_def_label(__Unify___mode_robdd__implications__mklit_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;

MR_BEGIN_MODULE(mode_robdd__implications_module47)
	MR_init_entry1(__Compare___mode_robdd__implications__mklit_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mode_robdd__implications__mklit_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mode_robdd__implications__mklit_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r4, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_CTOR1_ADDR(robdd, literal);
	MR_tfield(0, MR_r5, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR0_ADDR(builtin, func);
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 2) = MR_r4;
	MR_tfield(0, MR_r1, 3) = MR_r5;
	MR_np_tailcall_ent(builtin__compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__to_assoc_list_1_0);

MR_BEGIN_MODULE(mode_robdd__implications_module48)
	MR_init_entry1(fn__mode_robdd__implications__IntroducedFrom__func__restrict_threshold__99__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__IntroducedFrom__func__restrict_threshold__99__1_3_0);
	MR_init_label2(fn__mode_robdd__implications__IntroducedFrom__func__restrict_threshold__99__1_3_0,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__restrict_threshold__99__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__IntroducedFrom__func__restrict_threshold__99__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r4, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r5, 1) = MR_r4;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(fn__map__to_assoc_list_1_0,
		fn__mode_robdd__implications__IntroducedFrom__func__restrict_threshold__99__1_3_0_i4);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__restrict_threshold__99__1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(4), 1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__mode_robdd__implications__IntroducedFrom__func__restrict_threshold__99__1_3_0_i5);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__restrict_threshold__99__1_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__mode_robdd__implications__restrict_threshold_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__sparse_bitset__intersect_2_0);
MR_decl_entry(fn__mode_robdd__equiv_vars__add_equalities_2_0);
MR_decl_entry(fn__sparse_bitset__difference_2_0);

MR_BEGIN_MODULE(mode_robdd__implications_module49)
	MR_init_entry1(fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0);
	MR_init_label10(fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0,5,7,10,14,15,16,17,18,2,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__propagate_implications_into_equivalences__317__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(0, MR_r4, 3);
	MR_sv(7) = MR_tfield(0, MR_r4, 2);
	MR_sv(6) = MR_tfield(0, MR_r4, 1);
	MR_sv(2) = MR_tfield(0, MR_r4, 0);
	MR_tag_alloc_heap(MR_r6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r6, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r6, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r7, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r7, 1) = MR_r6;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_r1;
	MR_sv(1) = MR_r6;
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(fn__map__elem_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0_i5);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0_i2);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__sparse_bitset__intersect_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0_i7);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(sparse_bitset__empty_1_0,
		fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0_i10);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_tag_alloc_heap(MR_sv(10), 0, (MR_Integer) 2);
	MR_tfield(0, MR_sv(10), 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_sv(10), 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r4, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_r4, 1) = MR_sv(9);
	MR_tfield(0, MR_r4, 2) = MR_sv(10);
	MR_sv(1) = (MR_Integer) 1;
	MR_r5 = MR_r1;
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__sparse_bitset__insert_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0_i14);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r4;
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__mode_robdd__equiv_vars__add_equalities_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0_i15);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__sparse_bitset__difference_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0_i16);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_101_110_116_114_121_32_58_61_3_0,
		fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0_i17);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r4;
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__sparse_bitset__difference_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0_i18);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_101_110_116_114_121_32_58_61_3_0,
		fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0_i20);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(2);
	MR_sv(2) = MR_sv(6);
	MR_sv(3) = MR_sv(7);
	MR_r1 = MR_sv(8);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module50)
	MR_init_entry1(fn__mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__362__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__362__1_4_0);
	MR_init_label1(fn__mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__362__1_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__add_equalities_to_imp_vars__362__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__362__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__mode_robdd__implications__imp_vars_3_0,
		fn__mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__362__1_4_0_i2);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__362__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r5;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__mode_robdd__implications__imp_vars_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__sparse_bitset__filter_2_0);

MR_BEGIN_MODULE(mode_robdd__implications_module51)
	MR_init_entry1(fn__mode_robdd__implications__IntroducedFrom__func__filter_imp_map__121__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__IntroducedFrom__func__filter_imp_map__121__1_5_0);
	MR_init_label4(fn__mode_robdd__implications__IntroducedFrom__func__filter_imp_map__121__1_5_0,4,8,2,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__filter_imp_map__121__1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__IntroducedFrom__func__filter_imp_map__121__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__mode_robdd__implications__IntroducedFrom__func__filter_imp_map__121__1_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__mode_robdd__implications__IntroducedFrom__func__filter_imp_map__121__1_5_0_i4);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__filter_imp_map__121__1_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__filter_imp_map__121__1_5_0_i2);
	}
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r4, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_tfield(0, MR_r1, 2) = MR_r4;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__sparse_bitset__filter_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__filter_imp_map__121__1_5_0_i8);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__filter_imp_map__121__1_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_101_110_116_114_121_32_58_61_3_0,
		fn__mode_robdd__implications__IntroducedFrom__func__filter_imp_map__121__1_5_0_i13);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__filter_imp_map__121__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_tag_alloc_heap(MR_r6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r6, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r6, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r2, 1) = MR_r6;
	MR_r1 = MR_r6;
	MR_r7 = MR_r3;
	MR_r3 = MR_r5;
	MR_r4 = MR_r7;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__map__delete_2_0);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__filter_imp_map__121__1_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module52)
	MR_init_entry1(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0);
	MR_init_label10(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,3,5,8,11,13,2,15,17,20,24)
	MR_init_label10(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,14,27,30,36,32,37,38,42,43,46)
	MR_init_label9(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,25,49,52,55,58,56,64,47,68)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__normalise_true_false_imp_map__198__1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(7) = MR_tfield(0, MR_r5, 3);
	MR_sv(6) = MR_tfield(0, MR_r5, 2);
	MR_r6 = MR_tfield(0, MR_r5, 1);
	MR_sv(3) = MR_tfield(0, MR_r5, 0);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r2 = MR_r6;
	MR_sv(5) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i5);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r2 = MR_sv(3);
	MR_sv(5) = MR_r6;
	MR_sv(8) = MR_r1;
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r4, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_r1, 1) = MR_sv(8);
	MR_tfield(0, MR_r1, 2) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(sparse_bitset__contains_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i8);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(8);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__sparse_bitset__union_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i11);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_sv(5);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__delete_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i13);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i68);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i15);
	}
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i17);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(5);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r4, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_r1, 1) = MR_sv(8);
	MR_tfield(0, MR_r1, 2) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(sparse_bitset__contains_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i20);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i14);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_sv(1) = MR_sv(3);
	MR_sv(2) = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__delete_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i24);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i68);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(8);
	MR_sv(9) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__sparse_bitset__intersect_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i27);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(sparse_bitset__empty_1_0,
		fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i30);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i25);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i32);
	}
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r4, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_r1, 1) = MR_sv(8);
	MR_tfield(0, MR_r1, 2) = MR_r4;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__sparse_bitset__insert_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i36);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i37);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r3 = MR_sv(6);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i38);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_sv(5);
	MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i43);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r5, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_r6, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r6, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_r6, 1) = MR_sv(8);
	MR_tfield(0, MR_r6, 2) = MR_r5;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_r6;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(fn__sparse_bitset__insert_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i42);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r4 = MR_sv(4);
	MR_r3 = MR_sv(6);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_np_call_localret_ent(fn__map__delete_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i46);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i68);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(8);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__sparse_bitset__intersect_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i49);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(sparse_bitset__empty_1_0,
		fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i52);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i47);
	}
	MR_r1 = MR_sv(1);
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r4, 1) = MR_sv(8);
	MR_sv(1) = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_sv(2) = MR_sv(5);
	MR_sv(5) = MR_r4;
	MR_r6 = MR_r1;
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_np_call_localret_ent(fn__sparse_bitset__difference_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i55);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(sparse_bitset__empty_1_0,
		fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i58);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i56);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__delete_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i64);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i64);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0_i68);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(3);
	MR_sv(2) = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__198__1_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r3, 0) = MR_sv(1);
	MR_tfield(0, MR_r3, 1) = MR_sv(2);
	MR_tfield(0, MR_r3, 2) = MR_r1;
	MR_tfield(0, MR_r3, 3) = MR_r2;
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module53)
	MR_init_entry1(fn__mode_robdd__implications__IntroducedFrom__func__normalise_pairs__261__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__IntroducedFrom__func__normalise_pairs__261__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__normalise_pairs__261__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__IntroducedFrom__func__normalise_pairs__261__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r4, 1) = MR_r1;
	MR_r1 = MR_r4;
	MR_np_tailcall_ent(fn__sparse_bitset__union_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module54)
	MR_init_entry1(fn__mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_0);
	MR_init_label5(fn__mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_0,5,6,10,7,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r6, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r6, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r7, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r7, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_r7, 1) = MR_r1;
	MR_tfield(0, MR_r7, 2) = MR_r6;
	MR_tag_alloc_heap(MR_r8, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r8, 0) = (MR_Word) MR_COMMON(5,8);
	MR_tfield(0, MR_r8, 1) = (MR_Word) MR_ENTRY_AP(mode_robdd__equiv_vars__vars_are_not_equivalent_3_0);
	MR_tfield(0, MR_r8, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r8, 3) = MR_r1;
	MR_tfield(0, MR_r8, 4) = MR_r2;
	MR_tfield(0, MR_r8, 5) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_r5, 0);
	MR_sv(4) = MR_tfield(0, MR_r5, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(fn__sparse_bitset__filter_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_0_i5);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r5;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_101_110_116_114_121_32_58_61_3_0,
		fn__mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_0_i6);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r4, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r5, 1) = MR_r4;
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_r4;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__unify_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_0_i10);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_0_i12);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module55)
	MR_init_entry1(fn__mode_robdd__implications__IntroducedFrom__func__intersect__446__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__IntroducedFrom__func__intersect__446__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__intersect__446__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__IntroducedFrom__func__intersect__446__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r4, 1) = MR_r1;
	MR_r1 = MR_r4;
	MR_np_tailcall_ent(fn__sparse_bitset__intersect_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module56)
	MR_init_entry1(fn__mode_robdd__implications__IntroducedFrom__func__imp_map_difference__454__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__IntroducedFrom__func__imp_map_difference__454__1_4_0);
	MR_init_label4(fn__mode_robdd__implications__IntroducedFrom__func__imp_map_difference__454__1_4_0,5,8,2,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__imp_map_difference__454__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__IntroducedFrom__func__imp_map_difference__454__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r5, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r6, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r6, 1) = MR_r5;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__map__elem_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__imp_map_difference__454__1_4_0_i5);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__imp_map_difference__454__1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__imp_map_difference__454__1_4_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__sparse_bitset__difference_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__imp_map_difference__454__1_4_0_i8);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__imp_map_difference__454__1_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_101_110_116_114_121_32_58_61_3_0,
		fn__mode_robdd__implications__IntroducedFrom__func__imp_map_difference__454__1_4_0_i10);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__imp_map_difference__454__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__imp_map_difference__454__1_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module57)
	MR_init_entry1(fn__mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__466__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__466__1_4_0);
	MR_init_label3(fn__mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__466__1_4_0,4,2,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__remove_empty_sets__466__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__466__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r5, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r5, 1) = MR_r1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(sparse_bitset__empty_1_0,
		fn__mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__466__1_4_0_i4);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__466__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__466__1_4_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(sparse_bitset, sparse_bitset);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__map__delete_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__466__1_4_0_i9);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__466__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__466__1_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__sparse_bitset__delete_2_0);

MR_BEGIN_MODULE(mode_robdd__implications_module58)
	MR_init_entry1(fn__mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__477__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__477__1_5_0);
	MR_init_label4(fn__mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__477__1_5_0,5,9,2,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__delete_var_from_imp_map__477__1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__477__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r6, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r6, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r7, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r7, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_r7, 1) = MR_r1;
	MR_tfield(0, MR_r7, 2) = MR_r6;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r7;
	MR_r2 = MR_r4;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(sparse_bitset__contains_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__477__1_5_0_i5);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__477__1_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__477__1_5_0_i2);
	}
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r4, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r4, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_tfield(0, MR_r1, 2) = MR_r4;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__sparse_bitset__delete_2_0,
		fn__mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__477__1_5_0_i9);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__477__1_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_101_110_116_114_121_32_58_61_3_0,
		fn__mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__477__1_5_0_i11);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__477__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__477__1_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module59)
	MR_init_entry1(fn__mode_robdd__implications__IntroducedFrom__func__get_resolvents_2__565__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__IntroducedFrom__func__get_resolvents_2__565__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__get_resolvents_2__565__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__IntroducedFrom__func__get_resolvents_2__565__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r3;
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module60)
	MR_init_entry1(fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__587__1_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__587__1_6_0);
	MR_init_label2(fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__587__1_6_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__add_imp_map_clauses__587__1'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__587__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__587__1_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__587__1_6_0_i2);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__587__1_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__587__1_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__587__1_6_0_i3);
MR_def_label(fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__587__1_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__mode_robdd__implications__add_clause_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mode_robdd__implications_module61)
	MR_init_entry1(fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__586__1_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__586__1_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__add_imp_map_clauses__586__1'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__586__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r7, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r7, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r8, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r8, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_r8, 1) = MR_r1;
	MR_tfield(0, MR_r8, 2) = MR_r7;
	MR_tag_alloc_heap(MR_r9, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r9, 0) = (MR_Word) MR_CTOR1_ADDR(robdd, imp_vars);
	MR_tfield(0, MR_r9, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r10, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r10, 0) = (MR_Word) MR_COMMON(11,1);
	MR_tfield(0, MR_r10, 1) = (MR_Word) MR_ENTRY_AP(fn__mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__587__1_6_0);
	MR_tfield(0, MR_r10, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_r10, 3) = MR_r1;
	MR_tfield(0, MR_r10, 4) = MR_r2;
	MR_tfield(0, MR_r10, 5) = MR_r3;
	MR_tfield(0, MR_r10, 6) = MR_r4;
	MR_r1 = MR_r9;
	MR_r2 = MR_r8;
	MR_r3 = MR_r10;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(fn__sparse_bitset__foldl_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mode_robdd__implications_maybe_bunch_0(void)
{
	mode_robdd__implications_module0();
	mode_robdd__implications_module1();
	mode_robdd__implications_module2();
	mode_robdd__implications_module3();
	mode_robdd__implications_module4();
	mode_robdd__implications_module5();
	mode_robdd__implications_module6();
	mode_robdd__implications_module7();
	mode_robdd__implications_module8();
	mode_robdd__implications_module9();
	mode_robdd__implications_module10();
	mode_robdd__implications_module11();
	mode_robdd__implications_module12();
	mode_robdd__implications_module13();
	mode_robdd__implications_module14();
	mode_robdd__implications_module15();
	mode_robdd__implications_module16();
	mode_robdd__implications_module17();
	mode_robdd__implications_module18();
	mode_robdd__implications_module19();
	mode_robdd__implications_module20();
	mode_robdd__implications_module21();
	mode_robdd__implications_module22();
	mode_robdd__implications_module23();
	mode_robdd__implications_module24();
	mode_robdd__implications_module25();
	mode_robdd__implications_module26();
	mode_robdd__implications_module27();
	mode_robdd__implications_module28();
	mode_robdd__implications_module29();
	mode_robdd__implications_module30();
	mode_robdd__implications_module31();
	mode_robdd__implications_module32();
	mode_robdd__implications_module33();
	mode_robdd__implications_module34();
	mode_robdd__implications_module35();
	mode_robdd__implications_module36();
	mode_robdd__implications_module37();
	mode_robdd__implications_module38();
	mode_robdd__implications_module39();
}

static void mercury__mode_robdd__implications_maybe_bunch_1(void)
{
	mode_robdd__implications_module40();
	mode_robdd__implications_module41();
	mode_robdd__implications_module42();
	mode_robdd__implications_module43();
	mode_robdd__implications_module44();
	mode_robdd__implications_module45();
	mode_robdd__implications_module46();
	mode_robdd__implications_module47();
	mode_robdd__implications_module48();
	mode_robdd__implications_module49();
	mode_robdd__implications_module50();
	mode_robdd__implications_module51();
	mode_robdd__implications_module52();
	mode_robdd__implications_module53();
	mode_robdd__implications_module54();
	mode_robdd__implications_module55();
	mode_robdd__implications_module56();
	mode_robdd__implications_module57();
	mode_robdd__implications_module58();
	mode_robdd__implications_module59();
	mode_robdd__implications_module60();
	mode_robdd__implications_module61();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mode_robdd__implications__init(void);
void mercury__mode_robdd__implications__init_type_tables(void);
void mercury__mode_robdd__implications__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mode_robdd__implications__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mode_robdd__implications__init_complexity_procs(void);
#endif

void mercury__mode_robdd__implications__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mode_robdd__implications_maybe_bunch_0();
	mercury__mode_robdd__implications_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mode_robdd__implications__type_ctor_info_bin_clause_1,
		mode_robdd__implications__bin_clause_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mode_robdd__implications__type_ctor_info_extract_0,
		mode_robdd__implications__extract_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mode_robdd__implications__type_ctor_info_mklit_1,
		mode_robdd__implications__mklit_1_0);
	mercury__mode_robdd__implications__init_debugger();
}

void mercury__mode_robdd__implications__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mode_robdd__implications__type_ctor_info_bin_clause_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mode_robdd__implications__type_ctor_info_extract_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mode_robdd__implications__type_ctor_info_mklit_1);
	}
}


void mercury__mode_robdd__implications__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mode_robdd__implications__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mode_robdd__implications);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mode_robdd__implications__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
