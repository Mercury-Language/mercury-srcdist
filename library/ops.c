/*
** Automatically generated from `ops.m'
** by the Mercury compiler,
** version rotd-2007-12-21, configured for i686-pc-linux-gnu.
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
#line 46 "array.opt"
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
#line 23 "store.opt"
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
#line 109 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 95 "ops.c"
#line 4 "int.opt"
#include "int.mh"

#line 99 "ops.c"
#line 3 "list.opt"
#include "list.mh"

#line 103 "ops.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 107 "ops.c"
#line 108 "ops.c"
#include "ops.mh"

#line 111 "ops.c"
#line 112 "ops.c"
#ifndef OPS_DECL_GUARD
#define OPS_DECL_GUARD

#line 116 "ops.c"
#line 117 "ops.c"

#endif
#line 120 "ops.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1[256];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
	MR_String f2[21];
	MR_Integer f3;
	MR_String f4;
	MR_Integer f5[2];
	MR_String f6;
	MR_Integer f7[2];
	MR_String f8[4];
	MR_Integer f9[6];
	MR_String f10[2];
	MR_Integer f11;
	MR_String f12[6];
	MR_Integer f13[3];
	MR_String f14;
	MR_Integer f15;
	MR_String f16;
	MR_Integer f17;
	MR_String f18[7];
	MR_Integer f19;
	MR_String f20;
	MR_Integer f21;
	MR_String f22[2];
	MR_Integer f23;
	MR_String f24[2];
	MR_Integer f25[10];
	MR_String f26;
	MR_Integer f27[4];
	MR_String f28;
	MR_Integer f29;
	MR_String f30[2];
	MR_Integer f31[4];
	MR_String f32;
	MR_Integer f33;
	MR_String f34;
	MR_Integer f35[2];
	MR_String f36;
	MR_Integer f37[6];
	MR_String f38;
	MR_Integer f39[6];
	MR_String f40;
	MR_Integer f41[8];
	MR_String f42;
	MR_Integer f43[2];
	MR_String f44;
	MR_Integer f45;
	MR_String f46[6];
	MR_Integer f47;
	MR_String f48;
	MR_Integer f49[2];
	MR_String f50;
	MR_Integer f51[3];
	MR_String f52;
	MR_Integer f53;
	MR_String f54;
	MR_Integer f55[2];
	MR_String f56;
	MR_Integer f57[4];
	MR_String f58;
	MR_Integer f59[5];
	MR_String f60[2];
	MR_Integer f61[2];
	MR_String f62[4];
	MR_Integer f63;
	MR_String f64;
	MR_Integer f65;
	MR_String f66[3];
	MR_Integer f67[7];
	MR_String f68;
	MR_Integer f69[10];
	MR_String f70;
	MR_Integer f71[4];
	MR_String f72[2];
	MR_Integer f73[7];
	MR_String f74[2];
	MR_Integer f75[4];
	MR_String f76[3];
	MR_Integer f77[4];
	MR_String f78;
	MR_Integer f79;
	MR_String f80;
	MR_Integer f81;
	MR_String f82;
	MR_Integer f83[3];
	MR_String f84;
	MR_Integer f85[2];
	MR_String f86[2];
	MR_Integer f87[12];
	MR_String f88[2];
	MR_Integer f89[3];
	MR_String f90;
	MR_Integer f91[2];
	MR_String f92;
	MR_Integer f93[2];
	MR_String f94;
	MR_Integer f95[2];
	MR_String f96[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__[];

extern const MR_TypeClassDeclStruct
	mercury_data_ops__type_class_decl_op_table_1;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ops__type_ctor_info_table_0,
	mercury_data_ops__type_ctor_info_priority_0,
	mercury_data_ops__type_ctor_info_op_info_0,
	mercury_data_ops__type_ctor_info_mercury_op_table_0,
	mercury_data_ops__type_ctor_info_class_0,
	mercury_data_ops__type_ctor_info_assoc_0;
MR_decl_label3(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0, 2,4,1)
MR_decl_label3(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0, 2,4,1)
MR_decl_label3(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0, 2,4,1)
MR_decl_label3(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0, 2,4,1)
MR_decl_label1(ops__adjust_priority_for_assoc_3_0, 2)
MR_decl_label8(ops__op_table_3_0, 3,111,5,8,9,11,12,17)
MR_decl_label8(ops__op_table_3_0, 21,27,35,37,38,40,41,45)
MR_decl_label8(ops__op_table_3_0, 46,47,51,54,55,56,57,59)
MR_decl_label8(ops__op_table_3_0, 60,61,62,73,78,79,81,85)
MR_decl_label8(ops__op_table_3_0, 86,87,88,91,94,95,98,99)
MR_decl_label6(ops__op_table_3_0, 103,104,105,107,108,109)
MR_decl_label6(__Unify___ops__class_0_0, 6,8,10,12,25,1)
MR_decl_label3(__Unify___ops__op_info_0_0, 4,6,1)
MR_decl_label2(__Compare___ops__assoc_0_0, 2,3)
MR_decl_label8(__Compare___ops__class_0_0, 6,11,12,14,17,25,29,30)
MR_decl_label8(__Compare___ops__class_0_0, 36,41,43,44,46,49,55,80)
MR_decl_label4(__Compare___ops__class_0_0, 62,97,63,66)
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

static const struct mercury_type_0 mercury_common_0[2] =
{
{
0
},
{
1
},
};

static const struct mercury_type_1 mercury_common_1[41] =
{
{
MR_TAG_COMMON(1,0,0),
1199
},
{
MR_TAG_COMMON(1,0,1),
950
},
{
MR_TAG_COMMON(0,2,0),
1025
},
{
MR_TAG_COMMON(0,2,0),
1000
},
{
MR_TAG_COMMON(1,0,0),
40
},
{
MR_TAG_COMMON(0,2,1),
701
},
{
MR_TAG_COMMON(0,2,0),
200
},
{
MR_TAG_COMMON(2,2,0),
950
},
{
MR_TAG_COMMON(0,2,2),
500
},
{
MR_TAG_COMMON(0,2,0),
920
},
{
MR_TAG_COMMON(0,2,1),
1200
},
{
MR_TAG_COMMON(0,2,1),
650
},
{
MR_TAG_COMMON(0,2,1),
550
},
{
MR_TAG_COMMON(1,0,0),
950
},
{
MR_TAG_COMMON(0,2,1),
700
},
{
MR_TAG_COMMON(0,2,2),
400
},
{
MR_TAG_COMMON(0,2,0),
1179
},
{
MR_TAG_COMMON(1,0,0),
800
},
{
MR_TAG_COMMON(0,2,1),
1175
},
{
MR_TAG_COMMON(1,0,0),
500
},
{
MR_TAG_COMMON(1,0,0),
200
},
{
MR_TAG_COMMON(1,0,0),
1160
},
{
MR_TAG_COMMON(0,2,2),
10
},
{
MR_TAG_COMMON(0,2,1),
1150
},
{
MR_TAG_COMMON(0,2,0),
1100
},
{
MR_TAG_COMMON(0,2,2),
120
},
{
MR_TAG_COMMON(0,2,1),
90
},
{
MR_TAG_COMMON(0,2,1),
900
},
{
MR_TAG_COMMON(1,0,0),
1200
},
{
MR_TAG_COMMON(1,0,1),
1181
},
{
MR_TAG_COMMON(0,2,0),
99
},
{
MR_TAG_COMMON(1,0,0),
100
},
{
MR_TAG_COMMON(0,2,0),
500
},
{
MR_TAG_COMMON(1,0,1),
800
},
{
MR_TAG_COMMON(1,0,1),
900
},
{
MR_TAG_COMMON(0,2,1),
400
},
{
MR_TAG_COMMON(1,0,0),
1180
},
{
MR_TAG_COMMON(0,2,0),
720
},
{
MR_TAG_COMMON(0,2,0),
1050
},
{
MR_TAG_COMMON(0,2,0),
1170
},
{
MR_TAG_COMMON(0,2,0),
740
},
};

static const struct mercury_type_2 mercury_common_2[3] =
{
{
{
0,
1
}
},
{
{
0,
0
}
},
{
{
1,
0
}
},
};

static const struct mercury_type_3 mercury_common_3[4] =
{
{
{
MR_TAG_COMMON(0,1,19),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,20),
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
MR_TAG_COMMON(0,1,31),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
-2,
-1,
-1,
-1,
5,
-1,
-1,
-1,
9,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
19,
20,
-1,
-1,
-2,
-1,
-2,
-2,
-1,
-2,
-2,
-1,
-1,
2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
3,
-1,
-2,
-1,
-1,
-1,
4,
-1,
-1,
-2,
-2,
-2,
-1,
-2,
-1,
-2,
-1,
6,
-1,
-1,
-1,
-1,
-1,
-2,
-1,
-2,
-1,
7,
-2,
8,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-1,
-2,
-1,
-1,
-2,
-2,
-2,
-2,
-1,
-2,
-1,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-1,
-2,
-1,
-1,
-1,
-1,
-1,
-1,
-2,
-1,
-2,
-2,
-1,
-2,
-2,
-2,
-1,
-2,
-1,
-2,
-2,
10,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
11,
12,
-2,
-2,
-1,
-1,
13,
-1,
-2,
-1,
-2,
-1,
-1,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
15,
16,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-1,
-2,
-2,
-2,
-2,
17,
-1,
-1,
-2,
-2,
-2,
-2,
-1,
-2,
-1,
-2,
-1,
-2,
-2,
-2,
-1,
-2,
-2,
18,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-1,
-2,
-2,
-2,
-1,
-2,
-2,
-1,
-2,
-2,
-1,
-2,
-2,
-1,
21
}
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
0,
{
MR_string_const("instance", 8),
MR_string_const("promise_exclusive", 17),
MR_string_const("&", 1),
MR_string_const(",", 1),
MR_string_const("!.", 2),
MR_string_const("is", 2),
MR_string_const("**", 2),
MR_string_const("promise_equivalent_solution_sets", 32),
MR_string_const("inst", 4),
MR_string_const("/\\", 2),
MR_string_const("<=>", 3),
MR_string_const("-->", 3),
MR_string_const("--", 2),
MR_string_const("promise_exhaustive", 18),
MR_string_const("=^", 2),
MR_string_const("..", 2),
MR_string_const("promise_semipure", 16),
MR_string_const("all", 3),
MR_string_const("\100=<", 3),
MR_string_const("//", 2),
MR_string_const("\\==", 3)
},
0,
MR_string_const("--->", 4),
{
0,
0
},
MR_string_const("func", 4),
{
0,
0
},
{
MR_string_const("arbitrary", 9),
MR_string_const("promise_pure", 12),
MR_string_const("typeclass", 9),
MR_string_const("!", 1)
},
{
0,
0,
0,
0,
0,
0
},
{
MR_string_const("mode", 4),
MR_string_const("where", 5)
},
0,
{
MR_string_const("+", 1),
MR_string_const("*", 1),
MR_string_const("-", 1),
MR_string_const("if", 2),
MR_string_const("/", 1),
MR_string_const(".", 1)
},
{
0,
0,
0
},
MR_string_const("then", 4),
0,
MR_string_const("import_module", 13),
0,
{
MR_string_const("promise_pure_implicit", 21),
MR_string_const("promise_impure", 14),
MR_string_const("!:", 2),
MR_string_const(";", 1),
MR_string_const(":", 1),
MR_string_const("=", 1),
MR_string_const("<", 1)
},
0,
MR_string_const(">", 1),
0,
{
MR_string_const("\100", 1),
MR_string_const("::", 2)
},
0,
{
MR_string_const("trace", 5),
MR_string_const(":=", 2)
},
{
0,
0,
0,
0,
0,
0,
0,
0,
0,
0
},
MR_string_const("when", 4),
{
0,
0,
0,
0
},
MR_string_const(":-", 2),
0,
{
MR_string_const("solver", 6),
MR_string_const("div", 3)
},
{
0,
0,
0,
0
},
MR_string_const("\\", 1),
0,
MR_string_const("^", 1),
{
0,
0
},
MR_string_const("++", 2),
{
0,
0,
0,
0,
0,
0
},
MR_string_const("event", 5),
{
0,
0,
0,
0,
0,
0
},
MR_string_const("impure", 6),
{
0,
0,
0,
0,
0,
0,
0,
0
},
MR_string_const("=:=", 3),
{
0,
0
},
MR_string_const("\100>", 2),
0,
{
MR_string_const("\100<", 2),
MR_string_const("~", 1),
MR_string_const("\100>=", 3),
MR_string_const("~=", 2),
MR_string_const("<<", 2),
MR_string_const("<=", 2)
},
0,
MR_string_const("mod", 3),
{
0,
0
},
MR_string_const("semipure", 8),
{
0,
0,
0
},
MR_string_const("use_module", 10),
0,
MR_string_const("pragma", 6),
{
0,
0
},
MR_string_const("promise_impure_implicit", 23),
{
0,
0,
0,
0
},
MR_string_const("not", 3),
{
0,
0,
0,
0,
0
},
{
MR_string_const("type", 4),
MR_string_const("==>", 3)
},
{
0,
0
},
{
MR_string_const("end_module", 10),
MR_string_const("=>", 2),
MR_string_const("==", 2),
MR_string_const("=<", 2)
},
0,
MR_string_const("promise_equivalent_solutions", 28),
0,
{
MR_string_const("pred", 4),
MR_string_const("and", 3),
MR_string_const("promise_semipure_implicit", 25)
},
{
0,
0,
0,
0,
0,
0,
0
},
MR_string_const("->", 2),
{
0,
0,
0,
0,
0,
0,
0,
0,
0,
0
},
MR_string_const("module", 6),
{
0,
0,
0,
0
},
{
MR_string_const(">=", 2),
MR_string_const(">>", 2)
},
{
0,
0,
0,
0,
0,
0,
0
},
{
MR_string_const("rule", 4),
MR_string_const("initialise", 10)
},
{
0,
0,
0,
0
},
{
MR_string_const("some", 4),
MR_string_const("promise_exclusive_exhaustive", 28),
MR_string_const("finalize", 8)
},
{
0,
0,
0,
0
},
MR_string_const("include_module", 14),
0,
MR_string_const("rem", 3),
0,
MR_string_const("else", 4),
{
0,
0,
0
},
MR_string_const("=\\=", 3),
{
0,
0
},
{
MR_string_const("initialize", 10),
MR_string_const("\\=", 2)
},
{
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0
},
{
MR_string_const("?-", 2),
MR_string_const("\\/", 2)
},
{
0,
0,
0
},
MR_string_const("\\+", 2),
{
0,
0
},
MR_string_const("promise", 7),
{
0,
0
},
MR_string_const("finalise", 8),
{
0,
0
},
{
MR_string_const("=..", 3),
MR_string_const("or", 2)
}
},
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

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
extern const MR_TypeCtorInfo_Struct mercury_data_ops__type_ctor_info_class_0;

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
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__lookup_infix_op_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ops__lookup_infix_op_5_0));
	MR_np_tailcall_ent(do_call_class_method_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module1)
	MR_init_entry1(ops__lookup_prefix_op_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__lookup_prefix_op_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ops__lookup_prefix_op_4_0));
	MR_np_tailcall_ent(do_call_class_method_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module2)
	MR_init_entry1(ops__lookup_binary_prefix_op_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__lookup_binary_prefix_op_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ops__lookup_binary_prefix_op_5_0));
	MR_np_tailcall_ent(do_call_class_method_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module3)
	MR_init_entry1(ops__lookup_postfix_op_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__lookup_postfix_op_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ops__lookup_postfix_op_4_0));
	MR_np_tailcall_ent(do_call_class_method_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module4)
	MR_init_entry1(ops__lookup_op_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__lookup_op_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ops__lookup_op_2_0));
	MR_np_tailcall_ent(do_call_class_method_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ops_module5)
	MR_init_entry1(ops__lookup_op_infos_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ops__lookup_op_infos_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ops__lookup_op_infos_4_0));
	MR_np_tailcall_ent(do_call_class_method_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_1);

MR_BEGIN_MODULE(ops_module6)
	MR_init_entry1(ops__lookup_operator_term_4_0);
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
	MR_init_label1(ops__adjust_priority_for_assoc_3_0,2)
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
	MR_init_label8(ops__op_table_3_0,3,111,5,8,9,11,12,17)
	MR_init_label8(ops__op_table_3_0,21,27,35,37,38,40,41,45)
	MR_init_label8(ops__op_table_3_0,46,47,51,54,55,56,57,59)
	MR_init_label8(ops__op_table_3_0,60,61,62,73,78,79,81,85)
	MR_init_label8(ops__op_table_3_0,86,87,88,91,94,95,98,99)
	MR_init_label6(ops__op_table_3_0,103,104,105,107,108,109)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_COMMON(5,0))[(MR_Integer) MR_r4];
	if (((MR_Integer) MR_tempr1 && (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0))) {
		MR_GOTO_LAB(ops__op_table_3_0_i5);
	}
	MR_r4 = (MR_COMMON(4,0))[(MR_Integer) MR_r4];
	if (MR_INT_GE(MR_r4,0))
		continue;
	}
	break; } /* end while */
MR_def_label(ops__op_table_3_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r4,
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i107) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i95) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i8) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i9) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i45) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i11) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i12) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i94) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i107) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i104) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i81) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i17) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i104) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i95) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i54) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i21) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i87) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i94) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i108) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i91) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i108) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i27) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i85) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i94) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i87) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i107) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i45) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i107) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i79) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i35) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i91) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i37) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i38) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i91) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i40) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i41) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i107) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i87) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i87) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i45) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i46) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i47) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i108) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i108) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i108) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i51) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i79) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i94) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i54) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i55) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i56) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i57) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i91) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i59) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i60) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i61) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i62) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i73) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i108) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i108) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i108) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i105) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i108) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i108) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i91) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i81) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i98) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i73) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i107) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i107) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i87) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i105) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i78) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i79) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i107) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i81) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i108) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i108) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i94) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i85) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i86) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i87) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i88) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i107) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i108) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i91) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i107) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i107) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i94) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i95) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i107) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i107) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i98) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i99) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i108) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i107) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i108) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i103) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i104) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i105) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i107) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i107) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i111) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i108) MR_AND
		MR_LABEL_AP(ops__op_table_3_0_i109));
MR_def_label(ops__op_table_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,16);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,21);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,22);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,23);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,24);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,25);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,26);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,11);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,27);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,29);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,20);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,30);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,32);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,31);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,33);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,36);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,18);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,17);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,37);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,13);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,38);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,15);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,35);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,39);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,28);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,34);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,14);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ops__op_table_3_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,40);
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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
	MR_init_label2(__Compare___ops__assoc_0_0,2,3)
MR_BEGIN_CODE

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
	MR_init_label6(__Unify___ops__class_0_0,6,8,10,12,25,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ops__class_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ops__class_0_0_i25);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Unify___ops__class_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___ops__class_0_0_i8) MR_AND
		MR_LABEL_AP(__Unify___ops__class_0_0_i10) MR_AND
		MR_LABEL_AP(__Unify___ops__class_0_0_i12));
MR_def_label(__Unify___ops__class_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ops__class_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ops__class_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	MR_r1 = MR_ctfield(0, MR_tempr4, 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ops__class_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ops__class_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ops__class_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ops__class_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ops__class_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 1);
	MR_r1 = MR_ctfield(2, MR_tempr4, 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ops__class_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___ops__class_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	MR_r1 = MR_ctfield(3, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ops__class_0_0,25)
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
	MR_init_label8(__Compare___ops__class_0_0,6,11,12,14,17,25,29,30)
	MR_init_label8(__Compare___ops__class_0_0,36,41,43,44,46,49,55,80)
	MR_init_label4(__Compare___ops__class_0_0,62,97,63,66)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ops__class_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i97);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___ops__class_0_0_i6) MR_AND
		MR_LABEL_AP(__Compare___ops__class_0_0_i25) MR_AND
		MR_LABEL_AP(__Compare___ops__class_0_0_i36) MR_AND
		MR_LABEL_AP(__Compare___ops__class_0_0_i55));
MR_def_label(__Compare___ops__class_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i80);
	}
	MR_tempr2 = MR_r2;
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	MR_r6 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i11);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 1;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(__Compare___ops__class_0_0_i14);
	}
MR_def_label(__Compare___ops__class_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r6)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i12);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(__Compare___ops__class_0_0_i14);
MR_def_label(__Compare___ops__class_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 2;
	MR_sv(2) = MR_r4;
MR_def_label(__Compare___ops__class_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i66);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___ops__class_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r2)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i63);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___ops__class_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ops__class_0_0_i63) MR_AND
		MR_LABEL_AP(__Compare___ops__class_0_0_i29) MR_AND
		MR_LABEL_AP(__Compare___ops__class_0_0_i80) MR_AND
		MR_LABEL_AP(__Compare___ops__class_0_0_i80));
MR_def_label(__Compare___ops__class_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(1, MR_r3, 0);
	MR_r3 = MR_ctfield(1, MR_r2, 0);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___ops__class_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r4)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i63);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___ops__class_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ops__class_0_0_i63) MR_AND
		MR_LABEL_AP(__Compare___ops__class_0_0_i63) MR_AND
		MR_LABEL_AP(__Compare___ops__class_0_0_i41) MR_AND
		MR_LABEL_AP(__Compare___ops__class_0_0_i80));
MR_def_label(__Compare___ops__class_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r4 = MR_ctfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_r5 = MR_ctfield(2, MR_tempr2, 1);
	MR_r6 = MR_ctfield(2, MR_tempr2, 0);
	MR_r3 = MR_ctfield(2, MR_tempr1, 0);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i43);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 1;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(__Compare___ops__class_0_0_i46);
	}
MR_def_label(__Compare___ops__class_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r6)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i44);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(__Compare___ops__class_0_0_i46);
MR_def_label(__Compare___ops__class_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 2;
	MR_sv(2) = MR_r4;
MR_def_label(__Compare___ops__class_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i66);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i49);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___ops__class_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r2)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i63);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___ops__class_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i63);
	}
	MR_r4 = MR_ctfield(3, MR_tempr1, 0);
	MR_r3 = MR_ctfield(3, MR_r2, 0);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i62);
	}
	}
MR_def_label(__Compare___ops__class_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___ops__class_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r4)) {
		MR_GOTO_LAB(__Compare___ops__class_0_0_i63);
	}
MR_def_label(__Compare___ops__class_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___ops__class_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___ops__class_0_0,66)
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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
	MR_init_label3(__Unify___ops__op_info_0_0,4,6,1)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
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
	MR_init_label5(__Compare___ops__op_info_0_0,5,8,17,9,13)
MR_BEGIN_CODE

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
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr5 = MR_tempr1;
	MR_sv(1) = MR_tempr4;
	MR_tempr6 = MR_tempr2;
	MR_sv(2) = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr5, 0);
	MR_r2 = MR_ctfield(0, MR_tempr6, 0);
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
MR_BEGIN_CODE

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
	MR_init_label2(__Compare___ops__priority_0_0,2,3)
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
	MR_init_label3(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0,2,4,1)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0_i4);
	}
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
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
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0_i1);
	}
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
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
	MR_init_label3(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0,2,4,1)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0_i4);
	}
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
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
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0_i1);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0_i1);
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
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
	MR_init_label3(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0,2,4,1)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0_i4);
	}
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_r3 = MR_ctfield(2, MR_tempr1, 0);
	MR_r4 = MR_ctfield(2, MR_tempr1, 1);
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
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_0_i1);
	}
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_r3 = MR_ctfield(2, MR_tempr1, 0);
	MR_r4 = MR_ctfield(2, MR_tempr1, 1);
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
	MR_init_label3(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0,2,4,1)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0_i4);
	}
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_r3 = MR_ctfield(3, MR_tempr1, 0);
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
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,3)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0_i1);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(f_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_0_i1);
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 0);
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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
		mercury_data_ops__type_ctor_info_table_0,
		ops__table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ops__type_ctor_info_priority_0,
		ops__priority_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ops__type_ctor_info_op_info_0,
		ops__op_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ops__type_ctor_info_mercury_op_table_0,
		ops__mercury_op_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ops__type_ctor_info_class_0,
		ops__class_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ops__type_ctor_info_assoc_0,
		ops__assoc_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__, 5) =
			MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_0);
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__, 6) =
			MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_0);
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__, 7) =
			MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_0);
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__, 8) =
			MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_0);
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__, 9) =
			MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_0);
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__, 10) =
			MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_0);
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__, 11) =
			MR_ENTRY_AP(ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_0);
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__, 12) =
			MR_ENTRY_AP(fn__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_0);
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__, 13) =
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
		&mercury_data_ops__type_ctor_info_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ops__type_ctor_info_priority_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ops__type_ctor_info_op_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ops__type_ctor_info_mercury_op_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ops__type_ctor_info_class_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ops__type_ctor_info_assoc_0);
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
