/*
** Automatically generated from `version_hash_table.m'
** by the Mercury compiler,
** version rotd-2011-08-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__version_hash_table__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "version_hash_table.c"
#include "version_hash_table.mh"

#line 28 "version_hash_table.c"
#line 202 "array.int"
#include "array.mh"

#line 32 "version_hash_table.c"
#line 70 "version_array.int"
#include "version_array.mh"

#line 36 "version_hash_table.c"
#line 140 "io.int2"
#include "io.mh"

#line 40 "version_hash_table.c"
#line 150 "io.int2"
#include "string.mh"

#line 44 "version_hash_table.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 48 "version_hash_table.c"
#line 30 "time.int2"
#include "time.mh"

#line 52 "version_hash_table.c"
#line 21 "stm_builtin.int2"
#include "stm_builtin.mh"

#line 56 "version_hash_table.c"
#line 35 "store.int2"
#include "store.mh"

#line 60 "version_hash_table.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 64 "version_hash_table.c"
#line 156 "io.opt"
#include "dir.mh"

#line 68 "version_hash_table.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 72 "version_hash_table.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 76 "version_hash_table.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 80 "version_hash_table.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 84 "version_hash_table.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 88 "version_hash_table.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "version_hash_table.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 96 "version_hash_table.c"
#line 3 "float.opt"
#include "float.mh"

#line 100 "version_hash_table.c"
#line 3 "math.opt"
#include "math.mh"

#line 104 "version_hash_table.c"
#line 4 "int.opt"
#include "int.mh"

#line 108 "version_hash_table.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "version_hash_table.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 116 "version_hash_table.c"
#line 117 "version_hash_table.c"
#ifndef VERSION_HASH_TABLE_DECL_GUARD
#define VERSION_HASH_TABLE_DECL_GUARD

#line 121 "version_hash_table.c"
#line 122 "version_hash_table.c"

#endif
#line 125 "version_hash_table.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_version_hash_table__type_ctor_info_buckets_2,
	mercury_data_version_hash_table__type_ctor_info_hash_pred_1,
	mercury_data_version_hash_table__type_ctor_info_hash_table_alist_2,
	mercury_data_version_hash_table__type_ctor_info_version_hash_table_2;
MR_decl_label3(version_hash_table__list__foldl__ho16_4_0, 10,3,4)
MR_decl_label5(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0, 25,4,8,9,2)
MR_decl_label5(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0, 25,4,8,9,2)
MR_decl_label5(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0, 25,4,8,9,2)
MR_decl_label5(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0, 25,4,8,9,2)
MR_decl_label6(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0, 34,4,8,9,2,1)
MR_decl_label6(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0, 34,4,8,9,2,1)
MR_decl_label6(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0, 34,4,8,9,2,1)
MR_decl_label4(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0, 5,3,7,1)
MR_decl_label4(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0, 5,3,8,1)
MR_decl_label4(version_hash_table__alist_search_3_0, 20,5,3,1)
MR_decl_label1(version_hash_table__find_slot_2_4_0, 2)
MR_decl_label3(version_hash_table__fold_f_4_0, 10,3,4)
MR_decl_label3(version_hash_table__fold_p_4_0, 10,3,4)
MR_decl_label4(version_hash_table__fold_p_4_3, 18,3,4,1)
MR_decl_label10(version_hash_table__generic_hash_2_0, 87,3,2,6,5,10,9,13,12,16)
MR_decl_label7(version_hash_table__generic_hash_2_0, 15,22,25,20,28,29,30)
MR_decl_label7(version_hash_table__reinsert_alist_5_0, 36,3,4,7,12,38,14)
MR_decl_label5(version_hash_table__reinsert_bindings_6_0, 27,3,6,10,11)
MR_decl_label3(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_0, 10,2,3)
MR_decl_label5(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_5_0, 25,4,8,9,2)
MR_decl_label6(fn__version_hash_table__delete_2_0, 2,5,9,12,15,11)
MR_decl_label10(fn__version_hash_table__det_insert_3_0, 2,5,9,12,10,16,18,23,26,27)
MR_decl_label1(fn__version_hash_table__det_insert_3_0, 25)
MR_decl_label8(fn__version_hash_table__det_update_3_0, 2,5,9,12,11,15,17,22)
MR_decl_label2(fn__version_hash_table__elem_2_0, 4,2)
MR_decl_label1(fn__version_hash_table__find_slot_2_0, 2)
MR_decl_label1(fn__version_hash_table__from_assoc_list_2_0, 2)
MR_decl_label3(fn__version_hash_table__from_assoc_list_2_2_0, 10,3,4)
MR_decl_label7(fn__version_hash_table__init_2_4_0, 2,5,54,9,13,11,16)
MR_decl_label2(fn__version_hash_table__lookup_2_0, 4,2)
MR_decl_label3(fn__version_hash_table__search_2_0, 2,5,9)
MR_decl_label10(fn__version_hash_table__set_3_0, 2,5,9,12,10,15,17,22,25,27)
MR_decl_label2(fn__version_hash_table__set_3_0, 28,26)
MR_decl_label2(fn__version_hash_table__to_assoc_list_2_2_0, 6,2)
MR_decl_label6(__Unify___version_hash_table__hash_table_alist_2_0, 36,16,5,7,9,1)
MR_decl_label3(__Unify___version_hash_table__version_hash_table_2_0, 4,9,1)
MR_decl_label8(__Compare___version_hash_table__hash_table_alist_2_0, 50,30,7,5,9,11,15,55)
MR_decl_label10(__Compare___version_hash_table__version_hash_table_2_0, 3,2,6,7,9,14,15,17,21,58)
MR_def_extern_entry(fn__version_hash_table__init_2_4_0)
MR_def_extern_entry(fn__version_hash_table__init_3_0)
MR_def_extern_entry(fn__version_hash_table__new_3_0)
MR_def_extern_entry(fn__version_hash_table__unsafe_init_3_0)
MR_def_extern_entry(fn__version_hash_table__unsafe_new_3_0)
MR_def_extern_entry(fn__version_hash_table__init_default_1_0)
MR_def_extern_entry(fn__version_hash_table__new_default_1_0)
MR_def_extern_entry(fn__version_hash_table__unsafe_init_default_1_0)
MR_def_extern_entry(fn__version_hash_table__unsafe_new_default_1_0)
MR_def_extern_entry(version_hash_table__int_hash_2_0)
MR_def_extern_entry(version_hash_table__string_hash_2_0)
MR_def_extern_entry(version_hash_table__char_hash_2_0)
MR_def_extern_entry(version_hash_table__float_hash_2_0)
MR_decl_static(fn__version_hash_table__munge_2_0)
MR_def_extern_entry(version_hash_table__generic_hash_2_0)
MR_def_extern_entry(fn__version_hash_table__num_buckets_1_0)
MR_def_extern_entry(fn__version_hash_table__num_occupants_1_0)
MR_def_extern_entry(version_hash_table__find_slot_2_4_0)
MR_def_extern_entry(version_hash_table__unsafe_hash_pred_cast_2_0)
MR_def_extern_entry(fn__version_hash_table__find_slot_2_0)
MR_decl_static(version_hash_table__reinsert_alist_5_0)
MR_decl_static(version_hash_table__reinsert_bindings_6_0)
MR_def_extern_entry(fn__version_hash_table__set_3_0)
MR_def_extern_entry(version_hash_table__set_4_0)
MR_def_extern_entry(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_101_108_101_109_32_58_61_3_0)
MR_def_extern_entry(version_hash_table__alist_search_3_0)
MR_def_extern_entry(fn__version_hash_table__det_insert_3_0)
MR_def_extern_entry(version_hash_table__det_insert_4_0)
MR_def_extern_entry(fn__version_hash_table__det_update_3_0)
MR_def_extern_entry(version_hash_table__det_update_4_0)
MR_def_extern_entry(fn__version_hash_table__delete_2_0)
MR_def_extern_entry(version_hash_table__delete_3_0)
MR_def_extern_entry(fn__version_hash_table__search_2_0)
MR_def_extern_entry(fn__version_hash_table__lookup_2_0)
MR_def_extern_entry(fn__version_hash_table__elem_2_0)
MR_def_extern_entry(version_hash_table__search_3_0)
MR_def_extern_entry(fn__version_hash_table__to_assoc_list_1_0)
MR_def_extern_entry(fn__version_hash_table__from_assoc_list_2_2_0)
MR_def_extern_entry(fn__version_hash_table__from_assoc_list_2_0)
MR_def_extern_entry(fn__version_hash_table__fold_3_0)
MR_def_extern_entry(version_hash_table__fold_4_0)
MR_def_extern_entry(version_hash_table__fold_4_1)
MR_def_extern_entry(version_hash_table__fold_4_2)
MR_def_extern_entry(version_hash_table__fold_4_3)
MR_def_extern_entry(version_hash_table__fold_4_4)
MR_def_extern_entry(version_hash_table__fold_4_5)
MR_def_extern_entry(fn__version_hash_table__to_assoc_list_2_2_0)
MR_def_extern_entry(version_hash_table__fold_f_4_0)
MR_def_extern_entry(version_hash_table__fold_f_4_1)
MR_def_extern_entry(version_hash_table__fold_p_4_0)
MR_def_extern_entry(version_hash_table__fold_p_4_1)
MR_def_extern_entry(version_hash_table__fold_p_4_2)
MR_def_extern_entry(version_hash_table__fold_p_4_3)
MR_def_extern_entry(version_hash_table__fold_p_4_4)
MR_def_extern_entry(version_hash_table__fold_p_4_5)
MR_def_extern_entry(__Unify___version_hash_table__buckets_2_0)
MR_def_extern_entry(__Compare___version_hash_table__buckets_2_0)
MR_def_extern_entry(__Unify___version_hash_table__hash_pred_1_0)
MR_def_extern_entry(__Compare___version_hash_table__hash_pred_1_0)
MR_def_extern_entry(__Unify___version_hash_table__hash_table_alist_2_0)
MR_def_extern_entry(__Compare___version_hash_table__hash_table_alist_2_0)
MR_def_extern_entry(__Unify___version_hash_table__version_hash_table_2_0)
MR_def_extern_entry(__Compare___version_hash_table__version_hash_table_2_0)
MR_decl_static(version_hash_table__list__foldl__ho16_4_0)
MR_decl_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0)
MR_decl_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_3_0)
MR_decl_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_0)
MR_decl_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_5_0)
MR_decl_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0)
MR_decl_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0)
MR_decl_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0)
MR_decl_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0)
MR_decl_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0)
MR_decl_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0)
MR_decl_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0)
extern const MR_TypeCtorInfo_Struct mercury_data_version_array__type_ctor_info_version_array_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
	&mercury_data_version_hash_table__type_ctor_info_hash_table_alist_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
	&mercury_data_version_array__type_ctor_info_version_array_1,
{	(MR_PseudoTypeInfo) &mercury_data_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
}};

const MR_TypeCtorInfo_Struct mercury_data_version_hash_table__type_ctor_info_buckets_2 = {
	2,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___version_hash_table__buckets_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___version_hash_table__buckets_2_0)),
	"version_hash_table",
	"buckets",
	{ 0 },
	{ (void *)&mercury_data_version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_VA_PseudoTypeInfo_Struct2 mercury_data___vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_version_hash_table__type_ctor_info_hash_pred_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___version_hash_table__hash_pred_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___version_hash_table__hash_pred_1_0)),
	"version_hash_table",
	"hash_pred",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_version_hash_table__du_functor_desc_hash_table_alist_2_0 = {
	"ht_nil",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_version_hash_table__field_types_hash_table_alist_2_1[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) &mercury_data_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury_data_version_hash_table__du_functor_desc_hash_table_alist_2_1 = {
	"ht_cons",
	3,
	7,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_version_hash_table__field_types_hash_table_alist_2_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_version_hash_table__du_stag_ordered_hash_table_alist_2_0[] = {
	&mercury_data_version_hash_table__du_functor_desc_hash_table_alist_2_0

};

const MR_DuFunctorDescPtr mercury_data_version_hash_table__du_stag_ordered_hash_table_alist_2_1[] = {
	&mercury_data_version_hash_table__du_functor_desc_hash_table_alist_2_1

};

const MR_DuPtagLayout mercury_data_version_hash_table__du_ptag_ordered_hash_table_alist_2[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_version_hash_table__du_stag_ordered_hash_table_alist_2_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_version_hash_table__du_stag_ordered_hash_table_alist_2_1 }

};

const MR_DuFunctorDescPtr mercury_data_version_hash_table__du_name_ordered_hash_table_alist_2[] = {
	&mercury_data_version_hash_table__du_functor_desc_hash_table_alist_2_1,
	&mercury_data_version_hash_table__du_functor_desc_hash_table_alist_2_0
};

const MR_Integer mercury_data_version_hash_table__functor_number_map_hash_table_alist_2[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_version_hash_table__type_ctor_info_hash_table_alist_2 = {
	2,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___version_hash_table__hash_table_alist_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___version_hash_table__hash_table_alist_2_0)),
	"version_hash_table",
	"hash_table_alist",
	{ (void *)mercury_data_version_hash_table__du_name_ordered_hash_table_alist_2 },
	{ (void *)mercury_data_version_hash_table__du_ptag_ordered_hash_table_alist_2 },
	2,
	4,
	mercury_data_version_hash_table__functor_number_map_hash_table_alist_2
};

const MR_PseudoTypeInfo mercury_data_version_hash_table__field_types_version_hash_table_2_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

const MR_ConstString mercury_data_version_hash_table__field_names_version_hash_table_2_0[] = {
	"num_occupants",
	"max_occupants",
	"hash_pred",
	"buckets"
};

static const MR_DuFunctorDesc mercury_data_version_hash_table__du_functor_desc_version_hash_table_2_0 = {
	"ht",
	4,
	12,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_version_hash_table__field_types_version_hash_table_2_0,
	mercury_data_version_hash_table__field_names_version_hash_table_2_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_version_hash_table__du_stag_ordered_version_hash_table_2_0[] = {
	&mercury_data_version_hash_table__du_functor_desc_version_hash_table_2_0

};

const MR_DuPtagLayout mercury_data_version_hash_table__du_ptag_ordered_version_hash_table_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_version_hash_table__du_stag_ordered_version_hash_table_2_0 }

};

const MR_DuFunctorDescPtr mercury_data_version_hash_table__du_name_ordered_version_hash_table_2[] = {
	&mercury_data_version_hash_table__du_functor_desc_version_hash_table_2_0
};

const MR_Integer mercury_data_version_hash_table__functor_number_map_version_hash_table_2[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_version_hash_table__type_ctor_info_version_hash_table_2 = {
	2,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___version_hash_table__version_hash_table_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___version_hash_table__version_hash_table_2_0)),
	"version_hash_table",
	"version_hash_table",
	{ (void *)mercury_data_version_hash_table__du_name_ordered_version_hash_table_2 },
	{ (void *)mercury_data_version_hash_table__du_ptag_ordered_version_hash_table_2 },
	1,
	4,
	mercury_data_version_hash_table__functor_number_map_version_hash_table_2
};



extern const MR_TypeCtorInfo_Struct mercury_data_exception__type_ctor_info_software_error_0;
MR_decl_entry(exception__throw_1_0);
static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
MR_decl_entry(fn__f_105_110_116_95_95_60_60_2_0);
MR_decl_entry(fn__version_array__unsafe_new_2_0);
MR_decl_entry(fn__version_array__init_2_0);

MR_BEGIN_MODULE(version_hash_table_module0)
	MR_init_entry1(fn__version_hash_table__init_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__init_2_4_0);
	MR_init_label7(fn__version_hash_table__init_2_4_0,2,5,54,9,13,11,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__init_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r4,0)) {
		MR_GOTO_LAB(fn__version_hash_table__init_2_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("version_hash_table.new_hash_table: N =< 0", 41);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__version_hash_table__init_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__init_2_4_0
{
#line 162 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 489 "version_hash_table.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r4 < (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(fn__version_hash_table__init_2_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("version_hash_table.new: N >= int.bits_per_int", 45);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
MR_def_label(fn__version_hash_table__init_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r5) > (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__version_hash_table__init_2_4_0_i54);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("version_hash_table.new: MaxOccupancy =< 0.0", 43);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__version_hash_table__init_2_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		fn__version_hash_table__init_2_4_0_i9);
MR_def_label(fn__version_hash_table__init_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	IntVal;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__init_2_4_0
	IntVal = MR_r1;
{
#line 80 "float.opt"

	FloatVal = IntVal;
;}
#line 533 "version_hash_table.c"
	MR_r4 = MR_float_to_word(FloatVal);
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_float_to_word((MR_word_to_float(MR_r4) * MR_word_to_float(MR_sv(2))));
	{
	MR_Float	X;
	MR_Integer	Ceil;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__init_2_4_0
	X = MR_word_to_float(MR_tempr1);
{
#line 83 "float.opt"

	Ceil = (MR_Integer) ceil(X);
;}
#line 550 "version_hash_table.c"
	MR_r4 = Ceil;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__version_hash_table__init_2_4_0_i11);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_sv(4) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__version_array__unsafe_new_2_0,
		fn__version_hash_table__init_2_4_0_i13);
MR_def_label(fn__version_hash_table__init_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(fn__version_hash_table__init_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_sv(4) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__version_array__init_2_0,
		fn__version_hash_table__init_2_4_0_i16);
MR_def_label(fn__version_hash_table__init_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module1)
	MR_init_entry1(fn__version_hash_table__init_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__init_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__init_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = (MR_Integer) 1;
	MR_np_tailcall_ent(fn__version_hash_table__init_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module2)
	MR_init_entry1(fn__version_hash_table__new_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__new_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__new_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = (MR_Integer) 1;
	MR_np_tailcall_ent(fn__version_hash_table__init_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module3)
	MR_init_entry1(fn__version_hash_table__unsafe_init_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__unsafe_init_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_init'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__unsafe_init_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__version_hash_table__init_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module4)
	MR_init_entry1(fn__version_hash_table__unsafe_new_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__unsafe_new_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_new'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__unsafe_new_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__version_hash_table__init_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_0pt90000000000000002 = 0.90000000000000002;

MR_BEGIN_MODULE(version_hash_table_module5)
	MR_init_entry1(fn__version_hash_table__init_default_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__init_default_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_default'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__init_default_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 7;
	MR_r5 = (MR_Word) &mercury_float_const_0pt90000000000000002;
	MR_r6 = (MR_Integer) 1;
	MR_np_tailcall_ent(fn__version_hash_table__init_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module6)
	MR_init_entry1(fn__version_hash_table__new_default_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__new_default_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_default'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__new_default_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 7;
	MR_r5 = (MR_Word) &mercury_float_const_0pt90000000000000002;
	MR_r6 = (MR_Integer) 1;
	MR_np_tailcall_ent(fn__version_hash_table__init_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module7)
	MR_init_entry1(fn__version_hash_table__unsafe_init_default_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__unsafe_init_default_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_init_default'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__unsafe_init_default_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 7;
	MR_r5 = (MR_Word) &mercury_float_const_0pt90000000000000002;
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__version_hash_table__init_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module8)
	MR_init_entry1(fn__version_hash_table__unsafe_new_default_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__unsafe_new_default_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_new_default'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__unsafe_new_default_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 7;
	MR_r5 = (MR_Word) &mercury_float_const_0pt90000000000000002;
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__version_hash_table__init_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module9)
	MR_init_entry1(version_hash_table__int_hash_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__int_hash_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'int_hash'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__int_hash_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	N;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__version_hash_table__int_hash_2_0
	N = MR_r1;
{
#line 537 "version_hash_table.m"

    const int c2 = 0x27d4eb2d; /* a prime or an odd constant */
    MR_Unsigned key;

    key = N;

    if (sizeof(MR_Word) == 4) {
        key = (key ^ 61) ^ (key >> 16);
        key = key + (key << 3);
        key = key ^ (key >> 4);
        key = key * c2;
        key = key ^ (key >> 15);
    } else {
        key = (~key) + (key << 21); /* key = (key << 21) - key - 1; */
        key = key ^ (key >> 24);
        key = (key + (key << 3)) + (key << 8); /* key * 265 */
        key = key ^ (key >> 14);
        key = (key + (key << 2)) + (key << 4); /* key * 21 */
        key = key ^ (key >> 28);
        key = key + (key << 31);
    }

    H = key;
;}
#line 842 "version_hash_table.c"
	MR_r1 = H;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__hash_1_0);

MR_BEGIN_MODULE(version_hash_table_module10)
	MR_init_entry1(version_hash_table__string_hash_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__string_hash_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_hash'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__string_hash_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__string__hash_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module11)
	MR_init_entry1(version_hash_table__char_hash_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__char_hash_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'char_hash'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__char_hash_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__version_hash_table__char_hash_2_0
	Character = MR_r1;
{
#line 62 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 899 "version_hash_table.c"
	MR_r2 = Int;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	N;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__version_hash_table__char_hash_2_0
	N = MR_r2;
{
#line 537 "version_hash_table.m"

    const int c2 = 0x27d4eb2d; /* a prime or an odd constant */
    MR_Unsigned key;

    key = N;

    if (sizeof(MR_Word) == 4) {
        key = (key ^ 61) ^ (key >> 16);
        key = key + (key << 3);
        key = key ^ (key >> 4);
        key = key * c2;
        key = key ^ (key >> 15);
    } else {
        key = (~key) + (key << 21); /* key = (key << 21) - key - 1; */
        key = key ^ (key >> 24);
        key = (key + (key << 3)) + (key << 8); /* key * 265 */
        key = key ^ (key >> 14);
        key = (key + (key << 2)) + (key << 4); /* key * 21 */
        key = key ^ (key >> 28);
        key = key + (key << 31);
    }

    H = key;
;}
#line 934 "version_hash_table.c"
	MR_r1 = H;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module12)
	MR_init_entry1(version_hash_table__float_hash_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__float_hash_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'float_hash'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__float_hash_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	F;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__version_hash_table__float_hash_2_0
	F = MR_word_to_float(MR_r1);
{
#line 111 "float.opt"

	H = MR_hash_float(F);
;}
#line 969 "version_hash_table.c"
	MR_r1 = H;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module13)
	MR_init_entry1(fn__version_hash_table__munge_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__munge_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'munge'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__version_hash_table__munge_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__munge_2_0
{
#line 162 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 1004 "version_hash_table.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (((MR_Integer) MR_r2 << (MR_Integer) MR_r1) ^ ((MR_Integer) MR_r2 >> ((MR_Integer) MR_tempr1 - (MR_Integer) MR_r1)));
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(private_builtin__typed_unify_2_1);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_desc_0;
MR_decl_entry(__Unify___list__list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;
MR_decl_entry(deconstruct__deconstruct_5_1);

MR_BEGIN_MODULE(version_hash_table_module14)
	MR_init_entry1(version_hash_table__generic_hash_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__generic_hash_2_0);
	MR_init_label10(version_hash_table__generic_hash_2_0,87,3,2,6,5,10,9,13,12,16)
	MR_init_label7(version_hash_table__generic_hash_2_0,15,22,25,20,28,29,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generic_hash'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__generic_hash_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(version_hash_table__generic_hash_2_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		version_hash_table__generic_hash_2_0_i3);
MR_def_label(version_hash_table__generic_hash_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__generic_hash_2_0_i2);
	}
	{
	MR_Integer	N;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__version_hash_table__generic_hash_2_0
	N = MR_r2;
{
#line 537 "version_hash_table.m"

    const int c2 = 0x27d4eb2d; /* a prime or an odd constant */
    MR_Unsigned key;

    key = N;

    if (sizeof(MR_Word) == 4) {
        key = (key ^ 61) ^ (key >> 16);
        key = key + (key << 3);
        key = key ^ (key >> 4);
        key = key * c2;
        key = key ^ (key >> 15);
    } else {
        key = (~key) + (key << 21); /* key = (key << 21) - key - 1; */
        key = key ^ (key >> 24);
        key = (key + (key << 3)) + (key << 8); /* key * 265 */
        key = key ^ (key >> 14);
        key = (key + (key << 2)) + (key << 4); /* key * 21 */
        key = key ^ (key >> 28);
        key = key + (key << 31);
    }

    H = key;
;}
#line 1089 "version_hash_table.c"
	MR_r1 = H;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(4);
MR_def_label(version_hash_table__generic_hash_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		version_hash_table__generic_hash_2_0_i6);
MR_def_label(version_hash_table__generic_hash_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__generic_hash_2_0_i5);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__string__hash_1_0);
MR_def_label(version_hash_table__generic_hash_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		version_hash_table__generic_hash_2_0_i10);
MR_def_label(version_hash_table__generic_hash_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__generic_hash_2_0_i9);
	}
	{
	MR_Float	F;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__version_hash_table__generic_hash_2_0
	F = MR_word_to_float(MR_r2);
{
#line 111 "float.opt"

	H = MR_hash_float(F);
;}
#line 1132 "version_hash_table.c"
	MR_r1 = H;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(4);
MR_def_label(version_hash_table__generic_hash_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		version_hash_table__generic_hash_2_0_i13);
MR_def_label(version_hash_table__generic_hash_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__generic_hash_2_0_i12);
	}
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__version_hash_table__generic_hash_2_0
	Character = MR_r2;
{
#line 62 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 1159 "version_hash_table.c"
	MR_r2 = Int;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	N;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__version_hash_table__generic_hash_2_0
	N = MR_r2;
{
#line 537 "version_hash_table.m"

    const int c2 = 0x27d4eb2d; /* a prime or an odd constant */
    MR_Unsigned key;

    key = N;

    if (sizeof(MR_Word) == 4) {
        key = (key ^ 61) ^ (key >> 16);
        key = key + (key << 3);
        key = key ^ (key >> 4);
        key = key * c2;
        key = key ^ (key >> 15);
    } else {
        key = (~key) + (key << 21); /* key = (key << 21) - key - 1; */
        key = key ^ (key >> 24);
        key = (key + (key << 3)) + (key << 8); /* key * 265 */
        key = key ^ (key >> 14);
        key = (key + (key << 2)) + (key << 4); /* key * 21 */
        key = key ^ (key >> 28);
        key = key + (key << 31);
    }

    H = key;
;}
#line 1194 "version_hash_table.c"
	MR_r1 = H;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(4);
MR_def_label(version_hash_table__generic_hash_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		version_hash_table__generic_hash_2_0_i16);
MR_def_label(version_hash_table__generic_hash_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__generic_hash_2_0_i15);
	}
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(version_hash_table__generic_hash_2_0_i87);
MR_def_label(version_hash_table__generic_hash_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__version_hash_table__generic_hash_2_0
	TypeInfo_for_T = MR_sv(2);
{
#line 57 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

};}
#line 1240 "version_hash_table.c"
	MR_r4 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
#define	MR_PROC_LABEL	mercury__version_hash_table__generic_hash_2_0
	TypeDesc = MR_r4;
{
#line 77 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 1266 "version_hash_table.c"
	MR_tempr1 = ArgTypes;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(version_hash_table__generic_hash_2_0_i20);
	}
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		version_hash_table__generic_hash_2_0_i22);
MR_def_label(version_hash_table__generic_hash_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__generic_hash_2_0_i20);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__version_hash_table__generic_hash_2_0
	TypeInfo = MR_sv(3);
{
#line 73 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 1298 "version_hash_table.c"
	MR_tempr1 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(array, array);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		version_hash_table__generic_hash_2_0_i25);
MR_def_label(version_hash_table__generic_hash_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__generic_hash_2_0_i20);
	}
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_3_0);
MR_def_label(version_hash_table__generic_hash_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_1,
		version_hash_table__generic_hash_2_0_i28);
MR_def_label(version_hash_table__generic_hash_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__string__hash_1_0,
		version_hash_table__generic_hash_2_0_i29);
MR_def_label(version_hash_table__generic_hash_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__version_hash_table__munge_2_0,
		version_hash_table__generic_hash_2_0_i30);
MR_def_label(version_hash_table__generic_hash_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(version_hash_table__list__foldl__ho16_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module15)
	MR_init_entry1(fn__version_hash_table__num_buckets_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__num_buckets_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'num_buckets'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__num_buckets_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r3, 3);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__num_buckets_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 165 "version_array.opt"

    N = ML_va_size_dolock(VA);
;}
#line 1387 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r1 = N;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module16)
	MR_init_entry1(fn__version_hash_table__num_occupants_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__num_occupants_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'num_occupants'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__num_occupants_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r3, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(version_hash_table_module17)
	MR_init_entry1(version_hash_table__find_slot_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__find_slot_2_4_0);
	MR_init_label1(version_hash_table__find_slot_2_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_slot_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__find_slot_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_hash_table__find_slot_2_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__version_hash_table__find_slot_2_4_0_i2);
MR_def_label(version_hash_table__find_slot_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 & ((MR_Integer) MR_sv(1) - (MR_Integer) 1));
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module18)
	MR_init_entry1(version_hash_table__unsafe_hash_pred_cast_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__unsafe_hash_pred_cast_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_hash_pred_cast'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__unsafe_hash_pred_cast_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	HashPred0;
	MR_Word	HashPred;
#define	MR_PROC_LABEL	mercury__version_hash_table__unsafe_hash_pred_cast_2_0
	HashPred0 = MR_r2;
{
#line 299 "version_hash_table.m"

    HashPred = HashPred0;
;}
#line 1479 "version_hash_table.c"
	MR_r1 = HashPred;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module19)
	MR_init_entry1(fn__version_hash_table__find_slot_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__find_slot_2_0);
	MR_init_label1(fn__version_hash_table__find_slot_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_slot'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__find_slot_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r3, 2);
	{
	MR_Word	HashPred0;
	MR_Word	HashPred;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__find_slot_2_0
	HashPred0 = MR_tempr1;
{
#line 299 "version_hash_table.m"

    HashPred = HashPred0;
;}
#line 1520 "version_hash_table.c"
	MR_r1 = HashPred;
#undef	MR_PROC_LABEL
	}
	MR_tempr1 = MR_tfield(0, MR_r3, 3);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__find_slot_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr1, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 165 "version_array.opt"

    N = ML_va_size_dolock(VA);
;}
#line 1536 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr2 = N;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr2;
	MR_r2 = MR_r4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__version_hash_table__find_slot_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__version_hash_table__find_slot_2_0_i2);
MR_def_label(fn__version_hash_table__find_slot_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 & ((MR_Integer) MR_sv(1) - (MR_Integer) 1));
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__require__func_error_1_0);

MR_BEGIN_MODULE(version_hash_table_module20)
	MR_init_entry1(version_hash_table__reinsert_alist_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__reinsert_alist_5_0);
	MR_init_label7(version_hash_table__reinsert_alist_5_0,36,3,4,7,12,38,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reinsert_alist'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(version_hash_table__reinsert_alist_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(version_hash_table__reinsert_alist_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(version_hash_table__reinsert_alist_5_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(9);
MR_def_label(version_hash_table__reinsert_alist_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_tempr2 = MR_r3;
	MR_sv(7) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(8) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_hash_table__reinsert_alist_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__version_hash_table__reinsert_alist_5_0_i4);
MR_def_label(version_hash_table__reinsert_alist_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tempr4 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tempr5 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr5;
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = ((MR_Integer) MR_r1 & ((MR_Integer) MR_tempr6 - (MR_Integer) 1));
	MR_r8 = MR_tempr2;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_hash_table__reinsert_alist_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(4), VA);
	I = MR_tempr2;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 286 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 1632 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_hash_table__reinsert_alist_5_0_i7);
	MR_r9 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_r10 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr3, 1) = MR_sv(8);
	MR_tfield(1, MR_tempr3, 2) = MR_r9;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr6;
	MR_r3 = MR_sv(3);
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr5;
	MR_sv(7) = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_sv(8) = MR_tempr1;
	MR_GOTO_LAB(version_hash_table__reinsert_alist_5_0_i12);
	}
MR_def_label(version_hash_table__reinsert_alist_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_hash_table__reinsert_alist_5_0_i12);
MR_def_label(version_hash_table__reinsert_alist_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__version_hash_table__reinsert_alist_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(4), VA0);
	I = MR_sv(7);
	X = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 289 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);
;}
#line 1681 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_hash_table__reinsert_alist_5_0_i14);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r6);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(version_hash_table__reinsert_alist_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(version_hash_table__reinsert_alist_5_0_i36);
MR_def_label(version_hash_table__reinsert_alist_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_sv(6) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	}
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_hash_table__reinsert_alist_5_0_i38);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module21)
	MR_init_entry1(version_hash_table__reinsert_bindings_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__reinsert_bindings_6_0);
	MR_init_label5(version_hash_table__reinsert_bindings_6_0,27,3,6,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reinsert_bindings'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(version_hash_table__reinsert_bindings_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(version_hash_table__reinsert_bindings_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_hash_table__reinsert_bindings_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 165 "version_array.opt"

    N = ML_va_size_dolock(VA);
;}
#line 1743 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r8 = N;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r3 < (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(version_hash_table__reinsert_bindings_6_0_i3);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(9);
MR_def_label(version_hash_table__reinsert_bindings_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_hash_table__reinsert_bindings_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 286 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 1778 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_hash_table__reinsert_bindings_6_0_i6);
	MR_r8 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r3 = MR_r8;
	MR_r6 = MR_r7;
	MR_GOTO_LAB(version_hash_table__reinsert_bindings_6_0_i10);
	}
MR_def_label(version_hash_table__reinsert_bindings_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_hash_table__reinsert_bindings_6_0_i10);
MR_def_label(version_hash_table__reinsert_bindings_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(version_hash_table__reinsert_alist_5_0,
		version_hash_table__reinsert_bindings_6_0_i11);
MR_def_label(version_hash_table__reinsert_bindings_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(version_hash_table__reinsert_bindings_6_0_i27);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module22)
	MR_init_entry1(fn__version_hash_table__set_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__set_3_0);
	MR_init_label10(fn__version_hash_table__set_3_0,2,5,9,12,10,15,17,22,25,27)
	MR_init_label2(fn__version_hash_table__set_3_0,28,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__set_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__version_hash_table__find_slot_2_0,
		fn__version_hash_table__set_3_0_i2);
MR_def_label(fn__version_hash_table__set_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_r5 = MR_tfield(0, MR_sv(5), 3);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__set_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	I = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 286 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 1883 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__set_3_0_i5);
	MR_r2 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_GOTO_LAB(fn__version_hash_table__set_3_0_i9);
	}
MR_def_label(fn__version_hash_table__set_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__set_3_0_i9);
MR_def_label(fn__version_hash_table__set_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0,
		fn__version_hash_table__set_3_0_i12);
MR_def_label(fn__version_hash_table__set_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__version_hash_table__set_3_0_i10);
	}
	MR_r1 = MR_r2;
	MR_sv(4) = (MR_Integer) 0;
	MR_r2 = MR_tfield(0, MR_sv(5), 3);
	MR_GOTO_LAB(fn__version_hash_table__set_3_0_i15);
MR_def_label(fn__version_hash_table__set_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_tfield(1, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_sv(4) = (MR_Integer) 1;
	MR_r2 = MR_tfield(0, MR_sv(5), 3);
	}
MR_def_label(fn__version_hash_table__set_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__set_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA0);
	I = MR_sv(2);
	X = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 289 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);
;}
#line 1958 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__set_3_0_i17);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__version_hash_table__set_3_0_i22);
MR_def_label(fn__version_hash_table__set_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_r1, 1) = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__set_3_0_i22);
MR_def_label(fn__version_hash_table__set_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(fn__version_hash_table__set_3_0_i25);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
	}
MR_def_label(fn__version_hash_table__set_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r2, 0);
	if ((MR_r4 != MR_tfield(0, MR_r2, 1))) {
		MR_GOTO_LAB(fn__version_hash_table__set_3_0_i26);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 3);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__set_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr1, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 165 "version_array.opt"

    N = ML_va_size_dolock(VA);
;}
#line 2012 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr2 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_tfield(0, MR_r2, 2);
	{
	MR_Word	HashPred0;
	MR_Word	HashPred;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__set_3_0
	HashPred0 = MR_tempr3;
{
#line 299 "version_hash_table.m"

    HashPred = HashPred0;
;}
#line 2028 "version_hash_table.c"
	MR_tempr3 = HashPred;
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_tfield(0, MR_r2, 0);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = ((MR_Integer) MR_tempr2 + (MR_Integer) MR_tempr2);
	MR_sv(3) = ((MR_Integer) MR_tfield(0, MR_r2, 1) + (MR_Integer) MR_tfield(0, MR_r2, 1));
	MR_sv(5) = MR_tempr3;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__version_array__init_2_0,
		fn__version_hash_table__set_3_0_i27);
MR_def_label(fn__version_hash_table__set_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(version_hash_table__reinsert_bindings_6_0,
		fn__version_hash_table__set_3_0_i28);
MR_def_label(fn__version_hash_table__set_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(fn__version_hash_table__set_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_r2, 3);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module23)
	MR_init_entry1(version_hash_table__set_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__set_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r5;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(fn__version_hash_table__set_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module24)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_101_108_101_109_32_58_61_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_101_108_101_109_32_58_61_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'elem :='/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_101_108_101_109_32_58_61_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(fn__version_hash_table__set_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(version_hash_table_module25)
	MR_init_entry1(version_hash_table__alist_search_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__alist_search_3_0);
	MR_init_label4(version_hash_table__alist_search_3_0,20,5,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'alist_search'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__alist_search_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(version_hash_table__alist_search_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(version_hash_table__alist_search_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		version_hash_table__alist_search_3_0_i5);
MR_def_label(version_hash_table__alist_search_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__alist_search_3_0_i3);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(version_hash_table__alist_search_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(version_hash_table__alist_search_3_0_i20);
MR_def_label(version_hash_table__alist_search_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module26)
	MR_init_entry1(fn__version_hash_table__det_insert_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__det_insert_3_0);
	MR_init_label10(fn__version_hash_table__det_insert_3_0,2,5,9,12,10,16,18,23,26,27)
	MR_init_label1(fn__version_hash_table__det_insert_3_0,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_insert'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__det_insert_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__version_hash_table__find_slot_2_0,
		fn__version_hash_table__det_insert_3_0_i2);
MR_def_label(fn__version_hash_table__det_insert_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tempr3 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_r5 = MR_tfield(0, MR_sv(5), 3);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__det_insert_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	I = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 286 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 2253 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__det_insert_3_0_i5);
	MR_r3 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_sv(1);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_GOTO_LAB(fn__version_hash_table__det_insert_3_0_i9);
	}
MR_def_label(fn__version_hash_table__det_insert_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__det_insert_3_0_i9);
MR_def_label(fn__version_hash_table__det_insert_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(version_hash_table__alist_search_3_0,
		fn__version_hash_table__det_insert_3_0_i12);
MR_def_label(fn__version_hash_table__det_insert_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__version_hash_table__det_insert_3_0_i10);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("version_hash_table.det_insert: key already present", 50);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__version_hash_table__det_insert_3_0_i16);
MR_def_label(fn__version_hash_table__det_insert_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_sv(5), 3);
	MR_r1 = MR_sv(8);
	}
MR_def_label(fn__version_hash_table__det_insert_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__det_insert_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA0);
	I = MR_sv(3);
	X = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 289 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);
;}
#line 2328 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__det_insert_3_0_i18);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r4);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r4;
	MR_GOTO_LAB(fn__version_hash_table__det_insert_3_0_i23);
MR_def_label(fn__version_hash_table__det_insert_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	}
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__det_insert_3_0_i23);
MR_def_label(fn__version_hash_table__det_insert_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tempr5 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr5, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr5, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr5, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	if ((MR_r5 != MR_tfield(0, MR_tempr1, 1))) {
		MR_GOTO_LAB(fn__version_hash_table__det_insert_3_0_i25);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 3);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__det_insert_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 165 "version_array.opt"

    N = ML_va_size_dolock(VA);
;}
#line 2377 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr3 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr4 = MR_tfield(0, MR_tempr1, 2);
	{
	MR_Word	HashPred0;
	MR_Word	HashPred;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__det_insert_3_0
	HashPred0 = MR_tempr4;
{
#line 299 "version_hash_table.m"

    HashPred = HashPred0;
;}
#line 2393 "version_hash_table.c"
	MR_tempr4 = HashPred;
#undef	MR_PROC_LABEL
	}
	MR_tempr6 = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_tempr6, 0);
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = ((MR_Integer) MR_tempr3 + (MR_Integer) MR_tempr3);
	MR_sv(4) = ((MR_Integer) MR_tfield(0, MR_tempr6, 1) + (MR_Integer) MR_tfield(0, MR_tempr6, 1));
	MR_sv(5) = MR_tempr4;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__version_array__init_2_0,
		fn__version_hash_table__det_insert_3_0_i26);
MR_def_label(fn__version_hash_table__det_insert_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(version_hash_table__reinsert_bindings_6_0,
		fn__version_hash_table__det_insert_3_0_i27);
MR_def_label(fn__version_hash_table__det_insert_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(fn__version_hash_table__det_insert_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module27)
	MR_init_entry1(version_hash_table__det_insert_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__det_insert_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_insert'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__det_insert_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r5;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(fn__version_hash_table__det_insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module28)
	MR_init_entry1(fn__version_hash_table__det_update_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__det_update_3_0);
	MR_init_label8(fn__version_hash_table__det_update_3_0,2,5,9,12,11,15,17,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_update'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__det_update_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__version_hash_table__find_slot_2_0,
		fn__version_hash_table__det_update_3_0_i2);
MR_def_label(fn__version_hash_table__det_update_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tempr2 = MR_tfield(0, MR_sv(1), 3);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__det_update_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr2, VA);
	I = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 286 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 2530 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__det_update_3_0_i5);
	MR_r2 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0,
		fn__version_hash_table__det_update_3_0_i12);
MR_def_label(fn__version_hash_table__det_update_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__det_update_3_0_i9);
MR_def_label(fn__version_hash_table__det_update_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0,
		fn__version_hash_table__det_update_3_0_i12);
MR_def_label(fn__version_hash_table__det_update_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__version_hash_table__det_update_3_0_i11);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(1), 3);
	MR_GOTO_LAB(fn__version_hash_table__det_update_3_0_i15);
MR_def_label(fn__version_hash_table__det_update_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("version_hash_table.det_update: key not found", 44);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__version_hash_table__det_update_3_0_i15);
MR_def_label(fn__version_hash_table__det_update_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__det_update_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA0);
	I = MR_sv(5);
	X = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 289 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);
;}
#line 2590 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__det_update_3_0_i17);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__version_hash_table__det_update_3_0_i22);
MR_def_label(fn__version_hash_table__det_update_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__det_update_3_0_i22);
MR_def_label(fn__version_hash_table__det_update_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module29)
	MR_init_entry1(version_hash_table__det_update_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__det_update_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_update'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__det_update_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r5;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(fn__version_hash_table__det_update_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module30)
	MR_init_entry1(fn__version_hash_table__delete_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__delete_2_0);
	MR_init_label6(fn__version_hash_table__delete_2_0,2,5,9,12,15,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__delete_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__version_hash_table__find_slot_2_0,
		fn__version_hash_table__delete_2_0_i2);
MR_def_label(fn__version_hash_table__delete_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tempr2 = MR_tfield(0, MR_sv(1), 3);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__delete_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr2, VA);
	I = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 286 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 2706 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__delete_2_0_i5);
	MR_r2 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_sv(2);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0,
		fn__version_hash_table__delete_2_0_i12);
MR_def_label(fn__version_hash_table__delete_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__delete_2_0_i9);
MR_def_label(fn__version_hash_table__delete_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0,
		fn__version_hash_table__delete_2_0_i12);
MR_def_label(fn__version_hash_table__delete_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__version_hash_table__delete_2_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 3);
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__delete_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr1, VA0);
	I = MR_sv(4);
	X = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 289 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);
;}
#line 2758 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__delete_2_0_i15);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = ((MR_Integer) MR_tfield(0, MR_tempr2, 0) - (MR_Integer) 1);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_r1, 3) = MR_r2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__version_hash_table__delete_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
MR_def_label(fn__version_hash_table__delete_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module31)
	MR_init_entry1(version_hash_table__delete_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__delete_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__delete_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(fn__version_hash_table__delete_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module32)
	MR_init_entry1(fn__version_hash_table__search_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__search_2_0);
	MR_init_label3(fn__version_hash_table__search_2_0,2,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__search_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__version_hash_table__find_slot_2_0,
		fn__version_hash_table__search_2_0_i2);
MR_def_label(fn__version_hash_table__search_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tempr4 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr4;
	MR_tempr2 = MR_tfield(0, MR_sv(4), 3);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__search_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr2, VA);
	I = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 286 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 2870 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__search_2_0_i5);
	MR_r3 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_sv(1);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(version_hash_table__alist_search_3_0);
	}
MR_def_label(fn__version_hash_table__search_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__search_2_0_i9);
MR_def_label(fn__version_hash_table__search_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(version_hash_table__alist_search_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module33)
	MR_init_entry1(fn__version_hash_table__lookup_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__lookup_2_0);
	MR_init_label2(fn__version_hash_table__lookup_2_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__lookup_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__version_hash_table__search_2_0,
		fn__version_hash_table__lookup_2_0_i4);
MR_def_label(fn__version_hash_table__lookup_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__version_hash_table__lookup_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__version_hash_table__lookup_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_hash_table.lookup: key not found", 40);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module34)
	MR_init_entry1(fn__version_hash_table__elem_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__elem_2_0);
	MR_init_label2(fn__version_hash_table__elem_2_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'elem'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__elem_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__version_hash_table__search_2_0,
		fn__version_hash_table__elem_2_0_i4);
MR_def_label(fn__version_hash_table__elem_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__version_hash_table__elem_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__version_hash_table__elem_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_hash_table.lookup: key not found", 40);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module35)
	MR_init_entry1(version_hash_table__search_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__search_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__search_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__version_hash_table__search_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module36)
	MR_init_entry1(fn__version_hash_table__to_assoc_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__to_assoc_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_assoc_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__to_assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r4 = MR_tfield(0, MR_r3, 3);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__to_assoc_list_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 165 "version_array.opt"

    N = ML_va_size_dolock(VA);
;}
#line 3043 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r7 = N;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module37)
	MR_init_entry1(fn__version_hash_table__from_assoc_list_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__from_assoc_list_2_2_0);
	MR_init_label3(fn__version_hash_table__from_assoc_list_2_2_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_assoc_list_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__from_assoc_list_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__version_hash_table__from_assoc_list_2_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__version_hash_table__from_assoc_list_2_2_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(fn__version_hash_table__from_assoc_list_2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_tempr1 = MR_tempr3;
	MR_r3 = MR_r4;
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__version_hash_table__set_3_0,
		fn__version_hash_table__from_assoc_list_2_2_0_i4);
MR_def_label(fn__version_hash_table__from_assoc_list_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__version_hash_table__from_assoc_list_2_2_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module38)
	MR_init_entry1(fn__version_hash_table__from_assoc_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__from_assoc_list_2_0);
	MR_init_label1(fn__version_hash_table__from_assoc_list_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_assoc_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__from_assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r4 = (MR_Integer) 7;
	MR_r5 = (MR_Word) &mercury_float_const_0pt90000000000000002;
	MR_r6 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__version_hash_table__init_2_4_0,
		fn__version_hash_table__from_assoc_list_2_0_i2);
MR_def_label(fn__version_hash_table__from_assoc_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__version_hash_table__from_assoc_list_2_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module39)
	MR_init_entry1(fn__version_hash_table__fold_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__fold_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__fold_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tempr2 = MR_tfield(0, MR_r5, 3);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__fold_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 165 "version_array.opt"

    N = ML_va_size_dolock(VA);
;}
#line 3193 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r8 = N;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = (MR_Integer) 0;
	MR_r9 = MR_tempr3;
	MR_np_tailcall_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module40)
	MR_init_entry1(version_hash_table__fold_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__fold_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__fold_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tempr2 = MR_tfield(0, MR_r5, 3);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_hash_table__fold_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 165 "version_array.opt"

    N = ML_va_size_dolock(VA);
;}
#line 3243 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r8 = N;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = (MR_Integer) 0;
	MR_r9 = MR_tempr3;
	MR_np_tailcall_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module41)
	MR_init_entry1(version_hash_table__fold_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__fold_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__fold_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tempr2 = MR_tfield(0, MR_r5, 3);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_hash_table__fold_4_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 165 "version_array.opt"

    N = ML_va_size_dolock(VA);
;}
#line 3293 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r8 = N;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = (MR_Integer) 0;
	MR_r9 = MR_tempr3;
	MR_np_tailcall_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module42)
	MR_init_entry1(version_hash_table__fold_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__fold_4_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__fold_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tempr2 = MR_tfield(0, MR_r5, 3);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_hash_table__fold_4_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 165 "version_array.opt"

    N = ML_va_size_dolock(VA);
;}
#line 3343 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r8 = N;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = (MR_Integer) 0;
	MR_r9 = MR_tempr3;
	MR_np_tailcall_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module43)
	MR_init_entry1(version_hash_table__fold_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__fold_4_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__fold_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tempr2 = MR_tfield(0, MR_r5, 3);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_hash_table__fold_4_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 165 "version_array.opt"

    N = ML_va_size_dolock(VA);
;}
#line 3393 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r8 = N;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = (MR_Integer) 0;
	MR_r9 = MR_tempr3;
	MR_np_tailcall_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module44)
	MR_init_entry1(version_hash_table__fold_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__fold_4_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__fold_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tempr2 = MR_tfield(0, MR_r5, 3);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_hash_table__fold_4_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 165 "version_array.opt"

    N = ML_va_size_dolock(VA);
;}
#line 3443 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r8 = N;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = (MR_Integer) 0;
	MR_r9 = MR_tempr3;
	MR_np_tailcall_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module45)
	MR_init_entry1(version_hash_table__fold_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__fold_4_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__fold_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tempr2 = MR_tfield(0, MR_r5, 3);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_hash_table__fold_4_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 165 "version_array.opt"

    N = ML_va_size_dolock(VA);
;}
#line 3493 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r8 = N;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = (MR_Integer) 0;
	MR_r9 = MR_tempr3;
	MR_np_tailcall_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module46)
	MR_init_entry1(fn__version_hash_table__to_assoc_list_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__to_assoc_list_2_2_0);
	MR_init_label2(fn__version_hash_table__to_assoc_list_2_2_0,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_assoc_list_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__to_assoc_list_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__version_hash_table__to_assoc_list_2_2_0_i2);
	}
MR_def_label(fn__version_hash_table__to_assoc_list_2_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r4;
	MR_r3 = MR_tfield(1, MR_r3, 2);
	MR_r4 = MR_tempr2;
	if (MR_LTAGS_TESTR(MR_r3,0,0))
		continue;
	}
	break;
	} /* end while */
MR_def_label(fn__version_hash_table__to_assoc_list_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(version_hash_table_module47)
	MR_init_entry1(version_hash_table__fold_f_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__fold_f_4_0);
	MR_init_label3(version_hash_table__fold_f_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_f'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__fold_f_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(version_hash_table__fold_f_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(version_hash_table__fold_f_4_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(6);
MR_def_label(version_hash_table__fold_f_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_hash_table__fold_f_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__version_hash_table__fold_f_4_0_i4);
MR_def_label(version_hash_table__fold_f_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(version_hash_table__fold_f_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module48)
	MR_init_entry1(version_hash_table__fold_f_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__fold_f_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_f'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__fold_f_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(version_hash_table__fold_f_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module49)
	MR_init_entry1(version_hash_table__fold_p_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__fold_p_4_0);
	MR_init_label3(version_hash_table__fold_p_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_p'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__fold_p_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(version_hash_table__fold_p_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(version_hash_table__fold_p_4_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(6);
MR_def_label(version_hash_table__fold_p_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_hash_table__fold_p_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__version_hash_table__fold_p_4_0_i4);
MR_def_label(version_hash_table__fold_p_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(version_hash_table__fold_p_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module50)
	MR_init_entry1(version_hash_table__fold_p_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__fold_p_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_p'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__fold_p_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(version_hash_table__fold_p_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module51)
	MR_init_entry1(version_hash_table__fold_p_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__fold_p_4_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_p'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__fold_p_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(version_hash_table__fold_p_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module52)
	MR_init_entry1(version_hash_table__fold_p_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__fold_p_4_3);
	MR_init_label4(version_hash_table__fold_p_4_3,18,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_p'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__fold_p_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(version_hash_table__fold_p_4_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(version_hash_table__fold_p_4_3_i3);
	}
	MR_r2 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(version_hash_table__fold_p_4_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_hash_table__fold_p_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__version_hash_table__fold_p_4_3_i4);
MR_def_label(version_hash_table__fold_p_4_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__fold_p_4_3_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(version_hash_table__fold_p_4_3_i18);
	}
MR_def_label(version_hash_table__fold_p_4_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module53)
	MR_init_entry1(version_hash_table__fold_p_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__fold_p_4_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_p'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__fold_p_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(version_hash_table__fold_p_4_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module54)
	MR_init_entry1(version_hash_table__fold_p_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__fold_p_4_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_p'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__fold_p_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(version_hash_table__fold_p_4_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___version_array__version_array_1_0);

MR_BEGIN_MODULE(version_hash_table_module55)
	MR_init_entry1(__Unify___version_hash_table__buckets_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___version_hash_table__buckets_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___version_hash_table__buckets_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(__Unify___version_array__version_array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___version_array__version_array_1_0);

MR_BEGIN_MODULE(version_hash_table_module56)
	MR_init_entry1(__Compare___version_hash_table__buckets_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___version_hash_table__buckets_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___version_hash_table__buckets_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(__Compare___version_array__version_array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(version_hash_table_module57)
	MR_init_entry1(__Unify___version_hash_table__hash_pred_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___version_hash_table__hash_pred_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___version_hash_table__hash_pred_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(version_hash_table_module58)
	MR_init_entry1(__Compare___version_hash_table__hash_pred_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___version_hash_table__hash_pred_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___version_hash_table__hash_pred_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module59)
	MR_init_entry1(__Unify___version_hash_table__hash_table_alist_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___version_hash_table__hash_table_alist_2_0);
	MR_init_label6(__Unify___version_hash_table__hash_table_alist_2_0,36,16,5,7,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___version_hash_table__hash_table_alist_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(__Unify___version_hash_table__hash_table_alist_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___version_hash_table__hash_table_alist_2_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___version_hash_table__hash_table_alist_2_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___version_hash_table__hash_table_alist_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___version_hash_table__hash_table_alist_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___version_hash_table__hash_table_alist_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___version_hash_table__hash_table_alist_2_0_i7);
MR_def_label(__Unify___version_hash_table__hash_table_alist_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___version_hash_table__hash_table_alist_2_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___version_hash_table__hash_table_alist_2_0_i9);
MR_def_label(__Unify___version_hash_table__hash_table_alist_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___version_hash_table__hash_table_alist_2_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(__Unify___version_hash_table__hash_table_alist_2_0_i36);
MR_def_label(__Unify___version_hash_table__hash_table_alist_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(version_hash_table_module60)
	MR_init_entry1(__Compare___version_hash_table__hash_table_alist_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___version_hash_table__hash_table_alist_2_0);
	MR_init_label8(__Compare___version_hash_table__hash_table_alist_2_0,50,30,7,5,9,11,15,55)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___version_hash_table__hash_table_alist_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(__Compare___version_hash_table__hash_table_alist_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___version_hash_table__hash_table_alist_2_0_i30);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___version_hash_table__hash_table_alist_2_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___version_hash_table__hash_table_alist_2_0_i7);
	}
MR_def_label(__Compare___version_hash_table__hash_table_alist_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___version_hash_table__hash_table_alist_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___version_hash_table__hash_table_alist_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___version_hash_table__hash_table_alist_2_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___version_hash_table__hash_table_alist_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___version_hash_table__hash_table_alist_2_0_i11);
MR_def_label(__Compare___version_hash_table__hash_table_alist_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___version_hash_table__hash_table_alist_2_0_i55);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___version_hash_table__hash_table_alist_2_0_i15);
MR_def_label(__Compare___version_hash_table__hash_table_alist_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___version_hash_table__hash_table_alist_2_0_i55);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(__Compare___version_hash_table__hash_table_alist_2_0_i50);
MR_def_label(__Compare___version_hash_table__hash_table_alist_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module61)
	MR_init_entry1(__Unify___version_hash_table__version_hash_table_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___version_hash_table__version_hash_table_2_0);
	MR_init_label3(__Unify___version_hash_table__version_hash_table_2_0,4,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___version_hash_table__version_hash_table_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___version_hash_table__version_hash_table_2_0_i9);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___version_hash_table__version_hash_table_2_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___version_hash_table__version_hash_table_2_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 3);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 3);
	MR_r1 = MR_tfield(0, MR_tempr3, 2);
	MR_r2 = MR_tfield(0, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___version_hash_table__version_hash_table_2_0_i4);
MR_def_label(__Unify___version_hash_table__version_hash_table_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___version_hash_table__version_hash_table_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___version_array__version_array_1_0);
MR_def_label(__Unify___version_hash_table__version_hash_table_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___version_hash_table__version_hash_table_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module62)
	MR_init_entry1(__Compare___version_hash_table__version_hash_table_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___version_hash_table__version_hash_table_2_0);
	MR_init_label10(__Compare___version_hash_table__version_hash_table_2_0,3,2,6,7,9,14,15,17,21,58)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___version_hash_table__version_hash_table_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i2);
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i9);
	}
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i9);
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i58);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i17);
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(4))) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i17);
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i58);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_pred_3_0,
		__Compare___version_hash_table__version_hash_table_2_0_i21);
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i58);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_tfield(0, MR_r1, 2) = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___version_array__version_array_1_0);
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module63)
	MR_init_entry1(version_hash_table__list__foldl__ho16_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__list__foldl__ho16_4_0);
	MR_init_label3(version_hash_table__list__foldl__ho16_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl__ho16'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(version_hash_table__list__foldl__ho16_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(version_hash_table__list__foldl__ho16_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(version_hash_table__list__foldl__ho16_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(version_hash_table__list__foldl__ho16_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(version_hash_table__generic_hash_2_0,
		version_hash_table__list__foldl__ho16_4_0_i4);
MR_def_label(version_hash_table__list__foldl__ho16_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__version_hash_table__list__foldl__ho16_4_0
{
#line 162 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 4405 "version_hash_table.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr3 = MR_sv(1);
	MR_r2 = (((MR_Integer) MR_tempr3 << (MR_Integer) MR_tempr2) ^ ((MR_Integer) MR_tempr3 >> ((MR_Integer) MR_tempr1 - (MR_Integer) MR_tempr2)));
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(version_hash_table__list__foldl__ho16_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module64)
	MR_init_entry1(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0);
	MR_init_label4(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0,5,3,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__alist_replace__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0_i1);
	}
	MR_sv(3) = MR_tfield(1, MR_r2, 2);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0_i5);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0_i3);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_sv(5);
	MR_tfield(1, MR_r2, 2) = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	}
	MR_np_localcall_lab(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0,1)
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


MR_BEGIN_MODULE(version_hash_table_module65)
	MR_init_entry1(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0);
	MR_init_label4(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0,5,3,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__alist_remove__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0_i1);
	}
	MR_sv(3) = MR_tfield(1, MR_r2, 2);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0_i5);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0_i3);
	}
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	}
	MR_np_localcall_lab(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0_i7);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0,1)
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


MR_BEGIN_MODULE(version_hash_table_module66)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module67)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__foldl__ho17__[2, 3]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 196 "array.opt"

    /* Array not used */
    Min = 0;
;}
#line 4638 "version_hash_table.c"
	MR_r4 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 204 "array.opt"

    Max = Array->size - 1;
;}
#line 4652 "version_hash_table.c"
	MR_r5 = Max;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module68)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_0);
	MR_init_label3(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__do_foldl_func__ho18__[2, 3]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_0_i2);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(6);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
	Index = MR_r4;
{
#line 233 "array.opt"

    Item = Array->elements[Index];
;}
#line 4703 "version_hash_table.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(version_hash_table__generic_hash_2_0,
		fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_0_i3);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_0
{
#line 162 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 4728 "version_hash_table.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_tempr3 = MR_sv(2);
	MR_r3 = (((MR_Integer) MR_tempr3 << (MR_Integer) MR_tempr2) ^ ((MR_Integer) MR_tempr3 >> ((MR_Integer) MR_tempr1 - (MR_Integer) MR_tempr2)));
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module69)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_5_0);
	MR_init_label5(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_5_0,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__do_foldl_func__ho19__[1, 2, 3, 4, 5, 9, 10]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_5_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 286 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 4786 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_5_0_i4);
	MR_r8 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r4;
	MR_r4 = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r3;
	MR_r3 = MR_r8;
	MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_5_0_i8);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_5_0_i8);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__version_hash_table__to_assoc_list_2_2_0,
		fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_5_0_i9);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r7 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_5_0_i25);
	}
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module70)
	MR_init_entry1(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	MR_init_label5(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_foldl_pred__ho20__[1, 2, 8, 9]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r6, VA);
	I = MR_r7;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 286 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 4878 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i4);
	MR_r10 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_r6 = MR_r9;
	MR_sv(5) = MR_r5;
	MR_r5 = MR_r10;
	MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r5;
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_np_call_localret_ent(version_hash_table__fold_f_4_0,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i9);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(1);
	MR_r7 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i25);
	}
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r9;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module71)
	MR_init_entry1(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	MR_init_label5(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_foldl_pred__ho21__[1, 2, 8, 9]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r6, VA);
	I = MR_r7;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 286 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 4974 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i4);
	MR_r10 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_r6 = MR_r9;
	MR_sv(5) = MR_r5;
	MR_r5 = MR_r10;
	MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r5;
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_np_call_localret_ent(version_hash_table__fold_p_4_0,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i9);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(1);
	MR_r7 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i25);
	}
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r9;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module72)
	MR_init_entry1(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	MR_init_label5(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_foldl_pred__ho22__[1, 2, 8, 9]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r6, VA);
	I = MR_r7;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 286 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 5070 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i4);
	MR_r10 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_r6 = MR_r9;
	MR_sv(5) = MR_r5;
	MR_r5 = MR_r10;
	MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r5;
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_np_call_localret_ent(version_hash_table__fold_p_4_1,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i9);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(1);
	MR_r7 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i25);
	}
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r9;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module73)
	MR_init_entry1(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	MR_init_label5(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_foldl_pred__ho23__[1, 2, 8, 9]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r6, VA);
	I = MR_r7;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 286 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 5166 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i4);
	MR_r10 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_r6 = MR_r9;
	MR_sv(5) = MR_r5;
	MR_r5 = MR_r10;
	MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r5;
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_np_call_localret_ent(version_hash_table__fold_p_4_2,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i9);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(1);
	MR_r7 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i25);
	}
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r9;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module74)
	MR_init_entry1(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	MR_init_label6(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,34,4,8,9,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_foldl_pred__ho24__[1, 2, 8, 9]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r6, VA);
	I = MR_r7;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 286 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 5262 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i4);
	MR_r10 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_r6 = MR_r9;
	MR_sv(5) = MR_r5;
	MR_r5 = MR_r10;
	MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r5;
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_np_call_localret_ent(version_hash_table__fold_p_4_3,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i9);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i1);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(1);
	MR_r7 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i34);
	}
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r9;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module75)
	MR_init_entry1(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	MR_init_label6(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,34,4,8,9,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_foldl_pred__ho25__[1, 2, 8, 9]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r6, VA);
	I = MR_r7;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 286 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 5366 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i4);
	MR_r10 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_r6 = MR_r9;
	MR_sv(5) = MR_r5;
	MR_r5 = MR_r10;
	MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r5;
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_np_call_localret_ent(version_hash_table__fold_p_4_4,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i9);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i1);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(1);
	MR_r7 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i34);
	}
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r9;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module76)
	MR_init_entry1(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0);
	MR_init_label6(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,34,4,8,9,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_foldl_pred__ho26__[1, 2, 8, 9]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r6, VA);
	I = MR_r7;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 286 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 5470 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i4);
	MR_r10 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_r6 = MR_r9;
	MR_sv(5) = MR_r5;
	MR_r5 = MR_r10;
	MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r5;
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_np_call_localret_ent(version_hash_table__fold_p_4_5,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i9);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i1);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(1);
	MR_r7 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0_i34);
	}
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r9;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__version_hash_table_maybe_bunch_0(void)
{
	version_hash_table_module0();
	version_hash_table_module1();
	version_hash_table_module2();
	version_hash_table_module3();
	version_hash_table_module4();
	version_hash_table_module5();
	version_hash_table_module6();
	version_hash_table_module7();
	version_hash_table_module8();
	version_hash_table_module9();
	version_hash_table_module10();
	version_hash_table_module11();
	version_hash_table_module12();
	version_hash_table_module13();
	version_hash_table_module14();
	version_hash_table_module15();
	version_hash_table_module16();
	version_hash_table_module17();
	version_hash_table_module18();
	version_hash_table_module19();
	version_hash_table_module20();
	version_hash_table_module21();
	version_hash_table_module22();
	version_hash_table_module23();
	version_hash_table_module24();
	version_hash_table_module25();
	version_hash_table_module26();
	version_hash_table_module27();
	version_hash_table_module28();
	version_hash_table_module29();
	version_hash_table_module30();
	version_hash_table_module31();
	version_hash_table_module32();
	version_hash_table_module33();
	version_hash_table_module34();
	version_hash_table_module35();
	version_hash_table_module36();
	version_hash_table_module37();
	version_hash_table_module38();
	version_hash_table_module39();
}

static void mercury__version_hash_table_maybe_bunch_1(void)
{
	version_hash_table_module40();
	version_hash_table_module41();
	version_hash_table_module42();
	version_hash_table_module43();
	version_hash_table_module44();
	version_hash_table_module45();
	version_hash_table_module46();
	version_hash_table_module47();
	version_hash_table_module48();
	version_hash_table_module49();
	version_hash_table_module50();
	version_hash_table_module51();
	version_hash_table_module52();
	version_hash_table_module53();
	version_hash_table_module54();
	version_hash_table_module55();
	version_hash_table_module56();
	version_hash_table_module57();
	version_hash_table_module58();
	version_hash_table_module59();
	version_hash_table_module60();
	version_hash_table_module61();
	version_hash_table_module62();
	version_hash_table_module63();
	version_hash_table_module64();
	version_hash_table_module65();
	version_hash_table_module66();
	version_hash_table_module67();
	version_hash_table_module68();
	version_hash_table_module69();
	version_hash_table_module70();
	version_hash_table_module71();
	version_hash_table_module72();
	version_hash_table_module73();
	version_hash_table_module74();
	version_hash_table_module75();
	version_hash_table_module76();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__version_hash_table__init(void);
void mercury__version_hash_table__init_type_tables(void);
void mercury__version_hash_table__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__version_hash_table__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__version_hash_table__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__version_hash_table__init_threadscope_string_table(void);
#endif

void mercury__version_hash_table__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__version_hash_table_maybe_bunch_0();
	mercury__version_hash_table_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_version_hash_table__type_ctor_info_buckets_2,
		version_hash_table__buckets_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_version_hash_table__type_ctor_info_hash_pred_1,
		version_hash_table__hash_pred_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_version_hash_table__type_ctor_info_hash_table_alist_2,
		version_hash_table__hash_table_alist_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_version_hash_table__type_ctor_info_version_hash_table_2,
		version_hash_table__version_hash_table_2_0);
	mercury__version_hash_table__init_debugger();
}

void mercury__version_hash_table__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_version_hash_table__type_ctor_info_buckets_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_version_hash_table__type_ctor_info_hash_pred_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_version_hash_table__type_ctor_info_hash_table_alist_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_version_hash_table__type_ctor_info_version_hash_table_2);
	}
}


void mercury__version_hash_table__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__version_hash_table__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__version_hash_table);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__version_hash_table__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__version_hash_table__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
