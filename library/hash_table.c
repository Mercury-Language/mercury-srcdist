/*
** Automatically generated from `hash_table.m'
** by the Mercury compiler,
** version rotd-2012-07-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hash_table__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "hash_table.c"
#include "hash_table.mh"

#line 28 "hash_table.c"
#line 250 "array.int"
#include "array.mh"

#line 32 "hash_table.c"
#line 140 "io.int2"
#include "io.mh"

#line 36 "hash_table.c"
#line 150 "io.int2"
#include "time.mh"

#line 40 "hash_table.c"
#line 151 "io.int2"
#include "string.mh"

#line 44 "hash_table.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 48 "hash_table.c"
#line 21 "stm_builtin.int2"
#include "stm_builtin.mh"

#line 52 "hash_table.c"
#line 35 "store.int2"
#include "store.mh"

#line 56 "hash_table.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 60 "hash_table.c"
#line 39 "pretty_printer.opt"
#include "version_array.mh"

#line 64 "hash_table.c"
#line 157 "io.opt"
#include "dir.mh"

#line 68 "hash_table.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 72 "hash_table.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 76 "hash_table.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 80 "hash_table.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 84 "hash_table.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 88 "hash_table.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "hash_table.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 96 "hash_table.c"
#line 3 "float.opt"
#include "float.mh"

#line 100 "hash_table.c"
#line 3 "math.opt"
#include "math.mh"

#line 104 "hash_table.c"
#line 4 "int.opt"
#include "int.mh"

#line 108 "hash_table.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "hash_table.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 116 "hash_table.c"
#line 117 "hash_table.c"
#ifndef HASH_TABLE_DECL_GUARD
#define HASH_TABLE_DECL_GUARD

#line 121 "hash_table.c"
#line 122 "hash_table.c"

#endif
#line 125 "hash_table.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1[5];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hash_table__type_ctor_info_buckets_2,
	mercury_data_hash_table__type_ctor_info_hash_pred_1,
	mercury_data_hash_table__type_ctor_info_hash_table_2,
	mercury_data_hash_table__type_ctor_info_hash_table_alist_2;
MR_decl_label3(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_0, 10,2,3)
MR_decl_label3(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0, 10,2,3)
MR_decl_label3(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0, 10,2,3)
MR_decl_label3(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0, 10,2,3)
MR_decl_label3(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0, 10,2,3)
MR_decl_label3(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0, 10,2,3)
MR_decl_label4(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0, 18,2,3,1)
MR_decl_label4(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0, 18,2,3,1)
MR_decl_label4(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0, 18,2,3,1)
MR_decl_label6(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0, 6,4,8,3,13,1)
MR_decl_label6(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0, 6,4,9,3,14,1)
MR_decl_label10(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0, 41,3,5,7,9,6,4,13,15,14)
MR_decl_label3(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_0, 11,3,4)
MR_decl_label6(hash_table__alist_search_3_0, 32,6,4,3,12,1)
MR_decl_label1(hash_table__find_slot_2_4_0, 2)
MR_decl_label4(hash_table__fold_f_4_0, 17,3,5,4)
MR_decl_label4(hash_table__fold_p_4_0, 17,3,5,4)
MR_decl_label5(hash_table__fold_p_4_3, 26,3,5,4,1)
MR_decl_label3(hash_table__from_assoc_list_2_3_0, 10,3,4)
MR_decl_label10(hash_table__generic_hash_2_0, 58,3,2,6,5,10,9,13,12,16)
MR_decl_label5(hash_table__generic_hash_2_0, 15,21,20,24,25)
MR_decl_label2(hash_table__to_assoc_list_2_3_0, 3,4)
MR_decl_label3(hash_table__list__foldl__ho17_4_0, 10,3,4)
MR_decl_label3(fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_0, 10,2,3)
MR_decl_label3(fn__hash_table__delete_2_0, 2,5,4)
MR_decl_label9(fn__hash_table__det_insert_3_0, 2,4,9,7,6,16,14,3,21)
MR_decl_label4(fn__hash_table__det_update_3_0, 2,5,3,8)
MR_decl_label2(fn__hash_table__elem_2_0, 4,2)
MR_decl_label2(fn__hash_table__expand_4_0, 3,4)
MR_decl_label1(fn__hash_table__find_slot_2_0, 2)
MR_decl_label1(fn__hash_table__from_assoc_list_2_0, 2)
MR_decl_label5(fn__hash_table__init_3_0, 2,5,42,9,11)
MR_decl_label2(fn__hash_table__lookup_2_0, 4,2)
MR_decl_label1(fn__hash_table__search_2_0, 2)
MR_decl_label10(fn__hash_table__set_3_0, 2,4,9,7,6,15,13,3,21,23)
MR_decl_label3(__Unify___hash_table__hash_table_2_0, 4,9,1)
MR_decl_label8(__Unify___hash_table__hash_table_alist_2_0, 55,5,8,10,27,6,15,1)
MR_decl_label10(__Compare___hash_table__hash_table_2_0, 3,2,6,7,9,14,15,17,21,58)
MR_decl_label10(__Compare___hash_table__hash_table_alist_2_0, 84,48,7,5,11,14,18,9,43,25)
MR_decl_label4(__Compare___hash_table__hash_table_alist_2_0, 44,26,28,92)
MR_def_extern_entry(fn__hash_table__init_3_0)
MR_def_extern_entry(fn__hash_table__new_3_0)
MR_def_extern_entry(fn__hash_table__init_default_1_0)
MR_def_extern_entry(fn__hash_table__new_default_1_0)
MR_def_extern_entry(fn__hash_table__hash_pred_1_0)
MR_def_extern_entry(hash_table__int_hash_2_0)
MR_def_extern_entry(hash_table__string_hash_2_0)
MR_def_extern_entry(hash_table__char_hash_2_0)
MR_def_extern_entry(hash_table__float_hash_2_0)
MR_def_extern_entry(hash_table__generic_hash_2_0)
MR_def_extern_entry(fn__hash_table__num_buckets_1_0)
MR_def_extern_entry(fn__hash_table__num_occupants_1_0)
MR_def_extern_entry(hash_table__find_slot_2_4_0)
MR_def_extern_entry(fn__hash_table__find_slot_2_0)
MR_decl_static(fn__hash_table__expand_4_0)
MR_def_extern_entry(fn__hash_table__set_3_0)
MR_def_extern_entry(hash_table__set_4_0)
MR_def_extern_entry(fn__f_104_97_115_104_95_116_97_98_108_101_95_95_101_108_101_109_32_58_61_3_0)
MR_def_extern_entry(hash_table__alist_search_3_0)
MR_def_extern_entry(fn__hash_table__det_insert_3_0)
MR_def_extern_entry(hash_table__det_insert_4_0)
MR_def_extern_entry(fn__hash_table__det_update_3_0)
MR_def_extern_entry(hash_table__det_update_4_0)
MR_def_extern_entry(fn__hash_table__delete_2_0)
MR_def_extern_entry(hash_table__delete_3_0)
MR_def_extern_entry(fn__hash_table__search_2_0)
MR_def_extern_entry(fn__hash_table__lookup_2_0)
MR_def_extern_entry(fn__hash_table__elem_2_0)
MR_def_extern_entry(hash_table__search_3_0)
MR_def_extern_entry(fn__hash_table__to_assoc_list_1_0)
MR_def_extern_entry(hash_table__from_assoc_list_2_3_0)
MR_def_extern_entry(fn__hash_table__from_assoc_list_2_0)
MR_def_extern_entry(fn__hash_table__fold_3_0)
MR_def_extern_entry(fn__hash_table__fold_3_1)
MR_def_extern_entry(hash_table__fold_4_0)
MR_def_extern_entry(hash_table__fold_4_1)
MR_def_extern_entry(hash_table__fold_4_2)
MR_def_extern_entry(hash_table__fold_4_3)
MR_def_extern_entry(hash_table__fold_4_4)
MR_def_extern_entry(hash_table__fold_4_5)
MR_def_extern_entry(hash_table__to_assoc_list_2_3_0)
MR_def_extern_entry(hash_table__fold_f_4_0)
MR_def_extern_entry(hash_table__fold_f_4_1)
MR_def_extern_entry(hash_table__fold_p_4_0)
MR_def_extern_entry(hash_table__fold_p_4_1)
MR_def_extern_entry(hash_table__fold_p_4_2)
MR_def_extern_entry(hash_table__fold_p_4_3)
MR_def_extern_entry(hash_table__fold_p_4_4)
MR_def_extern_entry(hash_table__fold_p_4_5)
MR_def_extern_entry(__Unify___hash_table__buckets_2_0)
MR_def_extern_entry(__Compare___hash_table__buckets_2_0)
MR_def_extern_entry(__Unify___hash_table__hash_pred_1_0)
MR_def_extern_entry(__Compare___hash_table__hash_pred_1_0)
MR_def_extern_entry(__Unify___hash_table__hash_table_2_0)
MR_def_extern_entry(__Compare___hash_table__hash_table_2_0)
MR_def_extern_entry(__Unify___hash_table__hash_table_alist_2_0)
MR_def_extern_entry(__Compare___hash_table__hash_table_alist_2_0)
MR_decl_static(hash_table__list__foldl__ho17_4_0)
MR_decl_static(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0)
MR_decl_static(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_0)
MR_decl_static(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0)
MR_decl_static(fn__f_104_97_115_104_95_116_97_98_108_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_3_0)
MR_decl_static(fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_0)
MR_decl_static(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_0)
MR_decl_static(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0)
MR_decl_static(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0)
MR_decl_static(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0)
MR_decl_static(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0)
MR_decl_static(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0)
MR_decl_static(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0)
MR_decl_static(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0)
MR_decl_static(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0)

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__,
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__[];
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__,
MR_TAG_COMMON(0,0,0),
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__,
MR_TAG_COMMON(0,1,0),
MR_CTOR0_ADDR(io, output_stream),
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__,
MR_TAG_COMMON(0,1,0),
MR_CTOR0_ADDR(io, output_stream),
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
	&mercury_data_hash_table__type_ctor_info_hash_table_alist_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_array__pti_array_1__pseudo_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_PseudoTypeInfo) &mercury_data_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
}};

const MR_TypeCtorInfo_Struct mercury_data_hash_table__type_ctor_info_buckets_2 = {
	2,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hash_table__buckets_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hash_table__buckets_2_0)),
	"hash_table",
	"buckets",
	{ 0 },
	{ (void *)&mercury_data_array__pti_array_1__pseudo_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 },
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

const MR_TypeCtorInfo_Struct mercury_data_hash_table__type_ctor_info_hash_pred_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hash_table__hash_pred_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hash_table__hash_pred_1_0)),
	"hash_table",
	"hash_pred",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_hash_table__field_types_hash_table_2_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_array__pti_array_1__pseudo_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

const MR_ConstString mercury_data_hash_table__field_names_hash_table_2_0[] = {
	"num_occupants",
	"max_occupants",
	"hash_pred",
	"buckets"
};

static const MR_DuFunctorDesc mercury_data_hash_table__du_functor_desc_hash_table_2_0 = {
	"ht",
	4,
	12,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hash_table__field_types_hash_table_2_0,
	mercury_data_hash_table__field_names_hash_table_2_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hash_table__du_stag_ordered_hash_table_2_0[] = {
	&mercury_data_hash_table__du_functor_desc_hash_table_2_0

};

const MR_DuPtagLayout mercury_data_hash_table__du_ptag_ordered_hash_table_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hash_table__du_stag_ordered_hash_table_2_0 }

};

const MR_DuFunctorDescPtr mercury_data_hash_table__du_name_ordered_hash_table_2[] = {
	&mercury_data_hash_table__du_functor_desc_hash_table_2_0
};

const MR_Integer mercury_data_hash_table__functor_number_map_hash_table_2[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hash_table__type_ctor_info_hash_table_2 = {
	2,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hash_table__hash_table_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hash_table__hash_table_2_0)),
	"hash_table",
	"hash_table",
	{ (void *)mercury_data_hash_table__du_name_ordered_hash_table_2 },
	{ (void *)mercury_data_hash_table__du_ptag_ordered_hash_table_2 },
	1,
	4,
	mercury_data_hash_table__functor_number_map_hash_table_2
};

static const MR_DuFunctorDesc mercury_data_hash_table__du_functor_desc_hash_table_alist_2_0 = {
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

const MR_PseudoTypeInfo mercury_data_hash_table__field_types_hash_table_alist_2_1[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
};

static const MR_DuFunctorDesc mercury_data_hash_table__du_functor_desc_hash_table_alist_2_1 = {
	"ht_single",
	2,
	3,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_hash_table__field_types_hash_table_alist_2_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_hash_table__field_types_hash_table_alist_2_2[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) &mercury_data_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury_data_hash_table__du_functor_desc_hash_table_alist_2_2 = {
	"ht_cons",
	3,
	7,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_hash_table__field_types_hash_table_alist_2_2,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hash_table__du_stag_ordered_hash_table_alist_2_0[] = {
	&mercury_data_hash_table__du_functor_desc_hash_table_alist_2_0

};

const MR_DuFunctorDescPtr mercury_data_hash_table__du_stag_ordered_hash_table_alist_2_1[] = {
	&mercury_data_hash_table__du_functor_desc_hash_table_alist_2_1

};

const MR_DuFunctorDescPtr mercury_data_hash_table__du_stag_ordered_hash_table_alist_2_2[] = {
	&mercury_data_hash_table__du_functor_desc_hash_table_alist_2_2

};

const MR_DuPtagLayout mercury_data_hash_table__du_ptag_ordered_hash_table_alist_2[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_hash_table__du_stag_ordered_hash_table_alist_2_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hash_table__du_stag_ordered_hash_table_alist_2_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hash_table__du_stag_ordered_hash_table_alist_2_2 }

};

const MR_DuFunctorDescPtr mercury_data_hash_table__du_name_ordered_hash_table_alist_2[] = {
	&mercury_data_hash_table__du_functor_desc_hash_table_alist_2_2,
	&mercury_data_hash_table__du_functor_desc_hash_table_alist_2_0,
	&mercury_data_hash_table__du_functor_desc_hash_table_alist_2_1
};

const MR_Integer mercury_data_hash_table__functor_number_map_hash_table_alist_2[] = {
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hash_table__type_ctor_info_hash_table_alist_2 = {
	2,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hash_table__hash_table_alist_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hash_table__hash_table_alist_2_0)),
	"hash_table",
	"hash_table_alist",
	{ (void *)mercury_data_hash_table__du_name_ordered_hash_table_alist_2 },
	{ (void *)mercury_data_hash_table__du_ptag_ordered_hash_table_alist_2 },
	3,
	4,
	mercury_data_hash_table__functor_number_map_hash_table_alist_2
};



extern const MR_TypeCtorInfo_Struct mercury_data_exception__type_ctor_info_software_error_0;
MR_decl_entry(exception__throw_1_0);
static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
MR_decl_entry(fn__f_105_110_116_95_95_60_60_2_0);
MR_decl_entry(array__init_3_0);

MR_BEGIN_MODULE(hash_table_module0)
	MR_init_entry1(fn__hash_table__init_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hash_table__init_3_0);
	MR_init_label5(fn__hash_table__init_3_0,2,5,42,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hash_table__init_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r4,0)) {
		MR_GOTO_LAB(fn__hash_table__init_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("hash_table.init: N =< 0", 23);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__hash_table__init_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__hash_table__init_3_0
{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 603 "hash_table.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r4 < (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(fn__hash_table__init_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("hash_table.init: N >= int.bits_per_int", 38);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
MR_def_label(fn__hash_table__init_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_f(1) > (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__hash_table__init_3_0_i42);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("hash_table.init: MaxOccupancy =< 0.0", 36);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__hash_table__init_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	* (MR_Float *) &MR_sv(3) = MR_f(1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		fn__hash_table__init_3_0_i9);
MR_def_label(fn__hash_table__init_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_Float MR_tempf1, MR_tempf2;
	{
	MR_Integer	IntVal;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__fn__hash_table__init_3_0
	IntVal = MR_r1;
{
#line 81 "float.opt"

	FloatVal = IntVal;
;}
#line 649 "hash_table.c"
	MR_tempf1 = FloatVal;
#undef	MR_PROC_LABEL
	}
	MR_tempf2 = (MR_tempf1 * MR_float_from_dword_ptr(&MR_sv(3)));
	{
	MR_Float	X;
	MR_Integer	Ceil;
#define	MR_PROC_LABEL	mercury__fn__hash_table__init_3_0
	X = MR_tempf2;
{
#line 84 "float.opt"

	Ceil = (MR_Integer) ceil(X);
;}
#line 664 "hash_table.c"
	MR_tempr3 = Ceil;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_CTOR_ADDR(hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_tempr4, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr4, 2) = MR_sv(6);
	MR_sv(4) = MR_tempr3;
	MR_tempr5 = MR_r1;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr5;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(array__init_3_0,
		fn__hash_table__init_3_0_i11);
MR_def_label(fn__hash_table__init_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module1)
	MR_init_entry1(fn__hash_table__new_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hash_table__new_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hash_table__new_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__hash_table__init_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_0pt90000000000000002 = 0.90000000000000002;

MR_BEGIN_MODULE(hash_table_module2)
	MR_init_entry1(fn__hash_table__init_default_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hash_table__init_default_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_default'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hash_table__init_default_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 7;
	MR_f(1) = (MR_Float) 0.90000000000000002;
	MR_np_tailcall_ent(fn__hash_table__init_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module3)
	MR_init_entry1(fn__hash_table__new_default_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hash_table__new_default_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_default'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hash_table__new_default_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 7;
	MR_f(1) = (MR_Float) 0.90000000000000002;
	MR_np_tailcall_ent(fn__hash_table__init_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module4)
	MR_init_entry1(fn__hash_table__hash_pred_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hash_table__hash_pred_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'hash_pred'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hash_table__hash_pred_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r3, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module5)
	MR_init_entry1(hash_table__int_hash_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__int_hash_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'int_hash'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__int_hash_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	N;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__hash_table__int_hash_2_0
	N = MR_r1;
{
#line 625 "hash_table.m"

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
#line 830 "hash_table.c"
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

MR_BEGIN_MODULE(hash_table_module6)
	MR_init_entry1(hash_table__string_hash_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__string_hash_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_hash'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__string_hash_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__string__hash_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module7)
	MR_init_entry1(hash_table__char_hash_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__char_hash_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'char_hash'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__char_hash_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__hash_table__char_hash_2_0
	Character = MR_r1;
{
#line 63 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 887 "hash_table.c"
	MR_r2 = Int;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	N;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__hash_table__char_hash_2_0
	N = MR_r2;
{
#line 625 "hash_table.m"

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
#line 922 "hash_table.c"
	MR_r1 = H;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module8)
	MR_init_entry1(hash_table__float_hash_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__float_hash_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'float_hash'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__float_hash_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	F;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__hash_table__float_hash_2_0
	F = MR_f(1);
{
#line 112 "float.opt"

	H = MR_hash_float(F);
;}
#line 957 "hash_table.c"
	MR_r1 = H;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(private_builtin__typed_unify_2_1);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
MR_decl_entry(array__dynamic_cast_to_array_2_0);
MR_decl_entry(deconstruct__deconstruct_5_1);

MR_BEGIN_MODULE(hash_table_module9)
	MR_init_entry1(hash_table__generic_hash_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__generic_hash_2_0);
	MR_init_label10(hash_table__generic_hash_2_0,58,3,2,6,5,10,9,13,12,16)
	MR_init_label5(hash_table__generic_hash_2_0,15,21,20,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generic_hash'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__generic_hash_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hash_table__generic_hash_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		hash_table__generic_hash_2_0_i3);
MR_def_label(hash_table__generic_hash_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hash_table__generic_hash_2_0_i2);
	}
	{
	MR_Integer	N;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__hash_table__generic_hash_2_0
	N = MR_r2;
{
#line 625 "hash_table.m"

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
#line 1036 "hash_table.c"
	MR_r1 = H;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
MR_def_label(hash_table__generic_hash_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		hash_table__generic_hash_2_0_i6);
MR_def_label(hash_table__generic_hash_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hash_table__generic_hash_2_0_i5);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__string__hash_1_0);
MR_def_label(hash_table__generic_hash_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		hash_table__generic_hash_2_0_i10);
MR_def_label(hash_table__generic_hash_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hash_table__generic_hash_2_0_i9);
	}
	{
	MR_Float	F;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__hash_table__generic_hash_2_0
	F = MR_word_to_float(MR_r2);
{
#line 112 "float.opt"

	H = MR_hash_float(F);
;}
#line 1079 "hash_table.c"
	MR_r1 = H;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
MR_def_label(hash_table__generic_hash_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		hash_table__generic_hash_2_0_i13);
MR_def_label(hash_table__generic_hash_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hash_table__generic_hash_2_0_i12);
	}
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__hash_table__generic_hash_2_0
	Character = MR_r2;
{
#line 63 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 1106 "hash_table.c"
	MR_r2 = Int;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	N;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__hash_table__generic_hash_2_0
	N = MR_r2;
{
#line 625 "hash_table.m"

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
#line 1141 "hash_table.c"
	MR_r1 = H;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
MR_def_label(hash_table__generic_hash_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		hash_table__generic_hash_2_0_i16);
MR_def_label(hash_table__generic_hash_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hash_table__generic_hash_2_0_i15);
	}
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hash_table__generic_hash_2_0_i58);
MR_def_label(hash_table__generic_hash_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(array__dynamic_cast_to_array_2_0,
		hash_table__generic_hash_2_0_i21);
MR_def_label(hash_table__generic_hash_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hash_table__generic_hash_2_0_i20);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_3_0);
MR_def_label(hash_table__generic_hash_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_1,
		hash_table__generic_hash_2_0_i24);
MR_def_label(hash_table__generic_hash_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__string__hash_1_0,
		hash_table__generic_hash_2_0_i25);
MR_def_label(hash_table__generic_hash_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__hash_table__generic_hash_2_0
{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 1204 "hash_table.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr3 = MR_sv(1);
	MR_r2 = (((MR_Integer) MR_tempr2 << (MR_Integer) MR_tempr3) ^ ((MR_Integer) MR_tempr2 >> ((MR_Integer) MR_tempr1 - (MR_Integer) MR_tempr3)));
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hash_table__list__foldl__ho17_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module10)
	MR_init_entry1(fn__hash_table__num_buckets_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hash_table__num_buckets_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'num_buckets'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hash_table__num_buckets_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r3, 3);
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__hash_table__num_buckets_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 254 "array.opt"

    Max = Array->size;
;}
#line 1247 "hash_table.c"
	MR_r1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module11)
	MR_init_entry1(fn__hash_table__num_occupants_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hash_table__num_occupants_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'num_occupants'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hash_table__num_occupants_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r3, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(hash_table_module12)
	MR_init_entry1(hash_table__find_slot_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__find_slot_2_4_0);
	MR_init_label1(hash_table__find_slot_2_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_slot_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__find_slot_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hash_table__find_slot_2_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__hash_table__find_slot_2_4_0_i2);
MR_def_label(hash_table__find_slot_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 & ((MR_Integer) MR_sv(1) - (MR_Integer) 1));
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module13)
	MR_init_entry1(fn__hash_table__find_slot_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hash_table__find_slot_2_0);
	MR_init_label1(fn__hash_table__find_slot_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_slot'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hash_table__find_slot_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 3);
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__hash_table__find_slot_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 254 "array.opt"

    Max = Array->size;
;}
#line 1345 "hash_table.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_r2 = MR_r4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__hash_table__find_slot_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__hash_table__find_slot_2_0_i2);
MR_def_label(fn__hash_table__find_slot_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 & ((MR_Integer) MR_sv(1) - (MR_Integer) 1));
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module14)
	MR_init_entry1(fn__hash_table__expand_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hash_table__expand_4_0);
	MR_init_label2(fn__hash_table__expand_4_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hash_table__expand_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__hash_table__expand_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 254 "array.opt"

    Max = Array->size;
;}
#line 1399 "hash_table.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = ((MR_Integer) MR_tempr2 + (MR_Integer) MR_tempr2);
	MR_tempr3 = MR_r4;
	MR_sv(5) = ((MR_Integer) MR_tempr3 + (MR_Integer) MR_tempr3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(array__init_3_0,
		fn__hash_table__expand_4_0_i3);
MR_def_label(fn__hash_table__expand_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_0,
		fn__hash_table__expand_4_0_i4);
MR_def_label(fn__hash_table__expand_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(hash_table_module15)
	MR_init_entry1(fn__hash_table__set_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hash_table__set_3_0);
	MR_init_label10(fn__hash_table__set_3_0,2,4,9,7,6,15,13,3,21,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hash_table__set_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 3);
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__hash_table__set_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 254 "array.opt"

    Max = Array->size;
;}
#line 1475 "hash_table.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r5;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_r2 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__hash_table__set_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__hash_table__set_3_0_i2);
MR_def_label(fn__hash_table__set_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_sv(3);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 3);
	MR_r5 = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_r1 & ((MR_Integer) MR_sv(11) - (MR_Integer) 1));
	MR_r6 = MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__fn__hash_table__set_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
	Index = MR_tempr2;
{
#line 276 "array.opt"

    Item = Array->elements[Index];
;}
#line 1513 "hash_table.c"
	MR_r2 = Item;
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__hash_table__set_3_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_sv(2);
	MR_tempr4 = MR_tempr5;
	MR_r3 = MR_tempr4;
	MR_sv(3) = MR_tempr2;
	MR_sv(11) = MR_tfield(0, MR_tempr4, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__hash_table__set_3_0_i3);
	}
MR_def_label(fn__hash_table__set_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__hash_table__set_3_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_r6;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0,
		fn__hash_table__set_3_0_i9);
MR_def_label(fn__hash_table__set_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hash_table__set_3_0_i7);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__hash_table__set_3_0_i3);
MR_def_label(fn__hash_table__set_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_r2 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__hash_table__set_3_0_i3);
	}
MR_def_label(fn__hash_table__set_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_r6;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		fn__hash_table__set_3_0_i15);
MR_def_label(fn__hash_table__set_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hash_table__set_3_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__hash_table__set_3_0_i3);
	}
MR_def_label(fn__hash_table__set_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr3, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr3, 2) = MR_r2;
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Integer) 1;
	}
MR_def_label(fn__hash_table__set_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__hash_table__set_3_0
	Index = MR_sv(3);
	Item = MR_r1;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(6), Array0);
{
#line 281 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 1643 "hash_table.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r3);
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__hash_table__set_3_0_i21);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_sv(11);
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_tfield(0, MR_r1, 2) = MR_sv(5);
	MR_tfield(0, MR_r1, 3) = MR_r3;
	MR_decr_sp_and_return(12);
MR_def_label(fn__hash_table__set_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_sv(11) + (MR_Integer) 1);
	MR_r7 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(fn__hash_table__set_3_0_i23);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(fn__hash_table__expand_4_0);
	}
MR_def_label(fn__hash_table__set_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_r7;
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_tfield(0, MR_r1, 2) = MR_sv(5);
	MR_tfield(0, MR_r1, 3) = MR_r3;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module16)
	MR_init_entry1(hash_table__set_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__set_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r5;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(fn__hash_table__set_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module17)
	MR_init_entry1(fn__f_104_97_115_104_95_116_97_98_108_101_95_95_101_108_101_109_32_58_61_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_104_97_115_104_95_116_97_98_108_101_95_95_101_108_101_109_32_58_61_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'elem :='/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_104_97_115_104_95_116_97_98_108_101_95_95_101_108_101_109_32_58_61_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(fn__hash_table__set_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module18)
	MR_init_entry1(hash_table__alist_search_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__alist_search_3_0);
	MR_init_label6(hash_table__alist_search_3_0,32,6,4,3,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'alist_search'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__alist_search_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(hash_table__alist_search_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(hash_table__alist_search_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(2, MR_tempr1, 2);
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		hash_table__alist_search_3_0_i6);
MR_def_label(hash_table__alist_search_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hash_table__alist_search_3_0_i4);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(hash_table__alist_search_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(hash_table__alist_search_3_0_i32);
MR_def_label(hash_table__alist_search_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(hash_table__alist_search_3_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r3, 1);
	MR_r2 = MR_r4;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(builtin__unify_2_0,
		hash_table__alist_search_3_0_i12);
MR_def_label(hash_table__alist_search_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hash_table__alist_search_3_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(hash_table__alist_search_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module19)
	MR_init_entry1(fn__hash_table__det_insert_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hash_table__det_insert_3_0);
	MR_init_label9(fn__hash_table__det_insert_3_0,2,4,9,7,6,16,14,3,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_insert'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hash_table__det_insert_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 3);
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__hash_table__det_insert_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 254 "array.opt"

    Max = Array->size;
;}
#line 1857 "hash_table.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r5;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_r2 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__hash_table__det_insert_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__hash_table__det_insert_3_0_i2);
MR_def_label(fn__hash_table__det_insert_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_sv(3);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 3);
	MR_r5 = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_r1 & ((MR_Integer) MR_sv(10) - (MR_Integer) 1));
	MR_r6 = MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__fn__hash_table__det_insert_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
	Index = MR_tempr2;
{
#line 276 "array.opt"

    Item = Array->elements[Index];
;}
#line 1895 "hash_table.c"
	MR_r3 = Item;
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__hash_table__det_insert_3_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_sv(2);
	MR_tempr4 = MR_tempr5;
	MR_r8 = MR_tempr4;
	MR_sv(3) = MR_tempr2;
	MR_sv(10) = MR_tfield(0, MR_tempr4, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 1);
	MR_sv(6) = MR_tempr1;
	MR_r5 = MR_tfield(0, MR_tempr4, 2);
	MR_r3 = MR_tempr3;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(fn__hash_table__det_insert_3_0_i3);
	}
MR_def_label(fn__hash_table__det_insert_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(fn__hash_table__det_insert_3_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_r6;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(hash_table__alist_search_3_0,
		fn__hash_table__det_insert_3_0_i9);
MR_def_label(fn__hash_table__det_insert_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hash_table__det_insert_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("hash_table.det_insert: key already present", 42);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__hash_table__det_insert_3_0_i3);
MR_def_label(fn__hash_table__det_insert_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_r3 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_r7 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_r3;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(fn__hash_table__det_insert_3_0_i3);
	}
MR_def_label(fn__hash_table__det_insert_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_r6;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(hash_table__alist_search_3_0,
		fn__hash_table__det_insert_3_0_i16);
MR_def_label(fn__hash_table__det_insert_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hash_table__det_insert_3_0_i14);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("hash_table.det_insert: key already present", 42);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__hash_table__det_insert_3_0_i3);
MR_def_label(fn__hash_table__det_insert_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_r3 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_r3;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	}
MR_def_label(fn__hash_table__det_insert_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__hash_table__det_insert_3_0
	Index = MR_sv(3);
	Item = MR_r3;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(6), Array0);
{
#line 281 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 2026 "hash_table.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r6);
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) MR_sv(10) + (MR_Integer) 1);
	if (((MR_Integer) MR_r3 <= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__hash_table__det_insert_3_0_i21);
	}
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__hash_table__expand_4_0);
MR_def_label(fn__hash_table__det_insert_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_r3;
	MR_tfield(0, MR_r1, 1) = MR_r4;
	MR_tfield(0, MR_r1, 2) = MR_r5;
	MR_tfield(0, MR_r1, 3) = MR_r6;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module20)
	MR_init_entry1(hash_table__det_insert_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__det_insert_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_insert'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__det_insert_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r5;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(fn__hash_table__det_insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module21)
	MR_init_entry1(fn__hash_table__det_update_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hash_table__det_update_3_0);
	MR_init_label4(fn__hash_table__det_update_3_0,2,5,3,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_update'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hash_table__det_update_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 3);
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__hash_table__det_update_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 254 "array.opt"

    Max = Array->size;
;}
#line 2111 "hash_table.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r4;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_r2 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__hash_table__det_update_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__hash_table__det_update_3_0_i2);
MR_def_label(fn__hash_table__det_update_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 3);
	MR_tempr2 = ((MR_Integer) MR_r1 & ((MR_Integer) MR_sv(5) - (MR_Integer) 1));
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__fn__hash_table__det_update_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
	Index = MR_tempr2;
{
#line 276 "array.opt"

    Item = Array->elements[Index];
;}
#line 2145 "hash_table.c"
	MR_r2 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	}
	MR_np_call_localret_ent(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0,
		fn__hash_table__det_update_3_0_i5);
MR_def_label(fn__hash_table__det_update_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hash_table__det_update_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__hash_table__det_update_3_0_i8);
MR_def_label(fn__hash_table__det_update_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("hash_table.det_update: key not found", 36);
	}
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__hash_table__det_update_3_0_i8);
MR_def_label(fn__hash_table__det_update_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__hash_table__det_update_3_0
	Index = MR_sv(1);
	Item = MR_r1;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(2), Array0);
{
#line 281 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 2194 "hash_table.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r2);
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_r2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module22)
	MR_init_entry1(hash_table__det_update_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__det_update_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_update'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__det_update_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r5;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(fn__hash_table__det_update_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module23)
	MR_init_entry1(fn__hash_table__delete_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hash_table__delete_2_0);
	MR_init_label3(fn__hash_table__delete_2_0,2,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hash_table__delete_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 3);
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__hash_table__delete_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 254 "array.opt"

    Max = Array->size;
;}
#line 2274 "hash_table.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_r2 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__hash_table__delete_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__hash_table__delete_2_0_i2);
MR_def_label(fn__hash_table__delete_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 3);
	MR_tempr2 = ((MR_Integer) MR_r1 & ((MR_Integer) MR_sv(4) - (MR_Integer) 1));
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__fn__hash_table__delete_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
	Index = MR_tempr2;
{
#line 276 "array.opt"

    Item = Array->elements[Index];
;}
#line 2307 "hash_table.c"
	MR_r2 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0,
		fn__hash_table__delete_2_0_i5);
MR_def_label(fn__hash_table__delete_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hash_table__delete_2_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 3);
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__hash_table__delete_2_0
	Index = MR_sv(2);
	Item = MR_r2;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array0);
{
#line 281 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 2342 "hash_table.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r2);
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = ((MR_Integer) MR_tfield(0, MR_tempr2, 0) - (MR_Integer) 1);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_r1, 3) = MR_r2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__hash_table__delete_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module24)
	MR_init_entry1(hash_table__delete_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__delete_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__delete_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(fn__hash_table__delete_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module25)
	MR_init_entry1(fn__hash_table__search_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hash_table__search_2_0);
	MR_init_label1(fn__hash_table__search_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hash_table__search_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 3);
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__hash_table__search_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 254 "array.opt"

    Max = Array->size;
;}
#line 2421 "hash_table.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_r2 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__hash_table__search_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__hash_table__search_2_0_i2);
MR_def_label(fn__hash_table__search_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 3);
	MR_tempr2 = ((MR_Integer) MR_r1 & ((MR_Integer) MR_sv(5) - (MR_Integer) 1));
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__fn__hash_table__search_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
	Index = MR_tempr2;
{
#line 276 "array.opt"

    Item = Array->elements[Index];
;}
#line 2455 "hash_table.c"
	MR_r3 = Item;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hash_table__alist_search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__exception__throw_1_0);

MR_BEGIN_MODULE(hash_table_module26)
	MR_init_entry1(fn__hash_table__lookup_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hash_table__lookup_2_0);
	MR_init_label2(fn__hash_table__lookup_2_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hash_table__lookup_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__hash_table__search_2_0,
		fn__hash_table__lookup_2_0_i4);
MR_def_label(fn__hash_table__lookup_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hash_table__lookup_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__hash_table__lookup_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r3 = (MR_Word) MR_string_const("hash_table.lookup: key not found", 32);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module27)
	MR_init_entry1(fn__hash_table__elem_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hash_table__elem_2_0);
	MR_init_label2(fn__hash_table__elem_2_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'elem'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hash_table__elem_2_0);
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
	MR_np_call_localret_ent(fn__hash_table__search_2_0,
		fn__hash_table__elem_2_0_i4);
MR_def_label(fn__hash_table__elem_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hash_table__elem_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__hash_table__elem_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r3 = (MR_Word) MR_string_const("hash_table.lookup: key not found", 32);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module28)
	MR_init_entry1(hash_table__search_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__search_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__search_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__hash_table__search_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module29)
	MR_init_entry1(fn__hash_table__to_assoc_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hash_table__to_assoc_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_assoc_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hash_table__to_assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r3, 3);
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__hash_table__to_assoc_list_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;
;}
#line 2610 "hash_table.c"
	MR_r4 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__hash_table__to_assoc_list_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 247 "array.opt"

    Max = Array->size - 1;
;}
#line 2624 "hash_table.c"
	MR_r5 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module30)
	MR_init_entry1(hash_table__from_assoc_list_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__from_assoc_list_2_3_0);
	MR_init_label3(hash_table__from_assoc_list_2_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_assoc_list_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__from_assoc_list_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hash_table__from_assoc_list_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hash_table__from_assoc_list_2_3_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(hash_table__from_assoc_list_2_3_0,3)
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
	MR_np_call_localret_ent(fn__hash_table__set_3_0,
		hash_table__from_assoc_list_2_3_0_i4);
MR_def_label(hash_table__from_assoc_list_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hash_table__from_assoc_list_2_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module31)
	MR_init_entry1(fn__hash_table__from_assoc_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hash_table__from_assoc_list_2_0);
	MR_init_label1(fn__hash_table__from_assoc_list_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_assoc_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hash_table__from_assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r4 = (MR_Integer) 7;
	MR_f(1) = (MR_Float) 0.90000000000000002;
	MR_np_call_localret_ent(fn__hash_table__init_3_0,
		fn__hash_table__from_assoc_list_2_0_i2);
MR_def_label(fn__hash_table__from_assoc_list_2_0,2)
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
	MR_np_tailcall_ent(hash_table__from_assoc_list_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module32)
	MR_init_entry1(fn__hash_table__fold_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hash_table__fold_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hash_table__fold_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r5, 3);
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__hash_table__fold_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;
;}
#line 2767 "hash_table.c"
	MR_tempr2 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__hash_table__fold_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 247 "array.opt"

    Max = Array->size - 1;
;}
#line 2781 "hash_table.c"
	MR_r7 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_np_tailcall_ent(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module33)
	MR_init_entry1(fn__hash_table__fold_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hash_table__fold_3_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hash_table__fold_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r5, 3);
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__hash_table__fold_3_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;
;}
#line 2825 "hash_table.c"
	MR_tempr2 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__hash_table__fold_3_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 247 "array.opt"

    Max = Array->size - 1;
;}
#line 2839 "hash_table.c"
	MR_r7 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_np_tailcall_ent(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module34)
	MR_init_entry1(hash_table__fold_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__fold_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__fold_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r5, 3);
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__hash_table__fold_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;
;}
#line 2883 "hash_table.c"
	MR_tempr2 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__hash_table__fold_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 247 "array.opt"

    Max = Array->size - 1;
;}
#line 2897 "hash_table.c"
	MR_r7 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_np_tailcall_ent(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module35)
	MR_init_entry1(hash_table__fold_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__fold_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__fold_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r5, 3);
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__hash_table__fold_4_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;
;}
#line 2941 "hash_table.c"
	MR_tempr2 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__hash_table__fold_4_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 247 "array.opt"

    Max = Array->size - 1;
;}
#line 2955 "hash_table.c"
	MR_r7 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_np_tailcall_ent(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module36)
	MR_init_entry1(hash_table__fold_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__fold_4_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__fold_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r5, 3);
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__hash_table__fold_4_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;
;}
#line 2999 "hash_table.c"
	MR_tempr2 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__hash_table__fold_4_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 247 "array.opt"

    Max = Array->size - 1;
;}
#line 3013 "hash_table.c"
	MR_r7 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_np_tailcall_ent(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module37)
	MR_init_entry1(hash_table__fold_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__fold_4_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__fold_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r5, 3);
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__hash_table__fold_4_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;
;}
#line 3057 "hash_table.c"
	MR_tempr2 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__hash_table__fold_4_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 247 "array.opt"

    Max = Array->size - 1;
;}
#line 3071 "hash_table.c"
	MR_r7 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_np_tailcall_ent(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module38)
	MR_init_entry1(hash_table__fold_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__fold_4_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__fold_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r5, 3);
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__hash_table__fold_4_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;
;}
#line 3115 "hash_table.c"
	MR_tempr2 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__hash_table__fold_4_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 247 "array.opt"

    Max = Array->size - 1;
;}
#line 3129 "hash_table.c"
	MR_r7 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_np_tailcall_ent(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module39)
	MR_init_entry1(hash_table__fold_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__fold_4_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__fold_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r5, 3);
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__hash_table__fold_4_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;
;}
#line 3173 "hash_table.c"
	MR_tempr2 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__hash_table__fold_4_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 247 "array.opt"

    Max = Array->size - 1;
;}
#line 3187 "hash_table.c"
	MR_r7 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_np_tailcall_ent(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module40)
	MR_init_entry1(hash_table__to_assoc_list_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__to_assoc_list_2_3_0);
	MR_init_label2(hash_table__to_assoc_list_2_3_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_assoc_list_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__to_assoc_list_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hash_table__to_assoc_list_2_3_0_i3);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(hash_table__to_assoc_list_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(hash_table__to_assoc_list_2_3_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(2, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(2, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r4;
	MR_r3 = MR_tfield(2, MR_tempr3, 2);
	MR_r4 = MR_tempr2;
	MR_np_localtailcall(hash_table__to_assoc_list_2_3_0);
	}
MR_def_label(hash_table__to_assoc_list_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_r4;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(hash_table_module41)
	MR_init_entry1(hash_table__fold_f_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__fold_f_4_0);
	MR_init_label4(hash_table__fold_f_4_0,17,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_f'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__fold_f_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(hash_table__fold_f_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(hash_table__fold_f_4_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(6);
MR_def_label(hash_table__fold_f_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(hash_table__fold_f_4_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 1);
	MR_r4 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hash_table__fold_f_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__hash_table__fold_f_4_0_i5);
MR_def_label(hash_table__fold_f_4_0,5)
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
	MR_GOTO_LAB(hash_table__fold_f_4_0_i17);
	}
MR_def_label(hash_table__fold_f_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_r6;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hash_table__fold_f_4_0));
	MR_np_tailcall_ent(do_call_closure_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module42)
	MR_init_entry1(hash_table__fold_f_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__fold_f_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_f'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__fold_f_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hash_table__fold_f_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module43)
	MR_init_entry1(hash_table__fold_p_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__fold_p_4_0);
	MR_init_label4(hash_table__fold_p_4_0,17,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_p'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__fold_p_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(hash_table__fold_p_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(hash_table__fold_p_4_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(6);
MR_def_label(hash_table__fold_p_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(hash_table__fold_p_4_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 1);
	MR_r4 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hash_table__fold_p_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__hash_table__fold_p_4_0_i5);
MR_def_label(hash_table__fold_p_4_0,5)
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
	MR_GOTO_LAB(hash_table__fold_p_4_0_i17);
	}
MR_def_label(hash_table__fold_p_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_r6;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hash_table__fold_p_4_0));
	MR_np_tailcall_ent(do_call_closure_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module44)
	MR_init_entry1(hash_table__fold_p_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__fold_p_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_p'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__fold_p_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hash_table__fold_p_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module45)
	MR_init_entry1(hash_table__fold_p_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__fold_p_4_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_p'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__fold_p_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hash_table__fold_p_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module46)
	MR_init_entry1(hash_table__fold_p_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__fold_p_4_3);
	MR_init_label5(hash_table__fold_p_4_3,26,3,5,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_p'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__fold_p_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(hash_table__fold_p_4_3,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(hash_table__fold_p_4_3_i3);
	}
	MR_r2 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(hash_table__fold_p_4_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(hash_table__fold_p_4_3_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 1);
	MR_r4 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hash_table__fold_p_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__hash_table__fold_p_4_3_i5);
MR_def_label(hash_table__fold_p_4_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hash_table__fold_p_4_3_i1);
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
	MR_GOTO_LAB(hash_table__fold_p_4_3_i26);
	}
MR_def_label(hash_table__fold_p_4_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_r6;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hash_table__fold_p_4_3));
	MR_np_tailcall_ent(do_call_closure_3);
	}
MR_def_label(hash_table__fold_p_4_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module47)
	MR_init_entry1(hash_table__fold_p_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__fold_p_4_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_p'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__fold_p_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hash_table__fold_p_4_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module48)
	MR_init_entry1(hash_table__fold_p_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__fold_p_4_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_p'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hash_table__fold_p_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hash_table__fold_p_4_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___array__array_1_0);

MR_BEGIN_MODULE(hash_table_module49)
	MR_init_entry1(__Unify___hash_table__buckets_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hash_table__buckets_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hash_table__buckets_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(__Unify___array__array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___array__array_1_0);

MR_BEGIN_MODULE(hash_table_module50)
	MR_init_entry1(__Compare___hash_table__buckets_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hash_table__buckets_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hash_table__buckets_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(__Compare___array__array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(hash_table_module51)
	MR_init_entry1(__Unify___hash_table__hash_pred_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hash_table__hash_pred_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hash_table__hash_pred_1_0);
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

MR_BEGIN_MODULE(hash_table_module52)
	MR_init_entry1(__Compare___hash_table__hash_pred_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hash_table__hash_pred_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hash_table__hash_pred_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module53)
	MR_init_entry1(__Unify___hash_table__hash_table_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hash_table__hash_table_2_0);
	MR_init_label3(__Unify___hash_table__hash_table_2_0,4,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hash_table__hash_table_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___hash_table__hash_table_2_0_i9);
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
		MR_GOTO_LAB(__Unify___hash_table__hash_table_2_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___hash_table__hash_table_2_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 3);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 3);
	MR_r1 = MR_tfield(0, MR_tempr3, 2);
	MR_r2 = MR_tfield(0, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___hash_table__hash_table_2_0_i4);
MR_def_label(__Unify___hash_table__hash_table_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hash_table__hash_table_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___array__array_1_0);
MR_def_label(__Unify___hash_table__hash_table_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hash_table__hash_table_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module54)
	MR_init_entry1(__Compare___hash_table__hash_table_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hash_table__hash_table_2_0);
	MR_init_label10(__Compare___hash_table__hash_table_2_0,3,2,6,7,9,14,15,17,21,58)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hash_table__hash_table_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___hash_table__hash_table_2_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_GOTO_LAB(__Compare___hash_table__hash_table_2_0_i2);
MR_def_label(__Compare___hash_table__hash_table_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hash_table__hash_table_2_0,2)
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
		MR_GOTO_LAB(__Compare___hash_table__hash_table_2_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___hash_table__hash_table_2_0_i9);
	}
MR_def_label(__Compare___hash_table__hash_table_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___hash_table__hash_table_2_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___hash_table__hash_table_2_0_i9);
MR_def_label(__Compare___hash_table__hash_table_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___hash_table__hash_table_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hash_table__hash_table_2_0_i58);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(__Compare___hash_table__hash_table_2_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___hash_table__hash_table_2_0_i17);
MR_def_label(__Compare___hash_table__hash_table_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(4))) {
		MR_GOTO_LAB(__Compare___hash_table__hash_table_2_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___hash_table__hash_table_2_0_i17);
MR_def_label(__Compare___hash_table__hash_table_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___hash_table__hash_table_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hash_table__hash_table_2_0_i58);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_pred_3_0,
		__Compare___hash_table__hash_table_2_0_i21);
MR_def_label(__Compare___hash_table__hash_table_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hash_table__hash_table_2_0_i58);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(hash_table, hash_table_alist, 2);
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_tfield(0, MR_r1, 2) = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___array__array_1_0);
MR_def_label(__Compare___hash_table__hash_table_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module55)
	MR_init_entry1(__Unify___hash_table__hash_table_alist_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hash_table__hash_table_alist_2_0);
	MR_init_label8(__Unify___hash_table__hash_table_alist_2_0,55,5,8,10,27,6,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hash_table__hash_table_alist_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(__Unify___hash_table__hash_table_alist_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___hash_table__hash_table_alist_2_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___hash_table__hash_table_alist_2_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___hash_table__hash_table_alist_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___hash_table__hash_table_alist_2_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___hash_table__hash_table_alist_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___hash_table__hash_table_alist_2_0_i8);
MR_def_label(__Unify___hash_table__hash_table_alist_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hash_table__hash_table_alist_2_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___hash_table__hash_table_alist_2_0_i10);
MR_def_label(__Unify___hash_table__hash_table_alist_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hash_table__hash_table_alist_2_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(__Unify___hash_table__hash_table_alist_2_0_i55);
MR_def_label(__Unify___hash_table__hash_table_alist_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___hash_table__hash_table_alist_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___hash_table__hash_table_alist_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___hash_table__hash_table_alist_2_0_i15);
MR_def_label(__Unify___hash_table__hash_table_alist_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hash_table__hash_table_alist_2_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___hash_table__hash_table_alist_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(hash_table_module56)
	MR_init_entry1(__Compare___hash_table__hash_table_alist_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hash_table__hash_table_alist_2_0);
	MR_init_label10(__Compare___hash_table__hash_table_alist_2_0,84,48,7,5,11,14,18,9,43,25)
	MR_init_label4(__Compare___hash_table__hash_table_alist_2_0,44,26,28,92)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hash_table__hash_table_alist_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(__Compare___hash_table__hash_table_alist_2_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___hash_table__hash_table_alist_2_0_i48);
	}
	MR_sv(1) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___hash_table__hash_table_alist_2_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(__Compare___hash_table__hash_table_alist_2_0_i7);
	}
MR_def_label(__Compare___hash_table__hash_table_alist_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___hash_table__hash_table_alist_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),2)) {
		MR_GOTO_LAB(__Compare___hash_table__hash_table_alist_2_0_i44);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___hash_table__hash_table_alist_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___hash_table__hash_table_alist_2_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(__Compare___hash_table__hash_table_alist_2_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___hash_table__hash_table_alist_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),2)) {
		MR_GOTO_LAB(__Compare___hash_table__hash_table_alist_2_0_i43);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(5) = MR_tfield(2, MR_tempr5, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr5, 2);
	MR_tempr6 = MR_sv(6);
	MR_tempr1 = MR_tfield(2, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_r3 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___hash_table__hash_table_alist_2_0_i14);
MR_def_label(__Compare___hash_table__hash_table_alist_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hash_table__hash_table_alist_2_0_i92);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___hash_table__hash_table_alist_2_0_i18);
MR_def_label(__Compare___hash_table__hash_table_alist_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hash_table__hash_table_alist_2_0_i92);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(__Compare___hash_table__hash_table_alist_2_0_i84);
MR_def_label(__Compare___hash_table__hash_table_alist_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(__Compare___hash_table__hash_table_alist_2_0_i25);
	}
MR_def_label(__Compare___hash_table__hash_table_alist_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___hash_table__hash_table_alist_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),2)) {
		MR_GOTO_LAB(__Compare___hash_table__hash_table_alist_2_0_i26);
	}
MR_def_label(__Compare___hash_table__hash_table_alist_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___hash_table__hash_table_alist_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(6);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___hash_table__hash_table_alist_2_0_i28);
MR_def_label(__Compare___hash_table__hash_table_alist_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hash_table__hash_table_alist_2_0_i92);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___hash_table__hash_table_alist_2_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module57)
	MR_init_entry1(hash_table__list__foldl__ho17_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hash_table__list__foldl__ho17_4_0);
	MR_init_label3(hash_table__list__foldl__ho17_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl__ho17'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hash_table__list__foldl__ho17_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hash_table__list__foldl__ho17_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hash_table__list__foldl__ho17_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(hash_table__list__foldl__ho17_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hash_table__generic_hash_2_0,
		hash_table__list__foldl__ho17_4_0_i4);
MR_def_label(hash_table__list__foldl__ho17_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__hash_table__list__foldl__ho17_4_0
{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 4246 "hash_table.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr3 = MR_sv(1);
	MR_r2 = (((MR_Integer) MR_tempr3 << (MR_Integer) MR_tempr2) ^ ((MR_Integer) MR_tempr3 >> ((MR_Integer) MR_tempr1 - (MR_Integer) MR_tempr2)));
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hash_table__list__foldl__ho17_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module58)
	MR_init_entry1(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0);
	MR_init_label6(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0,6,4,9,3,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__alist_replace__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0_i3);
	}
	MR_sv(5) = MR_tfield(2, MR_r2, 2);
	MR_sv(4) = MR_tfield(2, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r2, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0_i6);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r2, 0) = MR_sv(3);
	MR_tfield(2, MR_r2, 1) = MR_sv(2);
	MR_tfield(2, MR_r2, 2) = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	}
	MR_np_localcall_lab(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0,
		f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0_i9);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0_i14);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_0,1)
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


MR_BEGIN_MODULE(hash_table_module59)
	MR_init_entry1(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0);
	MR_init_label6(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0,6,4,8,3,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__alist_remove__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0_i3);
	}
	MR_sv(4) = MR_tfield(2, MR_r2, 2);
	MR_sv(3) = MR_tfield(2, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r2, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0_i6);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0_i4);
	}
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	}
	MR_np_localcall_lab(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0,
		f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0_i8);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0_i13);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_0,1)
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


MR_BEGIN_MODULE(hash_table_module60)
	MR_init_entry1(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_0);
	MR_init_label3(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_0,11,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__reinsert_bindings__[1, 2]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 254 "array.opt"

    Max = Array->size;
;}
#line 4512 "hash_table.c"
	MR_r6 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r1 < (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(6);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
	Index = MR_r1;
{
#line 276 "array.opt"

    Item = Array->elements[Index];
;}
#line 4537 "hash_table.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(4) = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0,
		f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_0_i4);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module61)
	MR_init_entry1(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0);
	MR_init_label10(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0,41,3,5,7,9,6,4,13,15,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__reinsert_alist__[1, 2]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(2, MR_r1, 2);
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tfield(2, MR_r1, 0);
	MR_sv(6) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0_i5);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = ((MR_Integer) MR_r1 & ((MR_Integer) MR_tempr3 - (MR_Integer) 1));
	MR_r5 = MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(4), Array);
	Index = MR_tempr1;
{
#line 276 "array.opt"

    Item = Array->elements[Index];
;}
#line 4632 "hash_table.c"
	MR_r6 = Item;
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0_i7);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr3;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0_i6);
	}
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_r7 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 2) = MR_r6;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0_i6);
	}
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 2) = MR_r6;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr1;
	}
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0
	Index = MR_r4;
	Item = MR_r5;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(4), Array0);
{
#line 281 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 4700 "hash_table.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r4);
#undef	MR_PROC_LABEL
	}
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0_i41);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0_i13);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r1 & ((MR_Integer) MR_sv(2) - (MR_Integer) 1));
	MR_r3 = MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(4), Array);
	Index = MR_tempr1;
{
#line 276 "array.opt"

    Item = Array->elements[Index];
;}
#line 4736 "hash_table.c"
	MR_r4 = Item;
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0_i15);
	}
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0_i14);
	}
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 2) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	}
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_0
	Index = MR_r1;
	Item = MR_r2;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(4), Array0);
{
#line 281 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 4775 "hash_table.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module62)
	MR_init_entry1(fn__f_104_97_115_104_95_116_97_98_108_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_104_97_115_104_95_116_97_98_108_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_104_97_115_104_95_116_97_98_108_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module63)
	MR_init_entry1(fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__foldl__ho18__[2, 3]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;
;}
#line 4833 "hash_table.c"
	MR_r4 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 247 "array.opt"

    Max = Array->size - 1;
;}
#line 4847 "hash_table.c"
	MR_r5 = Max;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module64)
	MR_init_entry1(fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_0);
	MR_init_label3(fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__do_foldl_func__ho19__[2, 3]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_0_i2);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(6);
MR_def_label(fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
	Index = MR_r4;
{
#line 276 "array.opt"

    Item = Array->elements[Index];
;}
#line 4898 "hash_table.c"
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
	MR_np_call_localret_ent(hash_table__generic_hash_2_0,
		fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_0_i3);
MR_def_label(fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_0
{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 4923 "hash_table.c"
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
	MR_GOTO_LAB(fn__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module65)
	MR_init_entry1(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_0);
	MR_init_label3(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_foldl_pred__ho20__[1, 2, 3, 4, 5, 8, 9, 10]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_0_i2);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(6);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array);
	Index = MR_r4;
{
#line 276 "array.opt"

    Item = Array->elements[Index];
;}
#line 4983 "hash_table.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r6;
	}
	MR_np_call_localret_ent(hash_table__to_assoc_list_2_3_0,
		f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_0_i3);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module66)
	MR_init_entry1(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	MR_init_label3(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_foldl_pred__ho21__[1, 2, 7, 8, 9]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i2);
	}
	MR_r1 = MR_r8;
	MR_decr_sp_and_return(8);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
	Index = MR_r6;
{
#line 276 "array.opt"

    Item = Array->elements[Index];
;}
#line 5057 "hash_table.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_r8;
	}
	MR_np_call_localret_ent(hash_table__fold_f_4_0,
		f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i3);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r6 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module67)
	MR_init_entry1(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	MR_init_label3(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_foldl_pred__ho22__[1, 2, 7, 8, 9]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i2);
	}
	MR_r1 = MR_r8;
	MR_decr_sp_and_return(8);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
	Index = MR_r6;
{
#line 276 "array.opt"

    Item = Array->elements[Index];
;}
#line 5135 "hash_table.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_r8;
	}
	MR_np_call_localret_ent(hash_table__fold_f_4_1,
		f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i3);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r6 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module68)
	MR_init_entry1(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	MR_init_label3(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_foldl_pred__ho23__[1, 2, 7, 8, 9]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i2);
	}
	MR_r1 = MR_r8;
	MR_decr_sp_and_return(8);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
	Index = MR_r6;
{
#line 276 "array.opt"

    Item = Array->elements[Index];
;}
#line 5213 "hash_table.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_r8;
	}
	MR_np_call_localret_ent(hash_table__fold_p_4_0,
		f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i3);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r6 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module69)
	MR_init_entry1(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	MR_init_label3(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_foldl_pred__ho24__[1, 2, 7, 8, 9]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i2);
	}
	MR_r1 = MR_r8;
	MR_decr_sp_and_return(8);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
	Index = MR_r6;
{
#line 276 "array.opt"

    Item = Array->elements[Index];
;}
#line 5291 "hash_table.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_r8;
	}
	MR_np_call_localret_ent(hash_table__fold_p_4_1,
		f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i3);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r6 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module70)
	MR_init_entry1(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	MR_init_label3(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_foldl_pred__ho25__[1, 2, 7, 8, 9]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i2);
	}
	MR_r1 = MR_r8;
	MR_decr_sp_and_return(8);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
	Index = MR_r6;
{
#line 276 "array.opt"

    Item = Array->elements[Index];
;}
#line 5369 "hash_table.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_r8;
	}
	MR_np_call_localret_ent(hash_table__fold_p_4_2,
		f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i3);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r6 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module71)
	MR_init_entry1(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	MR_init_label4(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_foldl_pred__ho26__[1, 2, 7, 8, 9]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i2);
	}
	MR_r2 = MR_r8;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
	Index = MR_r6;
{
#line 276 "array.opt"

    Item = Array->elements[Index];
;}
#line 5448 "hash_table.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_r8;
	}
	MR_np_call_localret_ent(hash_table__fold_p_4_3,
		f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i3);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i1);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r6 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i18);
	}
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module72)
	MR_init_entry1(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	MR_init_label4(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_foldl_pred__ho27__[1, 2, 7, 8, 9]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i2);
	}
	MR_r2 = MR_r8;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
	Index = MR_r6;
{
#line 276 "array.opt"

    Item = Array->elements[Index];
;}
#line 5534 "hash_table.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_r8;
	}
	MR_np_call_localret_ent(hash_table__fold_p_4_4,
		f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i3);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i1);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r6 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i18);
	}
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hash_table_module73)
	MR_init_entry1(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0);
	MR_init_label4(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_foldl_pred__ho28__[1, 2, 7, 8, 9]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i2);
	}
	MR_r2 = MR_r8;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
	Index = MR_r6;
{
#line 276 "array.opt"

    Item = Array->elements[Index];
;}
#line 5620 "hash_table.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_r8;
	}
	MR_np_call_localret_ent(hash_table__fold_p_4_5,
		f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i3);
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i1);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r6 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0_i18);
	}
MR_def_label(f_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hash_table_maybe_bunch_0(void)
{
	hash_table_module0();
	hash_table_module1();
	hash_table_module2();
	hash_table_module3();
	hash_table_module4();
	hash_table_module5();
	hash_table_module6();
	hash_table_module7();
	hash_table_module8();
	hash_table_module9();
	hash_table_module10();
	hash_table_module11();
	hash_table_module12();
	hash_table_module13();
	hash_table_module14();
	hash_table_module15();
	hash_table_module16();
	hash_table_module17();
	hash_table_module18();
	hash_table_module19();
	hash_table_module20();
	hash_table_module21();
	hash_table_module22();
	hash_table_module23();
	hash_table_module24();
	hash_table_module25();
	hash_table_module26();
	hash_table_module27();
	hash_table_module28();
	hash_table_module29();
	hash_table_module30();
	hash_table_module31();
	hash_table_module32();
	hash_table_module33();
	hash_table_module34();
	hash_table_module35();
	hash_table_module36();
	hash_table_module37();
	hash_table_module38();
	hash_table_module39();
}

static void mercury__hash_table_maybe_bunch_1(void)
{
	hash_table_module40();
	hash_table_module41();
	hash_table_module42();
	hash_table_module43();
	hash_table_module44();
	hash_table_module45();
	hash_table_module46();
	hash_table_module47();
	hash_table_module48();
	hash_table_module49();
	hash_table_module50();
	hash_table_module51();
	hash_table_module52();
	hash_table_module53();
	hash_table_module54();
	hash_table_module55();
	hash_table_module56();
	hash_table_module57();
	hash_table_module58();
	hash_table_module59();
	hash_table_module60();
	hash_table_module61();
	hash_table_module62();
	hash_table_module63();
	hash_table_module64();
	hash_table_module65();
	hash_table_module66();
	hash_table_module67();
	hash_table_module68();
	hash_table_module69();
	hash_table_module70();
	hash_table_module71();
	hash_table_module72();
	hash_table_module73();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hash_table__init(void);
void mercury__hash_table__init_type_tables(void);
void mercury__hash_table__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hash_table__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hash_table__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hash_table__init_threadscope_string_table(void);
#endif

void mercury__hash_table__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hash_table_maybe_bunch_0();
	mercury__hash_table_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hash_table__type_ctor_info_buckets_2,
		hash_table__buckets_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hash_table__type_ctor_info_hash_pred_1,
		hash_table__hash_pred_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hash_table__type_ctor_info_hash_table_2,
		hash_table__hash_table_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hash_table__type_ctor_info_hash_table_alist_2,
		hash_table__hash_table_alist_2_0);
	mercury__hash_table__init_debugger();
}

void mercury__hash_table__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hash_table__type_ctor_info_buckets_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hash_table__type_ctor_info_hash_pred_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hash_table__type_ctor_info_hash_table_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hash_table__type_ctor_info_hash_table_alist_2);
	}
}


void mercury__hash_table__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hash_table__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hash_table);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hash_table__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hash_table__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
