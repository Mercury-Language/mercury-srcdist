/*
** Automatically generated from `il_peephole.m'
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
INIT mercury__ml_backend__il_peephole__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 130 "../library/io.int2"
#include "io.mh"

#line 27 "ml_backend.il_peephole.c"
#line 136 "../library/io.int2"
#include "string.mh"

#line 31 "ml_backend.il_peephole.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ml_backend.il_peephole.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 39 "ml_backend.il_peephole.c"
#line 28 "../library/array.int2"
#include "array.mh"

#line 43 "ml_backend.il_peephole.c"
#line 44 "ml_backend.il_peephole.c"
#include "ml_backend.il_peephole.mh"

#line 47 "ml_backend.il_peephole.c"
#line 48 "ml_backend.il_peephole.c"
#ifndef ML_BACKEND__IL_PEEPHOLE_DECL_GUARD
#define ML_BACKEND__IL_PEEPHOLE_DECL_GUARD

#line 52 "ml_backend.il_peephole.c"
#line 53 "ml_backend.il_peephole.c"

#endif
#line 56 "ml_backend.il_peephole.c"


struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
static const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
static const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
static const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
static const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
};
static const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[3];
};
static const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
static const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_String f1;
};
static const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__il_peephole__type_ctor_info_instrs_0;
MR_decl_label1(ml_backend__il_peephole__IntroducedFrom__pred__match__207__1_1_0, 2)
MR_decl_label1(ml_backend__il_peephole__IntroducedFrom__pred__match__220__1_2_0, 2)
MR_decl_label7(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0, 5,3,12,10,16,18,1)
MR_decl_label3(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__301__1_3_0, 3,5,1)
MR_decl_label5(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__308__1_2_0, 5,3,10,8,1)
MR_decl_label3(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__319__1_4_0, 2,6,1)
MR_decl_label1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_1_0, 2)
MR_decl_label1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__376__1_2_0, 2)
MR_decl_label7(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0, 5,3,10,8,15,13,1)
MR_decl_label1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__389__1_2_0, 2)
MR_decl_label1(ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__456__1_1_0, 2)
MR_decl_label3(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_51_56_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0, 2,5,1)
MR_decl_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0, 21,2,6,4,1)
MR_decl_label8(ml_backend__il_peephole__match_4_0, 5,10,55,15,18,20,22,25)
MR_decl_label8(ml_backend__il_peephole__match_4_0, 29,31,33,35,37,40,42,43)
MR_decl_label6(ml_backend__il_peephole__match_4_0, 4,46,48,49,50,1)
MR_decl_label7(ml_backend__il_peephole__match_start_scope_1_3_0, 4,6,9,10,11,12,1)
MR_decl_label5(ml_backend__il_peephole__match_start_scope_2_3_0, 4,6,8,9,1)
MR_decl_label6(ml_backend__il_peephole__no_handwritten_code_2_0, 36,4,6,10,22,8)
MR_decl_label4(ml_backend__il_peephole__opt_instr_5_0, 4,8,7,2)
MR_decl_label4(ml_backend__il_peephole__optimize_2_4_0, 4,5,6,3)
MR_decl_label6(ml_backend__il_peephole__optimize_class_member_5_0, 4,6,7,8,9,2)
MR_decl_label7(ml_backend__il_peephole__optimize_decl_5_0, 24,4,2,7,5,10,8)
MR_decl_label3(ml_backend__il_peephole__optimize_method_decl_5_0, 4,5,2)
MR_decl_label1(ml_backend__il_peephole__skip_nops_3_0, 2)
MR_decl_label1(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__113__1_1_0, 2)
MR_decl_label1(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__122__1_2_0, 2)
MR_decl_label2(fn__ml_backend__il_peephole__can_branch_1_0, 70,97)
MR_decl_label2(fn__ml_backend__il_peephole__can_call_1_0, 90,97)
MR_decl_label6(fn__ml_backend__il_peephole__equivalent_to_nop_1_0, 4,33,34,39,109,44)
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
MR_decl_static(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__113__1_1_0)
MR_decl_static(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__122__1_2_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match__220__1_2_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match__203__1_1_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match__207__1_1_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__308__1_2_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__301__1_3_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__321__1_1_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__319__1_4_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_1_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__376__1_2_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__389__1_2_0)
MR_decl_static(ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__456__1_1_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_51_56_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0)

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__il_peephole_optimize_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_decl_0;
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
MR_CTOR0_ADDR(ml_backend__ilasm, decl),
MR_CTOR0_ADDR(ml_backend__ilasm, decl),
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
MR_CTOR0_ADDR(ml_backend__ilasm, decl),
MR_CTOR0_ADDR(ml_backend__ilasm, decl),
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
mercury_data__closure_layout__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__301__1_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__376__1_2_0_1;
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__301__1_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__ilds, variable),
MR_CTOR0_ADDR(ml_backend__ilds, instr)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__376__1_2_0_1,
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
MR_ENTRY_AP(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__113__1_1_0),
0
},
{
MR_COMMON(3,0),
MR_ENTRY_AP(fn__f_105_110_116_95_95_43_2_0),
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__389__1_2_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__456__1_1_0),
0
},
{
MR_COMMON(6,1),
MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match__203__1_1_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match__207__1_1_0),
0
},
{
MR_COMMON(6,3),
MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__321__1_1_0),
0
},
{
MR_COMMON(6,4),
MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_1_0),
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
MR_TAG_COMMON(1,7,3),
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
mercury_data__closure_layout__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__319__1_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_51_56_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0_1;
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__319__1_4_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__ilds, instr)
},
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_51_56_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0_1,
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
MR_string_const("peephole: stloc(X), ldloc(X) --> dup, stloc(X)", 46)
},
{
MR_string_const("peephole -- eliminated instrs after ret", 39)
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
88,
"d1;c6;t;c1;"
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
92,
"d1;c6;e;t;c1;"
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
"d1;c6;e;e;t;c1;"
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
108,
"d1;c6;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__optimize_class_member_5_0_2 = {
{
MR_FUNCTION,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_113",
2,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
113,
"d1;c6;t;c3;d1;c3;"
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
118,
"d1;c6;t;c3;d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__optimize_class_member_5_0_4 = {
{
MR_FUNCTION,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_122",
3,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
122,
"d1;c6;t;c3;d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_start_scope_2_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_376",
2,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
376,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_start_scope_2_3_0_2 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_389",
2,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
389,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__skip_nops_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_456",
1,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
456,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_220",
2,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
219,
"d2;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_2 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_262",
2,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
262,
"d4;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_3 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_203",
1,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
202,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__match_4_0_4 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_207",
1,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
207,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__301__1_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_308",
2,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
308,
"d1;c5;q;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__319__1_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_321",
1,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
321,
"d1;c6;q;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__376__1_2_0_1 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_380",
2,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
380,
"d1;c6;q;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_51_56_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.il_peephole",
"ml_backend.il_peephole",
"lambda_il_peephole_m_341",
1,
0
},
"ml_backend.il_peephole",
"il_peephole.m",
341,
"d1;c7;q;c4;"
};

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_decl_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(ml_backend__il_peephole_module0)
	MR_init_entry1(ml_backend__il_peephole__il_peephole_optimize_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__il_peephole__il_peephole_optimize_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__il_peephole__optimize_decl_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, decl);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, decl);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
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
	MR_init_label7(ml_backend__il_peephole__optimize_decl_5_0,24,4,2,7,5,10,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__optimize_decl_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__optimize_decl_5_0_i2);
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
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, class_member);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, class_member);
	MR_r6 = MR_r3;
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r5 = MR_ctfield(0, MR_tempr2, 4);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__il_peephole__optimize_decl_5_0_i4);
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,4)
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
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__il_peephole__optimize_decl_5_0_i5);
	}
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
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(2, MR_tempr3, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl);
	MR_r6 = MR_r3;
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r5 = MR_ctfield(2, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__il_peephole__optimize_decl_5_0_i7);
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__optimize_decl_5_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(ml_backend__il_peephole__optimize_decl_5_0_i24);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, decl);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, decl);
	MR_r6 = MR_r3;
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r5 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__il_peephole__optimize_decl_5_0_i10);
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__il_peephole__optimize_decl_5_0,8)
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
	MR_init_label6(ml_backend__il_peephole__optimize_class_member_5_0,4,6,7,8,9,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__optimize_class_member_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__optimize_class_member_5_0_i2);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__il_peephole__optimize_method_decl_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl);
	MR_r6 = MR_r3;
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r5 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__il_peephole__optimize_class_member_5_0_i4);
MR_def_label(ml_backend__il_peephole__optimize_class_member_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__optimize_class_member_5_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ml_backend__il_peephole__optimize_class_member_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__il_peephole__optimize_class_member_5_0_i7);
MR_def_label(ml_backend__il_peephole__optimize_class_member_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r5 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		ml_backend__il_peephole__optimize_class_member_5_0_i8);
MR_def_label(ml_backend__il_peephole__optimize_class_member_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__122__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__il_peephole__optimize_class_member_5_0_i9);
MR_def_label(ml_backend__il_peephole__optimize_class_member_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
MR_def_label(ml_backend__il_peephole__optimize_class_member_5_0,2)
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
	MR_init_label2(fn__ml_backend__il_peephole__skip_over_block_2_0,3,4)
MR_BEGIN_CODE

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
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__skip_over_block_2_0_i4);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
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
	MR_init_label6(ml_backend__il_peephole__no_handwritten_code_2_0,36,4,6,10,22,8)
MR_BEGIN_CODE

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
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
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
	MR_r1 = MR_ctfield(3, MR_r4, 2);
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
	MR_r2 = MR_ctfield(3, MR_r4, 2);
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
MR_decl_entry(fn__string__format_2_0);

MR_BEGIN_MODULE(ml_backend__il_peephole_module5)
	MR_init_entry1(ml_backend__il_peephole__match_start_scope_1_3_0);
	MR_init_label7(ml_backend__il_peephole__match_start_scope_1_3_0,4,6,9,10,11,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__match_start_scope_1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_1_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_1_3_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(3, MR_sv(1), 2);
	}
	MR_np_call_localret_ent(ml_backend__il_peephole__no_handwritten_code_2_0,
		ml_backend__il_peephole__match_start_scope_1_3_0_i4);
MR_def_label(ml_backend__il_peephole__match_start_scope_1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_1_3_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0,
		ml_backend__il_peephole__match_start_scope_1_3_0_i6);
MR_def_label(ml_backend__il_peephole__match_start_scope_1_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_1_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_1_3_0_i1);
	}
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ml_backend__il_peephole__match_start_scope_1_3_0_i9);
MR_def_label(ml_backend__il_peephole__match_start_scope_1_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__list__condense_1_0,
		ml_backend__il_peephole__match_start_scope_1_3_0_i10);
MR_def_label(ml_backend__il_peephole__match_start_scope_1_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("peephole: dup, stloc(%s) --> nothing (%s unused in scope)", 57);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		ml_backend__il_peephole__match_start_scope_1_3_0_i11);
MR_def_label(ml_backend__il_peephole__match_start_scope_1_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
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
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		ml_backend__il_peephole__match_start_scope_1_3_0_i12);
MR_def_label(ml_backend__il_peephole__match_start_scope_1_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__il_peephole__match_start_scope_1_3_0,1)
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

MR_decl_entry(list__filter_4_0);
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(ml_backend__il_peephole_module6)
	MR_init_entry1(ml_backend__il_peephole__match_start_scope_2_3_0);
	MR_init_label5(ml_backend__il_peephole__match_start_scope_2_3_0,4,6,8,9,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__match_start_scope_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_2_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_2_3_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__il_peephole__no_handwritten_code_2_0,
		ml_backend__il_peephole__match_start_scope_2_3_0_i4);
MR_def_label(ml_backend__il_peephole__match_start_scope_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_2_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__376__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__il_peephole__match_start_scope_2_3_0_i6);
MR_def_label(ml_backend__il_peephole__match_start_scope_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_start_scope_2_3_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__il_peephole__match_start_scope_2_3_0_i8);
MR_def_label(ml_backend__il_peephole__match_start_scope_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
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
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_r1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		ml_backend__il_peephole__match_start_scope_2_3_0_i9);
MR_def_label(ml_backend__il_peephole__match_start_scope_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__il_peephole__match_start_scope_2_3_0,1)
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

MR_decl_entry(list__takewhile_4_0);

MR_BEGIN_MODULE(ml_backend__il_peephole_module7)
	MR_init_entry1(ml_backend__il_peephole__skip_nops_3_0);
	MR_init_label1(ml_backend__il_peephole__skip_nops_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__skip_nops_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_np_call_localret_ent(list__takewhile_4_0,
		ml_backend__il_peephole__skip_nops_3_0_i2);
MR_def_label(ml_backend__il_peephole__skip_nops_3_0,2)
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
MR_decl_entry(__Unify___ml_backend__ilds__variable_0_0);
MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(ml_backend__il_peephole_module8)
	MR_init_entry1(ml_backend__il_peephole__match_4_0);
	MR_init_label8(ml_backend__il_peephole__match_4_0,5,10,55,15,18,20,22,25)
	MR_init_label8(ml_backend__il_peephole__match_4_0,29,31,33,35,37,40,42,43)
	MR_init_label6(ml_backend__il_peephole__match_4_0,4,46,48,49,50,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__match_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i4);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i5) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i15) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i25) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i35) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__il_peephole__match_4_0_i1));
MR_def_label(ml_backend__il_peephole__match_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__il_peephole__match_start_scope_1_3_0,
		ml_backend__il_peephole__match_4_0_i10);
MR_def_label(ml_backend__il_peephole__match_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i55);
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
MR_def_label(ml_backend__il_peephole__match_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__il_peephole__match_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match__220__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_sv(1), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(1), 0) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(list__takewhile_4_0,
		ml_backend__il_peephole__match_4_0_i18);
MR_def_label(ml_backend__il_peephole__match_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__instr_0_0,
		ml_backend__il_peephole__match_4_0_i20);
MR_def_label(ml_backend__il_peephole__match_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__il_peephole__skip_nops_3_0,
		ml_backend__il_peephole__match_4_0_i22);
MR_def_label(ml_backend__il_peephole__match_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,17)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 17);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__il_peephole__match_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,34)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(1,4);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(3, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_sv(2) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 26;
	MR_tfield(3, MR_tempr3, 1) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	}
	MR_np_call_localret_ent(list__takewhile_4_0,
		ml_backend__il_peephole__match_4_0_i29);
MR_def_label(ml_backend__il_peephole__match_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__instr_0_0,
		ml_backend__il_peephole__match_4_0_i31);
MR_def_label(ml_backend__il_peephole__match_4_0,31)
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
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,7,1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__il_peephole__match_4_0_i33);
MR_def_label(ml_backend__il_peephole__match_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__append_2_0,
		ml_backend__il_peephole__match_4_0_i50);
MR_def_label(ml_backend__il_peephole__match_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ml_backend__il_peephole__skip_nops_3_0,
		ml_backend__il_peephole__match_4_0_i37);
MR_def_label(ml_backend__il_peephole__match_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,26)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__variable_0_0,
		ml_backend__il_peephole__match_4_0_i40);
MR_def_label(ml_backend__il_peephole__match_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__list__append_2_0,
		ml_backend__il_peephole__match_4_0_i42);
MR_def_label(ml_backend__il_peephole__match_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,7,2);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__append_2_0,
		ml_backend__il_peephole__match_4_0_i43);
MR_def_label(ml_backend__il_peephole__match_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__il_peephole__match_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r1),17)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_np_call_localret_ent(list__takewhile_4_0,
		ml_backend__il_peephole__match_4_0_i46);
MR_def_label(ml_backend__il_peephole__match_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__match_4_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_np_call_localret_ent(list__filter_3_0,
		ml_backend__il_peephole__match_4_0_i48);
MR_def_label(ml_backend__il_peephole__match_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__il_peephole__match_4_0_i49);
MR_def_label(ml_backend__il_peephole__match_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__il_peephole__match_4_0_i50);
MR_def_label(ml_backend__il_peephole__match_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
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
	MR_init_label4(ml_backend__il_peephole__opt_instr_5_0,4,8,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__opt_instr_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(ml_backend__il_peephole__match_4_0,
		ml_backend__il_peephole__opt_instr_5_0_i4);
MR_def_label(ml_backend__il_peephole__opt_instr_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__opt_instr_5_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__opt_instr_5_0_i7);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_localcall_lab(ml_backend__il_peephole__opt_instr_5_0,
		ml_backend__il_peephole__opt_instr_5_0_i8);
MR_def_label(ml_backend__il_peephole__opt_instr_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(ml_backend__il_peephole__opt_instr_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
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
	MR_init_label4(ml_backend__il_peephole__optimize_2_4_0,4,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__optimize_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__optimize_2_4_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(ml_backend__il_peephole__optimize_2_4_0,
		ml_backend__il_peephole__optimize_2_4_0_i4);
MR_def_label(ml_backend__il_peephole__optimize_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__il_peephole__opt_instr_5_0,
		ml_backend__il_peephole__optimize_2_4_0_i5);
MR_def_label(ml_backend__il_peephole__optimize_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ml_backend__il_peephole__optimize_2_4_0_i6);
MR_def_label(ml_backend__il_peephole__optimize_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__il_peephole__optimize_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module11)
	MR_init_entry1(ml_backend__il_peephole__optimize_method_decl_5_0);
	MR_init_label3(ml_backend__il_peephole__optimize_method_decl_5_0,4,5,2)
MR_BEGIN_CODE

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
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__il_peephole__optimize_2_4_0,
		ml_backend__il_peephole__optimize_method_decl_5_0_i4);
MR_def_label(ml_backend__il_peephole__optimize_method_decl_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ml_backend__il_peephole__optimize_method_decl_5_0_i5);
MR_def_label(ml_backend__il_peephole__optimize_method_decl_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
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
	MR_init_label2(fn__ml_backend__il_peephole__can_call_1_0,90,97)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__il_peephole__can_call_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_call_1_0_i97);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_call_1_0_i97));
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_call_1_0,97)
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
	MR_init_label6(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,4,33,34,39,109,44)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__il_peephole__equivalent_to_nop_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i4) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i44) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i33));
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_r1),13)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i44);
	}
	MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109);
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i34) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i39) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i44) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109));
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i44);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i109);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__equivalent_to_nop_1_0_i44);
	}
	}
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,44)
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
	MR_init_label2(fn__ml_backend__il_peephole__can_branch_1_0,70,97)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__il_peephole__can_branch_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__can_branch_1_0_i97);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i70) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i70) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i70) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i70) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i70) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i70) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i70) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i70) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i70) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i70) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i70) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ml_backend__il_peephole__can_branch_1_0_i97));
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__il_peephole__can_branch_1_0,97)
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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
	MR_init_entry1(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__113__1_1_0);
	MR_init_label1(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__113__1_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__113__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__113__1_1_0_i2);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ml_backend__ilds__calculate_max_stack_1_0);
MR_def_label(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__113__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module18)
	MR_init_entry1(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__122__1_2_0);
	MR_init_label1(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__122__1_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__122__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__122__1_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__122__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module19)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match__220__1_2_0);
	MR_init_label1(ml_backend__il_peephole__IntroducedFrom__pred__match__220__1_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match__220__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match__220__1_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r2, 0);
	MR_r1 = (strcmp((char *)MR_r1, (char *)MR_tempr1) != 0);
	MR_proceed();
	}
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match__220__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module20)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0);
	MR_init_label7(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0,5,3,12,10,16,18,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,26)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__variable_0_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0_i5);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0_i1);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,34)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0_i10);
	}
	MR_sv(2) = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__variable_0_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0_i12);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0_i1);
	}
	MR_r2 = MR_sv(2);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r2,3,33)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__il_peephole__can_call_1_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0_i16);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__il_peephole__can_branch_1_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0_i18);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0_i1);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match__262__1_2_0,1)
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
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match__203__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match__203__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_tag(MR_r1) != MR_mktag((MR_Integer) 2));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module22)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match__207__1_1_0);
	MR_init_label1(ml_backend__il_peephole__IntroducedFrom__pred__match__207__1_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match__207__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match__207__1_1_0_i2);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match__207__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module23)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__308__1_2_0);
	MR_init_label5(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__308__1_2_0,5,3,10,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__308__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,26)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__308__1_2_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__variable_0_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__308__1_2_0_i5);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__308__1_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__308__1_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__308__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,27)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__308__1_2_0_i8);
	}
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__variable_0_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__308__1_2_0_i10);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__308__1_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__308__1_2_0_i1);
	}
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__308__1_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__308__1_2_0,1)
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
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__301__1_3_0);
	MR_init_label3(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__301__1_3_0,3,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__301__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__301__1_3_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_type);
	MR_r4 = MR_ctfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(assoc_list__search_3_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__301__1_3_0_i3);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__301__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__301__1_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__308__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__takewhile_4_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__301__1_3_0_i5);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__301__1_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__301__1_3_0,1)
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
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__321__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__321__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 != (MR_Integer) MR_tbmkword(0, 6));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module26)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__319__1_4_0);
	MR_init_label3(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__319__1_4_0,2,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__319__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r2, 0);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_np_call_localret_ent(list__takewhile_4_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__319__1_4_0_i2);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__319__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__319__1_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,6)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__319__1_4_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__319__1_4_0_i6);
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
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(1, MR_tempr4, 1);
	MR_r2 = MR_ctfield(0, MR_tempr3, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__319__1_4_0,6)
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
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(0, MR_tempr3, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__319__1_4_0,1)
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
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_1_0);
	MR_init_label1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_1_0_i2);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module28)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0);
	MR_init_label7(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0,5,3,10,8,15,13,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,26)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__variable_0_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0_i5);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,27)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__variable_0_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0_i10);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,34)) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0_i13);
	}
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__variable_0_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0_i15);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0_i1);
	}
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0,1)
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
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__376__1_2_0);
	MR_init_label1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__376__1_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__376__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(1,6);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__380__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(list__takewhile_4_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__376__1_2_0_i2);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__376__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__format_3_0);

MR_BEGIN_MODULE(ml_backend__il_peephole_module30)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__389__1_2_0);
	MR_init_label1(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__389__1_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__389__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("peephole: unused local var %s eliminated", 40);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__389__1_2_0_i2);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__389__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__il_peephole_module31)
	MR_init_entry1(ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__456__1_1_0);
	MR_init_label1(ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__456__1_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__456__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__il_peephole__equivalent_to_nop_1_0,
		ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__456__1_1_0_i2);
MR_def_label(ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__456__1_1_0,2)
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
	MR_init_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0,21,2,6,4,1)
MR_BEGIN_CODE

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
	MR_np_call_localret_ent(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__319__1_4_0,
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
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_51_56_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0,
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
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_0_i21);
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
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_51_56_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0);
	MR_init_label3(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_51_56_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0,2,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_51_56_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(0, MR_r3, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r3 = MR_ctfield(0, MR_r3, 1);
	MR_np_call_localret_ent(list__takewhile_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_51_56_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0_i2);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_51_56_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_51_56_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,34)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_51_56_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0_i1);
	}
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__301__1_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_51_56_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0_i5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_51_56_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_51_56_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_51_56_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_0,1)
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
void mercury__ml_backend__il_peephole__write_out_proc_statics(FILE *fp);
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

void mercury__ml_backend__il_peephole__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__il_peephole__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
