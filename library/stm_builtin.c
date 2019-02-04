/*
** Automatically generated from `stm_builtin.m'
** by the Mercury compiler,
** version rotd-2008-08-03, configured for i686-pc-linux-gnu.
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
INIT mercury__stm_builtin__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "stm_builtin.c"
#include "stm_builtin.mh"

#line 27 "stm_builtin.c"
#line 534 "io.int"
#include "io.mh"

#line 31 "stm_builtin.c"
#line 542 "io.int"
#include "string.mh"

#line 35 "stm_builtin.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "stm_builtin.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "stm_builtin.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 47 "stm_builtin.c"
#line 37 "builtin.opt"
#include "array.mh"

#line 51 "stm_builtin.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 55 "stm_builtin.c"
#line 3 "float.opt"
#include "float.mh"

#line 59 "stm_builtin.c"
#line 3 "math.opt"
#include "math.mh"

#line 63 "stm_builtin.c"
#line 4 "char.opt"
#include "char.mh"

#line 67 "stm_builtin.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 71 "stm_builtin.c"
#line 3 "list.opt"
#include "list.mh"

#line 75 "stm_builtin.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 79 "stm_builtin.c"
#line 4 "int.opt"
#include "int.mh"

#line 83 "stm_builtin.c"
#line 109 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 87 "stm_builtin.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 91 "stm_builtin.c"
#line 20 "store.opt"
#include "store.mh"

#line 95 "stm_builtin.c"
#line 150 "io.opt"
#include "dir.mh"

#line 99 "stm_builtin.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 103 "stm_builtin.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 107 "stm_builtin.c"
#line 108 "stm_builtin.c"
#ifndef STM_BUILTIN_DECL_GUARD
#define STM_BUILTIN_DECL_GUARD

#line 112 "stm_builtin.c"
#line 213 "stm_builtin.m"
#include "mercury_stm.h"
#line 115 "stm_builtin.c"
#line 116 "stm_builtin.c"

#endif
#line 119 "stm_builtin.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
	MR_Integer f6;
	MR_Word * f7;
	MR_Word * f8;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_stm_builtin__type_ctor_info_stm_var_1,
	mercury_data_stm_builtin__type_ctor_info_stm_validation_result_0,
	mercury_data_stm_builtin__type_ctor_info_stm_dummy_output_0,
	mercury_data_stm_builtin__type_ctor_info_stm_0,
	mercury_data_stm_builtin__type_ctor_info_rollback_exception_0;
MR_decl_label1(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_54_93_95_48_3_0, 5)
MR_decl_label1(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_0, 7)
MR_decl_label1(stm_builtin__IntroducedFrom__pred__try_stm_det__309__1_4_0, 2)
MR_decl_label8(stm_builtin__atomic_transaction_impl_2_0, 57,3,6,7,11,10,16,20)
MR_decl_label4(stm_builtin__atomic_transaction_impl_2_0, 19,15,23,9)
MR_decl_label2(stm_builtin__call_atomic_goal_4_0, 2,4)
MR_decl_label8(stm_builtin__or_else_5_0, 2,3,7,10,11,31,13,15)
MR_decl_label3(stm_builtin__or_else_5_0, 18,14,6)
MR_decl_label2(__Compare___stm_builtin__rollback_exception_0_0, 2,3)
MR_decl_label2(__Compare___stm_builtin__stm_validation_result_0_0, 2,3)
MR_def_extern_entry(stm_builtin__new_stm_var_4_0)
MR_def_extern_entry(stm_builtin__new_stm_var_atomic_4_0)
MR_def_extern_entry(stm_builtin__write_stm_var_4_0)
MR_def_extern_entry(stm_builtin__read_stm_var_4_0)
MR_def_extern_entry(stm_builtin__retry_1_0)
MR_def_extern_entry(stm_builtin__stm_create_transaction_log_1_0)
MR_def_extern_entry(stm_builtin__stm_discard_transaction_log_1_0)
MR_def_extern_entry(stm_builtin__stm_lock_0_0)
MR_def_extern_entry(stm_builtin__stm_unlock_0_0)
MR_def_extern_entry(stm_builtin__stm_validate_2_0)
MR_def_extern_entry(stm_builtin__stm_block_1_0)
MR_decl_static(stm_builtin__atomic_transaction_impl_2_0)
MR_def_extern_entry(stm_builtin__atomic_transaction_4_0)
MR_def_extern_entry(stm_builtin__stm_create_nested_transaction_log_2_0)
MR_def_extern_entry(stm_builtin__stm_merge_nested_logs_3_0)
MR_def_extern_entry(stm_builtin__or_else_5_0)
MR_def_extern_entry(stm_builtin__stm_commit_1_0)
MR_def_extern_entry(stm_builtin__stm_from_outer_to_inner_io_2_0)
MR_def_extern_entry(stm_builtin__stm_from_inner_to_outer_io_2_0)
MR_def_extern_entry(stm_builtin__unsafe_write_stm_var_4_0)
MR_decl_static(stm_builtin__call_atomic_goal_4_0)
MR_def_extern_entry(__Unify___stm_builtin__rollback_exception_0_0)
MR_def_extern_entry(__Compare___stm_builtin__rollback_exception_0_0)
MR_def_extern_entry(__Unify___stm_builtin__stm_0_0)
MR_def_extern_entry(__Compare___stm_builtin__stm_0_0)
MR_def_extern_entry(__Unify___stm_builtin__stm_dummy_output_0_0)
MR_def_extern_entry(__Compare___stm_builtin__stm_dummy_output_0_0)
MR_def_extern_entry(__Unify___stm_builtin__stm_validation_result_0_0)
MR_def_extern_entry(__Compare___stm_builtin__stm_validation_result_0_0)
MR_def_extern_entry(__Unify___stm_builtin__stm_var_1_0)
MR_def_extern_entry(__Compare___stm_builtin__stm_var_1_0)
MR_decl_static(stm_builtin__IntroducedFrom__pred__try_stm_det__309__1_4_0)
MR_def_extern_entry(f_115_116_109_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_121_95_95_91_49_93_95_48_1_0)
MR_decl_static(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0)
MR_decl_static(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_0)
MR_def_extern_entry(f_115_116_109_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_109_95_98_117_105_108_116_105_110_95_95_115_116_109_95_100_117_109_109_121_95_111_117_116_112_117_116_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_def_extern_entry(f_115_116_109_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_109_95_98_117_105_108_116_105_110_95_95_115_116_109_95_100_117_109_109_121_95_111_117_116_112_117_116_95_48_95_95_91_50_44_32_51_93_95_48_3_0)
MR_decl_static(fn__f_115_116_109_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_2_0)
MR_decl_static(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_116_99_104_95_105_109_112_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_3_0)
MR_decl_static(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_54_93_95_48_3_0)
MR_decl_static(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_116_99_104_95_105_109_112_108_95_95_104_111_49_48_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_44_32_50_49_44_32_50_50_44_32_50_51_44_32_50_52_44_32_50_53_44_32_50_54_44_32_50_55_44_32_50_56_44_32_50_57_44_32_51_48_44_32_51_49_44_32_51_50_44_32_51_51_44_32_51_52_44_32_51_53_44_32_51_54_44_32_51_55_44_32_51_56_44_32_51_57_44_32_52_48_44_32_52_49_93_95_48_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_stm_builtin__type_ctor_info_stm_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
3,
1,
MR_CTOR0_ADDR(stm_builtin, stm),
MR_CTOR0_ADDR(stm_builtin, stm)
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
mercury_data__closure_layout__stm_builtin__atomic_transaction_impl_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_stm_builtin__type_ctor_info_stm_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__stm_builtin__atomic_transaction_impl_2_0_1,
MR_COMMON(1,0),
5,
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
1,
MR_CTOR0_ADDR(stm_builtin, stm),
MR_CTOR0_ADDR(stm_builtin, stm)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_CTOR0_ADDR(builtin, tuple),
2,
1,
MR_CTOR0_ADDR(stm_builtin, stm)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__stm_builtin__atomic_transaction_impl_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_0_1;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__stm_builtin__atomic_transaction_impl_2_0_2,
MR_COMMON(1,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_CTOR0_ADDR(stm_builtin, stm),
MR_COMMON(3,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_0_1,
MR_COMMON(1,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_CTOR0_ADDR(stm_builtin, stm),
MR_COMMON(3,0)
}
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
1,
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_exception__type_ctor_info_exception_result_1;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
MR_CTOR1_ADDR(exception, exception_result),
1
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_54_93_95_48_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_54_93_95_48_3_0_2;
static const struct mercury_type_7 mercury_common_7[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_0_2,
MR_COMMON(1,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(5,0),
MR_COMMON(6,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_0_3,
MR_COMMON(1,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(univ, univ),
MR_COMMON(6,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_54_93_95_48_3_0_1,
MR_COMMON(1,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(5,0),
MR_COMMON(6,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_54_93_95_48_3_0_2,
MR_COMMON(1,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(univ, univ),
MR_COMMON(6,0)
}
},
};

const MR_TypeCtorInfo_Struct mercury_data_stm_builtin__type_ctor_info_stm_var_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_STABLE_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___stm_builtin__stm_var_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___stm_builtin__stm_var_1_0)),
	"stm_builtin",
	"stm_var",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_stm_builtin__enum_functor_desc_stm_validation_result_0_0 = {
	"stm_transaction_valid",
	0
};

static const MR_EnumFunctorDesc mercury_data_stm_builtin__enum_functor_desc_stm_validation_result_0_1 = {
	"stm_transaction_invalid",
	1
};

const MR_EnumFunctorDescPtr mercury_data_stm_builtin__enum_value_ordered_stm_validation_result_0[] = {
	&mercury_data_stm_builtin__enum_functor_desc_stm_validation_result_0_0,
	&mercury_data_stm_builtin__enum_functor_desc_stm_validation_result_0_1
};

const MR_EnumFunctorDescPtr mercury_data_stm_builtin__enum_name_ordered_stm_validation_result_0[] = {
	&mercury_data_stm_builtin__enum_functor_desc_stm_validation_result_0_1,
	&mercury_data_stm_builtin__enum_functor_desc_stm_validation_result_0_0
};

const MR_Integer mercury_data_stm_builtin__functor_number_map_stm_validation_result_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_stm_builtin__type_ctor_info_stm_validation_result_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___stm_builtin__stm_validation_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___stm_builtin__stm_validation_result_0_0)),
	"stm_builtin",
	"stm_validation_result",
	{ (void *)mercury_data_stm_builtin__enum_name_ordered_stm_validation_result_0 },
	{ (void *)mercury_data_stm_builtin__enum_value_ordered_stm_validation_result_0 },
	2,
	4,
	mercury_data_stm_builtin__functor_number_map_stm_validation_result_0
};

static const MR_EnumFunctorDesc mercury_data_stm_builtin__enum_functor_desc_stm_dummy_output_0_0 = {
	"stm_dummy_output",
	0
};

const MR_EnumFunctorDescPtr mercury_data_stm_builtin__enum_value_ordered_stm_dummy_output_0[] = {
	&mercury_data_stm_builtin__enum_functor_desc_stm_dummy_output_0_0
};

const MR_EnumFunctorDescPtr mercury_data_stm_builtin__enum_name_ordered_stm_dummy_output_0[] = {
	&mercury_data_stm_builtin__enum_functor_desc_stm_dummy_output_0_0
};

const MR_Integer mercury_data_stm_builtin__functor_number_map_stm_dummy_output_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_stm_builtin__type_ctor_info_stm_dummy_output_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_DUMMY,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___stm_builtin__stm_dummy_output_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___stm_builtin__stm_dummy_output_0_0)),
	"stm_builtin",
	"stm_dummy_output",
	{ (void *)mercury_data_stm_builtin__enum_name_ordered_stm_dummy_output_0 },
	{ (void *)mercury_data_stm_builtin__enum_value_ordered_stm_dummy_output_0 },
	1,
	4,
	mercury_data_stm_builtin__functor_number_map_stm_dummy_output_0
};

const MR_TypeCtorInfo_Struct mercury_data_stm_builtin__type_ctor_info_stm_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___stm_builtin__stm_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___stm_builtin__stm_0_0)),
	"stm_builtin",
	"stm",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_stm_builtin__enum_functor_desc_rollback_exception_0_0 = {
	"rollback_invalid_transaction",
	0
};

static const MR_EnumFunctorDesc mercury_data_stm_builtin__enum_functor_desc_rollback_exception_0_1 = {
	"rollback_retry",
	1
};

const MR_EnumFunctorDescPtr mercury_data_stm_builtin__enum_value_ordered_rollback_exception_0[] = {
	&mercury_data_stm_builtin__enum_functor_desc_rollback_exception_0_0,
	&mercury_data_stm_builtin__enum_functor_desc_rollback_exception_0_1
};

const MR_EnumFunctorDescPtr mercury_data_stm_builtin__enum_name_ordered_rollback_exception_0[] = {
	&mercury_data_stm_builtin__enum_functor_desc_rollback_exception_0_0,
	&mercury_data_stm_builtin__enum_functor_desc_rollback_exception_0_1
};

const MR_Integer mercury_data_stm_builtin__functor_number_map_rollback_exception_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_stm_builtin__type_ctor_info_rollback_exception_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___stm_builtin__rollback_exception_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___stm_builtin__rollback_exception_0_0)),
	"stm_builtin",
	"rollback_exception",
	{ (void *)mercury_data_stm_builtin__enum_name_ordered_rollback_exception_0 },
	{ (void *)mercury_data_stm_builtin__enum_value_ordered_rollback_exception_0 },
	2,
	4,
	mercury_data_stm_builtin__functor_number_map_rollback_exception_0
};

static const MR_UserClosureId
mercury_data__closure_layout__stm_builtin__atomic_transaction_impl_2_0_1 = {
{
MR_PREDICATE,
"stm_builtin",
"stm_builtin",
"call_atomic_goal",
4,
0
},
"stm_builtin",
"stm_builtin.m",
462,
"d1;c4;q;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__stm_builtin__atomic_transaction_impl_2_0_2 = {
{
MR_PREDICATE,
"stm_builtin",
"stm_builtin",
"lambda_exception_opt_309",
4,
0
},
"stm_builtin",
"exception.opt",
309,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_0_1 = {
{
MR_PREDICATE,
"stm_builtin",
"stm_builtin",
"lambda_exception_opt_309",
4,
0
},
"stm_builtin",
"exception.opt",
309,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_0_2 = {
{
MR_PREDICATE,
"exception",
"exception",
"wrap_success_or_failure",
2,
0
},
"stm_builtin",
"exception.opt",
195,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_0_3 = {
{
MR_PREDICATE,
"exception",
"exception",
"wrap_exception",
2,
0
},
"stm_builtin",
"exception.opt",
201,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_54_93_95_48_3_0_1 = {
{
MR_PREDICATE,
"exception",
"exception",
"wrap_success_or_failure",
2,
0
},
"stm_builtin",
"exception.opt",
195,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_54_93_95_48_3_0_2 = {
{
MR_PREDICATE,
"exception",
"exception",
"wrap_exception",
2,
0
},
"stm_builtin",
"exception.opt",
201,
"d1;c5;"
};


MR_BEGIN_MODULE(stm_builtin_module0)
	MR_init_entry1(stm_builtin__new_stm_var_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stm_builtin__new_stm_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	T;
	MR_STM_Var *	TVar;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__stm_builtin__new_stm_var_4_0
	T = MR_r2;
{
#line 234 "stm_builtin.m"

    MR_STM_new_stm_var(T, TVar);
    IO = IO0;
;}
#line 692 "stm_builtin.c"
	MR_r1 = (MR_Word) TVar;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module1)
	MR_init_entry1(stm_builtin__new_stm_var_atomic_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stm_builtin__new_stm_var_atomic_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	T;
	MR_STM_Var *	TVar;
	MR_STM_TransLog *	STM0;
	MR_STM_TransLog *	STM;
#define	MR_PROC_LABEL	mercury__stm_builtin__new_stm_var_atomic_4_0
	T = MR_r2;
	STM0 = (MR_STM_TransLog *) MR_r3;
{
#line 242 "stm_builtin.m"

    MR_STM_new_stm_var(T, TVar);
    STM = STM0;
;}
#line 728 "stm_builtin.c"
	MR_r1 = (MR_Word) TVar;
	MR_r2 = (MR_Word) STM;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module2)
	MR_init_entry1(stm_builtin__write_stm_var_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stm_builtin__write_stm_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_STM_Var *	TVar;
	MR_Word	Value;
	MR_STM_TransLog *	STM0;
	MR_STM_TransLog *	STM;
#define	MR_PROC_LABEL	mercury__stm_builtin__write_stm_var_4_0
	TVar = (MR_STM_Var *) MR_r2;
	Value = MR_r3;
	STM0 = (MR_STM_TransLog *) MR_r4;
{
#line 250 "stm_builtin.m"

    MR_STM_write_var(TVar, Value, STM0);
    STM = STM0;
;}
#line 766 "stm_builtin.c"
	MR_r1 = (MR_Word) STM;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module3)
	MR_init_entry1(stm_builtin__read_stm_var_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stm_builtin__read_stm_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_STM_Var *	TVar;
	MR_Word	Value;
	MR_STM_TransLog *	STM0;
	MR_STM_TransLog *	STM;
#define	MR_PROC_LABEL	mercury__stm_builtin__read_stm_var_4_0
	TVar = (MR_STM_Var *) MR_r2;
	STM0 = (MR_STM_TransLog *) MR_r3;
{
#line 266 "stm_builtin.m"

    Value = MR_STM_read_var(TVar, STM0);
    STM = STM0;
;}
#line 802 "stm_builtin.c"
	MR_r1 = Value;
	MR_r2 = (MR_Word) STM;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module4)
	MR_init_entry1(stm_builtin__retry_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stm_builtin__retry_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_115_116_109_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_121_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module5)
	MR_init_entry1(stm_builtin__stm_create_transaction_log_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stm_builtin__stm_create_transaction_log_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_STM_TransLog *	STM;
#define	MR_PROC_LABEL	mercury__stm_builtin__stm_create_transaction_log_1_0
{
#line 274 "stm_builtin.m"

    MR_STM_create_log(STM, NULL);

#if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM NEW LOG: log <0x%.8lx>\n",
            (MR_Word)(STM));
#endif
;}
#line 856 "stm_builtin.c"
	MR_r1 = (MR_Word) STM;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module6)
	MR_init_entry1(stm_builtin__stm_discard_transaction_log_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stm_builtin__stm_discard_transaction_log_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_STM_TransLog *	STM;
#define	MR_PROC_LABEL	mercury__stm_builtin__stm_discard_transaction_log_1_0
	STM = (MR_STM_TransLog *) MR_r1;
{
#line 298 "stm_builtin.m"

    MR_STM_discard_log(STM);
;}
#line 887 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module7)
	MR_init_entry1(stm_builtin__stm_lock_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stm_builtin__stm_lock_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__stm_builtin__stm_lock_0_0
{
#line 318 "stm_builtin.m"

    #if defined(MR_THREAD_SAFE)
        MR_LOCK(&MR_STM_lock, "stm_lock/0");
    #endif
    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM LOCKING\n");
    #endif
;}
#line 920 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module8)
	MR_init_entry1(stm_builtin__stm_unlock_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stm_builtin__stm_unlock_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__stm_builtin__stm_unlock_0_0
{
#line 330 "stm_builtin.m"

    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM UNLOCKING\n");
    #endif
    #if defined(MR_THREAD_SAFE)
        MR_UNLOCK(&MR_STM_lock, "stm_unlock/0");
    #endif
;}
#line 953 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module9)
	MR_init_entry1(stm_builtin__stm_validate_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stm_builtin__stm_validate_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_STM_TransLog *	STM;
	MR_Word	IsValid;
#define	MR_PROC_LABEL	mercury__stm_builtin__stm_validate_2_0
	STM = (MR_STM_TransLog *) MR_r1;
{
#line 342 "stm_builtin.m"

    IsValid = MR_STM_validate(STM);
;}
#line 984 "stm_builtin.c"
	MR_r1 = IsValid;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module10)
	MR_init_entry1(stm_builtin__stm_block_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stm_builtin__stm_block_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_STM_TransLog *	STM;
#define	MR_PROC_LABEL	mercury__stm_builtin__stm_block_1_0
	STM = (MR_STM_TransLog *) MR_r1;
{
#line 374 "stm_builtin.m"

    MR_STM_block_thread(STM);
;}
#line 1015 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
MR_decl_entry(exception__handle_stm_result_4_0);
MR_decl_entry(univ__type_to_univ_2_2);
MR_decl_entry(exception__rethrow_1_0);

MR_BEGIN_MODULE(stm_builtin_module11)
	MR_init_entry1(stm_builtin__atomic_transaction_impl_2_0);
	MR_init_label8(stm_builtin__atomic_transaction_impl_2_0,57,3,6,7,11,10,16,20)
	MR_init_label4(stm_builtin__atomic_transaction_impl_2_0,19,15,23,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(stm_builtin__atomic_transaction_impl_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(stm_builtin__atomic_transaction_impl_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_STM_TransLog *	STM;
#define	MR_PROC_LABEL	mercury__stm_builtin__atomic_transaction_impl_2_0
{
#line 274 "stm_builtin.m"

    MR_STM_create_log(STM, NULL);

#if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM NEW LOG: log <0x%.8lx>\n",
            (MR_Word)(STM));
#endif
;}
#line 1061 "stm_builtin.c"
	MR_tempr1 = (MR_Word) STM;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_sv(3) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(stm_builtin__call_atomic_goal_4_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr2, 4) = MR_tempr4;
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_sv(5) = MR_tempr3;
	}
	MR_np_call_localret_ent(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_2_0,
		stm_builtin__atomic_transaction_impl_2_0_i3);
MR_def_label(stm_builtin__atomic_transaction_impl_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(stm_builtin__IntroducedFrom__pred__try_stm_det__309__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tempr3 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR0_ADDR(builtin, tuple);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 3) = (MR_Word) MR_CTOR0_ADDR(stm_builtin, stm);
	}
	MR_np_call_localret_ent(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_54_93_95_48_3_0,
		stm_builtin__atomic_transaction_impl_2_0_i6);
MR_def_label(stm_builtin__atomic_transaction_impl_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(exception__handle_stm_result_4_0,
		stm_builtin__atomic_transaction_impl_2_0_i7);
MR_def_label(stm_builtin__atomic_transaction_impl_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(stm_builtin__atomic_transaction_impl_2_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(2, MR_tempr2, 0);
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(stm_builtin, rollback_exception);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_2,
		stm_builtin__atomic_transaction_impl_2_0_i11);
MR_def_label(stm_builtin__atomic_transaction_impl_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(stm_builtin__atomic_transaction_impl_2_0_i10);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(stm_builtin__atomic_transaction_impl_2_0_i10);
	}
	{
	MR_STM_TransLog *	STM;
#define	MR_PROC_LABEL	mercury__stm_builtin__atomic_transaction_impl_2_0
	STM = (MR_STM_TransLog *) MR_sv(3);
{
#line 298 "stm_builtin.m"

    MR_STM_discard_log(STM);
;}
#line 1147 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(stm_builtin__atomic_transaction_impl_2_0_i57);
MR_def_label(stm_builtin__atomic_transaction_impl_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(stm_builtin, rollback_exception);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(univ__type_to_univ_2_2,
		stm_builtin__atomic_transaction_impl_2_0_i16);
MR_def_label(stm_builtin__atomic_transaction_impl_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(stm_builtin__atomic_transaction_impl_2_0_i15);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(stm_builtin__atomic_transaction_impl_2_0_i15);
	}
	{
#define	MR_PROC_LABEL	mercury__stm_builtin__atomic_transaction_impl_2_0
{
#line 318 "stm_builtin.m"

    #if defined(MR_THREAD_SAFE)
        MR_LOCK(&MR_STM_lock, "stm_lock/0");
    #endif
    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM LOCKING\n");
    #endif
;}
#line 1180 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_STM_TransLog *	STM;
	MR_Word	IsValid;
#define	MR_PROC_LABEL	mercury__stm_builtin__atomic_transaction_impl_2_0
	STM = (MR_STM_TransLog *) MR_sv(3);
{
#line 342 "stm_builtin.m"

    IsValid = MR_STM_validate(STM);
;}
#line 1193 "stm_builtin.c"
	MR_r3 = IsValid;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(stm_builtin__atomic_transaction_impl_2_0_i20);
	}
	{
#define	MR_PROC_LABEL	mercury__stm_builtin__atomic_transaction_impl_2_0
{
#line 330 "stm_builtin.m"

    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM UNLOCKING\n");
    #endif
    #if defined(MR_THREAD_SAFE)
        MR_UNLOCK(&MR_STM_lock, "stm_unlock/0");
    #endif
;}
#line 1212 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(stm_builtin__atomic_transaction_impl_2_0_i19);
MR_def_label(stm_builtin__atomic_transaction_impl_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_STM_TransLog *	STM;
#define	MR_PROC_LABEL	mercury__stm_builtin__atomic_transaction_impl_2_0
	STM = (MR_STM_TransLog *) MR_sv(3);
{
#line 374 "stm_builtin.m"

    MR_STM_block_thread(STM);
;}
#line 1229 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
MR_def_label(stm_builtin__atomic_transaction_impl_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_STM_TransLog *	STM;
#define	MR_PROC_LABEL	mercury__stm_builtin__atomic_transaction_impl_2_0
	STM = (MR_STM_TransLog *) MR_sv(3);
{
#line 298 "stm_builtin.m"

    MR_STM_discard_log(STM);
;}
#line 1245 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(stm_builtin__atomic_transaction_impl_2_0_i57);
MR_def_label(stm_builtin__atomic_transaction_impl_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__stm_builtin__atomic_transaction_impl_2_0
{
#line 318 "stm_builtin.m"

    #if defined(MR_THREAD_SAFE)
        MR_LOCK(&MR_STM_lock, "stm_lock/0");
    #endif
    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM LOCKING\n");
    #endif
;}
#line 1264 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_STM_TransLog *	STM;
	MR_Word	IsValid;
#define	MR_PROC_LABEL	mercury__stm_builtin__atomic_transaction_impl_2_0
	STM = (MR_STM_TransLog *) MR_sv(3);
{
#line 342 "stm_builtin.m"

    IsValid = MR_STM_validate(STM);
;}
#line 1277 "stm_builtin.c"
	MR_r3 = IsValid;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__stm_builtin__atomic_transaction_impl_2_0
{
#line 330 "stm_builtin.m"

    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM UNLOCKING\n");
    #endif
    #if defined(MR_THREAD_SAFE)
        MR_UNLOCK(&MR_STM_lock, "stm_unlock/0");
    #endif
;}
#line 1293 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(stm_builtin__atomic_transaction_impl_2_0_i23);
	}
	{
	MR_STM_TransLog *	STM;
#define	MR_PROC_LABEL	mercury__stm_builtin__atomic_transaction_impl_2_0
	STM = (MR_STM_TransLog *) MR_sv(3);
{
#line 298 "stm_builtin.m"

    MR_STM_discard_log(STM);
;}
#line 1308 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(stm_builtin__atomic_transaction_impl_2_0_i57);
MR_def_label(stm_builtin__atomic_transaction_impl_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(exception__rethrow_1_0);
MR_def_label(stm_builtin__atomic_transaction_impl_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module12)
	MR_init_entry1(stm_builtin__atomic_transaction_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stm_builtin__atomic_transaction_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(stm_builtin__atomic_transaction_impl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module13)
	MR_init_entry1(stm_builtin__stm_create_nested_transaction_log_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stm_builtin__stm_create_nested_transaction_log_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_STM_TransLog *	Parent;
	MR_STM_TransLog *	Child;
#define	MR_PROC_LABEL	mercury__stm_builtin__stm_create_nested_transaction_log_2_0
	Parent = (MR_STM_TransLog *) MR_r1;
{
#line 286 "stm_builtin.m"

    MR_STM_create_log(Child, Parent);
#ifdef  MR_STM_DEBUG
        fprintf(stderr,
                "STM: Creating nested log <0x%.8lx>, parent <0x%.8lx>\n",
                (MR_Word)(Child), (MR_Word)(Parent));
#endif
;}
#line 1376 "stm_builtin.c"
	MR_r1 = (MR_Word) Child;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module14)
	MR_init_entry1(stm_builtin__stm_merge_nested_logs_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stm_builtin__stm_merge_nested_logs_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_STM_TransLog *	Child;
	MR_STM_TransLog *	Parent0;
	MR_STM_TransLog *	Parent;
#define	MR_PROC_LABEL	mercury__stm_builtin__stm_merge_nested_logs_3_0
	Child = (MR_STM_TransLog *) MR_r1;
	Parent0 = (MR_STM_TransLog *) MR_r2;
{
#line 305 "stm_builtin.m"

    /* Avoid a warning: Child, Parent0, Parent */
#if defined(MR_STM_DEBUG)
    fprintf(stderr, "STM Calling Merge Nested: log <0x%.8lx>\n",
        (MR_Word)(Child));
#endif
    MR_STM_merge_transactions(Child);
    Parent = Parent0;
;}
#line 1416 "stm_builtin.c"
	MR_r1 = (MR_Word) Parent;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(stm_builtin_module15)
	MR_init_entry1(stm_builtin__or_else_5_0);
	MR_init_label8(stm_builtin__or_else_5_0,2,3,7,10,11,31,13,15)
	MR_init_label3(stm_builtin__or_else_5_0,18,14,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stm_builtin__or_else_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_STM_TransLog *	Parent;
	MR_STM_TransLog *	Child;
#define	MR_PROC_LABEL	mercury__stm_builtin__or_else_5_0
	Parent = (MR_STM_TransLog *) MR_r4;
{
#line 286 "stm_builtin.m"

    MR_STM_create_log(Child, Parent);
#ifdef  MR_STM_DEBUG
        fprintf(stderr,
                "STM: Creating nested log <0x%.8lx>, parent <0x%.8lx>\n",
                (MR_Word)(Child), (MR_Word)(Parent));
#endif
;}
#line 1460 "stm_builtin.c"
	MR_tempr1 = (MR_Word) Child;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r1;
	}
	MR_np_call_localret_ent(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0,
		stm_builtin__or_else_5_0_i2);
MR_def_label(stm_builtin__or_else_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_0,
		stm_builtin__or_else_5_0_i3);
MR_def_label(stm_builtin__or_else_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(stm_builtin__or_else_5_0_i31);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(stm_builtin, rollback_exception);
	MR_r2 = MR_ctfield(2, MR_sv(1), 0);
	MR_np_call_localret_ent(univ__type_to_univ_2_2,
		stm_builtin__or_else_5_0_i7);
MR_def_label(stm_builtin__or_else_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(stm_builtin__or_else_5_0_i6);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(stm_builtin__or_else_5_0_i6);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_STM_TransLog *	Parent;
	MR_STM_TransLog *	Child;
#define	MR_PROC_LABEL	mercury__stm_builtin__or_else_5_0
	Parent = (MR_STM_TransLog *) MR_sv(3);
{
#line 286 "stm_builtin.m"

    MR_STM_create_log(Child, Parent);
#ifdef  MR_STM_DEBUG
        fprintf(stderr,
                "STM: Creating nested log <0x%.8lx>, parent <0x%.8lx>\n",
                (MR_Word)(Child), (MR_Word)(Parent));
#endif
;}
#line 1515 "stm_builtin.c"
	MR_tempr1 = (MR_Word) Child;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0,
		stm_builtin__or_else_5_0_i10);
MR_def_label(stm_builtin__or_else_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_0,
		stm_builtin__or_else_5_0_i11);
MR_def_label(stm_builtin__or_else_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(stm_builtin__or_else_5_0_i13);
	}
MR_def_label(stm_builtin__or_else_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_STM_TransLog *	Child;
	MR_STM_TransLog *	Parent0;
	MR_STM_TransLog *	Parent;
#define	MR_PROC_LABEL	mercury__stm_builtin__or_else_5_0
	Child = (MR_STM_TransLog *) MR_r2;
	Parent0 = (MR_STM_TransLog *) MR_sv(3);
{
#line 305 "stm_builtin.m"

    /* Avoid a warning: Child, Parent0, Parent */
#if defined(MR_STM_DEBUG)
    fprintf(stderr, "STM Calling Merge Nested: log <0x%.8lx>\n",
        (MR_Word)(Child));
#endif
    MR_STM_merge_transactions(Child);
    Parent = Parent0;
;}
#line 1555 "stm_builtin.c"
	MR_r2 = (MR_Word) Parent;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_decr_sp_and_return(6);
MR_def_label(stm_builtin__or_else_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(stm_builtin, rollback_exception);
	MR_r2 = MR_ctfield(2, MR_sv(1), 0);
	MR_np_call_localret_ent(univ__type_to_univ_2_2,
		stm_builtin__or_else_5_0_i15);
MR_def_label(stm_builtin__or_else_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(stm_builtin__or_else_5_0_i14);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(stm_builtin__or_else_5_0_i14);
	}
	{
#define	MR_PROC_LABEL	mercury__stm_builtin__or_else_5_0
{
#line 318 "stm_builtin.m"

    #if defined(MR_THREAD_SAFE)
        MR_LOCK(&MR_STM_lock, "stm_lock/0");
    #endif
    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM LOCKING\n");
    #endif
;}
#line 1589 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_STM_TransLog *	STM;
	MR_Word	IsValid;
#define	MR_PROC_LABEL	mercury__stm_builtin__or_else_5_0
	STM = (MR_STM_TransLog *) MR_sv(4);
{
#line 342 "stm_builtin.m"

    IsValid = MR_STM_validate(STM);
;}
#line 1602 "stm_builtin.c"
	MR_r3 = IsValid;
#undef	MR_PROC_LABEL
	}
	{
	MR_STM_TransLog *	STM;
	MR_Word	IsValid;
#define	MR_PROC_LABEL	mercury__stm_builtin__or_else_5_0
	STM = (MR_STM_TransLog *) MR_sv(2);
{
#line 342 "stm_builtin.m"

    IsValid = MR_STM_validate(STM);
;}
#line 1616 "stm_builtin.c"
	MR_r4 = IsValid;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(stm_builtin__or_else_5_0_i18);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(stm_builtin__or_else_5_0_i18);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_STM_TransLog *	Child;
	MR_STM_TransLog *	Parent0;
	MR_STM_TransLog *	Parent;
#define	MR_PROC_LABEL	mercury__stm_builtin__or_else_5_0
	Child = (MR_STM_TransLog *) MR_sv(4);
	Parent0 = (MR_STM_TransLog *) MR_sv(3);
{
#line 305 "stm_builtin.m"

    /* Avoid a warning: Child, Parent0, Parent */
#if defined(MR_STM_DEBUG)
    fprintf(stderr, "STM Calling Merge Nested: log <0x%.8lx>\n",
        (MR_Word)(Child));
#endif
    MR_STM_merge_transactions(Child);
    Parent = Parent0;
;}
#line 1646 "stm_builtin.c"
	MR_tempr1 = (MR_Word) Parent;
#undef	MR_PROC_LABEL
	}
	{
	MR_STM_TransLog *	Child;
	MR_STM_TransLog *	Parent0;
	MR_STM_TransLog *	Parent;
#define	MR_PROC_LABEL	mercury__stm_builtin__or_else_5_0
	Child = (MR_STM_TransLog *) MR_sv(2);
	Parent0 = (MR_STM_TransLog *) MR_tempr1;
{
#line 305 "stm_builtin.m"

    /* Avoid a warning: Child, Parent0, Parent */
#if defined(MR_STM_DEBUG)
    fprintf(stderr, "STM Calling Merge Nested: log <0x%.8lx>\n",
        (MR_Word)(Child));
#endif
    MR_STM_merge_transactions(Child);
    Parent = Parent0;
;}
#line 1668 "stm_builtin.c"
	MR_tempr1 = (MR_Word) Parent;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__stm_builtin__or_else_5_0
{
#line 330 "stm_builtin.m"

    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM UNLOCKING\n");
    #endif
    #if defined(MR_THREAD_SAFE)
        MR_UNLOCK(&MR_STM_lock, "stm_unlock/0");
    #endif
;}
#line 1684 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(stm_builtin, rollback_exception);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
MR_def_label(stm_builtin__or_else_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__stm_builtin__or_else_5_0
{
#line 330 "stm_builtin.m"

    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM UNLOCKING\n");
    #endif
    #if defined(MR_THREAD_SAFE)
        MR_UNLOCK(&MR_STM_lock, "stm_unlock/0");
    #endif
;}
#line 1707 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(stm_builtin, rollback_exception);
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(stm_builtin__or_else_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__stm_builtin__or_else_5_0
{
#line 330 "stm_builtin.m"

    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM UNLOCKING\n");
    #endif
    #if defined(MR_THREAD_SAFE)
        MR_UNLOCK(&MR_STM_lock, "stm_unlock/0");
    #endif
;}
#line 1729 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(exception__rethrow_1_0);
MR_def_label(stm_builtin__or_else_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_STM_TransLog *	STM;
#define	MR_PROC_LABEL	mercury__stm_builtin__or_else_5_0
	STM = (MR_STM_TransLog *) MR_sv(4);
{
#line 298 "stm_builtin.m"

    MR_STM_discard_log(STM);
;}
#line 1748 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(exception__rethrow_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module16)
	MR_init_entry1(stm_builtin__stm_commit_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stm_builtin__stm_commit_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_STM_TransLog *	STM;
#define	MR_PROC_LABEL	mercury__stm_builtin__stm_commit_1_0
	STM = (MR_STM_TransLog *) MR_r1;
{
#line 349 "stm_builtin.m"

    MR_STM_commit(STM);
;}
#line 1782 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module17)
	MR_init_entry1(stm_builtin__stm_from_outer_to_inner_io_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stm_builtin__stm_from_outer_to_inner_io_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	IO;
	MR_STM_TransLog *	STM;
#define	MR_PROC_LABEL	mercury__stm_builtin__stm_from_outer_to_inner_io_2_0
	IO = MR_r2;
{
#line 356 "stm_builtin.m"

    STM = NULL;
    MR_final_io_state(IO);
;}
#line 1814 "stm_builtin.c"
	MR_r1 = (MR_Word) STM;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module18)
	MR_init_entry1(stm_builtin__stm_from_inner_to_outer_io_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stm_builtin__stm_from_inner_to_outer_io_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_STM_TransLog *	STM0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__stm_builtin__stm_from_inner_to_outer_io_2_0
	STM0 = (MR_STM_TransLog *) MR_r2;
{
#line 364 "stm_builtin.m"

    STM0 = NULL;
    IO = MR_initial_io_state();
;}
#line 1847 "stm_builtin.c"
	MR_r1 = IO;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module19)
	MR_init_entry1(stm_builtin__unsafe_write_stm_var_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stm_builtin__unsafe_write_stm_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_STM_Var *	TVar;
	MR_Word	Value;
	MR_STM_TransLog *	STM0;
	MR_STM_TransLog *	STM;
#define	MR_PROC_LABEL	mercury__stm_builtin__unsafe_write_stm_var_4_0
	TVar = (MR_STM_Var *) MR_r2;
	Value = MR_r3;
	STM0 = (MR_STM_TransLog *) MR_r4;
{
#line 258 "stm_builtin.m"

    MR_STM_unsafe_write_var(TVar, Value);
    STM = STM0;
;}
#line 1884 "stm_builtin.c"
	MR_r1 = (MR_Word) STM;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(stm_builtin_module20)
	MR_init_entry1(stm_builtin__call_atomic_goal_4_0);
	MR_init_label2(stm_builtin__call_atomic_goal_4_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(stm_builtin__call_atomic_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stm_builtin__call_atomic_goal_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__stm_builtin__call_atomic_goal_4_0_i2);
MR_def_label(stm_builtin__call_atomic_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__stm_builtin__call_atomic_goal_4_0
{
#line 318 "stm_builtin.m"

    #if defined(MR_THREAD_SAFE)
        MR_LOCK(&MR_STM_lock, "stm_lock/0");
    #endif
    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM LOCKING\n");
    #endif
;}
#line 1929 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_STM_TransLog *	STM;
	MR_Word	IsValid;
#define	MR_PROC_LABEL	mercury__stm_builtin__call_atomic_goal_4_0
	STM = (MR_STM_TransLog *) MR_r2;
{
#line 342 "stm_builtin.m"

    IsValid = MR_STM_validate(STM);
;}
#line 1942 "stm_builtin.c"
	MR_r3 = IsValid;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(stm_builtin__call_atomic_goal_4_0_i4);
	}
	{
	MR_STM_TransLog *	STM;
#define	MR_PROC_LABEL	mercury__stm_builtin__call_atomic_goal_4_0
	STM = (MR_STM_TransLog *) MR_r2;
{
#line 349 "stm_builtin.m"

    MR_STM_commit(STM);
;}
#line 1958 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__stm_builtin__call_atomic_goal_4_0
{
#line 330 "stm_builtin.m"

    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM UNLOCKING\n");
    #endif
    #if defined(MR_THREAD_SAFE)
        MR_UNLOCK(&MR_STM_lock, "stm_unlock/0");
    #endif
;}
#line 1973 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
MR_def_label(stm_builtin__call_atomic_goal_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__stm_builtin__call_atomic_goal_4_0
{
#line 330 "stm_builtin.m"

    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM UNLOCKING\n");
    #endif
    #if defined(MR_THREAD_SAFE)
        MR_UNLOCK(&MR_STM_lock, "stm_unlock/0");
    #endif
;}
#line 1991 "stm_builtin.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(stm_builtin, rollback_exception);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module21)
	MR_init_entry1(__Unify___stm_builtin__rollback_exception_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___stm_builtin__rollback_exception_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module22)
	MR_init_entry1(__Compare___stm_builtin__rollback_exception_0_0);
	MR_init_label2(__Compare___stm_builtin__rollback_exception_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___stm_builtin__rollback_exception_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___stm_builtin__rollback_exception_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___stm_builtin__rollback_exception_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___stm_builtin__rollback_exception_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___stm_builtin__rollback_exception_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(stm_builtin_module23)
	MR_init_entry1(__Unify___stm_builtin__stm_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___stm_builtin__stm_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(stm_builtin_module24)
	MR_init_entry1(__Compare___stm_builtin__stm_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___stm_builtin__stm_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module25)
	MR_init_entry1(__Unify___stm_builtin__stm_dummy_output_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___stm_builtin__stm_dummy_output_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_115_116_109_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_109_95_98_117_105_108_116_105_110_95_95_115_116_109_95_100_117_109_109_121_95_111_117_116_112_117_116_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module26)
	MR_init_entry1(__Compare___stm_builtin__stm_dummy_output_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___stm_builtin__stm_dummy_output_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_115_116_109_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_109_95_98_117_105_108_116_105_110_95_95_115_116_109_95_100_117_109_109_121_95_111_117_116_112_117_116_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module27)
	MR_init_entry1(__Unify___stm_builtin__stm_validation_result_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___stm_builtin__stm_validation_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module28)
	MR_init_entry1(__Compare___stm_builtin__stm_validation_result_0_0);
	MR_init_label2(__Compare___stm_builtin__stm_validation_result_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___stm_builtin__stm_validation_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___stm_builtin__stm_validation_result_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___stm_builtin__stm_validation_result_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___stm_builtin__stm_validation_result_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___stm_builtin__stm_validation_result_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module29)
	MR_init_entry1(__Unify___stm_builtin__stm_var_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___stm_builtin__stm_var_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module30)
	MR_init_entry1(__Compare___stm_builtin__stm_var_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___stm_builtin__stm_var_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module31)
	MR_init_entry1(stm_builtin__IntroducedFrom__pred__try_stm_det__309__1_4_0);
	MR_init_label1(stm_builtin__IntroducedFrom__pred__try_stm_det__309__1_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(stm_builtin__IntroducedFrom__pred__try_stm_det__309__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stm_builtin__IntroducedFrom__pred__try_stm_det__309__1_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__stm_builtin__IntroducedFrom__pred__try_stm_det__309__1_4_0_i2);
MR_def_label(stm_builtin__IntroducedFrom__pred__try_stm_det__309__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module32)
	MR_init_entry1(f_115_116_109_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_121_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_116_109_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_121_95_95_91_49_93_95_48_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(stm_builtin, rollback_exception);
	MR_r2 = (MR_Integer) 1;
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module33)
	MR_init_entry1(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0
	X = (MR_Integer) 0;
{
#line 89 "builtin.opt"

    Y = X;
;}
#line 2310 "stm_builtin.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(exception__wrap_success_or_failure_2_0);
MR_decl_entry(exception__wrap_exception_2_0);

MR_BEGIN_MODULE(stm_builtin_module34)
	MR_init_entry1(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_0);
	MR_init_label1(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_0,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(stm_builtin__IntroducedFrom__pred__try_stm_det__309__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tempr6 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr6;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tempr7 = MR_r3;
	MR_tfield(0, MR_tempr1, 5) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR0_ADDR(builtin, tuple);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr6;
	MR_tfield(0, MR_tempr2, 3) = (MR_Word) MR_CTOR0_ADDR(stm_builtin, stm);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(exception__wrap_success_or_failure_2_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr3, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_ENTRY_AP(exception__wrap_exception_2_0);
	MR_tfield(0, MR_tempr4, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr4, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_CTOR1_ADDR(exception, exception_result);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr2;
	MR_sv(1) = MR_tempr7;
	MR_sv(2) = MR_tempr6;
	MR_r1 = MR_tempr5;
	MR_r3 = MR_tempr4;
	}
	MR_np_call_localret_ent(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_116_99_104_95_105_109_112_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_3_0,
		f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_0_i7);
MR_def_label(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_0
	X = MR_r1;
{
#line 92 "builtin.opt"

    Y = X;
;}
#line 2387 "stm_builtin.c"
	MR_r2 = Y;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(exception__handle_stm_result_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module35)
	MR_init_entry1(f_115_116_109_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_109_95_98_117_105_108_116_105_110_95_95_115_116_109_95_100_117_109_109_121_95_111_117_116_112_117_116_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_116_109_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_109_95_98_117_105_108_116_105_110_95_95_115_116_109_95_100_117_109_109_121_95_111_117_116_112_117_116_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module36)
	MR_init_entry1(f_115_116_109_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_109_95_98_117_105_108_116_105_110_95_95_115_116_109_95_100_117_109_109_121_95_111_117_116_112_117_116_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_116_109_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_109_95_98_117_105_108_116_105_110_95_95_115_116_109_95_100_117_109_109_121_95_111_117_116_112_117_116_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module37)
	MR_init_entry1(fn__f_115_116_109_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_115_116_109_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module38)
	MR_init_entry1(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_2_0
	X = (MR_Integer) 0;
{
#line 89 "builtin.opt"

    Y = X;
;}
#line 2480 "stm_builtin.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(exception__builtin_catch_3_0);

MR_BEGIN_MODULE(stm_builtin_module39)
	MR_init_entry1(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_116_99_104_95_105_109_112_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_116_99_104_95_105_109_112_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(exception__builtin_catch_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module40)
	MR_init_entry1(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_54_93_95_48_3_0);
	MR_init_label1(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_54_93_95_48_3_0,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_54_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(exception__wrap_success_or_failure_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr4 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(exception__wrap_exception_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR1_ADDR(exception, exception_result);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr4;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_116_99_104_95_105_109_112_108_95_95_104_111_49_48_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_44_32_50_49_44_32_50_50_44_32_50_51_44_32_50_52_44_32_50_53_44_32_50_54_44_32_50_55_44_32_50_56_44_32_50_57_44_32_51_48_44_32_51_49_44_32_51_50_44_32_51_51_44_32_51_52_44_32_51_53_44_32_51_54_44_32_51_55_44_32_51_56_44_32_51_57_44_32_52_48_44_32_52_49_93_95_48_3_0,
		f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_54_93_95_48_3_0_i5);
MR_def_label(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_54_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_54_93_95_48_3_0
	X = MR_r1;
{
#line 92 "builtin.opt"

    Y = X;
;}
#line 2559 "stm_builtin.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stm_builtin_module41)
	MR_init_entry1(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_116_99_104_95_105_109_112_108_95_95_104_111_49_48_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_44_32_50_49_44_32_50_50_44_32_50_51_44_32_50_52_44_32_50_53_44_32_50_54_44_32_50_55_44_32_50_56_44_32_50_57_44_32_51_48_44_32_51_49_44_32_51_50_44_32_51_51_44_32_51_52_44_32_51_53_44_32_51_54_44_32_51_55_44_32_51_56_44_32_51_57_44_32_52_48_44_32_52_49_93_95_48_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_116_109_95_98_117_105_108_116_105_110_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_116_99_104_95_105_109_112_108_95_95_104_111_49_48_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_44_32_50_49_44_32_50_50_44_32_50_51_44_32_50_52_44_32_50_53_44_32_50_54_44_32_50_55_44_32_50_56_44_32_50_57_44_32_51_48_44_32_51_49_44_32_51_50_44_32_51_51_44_32_51_52_44_32_51_53_44_32_51_54_44_32_51_55_44_32_51_56_44_32_51_57_44_32_52_48_44_32_52_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(exception__builtin_catch_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__stm_builtin_maybe_bunch_0(void)
{
	stm_builtin_module0();
	stm_builtin_module1();
	stm_builtin_module2();
	stm_builtin_module3();
	stm_builtin_module4();
	stm_builtin_module5();
	stm_builtin_module6();
	stm_builtin_module7();
	stm_builtin_module8();
	stm_builtin_module9();
	stm_builtin_module10();
	stm_builtin_module11();
	stm_builtin_module12();
	stm_builtin_module13();
	stm_builtin_module14();
	stm_builtin_module15();
	stm_builtin_module16();
	stm_builtin_module17();
	stm_builtin_module18();
	stm_builtin_module19();
	stm_builtin_module20();
	stm_builtin_module21();
	stm_builtin_module22();
	stm_builtin_module23();
	stm_builtin_module24();
	stm_builtin_module25();
	stm_builtin_module26();
	stm_builtin_module27();
	stm_builtin_module28();
	stm_builtin_module29();
	stm_builtin_module30();
	stm_builtin_module31();
	stm_builtin_module32();
	stm_builtin_module33();
	stm_builtin_module34();
	stm_builtin_module35();
	stm_builtin_module36();
	stm_builtin_module37();
	stm_builtin_module38();
	stm_builtin_module39();
}

static void mercury__stm_builtin_maybe_bunch_1(void)
{
	stm_builtin_module40();
	stm_builtin_module41();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__stm_builtin__init(void);
void mercury__stm_builtin__init_type_tables(void);
void mercury__stm_builtin__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__stm_builtin__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__stm_builtin__init_complexity_procs(void);
#endif

void mercury__stm_builtin__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__stm_builtin_maybe_bunch_0();
	mercury__stm_builtin_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_stm_builtin__type_ctor_info_stm_var_1,
		stm_builtin__stm_var_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_stm_builtin__type_ctor_info_stm_validation_result_0,
		stm_builtin__stm_validation_result_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_stm_builtin__type_ctor_info_stm_dummy_output_0,
		stm_builtin__stm_dummy_output_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_stm_builtin__type_ctor_info_stm_0,
		stm_builtin__stm_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_stm_builtin__type_ctor_info_rollback_exception_0,
		stm_builtin__rollback_exception_0_0);
	mercury__stm_builtin__init_debugger();
}

void mercury__stm_builtin__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_stm_builtin__type_ctor_info_stm_var_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_stm_builtin__type_ctor_info_stm_validation_result_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_stm_builtin__type_ctor_info_stm_dummy_output_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_stm_builtin__type_ctor_info_stm_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_stm_builtin__type_ctor_info_rollback_exception_0);
	}
}


void mercury__stm_builtin__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__stm_builtin__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__stm_builtin);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__stm_builtin__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
