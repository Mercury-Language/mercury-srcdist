/*
** Automatically generated from `il_peephole.m'
** by the Mercury compiler,
** version rotd-2011-08-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ml_backend__il_peephole__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ml_backend.il_peephole.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ml_backend.il_peephole.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "ml_backend.il_peephole.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "ml_backend.il_peephole.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "ml_backend.il_peephole.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "ml_backend.il_peephole.c"
#line 49 "ml_backend.il_peephole.c"
#include "ml_backend.il_peephole.mh"

#line 52 "ml_backend.il_peephole.c"
#line 53 "ml_backend.il_peephole.c"
#ifndef ML_BACKEND__IL_PEEPHOLE_DECL_GUARD
#define ML_BACKEND__IL_PEEPHOLE_DECL_GUARD

#line 57 "ml_backend.il_peephole.c"
#line 58 "ml_backend.il_peephole.c"

#endif
#line 61 "ml_backend.il_peephole.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__il_peephole__type_ctor_info_instrs_0;
MR_decl_label1(ml_backend__il_peephole__IntroducedFrom__pred__match__229__1_1_0, 2)
MR_decl_label1(ml_backend__il_peephole__IntroducedFrom__pred__match__242__1_2_0, 2)
MR_decl_label7(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0, 5,3,12,10,16,18,1)
MR_decl_label3(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_0, 3,6,1)
MR_decl_label5(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_0, 5,3,10,8,1)
MR_decl_label3(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_0, 3,7,1)
MR_decl_label1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__363__1_1_0, 2)
MR_decl_label1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__398__1_2_0, 4)
MR_decl_label7(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0, 5,3,10,8,15,13,1)
MR_decl_label1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__411__1_2_0, 4)
MR_decl_label1(ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__478__1_1_0, 2)
MR_decl_label3(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0, 3,6,1)
MR_decl_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0, 21,2,6,4,1)
MR_decl_label10(ml_backend__il_peephole__match_4_0, 5,8,12,3,19,21,23,14,35,37)
MR_decl_label10(ml_backend__il_peephole__match_4_0, 44,45,29,51,88,46,58,61,65,67)
MR_decl_label1(ml_backend__il_peephole__match_4_0, 1)
MR_decl_label10(ml_backend__il_peephole__match_start_scope_1_3_0, 4,8,11,12,13,14,15,16,25,1)
MR_decl_label5(ml_backend__il_peephole__match_start_scope_2_3_0, 4,8,11,18,1)
MR_decl_label6(ml_backend__il_peephole__no_handwritten_code_2_0, 36,4,6,10,22,8)
MR_decl_label4(ml_backend__il_peephole__opt_instr_5_0, 4,7,8,2)
MR_decl_label4(ml_backend__il_peephole__optimize_2_4_0, 17,4,5,6)
MR_decl_label6(ml_backend__il_peephole__optimize_class_member_5_0, 5,7,10,12,14,3)
MR_decl_label7(ml_backend__il_peephole__optimize_decl_5_0, 25,5,3,9,7,13,11)
MR_decl_label3(ml_backend__il_peephole__optimize_method_decl_5_0, 4,5,2)
MR_decl_label1(ml_backend__il_peephole__skip_nops_3_0, 3)
MR_decl_label1(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__129__1_1_0, 2)
MR_decl_label1(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__136__1_2_0, 2)
MR_decl_label10(fn__ml_backend__il_peephole__can_branch_1_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(fn__ml_backend__il_peephole__can_branch_1_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(fn__ml_backend__il_peephole__can_branch_1_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label10(fn__ml_backend__il_peephole__can_branch_1_0, 33,34,35,36,37,38,39,40,41,42)
MR_decl_label10(fn__ml_backend__il_peephole__can_branch_1_0, 43,44,45,46,47,48,49,50,51,52)
MR_decl_label10(fn__ml_backend__il_peephole__can_branch_1_0, 53,54,55,56,57,58,59,60,61,62)
MR_decl_label10(fn__ml_backend__il_peephole__can_branch_1_0, 63,64,65,66,67,68,69,70,71,72)
MR_decl_label10(fn__ml_backend__il_peephole__can_branch_1_0, 73,74,75,76,77,78,79,80,81,82)
MR_decl_label10(fn__ml_backend__il_peephole__can_branch_1_0, 83,84,85,86,87,88,89,90,273,91)
MR_decl_label10(fn__ml_backend__il_peephole__can_call_1_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(fn__ml_backend__il_peephole__can_call_1_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(fn__ml_backend__il_peephole__can_call_1_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label10(fn__ml_backend__il_peephole__can_call_1_0, 33,34,35,36,37,38,39,40,41,42)
MR_decl_label10(fn__ml_backend__il_peephole__can_call_1_0, 43,44,45,46,47,48,49,50,51,52)
MR_decl_label10(fn__ml_backend__il_peephole__can_call_1_0, 53,54,55,56,57,58,59,60,61,62)
MR_decl_label10(fn__ml_backend__il_peephole__can_call_1_0, 63,64,65,66,67,68,69,70,71,72)
MR_decl_label10(fn__ml_backend__il_peephole__can_call_1_0, 73,74,75,76,77,78,79,80,81,82)
MR_decl_label7(fn__ml_backend__il_peephole__can_call_1_0, 83,84,85,86,87,88,538)
MR_decl_label10(fn__ml_backend__il_peephole__equivalent_to_nop_1_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(fn__ml_backend__il_peephole__equivalent_to_nop_1_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(fn__ml_backend__il_peephole__equivalent_to_nop_1_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label10(fn__ml_backend__il_peephole__equivalent_to_nop_1_0, 33,34,35,36,37,38,39,40,41,42)
MR_decl_label10(fn__ml_backend__il_peephole__equivalent_to_nop_1_0, 43,44,45,46,144,47,48,49,50,53)
MR_decl_label10(fn__ml_backend__il_peephole__equivalent_to_nop_1_0, 51,55,56,57,58,59,60,61,62,63)
MR_decl_label10(fn__ml_backend__il_peephole__equivalent_to_nop_1_0, 64,65,66,67,68,69,70,71,72,73)
MR_decl_label10(fn__ml_backend__il_peephole__equivalent_to_nop_1_0, 74,75,76,77,78,79,80,81,82,83)
MR_decl_label10(fn__ml_backend__il_peephole__equivalent_to_nop_1_0, 84,85,86,89,87,91,92,93,94,560)
MR_decl_label2(fn__ml_backend__il_peephole__skip_over_block_2_0, 3,4)
MR_def_extern_entry(ml_backend__il_peephole__il_peephole_optimize_3_0)
MR_decl_static(ml_backend__il_peephole__optimize_decl_5_0)
MR_decl_static(ml_backend__il_peephole__optimize_class_member_5_0)
MR_decl_static(fn__ml_backend__il_peephole__skip_over_block_2_0)
MR_decl_static(ml_backend__il_peephole__no_handwritten_code_2_0)
MR_decl_static(ml_backend__il_peephole__match_start_scope_1_3_0)
MR_decl_static(ml_backend__il_peephole__match_start_scope_2_3_0)
MR_decl_static(ml_backend__il_peephole__skip_nops_3_0)
MR_decl_static(ml_backend__il_peephole__match_4_0)
MR_decl_static(ml_backend__il_peephole__opt_instr_5_0)
MR_decl_static(ml_backend__il_peephole__optimize_2_4_0)
MR_decl_static(ml_backend__il_peephole__optimize_method_decl_5_0)
MR_decl_static(fn__ml_backend__il_peephole__can_call_1_0)
MR_decl_static(fn__ml_backend__il_peephole__equivalent_to_nop_1_0)
MR_decl_static(fn__ml_backend__il_peephole__can_branch_1_0)
MR_decl_static(__Unify___ml_backend__il_peephole__instrs_0_0)
MR_decl_static(__Compare___ml_backend__il_peephole__instrs_0_0)
MR_decl_static(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__129__1_1_0)
MR_decl_static(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__136__1_2_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match__242__1_2_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match__225__1_1_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match__229__1_1_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__343__1_1_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__363__1_1_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__398__1_2_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__411__1_2_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__478__1_1_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0)

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__il_peephole_optimize_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_il_decl_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__optimize_decl_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_class_member_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__optimize_decl_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__optimize_decl_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_method_body_decl_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__optimize_class_member_5_0_1;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__il_peephole_optimize_3_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__ilasm, il_decl),
MR_CTOR0_ADDR(ml_backend__ilasm, il_decl),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__optimize_decl_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__ilasm, class_member),
MR_CTOR0_ADDR(ml_backend__ilasm, class_member),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__optimize_decl_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__ilasm, il_decl),
MR_CTOR0_ADDR(ml_backend__ilasm, il_decl),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__optimize_decl_5_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl),
MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__optimize_class_member_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl),
MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__optimize_class_member_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_start_scope_2_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_start_scope_2_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_instr_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_variable_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__398__1_2_0_1;
static const struct mercury_type_1 mercury_common_1[7] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__optimize_class_member_5_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__match_start_scope_2_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(4,2),
MR_COMMON(5,0)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__match_start_scope_2_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(5,0),
MR_CTOR0_ADDR(ml_backend__ilds, instr)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__ilds, instr)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__ilds, variable),
MR_CTOR0_ADDR(ml_backend__ilds, instr)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__ilds, variable),
MR_CTOR0_ADDR(ml_backend__ilds, instr)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__398__1_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__ilds, variable),
MR_CTOR0_ADDR(ml_backend__ilds, instr)
},
};

MR_decl_entry(fn__f_105_110_116_95_95_43_2_0);
static const struct mercury_type_2 mercury_common_2[8] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__129__1_1_0),
0
},
{
MR_COMMON(3,0),
MR_ENTRY_AP(fn__f_105_110_116_95_95_43_2_0),
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__411__1_2_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__478__1_1_0),
0
},
{
MR_COMMON(6,1),
MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match__225__1_1_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match__229__1_1_0),
0
},
{
MR_COMMON(6,3),
MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__343__1_1_0),
0
},
{
MR_COMMON(6,4),
MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__363__1_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__optimize_class_member_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__optimize_class_member_5_0_4;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__optimize_class_member_5_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__optimize_class_member_5_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl),
MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_instr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_instr_0;
static const struct mercury_type_4 mercury_common_4[6] =
{
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__ilds, instr)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__ilds, instr)
}
},
{
{
MR_tbmkword(0, 17),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,7,0),
MR_TAG_COMMON(1,4,3)
}
},
{
{
MR_tbmkword(0, 6),
MR_tbmkword(0, 0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_il_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_il_type_0;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__ilds, il_type)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__ilds, il_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__skip_nops_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0_1;
static const struct mercury_type_6 mercury_common_6[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__skip_nops_3_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__ilds, instr)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__ilds, instr)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__ilds, instr)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__ilds, instr)
},
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__ilds, instr)
},
};

static const struct mercury_type_7 mercury_common_7[4] =
{
{
19,
MR_string_const("peephole -- eliminated instrs after ret", 39)
},
{
19,
MR_string_const("peephole -- eliminated branch to ret", 36)
},
{
19,
MR_string_const("peephole: ldc(X), stloc(X), ldloc(X) --> ldc(X), dup, stloc(X)", 62)
},
{
19,
MR_string_const("peephole: stloc(X), ldloc(X) --> dup, stloc(X)", 46)
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ilds__type_ctor_info_instr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_instr_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__il_peephole__type_ctor_info_instrs_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__il_peephole__instrs_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__il_peephole__instrs_0_0)),
	"ml_backend.il_peephole",
	"instrs",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1ml_backend__ilds__type_ctor_info_instr_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_363",
1,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
363,
"62"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__398__1_2_0_1 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_402",
2,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
402,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_343",
1,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
343,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_330",
2,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
330,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_4 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_284",
2,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
284,
"79"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_3 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_242",
2,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
241,
"36"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_2 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_229",
1,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
229,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_225",
1,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
224,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__skip_nops_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_478",
1,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
478,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_start_scope_2_3_0_2 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_411",
2,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
411,
"35"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_start_scope_2_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_398",
2,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
398,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__optimize_class_member_5_0_4 = {
{
MR_FUNCTION,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_136",
3,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
136,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__optimize_class_member_5_0_3 = {
{
MR_FUNCTION,
"int",
"int",
"+",
3,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
134,
"25"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__optimize_class_member_5_0_2 = {
{
MR_FUNCTION,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_129",
2,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
129,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__optimize_class_member_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"optimize_method_decl",
5,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
124,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__optimize_decl_5_0_3 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"optimize_method_decl",
5,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
101,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__optimize_decl_5_0_2 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"optimize_decl",
5,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
96,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__optimize_decl_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"optimize_class_member",
5,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
90,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__il_peephole_optimize_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"optimize_decl",
5,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
77,
"5"
};


extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_il_decl_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(ml_backend__il_peephole_module0)
	MR_init_entry1(ml_backend__il_peephole__il_peephole_optimize_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__il_peephole_optimize_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_peephole_optimize'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__il_peephole__il_peephole_optimize_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__il_peephole__optimize_decl_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, il_decl);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r5 = MR_tempr2;
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(list__map_foldl_5_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_class_member_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_method_body_decl_0;

MR_BEGIN_MODULE(ml_backend__il_peephole_module1)
	MR_init_entry1(ml_backend__il_peephole__optimize_decl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__optimize_decl_5_0);
	MR_init_label7(ml_backend__il_peephole__optimize_decl_5_0,25,5,3,9,7,13,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_decl'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__optimize_decl_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__optimize_decl_5_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__il_peephole__optimize_class_member_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_sv(3) = MR_tfield(1, MR_r2, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, class_member);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r5 = MR_tfield(1, MR_tempr2, 4);
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__il_peephole__optimize_decl_5_0_i5);
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__il_peephole__optimize_decl_5_0_i7);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(ml_backend__il_peephole__optimize_decl_5_0_i25);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(4) = MR_tfield(2, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, il_decl);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r5 = MR_tfield(2, MR_tempr2, 1);
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__il_peephole__optimize_decl_5_0_i9);
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__optimize_decl_5_0_i11);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__il_peephole__optimize_method_decl_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(4) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r5 = MR_tfield(3, MR_tempr2, 2);
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__il_peephole__optimize_decl_5_0_i13);
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__list__foldl_3_0);

MR_BEGIN_MODULE(ml_backend__il_peephole_module2)
	MR_init_entry1(ml_backend__il_peephole__optimize_class_member_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__optimize_class_member_5_0);
	MR_init_label6(ml_backend__il_peephole__optimize_class_member_5_0,5,7,10,12,14,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_class_member'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__optimize_class_member_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__optimize_class_member_5_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__il_peephole__optimize_method_decl_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl);
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r5 = MR_tfield(1, MR_tempr2, 1);
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__il_peephole__optimize_class_member_5_0_i5);
MR_def_label(ml_backend__il_peephole__optimize_class_member_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__optimize_class_member_5_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__il_peephole__optimize_class_member_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__il_peephole__optimize_class_member_5_0_i10);
MR_def_label(ml_backend__il_peephole__optimize_class_member_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		ml_backend__il_peephole__optimize_class_member_5_0_i12);
MR_def_label(ml_backend__il_peephole__optimize_class_member_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__136__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__il_peephole__optimize_class_member_5_0_i14);
MR_def_label(ml_backend__il_peephole__optimize_class_member_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__il_peephole__optimize_class_member_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module3)
	MR_init_entry1(fn__ml_backend__il_peephole__skip_over_block_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__il_peephole__skip_over_block_2_0);
	MR_init_label2(fn__ml_backend__il_peephole__skip_over_block_2_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'skip_over_block'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__il_peephole__skip_over_block_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__skip_over_block_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__skip_over_block_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,22)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__skip_over_block_2_0_i4);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if ((MR_r2 != MR_tempr2)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__skip_over_block_2_0_i4);
	}
	MR_r1 = MR_r3;
	MR_proceed();
	}
MR_def_label(fn__ml_backend__il_peephole__skip_over_block_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_localtailcall(fn__ml_backend__il_peephole__skip_over_block_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module4)
	MR_init_entry1(ml_backend__il_peephole__no_handwritten_code_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__no_handwritten_code_2_0);
	MR_init_label6(ml_backend__il_peephole__no_handwritten_code_2_0,36,4,6,10,22,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'no_handwritten_code'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__no_handwritten_code_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ml_backend__il_peephole__no_handwritten_code_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__no_handwritten_code_2_0_i22);
	}
	MR_r3 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,24)) {
		MR_GOTO_LAB(ml_backend__il_peephole__no_handwritten_code_2_0_i4);
	}
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ml_backend__il_peephole__no_handwritten_code_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,22)) {
		MR_GOTO_LAB(ml_backend__il_peephole__no_handwritten_code_2_0_i6);
	}
	MR_r1 = MR_tfield(3, MR_r4, 2);
	if ((MR_r2 == MR_r1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__no_handwritten_code_2_0_i22);
	}
MR_def_label(ml_backend__il_peephole__no_handwritten_code_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,21)) {
		MR_GOTO_LAB(ml_backend__il_peephole__no_handwritten_code_2_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(3, MR_r4, 2);
	MR_np_call_localret_ent(fn__ml_backend__il_peephole__skip_over_block_2_0,
		ml_backend__il_peephole__no_handwritten_code_2_0_i10);
MR_def_label(ml_backend__il_peephole__no_handwritten_code_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ml_backend__il_peephole__no_handwritten_code_2_0_i36);
MR_def_label(ml_backend__il_peephole__no_handwritten_code_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__il_peephole__no_handwritten_code_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ml_backend__il_peephole__no_handwritten_code_2_0_i36);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__reverse_1_0);
MR_decl_entry(fn__list__condense_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ml_backend__il_peephole_module5)
	MR_init_entry1(ml_backend__il_peephole__match_start_scope_1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__match_start_scope_1_3_0);
	MR_init_label10(ml_backend__il_peephole__match_start_scope_1_3_0,4,8,11,12,13,14,15,16,25,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match_start_scope_1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__match_start_scope_1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,21)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_1_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_1_3_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_sv(1), 2);
	}
	MR_np_call_localret_ent(ml_backend__il_peephole__no_handwritten_code_2_0,
		ml_backend__il_peephole__match_start_scope_1_3_0_i4);
MR_def_label(ml_backend__il_peephole__match_start_scope_1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_1_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,0);
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0,
		ml_backend__il_peephole__match_start_scope_1_3_0_i8);
MR_def_label(ml_backend__il_peephole__match_start_scope_1_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_1_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_1_3_0_i1);
	}
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ml_backend__il_peephole__match_start_scope_1_3_0_i11);
MR_def_label(ml_backend__il_peephole__match_start_scope_1_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		ml_backend__il_peephole__match_start_scope_1_3_0_i12);
MR_def_label(ml_backend__il_peephole__match_start_scope_1_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const(" unused in scope)", 17);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__il_peephole__match_start_scope_1_3_0_i13);
MR_def_label(ml_backend__il_peephole__match_start_scope_1_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(") --> nothing (", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__il_peephole__match_start_scope_1_3_0_i14);
MR_def_label(ml_backend__il_peephole__match_start_scope_1_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__il_peephole__match_start_scope_1_3_0_i15);
MR_def_label(ml_backend__il_peephole__match_start_scope_1_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("peephole: dup, stloc(", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__il_peephole__match_start_scope_1_3_0_i16);
MR_def_label(ml_backend__il_peephole__match_start_scope_1_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		ml_backend__il_peephole__match_start_scope_1_3_0_i25);
MR_def_label(ml_backend__il_peephole__match_start_scope_1_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__il_peephole__match_start_scope_1_3_0,1)
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

MR_decl_entry(list__filter_4_0);
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(ml_backend__il_peephole_module6)
	MR_init_entry1(ml_backend__il_peephole__match_start_scope_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__match_start_scope_2_3_0);
	MR_init_label5(ml_backend__il_peephole__match_start_scope_2_3_0,4,8,11,18,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match_start_scope_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__match_start_scope_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,21)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_2_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_2_3_0_i1);
	}
	MR_sv(3) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(ml_backend__il_peephole__no_handwritten_code_2_0,
		ml_backend__il_peephole__match_start_scope_2_3_0_i4);
MR_def_label(ml_backend__il_peephole__match_start_scope_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_2_3_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__398__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__il_peephole__match_start_scope_2_3_0_i8);
MR_def_label(ml_backend__il_peephole__match_start_scope_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_2_3_0_i1);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__il_peephole__match_start_scope_2_3_0_i11);
MR_def_label(ml_backend__il_peephole__match_start_scope_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		ml_backend__il_peephole__match_start_scope_2_3_0_i18);
MR_def_label(ml_backend__il_peephole__match_start_scope_2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__il_peephole__match_start_scope_2_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__takewhile_4_0);

MR_BEGIN_MODULE(ml_backend__il_peephole_module7)
	MR_init_entry1(ml_backend__il_peephole__skip_nops_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__skip_nops_3_0);
	MR_init_label1(ml_backend__il_peephole__skip_nops_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'skip_nops'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__skip_nops_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__takewhile_4_0,
		ml_backend__il_peephole__skip_nops_3_0_i3);
MR_def_label(ml_backend__il_peephole__skip_nops_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(__Unify___ml_backend__ilds__instr_0_0);
MR_decl_entry(fn__list__append_2_0);
MR_decl_entry(__Unify___ml_backend__ilds__variable_0_0);

MR_BEGIN_MODULE(ml_backend__il_peephole_module8)
	MR_init_entry1(ml_backend__il_peephole__match_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__match_4_0);
	MR_init_label10(ml_backend__il_peephole__match_4_0,5,8,12,3,19,21,23,14,35,37)
	MR_init_label10(ml_backend__il_peephole__match_4_0,44,45,29,51,88,46,58,61,65,67)
	MR_init_label1(ml_backend__il_peephole__match_4_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__match_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,17)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i3);
	}
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_np_call_localret_ent(list__takewhile_4_0,
		ml_backend__il_peephole__match_4_0_i5);
MR_def_label(ml_backend__il_peephole__match_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		ml_backend__il_peephole__match_4_0_i8);
MR_def_label(ml_backend__il_peephole__match_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__il_peephole__match_4_0_i12);
MR_def_label(ml_backend__il_peephole__match_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__il_peephole__match_4_0_i45);
MR_def_label(ml_backend__il_peephole__match_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,32)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i14);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match__242__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr2, 1) = MR_tfield(0, MR_r2, 3);
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(list__takewhile_4_0,
		ml_backend__il_peephole__match_4_0_i19);
MR_def_label(ml_backend__il_peephole__match_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__instr_0_0,
		ml_backend__il_peephole__match_4_0_i21);
MR_def_label(ml_backend__il_peephole__match_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__il_peephole__skip_nops_3_0,
		ml_backend__il_peephole__match_4_0_i23);
MR_def_label(ml_backend__il_peephole__match_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,17)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 17);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,7,1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__il_peephole__match_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,43)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i29);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,54)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,4);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tfield(3, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(2) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 46;
	MR_tfield(3, MR_tempr2, 1) = MR_tfield(0, MR_r2, 3);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	}
	MR_np_call_localret_ent(list__takewhile_4_0,
		ml_backend__il_peephole__match_4_0_i35);
MR_def_label(ml_backend__il_peephole__match_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__instr_0_0,
		ml_backend__il_peephole__match_4_0_i37);
MR_def_label(ml_backend__il_peephole__match_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,7,2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__il_peephole__match_4_0_i44);
MR_def_label(ml_backend__il_peephole__match_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__list__append_2_0,
		ml_backend__il_peephole__match_4_0_i45);
MR_def_label(ml_backend__il_peephole__match_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__il_peephole__match_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,21)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i46);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__il_peephole__match_start_scope_1_3_0,
		ml_backend__il_peephole__match_4_0_i51);
MR_def_label(ml_backend__il_peephole__match_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i88);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__il_peephole__match_start_scope_2_3_0);
	}
MR_def_label(ml_backend__il_peephole__match_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__il_peephole__match_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,54)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ml_backend__il_peephole__skip_nops_3_0,
		ml_backend__il_peephole__match_4_0_i58);
MR_def_label(ml_backend__il_peephole__match_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,46)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__variable_0_0,
		ml_backend__il_peephole__match_4_0_i61);
MR_def_label(ml_backend__il_peephole__match_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__list__append_2_0,
		ml_backend__il_peephole__match_4_0_i65);
MR_def_label(ml_backend__il_peephole__match_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,7,3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__list__append_2_0,
		ml_backend__il_peephole__match_4_0_i67);
MR_def_label(ml_backend__il_peephole__match_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__il_peephole__match_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module9)
	MR_init_entry1(ml_backend__il_peephole__opt_instr_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__opt_instr_5_0);
	MR_init_label4(ml_backend__il_peephole__opt_instr_5_0,4,7,8,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'opt_instr'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__opt_instr_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__il_peephole__match_4_0,
		ml_backend__il_peephole__opt_instr_5_0_i4);
MR_def_label(ml_backend__il_peephole__opt_instr_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__opt_instr_5_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__opt_instr_5_0_i7);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(ml_backend__il_peephole__opt_instr_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_localcall_lab(ml_backend__il_peephole__opt_instr_5_0,
		ml_backend__il_peephole__opt_instr_5_0_i8);
MR_def_label(ml_backend__il_peephole__opt_instr_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(ml_backend__il_peephole__opt_instr_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bool__or_3_0);

MR_BEGIN_MODULE(ml_backend__il_peephole_module10)
	MR_init_entry1(ml_backend__il_peephole__optimize_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__optimize_2_4_0);
	MR_init_label4(ml_backend__il_peephole__optimize_2_4_0,17,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__optimize_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__optimize_2_4_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ml_backend__il_peephole__optimize_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(ml_backend__il_peephole__optimize_2_4_0,
		ml_backend__il_peephole__optimize_2_4_0_i4);
MR_def_label(ml_backend__il_peephole__optimize_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__il_peephole__opt_instr_5_0,
		ml_backend__il_peephole__optimize_2_4_0_i5);
MR_def_label(ml_backend__il_peephole__optimize_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ml_backend__il_peephole__optimize_2_4_0_i6);
MR_def_label(ml_backend__il_peephole__optimize_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module11)
	MR_init_entry1(ml_backend__il_peephole__optimize_method_decl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__optimize_method_decl_5_0);
	MR_init_label3(ml_backend__il_peephole__optimize_method_decl_5_0,4,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_method_decl'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__optimize_method_decl_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__optimize_method_decl_5_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__il_peephole__optimize_2_4_0,
		ml_backend__il_peephole__optimize_method_decl_5_0_i4);
MR_def_label(ml_backend__il_peephole__optimize_method_decl_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ml_backend__il_peephole__optimize_method_decl_5_0_i5);
MR_def_label(ml_backend__il_peephole__optimize_method_decl_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ml_backend__il_peephole__optimize_method_decl_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module12)
	MR_init_entry1(fn__ml_backend__il_peephole__can_call_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__il_peephole__can_call_1_0);
	MR_init_label10(fn__ml_backend__il_peephole__can_call_1_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(fn__ml_backend__il_peephole__can_call_1_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(fn__ml_backend__il_peephole__can_call_1_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label10(fn__ml_backend__il_peephole__can_call_1_0,33,34,35,36,37,38,39,40,41,42)
	MR_init_label10(fn__ml_backend__il_peephole__can_call_1_0,43,44,45,46,47,48,49,50,51,52)
	MR_init_label10(fn__ml_backend__il_peephole__can_call_1_0,53,54,55,56,57,58,59,60,61,62)
	MR_init_label10(fn__ml_backend__il_peephole__can_call_1_0,63,64,65,66,67,68,69,70,71,72)
	MR_init_label10(fn__ml_backend__il_peephole__can_call_1_0,73,74,75,76,77,78,79,80,81,82)
	MR_init_label7(fn__ml_backend__il_peephole__can_call_1_0,83,84,85,86,87,88,538)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_call'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__il_peephole__can_call_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,14)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,15)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,21)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i8);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i9);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i15);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,22)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,11)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,12)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i19);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,13)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i20);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,16)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i21);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,23)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i22);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,17)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,24)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i24);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,18)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i25);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,19)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i26);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,25)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i27);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,20)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i28);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i29);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,25)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i31);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,26)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i32);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,27)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i33);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,28)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i34);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,29)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i35);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,30)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i36);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,31)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i37);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,32)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i38);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,33)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i39);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,34)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i40);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,35)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i41);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,58)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i42);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i43);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,36)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i44);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,37)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i45);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,19)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i46);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,23)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i47);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,38)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i48);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i49);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,39)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i50);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,22)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i51);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,24)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i52);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i53);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i54);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,40)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i55);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,20)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i56);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,41)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i57);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,42)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i58);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,43)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i59);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,59)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i60);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i61);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i62);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i63);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,44)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i64);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,45)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i65);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,46)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i66);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,47)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i67);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i68);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i69);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i70);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,60)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i71);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i72);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,61)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i73);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,48)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i74);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i75);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,49)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i76);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i77);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,62)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i78);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,13)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i79);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,50)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i80);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,51)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i81);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,14)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i82);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,52)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i83);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,21)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i84);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,63)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i85);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,15)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i86);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,53)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i87);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,54)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i88);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,16)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i538);
	}
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,538)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module13)
	MR_init_entry1(fn__ml_backend__il_peephole__equivalent_to_nop_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__il_peephole__equivalent_to_nop_1_0);
	MR_init_label10(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label10(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,33,34,35,36,37,38,39,40,41,42)
	MR_init_label10(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,43,44,45,46,144,47,48,49,50,53)
	MR_init_label10(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,51,55,56,57,58,59,60,61,62,63)
	MR_init_label10(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,64,65,66,67,68,69,70,71,72,73)
	MR_init_label10(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,74,75,76,77,78,79,80,81,82,83)
	MR_init_label10(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,84,85,86,89,87,91,92,93,94,560)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equivalent_to_nop'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__il_peephole__equivalent_to_nop_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,14)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,15)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,21)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i8);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i9);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i15);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,22)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,11)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,12)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i19);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,13)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,16)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i21);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,23)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i22);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,17)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,24)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i24);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,18)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i25);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,19)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i26);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,25)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i27);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,20)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i28);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i29);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i30);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,25)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i31);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,26)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i32);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,27)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i33);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,28)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i34);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,29)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i35);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,30)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i36);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,31)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i37);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,32)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i38);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,33)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i39);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,34)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i40);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,35)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i41);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,58)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i42);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i43);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,36)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i44);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,37)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i45);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,19)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i46);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,23)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i47);
	}
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,38)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i48);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i49);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,39)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i50);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,22)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i51);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i53);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i144);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,24)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i55);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i56);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i57);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,40)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i58);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,20)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i59);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,41)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i60);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,42)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i61);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,43)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i62);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,59)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i63);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i64);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i65);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i66);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,44)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i67);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,45)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i68);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,46)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i69);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,47)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i70);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i71);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i72);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i73);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,60)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i74);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i75);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,61)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i76);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,48)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i77);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i78);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,49)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i79);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i80);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,62)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i81);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,13)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i82);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,50)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i83);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,51)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i84);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,14)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i85);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,52)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i86);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,21)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i87);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i89);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i144);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,63)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i91);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,15)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i92);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,53)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i93);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,54)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i94);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,16)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i560);
	}
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,560)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module14)
	MR_init_entry1(fn__ml_backend__il_peephole__can_branch_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__il_peephole__can_branch_1_0);
	MR_init_label10(fn__ml_backend__il_peephole__can_branch_1_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(fn__ml_backend__il_peephole__can_branch_1_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(fn__ml_backend__il_peephole__can_branch_1_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label10(fn__ml_backend__il_peephole__can_branch_1_0,33,34,35,36,37,38,39,40,41,42)
	MR_init_label10(fn__ml_backend__il_peephole__can_branch_1_0,43,44,45,46,47,48,49,50,51,52)
	MR_init_label10(fn__ml_backend__il_peephole__can_branch_1_0,53,54,55,56,57,58,59,60,61,62)
	MR_init_label10(fn__ml_backend__il_peephole__can_branch_1_0,63,64,65,66,67,68,69,70,71,72)
	MR_init_label10(fn__ml_backend__il_peephole__can_branch_1_0,73,74,75,76,77,78,79,80,81,82)
	MR_init_label10(fn__ml_backend__il_peephole__can_branch_1_0,83,84,85,86,87,88,89,90,273,91)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_branch'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__il_peephole__can_branch_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,14)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,15)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,21)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i8);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i9);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i15);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,22)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,11)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,12)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i19);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,13)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i20);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,16)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i21);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,23)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i22);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,17)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,24)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i24);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,18)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i25);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,19)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i26);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,25)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i27);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,20)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i28);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i29);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i30);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,25)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i31);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,26)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i32);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,27)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i33);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,28)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i34);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,29)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i35);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,30)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i36);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,31)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,32)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i38);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,33)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,34)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i40);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,35)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i41);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,58)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i42);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i43);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,36)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i44);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,37)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i45);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,19)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i46);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,23)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i47);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,38)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i48);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i49);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,39)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i50);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,22)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i51);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,24)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i52);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i53);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i54);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,40)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i55);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,20)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i56);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,41)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i57);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,42)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i58);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,43)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i59);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,59)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i60);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i61);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i62);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i63);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,44)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i64);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,45)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i65);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,46)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i66);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,47)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i67);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i68);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i69);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i70);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,60)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i71);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i72);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,61)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i73);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,48)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i74);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i75);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,49)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i76);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i77);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,62)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i78);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,13)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i79);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,50)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i80);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,51)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i81);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,14)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i82);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,52)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i83);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,21)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i84);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,63)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i85);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,15)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i86);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,53)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i87);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,54)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i88);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,16)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i89);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,17)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i90);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,55)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i91);
	}
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,56)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i273);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ml_backend__il_peephole_module15)
	MR_init_entry1(__Unify___ml_backend__il_peephole__instrs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__il_peephole__instrs_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__il_peephole__instrs_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
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

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(ml_backend__il_peephole_module16)
	MR_init_entry1(__Compare___ml_backend__il_peephole__instrs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__il_peephole__instrs_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__il_peephole__instrs_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
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

MR_decl_entry(fn__ml_backend__ilds__calculate_max_stack_1_0);

MR_BEGIN_MODULE(ml_backend__il_peephole_module17)
	MR_init_entry1(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__129__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__129__1_1_0);
	MR_init_label1(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__129__1_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__optimize_class_member__129__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__129__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__129__1_1_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ml_backend__ilds__calculate_max_stack_1_0);
MR_def_label(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__129__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module18)
	MR_init_entry1(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__136__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__136__1_2_0);
	MR_init_label1(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__136__1_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__optimize_class_member__136__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__136__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__136__1_2_0_i2);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__136__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module19)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match__242__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__IntroducedFrom__pred__match__242__1_2_0);
	MR_init_label1(ml_backend__il_peephole__IntroducedFrom__pred__match__242__1_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__match__242__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match__242__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,20)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match__242__1_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) != 0);
	MR_proceed();
	}
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match__242__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module20)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0);
	MR_init_label7(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0,5,3,12,10,16,18,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__match__284__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,46)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__variable_0_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0_i5);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r2,3,20)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0_i1);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,54)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0_i10);
	}
	MR_sv(2) = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__variable_0_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0_i12);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0_i1);
	}
	MR_r2 = MR_sv(2);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r2,3,53)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__il_peephole__can_call_1_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0_i16);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__il_peephole__can_branch_1_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0_i18);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0_i1);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0,1)
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


MR_BEGIN_MODULE(ml_backend__il_peephole_module21)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match__225__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__IntroducedFrom__pred__match__225__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__match__225__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match__225__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = !(((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 20)));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module22)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match__229__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__IntroducedFrom__pred__match__229__1_1_0);
	MR_init_label1(ml_backend__il_peephole__IntroducedFrom__pred__match__229__1_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__match__229__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match__229__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match__229__1_1_0_i2);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match__229__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module23)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_0);
	MR_init_label5(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_0,5,3,10,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__match_start_scope_1__330__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,46)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__variable_0_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_0_i5);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,47)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_0_i8);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__variable_0_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_0_i10);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_0_i1);
	}
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_0,1)
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

MR_decl_entry(assoc_list__search_3_0);

MR_BEGIN_MODULE(ml_backend__il_peephole_module24)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_0);
	MR_init_label3(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_0,3,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__match_start_scope_1__323__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_sv(2), 0);
	}
	MR_np_call_localret_ent(assoc_list__search_3_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_0_i3);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,5);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__takewhile_4_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_0_i6);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_0,1)
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


MR_BEGIN_MODULE(ml_backend__il_peephole_module25)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__343__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__343__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__match_start_scope_1__343__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__343__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 != (MR_Integer) MR_tbmkword(0, 6));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module26)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_0);
	MR_init_label3(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_0,3,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__match_start_scope_1__341__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__takewhile_4_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_0_i3);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,6)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_0_i7);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_tempr3, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,4,5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_tempr3, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_0,1)
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


MR_BEGIN_MODULE(ml_backend__il_peephole_module27)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__363__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__363__1_1_0);
	MR_init_label1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__363__1_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__match_start_scope_1__363__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__363__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__363__1_1_0_i2);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__363__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module28)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0);
	MR_init_label7(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0,5,3,10,8,15,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__match_start_scope_2__402__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,46)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__variable_0_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0_i5);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,47)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__variable_0_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0_i10);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,54)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0_i13);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__variable_0_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0_i15);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0_i1);
	}
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0,1)
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


MR_BEGIN_MODULE(ml_backend__il_peephole_module29)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__398__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__398__1_2_0);
	MR_init_label1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__398__1_2_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__match_start_scope_2__398__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__398__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,6);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__takewhile_4_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__398__1_2_0_i4);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__398__1_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__format_3_0);

MR_BEGIN_MODULE(ml_backend__il_peephole_module30)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__411__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__411__1_2_0);
	MR_init_label1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__411__1_2_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__match_start_scope_2__411__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__411__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("peephole: unused local var %s eliminated", 40);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__411__1_2_0_i4);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__411__1_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module31)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__478__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__478__1_1_0);
	MR_init_label1(ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__478__1_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__skip_nops__478__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__478__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,
		ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__478__1_1_0_i2);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__478__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module32)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0);
	MR_init_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0,21,2,6,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__keep_looking__ho1__[1, 4]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0_i2);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0_i6);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0_i4);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0_i21);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module33)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0);
	MR_init_label3(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0,3,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__IntroducedFrom__pred__match_start_scope_1__360__1__ho2__[3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(0, MR_r3, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r3 = MR_tfield(0, MR_r3, 1);
	MR_np_call_localret_ent(list__takewhile_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0_i3);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,54)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0_i1);
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0_i6);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__il_peephole_maybe_bunch_0(void)
{
	ml_backend__il_peephole_module0();
	ml_backend__il_peephole_module1();
	ml_backend__il_peephole_module2();
	ml_backend__il_peephole_module3();
	ml_backend__il_peephole_module4();
	ml_backend__il_peephole_module5();
	ml_backend__il_peephole_module6();
	ml_backend__il_peephole_module7();
	ml_backend__il_peephole_module8();
	ml_backend__il_peephole_module9();
	ml_backend__il_peephole_module10();
	ml_backend__il_peephole_module11();
	ml_backend__il_peephole_module12();
	ml_backend__il_peephole_module13();
	ml_backend__il_peephole_module14();
	ml_backend__il_peephole_module15();
	ml_backend__il_peephole_module16();
	ml_backend__il_peephole_module17();
	ml_backend__il_peephole_module18();
	ml_backend__il_peephole_module19();
	ml_backend__il_peephole_module20();
	ml_backend__il_peephole_module21();
	ml_backend__il_peephole_module22();
	ml_backend__il_peephole_module23();
	ml_backend__il_peephole_module24();
	ml_backend__il_peephole_module25();
	ml_backend__il_peephole_module26();
	ml_backend__il_peephole_module27();
	ml_backend__il_peephole_module28();
	ml_backend__il_peephole_module29();
	ml_backend__il_peephole_module30();
	ml_backend__il_peephole_module31();
	ml_backend__il_peephole_module32();
	ml_backend__il_peephole_module33();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__il_peephole__init(void);
void mercury__ml_backend__il_peephole__init_type_tables(void);
void mercury__ml_backend__il_peephole__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__il_peephole__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__il_peephole__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ml_backend__il_peephole__init_threadscope_string_table(void);
#endif

void mercury__ml_backend__il_peephole__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__il_peephole_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__il_peephole__type_ctor_info_instrs_0,
		ml_backend__il_peephole__instrs_0_0);
	mercury__ml_backend__il_peephole__init_debugger();
}

void mercury__ml_backend__il_peephole__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__il_peephole__type_ctor_info_instrs_0);
	}
}


void mercury__ml_backend__il_peephole__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__il_peephole__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__il_peephole);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__il_peephole__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ml_backend__il_peephole__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
