/*
** Automatically generated from `integer.m'
** by the Mercury compiler,
** version rotd-2009-06-06, configured for i686-pc-linux-gnu.
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
INIT mercury__integer__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "io.int2"
#include "io.mh"

#line 27 "integer.c"
#line 144 "io.int2"
#include "string.mh"

#line 31 "integer.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 35 "integer.c"
#line 28 "time.int2"
#include "time.mh"

#line 39 "integer.c"
#line 31 "array.int2"
#include "array.mh"

#line 43 "integer.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 47 "integer.c"
#line 46 "array.opt"
#include "stm_builtin.mh"

#line 51 "integer.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 55 "integer.c"
#line 150 "io.opt"
#include "dir.mh"

#line 59 "integer.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 63 "integer.c"
#line 20 "store.opt"
#include "store.mh"

#line 67 "integer.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 71 "integer.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 75 "integer.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 79 "integer.c"
#line 109 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 83 "integer.c"
#line 4 "char.opt"
#include "char.mh"

#line 87 "integer.c"
#line 3 "float.opt"
#include "float.mh"

#line 91 "integer.c"
#line 3 "math.opt"
#include "math.mh"

#line 95 "integer.c"
#line 4 "int.opt"
#include "int.mh"

#line 99 "integer.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 103 "integer.c"
#line 104 "integer.c"
#include "integer.mh"

#line 107 "integer.c"
#line 108 "integer.c"
#ifndef INTEGER_DECL_GUARD
#define INTEGER_DECL_GUARD

#line 112 "integer.c"
#line 113 "integer.c"

#endif
#line 116 "integer.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_integer__type_ctor_info_sign_0,
	mercury_data_integer__type_ctor_info_integer_0,
	mercury_data_integer__type_ctor_info_digit_0;
MR_decl_label1(f_105_110_116_101_103_101_114_95_95_60_2_0, 2)
MR_decl_label3(f_105_110_116_101_103_101_114_95_95_61_60_2_0, 2,3,1)
MR_decl_label1(f_105_110_116_101_103_101_114_95_95_62_2_0, 2)
MR_decl_label2(f_105_110_116_101_103_101_114_95_95_62_61_2_0, 2,3)
MR_decl_label8(integer__accumulate_integer_4_0, 4,6,2,8,11,12,14,15)
MR_decl_label1(integer__accumulate_integer_4_0, 1)
MR_decl_label7(integer__add_pairs_4_0, 2,7,8,4,13,14,10)
MR_decl_label4(integer__add_pairs_equal_4_0, 3,21,6,7)
MR_decl_label7(integer__big_quot_rem_4_0, 2,38,9,10,11,12,13)
MR_decl_label4(integer__diff_pairs_4_0, 2,7,8,4)
MR_decl_label4(integer__diff_pairs_equal_4_0, 3,21,6,7)
MR_decl_label4(integer__digits_to_strings_3_0, 15,4,5,6)
MR_decl_label7(integer__leftshift_6_0, 4,3,5,6,7,8,9)
MR_decl_label3(integer__mul_by_digit_2_4_0, 14,4,5)
MR_decl_label3(integer__neg_list_2_0, 5,6,2)
MR_decl_label2(integer__pos_geq_2_0, 2,3)
MR_decl_label8(integer__printbase_add_pairs_4_0, 2,7,8,9,4,14,15,16)
MR_decl_label1(integer__printbase_add_pairs_4_0, 11)
MR_decl_label5(integer__printbase_add_pairs_equal_4_0, 3,22,6,7,8)
MR_decl_label4(integer__printbase_mul_by_digit_2_4_0, 15,4,5,6)
MR_decl_label8(integer__quot_rem_4_0, 8,13,14,17,23,25,30,31)
MR_decl_label8(integer__quot_rem_4_0, 34,2,41,44,46,48,49,54)
MR_decl_label7(integer__quot_rem_4_0, 55,56,62,63,45,65,67)
MR_decl_label8(integer__quot_rem_2_5_0, 3,7,10,9,13,4,2,20)
MR_decl_label8(integer__quot_rem_2_5_0, 21,22,19,24,25,26,28,31)
MR_decl_label8(integer__quot_rem_2_5_0, 29,33,36,34,38,41,44,45)
MR_decl_label3(integer__quot_rem_2_5_0, 46,47,42)
MR_decl_label2(integer__zeros_3_0, 3,2)
MR_decl_label4(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_57_95_95_91_50_93_95_48_6_0, 18,3,2,1)
MR_decl_label2(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_95_104_111_56_95_95_91_50_93_95_48_6_0, 3,22)
MR_decl_label1(fn__f_105_110_116_101_103_101_114_95_95_45_1_0, 2)
MR_decl_label1(fn__f_105_110_116_101_103_101_114_95_95_45_2_0, 2)
MR_decl_label8(fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0, 4,5,6,7,3,2,14,13)
MR_decl_label1(fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0, 17)
MR_decl_label8(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0, 63,7,8,9,10,11,15,6)
MR_decl_label6(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0, 17,18,19,20,2,64)
MR_decl_label8(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0, 2,63,9,10,12,14,11,58)
MR_decl_label6(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0, 8,19,21,59,20,62)
MR_decl_label2(fn__f_105_110_116_101_103_101_114_95_95_92_1_0, 4,5)
MR_decl_label8(fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0, 4,5,6,3,2,15,16,17)
MR_decl_label2(fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0, 14,19)
MR_decl_label6(fn__integer__and_not_pairs_2_0, 3,2,8,5,13,10)
MR_decl_label3(fn__integer__and_not_pairs_equal_2_0, 3,20,6)
MR_decl_label5(fn__integer__and_pairs_2_0, 3,2,5,13,10)
MR_decl_label3(fn__integer__and_pairs_equal_2_0, 3,20,6)
MR_decl_label2(fn__integer__big_abs_1_0, 3,12)
MR_decl_label5(fn__integer__big_div_2_0, 2,4,5,7,3)
MR_decl_label4(fn__integer__big_mod_2_0, 2,4,5,3)
MR_decl_label5(fn__integer__big_mul_2_0, 2,3,4,5,6)
MR_decl_label1(fn__integer__big_neg_1_0, 2)
MR_decl_label8(fn__integer__big_plus_2_0, 4,2,8,6,10,11,12,13)
MR_decl_label8(fn__integer__big_plus_2_0, 15,16,17,18,14,25,28,29)
MR_decl_label8(fn__integer__big_plus_2_0, 30,34,31,27,39,41,42,43)
MR_decl_label2(fn__integer__big_plus_2_0, 47,44)
MR_decl_label8(fn__integer__big_pow_2_0, 4,2,11,8,16,13,20,18)
MR_decl_label2(fn__integer__big_pow_2_0, 24,22)
MR_decl_label1(fn__integer__big_rem_2_0, 2)
MR_decl_label2(fn__integer__big_sign_2_0, 3,2)
MR_decl_label5(fn__integer__bits_pow_4_0, 25,5,3,7,8)
MR_decl_label5(fn__integer__bits_pow_head_2_0, 28,8,6,10,11)
MR_decl_label3(fn__integer__bits_pow_list_3_0, 10,3,4)
MR_decl_label2(fn__integer__decap_1_0, 3,24)
MR_decl_label2(fn__integer__det_from_base_string_2_0, 3,2)
MR_decl_label3(fn__integer__det_from_string_1_0, 3,4,2)
MR_decl_label1(fn__integer__div_by_digit_2_0, 3)
MR_decl_label8(fn__integer__div_by_digit_1_3_0, 76,4,5,3,11,15,79,12)
MR_decl_label3(fn__integer__div_by_digit_1_3_0, 23,28,29)
MR_decl_label6(fn__integer__div_by_digit_2_3_0, 4,3,7,9,14,15)
MR_decl_label1(fn__integer__float_list_3_0, 3)
MR_decl_label7(fn__integer__from_base_string_2_0, 4,8,10,12,5,14,1)
MR_decl_label1(fn__integer__from_string_1_0, 2)
MR_decl_label1(fn__integer__head_1_0, 2)
MR_decl_label1(fn__integer__head_tail_1_0, 2)
MR_decl_label7(fn__integer__int_1_0, 3,4,5,8,9,10,2)
MR_decl_label2(fn__integer__int_list_2_0, 4,2)
MR_decl_label8(fn__integer__int_to_integer_1_0, 2,5,59,13,15,12,18,20)
MR_decl_label1(fn__integer__integer_append_2_0, 3)
MR_decl_label3(fn__integer__mul_base_2_1_0, 6,7,2)
MR_decl_label2(fn__integer__mul_by_digit_2_0, 2,3)
MR_decl_label5(fn__integer__or_pairs_2_0, 3,2,5,14,11)
MR_decl_label3(fn__integer__or_pairs_equal_2_0, 3,20,6)
MR_decl_label3(fn__integer__pos_int_to_digits_2_2_0, 13,2,4)
MR_decl_label4(fn__integer__pos_minus_2_0, 2,3,4,5)
MR_decl_label1(fn__integer__pos_mul_2_0, 2)
MR_decl_label8(fn__integer__pos_mul_list_3_0, 47,3,5,7,9,10,16,17)
MR_decl_label2(fn__integer__pos_mul_list_3_0, 18,19)
MR_decl_label1(fn__integer__pow_2_0, 14)
MR_decl_label4(fn__integer__printbase_pos_int_to_digits_2_2_0, 14,2,4,5)
MR_decl_label8(fn__integer__printbase_pos_mul_list_3_0, 47,3,5,7,9,10,16,17)
MR_decl_label2(fn__integer__printbase_pos_mul_list_3_0, 18,19)
MR_decl_label8(fn__integer__printbase_rep_1_3_0, 38,3,4,8,10,11,12,13)
MR_decl_label1(fn__integer__printbase_rep_1_3_0, 14)
MR_decl_label1(fn__integer__rem_2_0, 2)
MR_decl_label6(fn__integer__rightshift_4_0, 26,5,7,8,9,11)
MR_decl_label2(fn__integer__signum_1_0, 2,3)
MR_decl_label6(fn__integer__string_to_integer_1_0, 5,7,3,8,39,1)
MR_decl_label8(fn__integer__string_to_integer_acc_2_0, 47,4,7,8,9,15,16,17)
MR_decl_label3(fn__integer__string_to_integer_acc_2_0, 18,2,1)
MR_decl_label1(fn__integer__tail_1_0, 3)
MR_decl_label8(fn__integer__to_string_1_0, 3,2,4,6,8,9,12,13)
MR_decl_label3(fn__integer__to_string_1_0, 15,11,5)
MR_decl_label8(fn__integer__xor_2_0, 4,5,3,8,9,2,18,19)
MR_decl_label7(fn__integer__xor_2_0, 20,21,22,23,24,17,26)
MR_decl_label5(fn__integer__xor_pairs_2_0, 3,2,5,14,11)
MR_decl_label3(fn__integer__xor_pairs_equal_2_0, 3,20,6)
MR_decl_label2(__Unify___integer__integer_0_0, 6,1)
MR_decl_label2(__Compare___integer__digit_0_0, 2,3)
MR_decl_label6(__Compare___integer__integer_0_0, 3,2,6,7,9,31)
MR_decl_label2(__Compare___integer__sign_0_0, 2,3)
MR_def_extern_entry(fn__integer__big_cmp_2_0)
MR_def_extern_entry(f_105_110_116_101_103_101_114_95_95_60_2_0)
MR_def_extern_entry(f_105_110_116_101_103_101_114_95_95_62_2_0)
MR_def_extern_entry(f_105_110_116_101_103_101_114_95_95_61_60_2_0)
MR_def_extern_entry(f_105_110_116_101_103_101_114_95_95_62_61_2_0)
MR_def_extern_entry(integer__neg_list_2_0)
MR_def_extern_entry(fn__integer__big_neg_1_0)
MR_def_extern_entry(fn__integer__zero_0_0)
MR_def_extern_entry(fn__integer__big_abs_1_0)
MR_def_extern_entry(fn__integer__big_sign_2_0)
MR_def_extern_entry(fn__integer__signum_1_0)
MR_def_extern_entry(fn__integer__integer_signum_1_0)
MR_decl_static(integer__add_pairs_equal_4_0)
MR_decl_static(integer__add_pairs_4_0)
MR_decl_static(integer__diff_pairs_equal_4_0)
MR_decl_static(integer__diff_pairs_4_0)
MR_decl_static(fn__integer__decap_1_0)
MR_decl_static(fn__integer__pos_minus_2_0)
MR_def_extern_entry(fn__integer__big_plus_2_0)
MR_def_extern_entry(fn__f_105_110_116_101_103_101_114_95_95_45_2_0)
MR_def_extern_entry(fn__integer__one_0_0)
MR_def_extern_entry(fn__integer__base_0_0)
MR_decl_static(fn__integer__pos_int_to_digits_2_2_0)
MR_def_extern_entry(fn__integer__integer_1_0)
MR_def_extern_entry(fn__integer__int_to_integer_1_0)
MR_decl_static(integer__digits_to_strings_3_0)
MR_decl_static(fn__integer__printbase_pos_int_to_digits_2_2_0)
MR_decl_static(integer__printbase_add_pairs_equal_4_0)
MR_decl_static(integer__printbase_add_pairs_4_0)
MR_decl_static(fn__integer__mul_base_2_1_0)
MR_decl_static(integer__printbase_mul_by_digit_2_4_0)
MR_decl_static(fn__integer__printbase_pos_mul_list_3_0)
MR_decl_static(fn__integer__printbase_rep_1_3_0)
MR_def_extern_entry(fn__integer__to_string_1_0)
MR_decl_static(integer__mul_by_digit_2_4_0)
MR_decl_static(fn__integer__mul_by_digit_2_0)
MR_decl_static(fn__integer__string_to_integer_acc_2_0)
MR_def_extern_entry(fn__integer__string_to_integer_1_0)
MR_def_extern_entry(fn__integer__from_string_1_0)
MR_def_extern_entry(fn__integer__det_from_string_1_0)
MR_def_extern_entry(fn__f_105_110_116_101_103_101_114_95_95_45_1_0)
MR_def_extern_entry(fn__integer__from_base_string_2_0)
MR_def_extern_entry(fn__integer__det_from_base_string_2_0)
MR_def_extern_entry(fn__f_105_110_116_101_103_101_114_95_95_43_1_0)
MR_def_extern_entry(fn__f_105_110_116_101_103_101_114_95_95_43_2_0)
MR_decl_static(fn__integer__pos_mul_list_3_0)
MR_def_extern_entry(fn__integer__pos_mul_2_0)
MR_def_extern_entry(fn__integer__big_mul_2_0)
MR_def_extern_entry(fn__f_105_110_116_101_103_101_114_95_95_42_2_0)
MR_decl_static(fn__integer__head_1_0)
MR_decl_static(fn__integer__head_tail_1_0)
MR_decl_static(fn__integer__tail_1_0)
MR_decl_static(fn__integer__integer_append_2_0)
MR_decl_static(fn__integer__integer_prepend_2_0)
MR_decl_static(integer__pos_geq_2_0)
MR_decl_static(integer__quot_rem_2_5_0)
MR_decl_static(fn__integer__div_by_digit_2_3_0)
MR_decl_static(fn__integer__div_by_digit_1_3_0)
MR_decl_static(fn__integer__div_by_digit_2_0)
MR_decl_static(integer__quot_rem_4_0)
MR_def_extern_entry(integer__big_quot_rem_4_0)
MR_def_extern_entry(fn__integer__big_quot_2_0)
MR_def_extern_entry(fn__f_105_110_116_101_103_101_114_95_95_47_47_2_0)
MR_def_extern_entry(fn__integer__big_div_2_0)
MR_def_extern_entry(fn__integer__div_2_0)
MR_def_extern_entry(fn__integer__big_rem_2_0)
MR_def_extern_entry(fn__integer__rem_2_0)
MR_def_extern_entry(fn__integer__big_mod_2_0)
MR_def_extern_entry(fn__integer__mod_2_0)
MR_def_extern_entry(integer__divide_with_rem_4_0)
MR_def_extern_entry(fn__f_105_110_116_101_103_101_114_95_95_92_1_0)
MR_def_extern_entry(integer__big_isnegative_1_0)
MR_decl_static(fn__integer__rightshift_4_0)
MR_decl_static(integer__zeros_3_0)
MR_decl_static(integer__leftshift_6_0)
MR_def_extern_entry(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0)
MR_def_extern_entry(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0)
MR_decl_static(fn__integer__or_pairs_equal_2_0)
MR_decl_static(fn__integer__or_pairs_2_0)
MR_decl_static(fn__integer__and_pairs_equal_2_0)
MR_decl_static(fn__integer__and_pairs_2_0)
MR_decl_static(fn__integer__and_not_pairs_equal_2_0)
MR_decl_static(fn__integer__and_not_pairs_2_0)
MR_def_extern_entry(fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0)
MR_def_extern_entry(fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0)
MR_decl_static(fn__integer__xor_pairs_equal_2_0)
MR_decl_static(fn__integer__xor_pairs_2_0)
MR_def_extern_entry(fn__integer__xor_2_0)
MR_def_extern_entry(fn__integer__abs_1_0)
MR_decl_static(fn__integer__bits_pow_head_2_0)
MR_decl_static(fn__integer__bits_pow_4_0)
MR_decl_static(fn__integer__bits_pow_list_3_0)
MR_def_extern_entry(fn__integer__big_pow_2_0)
MR_def_extern_entry(fn__integer__pow_2_0)
MR_def_extern_entry(fn__integer__float_list_3_0)
MR_def_extern_entry(fn__integer__float_1_0)
MR_decl_static(fn__integer__int_list_2_0)
MR_def_extern_entry(fn__integer__int_1_0)
MR_decl_static(integer__accumulate_integer_4_0)
MR_def_extern_entry(__Unify___integer__digit_0_0)
MR_def_extern_entry(__Compare___integer__digit_0_0)
MR_def_extern_entry(__Unify___integer__integer_0_0)
MR_def_extern_entry(__Compare___integer__integer_0_0)
MR_def_extern_entry(__Unify___integer__sign_0_0)
MR_def_extern_entry(__Compare___integer__sign_0_0)
MR_decl_static(fn__f_105_110_116_101_103_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_95_104_111_56_95_95_91_50_93_95_48_6_0)
MR_decl_static(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_57_95_95_91_50_93_95_48_6_0)

static const struct mercury_type_0 mercury_common_0[4] =
{
{
0,
MR_tbmkword(0, 0)
},
{
1,
MR_tbmkword(0, 0)
},
{
1,
MR_TAG_COMMON(1,0,1)
},
{
1,
MR_TAG_COMMON(1,0,0)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_integer__type_ctor_info_sign_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___integer__sign_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___integer__sign_0_0)),
	"integer",
	"sign",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_integer__field_types_integer_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_integer__du_functor_desc_integer_0_0 = {
	"i",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_integer__field_types_integer_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_integer__du_stag_ordered_integer_0_0[] = {
	&mercury_data_integer__du_functor_desc_integer_0_0

};

const MR_DuPtagLayout mercury_data_integer__du_ptag_ordered_integer_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_integer__du_stag_ordered_integer_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_integer__du_name_ordered_integer_0[] = {
	&mercury_data_integer__du_functor_desc_integer_0_0
};

const MR_Integer mercury_data_integer__functor_number_map_integer_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_integer__type_ctor_info_integer_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___integer__integer_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___integer__integer_0_0)),
	"integer",
	"integer",
	{ (void *)mercury_data_integer__du_name_ordered_integer_0 },
	{ (void *)mercury_data_integer__du_ptag_ordered_integer_0 },
	1,
	4,
	mercury_data_integer__functor_number_map_integer_0
};

const MR_TypeCtorInfo_Struct mercury_data_integer__type_ctor_info_digit_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___integer__digit_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___integer__digit_0_0)),
	"integer",
	"digit",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};


MR_BEGIN_MODULE(integer_module0)
	MR_init_entry1(fn__integer__big_cmp_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__big_cmp_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___integer__integer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module1)
	MR_init_entry1(f_105_110_116_101_103_101_114_95_95_60_2_0);
	MR_init_label1(f_105_110_116_101_103_101_114_95_95_60_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_105_110_116_101_103_101_114_95_95_60_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(__Compare___integer__integer_0_0,
		f_105_110_116_101_103_101_114_95_95_60_2_0_i2);
MR_def_label(f_105_110_116_101_103_101_114_95_95_60_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module2)
	MR_init_entry1(f_105_110_116_101_103_101_114_95_95_62_2_0);
	MR_init_label1(f_105_110_116_101_103_101_114_95_95_62_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_105_110_116_101_103_101_114_95_95_62_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(__Compare___integer__integer_0_0,
		f_105_110_116_101_103_101_114_95_95_62_2_0_i2);
MR_def_label(f_105_110_116_101_103_101_114_95_95_62_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 2);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module3)
	MR_init_entry1(f_105_110_116_101_103_101_114_95_95_61_60_2_0);
	MR_init_label3(f_105_110_116_101_103_101_114_95_95_61_60_2_0,2,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_105_110_116_101_103_101_114_95_95_61_60_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(__Compare___integer__integer_0_0,
		f_105_110_116_101_103_101_114_95_95_61_60_2_0_i2);
MR_def_label(f_105_110_116_101_103_101_114_95_95_61_60_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,1)) {
		MR_GOTO_LAB(f_105_110_116_101_103_101_114_95_95_61_60_2_0_i3);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_105_110_116_101_103_101_114_95_95_61_60_2_0_i1);
	}
MR_def_label(f_105_110_116_101_103_101_114_95_95_61_60_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_105_110_116_101_103_101_114_95_95_61_60_2_0,1)
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


MR_BEGIN_MODULE(integer_module4)
	MR_init_entry1(f_105_110_116_101_103_101_114_95_95_62_61_2_0);
	MR_init_label2(f_105_110_116_101_103_101_114_95_95_62_61_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_105_110_116_101_103_101_114_95_95_62_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(__Compare___integer__integer_0_0,
		f_105_110_116_101_103_101_114_95_95_62_61_2_0_i2);
MR_def_label(f_105_110_116_101_103_101_114_95_95_62_61_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(f_105_110_116_101_103_101_114_95_95_62_61_2_0_i3);
	}
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 2);
	MR_decr_sp_and_return(1);
MR_def_label(f_105_110_116_101_103_101_114_95_95_62_61_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module5)
	MR_init_entry1(integer__neg_list_2_0);
	MR_init_label3(integer__neg_list_2_0,5,6,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__integer__neg_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(integer__neg_list_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(integer__neg_list_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = ((MR_Integer) 0 - (MR_Integer) MR_ctfield(1, MR_r1, 0));
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break; } /* end while */
MR_def_label(integer__neg_list_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	}
	break; } /* end while */
MR_def_label(integer__neg_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module6)
	MR_init_entry1(fn__integer__big_neg_1_0);
	MR_init_label1(fn__integer__big_neg_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__big_neg_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = ((MR_Integer) 0 - (MR_Integer) MR_ctfield(0, MR_r1, 0));
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(integer__neg_list_2_0,
		fn__integer__big_neg_1_0_i2);
MR_def_label(fn__integer__big_neg_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module7)
	MR_init_entry1(fn__integer__zero_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__zero_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module8)
	MR_init_entry1(fn__integer__big_abs_1_0);
	MR_init_label2(fn__integer__big_abs_1_0,3,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__big_abs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_GE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__integer__big_abs_1_0_i12);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = ((MR_Integer) 0 - (MR_Integer) MR_ctfield(0, MR_r1, 0));
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(integer__neg_list_2_0,
		fn__integer__big_abs_1_0_i3);
MR_def_label(fn__integer__big_abs_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(fn__integer__big_abs_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module9)
	MR_init_entry1(fn__integer__big_sign_2_0);
	MR_init_label2(fn__integer__big_sign_2_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__big_sign_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__big_sign_2_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = ((MR_Integer) 0 - (MR_Integer) MR_ctfield(0, MR_tempr1, 0));
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(integer__neg_list_2_0,
		fn__integer__big_sign_2_0_i3);
MR_def_label(fn__integer__big_sign_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(fn__integer__big_sign_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module10)
	MR_init_entry1(fn__integer__signum_1_0);
	MR_init_label2(fn__integer__signum_1_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__signum_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__signum_1_0_i2);
	}
	MR_r1 = (MR_Integer) -1;
	MR_proceed();
MR_def_label(fn__integer__signum_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__signum_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__integer__signum_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module11)
	MR_init_entry1(fn__integer__integer_signum_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__integer_signum_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(fn__integer__signum_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_105_110_116_95_95_62_62_2_0);

MR_BEGIN_MODULE(integer_module12)
	MR_init_entry1(integer__add_pairs_equal_4_0);
	MR_init_label4(integer__add_pairs_equal_4_0,3,21,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(integer__add_pairs_equal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(integer__add_pairs_equal_4_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(integer__add_pairs_equal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(integer__add_pairs_equal_4_0_i21);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(integer__add_pairs_equal_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r2, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(integer__add_pairs_equal_4_0,
		integer__add_pairs_equal_4_0_i6);
MR_def_label(integer__add_pairs_equal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = (((MR_Integer) MR_sv(2) + (MR_Integer) MR_tempr1) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 14;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		integer__add_pairs_equal_4_0_i7);
MR_def_label(integer__add_pairs_equal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_sv(2) & (MR_Integer) 16383);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(integer_module13)
	MR_init_entry1(integer__add_pairs_4_0);
	MR_init_label7(integer__add_pairs_4_0,2,7,8,4,13,14,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(integer__add_pairs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_r1;
	MR_r5 = MR_ctfield(0, MR_tempr2, 1);
	MR_r6 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_r6 != MR_r4)) {
		MR_GOTO_LAB(integer__add_pairs_4_0_i2);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(integer__add_pairs_equal_4_0);
	}
MR_def_label(integer__add_pairs_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(integer__add_pairs_4_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(integer__add_pairs_4_0_i4);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_localcall_lab(integer__add_pairs_4_0,
		integer__add_pairs_4_0_i7);
MR_def_label(integer__add_pairs_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 14;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		integer__add_pairs_4_0_i8);
MR_def_label(integer__add_pairs_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_sv(2) & (MR_Integer) 16383);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(integer__add_pairs_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 <= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(integer__add_pairs_4_0_i10);
	}
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(integer__add_pairs_4_0_i10);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_r6 - (MR_Integer) 1);
	MR_tempr2 = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_localcall_lab(integer__add_pairs_4_0,
		integer__add_pairs_4_0_i13);
MR_def_label(integer__add_pairs_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 14;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		integer__add_pairs_4_0_i14);
MR_def_label(integer__add_pairs_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_sv(1) & (MR_Integer) 16383);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(integer__add_pairs_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("integer.add_pairs", 17);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module14)
	MR_init_entry1(integer__diff_pairs_equal_4_0);
	MR_init_label4(integer__diff_pairs_equal_4_0,3,21,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(integer__diff_pairs_equal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(integer__diff_pairs_equal_4_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(integer__diff_pairs_equal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(integer__diff_pairs_equal_4_0_i21);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(integer__diff_pairs_equal_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r2, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(integer__diff_pairs_equal_4_0,
		integer__diff_pairs_equal_4_0_i6);
MR_def_label(integer__diff_pairs_equal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = (((MR_Integer) MR_sv(2) - (MR_Integer) MR_tempr1) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 14;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		integer__diff_pairs_equal_4_0_i7);
MR_def_label(integer__diff_pairs_equal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_sv(2) & (MR_Integer) 16383);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module15)
	MR_init_entry1(integer__diff_pairs_4_0);
	MR_init_label4(integer__diff_pairs_4_0,2,7,8,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(integer__diff_pairs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	if ((MR_r5 != MR_r3)) {
		MR_GOTO_LAB(integer__diff_pairs_4_0_i2);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_np_tailcall_ent(integer__diff_pairs_equal_4_0);
	}
MR_def_label(integer__diff_pairs_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 <= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(integer__diff_pairs_4_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(integer__diff_pairs_4_0_i4);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_r5 - (MR_Integer) 1);
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_localcall_lab(integer__diff_pairs_4_0,
		integer__diff_pairs_4_0_i7);
MR_def_label(integer__diff_pairs_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 14;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		integer__diff_pairs_4_0_i8);
MR_def_label(integer__diff_pairs_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_sv(2) & (MR_Integer) 16383);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(integer__diff_pairs_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("integer.diff_pairs", 18);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module16)
	MR_init_entry1(fn__integer__decap_1_0);
	MR_init_label2(fn__integer__decap_1_0,3,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__decap_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__integer__decap_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
MR_def_label(fn__integer__decap_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__integer__decap_1_0_i24);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_ctfield(0, MR_r1, 0) - (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_np_localtailcall(fn__integer__decap_1_0);
	}
MR_def_label(fn__integer__decap_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module17)
	MR_init_entry1(fn__integer__pos_minus_2_0);
	MR_init_label4(fn__integer__pos_minus_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__pos_minus_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(integer__diff_pairs_4_0,
		fn__integer__pos_minus_2_0_i2);
MR_def_label(fn__integer__pos_minus_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) <= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(fn__integer__pos_minus_2_0_i3);
	}
	MR_r3 = MR_sv(1);
	MR_GOTO_LAB(fn__integer__pos_minus_2_0_i4);
MR_def_label(fn__integer__pos_minus_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
MR_def_label(fn__integer__pos_minus_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__pos_minus_2_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__integer__decap_1_0);
	}
MR_def_label(fn__integer__pos_minus_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module18)
	MR_init_entry1(fn__integer__big_plus_2_0);
	MR_init_label8(fn__integer__big_plus_2_0,4,2,8,6,10,11,12,13)
	MR_init_label8(fn__integer__big_plus_2_0,15,16,17,18,14,25,28,29)
	MR_init_label8(fn__integer__big_plus_2_0,30,34,31,27,39,41,42,43)
	MR_init_label2(fn__integer__big_plus_2_0,47,44)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__big_plus_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(__Unify___integer__integer_0_0,
		fn__integer__big_plus_2_0_i4);
MR_def_label(fn__integer__big_plus_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__integer__big_plus_2_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(fn__integer__big_plus_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(__Unify___integer__integer_0_0,
		fn__integer__big_plus_2_0_i8);
MR_def_label(fn__integer__big_plus_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__integer__big_plus_2_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(fn__integer__big_plus_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__integer__big_abs_1_0,
		fn__integer__big_plus_2_0_i10);
MR_def_label(fn__integer__big_plus_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__integer__big_abs_1_0,
		fn__integer__big_plus_2_0_i11);
MR_def_label(fn__integer__big_plus_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__integer__signum_1_0,
		fn__integer__big_plus_2_0_i12);
MR_def_label(fn__integer__big_plus_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__integer__signum_1_0,
		fn__integer__big_plus_2_0_i13);
MR_def_label(fn__integer__big_plus_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_r1)) {
		MR_GOTO_LAB(fn__integer__big_plus_2_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_tempr3 = MR_sv(3);
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr2 = MR_tempr3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(integer__add_pairs_4_0,
		fn__integer__big_plus_2_0_i15);
MR_def_label(fn__integer__big_plus_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) <= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(fn__integer__big_plus_2_0_i16);
	}
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r6 = MR_r2;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_sv(1);
	MR_GOTO_LAB(fn__integer__big_plus_2_0_i17);
MR_def_label(fn__integer__big_plus_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(3);
	}
MR_def_label(fn__integer__big_plus_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__integer__big_plus_2_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__integer__big_sign_2_0);
	}
MR_def_label(fn__integer__big_plus_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__integer__big_sign_2_0);
	}
MR_def_label(fn__integer__big_plus_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___integer__integer_0_0,
		fn__integer__big_plus_2_0_i25);
MR_def_label(fn__integer__big_plus_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__integer__big_plus_2_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_sv(3);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(integer__diff_pairs_4_0,
		fn__integer__big_plus_2_0_i28);
MR_def_label(fn__integer__big_plus_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) <= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(fn__integer__big_plus_2_0_i29);
	}
	MR_r3 = MR_sv(1);
	MR_GOTO_LAB(fn__integer__big_plus_2_0_i30);
MR_def_label(fn__integer__big_plus_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
MR_def_label(fn__integer__big_plus_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__big_plus_2_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	}
	MR_np_call_localret_ent(fn__integer__decap_1_0,
		fn__integer__big_plus_2_0_i34);
MR_def_label(fn__integer__big_plus_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__integer__big_sign_2_0);
	}
MR_def_label(fn__integer__big_plus_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__integer__big_sign_2_0);
	}
MR_def_label(fn__integer__big_plus_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__big_plus_2_0_i39);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_decr_sp_and_return(5);
MR_def_label(fn__integer__big_plus_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_tempr3 = MR_sv(3);
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr2 = MR_tempr3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(integer__diff_pairs_4_0,
		fn__integer__big_plus_2_0_i41);
MR_def_label(fn__integer__big_plus_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) <= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(fn__integer__big_plus_2_0_i42);
	}
	MR_r3 = MR_sv(1);
	MR_GOTO_LAB(fn__integer__big_plus_2_0_i43);
MR_def_label(fn__integer__big_plus_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
MR_def_label(fn__integer__big_plus_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__big_plus_2_0_i44);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	}
	MR_np_call_localret_ent(fn__integer__decap_1_0,
		fn__integer__big_plus_2_0_i47);
MR_def_label(fn__integer__big_plus_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__integer__big_sign_2_0);
	}
MR_def_label(fn__integer__big_plus_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__integer__big_sign_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module19)
	MR_init_entry1(fn__f_105_110_116_101_103_101_114_95_95_45_2_0);
	MR_init_label1(fn__f_105_110_116_101_103_101_114_95_95_45_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_101_103_101_114_95_95_45_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = ((MR_Integer) 0 - (MR_Integer) MR_ctfield(0, MR_tempr1, 0));
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(integer__neg_list_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_45_2_0_i2);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_45_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__integer__big_plus_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module20)
	MR_init_entry1(fn__integer__one_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__one_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module21)
	MR_init_entry1(fn__integer__base_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__base_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16384;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module22)
	MR_init_entry1(fn__integer__pos_int_to_digits_2_2_0);
	MR_init_label3(fn__integer__pos_int_to_digits_2_2_0,13,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__pos_int_to_digits_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__integer__pos_int_to_digits_2_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__pos_int_to_digits_2_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__integer__pos_int_to_digits_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = (MR_Integer) 14;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		fn__integer__pos_int_to_digits_2_2_0_i4);
MR_def_label(fn__integer__pos_int_to_digits_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_sv(1) & (MR_Integer) 16383);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__integer__pos_int_to_digits_2_2_0_i13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module23)
	MR_init_entry1(fn__integer__integer_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__integer_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__integer__int_to_integer_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(int__abs_2_0);

MR_BEGIN_MODULE(integer_module24)
	MR_init_entry1(fn__integer__int_to_integer_1_0);
	MR_init_label8(fn__integer__int_to_integer_1_0,2,5,59,13,15,12,18,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__int_to_integer_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__int_to_integer_1_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
MR_def_label(fn__integer__int_to_integer_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__int_to_integer_1_0_i5);
	}
	if (MR_INT_GE(MR_r1,16384)) {
		MR_GOTO_LAB(fn__integer__int_to_integer_1_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__integer__int_to_integer_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__int_to_integer_1_0_i59);
	}
	if (MR_INT_LE(MR_r1,-16384)) {
		MR_GOTO_LAB(fn__integer__int_to_integer_1_0_i59);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) -1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__integer__int_to_integer_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__integer__int_to_integer_1_0
{
#line 133 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Min = INT_MIN;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Min = LONG_MIN;
    } else {
        MR_fatal_error("Unable to figure out min integer size");
    }
;}
#line 1810 "integer.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(fn__integer__int_to_integer_1_0_i12);
	}
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(fn__integer__int_to_integer_1_0,
		fn__integer__int_to_integer_1_0_i13);
MR_def_label(fn__integer__int_to_integer_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Integer) -1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_np_call_localret_ent(integer__neg_list_2_0,
		fn__integer__int_to_integer_1_0_i15);
MR_def_label(fn__integer__int_to_integer_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__integer__big_plus_2_0);
	}
MR_def_label(fn__integer__int_to_integer_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(int__abs_2_0,
		fn__integer__int_to_integer_1_0_i18);
MR_def_label(fn__integer__int_to_integer_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__integer__pos_int_to_digits_2_2_0,
		fn__integer__int_to_integer_1_0_i20);
MR_def_label(fn__integer__int_to_integer_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__integer__big_sign_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_base_string_3_0);
MR_decl_entry(string__pad_left_4_0);

MR_BEGIN_MODULE(integer_module25)
	MR_init_entry1(integer__digits_to_strings_3_0);
	MR_init_label4(integer__digits_to_strings_3_0,15,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(integer__digits_to_strings_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(integer__digits_to_strings_3_0_i15);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(integer__digits_to_strings_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		integer__digits_to_strings_3_0_i4);
MR_def_label(integer__digits_to_strings_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 48;
	MR_r3 = (MR_Integer) 4;
	MR_np_call_localret_ent(string__pad_left_4_0,
		integer__digits_to_strings_3_0_i5);
MR_def_label(integer__digits_to_strings_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(integer__digits_to_strings_3_0,
		integer__digits_to_strings_3_0_i6);
MR_def_label(integer__digits_to_strings_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__int__div_2_0);

MR_BEGIN_MODULE(integer_module26)
	MR_init_entry1(fn__integer__printbase_pos_int_to_digits_2_2_0);
	MR_init_label4(fn__integer__printbase_pos_int_to_digits_2_2_0,14,2,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__printbase_pos_int_to_digits_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(fn__integer__printbase_pos_int_to_digits_2_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__printbase_pos_int_to_digits_2_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(fn__integer__printbase_pos_int_to_digits_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = (MR_Integer) 10000;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__integer__printbase_pos_int_to_digits_2_2_0_i4);
MR_def_label(fn__integer__printbase_pos_int_to_digits_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_tempr1 - ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(4)));
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10000;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__integer__printbase_pos_int_to_digits_2_2_0_i5);
MR_def_label(fn__integer__printbase_pos_int_to_digits_2_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__integer__printbase_pos_int_to_digits_2_2_0_i14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module27)
	MR_init_entry1(integer__printbase_add_pairs_equal_4_0);
	MR_init_label5(integer__printbase_add_pairs_equal_4_0,3,22,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(integer__printbase_add_pairs_equal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(integer__printbase_add_pairs_equal_4_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(integer__printbase_add_pairs_equal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(integer__printbase_add_pairs_equal_4_0_i22);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(integer__printbase_add_pairs_equal_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r2, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(integer__printbase_add_pairs_equal_4_0,
		integer__printbase_add_pairs_equal_4_0_i6);
MR_def_label(integer__printbase_add_pairs_equal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(1) = (((MR_Integer) MR_tempr1 + (MR_Integer) MR_sv(1)) + (MR_Integer) MR_r1);
	MR_sv(3) = (MR_Integer) 10000;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		integer__printbase_add_pairs_equal_4_0_i7);
MR_def_label(integer__printbase_add_pairs_equal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_tempr1 - ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(3)));
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10000;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		integer__printbase_add_pairs_equal_4_0_i8);
MR_def_label(integer__printbase_add_pairs_equal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module28)
	MR_init_entry1(integer__printbase_add_pairs_4_0);
	MR_init_label8(integer__printbase_add_pairs_4_0,2,7,8,9,4,14,15,16)
	MR_init_label1(integer__printbase_add_pairs_4_0,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(integer__printbase_add_pairs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_r1;
	MR_r5 = MR_ctfield(0, MR_tempr2, 1);
	MR_r6 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_r6 != MR_r4)) {
		MR_GOTO_LAB(integer__printbase_add_pairs_4_0_i2);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(integer__printbase_add_pairs_equal_4_0);
	}
MR_def_label(integer__printbase_add_pairs_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(integer__printbase_add_pairs_4_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(integer__printbase_add_pairs_4_0_i4);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_localcall_lab(integer__printbase_add_pairs_4_0,
		integer__printbase_add_pairs_4_0_i7);
MR_def_label(integer__printbase_add_pairs_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_r1);
	MR_sv(3) = (MR_Integer) 10000;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		integer__printbase_add_pairs_4_0_i8);
MR_def_label(integer__printbase_add_pairs_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = ((MR_Integer) MR_tempr1 - ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(3)));
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10000;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		integer__printbase_add_pairs_4_0_i9);
MR_def_label(integer__printbase_add_pairs_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(integer__printbase_add_pairs_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 <= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(integer__printbase_add_pairs_4_0_i11);
	}
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(integer__printbase_add_pairs_4_0_i11);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_r6 - (MR_Integer) 1);
	MR_tempr2 = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_localcall_lab(integer__printbase_add_pairs_4_0,
		integer__printbase_add_pairs_4_0_i14);
MR_def_label(integer__printbase_add_pairs_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Integer) 10000;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__int__div_2_0,
		integer__printbase_add_pairs_4_0_i15);
MR_def_label(integer__printbase_add_pairs_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_tempr1 - ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(3)));
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10000;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		integer__printbase_add_pairs_4_0_i16);
MR_def_label(integer__printbase_add_pairs_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(integer__printbase_add_pairs_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("integer.printbase_add_pairs", 27);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module29)
	MR_init_entry1(fn__integer__mul_base_2_1_0);
	MR_init_label3(fn__integer__mul_base_2_1_0,6,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__mul_base_2_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__integer__mul_base_2_1_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(fn__integer__mul_base_2_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	break; } /* end while */
MR_def_label(fn__integer__mul_base_2_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	}
	break; } /* end while */
MR_def_label(fn__integer__mul_base_2_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module30)
	MR_init_entry1(integer__printbase_mul_by_digit_2_4_0);
	MR_init_label4(integer__printbase_mul_by_digit_2_4_0,15,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(integer__printbase_mul_by_digit_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(integer__printbase_mul_by_digit_2_4_0_i15);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(integer__printbase_mul_by_digit_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(integer__printbase_mul_by_digit_2_4_0,
		integer__printbase_mul_by_digit_2_4_0_i4);
MR_def_label(integer__printbase_mul_by_digit_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(1) = (((MR_Integer) MR_sv(1) * (MR_Integer) MR_tempr1) + (MR_Integer) MR_r1);
	MR_sv(3) = (MR_Integer) 10000;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		integer__printbase_mul_by_digit_2_4_0_i5);
MR_def_label(integer__printbase_mul_by_digit_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_tempr1 - ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(3)));
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10000;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		integer__printbase_mul_by_digit_2_4_0_i6);
MR_def_label(integer__printbase_mul_by_digit_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module31)
	MR_init_entry1(fn__integer__printbase_pos_mul_list_3_0);
	MR_init_label8(fn__integer__printbase_pos_mul_list_3_0,47,3,5,7,9,10,16,17)
	MR_init_label2(fn__integer__printbase_pos_mul_list_3_0,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__printbase_pos_mul_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(fn__integer__printbase_pos_mul_list_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__integer__printbase_pos_mul_list_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(fn__integer__printbase_pos_mul_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__integer__printbase_pos_mul_list_3_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(integer__printbase_mul_by_digit_2_4_0,
		fn__integer__printbase_pos_mul_list_3_0_i9);
MR_def_label(fn__integer__printbase_pos_mul_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = ((MR_Integer) MR_ctfield(0, MR_r2, 0) + (MR_Integer) 1);
	MR_r1 = MR_r4;
	}
	MR_np_call_localret_ent(fn__integer__mul_base_2_1_0,
		fn__integer__printbase_pos_mul_list_3_0_i7);
MR_def_label(fn__integer__printbase_pos_mul_list_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(integer__printbase_mul_by_digit_2_4_0,
		fn__integer__printbase_pos_mul_list_3_0_i9);
MR_def_label(fn__integer__printbase_pos_mul_list_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__printbase_pos_mul_list_3_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	}
	MR_np_call_localret_ent(integer__printbase_add_pairs_4_0,
		fn__integer__printbase_pos_mul_list_3_0_i16);
MR_def_label(fn__integer__printbase_pos_mul_list_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(integer__printbase_add_pairs_4_0,
		fn__integer__printbase_pos_mul_list_3_0_i16);
MR_def_label(fn__integer__printbase_pos_mul_list_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) <= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(fn__integer__printbase_pos_mul_list_3_0_i17);
	}
	MR_r3 = MR_sv(1);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r7 = MR_r2;
	MR_r2 = MR_r6;
	MR_r4 = MR_r7;
	MR_r5 = MR_sv(2);
	MR_GOTO_LAB(fn__integer__printbase_pos_mul_list_3_0_i18);
MR_def_label(fn__integer__printbase_pos_mul_list_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(4);
	}
MR_def_label(fn__integer__printbase_pos_mul_list_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__integer__printbase_pos_mul_list_3_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__integer__printbase_pos_mul_list_3_0_i47);
	}
MR_def_label(fn__integer__printbase_pos_mul_list_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__integer__printbase_pos_mul_list_3_0_i47);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module32)
	MR_init_entry1(fn__integer__printbase_rep_1_3_0);
	MR_init_label8(fn__integer__printbase_rep_1_3_0,38,3,4,8,10,11,12,13)
	MR_init_label1(fn__integer__printbase_rep_1_3_0,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__printbase_rep_1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(fn__integer__printbase_rep_1_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__integer__printbase_rep_1_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(fn__integer__printbase_rep_1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr3 = MR_r3;
	MR_r4 = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr4, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr4, 0);
	MR_tempr5 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(fn__integer__printbase_rep_1_3_0_i4);
	}
	MR_sv(1) = MR_tempr5;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_ctfield(0, MR_tempr5, 1);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__integer__printbase_pos_mul_list_3_0,
		fn__integer__printbase_rep_1_3_0_i8);
MR_def_label(fn__integer__printbase_rep_1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__integer__printbase_pos_mul_list_3_0,
		fn__integer__printbase_rep_1_3_0_i8);
MR_def_label(fn__integer__printbase_rep_1_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__integer__printbase_pos_int_to_digits_2_2_0,
		fn__integer__printbase_rep_1_3_0_i10);
MR_def_label(fn__integer__printbase_rep_1_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(integer__printbase_add_pairs_4_0,
		fn__integer__printbase_rep_1_3_0_i11);
MR_def_label(fn__integer__printbase_rep_1_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) <= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(fn__integer__printbase_rep_1_3_0_i12);
	}
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_r7;
	MR_r4 = MR_r6;
	MR_r5 = MR_sv(2);
	MR_GOTO_LAB(fn__integer__printbase_rep_1_3_0_i13);
MR_def_label(fn__integer__printbase_rep_1_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
MR_def_label(fn__integer__printbase_rep_1_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__integer__printbase_rep_1_3_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__integer__printbase_rep_1_3_0_i38);
	}
MR_def_label(fn__integer__printbase_rep_1_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__integer__printbase_rep_1_3_0_i38);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_3_2);
MR_decl_entry(fn__string__append_list_1_0);

MR_BEGIN_MODULE(integer_module33)
	MR_init_entry1(fn__integer__to_string_1_0);
	MR_init_label8(fn__integer__to_string_1_0,3,2,4,6,8,9,12,13)
	MR_init_label3(fn__integer__to_string_1_0,15,11,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_GE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__integer__to_string_1_0_i2);
	}
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(integer__neg_list_2_0,
		fn__integer__to_string_1_0_i3);
MR_def_label(fn__integer__to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_GOTO_LAB(fn__integer__to_string_1_0_i4);
MR_def_label(fn__integer__to_string_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_sv(2) = MR_r2;
MR_def_label(fn__integer__to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__integer__to_string_1_0_i6);
	}
	MR_r2 = (MR_Word) MR_string_const("0", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(string__append_3_2);
MR_def_label(fn__integer__to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Integer) 16384;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__integer__printbase_pos_int_to_digits_2_2_0,
		fn__integer__to_string_1_0_i8);
MR_def_label(fn__integer__to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__integer__printbase_rep_1_3_0,
		fn__integer__to_string_1_0_i9);
MR_def_label(fn__integer__to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__integer__to_string_1_0_i11);
	}
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		fn__integer__to_string_1_0_i12);
MR_def_label(fn__integer__to_string_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(integer__digits_to_strings_3_0,
		fn__integer__to_string_1_0_i13);
MR_def_label(fn__integer__to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		fn__integer__to_string_1_0_i15);
MR_def_label(fn__integer__to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(string__append_3_2);
	}
MR_def_label(fn__integer__to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("integer.digits_to_string/1: empty list", 38);
	MR_np_call_localret_ent(require__error_1_0,
		fn__integer__to_string_1_0_i5);
MR_def_label(fn__integer__to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(string__append_3_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module34)
	MR_init_entry1(integer__mul_by_digit_2_4_0);
	MR_init_label3(integer__mul_by_digit_2_4_0,14,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(integer__mul_by_digit_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(integer__mul_by_digit_2_4_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(integer__mul_by_digit_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(integer__mul_by_digit_2_4_0,
		integer__mul_by_digit_2_4_0_i4);
MR_def_label(integer__mul_by_digit_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = (((MR_Integer) MR_tempr1 * (MR_Integer) MR_sv(2)) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 14;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		integer__mul_by_digit_2_4_0_i5);
MR_def_label(integer__mul_by_digit_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_sv(2) & (MR_Integer) 16383);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module35)
	MR_init_entry1(fn__integer__mul_by_digit_2_0);
	MR_init_label2(fn__integer__mul_by_digit_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__mul_by_digit_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r2, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_np_call_localret_ent(integer__mul_by_digit_2_4_0,
		fn__integer__mul_by_digit_2_0_i2);
MR_def_label(fn__integer__mul_by_digit_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__mul_by_digit_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_decr_sp_and_return(2);
	}
MR_def_label(fn__integer__mul_by_digit_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_digit_1_0);

MR_BEGIN_MODULE(integer_module36)
	MR_init_entry1(fn__integer__string_to_integer_acc_2_0);
	MR_init_label8(fn__integer__string_to_integer_acc_2_0,47,4,7,8,9,15,16,17)
	MR_init_label3(fn__integer__string_to_integer_acc_2_0,18,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__string_to_integer_acc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__integer__string_to_integer_acc_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__integer__string_to_integer_acc_2_0_i2);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		fn__integer__string_to_integer_acc_2_0_i4);
MR_def_label(fn__integer__string_to_integer_acc_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__integer__string_to_integer_acc_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__fn__integer__string_to_integer_acc_2_0
	Character = MR_sv(2);
{
#line 47 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 2915 "integer.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__fn__integer__string_to_integer_acc_2_0
	Character = (MR_Integer) 48;
{
#line 47 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 2929 "integer.c"
	MR_tempr2 = Int;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_tempr2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	}
	MR_np_call_localret_ent(fn__integer__pos_int_to_digits_2_2_0,
		fn__integer__string_to_integer_acc_2_0_i7);
MR_def_label(fn__integer__string_to_integer_acc_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Integer) 10;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(integer__mul_by_digit_2_4_0,
		fn__integer__string_to_integer_acc_2_0_i8);
MR_def_label(fn__integer__string_to_integer_acc_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__string_to_integer_acc_2_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	}
	MR_np_call_localret_ent(integer__add_pairs_4_0,
		fn__integer__string_to_integer_acc_2_0_i15);
MR_def_label(fn__integer__string_to_integer_acc_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(integer__add_pairs_4_0,
		fn__integer__string_to_integer_acc_2_0_i15);
MR_def_label(fn__integer__string_to_integer_acc_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) <= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(fn__integer__string_to_integer_acc_2_0_i16);
	}
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r6 = MR_r2;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_sv(1);
	MR_GOTO_LAB(fn__integer__string_to_integer_acc_2_0_i17);
MR_def_label(fn__integer__string_to_integer_acc_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(2);
	}
MR_def_label(fn__integer__string_to_integer_acc_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__integer__string_to_integer_acc_2_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__integer__string_to_integer_acc_2_0_i47);
	}
MR_def_label(fn__integer__string_to_integer_acc_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__integer__string_to_integer_acc_2_0_i47);
	}
MR_def_label(fn__integer__string_to_integer_acc_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(fn__integer__string_to_integer_acc_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module37)
	MR_init_entry1(fn__integer__string_to_integer_1_0);
	MR_init_label6(fn__integer__string_to_integer_1_0,5,7,3,8,39,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__string_to_integer_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__integer__string_to_integer_1_0_i39);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_r3,45)) {
		MR_GOTO_LAB(fn__integer__string_to_integer_1_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	}
	MR_np_localcall_lab(fn__integer__string_to_integer_1_0,
		fn__integer__string_to_integer_1_0_i5);
MR_def_label(fn__integer__string_to_integer_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__integer__string_to_integer_1_0_i1);
	}
	MR_r1 = (MR_Integer) -1;
	MR_np_call_localret_ent(fn__integer__big_sign_2_0,
		fn__integer__string_to_integer_1_0_i7);
MR_def_label(fn__integer__string_to_integer_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(fn__integer__string_to_integer_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,43)) {
		MR_GOTO_LAB(fn__integer__string_to_integer_1_0_i8);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(fn__integer__string_to_integer_acc_2_0);
MR_def_label(fn__integer__string_to_integer_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(fn__integer__string_to_integer_acc_2_0);
MR_def_label(fn__integer__string_to_integer_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(fn__integer__string_to_integer_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_0);

MR_BEGIN_MODULE(integer_module38)
	MR_init_entry1(fn__integer__from_string_1_0);
	MR_init_label1(fn__integer__from_string_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__from_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		fn__integer__from_string_1_0_i2);
MR_def_label(fn__integer__from_string_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__integer__string_to_integer_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__require__func_error_1_0);

MR_BEGIN_MODULE(integer_module39)
	MR_init_entry1(fn__integer__det_from_string_1_0);
	MR_init_label3(fn__integer__det_from_string_1_0,3,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__det_from_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		fn__integer__det_from_string_1_0_i3);
MR_def_label(fn__integer__det_from_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__integer__string_to_integer_1_0,
		fn__integer__det_from_string_1_0_i4);
MR_def_label(fn__integer__det_from_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__integer__det_from_string_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__integer__det_from_string_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(integer, integer);
	MR_r2 = (MR_Word) MR_string_const("integer.det_from_string/1: cannot convert to integer.", 53);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module40)
	MR_init_entry1(fn__f_105_110_116_101_103_101_114_95_95_45_1_0);
	MR_init_label1(fn__f_105_110_116_101_103_101_114_95_95_45_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_101_103_101_114_95_95_45_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = ((MR_Integer) 0 - (MR_Integer) MR_ctfield(0, MR_r1, 0));
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(integer__neg_list_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_45_1_0_i2);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_45_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module41)
	MR_init_entry1(fn__integer__from_base_string_2_0);
	MR_init_label7(fn__integer__from_base_string_2_0,4,8,10,12,5,14,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__from_base_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__integer__from_base_string_2_0
	Str = (MR_String) MR_r2;
{
#line 210 "string.opt"

    Length = strlen(Str);
;}
#line 3245 "integer.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Index;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__integer__from_base_string_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Index = (MR_Integer) 0;
	Length = MR_tempr1;
{
#line 772 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);
;}
#line 3270 "integer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__integer__from_base_string_2_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__fn__integer__from_base_string_2_0
	Str = (MR_String) MR_r2;
	Index = (MR_Integer) 0;
{
#line 425 "string.opt"

    Ch = Str[Index];
;}
#line 3288 "integer.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__int_to_integer_1_0,
		fn__integer__from_base_string_2_0_i4);
MR_def_label(fn__integer__from_base_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__integer__from_base_string_2_0
	Str = (MR_String) MR_sv(1);
{
#line 210 "string.opt"

    Length = strlen(Str);
;}
#line 3311 "integer.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr1;
	if (MR_INT_NE(MR_sv(2),45)) {
		MR_GOTO_LAB(fn__integer__from_base_string_2_0_i5);
	}
	if (MR_INT_LE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__integer__from_base_string_2_0_i1);
	}
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__integer__from_base_string_2_0
	Str = (MR_String) MR_sv(1);
{
#line 210 "string.opt"

    Length = strlen(Str);
;}
#line 3332 "integer.c"
	MR_tempr2 = Length;
#undef	MR_PROC_LABEL
	}
	MR_r8 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r3 = (MR_Integer) 1;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(fn__integer__from_base_string_2_0_i8);
	}
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_57_95_95_91_50_93_95_48_6_0,
		fn__integer__from_base_string_2_0_i10);
MR_def_label(fn__integer__from_base_string_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r4 = MR_r8;
	MR_np_call_localret_ent(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_57_95_95_91_50_93_95_48_6_0,
		fn__integer__from_base_string_2_0_i10);
MR_def_label(fn__integer__from_base_string_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__integer__from_base_string_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = ((MR_Integer) 0 - (MR_Integer) MR_ctfield(0, MR_tempr1, 0));
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(integer__neg_list_2_0,
		fn__integer__from_base_string_2_0_i12);
MR_def_label(fn__integer__from_base_string_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(fn__integer__from_base_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),43)) {
		MR_GOTO_LAB(fn__integer__from_base_string_2_0_i14);
	}
	if (MR_INT_LE(MR_r6,1)) {
		MR_GOTO_LAB(fn__integer__from_base_string_2_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = ((MR_Integer) MR_r6 - (MR_Integer) 1);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_95_104_111_56_95_95_91_50_93_95_48_6_0);
MR_def_label(fn__integer__from_base_string_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r6;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_95_104_111_56_95_95_91_50_93_95_48_6_0);
MR_def_label(fn__integer__from_base_string_2_0,1)
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


MR_BEGIN_MODULE(integer_module42)
	MR_init_entry1(fn__integer__det_from_base_string_2_0);
	MR_init_label2(fn__integer__det_from_base_string_2_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__det_from_base_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__integer__from_base_string_2_0,
		fn__integer__det_from_base_string_2_0_i3);
MR_def_label(fn__integer__det_from_base_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__integer__det_from_base_string_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__integer__det_from_base_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("integer.det_from_base_string", 28);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module43)
	MR_init_entry1(fn__f_105_110_116_101_103_101_114_95_95_43_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_101_103_101_114_95_95_43_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module44)
	MR_init_entry1(fn__f_105_110_116_101_103_101_114_95_95_43_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_101_103_101_114_95_95_43_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__integer__big_plus_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module45)
	MR_init_entry1(fn__integer__pos_mul_list_3_0);
	MR_init_label8(fn__integer__pos_mul_list_3_0,47,3,5,7,9,10,16,17)
	MR_init_label2(fn__integer__pos_mul_list_3_0,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__pos_mul_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(fn__integer__pos_mul_list_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__integer__pos_mul_list_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(fn__integer__pos_mul_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__integer__pos_mul_list_3_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(integer__mul_by_digit_2_4_0,
		fn__integer__pos_mul_list_3_0_i9);
MR_def_label(fn__integer__pos_mul_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = ((MR_Integer) MR_ctfield(0, MR_r2, 0) + (MR_Integer) 1);
	MR_r1 = MR_r4;
	}
	MR_np_call_localret_ent(fn__integer__mul_base_2_1_0,
		fn__integer__pos_mul_list_3_0_i7);
MR_def_label(fn__integer__pos_mul_list_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(integer__mul_by_digit_2_4_0,
		fn__integer__pos_mul_list_3_0_i9);
MR_def_label(fn__integer__pos_mul_list_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__pos_mul_list_3_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	}
	MR_np_call_localret_ent(integer__add_pairs_4_0,
		fn__integer__pos_mul_list_3_0_i16);
MR_def_label(fn__integer__pos_mul_list_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(integer__add_pairs_4_0,
		fn__integer__pos_mul_list_3_0_i16);
MR_def_label(fn__integer__pos_mul_list_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) <= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(fn__integer__pos_mul_list_3_0_i17);
	}
	MR_r3 = MR_sv(1);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r7 = MR_r2;
	MR_r2 = MR_r6;
	MR_r4 = MR_r7;
	MR_r5 = MR_sv(2);
	MR_GOTO_LAB(fn__integer__pos_mul_list_3_0_i18);
MR_def_label(fn__integer__pos_mul_list_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(4);
	}
MR_def_label(fn__integer__pos_mul_list_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__integer__pos_mul_list_3_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__integer__pos_mul_list_3_0_i47);
	}
MR_def_label(fn__integer__pos_mul_list_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__integer__pos_mul_list_3_0_i47);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module46)
	MR_init_entry1(fn__integer__pos_mul_2_0);
	MR_init_label1(fn__integer__pos_mul_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__pos_mul_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_r4 = MR_ctfield(0, MR_tempr4, 1);
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 0);
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(fn__integer__pos_mul_2_0_i2);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_tempr3 = MR_tempr4;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr3;
	MR_np_tailcall_ent(fn__integer__pos_mul_list_3_0);
	}
MR_def_label(fn__integer__pos_mul_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r4;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(fn__integer__pos_mul_list_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module47)
	MR_init_entry1(fn__integer__big_mul_2_0);
	MR_init_label5(fn__integer__big_mul_2_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__big_mul_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__integer__signum_1_0,
		fn__integer__big_mul_2_0_i2);
MR_def_label(fn__integer__big_mul_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(fn__integer__signum_1_0,
		fn__integer__big_mul_2_0_i3);
MR_def_label(fn__integer__big_mul_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(3) * (MR_Integer) MR_r1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__big_abs_1_0,
		fn__integer__big_mul_2_0_i4);
MR_def_label(fn__integer__big_mul_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__big_abs_1_0,
		fn__integer__big_mul_2_0_i5);
MR_def_label(fn__integer__big_mul_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__pos_mul_2_0,
		fn__integer__big_mul_2_0_i6);
MR_def_label(fn__integer__big_mul_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__integer__big_sign_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module48)
	MR_init_entry1(fn__f_105_110_116_101_103_101_114_95_95_42_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_101_103_101_114_95_95_42_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__integer__big_mul_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

MR_BEGIN_MODULE(integer_module49)
	MR_init_entry1(fn__integer__head_1_0);
	MR_init_label1(fn__integer__head_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__head_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__integer__head_1_0_i2);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_proceed();
	}
MR_def_label(fn__integer__head_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("integer.head: []", 16);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module50)
	MR_init_entry1(fn__integer__head_tail_1_0);
	MR_init_label1(fn__integer__head_tail_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__head_tail_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__integer__head_tail_1_0_i2);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__integer__head_tail_1_0_i2);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_proceed();
	}
MR_def_label(fn__integer__head_tail_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("integer.head_tail: []", 21);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module51)
	MR_init_entry1(fn__integer__tail_1_0);
	MR_init_label1(fn__integer__tail_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__tail_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__integer__tail_1_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_ctfield(0, MR_tempr3, 0) - (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(fn__integer__tail_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(integer, integer);
	MR_r2 = (MR_Word) MR_string_const("integer.tail: []", 16);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(integer_module52)
	MR_init_entry1(fn__integer__integer_append_2_0);
	MR_init_label1(fn__integer__integer_append_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__integer_append_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_r1;
	MR_sv(1) = ((MR_Integer) MR_ctfield(0, MR_tempr3, 0) + (MR_Integer) 1);
	MR_tempr2 = MR_tempr3;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__append_3_1,
		fn__integer__integer_append_2_0_i3);
MR_def_label(fn__integer__integer_append_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module53)
	MR_init_entry1(fn__integer__integer_prepend_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__integer_prepend_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_ctfield(0, MR_tempr3, 0) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module54)
	MR_init_entry1(integer__pos_geq_2_0);
	MR_init_label2(integer__pos_geq_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(integer__pos_geq_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(__Compare___integer__integer_0_0,
		integer__pos_geq_2_0_i2);
MR_def_label(integer__pos_geq_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(integer__pos_geq_2_0_i3);
	}
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 2);
	MR_decr_sp_and_return(1);
MR_def_label(integer__pos_geq_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module55)
	MR_init_entry1(integer__quot_rem_2_5_0);
	MR_init_label8(integer__quot_rem_2_5_0,3,7,10,9,13,4,2,20)
	MR_init_label8(integer__quot_rem_2_5_0,21,22,19,24,25,26,28,31)
	MR_init_label8(integer__quot_rem_2_5_0,29,33,36,34,38,41,44,45)
	MR_init_label3(integer__quot_rem_2_5_0,46,47,42)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(integer__quot_rem_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Compare___integer__integer_0_0,
		integer__quot_rem_2_5_0_i3);
MR_def_label(integer__quot_rem_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(integer__quot_rem_2_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(integer__quot_rem_2_5_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_ctfield(0, MR_tempr1, 0) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__append_3_1,
		integer__quot_rem_2_5_0_i7);
MR_def_label(integer__quot_rem_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(integer__quot_rem_2_5_0_i10);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = ((MR_Integer) MR_ctfield(0, MR_tempr4, 0) - (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r1 = MR_tempr2;
	}
	MR_np_localcall_lab(integer__quot_rem_2_5_0,
		integer__quot_rem_2_5_0_i13);
MR_def_label(integer__quot_rem_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(integer, integer);
	MR_r2 = (MR_Word) MR_string_const("integer.tail: []", 16);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		integer__quot_rem_2_5_0_i9);
MR_def_label(integer__quot_rem_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(integer__quot_rem_2_5_0,
		integer__quot_rem_2_5_0_i13);
MR_def_label(integer__quot_rem_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_ctfield(0, MR_tempr3, 0) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(integer__quot_rem_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(integer__quot_rem_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr2 = MR_ctfield(0, MR_sv(3), 0);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(integer__quot_rem_2_5_0_i19);
	}
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__integer__head_1_0,
		integer__quot_rem_2_5_0_i20);
MR_def_label(integer__quot_rem_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = ((MR_Integer) MR_r1 * (MR_Integer) 16384);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__integer__head_tail_1_0,
		integer__quot_rem_2_5_0_i21);
MR_def_label(integer__quot_rem_2_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__integer__head_1_0,
		integer__quot_rem_2_5_0_i22);
MR_def_label(integer__quot_rem_2_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		integer__quot_rem_2_5_0_i26);
MR_def_label(integer__quot_rem_2_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__integer__head_1_0,
		integer__quot_rem_2_5_0_i24);
MR_def_label(integer__quot_rem_2_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__integer__head_1_0,
		integer__quot_rem_2_5_0_i25);
MR_def_label(integer__quot_rem_2_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		integer__quot_rem_2_5_0_i26);
MR_def_label(integer__quot_rem_2_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__integer__mul_by_digit_2_0,
		integer__quot_rem_2_5_0_i28);
MR_def_label(integer__quot_rem_2_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(integer__pos_geq_2_0,
		integer__quot_rem_2_5_0_i31);
MR_def_label(integer__quot_rem_2_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(integer__quot_rem_2_5_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__integer__pos_minus_2_0,
		integer__quot_rem_2_5_0_i41);
MR_def_label(integer__quot_rem_2_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__integer__pos_minus_2_0,
		integer__quot_rem_2_5_0_i33);
MR_def_label(integer__quot_rem_2_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(integer__pos_geq_2_0,
		integer__quot_rem_2_5_0_i36);
MR_def_label(integer__quot_rem_2_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(integer__quot_rem_2_5_0_i34);
	}
	MR_r1 = MR_sv(1);
	MR_sv(4) = ((MR_Integer) MR_sv(4) - (MR_Integer) 1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__integer__pos_minus_2_0,
		integer__quot_rem_2_5_0_i41);
MR_def_label(integer__quot_rem_2_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_sv(4) = ((MR_Integer) MR_sv(4) - (MR_Integer) 2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__integer__pos_minus_2_0,
		integer__quot_rem_2_5_0_i38);
MR_def_label(integer__quot_rem_2_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__pos_minus_2_0,
		integer__quot_rem_2_5_0_i41);
MR_def_label(integer__quot_rem_2_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(integer__quot_rem_2_5_0_i42);
	}
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__integer__integer_append_2_0,
		integer__quot_rem_2_5_0_i44);
MR_def_label(integer__quot_rem_2_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__integer__tail_1_0,
		integer__quot_rem_2_5_0_i45);
MR_def_label(integer__quot_rem_2_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_localcall_lab(integer__quot_rem_2_5_0,
		integer__quot_rem_2_5_0_i46);
MR_def_label(integer__quot_rem_2_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__integer_prepend_2_0,
		integer__quot_rem_2_5_0_i47);
MR_def_label(integer__quot_rem_2_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(integer__quot_rem_2_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_math__type_ctor_info_domain_error_0;
MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(integer_module56)
	MR_init_entry1(fn__integer__div_by_digit_2_3_0);
	MR_init_label6(fn__integer__div_by_digit_2_3_0,4,3,7,9,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__div_by_digit_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__integer__div_by_digit_2_3_0_i3);
	}
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__integer__div_by_digit_2_3_0_i4);
MR_def_label(fn__integer__div_by_digit_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__integer__div_by_digit_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__integer__div_by_digit_2_3_0_i7);
MR_def_label(fn__integer__div_by_digit_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__integer__div_by_digit_2_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 245 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 4344 "integer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__integer__div_by_digit_2_3_0_i9);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__integer__div_by_digit_2_3_0_i9);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("int.rem: division by zero", 25);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__integer__div_by_digit_2_3_0_i14);
MR_def_label(fn__integer__div_by_digit_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_sv(5) = MR_r1;
	MR_r1 = ((((MR_Integer) MR_sv(1) % (MR_Integer) MR_r3) * (MR_Integer) 16384) + (MR_Integer) MR_sv(3));
MR_def_label(fn__integer__div_by_digit_2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(fn__integer__div_by_digit_2_3_0,
		fn__integer__div_by_digit_2_3_0_i15);
MR_def_label(fn__integer__div_by_digit_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_ctfield(0, MR_tempr3, 0) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module57)
	MR_init_entry1(fn__integer__div_by_digit_1_3_0);
	MR_init_label8(fn__integer__div_by_digit_1_3_0,76,4,5,3,11,15,79,12)
	MR_init_label3(fn__integer__div_by_digit_1_3_0,23,28,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__div_by_digit_1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(fn__integer__div_by_digit_1_3_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__integer__div_by_digit_1_3_0_i3);
	}
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__integer__div_by_digit_1_3_0_i4);
MR_def_label(fn__integer__div_by_digit_1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__div_by_digit_1_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_decr_sp_and_return(6);
MR_def_label(fn__integer__div_by_digit_1_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__integer__div_by_digit_1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__integer__div_by_digit_1_3_0_i11);
MR_def_label(fn__integer__div_by_digit_1_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__div_by_digit_1_3_0_i12);
	}
	{
#define	MR_PROC_LABEL	mercury__fn__integer__div_by_digit_1_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 245 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 4464 "integer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__integer__div_by_digit_1_3_0_i15);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__integer__div_by_digit_1_3_0_i15);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("int.rem: division by zero", 25);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__integer__div_by_digit_1_3_0_i79);
MR_def_label(fn__integer__div_by_digit_1_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r1 = ((((MR_Integer) MR_sv(1) % (MR_Integer) MR_r3) * (MR_Integer) 16384) + (MR_Integer) MR_sv(3));
MR_def_label(fn__integer__div_by_digit_1_3_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(fn__integer__div_by_digit_1_3_0_i76);
MR_def_label(fn__integer__div_by_digit_1_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__integer__div_by_digit_1_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 245 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 4502 "integer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__integer__div_by_digit_1_3_0_i23);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__integer__div_by_digit_1_3_0_i23);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("int.rem: division by zero", 25);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__integer__div_by_digit_1_3_0_i28);
MR_def_label(fn__integer__div_by_digit_1_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_sv(5) = MR_r1;
	MR_r1 = ((((MR_Integer) MR_sv(1) % (MR_Integer) MR_r3) * (MR_Integer) 16384) + (MR_Integer) MR_sv(3));
MR_def_label(fn__integer__div_by_digit_1_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__integer__div_by_digit_2_3_0,
		fn__integer__div_by_digit_1_3_0_i29);
MR_def_label(fn__integer__div_by_digit_1_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_ctfield(0, MR_tempr3, 0) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module58)
	MR_init_entry1(fn__integer__div_by_digit_2_0);
	MR_init_label1(fn__integer__div_by_digit_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__div_by_digit_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__integer__div_by_digit_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
MR_def_label(fn__integer__div_by_digit_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_r3;
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_ctfield(1, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(fn__integer__div_by_digit_1_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module59)
	MR_init_entry1(integer__quot_rem_4_0);
	MR_init_label8(integer__quot_rem_4_0,8,13,14,17,23,25,30,31)
	MR_init_label8(integer__quot_rem_4_0,34,2,41,44,46,48,49,54)
	MR_init_label7(integer__quot_rem_4_0,55,56,62,63,45,65,67)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(integer__quot_rem_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(integer__quot_rem_4_0_i2);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(integer__quot_rem_4_0_i2);
	}
	MR_tempr2 = MR_ctfield(0, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(integer__quot_rem_4_0_i2);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(integer__quot_rem_4_0_i2);
	}
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	{
#define	MR_PROC_LABEL	mercury__integer__quot_rem_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 245 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 4631 "integer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(integer__quot_rem_4_0_i8);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(integer__quot_rem_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("int.\'//\': division by zero", 26);
	}
	MR_np_call_localret_ent(exception__throw_1_0,
		integer__quot_rem_4_0_i13);
MR_def_label(integer__quot_rem_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) / (MR_Integer) MR_sv(3));
MR_def_label(integer__quot_rem_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(integer__quot_rem_4_0_i14);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(integer__quot_rem_4_0_i23);
MR_def_label(integer__quot_rem_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(integer__quot_rem_4_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_GOTO_LAB(integer__quot_rem_4_0_i23);
	}
MR_def_label(integer__quot_rem_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) -1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	}
MR_def_label(integer__quot_rem_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__integer__quot_rem_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 245 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 4700 "integer.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(integer__quot_rem_4_0_i25);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(integer__quot_rem_4_0_i25);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("int.rem: division by zero", 25);
	MR_np_call_localret_ent(exception__throw_1_0,
		integer__quot_rem_4_0_i30);
MR_def_label(integer__quot_rem_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) % (MR_Integer) MR_sv(3));
MR_def_label(integer__quot_rem_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(integer__quot_rem_4_0_i31);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_decr_sp_and_return(5);
MR_def_label(integer__quot_rem_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(integer__quot_rem_4_0_i34);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(integer__quot_rem_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) -1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(integer__quot_rem_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(integer__quot_rem_4_0_i41);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_GOTO_LAB(integer__quot_rem_4_0_i44);
	}
MR_def_label(integer__quot_rem_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("integer.head: []", 16);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		integer__quot_rem_4_0_i44);
MR_def_label(integer__quot_rem_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,8192)) {
		MR_GOTO_LAB(integer__quot_rem_4_0_i45);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 16384;
	MR_r2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		integer__quot_rem_4_0_i46);
MR_def_label(integer__quot_rem_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(integer__mul_by_digit_2_4_0,
		integer__quot_rem_4_0_i48);
MR_def_label(integer__quot_rem_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(integer__quot_rem_4_0_i49);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_r4 = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_GOTO_LAB(integer__quot_rem_4_0_i54);
	}
MR_def_label(integer__quot_rem_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
MR_def_label(integer__quot_rem_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(integer__mul_by_digit_2_4_0,
		integer__quot_rem_4_0_i55);
MR_def_label(integer__quot_rem_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(integer__quot_rem_4_0_i56);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(integer__quot_rem_2_5_0,
		integer__quot_rem_4_0_i62);
MR_def_label(integer__quot_rem_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(integer__quot_rem_2_5_0,
		integer__quot_rem_4_0_i62);
MR_def_label(integer__quot_rem_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__div_by_digit_2_0,
		integer__quot_rem_4_0_i63);
MR_def_label(integer__quot_rem_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__decap_1_0,
		integer__quot_rem_4_0_i67);
MR_def_label(integer__quot_rem_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(integer__quot_rem_2_5_0,
		integer__quot_rem_4_0_i65);
MR_def_label(integer__quot_rem_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__integer__decap_1_0,
		integer__quot_rem_4_0_i67);
MR_def_label(integer__quot_rem_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module60)
	MR_init_entry1(integer__big_quot_rem_4_0);
	MR_init_label7(integer__big_quot_rem_4_0,2,38,9,10,11,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__integer__big_quot_rem_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(integer__big_quot_rem_4_0_i2);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(integer__big_quot_rem_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("integer.big_quot_rem: division by zero", 38);
	MR_np_tailcall_ent(require__error_1_0);
	}
MR_def_label(integer__big_quot_rem_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(integer__big_quot_rem_4_0_i38);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(integer__big_quot_rem_4_0_i38);
	}
	MR_r2 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(integer__big_quot_rem_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__integer__big_abs_1_0,
		integer__big_quot_rem_4_0_i9);
MR_def_label(integer__big_quot_rem_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__big_abs_1_0,
		integer__big_quot_rem_4_0_i10);
MR_def_label(integer__big_quot_rem_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(integer__quot_rem_4_0,
		integer__big_quot_rem_4_0_i11);
MR_def_label(integer__big_quot_rem_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(2) * (MR_Integer) MR_sv(3));
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__big_sign_2_0,
		integer__big_quot_rem_4_0_i12);
MR_def_label(integer__big_quot_rem_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__big_sign_2_0,
		integer__big_quot_rem_4_0_i13);
MR_def_label(integer__big_quot_rem_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module61)
	MR_init_entry1(fn__integer__big_quot_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__big_quot_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(integer__big_quot_rem_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module62)
	MR_init_entry1(fn__f_105_110_116_101_103_101_114_95_95_47_47_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_101_103_101_114_95_95_47_47_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(integer__big_quot_rem_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module63)
	MR_init_entry1(fn__integer__big_div_2_0);
	MR_init_label5(fn__integer__big_div_2_0,2,4,5,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__big_div_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(integer__big_quot_rem_4_0,
		fn__integer__big_div_2_0_i2);
MR_def_label(fn__integer__big_div_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__integer__signum_1_0,
		fn__integer__big_div_2_0_i4);
MR_def_label(fn__integer__big_div_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__integer__signum_1_0,
		fn__integer__big_div_2_0_i5);
MR_def_label(fn__integer__big_div_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(2) * (MR_Integer) MR_r1);
	if (MR_INT_GE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__integer__big_div_2_0_i3);
	}
	MR_sv(2) = (MR_Integer) -1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,1);
	}
	MR_np_call_localret_ent(integer__neg_list_2_0,
		fn__integer__big_div_2_0_i7);
MR_def_label(fn__integer__big_div_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__integer__big_plus_2_0);
	}
MR_def_label(fn__integer__big_div_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module64)
	MR_init_entry1(fn__integer__div_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__div_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__integer__big_div_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module65)
	MR_init_entry1(fn__integer__big_rem_2_0);
	MR_init_label1(fn__integer__big_rem_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__big_rem_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(integer__big_quot_rem_4_0,
		fn__integer__big_rem_2_0_i2);
MR_def_label(fn__integer__big_rem_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module66)
	MR_init_entry1(fn__integer__rem_2_0);
	MR_init_label1(fn__integer__rem_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__rem_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(integer__big_quot_rem_4_0,
		fn__integer__rem_2_0_i2);
MR_def_label(fn__integer__rem_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module67)
	MR_init_entry1(fn__integer__big_mod_2_0);
	MR_init_label4(fn__integer__big_mod_2_0,2,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__big_mod_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(integer__big_quot_rem_4_0,
		fn__integer__big_mod_2_0_i2);
MR_def_label(fn__integer__big_mod_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__integer__signum_1_0,
		fn__integer__big_mod_2_0_i4);
MR_def_label(fn__integer__big_mod_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(fn__integer__signum_1_0,
		fn__integer__big_mod_2_0_i5);
MR_def_label(fn__integer__big_mod_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(3) * (MR_Integer) MR_r1);
	if (MR_INT_GE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__integer__big_mod_2_0_i3);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__integer__big_plus_2_0);
	}
MR_def_label(fn__integer__big_mod_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module68)
	MR_init_entry1(fn__integer__mod_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__mod_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__integer__big_mod_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module69)
	MR_init_entry1(integer__divide_with_rem_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__integer__divide_with_rem_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(integer__big_quot_rem_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module70)
	MR_init_entry1(fn__f_105_110_116_101_103_101_114_95_95_92_1_0);
	MR_init_label2(fn__f_105_110_116_101_103_101_114_95_95_92_1_0,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_101_103_101_114_95_95_92_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(fn__integer__big_plus_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_92_1_0_i4);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_92_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) 0 - (MR_Integer) MR_ctfield(0, MR_r1, 0));
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(integer__neg_list_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_92_1_0_i5);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_92_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module71)
	MR_init_entry1(integer__big_isnegative_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__integer__big_isnegative_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r1 = ((MR_Integer) MR_tempr1 < (MR_Integer) 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_105_110_116_95_95_60_60_2_0);

MR_BEGIN_MODULE(integer_module72)
	MR_init_entry1(fn__integer__rightshift_4_0);
	MR_init_label6(fn__integer__rightshift_4_0,26,5,7,8,9,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__rightshift_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r3, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(fn__integer__rightshift_4_0_i26);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
MR_def_label(fn__integer__rightshift_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_ctfield(0, MR_r3, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_GT(MR_sv(6),0)) {
		MR_GOTO_LAB(fn__integer__rightshift_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_decr_sp(7);
	MR_proceed();
	}
MR_def_label(fn__integer__rightshift_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		fn__integer__rightshift_4_0_i7);
MR_def_label(fn__integer__rightshift_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = ((MR_Integer) MR_sv(3) | (MR_Integer) MR_r1);
	MR_r1 = (MR_Integer) 16383;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		fn__integer__rightshift_4_0_i8);
MR_def_label(fn__integer__rightshift_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(4) & (MR_Integer) MR_r1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		fn__integer__rightshift_4_0_i9);
MR_def_label(fn__integer__rightshift_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_sv(6) - (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_tempr2;
	}
	MR_np_localcall_lab(fn__integer__rightshift_4_0,
		fn__integer__rightshift_4_0_i11);
MR_def_label(fn__integer__rightshift_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_ctfield(0, MR_tempr3, 0) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module73)
	MR_init_entry1(integer__zeros_3_0);
	MR_init_label2(integer__zeros_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(integer__zeros_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(integer__zeros_3_0_i2);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_np_localcall_lab(integer__zeros_3_0,
		integer__zeros_3_0_i3);
MR_def_label(integer__zeros_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(integer__zeros_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module74)
	MR_init_entry1(integer__leftshift_6_0);
	MR_init_label7(integer__leftshift_6_0,4,3,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(integer__leftshift_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(integer__leftshift_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(integer__zeros_3_0,
		integer__leftshift_6_0_i4);
MR_def_label(integer__leftshift_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(integer__leftshift_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_GT(MR_r3,0)) {
		MR_GOTO_LAB(integer__leftshift_6_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
	}
MR_def_label(integer__leftshift_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 16383;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		integer__leftshift_6_0_i6);
MR_def_label(integer__leftshift_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(4) & (MR_Integer) MR_r1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		integer__leftshift_6_0_i7);
MR_def_label(integer__leftshift_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r4 = MR_sv(5);
	}
	MR_np_localcall_lab(integer__leftshift_6_0,
		integer__leftshift_6_0_i8);
MR_def_label(integer__leftshift_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		integer__leftshift_6_0_i9);
MR_def_label(integer__leftshift_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_sv(1) | ((MR_Integer) MR_r1 & (MR_Integer) 16383));
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module75)
	MR_init_entry1(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0);
	MR_init_label8(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0,63,7,8,9,10,11,15,6)
	MR_init_label6(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0,17,18,19,20,2,64)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0_i63);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0_i64);
	}
	}
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_GE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = ((MR_Integer) 0 - (MR_Integer) MR_tempr1);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(integer__neg_list_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0_i7);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 14;
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0_i8);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Integer) 14;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0_i9);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_sv(4));
	MR_r1 = ((MR_Integer) MR_tempr1 - ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(5)));
	MR_r2 = ((MR_Integer) 14 - (MR_Integer) MR_r1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(integer__leftshift_6_0,
		fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0_i10);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0_i11);
	}
	MR_r1 = MR_r2;
	MR_sv(1) = ((MR_Integer) 0 - (MR_Integer) MR_sv(1));
	MR_np_call_localret_ent(integer__neg_list_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0_i15);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_sv(1) = ((MR_Integer) 0 - ((MR_Integer) MR_sv(1) + (MR_Integer) 1));
	}
	MR_np_call_localret_ent(integer__neg_list_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0_i15);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 14;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0_i17);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Integer) 14;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0_i18);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_sv(4));
	MR_r1 = ((MR_Integer) MR_tempr1 - ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(5)));
	MR_r2 = ((MR_Integer) 14 - (MR_Integer) MR_r1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(integer__leftshift_6_0,
		fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0_i19);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0_i64);
	}
	MR_r2 = ((MR_Integer) 0 - (MR_Integer) MR_r2);
	MR_np_tailcall_ent(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module76)
	MR_init_entry1(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0);
	MR_init_label8(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0,2,63,9,10,12,14,11,58)
	MR_init_label6(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0,8,19,21,59,20,62)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0_i2);
	}
	MR_r2 = ((MR_Integer) 0 - (MR_Integer) MR_r2);
	MR_np_tailcall_ent(fn__f_105_110_116_101_103_101_114_95_95_60_60_2_0);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0_i62);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0_i63);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0_i62);
	}
	}
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_GE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0_i8);
	}
	MR_sv(1) = MR_r2;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_101_103_101_114_95_95_92_1_0,
		fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0_i9);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 14;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0_i10);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0_i11);
	}
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Integer) 14;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0_i12);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_sv(2) - (MR_Integer) MR_sv(4));
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = ((MR_Integer) MR_sv(1) - ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(5)));
	MR_r2 = ((MR_Integer) 14 - (MR_Integer) MR_r1);
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__integer__rightshift_4_0,
		fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0_i14);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__integer__decap_1_0,
		fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0_i58);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_105_110_116_101_103_101_114_95_95_92_1_0);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 14;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0_i19);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0_i20);
	}
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Integer) 14;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0_i21);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_sv(2) - (MR_Integer) MR_sv(4));
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = ((MR_Integer) MR_sv(1) - ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(5)));
	MR_r2 = ((MR_Integer) 14 - (MR_Integer) MR_r1);
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__integer__rightshift_4_0,
		fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0_i59);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__integer__decap_1_0);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_decr_sp_and_return(6);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_62_62_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module77)
	MR_init_entry1(fn__integer__or_pairs_equal_2_0);
	MR_init_label3(fn__integer__or_pairs_equal_2_0,3,20,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__or_pairs_equal_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__integer__or_pairs_equal_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__integer__or_pairs_equal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__integer__or_pairs_equal_2_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__integer__or_pairs_equal_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = ((MR_Integer) MR_ctfield(1, MR_r1, 0) | (MR_Integer) MR_ctfield(1, MR_r2, 0));
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(fn__integer__or_pairs_equal_2_0,
		fn__integer__or_pairs_equal_2_0_i6);
MR_def_label(fn__integer__or_pairs_equal_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module78)
	MR_init_entry1(fn__integer__or_pairs_2_0);
	MR_init_label5(fn__integer__or_pairs_2_0,3,2,5,14,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__or_pairs_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_r1;
	MR_r4 = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r5 = MR_tempr1;
	if ((MR_tempr1 != MR_sv(1))) {
		MR_GOTO_LAB(fn__integer__or_pairs_2_0_i2);
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r4;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(fn__integer__or_pairs_equal_2_0,
		fn__integer__or_pairs_2_0_i3);
MR_def_label(fn__integer__or_pairs_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__integer__or_pairs_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(fn__integer__or_pairs_2_0_i5);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__integer__or_pairs_2_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_localcall_lab(fn__integer__or_pairs_2_0,
		fn__integer__or_pairs_2_0_i14);
MR_def_label(fn__integer__or_pairs_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 <= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(fn__integer__or_pairs_2_0_i11);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__integer__or_pairs_2_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_localcall_lab(fn__integer__or_pairs_2_0,
		fn__integer__or_pairs_2_0_i14);
MR_def_label(fn__integer__or_pairs_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__integer__or_pairs_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("integer.or_pairs", 16);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module79)
	MR_init_entry1(fn__integer__and_pairs_equal_2_0);
	MR_init_label3(fn__integer__and_pairs_equal_2_0,3,20,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__and_pairs_equal_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__integer__and_pairs_equal_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__integer__and_pairs_equal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__integer__and_pairs_equal_2_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__integer__and_pairs_equal_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = ((MR_Integer) MR_ctfield(1, MR_r1, 0) & (MR_Integer) MR_ctfield(1, MR_r2, 0));
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(fn__integer__and_pairs_equal_2_0,
		fn__integer__and_pairs_equal_2_0_i6);
MR_def_label(fn__integer__and_pairs_equal_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module80)
	MR_init_entry1(fn__integer__and_pairs_2_0);
	MR_init_label5(fn__integer__and_pairs_2_0,3,2,5,13,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__and_pairs_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_r1;
	MR_r4 = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r5 = MR_tempr1;
	if ((MR_tempr1 != MR_sv(1))) {
		MR_GOTO_LAB(fn__integer__and_pairs_2_0_i2);
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r4;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(fn__integer__and_pairs_equal_2_0,
		fn__integer__and_pairs_2_0_i3);
MR_def_label(fn__integer__and_pairs_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(fn__integer__and_pairs_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(fn__integer__and_pairs_2_0_i5);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__integer__and_pairs_2_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_r3, 1);
	MR_sv(1) = MR_r5;
	}
	MR_np_localcall_lab(fn__integer__and_pairs_2_0,
		fn__integer__and_pairs_2_0_i13);
MR_def_label(fn__integer__and_pairs_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 <= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(fn__integer__and_pairs_2_0_i10);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__integer__and_pairs_2_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_r5 - (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_r4, 1);
	}
	MR_np_localcall_lab(fn__integer__and_pairs_2_0,
		fn__integer__and_pairs_2_0_i13);
MR_def_label(fn__integer__and_pairs_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(fn__integer__and_pairs_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("integer.and_pairs", 17);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module81)
	MR_init_entry1(fn__integer__and_not_pairs_equal_2_0);
	MR_init_label3(fn__integer__and_not_pairs_equal_2_0,3,20,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__and_not_pairs_equal_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__integer__and_not_pairs_equal_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__integer__and_not_pairs_equal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__integer__and_not_pairs_equal_2_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__integer__and_not_pairs_equal_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = ((MR_Integer) MR_ctfield(1, MR_r1, 0) & ~((MR_Integer) MR_ctfield(1, MR_r2, 0)));
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(fn__integer__and_not_pairs_equal_2_0,
		fn__integer__and_not_pairs_equal_2_0_i6);
MR_def_label(fn__integer__and_not_pairs_equal_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module82)
	MR_init_entry1(fn__integer__and_not_pairs_2_0);
	MR_init_label6(fn__integer__and_not_pairs_2_0,3,2,8,5,13,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__and_not_pairs_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_r1;
	MR_r5 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_sv(1) != MR_r4)) {
		MR_GOTO_LAB(fn__integer__and_not_pairs_2_0_i2);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(fn__integer__and_not_pairs_equal_2_0,
		fn__integer__and_not_pairs_2_0_i3);
MR_def_label(fn__integer__and_not_pairs_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__integer__and_not_pairs_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__integer__and_not_pairs_2_0_i5);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__integer__and_not_pairs_2_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_r3, 1);
	}
	MR_np_localcall_lab(fn__integer__and_not_pairs_2_0,
		fn__integer__and_not_pairs_2_0_i8);
MR_def_label(fn__integer__and_not_pairs_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__integer__and_not_pairs_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) <= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__integer__and_not_pairs_2_0_i10);
	}
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(fn__integer__and_not_pairs_2_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_tempr2 = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_localcall_lab(fn__integer__and_not_pairs_2_0,
		fn__integer__and_not_pairs_2_0_i13);
MR_def_label(fn__integer__and_not_pairs_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__integer__and_not_pairs_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("integer.and_not_pairs", 21);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module83)
	MR_init_entry1(fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0);
	MR_init_label8(fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0,4,5,6,7,3,2,14,13)
	MR_init_label1(fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_GE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0_i2);
	}
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_GE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0_i3);
	}
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_101_103_101_114_95_95_92_1_0,
		fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0_i4);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_101_103_101_114_95_95_92_1_0,
		fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0_i5);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__or_pairs_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0_i6);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__integer__decap_1_0,
		fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0_i7);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_105_110_116_101_103_101_114_95_95_92_1_0);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__f_105_110_116_101_103_101_114_95_95_92_1_0,
		fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0_i14);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_GE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_101_103_101_114_95_95_92_1_0,
		fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0_i14);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__and_not_pairs_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0_i17);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__integer__and_pairs_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0_i17);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_47_92_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__integer__decap_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module84)
	MR_init_entry1(fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0);
	MR_init_label8(fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0,4,5,6,3,2,15,16,17)
	MR_init_label2(fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0,14,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_GE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0_i2);
	}
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_GE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0_i3);
	}
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_101_103_101_114_95_95_92_1_0,
		fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0_i4);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_101_103_101_114_95_95_92_1_0,
		fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0_i5);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__and_pairs_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0_i6);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__integer__decap_1_0,
		fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0_i17);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__f_105_110_116_101_103_101_114_95_95_92_1_0,
		fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0_i15);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_GE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_101_103_101_114_95_95_92_1_0,
		fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0_i15);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__integer__and_not_pairs_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0_i16);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__integer__decap_1_0,
		fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0_i17);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_105_110_116_101_103_101_114_95_95_92_1_0);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__integer__or_pairs_2_0,
		fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0_i19);
MR_def_label(fn__f_105_110_116_101_103_101_114_95_95_92_47_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__integer__decap_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module85)
	MR_init_entry1(fn__integer__xor_pairs_equal_2_0);
	MR_init_label3(fn__integer__xor_pairs_equal_2_0,3,20,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__xor_pairs_equal_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__integer__xor_pairs_equal_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__integer__xor_pairs_equal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__integer__xor_pairs_equal_2_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__integer__xor_pairs_equal_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = ((MR_Integer) MR_ctfield(1, MR_r1, 0) ^ (MR_Integer) MR_ctfield(1, MR_r2, 0));
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(fn__integer__xor_pairs_equal_2_0,
		fn__integer__xor_pairs_equal_2_0_i6);
MR_def_label(fn__integer__xor_pairs_equal_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module86)
	MR_init_entry1(fn__integer__xor_pairs_2_0);
	MR_init_label5(fn__integer__xor_pairs_2_0,3,2,5,14,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__xor_pairs_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_r1;
	MR_r4 = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r5 = MR_tempr1;
	if ((MR_tempr1 != MR_sv(1))) {
		MR_GOTO_LAB(fn__integer__xor_pairs_2_0_i2);
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r4;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(fn__integer__xor_pairs_equal_2_0,
		fn__integer__xor_pairs_2_0_i3);
MR_def_label(fn__integer__xor_pairs_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__integer__xor_pairs_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(fn__integer__xor_pairs_2_0_i5);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__integer__xor_pairs_2_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_localcall_lab(fn__integer__xor_pairs_2_0,
		fn__integer__xor_pairs_2_0_i14);
MR_def_label(fn__integer__xor_pairs_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 <= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(fn__integer__xor_pairs_2_0_i11);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__integer__xor_pairs_2_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_localcall_lab(fn__integer__xor_pairs_2_0,
		fn__integer__xor_pairs_2_0_i14);
MR_def_label(fn__integer__xor_pairs_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__integer__xor_pairs_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("integer.xor_pairs", 17);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module87)
	MR_init_entry1(fn__integer__xor_2_0);
	MR_init_label8(fn__integer__xor_2_0,4,5,3,8,9,2,18,19)
	MR_init_label7(fn__integer__xor_2_0,20,21,22,23,24,17,26)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__xor_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_GE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__integer__xor_2_0_i2);
	}
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	if (MR_INT_GE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__integer__xor_2_0_i3);
	}
	MR_sv(1) = MR_r2;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_101_103_101_114_95_95_92_1_0,
		fn__integer__xor_2_0_i4);
MR_def_label(fn__integer__xor_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_101_103_101_114_95_95_92_1_0,
		fn__integer__xor_2_0_i5);
MR_def_label(fn__integer__xor_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__xor_pairs_2_0,
		fn__integer__xor_2_0_i26);
MR_def_label(fn__integer__xor_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__f_105_110_116_101_103_101_114_95_95_92_1_0,
		fn__integer__xor_2_0_i8);
MR_def_label(fn__integer__xor_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__integer__or_pairs_2_0,
		fn__integer__xor_2_0_i9);
MR_def_label(fn__integer__xor_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__integer__decap_1_0,
		fn__integer__xor_2_0_i20);
MR_def_label(fn__integer__xor_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	if (MR_INT_GE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__integer__xor_2_0_i17);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_101_103_101_114_95_95_92_1_0,
		fn__integer__xor_2_0_i18);
MR_def_label(fn__integer__xor_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__integer__or_pairs_2_0,
		fn__integer__xor_2_0_i19);
MR_def_label(fn__integer__xor_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__integer__decap_1_0,
		fn__integer__xor_2_0_i20);
MR_def_label(fn__integer__xor_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__integer__and_pairs_2_0,
		fn__integer__xor_2_0_i21);
MR_def_label(fn__integer__xor_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__integer__decap_1_0,
		fn__integer__xor_2_0_i22);
MR_def_label(fn__integer__xor_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__and_not_pairs_2_0,
		fn__integer__xor_2_0_i23);
MR_def_label(fn__integer__xor_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__integer__decap_1_0,
		fn__integer__xor_2_0_i24);
MR_def_label(fn__integer__xor_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_105_110_116_101_103_101_114_95_95_92_1_0);
MR_def_label(fn__integer__xor_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__integer__xor_pairs_2_0,
		fn__integer__xor_2_0_i26);
MR_def_label(fn__integer__xor_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__integer__decap_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module88)
	MR_init_entry1(fn__integer__abs_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__abs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__integer__big_abs_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module89)
	MR_init_entry1(fn__integer__bits_pow_head_2_0);
	MR_init_label5(fn__integer__bits_pow_head_2_0,28,8,6,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__bits_pow_head_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__bits_pow_head_2_0_i28);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_proceed();
MR_def_label(fn__integer__bits_pow_head_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r1 & (MR_Integer) 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__integer__bits_pow_head_2_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = ((MR_Integer) MR_r1 & (MR_Integer) 16382);
	}
	MR_np_localcall_lab(fn__integer__bits_pow_head_2_0,
		fn__integer__bits_pow_head_2_0_i8);
MR_def_label(fn__integer__bits_pow_head_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__integer__big_mul_2_0);
	}
MR_def_label(fn__integer__bits_pow_head_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		fn__integer__bits_pow_head_2_0_i10);
MR_def_label(fn__integer__bits_pow_head_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(fn__integer__bits_pow_head_2_0,
		fn__integer__bits_pow_head_2_0_i11);
MR_def_label(fn__integer__bits_pow_head_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__integer__big_mul_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module90)
	MR_init_entry1(fn__integer__bits_pow_4_0);
	MR_init_label5(fn__integer__bits_pow_4_0,25,5,3,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__bits_pow_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__bits_pow_4_0_i25);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(fn__integer__bits_pow_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r2 & (MR_Integer) 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__integer__bits_pow_4_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_r2 = ((MR_Integer) MR_r2 & (MR_Integer) 16382);
	}
	MR_np_localcall_lab(fn__integer__bits_pow_4_0,
		fn__integer__bits_pow_4_0_i5);
MR_def_label(fn__integer__bits_pow_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__integer__big_mul_2_0);
	}
MR_def_label(fn__integer__bits_pow_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		fn__integer__bits_pow_4_0_i7);
MR_def_label(fn__integer__bits_pow_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(fn__integer__bits_pow_4_0,
		fn__integer__bits_pow_4_0_i8);
MR_def_label(fn__integer__bits_pow_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__integer__big_mul_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module91)
	MR_init_entry1(fn__integer__bits_pow_list_3_0);
	MR_init_label3(fn__integer__bits_pow_list_3_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__bits_pow_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__integer__bits_pow_list_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__integer__bits_pow_list_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(fn__integer__bits_pow_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Integer) 14;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__bits_pow_4_0,
		fn__integer__bits_pow_list_3_0_i4);
MR_def_label(fn__integer__bits_pow_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__integer__bits_pow_list_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module92)
	MR_init_entry1(fn__integer__big_pow_2_0);
	MR_init_label8(fn__integer__big_pow_2_0,4,2,11,8,16,13,20,18)
	MR_init_label2(fn__integer__big_pow_2_0,24,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__big_pow_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	}
	MR_np_call_localret_ent(__Unify___integer__integer_0_0,
		fn__integer__big_pow_2_0_i4);
MR_def_label(fn__integer__big_pow_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__integer__big_pow_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_decr_sp_and_return(4);
MR_def_label(fn__integer__big_pow_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(__Unify___integer__integer_0_0,
		fn__integer__big_pow_2_0_i11);
MR_def_label(fn__integer__big_pow_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__integer__big_pow_2_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(fn__integer__big_pow_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___integer__integer_0_0,
		fn__integer__big_pow_2_0_i16);
MR_def_label(fn__integer__big_pow_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__integer__big_pow_2_0_i13);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(fn__integer__big_pow_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___integer__integer_0_0,
		fn__integer__big_pow_2_0_i20);
MR_def_label(fn__integer__big_pow_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__integer__big_pow_2_0_i18);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(fn__integer__big_pow_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__integer__big_pow_2_0_i22);
	}
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__integer__bits_pow_head_2_0,
		fn__integer__big_pow_2_0_i24);
MR_def_label(fn__integer__big_pow_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__integer__bits_pow_list_3_0);
	}
MR_def_label(fn__integer__big_pow_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module93)
	MR_init_entry1(fn__integer__pow_2_0);
	MR_init_label1(fn__integer__pow_2_0,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__pow_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	if (MR_INT_GE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__integer__pow_2_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("integer.pow: negative exponent", 30);
	MR_np_tailcall_ent(require__error_1_0);
	}
MR_def_label(fn__integer__pow_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__integer__big_pow_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module94)
	MR_init_entry1(fn__integer__float_list_3_0);
	MR_init_label1(fn__integer__float_list_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__float_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__integer__float_list_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__integer__float_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r3, 0);
	{
	MR_Integer	IntVal;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__fn__integer__float_list_3_0
	IntVal = MR_tempr1;
{
#line 62 "float.opt"

	FloatVal = IntVal;
;}
#line 7274 "integer.c"
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_float_to_word(((MR_word_to_float(MR_r2) * MR_word_to_float(MR_r1)) + MR_word_to_float(MR_tempr1)));
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_np_localtailcall(fn__integer__float_list_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;

MR_BEGIN_MODULE(integer_module95)
	MR_init_entry1(fn__integer__float_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__float_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	IntVal;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__fn__integer__float_1_0
	IntVal = (MR_Integer) 16384;
{
#line 62 "float.opt"

	FloatVal = IntVal;
;}
#line 7312 "integer.c"
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_np_tailcall_ent(fn__integer__float_list_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module96)
	MR_init_entry1(fn__integer__int_list_2_0);
	MR_init_label2(fn__integer__int_list_2_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__integer__int_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__integer__int_list_2_0_i2);
	}
MR_def_label(fn__integer__int_list_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = (((MR_Integer) MR_r2 * (MR_Integer) 16384) + (MR_Integer) MR_ctfield(1, MR_tempr1, 0));
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	}
	break; } /* end while */
MR_def_label(fn__integer__int_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module97)
	MR_init_entry1(fn__integer__int_1_0);
	MR_init_label7(fn__integer__int_1_0,3,4,5,8,9,10,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__integer__int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__integer__int_1_0
{
#line 133 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Min = INT_MIN;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Min = LONG_MIN;
    } else {
        MR_fatal_error("Unable to figure out min integer size");
    }
;}
#line 7395 "integer.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__int_to_integer_1_0,
		fn__integer__int_1_0_i3);
MR_def_label(fn__integer__int_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Compare___integer__integer_0_0,
		fn__integer__int_1_0_i4);
MR_def_label(fn__integer__int_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__int_1_0_i5);
	}
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__integer__int_1_0_i2);
	}
MR_def_label(fn__integer__int_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__integer__int_1_0
{
#line 122 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 7438 "integer.c"
	MR_r1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(fn__integer__int_to_integer_1_0,
		fn__integer__int_1_0_i8);
MR_def_label(fn__integer__int_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Compare___integer__integer_0_0,
		fn__integer__int_1_0_i9);
MR_def_label(fn__integer__int_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,1)) {
		MR_GOTO_LAB(fn__integer__int_1_0_i10);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__integer__int_1_0_i2);
	}
MR_def_label(fn__integer__int_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(1), 1);
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__integer__int_list_2_0);
MR_def_label(fn__integer__int_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("integer.int: domain error (conversion would overflow)", 53);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__lower_upper_2_0);
MR_decl_entry(char__int_to_digit_2_1);

MR_BEGIN_MODULE(integer_module98)
	MR_init_entry1(integer__accumulate_integer_4_0);
	MR_init_label8(integer__accumulate_integer_4_0,4,6,2,8,11,12,14,15)
	MR_init_label1(integer__accumulate_integer_4_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(integer__accumulate_integer_4_0)
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
	}
	MR_np_call_localret_ent(char__lower_upper_2_0,
		integer__accumulate_integer_4_0_i4);
MR_def_label(integer__accumulate_integer_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(integer__accumulate_integer_4_0_i2);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__int_to_digit_2_1,
		integer__accumulate_integer_4_0_i6);
MR_def_label(integer__accumulate_integer_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(integer__accumulate_integer_4_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__integer__int_to_integer_1_0,
		integer__accumulate_integer_4_0_i11);
MR_def_label(integer__accumulate_integer_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__int_to_digit_2_1,
		integer__accumulate_integer_4_0_i8);
MR_def_label(integer__accumulate_integer_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(integer__accumulate_integer_4_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__integer__int_to_integer_1_0,
		integer__accumulate_integer_4_0_i11);
MR_def_label(integer__accumulate_integer_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___integer__integer_0_0,
		integer__accumulate_integer_4_0_i12);
MR_def_label(integer__accumulate_integer_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(integer__accumulate_integer_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__integer__big_mul_2_0,
		integer__accumulate_integer_4_0_i14);
MR_def_label(integer__accumulate_integer_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__integer__big_plus_2_0,
		integer__accumulate_integer_4_0_i15);
MR_def_label(integer__accumulate_integer_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(integer__accumulate_integer_4_0,1)
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


MR_BEGIN_MODULE(integer_module99)
	MR_init_entry1(__Unify___integer__digit_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___integer__digit_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module100)
	MR_init_entry1(__Compare___integer__digit_0_0);
	MR_init_label2(__Compare___integer__digit_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___integer__digit_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___integer__digit_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___integer__digit_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___integer__digit_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___integer__digit_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(integer_module101)
	MR_init_entry1(__Unify___integer__integer_0_0);
	MR_init_label2(__Unify___integer__integer_0_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___integer__integer_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___integer__integer_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___integer__integer_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___integer__integer_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___integer__integer_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(integer_module102)
	MR_init_entry1(__Compare___integer__integer_0_0);
	MR_init_label6(__Compare___integer__integer_0_0,3,2,6,7,9,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___integer__integer_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___integer__integer_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___integer__integer_0_0_i2);
MR_def_label(__Compare___integer__integer_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___integer__integer_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___integer__integer_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___integer__integer_0_0_i9);
	}
MR_def_label(__Compare___integer__integer_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___integer__integer_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___integer__integer_0_0_i9);
MR_def_label(__Compare___integer__integer_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___integer__integer_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___integer__integer_0_0_i31);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
MR_def_label(__Compare___integer__integer_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module103)
	MR_init_entry1(__Unify___integer__sign_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___integer__sign_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module104)
	MR_init_entry1(__Compare___integer__sign_0_0);
	MR_init_label2(__Compare___integer__sign_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___integer__sign_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___integer__sign_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___integer__sign_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___integer__sign_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___integer__sign_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module105)
	MR_init_entry1(fn__f_105_110_116_101_103_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_105_110_116_101_103_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module106)
	MR_init_entry1(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_95_104_111_56_95_95_91_50_93_95_48_6_0);
	MR_init_label2(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_95_104_111_56_95_95_91_50_93_95_48_6_0,3,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_95_104_111_56_95_95_91_50_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 <= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_95_104_111_56_95_95_91_50_93_95_48_6_0_i3);
	}
	MR_r3 = (MR_Integer) 0;
MR_def_label(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_95_104_111_56_95_95_91_50_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_95_104_111_56_95_95_91_50_93_95_48_6_0
	Str = (MR_String) MR_r2;
{
#line 210 "string.opt"

    Length = strlen(Str);
;}
#line 7873 "integer.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_r3);
	if (((MR_Integer) MR_r4 < (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_95_104_111_56_95_95_91_50_93_95_48_6_0_i22);
	}
	MR_r4 = MR_tempr2;
	}
MR_def_label(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_95_104_111_56_95_95_91_50_93_95_48_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_57_95_95_91_50_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(integer_module107)
	MR_init_entry1(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_57_95_95_91_50_93_95_48_6_0);
	MR_init_label4(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_57_95_95_91_50_93_95_48_6_0,18,3,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_57_95_95_91_50_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_57_95_95_91_50_93_95_48_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_57_95_95_91_50_93_95_48_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_57_95_95_91_50_93_95_48_6_0
	Str = (MR_String) MR_r2;
	Index = MR_r3;
{
#line 425 "string.opt"

    Ch = Str[Index];
;}
#line 7925 "integer.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(integer__accumulate_integer_4_0,
		f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_57_95_95_91_50_93_95_48_6_0_i3);
MR_def_label(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_57_95_95_91_50_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_57_95_95_91_50_93_95_48_6_0_i1);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_57_95_95_91_50_93_95_48_6_0_i18);
	}
MR_def_label(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_57_95_95_91_50_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(f_105_110_116_101_103_101_114_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_57_95_95_91_50_93_95_48_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__integer_maybe_bunch_0(void)
{
	integer_module0();
	integer_module1();
	integer_module2();
	integer_module3();
	integer_module4();
	integer_module5();
	integer_module6();
	integer_module7();
	integer_module8();
	integer_module9();
	integer_module10();
	integer_module11();
	integer_module12();
	integer_module13();
	integer_module14();
	integer_module15();
	integer_module16();
	integer_module17();
	integer_module18();
	integer_module19();
	integer_module20();
	integer_module21();
	integer_module22();
	integer_module23();
	integer_module24();
	integer_module25();
	integer_module26();
	integer_module27();
	integer_module28();
	integer_module29();
	integer_module30();
	integer_module31();
	integer_module32();
	integer_module33();
	integer_module34();
	integer_module35();
	integer_module36();
	integer_module37();
	integer_module38();
	integer_module39();
}

static void mercury__integer_maybe_bunch_1(void)
{
	integer_module40();
	integer_module41();
	integer_module42();
	integer_module43();
	integer_module44();
	integer_module45();
	integer_module46();
	integer_module47();
	integer_module48();
	integer_module49();
	integer_module50();
	integer_module51();
	integer_module52();
	integer_module53();
	integer_module54();
	integer_module55();
	integer_module56();
	integer_module57();
	integer_module58();
	integer_module59();
	integer_module60();
	integer_module61();
	integer_module62();
	integer_module63();
	integer_module64();
	integer_module65();
	integer_module66();
	integer_module67();
	integer_module68();
	integer_module69();
	integer_module70();
	integer_module71();
	integer_module72();
	integer_module73();
	integer_module74();
	integer_module75();
	integer_module76();
	integer_module77();
	integer_module78();
	integer_module79();
}

static void mercury__integer_maybe_bunch_2(void)
{
	integer_module80();
	integer_module81();
	integer_module82();
	integer_module83();
	integer_module84();
	integer_module85();
	integer_module86();
	integer_module87();
	integer_module88();
	integer_module89();
	integer_module90();
	integer_module91();
	integer_module92();
	integer_module93();
	integer_module94();
	integer_module95();
	integer_module96();
	integer_module97();
	integer_module98();
	integer_module99();
	integer_module100();
	integer_module101();
	integer_module102();
	integer_module103();
	integer_module104();
	integer_module105();
	integer_module106();
	integer_module107();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__integer__init(void);
void mercury__integer__init_type_tables(void);
void mercury__integer__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__integer__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__integer__init_complexity_procs(void);
#endif

void mercury__integer__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__integer_maybe_bunch_0();
	mercury__integer_maybe_bunch_1();
	mercury__integer_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_integer__type_ctor_info_sign_0,
		integer__sign_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_integer__type_ctor_info_integer_0,
		integer__integer_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_integer__type_ctor_info_digit_0,
		integer__digit_0_0);
	mercury__integer__init_debugger();
}

void mercury__integer__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_integer__type_ctor_info_sign_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_integer__type_ctor_info_integer_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_integer__type_ctor_info_digit_0);
	}
}


void mercury__integer__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__integer__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__integer);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__integer__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
