/*
** Automatically generated from `il_peephole.m'
** by the Mercury compiler,
** version rotd-2010-03-01, configured for x86_64-unknown-linux-gnu.
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
#line 136 "../library/io.int2"
#include "io.mh"

#line 28 "ml_backend.il_peephole.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 32 "ml_backend.il_peephole.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "ml_backend.il_peephole.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 40 "ml_backend.il_peephole.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "ml_backend.il_peephole.c"
#line 31 "../library/array.int2"
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
	MR_String f1;
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
MR_decl_label10(ml_backend__il_peephole__match_4_0, 70,97,3,8,10,12,18,24,26,33)
MR_decl_label10(ml_backend__il_peephole__match_4_0, 35,37,40,44,45,46,51,90,56,58)
MR_decl_label3(ml_backend__il_peephole__match_4_0, 61,65,67)
MR_decl_label10(ml_backend__il_peephole__match_start_scope_1_3_0, 4,8,11,12,13,14,15,16,25,1)
MR_decl_label5(ml_backend__il_peephole__match_start_scope_2_3_0, 4,8,11,18,1)
MR_decl_label6(ml_backend__il_peephole__no_handwritten_code_2_0, 36,4,6,10,22,8)
MR_decl_label4(ml_backend__il_peephole__opt_instr_5_0, 4,7,8,2)
MR_decl_label4(ml_backend__il_peephole__optimize_2_4_0, 14,4,5,6)
MR_decl_label6(ml_backend__il_peephole__optimize_class_member_5_0, 6,8,11,13,15,3)
MR_decl_label8(ml_backend__il_peephole__optimize_decl_5_0, 21,26,6,27,14,28,10,3)
MR_decl_label3(ml_backend__il_peephole__optimize_method_decl_5_0, 4,5,2)
MR_decl_label1(ml_backend__il_peephole__skip_nops_3_0, 3)
MR_decl_label1(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__129__1_1_0, 2)
MR_decl_label1(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__136__1_2_0, 2)
MR_decl_label2(fn__ml_backend__il_peephole__can_branch_1_0, 89,94)
MR_decl_label2(fn__ml_backend__il_peephole__can_call_1_0, 69,94)
MR_decl_label6(fn__ml_backend__il_peephole__equivalent_to_nop_1_0, 107,110,35,87,114,90)
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
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_method_body_decl_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__optimize_decl_5_0_3;
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
MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl),
MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl),
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
MR_CTOR0_ADDR(ml_backend__ilasm, il_decl),
MR_CTOR0_ADDR(ml_backend__ilasm, il_decl),
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
mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_2;
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__ilds, instr)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_2,
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
MR_TAG_COMMON(1,7,2),
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
mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_4;
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_3,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__ilds, instr)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_4,
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
MR_string_const("peephole -- eliminated branch to ret", 36)
},
{
MR_string_const("peephole: ldc(X), stloc(X), ldloc(X) --> ldc(X), dup, stloc(X)", 62)
},
{
MR_string_const("peephole -- eliminated instrs after ret", 39)
},
{
MR_string_const("peephole: stloc(X), ldloc(X) --> dup, stloc(X)", 46)
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ilds__type_ctor_info_instr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_instr_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__il_peephole__type_ctor_info_instrs_0 = {
	0,
	13,
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
"c5;q;c4;"
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
"c4;q;c3;"
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
"c4;q;c4;"
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
"c3;q;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_4 = {
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
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_3 = {
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
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_2 = {
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
"d4;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_1 = {
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
"d2;c7;"
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
"d1;c4;"
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
"c11;"
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
"c4;"
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
"d1;c6;d1;c4;d1;c8;"
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
"d1;c6;d1;c4;d1;c5;"
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
"d1;c6;d1;c4;d1;c3;"
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
"d1;c6;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__optimize_decl_5_0_3 = {
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
"d1;c6;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__optimize_decl_5_0_2 = {
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
"d1;c6;d3;c2;"
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
"d1;c6;d1;c2;"
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
"d1;c4;"
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
	MR_init_label8(ml_backend__il_peephole__optimize_decl_5_0,21,26,6,27,14,28,10,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_decl'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__optimize_decl_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__il_peephole__optimize_decl_5_0_i26) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__optimize_decl_5_0_i27) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__optimize_decl_5_0_i28) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__optimize_decl_5_0_i3));
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_sv(4) = MR_tfield(0, MR_r2, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, class_member);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r5 = MR_tfield(0, MR_tempr2, 4);
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__il_peephole__optimize_decl_5_0_i6);
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(ml_backend__il_peephole__optimize_decl_5_0_i21);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, il_decl);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r5 = MR_tfield(1, MR_tempr2, 1);
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__il_peephole__optimize_decl_5_0_i14);
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__il_peephole__optimize_method_decl_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r5 = MR_tfield(2, MR_tempr2, 1);
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__il_peephole__optimize_decl_5_0_i10);
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,3)
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
	MR_init_label6(ml_backend__il_peephole__optimize_class_member_5_0,6,8,11,13,15,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_class_member'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__optimize_class_member_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r2),0)) {
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
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl);
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r5 = MR_tfield(0, MR_tempr2, 1);
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__il_peephole__optimize_class_member_5_0_i6);
MR_def_label(ml_backend__il_peephole__optimize_class_member_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__optimize_class_member_5_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__il_peephole__optimize_class_member_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(5) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__il_peephole__optimize_class_member_5_0_i11);
MR_def_label(ml_backend__il_peephole__optimize_class_member_5_0,11)
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
		ml_backend__il_peephole__optimize_class_member_5_0_i13);
MR_def_label(ml_backend__il_peephole__optimize_class_member_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__136__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__il_peephole__optimize_class_member_5_0_i15);
MR_def_label(ml_backend__il_peephole__optimize_class_member_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
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
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
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
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(ml_backend__il_peephole__no_handwritten_code_2_0_i4);
	}
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ml_backend__il_peephole__no_handwritten_code_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__no_handwritten_code_2_0_i6);
	}
	MR_r1 = MR_tfield(3, MR_r4, 2);
	if ((MR_r2 == MR_r1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__no_handwritten_code_2_0_i22);
	}
MR_def_label(ml_backend__il_peephole__no_handwritten_code_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
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
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_1_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_1_3_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
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
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
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
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_2_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_2_3_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(3, MR_r1, 2);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
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
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__il_peephole__match_start_scope_2_3_0_i8);
MR_def_label(ml_backend__il_peephole__match_start_scope_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_2_3_0_i1);
	}
	MR_sv(1) = MR_r2;
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
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
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

MR_decl_entry(__Unify___ml_backend__ilds__instr_0_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__list__append_2_0);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(__Unify___ml_backend__ilds__variable_0_0);

MR_BEGIN_MODULE(ml_backend__il_peephole_module8)
	MR_init_entry1(ml_backend__il_peephole__match_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__il_peephole__match_4_0);
	MR_init_label10(ml_backend__il_peephole__match_4_0,70,97,3,8,10,12,18,24,26,33)
	MR_init_label10(ml_backend__il_peephole__match_4_0,35,37,40,44,45,46,51,90,56,58)
	MR_init_label3(ml_backend__il_peephole__match_4_0,61,65,67)
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
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i70);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i46) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i18) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i56) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i97));
MR_def_label(ml_backend__il_peephole__match_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i97);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r1),17)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i35);
	}
MR_def_label(ml_backend__il_peephole__match_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(ml_backend__il_peephole__match_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i97);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i97);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match__242__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_sv(1), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(1), 0) = MR_tfield(0, MR_r2, 3);
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(list__takewhile_4_0,
		ml_backend__il_peephole__match_4_0_i8);
MR_def_label(ml_backend__il_peephole__match_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i97);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__instr_0_0,
		ml_backend__il_peephole__match_4_0_i10);
MR_def_label(ml_backend__il_peephole__match_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i97);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__il_peephole__skip_nops_3_0,
		ml_backend__il_peephole__match_4_0_i12);
MR_def_label(ml_backend__il_peephole__match_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i97);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,17)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i97);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 17);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__il_peephole__match_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i97);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i97);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,34)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i97);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,4);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tfield(3, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(2) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 26;
	MR_tfield(3, MR_tempr2, 1) = MR_tfield(0, MR_r2, 3);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	}
	MR_np_call_localret_ent(list__takewhile_4_0,
		ml_backend__il_peephole__match_4_0_i24);
MR_def_label(ml_backend__il_peephole__match_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i97);
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
		ml_backend__il_peephole__match_4_0_i26);
MR_def_label(ml_backend__il_peephole__match_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i97);
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
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,7,1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__il_peephole__match_4_0_i33);
MR_def_label(ml_backend__il_peephole__match_4_0,33)
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
MR_def_label(ml_backend__il_peephole__match_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_np_call_localret_ent(list__takewhile_4_0,
		ml_backend__il_peephole__match_4_0_i37);
MR_def_label(ml_backend__il_peephole__match_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i97);
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
		ml_backend__il_peephole__match_4_0_i40);
MR_def_label(ml_backend__il_peephole__match_4_0,40)
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
		ml_backend__il_peephole__match_4_0_i44);
MR_def_label(ml_backend__il_peephole__match_4_0,44)
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
MR_def_label(ml_backend__il_peephole__match_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__il_peephole__match_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i97);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i97);
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
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i90);
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
MR_def_label(ml_backend__il_peephole__match_4_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__il_peephole__match_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i97);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ml_backend__il_peephole__skip_nops_3_0,
		ml_backend__il_peephole__match_4_0_i58);
MR_def_label(ml_backend__il_peephole__match_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i97);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,26)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i97);
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
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i97);
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
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,7,3);
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
	MR_init_label4(ml_backend__il_peephole__optimize_2_4_0,14,4,5,6)
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
		MR_GOTO_LAB(ml_backend__il_peephole__optimize_2_4_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ml_backend__il_peephole__optimize_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(ml_backend__il_peephole__optimize_2_4_0,
		ml_backend__il_peephole__optimize_2_4_0_i4);
MR_def_label(ml_backend__il_peephole__optimize_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__il_peephole__opt_instr_5_0,
		ml_backend__il_peephole__optimize_2_4_0_i5);
MR_def_label(ml_backend__il_peephole__optimize_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ml_backend__il_peephole__optimize_2_4_0_i6);
MR_def_label(ml_backend__il_peephole__optimize_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
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
	MR_init_label2(fn__ml_backend__il_peephole__can_call_1_0,69,94)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_call'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__il_peephole__can_call_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i94);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i69) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i69) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i69) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i69) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i69) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i69) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i94));
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,94)
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
	MR_init_label6(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,107,110,35,87,114,90)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equivalent_to_nop'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__il_peephole__equivalent_to_nop_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i107) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i110));
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_r1),13)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i90);
	}
	MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114);
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i87) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i35) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114));
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114);
	}
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i90);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i114);
	}
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i90);
	}
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module14)
	MR_init_entry1(fn__ml_backend__il_peephole__can_branch_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__il_peephole__can_branch_1_0);
	MR_init_label2(fn__ml_backend__il_peephole__can_branch_1_0,89,94)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_branch'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__il_peephole__can_branch_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i94);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i89) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i89) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i89) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i89) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i89) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i89) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i89) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i89) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i89) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i89) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i89) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i94));
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
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
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__136__1_2_0_i2);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
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
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match__242__1_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r2, 0);
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
	if (MR_RTAGS_TESTR(MR_r2,3,26)) {
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
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_0_i1);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,34)) {
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
	if (MR_RTAGS_TEST(MR_r2,3,33)) {
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
	MR_r1 = (MR_tag(MR_r1) != MR_mktag((MR_Integer) 2));
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
	if (MR_RTAGS_TESTR(MR_r2,3,26)) {
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
	if (MR_RTAGS_TESTR(MR_r2,3,27)) {
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
	if (MR_RTAGS_TESTR(MR_r2,3,26)) {
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
	if (MR_RTAGS_TESTR(MR_r2,3,27)) {
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
	if (MR_RTAGS_TESTR(MR_r2,3,34)) {
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
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
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
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
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
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
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
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
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
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
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
	if (MR_RTAGS_TESTR(MR_tempr1,3,34)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0_i1);
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr2;
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
