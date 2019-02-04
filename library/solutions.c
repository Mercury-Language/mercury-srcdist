/*
** Automatically generated from `solutions.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
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
INIT mercury__solutions__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "solutions.c"
#include "solutions.mh"

#line 27 "solutions.c"
#line 134 "io.int2"
#include "io.mh"

#line 31 "solutions.c"
#line 142 "io.int2"
#include "string.mh"

#line 35 "solutions.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "solutions.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "solutions.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 47 "solutions.c"
#line 37 "builtin.opt"
#include "array.mh"

#line 51 "solutions.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 55 "solutions.c"
#line 148 "io.opt"
#include "dir.mh"

#line 59 "solutions.c"
#line 156 "io.opt"
#include "table_builtin.mh"

#line 63 "solutions.c"
#line 4 "char.opt"
#include "char.mh"

#line 67 "solutions.c"
#line 3 "float.opt"
#include "float.mh"

#line 71 "solutions.c"
#line 3 "math.opt"
#include "math.mh"

#line 75 "solutions.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 79 "solutions.c"
#line 23 "store.opt"
#include "store.mh"

#line 83 "solutions.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 87 "solutions.c"
#line 4 "int.opt"
#include "int.mh"

#line 91 "solutions.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 95 "solutions.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 99 "solutions.c"
#line 100 "solutions.c"
#ifndef SOLUTIONS_DECL_GUARD
#define SOLUTIONS_DECL_GUARD

#line 104 "solutions.c"
#line 638 "solutions.m"


#include "mercury_deep_copy.h"

#ifndef MR_RECLAIM_HP_ON_FAILURE
  /* for conservative GC, shallow copies suffice */
  #define MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr,                        \
        OldVar, NewVal, TypeInfo_for_T)                                 \
    do {                                                                \
        NewVal = OldVal;                                                \
    } while (0)
#else
  /*
  ** Note that we need to save/restore the MR_hp register, if it
  ** is transient, before/after calling MR_deep_copy().
  */
  #define MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr,                        \
        OldVar, NewVal, TypeInfo_for_T)                                 \
    do {                                                                \
        MR_save_transient_hp();                                         \
        NewVal = MR_deep_copy(OldVal, (MR_TypeInfo) TypeInfo_for_T,     \
            (const MR_Word *) SolutionsHeapPtr,                         \
            MR_ENGINE(MR_eng_solutions_heap_zone)->MR_zone_top);        \
        MR_restore_transient_hp();                                      \
    } while (0)
#endif


#line 134 "solutions.c"
#line 135 "solutions.c"

#endif
#line 138 "solutions.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Integer f2[4];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Unsigned f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
	MR_Integer f4[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
	MR_Word * f6;
	MR_Integer f7;
	MR_Word * f8;
	MR_Integer f9;
	MR_Integer f10;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Integer f2[5];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Unsigned f1[4];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
	MR_Integer f4[4];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_solutions__type_ctor_info_trail_ptr_0,
	mercury_data_solutions__type_ctor_info_heap_ptr_0;
MR_decl_label3(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0, 11,4,3)
MR_decl_label3(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0, 11,4,3)
MR_decl_label1(solutions__IntroducedFrom__pred__non_cc_call__402__1_7_0, 2)
MR_decl_label1(solutions__aggregate_4_0, 2)
MR_decl_label1(solutions__aggregate_4_1, 2)
MR_decl_label1(solutions__aggregate_4_2, 2)
MR_decl_label1(solutions__aggregate_4_3, 2)
MR_decl_label1(solutions__aggregate2_6_0, 2)
MR_decl_label1(solutions__aggregate2_6_1, 2)
MR_decl_label1(solutions__aggregate2_6_2, 2)
MR_decl_label1(solutions__aggregate2_6_3, 2)
MR_decl_label7(solutions__builtin_aggregate_4_0, 2,8,9,10,11,6,13)
MR_decl_label7(solutions__builtin_aggregate_4_1, 2,8,9,10,11,6,13)
MR_decl_label7(solutions__builtin_aggregate_4_2, 2,8,9,10,11,6,13)
MR_decl_label7(solutions__builtin_aggregate_4_3, 2,8,9,10,11,6,13)
MR_decl_label7(solutions__builtin_aggregate_4_4, 2,8,9,10,11,6,13)
MR_decl_label7(solutions__builtin_aggregate_4_5, 2,8,9,10,11,6,13)
MR_decl_label7(solutions__builtin_aggregate_4_6, 2,8,9,10,11,6,13)
MR_decl_label7(solutions__builtin_aggregate_4_7, 2,8,9,10,11,6,13)
MR_decl_label7(solutions__builtin_aggregate_4_8, 2,8,9,10,11,6,13)
MR_decl_label7(solutions__builtin_aggregate_4_9, 2,8,9,10,11,6,13)
MR_decl_label6(solutions__builtin_solutions_2_0, 2,8,9,10,6,12)
MR_decl_label6(solutions__builtin_solutions_2_1, 2,8,9,10,6,12)
MR_decl_label8(solutions__do_while_4_0, 2,8,9,10,11,6,13,5)
MR_decl_label2(solutions__do_while_4_0, 3,14)
MR_decl_label8(solutions__do_while_4_1, 2,8,9,10,11,6,13,5)
MR_decl_label2(solutions__do_while_4_1, 3,14)
MR_decl_label8(solutions__do_while_4_2, 2,8,9,10,11,6,13,5)
MR_decl_label2(solutions__do_while_4_2, 3,14)
MR_decl_label8(solutions__do_while_4_3, 2,8,9,10,11,6,13,5)
MR_decl_label2(solutions__do_while_4_3, 3,14)
MR_decl_label8(solutions__do_while_4_4, 2,8,9,10,11,6,13,5)
MR_decl_label2(solutions__do_while_4_4, 3,14)
MR_decl_label8(solutions__do_while_4_5, 2,8,9,10,11,6,13,5)
MR_decl_label2(solutions__do_while_4_5, 3,14)
MR_decl_label4(solutions__solutions_2_0, 2,3,4,6)
MR_decl_label4(solutions__solutions_2_1, 2,3,4,6)
MR_decl_label4(solutions__solutions_set_2_0, 2,3,4,6)
MR_decl_label4(solutions__solutions_set_2_1, 2,3,4,6)
MR_decl_label1(solutions__unsorted_aggregate_4_0, 2)
MR_decl_label1(solutions__unsorted_aggregate_4_1, 2)
MR_decl_label1(solutions__unsorted_aggregate_4_2, 2)
MR_decl_label1(solutions__unsorted_aggregate_4_3, 2)
MR_decl_label1(solutions__unsorted_aggregate_4_4, 2)
MR_decl_label1(solutions__unsorted_aggregate_4_5, 2)
MR_decl_label1(solutions__unsorted_aggregate_4_6, 2)
MR_decl_label1(solutions__unsorted_aggregate_4_7, 2)
MR_decl_label1(solutions__unsorted_aggregate_4_8, 2)
MR_decl_label1(solutions__unsorted_aggregate_4_9, 2)
MR_decl_label1(solutions__unsorted_solutions_2_0, 2)
MR_decl_label1(solutions__unsorted_solutions_2_1, 2)
MR_decl_label1(fn__solutions__aggregate_3_0, 2)
MR_decl_label1(fn__solutions__aggregate_3_1, 2)
MR_decl_label1(__Unify___solutions__trail_ptr_0_0, 6)
MR_decl_label2(__Compare___solutions__trail_ptr_0_0, 3,2)
MR_decl_static(solutions__get_registers_3_0)
MR_decl_static(solutions__check_for_floundering_1_0)
MR_decl_static(solutions__discard_trail_ticket_0_0)
MR_decl_static(solutions__swap_heap_and_solutions_heap_0_0)
MR_decl_static(solutions__partial_deep_copy_3_0)
MR_decl_static(solutions__partial_deep_copy_3_1)
MR_decl_static(solutions__partial_deep_copy_3_2)
MR_decl_static(solutions__reset_solutions_heap_1_0)
MR_decl_static(solutions__start_all_soln_neg_context_0_0)
MR_decl_static(solutions__end_all_soln_neg_context_no_more_0_0)
MR_def_extern_entry(solutions__builtin_aggregate_4_0)
MR_def_extern_entry(solutions__builtin_aggregate_4_1)
MR_def_extern_entry(solutions__builtin_aggregate_4_2)
MR_def_extern_entry(solutions__builtin_aggregate_4_3)
MR_def_extern_entry(solutions__builtin_aggregate_4_4)
MR_def_extern_entry(solutions__builtin_aggregate_4_5)
MR_def_extern_entry(solutions__builtin_aggregate_4_6)
MR_def_extern_entry(solutions__builtin_aggregate_4_7)
MR_def_extern_entry(solutions__builtin_aggregate_4_8)
MR_def_extern_entry(solutions__builtin_aggregate_4_9)
MR_def_extern_entry(solutions__builtin_solutions_2_0)
MR_def_extern_entry(solutions__builtin_solutions_2_1)
MR_def_extern_entry(solutions__solutions_2_0)
MR_def_extern_entry(solutions__solutions_2_1)
MR_def_extern_entry(fn__solutions__solutions_1_0)
MR_def_extern_entry(fn__solutions__solutions_1_1)
MR_def_extern_entry(solutions__solutions_set_2_0)
MR_def_extern_entry(solutions__solutions_set_2_1)
MR_def_extern_entry(fn__solutions__solutions_set_1_0)
MR_def_extern_entry(fn__solutions__solutions_set_1_1)
MR_def_extern_entry(solutions__unsorted_solutions_2_0)
MR_def_extern_entry(solutions__unsorted_solutions_2_1)
MR_def_extern_entry(solutions__aggregate_4_0)
MR_def_extern_entry(solutions__aggregate_4_1)
MR_def_extern_entry(solutions__aggregate_4_2)
MR_def_extern_entry(solutions__aggregate_4_3)
MR_def_extern_entry(fn__solutions__aggregate_3_0)
MR_def_extern_entry(fn__solutions__aggregate_3_1)
MR_def_extern_entry(solutions__aggregate2_6_0)
MR_def_extern_entry(solutions__aggregate2_6_1)
MR_def_extern_entry(solutions__aggregate2_6_2)
MR_def_extern_entry(solutions__aggregate2_6_3)
MR_def_extern_entry(solutions__unsorted_aggregate_4_0)
MR_def_extern_entry(solutions__unsorted_aggregate_4_1)
MR_def_extern_entry(solutions__unsorted_aggregate_4_2)
MR_def_extern_entry(solutions__unsorted_aggregate_4_3)
MR_def_extern_entry(solutions__unsorted_aggregate_4_4)
MR_def_extern_entry(solutions__unsorted_aggregate_4_5)
MR_def_extern_entry(solutions__unsorted_aggregate_4_6)
MR_def_extern_entry(solutions__unsorted_aggregate_4_7)
MR_def_extern_entry(solutions__unsorted_aggregate_4_8)
MR_def_extern_entry(solutions__unsorted_aggregate_4_9)
MR_decl_static(solutions__end_all_soln_neg_context_more_0_0)
MR_def_extern_entry(solutions__do_while_4_0)
MR_def_extern_entry(solutions__do_while_4_1)
MR_def_extern_entry(solutions__do_while_4_2)
MR_def_extern_entry(solutions__do_while_4_3)
MR_def_extern_entry(solutions__do_while_4_4)
MR_def_extern_entry(solutions__do_while_4_5)
MR_def_extern_entry(__Unify___solutions__heap_ptr_0_0)
MR_def_extern_entry(__Compare___solutions__heap_ptr_0_0)
MR_def_extern_entry(__Unify___solutions__trail_ptr_0_0)
MR_def_extern_entry(__Compare___solutions__trail_ptr_0_0)
MR_decl_static(solutions__IntroducedFrom__pred__non_cc_call__399__1_6_0)
MR_decl_static(solutions__IntroducedFrom__pred__non_cc_call__402__1_7_0)
MR_decl_static(solutions__IntroducedFrom__pred__non_cc_call__426__1_8_0)
MR_decl_static(fn__f_115_111_108_117_116_105_111_110_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
MR_decl_static(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
{
3,
1,
2,
2
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
2,
17,
33
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__solutions__builtin_aggregate_4_2_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__solutions__builtin_aggregate_4_8_1;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__solutions__builtin_aggregate_4_2_1,
MR_COMMON(1,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0)
},
{
1,
2,
2
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__solutions__builtin_aggregate_4_8_1,
MR_COMMON(1,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0)
},
{
1,
2,
2
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_CTOR0_ADDR(builtin, tuple),
0
},
{
MR_CTOR0_ADDR(builtin, tuple),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__solutions__builtin_aggregate_4_3_1;
static const MR_UserClosureId
mercury_data__closure_layout__solutions__builtin_aggregate_4_6_1;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__solutions__builtin_aggregate_4_3_1,
MR_COMMON(1,0),
7,
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
1,
MR_COMMON(3,0),
2,
2
},
{
(MR_Word *) &mercury_data__closure_layout__solutions__builtin_aggregate_4_6_1,
MR_COMMON(1,0),
7,
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
1,
MR_COMMON(3,0),
2,
2
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
{
4,
1,
2,
3,
3
}
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
3,
17,
33,
49
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__solutions__do_while_4_2_1;
static const MR_UserClosureId
mercury_data__closure_layout__solutions__do_while_4_5_1;
static const struct mercury_type_7 mercury_common_7[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__solutions__do_while_4_2_1,
MR_COMMON(6,0)
},
8,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(5,0)
},
{
1,
2,
3,
3
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__solutions__do_while_4_5_1,
MR_COMMON(6,0)
},
8,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(5,0)
},
{
1,
2,
3,
3
}
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
-1
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_c_pointer_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_c_pointer_0;

static const MR_NotagFunctorDesc mercury_data_solutions__notag_functor_desc_trail_ptr_0 = {
	"trail_ptr",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_c_pointer_0,
	NULL
};

const MR_Integer mercury_data_solutions__functor_number_map_trail_ptr_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_solutions__type_ctor_info_trail_ptr_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___solutions__trail_ptr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___solutions__trail_ptr_0_0)),
	"solutions",
	"trail_ptr",
	{ (void *)&mercury_data_solutions__notag_functor_desc_trail_ptr_0 },
	{ (void *)&mercury_data_solutions__notag_functor_desc_trail_ptr_0 },
	1,
	4,
	mercury_data_solutions__functor_number_map_trail_ptr_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_heap_pointer_0;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_heap_pointer_0;

const MR_TypeCtorInfo_Struct mercury_data_solutions__type_ctor_info_heap_ptr_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___solutions__heap_ptr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___solutions__heap_ptr_0_0)),
	"solutions",
	"heap_ptr",
	{ 0 },
	{ (void *)&mercury_data_private_builtin__type_ctor_info_heap_pointer_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__solutions__builtin_aggregate_4_2_1 = {
{
MR_PREDICATE,
"solutions",
"solutions",
"lambda_solutions_m_399",
6,
0
},
"solutions",
"solutions.m",
399,
"d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__solutions__builtin_aggregate_4_3_1 = {
{
MR_PREDICATE,
"solutions",
"solutions",
"lambda_solutions_m_402",
7,
0
},
"solutions",
"solutions.m",
402,
"d3;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__solutions__builtin_aggregate_4_6_1 = {
{
MR_PREDICATE,
"solutions",
"solutions",
"lambda_solutions_m_402",
7,
0
},
"solutions",
"solutions.m",
402,
"d3;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__solutions__builtin_aggregate_4_8_1 = {
{
MR_PREDICATE,
"solutions",
"solutions",
"lambda_solutions_m_399",
6,
0
},
"solutions",
"solutions.m",
399,
"d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__solutions__do_while_4_2_1 = {
{
MR_PREDICATE,
"solutions",
"solutions",
"lambda_solutions_m_426",
8,
0
},
"solutions",
"solutions.m",
425,
"d3;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__solutions__do_while_4_5_1 = {
{
MR_PREDICATE,
"solutions",
"solutions",
"lambda_solutions_m_426",
8,
0
},
"solutions",
"solutions.m",
425,
"d3;c6;"
};


MR_BEGIN_MODULE(solutions_module0)
	MR_init_entry1(solutions__get_registers_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__get_registers_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__get_registers_3_0
{
#line 443 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 705 "solutions.c"
	MR_r1 = HeapPtr;
	MR_r2 = SolutionsHeapPtr;
	MR_r3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module1)
	MR_init_entry1(solutions__check_for_floundering_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__check_for_floundering_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__check_for_floundering_1_0
	TrailPtr = MR_r1;
{
#line 510 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 741 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module2)
	MR_init_entry1(solutions__discard_trail_ticket_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__discard_trail_ticket_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__discard_trail_ticket_0_0
{
#line 548 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 771 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module3)
	MR_init_entry1(solutions__swap_heap_and_solutions_heap_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__swap_heap_and_solutions_heap_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__swap_heap_and_solutions_heap_0_0
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 809 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module4)
	MR_init_entry1(solutions__partial_deep_copy_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__partial_deep_copy_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__partial_deep_copy_3_0
	TypeInfo_for_T = MR_r1;
	SolutionsHeapPtr = MR_r2;
	OldVal = MR_r3;
{
#line 682 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 844 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module5)
	MR_init_entry1(solutions__partial_deep_copy_3_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__partial_deep_copy_3_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__partial_deep_copy_3_1
	TypeInfo_for_T = MR_r1;
	SolutionsHeapPtr = MR_r2;
	OldVal = MR_r3;
{
#line 676 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 880 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module6)
	MR_init_entry1(solutions__partial_deep_copy_3_2);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__partial_deep_copy_3_2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__partial_deep_copy_3_2
	TypeInfo_for_T = MR_r1;
	SolutionsHeapPtr = MR_r2;
	OldVal = MR_r3;
{
#line 670 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 916 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module7)
	MR_init_entry1(solutions__reset_solutions_heap_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__reset_solutions_heap_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__reset_solutions_heap_1_0
	SolutionsHeapPtr = MR_r1;
{
#line 769 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 949 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module8)
	MR_init_entry1(solutions__start_all_soln_neg_context_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__start_all_soln_neg_context_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__start_all_soln_neg_context_0_0
{
#line 807 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 979 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module9)
	MR_init_entry1(solutions__end_all_soln_neg_context_no_more_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__end_all_soln_neg_context_no_more_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__end_all_soln_neg_context_no_more_0_0
{
#line 829 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 1009 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mutvar__new_mutvar_2_0);
MR_declare_entry(mercury__do_call_closure_0);
MR_decl_entry(mutvar__get_mutvar_2_0);
MR_declare_entry(mercury__do_call_closure_2);
MR_decl_entry(mutvar__set_mutvar_2_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(solutions_module10)
	MR_init_entry1(solutions__builtin_aggregate_4_0);
	MR_init_label7(solutions__builtin_aggregate_4_0,2,8,9,10,11,6,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
{
#line 443 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 1064 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
{
#line 807 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 1079 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_sv(8) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate_4_0_i2);
MR_def_label(solutions__builtin_aggregate_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate_4_0_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_0_i8);
MR_def_label(solutions__builtin_aggregate_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
	TrailPtr = MR_sv(5);
{
#line 510 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 1125 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 1145 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 670 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1164 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_0_i9);
MR_def_label(solutions__builtin_aggregate_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__builtin_aggregate_4_0_i10);
MR_def_label(solutions__builtin_aggregate_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate_4_0_i11);
MR_def_label(solutions__builtin_aggregate_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 1208 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
{
#line 829 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 1226 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_0_i13);
MR_def_label(solutions__builtin_aggregate_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 682 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1249 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
	SolutionsHeapPtr = MR_sv(4);
{
#line 769 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 1264 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
{
#line 548 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 1276 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mutvar__new_mutvar_2_1);

MR_BEGIN_MODULE(solutions_module11)
	MR_init_entry1(solutions__builtin_aggregate_4_1);
	MR_init_label7(solutions__builtin_aggregate_4_1,2,8,9,10,11,6,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
{
#line 443 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 1326 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
{
#line 807 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 1341 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_sv(8) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		solutions__builtin_aggregate_4_1_i2);
MR_def_label(solutions__builtin_aggregate_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate_4_1_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_1_i8);
MR_def_label(solutions__builtin_aggregate_4_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
	TrailPtr = MR_sv(5);
{
#line 510 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 1387 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 1407 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 670 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1426 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_1_i9);
MR_def_label(solutions__builtin_aggregate_4_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__builtin_aggregate_4_1_i10);
MR_def_label(solutions__builtin_aggregate_4_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate_4_1_i11);
MR_def_label(solutions__builtin_aggregate_4_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 1470 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
{
#line 829 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 1488 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_1_i13);
MR_def_label(solutions__builtin_aggregate_4_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 682 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1511 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
	SolutionsHeapPtr = MR_sv(4);
{
#line 769 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 1526 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
{
#line 548 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 1538 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__builtin__get_one_solution_1_0);

MR_BEGIN_MODULE(solutions_module12)
	MR_init_entry1(solutions__builtin_aggregate_4_2);
	MR_init_label7(solutions__builtin_aggregate_4_2,2,8,9,10,11,6,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
{
#line 443 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 1588 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
{
#line 807 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 1603 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_sv(8) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate_4_2_i2);
MR_def_label(solutions__builtin_aggregate_4_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate_4_2_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_2_i8);
MR_def_label(solutions__builtin_aggregate_4_2,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
	TrailPtr = MR_sv(5);
{
#line 510 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 1649 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 1669 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 670 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1688 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_2_i9);
MR_def_label(solutions__builtin_aggregate_4_2,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(solutions__IntroducedFrom__pred__non_cc_call__399__1_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__builtin__get_one_solution_1_0,
		solutions__builtin_aggregate_4_2_i10);
MR_def_label(solutions__builtin_aggregate_4_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate_4_2_i11);
MR_def_label(solutions__builtin_aggregate_4_2,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 1743 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
{
#line 829 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 1761 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_2_i13);
MR_def_label(solutions__builtin_aggregate_4_2,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 682 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1784 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
	SolutionsHeapPtr = MR_sv(4);
{
#line 769 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 1799 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
{
#line 548 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 1811 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__get_one_solution_io_4_0);

MR_BEGIN_MODULE(solutions_module13)
	MR_init_entry1(solutions__builtin_aggregate_4_3);
	MR_init_label7(solutions__builtin_aggregate_4_3,2,8,9,10,11,6,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
{
#line 443 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 1861 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
{
#line 807 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 1876 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_sv(8) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		solutions__builtin_aggregate_4_3_i2);
MR_def_label(solutions__builtin_aggregate_4_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate_4_3_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_3_i8);
MR_def_label(solutions__builtin_aggregate_4_3,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
	TrailPtr = MR_sv(5);
{
#line 510 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 1922 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 1942 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 670 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1961 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_3_i9);
MR_def_label(solutions__builtin_aggregate_4_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(solutions__IntroducedFrom__pred__non_cc_call__402__1_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(6);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(builtin__get_one_solution_io_4_0,
		solutions__builtin_aggregate_4_3_i10);
MR_def_label(solutions__builtin_aggregate_4_3,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate_4_3_i11);
MR_def_label(solutions__builtin_aggregate_4_3,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 2017 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_3,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
{
#line 829 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 2035 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_3_i13);
MR_def_label(solutions__builtin_aggregate_4_3,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 682 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2058 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
	SolutionsHeapPtr = MR_sv(4);
{
#line 769 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 2073 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
{
#line 548 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 2085 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module14)
	MR_init_entry1(solutions__builtin_aggregate_4_4);
	MR_init_label7(solutions__builtin_aggregate_4_4,2,8,9,10,11,6,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
{
#line 443 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 2134 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
{
#line 807 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 2149 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_sv(8) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		solutions__builtin_aggregate_4_4_i2);
MR_def_label(solutions__builtin_aggregate_4_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate_4_4_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_4_i8);
MR_def_label(solutions__builtin_aggregate_4_4,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
	TrailPtr = MR_sv(5);
{
#line 510 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 2195 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 2215 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 676 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2234 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_4_i9);
MR_def_label(solutions__builtin_aggregate_4_4,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__builtin_aggregate_4_4_i10);
MR_def_label(solutions__builtin_aggregate_4_4,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate_4_4_i11);
MR_def_label(solutions__builtin_aggregate_4_4,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 2278 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_4,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
{
#line 829 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 2296 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_4_i13);
MR_def_label(solutions__builtin_aggregate_4_4,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 682 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2319 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
	SolutionsHeapPtr = MR_sv(4);
{
#line 769 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 2334 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
{
#line 548 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 2346 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module15)
	MR_init_entry1(solutions__builtin_aggregate_4_5);
	MR_init_label7(solutions__builtin_aggregate_4_5,2,8,9,10,11,6,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
{
#line 443 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 2395 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
{
#line 807 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 2410 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_sv(8) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		solutions__builtin_aggregate_4_5_i2);
MR_def_label(solutions__builtin_aggregate_4_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate_4_5_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_5_i8);
MR_def_label(solutions__builtin_aggregate_4_5,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
	TrailPtr = MR_sv(5);
{
#line 510 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 2456 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 2476 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 670 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2495 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_5_i9);
MR_def_label(solutions__builtin_aggregate_4_5,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__builtin_aggregate_4_5_i10);
MR_def_label(solutions__builtin_aggregate_4_5,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate_4_5_i11);
MR_def_label(solutions__builtin_aggregate_4_5,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 2539 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_5,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
{
#line 829 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 2557 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_5_i13);
MR_def_label(solutions__builtin_aggregate_4_5,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 682 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2580 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
	SolutionsHeapPtr = MR_sv(4);
{
#line 769 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 2595 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
{
#line 548 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 2607 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module16)
	MR_init_entry1(solutions__builtin_aggregate_4_6);
	MR_init_label7(solutions__builtin_aggregate_4_6,2,8,9,10,11,6,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate_4_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
{
#line 443 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 2656 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
{
#line 807 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 2671 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_sv(8) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		solutions__builtin_aggregate_4_6_i2);
MR_def_label(solutions__builtin_aggregate_4_6,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate_4_6_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_6_i8);
MR_def_label(solutions__builtin_aggregate_4_6,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
	TrailPtr = MR_sv(5);
{
#line 510 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 2717 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 2737 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 670 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2756 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_6_i9);
MR_def_label(solutions__builtin_aggregate_4_6,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(solutions__IntroducedFrom__pred__non_cc_call__402__1_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(6);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(builtin__get_one_solution_io_4_0,
		solutions__builtin_aggregate_4_6_i10);
MR_def_label(solutions__builtin_aggregate_4_6,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate_4_6_i11);
MR_def_label(solutions__builtin_aggregate_4_6,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 2812 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_6,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
{
#line 829 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 2830 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_6_i13);
MR_def_label(solutions__builtin_aggregate_4_6,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 682 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2853 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
	SolutionsHeapPtr = MR_sv(4);
{
#line 769 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 2868 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
{
#line 548 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 2880 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module17)
	MR_init_entry1(solutions__builtin_aggregate_4_7);
	MR_init_label7(solutions__builtin_aggregate_4_7,2,8,9,10,11,6,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate_4_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
{
#line 443 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 2929 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
{
#line 807 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 2944 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_sv(8) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate_4_7_i2);
MR_def_label(solutions__builtin_aggregate_4_7,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate_4_7_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_7));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_7_i8);
MR_def_label(solutions__builtin_aggregate_4_7,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
	TrailPtr = MR_sv(5);
{
#line 510 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 2990 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 3010 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 670 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3029 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_7_i9);
MR_def_label(solutions__builtin_aggregate_4_7,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_7));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__builtin_aggregate_4_7_i10);
MR_def_label(solutions__builtin_aggregate_4_7,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate_4_7_i11);
MR_def_label(solutions__builtin_aggregate_4_7,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 3073 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_7,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
{
#line 829 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 3091 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_7_i13);
MR_def_label(solutions__builtin_aggregate_4_7,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 682 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3114 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
	SolutionsHeapPtr = MR_sv(4);
{
#line 769 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 3129 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
{
#line 548 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 3141 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module18)
	MR_init_entry1(solutions__builtin_aggregate_4_8);
	MR_init_label7(solutions__builtin_aggregate_4_8,2,8,9,10,11,6,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate_4_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
{
#line 443 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 3190 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
{
#line 807 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 3205 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_sv(8) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate_4_8_i2);
MR_def_label(solutions__builtin_aggregate_4_8,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate_4_8_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_8));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_8_i8);
MR_def_label(solutions__builtin_aggregate_4_8,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
	TrailPtr = MR_sv(5);
{
#line 510 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 3251 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 3271 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 670 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3290 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_8_i9);
MR_def_label(solutions__builtin_aggregate_4_8,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(solutions__IntroducedFrom__pred__non_cc_call__399__1_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__builtin__get_one_solution_1_0,
		solutions__builtin_aggregate_4_8_i10);
MR_def_label(solutions__builtin_aggregate_4_8,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate_4_8_i11);
MR_def_label(solutions__builtin_aggregate_4_8,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 3345 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_8,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
{
#line 829 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 3363 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_8_i13);
MR_def_label(solutions__builtin_aggregate_4_8,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 682 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3386 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
	SolutionsHeapPtr = MR_sv(4);
{
#line 769 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 3401 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
{
#line 548 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 3413 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module19)
	MR_init_entry1(solutions__builtin_aggregate_4_9);
	MR_init_label7(solutions__builtin_aggregate_4_9,2,8,9,10,11,6,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate_4_9);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
{
#line 443 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 3462 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
{
#line 807 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 3477 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_sv(8) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		solutions__builtin_aggregate_4_9_i2);
MR_def_label(solutions__builtin_aggregate_4_9,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate_4_9_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_9));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_9_i8);
MR_def_label(solutions__builtin_aggregate_4_9,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
	TrailPtr = MR_sv(5);
{
#line 510 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 3523 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 3543 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 676 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3562 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_9_i9);
MR_def_label(solutions__builtin_aggregate_4_9,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_9));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__builtin_aggregate_4_9_i10);
MR_def_label(solutions__builtin_aggregate_4_9,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate_4_9_i11);
MR_def_label(solutions__builtin_aggregate_4_9,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 3606 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_9,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
{
#line 829 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 3624 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_9_i13);
MR_def_label(solutions__builtin_aggregate_4_9,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 682 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3647 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
	SolutionsHeapPtr = MR_sv(4);
{
#line 769 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 3662 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
{
#line 548 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 3674 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

MR_BEGIN_MODULE(solutions_module20)
	MR_init_entry1(solutions__builtin_solutions_2_0);
	MR_init_label6(solutions__builtin_solutions_2_0,2,8,9,10,6,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_solutions_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
{
#line 443 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 3727 "solutions.c"
	MR_tempr2 = HeapPtr;
	MR_tempr3 = SolutionsHeapPtr;
	MR_tempr4 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
{
#line 807 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 3742 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_tempr4;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_solutions_2_0_i2);
MR_def_label(solutions__builtin_solutions_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(9) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(10));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_solutions_2_0_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_solutions_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_solutions_2_0_i8);
MR_def_label(solutions__builtin_solutions_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
	TrailPtr = MR_sv(6);
{
#line 510 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 3786 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 3806 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
	TypeInfo_for_T = MR_sv(2);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 670 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3825 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_solutions_2_0_i9);
MR_def_label(solutions__builtin_solutions_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_solutions_2_0_i10);
MR_def_label(solutions__builtin_solutions_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 3867 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_solutions_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
{
#line 829 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 3885 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_solutions_2_0_i12);
MR_def_label(solutions__builtin_solutions_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
	TypeInfo_for_T = MR_sv(3);
	SolutionsHeapPtr = MR_sv(5);
	OldVal = MR_r1;
{
#line 682 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3908 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
	SolutionsHeapPtr = MR_sv(5);
{
#line 769 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 3923 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
{
#line 548 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 3935 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module21)
	MR_init_entry1(solutions__builtin_solutions_2_1);
	MR_init_label6(solutions__builtin_solutions_2_1,2,8,9,10,6,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_solutions_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
{
#line 443 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 3987 "solutions.c"
	MR_tempr2 = HeapPtr;
	MR_tempr3 = SolutionsHeapPtr;
	MR_tempr4 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
{
#line 807 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 4002 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_tempr4;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_solutions_2_1_i2);
MR_def_label(solutions__builtin_solutions_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(9) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(10));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_solutions_2_1_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_solutions_2_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_solutions_2_1_i8);
MR_def_label(solutions__builtin_solutions_2_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
	TrailPtr = MR_sv(6);
{
#line 510 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 4046 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 4066 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
	TypeInfo_for_T = MR_sv(2);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 670 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 4085 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_solutions_2_1_i9);
MR_def_label(solutions__builtin_solutions_2_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_solutions_2_1_i10);
MR_def_label(solutions__builtin_solutions_2_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 4127 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_solutions_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
{
#line 829 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 4145 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_solutions_2_1_i12);
MR_def_label(solutions__builtin_solutions_2_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
	TypeInfo_for_T = MR_sv(3);
	SolutionsHeapPtr = MR_sv(5);
	OldVal = MR_r1;
{
#line 682 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 4168 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
	SolutionsHeapPtr = MR_sv(5);
{
#line 769 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 4183 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
{
#line 548 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 4195 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_3_0);
MR_decl_entry(list__merge_sort_2_3_0);
MR_decl_entry(list__remove_adjacent_dups_2_3_0);

MR_BEGIN_MODULE(solutions_module22)
	MR_init_entry1(solutions__solutions_2_0);
	MR_init_label4(solutions__solutions_2_0,2,3,4,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__solutions_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_0,
		solutions__solutions_2_0_i2);
MR_def_label(solutions__solutions_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		solutions__solutions_2_0_i3);
MR_def_label(solutions__solutions_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__merge_sort_2_3_0,
		solutions__solutions_2_0_i4);
MR_def_label(solutions__solutions_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(solutions__solutions_2_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(solutions__solutions_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__remove_adjacent_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module23)
	MR_init_entry1(solutions__solutions_2_1);
	MR_init_label4(solutions__solutions_2_1,2,3,4,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__solutions_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_1,
		solutions__solutions_2_1_i2);
MR_def_label(solutions__solutions_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		solutions__solutions_2_1_i3);
MR_def_label(solutions__solutions_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__merge_sort_2_3_0,
		solutions__solutions_2_1_i4);
MR_def_label(solutions__solutions_2_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(solutions__solutions_2_1_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(solutions__solutions_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__remove_adjacent_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module24)
	MR_init_entry1(fn__solutions__solutions_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__solutions__solutions_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(solutions__solutions_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module25)
	MR_init_entry1(fn__solutions__solutions_1_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__solutions__solutions_1_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(solutions__solutions_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module26)
	MR_init_entry1(solutions__solutions_set_2_0);
	MR_init_label4(solutions__solutions_set_2_0,2,3,4,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__solutions_set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_0,
		solutions__solutions_set_2_0_i2);
MR_def_label(solutions__solutions_set_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		solutions__solutions_set_2_0_i3);
MR_def_label(solutions__solutions_set_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__merge_sort_2_3_0,
		solutions__solutions_set_2_0_i4);
MR_def_label(solutions__solutions_set_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(solutions__solutions_set_2_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(solutions__solutions_set_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__remove_adjacent_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module27)
	MR_init_entry1(solutions__solutions_set_2_1);
	MR_init_label4(solutions__solutions_set_2_1,2,3,4,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__solutions_set_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_1,
		solutions__solutions_set_2_1_i2);
MR_def_label(solutions__solutions_set_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		solutions__solutions_set_2_1_i3);
MR_def_label(solutions__solutions_set_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__merge_sort_2_3_0,
		solutions__solutions_set_2_1_i4);
MR_def_label(solutions__solutions_set_2_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(solutions__solutions_set_2_1_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(solutions__solutions_set_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__remove_adjacent_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module28)
	MR_init_entry1(fn__solutions__solutions_set_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__solutions__solutions_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(solutions__solutions_set_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module29)
	MR_init_entry1(fn__solutions__solutions_set_1_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__solutions__solutions_set_1_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(solutions__solutions_set_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module30)
	MR_init_entry1(solutions__unsorted_solutions_2_0);
	MR_init_label1(solutions__unsorted_solutions_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_solutions_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_0,
		solutions__unsorted_solutions_2_0_i2);
MR_def_label(solutions__unsorted_solutions_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_solutions_2_0
	X = MR_r1;
{
#line 92 "builtin.opt"

    Y = X;
;}
#line 4536 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module31)
	MR_init_entry1(solutions__unsorted_solutions_2_1);
	MR_init_label1(solutions__unsorted_solutions_2_1,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_solutions_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_1,
		solutions__unsorted_solutions_2_1_i2);
MR_def_label(solutions__unsorted_solutions_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_solutions_2_1
	X = MR_r1;
{
#line 92 "builtin.opt"

    Y = X;
;}
#line 4575 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(solutions_module32)
	MR_init_entry1(solutions__aggregate_4_0);
	MR_init_label1(solutions__aggregate_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__aggregate_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(solutions__solutions_2_0,
		solutions__aggregate_4_0_i2);
MR_def_label(solutions__aggregate_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(solutions_module33)
	MR_init_entry1(solutions__aggregate_4_1);
	MR_init_label1(solutions__aggregate_4_1,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__aggregate_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(solutions__solutions_2_0,
		solutions__aggregate_4_1_i2);
MR_def_label(solutions__aggregate_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module34)
	MR_init_entry1(solutions__aggregate_4_2);
	MR_init_label1(solutions__aggregate_4_2,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__aggregate_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(solutions__solutions_2_1,
		solutions__aggregate_4_2_i2);
MR_def_label(solutions__aggregate_4_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module35)
	MR_init_entry1(solutions__aggregate_4_3);
	MR_init_label1(solutions__aggregate_4_3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__aggregate_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(solutions__solutions_2_1,
		solutions__aggregate_4_3_i2);
MR_def_label(solutions__aggregate_4_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module36)
	MR_init_entry1(fn__solutions__aggregate_3_0);
	MR_init_label1(fn__solutions__aggregate_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__solutions__aggregate_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(solutions__solutions_2_0,
		fn__solutions__aggregate_3_0_i2);
MR_def_label(fn__solutions__aggregate_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module37)
	MR_init_entry1(fn__solutions__aggregate_3_1);
	MR_init_label1(fn__solutions__aggregate_3_1,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__solutions__aggregate_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(solutions__solutions_2_1,
		fn__solutions__aggregate_3_1_i2);
MR_def_label(fn__solutions__aggregate_3_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(solutions_module38)
	MR_init_entry1(solutions__aggregate2_6_0);
	MR_init_label1(solutions__aggregate2_6_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__aggregate2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(solutions__solutions_2_0,
		solutions__aggregate2_6_0_i2);
MR_def_label(solutions__aggregate2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_5);

MR_BEGIN_MODULE(solutions_module39)
	MR_init_entry1(solutions__aggregate2_6_1);
	MR_init_label1(solutions__aggregate2_6_1,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__aggregate2_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(solutions__solutions_2_0,
		solutions__aggregate2_6_1_i2);
MR_def_label(solutions__aggregate2_6_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl2_6_5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module40)
	MR_init_entry1(solutions__aggregate2_6_2);
	MR_init_label1(solutions__aggregate2_6_2,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__aggregate2_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(solutions__solutions_2_1,
		solutions__aggregate2_6_2_i2);
MR_def_label(solutions__aggregate2_6_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl2_6_5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module41)
	MR_init_entry1(solutions__aggregate2_6_3);
	MR_init_label1(solutions__aggregate2_6_3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__aggregate2_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(solutions__solutions_2_1,
		solutions__aggregate2_6_3_i2);
MR_def_label(solutions__aggregate2_6_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module42)
	MR_init_entry1(solutions__unsorted_aggregate_4_0);
	MR_init_label1(solutions__unsorted_aggregate_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_0,
		solutions__unsorted_aggregate_4_0_i2);
MR_def_label(solutions__unsorted_aggregate_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate_4_0
	X = MR_r1;
{
#line 92 "builtin.opt"

    Y = X;
;}
#line 4996 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module43)
	MR_init_entry1(solutions__unsorted_aggregate_4_1);
	MR_init_label1(solutions__unsorted_aggregate_4_1,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_2,
		solutions__unsorted_aggregate_4_1_i2);
MR_def_label(solutions__unsorted_aggregate_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate_4_1
	X = MR_r1;
{
#line 92 "builtin.opt"

    Y = X;
;}
#line 5035 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module44)
	MR_init_entry1(solutions__unsorted_aggregate_4_2);
	MR_init_label1(solutions__unsorted_aggregate_4_2,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_1,
		solutions__unsorted_aggregate_4_2_i2);
MR_def_label(solutions__unsorted_aggregate_4_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate_4_2
	X = MR_r1;
{
#line 89 "builtin.opt"

    Y = X;
;}
#line 5074 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module45)
	MR_init_entry1(solutions__unsorted_aggregate_4_3);
	MR_init_label1(solutions__unsorted_aggregate_4_3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_3,
		solutions__unsorted_aggregate_4_3_i2);
MR_def_label(solutions__unsorted_aggregate_4_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate_4_3
	X = MR_r1;
{
#line 89 "builtin.opt"

    Y = X;
;}
#line 5113 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module46)
	MR_init_entry1(solutions__unsorted_aggregate_4_4);
	MR_init_label1(solutions__unsorted_aggregate_4_4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_4,
		solutions__unsorted_aggregate_4_4_i2);
MR_def_label(solutions__unsorted_aggregate_4_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate_4_4
	X = MR_r1;
{
#line 89 "builtin.opt"

    Y = X;
;}
#line 5152 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module47)
	MR_init_entry1(solutions__unsorted_aggregate_4_5);
	MR_init_label1(solutions__unsorted_aggregate_4_5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_5,
		solutions__unsorted_aggregate_4_5_i2);
MR_def_label(solutions__unsorted_aggregate_4_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate_4_5
	X = MR_r1;
{
#line 89 "builtin.opt"

    Y = X;
;}
#line 5191 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module48)
	MR_init_entry1(solutions__unsorted_aggregate_4_6);
	MR_init_label1(solutions__unsorted_aggregate_4_6,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate_4_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_6,
		solutions__unsorted_aggregate_4_6_i2);
MR_def_label(solutions__unsorted_aggregate_4_6,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate_4_6
	X = MR_r1;
{
#line 89 "builtin.opt"

    Y = X;
;}
#line 5230 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module49)
	MR_init_entry1(solutions__unsorted_aggregate_4_7);
	MR_init_label1(solutions__unsorted_aggregate_4_7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate_4_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_7,
		solutions__unsorted_aggregate_4_7_i2);
MR_def_label(solutions__unsorted_aggregate_4_7,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate_4_7
	X = MR_r1;
{
#line 92 "builtin.opt"

    Y = X;
;}
#line 5269 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module50)
	MR_init_entry1(solutions__unsorted_aggregate_4_8);
	MR_init_label1(solutions__unsorted_aggregate_4_8,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate_4_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_8,
		solutions__unsorted_aggregate_4_8_i2);
MR_def_label(solutions__unsorted_aggregate_4_8,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate_4_8
	X = MR_r1;
{
#line 92 "builtin.opt"

    Y = X;
;}
#line 5308 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module51)
	MR_init_entry1(solutions__unsorted_aggregate_4_9);
	MR_init_label1(solutions__unsorted_aggregate_4_9,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate_4_9);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_9,
		solutions__unsorted_aggregate_4_9_i2);
MR_def_label(solutions__unsorted_aggregate_4_9,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate_4_9
	X = MR_r1;
{
#line 89 "builtin.opt"

    Y = X;
;}
#line 5347 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module52)
	MR_init_entry1(solutions__end_all_soln_neg_context_more_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__end_all_soln_neg_context_more_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__end_all_soln_neg_context_more_0_0
{
#line 818 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif
;}
#line 5378 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module53)
	MR_init_entry1(solutions__do_while_4_0);
	MR_init_label8(solutions__do_while_4_0,2,8,9,10,11,6,13,5)
	MR_init_label2(solutions__do_while_4_0,3,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__do_while_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
{
#line 443 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 5428 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_sv(8) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__do_while_4_0_i2);
MR_def_label(solutions__do_while_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
{
#line 807 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 5458 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__do_while_4_0_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__do_while_4_0_i8);
MR_def_label(solutions__do_while_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
	TrailPtr = MR_sv(5);
{
#line 510 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 5489 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 5509 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 670 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 5528 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_0_i9);
MR_def_label(solutions__do_while_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__do_while_4_0_i10);
MR_def_label(solutions__do_while_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__do_while_4_0_i11);
MR_def_label(solutions__do_while_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 5573 "solutions.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
{
#line 818 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif
;}
#line 5588 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_0_i13);
MR_def_label(solutions__do_while_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_0_i5);
MR_def_label(solutions__do_while_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(solutions__do_while_4_0_i3);
MR_def_label(solutions__do_while_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
{
#line 829 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 5617 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
MR_def_label(solutions__do_while_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_0_i14);
MR_def_label(solutions__do_while_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 682 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 5643 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
	SolutionsHeapPtr = MR_sv(4);
{
#line 769 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 5658 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
{
#line 548 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 5670 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module54)
	MR_init_entry1(solutions__do_while_4_1);
	MR_init_label8(solutions__do_while_4_1,2,8,9,10,11,6,13,5)
	MR_init_label2(solutions__do_while_4_1,3,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__do_while_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
{
#line 443 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 5720 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_sv(8) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		solutions__do_while_4_1_i2);
MR_def_label(solutions__do_while_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
{
#line 807 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 5750 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__do_while_4_1_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__do_while_4_1_i8);
MR_def_label(solutions__do_while_4_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
	TrailPtr = MR_sv(5);
{
#line 510 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 5781 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 5801 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 670 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 5820 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_1_i9);
MR_def_label(solutions__do_while_4_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__do_while_4_1_i10);
MR_def_label(solutions__do_while_4_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__do_while_4_1_i11);
MR_def_label(solutions__do_while_4_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 5865 "solutions.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
{
#line 818 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif
;}
#line 5880 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_1_i13);
MR_def_label(solutions__do_while_4_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_1_i5);
MR_def_label(solutions__do_while_4_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(solutions__do_while_4_1_i3);
MR_def_label(solutions__do_while_4_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
{
#line 829 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 5909 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
MR_def_label(solutions__do_while_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_1_i14);
MR_def_label(solutions__do_while_4_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 682 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 5935 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
	SolutionsHeapPtr = MR_sv(4);
{
#line 769 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 5950 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
{
#line 548 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 5962 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

MR_BEGIN_MODULE(solutions_module55)
	MR_init_entry1(solutions__do_while_4_2);
	MR_init_label8(solutions__do_while_4_2,2,8,9,10,11,6,13,5)
	MR_init_label2(solutions__do_while_4_2,3,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__do_while_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
{
#line 443 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 6013 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_sv(8) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		solutions__do_while_4_2_i2);
MR_def_label(solutions__do_while_4_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
{
#line 807 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 6043 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__do_while_4_2_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__do_while_4_2_i8);
MR_def_label(solutions__do_while_4_2,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
	TrailPtr = MR_sv(5);
{
#line 510 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 6074 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 6094 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 670 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6113 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_2_i9);
MR_def_label(solutions__do_while_4_2,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(solutions__IntroducedFrom__pred__non_cc_call__426__1_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(6);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(builtin__get_one_solution_io_4_0,
		solutions__do_while_4_2_i10);
MR_def_label(solutions__do_while_4_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__do_while_4_2_i11);
MR_def_label(solutions__do_while_4_2,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 6171 "solutions.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
{
#line 818 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif
;}
#line 6186 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_2_i13);
MR_def_label(solutions__do_while_4_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_2_i5);
MR_def_label(solutions__do_while_4_2,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(solutions__do_while_4_2_i3);
MR_def_label(solutions__do_while_4_2,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
{
#line 829 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 6215 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
MR_def_label(solutions__do_while_4_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_2_i14);
MR_def_label(solutions__do_while_4_2,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 682 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6241 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
	SolutionsHeapPtr = MR_sv(4);
{
#line 769 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 6256 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
{
#line 548 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 6268 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module56)
	MR_init_entry1(solutions__do_while_4_3);
	MR_init_label8(solutions__do_while_4_3,2,8,9,10,11,6,13,5)
	MR_init_label2(solutions__do_while_4_3,3,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__do_while_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
{
#line 443 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 6318 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_sv(8) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__do_while_4_3_i2);
MR_def_label(solutions__do_while_4_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
{
#line 807 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 6348 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__do_while_4_3_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__do_while_4_3_i8);
MR_def_label(solutions__do_while_4_3,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
	TrailPtr = MR_sv(5);
{
#line 510 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 6379 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 6399 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 670 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6418 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_3_i9);
MR_def_label(solutions__do_while_4_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__do_while_4_3_i10);
MR_def_label(solutions__do_while_4_3,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__do_while_4_3_i11);
MR_def_label(solutions__do_while_4_3,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 6463 "solutions.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
{
#line 818 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif
;}
#line 6478 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_3_i13);
MR_def_label(solutions__do_while_4_3,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_3_i5);
MR_def_label(solutions__do_while_4_3,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(solutions__do_while_4_3_i3);
MR_def_label(solutions__do_while_4_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
{
#line 829 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 6507 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
MR_def_label(solutions__do_while_4_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_3_i14);
MR_def_label(solutions__do_while_4_3,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 682 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6533 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
	SolutionsHeapPtr = MR_sv(4);
{
#line 769 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 6548 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
{
#line 548 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 6560 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module57)
	MR_init_entry1(solutions__do_while_4_4);
	MR_init_label8(solutions__do_while_4_4,2,8,9,10,11,6,13,5)
	MR_init_label2(solutions__do_while_4_4,3,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__do_while_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
{
#line 443 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 6610 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_sv(8) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		solutions__do_while_4_4_i2);
MR_def_label(solutions__do_while_4_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
{
#line 807 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 6640 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__do_while_4_4_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__do_while_4_4_i8);
MR_def_label(solutions__do_while_4_4,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
	TrailPtr = MR_sv(5);
{
#line 510 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 6671 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 6691 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 670 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6710 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_4_i9);
MR_def_label(solutions__do_while_4_4,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__do_while_4_4_i10);
MR_def_label(solutions__do_while_4_4,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__do_while_4_4_i11);
MR_def_label(solutions__do_while_4_4,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 6755 "solutions.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
{
#line 818 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif
;}
#line 6770 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_4_i13);
MR_def_label(solutions__do_while_4_4,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_4_i5);
MR_def_label(solutions__do_while_4_4,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(solutions__do_while_4_4_i3);
MR_def_label(solutions__do_while_4_4,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
{
#line 829 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 6799 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
MR_def_label(solutions__do_while_4_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_4_i14);
MR_def_label(solutions__do_while_4_4,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 682 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6825 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
	SolutionsHeapPtr = MR_sv(4);
{
#line 769 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 6840 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
{
#line 548 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 6852 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module58)
	MR_init_entry1(solutions__do_while_4_5);
	MR_init_label8(solutions__do_while_4_5,2,8,9,10,11,6,13,5)
	MR_init_label2(solutions__do_while_4_5,3,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__do_while_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
{
#line 443 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 6902 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_sv(8) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		solutions__do_while_4_5_i2);
MR_def_label(solutions__do_while_4_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
{
#line 807 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 6932 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__do_while_4_5_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__do_while_4_5_i8);
MR_def_label(solutions__do_while_4_5,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
	TrailPtr = MR_sv(5);
{
#line 510 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 6963 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 6983 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 670 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 7002 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_5_i9);
MR_def_label(solutions__do_while_4_5,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(solutions__IntroducedFrom__pred__non_cc_call__426__1_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(6);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(builtin__get_one_solution_io_4_0,
		solutions__do_while_4_5_i10);
MR_def_label(solutions__do_while_4_5,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__do_while_4_5_i11);
MR_def_label(solutions__do_while_4_5,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
{
#line 585 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 7060 "solutions.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
{
#line 818 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif
;}
#line 7075 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_5_i13);
MR_def_label(solutions__do_while_4_5,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_5_i5);
MR_def_label(solutions__do_while_4_5,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(solutions__do_while_4_5_i3);
MR_def_label(solutions__do_while_4_5,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
{
#line 829 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 7104 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
MR_def_label(solutions__do_while_4_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_5_i14);
MR_def_label(solutions__do_while_4_5,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 682 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 7130 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
	SolutionsHeapPtr = MR_sv(4);
{
#line 769 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 7145 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
{
#line 548 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 7157 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___private_builtin__heap_pointer_0_0);

MR_BEGIN_MODULE(solutions_module59)
	MR_init_entry1(__Unify___solutions__heap_ptr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___solutions__heap_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___private_builtin__heap_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___private_builtin__heap_pointer_0_0);

MR_BEGIN_MODULE(solutions_module60)
	MR_init_entry1(__Compare___solutions__heap_ptr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___solutions__heap_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___private_builtin__heap_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(solutions_module61)
	MR_init_entry1(__Unify___solutions__trail_ptr_0_0);
	MR_init_label1(__Unify___solutions__trail_ptr_0_0,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___solutions__trail_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___solutions__trail_ptr_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
MR_def_label(__Unify___solutions__trail_ptr_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(solutions_module62)
	MR_init_entry1(__Compare___solutions__trail_ptr_0_0);
	MR_init_label2(__Compare___solutions__trail_ptr_0_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___solutions__trail_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___solutions__trail_ptr_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___solutions__trail_ptr_0_0_i2);
MR_def_label(__Compare___solutions__trail_ptr_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___solutions__trail_ptr_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module63)
	MR_init_entry1(solutions__IntroducedFrom__pred__non_cc_call__399__1_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__IntroducedFrom__pred__non_cc_call__399__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__IntroducedFrom__pred__non_cc_call__399__1_6_0));
	MR_np_tailcall_ent(do_call_closure_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module64)
	MR_init_entry1(solutions__IntroducedFrom__pred__non_cc_call__402__1_7_0);
	MR_init_label1(solutions__IntroducedFrom__pred__non_cc_call__402__1_7_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__IntroducedFrom__pred__non_cc_call__402__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__IntroducedFrom__pred__non_cc_call__402__1_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__IntroducedFrom__pred__non_cc_call__402__1_7_0_i2);
MR_def_label(solutions__IntroducedFrom__pred__non_cc_call__402__1_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module65)
	MR_init_entry1(solutions__IntroducedFrom__pred__non_cc_call__426__1_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__IntroducedFrom__pred__non_cc_call__426__1_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__IntroducedFrom__pred__non_cc_call__426__1_8_0));
	MR_np_tailcall_ent(do_call_closure_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module66)
	MR_init_entry1(fn__f_115_111_108_117_116_105_111_110_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_115_111_108_117_116_105_111_110_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module67)
	MR_init_entry1(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_init_label3(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i4);
MR_def_label(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i11);
MR_def_label(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module68)
	MR_init_entry1(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_init_label3(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i4);
MR_def_label(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i11);
MR_def_label(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__solutions_maybe_bunch_0(void)
{
	solutions_module0();
	solutions_module1();
	solutions_module2();
	solutions_module3();
	solutions_module4();
	solutions_module5();
	solutions_module6();
	solutions_module7();
	solutions_module8();
	solutions_module9();
	solutions_module10();
	solutions_module11();
	solutions_module12();
	solutions_module13();
	solutions_module14();
	solutions_module15();
	solutions_module16();
	solutions_module17();
	solutions_module18();
	solutions_module19();
	solutions_module20();
	solutions_module21();
	solutions_module22();
	solutions_module23();
	solutions_module24();
	solutions_module25();
	solutions_module26();
	solutions_module27();
	solutions_module28();
	solutions_module29();
	solutions_module30();
	solutions_module31();
	solutions_module32();
	solutions_module33();
	solutions_module34();
	solutions_module35();
	solutions_module36();
	solutions_module37();
	solutions_module38();
	solutions_module39();
}

static void mercury__solutions_maybe_bunch_1(void)
{
	solutions_module40();
	solutions_module41();
	solutions_module42();
	solutions_module43();
	solutions_module44();
	solutions_module45();
	solutions_module46();
	solutions_module47();
	solutions_module48();
	solutions_module49();
	solutions_module50();
	solutions_module51();
	solutions_module52();
	solutions_module53();
	solutions_module54();
	solutions_module55();
	solutions_module56();
	solutions_module57();
	solutions_module58();
	solutions_module59();
	solutions_module60();
	solutions_module61();
	solutions_module62();
	solutions_module63();
	solutions_module64();
	solutions_module65();
	solutions_module66();
	solutions_module67();
	solutions_module68();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__solutions__init(void);
void mercury__solutions__init_type_tables(void);
void mercury__solutions__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__solutions__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__solutions__init_complexity_procs(void);
#endif

void mercury__solutions__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__solutions_maybe_bunch_0();
	mercury__solutions_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_solutions__type_ctor_info_trail_ptr_0,
		solutions__trail_ptr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_solutions__type_ctor_info_heap_ptr_0,
		solutions__heap_ptr_0_0);
	mercury__solutions__init_debugger();
}

void mercury__solutions__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_solutions__type_ctor_info_trail_ptr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_solutions__type_ctor_info_heap_ptr_0);
	}
}


void mercury__solutions__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__solutions__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__solutions__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
