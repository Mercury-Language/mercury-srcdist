/*
** Automatically generated from `ops.m'
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
INIT mercury__ops__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "io.int2"
#include "io.mh"

#line 27 "ops.c"
#line 144 "io.int2"
#include "string.mh"

#line 31 "ops.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 35 "ops.c"
#line 28 "time.int2"
#include "time.mh"

#line 39 "ops.c"
#line 31 "array.int2"
#include "array.mh"

#line 43 "ops.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 47 "ops.c"
#line 48 "array.opt"
#include "stm_builtin.mh"

#line 51 "ops.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 55 "ops.c"
#line 150 "io.opt"
#include "dir.mh"

#line 59 "ops.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 63 "ops.c"
#line 3 "float.opt"
#include "float.mh"

#line 67 "ops.c"
#line 3 "math.opt"
#include "math.mh"

#line 71 "ops.c"
#line 20 "store.opt"
#include "store.mh"

#line 75 "ops.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 79 "ops.c"
#line 4 "char.opt"
#include "char.mh"

#line 83 "ops.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 87 "ops.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 91 "ops.c"
#line 112 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 95 "ops.c"
#line 4 "int.opt"
#include "int.mh"

#line 99 "ops.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 103 "ops.c"
#line 104 "ops.c"
#include "ops.mh"

#line 107 "ops.c"
#line 108 "ops.c"
#ifndef OPS_DECL_GUARD
#define OPS_DECL_GUARD

#line 112 "ops.c"
#line 113 "ops.c"

#endif
#line 116 "ops.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_String f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_vector_common_4_0[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__[];

extern const MR_TypeClassDeclStruct
	mercury_data_ops__type_class_decl_op_table_1;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ops__type_ctor_info_assoc_0,
	mercury_data_ops__type_ctor_info_class_0,
	mercury_data_ops__type_ctor_info_mercury_op_table_0,
	mercury_data_ops__type_ctor_info_op_info_0,
	mercury_data_ops__type_ctor_info_priority_0,
	mercury_data_ops__type_ctor_info_table_0;
MR_decl_label3(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0, 2,4,1)
MR_decl_label3(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0, 2,4,1)
MR_decl_label3(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0, 2,4,1)
MR_decl_label3(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0, 2,4,1)
MR_decl_label1(ops__adjust_priority_for_assoc_3_0, 2)
MR_decl_label10(ops__op_table_3_0, 3,298,5,15,24,27,33,45,48,63)
MR_decl_label10(ops__op_table_3_0, 75,78,96,102,105,114,117,120,126,129)
MR_decl_label10(ops__op_table_3_0, 135,138,141,153,156,171,174,216,222,225)
MR_decl_label10(ops__op_table_3_0, 228,231,234,237,249,252,255,258,261,264)
MR_decl_label8(ops__op_table_3_0, 267,270,273,276,279,282,285,294)
MR_decl_label6(__Unify___ops__class_0_0, 7,11,5,9,17,1)
MR_decl_label3(__Unify___ops__op_info_0_0, 4,6,1)
MR_decl_label2(__Compare___ops__assoc_0_0, 2,3)
MR_decl_label10(__Compare___ops__class_0_0, 27,32,33,35,38,63,68,69,5,7)
MR_decl_label10(__Compare___ops__class_0_0, 9,10,12,15,49,95,54,111,55,81)
MR_decl_label5(__Compare___ops__op_info_0_0, 5,8,17,9,13)
MR_decl_label2(__Compare___ops__priority_0_0, 2,3)
MR_def_extern_entry(ops__lookup_infix_op_5_0)
MR_def_extern_entry(ops__lookup_prefix_op_4_0)
MR_def_extern_entry(ops__lookup_binary_prefix_op_5_0)
MR_def_extern_entry(ops__lookup_postfix_op_4_0)
MR_def_extern_entry(ops__lookup_op_2_0)
MR_def_extern_entry(ops__lookup_op_infos_4_0)
MR_def_extern_entry(ops__lookup_operator_term_4_0)
MR_def_extern_entry(fn__ops__max_priority_1_0)
MR_def_extern_entry(fn__ops__arg_priority_1_0)
MR_def_extern_entry(fn__ops__init_mercury_op_table_0_0)
MR_def_extern_entry(ops__adjust_priority_for_assoc_3_0)
MR_def_extern_entry(fn__ops__mercury_max_priority_1_0)
MR_decl_static(ops__op_table_3_0)
MR_def_extern_entry(ops__lookup_mercury_infix_op_5_0)
MR_def_extern_entry(ops__lookup_mercury_prefix_op_4_0)
MR_def_extern_entry(ops__lookup_mercury_binary_prefix_op_5_0)
MR_def_extern_entry(ops__lookup_mercury_postfix_op_4_0)
MR_def_extern_entry(ops__lookup_mercury_op_2_0)
MR_def_extern_entry(ops__lookup_mercury_op_infos_4_0)
MR_def_extern_entry(ops__lookup_mercury_operator_term_4_0)
MR_def_extern_entry(fn__ops__mercury_arg_priority_1_0)
MR_def_extern_entry(__Unify___ops__assoc_0_0)
MR_def_extern_entry(__Compare___ops__assoc_0_0)
MR_def_extern_entry(__Unify___ops__class_0_0)
MR_def_extern_entry(__Compare___ops__class_0_0)
MR_def_extern_entry(__Unify___ops__mercury_op_table_0_0)
MR_def_extern_entry(__Compare___ops__mercury_op_table_0_0)
MR_def_extern_entry(__Unify___ops__op_info_0_0)
MR_def_extern_entry(__Compare___ops__op_info_0_0)
MR_def_extern_entry(__Unify___ops__priority_0_0)
MR_def_extern_entry(__Compare___ops__priority_0_0)
MR_def_extern_entry(__Unify___ops__table_0_0)
MR_def_extern_entry(__Compare___ops__table_0_0)
MR_def_extern_entry(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_0)
MR_def_extern_entry(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_0)
MR_def_extern_entry(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_0)
MR_def_extern_entry(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_0)
MR_def_extern_entry(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_0)
MR_def_extern_entry(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_0)
MR_def_extern_entry(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_0)
MR_def_extern_entry(fn__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_0)
MR_def_extern_entry(fn__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_0)
MR_def_extern_entry(fn__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_0)
MR_def_extern_entry(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0)
MR_def_extern_entry(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0)
MR_def_extern_entry(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0)
MR_def_extern_entry(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0)
MR_def_extern_entry(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_95_95_91_49_93_95_48_2_0)
MR_def_extern_entry(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_95_105_110_102_111_115_95_95_91_49_93_95_48_4_0)
MR_def_extern_entry(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_101_114_97_116_111_114_95_116_101_114_109_95_95_91_49_93_95_48_4_0)
MR_def_extern_entry(fn__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_0)
MR_def_extern_entry(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_def_extern_entry(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0)
MR_def_extern_entry(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_111_112_115_95_95_116_97_98_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_def_extern_entry(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_111_112_115_95_95_116_97_98_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0)
MR_def_extern_entry(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_105_110_102_105_120_95_111_112_95_53_95_95_91_49_93_95_48_5_0)
MR_def_extern_entry(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_112_114_101_102_105_120_95_111_112_95_52_95_95_91_49_93_95_48_4_0)
MR_def_extern_entry(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_53_95_95_91_49_93_95_48_5_0)
MR_def_extern_entry(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_112_111_115_116_102_105_120_95_111_112_95_52_95_95_91_49_93_95_48_4_0)
MR_def_extern_entry(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_95_50_95_95_91_49_93_95_48_2_0)
MR_def_extern_entry(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_95_105_110_102_111_115_95_52_95_95_91_49_93_95_48_4_0)
MR_def_extern_entry(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_101_114_97_116_111_114_95_116_101_114_109_95_52_95_95_91_49_93_95_48_4_0)
MR_def_extern_entry(fn__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_def_extern_entry(fn__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
0,
0
}
},
{
{
0,
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

static const struct mercury_type_1 mercury_common_1[43] =
{
{
MR_TAG_COMMON(0,0,0),
700
},
{
MR_TAG_COMMON(1,2,0),
900
},
{
MR_TAG_COMMON(0,0,0),
1175
},
{
MR_TAG_COMMON(0,0,0),
900
},
{
MR_TAG_COMMON(1,2,1),
1199
},
{
MR_TAG_COMMON(1,2,1),
1180
},
{
MR_TAG_COMMON(0,0,0),
1150
},
{
MR_TAG_COMMON(2,0,1),
950
},
{
MR_TAG_COMMON(1,2,0),
1181
},
{
MR_TAG_COMMON(1,2,0),
800
},
{
MR_TAG_COMMON(0,0,0),
400
},
{
MR_TAG_COMMON(1,2,1),
950
},
{
MR_TAG_COMMON(1,2,0),
950
},
{
MR_TAG_COMMON(1,2,1),
800
},
{
MR_TAG_COMMON(0,0,1),
1100
},
{
MR_TAG_COMMON(0,0,1),
740
},
{
MR_TAG_COMMON(0,0,0),
701
},
{
MR_TAG_COMMON(1,2,1),
1160
},
{
MR_TAG_COMMON(1,2,1),
100
},
{
MR_TAG_COMMON(0,0,1),
1170
},
{
MR_TAG_COMMON(0,0,2),
400
},
{
MR_TAG_COMMON(0,0,1),
1190
},
{
MR_TAG_COMMON(0,0,1),
1180
},
{
MR_TAG_COMMON(0,0,1),
720
},
{
MR_TAG_COMMON(0,0,1),
99
},
{
MR_TAG_COMMON(0,0,2),
500
},
{
MR_TAG_COMMON(1,2,1),
200
},
{
MR_TAG_COMMON(0,0,0),
90
},
{
MR_TAG_COMMON(1,2,1),
1200
},
{
MR_TAG_COMMON(0,0,0),
650
},
{
MR_TAG_COMMON(0,0,1),
920
},
{
MR_TAG_COMMON(0,0,0),
1200
},
{
MR_TAG_COMMON(0,0,2),
120
},
{
MR_TAG_COMMON(0,0,0),
550
},
{
MR_TAG_COMMON(0,0,2),
10
},
{
MR_TAG_COMMON(0,0,1),
1050
},
{
MR_TAG_COMMON(0,0,1),
1179
},
{
MR_TAG_COMMON(0,0,1),
1000
},
{
MR_TAG_COMMON(0,0,1),
500
},
{
MR_TAG_COMMON(1,2,1),
500
},
{
MR_TAG_COMMON(0,0,1),
200
},
{
MR_TAG_COMMON(0,0,1),
1025
},
{
MR_TAG_COMMON(1,2,1),
40
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
1
},
{
0
},
};

static const struct mercury_type_3 mercury_common_3[4] =
{
{
{
MR_TAG_COMMON(0,1,18),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,28),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,26),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,39),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_4 mercury_vector_common_4_0[256] =
{
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("instance", 8),
-1
},
{
MR_string_const("promise_exclusive", 17),
-1
},
{
MR_string_const("&", 1),
-1
},
{
MR_string_const(",", 1),
5
},
{
MR_string_const("!.", 2),
-1
},
{
MR_string_const("is", 2),
7
},
{
MR_string_const("catch", 5),
-1
},
{
MR_string_const("=", 1),
-1
},
{
MR_string_const("<", 1),
-1
},
{
MR_string_const("**", 2),
-1
},
{
MR_string_const("promise_equivalent_solution_sets", 32),
12
},
{
MR_string_const("trace", 5),
-1
},
{
MR_string_const("<=>", 3),
-1
},
{
MR_string_const("promise_exhaustive", 18),
-1
},
{
MR_string_const("-->", 3),
-1
},
{
MR_string_const("--", 2),
-1
},
{
MR_string_const("=^", 2),
-1
},
{
MR_string_const("..", 2),
-1
},
{
MR_string_const("promise_semipure", 16),
-1
},
{
MR_string_const("all", 3),
21
},
{
MR_string_const("\100=<", 3),
22
},
{
MR_string_const("//", 2),
-1
},
{
MR_string_const("--->", 4),
-1
},
{
MR_string_const("atomic", 6),
-1
},
{
MR_string_const("\\==", 3),
-1
},
{
MR_string_const("func", 4),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("arbitrary", 9),
-1
},
{
MR_string_const("promise_pure", 12),
-1
},
{
MR_string_const("typeclass", 9),
2
},
{
MR_string_const("!", 1),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("mode", 4),
3
},
{
MR_string_const("where", 5),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("+", 1),
-1
},
{
MR_string_const("*", 1),
-1
},
{
MR_string_const("-", 1),
-1
},
{
MR_string_const("if", 2),
4
},
{
MR_string_const("/", 1),
-1
},
{
MR_string_const(".", 1),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("then", 4),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("import_module", 13),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("promise_impure", 14),
6
},
{
MR_string_const("!:", 2),
-1
},
{
MR_string_const(";", 1),
-1
},
{
MR_string_const(":", 1),
-1
},
{
MR_string_const("try", 3),
8
},
{
MR_string_const("catch_any", 9),
9
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const(">", 1),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("\100", 1),
-1
},
{
MR_string_const("::", 2),
10
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("inst", 4),
11
},
{
MR_string_const(":=", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("when", 4),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const(":-", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("solver", 6),
-1
},
{
MR_string_const("div", 3),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("\\", 1),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("^", 1),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("++", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("event", 5),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("impure", 6),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("=:=", 3),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("\100>", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("\100<", 2),
-1
},
{
MR_string_const("~", 1),
-1
},
{
MR_string_const("\100>=", 3),
-1
},
{
MR_string_const("~=", 2),
-1
},
{
MR_string_const("<<", 2),
-1
},
{
MR_string_const("<=", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("mod", 3),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("semipure", 8),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("use_module", 10),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("pragma", 6),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("/\\", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("not", 3),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("type", 4),
13
},
{
MR_string_const("==>", 3),
15
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("end_module", 10),
-1
},
{
MR_string_const("=>", 2),
-1
},
{
MR_string_const("==", 2),
16
},
{
MR_string_const("=<", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("promise_equivalent_solutions", 28),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("pred", 4),
-1
},
{
MR_string_const("and", 3),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("->", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("module", 6),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const(">=", 2),
17
},
{
MR_string_const(">>", 2),
18
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("rule", 4),
-1
},
{
MR_string_const("initialise", 10),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("some", 4),
19
},
{
MR_string_const("promise_exclusive_exhaustive", 28),
-1
},
{
MR_string_const("finalize", 8),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("include_module", 14),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("rem", 3),
-1
},
{
MR_string_const("or_else", 7),
-1
},
{
MR_string_const("else", 4),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("=\\=", 3),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("initialize", 10),
20
},
{
MR_string_const("\\=", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("?-", 2),
-1
},
{
MR_string_const("\\/", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("\\+", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("promise", 7),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("finalise", 8),
24
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("=..", 3),
-1
},
{
MR_string_const("or", 2),
25
},
};

static const MR_EnumFunctorDesc mercury_data_ops__enum_functor_desc_assoc_0_0 = {
	"x",
	0
};

static const MR_EnumFunctorDesc mercury_data_ops__enum_functor_desc_assoc_0_1 = {
	"y",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ops__enum_value_ordered_assoc_0[] = {
	&mercury_data_ops__enum_functor_desc_assoc_0_0,
	&mercury_data_ops__enum_functor_desc_assoc_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ops__enum_name_ordered_assoc_0[] = {
	&mercury_data_ops__enum_functor_desc_assoc_0_0,
	&mercury_data_ops__enum_functor_desc_assoc_0_1
};

const MR_Integer mercury_data_ops__functor_number_map_assoc_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ops__type_ctor_info_assoc_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ops__assoc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ops__assoc_0_0)),
	"ops",
	"assoc",
	{ (void *)mercury_data_ops__enum_name_ordered_assoc_0 },
	{ (void *)mercury_data_ops__enum_value_ordered_assoc_0 },
	2,
	4,
	mercury_data_ops__functor_number_map_assoc_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ops__type_ctor_info_assoc_0;

const MR_PseudoTypeInfo mercury_data_ops__field_types_class_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ops__type_ctor_info_assoc_0,
	(MR_PseudoTypeInfo) &mercury_data_ops__type_ctor_info_assoc_0
};

static const MR_DuFunctorDesc mercury_data_ops__du_functor_desc_class_0_0 = {
	"infix",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ops__field_types_class_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ops__field_types_class_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ops__type_ctor_info_assoc_0
};

static const MR_DuFunctorDesc mercury_data_ops__du_functor_desc_class_0_1 = {
	"prefix",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ops__field_types_class_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ops__field_types_class_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_ops__type_ctor_info_assoc_0,
	(MR_PseudoTypeInfo) &mercury_data_ops__type_ctor_info_assoc_0
};

static const MR_DuFunctorDesc mercury_data_ops__du_functor_desc_class_0_2 = {
	"binary_prefix",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ops__field_types_class_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ops__field_types_class_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_ops__type_ctor_info_assoc_0
};

static const MR_DuFunctorDesc mercury_data_ops__du_functor_desc_class_0_3 = {
	"postfix",
	1,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ops__field_types_class_0_3,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ops__du_stag_ordered_class_0_0[] = {
	&mercury_data_ops__du_functor_desc_class_0_0

};

const MR_DuFunctorDescPtr mercury_data_ops__du_stag_ordered_class_0_1[] = {
	&mercury_data_ops__du_functor_desc_class_0_1

};

const MR_DuFunctorDescPtr mercury_data_ops__du_stag_ordered_class_0_2[] = {
	&mercury_data_ops__du_functor_desc_class_0_2

};

const MR_DuFunctorDescPtr mercury_data_ops__du_stag_ordered_class_0_3[] = {
	&mercury_data_ops__du_functor_desc_class_0_3

};

const MR_DuPtagLayout mercury_data_ops__du_ptag_ordered_class_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ops__du_stag_ordered_class_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ops__du_stag_ordered_class_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ops__du_stag_ordered_class_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ops__du_stag_ordered_class_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ops__du_name_ordered_class_0[] = {
	&mercury_data_ops__du_functor_desc_class_0_2,
	&mercury_data_ops__du_functor_desc_class_0_0,
	&mercury_data_ops__du_functor_desc_class_0_3,
	&mercury_data_ops__du_functor_desc_class_0_1
};

const MR_Integer mercury_data_ops__functor_number_map_class_0[] = {
	1,
	3,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_ops__type_ctor_info_class_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ops__class_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ops__class_0_0)),
	"ops",
	"class",
	{ (void *)mercury_data_ops__du_name_ordered_class_0 },
	{ (void *)mercury_data_ops__du_ptag_ordered_class_0 },
	4,
	4,
	mercury_data_ops__functor_number_map_class_0
};

static const MR_EnumFunctorDesc mercury_data_ops__enum_functor_desc_mercury_op_table_0_0 = {
	"mercury_op_table",
	0
};

const MR_EnumFunctorDescPtr mercury_data_ops__enum_value_ordered_mercury_op_table_0[] = {
	&mercury_data_ops__enum_functor_desc_mercury_op_table_0_0
};

const MR_EnumFunctorDescPtr mercury_data_ops__enum_name_ordered_mercury_op_table_0[] = {
	&mercury_data_ops__enum_functor_desc_mercury_op_table_0_0
};

const MR_Integer mercury_data_ops__functor_number_map_mercury_op_table_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ops__type_ctor_info_mercury_op_table_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_DUMMY,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ops__mercury_op_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ops__mercury_op_table_0_0)),
	"ops",
	"mercury_op_table",
	{ (void *)mercury_data_ops__enum_name_ordered_mercury_op_table_0 },
	{ (void *)mercury_data_ops__enum_value_ordered_mercury_op_table_0 },
	1,
	4,
	mercury_data_ops__functor_number_map_mercury_op_table_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ops__type_ctor_info_class_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_ops__field_types_op_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ops__type_ctor_info_class_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ops__du_functor_desc_op_info_0_0 = {
	"op_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ops__field_types_op_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ops__du_stag_ordered_op_info_0_0[] = {
	&mercury_data_ops__du_functor_desc_op_info_0_0

};

const MR_DuPtagLayout mercury_data_ops__du_ptag_ordered_op_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ops__du_stag_ordered_op_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ops__du_name_ordered_op_info_0[] = {
	&mercury_data_ops__du_functor_desc_op_info_0_0
};

const MR_Integer mercury_data_ops__functor_number_map_op_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ops__type_ctor_info_op_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ops__op_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ops__op_info_0_0)),
	"ops",
	"op_info",
	{ (void *)mercury_data_ops__du_name_ordered_op_info_0 },
	{ (void *)mercury_data_ops__du_ptag_ordered_op_info_0 },
	1,
	4,
	mercury_data_ops__functor_number_map_op_info_0
};

const MR_TypeCtorInfo_Struct mercury_data_ops__type_ctor_info_priority_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ops__priority_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ops__priority_0_0)),
	"ops",
	"priority",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ops__type_ctor_info_mercury_op_table_0;

const MR_TypeCtorInfo_Struct mercury_data_ops__type_ctor_info_table_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ops__table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ops__table_0_0)),
	"ops",
	"table",
	{ 0 },
	{ (void *)&mercury_data_ops__type_ctor_info_mercury_op_table_0 },
	-1,
	0,
	NULL
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 9,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_0))
};

const MR_ConstString mercury_data_ops__type_class_id_var_names_op_table_1[] = {
	"Table",
};

const MR_TypeClassMethod mercury_data_ops__type_class_id_method_ids_op_table_1[] = {
	{ "lookup_infix_op", 5, MR_PREDICATE },
	{ "lookup_prefix_op", 4, MR_PREDICATE },
	{ "lookup_binary_prefix_op", 5, MR_PREDICATE },
	{ "lookup_postfix_op", 4, MR_PREDICATE },
	{ "lookup_op", 2, MR_PREDICATE },
	{ "lookup_op_infos", 4, MR_PREDICATE },
	{ "lookup_operator_term", 4, MR_PREDICATE },
	{ "max_priority", 2, MR_FUNCTION },
	{ "arg_priority", 2, MR_FUNCTION },
};

static const MR_TypeClassId mercury_data_ops__type_class_id_op_table_1 = {
	"ops",
	"op_table",
	1,
	1,
	9,
	mercury_data_ops__type_class_id_var_names_op_table_1,
	mercury_data_ops__type_class_id_method_ids_op_table_1
};

const MR_TypeClassDeclStruct mercury_data_ops__type_class_decl_op_table_1 = {
	&mercury_data_ops__type_class_id_op_table_1,
	0,
	0,
	NULL
};



MR_declare_entry(mercury__do_call_class_method_2);

MR_BEGIN_MODULE(ops_module0)
	MR_init_entry1(ops__lookup_infix_op_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__lookup_infix_op_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_infix_op'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__lookup_infix_op_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ops__lookup_infix_op_5_0));
	MR_np_tailcall_ent(do_call_class_method_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module1)
	MR_init_entry1(ops__lookup_prefix_op_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__lookup_prefix_op_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_prefix_op'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__lookup_prefix_op_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ops__lookup_prefix_op_4_0));
	MR_np_tailcall_ent(do_call_class_method_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module2)
	MR_init_entry1(ops__lookup_binary_prefix_op_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__lookup_binary_prefix_op_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_binary_prefix_op'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__lookup_binary_prefix_op_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ops__lookup_binary_prefix_op_5_0));
	MR_np_tailcall_ent(do_call_class_method_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module3)
	MR_init_entry1(ops__lookup_postfix_op_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__lookup_postfix_op_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_postfix_op'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__lookup_postfix_op_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ops__lookup_postfix_op_4_0));
	MR_np_tailcall_ent(do_call_class_method_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module4)
	MR_init_entry1(ops__lookup_op_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__lookup_op_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_op'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__lookup_op_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ops__lookup_op_2_0));
	MR_np_tailcall_ent(do_call_class_method_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module5)
	MR_init_entry1(ops__lookup_op_infos_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__lookup_op_infos_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_op_infos'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__lookup_op_infos_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ops__lookup_op_infos_4_0));
	MR_np_tailcall_ent(do_call_class_method_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_1);

MR_BEGIN_MODULE(ops_module6)
	MR_init_entry1(ops__lookup_operator_term_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__lookup_operator_term_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_operator_term'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__lookup_operator_term_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 7;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ops__lookup_operator_term_4_0));
	MR_np_tailcall_ent(do_call_class_method_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module7)
	MR_init_entry1(fn__ops__max_priority_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ops__max_priority_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'max_priority'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ops__max_priority_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 8;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__ops__max_priority_1_0));
	MR_np_tailcall_ent(do_call_class_method_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module8)
	MR_init_entry1(fn__ops__arg_priority_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ops__arg_priority_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'arg_priority'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ops__arg_priority_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 9;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__ops__arg_priority_1_0));
	MR_np_tailcall_ent(do_call_class_method_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module9)
	MR_init_entry1(fn__ops__init_mercury_op_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ops__init_mercury_op_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_mercury_op_table'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ops__init_mercury_op_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module10)
	MR_init_entry1(ops__adjust_priority_for_assoc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__adjust_priority_for_assoc_3_0);
	MR_init_label1(ops__adjust_priority_for_assoc_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'adjust_priority_for_assoc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__adjust_priority_for_assoc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ops__adjust_priority_for_assoc_3_0_i2);
	}
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
MR_def_label(ops__adjust_priority_for_assoc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module11)
	MR_init_entry1(fn__ops__mercury_max_priority_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ops__mercury_max_priority_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_max_priority'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ops__mercury_max_priority_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module12)
	MR_init_entry1(ops__op_table_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__op_table_3_0);
	MR_init_label10(ops__op_table_3_0,3,298,5,15,24,27,33,45,48,63)
	MR_init_label10(ops__op_table_3_0,75,78,96,102,105,114,117,120,126,129)
	MR_init_label10(ops__op_table_3_0,135,138,141,153,156,171,174,216,222,225)
	MR_init_label10(ops__op_table_3_0,228,231,234,237,249,252,255,258,261,264)
	MR_init_label8(ops__op_table_3_0,267,270,273,276,279,282,285,294)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'op_table'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ops__op_table_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 255);
MR_def_label(ops__op_table_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r4 * (MR_Integer) 2);
	MR_tempr2 = ((MR_Word *) &mercury_vector_common_4_0)[(MR_Integer) MR_tempr1];
	if (((MR_Integer) MR_tempr2 && (strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_r1) == 0))) {
		MR_GOTO_LAB(ops__op_table_3_0_i5);
	}
	MR_r4 = ((MR_Word *) &mercury_vector_common_4_0)[((MR_Integer) MR_tempr1 + (MR_Integer) 1)];
	if (MR_INT_GE(MR_r4,0))
		continue;
	}
	break; } /* end while */
MR_def_label(ops__op_table_3_0,298)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r4,
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i117) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i48) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i285) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i270) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i294) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i78) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i129) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i222) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i222) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i279) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i138) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i138) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i216) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i48) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i258) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i264) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i228) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i249) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i45) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i138) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i222) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i282) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i261) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i138) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i222) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i105) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i138) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i45) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i117) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i294) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i117) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i231) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i276) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i282) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i267) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i102) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i282) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i252) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i27) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i117) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i45) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i294) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i225) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i237) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i138) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i126) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i222) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i171) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i231) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i117) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i228) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i15) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i234) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i33) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i282) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i156) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i141) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i273) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i114) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i96) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i222) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i222) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i222) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i153) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i222) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i222) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i282) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i216) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i75) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i96) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i117) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i117) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i264) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i153) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i24) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i231) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i117) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i216) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i222) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i222) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i138) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i105) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i135) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i255) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i117) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i222) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i282) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i117) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i117) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i138) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i48) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i117) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i117) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i75) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i225) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i120) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i222) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i117) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i222) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i174) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i264) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i153) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i117) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i117) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i298) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i222) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i63));
MR_def_label(ops__op_table_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,11);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,15);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,16);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,17);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,13);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,18);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,19);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,21);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,22);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,23);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,24);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,26);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,27);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,28);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,30);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,14);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,29);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,31);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,32);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,33);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,34);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,35);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,31);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,36);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,25);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,25);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,37);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,38);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,25);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,40);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,20);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,285)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,41);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,294)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,42);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module13)
	MR_init_entry1(ops__lookup_mercury_infix_op_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__lookup_mercury_infix_op_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_mercury_infix_op'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__lookup_mercury_infix_op_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module14)
	MR_init_entry1(ops__lookup_mercury_prefix_op_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__lookup_mercury_prefix_op_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_mercury_prefix_op'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__lookup_mercury_prefix_op_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module15)
	MR_init_entry1(ops__lookup_mercury_binary_prefix_op_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__lookup_mercury_binary_prefix_op_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_mercury_binary_prefix_op'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__lookup_mercury_binary_prefix_op_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module16)
	MR_init_entry1(ops__lookup_mercury_postfix_op_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__lookup_mercury_postfix_op_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_mercury_postfix_op'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__lookup_mercury_postfix_op_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module17)
	MR_init_entry1(ops__lookup_mercury_op_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__lookup_mercury_op_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_mercury_op'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__lookup_mercury_op_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_95_95_91_49_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module18)
	MR_init_entry1(ops__lookup_mercury_op_infos_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__lookup_mercury_op_infos_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_mercury_op_infos'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__lookup_mercury_op_infos_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_95_105_110_102_111_115_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module19)
	MR_init_entry1(ops__lookup_mercury_operator_term_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__lookup_mercury_operator_term_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_mercury_operator_term'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__lookup_mercury_operator_term_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_101_114_97_116_111_114_95_116_101_114_109_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module20)
	MR_init_entry1(fn__ops__mercury_arg_priority_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ops__mercury_arg_priority_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_arg_priority'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ops__mercury_arg_priority_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module21)
	MR_init_entry1(__Unify___ops__assoc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ops__assoc_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ops__assoc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module22)
	MR_init_entry1(__Compare___ops__assoc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ops__assoc_0_0);
	MR_init_label2(__Compare___ops__assoc_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ops__assoc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___ops__assoc_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___ops__assoc_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___ops__assoc_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ops__assoc_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module23)
	MR_init_entry1(__Unify___ops__class_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ops__class_0_0);
	MR_init_label6(__Unify___ops__class_0_0,7,11,5,9,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ops__class_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ops__class_0_0_i17);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___ops__class_0_0_i7) MR_AND
		MR_LABEL_AP(__Unify___ops__class_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___ops__class_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___ops__class_0_0_i9));
MR_def_label(__Unify___ops__class_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ops__class_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___ops__class_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ops__class_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ops__class_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ops__class_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ops__class_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tfield(2, MR_tempr2, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(2, MR_tempr3, 0);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___ops__class_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(2, MR_tempr3, 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ops__class_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___ops__class_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ops__class_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ops__class_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module24)
	MR_init_entry1(__Compare___ops__class_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ops__class_0_0);
	MR_init_label10(__Compare___ops__class_0_0,27,32,33,35,38,63,68,69,5,7)
	MR_init_label10(__Compare___ops__class_0_0,9,10,12,15,49,95,54,111,55,81)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ops__class_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i111);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___ops__class_0_0_i27) MR_AND
		MR_LABEL_AP(__Compare___ops__class_0_0_i63) MR_AND
		MR_LABEL_AP(__Compare___ops__class_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___ops__class_0_0_i49));
MR_def_label(__Compare___ops__class_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i95);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i32);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ops__class_0_0_i35);
	}
MR_def_label(__Compare___ops__class_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i33);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ops__class_0_0_i35);
MR_def_label(__Compare___ops__class_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 2;
	MR_sv(2) = MR_r2;
MR_def_label(__Compare___ops__class_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i81);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i38);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___ops__class_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r2)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i55);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___ops__class_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ops__class_0_0_i55) MR_AND
		MR_LABEL_AP(__Compare___ops__class_0_0_i68) MR_AND
		MR_LABEL_AP(__Compare___ops__class_0_0_i95) MR_AND
		MR_LABEL_AP(__Compare___ops__class_0_0_i95));
MR_def_label(__Compare___ops__class_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r3 = MR_tfield(1, MR_sv(1), 0);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i69);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___ops__class_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r2)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i55);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___ops__class_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ops__class_0_0_i55) MR_AND
		MR_LABEL_AP(__Compare___ops__class_0_0_i55) MR_AND
		MR_LABEL_AP(__Compare___ops__class_0_0_i7) MR_AND
		MR_LABEL_AP(__Compare___ops__class_0_0_i95));
MR_def_label(__Compare___ops__class_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r3 = MR_tfield(2, MR_tempr2, 1);
	MR_r4 = MR_tfield(2, MR_tempr2, 0);
	MR_r5 = MR_tfield(2, MR_tempr1, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i9);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ops__class_0_0_i12);
	}
MR_def_label(__Compare___ops__class_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i10);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ops__class_0_0_i12);
MR_def_label(__Compare___ops__class_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 2;
	MR_sv(2) = MR_r2;
MR_def_label(__Compare___ops__class_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i81);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___ops__class_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r2)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i55);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___ops__class_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i55);
	}
	MR_r2 = MR_tfield(3, MR_sv(2), 0);
	MR_r3 = MR_tfield(3, MR_sv(1), 0);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i54);
	}
MR_def_label(__Compare___ops__class_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___ops__class_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r2)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i55);
	}
MR_def_label(__Compare___ops__class_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___ops__class_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___ops__class_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module25)
	MR_init_entry1(__Unify___ops__mercury_op_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ops__mercury_op_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ops__mercury_op_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module26)
	MR_init_entry1(__Compare___ops__mercury_op_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ops__mercury_op_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ops__mercury_op_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module27)
	MR_init_entry1(__Unify___ops__op_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ops__op_info_0_0);
	MR_init_label3(__Unify___ops__op_info_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ops__op_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ops__op_info_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ops__class_0_0,
		__Unify___ops__op_info_0_0_i4);
MR_def_label(__Unify___ops__op_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ops__op_info_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ops__op_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ops__op_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module28)
	MR_init_entry1(__Compare___ops__op_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ops__op_info_0_0);
	MR_init_label5(__Compare___ops__op_info_0_0,5,8,17,9,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ops__op_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ops__op_info_0_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr2, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr5 = MR_tempr1;
	MR_sv(1) = MR_tempr4;
	MR_tempr6 = MR_tempr2;
	MR_sv(2) = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_tempr5, 0);
	MR_r2 = MR_tfield(0, MR_tempr6, 0);
	}
	MR_np_call_localret_ent(__Compare___ops__class_0_0,
		__Compare___ops__op_info_0_0_i5);
MR_def_label(__Compare___ops__op_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ops__op_info_0_0_i13);
	}
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(__Compare___ops__op_info_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ops__op_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_sv(2))) {
		MR_GOTO_LAB(__Compare___ops__op_info_0_0_i9);
	}
MR_def_label(__Compare___ops__op_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ops__op_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___ops__op_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module29)
	MR_init_entry1(__Unify___ops__priority_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ops__priority_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ops__priority_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module30)
	MR_init_entry1(__Compare___ops__priority_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ops__priority_0_0);
	MR_init_label2(__Compare___ops__priority_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ops__priority_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___ops__priority_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___ops__priority_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___ops__priority_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ops__priority_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module31)
	MR_init_entry1(__Unify___ops__table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ops__table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ops__table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_111_112_115_95_95_116_97_98_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module32)
	MR_init_entry1(__Compare___ops__table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ops__table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ops__table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_111_112_115_95_95_116_97_98_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module33)
	MR_init_entry1(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_105_110_102_105_120_95_111_112_95_53_95_95_91_49_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module34)
	MR_init_entry1(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_112_114_101_102_105_120_95_111_112_95_52_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module35)
	MR_init_entry1(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_53_95_95_91_49_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module36)
	MR_init_entry1(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_112_111_115_116_102_105_120_95_111_112_95_52_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module37)
	MR_init_entry1(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_95_50_95_95_91_49_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module38)
	MR_init_entry1(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_95_105_110_102_111_115_95_52_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module39)
	MR_init_entry1(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_101_114_97_116_111_114_95_116_101_114_109_95_52_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module40)
	MR_init_entry1(fn__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module41)
	MR_init_entry1(fn__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module42)
	MR_init_entry1(fn__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__mercury_max_priority__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module43)
	MR_init_entry1(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0);
	MR_init_label3(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__lookup_mercury_infix_op__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ops__op_table_3_0,
		f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0_i2);
MR_def_label(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0_i4);
	}
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module44)
	MR_init_entry1(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0);
	MR_init_label3(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__lookup_mercury_prefix_op__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ops__op_table_3_0,
		f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0_i2);
MR_def_label(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0_i4);
	}
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module45)
	MR_init_entry1(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0);
	MR_init_label3(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__lookup_mercury_binary_prefix_op__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ops__op_table_3_0,
		f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0_i2);
MR_def_label(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0_i4);
	}
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r3 = MR_tfield(2, MR_tempr1, 0);
	MR_r4 = MR_tfield(2, MR_tempr1, 1);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_tfield(2, MR_tempr1, 0);
	MR_r4 = MR_tfield(2, MR_tempr1, 1);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module46)
	MR_init_entry1(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0);
	MR_init_label3(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__lookup_mercury_postfix_op__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ops__op_table_3_0,
		f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0_i2);
MR_def_label(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0_i4);
	}
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,3)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module47)
	MR_init_entry1(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_95_95_91_49_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_95_95_91_49_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__lookup_mercury_op__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_95_95_91_49_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ops__op_table_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module48)
	MR_init_entry1(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_95_105_110_102_111_115_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_95_105_110_102_111_115_95_95_91_49_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__lookup_mercury_op_infos__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_95_105_110_102_111_115_95_95_91_49_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ops__op_table_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module49)
	MR_init_entry1(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_101_114_97_116_111_114_95_116_101_114_109_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_101_114_97_116_111_114_95_116_101_114_109_95_95_91_49_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__lookup_mercury_operator_term__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_101_114_97_116_111_114_95_116_101_114_109_95_95_91_49_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 120;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module50)
	MR_init_entry1(fn__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__mercury_arg_priority__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 999;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module51)
	MR_init_entry1(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Unify___ops__mercury_op_table_0__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module52)
	MR_init_entry1(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Compare___ops__mercury_op_table_0__[2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module53)
	MR_init_entry1(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_111_112_115_95_95_116_97_98_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_111_112_115_95_95_116_97_98_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Unify___ops__table_0__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_111_112_115_95_95_116_97_98_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module54)
	MR_init_entry1(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_111_112_115_95_95_116_97_98_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_111_112_115_95_95_116_97_98_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Compare___ops__table_0__[2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_111_112_115_95_95_116_97_98_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module55)
	MR_init_entry1(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_105_110_102_105_120_95_111_112_95_53_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_105_110_102_105_120_95_111_112_95_53_95_95_91_49_93_95_48_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_105_110_102_105_120_95_111_112_95_53_95_95_91_49_93_95_48_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module56)
	MR_init_entry1(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_112_114_101_102_105_120_95_111_112_95_52_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_112_114_101_102_105_120_95_111_112_95_52_95_95_91_49_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_112_114_101_102_105_120_95_111_112_95_52_95_95_91_49_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module57)
	MR_init_entry1(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_53_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_53_95_95_91_49_93_95_48_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_53_95_95_91_49_93_95_48_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module58)
	MR_init_entry1(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_112_111_115_116_102_105_120_95_111_112_95_52_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_112_111_115_116_102_105_120_95_111_112_95_52_95_95_91_49_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_112_111_115_116_102_105_120_95_111_112_95_52_95_95_91_49_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module59)
	MR_init_entry1(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_95_50_95_95_91_49_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_95_50_95_95_91_49_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_95_50_95_95_91_49_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ops__op_table_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module60)
	MR_init_entry1(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_95_105_110_102_111_115_95_52_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_95_105_110_102_111_115_95_52_95_95_91_49_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_95_105_110_102_111_115_95_52_95_95_91_49_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ops__op_table_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module61)
	MR_init_entry1(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_101_114_97_116_111_114_95_116_101_114_109_95_52_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_101_114_97_116_111_114_95_116_101_114_109_95_52_95_95_91_49_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_101_114_97_116_111_114_95_116_101_114_109_95_52_95_95_91_49_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 120;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module62)
	MR_init_entry1(fn__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module63)
	MR_init_entry1(fn__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 999;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ops_maybe_bunch_0(void)
{
	ops_module0();
	ops_module1();
	ops_module2();
	ops_module3();
	ops_module4();
	ops_module5();
	ops_module6();
	ops_module7();
	ops_module8();
	ops_module9();
	ops_module10();
	ops_module11();
	ops_module12();
	ops_module13();
	ops_module14();
	ops_module15();
	ops_module16();
	ops_module17();
	ops_module18();
	ops_module19();
	ops_module20();
	ops_module21();
	ops_module22();
	ops_module23();
	ops_module24();
	ops_module25();
	ops_module26();
	ops_module27();
	ops_module28();
	ops_module29();
	ops_module30();
	ops_module31();
	ops_module32();
	ops_module33();
	ops_module34();
	ops_module35();
	ops_module36();
	ops_module37();
	ops_module38();
	ops_module39();
}

static void mercury__ops_maybe_bunch_1(void)
{
	ops_module40();
	ops_module41();
	ops_module42();
	ops_module43();
	ops_module44();
	ops_module45();
	ops_module46();
	ops_module47();
	ops_module48();
	ops_module49();
	ops_module50();
	ops_module51();
	ops_module52();
	ops_module53();
	ops_module54();
	ops_module55();
	ops_module56();
	ops_module57();
	ops_module58();
	ops_module59();
	ops_module60();
	ops_module61();
	ops_module62();
	ops_module63();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ops__init(void);
void mercury__ops__init_type_tables(void);
void mercury__ops__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ops__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ops__init_complexity_procs(void);
#endif

void mercury__ops__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ops_maybe_bunch_0();
	mercury__ops_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ops__type_ctor_info_assoc_0,
		ops__assoc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ops__type_ctor_info_class_0,
		ops__class_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ops__type_ctor_info_mercury_op_table_0,
		ops__mercury_op_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ops__type_ctor_info_op_info_0,
		ops__op_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ops__type_ctor_info_priority_0,
		ops__priority_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ops__type_ctor_info_table_0,
		ops__table_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__, 5) =
			MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__, 6) =
			MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__, 7) =
			MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__, 8) =
			MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__, 9) =
			MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__, 10) =
			MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__, 11) =
			MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__, 12) =
			MR_ENTRY_AP(fn__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__, 13) =
			MR_ENTRY_AP(fn__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__ops__init_debugger();
}

void mercury__ops__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ops__type_ctor_info_assoc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ops__type_ctor_info_class_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ops__type_ctor_info_mercury_op_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ops__type_ctor_info_op_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ops__type_ctor_info_priority_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ops__type_ctor_info_table_0);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_ops__type_class_decl_op_table_1);
	}
}


void mercury__ops__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ops__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ops);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ops__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
