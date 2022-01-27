/*
** Automatically generated from `integer.m'
** by the Mercury compiler,
** version rotd-2015-03-24
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module integer. */
/* :- implementation. */

/*
INIT mercury__integer__init
ENDINIT
*/

#include "integer.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




#line 93 "integer.c"
static const MR_FA_TypeInfo_Struct1 mercury__integer__list__ti_list_1builtin__type_ctor_info_int_0;

#line 96 "integer.c"
static const MR_PseudoTypeInfo mercury__integer__integer__field_types_integer_0_0[2];

#line 99 "integer.c"
static const MR_DuFunctorDesc mercury__integer__integer__du_functor_desc_integer_0_0;

#line 102 "integer.c"
static const MR_DuFunctorDescPtr mercury__integer__integer__du_stag_ordered_integer_0_0[1];

#line 105 "integer.c"
static const MR_DuPtagLayout mercury__integer__integer__du_ptag_ordered_integer_0[1];

#line 108 "integer.c"
static const MR_DuFunctorDescPtr mercury__integer__integer__du_name_ordered_integer_0[1];

#line 111 "integer.c"
static const MR_Integer mercury__integer__integer__functor_number_map_integer_0[1];

#line 114 "integer.c"
static const MR_Integer mercury__integer__integer__functor_number_map_printbase_0[1];

#line 117 "integer.c"
static const MR_NotagFunctorDesc mercury__integer__integer__notag_functor_desc_printbase_0;

#line 120 "integer.c"
static MR_bool MR_CALL 
mercury__integer____Unify____digit_0_0_10001(
#line 123 "integer.c"
  MR_Box mercury__integer__wrapper_arg_1,
#line 125 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2);

#line 128 "integer.c"
static void MR_CALL 
mercury__integer____Compare____digit_0_0_10001(
#line 131 "integer.c"
  MR_Box * mercury__integer__wrapper_arg_1,
#line 133 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2,
#line 135 "integer.c"
  MR_Box mercury__integer__wrapper_arg_3);

#line 138 "integer.c"
static MR_bool MR_CALL 
mercury__integer____Unify____integer_0_0_10001(
#line 141 "integer.c"
  MR_Box mercury__integer__wrapper_arg_1,
#line 143 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2);

#line 146 "integer.c"
static void MR_CALL 
mercury__integer____Compare____integer_0_0_10001(
#line 149 "integer.c"
  MR_Box * mercury__integer__wrapper_arg_1,
#line 151 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2,
#line 153 "integer.c"
  MR_Box mercury__integer__wrapper_arg_3);

#line 156 "integer.c"
static MR_bool MR_CALL 
mercury__integer____Unify____printbase_0_0_10001(
#line 159 "integer.c"
  MR_Box mercury__integer__wrapper_arg_1,
#line 161 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2);

#line 164 "integer.c"
static void MR_CALL 
mercury__integer____Compare____printbase_0_0_10001(
#line 167 "integer.c"
  MR_Box * mercury__integer__wrapper_arg_1,
#line 169 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2,
#line 171 "integer.c"
  MR_Box mercury__integer__wrapper_arg_3);

#line 174 "integer.c"
static MR_bool MR_CALL 
mercury__integer____Unify____sign_0_0_10001(
#line 177 "integer.c"
  MR_Box mercury__integer__wrapper_arg_1,
#line 179 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2);

#line 182 "integer.c"
static void MR_CALL 
mercury__integer____Compare____sign_0_0_10001(
#line 185 "integer.c"
  MR_Box * mercury__integer__wrapper_arg_1,
#line 187 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2,
#line 189 "integer.c"
  MR_Box mercury__integer__wrapper_arg_3);

#line 114 "string.opt"
static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0(
#line 114 "string.opt"
  MR_Integer mercury__integer__V_17_17,
#line 114 "string.opt"
  MR_String mercury__integer__String_8_8,
#line 114 "string.opt"
  MR_Integer mercury__integer__I_9_9,
#line 114 "string.opt"
  MR_Integer mercury__integer__End_10_10,
#line 114 "string.opt"
  MR_Word mercury__integer__STATE_VARIABLE_Acc_0_14_11,
#line 114 "string.opt"
  MR_Word * mercury__integer__STATE_VARIABLE_Acc_15_12);

#line 140 "string.int"
static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0(
#line 140 "string.int"
  MR_Integer mercury__integer__V_18_18,
#line 140 "string.int"
  MR_String mercury__integer__String_8_8,
#line 140 "string.int"
  MR_Integer mercury__integer__Start0_9_9,
#line 140 "string.int"
  MR_Integer mercury__integer__End0_10_10,
#line 140 "string.int"
  MR_Word mercury__integer__STATE_VARIABLE_Acc_0_14_11,
#line 140 "string.int"
  MR_Word * mercury__integer__STATE_VARIABLE_Acc_15_12);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 1405 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_pos_mul_list_4_f_0(
#line 1405 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1405 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1405 "integer.m"
  MR_Word mercury__integer__Carry_3,
#line 1405 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4);

#line 1387 "integer.m"
static void MR_CALL 
mercury__integer__printbase_add_pairs_equal_5_p_0(
#line 1387 "integer.m"
  MR_Word mercury__integer__Base_1,
#line 1387 "integer.m"
  MR_Integer * mercury__integer__HeadVar__2_2,
#line 1387 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1387 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 1387 "integer.m"
  MR_Word * mercury__integer__HeadVar__5_5);

#line 1369 "integer.m"
static void MR_CALL 
mercury__integer__printbase_add_pairs_5_p_0(
#line 1369 "integer.m"
  MR_Word mercury__integer__Base_6,
#line 1369 "integer.m"
  MR_Integer * mercury__integer__Div_7,
#line 1369 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1369 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 1369 "integer.m"
  MR_Word * mercury__integer__Ds_12);

#line 1354 "integer.m"
static void MR_CALL 
mercury__integer__printbase_mul_by_digit_2_5_p_0(
#line 1354 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1354 "integer.m"
  MR_Integer mercury__integer__D_2,
#line 1354 "integer.m"
  MR_Integer * mercury__integer__HeadVar__3_3,
#line 1354 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 1354 "integer.m"
  MR_Word * mercury__integer__HeadVar__5_5);

#line 1330 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_pos_int_to_digits_2_3_f_0(
#line 1330 "integer.m"
  MR_Word mercury__integer__Base_5,
#line 1330 "integer.m"
  MR_Integer mercury__integer__D_6,
#line 1330 "integer.m"
  MR_Word mercury__integer__Tail_7);

#line 1298 "integer.m"
static void MR_CALL 
mercury__integer__digits_to_strings_4_p_0(
#line 1298 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 1298 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1298 "integer.m"
  MR_Word * mercury__integer__DCG_0_3,
#line 1298 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4);

#line 1289 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_rep_1_4_f_0(
#line 1289 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1289 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1289 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1289 "integer.m"
  MR_Word mercury__integer__Carry_4);

#line 1266 "integer.m"
static MR_String MR_CALL 
mercury__integer__digits_to_string_3_f_0(
#line 1266 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 1266 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1266 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3);

#line 1225 "integer.m"
static MR_bool MR_CALL 
mercury__integer__string_to_integer_acc_2_f_0(
#line 1225 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1225 "integer.m"
  MR_Word mercury__integer__Acc_2,
#line 1225 "integer.m"
  MR_Word * mercury__integer__HeadVar__3_3);

#line 1183 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__int_list_2_f_0(
#line 1183 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1183 "integer.m"
  MR_Integer mercury__integer__Accum_2);

#line 1144 "integer.m"
static MR_Word MR_CALL 
mercury__integer__bits_pow_4_f_0(
#line 1144 "integer.m"
  MR_Integer mercury__integer__Shifts_6,
#line 1144 "integer.m"
  MR_Integer mercury__integer__H_7,
#line 1144 "integer.m"
  MR_Word mercury__integer__A_8,
#line 1144 "integer.m"
  MR_Word mercury__integer__Accum_9);

#line 1138 "integer.m"
static MR_Word MR_CALL 
mercury__integer__bits_pow_list_3_f_0(
#line 1138 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1138 "integer.m"
  MR_Word mercury__integer__A_2,
#line 1138 "integer.m"
  MR_Word mercury__integer__Accum_3);

#line 1127 "integer.m"
static MR_Word MR_CALL 
mercury__integer__bits_pow_head_2_f_0(
#line 1127 "integer.m"
  MR_Integer mercury__integer__H_4,
#line 1127 "integer.m"
  MR_Word mercury__integer__A_5);

#line 1095 "integer.m"
static MR_bool MR_CALL 
mercury__integer__pos_geq_2_p_0(
#line 1095 "integer.m"
  MR_Word mercury__integer__Xs_3,
#line 1095 "integer.m"
  MR_Word mercury__integer__Ys_4);

#line 1084 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_3_f_0(
#line 1084 "integer.m"
  MR_Integer mercury__integer__X_1,
#line 1084 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1084 "integer.m"
  MR_Integer mercury__integer__D_3);

#line 1071 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_1_3_f_0(
#line 1071 "integer.m"
  MR_Integer mercury__integer__X_1,
#line 1071 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1071 "integer.m"
  MR_Integer mercury__integer__D_3);

#line 1066 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_f_0(
#line 1066 "integer.m"
  MR_Integer mercury__integer__Digit_1,
#line 1066 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 1062 "integer.m"
static MR_Word MR_CALL 
mercury__integer__integer_prepend_2_f_0(
#line 1062 "integer.m"
  MR_Integer mercury__integer__Digit_4,
#line 1062 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 1057 "integer.m"
static MR_Word MR_CALL 
mercury__integer__integer_append_2_f_0(
#line 1057 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1057 "integer.m"
  MR_Integer mercury__integer__Digit_6);

#line 1046 "integer.m"
static MR_Word MR_CALL 
mercury__integer__det_tail_1_f_0(
#line 1046 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1);

#line 1033 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__det_second_1_f_0(
#line 1033 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1);

#line 1023 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__det_first_1_f_0(
#line 1023 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1);

#line 1018 "integer.m"
static MR_Word MR_CALL 
mercury__integer__decap_1_f_0(
#line 1018 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1);

#line 968 "integer.m"
static void MR_CALL 
mercury__integer__quot_rem_2_5_p_0(
#line 968 "integer.m"
  MR_Word mercury__integer__Ur_6,
#line 968 "integer.m"
  MR_Word mercury__integer__U_7,
#line 968 "integer.m"
  MR_Word mercury__integer__V_8,
#line 968 "integer.m"
  MR_Word * mercury__integer__Quot_9,
#line 968 "integer.m"
  MR_Word * mercury__integer__Rem_10);

#line 949 "integer.m"
static void MR_CALL 
mercury__integer__quot_rem_4_p_0(
#line 949 "integer.m"
  MR_Word mercury__integer__U_5,
#line 949 "integer.m"
  MR_Word mercury__integer__V_6,
#line 949 "integer.m"
  MR_Word * mercury__integer__Quot_7,
#line 949 "integer.m"
  MR_Word * mercury__integer__Rem_8);

#line 912 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_mul_list_3_f_0(
#line 912 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 912 "integer.m"
  MR_Word mercury__integer__Carry_2,
#line 912 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3);

#line 876 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_mul_karatsuba_2_f_0(
#line 876 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 876 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 846 "integer.m"
static void MR_CALL 
mercury__integer__diff_pairs_equal_4_p_0(
#line 846 "integer.m"
  MR_Integer * mercury__integer__HeadVar__1_1,
#line 846 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 846 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 846 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4);

#line 832 "integer.m"
static void MR_CALL 
mercury__integer__diff_pairs_4_p_0(
#line 832 "integer.m"
  MR_Integer * mercury__integer__Div_5,
#line 832 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 832 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 832 "integer.m"
  MR_Word * mercury__integer__Ds_10);

#line 825 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_minus_2_f_0(
#line 825 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 825 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 816 "integer.m"
static void MR_CALL 
mercury__integer__add_pairs_equal_4_p_0(
#line 816 "integer.m"
  MR_Integer * mercury__integer__HeadVar__1_1,
#line 816 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 816 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 816 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4);

#line 798 "integer.m"
static void MR_CALL 
mercury__integer__add_pairs_4_p_0(
#line 798 "integer.m"
  MR_Integer * mercury__integer__Div_5,
#line 798 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 798 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 798 "integer.m"
  MR_Word * mercury__integer__Ds_10);

#line 777 "integer.m"
static void MR_CALL 
mercury__integer__mul_by_digit_2_4_p_0(
#line 777 "integer.m"
  MR_Integer mercury__integer__D_1,
#line 777 "integer.m"
  MR_Integer * mercury__integer__HeadVar__2_2,
#line 777 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 777 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4);

#line 771 "integer.m"
static MR_Word MR_CALL 
mercury__integer__mul_by_digit_2_f_0(
#line 771 "integer.m"
  MR_Integer mercury__integer__Digit_4,
#line 771 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 766 "integer.m"
static MR_Word MR_CALL 
mercury__integer__mul_base_2_1_f_0(
#line 766 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1);

#line 743 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_int_to_digits_2_2_f_0(
#line 743 "integer.m"
  MR_Integer mercury__integer__D_4,
#line 743 "integer.m"
  MR_Word mercury__integer__Tail_5);

#line 653 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_xor_not_2_f_0(
#line 653 "integer.m"
  MR_Word mercury__integer__X1_4,
#line 653 "integer.m"
  MR_Word mercury__integer__NotX2_5);

#line 646 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_not_pairs_equal_2_f_0(
#line 646 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 646 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 631 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_not_pairs_2_f_0(
#line 631 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 631 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 621 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_pairs_equal_2_f_0(
#line 621 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 621 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 606 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_pairs_2_f_0(
#line 606 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 606 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 595 "integer.m"
static MR_Word MR_CALL 
mercury__integer__xor_pairs_equal_2_f_0(
#line 595 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 595 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 580 "integer.m"
static MR_Word MR_CALL 
mercury__integer__xor_pairs_2_f_0(
#line 580 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 580 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 570 "integer.m"
static MR_Word MR_CALL 
mercury__integer__or_pairs_equal_2_f_0(
#line 570 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 570 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 555 "integer.m"
static MR_Word MR_CALL 
mercury__integer__or_pairs_2_f_0(
#line 555 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 555 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 551 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_or_2_f_0(
#line 551 "integer.m"
  MR_Word mercury__integer__X_4,
#line 551 "integer.m"
  MR_Word mercury__integer__Y_5);

#line 541 "integer.m"
static void MR_CALL 
mercury__integer__zeros_3_p_0(
#line 541 "integer.m"
  MR_Integer mercury__integer__Len_4,
#line 541 "integer.m"
  MR_Word * mercury__integer__DCG_0_5,
#line 541 "integer.m"
  MR_Word mercury__integer__DCG_3_8);

#line 525 "integer.m"
static void MR_CALL 
mercury__integer__leftshift_6_p_0(
#line 525 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 525 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 525 "integer.m"
  MR_Integer mercury__integer__Len_3,
#line 525 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 525 "integer.m"
  MR_Integer * mercury__integer__Carry_5,
#line 525 "integer.m"
  MR_Word * mercury__integer__DigitsOut_6);

#line 501 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_left_shift_2_f_0(
#line 501 "integer.m"
  MR_Word mercury__integer__X_4,
#line 501 "integer.m"
  MR_Integer mercury__integer__I_5);

#line 487 "integer.m"
static MR_Word MR_CALL 
mercury__integer__rightshift_4_f_0(
#line 487 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 487 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 487 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 487 "integer.m"
  MR_Integer mercury__integer__HeadVar__4_4);


static /* final */ const MR_Box mercury__integer_scalar_common_1[5][2];

static /* final */ const MR_Box mercury__integer_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__integer_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__integer_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__integer_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__integer_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__integer_scalar_common_1[3])))
  },
};

static /* final */ const MR_Box mercury__integer_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__integer_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__integer_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__integer_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__integer_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__integer_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "builtin.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "store.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"



#line 1108 "integer.c"
const MR_TypeCtorInfo_Struct mercury__integer__integer__type_ctor_info_digit_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__integer____Unify____digit_0_0_10001)),
  ((MR_Box) (mercury__integer____Compare____digit_0_0_10001)),
  (MR_String) "integer",
  (MR_String) "digit",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1125 "integer.c"
static const MR_FA_TypeInfo_Struct1 mercury__integer__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1133 "integer.c"
static const MR_PseudoTypeInfo mercury__integer__integer__field_types_integer_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__integer__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 1139 "integer.c"
static const MR_DuFunctorDesc mercury__integer__integer__du_functor_desc_integer_0_0 = {
  (MR_String) "i",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__integer__integer__field_types_integer_0_0,
  NULL,
  NULL,
  NULL
};

#line 1154 "integer.c"
static const MR_DuFunctorDescPtr mercury__integer__integer__du_stag_ordered_integer_0_0[1] = {
  &mercury__integer__integer__du_functor_desc_integer_0_0
};

#line 1159 "integer.c"
static const MR_DuPtagLayout mercury__integer__integer__du_ptag_ordered_integer_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__integer__integer__du_stag_ordered_integer_0_0
  }
};

#line 1168 "integer.c"
static const MR_DuFunctorDescPtr mercury__integer__integer__du_name_ordered_integer_0[1] = {
  &mercury__integer__integer__du_functor_desc_integer_0_0
};

#line 1173 "integer.c"
static const MR_Integer mercury__integer__integer__functor_number_map_integer_0[1] = {
  (MR_Integer) 0
};

#line 1178 "integer.c"
const MR_TypeCtorInfo_Struct mercury__integer__integer__type_ctor_info_integer_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__integer____Unify____integer_0_0_10001)),
  ((MR_Box) (mercury__integer____Compare____integer_0_0_10001)),
  (MR_String) "integer",
  (MR_String) "integer",
  {     mercury__integer__integer__du_name_ordered_integer_0 },
  {     mercury__integer__integer__du_ptag_ordered_integer_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__integer__integer__functor_number_map_integer_0
};

#line 1195 "integer.c"
static const MR_Integer mercury__integer__integer__functor_number_map_printbase_0[1] = {
  (MR_Integer) 0
};

#line 1200 "integer.c"
static const MR_NotagFunctorDesc mercury__integer__integer__notag_functor_desc_printbase_0 = {
  (MR_String) "printbase",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1207 "integer.c"
const MR_TypeCtorInfo_Struct mercury__integer__integer__type_ctor_info_printbase_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__integer____Unify____printbase_0_0_10001)),
  ((MR_Box) (mercury__integer____Compare____printbase_0_0_10001)),
  (MR_String) "integer",
  (MR_String) "printbase",
  {     &mercury__integer__integer__notag_functor_desc_printbase_0 },
  {     &mercury__integer__integer__notag_functor_desc_printbase_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__integer__integer__functor_number_map_printbase_0
};

#line 1224 "integer.c"
const MR_TypeCtorInfo_Struct mercury__integer__integer__type_ctor_info_sign_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__integer____Unify____sign_0_0_10001)),
  ((MR_Box) (mercury__integer____Compare____sign_0_0_10001)),
  (MR_String) "integer",
  (MR_String) "sign",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1241 "integer.c"
static MR_bool MR_CALL 
mercury__integer____Unify____digit_0_0_10001(
#line 1244 "integer.c"
  MR_Box mercury__integer__wrapper_arg_1,
#line 1246 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2)
#line 1248 "integer.c"
{
#line 1250 "integer.c"
  {
#line 1252 "integer.c"
    MR_bool mercury__integer__succeeded;

#line 1255 "integer.c"
    {
#line 1257 "integer.c"
      mercury__integer__succeeded = mercury__integer____Unify____digit_0_0(((MR_Integer) mercury__integer__wrapper_arg_1), ((MR_Integer) mercury__integer__wrapper_arg_2));
    }
#line 1260 "integer.c"
    return mercury__integer__succeeded;
#line 1262 "integer.c"
  }
#line 1264 "integer.c"
}

#line 1267 "integer.c"
static void MR_CALL 
mercury__integer____Compare____digit_0_0_10001(
#line 1270 "integer.c"
  MR_Box * mercury__integer__wrapper_arg_1,
#line 1272 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2,
#line 1274 "integer.c"
  MR_Box mercury__integer__wrapper_arg_3)
#line 1276 "integer.c"
{
#line 1278 "integer.c"
  {
#line 1280 "integer.c"
    MR_Word mercury__integer__conv0_HeadVar__1_1;

#line 1283 "integer.c"
    {
#line 1285 "integer.c"
      mercury__integer____Compare____digit_0_0(&mercury__integer__conv0_HeadVar__1_1, ((MR_Integer) mercury__integer__wrapper_arg_2), ((MR_Integer) mercury__integer__wrapper_arg_3));
    }
#line 1288 "integer.c"
    *mercury__integer__wrapper_arg_1 = ((MR_Box) (mercury__integer__conv0_HeadVar__1_1));
#line 1290 "integer.c"
  }
#line 1292 "integer.c"
}

#line 1295 "integer.c"
static MR_bool MR_CALL 
mercury__integer____Unify____integer_0_0_10001(
#line 1298 "integer.c"
  MR_Box mercury__integer__wrapper_arg_1,
#line 1300 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2)
#line 1302 "integer.c"
{
#line 1304 "integer.c"
  {
#line 1306 "integer.c"
    MR_bool mercury__integer__succeeded;

#line 1309 "integer.c"
    {
#line 1311 "integer.c"
      mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(((MR_Word) mercury__integer__wrapper_arg_1), ((MR_Word) mercury__integer__wrapper_arg_2));
    }
#line 1314 "integer.c"
    return mercury__integer__succeeded;
#line 1316 "integer.c"
  }
#line 1318 "integer.c"
}

#line 1321 "integer.c"
static void MR_CALL 
mercury__integer____Compare____integer_0_0_10001(
#line 1324 "integer.c"
  MR_Box * mercury__integer__wrapper_arg_1,
#line 1326 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2,
#line 1328 "integer.c"
  MR_Box mercury__integer__wrapper_arg_3)
#line 1330 "integer.c"
{
#line 1332 "integer.c"
  {
#line 1334 "integer.c"
    MR_Word mercury__integer__conv0_HeadVar__1_1;

#line 1337 "integer.c"
    {
#line 1339 "integer.c"
      mercury__integer____Compare____integer_0_0(&mercury__integer__conv0_HeadVar__1_1, ((MR_Word) mercury__integer__wrapper_arg_2), ((MR_Word) mercury__integer__wrapper_arg_3));
    }
#line 1342 "integer.c"
    *mercury__integer__wrapper_arg_1 = ((MR_Box) (mercury__integer__conv0_HeadVar__1_1));
#line 1344 "integer.c"
  }
#line 1346 "integer.c"
}

#line 1349 "integer.c"
static MR_bool MR_CALL 
mercury__integer____Unify____printbase_0_0_10001(
#line 1352 "integer.c"
  MR_Box mercury__integer__wrapper_arg_1,
#line 1354 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2)
#line 1356 "integer.c"
{
#line 1358 "integer.c"
  {
#line 1360 "integer.c"
    MR_bool mercury__integer__succeeded;

#line 1363 "integer.c"
    {
#line 1365 "integer.c"
      mercury__integer__succeeded = mercury__integer____Unify____printbase_0_0(((MR_Word) mercury__integer__wrapper_arg_1), ((MR_Word) mercury__integer__wrapper_arg_2));
    }
#line 1368 "integer.c"
    return mercury__integer__succeeded;
#line 1370 "integer.c"
  }
#line 1372 "integer.c"
}

#line 1375 "integer.c"
static void MR_CALL 
mercury__integer____Compare____printbase_0_0_10001(
#line 1378 "integer.c"
  MR_Box * mercury__integer__wrapper_arg_1,
#line 1380 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2,
#line 1382 "integer.c"
  MR_Box mercury__integer__wrapper_arg_3)
#line 1384 "integer.c"
{
#line 1386 "integer.c"
  {
#line 1388 "integer.c"
    MR_Word mercury__integer__conv0_HeadVar__1_1;

#line 1391 "integer.c"
    {
#line 1393 "integer.c"
      mercury__integer____Compare____printbase_0_0(&mercury__integer__conv0_HeadVar__1_1, ((MR_Word) mercury__integer__wrapper_arg_2), ((MR_Word) mercury__integer__wrapper_arg_3));
    }
#line 1396 "integer.c"
    *mercury__integer__wrapper_arg_1 = ((MR_Box) (mercury__integer__conv0_HeadVar__1_1));
#line 1398 "integer.c"
  }
#line 1400 "integer.c"
}

#line 1403 "integer.c"
static MR_bool MR_CALL 
mercury__integer____Unify____sign_0_0_10001(
#line 1406 "integer.c"
  MR_Box mercury__integer__wrapper_arg_1,
#line 1408 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2)
#line 1410 "integer.c"
{
#line 1412 "integer.c"
  {
#line 1414 "integer.c"
    MR_bool mercury__integer__succeeded;

#line 1417 "integer.c"
    {
#line 1419 "integer.c"
      mercury__integer__succeeded = mercury__integer____Unify____sign_0_0(((MR_Integer) mercury__integer__wrapper_arg_1), ((MR_Integer) mercury__integer__wrapper_arg_2));
    }
#line 1422 "integer.c"
    return mercury__integer__succeeded;
#line 1424 "integer.c"
  }
#line 1426 "integer.c"
}

#line 1429 "integer.c"
static void MR_CALL 
mercury__integer____Compare____sign_0_0_10001(
#line 1432 "integer.c"
  MR_Box * mercury__integer__wrapper_arg_1,
#line 1434 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2,
#line 1436 "integer.c"
  MR_Box mercury__integer__wrapper_arg_3)
#line 1438 "integer.c"
{
#line 1440 "integer.c"
  {
#line 1442 "integer.c"
    MR_Word mercury__integer__conv0_HeadVar__1_1;

#line 1445 "integer.c"
    {
#line 1447 "integer.c"
      mercury__integer____Compare____sign_0_0(&mercury__integer__conv0_HeadVar__1_1, ((MR_Integer) mercury__integer__wrapper_arg_2), ((MR_Integer) mercury__integer__wrapper_arg_3));
    }
#line 1450 "integer.c"
    *mercury__integer__wrapper_arg_1 = ((MR_Box) (mercury__integer__conv0_HeadVar__1_1));
#line 1452 "integer.c"
  }
#line 1454 "integer.c"
}

#line 114 "string.opt"
static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0(
#line 114 "string.opt"
  MR_Integer mercury__integer__V_17_17,
#line 114 "string.opt"
  MR_String mercury__integer__String_8_8,
#line 114 "string.opt"
  MR_Integer mercury__integer__I_9_9,
#line 114 "string.opt"
  MR_Integer mercury__integer__End_10_10,
#line 114 "string.opt"
  MR_Word mercury__integer__STATE_VARIABLE_Acc_0_14_11,
#line 114 "string.opt"
  MR_Word * mercury__integer__STATE_VARIABLE_Acc_15_12)
#line 114 "string.opt"
{
#line 969 "string.opt"
  while (MR_TRUE)
#line 969 "string.opt"
    {
#line 969 "string.opt"
      /* tailcall optimized into a loop */
#line 969 "string.opt"
      {
#line 969 "string.opt"
        MR_bool mercury__integer__succeeded = (mercury__integer__I_9_9 < mercury__integer__End_10_10);
#line 969 "string.opt"
        MR_Integer mercury__integer__J_12_13;
#line 969 "string.opt"
        MR_Char mercury__integer__Char_13_14;

#line 963 "string.opt"
        if (mercury__integer__succeeded)
#line 963 "string.opt"
          {
#line 199 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__integer__String_8_8 ;
	Index =  mercury__integer__I_9_9 ;
		{
#line 199 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 1518 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__integer__J_12_13  = NextIndex;
	 mercury__integer__Char_13_14  = Ch;
#line 199 "string.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 963 "string.opt"
            if (mercury__integer__succeeded)
#line 965 "string.opt"
              mercury__integer__succeeded = (mercury__integer__J_12_13 <= mercury__integer__End_10_10);
#line 963 "string.opt"
          }
#line 969 "string.opt"
        if (mercury__integer__succeeded)
#line 967 "string.opt"
          {
#line 967 "string.opt"
            MR_Word mercury__integer__STATE_VARIABLE_Acc_16_16_15;
#line 967 "string.opt"
            MR_Integer mercury__integer__Digit0_23;
#line 967 "string.opt"
            MR_Word mercury__integer__Digit_24;
#line 967 "string.opt"
            MR_Word mercury__integer__V_26_26;
#line 967 "string.opt"
            MR_Word mercury__integer__V_27_27;

#line 1442 "integer.m"
            {
#line 1442 "integer.m"
              mercury__integer__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__integer__V_17_17, mercury__integer__Char_13_14, &mercury__integer__Digit0_23);
            }
#line 967 "string.opt"
            if (mercury__integer__succeeded)
#line 967 "string.opt"
              {
#line 697 "integer.m"
                {
#line 697 "integer.m"
                  mercury__integer__Digit_24 = mercury__integer__int_to_integer_1_f_0(mercury__integer__Digit0_23);
                }
#line 697 "integer.m"
                {
#line 697 "integer.m"
                  mercury__integer__V_27_27 = mercury__integer__int_to_integer_1_f_0(mercury__integer__V_17_17);
                }
#line 327 "integer.m"
                {
#line 327 "integer.m"
                  mercury__integer__V_26_26 = mercury__integer__big_mul_2_f_0(mercury__integer__V_27_27, mercury__integer__STATE_VARIABLE_Acc_0_14_11);
                }
#line 323 "integer.m"
                {
#line 323 "integer.m"
                  mercury__integer__STATE_VARIABLE_Acc_16_16_15 = mercury__integer__big_plus_2_f_0(mercury__integer__V_26_26, mercury__integer__Digit_24);
                }
#line 968 "string.opt"
                /* direct tailcall eliminated */
#line 968 "string.opt"
                {
#line 968 "string.opt"
                  MR_Integer mercury__integer__I_9__tmp_copy_9 = mercury__integer__J_12_13;
#line 968 "string.opt"
                  MR_Word mercury__integer__STATE_VARIABLE_Acc_0_14__tmp_copy_11 = mercury__integer__STATE_VARIABLE_Acc_16_16_15;

#line 968 "string.opt"
                  mercury__integer__STATE_VARIABLE_Acc_0_14_11 = mercury__integer__STATE_VARIABLE_Acc_0_14__tmp_copy_11;
#line 968 "string.opt"
                  mercury__integer__I_9_9 = mercury__integer__I_9__tmp_copy_9;
#line 968 "string.opt"
                }
#line 968 "string.opt"
                continue;
#line 967 "string.opt"
              }
#line 967 "string.opt"
          }
#line 969 "string.opt"
        else
#line 970 "string.opt"
          {
#line 970 "string.opt"
            *mercury__integer__STATE_VARIABLE_Acc_15_12 = mercury__integer__STATE_VARIABLE_Acc_0_14_11;
#line 970 "string.opt"
            mercury__integer__succeeded = MR_TRUE;
#line 970 "string.opt"
          }
#line 969 "string.opt"
        return mercury__integer__succeeded;
#line 969 "string.opt"
      }
#line 969 "string.opt"
      break;
#line 969 "string.opt"
    }
#line 114 "string.opt"
}

#line 140 "string.int"
static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0(
#line 140 "string.int"
  MR_Integer mercury__integer__V_18_18,
#line 140 "string.int"
  MR_String mercury__integer__String_8_8,
#line 140 "string.int"
  MR_Integer mercury__integer__Start0_9_9,
#line 140 "string.int"
  MR_Integer mercury__integer__End0_10_10,
#line 140 "string.int"
  MR_Word mercury__integer__STATE_VARIABLE_Acc_0_14_11,
#line 140 "string.int"
  MR_Word * mercury__integer__STATE_VARIABLE_Acc_15_12)
#line 140 "string.int"
{
#line 616 "string.opt"
  {
#line 616 "string.opt"
    MR_bool mercury__integer__succeeded = ((MR_Integer) 0 > mercury__integer__Start0_9_9);
#line 616 "string.opt"
    MR_Integer mercury__integer__Start_12_13;
#line 616 "string.opt"
    MR_Integer mercury__integer__End_13_15;
#line 616 "string.opt"
    MR_Integer mercury__integer__V_17_16;

#line 78 "int.opt"
    if (mercury__integer__succeeded)
#line 77 "int.opt"
      mercury__integer__Start_12_13 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__integer__Start_12_13 = mercury__integer__Start0_9_9;
#line 250 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__String_8_8 ;
		{
#line 250 "string.opt"

    Length = strlen(Str);

#line 1670 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_17_16  = Length;
#line 250 "string.opt"
}
#line 85 "int.opt"
    mercury__integer__succeeded = (mercury__integer__End0_10_10 < mercury__integer__V_17_16);
#line 88 "int.opt"
    if (mercury__integer__succeeded)
#line 87 "int.opt"
      mercury__integer__End_13_15 = mercury__integer__End0_10_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__integer__End_13_15 = mercury__integer__V_17_16;
#line 621 "string.opt"
    {
#line 621 "string.opt"
      return mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__V_18_18, mercury__integer__String_8_8, mercury__integer__Start_12_13, mercury__integer__End_13_15, mercury__integer__STATE_VARIABLE_Acc_0_14_11, mercury__integer__STATE_VARIABLE_Acc_15_12);
    }
#line 616 "string.opt"
    return mercury__integer__succeeded;
#line 616 "string.opt"
  }
#line 140 "string.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__integer__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 269 "integer.m"
void MR_CALL 
mercury__integer____Compare____sign_0_0(
#line 269 "integer.m"
  MR_Word * mercury__integer__HeadVar__1_1,
#line 269 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 269 "integer.m"
  MR_Integer mercury__integer__HeadVar__3_3)
#line 269 "integer.m"
{
#line 269 "integer.m"
  {
#line 269 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 269 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar1_4 = mercury__integer__HeadVar__2_2;
#line 269 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar2_5 = mercury__integer__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_4 < mercury__integer__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__integer__succeeded)
#line 68 "private_builtin.opt"
      *mercury__integer__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_4 == mercury__integer__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__integer__succeeded)
#line 73 "private_builtin.opt"
          *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__integer__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 269 "integer.m"
  }
#line 269 "integer.m"
}

#line 269 "integer.m"
MR_bool MR_CALL 
mercury__integer____Unify____sign_0_0(
#line 269 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 269 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2)
#line 269 "integer.m"
{
#line 269 "integer.m"
  {
#line 269 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 269 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar1_3 = mercury__integer__HeadVar__1_1;
#line 269 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar2_4 = mercury__integer__HeadVar__2_2;

#line 269 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_3 == mercury__integer__Cast_HeadVar2_4);
#line 269 "integer.m"
    return mercury__integer__succeeded;
#line 269 "integer.m"
  }
#line 269 "integer.m"
}

#line 1318 "integer.m"
void MR_CALL 
mercury__integer____Compare____printbase_0_0(
#line 1318 "integer.m"
  MR_Word * mercury__integer__HeadVar__1_1,
#line 1318 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1318 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3)
#line 1318 "integer.m"
{
#line 1318 "integer.m"
  {
#line 1318 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1318 "integer.m"
    MR_Integer mercury__integer__CastX_6 = (MR_Integer) mercury__integer__HeadVar__2_2;
#line 1318 "integer.m"
    MR_Integer mercury__integer__CastY_7 = (MR_Integer) mercury__integer__HeadVar__3_3;

#line 1318 "integer.m"
    mercury__integer__succeeded = (mercury__integer__CastX_6 == mercury__integer__CastY_7);
#line 1318 "integer.m"
    if (mercury__integer__succeeded)
#line 1814 "integer.c"
      *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 1318 "integer.m"
    else
#line 1318 "integer.m"
      {
#line 1318 "integer.m"
        MR_Integer mercury__integer__V_4_4 = (MR_Integer) mercury__integer__HeadVar__2_2;
#line 1318 "integer.m"
        MR_Integer mercury__integer__V_5_5 = (MR_Integer) mercury__integer__HeadVar__3_3;

#line 66 "private_builtin.opt"
        mercury__integer__succeeded = (mercury__integer__V_4_4 < mercury__integer__V_5_5);
#line 69 "private_builtin.opt"
        if (mercury__integer__succeeded)
#line 68 "private_builtin.opt"
          *mercury__integer__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__integer__succeeded = (mercury__integer__V_4_4 == mercury__integer__V_5_5);
#line 74 "private_builtin.opt"
            if (mercury__integer__succeeded)
#line 73 "private_builtin.opt"
              *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              *mercury__integer__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 1318 "integer.m"
      }
#line 1318 "integer.m"
  }
#line 1318 "integer.m"
}

#line 1318 "integer.m"
MR_bool MR_CALL 
mercury__integer____Unify____printbase_0_0(
#line 1318 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1318 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 1318 "integer.m"
{
#line 1318 "integer.m"
  {
#line 1318 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1318 "integer.m"
    MR_Integer mercury__integer__CastX_5 = (MR_Integer) mercury__integer__HeadVar__1_1;
#line 1318 "integer.m"
    MR_Integer mercury__integer__CastY_6 = (MR_Integer) mercury__integer__HeadVar__2_2;

#line 1318 "integer.m"
    mercury__integer__succeeded = (mercury__integer__CastX_5 == mercury__integer__CastY_6);
#line 1318 "integer.m"
    if (mercury__integer__succeeded)
#line 1318 "integer.m"
      mercury__integer__succeeded = MR_TRUE;
#line 1318 "integer.m"
    else
#line 1318 "integer.m"
      {
#line 1318 "integer.m"
        MR_Integer mercury__integer__V_3_3 = (MR_Integer) mercury__integer__HeadVar__1_1;
#line 1318 "integer.m"
        MR_Integer mercury__integer__V_4_4 = (MR_Integer) mercury__integer__HeadVar__2_2;

#line 1887 "integer.c"
        mercury__integer__succeeded = (mercury__integer__V_3_3 == mercury__integer__V_4_4);
#line 1318 "integer.m"
      }
#line 1318 "integer.m"
    return mercury__integer__succeeded;
#line 1318 "integer.m"
  }
#line 1318 "integer.m"
}

#line 272 "integer.m"
void MR_CALL 
mercury__integer____Compare____integer_0_0(
#line 272 "integer.m"
  MR_Word * mercury__integer__HeadVar__1_1,
#line 272 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 272 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3)
#line 272 "integer.m"
{
#line 272 "integer.m"
  {
#line 272 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 272 "integer.m"
    MR_Integer mercury__integer__CastX_9 = (MR_Integer) mercury__integer__HeadVar__2_2;
#line 272 "integer.m"
    MR_Integer mercury__integer__CastY_10 = (MR_Integer) mercury__integer__HeadVar__3_3;

#line 272 "integer.m"
    mercury__integer__succeeded = (mercury__integer__CastX_9 == mercury__integer__CastY_10);
#line 272 "integer.m"
    if (mercury__integer__succeeded)
#line 1922 "integer.c"
      *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 272 "integer.m"
    else
#line 272 "integer.m"
      {
#line 272 "integer.m"
        MR_Integer mercury__integer__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 272 "integer.m"
        MR_Word mercury__integer__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 272 "integer.m"
        MR_Integer mercury__integer__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 272 "integer.m"
        MR_Word mercury__integer__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 272 "integer.m"
        MR_Word mercury__integer__V_8_8;

#line 66 "private_builtin.opt"
        mercury__integer__succeeded = (mercury__integer__V_4_4 < mercury__integer__V_6_6);
#line 69 "private_builtin.opt"
        if (mercury__integer__succeeded)
#line 68 "private_builtin.opt"
          mercury__integer__V_8_8 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__integer__succeeded = (mercury__integer__V_4_4 == mercury__integer__V_6_6);
#line 74 "private_builtin.opt"
            if (mercury__integer__succeeded)
#line 73 "private_builtin.opt"
              mercury__integer__V_8_8 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__integer__V_8_8 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 1961 "integer.c"
        mercury__integer__succeeded = (mercury__integer__V_8_8 == (MR_Integer) 0);
#line 272 "integer.m"
        mercury__integer__succeeded = !(mercury__integer__succeeded);
#line 272 "integer.m"
        if (mercury__integer__succeeded)
#line 272 "integer.m"
          *mercury__integer__HeadVar__1_1 = mercury__integer__V_8_8;
#line 272 "integer.m"
        else
#line 272 "integer.m"
          {
#line 272 "integer.m"
            MR_Word mercury__integer__TypeInfo_12_12 = (MR_Word) &mercury__integer_scalar_common_1[0];

#line 272 "integer.m"
            {
#line 272 "integer.m"
              mercury__builtin__compare_3_p_0(mercury__integer__TypeInfo_12_12, mercury__integer__HeadVar__1_1, ((MR_Box) (mercury__integer__V_5_5)), ((MR_Box) (mercury__integer__V_7_7)));
#line 272 "integer.m"
              return;
            }
#line 272 "integer.m"
          }
#line 272 "integer.m"
      }
#line 272 "integer.m"
  }
#line 272 "integer.m"
}

#line 272 "integer.m"
MR_bool MR_CALL 
mercury__integer____Unify____integer_0_0(
#line 272 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 272 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 272 "integer.m"
{
#line 272 "integer.m"
  {
#line 272 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 272 "integer.m"
    MR_Integer mercury__integer__CastX_7 = (MR_Integer) mercury__integer__HeadVar__1_1;
#line 272 "integer.m"
    MR_Integer mercury__integer__CastY_8 = (MR_Integer) mercury__integer__HeadVar__2_2;

#line 272 "integer.m"
    mercury__integer__succeeded = (mercury__integer__CastX_7 == mercury__integer__CastY_8);
#line 272 "integer.m"
    if (mercury__integer__succeeded)
#line 272 "integer.m"
      mercury__integer__succeeded = MR_TRUE;
#line 272 "integer.m"
    else
#line 272 "integer.m"
      {
#line 272 "integer.m"
        MR_Word mercury__integer__TypeInfo_9_9;
#line 272 "integer.m"
        MR_Integer mercury__integer__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 272 "integer.m"
        MR_Word mercury__integer__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 272 "integer.m"
        MR_Integer mercury__integer__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 272 "integer.m"
        MR_Word mercury__integer__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 2031 "integer.c"
        mercury__integer__succeeded = (mercury__integer__V_3_3 == mercury__integer__V_5_5);
#line 272 "integer.m"
        if (mercury__integer__succeeded)
#line 272 "integer.m"
          {
#line 2037 "integer.c"
            mercury__integer__TypeInfo_9_9 = (MR_Word) &mercury__integer_scalar_common_1[0];
#line 2039 "integer.c"
            {
#line 2041 "integer.c"
              return mercury__integer__succeeded = mercury__builtin__unify_2_p_0(mercury__integer__TypeInfo_9_9, ((MR_Box) (mercury__integer__V_4_4)), ((MR_Box) (mercury__integer__V_6_6)));
            }
#line 272 "integer.m"
          }
#line 272 "integer.m"
      }
#line 272 "integer.m"
    return mercury__integer__succeeded;
#line 272 "integer.m"
  }
#line 272 "integer.m"
}

#line 270 "integer.m"
void MR_CALL 
mercury__integer____Compare____digit_0_0(
#line 270 "integer.m"
  MR_Word * mercury__integer__HeadVar__1_1,
#line 270 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 270 "integer.m"
  MR_Integer mercury__integer__HeadVar__3_3)
#line 270 "integer.m"
{
#line 270 "integer.m"
  {
#line 270 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 270 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar1_4 = mercury__integer__HeadVar__2_2;
#line 270 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar2_5 = mercury__integer__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_4 < mercury__integer__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__integer__succeeded)
#line 68 "private_builtin.opt"
      *mercury__integer__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_4 == mercury__integer__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__integer__succeeded)
#line 73 "private_builtin.opt"
          *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__integer__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 270 "integer.m"
  }
#line 270 "integer.m"
}

#line 270 "integer.m"
MR_bool MR_CALL 
mercury__integer____Unify____digit_0_0(
#line 270 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 270 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2)
#line 270 "integer.m"
{
#line 270 "integer.m"
  {
#line 270 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 270 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar1_3 = mercury__integer__HeadVar__1_1;
#line 270 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar2_4 = mercury__integer__HeadVar__2_2;

#line 270 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_3 == mercury__integer__Cast_HeadVar2_4);
#line 270 "integer.m"
    return mercury__integer__succeeded;
#line 270 "integer.m"
  }
#line 270 "integer.m"
}

#line 1405 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_pos_mul_list_4_f_0(
#line 1405 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1405 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1405 "integer.m"
  MR_Word mercury__integer__Carry_3,
#line 1405 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4)
#line 1405 "integer.m"
{
#line 1408 "integer.m"
  while (MR_TRUE)
#line 1408 "integer.m"
    {
#line 1408 "integer.m"
      /* tailcall optimized into a loop */
#line 1408 "integer.m"
      {
#line 1408 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1408 "integer.m"
        MR_Word mercury__integer__HeadVar__5_5;

#line 1408 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1408 "integer.m"
          mercury__integer__HeadVar__5_5 = mercury__integer__Carry_3;
#line 1408 "integer.m"
        else
#line 1409 "integer.m"
          {
#line 1409 "integer.m"
            MR_Integer mercury__integer__X_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 1409 "integer.m"
            MR_Word mercury__integer__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1409 "integer.m"
            MR_Word mercury__integer__V_14_14;
#line 1409 "integer.m"
            MR_Word mercury__integer__V_15_15;
#line 1409 "integer.m"
            MR_Word mercury__integer__V_16_16;
#line 1409 "integer.m"
            MR_Integer mercury__integer__Len_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_3, (MR_Integer) 0)));
#line 1409 "integer.m"
            MR_Word mercury__integer__Digits_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_3, (MR_Integer) 1)));
#line 1409 "integer.m"
            MR_Integer mercury__integer__Len_30;
#line 1409 "integer.m"
            MR_Word mercury__integer__Ds_31;
#line 1409 "integer.m"
            MR_Integer mercury__integer__Div_32;
#line 1409 "integer.m"
            MR_Word mercury__integer__DsOut_33;
#line 1409 "integer.m"
            MR_Integer mercury__integer__L1_39;
#line 1409 "integer.m"
            MR_Integer mercury__integer__L2_41;
#line 1409 "integer.m"
            MR_Integer mercury__integer__Div_43;
#line 1409 "integer.m"
            MR_Word mercury__integer__Ds_44;
#line 1409 "integer.m"
            MR_Integer mercury__integer__Len_45;
#line 1364 "integer.m"
            MR_Word mercury__integer__D1_40;
#line 1364 "integer.m"
            MR_Word mercury__integer__D2_42;

#line 761 "integer.m"
            if ((mercury__integer__Digits_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1188 "integer.m"
              {
#line 1188 "integer.m"
                MR_Word mercury__integer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1188 "integer.m"
                mercury__integer__V_15_15 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1188 "integer.m"
              }
#line 761 "integer.m"
            else
#line 762 "integer.m"
              {
#line 762 "integer.m"
                MR_Integer mercury__integer__V_22_22 = (mercury__integer__Len_18 + (MR_Integer) 1);
#line 762 "integer.m"
                MR_Word mercury__integer__V_24_24;

#line 763 "integer.m"
                {
#line 763 "integer.m"
                  mercury__integer__V_24_24 = mercury__integer__mul_base_2_1_f_0(mercury__integer__Digits_19);
                }
#line 763 "integer.m"
                {
#line 763 "integer.m"
                  mercury__integer__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 763 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, 0) = ((MR_Box) (mercury__integer__V_22_22));
#line 763 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, 1) = ((MR_Box) (mercury__integer__V_24_24));
#line 763 "integer.m"
                }
#line 762 "integer.m"
              }
#line 1350 "integer.m"
            mercury__integer__Len_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
#line 1350 "integer.m"
            mercury__integer__Ds_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));
#line 1351 "integer.m"
            {
#line 1351 "integer.m"
              mercury__integer__printbase_mul_by_digit_2_5_p_0(mercury__integer__HeadVar__1_1, mercury__integer__X_10, &mercury__integer__Div_32, mercury__integer__Ds_31, &mercury__integer__DsOut_33);
            }
#line 1352 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Div_32 == (MR_Integer) 0);
#line 1352 "integer.m"
            if (mercury__integer__succeeded)
#line 1352 "integer.m"
              {
#line 1352 "integer.m"
                mercury__integer__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1352 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, 0) = ((MR_Box) (mercury__integer__Len_30));
#line 1352 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, 1) = ((MR_Box) (mercury__integer__DsOut_33));
#line 1352 "integer.m"
              }
#line 1352 "integer.m"
            else
#line 1352 "integer.m"
              {
#line 1352 "integer.m"
                MR_Integer mercury__integer__V_34_34 = (mercury__integer__Len_30 + (MR_Integer) 1);
#line 1352 "integer.m"
                MR_Word mercury__integer__V_36_36;

#line 1352 "integer.m"
                {
#line 1352 "integer.m"
                  mercury__integer__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1352 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_36_36, 0) = ((MR_Box) (mercury__integer__Div_32));
#line 1352 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_36_36, 1) = ((MR_Box) (mercury__integer__DsOut_33));
#line 1352 "integer.m"
                }
#line 1352 "integer.m"
                {
#line 1352 "integer.m"
                  mercury__integer__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1352 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, 0) = ((MR_Box) (mercury__integer__V_34_34));
#line 1352 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, 1) = ((MR_Box) (mercury__integer__V_36_36));
#line 1352 "integer.m"
                }
#line 1352 "integer.m"
              }
#line 1364 "integer.m"
            mercury__integer__L1_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, (MR_Integer) 0)));
#line 1364 "integer.m"
            mercury__integer__D1_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, (MR_Integer) 1)));
#line 1364 "integer.m"
            mercury__integer__L2_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, (MR_Integer) 0)));
#line 1364 "integer.m"
            mercury__integer__D2_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, (MR_Integer) 1)));
#line 1365 "integer.m"
            {
#line 1365 "integer.m"
              mercury__integer__printbase_add_pairs_5_p_0(mercury__integer__HeadVar__1_1, &mercury__integer__Div_43, mercury__integer__V_15_15, mercury__integer__V_16_16, &mercury__integer__Ds_44);
            }
#line 1366 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_39 > mercury__integer__L2_41);
#line 1366 "integer.m"
            if (mercury__integer__succeeded)
#line 1366 "integer.m"
              mercury__integer__Len_45 = mercury__integer__L1_39;
#line 1366 "integer.m"
            else
#line 1366 "integer.m"
              mercury__integer__Len_45 = mercury__integer__L2_41;
#line 1367 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Div_43 == (MR_Integer) 0);
#line 1367 "integer.m"
            if (mercury__integer__succeeded)
#line 1367 "integer.m"
              {
#line 1367 "integer.m"
                mercury__integer__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1367 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__Len_45));
#line 1367 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__Ds_44));
#line 1367 "integer.m"
              }
#line 1367 "integer.m"
            else
#line 1367 "integer.m"
              {
#line 1367 "integer.m"
                MR_Integer mercury__integer__V_48_48 = (mercury__integer__Len_45 + (MR_Integer) 1);
#line 1367 "integer.m"
                MR_Word mercury__integer__V_50_50;

#line 1367 "integer.m"
                {
#line 1367 "integer.m"
                  mercury__integer__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_50_50, 0) = ((MR_Box) (mercury__integer__Div_43));
#line 1367 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_50_50, 1) = ((MR_Box) (mercury__integer__Ds_44));
#line 1367 "integer.m"
                }
#line 1367 "integer.m"
                {
#line 1367 "integer.m"
                  mercury__integer__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1367 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__V_48_48));
#line 1367 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__V_50_50));
#line 1367 "integer.m"
                }
#line 1367 "integer.m"
              }
#line 1410 "integer.m"
            /* direct tailcall eliminated */
#line 1410 "integer.m"
            {
#line 1410 "integer.m"
              MR_Word mercury__integer__HeadVar__2__tmp_copy_2 = mercury__integer__Xs_11;
#line 1410 "integer.m"
              MR_Word mercury__integer__Carry__tmp_copy_3 = mercury__integer__V_14_14;

#line 1410 "integer.m"
              mercury__integer__Carry_3 = mercury__integer__Carry__tmp_copy_3;
#line 1410 "integer.m"
              mercury__integer__HeadVar__2_2 = mercury__integer__HeadVar__2__tmp_copy_2;
#line 1410 "integer.m"
            }
#line 1410 "integer.m"
            continue;
#line 1409 "integer.m"
          }
#line 1408 "integer.m"
        return mercury__integer__HeadVar__5_5;
#line 1408 "integer.m"
      }
#line 1408 "integer.m"
      break;
#line 1408 "integer.m"
    }
#line 1405 "integer.m"
}

#line 1387 "integer.m"
static void MR_CALL 
mercury__integer__printbase_add_pairs_equal_5_p_0(
#line 1387 "integer.m"
  MR_Word mercury__integer__Base_1,
#line 1387 "integer.m"
  MR_Integer * mercury__integer__HeadVar__2_2,
#line 1387 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1387 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 1387 "integer.m"
  MR_Word * mercury__integer__HeadVar__5_5)
#line 1387 "integer.m"
{
#line 1390 "integer.m"
  {
#line 1390 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 1390 "integer.m"
    if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1390 "integer.m"
      {
#line 1390 "integer.m"
        *mercury__integer__HeadVar__2_2 = (MR_Integer) 0;
#line 1390 "integer.m"
        *mercury__integer__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1390 "integer.m"
      }
#line 1390 "integer.m"
    else
#line 1390 "integer.m"
      {
#line 1390 "integer.m"
        MR_Word mercury__integer__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 1390 "integer.m"
        MR_Integer mercury__integer__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));

#line 1390 "integer.m"
        if ((mercury__integer__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1391 "integer.m"
          {
#line 1391 "integer.m"
            *mercury__integer__HeadVar__2_2 = (MR_Integer) 0;
#line 1391 "integer.m"
            *mercury__integer__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1391 "integer.m"
          }
#line 1390 "integer.m"
        else
#line 1392 "integer.m"
          {
#line 1392 "integer.m"
            MR_Integer mercury__integer__Y_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
#line 1392 "integer.m"
            MR_Word mercury__integer__Ys_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));
#line 1392 "integer.m"
            MR_Integer mercury__integer__Mod_17;
#line 1392 "integer.m"
            MR_Word mercury__integer__TailDs_18;
#line 1392 "integer.m"
            MR_Integer mercury__integer__DivTail_19;
#line 1392 "integer.m"
            MR_Integer mercury__integer__V_20_20;
#line 1392 "integer.m"
            MR_Integer mercury__integer__V_21_21;
#line 1392 "integer.m"
            MR_Integer mercury__integer__Base_27;
#line 1392 "integer.m"
            MR_Integer mercury__integer__V_6_31;
#line 1392 "integer.m"
            MR_Integer mercury__integer__V_7_32;

#line 1393 "integer.m"
            {
#line 1393 "integer.m"
              mercury__integer__printbase_add_pairs_equal_5_p_0(mercury__integer__Base_1, &mercury__integer__DivTail_19, mercury__integer__V_22_22, mercury__integer__Ys_16, &mercury__integer__TailDs_18);
            }
#line 1394 "integer.m"
            mercury__integer__V_21_21 = (mercury__integer__V_23_23 + mercury__integer__Y_15);
#line 1394 "integer.m"
            mercury__integer__V_20_20 = (mercury__integer__V_21_21 + mercury__integer__DivTail_19);
#line 1344 "integer.m"
            mercury__integer__Base_27 = (MR_Integer) mercury__integer__Base_1;
#line 113 "int.opt"
            {
#line 113 "int.opt"
              mercury__integer__V_7_32 = mercury__int__div_2_f_0(mercury__integer__V_20_20, mercury__integer__Base_27);
            }
#line 112 "int.opt"
            mercury__integer__V_6_31 = (mercury__integer__V_7_32 * mercury__integer__Base_27);
#line 111 "int.opt"
            mercury__integer__Mod_17 = (mercury__integer__V_20_20 - mercury__integer__V_6_31);
#line 1346 "integer.m"
            {
#line 1346 "integer.m"
              *mercury__integer__HeadVar__2_2 = mercury__int__div_2_f_0(mercury__integer__V_20_20, mercury__integer__Base_27);
            }
#line 1392 "integer.m"
            {
#line 1392 "integer.m"
              MR_Word base;
#line 1392 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1392 "integer.m"
              *mercury__integer__HeadVar__5_5 = base;
#line 1392 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_17));
#line 1392 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__TailDs_18));
#line 1392 "integer.m"
            }
#line 1392 "integer.m"
          }
#line 1390 "integer.m"
      }
#line 1390 "integer.m"
  }
#line 1387 "integer.m"
}

#line 1369 "integer.m"
static void MR_CALL 
mercury__integer__printbase_add_pairs_5_p_0(
#line 1369 "integer.m"
  MR_Word mercury__integer__Base_6,
#line 1369 "integer.m"
  MR_Integer * mercury__integer__Div_7,
#line 1369 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1369 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 1369 "integer.m"
  MR_Word * mercury__integer__Ds_12)
#line 1369 "integer.m"
{
#line 1372 "integer.m"
  {
#line 1372 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1372 "integer.m"
    MR_Integer mercury__integer__L1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 1372 "integer.m"
    MR_Word mercury__integer__D1_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 1372 "integer.m"
    MR_Integer mercury__integer__L2_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
#line 1372 "integer.m"
    MR_Word mercury__integer__D2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));

#line 1373 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_8 == mercury__integer__L2_10);
#line 1375 "integer.m"
    if (mercury__integer__succeeded)
#line 1374 "integer.m"
      {
#line 1374 "integer.m"
        mercury__integer__printbase_add_pairs_equal_5_p_0(mercury__integer__Base_6, mercury__integer__Div_7, mercury__integer__D1_9, mercury__integer__D2_11, mercury__integer__Ds_12);
#line 1374 "integer.m"
        return;
      }
#line 1375 "integer.m"
    else
#line 1379 "integer.m"
      {
#line 1379 "integer.m"
        MR_Integer mercury__integer__H2_13;
#line 1379 "integer.m"
        MR_Word mercury__integer__T2_14;

#line 1375 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_8 < mercury__integer__L2_10);
#line 1375 "integer.m"
        if (mercury__integer__succeeded)
#line 1375 "integer.m"
          {
#line 1375 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_11)) == (MR_mktag((MR_Integer) 1)));
#line 1375 "integer.m"
            if (mercury__integer__succeeded)
#line 1375 "integer.m"
              {
#line 1375 "integer.m"
                mercury__integer__H2_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_11, (MR_Integer) 0)));
#line 1375 "integer.m"
                mercury__integer__T2_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_11, (MR_Integer) 1)));
#line 1375 "integer.m"
              }
#line 1375 "integer.m"
          }
#line 1379 "integer.m"
        if (mercury__integer__succeeded)
#line 1376 "integer.m"
          {
#line 1376 "integer.m"
            MR_Integer mercury__integer__Div1_15;
#line 1376 "integer.m"
            MR_Word mercury__integer__Ds1_16;
#line 1376 "integer.m"
            MR_Integer mercury__integer__Mod_17;
#line 1376 "integer.m"
            MR_Word mercury__integer__V_21_21;
#line 1376 "integer.m"
            MR_Integer mercury__integer__V_22_22 = (mercury__integer__L2_10 - (MR_Integer) 1);
#line 1376 "integer.m"
            MR_Integer mercury__integer__V_24_24;
#line 1376 "integer.m"
            MR_Integer mercury__integer__Base_42;
#line 1376 "integer.m"
            MR_Integer mercury__integer__V_6_46;
#line 1376 "integer.m"
            MR_Integer mercury__integer__V_7_47;

#line 1376 "integer.m"
            {
#line 1376 "integer.m"
              mercury__integer__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1376 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_21_21, 0) = ((MR_Box) (mercury__integer__V_22_22));
#line 1376 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_21_21, 1) = ((MR_Box) (mercury__integer__T2_14));
#line 1376 "integer.m"
            }
#line 1376 "integer.m"
            {
#line 1376 "integer.m"
              mercury__integer__printbase_add_pairs_5_p_0(mercury__integer__Base_6, &mercury__integer__Div1_15, mercury__integer__HeadVar__3_3, mercury__integer__V_21_21, &mercury__integer__Ds1_16);
            }
#line 1377 "integer.m"
            mercury__integer__V_24_24 = (mercury__integer__H2_13 + mercury__integer__Div1_15);
#line 1344 "integer.m"
            mercury__integer__Base_42 = (MR_Integer) mercury__integer__Base_6;
#line 113 "int.opt"
            {
#line 113 "int.opt"
              mercury__integer__V_7_47 = mercury__int__div_2_f_0(mercury__integer__V_24_24, mercury__integer__Base_42);
            }
#line 112 "int.opt"
            mercury__integer__V_6_46 = (mercury__integer__V_7_47 * mercury__integer__Base_42);
#line 111 "int.opt"
            mercury__integer__Mod_17 = (mercury__integer__V_24_24 - mercury__integer__V_6_46);
#line 1346 "integer.m"
            {
#line 1346 "integer.m"
              *mercury__integer__Div_7 = mercury__int__div_2_f_0(mercury__integer__V_24_24, mercury__integer__Base_42);
            }
#line 1378 "integer.m"
            {
#line 1378 "integer.m"
              MR_Word base;
#line 1378 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1378 "integer.m"
              *mercury__integer__Ds_12 = base;
#line 1378 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_17));
#line 1378 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_16));
#line 1378 "integer.m"
            }
#line 1376 "integer.m"
          }
#line 1379 "integer.m"
        else
#line 1383 "integer.m"
          {
#line 1383 "integer.m"
            MR_Integer mercury__integer__H1_18;
#line 1383 "integer.m"
            MR_Word mercury__integer__T1_19;

#line 1379 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_8 > mercury__integer__L2_10);
#line 1379 "integer.m"
            if (mercury__integer__succeeded)
#line 1379 "integer.m"
              {
#line 1379 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_9)) == (MR_mktag((MR_Integer) 1)));
#line 1379 "integer.m"
                if (mercury__integer__succeeded)
#line 1379 "integer.m"
                  {
#line 1379 "integer.m"
                    mercury__integer__H1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_9, (MR_Integer) 0)));
#line 1379 "integer.m"
                    mercury__integer__T1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_9, (MR_Integer) 1)));
#line 1379 "integer.m"
                  }
#line 1379 "integer.m"
              }
#line 1383 "integer.m"
            if (mercury__integer__succeeded)
#line 1380 "integer.m"
              {
#line 1380 "integer.m"
                MR_Word mercury__integer__V_25_25;
#line 1380 "integer.m"
                MR_Integer mercury__integer__V_27_27 = (mercury__integer__L1_8 - (MR_Integer) 1);
#line 1380 "integer.m"
                MR_Integer mercury__integer__V_29_29;
#line 1380 "integer.m"
                MR_Integer mercury__integer__Div1_33;
#line 1380 "integer.m"
                MR_Word mercury__integer__Ds1_34;
#line 1380 "integer.m"
                MR_Integer mercury__integer__Mod_35;
#line 1380 "integer.m"
                MR_Integer mercury__integer__Base_51;
#line 1380 "integer.m"
                MR_Integer mercury__integer__V_6_55;
#line 1380 "integer.m"
                MR_Integer mercury__integer__V_7_56;

#line 1380 "integer.m"
                {
#line 1380 "integer.m"
                  mercury__integer__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1380 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_25_25, 0) = ((MR_Box) (mercury__integer__V_27_27));
#line 1380 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_25_25, 1) = ((MR_Box) (mercury__integer__T1_19));
#line 1380 "integer.m"
                }
#line 1380 "integer.m"
                {
#line 1380 "integer.m"
                  mercury__integer__printbase_add_pairs_5_p_0(mercury__integer__Base_6, &mercury__integer__Div1_33, mercury__integer__V_25_25, mercury__integer__HeadVar__4_4, &mercury__integer__Ds1_34);
                }
#line 1381 "integer.m"
                mercury__integer__V_29_29 = (mercury__integer__H1_18 + mercury__integer__Div1_33);
#line 1344 "integer.m"
                mercury__integer__Base_51 = (MR_Integer) mercury__integer__Base_6;
#line 113 "int.opt"
                {
#line 113 "int.opt"
                  mercury__integer__V_7_56 = mercury__int__div_2_f_0(mercury__integer__V_29_29, mercury__integer__Base_51);
                }
#line 112 "int.opt"
                mercury__integer__V_6_55 = (mercury__integer__V_7_56 * mercury__integer__Base_51);
#line 111 "int.opt"
                mercury__integer__Mod_35 = (mercury__integer__V_29_29 - mercury__integer__V_6_55);
#line 1346 "integer.m"
                {
#line 1346 "integer.m"
                  *mercury__integer__Div_7 = mercury__int__div_2_f_0(mercury__integer__V_29_29, mercury__integer__Base_51);
                }
#line 1382 "integer.m"
                {
#line 1382 "integer.m"
                  MR_Word base;
#line 1382 "integer.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1382 "integer.m"
                  *mercury__integer__Ds_12 = base;
#line 1382 "integer.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_35));
#line 1382 "integer.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_34));
#line 1382 "integer.m"
                }
#line 1380 "integer.m"
              }
#line 1383 "integer.m"
            else
#line 1384 "integer.m"
              {
#line 1384 "integer.m"
                {
#line 1384 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "predicate \140integer.printbase_add_pairs\'/5", (MR_String) "integer.printbase_add_pairs");
#line 1384 "integer.m"
                  return;
                }
#line 1384 "integer.m"
              }
#line 1383 "integer.m"
          }
#line 1379 "integer.m"
      }
#line 1372 "integer.m"
  }
#line 1369 "integer.m"
}

#line 1354 "integer.m"
static void MR_CALL 
mercury__integer__printbase_mul_by_digit_2_5_p_0(
#line 1354 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1354 "integer.m"
  MR_Integer mercury__integer__D_2,
#line 1354 "integer.m"
  MR_Integer * mercury__integer__HeadVar__3_3,
#line 1354 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 1354 "integer.m"
  MR_Word * mercury__integer__HeadVar__5_5)
#line 1354 "integer.m"
{
#line 1357 "integer.m"
  {
#line 1357 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 1357 "integer.m"
    if ((mercury__integer__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1357 "integer.m"
      {
#line 1357 "integer.m"
        *mercury__integer__HeadVar__3_3 = (MR_Integer) 0;
#line 1357 "integer.m"
        *mercury__integer__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1357 "integer.m"
      }
#line 1357 "integer.m"
    else
#line 1358 "integer.m"
      {
#line 1358 "integer.m"
        MR_Integer mercury__integer__X_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
#line 1358 "integer.m"
        MR_Word mercury__integer__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));
#line 1358 "integer.m"
        MR_Integer mercury__integer__Mod_13;
#line 1358 "integer.m"
        MR_Word mercury__integer__NewXs_14;
#line 1358 "integer.m"
        MR_Integer mercury__integer__DivXs_15;
#line 1358 "integer.m"
        MR_Integer mercury__integer__V_16_16;
#line 1358 "integer.m"
        MR_Integer mercury__integer__V_17_17;
#line 1358 "integer.m"
        MR_Integer mercury__integer__Base_21;
#line 1358 "integer.m"
        MR_Integer mercury__integer__V_6_25;
#line 1358 "integer.m"
        MR_Integer mercury__integer__V_7_26;

#line 1359 "integer.m"
        {
#line 1359 "integer.m"
          mercury__integer__printbase_mul_by_digit_2_5_p_0(mercury__integer__HeadVar__1_1, mercury__integer__D_2, &mercury__integer__DivXs_15, mercury__integer__Xs_12, &mercury__integer__NewXs_14);
        }
#line 1360 "integer.m"
        mercury__integer__V_17_17 = (mercury__integer__D_2 * mercury__integer__X_11);
#line 1360 "integer.m"
        mercury__integer__V_16_16 = (mercury__integer__V_17_17 + mercury__integer__DivXs_15);
#line 1344 "integer.m"
        mercury__integer__Base_21 = (MR_Integer) mercury__integer__HeadVar__1_1;
#line 113 "int.opt"
        {
#line 113 "int.opt"
          mercury__integer__V_7_26 = mercury__int__div_2_f_0(mercury__integer__V_16_16, mercury__integer__Base_21);
        }
#line 112 "int.opt"
        mercury__integer__V_6_25 = (mercury__integer__V_7_26 * mercury__integer__Base_21);
#line 111 "int.opt"
        mercury__integer__Mod_13 = (mercury__integer__V_16_16 - mercury__integer__V_6_25);
#line 1346 "integer.m"
        {
#line 1346 "integer.m"
          *mercury__integer__HeadVar__3_3 = mercury__int__div_2_f_0(mercury__integer__V_16_16, mercury__integer__Base_21);
        }
#line 1358 "integer.m"
        {
#line 1358 "integer.m"
          MR_Word base;
#line 1358 "integer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1358 "integer.m"
          *mercury__integer__HeadVar__5_5 = base;
#line 1358 "integer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_13));
#line 1358 "integer.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__NewXs_14));
#line 1358 "integer.m"
        }
#line 1358 "integer.m"
      }
#line 1357 "integer.m"
  }
#line 1354 "integer.m"
}

#line 1330 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_pos_int_to_digits_2_3_f_0(
#line 1330 "integer.m"
  MR_Word mercury__integer__Base_5,
#line 1330 "integer.m"
  MR_Integer mercury__integer__D_6,
#line 1330 "integer.m"
  MR_Word mercury__integer__Tail_7)
#line 1330 "integer.m"
{
#line 1335 "integer.m"
  while (MR_TRUE)
#line 1335 "integer.m"
    {
#line 1335 "integer.m"
      /* tailcall optimized into a loop */
#line 1335 "integer.m"
      {
#line 1335 "integer.m"
        MR_bool mercury__integer__succeeded = (mercury__integer__D_6 == (MR_Integer) 0);
#line 1335 "integer.m"
        MR_Word mercury__integer__Result_8;

#line 1335 "integer.m"
        if (mercury__integer__succeeded)
#line 1334 "integer.m"
          mercury__integer__Result_8 = mercury__integer__Tail_7;
#line 1335 "integer.m"
        else
#line 1336 "integer.m"
          {
#line 1336 "integer.m"
            MR_Integer mercury__integer__Length_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_7, (MR_Integer) 0)));
#line 1336 "integer.m"
            MR_Word mercury__integer__Digits_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_7, (MR_Integer) 1)));
#line 1336 "integer.m"
            MR_Integer mercury__integer__Div_11;
#line 1336 "integer.m"
            MR_Integer mercury__integer__Mod_12;
#line 1336 "integer.m"
            MR_Word mercury__integer__V_13_13;
#line 1336 "integer.m"
            MR_Integer mercury__integer__V_14_14;
#line 1336 "integer.m"
            MR_Word mercury__integer__V_16_16;
#line 1336 "integer.m"
            MR_Integer mercury__integer__Base_20 = (MR_Integer) mercury__integer__Base_5;
#line 1336 "integer.m"
            MR_Integer mercury__integer__V_6_24;
#line 1336 "integer.m"
            MR_Integer mercury__integer__V_7_25;

#line 113 "int.opt"
            {
#line 113 "int.opt"
              mercury__integer__V_7_25 = mercury__int__div_2_f_0(mercury__integer__D_6, mercury__integer__Base_20);
            }
#line 112 "int.opt"
            mercury__integer__V_6_24 = (mercury__integer__V_7_25 * mercury__integer__Base_20);
#line 111 "int.opt"
            mercury__integer__Mod_12 = (mercury__integer__D_6 - mercury__integer__V_6_24);
#line 1346 "integer.m"
            {
#line 1346 "integer.m"
              mercury__integer__Div_11 = mercury__int__div_2_f_0(mercury__integer__D_6, mercury__integer__Base_20);
            }
#line 1339 "integer.m"
            mercury__integer__V_14_14 = (mercury__integer__Length_9 + (MR_Integer) 1);
#line 1339 "integer.m"
            {
#line 1339 "integer.m"
              mercury__integer__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1339 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_16_16, 0) = ((MR_Box) (mercury__integer__Mod_12));
#line 1339 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_16_16, 1) = ((MR_Box) (mercury__integer__Digits_10));
#line 1339 "integer.m"
            }
#line 1339 "integer.m"
            {
#line 1339 "integer.m"
              mercury__integer__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1339 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 0) = ((MR_Box) (mercury__integer__V_14_14));
#line 1339 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 1) = ((MR_Box) (mercury__integer__V_16_16));
#line 1339 "integer.m"
            }
#line 1338 "integer.m"
            /* direct tailcall eliminated */
#line 1338 "integer.m"
            {
#line 1338 "integer.m"
              MR_Integer mercury__integer__D__tmp_copy_6 = mercury__integer__Div_11;
#line 1338 "integer.m"
              MR_Word mercury__integer__Tail__tmp_copy_7 = mercury__integer__V_13_13;

#line 1338 "integer.m"
              mercury__integer__Tail_7 = mercury__integer__Tail__tmp_copy_7;
#line 1338 "integer.m"
              mercury__integer__D_6 = mercury__integer__D__tmp_copy_6;
#line 1338 "integer.m"
            }
#line 1338 "integer.m"
            continue;
#line 1336 "integer.m"
          }
#line 1335 "integer.m"
        return mercury__integer__Result_8;
#line 1335 "integer.m"
      }
#line 1335 "integer.m"
      break;
#line 1335 "integer.m"
    }
#line 1330 "integer.m"
}

#line 1298 "integer.m"
static void MR_CALL 
mercury__integer__digits_to_strings_4_p_0(
#line 1298 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 1298 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1298 "integer.m"
  MR_Word * mercury__integer__DCG_0_3,
#line 1298 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4)
#line 1298 "integer.m"
{
#line 1301 "integer.m"
  {
#line 1301 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 1301 "integer.m"
    if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1301 "integer.m"
      *mercury__integer__DCG_0_3 = mercury__integer__HeadVar__4_4;
#line 1301 "integer.m"
    else
#line 1302 "integer.m"
      {
#line 1302 "integer.m"
        MR_Integer mercury__integer__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 1302 "integer.m"
        MR_Word mercury__integer__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1302 "integer.m"
        MR_String mercury__integer__S_11;
#line 1302 "integer.m"
        MR_Word mercury__integer__DCG_1_13;
#line 1302 "integer.m"
        MR_String mercury__integer__S1_18;

#line 1310 "integer.m"
        {
#line 1310 "integer.m"
          mercury__string__int_to_base_string_3_p_0(mercury__integer__H_9, mercury__integer__HeadVar__1_1, &mercury__integer__S1_18);
        }
#line 1311 "integer.m"
        {
#line 1311 "integer.m"
          mercury__string__pad_left_4_p_0(mercury__integer__S1_18, (MR_Char) 48, (MR_Integer) 3, &mercury__integer__S_11);
        }
#line 1305 "integer.m"
        {
#line 1305 "integer.m"
          mercury__integer__digits_to_strings_4_p_0(mercury__integer__HeadVar__1_1, mercury__integer__T_10, &mercury__integer__DCG_1_13, mercury__integer__HeadVar__4_4);
        }
#line 1304 "integer.m"
        {
#line 1304 "integer.m"
          MR_Word base;
#line 1304 "integer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1304 "integer.m"
          *mercury__integer__DCG_0_3 = base;
#line 1304 "integer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__S_11));
#line 1304 "integer.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__DCG_1_13));
#line 1304 "integer.m"
        }
#line 1302 "integer.m"
      }
#line 1301 "integer.m"
  }
#line 1298 "integer.m"
}

#line 1289 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_rep_1_4_f_0(
#line 1289 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1289 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1289 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1289 "integer.m"
  MR_Word mercury__integer__Carry_4)
#line 1289 "integer.m"
{
#line 1291 "integer.m"
  while (MR_TRUE)
#line 1291 "integer.m"
    {
#line 1291 "integer.m"
      /* tailcall optimized into a loop */
#line 1291 "integer.m"
      {
#line 1291 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1291 "integer.m"
        MR_Word mercury__integer__HeadVar__5_5;

#line 1291 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1291 "integer.m"
          mercury__integer__HeadVar__5_5 = mercury__integer__Carry_4;
#line 1291 "integer.m"
        else
#line 1292 "integer.m"
          {
#line 1292 "integer.m"
            MR_Integer mercury__integer__X_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 1292 "integer.m"
            MR_Word mercury__integer__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1292 "integer.m"
            MR_Word mercury__integer__V_14_14;
#line 1292 "integer.m"
            MR_Word mercury__integer__V_15_15;
#line 1292 "integer.m"
            MR_Word mercury__integer__V_16_16;
#line 1292 "integer.m"
            MR_Integer mercury__integer__L1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 1292 "integer.m"
            MR_Word mercury__integer__Ds1_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 1292 "integer.m"
            MR_Integer mercury__integer__L2_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_4, (MR_Integer) 0)));
#line 1292 "integer.m"
            MR_Word mercury__integer__Ds2_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_4, (MR_Integer) 1)));
#line 1292 "integer.m"
            MR_Word mercury__integer__V_32_32;
#line 1292 "integer.m"
            MR_Word mercury__integer__V_34_34;
#line 1292 "integer.m"
            MR_Integer mercury__integer__L1_37;
#line 1292 "integer.m"
            MR_Integer mercury__integer__L2_39;
#line 1292 "integer.m"
            MR_Integer mercury__integer__Div_41;
#line 1292 "integer.m"
            MR_Word mercury__integer__Ds_42;
#line 1292 "integer.m"
            MR_Integer mercury__integer__Len_43;
#line 1364 "integer.m"
            MR_Word mercury__integer__D1_38;
#line 1364 "integer.m"
            MR_Word mercury__integer__D2_40;

#line 1399 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_18 < mercury__integer__L2_20);
#line 1398 "integer.m"
            if (mercury__integer__succeeded)
#line 1400 "integer.m"
              {
#line 1400 "integer.m"
                MR_Word mercury__integer__V_22_22 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1400 "integer.m"
                MR_Word mercury__integer__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1400 "integer.m"
                {
#line 1400 "integer.m"
                  mercury__integer__V_15_15 = mercury__integer__printbase_pos_mul_list_4_f_0(mercury__integer__HeadVar__1_1, mercury__integer__Ds1_19, mercury__integer__V_22_22, mercury__integer__Carry_4);
                }
#line 1400 "integer.m"
              }
#line 1398 "integer.m"
            else
#line 1402 "integer.m"
              {
#line 1402 "integer.m"
                MR_Word mercury__integer__V_24_24 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1402 "integer.m"
                MR_Word mercury__integer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1402 "integer.m"
                {
#line 1402 "integer.m"
                  mercury__integer__V_15_15 = mercury__integer__printbase_pos_mul_list_4_f_0(mercury__integer__HeadVar__1_1, mercury__integer__Ds2_21, mercury__integer__V_24_24, mercury__integer__HeadVar__3_3);
                }
#line 1402 "integer.m"
              }
#line 1188 "integer.m"
            mercury__integer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1188 "integer.m"
            mercury__integer__V_32_32 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1328 "integer.m"
            {
#line 1328 "integer.m"
              mercury__integer__V_16_16 = mercury__integer__printbase_pos_int_to_digits_2_3_f_0(mercury__integer__HeadVar__1_1, mercury__integer__X_10, mercury__integer__V_32_32);
            }
#line 1364 "integer.m"
            mercury__integer__L1_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, (MR_Integer) 0)));
#line 1364 "integer.m"
            mercury__integer__D1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, (MR_Integer) 1)));
#line 1364 "integer.m"
            mercury__integer__L2_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, (MR_Integer) 0)));
#line 1364 "integer.m"
            mercury__integer__D2_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, (MR_Integer) 1)));
#line 1365 "integer.m"
            {
#line 1365 "integer.m"
              mercury__integer__printbase_add_pairs_5_p_0(mercury__integer__HeadVar__1_1, &mercury__integer__Div_41, mercury__integer__V_15_15, mercury__integer__V_16_16, &mercury__integer__Ds_42);
            }
#line 1366 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_37 > mercury__integer__L2_39);
#line 1366 "integer.m"
            if (mercury__integer__succeeded)
#line 1366 "integer.m"
              mercury__integer__Len_43 = mercury__integer__L1_37;
#line 1366 "integer.m"
            else
#line 1366 "integer.m"
              mercury__integer__Len_43 = mercury__integer__L2_39;
#line 1367 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Div_41 == (MR_Integer) 0);
#line 1367 "integer.m"
            if (mercury__integer__succeeded)
#line 1367 "integer.m"
              {
#line 1367 "integer.m"
                mercury__integer__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1367 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__Len_43));
#line 1367 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__Ds_42));
#line 1367 "integer.m"
              }
#line 1367 "integer.m"
            else
#line 1367 "integer.m"
              {
#line 1367 "integer.m"
                MR_Integer mercury__integer__V_46_46 = (mercury__integer__Len_43 + (MR_Integer) 1);
#line 1367 "integer.m"
                MR_Word mercury__integer__V_48_48;

#line 1367 "integer.m"
                {
#line 1367 "integer.m"
                  mercury__integer__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_48_48, 0) = ((MR_Box) (mercury__integer__Div_41));
#line 1367 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_48_48, 1) = ((MR_Box) (mercury__integer__Ds_42));
#line 1367 "integer.m"
                }
#line 1367 "integer.m"
                {
#line 1367 "integer.m"
                  mercury__integer__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1367 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__V_46_46));
#line 1367 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__V_48_48));
#line 1367 "integer.m"
                }
#line 1367 "integer.m"
              }
#line 1293 "integer.m"
            /* direct tailcall eliminated */
#line 1293 "integer.m"
            {
#line 1293 "integer.m"
              MR_Word mercury__integer__HeadVar__2__tmp_copy_2 = mercury__integer__Xs_11;
#line 1293 "integer.m"
              MR_Word mercury__integer__Carry__tmp_copy_4 = mercury__integer__V_14_14;

#line 1293 "integer.m"
              mercury__integer__Carry_4 = mercury__integer__Carry__tmp_copy_4;
#line 1293 "integer.m"
              mercury__integer__HeadVar__2_2 = mercury__integer__HeadVar__2__tmp_copy_2;
#line 1293 "integer.m"
            }
#line 1293 "integer.m"
            continue;
#line 1292 "integer.m"
          }
#line 1291 "integer.m"
        return mercury__integer__HeadVar__5_5;
#line 1291 "integer.m"
      }
#line 1291 "integer.m"
      break;
#line 1291 "integer.m"
    }
#line 1289 "integer.m"
}

#line 1266 "integer.m"
static MR_String MR_CALL 
mercury__integer__digits_to_string_3_f_0(
#line 1266 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 1266 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1266 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3)
#line 1266 "integer.m"
{
#line 1268 "integer.m"
  {
#line 1268 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1268 "integer.m"
    MR_String mercury__integer__HeadVar__4_4;

#line 1268 "integer.m"
    if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1268 "integer.m"
      mercury__integer__HeadVar__4_4 = (MR_String) "0";
#line 1268 "integer.m"
    else
#line 1269 "integer.m"
      {
#line 1269 "integer.m"
        MR_Word mercury__integer__DigitsInPrintBase_14;
#line 1269 "integer.m"
        MR_Word mercury__integer__V_19_19;
#line 1269 "integer.m"
        MR_Word mercury__integer__V_20_20;
#line 1269 "integer.m"
        MR_Word mercury__integer__V_29_29 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1269 "integer.m"
        MR_Word mercury__integer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1272 "integer.m"
        MR_Integer mercury__integer__V_13_13;

#line 1328 "integer.m"
        {
#line 1328 "integer.m"
          mercury__integer__V_19_19 = mercury__integer__printbase_pos_int_to_digits_2_3_f_0(mercury__integer__HeadVar__2_2, (MR_Integer) 16384, mercury__integer__V_29_29);
        }
#line 1287 "integer.m"
        {
#line 1287 "integer.m"
          mercury__integer__V_20_20 = mercury__integer__printbase_rep_1_4_f_0(mercury__integer__HeadVar__2_2, mercury__integer__HeadVar__3_3, mercury__integer__V_19_19, mercury__integer__V_29_29);
        }
#line 1272 "integer.m"
        mercury__integer__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_20_20, (MR_Integer) 0)));
#line 1272 "integer.m"
        mercury__integer__DigitsInPrintBase_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_20_20, (MR_Integer) 1)));
#line 1278 "integer.m"
        if ((mercury__integer__DigitsInPrintBase_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1279 "integer.m"
          {
#line 1280 "integer.m"
            {
#line 1280 "integer.m"
              mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.digits_to_string\'/3", (MR_String) "empty list");
            }
#line 1279 "integer.m"
          }
#line 1278 "integer.m"
        else
#line 1274 "integer.m"
          {
#line 1274 "integer.m"
            MR_Integer mercury__integer__Head_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__DigitsInPrintBase_14, (MR_Integer) 0)));
#line 1274 "integer.m"
            MR_Word mercury__integer__Tail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__DigitsInPrintBase_14, (MR_Integer) 1)));
#line 1274 "integer.m"
            MR_String mercury__integer__SHead_17;
#line 1274 "integer.m"
            MR_Word mercury__integer__Ss_18;
#line 1274 "integer.m"
            MR_Word mercury__integer__V_25_25;
#line 1274 "integer.m"
            MR_Word mercury__integer__V_26_26;

#line 1275 "integer.m"
            {
#line 1275 "integer.m"
              mercury__string__int_to_base_string_3_p_0(mercury__integer__Head_15, mercury__integer__HeadVar__1_1, &mercury__integer__SHead_17);
            }
#line 1276 "integer.m"
            mercury__integer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1276 "integer.m"
            {
#line 1276 "integer.m"
              mercury__integer__digits_to_strings_4_p_0(mercury__integer__HeadVar__1_1, mercury__integer__Tail_16, &mercury__integer__Ss_18, mercury__integer__V_25_25);
            }
#line 1277 "integer.m"
            {
#line 1277 "integer.m"
              mercury__integer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1277 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_26_26, 0) = ((MR_Box) (mercury__integer__SHead_17));
#line 1277 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_26_26, 1) = ((MR_Box) (mercury__integer__Ss_18));
#line 1277 "integer.m"
            }
#line 419 "string.opt"
            {
#line 419 "string.opt"
              return mercury__integer__HeadVar__4_4 = mercury__string__append_list_1_f_0(mercury__integer__V_26_26);
            }
#line 1274 "integer.m"
          }
#line 1269 "integer.m"
      }
#line 1268 "integer.m"
    return mercury__integer__HeadVar__4_4;
#line 1268 "integer.m"
  }
#line 1266 "integer.m"
}

#line 1225 "integer.m"
static MR_bool MR_CALL 
mercury__integer__string_to_integer_acc_2_f_0(
#line 1225 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1225 "integer.m"
  MR_Word mercury__integer__Acc_2,
#line 1225 "integer.m"
  MR_Word * mercury__integer__HeadVar__3_3)
#line 1225 "integer.m"
{
#line 1228 "integer.m"
  while (MR_TRUE)
#line 1228 "integer.m"
    {
#line 1228 "integer.m"
      /* tailcall optimized into a loop */
#line 1228 "integer.m"
      {
#line 1228 "integer.m"
        MR_bool mercury__integer__succeeded;

#line 1228 "integer.m"
        if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1228 "integer.m"
          {
#line 1228 "integer.m"
            *mercury__integer__HeadVar__3_3 = mercury__integer__Acc_2;
#line 1228 "integer.m"
            mercury__integer__succeeded = MR_TRUE;
#line 1228 "integer.m"
          }
#line 1228 "integer.m"
        else
#line 1229 "integer.m"
          {
#line 1229 "integer.m"
            MR_Char mercury__integer__C_5 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1229 "integer.m"
            MR_Word mercury__integer__Cs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1229 "integer.m"
            MR_Integer mercury__integer__Digit0_9;
#line 1229 "integer.m"
            MR_Integer mercury__integer__Z_10;
#line 1229 "integer.m"
            MR_Word mercury__integer__Digit_11;
#line 1229 "integer.m"
            MR_Word mercury__integer__NewAcc_12;
#line 1229 "integer.m"
            MR_Char mercury__integer__V_13_13;
#line 1229 "integer.m"
            MR_Integer mercury__integer__V_14_14;
#line 1229 "integer.m"
            MR_Word mercury__integer__V_15_15;
#line 1229 "integer.m"
            MR_Integer mercury__integer__V_16_16;
#line 1229 "integer.m"
            MR_Word mercury__integer__V_23_23;
#line 1229 "integer.m"
            MR_Integer mercury__integer__V_24_24;
#line 1229 "integer.m"
            MR_Word mercury__integer__V_25_25;
#line 1229 "integer.m"
            MR_Integer mercury__integer__Len_28;
#line 1229 "integer.m"
            MR_Word mercury__integer__Digits0_29;
#line 1229 "integer.m"
            MR_Integer mercury__integer__Mod_30;
#line 1229 "integer.m"
            MR_Word mercury__integer__Digits_31;
#line 1229 "integer.m"
            MR_Integer mercury__integer__L1_36;
#line 1229 "integer.m"
            MR_Integer mercury__integer__L2_38;
#line 1229 "integer.m"
            MR_Integer mercury__integer__Div_40;
#line 1229 "integer.m"
            MR_Word mercury__integer__Ds_41;
#line 1229 "integer.m"
            MR_Integer mercury__integer__Len_42;
#line 793 "integer.m"
            MR_Word mercury__integer__D1_37;
#line 793 "integer.m"
            MR_Word mercury__integer__D2_39;

#line 120 "char.opt"
            {
#line 120 "char.opt"
              mercury__integer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__integer__C_5);
            }
#line 1229 "integer.m"
            if (mercury__integer__succeeded)
#line 1229 "integer.m"
              {
#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__integer__string_to_integer_acc_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__integer__C_5 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 3505 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__Digit0_9  = Int;
#line 66 "char.opt"
}
#line 1236 "integer.m"
                mercury__integer__V_13_13 = (MR_Char) 48;
#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__integer__string_to_integer_acc_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__integer__V_13_13 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 3527 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__Z_10  = Int;
#line 66 "char.opt"
}
#line 1237 "integer.m"
                mercury__integer__V_14_14 = (mercury__integer__Digit0_9 - mercury__integer__Z_10);
#line 1188 "integer.m"
                mercury__integer__V_24_24 = (MR_Integer) 0;
#line 1188 "integer.m"
                mercury__integer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1188 "integer.m"
                mercury__integer__V_23_23 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 741 "integer.m"
                {
#line 741 "integer.m"
                  mercury__integer__Digit_11 = mercury__integer__pos_int_to_digits_2_2_f_0(mercury__integer__V_14_14, mercury__integer__V_23_23);
                }
#line 1238 "integer.m"
                mercury__integer__V_16_16 = (MR_Integer) 10;
#line 773 "integer.m"
                mercury__integer__Len_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Acc_2, (MR_Integer) 0)));
#line 773 "integer.m"
                mercury__integer__Digits0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Acc_2, (MR_Integer) 1)));
#line 774 "integer.m"
                {
#line 774 "integer.m"
                  mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__V_16_16, &mercury__integer__Mod_30, mercury__integer__Digits0_29, &mercury__integer__Digits_31);
                }
#line 775 "integer.m"
                mercury__integer__succeeded = (mercury__integer__Mod_30 == (MR_Integer) 0);
#line 775 "integer.m"
                if (mercury__integer__succeeded)
#line 775 "integer.m"
                  {
#line 775 "integer.m"
                    mercury__integer__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 775 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, 0) = ((MR_Box) (mercury__integer__Len_28));
#line 775 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, 1) = ((MR_Box) (mercury__integer__Digits_31));
#line 775 "integer.m"
                  }
#line 775 "integer.m"
                else
#line 775 "integer.m"
                  {
#line 775 "integer.m"
                    MR_Integer mercury__integer__V_32_32 = (mercury__integer__Len_28 + (MR_Integer) 1);
#line 775 "integer.m"
                    MR_Word mercury__integer__V_34_34;

#line 775 "integer.m"
                    {
#line 775 "integer.m"
                      mercury__integer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_34_34, 0) = ((MR_Box) (mercury__integer__Mod_30));
#line 775 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_34_34, 1) = ((MR_Box) (mercury__integer__Digits_31));
#line 775 "integer.m"
                    }
#line 775 "integer.m"
                    {
#line 775 "integer.m"
                      mercury__integer__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 775 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, 0) = ((MR_Box) (mercury__integer__V_32_32));
#line 775 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, 1) = ((MR_Box) (mercury__integer__V_34_34));
#line 775 "integer.m"
                    }
#line 775 "integer.m"
                  }
#line 793 "integer.m"
                mercury__integer__L1_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Digit_11, (MR_Integer) 0)));
#line 793 "integer.m"
                mercury__integer__D1_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Digit_11, (MR_Integer) 1)));
#line 793 "integer.m"
                mercury__integer__L2_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, (MR_Integer) 0)));
#line 793 "integer.m"
                mercury__integer__D2_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, (MR_Integer) 1)));
#line 794 "integer.m"
                {
#line 794 "integer.m"
                  mercury__integer__add_pairs_4_p_0(&mercury__integer__Div_40, mercury__integer__Digit_11, mercury__integer__V_15_15, &mercury__integer__Ds_41);
                }
#line 795 "integer.m"
                mercury__integer__succeeded = (mercury__integer__L1_36 > mercury__integer__L2_38);
#line 795 "integer.m"
                if (mercury__integer__succeeded)
#line 795 "integer.m"
                  mercury__integer__Len_42 = mercury__integer__L1_36;
#line 795 "integer.m"
                else
#line 795 "integer.m"
                  mercury__integer__Len_42 = mercury__integer__L2_38;
#line 796 "integer.m"
                mercury__integer__succeeded = (mercury__integer__Div_40 == (MR_Integer) 0);
#line 796 "integer.m"
                if (mercury__integer__succeeded)
#line 796 "integer.m"
                  {
#line 796 "integer.m"
                    mercury__integer__NewAcc_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 796 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__NewAcc_12, 0) = ((MR_Box) (mercury__integer__Len_42));
#line 796 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__NewAcc_12, 1) = ((MR_Box) (mercury__integer__Ds_41));
#line 796 "integer.m"
                  }
#line 796 "integer.m"
                else
#line 796 "integer.m"
                  {
#line 796 "integer.m"
                    MR_Integer mercury__integer__V_45_45 = (mercury__integer__Len_42 + (MR_Integer) 1);
#line 796 "integer.m"
                    MR_Word mercury__integer__V_47_47;

#line 796 "integer.m"
                    {
#line 796 "integer.m"
                      mercury__integer__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_47_47, 0) = ((MR_Box) (mercury__integer__Div_40));
#line 796 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_47_47, 1) = ((MR_Box) (mercury__integer__Ds_41));
#line 796 "integer.m"
                    }
#line 796 "integer.m"
                    {
#line 796 "integer.m"
                      mercury__integer__NewAcc_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 796 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__NewAcc_12, 0) = ((MR_Box) (mercury__integer__V_45_45));
#line 796 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__NewAcc_12, 1) = ((MR_Box) (mercury__integer__V_47_47));
#line 796 "integer.m"
                    }
#line 796 "integer.m"
                  }
#line 1239 "integer.m"
                /* direct tailcall eliminated */
#line 1239 "integer.m"
                {
#line 1239 "integer.m"
                  MR_Word mercury__integer__HeadVar__1__tmp_copy_1 = mercury__integer__Cs_6;
#line 1239 "integer.m"
                  MR_Word mercury__integer__Acc__tmp_copy_2 = mercury__integer__NewAcc_12;

#line 1239 "integer.m"
                  mercury__integer__Acc_2 = mercury__integer__Acc__tmp_copy_2;
#line 1239 "integer.m"
                  mercury__integer__HeadVar__1_1 = mercury__integer__HeadVar__1__tmp_copy_1;
#line 1239 "integer.m"
                }
#line 1239 "integer.m"
                continue;
#line 1229 "integer.m"
              }
#line 1229 "integer.m"
          }
#line 1228 "integer.m"
        return mercury__integer__succeeded;
#line 1228 "integer.m"
      }
#line 1228 "integer.m"
      break;
#line 1228 "integer.m"
    }
#line 1225 "integer.m"
}

#line 1211 "integer.m"
MR_bool MR_CALL 
mercury__integer__string_to_integer_1_f_0(
#line 1211 "integer.m"
  MR_Word mercury__integer__Chars_3,
#line 1211 "integer.m"
  MR_Word * mercury__integer__Integer_4)
#line 1211 "integer.m"
{
#line 1213 "integer.m"
  {
#line 1213 "integer.m"
    MR_bool mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__Chars_3)) == (MR_mktag((MR_Integer) 1)));
#line 1213 "integer.m"
    MR_Char mercury__integer__C_5;
#line 1213 "integer.m"
    MR_Word mercury__integer__Cs_6;

#line 1214 "integer.m"
    if (mercury__integer__succeeded)
#line 1214 "integer.m"
      {
#line 1214 "integer.m"
        mercury__integer__C_5 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Chars_3, (MR_Integer) 0)));
#line 1214 "integer.m"
        mercury__integer__Cs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Chars_3, (MR_Integer) 1)));
#line 1215 "integer.m"
        mercury__integer__succeeded = (mercury__integer__C_5 == (MR_Char) 45);
#line 1218 "integer.m"
        if (mercury__integer__succeeded)
#line 1216 "integer.m"
          {
#line 1216 "integer.m"
            MR_Integer mercury__integer__V_11_11;
#line 1216 "integer.m"
            MR_Word mercury__integer__V_12_12;
#line 1216 "integer.m"
            MR_Word mercury__integer__V_13_13;
#line 1216 "integer.m"
            MR_Integer mercury__integer__V_16_16;
#line 1216 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 1216 "integer.m"
            MR_Char mercury__integer__V_7_7;
#line 1216 "integer.m"
            MR_Word mercury__integer__V_8_8;

#line 1216 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__Cs_6)) == (MR_mktag((MR_Integer) 1)));
#line 1216 "integer.m"
            if (mercury__integer__succeeded)
#line 1216 "integer.m"
              {
#line 1216 "integer.m"
                mercury__integer__V_7_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Cs_6, (MR_Integer) 0)));
#line 1216 "integer.m"
                mercury__integer__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Cs_6, (MR_Integer) 1)));
#line 1217 "integer.m"
                mercury__integer__V_11_11 = (MR_Integer) -1;
#line 1188 "integer.m"
                mercury__integer__V_16_16 = (MR_Integer) 0;
#line 1188 "integer.m"
                mercury__integer__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1188 "integer.m"
                mercury__integer__V_13_13 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1217 "integer.m"
                {
#line 1217 "integer.m"
                  mercury__integer__succeeded = mercury__integer__string_to_integer_acc_2_f_0(mercury__integer__Cs_6, mercury__integer__V_13_13, &mercury__integer__V_12_12);
                }
#line 1216 "integer.m"
                if (mercury__integer__succeeded)
#line 1216 "integer.m"
                  {
#line 1217 "integer.m"
                    {
#line 1217 "integer.m"
                      *mercury__integer__Integer_4 = mercury__integer__big_sign_2_f_0(mercury__integer__V_11_11, mercury__integer__V_12_12);
                    }
#line 1217 "integer.m"
                    mercury__integer__succeeded = MR_TRUE;
#line 1216 "integer.m"
                  }
#line 1216 "integer.m"
              }
#line 1216 "integer.m"
          }
#line 1218 "integer.m"
        else
#line 1221 "integer.m"
          {
#line 1218 "integer.m"
            mercury__integer__succeeded = (mercury__integer__C_5 == (MR_Char) 43);
#line 1221 "integer.m"
            if (mercury__integer__succeeded)
#line 1219 "integer.m"
              {
#line 1219 "integer.m"
                MR_Word mercury__integer__V_14_14;
#line 1219 "integer.m"
                MR_Integer mercury__integer__V_18_18;
#line 1219 "integer.m"
                MR_Word mercury__integer__V_19_19;
#line 1219 "integer.m"
                MR_Char mercury__integer__V_9_9;
#line 1219 "integer.m"
                MR_Word mercury__integer__V_10_10;

#line 1219 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__Cs_6)) == (MR_mktag((MR_Integer) 1)));
#line 1219 "integer.m"
                if (mercury__integer__succeeded)
#line 1219 "integer.m"
                  {
#line 1219 "integer.m"
                    mercury__integer__V_9_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Cs_6, (MR_Integer) 0)));
#line 1219 "integer.m"
                    mercury__integer__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Cs_6, (MR_Integer) 1)));
#line 1188 "integer.m"
                    mercury__integer__V_18_18 = (MR_Integer) 0;
#line 1188 "integer.m"
                    mercury__integer__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1188 "integer.m"
                    mercury__integer__V_14_14 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1220 "integer.m"
                    {
#line 1220 "integer.m"
                      return mercury__integer__succeeded = mercury__integer__string_to_integer_acc_2_f_0(mercury__integer__Cs_6, mercury__integer__V_14_14, mercury__integer__Integer_4);
                    }
#line 1219 "integer.m"
                  }
#line 1219 "integer.m"
              }
#line 1221 "integer.m"
            else
#line 1222 "integer.m"
              {
#line 1222 "integer.m"
                MR_Word mercury__integer__V_15_15 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1222 "integer.m"
                MR_Word mercury__integer__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1222 "integer.m"
                {
#line 1222 "integer.m"
                  return mercury__integer__succeeded = mercury__integer__string_to_integer_acc_2_f_0(mercury__integer__Chars_3, mercury__integer__V_15_15, mercury__integer__Integer_4);
                }
#line 1222 "integer.m"
              }
#line 1221 "integer.m"
          }
#line 1214 "integer.m"
      }
#line 1213 "integer.m"
    return mercury__integer__succeeded;
#line 1213 "integer.m"
  }
#line 1211 "integer.m"
}

#line 1183 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__int_list_2_f_0(
#line 1183 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1183 "integer.m"
  MR_Integer mercury__integer__Accum_2)
#line 1183 "integer.m"
{
#line 1185 "integer.m"
  while (MR_TRUE)
#line 1185 "integer.m"
    {
#line 1185 "integer.m"
      /* tailcall optimized into a loop */
#line 1185 "integer.m"
      {
#line 1185 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1185 "integer.m"
        MR_Integer mercury__integer__HeadVar__3_3;

#line 1185 "integer.m"
        if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1185 "integer.m"
          mercury__integer__HeadVar__3_3 = mercury__integer__Accum_2;
#line 1185 "integer.m"
        else
#line 1186 "integer.m"
          {
#line 1186 "integer.m"
            MR_Integer mercury__integer__H_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1186 "integer.m"
            MR_Word mercury__integer__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1186 "integer.m"
            MR_Integer mercury__integer__V_8_8;
#line 1186 "integer.m"
            MR_Integer mercury__integer__V_9_9 = (mercury__integer__Accum_2 * (MR_Integer) 16384);

#line 1186 "integer.m"
            mercury__integer__V_8_8 = (mercury__integer__V_9_9 + mercury__integer__H_5);
#line 1186 "integer.m"
            /* direct tailcall eliminated */
#line 1186 "integer.m"
            {
#line 1186 "integer.m"
              MR_Word mercury__integer__HeadVar__1__tmp_copy_1 = mercury__integer__T_6;
#line 1186 "integer.m"
              MR_Integer mercury__integer__Accum__tmp_copy_2 = mercury__integer__V_8_8;

#line 1186 "integer.m"
              mercury__integer__Accum_2 = mercury__integer__Accum__tmp_copy_2;
#line 1186 "integer.m"
              mercury__integer__HeadVar__1_1 = mercury__integer__HeadVar__1__tmp_copy_1;
#line 1186 "integer.m"
            }
#line 1186 "integer.m"
            continue;
#line 1186 "integer.m"
          }
#line 1185 "integer.m"
        return mercury__integer__HeadVar__3_3;
#line 1185 "integer.m"
      }
#line 1185 "integer.m"
      break;
#line 1185 "integer.m"
    }
#line 1183 "integer.m"
}

#line 1161 "integer.m"
MR_Float MR_CALL 
mercury__integer__float_list_3_f_0(
#line 1161 "integer.m"
  MR_Float mercury__integer__FBase_1,
#line 1161 "integer.m"
  MR_Float mercury__integer__Accum_2,
#line 1161 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3)
#line 1161 "integer.m"
{
#line 1163 "integer.m"
  while (MR_TRUE)
#line 1163 "integer.m"
    {
#line 1163 "integer.m"
      /* tailcall optimized into a loop */
#line 1163 "integer.m"
      {
#line 1163 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1163 "integer.m"
        MR_Float mercury__integer__HeadVar__4_4;

#line 1163 "integer.m"
        if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1163 "integer.m"
          mercury__integer__HeadVar__4_4 = mercury__integer__Accum_2;
#line 1163 "integer.m"
        else
#line 1164 "integer.m"
          {
#line 1164 "integer.m"
            MR_Integer mercury__integer__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 1164 "integer.m"
            MR_Word mercury__integer__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 1164 "integer.m"
            MR_Float mercury__integer__V_11_11;
#line 1164 "integer.m"
            MR_Float mercury__integer__V_12_12 = (mercury__integer__Accum_2 * mercury__integer__FBase_1);
#line 1164 "integer.m"
            MR_Float mercury__integer__V_13_13;

#line 81 "float.opt"
{
#define MR_PROC_LABEL mercury__integer__float_list_3_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  mercury__integer__H_9 ;
		{
#line 81 "float.opt"

    FloatVal = IntVal;

#line 3990 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_13_13  = FloatVal;
#line 81 "float.opt"
}
#line 1165 "integer.m"
            mercury__integer__V_11_11 = (mercury__integer__V_12_12 + mercury__integer__V_13_13);
#line 1165 "integer.m"
            /* direct tailcall eliminated */
#line 1165 "integer.m"
            {
#line 1165 "integer.m"
              MR_Float mercury__integer__Accum__tmp_copy_2 = mercury__integer__V_11_11;
#line 1165 "integer.m"
              MR_Word mercury__integer__HeadVar__3__tmp_copy_3 = mercury__integer__T_10;

#line 1165 "integer.m"
              mercury__integer__HeadVar__3_3 = mercury__integer__HeadVar__3__tmp_copy_3;
#line 1165 "integer.m"
              mercury__integer__Accum_2 = mercury__integer__Accum__tmp_copy_2;
#line 1165 "integer.m"
            }
#line 1165 "integer.m"
            continue;
#line 1164 "integer.m"
          }
#line 1163 "integer.m"
        return mercury__integer__HeadVar__4_4;
#line 1163 "integer.m"
      }
#line 1163 "integer.m"
      break;
#line 1163 "integer.m"
    }
#line 1161 "integer.m"
}

#line 1144 "integer.m"
static MR_Word MR_CALL 
mercury__integer__bits_pow_4_f_0(
#line 1144 "integer.m"
  MR_Integer mercury__integer__Shifts_6,
#line 1144 "integer.m"
  MR_Integer mercury__integer__H_7,
#line 1144 "integer.m"
  MR_Word mercury__integer__A_8,
#line 1144 "integer.m"
  MR_Word mercury__integer__Accum_9)
#line 1144 "integer.m"
{
#line 1146 "integer.m"
  {
#line 1146 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__Shifts_6 <= (MR_Integer) 0);
#line 1146 "integer.m"
    MR_Word mercury__integer__HeadVar__5_5;

#line 1146 "integer.m"
    if (mercury__integer__succeeded)
#line 1148 "integer.m"
      mercury__integer__HeadVar__5_5 = mercury__integer__Accum_9;
#line 1146 "integer.m"
    else
#line 1151 "integer.m"
      {
#line 1149 "integer.m"
        MR_Integer mercury__integer__V_11_11 = (mercury__integer__H_7 & (MR_Integer) 1);

#line 1149 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_11_11 == (MR_Integer) 1);
#line 1151 "integer.m"
        if (mercury__integer__succeeded)
#line 1150 "integer.m"
          {
#line 1150 "integer.m"
            MR_Word mercury__integer__V_13_13;
#line 1150 "integer.m"
            MR_Integer mercury__integer__V_14_14 = (mercury__integer__H_7 & (MR_Integer) 16382);

#line 1150 "integer.m"
            {
#line 1150 "integer.m"
              mercury__integer__V_13_13 = mercury__integer__bits_pow_4_f_0(mercury__integer__Shifts_6, mercury__integer__V_14_14, mercury__integer__A_8, mercury__integer__Accum_9);
            }
#line 327 "integer.m"
            {
#line 327 "integer.m"
              return mercury__integer__HeadVar__5_5 = mercury__integer__big_mul_2_f_0(mercury__integer__A_8, mercury__integer__V_13_13);
            }
#line 1150 "integer.m"
          }
#line 1151 "integer.m"
        else
#line 1152 "integer.m"
          {
#line 1152 "integer.m"
            MR_Word mercury__integer__V_16_16;
#line 1152 "integer.m"
            MR_Integer mercury__integer__V_17_17 = (mercury__integer__Shifts_6 - (MR_Integer) 1);
#line 1152 "integer.m"
            MR_Integer mercury__integer__V_19_19 = (mercury__integer__H_7 >> (MR_Integer) 1);

#line 1152 "integer.m"
            {
#line 1152 "integer.m"
              mercury__integer__V_16_16 = mercury__integer__bits_pow_4_f_0(mercury__integer__V_17_17, mercury__integer__V_19_19, mercury__integer__A_8, mercury__integer__Accum_9);
            }
#line 327 "integer.m"
            {
#line 327 "integer.m"
              return mercury__integer__HeadVar__5_5 = mercury__integer__big_mul_2_f_0(mercury__integer__V_16_16, mercury__integer__V_16_16);
            }
#line 1152 "integer.m"
          }
#line 1151 "integer.m"
      }
#line 1146 "integer.m"
    return mercury__integer__HeadVar__5_5;
#line 1146 "integer.m"
  }
#line 1144 "integer.m"
}

#line 1138 "integer.m"
static MR_Word MR_CALL 
mercury__integer__bits_pow_list_3_f_0(
#line 1138 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1138 "integer.m"
  MR_Word mercury__integer__A_2,
#line 1138 "integer.m"
  MR_Word mercury__integer__Accum_3)
#line 1138 "integer.m"
{
#line 1140 "integer.m"
  while (MR_TRUE)
#line 1140 "integer.m"
    {
#line 1140 "integer.m"
      /* tailcall optimized into a loop */
#line 1140 "integer.m"
      {
#line 1140 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1140 "integer.m"
        MR_Word mercury__integer__HeadVar__4_4;

#line 1140 "integer.m"
        if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1140 "integer.m"
          mercury__integer__HeadVar__4_4 = mercury__integer__Accum_3;
#line 1140 "integer.m"
        else
#line 1141 "integer.m"
          {
#line 1141 "integer.m"
            MR_Integer mercury__integer__H_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1141 "integer.m"
            MR_Word mercury__integer__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1141 "integer.m"
            MR_Word mercury__integer__V_11_11;

#line 1142 "integer.m"
            {
#line 1142 "integer.m"
              mercury__integer__V_11_11 = mercury__integer__bits_pow_4_f_0((MR_Integer) 14, mercury__integer__H_7, mercury__integer__A_2, mercury__integer__Accum_3);
            }
#line 1142 "integer.m"
            /* direct tailcall eliminated */
#line 1142 "integer.m"
            {
#line 1142 "integer.m"
              MR_Word mercury__integer__HeadVar__1__tmp_copy_1 = mercury__integer__T_8;
#line 1142 "integer.m"
              MR_Word mercury__integer__Accum__tmp_copy_3 = mercury__integer__V_11_11;

#line 1142 "integer.m"
              mercury__integer__Accum_3 = mercury__integer__Accum__tmp_copy_3;
#line 1142 "integer.m"
              mercury__integer__HeadVar__1_1 = mercury__integer__HeadVar__1__tmp_copy_1;
#line 1142 "integer.m"
            }
#line 1142 "integer.m"
            continue;
#line 1141 "integer.m"
          }
#line 1140 "integer.m"
        return mercury__integer__HeadVar__4_4;
#line 1140 "integer.m"
      }
#line 1140 "integer.m"
      break;
#line 1140 "integer.m"
    }
#line 1138 "integer.m"
}

#line 1127 "integer.m"
static MR_Word MR_CALL 
mercury__integer__bits_pow_head_2_f_0(
#line 1127 "integer.m"
  MR_Integer mercury__integer__H_4,
#line 1127 "integer.m"
  MR_Word mercury__integer__A_5)
#line 1127 "integer.m"
{
#line 1129 "integer.m"
  {
#line 1129 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__H_4 == (MR_Integer) 0);
#line 1129 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 1129 "integer.m"
    if (mercury__integer__succeeded)
#line 1190 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 1129 "integer.m"
    else
#line 1134 "integer.m"
      {
#line 1132 "integer.m"
        MR_Integer mercury__integer__V_6_6 = (mercury__integer__H_4 & (MR_Integer) 1);

#line 1132 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_6_6 == (MR_Integer) 1);
#line 1134 "integer.m"
        if (mercury__integer__succeeded)
#line 1133 "integer.m"
          {
#line 1133 "integer.m"
            MR_Word mercury__integer__V_8_8;
#line 1133 "integer.m"
            MR_Integer mercury__integer__V_9_9 = (mercury__integer__H_4 & (MR_Integer) 16382);

#line 1133 "integer.m"
            {
#line 1133 "integer.m"
              mercury__integer__V_8_8 = mercury__integer__bits_pow_head_2_f_0(mercury__integer__V_9_9, mercury__integer__A_5);
            }
#line 327 "integer.m"
            {
#line 327 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__big_mul_2_f_0(mercury__integer__A_5, mercury__integer__V_8_8);
            }
#line 1133 "integer.m"
          }
#line 1134 "integer.m"
        else
#line 1135 "integer.m"
          {
#line 1135 "integer.m"
            MR_Word mercury__integer__V_11_11;
#line 1135 "integer.m"
            MR_Integer mercury__integer__V_12_12 = (mercury__integer__H_4 >> (MR_Integer) 1);

#line 1135 "integer.m"
            {
#line 1135 "integer.m"
              mercury__integer__V_11_11 = mercury__integer__bits_pow_head_2_f_0(mercury__integer__V_12_12, mercury__integer__A_5);
            }
#line 327 "integer.m"
            {
#line 327 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__big_mul_2_f_0(mercury__integer__V_11_11, mercury__integer__V_11_11);
            }
#line 1135 "integer.m"
          }
#line 1134 "integer.m"
      }
#line 1129 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 1129 "integer.m"
  }
#line 1127 "integer.m"
}

#line 1110 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_pow_2_f_0(
#line 1110 "integer.m"
  MR_Word mercury__integer__A_4,
#line 1110 "integer.m"
  MR_Word mercury__integer__N_5)
#line 1110 "integer.m"
{
#line 1112 "integer.m"
  {
#line 1112 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1112 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 1113 "integer.m"
    MR_Word mercury__integer__V_11_11 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1113 "integer.m"
    MR_Word mercury__integer__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1113 "integer.m"
    {
#line 1113 "integer.m"
      mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__N_5, mercury__integer__V_11_11);
    }
#line 1112 "integer.m"
    if (mercury__integer__succeeded)
#line 1190 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 1112 "integer.m"
    else
#line 1117 "integer.m"
      {
#line 1115 "integer.m"
        MR_Word mercury__integer__V_12_12 = (MR_Word) &mercury__integer_scalar_common_1[2];

#line 1115 "integer.m"
        {
#line 1115 "integer.m"
          mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__N_5, mercury__integer__V_12_12);
        }
#line 1117 "integer.m"
        if (mercury__integer__succeeded)
#line 1116 "integer.m"
          mercury__integer__HeadVar__3_3 = mercury__integer__A_4;
#line 1117 "integer.m"
        else
#line 1119 "integer.m"
          {
#line 1117 "integer.m"
            MR_Word mercury__integer__V_13_13 = (MR_Word) &mercury__integer_scalar_common_1[2];

#line 1117 "integer.m"
            {
#line 1117 "integer.m"
              mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__A_4, mercury__integer__V_13_13);
            }
#line 1119 "integer.m"
            if (mercury__integer__succeeded)
#line 1190 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 1119 "integer.m"
            else
#line 1121 "integer.m"
              {
#line 1121 "integer.m"
                MR_Word mercury__integer__V_14_14 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1119 "integer.m"
                MR_Word mercury__integer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1119 "integer.m"
                {
#line 1119 "integer.m"
                  mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__A_4, mercury__integer__V_14_14);
                }
#line 1121 "integer.m"
                if (mercury__integer__succeeded)
#line 1188 "integer.m"
                  mercury__integer__HeadVar__3_3 = mercury__integer__V_14_14;
#line 1121 "integer.m"
                else
#line 1123 "integer.m"
                  {
#line 1123 "integer.m"
                    MR_Integer mercury__integer__Head_7;
#line 1123 "integer.m"
                    MR_Word mercury__integer__Tail_8;
#line 1121 "integer.m"
                    MR_Word mercury__integer__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__N_5, (MR_Integer) 1)));
#line 1121 "integer.m"
                    MR_Integer mercury__integer__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__N_5, (MR_Integer) 0)));

#line 1121 "integer.m"
                    mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 1121 "integer.m"
                    if (mercury__integer__succeeded)
#line 1121 "integer.m"
                      {
#line 1121 "integer.m"
                        mercury__integer__Head_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, (MR_Integer) 0)));
#line 1121 "integer.m"
                        mercury__integer__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, (MR_Integer) 1)));
#line 1122 "integer.m"
                        {
#line 1122 "integer.m"
                          MR_Word mercury__integer__V_10_10;

#line 1122 "integer.m"
                          {
#line 1122 "integer.m"
                            mercury__integer__V_10_10 = mercury__integer__bits_pow_head_2_f_0(mercury__integer__Head_7, mercury__integer__A_4);
                          }
#line 1122 "integer.m"
                          {
#line 1122 "integer.m"
                            return mercury__integer__HeadVar__3_3 = mercury__integer__bits_pow_list_3_f_0(mercury__integer__Tail_8, mercury__integer__A_4, mercury__integer__V_10_10);
                          }
#line 1122 "integer.m"
                        }
#line 1121 "integer.m"
                      }
#line 1121 "integer.m"
                    else
#line 1188 "integer.m"
                      {
#line 1188 "integer.m"
                        MR_Word mercury__integer__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1188 "integer.m"
                        mercury__integer__HeadVar__3_3 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1188 "integer.m"
                      }
#line 1123 "integer.m"
                  }
#line 1121 "integer.m"
              }
#line 1119 "integer.m"
          }
#line 1117 "integer.m"
      }
#line 1112 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 1112 "integer.m"
  }
#line 1110 "integer.m"
}

#line 1095 "integer.m"
static MR_bool MR_CALL 
mercury__integer__pos_geq_2_p_0(
#line 1095 "integer.m"
  MR_Word mercury__integer__Xs_3,
#line 1095 "integer.m"
  MR_Word mercury__integer__Ys_4)
#line 1095 "integer.m"
{
#line 1097 "integer.m"
  {
#line 1097 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1097 "integer.m"
    MR_Word mercury__integer__C_5;

#line 666 "integer.m"
    {
#line 666 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__Xs_3, mercury__integer__Ys_4);
    }
#line 1100 "integer.m"
    if ((mercury__integer__C_5 == (MR_Integer) 0))
#line 1100 "integer.m"
      mercury__integer__succeeded = MR_TRUE;
#line 1100 "integer.m"
    else
#line 1100 "integer.m"
    if ((mercury__integer__C_5 == (MR_Integer) 2))
#line 1099 "integer.m"
      mercury__integer__succeeded = MR_TRUE;
#line 1100 "integer.m"
    else
#line 1100 "integer.m"
      mercury__integer__succeeded = MR_FALSE;
#line 1097 "integer.m"
    return mercury__integer__succeeded;
#line 1097 "integer.m"
  }
#line 1095 "integer.m"
}

#line 1084 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_3_f_0(
#line 1084 "integer.m"
  MR_Integer mercury__integer__X_1,
#line 1084 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1084 "integer.m"
  MR_Integer mercury__integer__D_3)
#line 1084 "integer.m"
{
#line 1086 "integer.m"
  {
#line 1086 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1086 "integer.m"
    MR_Word mercury__integer__HeadVar__4_4;

#line 1086 "integer.m"
    if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1086 "integer.m"
      {
#line 1086 "integer.m"
        MR_Word mercury__integer__V_8_8;
#line 1086 "integer.m"
        MR_Integer mercury__integer__V_9_9;
#line 1086 "integer.m"
        MR_Word mercury__integer__V_10_10;

#line 1086 "integer.m"
        {
#line 1086 "integer.m"
          mercury__integer__V_9_9 = mercury__int__div_2_f_0(mercury__integer__X_1, mercury__integer__D_3);
        }
#line 1086 "integer.m"
        mercury__integer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1086 "integer.m"
        {
#line 1086 "integer.m"
          mercury__integer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_8_8, 0) = ((MR_Box) (mercury__integer__V_9_9));
#line 1086 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_8_8, 1) = ((MR_Box) (mercury__integer__V_10_10));
#line 1086 "integer.m"
        }
#line 1086 "integer.m"
        {
#line 1086 "integer.m"
          mercury__integer__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1086 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 1086 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, 1) = ((MR_Box) (mercury__integer__V_8_8));
#line 1086 "integer.m"
        }
#line 1086 "integer.m"
      }
#line 1086 "integer.m"
    else
#line 1087 "integer.m"
      {
#line 1087 "integer.m"
        MR_Integer mercury__integer__H_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 1087 "integer.m"
        MR_Word mercury__integer__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1087 "integer.m"
        MR_Integer mercury__integer__Len_15;
#line 1087 "integer.m"
        MR_Word mercury__integer__Tail_16;
#line 1087 "integer.m"
        MR_Integer mercury__integer__V_17_17;
#line 1087 "integer.m"
        MR_Word mercury__integer__V_19_19;
#line 1087 "integer.m"
        MR_Integer mercury__integer__V_20_20;
#line 1087 "integer.m"
        MR_Word mercury__integer__V_21_21;
#line 1087 "integer.m"
        MR_Integer mercury__integer__V_22_22;
#line 1087 "integer.m"
        MR_Integer mercury__integer__V_23_23;
#line 1087 "integer.m"
        MR_Integer mercury__integer__V_24_24;

#line 1087 "integer.m"
        {
#line 1087 "integer.m"
          mercury__integer__V_20_20 = mercury__int__div_2_f_0(mercury__integer__X_1, mercury__integer__D_3);
        }
#line 303 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__div_by_digit_2_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 303 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 4563 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 303 "int.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 117 "int.opt"
        if (mercury__integer__succeeded)
#line 118 "int.opt"
          mercury__integer__succeeded = (mercury__integer__D_3 == (MR_Integer) 0);
#line 123 "int.opt"
        if (mercury__integer__succeeded)
#line 120 "int.opt"
          {
#line 120 "int.opt"
            MR_Word mercury__integer__TypeCtorInfo_9_31 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 120 "int.opt"
            MR_Word mercury__integer__V_7_29 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

#line 122 "int.opt"
            {
#line 122 "int.opt"
              mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_31, ((MR_Box) (mercury__integer__V_7_29)));
            }
#line 120 "int.opt"
          }
#line 123 "int.opt"
        else
#line 124 "int.opt"
          mercury__integer__V_24_24 = (mercury__integer__X_1 % mercury__integer__D_3);
#line 1088 "integer.m"
        mercury__integer__V_23_23 = (mercury__integer__V_24_24 * (MR_Integer) 16384);
#line 1088 "integer.m"
        mercury__integer__V_22_22 = (mercury__integer__V_23_23 + mercury__integer__H_12);
#line 1088 "integer.m"
        {
#line 1088 "integer.m"
          mercury__integer__V_21_21 = mercury__integer__div_by_digit_2_3_f_0(mercury__integer__V_22_22, mercury__integer__T_13, mercury__integer__D_3);
        }
#line 1088 "integer.m"
        mercury__integer__Len_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_21_21, (MR_Integer) 0)));
#line 1088 "integer.m"
        mercury__integer__Tail_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_21_21, (MR_Integer) 1)));
#line 1087 "integer.m"
        mercury__integer__V_17_17 = (mercury__integer__Len_15 + (MR_Integer) 1);
#line 1087 "integer.m"
        {
#line 1087 "integer.m"
          mercury__integer__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1087 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 1087 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__Tail_16));
#line 1087 "integer.m"
        }
#line 1087 "integer.m"
        {
#line 1087 "integer.m"
          mercury__integer__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1087 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, 0) = ((MR_Box) (mercury__integer__V_17_17));
#line 1087 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, 1) = ((MR_Box) (mercury__integer__V_19_19));
#line 1087 "integer.m"
        }
#line 1087 "integer.m"
      }
#line 1086 "integer.m"
    return mercury__integer__HeadVar__4_4;
#line 1086 "integer.m"
  }
#line 1084 "integer.m"
}

#line 1071 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_1_3_f_0(
#line 1071 "integer.m"
  MR_Integer mercury__integer__X_1,
#line 1071 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1071 "integer.m"
  MR_Integer mercury__integer__D_3)
#line 1071 "integer.m"
{
#line 1073 "integer.m"
  while (MR_TRUE)
#line 1073 "integer.m"
    {
#line 1073 "integer.m"
      /* tailcall optimized into a loop */
#line 1073 "integer.m"
      {
#line 1073 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1073 "integer.m"
        MR_Word mercury__integer__Integer_4;

#line 1073 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1073 "integer.m"
          {
#line 1073 "integer.m"
            MR_Integer mercury__integer__Q_7;

#line 1074 "integer.m"
            {
#line 1074 "integer.m"
              mercury__integer__Q_7 = mercury__int__div_2_f_0(mercury__integer__X_1, mercury__integer__D_3);
            }
#line 1073 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Q_7 == (MR_Integer) 0);
#line 1073 "integer.m"
            if (mercury__integer__succeeded)
#line 1188 "integer.m"
              {
#line 1188 "integer.m"
                MR_Word mercury__integer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1188 "integer.m"
                mercury__integer__Integer_4 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1188 "integer.m"
              }
#line 1073 "integer.m"
            else
#line 1073 "integer.m"
              {
#line 1073 "integer.m"
                MR_Word mercury__integer__V_9_9;
#line 1073 "integer.m"
                MR_Word mercury__integer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1073 "integer.m"
                {
#line 1073 "integer.m"
                  mercury__integer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, 0) = ((MR_Box) (mercury__integer__Q_7));
#line 1073 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, 1) = ((MR_Box) (mercury__integer__V_10_10));
#line 1073 "integer.m"
                }
#line 1073 "integer.m"
                {
#line 1073 "integer.m"
                  mercury__integer__Integer_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1073 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 1073 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 1) = ((MR_Box) (mercury__integer__V_9_9));
#line 1073 "integer.m"
                }
#line 1073 "integer.m"
              }
#line 1073 "integer.m"
          }
#line 1073 "integer.m"
        else
#line 1075 "integer.m"
          {
#line 1075 "integer.m"
            MR_Integer mercury__integer__H_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 1075 "integer.m"
            MR_Word mercury__integer__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1075 "integer.m"
            MR_Integer mercury__integer__Q_16;

#line 1076 "integer.m"
            {
#line 1076 "integer.m"
              mercury__integer__Q_16 = mercury__int__div_2_f_0(mercury__integer__X_1, mercury__integer__D_3);
            }
#line 1077 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Q_16 == (MR_Integer) 0);
#line 1079 "integer.m"
            if (mercury__integer__succeeded)
#line 1078 "integer.m"
              {
#line 1078 "integer.m"
                MR_Integer mercury__integer__V_19_19;
#line 1078 "integer.m"
                MR_Integer mercury__integer__V_20_20;
#line 1078 "integer.m"
                MR_Integer mercury__integer__V_21_21;

#line 303 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__div_by_digit_1_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 303 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 4766 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 303 "int.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 117 "int.opt"
                if (mercury__integer__succeeded)
#line 118 "int.opt"
                  mercury__integer__succeeded = (mercury__integer__D_3 == (MR_Integer) 0);
#line 123 "int.opt"
                if (mercury__integer__succeeded)
#line 120 "int.opt"
                  {
#line 120 "int.opt"
                    MR_Word mercury__integer__TypeCtorInfo_9_38 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 120 "int.opt"
                    MR_Word mercury__integer__V_7_36 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

#line 122 "int.opt"
                    {
#line 122 "int.opt"
                      mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_38, ((MR_Box) (mercury__integer__V_7_36)));
                    }
#line 120 "int.opt"
                  }
#line 123 "int.opt"
                else
#line 124 "int.opt"
                  mercury__integer__V_21_21 = (mercury__integer__X_1 % mercury__integer__D_3);
#line 1078 "integer.m"
                mercury__integer__V_20_20 = (mercury__integer__V_21_21 * (MR_Integer) 16384);
#line 1078 "integer.m"
                mercury__integer__V_19_19 = (mercury__integer__V_20_20 + mercury__integer__H_12);
#line 1078 "integer.m"
                /* direct tailcall eliminated */
#line 1078 "integer.m"
                {
#line 1078 "integer.m"
                  MR_Integer mercury__integer__X__tmp_copy_1 = mercury__integer__V_19_19;
#line 1078 "integer.m"
                  MR_Word mercury__integer__HeadVar__2__tmp_copy_2 = mercury__integer__T_13;

#line 1078 "integer.m"
                  mercury__integer__HeadVar__2_2 = mercury__integer__HeadVar__2__tmp_copy_2;
#line 1078 "integer.m"
                  mercury__integer__X_1 = mercury__integer__X__tmp_copy_1;
#line 1078 "integer.m"
                }
#line 1078 "integer.m"
                continue;
#line 1078 "integer.m"
              }
#line 1079 "integer.m"
            else
#line 1080 "integer.m"
              {
#line 1080 "integer.m"
                MR_Integer mercury__integer__L_17;
#line 1080 "integer.m"
                MR_Word mercury__integer__Ds_18;
#line 1080 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 1080 "integer.m"
                MR_Integer mercury__integer__V_24_24;
#line 1080 "integer.m"
                MR_Integer mercury__integer__V_25_25;
#line 1080 "integer.m"
                MR_Integer mercury__integer__V_26_26;
#line 1080 "integer.m"
                MR_Integer mercury__integer__V_28_28;
#line 1080 "integer.m"
                MR_Word mercury__integer__V_30_30;

#line 303 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__div_by_digit_1_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 303 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 4858 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 303 "int.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 117 "int.opt"
                if (mercury__integer__succeeded)
#line 118 "int.opt"
                  mercury__integer__succeeded = (mercury__integer__D_3 == (MR_Integer) 0);
#line 123 "int.opt"
                if (mercury__integer__succeeded)
#line 120 "int.opt"
                  {
#line 120 "int.opt"
                    MR_Word mercury__integer__TypeCtorInfo_9_44 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 120 "int.opt"
                    MR_Word mercury__integer__V_7_42 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

#line 122 "int.opt"
                    {
#line 122 "int.opt"
                      mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_44, ((MR_Box) (mercury__integer__V_7_42)));
                    }
#line 120 "int.opt"
                  }
#line 123 "int.opt"
                else
#line 124 "int.opt"
                  mercury__integer__V_26_26 = (mercury__integer__X_1 % mercury__integer__D_3);
#line 1080 "integer.m"
                mercury__integer__V_25_25 = (mercury__integer__V_26_26 * (MR_Integer) 16384);
#line 1080 "integer.m"
                mercury__integer__V_24_24 = (mercury__integer__V_25_25 + mercury__integer__H_12);
#line 1080 "integer.m"
                {
#line 1080 "integer.m"
                  mercury__integer__V_23_23 = mercury__integer__div_by_digit_2_3_f_0(mercury__integer__V_24_24, mercury__integer__T_13, mercury__integer__D_3);
                }
#line 1080 "integer.m"
                mercury__integer__L_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 0)));
#line 1080 "integer.m"
                mercury__integer__Ds_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 1)));
#line 1081 "integer.m"
                mercury__integer__V_28_28 = (mercury__integer__L_17 + (MR_Integer) 1);
#line 1081 "integer.m"
                {
#line 1081 "integer.m"
                  mercury__integer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_30_30, 0) = ((MR_Box) (mercury__integer__Q_16));
#line 1081 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_30_30, 1) = ((MR_Box) (mercury__integer__Ds_18));
#line 1081 "integer.m"
                }
#line 1081 "integer.m"
                {
#line 1081 "integer.m"
                  mercury__integer__Integer_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1081 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 0) = ((MR_Box) (mercury__integer__V_28_28));
#line 1081 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 1) = ((MR_Box) (mercury__integer__V_30_30));
#line 1081 "integer.m"
                }
#line 1080 "integer.m"
              }
#line 1075 "integer.m"
          }
#line 1073 "integer.m"
        return mercury__integer__Integer_4;
#line 1073 "integer.m"
      }
#line 1073 "integer.m"
      break;
#line 1073 "integer.m"
    }
#line 1071 "integer.m"
}

#line 1066 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_f_0(
#line 1066 "integer.m"
  MR_Integer mercury__integer__Digit_1,
#line 1066 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 1066 "integer.m"
{
#line 1068 "integer.m"
  {
#line 1068 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1068 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 1068 "integer.m"
    MR_Word mercury__integer__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1068 "integer.m"
    MR_Integer mercury__integer__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));

#line 1068 "integer.m"
    if ((mercury__integer__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1188 "integer.m"
      {
#line 1188 "integer.m"
        MR_Word mercury__integer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1188 "integer.m"
        mercury__integer__HeadVar__3_3 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1188 "integer.m"
      }
#line 1068 "integer.m"
    else
#line 1069 "integer.m"
      {
#line 1069 "integer.m"
        MR_Integer mercury__integer__X_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_12_12, (MR_Integer) 0)));
#line 1069 "integer.m"
        MR_Word mercury__integer__Xs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_12_12, (MR_Integer) 1)));

#line 1069 "integer.m"
        {
#line 1069 "integer.m"
          return mercury__integer__HeadVar__3_3 = mercury__integer__div_by_digit_1_3_f_0(mercury__integer__X_9, mercury__integer__Xs_10, mercury__integer__Digit_1);
        }
#line 1069 "integer.m"
      }
#line 1068 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 1068 "integer.m"
  }
#line 1066 "integer.m"
}

#line 1062 "integer.m"
static MR_Word MR_CALL 
mercury__integer__integer_prepend_2_f_0(
#line 1062 "integer.m"
  MR_Integer mercury__integer__Digit_4,
#line 1062 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 1062 "integer.m"
{
#line 1064 "integer.m"
  {
#line 1064 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1064 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 1064 "integer.m"
    MR_Integer mercury__integer__L_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 1064 "integer.m"
    MR_Word mercury__integer__List_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1064 "integer.m"
    MR_Integer mercury__integer__V_7_7 = (mercury__integer__L_5 + (MR_Integer) 1);
#line 1064 "integer.m"
    MR_Word mercury__integer__V_9_9;

#line 1064 "integer.m"
    {
#line 1064 "integer.m"
      mercury__integer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "integer.m"
      MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, 0) = ((MR_Box) (mercury__integer__Digit_4));
#line 1064 "integer.m"
      MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, 1) = ((MR_Box) (mercury__integer__List_6));
#line 1064 "integer.m"
    }
#line 1064 "integer.m"
    {
#line 1064 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1064 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_7_7));
#line 1064 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_9_9));
#line 1064 "integer.m"
    }
#line 1064 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 1064 "integer.m"
  }
#line 1062 "integer.m"
}

#line 1057 "integer.m"
static MR_Word MR_CALL 
mercury__integer__integer_append_2_f_0(
#line 1057 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1057 "integer.m"
  MR_Integer mercury__integer__Digit_6)
#line 1057 "integer.m"
{
#line 1059 "integer.m"
  {
#line 1059 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1059 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 1059 "integer.m"
    MR_Word mercury__integer__TypeCtorInfo_12_12;
#line 1059 "integer.m"
    MR_Integer mercury__integer__L_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1059 "integer.m"
    MR_Word mercury__integer__List_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1059 "integer.m"
    MR_Word mercury__integer__NewList_7;
#line 1059 "integer.m"
    MR_Integer mercury__integer__V_8_8 = (mercury__integer__L_4 + (MR_Integer) 1);
#line 1059 "integer.m"
    MR_Word mercury__integer__V_10_10;
#line 1059 "integer.m"
    MR_Word mercury__integer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1060 "integer.m"
    {
#line 1060 "integer.m"
      mercury__integer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1060 "integer.m"
      MR_hl_field(MR_mktag(1), mercury__integer__V_10_10, 0) = ((MR_Box) (mercury__integer__Digit_6));
#line 1060 "integer.m"
      MR_hl_field(MR_mktag(1), mercury__integer__V_10_10, 1) = ((MR_Box) (mercury__integer__V_11_11));
#line 1060 "integer.m"
    }
#line 5086 "integer.c"
    mercury__integer__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1060 "integer.m"
    {
#line 1060 "integer.m"
      mercury__list__append_3_p_1(mercury__integer__TypeCtorInfo_12_12, mercury__integer__List_5, mercury__integer__V_10_10, &mercury__integer__NewList_7);
    }
#line 1059 "integer.m"
    {
#line 1059 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1059 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_8_8));
#line 1059 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__NewList_7));
#line 1059 "integer.m"
    }
#line 1059 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 1059 "integer.m"
  }
#line 1057 "integer.m"
}

#line 1046 "integer.m"
static MR_Word MR_CALL 
mercury__integer__det_tail_1_f_0(
#line 1046 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 1046 "integer.m"
{
#line 1048 "integer.m"
  {
#line 1048 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1048 "integer.m"
    MR_Word mercury__integer__I_5;
#line 1048 "integer.m"
    MR_Integer mercury__integer__Len_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1048 "integer.m"
    MR_Word mercury__integer__Digits_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

#line 1052 "integer.m"
    if ((mercury__integer__Digits_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1050 "integer.m"
      {
#line 1051 "integer.m"
        {
#line 1051 "integer.m"
          mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_tail\'/1", (MR_String) "empty list");
        }
#line 1050 "integer.m"
      }
#line 1052 "integer.m"
    else
#line 1053 "integer.m"
      {
#line 1053 "integer.m"
        MR_Word mercury__integer__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 1)));
#line 1053 "integer.m"
        MR_Integer mercury__integer__V_8_8 = (mercury__integer__Len_3 - (MR_Integer) 1);
#line 1053 "integer.m"
        MR_Integer mercury__integer__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 0)));

#line 1054 "integer.m"
        {
#line 1054 "integer.m"
          mercury__integer__I_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1054 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__I_5, 0) = ((MR_Box) (mercury__integer__V_8_8));
#line 1054 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__I_5, 1) = ((MR_Box) (mercury__integer__T_7));
#line 1054 "integer.m"
        }
#line 1053 "integer.m"
      }
#line 1048 "integer.m"
    return mercury__integer__I_5;
#line 1048 "integer.m"
  }
#line 1046 "integer.m"
}

#line 1033 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__det_second_1_f_0(
#line 1033 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 1033 "integer.m"
{
#line 1035 "integer.m"
  {
#line 1035 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1035 "integer.m"
    MR_Integer mercury__integer__Second_5;
#line 1035 "integer.m"
    MR_Word mercury__integer__Digits_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1035 "integer.m"
    MR_Integer mercury__integer__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 1039 "integer.m"
    if ((mercury__integer__Digits_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1037 "integer.m"
      {
#line 1038 "integer.m"
        {
#line 1038 "integer.m"
          mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_second\'/1", (MR_String) "empty list");
        }
#line 1037 "integer.m"
      }
#line 1039 "integer.m"
    else
#line 1039 "integer.m"
      {
#line 1039 "integer.m"
        MR_Word mercury__integer__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 1)));
#line 1040 "integer.m"
        MR_Integer mercury__integer__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 0)));

#line 1039 "integer.m"
        if ((mercury__integer__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1040 "integer.m"
          {
#line 1041 "integer.m"
            {
#line 1041 "integer.m"
              mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_second\'/1", (MR_String) "short list");
            }
#line 1040 "integer.m"
          }
#line 1039 "integer.m"
        else
#line 1043 "integer.m"
          {
#line 1043 "integer.m"
            MR_Word mercury__integer__V_8_8;

#line 1043 "integer.m"
            mercury__integer__Second_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 1043 "integer.m"
            mercury__integer__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 1043 "integer.m"
          }
#line 1039 "integer.m"
      }
#line 1035 "integer.m"
    return mercury__integer__Second_5;
#line 1035 "integer.m"
  }
#line 1033 "integer.m"
}

#line 1023 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__det_first_1_f_0(
#line 1023 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 1023 "integer.m"
{
#line 1025 "integer.m"
  {
#line 1025 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1025 "integer.m"
    MR_Integer mercury__integer__First_5;
#line 1025 "integer.m"
    MR_Word mercury__integer__Digits_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1025 "integer.m"
    MR_Integer mercury__integer__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 1029 "integer.m"
    if ((mercury__integer__Digits_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1027 "integer.m"
      {
#line 1028 "integer.m"
        {
#line 1028 "integer.m"
          mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_first\'/1", (MR_String) "empty list");
        }
#line 1027 "integer.m"
      }
#line 1029 "integer.m"
    else
#line 1030 "integer.m"
      {
#line 1030 "integer.m"
        MR_Word mercury__integer__V_6_6;

#line 1030 "integer.m"
        mercury__integer__First_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 0)));
#line 1030 "integer.m"
        mercury__integer__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 1)));
#line 1030 "integer.m"
      }
#line 1025 "integer.m"
    return mercury__integer__First_5;
#line 1025 "integer.m"
  }
#line 1023 "integer.m"
}

#line 1018 "integer.m"
static MR_Word MR_CALL 
mercury__integer__decap_1_f_0(
#line 1018 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 1018 "integer.m"
{
#line 1020 "integer.m"
  while (MR_TRUE)
#line 1020 "integer.m"
    {
#line 1020 "integer.m"
      /* tailcall optimized into a loop */
#line 1020 "integer.m"
      {
#line 1020 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1020 "integer.m"
        MR_Word mercury__integer__HeadVar__2_2;
#line 1020 "integer.m"
        MR_Word mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1020 "integer.m"
        MR_Integer mercury__integer__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 1020 "integer.m"
        if ((mercury__integer__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1188 "integer.m"
          {
#line 1188 "integer.m"
            MR_Word mercury__integer__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1188 "integer.m"
            mercury__integer__HeadVar__2_2 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1188 "integer.m"
          }
#line 1020 "integer.m"
        else
#line 1021 "integer.m"
          {
#line 1021 "integer.m"
            MR_Integer mercury__integer__H_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_13_13, (MR_Integer) 0)));
#line 1021 "integer.m"
            MR_Word mercury__integer__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_13_13, (MR_Integer) 1)));

#line 1021 "integer.m"
            mercury__integer__succeeded = (mercury__integer__H_6 == (MR_Integer) 0);
#line 1021 "integer.m"
            if (mercury__integer__succeeded)
#line 1021 "integer.m"
              {
#line 1021 "integer.m"
                MR_Word mercury__integer__V_9_9;
#line 1021 "integer.m"
                MR_Integer mercury__integer__V_10_10 = (mercury__integer__V_14_14 - (MR_Integer) 1);

#line 1021 "integer.m"
                {
#line 1021 "integer.m"
                  mercury__integer__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1021 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 0) = ((MR_Box) (mercury__integer__V_10_10));
#line 1021 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 1) = ((MR_Box) (mercury__integer__T_7));
#line 1021 "integer.m"
                }
#line 1021 "integer.m"
                /* direct tailcall eliminated */
#line 1021 "integer.m"
                {
#line 1021 "integer.m"
                  MR_Word mercury__integer__HeadVar__1__tmp_copy_1 = mercury__integer__V_9_9;

#line 1021 "integer.m"
                  mercury__integer__HeadVar__1_1 = mercury__integer__HeadVar__1__tmp_copy_1;
#line 1021 "integer.m"
                }
#line 1021 "integer.m"
                continue;
#line 1021 "integer.m"
              }
#line 1021 "integer.m"
            else
#line 1021 "integer.m"
              mercury__integer__HeadVar__2_2 = mercury__integer__HeadVar__1_1;
#line 1021 "integer.m"
          }
#line 1020 "integer.m"
        return mercury__integer__HeadVar__2_2;
#line 1020 "integer.m"
      }
#line 1020 "integer.m"
      break;
#line 1020 "integer.m"
    }
#line 1018 "integer.m"
}

#line 968 "integer.m"
static void MR_CALL 
mercury__integer__quot_rem_2_5_p_0(
#line 968 "integer.m"
  MR_Word mercury__integer__Ur_6,
#line 968 "integer.m"
  MR_Word mercury__integer__U_7,
#line 968 "integer.m"
  MR_Word mercury__integer__V_8,
#line 968 "integer.m"
  MR_Word * mercury__integer__Quot_9,
#line 968 "integer.m"
  MR_Word * mercury__integer__Rem_10)
#line 968 "integer.m"
{
#line 982 "integer.m"
  {
#line 982 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1092 "integer.m"
    MR_Word mercury__integer__V_61_61;

#line 666 "integer.m"
    {
#line 666 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__V_61_61, mercury__integer__Ur_6, mercury__integer__V_8);
    }
#line 1093 "integer.m"
    mercury__integer__succeeded = ((MR_Integer) 1 == mercury__integer__V_61_61);
#line 982 "integer.m"
    if (mercury__integer__succeeded)
#line 978 "integer.m"
      {
#line 978 "integer.m"
        MR_Integer mercury__integer__Ua_12;
#line 973 "integer.m"
        MR_Word mercury__integer__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 1)));
#line 973 "integer.m"
        MR_Integer mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 0)));
#line 973 "integer.m"
        MR_Word mercury__integer__V_13_13;

#line 973 "integer.m"
        mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 973 "integer.m"
        if (mercury__integer__succeeded)
#line 973 "integer.m"
          {
#line 973 "integer.m"
            mercury__integer__Ua_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_24_24, (MR_Integer) 0)));
#line 973 "integer.m"
            mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_24_24, (MR_Integer) 1)));
#line 975 "integer.m"
            {
#line 975 "integer.m"
              MR_Word mercury__integer__TypeCtorInfo_12_74;
#line 975 "integer.m"
              MR_Word mercury__integer__Quot0_14;
#line 975 "integer.m"
              MR_Word mercury__integer__V_25_25;
#line 975 "integer.m"
              MR_Word mercury__integer__V_26_26;
#line 975 "integer.m"
              MR_Integer mercury__integer__L_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Ur_6, (MR_Integer) 0)));
#line 975 "integer.m"
              MR_Word mercury__integer__List_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Ur_6, (MR_Integer) 1)));
#line 975 "integer.m"
              MR_Word mercury__integer__NewList_69;
#line 975 "integer.m"
              MR_Integer mercury__integer__V_70_70 = (mercury__integer__L_67 + (MR_Integer) 1);
#line 975 "integer.m"
              MR_Word mercury__integer__V_72_72;
#line 975 "integer.m"
              MR_Word mercury__integer__V_73_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 975 "integer.m"
              MR_Integer mercury__integer__Len_76;
#line 975 "integer.m"
              MR_Word mercury__integer__Digits_77;
#line 975 "integer.m"
              MR_Integer mercury__integer__L_86;
#line 975 "integer.m"
              MR_Word mercury__integer__List_87;
#line 975 "integer.m"
              MR_Integer mercury__integer__V_88_88;
#line 975 "integer.m"
              MR_Word mercury__integer__V_90_90;

#line 1060 "integer.m"
              {
#line 1060 "integer.m"
                mercury__integer__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1060 "integer.m"
                MR_hl_field(MR_mktag(1), mercury__integer__V_72_72, 0) = ((MR_Box) (mercury__integer__Ua_12));
#line 1060 "integer.m"
                MR_hl_field(MR_mktag(1), mercury__integer__V_72_72, 1) = ((MR_Box) (mercury__integer__V_73_73));
#line 1060 "integer.m"
              }
#line 5483 "integer.c"
              mercury__integer__TypeCtorInfo_12_74 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1060 "integer.m"
              {
#line 1060 "integer.m"
                mercury__list__append_3_p_1(mercury__integer__TypeCtorInfo_12_74, mercury__integer__List_68, mercury__integer__V_72_72, &mercury__integer__NewList_69);
              }
#line 1059 "integer.m"
              {
#line 1059 "integer.m"
                mercury__integer__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1059 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_25_25, 0) = ((MR_Box) (mercury__integer__V_70_70));
#line 1059 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_25_25, 1) = ((MR_Box) (mercury__integer__NewList_69));
#line 1059 "integer.m"
              }
#line 1048 "integer.m"
              mercury__integer__Len_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 0)));
#line 1048 "integer.m"
              mercury__integer__Digits_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 1)));
#line 1052 "integer.m"
              if ((mercury__integer__Digits_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1050 "integer.m"
                {
#line 1051 "integer.m"
                  {
#line 1051 "integer.m"
                    mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_tail\'/1", (MR_String) "empty list");
#line 1051 "integer.m"
                    return;
                  }
#line 1050 "integer.m"
                }
#line 1052 "integer.m"
              else
#line 1053 "integer.m"
                {
#line 1053 "integer.m"
                  MR_Word mercury__integer__T_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_77, (MR_Integer) 1)));
#line 1053 "integer.m"
                  MR_Integer mercury__integer__V_80_80 = (mercury__integer__Len_76 - (MR_Integer) 1);
#line 1053 "integer.m"
                  MR_Integer mercury__integer__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_77, (MR_Integer) 0)));

#line 1054 "integer.m"
                  {
#line 1054 "integer.m"
                    mercury__integer__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1054 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_26_26, 0) = ((MR_Box) (mercury__integer__V_80_80));
#line 1054 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_26_26, 1) = ((MR_Box) (mercury__integer__T_79));
#line 1054 "integer.m"
                  }
#line 1053 "integer.m"
                }
#line 974 "integer.m"
              {
#line 974 "integer.m"
                mercury__integer__quot_rem_2_5_p_0(mercury__integer__V_25_25, mercury__integer__V_26_26, mercury__integer__V_8, &mercury__integer__Quot0_14, mercury__integer__Rem_10);
              }
#line 1064 "integer.m"
              mercury__integer__L_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Quot0_14, (MR_Integer) 0)));
#line 1064 "integer.m"
              mercury__integer__List_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Quot0_14, (MR_Integer) 1)));
#line 1064 "integer.m"
              mercury__integer__V_88_88 = (mercury__integer__L_86 + (MR_Integer) 1);
#line 1064 "integer.m"
              {
#line 1064 "integer.m"
                mercury__integer__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "integer.m"
                MR_hl_field(MR_mktag(1), mercury__integer__V_90_90, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1064 "integer.m"
                MR_hl_field(MR_mktag(1), mercury__integer__V_90_90, 1) = ((MR_Box) (mercury__integer__List_87));
#line 1064 "integer.m"
              }
#line 1064 "integer.m"
              {
#line 1064 "integer.m"
                MR_Word base;
#line 1064 "integer.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1064 "integer.m"
                *mercury__integer__Quot_9 = base;
#line 1064 "integer.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__integer__V_88_88));
#line 1064 "integer.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_90_90));
#line 1064 "integer.m"
              }
#line 975 "integer.m"
            }
#line 973 "integer.m"
          }
#line 973 "integer.m"
        else
#line 979 "integer.m"
          {
#line 979 "integer.m"
            *mercury__integer__Quot_9 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 980 "integer.m"
            *mercury__integer__Rem_10 = mercury__integer__Ur_6;
#line 979 "integer.m"
          }
#line 978 "integer.m"
      }
#line 982 "integer.m"
    else
#line 987 "integer.m"
      {
#line 987 "integer.m"
        MR_Integer mercury__integer__Qhat_16;
#line 987 "integer.m"
        MR_Word mercury__integer__QhatByV_17;
#line 987 "integer.m"
        MR_Integer mercury__integer__Q_18;
#line 987 "integer.m"
        MR_Word mercury__integer__QByV_19;
#line 987 "integer.m"
        MR_Word mercury__integer__NewUr_21;
#line 983 "integer.m"
        MR_Integer mercury__integer__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Ur_6, (MR_Integer) 0)));
#line 983 "integer.m"
        MR_Integer mercury__integer__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_8, (MR_Integer) 0)));
#line 1016 "integer.m"
        MR_Word mercury__integer__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Ur_6, (MR_Integer) 1)));
#line 1016 "integer.m"
        MR_Word mercury__integer__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_8, (MR_Integer) 1)));
#line 1008 "integer.m"
        MR_Integer mercury__integer__Ua_52;
#line 1003 "integer.m"
        MR_Word mercury__integer__V_44_44;
#line 1003 "integer.m"
        MR_Integer mercury__integer__V_22_22;
#line 1003 "integer.m"
        MR_Word mercury__integer__V_23_23;

#line 983 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_32_32 > mercury__integer__V_33_33);
#line 985 "integer.m"
        if (mercury__integer__succeeded)
#line 984 "integer.m"
          {
#line 984 "integer.m"
            MR_Integer mercury__integer__V_34_34;
#line 984 "integer.m"
            MR_Integer mercury__integer__V_35_35;
#line 984 "integer.m"
            MR_Integer mercury__integer__V_36_36;
#line 984 "integer.m"
            MR_Integer mercury__integer__V_38_38;
#line 984 "integer.m"
            MR_Integer mercury__integer__V_39_39;

#line 984 "integer.m"
            {
#line 984 "integer.m"
              mercury__integer__V_36_36 = mercury__integer__det_first_1_f_0(mercury__integer__Ur_6);
            }
#line 984 "integer.m"
            mercury__integer__V_35_35 = (mercury__integer__V_36_36 * (MR_Integer) 16384);
#line 984 "integer.m"
            {
#line 984 "integer.m"
              mercury__integer__V_38_38 = mercury__integer__det_second_1_f_0(mercury__integer__Ur_6);
            }
#line 984 "integer.m"
            mercury__integer__V_34_34 = (mercury__integer__V_35_35 + mercury__integer__V_38_38);
#line 984 "integer.m"
            {
#line 984 "integer.m"
              mercury__integer__V_39_39 = mercury__integer__det_first_1_f_0(mercury__integer__V_8);
            }
#line 984 "integer.m"
            {
#line 984 "integer.m"
              mercury__integer__Qhat_16 = mercury__int__div_2_f_0(mercury__integer__V_34_34, mercury__integer__V_39_39);
            }
#line 984 "integer.m"
          }
#line 985 "integer.m"
        else
#line 986 "integer.m"
          {
#line 986 "integer.m"
            MR_Integer mercury__integer__V_40_40;
#line 986 "integer.m"
            MR_Integer mercury__integer__V_41_41;

#line 986 "integer.m"
            {
#line 986 "integer.m"
              mercury__integer__V_40_40 = mercury__integer__det_first_1_f_0(mercury__integer__Ur_6);
            }
#line 986 "integer.m"
            {
#line 986 "integer.m"
              mercury__integer__V_41_41 = mercury__integer__det_first_1_f_0(mercury__integer__V_8);
            }
#line 986 "integer.m"
            {
#line 986 "integer.m"
              mercury__integer__Qhat_16 = mercury__int__div_2_f_0(mercury__integer__V_40_40, mercury__integer__V_41_41);
            }
#line 986 "integer.m"
          }
#line 988 "integer.m"
        {
#line 988 "integer.m"
          mercury__integer__QhatByV_17 = mercury__integer__mul_by_digit_2_f_0(mercury__integer__Qhat_16, mercury__integer__V_8);
        }
#line 989 "integer.m"
        {
#line 989 "integer.m"
          mercury__integer__succeeded = mercury__integer__pos_geq_2_p_0(mercury__integer__Ur_6, mercury__integer__QhatByV_17);
        }
#line 992 "integer.m"
        if (mercury__integer__succeeded)
#line 990 "integer.m"
          {
#line 990 "integer.m"
            mercury__integer__Q_18 = mercury__integer__Qhat_16;
#line 991 "integer.m"
            mercury__integer__QByV_19 = mercury__integer__QhatByV_17;
#line 990 "integer.m"
          }
#line 992 "integer.m"
        else
#line 993 "integer.m"
          {
#line 993 "integer.m"
            MR_Word mercury__integer__QhatMinus1ByV_20;

#line 993 "integer.m"
            {
#line 993 "integer.m"
              mercury__integer__QhatMinus1ByV_20 = mercury__integer__pos_minus_2_f_0(mercury__integer__QhatByV_17, mercury__integer__V_8);
            }
#line 994 "integer.m"
            {
#line 994 "integer.m"
              mercury__integer__succeeded = mercury__integer__pos_geq_2_p_0(mercury__integer__Ur_6, mercury__integer__QhatMinus1ByV_20);
            }
#line 997 "integer.m"
            if (mercury__integer__succeeded)
#line 995 "integer.m"
              {
#line 995 "integer.m"
                mercury__integer__Q_18 = (mercury__integer__Qhat_16 - (MR_Integer) 1);
#line 996 "integer.m"
                mercury__integer__QByV_19 = mercury__integer__QhatMinus1ByV_20;
#line 995 "integer.m"
              }
#line 997 "integer.m"
            else
#line 998 "integer.m"
              {
#line 998 "integer.m"
                mercury__integer__Q_18 = (mercury__integer__Qhat_16 - (MR_Integer) 2);
#line 999 "integer.m"
                {
#line 999 "integer.m"
                  mercury__integer__QByV_19 = mercury__integer__pos_minus_2_f_0(mercury__integer__QhatMinus1ByV_20, mercury__integer__V_8);
                }
#line 998 "integer.m"
              }
#line 993 "integer.m"
          }
#line 1002 "integer.m"
        {
#line 1002 "integer.m"
          mercury__integer__NewUr_21 = mercury__integer__pos_minus_2_f_0(mercury__integer__Ur_6, mercury__integer__QByV_19);
        }
#line 1003 "integer.m"
        mercury__integer__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 0)));
#line 1003 "integer.m"
        mercury__integer__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 1)));
#line 1003 "integer.m"
        mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 1003 "integer.m"
        if (mercury__integer__succeeded)
#line 1003 "integer.m"
          {
#line 1003 "integer.m"
            mercury__integer__Ua_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_44_44, (MR_Integer) 0)));
#line 1003 "integer.m"
            mercury__integer__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_44_44, (MR_Integer) 1)));
#line 1005 "integer.m"
            {
#line 1005 "integer.m"
              MR_Word mercury__integer__V_45_45;
#line 1005 "integer.m"
              MR_Word mercury__integer__V_46_46;
#line 1005 "integer.m"
              MR_Word mercury__integer__Quot0_50;

#line 1004 "integer.m"
              {
#line 1004 "integer.m"
                mercury__integer__V_45_45 = mercury__integer__integer_append_2_f_0(mercury__integer__NewUr_21, mercury__integer__Ua_52);
              }
#line 1004 "integer.m"
              {
#line 1004 "integer.m"
                mercury__integer__V_46_46 = mercury__integer__det_tail_1_f_0(mercury__integer__U_7);
              }
#line 1004 "integer.m"
              {
#line 1004 "integer.m"
                mercury__integer__quot_rem_2_5_p_0(mercury__integer__V_45_45, mercury__integer__V_46_46, mercury__integer__V_8, &mercury__integer__Quot0_50, mercury__integer__Rem_10);
              }
#line 1006 "integer.m"
              {
#line 1006 "integer.m"
                *mercury__integer__Quot_9 = mercury__integer__integer_prepend_2_f_0(mercury__integer__Q_18, mercury__integer__Quot0_50);
              }
#line 1005 "integer.m"
            }
#line 1003 "integer.m"
          }
#line 1003 "integer.m"
        else
#line 1009 "integer.m"
          {
#line 1009 "integer.m"
            MR_Word mercury__integer__V_48_48;
#line 1009 "integer.m"
            MR_Word mercury__integer__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1009 "integer.m"
            {
#line 1009 "integer.m"
              mercury__integer__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_48_48, 0) = ((MR_Box) (mercury__integer__Q_18));
#line 1009 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_48_48, 1) = ((MR_Box) (mercury__integer__V_49_49));
#line 1009 "integer.m"
            }
#line 1009 "integer.m"
            {
#line 1009 "integer.m"
              MR_Word base;
#line 1009 "integer.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1009 "integer.m"
              *mercury__integer__Quot_9 = base;
#line 1009 "integer.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 1009 "integer.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_48_48));
#line 1009 "integer.m"
            }
#line 1010 "integer.m"
            *mercury__integer__Rem_10 = mercury__integer__NewUr_21;
#line 1009 "integer.m"
          }
#line 987 "integer.m"
      }
#line 982 "integer.m"
  }
#line 968 "integer.m"
}

#line 949 "integer.m"
static void MR_CALL 
mercury__integer__quot_rem_4_p_0(
#line 949 "integer.m"
  MR_Word mercury__integer__U_5,
#line 949 "integer.m"
  MR_Word mercury__integer__V_6,
#line 949 "integer.m"
  MR_Word * mercury__integer__Quot_7,
#line 949 "integer.m"
  MR_Word * mercury__integer__Rem_8)
#line 949 "integer.m"
{
#line 955 "integer.m"
  {
#line 955 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 955 "integer.m"
    MR_Integer mercury__integer__UI_10;
#line 955 "integer.m"
    MR_Integer mercury__integer__VI_12;
#line 952 "integer.m"
    MR_Word mercury__integer__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_5, (MR_Integer) 1)));
#line 952 "integer.m"
    MR_Word mercury__integer__V_18_18;
#line 952 "integer.m"
    MR_Word mercury__integer__V_19_19;
#line 952 "integer.m"
    MR_Word mercury__integer__V_20_20;
#line 952 "integer.m"
    MR_Integer mercury__integer__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_5, (MR_Integer) 0)));
#line 952 "integer.m"
    MR_Integer mercury__integer__V_11_11;

#line 952 "integer.m"
    mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 952 "integer.m"
    if (mercury__integer__succeeded)
#line 952 "integer.m"
      {
#line 952 "integer.m"
        mercury__integer__UI_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 952 "integer.m"
        mercury__integer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 952 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 952 "integer.m"
        if (mercury__integer__succeeded)
#line 952 "integer.m"
          {
#line 952 "integer.m"
            mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 0)));
#line 952 "integer.m"
            mercury__integer__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 1)));
#line 952 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 952 "integer.m"
            if (mercury__integer__succeeded)
#line 952 "integer.m"
              {
#line 952 "integer.m"
                mercury__integer__VI_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_19_19, (MR_Integer) 0)));
#line 952 "integer.m"
                mercury__integer__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_19_19, (MR_Integer) 1)));
#line 952 "integer.m"
                mercury__integer__succeeded = (mercury__integer__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 952 "integer.m"
              }
#line 952 "integer.m"
          }
#line 952 "integer.m"
      }
#line 955 "integer.m"
    if (mercury__integer__succeeded)
#line 953 "integer.m"
      {
#line 953 "integer.m"
        MR_Integer mercury__integer__V_21_21;
#line 953 "integer.m"
        MR_Integer mercury__integer__V_22_22;

#line 303 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__quot_rem_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 303 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 5945 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 303 "int.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 98 "int.opt"
        if (mercury__integer__succeeded)
#line 99 "int.opt"
          mercury__integer__succeeded = (mercury__integer__VI_12 == (MR_Integer) 0);
#line 104 "int.opt"
        if (mercury__integer__succeeded)
#line 101 "int.opt"
          {
#line 101 "int.opt"
            MR_Word mercury__integer__TypeCtorInfo_9_36 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 101 "int.opt"
            MR_Word mercury__integer__V_7_34 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

#line 103 "int.opt"
            {
#line 103 "int.opt"
              mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_36, ((MR_Box) (mercury__integer__V_7_34)));
#line 103 "int.opt"
              return;
            }
#line 101 "int.opt"
          }
#line 104 "int.opt"
        else
#line 105 "int.opt"
          mercury__integer__V_21_21 = (mercury__integer__UI_10 / mercury__integer__VI_12);
#line 729 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_21_21 == (MR_Integer) 0);
#line 728 "integer.m"
        if (mercury__integer__succeeded)
#line 1188 "integer.m"
          {
#line 1188 "integer.m"
            MR_Word mercury__integer__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1188 "integer.m"
            *mercury__integer__Quot_7 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1188 "integer.m"
          }
#line 728 "integer.m"
        else
#line 729 "integer.m"
          {
#line 729 "integer.m"
            mercury__integer__succeeded = (mercury__integer__V_21_21 > (MR_Integer) 0);
#line 729 "integer.m"
            if (mercury__integer__succeeded)
#line 729 "integer.m"
              {
#line 729 "integer.m"
                MR_Word mercury__integer__V_40_40;
#line 729 "integer.m"
                MR_Word mercury__integer__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 729 "integer.m"
                {
#line 729 "integer.m"
                  mercury__integer__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_40_40, 0) = ((MR_Box) (mercury__integer__V_21_21));
#line 729 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_40_40, 1) = ((MR_Box) (mercury__integer__V_41_41));
#line 729 "integer.m"
                }
#line 729 "integer.m"
                {
#line 729 "integer.m"
                  MR_Word base;
#line 729 "integer.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 729 "integer.m"
                  *mercury__integer__Quot_7 = base;
#line 729 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 729 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_40_40));
#line 729 "integer.m"
                }
#line 729 "integer.m"
              }
#line 729 "integer.m"
            else
#line 729 "integer.m"
              {
#line 729 "integer.m"
                MR_Word mercury__integer__V_43_43;
#line 729 "integer.m"
                MR_Word mercury__integer__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 729 "integer.m"
                {
#line 729 "integer.m"
                  mercury__integer__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_43_43, 0) = ((MR_Box) (mercury__integer__V_21_21));
#line 729 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_43_43, 1) = ((MR_Box) (mercury__integer__V_44_44));
#line 729 "integer.m"
                }
#line 729 "integer.m"
                {
#line 729 "integer.m"
                  MR_Word base;
#line 729 "integer.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 729 "integer.m"
                  *mercury__integer__Quot_7 = base;
#line 729 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) -1));
#line 729 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_43_43));
#line 729 "integer.m"
                }
#line 729 "integer.m"
              }
#line 729 "integer.m"
          }
#line 303 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__quot_rem_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 303 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 6086 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 303 "int.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 117 "int.opt"
        if (mercury__integer__succeeded)
#line 118 "int.opt"
          mercury__integer__succeeded = (mercury__integer__VI_12 == (MR_Integer) 0);
#line 123 "int.opt"
        if (mercury__integer__succeeded)
#line 120 "int.opt"
          {
#line 120 "int.opt"
            MR_Word mercury__integer__TypeCtorInfo_9_52 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 120 "int.opt"
            MR_Word mercury__integer__V_7_50 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

#line 122 "int.opt"
            {
#line 122 "int.opt"
              mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_52, ((MR_Box) (mercury__integer__V_7_50)));
#line 122 "int.opt"
              return;
            }
#line 120 "int.opt"
          }
#line 123 "int.opt"
        else
#line 124 "int.opt"
          mercury__integer__V_22_22 = (mercury__integer__UI_10 % mercury__integer__VI_12);
#line 729 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_22_22 == (MR_Integer) 0);
#line 728 "integer.m"
        if (mercury__integer__succeeded)
#line 1188 "integer.m"
          {
#line 1188 "integer.m"
            MR_Word mercury__integer__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1188 "integer.m"
            *mercury__integer__Rem_8 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1188 "integer.m"
          }
#line 728 "integer.m"
        else
#line 729 "integer.m"
          {
#line 729 "integer.m"
            mercury__integer__succeeded = (mercury__integer__V_22_22 > (MR_Integer) 0);
#line 729 "integer.m"
            if (mercury__integer__succeeded)
#line 729 "integer.m"
              {
#line 729 "integer.m"
                MR_Word mercury__integer__V_56_56;
#line 729 "integer.m"
                MR_Word mercury__integer__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 729 "integer.m"
                {
#line 729 "integer.m"
                  mercury__integer__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_56_56, 0) = ((MR_Box) (mercury__integer__V_22_22));
#line 729 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_56_56, 1) = ((MR_Box) (mercury__integer__V_57_57));
#line 729 "integer.m"
                }
#line 729 "integer.m"
                {
#line 729 "integer.m"
                  MR_Word base;
#line 729 "integer.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 729 "integer.m"
                  *mercury__integer__Rem_8 = base;
#line 729 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 729 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_56_56));
#line 729 "integer.m"
                }
#line 729 "integer.m"
              }
#line 729 "integer.m"
            else
#line 729 "integer.m"
              {
#line 729 "integer.m"
                MR_Word mercury__integer__V_59_59;
#line 729 "integer.m"
                MR_Word mercury__integer__V_60_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 729 "integer.m"
                {
#line 729 "integer.m"
                  mercury__integer__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_59_59, 0) = ((MR_Box) (mercury__integer__V_22_22));
#line 729 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_59_59, 1) = ((MR_Box) (mercury__integer__V_60_60));
#line 729 "integer.m"
                }
#line 729 "integer.m"
                {
#line 729 "integer.m"
                  MR_Word base;
#line 729 "integer.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 729 "integer.m"
                  *mercury__integer__Rem_8 = base;
#line 729 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) -1));
#line 729 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_59_59));
#line 729 "integer.m"
                }
#line 729 "integer.m"
              }
#line 729 "integer.m"
          }
#line 953 "integer.m"
      }
#line 955 "integer.m"
    else
#line 956 "integer.m"
      {
#line 956 "integer.m"
        MR_Integer mercury__integer__V0_13;
#line 956 "integer.m"
        MR_Word mercury__integer__QuotZeros_15;
#line 956 "integer.m"
        MR_Word mercury__integer__Digits_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 1)));
#line 1025 "integer.m"
        MR_Integer mercury__integer__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 0)));

#line 1029 "integer.m"
        if ((mercury__integer__Digits_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1027 "integer.m"
          {
#line 1028 "integer.m"
            {
#line 1028 "integer.m"
              mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_first\'/1", (MR_String) "empty list");
#line 1028 "integer.m"
              return;
            }
#line 1027 "integer.m"
          }
#line 1029 "integer.m"
        else
#line 1030 "integer.m"
          {
#line 1030 "integer.m"
            MR_Word mercury__integer__V_66_66;

#line 1030 "integer.m"
            mercury__integer__V0_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_65, (MR_Integer) 0)));
#line 1030 "integer.m"
            mercury__integer__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_65, (MR_Integer) 1)));
#line 1030 "integer.m"
          }
#line 957 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V0_13 < (MR_Integer) 8192);
#line 962 "integer.m"
        if (mercury__integer__succeeded)
#line 958 "integer.m"
          {
#line 958 "integer.m"
            MR_Integer mercury__integer__M_14;
#line 958 "integer.m"
            MR_Word mercury__integer__R_16;
#line 958 "integer.m"
            MR_Integer mercury__integer__V_25_25 = (mercury__integer__V0_13 + (MR_Integer) 1);
#line 958 "integer.m"
            MR_Word mercury__integer__V_27_27;
#line 958 "integer.m"
            MR_Word mercury__integer__V_28_28;
#line 958 "integer.m"
            MR_Word mercury__integer__V_29_29;
#line 958 "integer.m"
            MR_Word mercury__integer__V_71_71;
#line 958 "integer.m"
            MR_Integer mercury__integer__Len_74;
#line 958 "integer.m"
            MR_Word mercury__integer__Digits0_75;
#line 958 "integer.m"
            MR_Integer mercury__integer__Mod_76;
#line 958 "integer.m"
            MR_Word mercury__integer__Digits_77;
#line 958 "integer.m"
            MR_Integer mercury__integer__Len_83;
#line 958 "integer.m"
            MR_Word mercury__integer__Digits0_84;
#line 958 "integer.m"
            MR_Integer mercury__integer__Mod_85;
#line 958 "integer.m"
            MR_Word mercury__integer__Digits_86;

#line 958 "integer.m"
            {
#line 958 "integer.m"
              mercury__integer__M_14 = mercury__int__div_2_f_0((MR_Integer) 16384, mercury__integer__V_25_25);
            }
#line 1188 "integer.m"
            mercury__integer__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1188 "integer.m"
            mercury__integer__V_27_27 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 773 "integer.m"
            mercury__integer__Len_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_5, (MR_Integer) 0)));
#line 773 "integer.m"
            mercury__integer__Digits0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_5, (MR_Integer) 1)));
#line 774 "integer.m"
            {
#line 774 "integer.m"
              mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__M_14, &mercury__integer__Mod_76, mercury__integer__Digits0_75, &mercury__integer__Digits_77);
            }
#line 775 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Mod_76 == (MR_Integer) 0);
#line 775 "integer.m"
            if (mercury__integer__succeeded)
#line 775 "integer.m"
              {
#line 775 "integer.m"
                mercury__integer__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 775 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, 0) = ((MR_Box) (mercury__integer__Len_74));
#line 775 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, 1) = ((MR_Box) (mercury__integer__Digits_77));
#line 775 "integer.m"
              }
#line 775 "integer.m"
            else
#line 775 "integer.m"
              {
#line 775 "integer.m"
                MR_Integer mercury__integer__V_78_78 = (mercury__integer__Len_74 + (MR_Integer) 1);
#line 775 "integer.m"
                MR_Word mercury__integer__V_80_80;

#line 775 "integer.m"
                {
#line 775 "integer.m"
                  mercury__integer__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_80_80, 0) = ((MR_Box) (mercury__integer__Mod_76));
#line 775 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_80_80, 1) = ((MR_Box) (mercury__integer__Digits_77));
#line 775 "integer.m"
                }
#line 775 "integer.m"
                {
#line 775 "integer.m"
                  mercury__integer__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 775 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, 0) = ((MR_Box) (mercury__integer__V_78_78));
#line 775 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, 1) = ((MR_Box) (mercury__integer__V_80_80));
#line 775 "integer.m"
                }
#line 775 "integer.m"
              }
#line 773 "integer.m"
            mercury__integer__Len_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 0)));
#line 773 "integer.m"
            mercury__integer__Digits0_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 1)));
#line 774 "integer.m"
            {
#line 774 "integer.m"
              mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__M_14, &mercury__integer__Mod_85, mercury__integer__Digits0_84, &mercury__integer__Digits_86);
            }
#line 775 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Mod_85 == (MR_Integer) 0);
#line 775 "integer.m"
            if (mercury__integer__succeeded)
#line 775 "integer.m"
              {
#line 775 "integer.m"
                mercury__integer__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 775 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 0) = ((MR_Box) (mercury__integer__Len_83));
#line 775 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 1) = ((MR_Box) (mercury__integer__Digits_86));
#line 775 "integer.m"
              }
#line 775 "integer.m"
            else
#line 775 "integer.m"
              {
#line 775 "integer.m"
                MR_Integer mercury__integer__V_87_87 = (mercury__integer__Len_83 + (MR_Integer) 1);
#line 775 "integer.m"
                MR_Word mercury__integer__V_89_89;

#line 775 "integer.m"
                {
#line 775 "integer.m"
                  mercury__integer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_89_89, 0) = ((MR_Box) (mercury__integer__Mod_85));
#line 775 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_89_89, 1) = ((MR_Box) (mercury__integer__Digits_86));
#line 775 "integer.m"
                }
#line 775 "integer.m"
                {
#line 775 "integer.m"
                  mercury__integer__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 775 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 0) = ((MR_Box) (mercury__integer__V_87_87));
#line 775 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 1) = ((MR_Box) (mercury__integer__V_89_89));
#line 775 "integer.m"
                }
#line 775 "integer.m"
              }
#line 959 "integer.m"
            {
#line 959 "integer.m"
              mercury__integer__quot_rem_2_5_p_0(mercury__integer__V_27_27, mercury__integer__V_28_28, mercury__integer__V_29_29, &mercury__integer__QuotZeros_15, &mercury__integer__R_16);
            }
#line 961 "integer.m"
            {
#line 961 "integer.m"
              *mercury__integer__Rem_8 = mercury__integer__div_by_digit_2_f_0(mercury__integer__M_14, mercury__integer__R_16);
            }
#line 958 "integer.m"
          }
#line 962 "integer.m"
        else
#line 963 "integer.m"
          {
#line 963 "integer.m"
            MR_Word mercury__integer__V_30_30 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 963 "integer.m"
            MR_Word mercury__integer__V_91_91 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 963 "integer.m"
            {
#line 963 "integer.m"
              mercury__integer__quot_rem_2_5_p_0(mercury__integer__V_30_30, mercury__integer__U_5, mercury__integer__V_6, &mercury__integer__QuotZeros_15, mercury__integer__Rem_8);
            }
#line 963 "integer.m"
          }
#line 965 "integer.m"
        {
#line 965 "integer.m"
          *mercury__integer__Quot_7 = mercury__integer__decap_1_f_0(mercury__integer__QuotZeros_15);
        }
#line 956 "integer.m"
      }
#line 955 "integer.m"
  }
#line 949 "integer.m"
}

#line 918 "integer.m"
void MR_CALL 
mercury__integer__big_quot_rem_4_p_0(
#line 918 "integer.m"
  MR_Word mercury__integer__X_5,
#line 918 "integer.m"
  MR_Word mercury__integer__Y_6,
#line 918 "integer.m"
  MR_Word * mercury__integer__Quot_7,
#line 918 "integer.m"
  MR_Word * mercury__integer__Rem_8)
#line 918 "integer.m"
{
#line 924 "integer.m"
  {
#line 924 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 417 "integer.m"
    MR_Integer mercury__integer__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_6, (MR_Integer) 0)));
#line 417 "integer.m"
    MR_Word mercury__integer__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_6, (MR_Integer) 1)));

#line 417 "integer.m"
    mercury__integer__succeeded = (mercury__integer__V_21_21 == (MR_Integer) 0);
#line 417 "integer.m"
    if (mercury__integer__succeeded)
#line 417 "integer.m"
      mercury__integer__succeeded = (mercury__integer__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 924 "integer.m"
    if (mercury__integer__succeeded)
#line 923 "integer.m"
      {
#line 923 "integer.m"
        MR_Word mercury__integer__TypeCtorInfo_20_20 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 923 "integer.m"
        MR_Word mercury__integer__V_15_15 = (MR_Word) ((MR_Box) ((MR_String) "integer.big_quot_rem: division by zero"));

#line 923 "integer.m"
        {
#line 923 "integer.m"
          mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_20_20, ((MR_Box) (mercury__integer__V_15_15)));
#line 923 "integer.m"
          return;
        }
#line 923 "integer.m"
      }
#line 924 "integer.m"
    else
#line 927 "integer.m"
      {
#line 417 "integer.m"
        MR_Integer mercury__integer__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_5, (MR_Integer) 0)));
#line 417 "integer.m"
        MR_Word mercury__integer__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_5, (MR_Integer) 1)));

#line 417 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_23_23 == (MR_Integer) 0);
#line 417 "integer.m"
        if (mercury__integer__succeeded)
#line 417 "integer.m"
          mercury__integer__succeeded = (mercury__integer__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 927 "integer.m"
        if (mercury__integer__succeeded)
#line 925 "integer.m"
          {
#line 1188 "integer.m"
            *mercury__integer__Quot_7 = mercury__integer__X_5;
#line 1188 "integer.m"
            *mercury__integer__Rem_8 = mercury__integer__X_5;
#line 925 "integer.m"
          }
#line 927 "integer.m"
        else
#line 928 "integer.m"
          {
#line 928 "integer.m"
            MR_Integer mercury__integer__SignX_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_5, (MR_Integer) 0)));
#line 928 "integer.m"
            MR_Integer mercury__integer__SignY_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_6, (MR_Integer) 0)));
#line 928 "integer.m"
            MR_Word mercury__integer__Quot0_13;
#line 928 "integer.m"
            MR_Word mercury__integer__Rem0_14;
#line 928 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 928 "integer.m"
            MR_Word mercury__integer__V_18_18;
#line 928 "integer.m"
            MR_Integer mercury__integer__V_19_19;
#line 928 "integer.m"
            MR_Word mercury__integer__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_5, (MR_Integer) 1)));
#line 929 "integer.m"
            MR_Word mercury__integer__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_6, (MR_Integer) 1)));

#line 930 "integer.m"
            {
#line 930 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__big_abs_1_f_0(mercury__integer__X_5);
            }
#line 930 "integer.m"
            {
#line 930 "integer.m"
              mercury__integer__V_18_18 = mercury__integer__big_abs_1_f_0(mercury__integer__Y_6);
            }
#line 930 "integer.m"
            {
#line 930 "integer.m"
              mercury__integer__quot_rem_4_p_0(mercury__integer__V_17_17, mercury__integer__V_18_18, &mercury__integer__Quot0_13, &mercury__integer__Rem0_14);
            }
#line 931 "integer.m"
            mercury__integer__V_19_19 = (mercury__integer__SignX_9 * mercury__integer__SignY_11);
#line 931 "integer.m"
            {
#line 931 "integer.m"
              *mercury__integer__Quot_7 = mercury__integer__big_sign_2_f_0(mercury__integer__V_19_19, mercury__integer__Quot0_13);
            }
#line 932 "integer.m"
            {
#line 932 "integer.m"
              *mercury__integer__Rem_8 = mercury__integer__big_sign_2_f_0(mercury__integer__SignX_9, mercury__integer__Rem0_14);
            }
#line 928 "integer.m"
          }
#line 927 "integer.m"
      }
#line 924 "integer.m"
  }
#line 918 "integer.m"
}

#line 912 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_mul_list_3_f_0(
#line 912 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 912 "integer.m"
  MR_Word mercury__integer__Carry_2,
#line 912 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3)
#line 912 "integer.m"
{
#line 914 "integer.m"
  while (MR_TRUE)
#line 914 "integer.m"
    {
#line 914 "integer.m"
      /* tailcall optimized into a loop */
#line 914 "integer.m"
      {
#line 914 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 914 "integer.m"
        MR_Word mercury__integer__HeadVar__4_4;

#line 914 "integer.m"
        if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 914 "integer.m"
          mercury__integer__HeadVar__4_4 = mercury__integer__Carry_2;
#line 914 "integer.m"
        else
#line 915 "integer.m"
          {
#line 915 "integer.m"
            MR_Integer mercury__integer__X_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 915 "integer.m"
            MR_Word mercury__integer__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 915 "integer.m"
            MR_Word mercury__integer__V_11_11;
#line 915 "integer.m"
            MR_Word mercury__integer__V_12_12;
#line 915 "integer.m"
            MR_Word mercury__integer__V_13_13;
#line 915 "integer.m"
            MR_Integer mercury__integer__Len_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_2, (MR_Integer) 0)));
#line 915 "integer.m"
            MR_Word mercury__integer__Digits_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_2, (MR_Integer) 1)));
#line 915 "integer.m"
            MR_Integer mercury__integer__Len_26;
#line 915 "integer.m"
            MR_Word mercury__integer__Digits0_27;
#line 915 "integer.m"
            MR_Integer mercury__integer__Mod_28;
#line 915 "integer.m"
            MR_Word mercury__integer__Digits_29;
#line 915 "integer.m"
            MR_Integer mercury__integer__L1_34;
#line 915 "integer.m"
            MR_Integer mercury__integer__L2_36;
#line 915 "integer.m"
            MR_Integer mercury__integer__Div_38;
#line 915 "integer.m"
            MR_Word mercury__integer__Ds_39;
#line 915 "integer.m"
            MR_Integer mercury__integer__Len_40;
#line 793 "integer.m"
            MR_Word mercury__integer__D1_35;
#line 793 "integer.m"
            MR_Word mercury__integer__D2_37;

#line 761 "integer.m"
            if ((mercury__integer__Digits_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1188 "integer.m"
              {
#line 1188 "integer.m"
                MR_Word mercury__integer__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1188 "integer.m"
                mercury__integer__V_12_12 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1188 "integer.m"
              }
#line 761 "integer.m"
            else
#line 762 "integer.m"
              {
#line 762 "integer.m"
                MR_Integer mercury__integer__V_19_19 = (mercury__integer__Len_15 + (MR_Integer) 1);
#line 762 "integer.m"
                MR_Word mercury__integer__V_21_21;

#line 763 "integer.m"
                {
#line 763 "integer.m"
                  mercury__integer__V_21_21 = mercury__integer__mul_base_2_1_f_0(mercury__integer__Digits_16);
                }
#line 763 "integer.m"
                {
#line 763 "integer.m"
                  mercury__integer__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 763 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 0) = ((MR_Box) (mercury__integer__V_19_19));
#line 763 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 1) = ((MR_Box) (mercury__integer__V_21_21));
#line 763 "integer.m"
                }
#line 762 "integer.m"
              }
#line 773 "integer.m"
            mercury__integer__Len_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 773 "integer.m"
            mercury__integer__Digits0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 774 "integer.m"
            {
#line 774 "integer.m"
              mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__X_7, &mercury__integer__Mod_28, mercury__integer__Digits0_27, &mercury__integer__Digits_29);
            }
#line 775 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Mod_28 == (MR_Integer) 0);
#line 775 "integer.m"
            if (mercury__integer__succeeded)
#line 775 "integer.m"
              {
#line 775 "integer.m"
                mercury__integer__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 775 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 0) = ((MR_Box) (mercury__integer__Len_26));
#line 775 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 1) = ((MR_Box) (mercury__integer__Digits_29));
#line 775 "integer.m"
              }
#line 775 "integer.m"
            else
#line 775 "integer.m"
              {
#line 775 "integer.m"
                MR_Integer mercury__integer__V_30_30 = (mercury__integer__Len_26 + (MR_Integer) 1);
#line 775 "integer.m"
                MR_Word mercury__integer__V_32_32;

#line 775 "integer.m"
                {
#line 775 "integer.m"
                  mercury__integer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_32_32, 0) = ((MR_Box) (mercury__integer__Mod_28));
#line 775 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_32_32, 1) = ((MR_Box) (mercury__integer__Digits_29));
#line 775 "integer.m"
                }
#line 775 "integer.m"
                {
#line 775 "integer.m"
                  mercury__integer__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 775 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 0) = ((MR_Box) (mercury__integer__V_30_30));
#line 775 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 1) = ((MR_Box) (mercury__integer__V_32_32));
#line 775 "integer.m"
                }
#line 775 "integer.m"
              }
#line 793 "integer.m"
            mercury__integer__L1_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, (MR_Integer) 0)));
#line 793 "integer.m"
            mercury__integer__D1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, (MR_Integer) 1)));
#line 793 "integer.m"
            mercury__integer__L2_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, (MR_Integer) 0)));
#line 793 "integer.m"
            mercury__integer__D2_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, (MR_Integer) 1)));
#line 794 "integer.m"
            {
#line 794 "integer.m"
              mercury__integer__add_pairs_4_p_0(&mercury__integer__Div_38, mercury__integer__V_12_12, mercury__integer__V_13_13, &mercury__integer__Ds_39);
            }
#line 795 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_34 > mercury__integer__L2_36);
#line 795 "integer.m"
            if (mercury__integer__succeeded)
#line 795 "integer.m"
              mercury__integer__Len_40 = mercury__integer__L1_34;
#line 795 "integer.m"
            else
#line 795 "integer.m"
              mercury__integer__Len_40 = mercury__integer__L2_36;
#line 796 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Div_38 == (MR_Integer) 0);
#line 796 "integer.m"
            if (mercury__integer__succeeded)
#line 796 "integer.m"
              {
#line 796 "integer.m"
                mercury__integer__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 796 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 0) = ((MR_Box) (mercury__integer__Len_40));
#line 796 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 1) = ((MR_Box) (mercury__integer__Ds_39));
#line 796 "integer.m"
              }
#line 796 "integer.m"
            else
#line 796 "integer.m"
              {
#line 796 "integer.m"
                MR_Integer mercury__integer__V_43_43 = (mercury__integer__Len_40 + (MR_Integer) 1);
#line 796 "integer.m"
                MR_Word mercury__integer__V_45_45;

#line 796 "integer.m"
                {
#line 796 "integer.m"
                  mercury__integer__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_45_45, 0) = ((MR_Box) (mercury__integer__Div_38));
#line 796 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_45_45, 1) = ((MR_Box) (mercury__integer__Ds_39));
#line 796 "integer.m"
                }
#line 796 "integer.m"
                {
#line 796 "integer.m"
                  mercury__integer__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 796 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 0) = ((MR_Box) (mercury__integer__V_43_43));
#line 796 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 1) = ((MR_Box) (mercury__integer__V_45_45));
#line 796 "integer.m"
                }
#line 796 "integer.m"
              }
#line 916 "integer.m"
            /* direct tailcall eliminated */
#line 916 "integer.m"
            {
#line 916 "integer.m"
              MR_Word mercury__integer__HeadVar__1__tmp_copy_1 = mercury__integer__Xs_8;
#line 916 "integer.m"
              MR_Word mercury__integer__Carry__tmp_copy_2 = mercury__integer__V_11_11;

#line 916 "integer.m"
              mercury__integer__Carry_2 = mercury__integer__Carry__tmp_copy_2;
#line 916 "integer.m"
              mercury__integer__HeadVar__1_1 = mercury__integer__HeadVar__1__tmp_copy_1;
#line 916 "integer.m"
            }
#line 916 "integer.m"
            continue;
#line 915 "integer.m"
          }
#line 914 "integer.m"
        return mercury__integer__HeadVar__4_4;
#line 914 "integer.m"
      }
#line 914 "integer.m"
      break;
#line 914 "integer.m"
    }
#line 912 "integer.m"
}

#line 876 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_mul_karatsuba_2_f_0(
#line 876 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 876 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 876 "integer.m"
{
#line 878 "integer.m"
  {
#line 878 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 878 "integer.m"
    MR_Word mercury__integer__Res_8;
#line 878 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 878 "integer.m"
    MR_Word mercury__integer__Ds1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 878 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 878 "integer.m"
    MR_Word mercury__integer__Ds2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 879 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 < (MR_Integer) 35);
#line 881 "integer.m"
    if (mercury__integer__succeeded)
#line 880 "integer.m"
      {
#line 880 "integer.m"
        MR_Word mercury__integer__V_24_24 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 880 "integer.m"
        MR_Word mercury__integer__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "integer.m"
        {
#line 880 "integer.m"
          return mercury__integer__Res_8 = mercury__integer__pos_mul_list_3_f_0(mercury__integer__Ds1_5, mercury__integer__V_24_24, mercury__integer__HeadVar__2_2);
        }
#line 880 "integer.m"
      }
#line 881 "integer.m"
    else
#line 906 "integer.m"
      {
#line 906 "integer.m"
        MR_Integer mercury__integer__Middle_9;
#line 906 "integer.m"
        MR_Word mercury__integer__Res0_20;
#line 906 "integer.m"
        MR_Word mercury__integer__Res1_21;
#line 906 "integer.m"
        MR_Word mercury__integer__Res2_22;
#line 906 "integer.m"
        MR_Word mercury__integer__V_38_38;
#line 906 "integer.m"
        MR_Word mercury__integer__V_39_39;
#line 906 "integer.m"
        MR_Integer mercury__integer__V_40_40;
#line 906 "integer.m"
        MR_Integer mercury__integer__V_41_41;
#line 906 "integer.m"
        MR_Word mercury__integer__V_44_44;
#line 906 "integer.m"
        MR_Word mercury__integer__V_45_45;
#line 906 "integer.m"
        MR_Word mercury__integer__V_46_46;
#line 906 "integer.m"
        MR_Integer mercury__integer__V_47_47;

#line 882 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L2_6 < mercury__integer__L1_4);
#line 884 "integer.m"
        if (mercury__integer__succeeded)
#line 883 "integer.m"
          {
#line 883 "integer.m"
            {
#line 883 "integer.m"
              mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.pos_mul_karatsuba\'/2", (MR_String) "second factor smaller");
            }
#line 883 "integer.m"
          }
#line 884 "integer.m"
        else
#line 885 "integer.m"
          {
#line 885 "integer.m"
            MR_Word mercury__integer__TypeCtorInfo_49_49;
#line 885 "integer.m"
            MR_Integer mercury__integer__HiDigits_10;
#line 885 "integer.m"
            MR_Integer mercury__integer__HiDigitsSmall_11;
#line 885 "integer.m"
            MR_Word mercury__integer__Ds1Upper_12;
#line 885 "integer.m"
            MR_Word mercury__integer__Ds1Lower_13;
#line 885 "integer.m"
            MR_Word mercury__integer__Ds2Upper_14;
#line 885 "integer.m"
            MR_Word mercury__integer__Ds2Lower_15;
#line 885 "integer.m"
            MR_Word mercury__integer__LoDs1_16;
#line 885 "integer.m"
            MR_Word mercury__integer__LoDs2_17;
#line 885 "integer.m"
            MR_Word mercury__integer__HiDs1_18;
#line 885 "integer.m"
            MR_Word mercury__integer__HiDs2_19;
#line 885 "integer.m"
            MR_Integer mercury__integer__V_31_31;
#line 885 "integer.m"
            MR_Integer mercury__integer__V_32_32;

#line 885 "integer.m"
            {
#line 885 "integer.m"
              mercury__integer__Middle_9 = mercury__int__div_2_f_0(mercury__integer__L2_6, (MR_Integer) 2);
            }
#line 886 "integer.m"
            mercury__integer__HiDigits_10 = (mercury__integer__L2_6 - mercury__integer__Middle_9);
#line 887 "integer.m"
            mercury__integer__V_31_31 = (mercury__integer__L1_4 - mercury__integer__Middle_9);
#line 75 "int.opt"
            mercury__integer__succeeded = ((MR_Integer) 0 > mercury__integer__V_31_31);
#line 78 "int.opt"
            if (mercury__integer__succeeded)
#line 77 "int.opt"
              mercury__integer__HiDigitsSmall_11 = (MR_Integer) 0;
#line 78 "int.opt"
            else
#line 79 "int.opt"
              mercury__integer__HiDigitsSmall_11 = mercury__integer__V_31_31;
#line 6969 "integer.c"
            mercury__integer__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 890 "integer.m"
            {
#line 890 "integer.m"
              mercury__list__split_upto_4_p_0(mercury__integer__TypeCtorInfo_49_49, mercury__integer__HiDigitsSmall_11, mercury__integer__Ds1_5, &mercury__integer__Ds1Upper_12, &mercury__integer__Ds1Lower_13);
            }
#line 892 "integer.m"
            {
#line 892 "integer.m"
              mercury__list__split_upto_4_p_0(mercury__integer__TypeCtorInfo_49_49, mercury__integer__HiDigits_10, mercury__integer__Ds2_7, &mercury__integer__Ds2Upper_14, &mercury__integer__Ds2Lower_15);
            }
#line 85 "int.opt"
            mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__Middle_9);
#line 88 "int.opt"
            if (mercury__integer__succeeded)
#line 87 "int.opt"
              mercury__integer__V_32_32 = mercury__integer__L1_4;
#line 88 "int.opt"
            else
#line 89 "int.opt"
              mercury__integer__V_32_32 = mercury__integer__Middle_9;
#line 893 "integer.m"
            {
#line 893 "integer.m"
              mercury__integer__LoDs1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 893 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__LoDs1_16, 0) = ((MR_Box) (mercury__integer__V_32_32));
#line 893 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__LoDs1_16, 1) = ((MR_Box) (mercury__integer__Ds1Lower_13));
#line 893 "integer.m"
            }
#line 894 "integer.m"
            {
#line 894 "integer.m"
              mercury__integer__LoDs2_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 894 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__LoDs2_17, 0) = ((MR_Box) (mercury__integer__Middle_9));
#line 894 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__LoDs2_17, 1) = ((MR_Box) (mercury__integer__Ds2Lower_15));
#line 894 "integer.m"
            }
#line 895 "integer.m"
            {
#line 895 "integer.m"
              mercury__integer__HiDs1_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 895 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HiDs1_18, 0) = ((MR_Box) (mercury__integer__HiDigitsSmall_11));
#line 895 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HiDs1_18, 1) = ((MR_Box) (mercury__integer__Ds1Upper_12));
#line 895 "integer.m"
            }
#line 896 "integer.m"
            {
#line 896 "integer.m"
              mercury__integer__HiDs2_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 896 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HiDs2_19, 0) = ((MR_Box) (mercury__integer__HiDigits_10));
#line 896 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HiDs2_19, 1) = ((MR_Box) (mercury__integer__Ds2Upper_14));
#line 896 "integer.m"
            }
#line 897 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Middle_9 > (MR_Integer) 350);
#line 901 "integer.m"
            if (mercury__integer__succeeded)
#line 898 "integer.m"
              {
#line 898 "integer.m"
                MR_Word mercury__integer__V_34_34;
#line 898 "integer.m"
                MR_Word mercury__integer__V_35_35;
#line 898 "integer.m"
                MR_Integer mercury__integer__L1_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__LoDs1_16, (MR_Integer) 0)));
#line 898 "integer.m"
                MR_Integer mercury__integer__L2_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__LoDs2_17, (MR_Integer) 0)));
#line 898 "integer.m"
                MR_Integer mercury__integer__L1_78;
#line 898 "integer.m"
                MR_Integer mercury__integer__L2_80;
#line 898 "integer.m"
                MR_Integer mercury__integer__L1_86;
#line 898 "integer.m"
                MR_Integer mercury__integer__L2_88;
#line 857 "integer.m"
                MR_Word mercury__integer__Ds1_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__LoDs1_16, (MR_Integer) 1)));
#line 857 "integer.m"
                MR_Word mercury__integer__Ds2_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__LoDs2_17, (MR_Integer) 1)));
#line 857 "integer.m"
                MR_Word mercury__integer__Ds1_79;
#line 857 "integer.m"
                MR_Word mercury__integer__Ds2_81;
#line 857 "integer.m"
                MR_Word mercury__integer__Ds1_87;
#line 857 "integer.m"
                MR_Word mercury__integer__Ds2_89;

#line 858 "integer.m"
                mercury__integer__succeeded = (mercury__integer__L1_66 < mercury__integer__L2_68);
#line 857 "integer.m"
                if (mercury__integer__succeeded)
#line 859 "integer.m"
                  {
#line 859 "integer.m"
                    mercury__integer__Res0_20 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__LoDs1_16, mercury__integer__LoDs2_17);
                  }
#line 857 "integer.m"
                else
#line 861 "integer.m"
                  {
#line 861 "integer.m"
                    mercury__integer__Res0_20 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__LoDs2_17, mercury__integer__LoDs1_16);
                  }
#line 323 "integer.m"
                {
#line 323 "integer.m"
                  mercury__integer__V_34_34 = mercury__integer__big_plus_2_f_0(mercury__integer__LoDs1_16, mercury__integer__HiDs1_18);
                }
#line 323 "integer.m"
                {
#line 323 "integer.m"
                  mercury__integer__V_35_35 = mercury__integer__big_plus_2_f_0(mercury__integer__LoDs2_17, mercury__integer__HiDs2_19);
                }
#line 857 "integer.m"
                mercury__integer__L1_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_34_34, (MR_Integer) 0)));
#line 857 "integer.m"
                mercury__integer__Ds1_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_34_34, (MR_Integer) 1)));
#line 857 "integer.m"
                mercury__integer__L2_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_35_35, (MR_Integer) 0)));
#line 857 "integer.m"
                mercury__integer__Ds2_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_35_35, (MR_Integer) 1)));
#line 858 "integer.m"
                mercury__integer__succeeded = (mercury__integer__L1_78 < mercury__integer__L2_80);
#line 857 "integer.m"
                if (mercury__integer__succeeded)
#line 859 "integer.m"
                  {
#line 859 "integer.m"
                    mercury__integer__Res1_21 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__V_34_34, mercury__integer__V_35_35);
                  }
#line 857 "integer.m"
                else
#line 861 "integer.m"
                  {
#line 861 "integer.m"
                    mercury__integer__Res1_21 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__V_35_35, mercury__integer__V_34_34);
                  }
#line 857 "integer.m"
                mercury__integer__L1_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HiDs1_18, (MR_Integer) 0)));
#line 857 "integer.m"
                mercury__integer__Ds1_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HiDs1_18, (MR_Integer) 1)));
#line 857 "integer.m"
                mercury__integer__L2_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HiDs2_19, (MR_Integer) 0)));
#line 857 "integer.m"
                mercury__integer__Ds2_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HiDs2_19, (MR_Integer) 1)));
#line 858 "integer.m"
                mercury__integer__succeeded = (mercury__integer__L1_86 < mercury__integer__L2_88);
#line 857 "integer.m"
                if (mercury__integer__succeeded)
#line 859 "integer.m"
                  {
#line 859 "integer.m"
                    mercury__integer__Res2_22 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__HiDs1_18, mercury__integer__HiDs2_19);
                  }
#line 857 "integer.m"
                else
#line 861 "integer.m"
                  {
#line 861 "integer.m"
                    mercury__integer__Res2_22 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__HiDs2_19, mercury__integer__HiDs1_18);
                  }
#line 898 "integer.m"
              }
#line 901 "integer.m"
            else
#line 902 "integer.m"
              {
#line 902 "integer.m"
                MR_Word mercury__integer__V_36_36;
#line 902 "integer.m"
                MR_Word mercury__integer__V_37_37;

#line 902 "integer.m"
                {
#line 902 "integer.m"
                  mercury__integer__Res0_20 = mercury__integer__pos_mul_2_f_0(mercury__integer__LoDs1_16, mercury__integer__LoDs2_17);
                }
#line 323 "integer.m"
                {
#line 323 "integer.m"
                  mercury__integer__V_36_36 = mercury__integer__big_plus_2_f_0(mercury__integer__LoDs1_16, mercury__integer__HiDs1_18);
                }
#line 323 "integer.m"
                {
#line 323 "integer.m"
                  mercury__integer__V_37_37 = mercury__integer__big_plus_2_f_0(mercury__integer__LoDs2_17, mercury__integer__HiDs2_19);
                }
#line 903 "integer.m"
                {
#line 903 "integer.m"
                  mercury__integer__Res1_21 = mercury__integer__pos_mul_2_f_0(mercury__integer__V_36_36, mercury__integer__V_37_37);
                }
#line 904 "integer.m"
                {
#line 904 "integer.m"
                  mercury__integer__Res2_22 = mercury__integer__pos_mul_2_f_0(mercury__integer__HiDs1_18, mercury__integer__HiDs2_19);
                }
#line 902 "integer.m"
              }
#line 885 "integer.m"
          }
#line 907 "integer.m"
        mercury__integer__V_41_41 = ((MR_Integer) 2 * mercury__integer__Middle_9);
#line 907 "integer.m"
        mercury__integer__V_40_40 = (mercury__integer__V_41_41 * (MR_Integer) 14);
#line 907 "integer.m"
        {
#line 907 "integer.m"
          mercury__integer__V_39_39 = mercury__integer__big_left_shift_2_f_0(mercury__integer__Res2_22, mercury__integer__V_40_40);
        }
#line 908 "integer.m"
        {
#line 908 "integer.m"
          mercury__integer__V_46_46 = mercury__integer__f_plus_2_f_0(mercury__integer__Res2_22, mercury__integer__Res0_20);
        }
#line 908 "integer.m"
        {
#line 908 "integer.m"
          mercury__integer__V_45_45 = mercury__integer__f_minus_2_f_0(mercury__integer__Res1_21, mercury__integer__V_46_46);
        }
#line 908 "integer.m"
        mercury__integer__V_47_47 = (mercury__integer__Middle_9 * (MR_Integer) 14);
#line 908 "integer.m"
        {
#line 908 "integer.m"
          mercury__integer__V_44_44 = mercury__integer__big_left_shift_2_f_0(mercury__integer__V_45_45, mercury__integer__V_47_47);
        }
#line 907 "integer.m"
        {
#line 907 "integer.m"
          mercury__integer__V_38_38 = mercury__integer__f_plus_2_f_0(mercury__integer__V_39_39, mercury__integer__V_44_44);
        }
#line 908 "integer.m"
        {
#line 908 "integer.m"
          return mercury__integer__Res_8 = mercury__integer__f_plus_2_f_0(mercury__integer__V_38_38, mercury__integer__Res0_20);
        }
#line 906 "integer.m"
      }
#line 878 "integer.m"
    return mercury__integer__Res_8;
#line 878 "integer.m"
  }
#line 876 "integer.m"
}

#line 855 "integer.m"
MR_Word MR_CALL 
mercury__integer__pos_mul_2_f_0(
#line 855 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 855 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 855 "integer.m"
{
#line 857 "integer.m"
  {
#line 857 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 857 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 857 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 857 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 857 "integer.m"
    MR_Word mercury__integer__Ds1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 857 "integer.m"
    MR_Word mercury__integer__Ds2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 858 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
#line 857 "integer.m"
    if (mercury__integer__succeeded)
#line 859 "integer.m"
      {
#line 859 "integer.m"
        return mercury__integer__HeadVar__3_3 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__HeadVar__2_2);
      }
#line 857 "integer.m"
    else
#line 861 "integer.m"
      {
#line 861 "integer.m"
        return mercury__integer__HeadVar__3_3 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__HeadVar__2_2, mercury__integer__HeadVar__1_1);
      }
#line 857 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 857 "integer.m"
  }
#line 855 "integer.m"
}

#line 846 "integer.m"
static void MR_CALL 
mercury__integer__diff_pairs_equal_4_p_0(
#line 846 "integer.m"
  MR_Integer * mercury__integer__HeadVar__1_1,
#line 846 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 846 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 846 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4)
#line 846 "integer.m"
{
#line 849 "integer.m"
  {
#line 849 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 849 "integer.m"
    if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 849 "integer.m"
      {
#line 849 "integer.m"
        *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 849 "integer.m"
        *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 849 "integer.m"
      }
#line 849 "integer.m"
    else
#line 849 "integer.m"
      {
#line 849 "integer.m"
        MR_Word mercury__integer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 849 "integer.m"
        MR_Integer mercury__integer__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));

#line 849 "integer.m"
        if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 850 "integer.m"
          {
#line 850 "integer.m"
            *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 850 "integer.m"
            *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 850 "integer.m"
          }
#line 849 "integer.m"
        else
#line 851 "integer.m"
          {
#line 851 "integer.m"
            MR_Integer mercury__integer__Y_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 851 "integer.m"
            MR_Word mercury__integer__Ys_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 851 "integer.m"
            MR_Integer mercury__integer__Mod_13;
#line 851 "integer.m"
            MR_Word mercury__integer__TailDs_14;
#line 851 "integer.m"
            MR_Integer mercury__integer__DivTail_15;
#line 851 "integer.m"
            MR_Integer mercury__integer__V_16_16;
#line 851 "integer.m"
            MR_Integer mercury__integer__V_17_17;

#line 852 "integer.m"
            {
#line 852 "integer.m"
              mercury__integer__diff_pairs_equal_4_p_0(&mercury__integer__DivTail_15, mercury__integer__V_18_18, mercury__integer__Ys_12, &mercury__integer__TailDs_14);
            }
#line 853 "integer.m"
            mercury__integer__V_17_17 = (mercury__integer__V_19_19 - mercury__integer__Y_11);
#line 853 "integer.m"
            mercury__integer__V_16_16 = (mercury__integer__V_17_17 + mercury__integer__DivTail_15);
#line 788 "integer.m"
            *mercury__integer__HeadVar__1_1 = (mercury__integer__V_16_16 >> (MR_Integer) 14);
#line 789 "integer.m"
            mercury__integer__Mod_13 = (mercury__integer__V_16_16 & (MR_Integer) 16383);
#line 851 "integer.m"
            {
#line 851 "integer.m"
              MR_Word base;
#line 851 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 851 "integer.m"
              *mercury__integer__HeadVar__4_4 = base;
#line 851 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_13));
#line 851 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__TailDs_14));
#line 851 "integer.m"
            }
#line 851 "integer.m"
          }
#line 849 "integer.m"
      }
#line 849 "integer.m"
  }
#line 846 "integer.m"
}

#line 832 "integer.m"
static void MR_CALL 
mercury__integer__diff_pairs_4_p_0(
#line 832 "integer.m"
  MR_Integer * mercury__integer__Div_5,
#line 832 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 832 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 832 "integer.m"
  MR_Word * mercury__integer__Ds_10)
#line 832 "integer.m"
{
#line 835 "integer.m"
  {
#line 835 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 835 "integer.m"
    MR_Integer mercury__integer__L1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 835 "integer.m"
    MR_Word mercury__integer__D1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 835 "integer.m"
    MR_Integer mercury__integer__L2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 835 "integer.m"
    MR_Word mercury__integer__D2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));

#line 836 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_6 == mercury__integer__L2_8);
#line 838 "integer.m"
    if (mercury__integer__succeeded)
#line 837 "integer.m"
      {
#line 837 "integer.m"
        mercury__integer__diff_pairs_equal_4_p_0(mercury__integer__Div_5, mercury__integer__D1_7, mercury__integer__D2_9, mercury__integer__Ds_10);
#line 837 "integer.m"
        return;
      }
#line 838 "integer.m"
    else
#line 842 "integer.m"
      {
#line 842 "integer.m"
        MR_Integer mercury__integer__H1_11;
#line 842 "integer.m"
        MR_Word mercury__integer__T1_12;

#line 838 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_6 > mercury__integer__L2_8);
#line 838 "integer.m"
        if (mercury__integer__succeeded)
#line 838 "integer.m"
          {
#line 838 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_7)) == (MR_mktag((MR_Integer) 1)));
#line 838 "integer.m"
            if (mercury__integer__succeeded)
#line 838 "integer.m"
              {
#line 838 "integer.m"
                mercury__integer__H1_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 0)));
#line 838 "integer.m"
                mercury__integer__T1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 1)));
#line 838 "integer.m"
              }
#line 838 "integer.m"
          }
#line 842 "integer.m"
        if (mercury__integer__succeeded)
#line 839 "integer.m"
          {
#line 839 "integer.m"
            MR_Integer mercury__integer__Div1_13;
#line 839 "integer.m"
            MR_Word mercury__integer__Ds1_14;
#line 839 "integer.m"
            MR_Integer mercury__integer__Mod_15;
#line 839 "integer.m"
            MR_Word mercury__integer__V_16_16;
#line 839 "integer.m"
            MR_Integer mercury__integer__V_18_18 = (mercury__integer__L1_6 - (MR_Integer) 1);
#line 839 "integer.m"
            MR_Integer mercury__integer__V_20_20;

#line 839 "integer.m"
            {
#line 839 "integer.m"
              mercury__integer__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 839 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, 0) = ((MR_Box) (mercury__integer__V_18_18));
#line 839 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, 1) = ((MR_Box) (mercury__integer__T1_12));
#line 839 "integer.m"
            }
#line 839 "integer.m"
            {
#line 839 "integer.m"
              mercury__integer__diff_pairs_4_p_0(&mercury__integer__Div1_13, mercury__integer__V_16_16, mercury__integer__HeadVar__3_3, &mercury__integer__Ds1_14);
            }
#line 840 "integer.m"
            mercury__integer__V_20_20 = (mercury__integer__H1_11 + mercury__integer__Div1_13);
#line 788 "integer.m"
            *mercury__integer__Div_5 = (mercury__integer__V_20_20 >> (MR_Integer) 14);
#line 789 "integer.m"
            mercury__integer__Mod_15 = (mercury__integer__V_20_20 & (MR_Integer) 16383);
#line 841 "integer.m"
            {
#line 841 "integer.m"
              MR_Word base;
#line 841 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 841 "integer.m"
              *mercury__integer__Ds_10 = base;
#line 841 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_15));
#line 841 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_14));
#line 841 "integer.m"
            }
#line 839 "integer.m"
          }
#line 842 "integer.m"
        else
#line 843 "integer.m"
          {
#line 843 "integer.m"
            {
#line 843 "integer.m"
              mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "predicate \140integer.diff_pairs\'/4", (MR_String) "invalid integer");
#line 843 "integer.m"
              return;
            }
#line 843 "integer.m"
          }
#line 842 "integer.m"
      }
#line 835 "integer.m"
  }
#line 832 "integer.m"
}

#line 825 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_minus_2_f_0(
#line 825 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 825 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 825 "integer.m"
{
#line 827 "integer.m"
  {
#line 827 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 827 "integer.m"
    MR_Word mercury__integer__Out_8;
#line 827 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 827 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 827 "integer.m"
    MR_Integer mercury__integer__Mod_9;
#line 827 "integer.m"
    MR_Word mercury__integer__Ds_10;
#line 827 "integer.m"
    MR_Integer mercury__integer__Len_11;
#line 827 "integer.m"
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 827 "integer.m"
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 828 "integer.m"
    {
#line 828 "integer.m"
      mercury__integer__diff_pairs_4_p_0(&mercury__integer__Mod_9, mercury__integer__HeadVar__1_1, mercury__integer__HeadVar__2_2, &mercury__integer__Ds_10);
    }
#line 829 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
#line 829 "integer.m"
    if (mercury__integer__succeeded)
#line 829 "integer.m"
      mercury__integer__Len_11 = mercury__integer__L1_4;
#line 829 "integer.m"
    else
#line 829 "integer.m"
      mercury__integer__Len_11 = mercury__integer__L2_6;
#line 830 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Mod_9 == (MR_Integer) 0);
#line 830 "integer.m"
    if (mercury__integer__succeeded)
#line 830 "integer.m"
      {
#line 830 "integer.m"
        MR_Word mercury__integer__V_14_14;

#line 830 "integer.m"
        {
#line 830 "integer.m"
          mercury__integer__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 830 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__Len_11));
#line 830 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__Ds_10));
#line 830 "integer.m"
        }
#line 830 "integer.m"
        {
#line 830 "integer.m"
          return mercury__integer__Out_8 = mercury__integer__decap_1_f_0(mercury__integer__V_14_14);
        }
#line 830 "integer.m"
      }
#line 830 "integer.m"
    else
#line 830 "integer.m"
      {
#line 830 "integer.m"
        MR_Integer mercury__integer__V_15_15 = (mercury__integer__Len_11 + (MR_Integer) 1);
#line 830 "integer.m"
        MR_Word mercury__integer__V_17_17;

#line 830 "integer.m"
        {
#line 830 "integer.m"
          mercury__integer__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, 0) = ((MR_Box) (mercury__integer__Mod_9));
#line 830 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, 1) = ((MR_Box) (mercury__integer__Ds_10));
#line 830 "integer.m"
        }
#line 830 "integer.m"
        {
#line 830 "integer.m"
          mercury__integer__Out_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 830 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Out_8, 0) = ((MR_Box) (mercury__integer__V_15_15));
#line 830 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Out_8, 1) = ((MR_Box) (mercury__integer__V_17_17));
#line 830 "integer.m"
        }
#line 830 "integer.m"
      }
#line 827 "integer.m"
    return mercury__integer__Out_8;
#line 827 "integer.m"
  }
#line 825 "integer.m"
}

#line 816 "integer.m"
static void MR_CALL 
mercury__integer__add_pairs_equal_4_p_0(
#line 816 "integer.m"
  MR_Integer * mercury__integer__HeadVar__1_1,
#line 816 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 816 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 816 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4)
#line 816 "integer.m"
{
#line 819 "integer.m"
  {
#line 819 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 819 "integer.m"
    if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 819 "integer.m"
      {
#line 819 "integer.m"
        *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 819 "integer.m"
        *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 819 "integer.m"
      }
#line 819 "integer.m"
    else
#line 819 "integer.m"
      {
#line 819 "integer.m"
        MR_Word mercury__integer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 819 "integer.m"
        MR_Integer mercury__integer__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));

#line 819 "integer.m"
        if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 820 "integer.m"
          {
#line 820 "integer.m"
            *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 820 "integer.m"
            *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 820 "integer.m"
          }
#line 819 "integer.m"
        else
#line 821 "integer.m"
          {
#line 821 "integer.m"
            MR_Integer mercury__integer__Y_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 821 "integer.m"
            MR_Word mercury__integer__Ys_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 821 "integer.m"
            MR_Integer mercury__integer__Mod_13;
#line 821 "integer.m"
            MR_Word mercury__integer__TailDs_14;
#line 821 "integer.m"
            MR_Integer mercury__integer__DivTail_15;
#line 821 "integer.m"
            MR_Integer mercury__integer__V_16_16;
#line 821 "integer.m"
            MR_Integer mercury__integer__V_17_17;

#line 822 "integer.m"
            {
#line 822 "integer.m"
              mercury__integer__add_pairs_equal_4_p_0(&mercury__integer__DivTail_15, mercury__integer__V_18_18, mercury__integer__Ys_12, &mercury__integer__TailDs_14);
            }
#line 823 "integer.m"
            mercury__integer__V_17_17 = (mercury__integer__V_19_19 + mercury__integer__Y_11);
#line 823 "integer.m"
            mercury__integer__V_16_16 = (mercury__integer__V_17_17 + mercury__integer__DivTail_15);
#line 788 "integer.m"
            *mercury__integer__HeadVar__1_1 = (mercury__integer__V_16_16 >> (MR_Integer) 14);
#line 789 "integer.m"
            mercury__integer__Mod_13 = (mercury__integer__V_16_16 & (MR_Integer) 16383);
#line 821 "integer.m"
            {
#line 821 "integer.m"
              MR_Word base;
#line 821 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "integer.m"
              *mercury__integer__HeadVar__4_4 = base;
#line 821 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_13));
#line 821 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__TailDs_14));
#line 821 "integer.m"
            }
#line 821 "integer.m"
          }
#line 819 "integer.m"
      }
#line 819 "integer.m"
  }
#line 816 "integer.m"
}

#line 798 "integer.m"
static void MR_CALL 
mercury__integer__add_pairs_4_p_0(
#line 798 "integer.m"
  MR_Integer * mercury__integer__Div_5,
#line 798 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 798 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 798 "integer.m"
  MR_Word * mercury__integer__Ds_10)
#line 798 "integer.m"
{
#line 801 "integer.m"
  {
#line 801 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 801 "integer.m"
    MR_Integer mercury__integer__L1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 801 "integer.m"
    MR_Word mercury__integer__D1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 801 "integer.m"
    MR_Integer mercury__integer__L2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 801 "integer.m"
    MR_Word mercury__integer__D2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));

#line 802 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_6 == mercury__integer__L2_8);
#line 804 "integer.m"
    if (mercury__integer__succeeded)
#line 803 "integer.m"
      {
#line 803 "integer.m"
        mercury__integer__add_pairs_equal_4_p_0(mercury__integer__Div_5, mercury__integer__D1_7, mercury__integer__D2_9, mercury__integer__Ds_10);
#line 803 "integer.m"
        return;
      }
#line 804 "integer.m"
    else
#line 808 "integer.m"
      {
#line 808 "integer.m"
        MR_Integer mercury__integer__H2_11;
#line 808 "integer.m"
        MR_Word mercury__integer__T2_12;

#line 804 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_6 < mercury__integer__L2_8);
#line 804 "integer.m"
        if (mercury__integer__succeeded)
#line 804 "integer.m"
          {
#line 804 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_9)) == (MR_mktag((MR_Integer) 1)));
#line 804 "integer.m"
            if (mercury__integer__succeeded)
#line 804 "integer.m"
              {
#line 804 "integer.m"
                mercury__integer__H2_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_9, (MR_Integer) 0)));
#line 804 "integer.m"
                mercury__integer__T2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_9, (MR_Integer) 1)));
#line 804 "integer.m"
              }
#line 804 "integer.m"
          }
#line 808 "integer.m"
        if (mercury__integer__succeeded)
#line 805 "integer.m"
          {
#line 805 "integer.m"
            MR_Integer mercury__integer__Div1_13;
#line 805 "integer.m"
            MR_Word mercury__integer__Ds1_14;
#line 805 "integer.m"
            MR_Integer mercury__integer__Mod_15;
#line 805 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 805 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_8 - (MR_Integer) 1);
#line 805 "integer.m"
            MR_Integer mercury__integer__V_22_22;

#line 805 "integer.m"
            {
#line 805 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 805 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 805 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_12));
#line 805 "integer.m"
            }
#line 805 "integer.m"
            {
#line 805 "integer.m"
              mercury__integer__add_pairs_4_p_0(&mercury__integer__Div1_13, mercury__integer__HeadVar__2_2, mercury__integer__V_19_19, &mercury__integer__Ds1_14);
            }
#line 806 "integer.m"
            mercury__integer__V_22_22 = (mercury__integer__H2_11 + mercury__integer__Div1_13);
#line 788 "integer.m"
            *mercury__integer__Div_5 = (mercury__integer__V_22_22 >> (MR_Integer) 14);
#line 789 "integer.m"
            mercury__integer__Mod_15 = (mercury__integer__V_22_22 & (MR_Integer) 16383);
#line 807 "integer.m"
            {
#line 807 "integer.m"
              MR_Word base;
#line 807 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "integer.m"
              *mercury__integer__Ds_10 = base;
#line 807 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_15));
#line 807 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_14));
#line 807 "integer.m"
            }
#line 805 "integer.m"
          }
#line 808 "integer.m"
        else
#line 812 "integer.m"
          {
#line 812 "integer.m"
            MR_Integer mercury__integer__H1_16;
#line 812 "integer.m"
            MR_Word mercury__integer__T1_17;

#line 808 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_6 > mercury__integer__L2_8);
#line 808 "integer.m"
            if (mercury__integer__succeeded)
#line 808 "integer.m"
              {
#line 808 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_7)) == (MR_mktag((MR_Integer) 1)));
#line 808 "integer.m"
                if (mercury__integer__succeeded)
#line 808 "integer.m"
                  {
#line 808 "integer.m"
                    mercury__integer__H1_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 0)));
#line 808 "integer.m"
                    mercury__integer__T1_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 1)));
#line 808 "integer.m"
                  }
#line 808 "integer.m"
              }
#line 812 "integer.m"
            if (mercury__integer__succeeded)
#line 809 "integer.m"
              {
#line 809 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 809 "integer.m"
                MR_Integer mercury__integer__V_25_25 = (mercury__integer__L1_6 - (MR_Integer) 1);
#line 809 "integer.m"
                MR_Integer mercury__integer__V_27_27;
#line 809 "integer.m"
                MR_Integer mercury__integer__Div1_31;
#line 809 "integer.m"
                MR_Word mercury__integer__Ds1_32;
#line 809 "integer.m"
                MR_Integer mercury__integer__Mod_33;

#line 809 "integer.m"
                {
#line 809 "integer.m"
                  mercury__integer__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 809 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 0) = ((MR_Box) (mercury__integer__V_25_25));
#line 809 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 1) = ((MR_Box) (mercury__integer__T1_17));
#line 809 "integer.m"
                }
#line 809 "integer.m"
                {
#line 809 "integer.m"
                  mercury__integer__add_pairs_4_p_0(&mercury__integer__Div1_31, mercury__integer__V_23_23, mercury__integer__HeadVar__3_3, &mercury__integer__Ds1_32);
                }
#line 810 "integer.m"
                mercury__integer__V_27_27 = (mercury__integer__H1_16 + mercury__integer__Div1_31);
#line 788 "integer.m"
                *mercury__integer__Div_5 = (mercury__integer__V_27_27 >> (MR_Integer) 14);
#line 789 "integer.m"
                mercury__integer__Mod_33 = (mercury__integer__V_27_27 & (MR_Integer) 16383);
#line 811 "integer.m"
                {
#line 811 "integer.m"
                  MR_Word base;
#line 811 "integer.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "integer.m"
                  *mercury__integer__Ds_10 = base;
#line 811 "integer.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_33));
#line 811 "integer.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_32));
#line 811 "integer.m"
                }
#line 809 "integer.m"
              }
#line 812 "integer.m"
            else
#line 813 "integer.m"
              {
#line 813 "integer.m"
                {
#line 813 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "predicate \140integer.add_pairs\'/4", (MR_String) "invalid integer");
#line 813 "integer.m"
                  return;
                }
#line 813 "integer.m"
              }
#line 812 "integer.m"
          }
#line 808 "integer.m"
      }
#line 801 "integer.m"
  }
#line 798 "integer.m"
}

#line 777 "integer.m"
static void MR_CALL 
mercury__integer__mul_by_digit_2_4_p_0(
#line 777 "integer.m"
  MR_Integer mercury__integer__D_1,
#line 777 "integer.m"
  MR_Integer * mercury__integer__HeadVar__2_2,
#line 777 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 777 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4)
#line 777 "integer.m"
{
#line 780 "integer.m"
  {
#line 780 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 780 "integer.m"
    if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 780 "integer.m"
      {
#line 780 "integer.m"
        *mercury__integer__HeadVar__2_2 = (MR_Integer) 0;
#line 780 "integer.m"
        *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 780 "integer.m"
      }
#line 780 "integer.m"
    else
#line 781 "integer.m"
      {
#line 781 "integer.m"
        MR_Integer mercury__integer__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 781 "integer.m"
        MR_Word mercury__integer__Xs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 781 "integer.m"
        MR_Integer mercury__integer__Mod_10;
#line 781 "integer.m"
        MR_Word mercury__integer__NewXs_11;
#line 781 "integer.m"
        MR_Integer mercury__integer__DivXs_12;
#line 781 "integer.m"
        MR_Integer mercury__integer__V_13_13;
#line 781 "integer.m"
        MR_Integer mercury__integer__V_14_14;

#line 782 "integer.m"
        {
#line 782 "integer.m"
          mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__D_1, &mercury__integer__DivXs_12, mercury__integer__Xs_9, &mercury__integer__NewXs_11);
        }
#line 783 "integer.m"
        mercury__integer__V_14_14 = (mercury__integer__D_1 * mercury__integer__X_8);
#line 783 "integer.m"
        mercury__integer__V_13_13 = (mercury__integer__V_14_14 + mercury__integer__DivXs_12);
#line 788 "integer.m"
        *mercury__integer__HeadVar__2_2 = (mercury__integer__V_13_13 >> (MR_Integer) 14);
#line 789 "integer.m"
        mercury__integer__Mod_10 = (mercury__integer__V_13_13 & (MR_Integer) 16383);
#line 781 "integer.m"
        {
#line 781 "integer.m"
          MR_Word base;
#line 781 "integer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "integer.m"
          *mercury__integer__HeadVar__4_4 = base;
#line 781 "integer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_10));
#line 781 "integer.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__NewXs_11));
#line 781 "integer.m"
        }
#line 781 "integer.m"
      }
#line 780 "integer.m"
  }
#line 777 "integer.m"
}

#line 771 "integer.m"
static MR_Word MR_CALL 
mercury__integer__mul_by_digit_2_f_0(
#line 771 "integer.m"
  MR_Integer mercury__integer__Digit_4,
#line 771 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 771 "integer.m"
{
#line 773 "integer.m"
  {
#line 773 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 773 "integer.m"
    MR_Word mercury__integer__Out_7;
#line 773 "integer.m"
    MR_Integer mercury__integer__Len_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 773 "integer.m"
    MR_Word mercury__integer__Digits0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 773 "integer.m"
    MR_Integer mercury__integer__Mod_8;
#line 773 "integer.m"
    MR_Word mercury__integer__Digits_9;

#line 774 "integer.m"
    {
#line 774 "integer.m"
      mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__Digit_4, &mercury__integer__Mod_8, mercury__integer__Digits0_6, &mercury__integer__Digits_9);
    }
#line 775 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Mod_8 == (MR_Integer) 0);
#line 775 "integer.m"
    if (mercury__integer__succeeded)
#line 775 "integer.m"
      {
#line 775 "integer.m"
        mercury__integer__Out_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 775 "integer.m"
        MR_hl_field(MR_mktag(0), mercury__integer__Out_7, 0) = ((MR_Box) (mercury__integer__Len_5));
#line 775 "integer.m"
        MR_hl_field(MR_mktag(0), mercury__integer__Out_7, 1) = ((MR_Box) (mercury__integer__Digits_9));
#line 775 "integer.m"
      }
#line 775 "integer.m"
    else
#line 775 "integer.m"
      {
#line 775 "integer.m"
        MR_Integer mercury__integer__V_10_10 = (mercury__integer__Len_5 + (MR_Integer) 1);
#line 775 "integer.m"
        MR_Word mercury__integer__V_12_12;

#line 775 "integer.m"
        {
#line 775 "integer.m"
          mercury__integer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_12_12, 0) = ((MR_Box) (mercury__integer__Mod_8));
#line 775 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_12_12, 1) = ((MR_Box) (mercury__integer__Digits_9));
#line 775 "integer.m"
        }
#line 775 "integer.m"
        {
#line 775 "integer.m"
          mercury__integer__Out_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 775 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Out_7, 0) = ((MR_Box) (mercury__integer__V_10_10));
#line 775 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Out_7, 1) = ((MR_Box) (mercury__integer__V_12_12));
#line 775 "integer.m"
        }
#line 775 "integer.m"
      }
#line 773 "integer.m"
    return mercury__integer__Out_7;
#line 773 "integer.m"
  }
#line 771 "integer.m"
}

#line 766 "integer.m"
static MR_Word MR_CALL 
mercury__integer__mul_base_2_1_f_0(
#line 766 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 766 "integer.m"
{
#line 768 "integer.m"
  {
#line 768 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 768 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;

#line 768 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 768 "integer.m"
      {
#line 768 "integer.m"
        MR_Word mercury__integer__V_4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 768 "integer.m"
        mercury__integer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__integer_scalar_common_1[3]);
#line 768 "integer.m"
      }
#line 768 "integer.m"
    else
#line 769 "integer.m"
      {
#line 769 "integer.m"
        MR_Integer mercury__integer__H_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 769 "integer.m"
        MR_Word mercury__integer__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 769 "integer.m"
        MR_Word mercury__integer__V_7_7;

#line 769 "integer.m"
        {
#line 769 "integer.m"
          mercury__integer__V_7_7 = mercury__integer__mul_base_2_1_f_0(mercury__integer__T_6);
        }
#line 769 "integer.m"
        {
#line 769 "integer.m"
          mercury__integer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__H_5));
#line 769 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__V_7_7));
#line 769 "integer.m"
        }
#line 769 "integer.m"
      }
#line 768 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 768 "integer.m"
  }
#line 766 "integer.m"
}

#line 743 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_int_to_digits_2_2_f_0(
#line 743 "integer.m"
  MR_Integer mercury__integer__D_4,
#line 743 "integer.m"
  MR_Word mercury__integer__Tail_5)
#line 743 "integer.m"
{
#line 748 "integer.m"
  while (MR_TRUE)
#line 748 "integer.m"
    {
#line 748 "integer.m"
      /* tailcall optimized into a loop */
#line 748 "integer.m"
      {
#line 748 "integer.m"
        MR_bool mercury__integer__succeeded = (mercury__integer__D_4 == (MR_Integer) 0);
#line 748 "integer.m"
        MR_Word mercury__integer__Result_6;

#line 748 "integer.m"
        if (mercury__integer__succeeded)
#line 747 "integer.m"
          mercury__integer__Result_6 = mercury__integer__Tail_5;
#line 748 "integer.m"
        else
#line 749 "integer.m"
          {
#line 749 "integer.m"
            MR_Integer mercury__integer__Length_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_5, (MR_Integer) 0)));
#line 749 "integer.m"
            MR_Word mercury__integer__Digits_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_5, (MR_Integer) 1)));
#line 749 "integer.m"
            MR_Integer mercury__integer__Div_9 = (mercury__integer__D_4 >> (MR_Integer) 14);
#line 749 "integer.m"
            MR_Integer mercury__integer__Mod_10 = (mercury__integer__D_4 & (MR_Integer) 16383);
#line 749 "integer.m"
            MR_Word mercury__integer__V_11_11;
#line 749 "integer.m"
            MR_Integer mercury__integer__V_12_12 = (mercury__integer__Length_7 + (MR_Integer) 1);
#line 749 "integer.m"
            MR_Word mercury__integer__V_14_14;

#line 752 "integer.m"
            {
#line 752 "integer.m"
              mercury__integer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__Mod_10));
#line 752 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__Digits_8));
#line 752 "integer.m"
            }
#line 752 "integer.m"
            {
#line 752 "integer.m"
              mercury__integer__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 752 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 0) = ((MR_Box) (mercury__integer__V_12_12));
#line 752 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 1) = ((MR_Box) (mercury__integer__V_14_14));
#line 752 "integer.m"
            }
#line 751 "integer.m"
            /* direct tailcall eliminated */
#line 751 "integer.m"
            {
#line 751 "integer.m"
              MR_Integer mercury__integer__D__tmp_copy_4 = mercury__integer__Div_9;
#line 751 "integer.m"
              MR_Word mercury__integer__Tail__tmp_copy_5 = mercury__integer__V_11_11;

#line 751 "integer.m"
              mercury__integer__Tail_5 = mercury__integer__Tail__tmp_copy_5;
#line 751 "integer.m"
              mercury__integer__D_4 = mercury__integer__D__tmp_copy_4;
#line 751 "integer.m"
            }
#line 751 "integer.m"
            continue;
#line 749 "integer.m"
          }
#line 748 "integer.m"
        return mercury__integer__Result_6;
#line 748 "integer.m"
      }
#line 748 "integer.m"
      break;
#line 748 "integer.m"
    }
#line 743 "integer.m"
}

#line 735 "integer.m"
MR_Integer MR_CALL 
mercury__integer__integer_signum_1_f_0(
#line 735 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 735 "integer.m"
{
#line 737 "integer.m"
  {
#line 737 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 737 "integer.m"
    MR_Integer mercury__integer__HeadVar__2_2;
#line 737 "integer.m"
    MR_Integer mercury__integer__Sign_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 737 "integer.m"
    MR_Word mercury__integer__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

#line 737 "integer.m"
    {
#line 737 "integer.m"
      return mercury__integer__HeadVar__2_2 = mercury__integer__signum_1_f_0(mercury__integer__Sign_3);
    }
#line 737 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 737 "integer.m"
  }
#line 735 "integer.m"
}

#line 731 "integer.m"
MR_Integer MR_CALL 
mercury__integer__signum_1_f_0(
#line 731 "integer.m"
  MR_Integer mercury__integer__N_3)
#line 731 "integer.m"
{
#line 733 "integer.m"
  {
#line 733 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__N_3 < (MR_Integer) 0);
#line 733 "integer.m"
    MR_Integer mercury__integer__HeadVar__2_2;

#line 733 "integer.m"
    if (mercury__integer__succeeded)
#line 733 "integer.m"
      mercury__integer__HeadVar__2_2 = (MR_Integer) -1;
#line 733 "integer.m"
    else
#line 733 "integer.m"
      {
#line 733 "integer.m"
        mercury__integer__succeeded = (mercury__integer__N_3 == (MR_Integer) 0);
#line 733 "integer.m"
        if (mercury__integer__succeeded)
#line 733 "integer.m"
          mercury__integer__HeadVar__2_2 = (MR_Integer) 0;
#line 733 "integer.m"
        else
#line 733 "integer.m"
          mercury__integer__HeadVar__2_2 = (MR_Integer) 1;
#line 733 "integer.m"
      }
#line 733 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 733 "integer.m"
  }
#line 731 "integer.m"
}

#line 708 "integer.m"
MR_Word MR_CALL 
mercury__integer__int_to_integer_1_f_0(
#line 708 "integer.m"
  MR_Integer mercury__integer__D_3)
#line 708 "integer.m"
{
#line 713 "integer.m"
  {
#line 713 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__D_3 == (MR_Integer) 0);
#line 713 "integer.m"
    MR_Word mercury__integer__Int_4;

#line 713 "integer.m"
    if (mercury__integer__succeeded)
#line 1188 "integer.m"
      {
#line 1188 "integer.m"
        MR_Word mercury__integer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1188 "integer.m"
        mercury__integer__Int_4 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1188 "integer.m"
      }
#line 713 "integer.m"
    else
#line 715 "integer.m"
      {
#line 713 "integer.m"
        MR_Integer mercury__integer__V_6_6;

#line 713 "integer.m"
        mercury__integer__succeeded = (mercury__integer__D_3 > (MR_Integer) 0);
#line 713 "integer.m"
        if (mercury__integer__succeeded)
#line 713 "integer.m"
          {
#line 277 "integer.m"
            mercury__integer__V_6_6 = (MR_Integer) 16384;
#line 713 "integer.m"
            mercury__integer__succeeded = (mercury__integer__D_3 < mercury__integer__V_6_6);
#line 713 "integer.m"
          }
#line 715 "integer.m"
        if (mercury__integer__succeeded)
#line 714 "integer.m"
          {
#line 714 "integer.m"
            MR_Word mercury__integer__V_8_8;
#line 714 "integer.m"
            MR_Word mercury__integer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 714 "integer.m"
            {
#line 714 "integer.m"
              mercury__integer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_8_8, 0) = ((MR_Box) (mercury__integer__D_3));
#line 714 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_8_8, 1) = ((MR_Box) (mercury__integer__V_9_9));
#line 714 "integer.m"
            }
#line 714 "integer.m"
            {
#line 714 "integer.m"
              mercury__integer__Int_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 714 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Int_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 714 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Int_4, 1) = ((MR_Box) (mercury__integer__V_8_8));
#line 714 "integer.m"
            }
#line 714 "integer.m"
          }
#line 715 "integer.m"
        else
#line 717 "integer.m"
          {
#line 715 "integer.m"
            MR_Integer mercury__integer__V_11_11;

#line 715 "integer.m"
            mercury__integer__succeeded = (mercury__integer__D_3 < (MR_Integer) 0);
#line 715 "integer.m"
            if (mercury__integer__succeeded)
#line 715 "integer.m"
              {
#line 715 "integer.m"
                mercury__integer__V_11_11 = (MR_Integer) -16384;
#line 715 "integer.m"
                mercury__integer__succeeded = (mercury__integer__D_3 > mercury__integer__V_11_11);
#line 715 "integer.m"
              }
#line 717 "integer.m"
            if (mercury__integer__succeeded)
#line 716 "integer.m"
              {
#line 716 "integer.m"
                MR_Word mercury__integer__V_14_14;
#line 716 "integer.m"
                MR_Word mercury__integer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 716 "integer.m"
                {
#line 716 "integer.m"
                  mercury__integer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__D_3));
#line 716 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__V_15_15));
#line 716 "integer.m"
                }
#line 716 "integer.m"
                {
#line 716 "integer.m"
                  mercury__integer__Int_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 716 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Int_4, 0) = ((MR_Box) ((MR_Integer) -1));
#line 716 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Int_4, 1) = ((MR_Box) (mercury__integer__V_14_14));
#line 716 "integer.m"
                }
#line 716 "integer.m"
              }
#line 717 "integer.m"
            else
#line 721 "integer.m"
              {
#line 718 "integer.m"
                MR_Integer mercury__integer__V_22_22;

#line 156 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__int_to_integer_1_f_0

	MR_Integer Min;

		{
#line 156 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Min = INT_MIN;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Min = (MR_Integer) LONG_MIN;
    #if defined(LLONG_MIN)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Min = (MR_Integer) LLONG_MIN;
    #endif
    } else {
        MR_fatal_error("Unable to figure out min integer size");
    }

#line 8491 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_22_22  = Min;
#line 156 "int.opt"
}
#line 718 "integer.m"
                mercury__integer__succeeded = (mercury__integer__D_3 == mercury__integer__V_22_22);
#line 721 "integer.m"
                if (mercury__integer__succeeded)
#line 720 "integer.m"
                  {
#line 720 "integer.m"
                    MR_Word mercury__integer__V_16_16;
#line 720 "integer.m"
                    MR_Integer mercury__integer__V_17_17 = (mercury__integer__D_3 + (MR_Integer) 1);
#line 720 "integer.m"
                    MR_Word mercury__integer__V_19_19;
#line 720 "integer.m"
                    MR_Word mercury__integer__V_32_32;
#line 720 "integer.m"
                    MR_Integer mercury__integer__S_33;
#line 720 "integer.m"
                    MR_Word mercury__integer__Digits0_34;
#line 720 "integer.m"
                    MR_Word mercury__integer__Digits_35;
#line 720 "integer.m"
                    MR_Integer mercury__integer__V_36_36;

#line 697 "integer.m"
                    {
#line 697 "integer.m"
                      mercury__integer__V_16_16 = mercury__integer__int_to_integer_1_f_0(mercury__integer__V_17_17);
                    }
#line 1190 "integer.m"
                    mercury__integer__V_19_19 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 421 "integer.m"
                    mercury__integer__S_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 0)));
#line 421 "integer.m"
                    mercury__integer__Digits0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 1)));
#line 421 "integer.m"
                    mercury__integer__V_36_36 = ((MR_Integer) 0 - mercury__integer__S_33);
#line 422 "integer.m"
                    {
#line 422 "integer.m"
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_34, &mercury__integer__Digits_35);
                    }
#line 421 "integer.m"
                    {
#line 421 "integer.m"
                      mercury__integer__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_32_32, 0) = ((MR_Box) (mercury__integer__V_36_36));
#line 421 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_32_32, 1) = ((MR_Box) (mercury__integer__Digits_35));
#line 421 "integer.m"
                    }
#line 325 "integer.m"
                    {
#line 325 "integer.m"
                      return mercury__integer__Int_4 = mercury__integer__big_plus_2_f_0(mercury__integer__V_16_16, mercury__integer__V_32_32);
                    }
#line 720 "integer.m"
                  }
#line 721 "integer.m"
                else
#line 722 "integer.m"
                  {
#line 722 "integer.m"
                    MR_Word mercury__integer__V_20_20;
#line 722 "integer.m"
                    MR_Integer mercury__integer__V_21_21;
#line 722 "integer.m"
                    MR_Word mercury__integer__V_40_40;
#line 722 "integer.m"
                    MR_Word mercury__integer__V_42_42;

#line 70 "int.opt"
                    {
#line 70 "int.opt"
                      mercury__int__abs_2_p_0(mercury__integer__D_3, &mercury__integer__V_21_21);
                    }
#line 1188 "integer.m"
                    mercury__integer__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1188 "integer.m"
                    mercury__integer__V_40_40 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 741 "integer.m"
                    {
#line 741 "integer.m"
                      mercury__integer__V_20_20 = mercury__integer__pos_int_to_digits_2_2_f_0(mercury__integer__V_21_21, mercury__integer__V_40_40);
                    }
#line 722 "integer.m"
                    {
#line 722 "integer.m"
                      return mercury__integer__Int_4 = mercury__integer__big_sign_2_f_0(mercury__integer__D_3, mercury__integer__V_20_20);
                    }
#line 722 "integer.m"
                  }
#line 721 "integer.m"
              }
#line 717 "integer.m"
          }
#line 715 "integer.m"
      }
#line 713 "integer.m"
    return mercury__integer__Int_4;
#line 713 "integer.m"
  }
#line 708 "integer.m"
}

#line 668 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_plus_2_f_0(
#line 668 "integer.m"
  MR_Word mercury__integer__X_4,
#line 668 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 668 "integer.m"
{
#line 673 "integer.m"
  {
#line 673 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 673 "integer.m"
    MR_Word mercury__integer__Sum_6;
#line 671 "integer.m"
    MR_Word mercury__integer__V_15_15 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 671 "integer.m"
    MR_Word mercury__integer__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 671 "integer.m"
    {
#line 671 "integer.m"
      mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__X_4, mercury__integer__V_15_15);
    }
#line 673 "integer.m"
    if (mercury__integer__succeeded)
#line 672 "integer.m"
      mercury__integer__Sum_6 = mercury__integer__Y_5;
#line 673 "integer.m"
    else
#line 675 "integer.m"
      {
#line 673 "integer.m"
        MR_Word mercury__integer__V_16_16 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 673 "integer.m"
        MR_Word mercury__integer__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 673 "integer.m"
        {
#line 673 "integer.m"
          mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__Y_5, mercury__integer__V_16_16);
        }
#line 675 "integer.m"
        if (mercury__integer__succeeded)
#line 674 "integer.m"
          mercury__integer__Sum_6 = mercury__integer__X_4;
#line 675 "integer.m"
        else
#line 676 "integer.m"
          {
#line 676 "integer.m"
            MR_Word mercury__integer__AbsX_7;
#line 676 "integer.m"
            MR_Word mercury__integer__AbsY_8;
#line 676 "integer.m"
            MR_Integer mercury__integer__SignX_9;
#line 676 "integer.m"
            MR_Integer mercury__integer__SignY_10;
#line 676 "integer.m"
            MR_Integer mercury__integer__Sign_21;
#line 676 "integer.m"
            MR_Integer mercury__integer__Sign_23;
#line 737 "integer.m"
            MR_Word mercury__integer__V_22_22;
#line 737 "integer.m"
            MR_Word mercury__integer__V_24_24;

#line 676 "integer.m"
            {
#line 676 "integer.m"
              mercury__integer__AbsX_7 = mercury__integer__big_abs_1_f_0(mercury__integer__X_4);
            }
#line 677 "integer.m"
            {
#line 677 "integer.m"
              mercury__integer__AbsY_8 = mercury__integer__big_abs_1_f_0(mercury__integer__Y_5);
            }
#line 737 "integer.m"
            mercury__integer__Sign_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 737 "integer.m"
            mercury__integer__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));
#line 737 "integer.m"
            {
#line 737 "integer.m"
              mercury__integer__SignX_9 = mercury__integer__signum_1_f_0(mercury__integer__Sign_21);
            }
#line 737 "integer.m"
            mercury__integer__Sign_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 737 "integer.m"
            mercury__integer__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
#line 737 "integer.m"
            {
#line 737 "integer.m"
              mercury__integer__SignY_10 = mercury__integer__signum_1_f_0(mercury__integer__Sign_23);
            }
#line 680 "integer.m"
            mercury__integer__succeeded = (mercury__integer__SignX_9 == mercury__integer__SignY_10);
#line 682 "integer.m"
            if (mercury__integer__succeeded)
#line 681 "integer.m"
              {
#line 681 "integer.m"
                MR_Word mercury__integer__V_12_12;
#line 681 "integer.m"
                MR_Integer mercury__integer__L1_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 0)));
#line 681 "integer.m"
                MR_Integer mercury__integer__L2_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 0)));
#line 681 "integer.m"
                MR_Integer mercury__integer__Div_30;
#line 681 "integer.m"
                MR_Word mercury__integer__Ds_31;
#line 681 "integer.m"
                MR_Integer mercury__integer__Len_32;
#line 793 "integer.m"
                MR_Word mercury__integer__D1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 1)));
#line 793 "integer.m"
                MR_Word mercury__integer__D2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 1)));

#line 794 "integer.m"
                {
#line 794 "integer.m"
                  mercury__integer__add_pairs_4_p_0(&mercury__integer__Div_30, mercury__integer__AbsX_7, mercury__integer__AbsY_8, &mercury__integer__Ds_31);
                }
#line 795 "integer.m"
                mercury__integer__succeeded = (mercury__integer__L1_26 > mercury__integer__L2_28);
#line 795 "integer.m"
                if (mercury__integer__succeeded)
#line 795 "integer.m"
                  mercury__integer__Len_32 = mercury__integer__L1_26;
#line 795 "integer.m"
                else
#line 795 "integer.m"
                  mercury__integer__Len_32 = mercury__integer__L2_28;
#line 796 "integer.m"
                mercury__integer__succeeded = (mercury__integer__Div_30 == (MR_Integer) 0);
#line 796 "integer.m"
                if (mercury__integer__succeeded)
#line 796 "integer.m"
                  {
#line 796 "integer.m"
                    mercury__integer__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 796 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 0) = ((MR_Box) (mercury__integer__Len_32));
#line 796 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 1) = ((MR_Box) (mercury__integer__Ds_31));
#line 796 "integer.m"
                  }
#line 796 "integer.m"
                else
#line 796 "integer.m"
                  {
#line 796 "integer.m"
                    MR_Integer mercury__integer__V_35_35 = (mercury__integer__Len_32 + (MR_Integer) 1);
#line 796 "integer.m"
                    MR_Word mercury__integer__V_37_37;

#line 796 "integer.m"
                    {
#line 796 "integer.m"
                      mercury__integer__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_37_37, 0) = ((MR_Box) (mercury__integer__Div_30));
#line 796 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_37_37, 1) = ((MR_Box) (mercury__integer__Ds_31));
#line 796 "integer.m"
                    }
#line 796 "integer.m"
                    {
#line 796 "integer.m"
                      mercury__integer__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 796 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 0) = ((MR_Box) (mercury__integer__V_35_35));
#line 796 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 1) = ((MR_Box) (mercury__integer__V_37_37));
#line 796 "integer.m"
                    }
#line 796 "integer.m"
                  }
#line 681 "integer.m"
                {
#line 681 "integer.m"
                  return mercury__integer__Sum_6 = mercury__integer__big_sign_2_f_0(mercury__integer__SignX_9, mercury__integer__V_12_12);
                }
#line 681 "integer.m"
              }
#line 682 "integer.m"
            else
#line 683 "integer.m"
              {
#line 683 "integer.m"
                MR_Word mercury__integer__C_11;

#line 666 "integer.m"
                {
#line 666 "integer.m"
                  mercury__integer____Compare____integer_0_0(&mercury__integer__C_11, mercury__integer__AbsX_7, mercury__integer__AbsY_8);
                }
#line 687 "integer.m"
                if ((mercury__integer__C_11 == (MR_Integer) 1))
#line 685 "integer.m"
                  {
#line 685 "integer.m"
                    MR_Word mercury__integer__V_14_14;
#line 685 "integer.m"
                    MR_Integer mercury__integer__L1_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 0)));
#line 685 "integer.m"
                    MR_Integer mercury__integer__L2_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 0)));
#line 685 "integer.m"
                    MR_Integer mercury__integer__Mod_47;
#line 685 "integer.m"
                    MR_Word mercury__integer__Ds_48;
#line 685 "integer.m"
                    MR_Integer mercury__integer__Len_49;
#line 827 "integer.m"
                    MR_Word mercury__integer__D1_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 1)));
#line 827 "integer.m"
                    MR_Word mercury__integer__D2_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 1)));

#line 828 "integer.m"
                    {
#line 828 "integer.m"
                      mercury__integer__diff_pairs_4_p_0(&mercury__integer__Mod_47, mercury__integer__AbsY_8, mercury__integer__AbsX_7, &mercury__integer__Ds_48);
                    }
#line 829 "integer.m"
                    mercury__integer__succeeded = (mercury__integer__L1_43 > mercury__integer__L2_45);
#line 829 "integer.m"
                    if (mercury__integer__succeeded)
#line 829 "integer.m"
                      mercury__integer__Len_49 = mercury__integer__L1_43;
#line 829 "integer.m"
                    else
#line 829 "integer.m"
                      mercury__integer__Len_49 = mercury__integer__L2_45;
#line 830 "integer.m"
                    mercury__integer__succeeded = (mercury__integer__Mod_47 == (MR_Integer) 0);
#line 830 "integer.m"
                    if (mercury__integer__succeeded)
#line 830 "integer.m"
                      {
#line 830 "integer.m"
                        MR_Word mercury__integer__V_52_52;

#line 830 "integer.m"
                        {
#line 830 "integer.m"
                          mercury__integer__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 830 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_52_52, 0) = ((MR_Box) (mercury__integer__Len_49));
#line 830 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_52_52, 1) = ((MR_Box) (mercury__integer__Ds_48));
#line 830 "integer.m"
                        }
#line 830 "integer.m"
                        {
#line 830 "integer.m"
                          mercury__integer__V_14_14 = mercury__integer__decap_1_f_0(mercury__integer__V_52_52);
                        }
#line 830 "integer.m"
                      }
#line 830 "integer.m"
                    else
#line 830 "integer.m"
                      {
#line 830 "integer.m"
                        MR_Integer mercury__integer__V_53_53 = (mercury__integer__Len_49 + (MR_Integer) 1);
#line 830 "integer.m"
                        MR_Word mercury__integer__V_55_55;

#line 830 "integer.m"
                        {
#line 830 "integer.m"
                          mercury__integer__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "integer.m"
                          MR_hl_field(MR_mktag(1), mercury__integer__V_55_55, 0) = ((MR_Box) (mercury__integer__Mod_47));
#line 830 "integer.m"
                          MR_hl_field(MR_mktag(1), mercury__integer__V_55_55, 1) = ((MR_Box) (mercury__integer__Ds_48));
#line 830 "integer.m"
                        }
#line 830 "integer.m"
                        {
#line 830 "integer.m"
                          mercury__integer__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 830 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__V_53_53));
#line 830 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__V_55_55));
#line 830 "integer.m"
                        }
#line 830 "integer.m"
                      }
#line 686 "integer.m"
                    {
#line 686 "integer.m"
                      return mercury__integer__Sum_6 = mercury__integer__big_sign_2_f_0(mercury__integer__SignY_10, mercury__integer__V_14_14);
                    }
#line 685 "integer.m"
                  }
#line 687 "integer.m"
                else
#line 687 "integer.m"
                if ((mercury__integer__C_11 == (MR_Integer) 0))
#line 1188 "integer.m"
                  {
#line 1188 "integer.m"
                    MR_Word mercury__integer__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1188 "integer.m"
                    mercury__integer__Sum_6 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1188 "integer.m"
                  }
#line 687 "integer.m"
                else
#line 688 "integer.m"
                  {
#line 688 "integer.m"
                    MR_Word mercury__integer__V_13_13;
#line 688 "integer.m"
                    MR_Integer mercury__integer__L1_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 0)));
#line 688 "integer.m"
                    MR_Integer mercury__integer__L2_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 0)));
#line 688 "integer.m"
                    MR_Integer mercury__integer__Mod_63;
#line 688 "integer.m"
                    MR_Word mercury__integer__Ds_64;
#line 688 "integer.m"
                    MR_Integer mercury__integer__Len_65;
#line 827 "integer.m"
                    MR_Word mercury__integer__D1_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 1)));
#line 827 "integer.m"
                    MR_Word mercury__integer__D2_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 1)));

#line 828 "integer.m"
                    {
#line 828 "integer.m"
                      mercury__integer__diff_pairs_4_p_0(&mercury__integer__Mod_63, mercury__integer__AbsX_7, mercury__integer__AbsY_8, &mercury__integer__Ds_64);
                    }
#line 829 "integer.m"
                    mercury__integer__succeeded = (mercury__integer__L1_59 > mercury__integer__L2_61);
#line 829 "integer.m"
                    if (mercury__integer__succeeded)
#line 829 "integer.m"
                      mercury__integer__Len_65 = mercury__integer__L1_59;
#line 829 "integer.m"
                    else
#line 829 "integer.m"
                      mercury__integer__Len_65 = mercury__integer__L2_61;
#line 830 "integer.m"
                    mercury__integer__succeeded = (mercury__integer__Mod_63 == (MR_Integer) 0);
#line 830 "integer.m"
                    if (mercury__integer__succeeded)
#line 830 "integer.m"
                      {
#line 830 "integer.m"
                        MR_Word mercury__integer__V_68_68;

#line 830 "integer.m"
                        {
#line 830 "integer.m"
                          mercury__integer__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 830 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_68_68, 0) = ((MR_Box) (mercury__integer__Len_65));
#line 830 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_68_68, 1) = ((MR_Box) (mercury__integer__Ds_64));
#line 830 "integer.m"
                        }
#line 830 "integer.m"
                        {
#line 830 "integer.m"
                          mercury__integer__V_13_13 = mercury__integer__decap_1_f_0(mercury__integer__V_68_68);
                        }
#line 830 "integer.m"
                      }
#line 830 "integer.m"
                    else
#line 830 "integer.m"
                      {
#line 830 "integer.m"
                        MR_Integer mercury__integer__V_69_69 = (mercury__integer__Len_65 + (MR_Integer) 1);
#line 830 "integer.m"
                        MR_Word mercury__integer__V_71_71;

#line 830 "integer.m"
                        {
#line 830 "integer.m"
                          mercury__integer__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "integer.m"
                          MR_hl_field(MR_mktag(1), mercury__integer__V_71_71, 0) = ((MR_Box) (mercury__integer__Mod_63));
#line 830 "integer.m"
                          MR_hl_field(MR_mktag(1), mercury__integer__V_71_71, 1) = ((MR_Box) (mercury__integer__Ds_64));
#line 830 "integer.m"
                        }
#line 830 "integer.m"
                        {
#line 830 "integer.m"
                          mercury__integer__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 830 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 0) = ((MR_Box) (mercury__integer__V_69_69));
#line 830 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 1) = ((MR_Box) (mercury__integer__V_71_71));
#line 830 "integer.m"
                        }
#line 830 "integer.m"
                      }
#line 689 "integer.m"
                    {
#line 689 "integer.m"
                      return mercury__integer__Sum_6 = mercury__integer__big_sign_2_f_0(mercury__integer__SignX_9, mercury__integer__V_13_13);
                    }
#line 688 "integer.m"
                  }
#line 683 "integer.m"
              }
#line 676 "integer.m"
          }
#line 675 "integer.m"
      }
#line 673 "integer.m"
    return mercury__integer__Sum_6;
#line 673 "integer.m"
  }
#line 668 "integer.m"
}

#line 658 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_cmp_2_f_0(
#line 658 "integer.m"
  MR_Word mercury__integer__X_4,
#line 658 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 658 "integer.m"
{
#line 661 "integer.m"
  {
#line 661 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 661 "integer.m"
    MR_Word mercury__integer__Result_6;

#line 661 "integer.m"
    {
#line 661 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__Result_6, mercury__integer__X_4, mercury__integer__Y_5);
    }
#line 661 "integer.m"
    return mercury__integer__Result_6;
#line 661 "integer.m"
  }
#line 658 "integer.m"
}

#line 653 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_xor_not_2_f_0(
#line 653 "integer.m"
  MR_Word mercury__integer__X1_4,
#line 653 "integer.m"
  MR_Word mercury__integer__NotX2_5)
#line 653 "integer.m"
{
#line 655 "integer.m"
  {
#line 655 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 655 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 655 "integer.m"
    MR_Word mercury__integer__V_6_6;
#line 655 "integer.m"
    MR_Word mercury__integer__V_7_7;
#line 655 "integer.m"
    MR_Word mercury__integer__V_8_8;
#line 655 "integer.m"
    MR_Word mercury__integer__V_11_11;
#line 655 "integer.m"
    MR_Word mercury__integer__V_14_14;
#line 655 "integer.m"
    MR_Word mercury__integer__V_17_17;
#line 655 "integer.m"
    MR_Word mercury__integer__V_19_19;
#line 655 "integer.m"
    MR_Word mercury__integer__V_20_20;
#line 655 "integer.m"
    MR_Integer mercury__integer__S_25;
#line 655 "integer.m"
    MR_Word mercury__integer__Digits0_26;
#line 655 "integer.m"
    MR_Word mercury__integer__Digits_27;
#line 655 "integer.m"
    MR_Integer mercury__integer__V_28_28;

#line 553 "integer.m"
    {
#line 553 "integer.m"
      mercury__integer__V_11_11 = mercury__integer__or_pairs_2_f_0(mercury__integer__X1_4, mercury__integer__NotX2_5);
    }
#line 553 "integer.m"
    {
#line 553 "integer.m"
      mercury__integer__V_7_7 = mercury__integer__decap_1_f_0(mercury__integer__V_11_11);
    }
#line 604 "integer.m"
    {
#line 604 "integer.m"
      mercury__integer__V_14_14 = mercury__integer__and_pairs_2_f_0(mercury__integer__X1_4, mercury__integer__NotX2_5);
    }
#line 604 "integer.m"
    {
#line 604 "integer.m"
      mercury__integer__V_8_8 = mercury__integer__decap_1_f_0(mercury__integer__V_14_14);
    }
#line 629 "integer.m"
    {
#line 629 "integer.m"
      mercury__integer__V_17_17 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__V_7_7, mercury__integer__V_8_8);
    }
#line 629 "integer.m"
    {
#line 629 "integer.m"
      mercury__integer__V_6_6 = mercury__integer__decap_1_f_0(mercury__integer__V_17_17);
    }
#line 1190 "integer.m"
    mercury__integer__V_20_20 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 397 "integer.m"
    {
#line 397 "integer.m"
      mercury__integer__V_19_19 = mercury__integer__big_plus_2_f_0(mercury__integer__V_6_6, mercury__integer__V_20_20);
    }
#line 421 "integer.m"
    mercury__integer__S_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 0)));
#line 421 "integer.m"
    mercury__integer__Digits0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 1)));
#line 421 "integer.m"
    mercury__integer__V_28_28 = ((MR_Integer) 0 - mercury__integer__S_25);
#line 422 "integer.m"
    {
#line 422 "integer.m"
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_26, &mercury__integer__Digits_27);
    }
#line 421 "integer.m"
    {
#line 421 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_28_28));
#line 421 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_27));
#line 421 "integer.m"
    }
#line 655 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 655 "integer.m"
  }
#line 653 "integer.m"
}

#line 646 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_not_pairs_equal_2_f_0(
#line 646 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 646 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 646 "integer.m"
{
#line 648 "integer.m"
  {
#line 648 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 648 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 648 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 648 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 648 "integer.m"
    else
#line 648 "integer.m"
      {
#line 648 "integer.m"
        MR_Word mercury__integer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 648 "integer.m"
        MR_Integer mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 648 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 649 "integer.m"
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 648 "integer.m"
        else
#line 650 "integer.m"
          {
#line 650 "integer.m"
            MR_Integer mercury__integer__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 650 "integer.m"
            MR_Word mercury__integer__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 650 "integer.m"
            MR_Integer mercury__integer__V_11_11;
#line 650 "integer.m"
            MR_Integer mercury__integer__V_12_12 = ~(mercury__integer__Y_9);
#line 650 "integer.m"
            MR_Word mercury__integer__V_13_13;

#line 651 "integer.m"
            mercury__integer__V_11_11 = (mercury__integer__V_15_15 & mercury__integer__V_12_12);
#line 651 "integer.m"
            {
#line 651 "integer.m"
              mercury__integer__V_13_13 = mercury__integer__and_not_pairs_equal_2_f_0(mercury__integer__V_14_14, mercury__integer__Ys_10);
            }
#line 651 "integer.m"
            {
#line 651 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_11_11));
#line 651 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_13_13));
#line 651 "integer.m"
            }
#line 650 "integer.m"
          }
#line 648 "integer.m"
      }
#line 648 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 648 "integer.m"
  }
#line 646 "integer.m"
}

#line 631 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_not_pairs_2_f_0(
#line 631 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 631 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 631 "integer.m"
{
#line 633 "integer.m"
  {
#line 633 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 633 "integer.m"
    MR_Word mercury__integer__Integer_8;
#line 633 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 633 "integer.m"
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 633 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 633 "integer.m"
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 634 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 == mercury__integer__L2_6);
#line 636 "integer.m"
    if (mercury__integer__succeeded)
#line 635 "integer.m"
      {
#line 635 "integer.m"
        MR_Word mercury__integer__V_16_16;

#line 635 "integer.m"
        {
#line 635 "integer.m"
          mercury__integer__V_16_16 = mercury__integer__and_not_pairs_equal_2_f_0(mercury__integer__D1_5, mercury__integer__D2_7);
        }
#line 635 "integer.m"
        {
#line 635 "integer.m"
          mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 635 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 635 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_16_16));
#line 635 "integer.m"
        }
#line 635 "integer.m"
      }
#line 636 "integer.m"
    else
#line 639 "integer.m"
      {
#line 639 "integer.m"
        MR_Word mercury__integer__T2_10;
#line 636 "integer.m"
        MR_Integer mercury__integer__V_9_9;

#line 636 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
#line 636 "integer.m"
        if (mercury__integer__succeeded)
#line 636 "integer.m"
          {
#line 636 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_7)) == (MR_mktag((MR_Integer) 1)));
#line 636 "integer.m"
            if (mercury__integer__succeeded)
#line 636 "integer.m"
              {
#line 636 "integer.m"
                mercury__integer__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 0)));
#line 636 "integer.m"
                mercury__integer__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 1)));
#line 636 "integer.m"
              }
#line 636 "integer.m"
          }
#line 639 "integer.m"
        if (mercury__integer__succeeded)
#line 637 "integer.m"
          {
#line 637 "integer.m"
            MR_Word mercury__integer__DsT_12;
#line 637 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 637 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 637 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_6 - (MR_Integer) 1);
#line 637 "integer.m"
            MR_Integer mercury__integer__V_11_11;

#line 637 "integer.m"
            {
#line 637 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 637 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 637 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_10));
#line 637 "integer.m"
            }
#line 637 "integer.m"
            {
#line 637 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__V_19_19);
            }
#line 637 "integer.m"
            mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 637 "integer.m"
            mercury__integer__DsT_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 638 "integer.m"
            {
#line 638 "integer.m"
              mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 638 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 638 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__DsT_12));
#line 638 "integer.m"
            }
#line 637 "integer.m"
          }
#line 639 "integer.m"
        else
#line 642 "integer.m"
          {
#line 642 "integer.m"
            MR_Integer mercury__integer__H1_13;
#line 642 "integer.m"
            MR_Word mercury__integer__T1_14;

#line 639 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
#line 639 "integer.m"
            if (mercury__integer__succeeded)
#line 639 "integer.m"
              {
#line 639 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_5)) == (MR_mktag((MR_Integer) 1)));
#line 639 "integer.m"
                if (mercury__integer__succeeded)
#line 639 "integer.m"
                  {
#line 639 "integer.m"
                    mercury__integer__H1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 0)));
#line 639 "integer.m"
                    mercury__integer__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 1)));
#line 639 "integer.m"
                  }
#line 639 "integer.m"
              }
#line 642 "integer.m"
            if (mercury__integer__succeeded)
#line 640 "integer.m"
              {
#line 640 "integer.m"
                MR_Word mercury__integer__V_22_22;
#line 640 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 640 "integer.m"
                MR_Integer mercury__integer__V_24_24 = (mercury__integer__L1_4 - (MR_Integer) 1);
#line 640 "integer.m"
                MR_Word mercury__integer__V_27_27;
#line 640 "integer.m"
                MR_Word mercury__integer__DsT_31;
#line 640 "integer.m"
                MR_Integer mercury__integer__V_15_15;

#line 640 "integer.m"
                {
#line 640 "integer.m"
                  mercury__integer__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 640 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 0) = ((MR_Box) (mercury__integer__V_24_24));
#line 640 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 1) = ((MR_Box) (mercury__integer__T1_14));
#line 640 "integer.m"
                }
#line 640 "integer.m"
                {
#line 640 "integer.m"
                  mercury__integer__V_22_22 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__V_23_23, mercury__integer__HeadVar__2_2);
                }
#line 640 "integer.m"
                mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_22_22, (MR_Integer) 0)));
#line 640 "integer.m"
                mercury__integer__DsT_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_22_22, (MR_Integer) 1)));
#line 641 "integer.m"
                {
#line 641 "integer.m"
                  mercury__integer__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_27_27, 0) = ((MR_Box) (mercury__integer__H1_13));
#line 641 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_27_27, 1) = ((MR_Box) (mercury__integer__DsT_31));
#line 641 "integer.m"
                }
#line 641 "integer.m"
                {
#line 641 "integer.m"
                  mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 641 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_27_27));
#line 641 "integer.m"
                }
#line 640 "integer.m"
              }
#line 642 "integer.m"
            else
#line 643 "integer.m"
              {
#line 643 "integer.m"
                {
#line 643 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.and_not_pairs\'/2", (MR_String) "invalid integer");
                }
#line 643 "integer.m"
              }
#line 642 "integer.m"
          }
#line 639 "integer.m"
      }
#line 633 "integer.m"
    return mercury__integer__Integer_8;
#line 633 "integer.m"
  }
#line 631 "integer.m"
}

#line 621 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_pairs_equal_2_f_0(
#line 621 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 621 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 621 "integer.m"
{
#line 623 "integer.m"
  {
#line 623 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 623 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 623 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 623 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 623 "integer.m"
    else
#line 623 "integer.m"
      {
#line 623 "integer.m"
        MR_Word mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 623 "integer.m"
        MR_Integer mercury__integer__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 623 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 624 "integer.m"
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 623 "integer.m"
        else
#line 625 "integer.m"
          {
#line 625 "integer.m"
            MR_Integer mercury__integer__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 625 "integer.m"
            MR_Word mercury__integer__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 625 "integer.m"
            MR_Integer mercury__integer__V_11_11 = (mercury__integer__V_14_14 & mercury__integer__Y_9);
#line 625 "integer.m"
            MR_Word mercury__integer__V_12_12;

#line 625 "integer.m"
            {
#line 625 "integer.m"
              mercury__integer__V_12_12 = mercury__integer__and_pairs_equal_2_f_0(mercury__integer__V_13_13, mercury__integer__Ys_10);
            }
#line 625 "integer.m"
            {
#line 625 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_11_11));
#line 625 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_12_12));
#line 625 "integer.m"
            }
#line 625 "integer.m"
          }
#line 623 "integer.m"
      }
#line 623 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 623 "integer.m"
  }
#line 621 "integer.m"
}

#line 606 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_pairs_2_f_0(
#line 606 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 606 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 606 "integer.m"
{
#line 608 "integer.m"
  {
#line 608 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 608 "integer.m"
    MR_Word mercury__integer__Integer_8;
#line 608 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 608 "integer.m"
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 608 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 608 "integer.m"
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 609 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 == mercury__integer__L2_6);
#line 611 "integer.m"
    if (mercury__integer__succeeded)
#line 610 "integer.m"
      {
#line 610 "integer.m"
        MR_Word mercury__integer__V_16_16;

#line 610 "integer.m"
        {
#line 610 "integer.m"
          mercury__integer__V_16_16 = mercury__integer__and_pairs_equal_2_f_0(mercury__integer__D1_5, mercury__integer__D2_7);
        }
#line 610 "integer.m"
        {
#line 610 "integer.m"
          mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 610 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 610 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_16_16));
#line 610 "integer.m"
        }
#line 610 "integer.m"
      }
#line 611 "integer.m"
    else
#line 614 "integer.m"
      {
#line 614 "integer.m"
        MR_Word mercury__integer__T2_10;
#line 611 "integer.m"
        MR_Integer mercury__integer__V_9_9;

#line 611 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
#line 611 "integer.m"
        if (mercury__integer__succeeded)
#line 611 "integer.m"
          {
#line 611 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_7)) == (MR_mktag((MR_Integer) 1)));
#line 611 "integer.m"
            if (mercury__integer__succeeded)
#line 611 "integer.m"
              {
#line 611 "integer.m"
                mercury__integer__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 0)));
#line 611 "integer.m"
                mercury__integer__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 1)));
#line 611 "integer.m"
              }
#line 611 "integer.m"
          }
#line 614 "integer.m"
        if (mercury__integer__succeeded)
#line 612 "integer.m"
          {
#line 612 "integer.m"
            MR_Word mercury__integer__DsT_12;
#line 612 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 612 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 612 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_6 - (MR_Integer) 1);
#line 612 "integer.m"
            MR_Integer mercury__integer__V_11_11;

#line 612 "integer.m"
            {
#line 612 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 612 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 612 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_10));
#line 612 "integer.m"
            }
#line 612 "integer.m"
            {
#line 612 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__and_pairs_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__V_19_19);
            }
#line 612 "integer.m"
            mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 612 "integer.m"
            mercury__integer__DsT_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 613 "integer.m"
            {
#line 613 "integer.m"
              mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 613 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 613 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__DsT_12));
#line 613 "integer.m"
            }
#line 612 "integer.m"
          }
#line 614 "integer.m"
        else
#line 617 "integer.m"
          {
#line 617 "integer.m"
            MR_Word mercury__integer__T1_14;
#line 614 "integer.m"
            MR_Integer mercury__integer__V_13_13;

#line 614 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
#line 614 "integer.m"
            if (mercury__integer__succeeded)
#line 614 "integer.m"
              {
#line 614 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_5)) == (MR_mktag((MR_Integer) 1)));
#line 614 "integer.m"
                if (mercury__integer__succeeded)
#line 614 "integer.m"
                  {
#line 614 "integer.m"
                    mercury__integer__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 0)));
#line 614 "integer.m"
                    mercury__integer__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 1)));
#line 614 "integer.m"
                  }
#line 614 "integer.m"
              }
#line 617 "integer.m"
            if (mercury__integer__succeeded)
#line 615 "integer.m"
              {
#line 615 "integer.m"
                MR_Word mercury__integer__V_22_22;
#line 615 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 615 "integer.m"
                MR_Integer mercury__integer__V_24_24 = (mercury__integer__L1_4 - (MR_Integer) 1);
#line 615 "integer.m"
                MR_Word mercury__integer__DsT_30;
#line 615 "integer.m"
                MR_Integer mercury__integer__V_15_15;

#line 615 "integer.m"
                {
#line 615 "integer.m"
                  mercury__integer__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 615 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 0) = ((MR_Box) (mercury__integer__V_24_24));
#line 615 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 1) = ((MR_Box) (mercury__integer__T1_14));
#line 615 "integer.m"
                }
#line 615 "integer.m"
                {
#line 615 "integer.m"
                  mercury__integer__V_22_22 = mercury__integer__and_pairs_2_f_0(mercury__integer__V_23_23, mercury__integer__HeadVar__2_2);
                }
#line 615 "integer.m"
                mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_22_22, (MR_Integer) 0)));
#line 615 "integer.m"
                mercury__integer__DsT_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_22_22, (MR_Integer) 1)));
#line 616 "integer.m"
                {
#line 616 "integer.m"
                  mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 616 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L2_6));
#line 616 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__DsT_30));
#line 616 "integer.m"
                }
#line 615 "integer.m"
              }
#line 617 "integer.m"
            else
#line 618 "integer.m"
              {
#line 618 "integer.m"
                {
#line 618 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.and_pairs\'/2", (MR_String) "invalid integer");
                }
#line 618 "integer.m"
              }
#line 617 "integer.m"
          }
#line 614 "integer.m"
      }
#line 608 "integer.m"
    return mercury__integer__Integer_8;
#line 608 "integer.m"
  }
#line 606 "integer.m"
}

#line 595 "integer.m"
static MR_Word MR_CALL 
mercury__integer__xor_pairs_equal_2_f_0(
#line 595 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 595 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 595 "integer.m"
{
#line 597 "integer.m"
  {
#line 597 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 597 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 597 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 597 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 597 "integer.m"
    else
#line 597 "integer.m"
      {
#line 597 "integer.m"
        MR_Word mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 597 "integer.m"
        MR_Integer mercury__integer__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 597 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 598 "integer.m"
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 597 "integer.m"
        else
#line 599 "integer.m"
          {
#line 599 "integer.m"
            MR_Integer mercury__integer__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 599 "integer.m"
            MR_Word mercury__integer__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 599 "integer.m"
            MR_Integer mercury__integer__V_11_11 = (mercury__integer__V_14_14 ^ mercury__integer__Y_9);
#line 599 "integer.m"
            MR_Word mercury__integer__V_12_12;

#line 600 "integer.m"
            {
#line 600 "integer.m"
              mercury__integer__V_12_12 = mercury__integer__xor_pairs_equal_2_f_0(mercury__integer__V_13_13, mercury__integer__Ys_10);
            }
#line 600 "integer.m"
            {
#line 600 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_11_11));
#line 600 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_12_12));
#line 600 "integer.m"
            }
#line 599 "integer.m"
          }
#line 597 "integer.m"
      }
#line 597 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 597 "integer.m"
  }
#line 595 "integer.m"
}

#line 580 "integer.m"
static MR_Word MR_CALL 
mercury__integer__xor_pairs_2_f_0(
#line 580 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 580 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 580 "integer.m"
{
#line 582 "integer.m"
  {
#line 582 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 582 "integer.m"
    MR_Word mercury__integer__Integer_8;
#line 582 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 582 "integer.m"
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 582 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 582 "integer.m"
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 583 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 == mercury__integer__L2_6);
#line 585 "integer.m"
    if (mercury__integer__succeeded)
#line 584 "integer.m"
      {
#line 584 "integer.m"
        MR_Word mercury__integer__V_16_16;

#line 584 "integer.m"
        {
#line 584 "integer.m"
          mercury__integer__V_16_16 = mercury__integer__xor_pairs_equal_2_f_0(mercury__integer__D1_5, mercury__integer__D2_7);
        }
#line 584 "integer.m"
        {
#line 584 "integer.m"
          mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 584 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 584 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_16_16));
#line 584 "integer.m"
        }
#line 584 "integer.m"
      }
#line 585 "integer.m"
    else
#line 588 "integer.m"
      {
#line 588 "integer.m"
        MR_Integer mercury__integer__H2_9;
#line 588 "integer.m"
        MR_Word mercury__integer__T2_10;

#line 585 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
#line 585 "integer.m"
        if (mercury__integer__succeeded)
#line 585 "integer.m"
          {
#line 585 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_7)) == (MR_mktag((MR_Integer) 1)));
#line 585 "integer.m"
            if (mercury__integer__succeeded)
#line 585 "integer.m"
              {
#line 585 "integer.m"
                mercury__integer__H2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 0)));
#line 585 "integer.m"
                mercury__integer__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 1)));
#line 585 "integer.m"
              }
#line 585 "integer.m"
          }
#line 588 "integer.m"
        if (mercury__integer__succeeded)
#line 586 "integer.m"
          {
#line 586 "integer.m"
            MR_Word mercury__integer__DsT_12;
#line 586 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 586 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 586 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_6 - (MR_Integer) 1);
#line 586 "integer.m"
            MR_Word mercury__integer__V_22_22;
#line 586 "integer.m"
            MR_Integer mercury__integer__V_11_11;

#line 586 "integer.m"
            {
#line 586 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 586 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 586 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_10));
#line 586 "integer.m"
            }
#line 586 "integer.m"
            {
#line 586 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__xor_pairs_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__V_19_19);
            }
#line 586 "integer.m"
            mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 586 "integer.m"
            mercury__integer__DsT_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 587 "integer.m"
            {
#line 587 "integer.m"
              mercury__integer__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_22_22, 0) = ((MR_Box) (mercury__integer__H2_9));
#line 587 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_22_22, 1) = ((MR_Box) (mercury__integer__DsT_12));
#line 587 "integer.m"
            }
#line 587 "integer.m"
            {
#line 587 "integer.m"
              mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 587 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L2_6));
#line 587 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_22_22));
#line 587 "integer.m"
            }
#line 586 "integer.m"
          }
#line 588 "integer.m"
        else
#line 591 "integer.m"
          {
#line 591 "integer.m"
            MR_Integer mercury__integer__H1_13;
#line 591 "integer.m"
            MR_Word mercury__integer__T1_14;

#line 588 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
#line 588 "integer.m"
            if (mercury__integer__succeeded)
#line 588 "integer.m"
              {
#line 588 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_5)) == (MR_mktag((MR_Integer) 1)));
#line 588 "integer.m"
                if (mercury__integer__succeeded)
#line 588 "integer.m"
                  {
#line 588 "integer.m"
                    mercury__integer__H1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 0)));
#line 588 "integer.m"
                    mercury__integer__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 1)));
#line 588 "integer.m"
                  }
#line 588 "integer.m"
              }
#line 591 "integer.m"
            if (mercury__integer__succeeded)
#line 589 "integer.m"
              {
#line 589 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 589 "integer.m"
                MR_Word mercury__integer__V_24_24;
#line 589 "integer.m"
                MR_Integer mercury__integer__V_25_25 = (mercury__integer__L1_4 - (MR_Integer) 1);
#line 589 "integer.m"
                MR_Word mercury__integer__V_28_28;
#line 589 "integer.m"
                MR_Word mercury__integer__DsT_32;
#line 589 "integer.m"
                MR_Integer mercury__integer__V_15_15;

#line 589 "integer.m"
                {
#line 589 "integer.m"
                  mercury__integer__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 589 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 0) = ((MR_Box) (mercury__integer__V_25_25));
#line 589 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 1) = ((MR_Box) (mercury__integer__T1_14));
#line 589 "integer.m"
                }
#line 589 "integer.m"
                {
#line 589 "integer.m"
                  mercury__integer__V_23_23 = mercury__integer__xor_pairs_2_f_0(mercury__integer__V_24_24, mercury__integer__HeadVar__2_2);
                }
#line 589 "integer.m"
                mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 0)));
#line 589 "integer.m"
                mercury__integer__DsT_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 1)));
#line 590 "integer.m"
                {
#line 590 "integer.m"
                  mercury__integer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_28_28, 0) = ((MR_Box) (mercury__integer__H1_13));
#line 590 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_28_28, 1) = ((MR_Box) (mercury__integer__DsT_32));
#line 590 "integer.m"
                }
#line 590 "integer.m"
                {
#line 590 "integer.m"
                  mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 590 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 590 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_28_28));
#line 590 "integer.m"
                }
#line 589 "integer.m"
              }
#line 591 "integer.m"
            else
#line 592 "integer.m"
              {
#line 592 "integer.m"
                {
#line 592 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.xor_pairs\'/2", (MR_String) "invalid integer");
                }
#line 592 "integer.m"
              }
#line 591 "integer.m"
          }
#line 588 "integer.m"
      }
#line 582 "integer.m"
    return mercury__integer__Integer_8;
#line 582 "integer.m"
  }
#line 580 "integer.m"
}

#line 570 "integer.m"
static MR_Word MR_CALL 
mercury__integer__or_pairs_equal_2_f_0(
#line 570 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 570 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 570 "integer.m"
{
#line 572 "integer.m"
  {
#line 572 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 572 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 572 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 572 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 572 "integer.m"
    else
#line 572 "integer.m"
      {
#line 572 "integer.m"
        MR_Word mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 572 "integer.m"
        MR_Integer mercury__integer__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 572 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 573 "integer.m"
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 572 "integer.m"
        else
#line 574 "integer.m"
          {
#line 574 "integer.m"
            MR_Integer mercury__integer__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 574 "integer.m"
            MR_Word mercury__integer__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 574 "integer.m"
            MR_Integer mercury__integer__V_11_11 = (mercury__integer__V_14_14 | mercury__integer__Y_9);
#line 574 "integer.m"
            MR_Word mercury__integer__V_12_12;

#line 574 "integer.m"
            {
#line 574 "integer.m"
              mercury__integer__V_12_12 = mercury__integer__or_pairs_equal_2_f_0(mercury__integer__V_13_13, mercury__integer__Ys_10);
            }
#line 574 "integer.m"
            {
#line 574 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_11_11));
#line 574 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_12_12));
#line 574 "integer.m"
            }
#line 574 "integer.m"
          }
#line 572 "integer.m"
      }
#line 572 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 572 "integer.m"
  }
#line 570 "integer.m"
}

#line 555 "integer.m"
static MR_Word MR_CALL 
mercury__integer__or_pairs_2_f_0(
#line 555 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 555 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 555 "integer.m"
{
#line 557 "integer.m"
  {
#line 557 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 557 "integer.m"
    MR_Word mercury__integer__Integer_8;
#line 557 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 557 "integer.m"
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 557 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 557 "integer.m"
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 558 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 == mercury__integer__L2_6);
#line 560 "integer.m"
    if (mercury__integer__succeeded)
#line 559 "integer.m"
      {
#line 559 "integer.m"
        MR_Word mercury__integer__V_16_16;

#line 559 "integer.m"
        {
#line 559 "integer.m"
          mercury__integer__V_16_16 = mercury__integer__or_pairs_equal_2_f_0(mercury__integer__D1_5, mercury__integer__D2_7);
        }
#line 559 "integer.m"
        {
#line 559 "integer.m"
          mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 559 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 559 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_16_16));
#line 559 "integer.m"
        }
#line 559 "integer.m"
      }
#line 560 "integer.m"
    else
#line 563 "integer.m"
      {
#line 563 "integer.m"
        MR_Integer mercury__integer__H2_9;
#line 563 "integer.m"
        MR_Word mercury__integer__T2_10;

#line 560 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
#line 560 "integer.m"
        if (mercury__integer__succeeded)
#line 560 "integer.m"
          {
#line 560 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_7)) == (MR_mktag((MR_Integer) 1)));
#line 560 "integer.m"
            if (mercury__integer__succeeded)
#line 560 "integer.m"
              {
#line 560 "integer.m"
                mercury__integer__H2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 0)));
#line 560 "integer.m"
                mercury__integer__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 1)));
#line 560 "integer.m"
              }
#line 560 "integer.m"
          }
#line 563 "integer.m"
        if (mercury__integer__succeeded)
#line 561 "integer.m"
          {
#line 561 "integer.m"
            MR_Word mercury__integer__DsT_12;
#line 561 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 561 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 561 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_6 - (MR_Integer) 1);
#line 561 "integer.m"
            MR_Word mercury__integer__V_22_22;
#line 561 "integer.m"
            MR_Integer mercury__integer__V_11_11;

#line 561 "integer.m"
            {
#line 561 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 561 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 561 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_10));
#line 561 "integer.m"
            }
#line 561 "integer.m"
            {
#line 561 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__or_pairs_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__V_19_19);
            }
#line 561 "integer.m"
            mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 561 "integer.m"
            mercury__integer__DsT_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 562 "integer.m"
            {
#line 562 "integer.m"
              mercury__integer__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_22_22, 0) = ((MR_Box) (mercury__integer__H2_9));
#line 562 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_22_22, 1) = ((MR_Box) (mercury__integer__DsT_12));
#line 562 "integer.m"
            }
#line 562 "integer.m"
            {
#line 562 "integer.m"
              mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 562 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L2_6));
#line 562 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_22_22));
#line 562 "integer.m"
            }
#line 561 "integer.m"
          }
#line 563 "integer.m"
        else
#line 566 "integer.m"
          {
#line 566 "integer.m"
            MR_Integer mercury__integer__H1_13;
#line 566 "integer.m"
            MR_Word mercury__integer__T1_14;

#line 563 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
#line 563 "integer.m"
            if (mercury__integer__succeeded)
#line 563 "integer.m"
              {
#line 563 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_5)) == (MR_mktag((MR_Integer) 1)));
#line 563 "integer.m"
                if (mercury__integer__succeeded)
#line 563 "integer.m"
                  {
#line 563 "integer.m"
                    mercury__integer__H1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 0)));
#line 563 "integer.m"
                    mercury__integer__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 1)));
#line 563 "integer.m"
                  }
#line 563 "integer.m"
              }
#line 566 "integer.m"
            if (mercury__integer__succeeded)
#line 564 "integer.m"
              {
#line 564 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 564 "integer.m"
                MR_Word mercury__integer__V_24_24;
#line 564 "integer.m"
                MR_Integer mercury__integer__V_25_25 = (mercury__integer__L1_4 - (MR_Integer) 1);
#line 564 "integer.m"
                MR_Word mercury__integer__V_28_28;
#line 564 "integer.m"
                MR_Word mercury__integer__DsT_32;
#line 564 "integer.m"
                MR_Integer mercury__integer__V_15_15;

#line 564 "integer.m"
                {
#line 564 "integer.m"
                  mercury__integer__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 564 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 0) = ((MR_Box) (mercury__integer__V_25_25));
#line 564 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 1) = ((MR_Box) (mercury__integer__T1_14));
#line 564 "integer.m"
                }
#line 564 "integer.m"
                {
#line 564 "integer.m"
                  mercury__integer__V_23_23 = mercury__integer__or_pairs_2_f_0(mercury__integer__V_24_24, mercury__integer__HeadVar__2_2);
                }
#line 564 "integer.m"
                mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 0)));
#line 564 "integer.m"
                mercury__integer__DsT_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 1)));
#line 565 "integer.m"
                {
#line 565 "integer.m"
                  mercury__integer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_28_28, 0) = ((MR_Box) (mercury__integer__H1_13));
#line 565 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_28_28, 1) = ((MR_Box) (mercury__integer__DsT_32));
#line 565 "integer.m"
                }
#line 565 "integer.m"
                {
#line 565 "integer.m"
                  mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 565 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 565 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_28_28));
#line 565 "integer.m"
                }
#line 564 "integer.m"
              }
#line 566 "integer.m"
            else
#line 567 "integer.m"
              {
#line 567 "integer.m"
                {
#line 567 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.or_pairs\'/2", (MR_String) "invalid integer");
                }
#line 567 "integer.m"
              }
#line 566 "integer.m"
          }
#line 563 "integer.m"
      }
#line 557 "integer.m"
    return mercury__integer__Integer_8;
#line 557 "integer.m"
  }
#line 555 "integer.m"
}

#line 551 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_or_2_f_0(
#line 551 "integer.m"
  MR_Word mercury__integer__X_4,
#line 551 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 551 "integer.m"
{
#line 553 "integer.m"
  {
#line 553 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 553 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 553 "integer.m"
    MR_Word mercury__integer__V_6_6;

#line 553 "integer.m"
    {
#line 553 "integer.m"
      mercury__integer__V_6_6 = mercury__integer__or_pairs_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
#line 553 "integer.m"
    {
#line 553 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_6_6);
    }
#line 553 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 553 "integer.m"
  }
#line 551 "integer.m"
}

#line 541 "integer.m"
static void MR_CALL 
mercury__integer__zeros_3_p_0(
#line 541 "integer.m"
  MR_Integer mercury__integer__Len_4,
#line 541 "integer.m"
  MR_Word * mercury__integer__DCG_0_5,
#line 541 "integer.m"
  MR_Word mercury__integer__DCG_3_8)
#line 541 "integer.m"
{
#line 547 "integer.m"
  {
#line 547 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__Len_4 > (MR_Integer) 0);

#line 547 "integer.m"
    if (mercury__integer__succeeded)
#line 545 "integer.m"
      {
#line 545 "integer.m"
        MR_Word mercury__integer__DCG_1_6;
#line 545 "integer.m"
        MR_Integer mercury__integer__V_11_11 = (mercury__integer__Len_4 - (MR_Integer) 1);

#line 546 "integer.m"
        {
#line 546 "integer.m"
          mercury__integer__zeros_3_p_0(mercury__integer__V_11_11, &mercury__integer__DCG_1_6, mercury__integer__DCG_3_8);
        }
#line 545 "integer.m"
        {
#line 545 "integer.m"
          MR_Word base;
#line 545 "integer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "integer.m"
          *mercury__integer__DCG_0_5 = base;
#line 545 "integer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 545 "integer.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__DCG_1_6));
#line 545 "integer.m"
        }
#line 545 "integer.m"
      }
#line 547 "integer.m"
    else
#line 548 "integer.m"
      *mercury__integer__DCG_0_5 = mercury__integer__DCG_3_8;
#line 547 "integer.m"
  }
#line 541 "integer.m"
}

#line 525 "integer.m"
static void MR_CALL 
mercury__integer__leftshift_6_p_0(
#line 525 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 525 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 525 "integer.m"
  MR_Integer mercury__integer__Len_3,
#line 525 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 525 "integer.m"
  MR_Integer * mercury__integer__Carry_5,
#line 525 "integer.m"
  MR_Word * mercury__integer__DigitsOut_6)
#line 525 "integer.m"
{
#line 528 "integer.m"
  {
#line 528 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 528 "integer.m"
    if ((mercury__integer__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "integer.m"
      {
#line 528 "integer.m"
        MR_Word mercury__integer__V_12_12;

#line 529 "integer.m"
        *mercury__integer__Carry_5 = (MR_Integer) 0;
#line 530 "integer.m"
        mercury__integer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 530 "integer.m"
        {
#line 530 "integer.m"
          mercury__integer__zeros_3_p_0(mercury__integer__Len_3, mercury__integer__DigitsOut_6, mercury__integer__V_12_12);
#line 530 "integer.m"
          return;
        }
#line 528 "integer.m"
      }
#line 528 "integer.m"
    else
#line 531 "integer.m"
      {
#line 531 "integer.m"
        MR_Integer mercury__integer__H_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
#line 531 "integer.m"
        MR_Word mercury__integer__T_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));

#line 532 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Len_3 <= (MR_Integer) 0);
#line 535 "integer.m"
        if (mercury__integer__succeeded)
#line 533 "integer.m"
          {
#line 533 "integer.m"
            *mercury__integer__Carry_5 = (MR_Integer) 0;
#line 534 "integer.m"
            *mercury__integer__DigitsOut_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 533 "integer.m"
          }
#line 535 "integer.m"
        else
#line 536 "integer.m"
          {
#line 536 "integer.m"
            MR_Integer mercury__integer__TailCarry_20;
#line 536 "integer.m"
            MR_Word mercury__integer__Tail_21;
#line 536 "integer.m"
            MR_Integer mercury__integer__V_23_23;
#line 536 "integer.m"
            MR_Integer mercury__integer__V_24_24;
#line 536 "integer.m"
            MR_Integer mercury__integer__V_26_26;
#line 536 "integer.m"
            MR_Integer mercury__integer__V_28_28;
#line 536 "integer.m"
            MR_Integer mercury__integer__V_29_29;
#line 536 "integer.m"
            MR_Integer mercury__integer__V_30_30;

#line 536 "integer.m"
            {
#line 536 "integer.m"
              mercury__integer__V_24_24 = mercury__int__f_60_60_2_f_0((MR_Integer) 16383, mercury__integer__HeadVar__2_2);
            }
#line 536 "integer.m"
            mercury__integer__V_23_23 = (mercury__integer__H_16 & mercury__integer__V_24_24);
#line 536 "integer.m"
            {
#line 536 "integer.m"
              *mercury__integer__Carry_5 = mercury__int__f_62_62_2_f_0(mercury__integer__V_23_23, mercury__integer__HeadVar__2_2);
            }
#line 537 "integer.m"
            mercury__integer__V_26_26 = (mercury__integer__Len_3 - (MR_Integer) 1);
#line 537 "integer.m"
            {
#line 537 "integer.m"
              mercury__integer__leftshift_6_p_0(mercury__integer__HeadVar__1_1, mercury__integer__HeadVar__2_2, mercury__integer__V_26_26, mercury__integer__T_17, &mercury__integer__TailCarry_20, &mercury__integer__Tail_21);
            }
#line 538 "integer.m"
            {
#line 538 "integer.m"
              mercury__integer__V_30_30 = mercury__int__f_60_60_2_f_0(mercury__integer__H_16, mercury__integer__HeadVar__1_1);
            }
#line 538 "integer.m"
            mercury__integer__V_29_29 = (mercury__integer__V_30_30 & (MR_Integer) 16383);
#line 538 "integer.m"
            mercury__integer__V_28_28 = (mercury__integer__TailCarry_20 | mercury__integer__V_29_29);
#line 538 "integer.m"
            {
#line 538 "integer.m"
              MR_Word base;
#line 538 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 538 "integer.m"
              *mercury__integer__DigitsOut_6 = base;
#line 538 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__V_28_28));
#line 538 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Tail_21));
#line 538 "integer.m"
            }
#line 536 "integer.m"
          }
#line 531 "integer.m"
      }
#line 528 "integer.m"
  }
#line 525 "integer.m"
}

#line 501 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_left_shift_2_f_0(
#line 501 "integer.m"
  MR_Word mercury__integer__X_4,
#line 501 "integer.m"
  MR_Integer mercury__integer__I_5)
#line 501 "integer.m"
{
#line 503 "integer.m"
  {
#line 503 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 503 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 417 "integer.m"
    MR_Integer mercury__integer__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 417 "integer.m"
    MR_Word mercury__integer__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 417 "integer.m"
    mercury__integer__succeeded = (mercury__integer__V_8_8 == (MR_Integer) 0);
#line 417 "integer.m"
    if (mercury__integer__succeeded)
#line 417 "integer.m"
      mercury__integer__succeeded = (mercury__integer__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 503 "integer.m"
    if (mercury__integer__succeeded)
#line 505 "integer.m"
      mercury__integer__HeadVar__3_3 = mercury__integer__X_4;
#line 503 "integer.m"
    else
#line 508 "integer.m"
      {
#line 508 "integer.m"
        MR_Integer mercury__integer__Sign_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 508 "integer.m"
        MR_Word mercury__integer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 413 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_10 < (MR_Integer) 0);
#line 508 "integer.m"
        if (mercury__integer__succeeded)
#line 507 "integer.m"
          {
#line 507 "integer.m"
            MR_Word mercury__integer__V_6_6;
#line 507 "integer.m"
            MR_Integer mercury__integer__Len_19 = ((MR_Integer) 0 - mercury__integer__Sign_10);
#line 507 "integer.m"
            MR_Word mercury__integer__Digits_20;
#line 507 "integer.m"
            MR_Integer mercury__integer__Div_21;
#line 507 "integer.m"
            MR_Integer mercury__integer__Mod_22;
#line 507 "integer.m"
            MR_Integer mercury__integer__NewLen_23;
#line 507 "integer.m"
            MR_Integer mercury__integer__Carry_24;
#line 507 "integer.m"
            MR_Word mercury__integer__NewDigits_25;
#line 507 "integer.m"
            MR_Integer mercury__integer__V_28_28;
#line 507 "integer.m"
            MR_Integer mercury__integer__V_6_36;
#line 507 "integer.m"
            MR_Integer mercury__integer__V_7_37;
#line 507 "integer.m"
            MR_Integer mercury__integer__S_38;
#line 507 "integer.m"
            MR_Word mercury__integer__Digits0_39;
#line 507 "integer.m"
            MR_Word mercury__integer__Digits_40;
#line 507 "integer.m"
            MR_Integer mercury__integer__V_41_41;

#line 422 "integer.m"
            {
#line 422 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__V_11_11, &mercury__integer__Digits_20);
            }
#line 515 "integer.m"
            {
#line 515 "integer.m"
              mercury__integer__Div_21 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
            }
#line 113 "int.opt"
            {
#line 113 "int.opt"
              mercury__integer__V_7_37 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
            }
#line 112 "int.opt"
            mercury__integer__V_6_36 = (mercury__integer__V_7_37 * (MR_Integer) 14);
#line 111 "int.opt"
            mercury__integer__Mod_22 = (mercury__integer__I_5 - mercury__integer__V_6_36);
#line 517 "integer.m"
            mercury__integer__NewLen_23 = (mercury__integer__Len_19 + mercury__integer__Div_21);
#line 518 "integer.m"
            mercury__integer__V_28_28 = ((MR_Integer) 14 - mercury__integer__Mod_22);
#line 518 "integer.m"
            {
#line 518 "integer.m"
              mercury__integer__leftshift_6_p_0(mercury__integer__Mod_22, mercury__integer__V_28_28, mercury__integer__NewLen_23, mercury__integer__Digits_20, &mercury__integer__Carry_24, &mercury__integer__NewDigits_25);
            }
#line 519 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Carry_24 == (MR_Integer) 0);
#line 521 "integer.m"
            if (mercury__integer__succeeded)
#line 520 "integer.m"
              {
#line 520 "integer.m"
                mercury__integer__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 520 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 0) = ((MR_Box) (mercury__integer__NewLen_23));
#line 520 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 1) = ((MR_Box) (mercury__integer__NewDigits_25));
#line 520 "integer.m"
              }
#line 521 "integer.m"
            else
#line 522 "integer.m"
              {
#line 522 "integer.m"
                MR_Integer mercury__integer__V_30_30 = (mercury__integer__NewLen_23 + (MR_Integer) 1);
#line 522 "integer.m"
                MR_Word mercury__integer__V_32_32;

#line 522 "integer.m"
                {
#line 522 "integer.m"
                  mercury__integer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_32_32, 0) = ((MR_Box) (mercury__integer__Carry_24));
#line 522 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_32_32, 1) = ((MR_Box) (mercury__integer__NewDigits_25));
#line 522 "integer.m"
                }
#line 522 "integer.m"
                {
#line 522 "integer.m"
                  mercury__integer__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 522 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 0) = ((MR_Box) (mercury__integer__V_30_30));
#line 522 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 1) = ((MR_Box) (mercury__integer__V_32_32));
#line 522 "integer.m"
                }
#line 522 "integer.m"
              }
#line 421 "integer.m"
            mercury__integer__S_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, (MR_Integer) 0)));
#line 421 "integer.m"
            mercury__integer__Digits0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, (MR_Integer) 1)));
#line 421 "integer.m"
            mercury__integer__V_41_41 = ((MR_Integer) 0 - mercury__integer__S_38);
#line 422 "integer.m"
            {
#line 422 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_39, &mercury__integer__Digits_40);
            }
#line 421 "integer.m"
            {
#line 421 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_41_41));
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_40));
#line 421 "integer.m"
            }
#line 507 "integer.m"
          }
#line 508 "integer.m"
        else
#line 514 "integer.m"
          {
#line 514 "integer.m"
            MR_Integer mercury__integer__Len_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 514 "integer.m"
            MR_Word mercury__integer__Digits_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));
#line 514 "integer.m"
            MR_Integer mercury__integer__Div_46;
#line 514 "integer.m"
            MR_Integer mercury__integer__Mod_47;
#line 514 "integer.m"
            MR_Integer mercury__integer__NewLen_48;
#line 514 "integer.m"
            MR_Integer mercury__integer__Carry_49;
#line 514 "integer.m"
            MR_Word mercury__integer__NewDigits_50;
#line 514 "integer.m"
            MR_Integer mercury__integer__V_53_53;
#line 514 "integer.m"
            MR_Integer mercury__integer__V_6_61;
#line 514 "integer.m"
            MR_Integer mercury__integer__V_7_62;

#line 515 "integer.m"
            {
#line 515 "integer.m"
              mercury__integer__Div_46 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
            }
#line 113 "int.opt"
            {
#line 113 "int.opt"
              mercury__integer__V_7_62 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
            }
#line 112 "int.opt"
            mercury__integer__V_6_61 = (mercury__integer__V_7_62 * (MR_Integer) 14);
#line 111 "int.opt"
            mercury__integer__Mod_47 = (mercury__integer__I_5 - mercury__integer__V_6_61);
#line 517 "integer.m"
            mercury__integer__NewLen_48 = (mercury__integer__Len_44 + mercury__integer__Div_46);
#line 518 "integer.m"
            mercury__integer__V_53_53 = ((MR_Integer) 14 - mercury__integer__Mod_47);
#line 518 "integer.m"
            {
#line 518 "integer.m"
              mercury__integer__leftshift_6_p_0(mercury__integer__Mod_47, mercury__integer__V_53_53, mercury__integer__NewLen_48, mercury__integer__Digits_45, &mercury__integer__Carry_49, &mercury__integer__NewDigits_50);
            }
#line 519 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Carry_49 == (MR_Integer) 0);
#line 521 "integer.m"
            if (mercury__integer__succeeded)
#line 520 "integer.m"
              {
#line 520 "integer.m"
                mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 520 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__NewLen_48));
#line 520 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__NewDigits_50));
#line 520 "integer.m"
              }
#line 521 "integer.m"
            else
#line 522 "integer.m"
              {
#line 522 "integer.m"
                MR_Integer mercury__integer__V_55_55 = (mercury__integer__NewLen_48 + (MR_Integer) 1);
#line 522 "integer.m"
                MR_Word mercury__integer__V_57_57;

#line 522 "integer.m"
                {
#line 522 "integer.m"
                  mercury__integer__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_57_57, 0) = ((MR_Box) (mercury__integer__Carry_49));
#line 522 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_57_57, 1) = ((MR_Box) (mercury__integer__NewDigits_50));
#line 522 "integer.m"
                }
#line 522 "integer.m"
                {
#line 522 "integer.m"
                  mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 522 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_55_55));
#line 522 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_57_57));
#line 522 "integer.m"
                }
#line 522 "integer.m"
              }
#line 514 "integer.m"
          }
#line 508 "integer.m"
      }
#line 503 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 503 "integer.m"
  }
#line 501 "integer.m"
}

#line 487 "integer.m"
static MR_Word MR_CALL 
mercury__integer__rightshift_4_f_0(
#line 487 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 487 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 487 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 487 "integer.m"
  MR_Integer mercury__integer__HeadVar__4_4)
#line 487 "integer.m"
{
#line 489 "integer.m"
  {
#line 489 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 489 "integer.m"
    MR_Word mercury__integer__HeadVar__5_5;
#line 489 "integer.m"
    MR_Word mercury__integer__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 489 "integer.m"
    MR_Integer mercury__integer__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));

#line 489 "integer.m"
    if ((mercury__integer__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1188 "integer.m"
      {
#line 1188 "integer.m"
        MR_Word mercury__integer__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1188 "integer.m"
        mercury__integer__HeadVar__5_5 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1188 "integer.m"
      }
#line 489 "integer.m"
    else
#line 490 "integer.m"
      {
#line 490 "integer.m"
        MR_Integer mercury__integer__H_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_35_35, (MR_Integer) 0)));
#line 490 "integer.m"
        MR_Word mercury__integer__T_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_35_35, (MR_Integer) 1)));

#line 491 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_36_36 <= (MR_Integer) 0);
#line 493 "integer.m"
        if (mercury__integer__succeeded)
#line 1188 "integer.m"
          {
#line 1188 "integer.m"
            MR_Word mercury__integer__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1188 "integer.m"
            mercury__integer__HeadVar__5_5 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1188 "integer.m"
          }
#line 493 "integer.m"
        else
#line 494 "integer.m"
          {
#line 494 "integer.m"
            MR_Integer mercury__integer__NewH_18;
#line 494 "integer.m"
            MR_Integer mercury__integer__NewCarry_19;
#line 494 "integer.m"
            MR_Integer mercury__integer__TailLen_20;
#line 494 "integer.m"
            MR_Word mercury__integer__NewTail_21;
#line 494 "integer.m"
            MR_Integer mercury__integer__V_24_24;
#line 494 "integer.m"
            MR_Integer mercury__integer__V_25_25;
#line 494 "integer.m"
            MR_Integer mercury__integer__V_26_26;
#line 494 "integer.m"
            MR_Word mercury__integer__V_28_28;
#line 494 "integer.m"
            MR_Word mercury__integer__V_29_29;
#line 494 "integer.m"
            MR_Integer mercury__integer__V_30_30;
#line 494 "integer.m"
            MR_Integer mercury__integer__V_32_32;
#line 494 "integer.m"
            MR_Word mercury__integer__V_34_34;

#line 494 "integer.m"
            {
#line 494 "integer.m"
              mercury__integer__V_24_24 = mercury__int__f_62_62_2_f_0(mercury__integer__H_14, mercury__integer__HeadVar__1_1);
            }
#line 494 "integer.m"
            mercury__integer__NewH_18 = (mercury__integer__HeadVar__4_4 | mercury__integer__V_24_24);
#line 495 "integer.m"
            {
#line 495 "integer.m"
              mercury__integer__V_26_26 = mercury__int__f_62_62_2_f_0((MR_Integer) 16383, mercury__integer__HeadVar__2_2);
            }
#line 495 "integer.m"
            mercury__integer__V_25_25 = (mercury__integer__H_14 & mercury__integer__V_26_26);
#line 495 "integer.m"
            {
#line 495 "integer.m"
              mercury__integer__NewCarry_19 = mercury__int__f_60_60_2_f_0(mercury__integer__V_25_25, mercury__integer__HeadVar__2_2);
            }
#line 496 "integer.m"
            mercury__integer__V_30_30 = (mercury__integer__V_36_36 - (MR_Integer) 1);
#line 496 "integer.m"
            {
#line 496 "integer.m"
              mercury__integer__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 496 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 0) = ((MR_Box) (mercury__integer__V_30_30));
#line 496 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 1) = ((MR_Box) (mercury__integer__T_15));
#line 496 "integer.m"
            }
#line 496 "integer.m"
            {
#line 496 "integer.m"
              mercury__integer__V_28_28 = mercury__integer__rightshift_4_f_0(mercury__integer__HeadVar__1_1, mercury__integer__HeadVar__2_2, mercury__integer__V_29_29, mercury__integer__NewCarry_19);
            }
#line 496 "integer.m"
            mercury__integer__TailLen_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, (MR_Integer) 0)));
#line 496 "integer.m"
            mercury__integer__NewTail_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, (MR_Integer) 1)));
#line 498 "integer.m"
            mercury__integer__V_32_32 = (mercury__integer__TailLen_20 + (MR_Integer) 1);
#line 498 "integer.m"
            {
#line 498 "integer.m"
              mercury__integer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_34_34, 0) = ((MR_Box) (mercury__integer__NewH_18));
#line 498 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_34_34, 1) = ((MR_Box) (mercury__integer__NewTail_21));
#line 498 "integer.m"
            }
#line 498 "integer.m"
            {
#line 498 "integer.m"
              mercury__integer__HeadVar__5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 498 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__5_5, 0) = ((MR_Box) (mercury__integer__V_32_32));
#line 498 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__5_5, 1) = ((MR_Box) (mercury__integer__V_34_34));
#line 498 "integer.m"
            }
#line 494 "integer.m"
          }
#line 490 "integer.m"
      }
#line 489 "integer.m"
    return mercury__integer__HeadVar__5_5;
#line 489 "integer.m"
  }
#line 487 "integer.m"
}

#line 454 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_mod_2_f_0(
#line 454 "integer.m"
  MR_Word mercury__integer__X_4,
#line 454 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 454 "integer.m"
{
#line 456 "integer.m"
  {
#line 456 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 456 "integer.m"
    MR_Word mercury__integer__Mod_6;
#line 456 "integer.m"
    MR_Word mercury__integer__Rem_8;
#line 457 "integer.m"
    MR_Word mercury__integer___Trunc_7;
#line 458 "integer.m"
    MR_Integer mercury__integer__V_9_9;
#line 458 "integer.m"
    MR_Integer mercury__integer__V_11_11;
#line 458 "integer.m"
    MR_Integer mercury__integer__V_12_12;
#line 458 "integer.m"
    MR_Integer mercury__integer__Sign_13;
#line 458 "integer.m"
    MR_Integer mercury__integer__Sign_15;
#line 737 "integer.m"
    MR_Word mercury__integer__V_14_14;
#line 737 "integer.m"
    MR_Word mercury__integer__V_16_16;

#line 457 "integer.m"
    {
#line 457 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer___Trunc_7, &mercury__integer__Rem_8);
    }
#line 737 "integer.m"
    mercury__integer__Sign_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 737 "integer.m"
    mercury__integer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
#line 737 "integer.m"
    {
#line 737 "integer.m"
      mercury__integer__V_11_11 = mercury__integer__signum_1_f_0(mercury__integer__Sign_13);
    }
#line 737 "integer.m"
    mercury__integer__Sign_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Rem_8, (MR_Integer) 0)));
#line 737 "integer.m"
    mercury__integer__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Rem_8, (MR_Integer) 1)));
#line 737 "integer.m"
    {
#line 737 "integer.m"
      mercury__integer__V_12_12 = mercury__integer__signum_1_f_0(mercury__integer__Sign_15);
    }
#line 458 "integer.m"
    mercury__integer__V_9_9 = (mercury__integer__V_11_11 * mercury__integer__V_12_12);
#line 458 "integer.m"
    mercury__integer__succeeded = (mercury__integer__V_9_9 < (MR_Integer) 0);
#line 460 "integer.m"
    if (mercury__integer__succeeded)
#line 323 "integer.m"
      {
#line 323 "integer.m"
        return mercury__integer__Mod_6 = mercury__integer__big_plus_2_f_0(mercury__integer__Rem_8, mercury__integer__Y_5);
      }
#line 460 "integer.m"
    else
#line 461 "integer.m"
      mercury__integer__Mod_6 = mercury__integer__Rem_8;
#line 456 "integer.m"
    return mercury__integer__Mod_6;
#line 456 "integer.m"
  }
#line 454 "integer.m"
}

#line 444 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_div_2_f_0(
#line 444 "integer.m"
  MR_Word mercury__integer__X_4,
#line 444 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 444 "integer.m"
{
#line 446 "integer.m"
  {
#line 446 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 446 "integer.m"
    MR_Word mercury__integer__Div_6;
#line 446 "integer.m"
    MR_Word mercury__integer__Trunc_7;
#line 446 "integer.m"
    MR_Word mercury__integer__Rem_8;
#line 448 "integer.m"
    MR_Integer mercury__integer__V_9_9;
#line 448 "integer.m"
    MR_Integer mercury__integer__V_11_11;
#line 448 "integer.m"
    MR_Integer mercury__integer__V_12_12;
#line 448 "integer.m"
    MR_Integer mercury__integer__Sign_14;
#line 448 "integer.m"
    MR_Integer mercury__integer__Sign_16;
#line 737 "integer.m"
    MR_Word mercury__integer__V_15_15;
#line 737 "integer.m"
    MR_Word mercury__integer__V_17_17;

#line 447 "integer.m"
    {
#line 447 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer__Trunc_7, &mercury__integer__Rem_8);
    }
#line 737 "integer.m"
    mercury__integer__Sign_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 737 "integer.m"
    mercury__integer__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
#line 737 "integer.m"
    {
#line 737 "integer.m"
      mercury__integer__V_11_11 = mercury__integer__signum_1_f_0(mercury__integer__Sign_14);
    }
#line 737 "integer.m"
    mercury__integer__Sign_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Rem_8, (MR_Integer) 0)));
#line 737 "integer.m"
    mercury__integer__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Rem_8, (MR_Integer) 1)));
#line 737 "integer.m"
    {
#line 737 "integer.m"
      mercury__integer__V_12_12 = mercury__integer__signum_1_f_0(mercury__integer__Sign_16);
    }
#line 448 "integer.m"
    mercury__integer__V_9_9 = (mercury__integer__V_11_11 * mercury__integer__V_12_12);
#line 448 "integer.m"
    mercury__integer__succeeded = (mercury__integer__V_9_9 < (MR_Integer) 0);
#line 450 "integer.m"
    if (mercury__integer__succeeded)
#line 449 "integer.m"
      {
#line 449 "integer.m"
        MR_Word mercury__integer__V_13_13 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 449 "integer.m"
        MR_Word mercury__integer__V_24_24;
#line 449 "integer.m"
        MR_Integer mercury__integer__S_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, (MR_Integer) 0)));
#line 449 "integer.m"
        MR_Word mercury__integer__Digits0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, (MR_Integer) 1)));
#line 449 "integer.m"
        MR_Word mercury__integer__Digits_27;
#line 449 "integer.m"
        MR_Integer mercury__integer__V_28_28 = ((MR_Integer) 0 - mercury__integer__S_25);

#line 422 "integer.m"
        {
#line 422 "integer.m"
          mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_26, &mercury__integer__Digits_27);
        }
#line 421 "integer.m"
        {
#line 421 "integer.m"
          mercury__integer__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 0) = ((MR_Box) (mercury__integer__V_28_28));
#line 421 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 1) = ((MR_Box) (mercury__integer__Digits_27));
#line 421 "integer.m"
        }
#line 325 "integer.m"
        {
#line 325 "integer.m"
          return mercury__integer__Div_6 = mercury__integer__big_plus_2_f_0(mercury__integer__Trunc_7, mercury__integer__V_24_24);
        }
#line 449 "integer.m"
      }
#line 450 "integer.m"
    else
#line 451 "integer.m"
      mercury__integer__Div_6 = mercury__integer__Trunc_7;
#line 446 "integer.m"
    return mercury__integer__Div_6;
#line 446 "integer.m"
  }
#line 444 "integer.m"
}

#line 439 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_rem_2_f_0(
#line 439 "integer.m"
  MR_Word mercury__integer__X_4,
#line 439 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 439 "integer.m"
{
#line 442 "integer.m"
  {
#line 442 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 442 "integer.m"
    MR_Word mercury__integer__Rem_6;
#line 442 "integer.m"
    MR_Word mercury__integer___Quot_7;

#line 442 "integer.m"
    {
#line 442 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer___Quot_7, &mercury__integer__Rem_6);
    }
#line 442 "integer.m"
    return mercury__integer__Rem_6;
#line 442 "integer.m"
  }
#line 439 "integer.m"
}

#line 434 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_quot_2_f_0(
#line 434 "integer.m"
  MR_Word mercury__integer__X_4,
#line 434 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 434 "integer.m"
{
#line 437 "integer.m"
  {
#line 437 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 437 "integer.m"
    MR_Word mercury__integer__Quot_6;
#line 437 "integer.m"
    MR_Word mercury__integer___Rem_7;

#line 437 "integer.m"
    {
#line 437 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer__Quot_6, &mercury__integer___Rem_7);
    }
#line 437 "integer.m"
    return mercury__integer__Quot_6;
#line 437 "integer.m"
  }
#line 434 "integer.m"
}

#line 430 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_sign_2_f_0(
#line 430 "integer.m"
  MR_Integer mercury__integer__Sign_4,
#line 430 "integer.m"
  MR_Word mercury__integer__In_5)
#line 430 "integer.m"
{
#line 432 "integer.m"
  {
#line 432 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__Sign_4 < (MR_Integer) 0);
#line 432 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 432 "integer.m"
    if (mercury__integer__succeeded)
#line 421 "integer.m"
      {
#line 421 "integer.m"
        MR_Integer mercury__integer__S_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__In_5, (MR_Integer) 0)));
#line 421 "integer.m"
        MR_Word mercury__integer__Digits0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__In_5, (MR_Integer) 1)));
#line 421 "integer.m"
        MR_Word mercury__integer__Digits_9;
#line 421 "integer.m"
        MR_Integer mercury__integer__V_10_10 = ((MR_Integer) 0 - mercury__integer__S_7);

#line 422 "integer.m"
        {
#line 422 "integer.m"
          mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_8, &mercury__integer__Digits_9);
        }
#line 421 "integer.m"
        {
#line 421 "integer.m"
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_10_10));
#line 421 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_9));
#line 421 "integer.m"
        }
#line 421 "integer.m"
      }
#line 432 "integer.m"
    else
#line 432 "integer.m"
      mercury__integer__HeadVar__3_3 = mercury__integer__In_5;
#line 432 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 432 "integer.m"
  }
#line 430 "integer.m"
}

#line 424 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_mul_2_f_0(
#line 424 "integer.m"
  MR_Word mercury__integer__X_4,
#line 424 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 424 "integer.m"
{
#line 426 "integer.m"
  {
#line 426 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 426 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 426 "integer.m"
    MR_Integer mercury__integer__V_6_6;
#line 426 "integer.m"
    MR_Integer mercury__integer__V_7_7;
#line 426 "integer.m"
    MR_Integer mercury__integer__V_8_8;
#line 426 "integer.m"
    MR_Word mercury__integer__V_9_9;
#line 426 "integer.m"
    MR_Word mercury__integer__V_10_10;
#line 426 "integer.m"
    MR_Word mercury__integer__V_11_11;
#line 426 "integer.m"
    MR_Integer mercury__integer__Sign_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 426 "integer.m"
    MR_Integer mercury__integer__Sign_14;
#line 426 "integer.m"
    MR_Integer mercury__integer__L1_16;
#line 426 "integer.m"
    MR_Integer mercury__integer__L2_18;
#line 737 "integer.m"
    MR_Word mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));
#line 737 "integer.m"
    MR_Word mercury__integer__V_15_15;
#line 857 "integer.m"
    MR_Word mercury__integer__Ds1_17;
#line 857 "integer.m"
    MR_Word mercury__integer__Ds2_19;

#line 737 "integer.m"
    {
#line 737 "integer.m"
      mercury__integer__V_7_7 = mercury__integer__signum_1_f_0(mercury__integer__Sign_12);
    }
#line 737 "integer.m"
    mercury__integer__Sign_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 737 "integer.m"
    mercury__integer__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
#line 737 "integer.m"
    {
#line 737 "integer.m"
      mercury__integer__V_8_8 = mercury__integer__signum_1_f_0(mercury__integer__Sign_14);
    }
#line 427 "integer.m"
    mercury__integer__V_6_6 = (mercury__integer__V_7_7 * mercury__integer__V_8_8);
#line 428 "integer.m"
    {
#line 428 "integer.m"
      mercury__integer__V_10_10 = mercury__integer__big_abs_1_f_0(mercury__integer__X_4);
    }
#line 428 "integer.m"
    {
#line 428 "integer.m"
      mercury__integer__V_11_11 = mercury__integer__big_abs_1_f_0(mercury__integer__Y_5);
    }
#line 857 "integer.m"
    mercury__integer__L1_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, (MR_Integer) 0)));
#line 857 "integer.m"
    mercury__integer__Ds1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, (MR_Integer) 1)));
#line 857 "integer.m"
    mercury__integer__L2_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, (MR_Integer) 0)));
#line 857 "integer.m"
    mercury__integer__Ds2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, (MR_Integer) 1)));
#line 858 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_16 < mercury__integer__L2_18);
#line 857 "integer.m"
    if (mercury__integer__succeeded)
#line 859 "integer.m"
      {
#line 859 "integer.m"
        mercury__integer__V_9_9 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__V_10_10, mercury__integer__V_11_11);
      }
#line 857 "integer.m"
    else
#line 861 "integer.m"
      {
#line 861 "integer.m"
        mercury__integer__V_9_9 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__V_11_11, mercury__integer__V_10_10);
      }
#line 427 "integer.m"
    {
#line 427 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__big_sign_2_f_0(mercury__integer__V_6_6, mercury__integer__V_9_9);
    }
#line 426 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 426 "integer.m"
  }
#line 424 "integer.m"
}

#line 419 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_neg_1_f_0(
#line 419 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 419 "integer.m"
{
#line 421 "integer.m"
  {
#line 421 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 421 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;
#line 421 "integer.m"
    MR_Integer mercury__integer__S_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 421 "integer.m"
    MR_Word mercury__integer__Digits0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 421 "integer.m"
    MR_Word mercury__integer__Digits_5;
#line 421 "integer.m"
    MR_Integer mercury__integer__V_6_6 = ((MR_Integer) 0 - mercury__integer__S_3);

#line 422 "integer.m"
    {
#line 422 "integer.m"
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_4, &mercury__integer__Digits_5);
    }
#line 421 "integer.m"
    {
#line 421 "integer.m"
      mercury__integer__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__V_6_6));
#line 421 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__Digits_5));
#line 421 "integer.m"
    }
#line 421 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 421 "integer.m"
  }
#line 419 "integer.m"
}

#line 411 "integer.m"
MR_bool MR_CALL 
mercury__integer__big_isnegative_1_p_0(
#line 411 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 411 "integer.m"
{
#line 413 "integer.m"
  {
#line 413 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 413 "integer.m"
    MR_Integer mercury__integer__Sign_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 413 "integer.m"
    MR_Word mercury__integer__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

#line 413 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_2 < (MR_Integer) 0);
#line 413 "integer.m"
    return mercury__integer__succeeded;
#line 413 "integer.m"
  }
#line 411 "integer.m"
}

#line 405 "integer.m"
void MR_CALL 
mercury__integer__neg_list_2_p_0(
#line 405 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 405 "integer.m"
  MR_Word * mercury__integer__HeadVar__2_2)
#line 405 "integer.m"
{
#line 407 "integer.m"
  {
#line 407 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 407 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "integer.m"
      *mercury__integer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 407 "integer.m"
    else
#line 408 "integer.m"
      {
#line 408 "integer.m"
        MR_Integer mercury__integer__H_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 408 "integer.m"
        MR_Word mercury__integer__T_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 408 "integer.m"
        MR_Word mercury__integer__NT_5;
#line 408 "integer.m"
        MR_Integer mercury__integer__V_6_6 = ((MR_Integer) 0 - mercury__integer__H_3);

#line 409 "integer.m"
        {
#line 409 "integer.m"
          mercury__integer__neg_list_2_p_0(mercury__integer__T_4, &mercury__integer__NT_5);
        }
#line 408 "integer.m"
        {
#line 408 "integer.m"
          MR_Word base;
#line 408 "integer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "integer.m"
          *mercury__integer__HeadVar__2_2 = base;
#line 408 "integer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__V_6_6));
#line 408 "integer.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__NT_5));
#line 408 "integer.m"
        }
#line 408 "integer.m"
      }
#line 407 "integer.m"
  }
#line 405 "integer.m"
}

#line 401 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_abs_1_f_0(
#line 401 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 401 "integer.m"
{
#line 403 "integer.m"
  {
#line 403 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 403 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;
#line 403 "integer.m"
    MR_Integer mercury__integer__Sign_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 403 "integer.m"
    MR_Word mercury__integer__Ds_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

#line 403 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_3 < (MR_Integer) 0);
#line 403 "integer.m"
    if (mercury__integer__succeeded)
#line 421 "integer.m"
      {
#line 421 "integer.m"
        MR_Integer mercury__integer__S_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 421 "integer.m"
        MR_Word mercury__integer__Digits0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 421 "integer.m"
        MR_Word mercury__integer__Digits_9;
#line 421 "integer.m"
        MR_Integer mercury__integer__V_10_10 = ((MR_Integer) 0 - mercury__integer__S_7);

#line 422 "integer.m"
        {
#line 422 "integer.m"
          mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_8, &mercury__integer__Digits_9);
        }
#line 421 "integer.m"
        {
#line 421 "integer.m"
          mercury__integer__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__V_10_10));
#line 421 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__Digits_9));
#line 421 "integer.m"
        }
#line 421 "integer.m"
      }
#line 403 "integer.m"
    else
#line 403 "integer.m"
      mercury__integer__HeadVar__2_2 = mercury__integer__HeadVar__1_1;
#line 403 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 403 "integer.m"
  }
#line 401 "integer.m"
}

#line 275 "integer.m"
MR_Integer MR_CALL 
mercury__integer__base_0_f_0(void)
#line 275 "integer.m"
{
#line 277 "integer.m"
  {
#line 277 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 277 "integer.m"
    return (MR_Integer) 16384;
#line 277 "integer.m"
  }
#line 275 "integer.m"
}

#line 194 "integer.m"
MR_Word MR_CALL 
mercury__integer__one_0_f_0(void)
#line 194 "integer.m"
{
#line 1190 "integer.m"
  {
#line 1190 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1190 "integer.m"
    MR_Word mercury__integer__HeadVar__1_1 = (MR_Word) &mercury__integer_scalar_common_1[2];

#line 1190 "integer.m"
    return mercury__integer__HeadVar__1_1;
#line 1190 "integer.m"
  }
#line 194 "integer.m"
}

#line 190 "integer.m"
MR_Word MR_CALL 
mercury__integer__zero_0_f_0(void)
#line 190 "integer.m"
{
#line 1188 "integer.m"
  {
#line 1188 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1188 "integer.m"
    MR_Word mercury__integer__HeadVar__1_1 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1188 "integer.m"
    MR_Word mercury__integer__V_3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1188 "integer.m"
    return mercury__integer__HeadVar__1_1;
#line 1188 "integer.m"
  }
#line 190 "integer.m"
}

#line 185 "integer.m"
MR_Integer MR_CALL 
mercury__integer__int_1_f_0(
#line 185 "integer.m"
  MR_Word mercury__integer__Integer_3)
#line 185 "integer.m"
{
#line 1176 "integer.m"
  {
#line 1176 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1176 "integer.m"
    MR_Integer mercury__integer__HeadVar__2_2;
#line 1176 "integer.m"
    MR_Integer mercury__integer__IntPrime_6;

#line 1174 "integer.m"
    {
#line 1174 "integer.m"
      mercury__integer__succeeded = mercury__integer__to_int_2_p_0(mercury__integer__Integer_3, &mercury__integer__IntPrime_6);
    }
#line 1176 "integer.m"
    if (mercury__integer__succeeded)
#line 1175 "integer.m"
      mercury__integer__HeadVar__2_2 = mercury__integer__IntPrime_6;
#line 1176 "integer.m"
    else
#line 1177 "integer.m"
      {
#line 1177 "integer.m"
        MR_Word mercury__integer__TypeCtorInfo_8_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 1177 "integer.m"
        MR_Word mercury__integer__V_7_7 = (MR_Word) ((MR_Box) ((MR_String) "integer.det_to_int: domain error (conversion would overflow)"));

#line 1177 "integer.m"
        {
#line 1177 "integer.m"
          mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_8_9, ((MR_Box) (mercury__integer__V_7_7)));
        }
#line 1177 "integer.m"
      }
#line 1176 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 1176 "integer.m"
  }
#line 185 "integer.m"
}

#line 183 "integer.m"
MR_Integer MR_CALL 
mercury__integer__det_to_int_1_f_0(
#line 183 "integer.m"
  MR_Word mercury__integer__Integer_3)
#line 183 "integer.m"
{
#line 1176 "integer.m"
  {
#line 1176 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1176 "integer.m"
    MR_Integer mercury__integer__Int_4;
#line 1176 "integer.m"
    MR_Integer mercury__integer__IntPrime_5;

#line 1174 "integer.m"
    {
#line 1174 "integer.m"
      mercury__integer__succeeded = mercury__integer__to_int_2_p_0(mercury__integer__Integer_3, &mercury__integer__IntPrime_5);
    }
#line 1176 "integer.m"
    if (mercury__integer__succeeded)
#line 1175 "integer.m"
      mercury__integer__Int_4 = mercury__integer__IntPrime_5;
#line 1176 "integer.m"
    else
#line 1177 "integer.m"
      {
#line 1177 "integer.m"
        MR_Word mercury__integer__TypeCtorInfo_8_8 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 1177 "integer.m"
        MR_Word mercury__integer__V_6_6 = (MR_Word) ((MR_Box) ((MR_String) "integer.det_to_int: domain error (conversion would overflow)"));

#line 1177 "integer.m"
        {
#line 1177 "integer.m"
          mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_8_8, ((MR_Box) (mercury__integer__V_6_6)));
        }
#line 1177 "integer.m"
      }
#line 1176 "integer.m"
    return mercury__integer__Int_4;
#line 1176 "integer.m"
  }
#line 183 "integer.m"
}

#line 179 "integer.m"
MR_bool MR_CALL 
mercury__integer__to_int_2_p_0(
#line 179 "integer.m"
  MR_Word mercury__integer__Integer_3,
#line 179 "integer.m"
  MR_Integer * mercury__integer__Int_4)
#line 179 "integer.m"
{
#line 1167 "integer.m"
  {
#line 1167 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1167 "integer.m"
    MR_Word mercury__integer__Digits_6;
#line 1167 "integer.m"
    MR_Word mercury__integer__V_7_7;
#line 1167 "integer.m"
    MR_Integer mercury__integer__V_8_8;
#line 1167 "integer.m"
    MR_Word mercury__integer__V_9_9;
#line 1167 "integer.m"
    MR_Integer mercury__integer__V_10_10;
#line 1167 "integer.m"
    MR_Integer mercury__integer__V_11_11;
#line 1167 "integer.m"
    MR_Word mercury__integer__C_16;
#line 1167 "integer.m"
    MR_Word mercury__integer__C_25;
#line 1170 "integer.m"
    MR_Integer mercury__integer___Sign_5;

#line 156 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__to_int_2_p_0

	MR_Integer Min;

		{
#line 156 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Min = INT_MIN;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Min = (MR_Integer) LONG_MIN;
    #if defined(LLONG_MIN)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Min = (MR_Integer) LLONG_MIN;
    #endif
    } else {
        MR_fatal_error("Unable to figure out min integer size");
    }

#line 11866 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_8_8  = Min;
#line 156 "int.opt"
}
#line 697 "integer.m"
    {
#line 697 "integer.m"
      mercury__integer__V_7_7 = mercury__integer__int_to_integer_1_f_0(mercury__integer__V_8_8);
    }
#line 661 "integer.m"
    {
#line 661 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_16, mercury__integer__Integer_3, mercury__integer__V_7_7);
    }
#line 317 "integer.m"
    if ((mercury__integer__C_16 == (MR_Integer) 0))
#line 317 "integer.m"
      mercury__integer__succeeded = MR_TRUE;
#line 317 "integer.m"
    else
#line 317 "integer.m"
    if ((mercury__integer__C_16 == (MR_Integer) 2))
#line 317 "integer.m"
      mercury__integer__succeeded = MR_TRUE;
#line 317 "integer.m"
    else
#line 317 "integer.m"
      mercury__integer__succeeded = MR_FALSE;
#line 1167 "integer.m"
    if (mercury__integer__succeeded)
#line 1167 "integer.m"
      {
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__to_int_2_p_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 11922 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_10_10  = Max;
#line 141 "int.opt"
}
#line 697 "integer.m"
        {
#line 697 "integer.m"
          mercury__integer__V_9_9 = mercury__integer__int_to_integer_1_f_0(mercury__integer__V_10_10);
        }
#line 661 "integer.m"
        {
#line 661 "integer.m"
          mercury__integer____Compare____integer_0_0(&mercury__integer__C_25, mercury__integer__Integer_3, mercury__integer__V_9_9);
        }
#line 313 "integer.m"
        if ((mercury__integer__C_25 == (MR_Integer) 1))
#line 313 "integer.m"
          mercury__integer__succeeded = MR_TRUE;
#line 313 "integer.m"
        else
#line 313 "integer.m"
        if ((mercury__integer__C_25 == (MR_Integer) 0))
#line 313 "integer.m"
          mercury__integer__succeeded = MR_TRUE;
#line 313 "integer.m"
        else
#line 313 "integer.m"
          mercury__integer__succeeded = MR_FALSE;
#line 1167 "integer.m"
        if (mercury__integer__succeeded)
#line 1167 "integer.m"
          {
#line 1170 "integer.m"
            mercury__integer___Sign_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Integer_3, (MR_Integer) 0)));
#line 1170 "integer.m"
            mercury__integer__Digits_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Integer_3, (MR_Integer) 1)));
#line 1171 "integer.m"
            mercury__integer__V_11_11 = (MR_Integer) 0;
#line 1171 "integer.m"
            {
#line 1171 "integer.m"
              *mercury__integer__Int_4 = mercury__integer__int_list_2_f_0(mercury__integer__Digits_6, mercury__integer__V_11_11);
            }
#line 1171 "integer.m"
            mercury__integer__succeeded = MR_TRUE;
#line 1167 "integer.m"
          }
#line 1167 "integer.m"
      }
#line 1167 "integer.m"
    return mercury__integer__succeeded;
#line 1167 "integer.m"
  }
#line 179 "integer.m"
}

#line 174 "integer.m"
MR_Float MR_CALL 
mercury__integer__float_1_f_0(
#line 174 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 174 "integer.m"
{
#line 1159 "integer.m"
  {
#line 1159 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1159 "integer.m"
    MR_Float mercury__integer__HeadVar__2_2;
#line 1159 "integer.m"
    MR_Word mercury__integer__List_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1159 "integer.m"
    MR_Float mercury__integer__V_5_5;
#line 1159 "integer.m"
    MR_Integer mercury__integer__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 81 "float.opt"
{
#define MR_PROC_LABEL mercury__integer__float_1_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  (MR_Integer) 16384 ;
		{
#line 81 "float.opt"

    FloatVal = IntVal;

#line 12014 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_5_5  = FloatVal;
#line 81 "float.opt"
}
#line 1159 "integer.m"
    {
#line 1159 "integer.m"
      return mercury__integer__HeadVar__2_2 = mercury__integer__float_list_3_f_0(mercury__integer__V_5_5, (MR_Float) 0.0000000000000000, mercury__integer__List_4);
    }
#line 1159 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 1159 "integer.m"
  }
#line 174 "integer.m"
}

#line 170 "integer.m"
MR_Word MR_CALL 
mercury__integer__pow_2_f_0(
#line 170 "integer.m"
  MR_Word mercury__integer__A_4,
#line 170 "integer.m"
  MR_Word mercury__integer__N_5)
#line 170 "integer.m"
{
#line 1106 "integer.m"
  {
#line 1106 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1106 "integer.m"
    MR_Word mercury__integer__P_6;
#line 413 "integer.m"
    MR_Integer mercury__integer__Sign_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__N_5, (MR_Integer) 0)));
#line 413 "integer.m"
    MR_Word mercury__integer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__N_5, (MR_Integer) 1)));

#line 413 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_10 < (MR_Integer) 0);
#line 1106 "integer.m"
    if (mercury__integer__succeeded)
#line 1105 "integer.m"
      {
#line 1105 "integer.m"
        MR_Word mercury__integer__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 1105 "integer.m"
        MR_Word mercury__integer__V_7_7 = (MR_Word) ((MR_Box) ((MR_String) "integer.pow: negative exponent"));

#line 1105 "integer.m"
        {
#line 1105 "integer.m"
          mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_9, ((MR_Box) (mercury__integer__V_7_7)));
        }
#line 1105 "integer.m"
      }
#line 1106 "integer.m"
    else
#line 1107 "integer.m"
      {
#line 1107 "integer.m"
        return mercury__integer__P_6 = mercury__integer__big_pow_2_f_0(mercury__integer__A_4, mercury__integer__N_5);
      }
#line 1106 "integer.m"
    return mercury__integer__P_6;
#line 1106 "integer.m"
  }
#line 170 "integer.m"
}

#line 164 "integer.m"
MR_Word MR_CALL 
mercury__integer__abs_1_f_0(
#line 164 "integer.m"
  MR_Word mercury__integer__N_3)
#line 164 "integer.m"
{
#line 399 "integer.m"
  {
#line 399 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 399 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;

#line 399 "integer.m"
    {
#line 399 "integer.m"
      return mercury__integer__HeadVar__2_2 = mercury__integer__big_abs_1_f_0(mercury__integer__N_3);
    }
#line 399 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 399 "integer.m"
  }
#line 164 "integer.m"
}

#line 160 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_92_1_f_0(
#line 160 "integer.m"
  MR_Word mercury__integer__X_3)
#line 160 "integer.m"
{
#line 397 "integer.m"
  {
#line 397 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 397 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;
#line 397 "integer.m"
    MR_Word mercury__integer__V_4_4;
#line 397 "integer.m"
    MR_Word mercury__integer__V_5_5 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 397 "integer.m"
    MR_Integer mercury__integer__S_10;
#line 397 "integer.m"
    MR_Word mercury__integer__Digits0_11;
#line 397 "integer.m"
    MR_Word mercury__integer__Digits_12;
#line 397 "integer.m"
    MR_Integer mercury__integer__V_13_13;

#line 397 "integer.m"
    {
#line 397 "integer.m"
      mercury__integer__V_4_4 = mercury__integer__big_plus_2_f_0(mercury__integer__X_3, mercury__integer__V_5_5);
    }
#line 421 "integer.m"
    mercury__integer__S_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_4_4, (MR_Integer) 0)));
#line 421 "integer.m"
    mercury__integer__Digits0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_4_4, (MR_Integer) 1)));
#line 421 "integer.m"
    mercury__integer__V_13_13 = ((MR_Integer) 0 - mercury__integer__S_10);
#line 422 "integer.m"
    {
#line 422 "integer.m"
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_11, &mercury__integer__Digits_12);
    }
#line 421 "integer.m"
    {
#line 421 "integer.m"
      mercury__integer__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__V_13_13));
#line 421 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__Digits_12));
#line 421 "integer.m"
    }
#line 397 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 397 "integer.m"
  }
#line 160 "integer.m"
}

#line 156 "integer.m"
MR_Word MR_CALL 
mercury__integer__xor_2_f_0(
#line 156 "integer.m"
  MR_Word mercury__integer__X_4,
#line 156 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 156 "integer.m"
{
#line 384 "integer.m"
  {
#line 384 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 384 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 413 "integer.m"
    MR_Integer mercury__integer__Sign_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 413 "integer.m"
    MR_Word mercury__integer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 413 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_10 < (MR_Integer) 0);
#line 384 "integer.m"
    if (mercury__integer__succeeded)
#line 388 "integer.m"
      {
#line 413 "integer.m"
        MR_Integer mercury__integer__Sign_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 413 "integer.m"
        MR_Word mercury__integer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 413 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_13 < (MR_Integer) 0);
#line 388 "integer.m"
        if (mercury__integer__succeeded)
#line 387 "integer.m"
          {
#line 387 "integer.m"
            MR_Word mercury__integer__V_6_6;
#line 387 "integer.m"
            MR_Word mercury__integer__V_7_7;
#line 387 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 387 "integer.m"
            MR_Word mercury__integer__V_18_18 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 387 "integer.m"
            MR_Integer mercury__integer__S_23;
#line 387 "integer.m"
            MR_Word mercury__integer__Digits0_24;
#line 387 "integer.m"
            MR_Word mercury__integer__Digits_25;
#line 387 "integer.m"
            MR_Integer mercury__integer__V_26_26;
#line 387 "integer.m"
            MR_Word mercury__integer__V_28_28;
#line 387 "integer.m"
            MR_Word mercury__integer__V_29_29;
#line 387 "integer.m"
            MR_Integer mercury__integer__S_34;
#line 387 "integer.m"
            MR_Word mercury__integer__Digits0_35;
#line 387 "integer.m"
            MR_Word mercury__integer__Digits_36;
#line 387 "integer.m"
            MR_Integer mercury__integer__V_37_37;
#line 387 "integer.m"
            MR_Word mercury__integer__V_40_40;

#line 397 "integer.m"
            {
#line 397 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_18_18);
            }
#line 421 "integer.m"
            mercury__integer__S_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 421 "integer.m"
            mercury__integer__Digits0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 421 "integer.m"
            mercury__integer__V_26_26 = ((MR_Integer) 0 - mercury__integer__S_23);
#line 422 "integer.m"
            {
#line 422 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_24, &mercury__integer__Digits_25);
            }
#line 421 "integer.m"
            {
#line 421 "integer.m"
              mercury__integer__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 0) = ((MR_Box) (mercury__integer__V_26_26));
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 1) = ((MR_Box) (mercury__integer__Digits_25));
#line 421 "integer.m"
            }
#line 1190 "integer.m"
            mercury__integer__V_29_29 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 397 "integer.m"
            {
#line 397 "integer.m"
              mercury__integer__V_28_28 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_29_29);
            }
#line 421 "integer.m"
            mercury__integer__S_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, (MR_Integer) 0)));
#line 421 "integer.m"
            mercury__integer__Digits0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, (MR_Integer) 1)));
#line 421 "integer.m"
            mercury__integer__V_37_37 = ((MR_Integer) 0 - mercury__integer__S_34);
#line 422 "integer.m"
            {
#line 422 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_35, &mercury__integer__Digits_36);
            }
#line 421 "integer.m"
            {
#line 421 "integer.m"
              mercury__integer__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 0) = ((MR_Box) (mercury__integer__V_37_37));
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 1) = ((MR_Box) (mercury__integer__Digits_36));
#line 421 "integer.m"
            }
#line 578 "integer.m"
            {
#line 578 "integer.m"
              mercury__integer__V_40_40 = mercury__integer__xor_pairs_2_f_0(mercury__integer__V_6_6, mercury__integer__V_7_7);
            }
#line 578 "integer.m"
            {
#line 578 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_40_40);
            }
#line 387 "integer.m"
          }
#line 388 "integer.m"
        else
#line 389 "integer.m"
          {
#line 389 "integer.m"
            MR_Word mercury__integer__V_8_8;
#line 389 "integer.m"
            MR_Word mercury__integer__V_42_42;
#line 389 "integer.m"
            MR_Word mercury__integer__V_43_43 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 389 "integer.m"
            MR_Integer mercury__integer__S_48;
#line 389 "integer.m"
            MR_Word mercury__integer__Digits0_49;
#line 389 "integer.m"
            MR_Word mercury__integer__Digits_50;
#line 389 "integer.m"
            MR_Integer mercury__integer__V_51_51;
#line 389 "integer.m"
            MR_Word mercury__integer__V_54_54;
#line 389 "integer.m"
            MR_Word mercury__integer__V_55_55;
#line 389 "integer.m"
            MR_Word mercury__integer__V_56_56;
#line 389 "integer.m"
            MR_Word mercury__integer__V_59_59;
#line 389 "integer.m"
            MR_Word mercury__integer__V_62_62;
#line 389 "integer.m"
            MR_Word mercury__integer__V_65_65;
#line 389 "integer.m"
            MR_Word mercury__integer__V_67_67;
#line 389 "integer.m"
            MR_Word mercury__integer__V_68_68;
#line 389 "integer.m"
            MR_Integer mercury__integer__S_73;
#line 389 "integer.m"
            MR_Word mercury__integer__Digits0_74;
#line 389 "integer.m"
            MR_Word mercury__integer__Digits_75;
#line 389 "integer.m"
            MR_Integer mercury__integer__V_76_76;

#line 397 "integer.m"
            {
#line 397 "integer.m"
              mercury__integer__V_42_42 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_43_43);
            }
#line 421 "integer.m"
            mercury__integer__S_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_42_42, (MR_Integer) 0)));
#line 421 "integer.m"
            mercury__integer__Digits0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_42_42, (MR_Integer) 1)));
#line 421 "integer.m"
            mercury__integer__V_51_51 = ((MR_Integer) 0 - mercury__integer__S_48);
#line 422 "integer.m"
            {
#line 422 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_49, &mercury__integer__Digits_50);
            }
#line 421 "integer.m"
            {
#line 421 "integer.m"
              mercury__integer__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 0) = ((MR_Box) (mercury__integer__V_51_51));
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 1) = ((MR_Box) (mercury__integer__Digits_50));
#line 421 "integer.m"
            }
#line 553 "integer.m"
            {
#line 553 "integer.m"
              mercury__integer__V_59_59 = mercury__integer__or_pairs_2_f_0(mercury__integer__Y_5, mercury__integer__V_8_8);
            }
#line 553 "integer.m"
            {
#line 553 "integer.m"
              mercury__integer__V_55_55 = mercury__integer__decap_1_f_0(mercury__integer__V_59_59);
            }
#line 604 "integer.m"
            {
#line 604 "integer.m"
              mercury__integer__V_62_62 = mercury__integer__and_pairs_2_f_0(mercury__integer__Y_5, mercury__integer__V_8_8);
            }
#line 604 "integer.m"
            {
#line 604 "integer.m"
              mercury__integer__V_56_56 = mercury__integer__decap_1_f_0(mercury__integer__V_62_62);
            }
#line 629 "integer.m"
            {
#line 629 "integer.m"
              mercury__integer__V_65_65 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__V_55_55, mercury__integer__V_56_56);
            }
#line 629 "integer.m"
            {
#line 629 "integer.m"
              mercury__integer__V_54_54 = mercury__integer__decap_1_f_0(mercury__integer__V_65_65);
            }
#line 1190 "integer.m"
            mercury__integer__V_68_68 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 397 "integer.m"
            {
#line 397 "integer.m"
              mercury__integer__V_67_67 = mercury__integer__big_plus_2_f_0(mercury__integer__V_54_54, mercury__integer__V_68_68);
            }
#line 421 "integer.m"
            mercury__integer__S_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_67_67, (MR_Integer) 0)));
#line 421 "integer.m"
            mercury__integer__Digits0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_67_67, (MR_Integer) 1)));
#line 421 "integer.m"
            mercury__integer__V_76_76 = ((MR_Integer) 0 - mercury__integer__S_73);
#line 422 "integer.m"
            {
#line 422 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_74, &mercury__integer__Digits_75);
            }
#line 421 "integer.m"
            {
#line 421 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_76_76));
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_75));
#line 421 "integer.m"
            }
#line 389 "integer.m"
          }
#line 388 "integer.m"
      }
#line 384 "integer.m"
    else
#line 393 "integer.m"
      {
#line 413 "integer.m"
        MR_Integer mercury__integer__Sign_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 413 "integer.m"
        MR_Word mercury__integer__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 413 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_77 < (MR_Integer) 0);
#line 393 "integer.m"
        if (mercury__integer__succeeded)
#line 392 "integer.m"
          {
#line 392 "integer.m"
            MR_Word mercury__integer__V_9_9;
#line 392 "integer.m"
            MR_Word mercury__integer__V_81_81;
#line 392 "integer.m"
            MR_Word mercury__integer__V_82_82 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 392 "integer.m"
            MR_Integer mercury__integer__S_87;
#line 392 "integer.m"
            MR_Word mercury__integer__Digits0_88;
#line 392 "integer.m"
            MR_Word mercury__integer__Digits_89;
#line 392 "integer.m"
            MR_Integer mercury__integer__V_90_90;

#line 397 "integer.m"
            {
#line 397 "integer.m"
              mercury__integer__V_81_81 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_82_82);
            }
#line 421 "integer.m"
            mercury__integer__S_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_81_81, (MR_Integer) 0)));
#line 421 "integer.m"
            mercury__integer__Digits0_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_81_81, (MR_Integer) 1)));
#line 421 "integer.m"
            mercury__integer__V_90_90 = ((MR_Integer) 0 - mercury__integer__S_87);
#line 422 "integer.m"
            {
#line 422 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_88, &mercury__integer__Digits_89);
            }
#line 421 "integer.m"
            {
#line 421 "integer.m"
              mercury__integer__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 0) = ((MR_Box) (mercury__integer__V_90_90));
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 1) = ((MR_Box) (mercury__integer__Digits_89));
#line 421 "integer.m"
            }
#line 392 "integer.m"
            {
#line 392 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__big_xor_not_2_f_0(mercury__integer__X_4, mercury__integer__V_9_9);
            }
#line 392 "integer.m"
          }
#line 393 "integer.m"
        else
#line 578 "integer.m"
          {
#line 578 "integer.m"
            MR_Word mercury__integer__V_93_93;

#line 578 "integer.m"
            {
#line 578 "integer.m"
              mercury__integer__V_93_93 = mercury__integer__xor_pairs_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
            }
#line 578 "integer.m"
            {
#line 578 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_93_93);
            }
#line 578 "integer.m"
          }
#line 393 "integer.m"
      }
#line 384 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 384 "integer.m"
  }
#line 156 "integer.m"
}

#line 152 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_92_47_2_f_0(
#line 152 "integer.m"
  MR_Word mercury__integer__X_4,
#line 152 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 152 "integer.m"
{
#line 371 "integer.m"
  {
#line 371 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 371 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 413 "integer.m"
    MR_Integer mercury__integer__Sign_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 413 "integer.m"
    MR_Word mercury__integer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 413 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_13 < (MR_Integer) 0);
#line 371 "integer.m"
    if (mercury__integer__succeeded)
#line 375 "integer.m"
      {
#line 413 "integer.m"
        MR_Integer mercury__integer__Sign_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 413 "integer.m"
        MR_Word mercury__integer__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 413 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_16 < (MR_Integer) 0);
#line 375 "integer.m"
        if (mercury__integer__succeeded)
#line 374 "integer.m"
          {
#line 374 "integer.m"
            MR_Word mercury__integer__V_6_6;
#line 374 "integer.m"
            MR_Word mercury__integer__V_7_7;
#line 374 "integer.m"
            MR_Word mercury__integer__V_8_8;
#line 374 "integer.m"
            MR_Word mercury__integer__V_20_20;
#line 374 "integer.m"
            MR_Word mercury__integer__V_21_21 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 374 "integer.m"
            MR_Integer mercury__integer__S_26;
#line 374 "integer.m"
            MR_Word mercury__integer__Digits0_27;
#line 374 "integer.m"
            MR_Word mercury__integer__Digits_28;
#line 374 "integer.m"
            MR_Integer mercury__integer__V_29_29;
#line 374 "integer.m"
            MR_Word mercury__integer__V_31_31;
#line 374 "integer.m"
            MR_Word mercury__integer__V_32_32;
#line 374 "integer.m"
            MR_Integer mercury__integer__S_37;
#line 374 "integer.m"
            MR_Word mercury__integer__Digits0_38;
#line 374 "integer.m"
            MR_Word mercury__integer__Digits_39;
#line 374 "integer.m"
            MR_Integer mercury__integer__V_40_40;
#line 374 "integer.m"
            MR_Word mercury__integer__V_43_43;
#line 374 "integer.m"
            MR_Word mercury__integer__V_45_45;
#line 374 "integer.m"
            MR_Word mercury__integer__V_46_46;
#line 374 "integer.m"
            MR_Integer mercury__integer__S_51;
#line 374 "integer.m"
            MR_Word mercury__integer__Digits0_52;
#line 374 "integer.m"
            MR_Word mercury__integer__Digits_53;
#line 374 "integer.m"
            MR_Integer mercury__integer__V_54_54;

#line 397 "integer.m"
            {
#line 397 "integer.m"
              mercury__integer__V_20_20 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_21_21);
            }
#line 421 "integer.m"
            mercury__integer__S_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_20_20, (MR_Integer) 0)));
#line 421 "integer.m"
            mercury__integer__Digits0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_20_20, (MR_Integer) 1)));
#line 421 "integer.m"
            mercury__integer__V_29_29 = ((MR_Integer) 0 - mercury__integer__S_26);
#line 422 "integer.m"
            {
#line 422 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_27, &mercury__integer__Digits_28);
            }
#line 421 "integer.m"
            {
#line 421 "integer.m"
              mercury__integer__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 0) = ((MR_Box) (mercury__integer__V_29_29));
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 1) = ((MR_Box) (mercury__integer__Digits_28));
#line 421 "integer.m"
            }
#line 1190 "integer.m"
            mercury__integer__V_32_32 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 397 "integer.m"
            {
#line 397 "integer.m"
              mercury__integer__V_31_31 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_32_32);
            }
#line 421 "integer.m"
            mercury__integer__S_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_31_31, (MR_Integer) 0)));
#line 421 "integer.m"
            mercury__integer__Digits0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_31_31, (MR_Integer) 1)));
#line 421 "integer.m"
            mercury__integer__V_40_40 = ((MR_Integer) 0 - mercury__integer__S_37);
#line 422 "integer.m"
            {
#line 422 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_38, &mercury__integer__Digits_39);
            }
#line 421 "integer.m"
            {
#line 421 "integer.m"
              mercury__integer__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 0) = ((MR_Box) (mercury__integer__V_40_40));
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 1) = ((MR_Box) (mercury__integer__Digits_39));
#line 421 "integer.m"
            }
#line 604 "integer.m"
            {
#line 604 "integer.m"
              mercury__integer__V_43_43 = mercury__integer__and_pairs_2_f_0(mercury__integer__V_7_7, mercury__integer__V_8_8);
            }
#line 604 "integer.m"
            {
#line 604 "integer.m"
              mercury__integer__V_6_6 = mercury__integer__decap_1_f_0(mercury__integer__V_43_43);
            }
#line 1190 "integer.m"
            mercury__integer__V_46_46 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 397 "integer.m"
            {
#line 397 "integer.m"
              mercury__integer__V_45_45 = mercury__integer__big_plus_2_f_0(mercury__integer__V_6_6, mercury__integer__V_46_46);
            }
#line 421 "integer.m"
            mercury__integer__S_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_45_45, (MR_Integer) 0)));
#line 421 "integer.m"
            mercury__integer__Digits0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_45_45, (MR_Integer) 1)));
#line 421 "integer.m"
            mercury__integer__V_54_54 = ((MR_Integer) 0 - mercury__integer__S_51);
#line 422 "integer.m"
            {
#line 422 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_52, &mercury__integer__Digits_53);
            }
#line 421 "integer.m"
            {
#line 421 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_54_54));
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_53));
#line 421 "integer.m"
            }
#line 374 "integer.m"
          }
#line 375 "integer.m"
        else
#line 376 "integer.m"
          {
#line 376 "integer.m"
            MR_Word mercury__integer__V_9_9;
#line 376 "integer.m"
            MR_Word mercury__integer__V_10_10;
#line 376 "integer.m"
            MR_Word mercury__integer__V_56_56;
#line 376 "integer.m"
            MR_Word mercury__integer__V_57_57 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 376 "integer.m"
            MR_Integer mercury__integer__S_62;
#line 376 "integer.m"
            MR_Word mercury__integer__Digits0_63;
#line 376 "integer.m"
            MR_Word mercury__integer__Digits_64;
#line 376 "integer.m"
            MR_Integer mercury__integer__V_65_65;
#line 376 "integer.m"
            MR_Word mercury__integer__V_68_68;
#line 376 "integer.m"
            MR_Word mercury__integer__V_70_70;
#line 376 "integer.m"
            MR_Word mercury__integer__V_71_71;
#line 376 "integer.m"
            MR_Integer mercury__integer__S_76;
#line 376 "integer.m"
            MR_Word mercury__integer__Digits0_77;
#line 376 "integer.m"
            MR_Word mercury__integer__Digits_78;
#line 376 "integer.m"
            MR_Integer mercury__integer__V_79_79;

#line 397 "integer.m"
            {
#line 397 "integer.m"
              mercury__integer__V_56_56 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_57_57);
            }
#line 421 "integer.m"
            mercury__integer__S_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_56_56, (MR_Integer) 0)));
#line 421 "integer.m"
            mercury__integer__Digits0_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_56_56, (MR_Integer) 1)));
#line 421 "integer.m"
            mercury__integer__V_65_65 = ((MR_Integer) 0 - mercury__integer__S_62);
#line 422 "integer.m"
            {
#line 422 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_63, &mercury__integer__Digits_64);
            }
#line 421 "integer.m"
            {
#line 421 "integer.m"
              mercury__integer__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, 0) = ((MR_Box) (mercury__integer__V_65_65));
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, 1) = ((MR_Box) (mercury__integer__Digits_64));
#line 421 "integer.m"
            }
#line 629 "integer.m"
            {
#line 629 "integer.m"
              mercury__integer__V_68_68 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__V_10_10, mercury__integer__Y_5);
            }
#line 629 "integer.m"
            {
#line 629 "integer.m"
              mercury__integer__V_9_9 = mercury__integer__decap_1_f_0(mercury__integer__V_68_68);
            }
#line 1190 "integer.m"
            mercury__integer__V_71_71 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 397 "integer.m"
            {
#line 397 "integer.m"
              mercury__integer__V_70_70 = mercury__integer__big_plus_2_f_0(mercury__integer__V_9_9, mercury__integer__V_71_71);
            }
#line 421 "integer.m"
            mercury__integer__S_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_70_70, (MR_Integer) 0)));
#line 421 "integer.m"
            mercury__integer__Digits0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_70_70, (MR_Integer) 1)));
#line 421 "integer.m"
            mercury__integer__V_79_79 = ((MR_Integer) 0 - mercury__integer__S_76);
#line 422 "integer.m"
            {
#line 422 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_77, &mercury__integer__Digits_78);
            }
#line 421 "integer.m"
            {
#line 421 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_79_79));
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_78));
#line 421 "integer.m"
            }
#line 376 "integer.m"
          }
#line 375 "integer.m"
      }
#line 371 "integer.m"
    else
#line 380 "integer.m"
      {
#line 413 "integer.m"
        MR_Integer mercury__integer__Sign_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 413 "integer.m"
        MR_Word mercury__integer__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 413 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_80 < (MR_Integer) 0);
#line 380 "integer.m"
        if (mercury__integer__succeeded)
#line 379 "integer.m"
          {
#line 379 "integer.m"
            MR_Word mercury__integer__V_11_11;
#line 379 "integer.m"
            MR_Word mercury__integer__V_12_12;
#line 379 "integer.m"
            MR_Word mercury__integer__V_84_84;
#line 379 "integer.m"
            MR_Word mercury__integer__V_85_85 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 379 "integer.m"
            MR_Integer mercury__integer__S_90;
#line 379 "integer.m"
            MR_Word mercury__integer__Digits0_91;
#line 379 "integer.m"
            MR_Word mercury__integer__Digits_92;
#line 379 "integer.m"
            MR_Integer mercury__integer__V_93_93;
#line 379 "integer.m"
            MR_Word mercury__integer__V_96_96;

#line 397 "integer.m"
            {
#line 397 "integer.m"
              mercury__integer__V_84_84 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_85_85);
            }
#line 421 "integer.m"
            mercury__integer__S_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_84_84, (MR_Integer) 0)));
#line 421 "integer.m"
            mercury__integer__Digits0_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_84_84, (MR_Integer) 1)));
#line 421 "integer.m"
            mercury__integer__V_93_93 = ((MR_Integer) 0 - mercury__integer__S_90);
#line 422 "integer.m"
            {
#line 422 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_91, &mercury__integer__Digits_92);
            }
#line 421 "integer.m"
            {
#line 421 "integer.m"
              mercury__integer__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 0) = ((MR_Box) (mercury__integer__V_93_93));
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 1) = ((MR_Box) (mercury__integer__Digits_92));
#line 421 "integer.m"
            }
#line 629 "integer.m"
            {
#line 629 "integer.m"
              mercury__integer__V_96_96 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__V_12_12, mercury__integer__X_4);
            }
#line 629 "integer.m"
            {
#line 629 "integer.m"
              mercury__integer__V_11_11 = mercury__integer__decap_1_f_0(mercury__integer__V_96_96);
            }
#line 379 "integer.m"
            {
#line 379 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__f_92_1_f_0(mercury__integer__V_11_11);
            }
#line 379 "integer.m"
          }
#line 380 "integer.m"
        else
#line 381 "integer.m"
          {
#line 381 "integer.m"
            return mercury__integer__HeadVar__3_3 = mercury__integer__big_or_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
          }
#line 380 "integer.m"
      }
#line 371 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 371 "integer.m"
  }
#line 152 "integer.m"
}

#line 148 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_47_92_2_f_0(
#line 148 "integer.m"
  MR_Word mercury__integer__X_4,
#line 148 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 148 "integer.m"
{
#line 358 "integer.m"
  {
#line 358 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 358 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 413 "integer.m"
    MR_Integer mercury__integer__Sign_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 413 "integer.m"
    MR_Word mercury__integer__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 413 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_11 < (MR_Integer) 0);
#line 358 "integer.m"
    if (mercury__integer__succeeded)
#line 362 "integer.m"
      {
#line 413 "integer.m"
        MR_Integer mercury__integer__Sign_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 413 "integer.m"
        MR_Word mercury__integer__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 413 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_14 < (MR_Integer) 0);
#line 362 "integer.m"
        if (mercury__integer__succeeded)
#line 361 "integer.m"
          {
#line 361 "integer.m"
            MR_Word mercury__integer__V_6_6;
#line 361 "integer.m"
            MR_Word mercury__integer__V_7_7;
#line 361 "integer.m"
            MR_Word mercury__integer__V_8_8;
#line 361 "integer.m"
            MR_Word mercury__integer__V_18_18;
#line 361 "integer.m"
            MR_Word mercury__integer__V_19_19 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 361 "integer.m"
            MR_Integer mercury__integer__S_24;
#line 361 "integer.m"
            MR_Word mercury__integer__Digits0_25;
#line 361 "integer.m"
            MR_Word mercury__integer__Digits_26;
#line 361 "integer.m"
            MR_Integer mercury__integer__V_27_27;
#line 361 "integer.m"
            MR_Word mercury__integer__V_29_29;
#line 361 "integer.m"
            MR_Word mercury__integer__V_30_30;
#line 361 "integer.m"
            MR_Integer mercury__integer__S_35;
#line 361 "integer.m"
            MR_Word mercury__integer__Digits0_36;
#line 361 "integer.m"
            MR_Word mercury__integer__Digits_37;
#line 361 "integer.m"
            MR_Integer mercury__integer__V_38_38;
#line 361 "integer.m"
            MR_Word mercury__integer__V_41_41;
#line 361 "integer.m"
            MR_Word mercury__integer__V_43_43;
#line 361 "integer.m"
            MR_Word mercury__integer__V_44_44;
#line 361 "integer.m"
            MR_Integer mercury__integer__S_49;
#line 361 "integer.m"
            MR_Word mercury__integer__Digits0_50;
#line 361 "integer.m"
            MR_Word mercury__integer__Digits_51;
#line 361 "integer.m"
            MR_Integer mercury__integer__V_52_52;

#line 397 "integer.m"
            {
#line 397 "integer.m"
              mercury__integer__V_18_18 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_19_19);
            }
#line 421 "integer.m"
            mercury__integer__S_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_18_18, (MR_Integer) 0)));
#line 421 "integer.m"
            mercury__integer__Digits0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_18_18, (MR_Integer) 1)));
#line 421 "integer.m"
            mercury__integer__V_27_27 = ((MR_Integer) 0 - mercury__integer__S_24);
#line 422 "integer.m"
            {
#line 422 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_25, &mercury__integer__Digits_26);
            }
#line 421 "integer.m"
            {
#line 421 "integer.m"
              mercury__integer__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 0) = ((MR_Box) (mercury__integer__V_27_27));
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 1) = ((MR_Box) (mercury__integer__Digits_26));
#line 421 "integer.m"
            }
#line 1190 "integer.m"
            mercury__integer__V_30_30 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 397 "integer.m"
            {
#line 397 "integer.m"
              mercury__integer__V_29_29 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_30_30);
            }
#line 421 "integer.m"
            mercury__integer__S_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, (MR_Integer) 0)));
#line 421 "integer.m"
            mercury__integer__Digits0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, (MR_Integer) 1)));
#line 421 "integer.m"
            mercury__integer__V_38_38 = ((MR_Integer) 0 - mercury__integer__S_35);
#line 422 "integer.m"
            {
#line 422 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_36, &mercury__integer__Digits_37);
            }
#line 421 "integer.m"
            {
#line 421 "integer.m"
              mercury__integer__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 0) = ((MR_Box) (mercury__integer__V_38_38));
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 1) = ((MR_Box) (mercury__integer__Digits_37));
#line 421 "integer.m"
            }
#line 553 "integer.m"
            {
#line 553 "integer.m"
              mercury__integer__V_41_41 = mercury__integer__or_pairs_2_f_0(mercury__integer__V_7_7, mercury__integer__V_8_8);
            }
#line 553 "integer.m"
            {
#line 553 "integer.m"
              mercury__integer__V_6_6 = mercury__integer__decap_1_f_0(mercury__integer__V_41_41);
            }
#line 1190 "integer.m"
            mercury__integer__V_44_44 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 397 "integer.m"
            {
#line 397 "integer.m"
              mercury__integer__V_43_43 = mercury__integer__big_plus_2_f_0(mercury__integer__V_6_6, mercury__integer__V_44_44);
            }
#line 421 "integer.m"
            mercury__integer__S_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_43_43, (MR_Integer) 0)));
#line 421 "integer.m"
            mercury__integer__Digits0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_43_43, (MR_Integer) 1)));
#line 421 "integer.m"
            mercury__integer__V_52_52 = ((MR_Integer) 0 - mercury__integer__S_49);
#line 422 "integer.m"
            {
#line 422 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_50, &mercury__integer__Digits_51);
            }
#line 421 "integer.m"
            {
#line 421 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_52_52));
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_51));
#line 421 "integer.m"
            }
#line 361 "integer.m"
          }
#line 362 "integer.m"
        else
#line 363 "integer.m"
          {
#line 363 "integer.m"
            MR_Word mercury__integer__V_9_9;
#line 363 "integer.m"
            MR_Word mercury__integer__V_54_54;
#line 363 "integer.m"
            MR_Word mercury__integer__V_55_55 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 363 "integer.m"
            MR_Integer mercury__integer__S_60;
#line 363 "integer.m"
            MR_Word mercury__integer__Digits0_61;
#line 363 "integer.m"
            MR_Word mercury__integer__Digits_62;
#line 363 "integer.m"
            MR_Integer mercury__integer__V_63_63;
#line 363 "integer.m"
            MR_Word mercury__integer__V_66_66;

#line 397 "integer.m"
            {
#line 397 "integer.m"
              mercury__integer__V_54_54 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_55_55);
            }
#line 421 "integer.m"
            mercury__integer__S_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_54_54, (MR_Integer) 0)));
#line 421 "integer.m"
            mercury__integer__Digits0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_54_54, (MR_Integer) 1)));
#line 421 "integer.m"
            mercury__integer__V_63_63 = ((MR_Integer) 0 - mercury__integer__S_60);
#line 422 "integer.m"
            {
#line 422 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_61, &mercury__integer__Digits_62);
            }
#line 421 "integer.m"
            {
#line 421 "integer.m"
              mercury__integer__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 0) = ((MR_Box) (mercury__integer__V_63_63));
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 1) = ((MR_Box) (mercury__integer__Digits_62));
#line 421 "integer.m"
            }
#line 629 "integer.m"
            {
#line 629 "integer.m"
              mercury__integer__V_66_66 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__Y_5, mercury__integer__V_9_9);
            }
#line 629 "integer.m"
            {
#line 629 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_66_66);
            }
#line 363 "integer.m"
          }
#line 362 "integer.m"
      }
#line 358 "integer.m"
    else
#line 367 "integer.m"
      {
#line 413 "integer.m"
        MR_Integer mercury__integer__Sign_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 413 "integer.m"
        MR_Word mercury__integer__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 413 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_67 < (MR_Integer) 0);
#line 367 "integer.m"
        if (mercury__integer__succeeded)
#line 366 "integer.m"
          {
#line 366 "integer.m"
            MR_Word mercury__integer__V_10_10;
#line 366 "integer.m"
            MR_Word mercury__integer__V_71_71;
#line 366 "integer.m"
            MR_Word mercury__integer__V_72_72 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 366 "integer.m"
            MR_Integer mercury__integer__S_77;
#line 366 "integer.m"
            MR_Word mercury__integer__Digits0_78;
#line 366 "integer.m"
            MR_Word mercury__integer__Digits_79;
#line 366 "integer.m"
            MR_Integer mercury__integer__V_80_80;
#line 366 "integer.m"
            MR_Word mercury__integer__V_83_83;

#line 397 "integer.m"
            {
#line 397 "integer.m"
              mercury__integer__V_71_71 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_72_72);
            }
#line 421 "integer.m"
            mercury__integer__S_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_71_71, (MR_Integer) 0)));
#line 421 "integer.m"
            mercury__integer__Digits0_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_71_71, (MR_Integer) 1)));
#line 421 "integer.m"
            mercury__integer__V_80_80 = ((MR_Integer) 0 - mercury__integer__S_77);
#line 422 "integer.m"
            {
#line 422 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_78, &mercury__integer__Digits_79);
            }
#line 421 "integer.m"
            {
#line 421 "integer.m"
              mercury__integer__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, 0) = ((MR_Box) (mercury__integer__V_80_80));
#line 421 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, 1) = ((MR_Box) (mercury__integer__Digits_79));
#line 421 "integer.m"
            }
#line 629 "integer.m"
            {
#line 629 "integer.m"
              mercury__integer__V_83_83 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__X_4, mercury__integer__V_10_10);
            }
#line 629 "integer.m"
            {
#line 629 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_83_83);
            }
#line 366 "integer.m"
          }
#line 367 "integer.m"
        else
#line 604 "integer.m"
          {
#line 604 "integer.m"
            MR_Word mercury__integer__V_86_86;

#line 604 "integer.m"
            {
#line 604 "integer.m"
              mercury__integer__V_86_86 = mercury__integer__and_pairs_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
            }
#line 604 "integer.m"
            {
#line 604 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_86_86);
            }
#line 604 "integer.m"
          }
#line 367 "integer.m"
      }
#line 358 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 358 "integer.m"
  }
#line 148 "integer.m"
}

#line 144 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_62_62_2_f_0(
#line 144 "integer.m"
  MR_Word mercury__integer__X_4,
#line 144 "integer.m"
  MR_Integer mercury__integer__I_5)
#line 144 "integer.m"
{
#line 349 "integer.m"
  {
#line 349 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__I_5 < (MR_Integer) 0);
#line 349 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 349 "integer.m"
    if (mercury__integer__succeeded)
#line 351 "integer.m"
      {
#line 351 "integer.m"
        MR_Integer mercury__integer__V_7_7 = ((MR_Integer) 0 - mercury__integer__I_5);

#line 351 "integer.m"
        {
#line 351 "integer.m"
          return mercury__integer__HeadVar__3_3 = mercury__integer__f_60_60_2_f_0(mercury__integer__X_4, mercury__integer__V_7_7);
        }
#line 351 "integer.m"
      }
#line 349 "integer.m"
    else
#line 354 "integer.m"
      {
#line 352 "integer.m"
        mercury__integer__succeeded = (mercury__integer__I_5 > (MR_Integer) 0);
#line 354 "integer.m"
        if (mercury__integer__succeeded)
#line 466 "integer.m"
          {
#line 417 "integer.m"
            MR_Integer mercury__integer__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 417 "integer.m"
            MR_Word mercury__integer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 417 "integer.m"
            mercury__integer__succeeded = (mercury__integer__V_13_13 == (MR_Integer) 0);
#line 417 "integer.m"
            if (mercury__integer__succeeded)
#line 417 "integer.m"
              mercury__integer__succeeded = (mercury__integer__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "integer.m"
            if (mercury__integer__succeeded)
#line 468 "integer.m"
              mercury__integer__HeadVar__3_3 = mercury__integer__X_4;
#line 466 "integer.m"
            else
#line 471 "integer.m"
              {
#line 413 "integer.m"
                MR_Integer mercury__integer__Sign_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 413 "integer.m"
                MR_Word mercury__integer__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 413 "integer.m"
                mercury__integer__succeeded = (mercury__integer__Sign_15 < (MR_Integer) 0);
#line 471 "integer.m"
                if (mercury__integer__succeeded)
#line 470 "integer.m"
                  {
#line 470 "integer.m"
                    MR_Word mercury__integer__V_11_11;
#line 470 "integer.m"
                    MR_Word mercury__integer__V_19_19;
#line 470 "integer.m"
                    MR_Word mercury__integer__V_20_20 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 470 "integer.m"
                    MR_Integer mercury__integer__S_25;
#line 470 "integer.m"
                    MR_Word mercury__integer__Digits0_26;
#line 470 "integer.m"
                    MR_Integer mercury__integer__Len_31;
#line 470 "integer.m"
                    MR_Word mercury__integer__Digits_32;
#line 470 "integer.m"
                    MR_Integer mercury__integer__Div_33;
#line 470 "integer.m"
                    MR_Word mercury__integer__V_51_51;
#line 470 "integer.m"
                    MR_Word mercury__integer__V_52_52;
#line 470 "integer.m"
                    MR_Integer mercury__integer__S_57;
#line 470 "integer.m"
                    MR_Word mercury__integer__Digits0_58;
#line 470 "integer.m"
                    MR_Word mercury__integer__Digits_59;
#line 470 "integer.m"
                    MR_Integer mercury__integer__V_60_60;

#line 397 "integer.m"
                    {
#line 397 "integer.m"
                      mercury__integer__V_19_19 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_20_20);
                    }
#line 421 "integer.m"
                    mercury__integer__S_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 0)));
#line 421 "integer.m"
                    mercury__integer__Digits0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 1)));
#line 421 "integer.m"
                    mercury__integer__Len_31 = ((MR_Integer) 0 - mercury__integer__S_25);
#line 422 "integer.m"
                    {
#line 422 "integer.m"
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_26, &mercury__integer__Digits_32);
                    }
#line 478 "integer.m"
                    {
#line 478 "integer.m"
                      mercury__integer__Div_33 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
                    }
#line 479 "integer.m"
                    mercury__integer__succeeded = (mercury__integer__Div_33 < mercury__integer__Len_31);
#line 483 "integer.m"
                    if (mercury__integer__succeeded)
#line 480 "integer.m"
                      {
#line 480 "integer.m"
                        MR_Integer mercury__integer__Mod_34;
#line 480 "integer.m"
                        MR_Word mercury__integer__V_37_37;
#line 480 "integer.m"
                        MR_Integer mercury__integer__V_38_38;
#line 480 "integer.m"
                        MR_Word mercury__integer__V_40_40;
#line 480 "integer.m"
                        MR_Integer mercury__integer__V_41_41;
#line 480 "integer.m"
                        MR_Integer mercury__integer__V_6_46;
#line 480 "integer.m"
                        MR_Integer mercury__integer__V_7_47;

#line 113 "int.opt"
                        {
#line 113 "int.opt"
                          mercury__integer__V_7_47 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
                        }
#line 112 "int.opt"
                        mercury__integer__V_6_46 = (mercury__integer__V_7_47 * (MR_Integer) 14);
#line 111 "int.opt"
                        mercury__integer__Mod_34 = (mercury__integer__I_5 - mercury__integer__V_6_46);
#line 481 "integer.m"
                        mercury__integer__V_38_38 = ((MR_Integer) 14 - mercury__integer__Mod_34);
#line 482 "integer.m"
                        mercury__integer__V_41_41 = (mercury__integer__Len_31 - mercury__integer__Div_33);
#line 482 "integer.m"
                        {
#line 482 "integer.m"
                          mercury__integer__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 482 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_40_40, 0) = ((MR_Box) (mercury__integer__V_41_41));
#line 482 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_40_40, 1) = ((MR_Box) (mercury__integer__Digits_32));
#line 482 "integer.m"
                        }
#line 481 "integer.m"
                        {
#line 481 "integer.m"
                          mercury__integer__V_37_37 = mercury__integer__rightshift_4_f_0(mercury__integer__Mod_34, mercury__integer__V_38_38, mercury__integer__V_40_40, (MR_Integer) 0);
                        }
#line 481 "integer.m"
                        {
#line 481 "integer.m"
                          mercury__integer__V_11_11 = mercury__integer__decap_1_f_0(mercury__integer__V_37_37);
                        }
#line 480 "integer.m"
                      }
#line 483 "integer.m"
                    else
#line 1188 "integer.m"
                      {
#line 1188 "integer.m"
                        MR_Word mercury__integer__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1188 "integer.m"
                        mercury__integer__V_11_11 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1188 "integer.m"
                      }
#line 1190 "integer.m"
                    mercury__integer__V_52_52 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 397 "integer.m"
                    {
#line 397 "integer.m"
                      mercury__integer__V_51_51 = mercury__integer__big_plus_2_f_0(mercury__integer__V_11_11, mercury__integer__V_52_52);
                    }
#line 421 "integer.m"
                    mercury__integer__S_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_51_51, (MR_Integer) 0)));
#line 421 "integer.m"
                    mercury__integer__Digits0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_51_51, (MR_Integer) 1)));
#line 421 "integer.m"
                    mercury__integer__V_60_60 = ((MR_Integer) 0 - mercury__integer__S_57);
#line 422 "integer.m"
                    {
#line 422 "integer.m"
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_58, &mercury__integer__Digits_59);
                    }
#line 421 "integer.m"
                    {
#line 421 "integer.m"
                      mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_60_60));
#line 421 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_59));
#line 421 "integer.m"
                    }
#line 470 "integer.m"
                  }
#line 471 "integer.m"
                else
#line 477 "integer.m"
                  {
#line 477 "integer.m"
                    MR_Integer mercury__integer__Len_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 477 "integer.m"
                    MR_Word mercury__integer__Digits_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));
#line 477 "integer.m"
                    MR_Integer mercury__integer__Div_65;

#line 478 "integer.m"
                    {
#line 478 "integer.m"
                      mercury__integer__Div_65 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
                    }
#line 479 "integer.m"
                    mercury__integer__succeeded = (mercury__integer__Div_65 < mercury__integer__Len_63);
#line 483 "integer.m"
                    if (mercury__integer__succeeded)
#line 480 "integer.m"
                      {
#line 480 "integer.m"
                        MR_Integer mercury__integer__Mod_66;
#line 480 "integer.m"
                        MR_Word mercury__integer__V_69_69;
#line 480 "integer.m"
                        MR_Integer mercury__integer__V_70_70;
#line 480 "integer.m"
                        MR_Word mercury__integer__V_72_72;
#line 480 "integer.m"
                        MR_Integer mercury__integer__V_73_73;
#line 480 "integer.m"
                        MR_Integer mercury__integer__V_6_78;
#line 480 "integer.m"
                        MR_Integer mercury__integer__V_7_79;

#line 113 "int.opt"
                        {
#line 113 "int.opt"
                          mercury__integer__V_7_79 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
                        }
#line 112 "int.opt"
                        mercury__integer__V_6_78 = (mercury__integer__V_7_79 * (MR_Integer) 14);
#line 111 "int.opt"
                        mercury__integer__Mod_66 = (mercury__integer__I_5 - mercury__integer__V_6_78);
#line 481 "integer.m"
                        mercury__integer__V_70_70 = ((MR_Integer) 14 - mercury__integer__Mod_66);
#line 482 "integer.m"
                        mercury__integer__V_73_73 = (mercury__integer__Len_63 - mercury__integer__Div_65);
#line 482 "integer.m"
                        {
#line 482 "integer.m"
                          mercury__integer__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 482 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_72_72, 0) = ((MR_Box) (mercury__integer__V_73_73));
#line 482 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_72_72, 1) = ((MR_Box) (mercury__integer__Digits_64));
#line 482 "integer.m"
                        }
#line 481 "integer.m"
                        {
#line 481 "integer.m"
                          mercury__integer__V_69_69 = mercury__integer__rightshift_4_f_0(mercury__integer__Mod_66, mercury__integer__V_70_70, mercury__integer__V_72_72, (MR_Integer) 0);
                        }
#line 481 "integer.m"
                        {
#line 481 "integer.m"
                          return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_69_69);
                        }
#line 480 "integer.m"
                      }
#line 483 "integer.m"
                    else
#line 1188 "integer.m"
                      {
#line 1188 "integer.m"
                        MR_Word mercury__integer__V_81_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1188 "integer.m"
                        mercury__integer__HeadVar__3_3 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1188 "integer.m"
                      }
#line 477 "integer.m"
                  }
#line 471 "integer.m"
              }
#line 466 "integer.m"
          }
#line 354 "integer.m"
        else
#line 355 "integer.m"
          mercury__integer__HeadVar__3_3 = mercury__integer__X_4;
#line 354 "integer.m"
      }
#line 349 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 349 "integer.m"
  }
#line 144 "integer.m"
}

#line 139 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_60_60_2_f_0(
#line 139 "integer.m"
  MR_Word mercury__integer__X_4,
#line 139 "integer.m"
  MR_Integer mercury__integer__I_5)
#line 139 "integer.m"
{
#line 340 "integer.m"
  {
#line 340 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__I_5 > (MR_Integer) 0);
#line 340 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 340 "integer.m"
    if (mercury__integer__succeeded)
#line 342 "integer.m"
      {
#line 342 "integer.m"
        return mercury__integer__HeadVar__3_3 = mercury__integer__big_left_shift_2_f_0(mercury__integer__X_4, mercury__integer__I_5);
      }
#line 340 "integer.m"
    else
#line 345 "integer.m"
      {
#line 343 "integer.m"
        mercury__integer__succeeded = (mercury__integer__I_5 < (MR_Integer) 0);
#line 345 "integer.m"
        if (mercury__integer__succeeded)
#line 344 "integer.m"
          {
#line 344 "integer.m"
            MR_Integer mercury__integer__V_8_8 = ((MR_Integer) 0 - mercury__integer__I_5);

#line 344 "integer.m"
            {
#line 344 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__f_62_62_2_f_0(mercury__integer__X_4, mercury__integer__V_8_8);
            }
#line 344 "integer.m"
          }
#line 345 "integer.m"
        else
#line 346 "integer.m"
          mercury__integer__HeadVar__3_3 = mercury__integer__X_4;
#line 345 "integer.m"
      }
#line 340 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 340 "integer.m"
  }
#line 139 "integer.m"
}

#line 133 "integer.m"
void MR_CALL 
mercury__integer__divide_with_rem_4_p_0(
#line 133 "integer.m"
  MR_Word mercury__integer__X_5,
#line 133 "integer.m"
  MR_Word mercury__integer__Y_6,
#line 133 "integer.m"
  MR_Word * mercury__integer__Quotient_7,
#line 133 "integer.m"
  MR_Word * mercury__integer__Remainder_8)
#line 133 "integer.m"
{
#line 338 "integer.m"
  {
#line 338 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 338 "integer.m"
    {
#line 338 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_5, mercury__integer__Y_6, mercury__integer__Quotient_7, mercury__integer__Remainder_8);
#line 338 "integer.m"
      return;
    }
#line 338 "integer.m"
  }
#line 133 "integer.m"
}

#line 128 "integer.m"
MR_Word MR_CALL 
mercury__integer__mod_2_f_0(
#line 128 "integer.m"
  MR_Word mercury__integer__X_4,
#line 128 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 128 "integer.m"
{
#line 335 "integer.m"
  {
#line 335 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 335 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 335 "integer.m"
    {
#line 335 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__big_mod_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
#line 335 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 335 "integer.m"
  }
#line 128 "integer.m"
}

#line 123 "integer.m"
MR_Word MR_CALL 
mercury__integer__rem_2_f_0(
#line 123 "integer.m"
  MR_Word mercury__integer__X_4,
#line 123 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 123 "integer.m"
{
#line 442 "integer.m"
  {
#line 442 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 442 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 442 "integer.m"
    MR_Word mercury__integer___Quot_9;

#line 442 "integer.m"
    {
#line 442 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer___Quot_9, &mercury__integer__HeadVar__3_3);
    }
#line 442 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 442 "integer.m"
  }
#line 123 "integer.m"
}

#line 118 "integer.m"
MR_Word MR_CALL 
mercury__integer__div_2_f_0(
#line 118 "integer.m"
  MR_Word mercury__integer__X_4,
#line 118 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 118 "integer.m"
{
#line 329 "integer.m"
  {
#line 329 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 329 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 329 "integer.m"
    {
#line 329 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__big_div_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
#line 329 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 329 "integer.m"
  }
#line 118 "integer.m"
}

#line 113 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_47_47_2_f_0(
#line 113 "integer.m"
  MR_Word mercury__integer__X_4,
#line 113 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 113 "integer.m"
{
#line 437 "integer.m"
  {
#line 437 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 437 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 437 "integer.m"
    MR_Word mercury__integer___Rem_9;

#line 437 "integer.m"
    {
#line 437 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer__HeadVar__3_3, &mercury__integer___Rem_9);
    }
#line 437 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 437 "integer.m"
  }
#line 113 "integer.m"
}

#line 108 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_times_2_f_0(
#line 108 "integer.m"
  MR_Word mercury__integer__X_4,
#line 108 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 108 "integer.m"
{
#line 327 "integer.m"
  {
#line 327 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 327 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 327 "integer.m"
    {
#line 327 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__big_mul_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
#line 327 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 327 "integer.m"
  }
#line 108 "integer.m"
}

#line 104 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_minus_2_f_0(
#line 104 "integer.m"
  MR_Word mercury__integer__X_4,
#line 104 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 104 "integer.m"
{
#line 325 "integer.m"
  {
#line 325 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 325 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 325 "integer.m"
    MR_Word mercury__integer__V_6_6;
#line 325 "integer.m"
    MR_Integer mercury__integer__S_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 325 "integer.m"
    MR_Word mercury__integer__Digits0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
#line 325 "integer.m"
    MR_Word mercury__integer__Digits_9;
#line 325 "integer.m"
    MR_Integer mercury__integer__V_10_10 = ((MR_Integer) 0 - mercury__integer__S_7);

#line 422 "integer.m"
    {
#line 422 "integer.m"
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_8, &mercury__integer__Digits_9);
    }
#line 421 "integer.m"
    {
#line 421 "integer.m"
      mercury__integer__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 0) = ((MR_Box) (mercury__integer__V_10_10));
#line 421 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 1) = ((MR_Box) (mercury__integer__Digits_9));
#line 421 "integer.m"
    }
#line 325 "integer.m"
    {
#line 325 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_6_6);
    }
#line 325 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 325 "integer.m"
  }
#line 104 "integer.m"
}

#line 100 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_plus_2_f_0(
#line 100 "integer.m"
  MR_Word mercury__integer__X_4,
#line 100 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 100 "integer.m"
{
#line 323 "integer.m"
  {
#line 323 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 323 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 323 "integer.m"
    {
#line 323 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
#line 323 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 323 "integer.m"
  }
#line 100 "integer.m"
}

#line 96 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_minus_1_f_0(
#line 96 "integer.m"
  MR_Word mercury__integer__X_3)
#line 96 "integer.m"
{
#line 421 "integer.m"
  {
#line 421 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 421 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;
#line 421 "integer.m"
    MR_Integer mercury__integer__S_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_3, (MR_Integer) 0)));
#line 421 "integer.m"
    MR_Word mercury__integer__Digits0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_3, (MR_Integer) 1)));
#line 421 "integer.m"
    MR_Word mercury__integer__Digits_6;
#line 421 "integer.m"
    MR_Integer mercury__integer__V_7_7 = ((MR_Integer) 0 - mercury__integer__S_4);

#line 422 "integer.m"
    {
#line 422 "integer.m"
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_5, &mercury__integer__Digits_6);
    }
#line 421 "integer.m"
    {
#line 421 "integer.m"
      mercury__integer__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__V_7_7));
#line 421 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__Digits_6));
#line 421 "integer.m"
    }
#line 421 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 421 "integer.m"
  }
#line 96 "integer.m"
}

#line 92 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_plus_1_f_0(
#line 92 "integer.m"
  MR_Word mercury__integer__X_3)
#line 92 "integer.m"
{
#line 319 "integer.m"
  {
#line 319 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 319 "integer.m"
    MR_Word mercury__integer__X_2 = mercury__integer__X_3;

#line 319 "integer.m"
    return mercury__integer__X_2;
#line 319 "integer.m"
  }
#line 92 "integer.m"
}

#line 88 "integer.m"
MR_Word MR_CALL 
mercury__integer__det_from_base_string_2_f_0(
#line 88 "integer.m"
  MR_Integer mercury__integer__Base_4,
#line 88 "integer.m"
  MR_String mercury__integer__String_5)
#line 88 "integer.m"
{
#line 1449 "integer.m"
  {
#line 1449 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1449 "integer.m"
    MR_Word mercury__integer__Integer_6;
#line 1449 "integer.m"
    MR_Word mercury__integer__Integer0_7;

#line 1447 "integer.m"
    {
#line 1447 "integer.m"
      mercury__integer__succeeded = mercury__integer__from_base_string_3_p_0(mercury__integer__Base_4, mercury__integer__String_5, &mercury__integer__Integer0_7);
    }
#line 1449 "integer.m"
    if (mercury__integer__succeeded)
#line 1448 "integer.m"
      mercury__integer__Integer_6 = mercury__integer__Integer0_7;
#line 1449 "integer.m"
    else
#line 1450 "integer.m"
      {
#line 1450 "integer.m"
        {
#line 1450 "integer.m"
          mercury__require__error_1_p_0((MR_String) "integer.det_from_base_string: conversion failed");
        }
#line 1450 "integer.m"
      }
#line 1449 "integer.m"
    return mercury__integer__Integer_6;
#line 1449 "integer.m"
  }
#line 88 "integer.m"
}

#line 83 "integer.m"
MR_bool MR_CALL 
mercury__integer__from_base_string_2_f_0(
#line 83 "integer.m"
  MR_Integer mercury__integer__Base_4,
#line 83 "integer.m"
  MR_String mercury__integer__String_5,
#line 83 "integer.m"
  MR_Word * mercury__integer__Integer_6)
#line 83 "integer.m"
{
#line 1417 "integer.m"
  {
#line 1417 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 1417 "integer.m"
    {
#line 1417 "integer.m"
      return mercury__integer__succeeded = mercury__integer__from_base_string_3_p_0(mercury__integer__Base_4, mercury__integer__String_5, mercury__integer__Integer_6);
    }
#line 1417 "integer.m"
    return mercury__integer__succeeded;
#line 1417 "integer.m"
  }
#line 83 "integer.m"
}

#line 81 "integer.m"
MR_bool MR_CALL 
mercury__integer__from_base_string_3_p_0(
#line 81 "integer.m"
  MR_Integer mercury__integer__Base_4,
#line 81 "integer.m"
  MR_String mercury__integer__String_5,
#line 81 "integer.m"
  MR_Word * mercury__integer__Integer_6)
#line 81 "integer.m"
{
#line 1419 "integer.m"
  {
#line 1419 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1419 "integer.m"
    MR_Char mercury__integer__Char_7;
#line 1419 "integer.m"
    MR_Integer mercury__integer__Len_8;
#line 1419 "integer.m"
    MR_Integer mercury__integer__Len_7_40;

#line 250 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__String_5 ;
		{
#line 250 "string.opt"

    Length = strlen(Str);

#line 14036 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__Len_7_40  = Length;
#line 250 "string.opt"
}
#line 778 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__integer__Len_7_40 ;
		{
#line 778 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 14065 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 778 "string.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 1419 "integer.m"
    if (mercury__integer__succeeded)
#line 1419 "integer.m"
      {
#line 167 "string.opt"
        {
#line 167 "string.opt"
          mercury__string__unsafe_index_3_p_0(mercury__integer__String_5, (MR_Integer) 0, &mercury__integer__Char_7);
        }
#line 250 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__String_5 ;
		{
#line 250 "string.opt"

    Length = strlen(Str);

#line 14096 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__Len_8  = Length;
#line 250 "string.opt"
}
#line 1422 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Char_7 == (MR_Char) 45);
#line 1427 "integer.m"
        if (mercury__integer__succeeded)
#line 1423 "integer.m"
          {
#line 1423 "integer.m"
            MR_Word mercury__integer__N_9;
#line 1423 "integer.m"
            MR_Integer mercury__integer__V_13_13;
#line 1423 "integer.m"
            MR_Word mercury__integer__V_14_14;
#line 1423 "integer.m"
            MR_Integer mercury__integer__V_45_45;
#line 1423 "integer.m"
            MR_Word mercury__integer__V_46_46;
#line 1423 "integer.m"
            MR_Integer mercury__integer__Start_12_53;
#line 1423 "integer.m"
            MR_Integer mercury__integer__End_13_55;
#line 1423 "integer.m"
            MR_Integer mercury__integer__V_17_56;
#line 1423 "integer.m"
            MR_Integer mercury__integer__S_73;
#line 1423 "integer.m"
            MR_Word mercury__integer__Digits0_74;
#line 1423 "integer.m"
            MR_Word mercury__integer__Digits_75;
#line 1423 "integer.m"
            MR_Integer mercury__integer__V_76_76;
#line 618 "string.opt"
            MR_Integer mercury__integer__V_16_54;

#line 1423 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Len_8 > (MR_Integer) 1);
#line 1423 "integer.m"
            if (mercury__integer__succeeded)
#line 1423 "integer.m"
              {
#line 1424 "integer.m"
                mercury__integer__V_13_13 = (MR_Integer) 1;
#line 1188 "integer.m"
                mercury__integer__V_45_45 = (MR_Integer) 0;
#line 1188 "integer.m"
                mercury__integer__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "string.opt"
                mercury__integer__V_16_54 = (MR_Integer) 0;
#line 1188 "integer.m"
                mercury__integer__V_14_14 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 79 "int.opt"
                mercury__integer__Start_12_53 = mercury__integer__V_13_13;
#line 250 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__String_5 ;
		{
#line 250 "string.opt"

    Length = strlen(Str);

#line 14167 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_17_56  = Length;
#line 250 "string.opt"
}
#line 85 "int.opt"
                mercury__integer__succeeded = (mercury__integer__Len_8 < mercury__integer__V_17_56);
#line 88 "int.opt"
                if (mercury__integer__succeeded)
#line 87 "int.opt"
                  mercury__integer__End_13_55 = mercury__integer__Len_8;
#line 88 "int.opt"
                else
#line 89 "int.opt"
                  mercury__integer__End_13_55 = mercury__integer__V_17_56;
#line 621 "string.opt"
                {
#line 621 "string.opt"
                  mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__Base_4, mercury__integer__String_5, mercury__integer__Start_12_53, mercury__integer__End_13_55, mercury__integer__V_14_14, &mercury__integer__N_9);
                }
#line 1423 "integer.m"
                if (mercury__integer__succeeded)
#line 1423 "integer.m"
                  {
#line 421 "integer.m"
                    mercury__integer__S_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__N_9, (MR_Integer) 0)));
#line 421 "integer.m"
                    mercury__integer__Digits0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__N_9, (MR_Integer) 1)));
#line 421 "integer.m"
                    mercury__integer__V_76_76 = ((MR_Integer) 0 - mercury__integer__S_73);
#line 422 "integer.m"
                    {
#line 422 "integer.m"
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_74, &mercury__integer__Digits_75);
                    }
#line 421 "integer.m"
                    {
#line 421 "integer.m"
                      MR_Word base;
#line 421 "integer.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "integer.m"
                      *mercury__integer__Integer_6 = base;
#line 421 "integer.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__integer__V_76_76));
#line 421 "integer.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__Digits_75));
#line 421 "integer.m"
                    }
#line 421 "integer.m"
                    mercury__integer__succeeded = MR_TRUE;
#line 1423 "integer.m"
                  }
#line 1423 "integer.m"
              }
#line 1423 "integer.m"
          }
#line 1427 "integer.m"
        else
#line 1432 "integer.m"
          {
#line 1427 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Char_7 == (MR_Char) 43);
#line 1432 "integer.m"
            if (mercury__integer__succeeded)
#line 1428 "integer.m"
              {
#line 1428 "integer.m"
                MR_Integer mercury__integer__V_17_17;
#line 1428 "integer.m"
                MR_Word mercury__integer__V_18_18;
#line 1428 "integer.m"
                MR_Integer mercury__integer__V_77_77;
#line 1428 "integer.m"
                MR_Word mercury__integer__V_78_78;

#line 1428 "integer.m"
                mercury__integer__succeeded = (mercury__integer__Len_8 > (MR_Integer) 1);
#line 1428 "integer.m"
                if (mercury__integer__succeeded)
#line 1428 "integer.m"
                  {
#line 1429 "integer.m"
                    mercury__integer__V_17_17 = (MR_Integer) 1;
#line 1188 "integer.m"
                    mercury__integer__V_77_77 = (MR_Integer) 0;
#line 1188 "integer.m"
                    mercury__integer__V_78_78 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1188 "integer.m"
                    mercury__integer__V_18_18 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1429 "integer.m"
                    {
#line 1429 "integer.m"
                      return mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__Base_4, mercury__integer__String_5, mercury__integer__V_17_17, mercury__integer__Len_8, mercury__integer__V_18_18, mercury__integer__Integer_6);
                    }
#line 1428 "integer.m"
                  }
#line 1428 "integer.m"
              }
#line 1432 "integer.m"
            else
#line 1434 "integer.m"
              {
#line 1434 "integer.m"
                MR_Word mercury__integer__V_21_21 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1434 "integer.m"
                MR_Word mercury__integer__V_80_80 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1433 "integer.m"
                {
#line 1433 "integer.m"
                  return mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__Base_4, mercury__integer__String_5, (MR_Integer) 0, mercury__integer__Len_8, mercury__integer__V_21_21, mercury__integer__Integer_6);
                }
#line 1434 "integer.m"
              }
#line 1432 "integer.m"
          }
#line 1419 "integer.m"
      }
#line 1419 "integer.m"
    return mercury__integer__succeeded;
#line 1419 "integer.m"
  }
#line 81 "integer.m"
}

#line 73 "integer.m"
MR_Word MR_CALL 
mercury__integer__det_from_string_1_f_0(
#line 73 "integer.m"
  MR_String mercury__integer__S_3)
#line 73 "integer.m"
{
#line 1207 "integer.m"
  {
#line 1207 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1207 "integer.m"
    MR_Word mercury__integer__I_4;
#line 1207 "integer.m"
    MR_Word mercury__integer__IPrime_5;
#line 1200 "integer.m"
    MR_Word mercury__integer__Cs_9;

#line 1201 "integer.m"
    {
#line 1201 "integer.m"
      mercury__string__to_char_list_2_p_0(mercury__integer__S_3, &mercury__integer__Cs_9);
    }
#line 1202 "integer.m"
    {
#line 1202 "integer.m"
      mercury__integer__succeeded = mercury__integer__string_to_integer_1_f_0(mercury__integer__Cs_9, &mercury__integer__IPrime_5);
    }
#line 1207 "integer.m"
    if (mercury__integer__succeeded)
#line 1206 "integer.m"
      mercury__integer__I_4 = mercury__integer__IPrime_5;
#line 1207 "integer.m"
    else
#line 1208 "integer.m"
      {
#line 1208 "integer.m"
        {
#line 1208 "integer.m"
          mercury__require__error_1_p_0((MR_String) "integer.det_from_string: conversion failed");
        }
#line 1208 "integer.m"
      }
#line 1207 "integer.m"
    return mercury__integer__I_4;
#line 1207 "integer.m"
  }
#line 73 "integer.m"
}

#line 68 "integer.m"
MR_bool MR_CALL 
mercury__integer__from_string_1_f_0(
#line 68 "integer.m"
  MR_String mercury__integer__S_3,
#line 68 "integer.m"
  MR_Word * mercury__integer__Big_4)
#line 68 "integer.m"
{
#line 1200 "integer.m"
  {
#line 1200 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1200 "integer.m"
    MR_Word mercury__integer__Cs_7;

#line 1201 "integer.m"
    {
#line 1201 "integer.m"
      mercury__string__to_char_list_2_p_0(mercury__integer__S_3, &mercury__integer__Cs_7);
    }
#line 1202 "integer.m"
    {
#line 1202 "integer.m"
      return mercury__integer__succeeded = mercury__integer__string_to_integer_1_f_0(mercury__integer__Cs_7, mercury__integer__Big_4);
    }
#line 1200 "integer.m"
    return mercury__integer__succeeded;
#line 1200 "integer.m"
  }
#line 68 "integer.m"
}

#line 66 "integer.m"
MR_bool MR_CALL 
mercury__integer__from_string_2_p_0(
#line 66 "integer.m"
  MR_String mercury__integer__S_3,
#line 66 "integer.m"
  MR_Word * mercury__integer__Big_4)
#line 66 "integer.m"
{
#line 1200 "integer.m"
  {
#line 1200 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1200 "integer.m"
    MR_Word mercury__integer__Cs_5;

#line 1201 "integer.m"
    {
#line 1201 "integer.m"
      mercury__string__to_char_list_2_p_0(mercury__integer__S_3, &mercury__integer__Cs_5);
    }
#line 1202 "integer.m"
    {
#line 1202 "integer.m"
      return mercury__integer__succeeded = mercury__integer__string_to_integer_1_f_0(mercury__integer__Cs_5, mercury__integer__Big_4);
    }
#line 1200 "integer.m"
    return mercury__integer__succeeded;
#line 1200 "integer.m"
  }
#line 66 "integer.m"
}

#line 60 "integer.m"
MR_String MR_CALL 
mercury__integer__to_base_string_2_f_0(
#line 60 "integer.m"
  MR_Word mercury__integer__Integer_4,
#line 60 "integer.m"
  MR_Integer mercury__integer__Base_5)
#line 60 "integer.m"
{
#line 1251 "integer.m"
  {
#line 1251 "integer.m"
    MR_bool mercury__integer__succeeded = ((MR_Integer) 2 <= mercury__integer__Base_5);
#line 1251 "integer.m"
    MR_String mercury__integer__String_6;
#line 1251 "integer.m"
    MR_Word mercury__integer__PrintBase_7;
#line 1251 "integer.m"
    MR_Integer mercury__integer__Sign_8;
#line 1251 "integer.m"
    MR_Word mercury__integer__Digits_9;
#line 1251 "integer.m"
    MR_Integer mercury__integer__V_14_14;
#line 1252 "integer.m"
    MR_Integer mercury__integer__V_12_12;

#line 1252 "integer.m"
    if (mercury__integer__succeeded)
#line 1252 "integer.m"
      {
#line 1252 "integer.m"
        mercury__integer__V_12_12 = (MR_Integer) 36;
#line 1252 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Base_5 <= mercury__integer__V_12_12);
#line 1252 "integer.m"
      }
#line 1254 "integer.m"
    if (mercury__integer__succeeded)
#line 1253 "integer.m"
      {
#line 1253 "integer.m"
      }
#line 1254 "integer.m"
    else
#line 1255 "integer.m"
      {
#line 1255 "integer.m"
        {
#line 1255 "integer.m"
          mercury__require__error_1_p_0((MR_String) "integer.to_base_string: invalid base");
        }
#line 1255 "integer.m"
      }
#line 92 "int.opt"
    {
#line 92 "int.opt"
      mercury__int__pow_3_p_0(mercury__integer__Base_5, (MR_Integer) 3, &mercury__integer__V_14_14);
    }
#line 1257 "integer.m"
    mercury__integer__PrintBase_7 = (MR_Word) mercury__integer__V_14_14;
#line 1258 "integer.m"
    mercury__integer__Sign_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, (MR_Integer) 0)));
#line 1258 "integer.m"
    mercury__integer__Digits_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, (MR_Integer) 1)));
#line 1259 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_8 < (MR_Integer) 0);
#line 1262 "integer.m"
    if (mercury__integer__succeeded)
#line 1260 "integer.m"
      {
#line 1260 "integer.m"
        MR_Word mercury__integer__AbsDigits_10;
#line 1260 "integer.m"
        MR_String mercury__integer__V_18_18;

#line 1260 "integer.m"
        {
#line 1260 "integer.m"
          mercury__integer__neg_list_2_p_0(mercury__integer__Digits_9, &mercury__integer__AbsDigits_10);
        }
#line 1268 "integer.m"
        if ((mercury__integer__AbsDigits_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1268 "integer.m"
          mercury__integer__V_18_18 = (MR_String) "0";
#line 1268 "integer.m"
        else
#line 1269 "integer.m"
          {
#line 1269 "integer.m"
            MR_Word mercury__integer__DigitsInPrintBase_31;
#line 1269 "integer.m"
            MR_Word mercury__integer__V_36_36;
#line 1269 "integer.m"
            MR_Word mercury__integer__V_37_37;
#line 1269 "integer.m"
            MR_Word mercury__integer__V_46_46 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1269 "integer.m"
            MR_Word mercury__integer__V_48_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1272 "integer.m"
            MR_Integer mercury__integer__V_30_30;

#line 1328 "integer.m"
            {
#line 1328 "integer.m"
              mercury__integer__V_36_36 = mercury__integer__printbase_pos_int_to_digits_2_3_f_0(mercury__integer__PrintBase_7, (MR_Integer) 16384, mercury__integer__V_46_46);
            }
#line 1287 "integer.m"
            {
#line 1287 "integer.m"
              mercury__integer__V_37_37 = mercury__integer__printbase_rep_1_4_f_0(mercury__integer__PrintBase_7, mercury__integer__AbsDigits_10, mercury__integer__V_36_36, mercury__integer__V_46_46);
            }
#line 1272 "integer.m"
            mercury__integer__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_37_37, (MR_Integer) 0)));
#line 1272 "integer.m"
            mercury__integer__DigitsInPrintBase_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_37_37, (MR_Integer) 1)));
#line 1278 "integer.m"
            if ((mercury__integer__DigitsInPrintBase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1279 "integer.m"
              {
#line 1280 "integer.m"
                {
#line 1280 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.digits_to_string\'/3", (MR_String) "empty list");
                }
#line 1279 "integer.m"
              }
#line 1278 "integer.m"
            else
#line 1274 "integer.m"
              {
#line 1274 "integer.m"
                MR_Integer mercury__integer__Head_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__DigitsInPrintBase_31, (MR_Integer) 0)));
#line 1274 "integer.m"
                MR_Word mercury__integer__Tail_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__DigitsInPrintBase_31, (MR_Integer) 1)));
#line 1274 "integer.m"
                MR_String mercury__integer__SHead_34;
#line 1274 "integer.m"
                MR_Word mercury__integer__Ss_35;
#line 1274 "integer.m"
                MR_Word mercury__integer__V_42_42;
#line 1274 "integer.m"
                MR_Word mercury__integer__V_43_43;

#line 1275 "integer.m"
                {
#line 1275 "integer.m"
                  mercury__string__int_to_base_string_3_p_0(mercury__integer__Head_32, mercury__integer__Base_5, &mercury__integer__SHead_34);
                }
#line 1276 "integer.m"
                mercury__integer__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1276 "integer.m"
                {
#line 1276 "integer.m"
                  mercury__integer__digits_to_strings_4_p_0(mercury__integer__Base_5, mercury__integer__Tail_33, &mercury__integer__Ss_35, mercury__integer__V_42_42);
                }
#line 1277 "integer.m"
                {
#line 1277 "integer.m"
                  mercury__integer__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1277 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_43_43, 0) = ((MR_Box) (mercury__integer__SHead_34));
#line 1277 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_43_43, 1) = ((MR_Box) (mercury__integer__Ss_35));
#line 1277 "integer.m"
                }
#line 419 "string.opt"
                {
#line 419 "string.opt"
                  mercury__integer__V_18_18 = mercury__string__append_list_1_f_0(mercury__integer__V_43_43);
                }
#line 1274 "integer.m"
              }
#line 1269 "integer.m"
          }
#line 415 "string.opt"
        {
#line 415 "string.opt"
          mercury__string__append_3_p_2((MR_String) "-", mercury__integer__V_18_18, &mercury__integer__String_6);
        }
#line 1260 "integer.m"
      }
#line 1262 "integer.m"
    else
#line 1263 "integer.m"
      {
#line 1263 "integer.m"
        return mercury__integer__String_6 = mercury__integer__digits_to_string_3_f_0(mercury__integer__Base_5, mercury__integer__PrintBase_7, mercury__integer__Digits_9);
      }
#line 1251 "integer.m"
    return mercury__integer__String_6;
#line 1251 "integer.m"
  }
#line 60 "integer.m"
}

#line 51 "integer.m"
MR_String MR_CALL 
mercury__integer__to_string_1_f_0(
#line 51 "integer.m"
  MR_Word mercury__integer__Integer_3)
#line 51 "integer.m"
{
#line 1249 "integer.m"
  {
#line 1249 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1249 "integer.m"
    MR_String mercury__integer__HeadVar__2_2;

#line 1249 "integer.m"
    {
#line 1249 "integer.m"
      return mercury__integer__HeadVar__2_2 = mercury__integer__to_base_string_2_f_0(mercury__integer__Integer_3, (MR_Integer) 10);
    }
#line 1249 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 1249 "integer.m"
  }
#line 51 "integer.m"
}

#line 47 "integer.m"
MR_Word MR_CALL 
mercury__integer__integer_1_f_0(
#line 47 "integer.m"
  MR_Integer mercury__integer__N_3)
#line 47 "integer.m"
{
#line 697 "integer.m"
  {
#line 697 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 697 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;

#line 697 "integer.m"
    {
#line 697 "integer.m"
      return mercury__integer__HeadVar__2_2 = mercury__integer__int_to_integer_1_f_0(mercury__integer__N_3);
    }
#line 697 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 697 "integer.m"
  }
#line 47 "integer.m"
}

#line 43 "integer.m"
MR_bool MR_CALL 
mercury__integer__f_greater_or_equal_2_p_0(
#line 43 "integer.m"
  MR_Word mercury__integer__X_3,
#line 43 "integer.m"
  MR_Word mercury__integer__Y_4)
#line 43 "integer.m"
{
#line 315 "integer.m"
  {
#line 315 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 315 "integer.m"
    MR_Word mercury__integer__C_5;

#line 661 "integer.m"
    {
#line 661 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__X_3, mercury__integer__Y_4);
    }
#line 317 "integer.m"
    if ((mercury__integer__C_5 == (MR_Integer) 0))
#line 317 "integer.m"
      mercury__integer__succeeded = MR_TRUE;
#line 317 "integer.m"
    else
#line 317 "integer.m"
    if ((mercury__integer__C_5 == (MR_Integer) 2))
#line 317 "integer.m"
      mercury__integer__succeeded = MR_TRUE;
#line 317 "integer.m"
    else
#line 317 "integer.m"
      mercury__integer__succeeded = MR_FALSE;
#line 315 "integer.m"
    return mercury__integer__succeeded;
#line 315 "integer.m"
  }
#line 43 "integer.m"
}

#line 39 "integer.m"
MR_bool MR_CALL 
mercury__integer__f_less_or_equal_2_p_0(
#line 39 "integer.m"
  MR_Word mercury__integer__X_3,
#line 39 "integer.m"
  MR_Word mercury__integer__Y_4)
#line 39 "integer.m"
{
#line 311 "integer.m"
  {
#line 311 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 311 "integer.m"
    MR_Word mercury__integer__C_5;

#line 661 "integer.m"
    {
#line 661 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__X_3, mercury__integer__Y_4);
    }
#line 313 "integer.m"
    if ((mercury__integer__C_5 == (MR_Integer) 1))
#line 313 "integer.m"
      mercury__integer__succeeded = MR_TRUE;
#line 313 "integer.m"
    else
#line 313 "integer.m"
    if ((mercury__integer__C_5 == (MR_Integer) 0))
#line 313 "integer.m"
      mercury__integer__succeeded = MR_TRUE;
#line 313 "integer.m"
    else
#line 313 "integer.m"
      mercury__integer__succeeded = MR_FALSE;
#line 311 "integer.m"
    return mercury__integer__succeeded;
#line 311 "integer.m"
  }
#line 39 "integer.m"
}

#line 35 "integer.m"
MR_bool MR_CALL 
mercury__integer__f_greater_than_2_p_0(
#line 35 "integer.m"
  MR_Word mercury__integer__X_3,
#line 35 "integer.m"
  MR_Word mercury__integer__Y_4)
#line 35 "integer.m"
{
#line 307 "integer.m"
  {
#line 307 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 307 "integer.m"
    MR_Word mercury__integer__C_5;

#line 661 "integer.m"
    {
#line 661 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__X_3, mercury__integer__Y_4);
    }
#line 309 "integer.m"
    mercury__integer__succeeded = (mercury__integer__C_5 == (MR_Integer) 2);
#line 307 "integer.m"
    return mercury__integer__succeeded;
#line 307 "integer.m"
  }
#line 35 "integer.m"
}

#line 31 "integer.m"
MR_bool MR_CALL 
mercury__integer__f_less_than_2_p_0(
#line 31 "integer.m"
  MR_Word mercury__integer__X_3,
#line 31 "integer.m"
  MR_Word mercury__integer__Y_4)
#line 31 "integer.m"
{
#line 303 "integer.m"
  {
#line 303 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 303 "integer.m"
    MR_Word mercury__integer__C_5;

#line 661 "integer.m"
    {
#line 661 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__X_3, mercury__integer__Y_4);
    }
#line 305 "integer.m"
    mercury__integer__succeeded = (mercury__integer__C_5 == (MR_Integer) 1);
#line 303 "integer.m"
    return mercury__integer__succeeded;
#line 303 "integer.m"
  }
#line 31 "integer.m"
}

void mercury__integer__init(void)
{
}

void mercury__integer__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__integer__integer__type_ctor_info_digit_0);
	MR_register_type_ctor_info(&mercury__integer__integer__type_ctor_info_integer_0);
	MR_register_type_ctor_info(&mercury__integer__integer__type_ctor_info_printbase_0);
	MR_register_type_ctor_info(&mercury__integer__integer__type_ctor_info_sign_0);
}

void mercury__integer__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module integer. */
