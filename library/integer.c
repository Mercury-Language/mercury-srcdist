/*
** Automatically generated from `integer.m'
** by the Mercury compiler,
** version 2015-10-27
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

#line 67 "string.opt"
static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0(
#line 67 "string.opt"
  MR_Integer mercury__integer__V_17_17,
#line 67 "string.opt"
  MR_String mercury__integer__V_8_8,
#line 67 "string.opt"
  MR_Integer mercury__integer__V_9_9,
#line 67 "string.opt"
  MR_Integer mercury__integer__V_10_10,
#line 67 "string.opt"
  MR_Word mercury__integer__V_14_11,
#line 67 "string.opt"
  MR_Word * mercury__integer__V_15_12);

#line 133 "string.int"
static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0(
#line 133 "string.int"
  MR_Integer mercury__integer__V_18_18,
#line 133 "string.int"
  MR_String mercury__integer__V_8_8,
#line 133 "string.int"
  MR_Integer mercury__integer__V_9_9,
#line 133 "string.int"
  MR_Integer mercury__integer__V_10_10,
#line 133 "string.int"
  MR_Word mercury__integer__V_14_11,
#line 133 "string.int"
  MR_Word * mercury__integer__V_15_12);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 1491 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_pos_mul_list_4_f_0(
#line 1491 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1491 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1491 "integer.m"
  MR_Word mercury__integer__Carry_3,
#line 1491 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4);

#line 1473 "integer.m"
static void MR_CALL 
mercury__integer__printbase_add_pairs_equal_5_p_0(
#line 1473 "integer.m"
  MR_Word mercury__integer__Base_1,
#line 1473 "integer.m"
  MR_Integer * mercury__integer__HeadVar__2_2,
#line 1473 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1473 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 1473 "integer.m"
  MR_Word * mercury__integer__HeadVar__5_5);

#line 1455 "integer.m"
static void MR_CALL 
mercury__integer__printbase_add_pairs_5_p_0(
#line 1455 "integer.m"
  MR_Word mercury__integer__Base_6,
#line 1455 "integer.m"
  MR_Integer * mercury__integer__Div_7,
#line 1455 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1455 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 1455 "integer.m"
  MR_Word * mercury__integer__Ds_12);

#line 1432 "integer.m"
static void MR_CALL 
mercury__integer__printbase_mul_by_digit_2_5_p_0(
#line 1432 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1432 "integer.m"
  MR_Integer mercury__integer__D_2,
#line 1432 "integer.m"
  MR_Integer * mercury__integer__HeadVar__3_3,
#line 1432 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 1432 "integer.m"
  MR_Word * mercury__integer__HeadVar__5_5);

#line 1404 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_pos_int_to_digits_2_3_f_0(
#line 1404 "integer.m"
  MR_Word mercury__integer__Base_5,
#line 1404 "integer.m"
  MR_Integer mercury__integer__D_6,
#line 1404 "integer.m"
  MR_Word mercury__integer__Tail_7);

#line 1372 "integer.m"
static void MR_CALL 
mercury__integer__digits_to_strings_4_p_0(
#line 1372 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 1372 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1372 "integer.m"
  MR_Word mercury__integer__STATE_VARIABLE_Strs_0_3,
#line 1372 "integer.m"
  MR_Word * mercury__integer__STATE_VARIABLE_Strs_4);

#line 1363 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_rep_1_4_f_0(
#line 1363 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1363 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1363 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1363 "integer.m"
  MR_Word mercury__integer__Carry_4);

#line 1340 "integer.m"
static MR_String MR_CALL 
mercury__integer__digits_to_string_3_f_0(
#line 1340 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 1340 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1340 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3);

#line 1299 "integer.m"
static MR_bool MR_CALL 
mercury__integer__string_to_integer_acc_3_p_0(
#line 1299 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1299 "integer.m"
  MR_Word mercury__integer__STATE_VARIABLE_Integer_0_2,
#line 1299 "integer.m"
  MR_Word * mercury__integer__STATE_VARIABLE_Integer_3);

#line 1241 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__int_list_2_f_0(
#line 1241 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1241 "integer.m"
  MR_Integer mercury__integer__Accum_2);

#line 1194 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_pow_sqmul_2_f_0(
#line 1194 "integer.m"
  MR_Word mercury__integer__A_4,
#line 1194 "integer.m"
  MR_Word mercury__integer__N_5);

#line 1162 "integer.m"
static MR_bool MR_CALL 
mercury__integer__pos_geq_2_p_0(
#line 1162 "integer.m"
  MR_Word mercury__integer__Xs_3,
#line 1162 "integer.m"
  MR_Word mercury__integer__Ys_4);

#line 1151 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_3_f_0(
#line 1151 "integer.m"
  MR_Integer mercury__integer__X_1,
#line 1151 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1151 "integer.m"
  MR_Integer mercury__integer__D_3);

#line 1133 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_1_3_f_0(
#line 1133 "integer.m"
  MR_Integer mercury__integer__X_1,
#line 1133 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1133 "integer.m"
  MR_Integer mercury__integer__D_3);

#line 1128 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_f_0(
#line 1128 "integer.m"
  MR_Integer mercury__integer__Digit_1,
#line 1128 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 1124 "integer.m"
static MR_Word MR_CALL 
mercury__integer__integer_prepend_2_f_0(
#line 1124 "integer.m"
  MR_Integer mercury__integer__Digit_4,
#line 1124 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 1119 "integer.m"
static MR_Word MR_CALL 
mercury__integer__integer_append_2_f_0(
#line 1119 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1119 "integer.m"
  MR_Integer mercury__integer__Digit_6);

#line 1108 "integer.m"
static MR_Word MR_CALL 
mercury__integer__det_tail_1_f_0(
#line 1108 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1);

#line 1095 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__det_second_1_f_0(
#line 1095 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1);

#line 1085 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__det_first_1_f_0(
#line 1085 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1);

#line 1075 "integer.m"
static MR_Word MR_CALL 
mercury__integer__decap_1_f_0(
#line 1075 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1);

#line 1026 "integer.m"
static void MR_CALL 
mercury__integer__quot_rem_2_5_p_0(
#line 1026 "integer.m"
  MR_Word mercury__integer__Ur_6,
#line 1026 "integer.m"
  MR_Word mercury__integer__U_7,
#line 1026 "integer.m"
  MR_Word mercury__integer__V_8,
#line 1026 "integer.m"
  MR_Word * mercury__integer__Quot_9,
#line 1026 "integer.m"
  MR_Word * mercury__integer__Rem_10);

#line 1007 "integer.m"
static void MR_CALL 
mercury__integer__quot_rem_4_p_0(
#line 1007 "integer.m"
  MR_Word mercury__integer__U_5,
#line 1007 "integer.m"
  MR_Word mercury__integer__V_6,
#line 1007 "integer.m"
  MR_Word * mercury__integer__Quot_7,
#line 1007 "integer.m"
  MR_Word * mercury__integer__Rem_8);

#line 972 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_mul_list_3_f_0(
#line 972 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 972 "integer.m"
  MR_Word mercury__integer__Carry_2,
#line 972 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3);

#line 936 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_mul_karatsuba_2_f_0(
#line 936 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 936 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 906 "integer.m"
static void MR_CALL 
mercury__integer__diff_pairs_equal_4_p_0(
#line 906 "integer.m"
  MR_Integer * mercury__integer__HeadVar__1_1,
#line 906 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 906 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 906 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4);

#line 892 "integer.m"
static void MR_CALL 
mercury__integer__diff_pairs_4_p_0(
#line 892 "integer.m"
  MR_Integer * mercury__integer__Div_5,
#line 892 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 892 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 892 "integer.m"
  MR_Word * mercury__integer__Ds_10);

#line 877 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_minus_2_f_0(
#line 877 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 877 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 868 "integer.m"
static void MR_CALL 
mercury__integer__add_pairs_equal_4_p_0(
#line 868 "integer.m"
  MR_Integer * mercury__integer__HeadVar__1_1,
#line 868 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 868 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 868 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4);

#line 850 "integer.m"
static void MR_CALL 
mercury__integer__add_pairs_4_p_0(
#line 850 "integer.m"
  MR_Integer * mercury__integer__Div_5,
#line 850 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 850 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 850 "integer.m"
  MR_Word * mercury__integer__Ds_10);

#line 821 "integer.m"
static void MR_CALL 
mercury__integer__mul_by_digit_2_4_p_0(
#line 821 "integer.m"
  MR_Integer mercury__integer__D_1,
#line 821 "integer.m"
  MR_Integer * mercury__integer__HeadVar__2_2,
#line 821 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 821 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4);

#line 811 "integer.m"
static MR_Word MR_CALL 
mercury__integer__mul_by_digit_2_f_0(
#line 811 "integer.m"
  MR_Integer mercury__integer__Digit_4,
#line 811 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 806 "integer.m"
static MR_Word MR_CALL 
mercury__integer__mul_base_2_1_f_0(
#line 806 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1);

#line 784 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_int_to_digits_2_2_f_0(
#line 784 "integer.m"
  MR_Integer mercury__integer__D_4,
#line 784 "integer.m"
  MR_Word mercury__integer__Tail_5);

#line 682 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_xor_not_2_f_0(
#line 682 "integer.m"
  MR_Word mercury__integer__X1_4,
#line 682 "integer.m"
  MR_Word mercury__integer__NotX2_5);

#line 675 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_not_pairs_equal_2_f_0(
#line 675 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 675 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 660 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_not_pairs_2_f_0(
#line 660 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 660 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 650 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_pairs_equal_2_f_0(
#line 650 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 650 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 635 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_pairs_2_f_0(
#line 635 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 635 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 624 "integer.m"
static MR_Word MR_CALL 
mercury__integer__xor_pairs_equal_2_f_0(
#line 624 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 624 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 609 "integer.m"
static MR_Word MR_CALL 
mercury__integer__xor_pairs_2_f_0(
#line 609 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 609 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 599 "integer.m"
static MR_Word MR_CALL 
mercury__integer__or_pairs_equal_2_f_0(
#line 599 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 599 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 584 "integer.m"
static MR_Word MR_CALL 
mercury__integer__or_pairs_2_f_0(
#line 584 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 584 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 580 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_or_2_f_0(
#line 580 "integer.m"
  MR_Word mercury__integer__X_4,
#line 580 "integer.m"
  MR_Word mercury__integer__Y_5);

#line 570 "integer.m"
static void MR_CALL 
mercury__integer__zeros_3_p_0(
#line 570 "integer.m"
  MR_Integer mercury__integer__Len_4,
#line 570 "integer.m"
  MR_Word mercury__integer__Digits0_5,
#line 570 "integer.m"
  MR_Word * mercury__integer__Digits_6);

#line 554 "integer.m"
static void MR_CALL 
mercury__integer__leftshift_6_p_0(
#line 554 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 554 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 554 "integer.m"
  MR_Integer mercury__integer__Len_3,
#line 554 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 554 "integer.m"
  MR_Integer * mercury__integer__Carry_5,
#line 554 "integer.m"
  MR_Word * mercury__integer__DigitsOut_6);

#line 530 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_left_shift_2_f_0(
#line 530 "integer.m"
  MR_Word mercury__integer__X_4,
#line 530 "integer.m"
  MR_Integer mercury__integer__I_5);

#line 516 "integer.m"
static MR_Word MR_CALL 
mercury__integer__rightshift_4_f_0(
#line 516 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 516 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 516 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 516 "integer.m"
  MR_Integer mercury__integer__HeadVar__4_4);


static /* final */ const MR_Box mercury__integer_scalar_common_1[11][2];

static /* final */ const MR_Box mercury__integer_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__integer_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__integer_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__integer_scalar_common_1[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__integer_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__integer_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__integer_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__integer_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__integer_scalar_common_1[9])))
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



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "io.mh"
#include "math.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "version_array.mh"



#line 823 "integer.c"
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

#line 840 "integer.c"
static const MR_FA_TypeInfo_Struct1 mercury__integer__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 848 "integer.c"
static const MR_PseudoTypeInfo mercury__integer__integer__field_types_integer_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__integer__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 854 "integer.c"
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

#line 869 "integer.c"
static const MR_DuFunctorDescPtr mercury__integer__integer__du_stag_ordered_integer_0_0[1] = {
  &mercury__integer__integer__du_functor_desc_integer_0_0
};

#line 874 "integer.c"
static const MR_DuPtagLayout mercury__integer__integer__du_ptag_ordered_integer_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__integer__integer__du_stag_ordered_integer_0_0
  }
};

#line 883 "integer.c"
static const MR_DuFunctorDescPtr mercury__integer__integer__du_name_ordered_integer_0[1] = {
  &mercury__integer__integer__du_functor_desc_integer_0_0
};

#line 888 "integer.c"
static const MR_Integer mercury__integer__integer__functor_number_map_integer_0[1] = {
  (MR_Integer) 0
};

#line 893 "integer.c"
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

#line 910 "integer.c"
static const MR_Integer mercury__integer__integer__functor_number_map_printbase_0[1] = {
  (MR_Integer) 0
};

#line 915 "integer.c"
static const MR_NotagFunctorDesc mercury__integer__integer__notag_functor_desc_printbase_0 = {
  (MR_String) "printbase",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 922 "integer.c"
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

#line 939 "integer.c"
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

#line 956 "integer.c"
static MR_bool MR_CALL 
mercury__integer____Unify____digit_0_0_10001(
#line 959 "integer.c"
  MR_Box mercury__integer__wrapper_arg_1,
#line 961 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2)
#line 963 "integer.c"
{
#line 965 "integer.c"
  {
#line 967 "integer.c"
    MR_bool mercury__integer__succeeded;

#line 970 "integer.c"
    {
#line 972 "integer.c"
      mercury__integer__succeeded = mercury__integer____Unify____digit_0_0(((MR_Integer) mercury__integer__wrapper_arg_1), ((MR_Integer) mercury__integer__wrapper_arg_2));
    }
#line 975 "integer.c"
    return mercury__integer__succeeded;
#line 977 "integer.c"
  }
#line 979 "integer.c"
}

#line 982 "integer.c"
static void MR_CALL 
mercury__integer____Compare____digit_0_0_10001(
#line 985 "integer.c"
  MR_Box * mercury__integer__wrapper_arg_1,
#line 987 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2,
#line 989 "integer.c"
  MR_Box mercury__integer__wrapper_arg_3)
#line 991 "integer.c"
{
#line 993 "integer.c"
  {
#line 995 "integer.c"
    MR_Word mercury__integer__conv0_HeadVar__1_1;

#line 998 "integer.c"
    {
#line 1000 "integer.c"
      mercury__integer____Compare____digit_0_0(&mercury__integer__conv0_HeadVar__1_1, ((MR_Integer) mercury__integer__wrapper_arg_2), ((MR_Integer) mercury__integer__wrapper_arg_3));
    }
#line 1003 "integer.c"
    *mercury__integer__wrapper_arg_1 = ((MR_Box) (mercury__integer__conv0_HeadVar__1_1));
#line 1005 "integer.c"
  }
#line 1007 "integer.c"
}

#line 1010 "integer.c"
static MR_bool MR_CALL 
mercury__integer____Unify____integer_0_0_10001(
#line 1013 "integer.c"
  MR_Box mercury__integer__wrapper_arg_1,
#line 1015 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2)
#line 1017 "integer.c"
{
#line 1019 "integer.c"
  {
#line 1021 "integer.c"
    MR_bool mercury__integer__succeeded;

#line 1024 "integer.c"
    {
#line 1026 "integer.c"
      mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(((MR_Word) mercury__integer__wrapper_arg_1), ((MR_Word) mercury__integer__wrapper_arg_2));
    }
#line 1029 "integer.c"
    return mercury__integer__succeeded;
#line 1031 "integer.c"
  }
#line 1033 "integer.c"
}

#line 1036 "integer.c"
static void MR_CALL 
mercury__integer____Compare____integer_0_0_10001(
#line 1039 "integer.c"
  MR_Box * mercury__integer__wrapper_arg_1,
#line 1041 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2,
#line 1043 "integer.c"
  MR_Box mercury__integer__wrapper_arg_3)
#line 1045 "integer.c"
{
#line 1047 "integer.c"
  {
#line 1049 "integer.c"
    MR_Word mercury__integer__conv0_HeadVar__1_1;

#line 1052 "integer.c"
    {
#line 1054 "integer.c"
      mercury__integer____Compare____integer_0_0(&mercury__integer__conv0_HeadVar__1_1, ((MR_Word) mercury__integer__wrapper_arg_2), ((MR_Word) mercury__integer__wrapper_arg_3));
    }
#line 1057 "integer.c"
    *mercury__integer__wrapper_arg_1 = ((MR_Box) (mercury__integer__conv0_HeadVar__1_1));
#line 1059 "integer.c"
  }
#line 1061 "integer.c"
}

#line 1064 "integer.c"
static MR_bool MR_CALL 
mercury__integer____Unify____printbase_0_0_10001(
#line 1067 "integer.c"
  MR_Box mercury__integer__wrapper_arg_1,
#line 1069 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2)
#line 1071 "integer.c"
{
#line 1073 "integer.c"
  {
#line 1075 "integer.c"
    MR_bool mercury__integer__succeeded;

#line 1078 "integer.c"
    {
#line 1080 "integer.c"
      mercury__integer__succeeded = mercury__integer____Unify____printbase_0_0(((MR_Word) mercury__integer__wrapper_arg_1), ((MR_Word) mercury__integer__wrapper_arg_2));
    }
#line 1083 "integer.c"
    return mercury__integer__succeeded;
#line 1085 "integer.c"
  }
#line 1087 "integer.c"
}

#line 1090 "integer.c"
static void MR_CALL 
mercury__integer____Compare____printbase_0_0_10001(
#line 1093 "integer.c"
  MR_Box * mercury__integer__wrapper_arg_1,
#line 1095 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2,
#line 1097 "integer.c"
  MR_Box mercury__integer__wrapper_arg_3)
#line 1099 "integer.c"
{
#line 1101 "integer.c"
  {
#line 1103 "integer.c"
    MR_Word mercury__integer__conv0_HeadVar__1_1;

#line 1106 "integer.c"
    {
#line 1108 "integer.c"
      mercury__integer____Compare____printbase_0_0(&mercury__integer__conv0_HeadVar__1_1, ((MR_Word) mercury__integer__wrapper_arg_2), ((MR_Word) mercury__integer__wrapper_arg_3));
    }
#line 1111 "integer.c"
    *mercury__integer__wrapper_arg_1 = ((MR_Box) (mercury__integer__conv0_HeadVar__1_1));
#line 1113 "integer.c"
  }
#line 1115 "integer.c"
}

#line 1118 "integer.c"
static MR_bool MR_CALL 
mercury__integer____Unify____sign_0_0_10001(
#line 1121 "integer.c"
  MR_Box mercury__integer__wrapper_arg_1,
#line 1123 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2)
#line 1125 "integer.c"
{
#line 1127 "integer.c"
  {
#line 1129 "integer.c"
    MR_bool mercury__integer__succeeded;

#line 1132 "integer.c"
    {
#line 1134 "integer.c"
      mercury__integer__succeeded = mercury__integer____Unify____sign_0_0(((MR_Integer) mercury__integer__wrapper_arg_1), ((MR_Integer) mercury__integer__wrapper_arg_2));
    }
#line 1137 "integer.c"
    return mercury__integer__succeeded;
#line 1139 "integer.c"
  }
#line 1141 "integer.c"
}

#line 1144 "integer.c"
static void MR_CALL 
mercury__integer____Compare____sign_0_0_10001(
#line 1147 "integer.c"
  MR_Box * mercury__integer__wrapper_arg_1,
#line 1149 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2,
#line 1151 "integer.c"
  MR_Box mercury__integer__wrapper_arg_3)
#line 1153 "integer.c"
{
#line 1155 "integer.c"
  {
#line 1157 "integer.c"
    MR_Word mercury__integer__conv0_HeadVar__1_1;

#line 1160 "integer.c"
    {
#line 1162 "integer.c"
      mercury__integer____Compare____sign_0_0(&mercury__integer__conv0_HeadVar__1_1, ((MR_Integer) mercury__integer__wrapper_arg_2), ((MR_Integer) mercury__integer__wrapper_arg_3));
    }
#line 1165 "integer.c"
    *mercury__integer__wrapper_arg_1 = ((MR_Box) (mercury__integer__conv0_HeadVar__1_1));
#line 1167 "integer.c"
  }
#line 1169 "integer.c"
}

#line 67 "string.opt"
static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0(
#line 67 "string.opt"
  MR_Integer mercury__integer__V_17_17,
#line 67 "string.opt"
  MR_String mercury__integer__V_8_8,
#line 67 "string.opt"
  MR_Integer mercury__integer__V_9_9,
#line 67 "string.opt"
  MR_Integer mercury__integer__V_10_10,
#line 67 "string.opt"
  MR_Word mercury__integer__V_14_11,
#line 67 "string.opt"
  MR_Word * mercury__integer__V_15_12)
#line 67 "string.opt"
{
#line 419 "string.opt"
  while (MR_TRUE)
#line 419 "string.opt"
    {
#line 419 "string.opt"
      /* tailcall optimized into a loop */
#line 419 "string.opt"
      {
#line 419 "string.opt"
        MR_bool mercury__integer__succeeded = (mercury__integer__V_9_9 < mercury__integer__V_10_10);
#line 419 "string.opt"
        MR_Integer mercury__integer__V_12_13;
#line 419 "string.opt"
        MR_Char mercury__integer__V_13_14;

#line 413 "string.opt"
        if (mercury__integer__succeeded)
#line 413 "string.opt"
          {
#line 1045 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__integer__V_8_8 ;
	Index =  mercury__integer__V_9_9 ;
		{
#line 1045 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 1233 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__integer__V_12_13  = NextIndex;
	 mercury__integer__V_13_14  = Ch;
#line 1045 "string.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 413 "string.opt"
            if (mercury__integer__succeeded)
#line 415 "string.opt"
              mercury__integer__succeeded = (mercury__integer__V_12_13 <= mercury__integer__V_10_10);
#line 413 "string.opt"
          }
#line 419 "string.opt"
        if (mercury__integer__succeeded)
#line 417 "string.opt"
          {
#line 417 "string.opt"
            MR_Word mercury__integer__V_16_15;
#line 417 "string.opt"
            MR_Integer mercury__integer__Digit0_23;
#line 417 "string.opt"
            MR_Word mercury__integer__Digit_24;
#line 417 "string.opt"
            MR_Word mercury__integer__V_26_26;
#line 417 "string.opt"
            MR_Word mercury__integer__V_27_27;

#line 1526 "integer.m"
            {
#line 1526 "integer.m"
              mercury__integer__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__integer__V_17_17, mercury__integer__V_13_14, &mercury__integer__Digit0_23);
            }
#line 417 "string.opt"
            if (mercury__integer__succeeded)
#line 417 "string.opt"
              {
#line 726 "integer.m"
                {
#line 726 "integer.m"
                  mercury__integer__Digit_24 = mercury__integer__int_to_integer_1_f_0(mercury__integer__Digit0_23);
                }
#line 726 "integer.m"
                {
#line 726 "integer.m"
                  mercury__integer__V_27_27 = mercury__integer__int_to_integer_1_f_0(mercury__integer__V_17_17);
                }
#line 348 "integer.m"
                {
#line 348 "integer.m"
                  mercury__integer__V_26_26 = mercury__integer__big_mul_2_f_0(mercury__integer__V_27_27, mercury__integer__V_14_11);
                }
#line 344 "integer.m"
                {
#line 344 "integer.m"
                  mercury__integer__V_16_15 = mercury__integer__big_plus_2_f_0(mercury__integer__V_26_26, mercury__integer__Digit_24);
                }
#line 418 "string.opt"
                /* direct tailcall eliminated */
#line 418 "string.opt"
                {
#line 418 "string.opt"
                  MR_Integer mercury__integer__V_9__tmp_copy_9 = mercury__integer__V_12_13;
#line 418 "string.opt"
                  MR_Word mercury__integer__V_14__tmp_copy_11 = mercury__integer__V_16_15;

#line 418 "string.opt"
                  mercury__integer__V_14_11 = mercury__integer__V_14__tmp_copy_11;
#line 418 "string.opt"
                  mercury__integer__V_9_9 = mercury__integer__V_9__tmp_copy_9;
#line 418 "string.opt"
                }
#line 418 "string.opt"
                continue;
#line 417 "string.opt"
              }
#line 417 "string.opt"
          }
#line 419 "string.opt"
        else
#line 420 "string.opt"
          {
#line 420 "string.opt"
            *mercury__integer__V_15_12 = mercury__integer__V_14_11;
#line 420 "string.opt"
            mercury__integer__succeeded = MR_TRUE;
#line 420 "string.opt"
          }
#line 419 "string.opt"
        return mercury__integer__succeeded;
#line 419 "string.opt"
      }
#line 419 "string.opt"
      break;
#line 419 "string.opt"
    }
#line 67 "string.opt"
}

#line 133 "string.int"
static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0(
#line 133 "string.int"
  MR_Integer mercury__integer__V_18_18,
#line 133 "string.int"
  MR_String mercury__integer__V_8_8,
#line 133 "string.int"
  MR_Integer mercury__integer__V_9_9,
#line 133 "string.int"
  MR_Integer mercury__integer__V_10_10,
#line 133 "string.int"
  MR_Word mercury__integer__V_14_11,
#line 133 "string.int"
  MR_Word * mercury__integer__V_15_12)
#line 133 "string.int"
{
#line 392 "string.opt"
  {
#line 392 "string.opt"
    MR_bool mercury__integer__succeeded = ((MR_Integer) 0 > mercury__integer__V_9_9);
#line 392 "string.opt"
    MR_Integer mercury__integer__V_12_13;
#line 392 "string.opt"
    MR_Integer mercury__integer__V_13_15;
#line 392 "string.opt"
    MR_Integer mercury__integer__V_17_16;

#line 214 "int.opt"
    if (mercury__integer__succeeded)
#line 213 "int.opt"
      mercury__integer__V_12_13 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__integer__V_12_13 = mercury__integer__V_9_9;
#line 701 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__V_8_8 ;
		{
#line 701 "string.opt"

    Length = strlen(Str);

#line 1385 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_17_16  = Length;
#line 701 "string.opt"
}
#line 240 "int.opt"
    mercury__integer__succeeded = (mercury__integer__V_10_10 < mercury__integer__V_17_16);
#line 243 "int.opt"
    if (mercury__integer__succeeded)
#line 242 "int.opt"
      mercury__integer__V_13_15 = mercury__integer__V_10_10;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__integer__V_13_15 = mercury__integer__V_17_16;
#line 397 "string.opt"
    {
#line 397 "string.opt"
      return mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__V_18_18, mercury__integer__V_8_8, mercury__integer__V_12_13, mercury__integer__V_13_15, mercury__integer__V_14_11, mercury__integer__V_15_12);
    }
#line 392 "string.opt"
    return mercury__integer__succeeded;
#line 392 "string.opt"
  }
#line 133 "string.int"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__integer__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 290 "integer.m"
void MR_CALL 
mercury__integer____Compare____sign_0_0(
#line 290 "integer.m"
  MR_Word * mercury__integer__HeadVar__1_1,
#line 290 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 290 "integer.m"
  MR_Integer mercury__integer__HeadVar__3_3)
#line 290 "integer.m"
{
#line 290 "integer.m"
  {
#line 290 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 290 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar1_4 = mercury__integer__HeadVar__2_2;
#line 290 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar2_5 = mercury__integer__HeadVar__3_3;

#line 69 "private_builtin.opt"
    mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_4 < mercury__integer__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__integer__succeeded)
#line 71 "private_builtin.opt"
      *mercury__integer__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_4 == mercury__integer__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__integer__succeeded)
#line 76 "private_builtin.opt"
          *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__integer__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
      }
#line 290 "integer.m"
  }
#line 290 "integer.m"
}

#line 290 "integer.m"
MR_bool MR_CALL 
mercury__integer____Unify____sign_0_0(
#line 290 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 290 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2)
#line 290 "integer.m"
{
#line 290 "integer.m"
  {
#line 290 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 290 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar1_3 = mercury__integer__HeadVar__1_1;
#line 290 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar2_4 = mercury__integer__HeadVar__2_2;

#line 290 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_3 == mercury__integer__Cast_HeadVar2_4);
#line 290 "integer.m"
    return mercury__integer__succeeded;
#line 290 "integer.m"
  }
#line 290 "integer.m"
}

#line 1392 "integer.m"
void MR_CALL 
mercury__integer____Compare____printbase_0_0(
#line 1392 "integer.m"
  MR_Word * mercury__integer__HeadVar__1_1,
#line 1392 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1392 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3)
#line 1392 "integer.m"
{
#line 1392 "integer.m"
  {
#line 1392 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1392 "integer.m"
    MR_Integer mercury__integer__CastX_6 = (MR_Integer) mercury__integer__HeadVar__2_2;
#line 1392 "integer.m"
    MR_Integer mercury__integer__CastY_7 = (MR_Integer) mercury__integer__HeadVar__3_3;

#line 1392 "integer.m"
    mercury__integer__succeeded = (mercury__integer__CastX_6 == mercury__integer__CastY_7);
#line 1392 "integer.m"
    if (mercury__integer__succeeded)
#line 1529 "integer.c"
      *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 1392 "integer.m"
    else
#line 1392 "integer.m"
      {
#line 1392 "integer.m"
        MR_Integer mercury__integer__V_4_4 = (MR_Integer) mercury__integer__HeadVar__2_2;
#line 1392 "integer.m"
        MR_Integer mercury__integer__V_5_5 = (MR_Integer) mercury__integer__HeadVar__3_3;

#line 69 "private_builtin.opt"
        mercury__integer__succeeded = (mercury__integer__V_4_4 < mercury__integer__V_5_5);
#line 72 "private_builtin.opt"
        if (mercury__integer__succeeded)
#line 71 "private_builtin.opt"
          *mercury__integer__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
        else
#line 77 "private_builtin.opt"
          {
#line 74 "private_builtin.opt"
            mercury__integer__succeeded = (mercury__integer__V_4_4 == mercury__integer__V_5_5);
#line 77 "private_builtin.opt"
            if (mercury__integer__succeeded)
#line 76 "private_builtin.opt"
              *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
            else
#line 78 "private_builtin.opt"
              *mercury__integer__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
          }
#line 1392 "integer.m"
      }
#line 1392 "integer.m"
  }
#line 1392 "integer.m"
}

#line 1392 "integer.m"
MR_bool MR_CALL 
mercury__integer____Unify____printbase_0_0(
#line 1392 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1392 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 1392 "integer.m"
{
#line 1392 "integer.m"
  {
#line 1392 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1392 "integer.m"
    MR_Integer mercury__integer__CastX_5 = (MR_Integer) mercury__integer__HeadVar__1_1;
#line 1392 "integer.m"
    MR_Integer mercury__integer__CastY_6 = (MR_Integer) mercury__integer__HeadVar__2_2;

#line 1392 "integer.m"
    mercury__integer__succeeded = (mercury__integer__CastX_5 == mercury__integer__CastY_6);
#line 1392 "integer.m"
    if (mercury__integer__succeeded)
#line 1392 "integer.m"
      mercury__integer__succeeded = MR_TRUE;
#line 1392 "integer.m"
    else
#line 1392 "integer.m"
      {
#line 1392 "integer.m"
        MR_Integer mercury__integer__V_3_3 = (MR_Integer) mercury__integer__HeadVar__1_1;
#line 1392 "integer.m"
        MR_Integer mercury__integer__V_4_4 = (MR_Integer) mercury__integer__HeadVar__2_2;

#line 1602 "integer.c"
        mercury__integer__succeeded = (mercury__integer__V_3_3 == mercury__integer__V_4_4);
#line 1392 "integer.m"
      }
#line 1392 "integer.m"
    return mercury__integer__succeeded;
#line 1392 "integer.m"
  }
#line 1392 "integer.m"
}

#line 293 "integer.m"
void MR_CALL 
mercury__integer____Compare____integer_0_0(
#line 293 "integer.m"
  MR_Word * mercury__integer__HeadVar__1_1,
#line 293 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 293 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3)
#line 293 "integer.m"
{
#line 293 "integer.m"
  {
#line 293 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 293 "integer.m"
    MR_Integer mercury__integer__CastX_9 = (MR_Integer) mercury__integer__HeadVar__2_2;
#line 293 "integer.m"
    MR_Integer mercury__integer__CastY_10 = (MR_Integer) mercury__integer__HeadVar__3_3;

#line 293 "integer.m"
    mercury__integer__succeeded = (mercury__integer__CastX_9 == mercury__integer__CastY_10);
#line 293 "integer.m"
    if (mercury__integer__succeeded)
#line 1637 "integer.c"
      *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 293 "integer.m"
    else
#line 293 "integer.m"
      {
#line 293 "integer.m"
        MR_Integer mercury__integer__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 293 "integer.m"
        MR_Word mercury__integer__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 293 "integer.m"
        MR_Integer mercury__integer__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 293 "integer.m"
        MR_Word mercury__integer__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 293 "integer.m"
        MR_Word mercury__integer__V_8_8;

#line 69 "private_builtin.opt"
        mercury__integer__succeeded = (mercury__integer__V_4_4 < mercury__integer__V_6_6);
#line 72 "private_builtin.opt"
        if (mercury__integer__succeeded)
#line 71 "private_builtin.opt"
          mercury__integer__V_8_8 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
        else
#line 77 "private_builtin.opt"
          {
#line 74 "private_builtin.opt"
            mercury__integer__succeeded = (mercury__integer__V_4_4 == mercury__integer__V_6_6);
#line 77 "private_builtin.opt"
            if (mercury__integer__succeeded)
#line 76 "private_builtin.opt"
              mercury__integer__V_8_8 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
            else
#line 78 "private_builtin.opt"
              mercury__integer__V_8_8 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
          }
#line 1676 "integer.c"
        mercury__integer__succeeded = (mercury__integer__V_8_8 == (MR_Integer) 0);
#line 293 "integer.m"
        mercury__integer__succeeded = !(mercury__integer__succeeded);
#line 293 "integer.m"
        if (mercury__integer__succeeded)
#line 293 "integer.m"
          *mercury__integer__HeadVar__1_1 = mercury__integer__V_8_8;
#line 293 "integer.m"
        else
#line 293 "integer.m"
          {
#line 293 "integer.m"
            MR_Word mercury__integer__TypeInfo_12_12 = (MR_Word) &mercury__integer_scalar_common_1[0];

#line 293 "integer.m"
            {
#line 293 "integer.m"
              mercury__builtin__compare_3_p_0(mercury__integer__TypeInfo_12_12, mercury__integer__HeadVar__1_1, ((MR_Box) (mercury__integer__V_5_5)), ((MR_Box) (mercury__integer__V_7_7)));
#line 293 "integer.m"
              return;
            }
#line 293 "integer.m"
          }
#line 293 "integer.m"
      }
#line 293 "integer.m"
  }
#line 293 "integer.m"
}

#line 293 "integer.m"
MR_bool MR_CALL 
mercury__integer____Unify____integer_0_0(
#line 293 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 293 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 293 "integer.m"
{
#line 293 "integer.m"
  {
#line 293 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 293 "integer.m"
    MR_Integer mercury__integer__CastX_7 = (MR_Integer) mercury__integer__HeadVar__1_1;
#line 293 "integer.m"
    MR_Integer mercury__integer__CastY_8 = (MR_Integer) mercury__integer__HeadVar__2_2;

#line 293 "integer.m"
    mercury__integer__succeeded = (mercury__integer__CastX_7 == mercury__integer__CastY_8);
#line 293 "integer.m"
    if (mercury__integer__succeeded)
#line 293 "integer.m"
      mercury__integer__succeeded = MR_TRUE;
#line 293 "integer.m"
    else
#line 293 "integer.m"
      {
#line 293 "integer.m"
        MR_Word mercury__integer__TypeInfo_9_9;
#line 293 "integer.m"
        MR_Integer mercury__integer__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 293 "integer.m"
        MR_Word mercury__integer__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 293 "integer.m"
        MR_Integer mercury__integer__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 293 "integer.m"
        MR_Word mercury__integer__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 1746 "integer.c"
        mercury__integer__succeeded = (mercury__integer__V_3_3 == mercury__integer__V_5_5);
#line 293 "integer.m"
        if (mercury__integer__succeeded)
#line 293 "integer.m"
          {
#line 1752 "integer.c"
            mercury__integer__TypeInfo_9_9 = (MR_Word) &mercury__integer_scalar_common_1[0];
#line 1754 "integer.c"
            {
#line 1756 "integer.c"
              return mercury__integer__succeeded = mercury__builtin__unify_2_p_0(mercury__integer__TypeInfo_9_9, ((MR_Box) (mercury__integer__V_4_4)), ((MR_Box) (mercury__integer__V_6_6)));
            }
#line 293 "integer.m"
          }
#line 293 "integer.m"
      }
#line 293 "integer.m"
    return mercury__integer__succeeded;
#line 293 "integer.m"
  }
#line 293 "integer.m"
}

#line 291 "integer.m"
void MR_CALL 
mercury__integer____Compare____digit_0_0(
#line 291 "integer.m"
  MR_Word * mercury__integer__HeadVar__1_1,
#line 291 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 291 "integer.m"
  MR_Integer mercury__integer__HeadVar__3_3)
#line 291 "integer.m"
{
#line 291 "integer.m"
  {
#line 291 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 291 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar1_4 = mercury__integer__HeadVar__2_2;
#line 291 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar2_5 = mercury__integer__HeadVar__3_3;

#line 69 "private_builtin.opt"
    mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_4 < mercury__integer__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__integer__succeeded)
#line 71 "private_builtin.opt"
      *mercury__integer__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_4 == mercury__integer__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__integer__succeeded)
#line 76 "private_builtin.opt"
          *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__integer__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
      }
#line 291 "integer.m"
  }
#line 291 "integer.m"
}

#line 291 "integer.m"
MR_bool MR_CALL 
mercury__integer____Unify____digit_0_0(
#line 291 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 291 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2)
#line 291 "integer.m"
{
#line 291 "integer.m"
  {
#line 291 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 291 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar1_3 = mercury__integer__HeadVar__1_1;
#line 291 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar2_4 = mercury__integer__HeadVar__2_2;

#line 291 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_3 == mercury__integer__Cast_HeadVar2_4);
#line 291 "integer.m"
    return mercury__integer__succeeded;
#line 291 "integer.m"
  }
#line 291 "integer.m"
}

#line 1491 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_pos_mul_list_4_f_0(
#line 1491 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1491 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1491 "integer.m"
  MR_Word mercury__integer__Carry_3,
#line 1491 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4)
#line 1491 "integer.m"
{
#line 1494 "integer.m"
  while (MR_TRUE)
#line 1494 "integer.m"
    {
#line 1494 "integer.m"
      /* tailcall optimized into a loop */
#line 1494 "integer.m"
      {
#line 1494 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1494 "integer.m"
        MR_Word mercury__integer__HeadVar__5_5;

#line 1494 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1494 "integer.m"
          mercury__integer__HeadVar__5_5 = mercury__integer__Carry_3;
#line 1494 "integer.m"
        else
#line 1495 "integer.m"
          {
#line 1495 "integer.m"
            MR_Integer mercury__integer__X_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 1495 "integer.m"
            MR_Word mercury__integer__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1495 "integer.m"
            MR_Word mercury__integer__V_14_14;
#line 1495 "integer.m"
            MR_Word mercury__integer__V_15_15;
#line 1495 "integer.m"
            MR_Word mercury__integer__V_16_16;
#line 1495 "integer.m"
            MR_Integer mercury__integer__Len_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_3, (MR_Integer) 0)));
#line 1495 "integer.m"
            MR_Word mercury__integer__Digits_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_3, (MR_Integer) 1)));
#line 1495 "integer.m"
            MR_Integer mercury__integer__Len_30;
#line 1495 "integer.m"
            MR_Word mercury__integer__Ds_31;
#line 1495 "integer.m"
            MR_Integer mercury__integer__Div_32;
#line 1495 "integer.m"
            MR_Word mercury__integer__DsOut_33;
#line 1495 "integer.m"
            MR_Integer mercury__integer__L1_39;
#line 1495 "integer.m"
            MR_Integer mercury__integer__L2_41;
#line 1495 "integer.m"
            MR_Integer mercury__integer__Div_43;
#line 1495 "integer.m"
            MR_Word mercury__integer__Ds_44;
#line 1495 "integer.m"
            MR_Integer mercury__integer__Len_45;
#line 1442 "integer.m"
            MR_Word mercury__integer__D1_40;
#line 1442 "integer.m"
            MR_Word mercury__integer__D2_42;

#line 801 "integer.m"
            if ((mercury__integer__Digits_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1257 "integer.m"
              {
#line 1257 "integer.m"
                MR_Word mercury__integer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1257 "integer.m"
                mercury__integer__V_15_15 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1257 "integer.m"
              }
#line 801 "integer.m"
            else
#line 802 "integer.m"
              {
#line 802 "integer.m"
                MR_Integer mercury__integer__V_22_22 = (mercury__integer__Len_18 + (MR_Integer) 1);
#line 802 "integer.m"
                MR_Word mercury__integer__V_24_24;

#line 803 "integer.m"
                {
#line 803 "integer.m"
                  mercury__integer__V_24_24 = mercury__integer__mul_base_2_1_f_0(mercury__integer__Digits_19);
                }
#line 803 "integer.m"
                {
#line 803 "integer.m"
                  mercury__integer__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 803 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, 0) = ((MR_Box) (mercury__integer__V_22_22));
#line 803 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, 1) = ((MR_Box) (mercury__integer__V_24_24));
#line 803 "integer.m"
                }
#line 802 "integer.m"
              }
#line 1424 "integer.m"
            mercury__integer__Len_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
#line 1424 "integer.m"
            mercury__integer__Ds_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));
#line 1425 "integer.m"
            {
#line 1425 "integer.m"
              mercury__integer__printbase_mul_by_digit_2_5_p_0(mercury__integer__HeadVar__1_1, mercury__integer__X_10, &mercury__integer__Div_32, mercury__integer__Ds_31, &mercury__integer__DsOut_33);
            }
#line 1426 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Div_32 == (MR_Integer) 0);
#line 1428 "integer.m"
            if (mercury__integer__succeeded)
#line 1427 "integer.m"
              {
#line 1427 "integer.m"
                mercury__integer__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1427 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, 0) = ((MR_Box) (mercury__integer__Len_30));
#line 1427 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, 1) = ((MR_Box) (mercury__integer__DsOut_33));
#line 1427 "integer.m"
              }
#line 1428 "integer.m"
            else
#line 1429 "integer.m"
              {
#line 1429 "integer.m"
                MR_Integer mercury__integer__V_34_34 = (mercury__integer__Len_30 + (MR_Integer) 1);
#line 1429 "integer.m"
                MR_Word mercury__integer__V_36_36;

#line 1429 "integer.m"
                {
#line 1429 "integer.m"
                  mercury__integer__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1429 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_36_36, 0) = ((MR_Box) (mercury__integer__Div_32));
#line 1429 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_36_36, 1) = ((MR_Box) (mercury__integer__DsOut_33));
#line 1429 "integer.m"
                }
#line 1429 "integer.m"
                {
#line 1429 "integer.m"
                  mercury__integer__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1429 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, 0) = ((MR_Box) (mercury__integer__V_34_34));
#line 1429 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, 1) = ((MR_Box) (mercury__integer__V_36_36));
#line 1429 "integer.m"
                }
#line 1429 "integer.m"
              }
#line 1442 "integer.m"
            mercury__integer__L1_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, (MR_Integer) 0)));
#line 1442 "integer.m"
            mercury__integer__D1_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, (MR_Integer) 1)));
#line 1442 "integer.m"
            mercury__integer__L2_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, (MR_Integer) 0)));
#line 1442 "integer.m"
            mercury__integer__D2_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, (MR_Integer) 1)));
#line 1443 "integer.m"
            {
#line 1443 "integer.m"
              mercury__integer__printbase_add_pairs_5_p_0(mercury__integer__HeadVar__1_1, &mercury__integer__Div_43, mercury__integer__V_15_15, mercury__integer__V_16_16, &mercury__integer__Ds_44);
            }
#line 1444 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_39 > mercury__integer__L2_41);
#line 1446 "integer.m"
            if (mercury__integer__succeeded)
#line 1445 "integer.m"
              mercury__integer__Len_45 = mercury__integer__L1_39;
#line 1446 "integer.m"
            else
#line 1447 "integer.m"
              mercury__integer__Len_45 = mercury__integer__L2_41;
#line 1449 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Div_43 == (MR_Integer) 0);
#line 1451 "integer.m"
            if (mercury__integer__succeeded)
#line 1450 "integer.m"
              {
#line 1450 "integer.m"
                mercury__integer__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1450 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__Len_45));
#line 1450 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__Ds_44));
#line 1450 "integer.m"
              }
#line 1451 "integer.m"
            else
#line 1452 "integer.m"
              {
#line 1452 "integer.m"
                MR_Integer mercury__integer__V_48_48 = (mercury__integer__Len_45 + (MR_Integer) 1);
#line 1452 "integer.m"
                MR_Word mercury__integer__V_50_50;

#line 1452 "integer.m"
                {
#line 1452 "integer.m"
                  mercury__integer__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1452 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_50_50, 0) = ((MR_Box) (mercury__integer__Div_43));
#line 1452 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_50_50, 1) = ((MR_Box) (mercury__integer__Ds_44));
#line 1452 "integer.m"
                }
#line 1452 "integer.m"
                {
#line 1452 "integer.m"
                  mercury__integer__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1452 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__V_48_48));
#line 1452 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__V_50_50));
#line 1452 "integer.m"
                }
#line 1452 "integer.m"
              }
#line 1496 "integer.m"
            /* direct tailcall eliminated */
#line 1496 "integer.m"
            {
#line 1496 "integer.m"
              MR_Word mercury__integer__HeadVar__2__tmp_copy_2 = mercury__integer__Xs_11;
#line 1496 "integer.m"
              MR_Word mercury__integer__Carry__tmp_copy_3 = mercury__integer__V_14_14;

#line 1496 "integer.m"
              mercury__integer__Carry_3 = mercury__integer__Carry__tmp_copy_3;
#line 1496 "integer.m"
              mercury__integer__HeadVar__2_2 = mercury__integer__HeadVar__2__tmp_copy_2;
#line 1496 "integer.m"
            }
#line 1496 "integer.m"
            continue;
#line 1495 "integer.m"
          }
#line 1494 "integer.m"
        return mercury__integer__HeadVar__5_5;
#line 1494 "integer.m"
      }
#line 1494 "integer.m"
      break;
#line 1494 "integer.m"
    }
#line 1491 "integer.m"
}

#line 1473 "integer.m"
static void MR_CALL 
mercury__integer__printbase_add_pairs_equal_5_p_0(
#line 1473 "integer.m"
  MR_Word mercury__integer__Base_1,
#line 1473 "integer.m"
  MR_Integer * mercury__integer__HeadVar__2_2,
#line 1473 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1473 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 1473 "integer.m"
  MR_Word * mercury__integer__HeadVar__5_5)
#line 1473 "integer.m"
{
#line 1476 "integer.m"
  {
#line 1476 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 1476 "integer.m"
    if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1476 "integer.m"
      {
#line 1476 "integer.m"
        *mercury__integer__HeadVar__2_2 = (MR_Integer) 0;
#line 1476 "integer.m"
        *mercury__integer__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1476 "integer.m"
      }
#line 1476 "integer.m"
    else
#line 1476 "integer.m"
      {
#line 1476 "integer.m"
        MR_Word mercury__integer__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 1476 "integer.m"
        MR_Integer mercury__integer__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));

#line 1476 "integer.m"
        if ((mercury__integer__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1477 "integer.m"
          {
#line 1477 "integer.m"
            *mercury__integer__HeadVar__2_2 = (MR_Integer) 0;
#line 1477 "integer.m"
            *mercury__integer__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1477 "integer.m"
          }
#line 1476 "integer.m"
        else
#line 1478 "integer.m"
          {
#line 1478 "integer.m"
            MR_Integer mercury__integer__Y_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
#line 1478 "integer.m"
            MR_Word mercury__integer__Ys_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));
#line 1478 "integer.m"
            MR_Integer mercury__integer__Mod_17;
#line 1478 "integer.m"
            MR_Word mercury__integer__TailDs_18;
#line 1478 "integer.m"
            MR_Integer mercury__integer__DivTail_19;
#line 1478 "integer.m"
            MR_Integer mercury__integer__V_20_20;
#line 1478 "integer.m"
            MR_Integer mercury__integer__V_21_21;
#line 1478 "integer.m"
            MR_Integer mercury__integer__Base_27;
#line 1478 "integer.m"
            MR_Integer mercury__integer__V_6_31;
#line 1478 "integer.m"
            MR_Integer mercury__integer__V_7_32;

#line 1479 "integer.m"
            {
#line 1479 "integer.m"
              mercury__integer__printbase_add_pairs_equal_5_p_0(mercury__integer__Base_1, &mercury__integer__DivTail_19, mercury__integer__V_22_22, mercury__integer__Ys_16, &mercury__integer__TailDs_18);
            }
#line 1480 "integer.m"
            mercury__integer__V_21_21 = (mercury__integer__V_23_23 + mercury__integer__Y_15);
#line 1480 "integer.m"
            mercury__integer__V_20_20 = (mercury__integer__V_21_21 + mercury__integer__DivTail_19);
#line 1418 "integer.m"
            mercury__integer__Base_27 = (MR_Integer) mercury__integer__Base_1;
#line 270 "int.opt"
            {
#line 270 "int.opt"
              mercury__integer__V_7_32 = mercury__int__div_2_f_0(mercury__integer__V_20_20, mercury__integer__Base_27);
            }
#line 269 "int.opt"
            mercury__integer__V_6_31 = (mercury__integer__V_7_32 * mercury__integer__Base_27);
#line 268 "int.opt"
            mercury__integer__Mod_17 = (mercury__integer__V_20_20 - mercury__integer__V_6_31);
#line 1420 "integer.m"
            {
#line 1420 "integer.m"
              *mercury__integer__HeadVar__2_2 = mercury__int__div_2_f_0(mercury__integer__V_20_20, mercury__integer__Base_27);
            }
#line 1478 "integer.m"
            {
#line 1478 "integer.m"
              MR_Word base;
#line 1478 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1478 "integer.m"
              *mercury__integer__HeadVar__5_5 = base;
#line 1478 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_17));
#line 1478 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__TailDs_18));
#line 1478 "integer.m"
            }
#line 1478 "integer.m"
          }
#line 1476 "integer.m"
      }
#line 1476 "integer.m"
  }
#line 1473 "integer.m"
}

#line 1455 "integer.m"
static void MR_CALL 
mercury__integer__printbase_add_pairs_5_p_0(
#line 1455 "integer.m"
  MR_Word mercury__integer__Base_6,
#line 1455 "integer.m"
  MR_Integer * mercury__integer__Div_7,
#line 1455 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1455 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 1455 "integer.m"
  MR_Word * mercury__integer__Ds_12)
#line 1455 "integer.m"
{
#line 1458 "integer.m"
  {
#line 1458 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1458 "integer.m"
    MR_Integer mercury__integer__L1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 1458 "integer.m"
    MR_Word mercury__integer__D1_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 1458 "integer.m"
    MR_Integer mercury__integer__L2_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
#line 1458 "integer.m"
    MR_Word mercury__integer__D2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));

#line 1459 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_8 == mercury__integer__L2_10);
#line 1461 "integer.m"
    if (mercury__integer__succeeded)
#line 1460 "integer.m"
      {
#line 1460 "integer.m"
        mercury__integer__printbase_add_pairs_equal_5_p_0(mercury__integer__Base_6, mercury__integer__Div_7, mercury__integer__D1_9, mercury__integer__D2_11, mercury__integer__Ds_12);
#line 1460 "integer.m"
        return;
      }
#line 1461 "integer.m"
    else
#line 1465 "integer.m"
      {
#line 1465 "integer.m"
        MR_Integer mercury__integer__H2_13;
#line 1465 "integer.m"
        MR_Word mercury__integer__T2_14;

#line 1461 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_8 < mercury__integer__L2_10);
#line 1461 "integer.m"
        if (mercury__integer__succeeded)
#line 1461 "integer.m"
          {
#line 1461 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_11)) == (MR_mktag((MR_Integer) 1)));
#line 1461 "integer.m"
            if (mercury__integer__succeeded)
#line 1461 "integer.m"
              {
#line 1461 "integer.m"
                mercury__integer__H2_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_11, (MR_Integer) 0)));
#line 1461 "integer.m"
                mercury__integer__T2_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_11, (MR_Integer) 1)));
#line 1461 "integer.m"
              }
#line 1461 "integer.m"
          }
#line 1465 "integer.m"
        if (mercury__integer__succeeded)
#line 1462 "integer.m"
          {
#line 1462 "integer.m"
            MR_Integer mercury__integer__Div1_15;
#line 1462 "integer.m"
            MR_Word mercury__integer__Ds1_16;
#line 1462 "integer.m"
            MR_Integer mercury__integer__Mod_17;
#line 1462 "integer.m"
            MR_Word mercury__integer__V_21_21;
#line 1462 "integer.m"
            MR_Integer mercury__integer__V_22_22 = (mercury__integer__L2_10 - (MR_Integer) 1);
#line 1462 "integer.m"
            MR_Integer mercury__integer__V_24_24;
#line 1462 "integer.m"
            MR_Integer mercury__integer__Base_42;
#line 1462 "integer.m"
            MR_Integer mercury__integer__V_6_46;
#line 1462 "integer.m"
            MR_Integer mercury__integer__V_7_47;

#line 1462 "integer.m"
            {
#line 1462 "integer.m"
              mercury__integer__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1462 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_21_21, 0) = ((MR_Box) (mercury__integer__V_22_22));
#line 1462 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_21_21, 1) = ((MR_Box) (mercury__integer__T2_14));
#line 1462 "integer.m"
            }
#line 1462 "integer.m"
            {
#line 1462 "integer.m"
              mercury__integer__printbase_add_pairs_5_p_0(mercury__integer__Base_6, &mercury__integer__Div1_15, mercury__integer__HeadVar__3_3, mercury__integer__V_21_21, &mercury__integer__Ds1_16);
            }
#line 1463 "integer.m"
            mercury__integer__V_24_24 = (mercury__integer__H2_13 + mercury__integer__Div1_15);
#line 1418 "integer.m"
            mercury__integer__Base_42 = (MR_Integer) mercury__integer__Base_6;
#line 270 "int.opt"
            {
#line 270 "int.opt"
              mercury__integer__V_7_47 = mercury__int__div_2_f_0(mercury__integer__V_24_24, mercury__integer__Base_42);
            }
#line 269 "int.opt"
            mercury__integer__V_6_46 = (mercury__integer__V_7_47 * mercury__integer__Base_42);
#line 268 "int.opt"
            mercury__integer__Mod_17 = (mercury__integer__V_24_24 - mercury__integer__V_6_46);
#line 1420 "integer.m"
            {
#line 1420 "integer.m"
              *mercury__integer__Div_7 = mercury__int__div_2_f_0(mercury__integer__V_24_24, mercury__integer__Base_42);
            }
#line 1464 "integer.m"
            {
#line 1464 "integer.m"
              MR_Word base;
#line 1464 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1464 "integer.m"
              *mercury__integer__Ds_12 = base;
#line 1464 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_17));
#line 1464 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_16));
#line 1464 "integer.m"
            }
#line 1462 "integer.m"
          }
#line 1465 "integer.m"
        else
#line 1469 "integer.m"
          {
#line 1469 "integer.m"
            MR_Integer mercury__integer__H1_18;
#line 1469 "integer.m"
            MR_Word mercury__integer__T1_19;

#line 1465 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_8 > mercury__integer__L2_10);
#line 1465 "integer.m"
            if (mercury__integer__succeeded)
#line 1465 "integer.m"
              {
#line 1465 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_9)) == (MR_mktag((MR_Integer) 1)));
#line 1465 "integer.m"
                if (mercury__integer__succeeded)
#line 1465 "integer.m"
                  {
#line 1465 "integer.m"
                    mercury__integer__H1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_9, (MR_Integer) 0)));
#line 1465 "integer.m"
                    mercury__integer__T1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_9, (MR_Integer) 1)));
#line 1465 "integer.m"
                  }
#line 1465 "integer.m"
              }
#line 1469 "integer.m"
            if (mercury__integer__succeeded)
#line 1466 "integer.m"
              {
#line 1466 "integer.m"
                MR_Word mercury__integer__V_25_25;
#line 1466 "integer.m"
                MR_Integer mercury__integer__V_27_27 = (mercury__integer__L1_8 - (MR_Integer) 1);
#line 1466 "integer.m"
                MR_Integer mercury__integer__V_29_29;
#line 1466 "integer.m"
                MR_Integer mercury__integer__Div1_33;
#line 1466 "integer.m"
                MR_Word mercury__integer__Ds1_34;
#line 1466 "integer.m"
                MR_Integer mercury__integer__Mod_35;
#line 1466 "integer.m"
                MR_Integer mercury__integer__Base_51;
#line 1466 "integer.m"
                MR_Integer mercury__integer__V_6_55;
#line 1466 "integer.m"
                MR_Integer mercury__integer__V_7_56;

#line 1466 "integer.m"
                {
#line 1466 "integer.m"
                  mercury__integer__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1466 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_25_25, 0) = ((MR_Box) (mercury__integer__V_27_27));
#line 1466 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_25_25, 1) = ((MR_Box) (mercury__integer__T1_19));
#line 1466 "integer.m"
                }
#line 1466 "integer.m"
                {
#line 1466 "integer.m"
                  mercury__integer__printbase_add_pairs_5_p_0(mercury__integer__Base_6, &mercury__integer__Div1_33, mercury__integer__V_25_25, mercury__integer__HeadVar__4_4, &mercury__integer__Ds1_34);
                }
#line 1467 "integer.m"
                mercury__integer__V_29_29 = (mercury__integer__H1_18 + mercury__integer__Div1_33);
#line 1418 "integer.m"
                mercury__integer__Base_51 = (MR_Integer) mercury__integer__Base_6;
#line 270 "int.opt"
                {
#line 270 "int.opt"
                  mercury__integer__V_7_56 = mercury__int__div_2_f_0(mercury__integer__V_29_29, mercury__integer__Base_51);
                }
#line 269 "int.opt"
                mercury__integer__V_6_55 = (mercury__integer__V_7_56 * mercury__integer__Base_51);
#line 268 "int.opt"
                mercury__integer__Mod_35 = (mercury__integer__V_29_29 - mercury__integer__V_6_55);
#line 1420 "integer.m"
                {
#line 1420 "integer.m"
                  *mercury__integer__Div_7 = mercury__int__div_2_f_0(mercury__integer__V_29_29, mercury__integer__Base_51);
                }
#line 1468 "integer.m"
                {
#line 1468 "integer.m"
                  MR_Word base;
#line 1468 "integer.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1468 "integer.m"
                  *mercury__integer__Ds_12 = base;
#line 1468 "integer.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_35));
#line 1468 "integer.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_34));
#line 1468 "integer.m"
                }
#line 1466 "integer.m"
              }
#line 1469 "integer.m"
            else
#line 1470 "integer.m"
              {
#line 1470 "integer.m"
                {
#line 1470 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "predicate \140integer.printbase_add_pairs\'/5", (MR_String) "integer.printbase_add_pairs");
#line 1470 "integer.m"
                  return;
                }
#line 1470 "integer.m"
              }
#line 1469 "integer.m"
          }
#line 1465 "integer.m"
      }
#line 1458 "integer.m"
  }
#line 1455 "integer.m"
}

#line 1432 "integer.m"
static void MR_CALL 
mercury__integer__printbase_mul_by_digit_2_5_p_0(
#line 1432 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1432 "integer.m"
  MR_Integer mercury__integer__D_2,
#line 1432 "integer.m"
  MR_Integer * mercury__integer__HeadVar__3_3,
#line 1432 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 1432 "integer.m"
  MR_Word * mercury__integer__HeadVar__5_5)
#line 1432 "integer.m"
{
#line 1435 "integer.m"
  {
#line 1435 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 1435 "integer.m"
    if ((mercury__integer__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1435 "integer.m"
      {
#line 1435 "integer.m"
        *mercury__integer__HeadVar__3_3 = (MR_Integer) 0;
#line 1435 "integer.m"
        *mercury__integer__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1435 "integer.m"
      }
#line 1435 "integer.m"
    else
#line 1436 "integer.m"
      {
#line 1436 "integer.m"
        MR_Integer mercury__integer__X_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
#line 1436 "integer.m"
        MR_Word mercury__integer__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));
#line 1436 "integer.m"
        MR_Integer mercury__integer__Mod_13;
#line 1436 "integer.m"
        MR_Word mercury__integer__NewXs_14;
#line 1436 "integer.m"
        MR_Integer mercury__integer__DivXs_15;
#line 1436 "integer.m"
        MR_Integer mercury__integer__V_16_16;
#line 1436 "integer.m"
        MR_Integer mercury__integer__V_17_17;
#line 1436 "integer.m"
        MR_Integer mercury__integer__Base_21;
#line 1436 "integer.m"
        MR_Integer mercury__integer__V_6_25;
#line 1436 "integer.m"
        MR_Integer mercury__integer__V_7_26;

#line 1437 "integer.m"
        {
#line 1437 "integer.m"
          mercury__integer__printbase_mul_by_digit_2_5_p_0(mercury__integer__HeadVar__1_1, mercury__integer__D_2, &mercury__integer__DivXs_15, mercury__integer__Xs_12, &mercury__integer__NewXs_14);
        }
#line 1438 "integer.m"
        mercury__integer__V_17_17 = (mercury__integer__D_2 * mercury__integer__X_11);
#line 1438 "integer.m"
        mercury__integer__V_16_16 = (mercury__integer__V_17_17 + mercury__integer__DivXs_15);
#line 1418 "integer.m"
        mercury__integer__Base_21 = (MR_Integer) mercury__integer__HeadVar__1_1;
#line 270 "int.opt"
        {
#line 270 "int.opt"
          mercury__integer__V_7_26 = mercury__int__div_2_f_0(mercury__integer__V_16_16, mercury__integer__Base_21);
        }
#line 269 "int.opt"
        mercury__integer__V_6_25 = (mercury__integer__V_7_26 * mercury__integer__Base_21);
#line 268 "int.opt"
        mercury__integer__Mod_13 = (mercury__integer__V_16_16 - mercury__integer__V_6_25);
#line 1420 "integer.m"
        {
#line 1420 "integer.m"
          *mercury__integer__HeadVar__3_3 = mercury__int__div_2_f_0(mercury__integer__V_16_16, mercury__integer__Base_21);
        }
#line 1436 "integer.m"
        {
#line 1436 "integer.m"
          MR_Word base;
#line 1436 "integer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "integer.m"
          *mercury__integer__HeadVar__5_5 = base;
#line 1436 "integer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_13));
#line 1436 "integer.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__NewXs_14));
#line 1436 "integer.m"
        }
#line 1436 "integer.m"
      }
#line 1435 "integer.m"
  }
#line 1432 "integer.m"
}

#line 1404 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_pos_int_to_digits_2_3_f_0(
#line 1404 "integer.m"
  MR_Word mercury__integer__Base_5,
#line 1404 "integer.m"
  MR_Integer mercury__integer__D_6,
#line 1404 "integer.m"
  MR_Word mercury__integer__Tail_7)
#line 1404 "integer.m"
{
#line 1409 "integer.m"
  while (MR_TRUE)
#line 1409 "integer.m"
    {
#line 1409 "integer.m"
      /* tailcall optimized into a loop */
#line 1409 "integer.m"
      {
#line 1409 "integer.m"
        MR_bool mercury__integer__succeeded = (mercury__integer__D_6 == (MR_Integer) 0);
#line 1409 "integer.m"
        MR_Word mercury__integer__Result_8;

#line 1409 "integer.m"
        if (mercury__integer__succeeded)
#line 1408 "integer.m"
          mercury__integer__Result_8 = mercury__integer__Tail_7;
#line 1409 "integer.m"
        else
#line 1410 "integer.m"
          {
#line 1410 "integer.m"
            MR_Integer mercury__integer__Length_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_7, (MR_Integer) 0)));
#line 1410 "integer.m"
            MR_Word mercury__integer__Digits_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_7, (MR_Integer) 1)));
#line 1410 "integer.m"
            MR_Integer mercury__integer__Div_11;
#line 1410 "integer.m"
            MR_Integer mercury__integer__Mod_12;
#line 1410 "integer.m"
            MR_Word mercury__integer__V_13_13;
#line 1410 "integer.m"
            MR_Integer mercury__integer__V_14_14;
#line 1410 "integer.m"
            MR_Word mercury__integer__V_16_16;
#line 1410 "integer.m"
            MR_Integer mercury__integer__Base_20 = (MR_Integer) mercury__integer__Base_5;
#line 1410 "integer.m"
            MR_Integer mercury__integer__V_6_24;
#line 1410 "integer.m"
            MR_Integer mercury__integer__V_7_25;

#line 270 "int.opt"
            {
#line 270 "int.opt"
              mercury__integer__V_7_25 = mercury__int__div_2_f_0(mercury__integer__D_6, mercury__integer__Base_20);
            }
#line 269 "int.opt"
            mercury__integer__V_6_24 = (mercury__integer__V_7_25 * mercury__integer__Base_20);
#line 268 "int.opt"
            mercury__integer__Mod_12 = (mercury__integer__D_6 - mercury__integer__V_6_24);
#line 1420 "integer.m"
            {
#line 1420 "integer.m"
              mercury__integer__Div_11 = mercury__int__div_2_f_0(mercury__integer__D_6, mercury__integer__Base_20);
            }
#line 1413 "integer.m"
            mercury__integer__V_14_14 = (mercury__integer__Length_9 + (MR_Integer) 1);
#line 1413 "integer.m"
            {
#line 1413 "integer.m"
              mercury__integer__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1413 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_16_16, 0) = ((MR_Box) (mercury__integer__Mod_12));
#line 1413 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_16_16, 1) = ((MR_Box) (mercury__integer__Digits_10));
#line 1413 "integer.m"
            }
#line 1413 "integer.m"
            {
#line 1413 "integer.m"
              mercury__integer__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1413 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 0) = ((MR_Box) (mercury__integer__V_14_14));
#line 1413 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 1) = ((MR_Box) (mercury__integer__V_16_16));
#line 1413 "integer.m"
            }
#line 1412 "integer.m"
            /* direct tailcall eliminated */
#line 1412 "integer.m"
            {
#line 1412 "integer.m"
              MR_Integer mercury__integer__D__tmp_copy_6 = mercury__integer__Div_11;
#line 1412 "integer.m"
              MR_Word mercury__integer__Tail__tmp_copy_7 = mercury__integer__V_13_13;

#line 1412 "integer.m"
              mercury__integer__Tail_7 = mercury__integer__Tail__tmp_copy_7;
#line 1412 "integer.m"
              mercury__integer__D_6 = mercury__integer__D__tmp_copy_6;
#line 1412 "integer.m"
            }
#line 1412 "integer.m"
            continue;
#line 1410 "integer.m"
          }
#line 1409 "integer.m"
        return mercury__integer__Result_8;
#line 1409 "integer.m"
      }
#line 1409 "integer.m"
      break;
#line 1409 "integer.m"
    }
#line 1404 "integer.m"
}

#line 1372 "integer.m"
static void MR_CALL 
mercury__integer__digits_to_strings_4_p_0(
#line 1372 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 1372 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1372 "integer.m"
  MR_Word mercury__integer__STATE_VARIABLE_Strs_0_3,
#line 1372 "integer.m"
  MR_Word * mercury__integer__STATE_VARIABLE_Strs_4)
#line 1372 "integer.m"
{
#line 1375 "integer.m"
  {
#line 1375 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 1375 "integer.m"
    if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1375 "integer.m"
      *mercury__integer__STATE_VARIABLE_Strs_4 = mercury__integer__STATE_VARIABLE_Strs_0_3;
#line 1375 "integer.m"
    else
#line 1376 "integer.m"
      {
#line 1376 "integer.m"
        MR_Integer mercury__integer__H_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 1376 "integer.m"
        MR_Word mercury__integer__T_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1376 "integer.m"
        MR_String mercury__integer__Str_13;
#line 1376 "integer.m"
        MR_Word mercury__integer__STATE_VARIABLE_Strs_16_16;
#line 1376 "integer.m"
        MR_String mercury__integer__S1_21;

#line 1384 "integer.m"
        {
#line 1384 "integer.m"
          mercury__string__int_to_base_string_3_p_0(mercury__integer__H_10, mercury__integer__HeadVar__1_1, &mercury__integer__S1_21);
        }
#line 1385 "integer.m"
        {
#line 1385 "integer.m"
          mercury__string__pad_left_4_p_0(mercury__integer__S1_21, (MR_Char) 48, (MR_Integer) 3, &mercury__integer__Str_13);
        }
#line 1378 "integer.m"
        {
#line 1378 "integer.m"
          mercury__integer__digits_to_strings_4_p_0(mercury__integer__HeadVar__1_1, mercury__integer__T_11, mercury__integer__STATE_VARIABLE_Strs_0_3, &mercury__integer__STATE_VARIABLE_Strs_16_16);
        }
#line 1379 "integer.m"
        {
#line 1379 "integer.m"
          MR_Word base;
#line 1379 "integer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1379 "integer.m"
          *mercury__integer__STATE_VARIABLE_Strs_4 = base;
#line 1379 "integer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Str_13));
#line 1379 "integer.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__STATE_VARIABLE_Strs_16_16));
#line 1379 "integer.m"
        }
#line 1376 "integer.m"
      }
#line 1375 "integer.m"
  }
#line 1372 "integer.m"
}

#line 1363 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_rep_1_4_f_0(
#line 1363 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1363 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1363 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1363 "integer.m"
  MR_Word mercury__integer__Carry_4)
#line 1363 "integer.m"
{
#line 1365 "integer.m"
  while (MR_TRUE)
#line 1365 "integer.m"
    {
#line 1365 "integer.m"
      /* tailcall optimized into a loop */
#line 1365 "integer.m"
      {
#line 1365 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1365 "integer.m"
        MR_Word mercury__integer__HeadVar__5_5;

#line 1365 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1365 "integer.m"
          mercury__integer__HeadVar__5_5 = mercury__integer__Carry_4;
#line 1365 "integer.m"
        else
#line 1366 "integer.m"
          {
#line 1366 "integer.m"
            MR_Integer mercury__integer__X_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 1366 "integer.m"
            MR_Word mercury__integer__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1366 "integer.m"
            MR_Word mercury__integer__V_14_14;
#line 1366 "integer.m"
            MR_Word mercury__integer__V_15_15;
#line 1366 "integer.m"
            MR_Word mercury__integer__V_16_16;
#line 1366 "integer.m"
            MR_Integer mercury__integer__L1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 1366 "integer.m"
            MR_Word mercury__integer__Ds1_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 1366 "integer.m"
            MR_Integer mercury__integer__L2_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_4, (MR_Integer) 0)));
#line 1366 "integer.m"
            MR_Word mercury__integer__Ds2_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_4, (MR_Integer) 1)));
#line 1366 "integer.m"
            MR_Word mercury__integer__V_32_32;
#line 1366 "integer.m"
            MR_Word mercury__integer__V_34_34;
#line 1366 "integer.m"
            MR_Integer mercury__integer__L1_37;
#line 1366 "integer.m"
            MR_Integer mercury__integer__L2_39;
#line 1366 "integer.m"
            MR_Integer mercury__integer__Div_41;
#line 1366 "integer.m"
            MR_Word mercury__integer__Ds_42;
#line 1366 "integer.m"
            MR_Integer mercury__integer__Len_43;
#line 1442 "integer.m"
            MR_Word mercury__integer__D1_38;
#line 1442 "integer.m"
            MR_Word mercury__integer__D2_40;

#line 1485 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_18 < mercury__integer__L2_20);
#line 1484 "integer.m"
            if (mercury__integer__succeeded)
#line 1486 "integer.m"
              {
#line 1486 "integer.m"
                MR_Word mercury__integer__V_22_22 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1486 "integer.m"
                MR_Word mercury__integer__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1486 "integer.m"
                {
#line 1486 "integer.m"
                  mercury__integer__V_15_15 = mercury__integer__printbase_pos_mul_list_4_f_0(mercury__integer__HeadVar__1_1, mercury__integer__Ds1_19, mercury__integer__V_22_22, mercury__integer__Carry_4);
                }
#line 1486 "integer.m"
              }
#line 1484 "integer.m"
            else
#line 1488 "integer.m"
              {
#line 1488 "integer.m"
                MR_Word mercury__integer__V_24_24 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1488 "integer.m"
                MR_Word mercury__integer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1488 "integer.m"
                {
#line 1488 "integer.m"
                  mercury__integer__V_15_15 = mercury__integer__printbase_pos_mul_list_4_f_0(mercury__integer__HeadVar__1_1, mercury__integer__Ds2_21, mercury__integer__V_24_24, mercury__integer__HeadVar__3_3);
                }
#line 1488 "integer.m"
              }
#line 1257 "integer.m"
            mercury__integer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1257 "integer.m"
            mercury__integer__V_32_32 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1402 "integer.m"
            {
#line 1402 "integer.m"
              mercury__integer__V_16_16 = mercury__integer__printbase_pos_int_to_digits_2_3_f_0(mercury__integer__HeadVar__1_1, mercury__integer__X_10, mercury__integer__V_32_32);
            }
#line 1442 "integer.m"
            mercury__integer__L1_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, (MR_Integer) 0)));
#line 1442 "integer.m"
            mercury__integer__D1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, (MR_Integer) 1)));
#line 1442 "integer.m"
            mercury__integer__L2_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, (MR_Integer) 0)));
#line 1442 "integer.m"
            mercury__integer__D2_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, (MR_Integer) 1)));
#line 1443 "integer.m"
            {
#line 1443 "integer.m"
              mercury__integer__printbase_add_pairs_5_p_0(mercury__integer__HeadVar__1_1, &mercury__integer__Div_41, mercury__integer__V_15_15, mercury__integer__V_16_16, &mercury__integer__Ds_42);
            }
#line 1444 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_37 > mercury__integer__L2_39);
#line 1446 "integer.m"
            if (mercury__integer__succeeded)
#line 1445 "integer.m"
              mercury__integer__Len_43 = mercury__integer__L1_37;
#line 1446 "integer.m"
            else
#line 1447 "integer.m"
              mercury__integer__Len_43 = mercury__integer__L2_39;
#line 1449 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Div_41 == (MR_Integer) 0);
#line 1451 "integer.m"
            if (mercury__integer__succeeded)
#line 1450 "integer.m"
              {
#line 1450 "integer.m"
                mercury__integer__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1450 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__Len_43));
#line 1450 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__Ds_42));
#line 1450 "integer.m"
              }
#line 1451 "integer.m"
            else
#line 1452 "integer.m"
              {
#line 1452 "integer.m"
                MR_Integer mercury__integer__V_46_46 = (mercury__integer__Len_43 + (MR_Integer) 1);
#line 1452 "integer.m"
                MR_Word mercury__integer__V_48_48;

#line 1452 "integer.m"
                {
#line 1452 "integer.m"
                  mercury__integer__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1452 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_48_48, 0) = ((MR_Box) (mercury__integer__Div_41));
#line 1452 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_48_48, 1) = ((MR_Box) (mercury__integer__Ds_42));
#line 1452 "integer.m"
                }
#line 1452 "integer.m"
                {
#line 1452 "integer.m"
                  mercury__integer__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1452 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__V_46_46));
#line 1452 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__V_48_48));
#line 1452 "integer.m"
                }
#line 1452 "integer.m"
              }
#line 1367 "integer.m"
            /* direct tailcall eliminated */
#line 1367 "integer.m"
            {
#line 1367 "integer.m"
              MR_Word mercury__integer__HeadVar__2__tmp_copy_2 = mercury__integer__Xs_11;
#line 1367 "integer.m"
              MR_Word mercury__integer__Carry__tmp_copy_4 = mercury__integer__V_14_14;

#line 1367 "integer.m"
              mercury__integer__Carry_4 = mercury__integer__Carry__tmp_copy_4;
#line 1367 "integer.m"
              mercury__integer__HeadVar__2_2 = mercury__integer__HeadVar__2__tmp_copy_2;
#line 1367 "integer.m"
            }
#line 1367 "integer.m"
            continue;
#line 1366 "integer.m"
          }
#line 1365 "integer.m"
        return mercury__integer__HeadVar__5_5;
#line 1365 "integer.m"
      }
#line 1365 "integer.m"
      break;
#line 1365 "integer.m"
    }
#line 1363 "integer.m"
}

#line 1340 "integer.m"
static MR_String MR_CALL 
mercury__integer__digits_to_string_3_f_0(
#line 1340 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 1340 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1340 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3)
#line 1340 "integer.m"
{
#line 1342 "integer.m"
  {
#line 1342 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1342 "integer.m"
    MR_String mercury__integer__HeadVar__4_4;

#line 1342 "integer.m"
    if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1342 "integer.m"
      mercury__integer__HeadVar__4_4 = (MR_String) "0";
#line 1342 "integer.m"
    else
#line 1343 "integer.m"
      {
#line 1343 "integer.m"
        MR_Word mercury__integer__DigitsInPrintBase_14;
#line 1343 "integer.m"
        MR_Word mercury__integer__V_19_19;
#line 1343 "integer.m"
        MR_Word mercury__integer__V_20_20;
#line 1343 "integer.m"
        MR_Word mercury__integer__V_29_29 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1343 "integer.m"
        MR_Word mercury__integer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1346 "integer.m"
        MR_Integer mercury__integer__V_13_13;

#line 1402 "integer.m"
        {
#line 1402 "integer.m"
          mercury__integer__V_19_19 = mercury__integer__printbase_pos_int_to_digits_2_3_f_0(mercury__integer__HeadVar__2_2, (MR_Integer) 16384, mercury__integer__V_29_29);
        }
#line 1361 "integer.m"
        {
#line 1361 "integer.m"
          mercury__integer__V_20_20 = mercury__integer__printbase_rep_1_4_f_0(mercury__integer__HeadVar__2_2, mercury__integer__HeadVar__3_3, mercury__integer__V_19_19, mercury__integer__V_29_29);
        }
#line 1346 "integer.m"
        mercury__integer__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_20_20, (MR_Integer) 0)));
#line 1346 "integer.m"
        mercury__integer__DigitsInPrintBase_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_20_20, (MR_Integer) 1)));
#line 1352 "integer.m"
        if ((mercury__integer__DigitsInPrintBase_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1353 "integer.m"
          {
#line 1354 "integer.m"
            {
#line 1354 "integer.m"
              mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.digits_to_string\'/3", (MR_String) "empty list");
            }
#line 1353 "integer.m"
          }
#line 1352 "integer.m"
        else
#line 1348 "integer.m"
          {
#line 1348 "integer.m"
            MR_Integer mercury__integer__Head_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__DigitsInPrintBase_14, (MR_Integer) 0)));
#line 1348 "integer.m"
            MR_Word mercury__integer__Tail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__DigitsInPrintBase_14, (MR_Integer) 1)));
#line 1348 "integer.m"
            MR_String mercury__integer__HeadStr_17;
#line 1348 "integer.m"
            MR_Word mercury__integer__TailStrs_18;
#line 1348 "integer.m"
            MR_Word mercury__integer__V_25_25;
#line 1348 "integer.m"
            MR_Word mercury__integer__V_26_26;

#line 1349 "integer.m"
            {
#line 1349 "integer.m"
              mercury__string__int_to_base_string_3_p_0(mercury__integer__Head_15, mercury__integer__HeadVar__1_1, &mercury__integer__HeadStr_17);
            }
#line 1350 "integer.m"
            mercury__integer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1350 "integer.m"
            {
#line 1350 "integer.m"
              mercury__integer__digits_to_strings_4_p_0(mercury__integer__HeadVar__1_1, mercury__integer__Tail_16, mercury__integer__V_25_25, &mercury__integer__TailStrs_18);
            }
#line 1351 "integer.m"
            {
#line 1351 "integer.m"
              mercury__integer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1351 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_26_26, 0) = ((MR_Box) (mercury__integer__HeadStr_17));
#line 1351 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_26_26, 1) = ((MR_Box) (mercury__integer__TailStrs_18));
#line 1351 "integer.m"
            }
#line 195 "string.opt"
            {
#line 195 "string.opt"
              return mercury__integer__HeadVar__4_4 = mercury__string__append_list_1_f_0(mercury__integer__V_26_26);
            }
#line 1348 "integer.m"
          }
#line 1343 "integer.m"
      }
#line 1342 "integer.m"
    return mercury__integer__HeadVar__4_4;
#line 1342 "integer.m"
  }
#line 1340 "integer.m"
}

#line 1299 "integer.m"
static MR_bool MR_CALL 
mercury__integer__string_to_integer_acc_3_p_0(
#line 1299 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1299 "integer.m"
  MR_Word mercury__integer__STATE_VARIABLE_Integer_0_2,
#line 1299 "integer.m"
  MR_Word * mercury__integer__STATE_VARIABLE_Integer_3)
#line 1299 "integer.m"
{
#line 1302 "integer.m"
  while (MR_TRUE)
#line 1302 "integer.m"
    {
#line 1302 "integer.m"
      /* tailcall optimized into a loop */
#line 1302 "integer.m"
      {
#line 1302 "integer.m"
        MR_bool mercury__integer__succeeded;

#line 1302 "integer.m"
        if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1302 "integer.m"
          {
#line 1302 "integer.m"
            *mercury__integer__STATE_VARIABLE_Integer_3 = mercury__integer__STATE_VARIABLE_Integer_0_2;
#line 1302 "integer.m"
            mercury__integer__succeeded = MR_TRUE;
#line 1302 "integer.m"
          }
#line 1302 "integer.m"
        else
#line 1303 "integer.m"
          {
#line 1303 "integer.m"
            MR_Char mercury__integer__C_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1303 "integer.m"
            MR_Word mercury__integer__Cs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1303 "integer.m"
            MR_Integer mercury__integer__Digit0_10;
#line 1303 "integer.m"
            MR_Integer mercury__integer__Z_11;
#line 1303 "integer.m"
            MR_Word mercury__integer__Digit_12;
#line 1303 "integer.m"
            MR_Char mercury__integer__V_15_15;
#line 1303 "integer.m"
            MR_Integer mercury__integer__V_16_16;
#line 1303 "integer.m"
            MR_Word mercury__integer__STATE_VARIABLE_Integer_17_17;
#line 1303 "integer.m"
            MR_Word mercury__integer__V_18_18;
#line 1303 "integer.m"
            MR_Integer mercury__integer__V_19_19;
#line 1303 "integer.m"
            MR_Word mercury__integer__V_27_27;
#line 1303 "integer.m"
            MR_Integer mercury__integer__V_28_28;
#line 1303 "integer.m"
            MR_Word mercury__integer__V_29_29;
#line 1303 "integer.m"
            MR_Integer mercury__integer__Len_32;
#line 1303 "integer.m"
            MR_Word mercury__integer__Digits0_33;
#line 1303 "integer.m"
            MR_Integer mercury__integer__Mod_34;
#line 1303 "integer.m"
            MR_Word mercury__integer__Digits_35;
#line 1303 "integer.m"
            MR_Integer mercury__integer__L1_40;
#line 1303 "integer.m"
            MR_Integer mercury__integer__L2_42;
#line 1303 "integer.m"
            MR_Integer mercury__integer__Div_44;
#line 1303 "integer.m"
            MR_Word mercury__integer__Ds_45;
#line 1303 "integer.m"
            MR_Integer mercury__integer__Len_46;
#line 837 "integer.m"
            MR_Word mercury__integer__D1_41;
#line 837 "integer.m"
            MR_Word mercury__integer__D2_43;

#line 74 "char.opt"
            {
#line 74 "char.opt"
              mercury__integer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__integer__C_7);
            }
#line 1303 "integer.m"
            if (mercury__integer__succeeded)
#line 1303 "integer.m"
              {
#line 110 "char.opt"
{
#define MR_PROC_LABEL mercury__integer__string_to_integer_acc_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__integer__C_7 ;
		{
#line 110 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 3220 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__Digit0_10  = Int;
#line 110 "char.opt"
}
#line 1310 "integer.m"
                mercury__integer__V_15_15 = (MR_Char) 48;
#line 110 "char.opt"
{
#define MR_PROC_LABEL mercury__integer__string_to_integer_acc_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__integer__V_15_15 ;
		{
#line 110 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 3242 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__Z_11  = Int;
#line 110 "char.opt"
}
#line 1311 "integer.m"
                mercury__integer__V_16_16 = (mercury__integer__Digit0_10 - mercury__integer__Z_11);
#line 1257 "integer.m"
                mercury__integer__V_28_28 = (MR_Integer) 0;
#line 1257 "integer.m"
                mercury__integer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1257 "integer.m"
                mercury__integer__V_27_27 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 782 "integer.m"
                {
#line 782 "integer.m"
                  mercury__integer__Digit_12 = mercury__integer__pos_int_to_digits_2_2_f_0(mercury__integer__V_16_16, mercury__integer__V_27_27);
                }
#line 1312 "integer.m"
                mercury__integer__V_19_19 = (MR_Integer) 10;
#line 813 "integer.m"
                mercury__integer__Len_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__STATE_VARIABLE_Integer_0_2, (MR_Integer) 0)));
#line 813 "integer.m"
                mercury__integer__Digits0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__STATE_VARIABLE_Integer_0_2, (MR_Integer) 1)));
#line 814 "integer.m"
                {
#line 814 "integer.m"
                  mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__V_19_19, &mercury__integer__Mod_34, mercury__integer__Digits0_33, &mercury__integer__Digits_35);
                }
#line 815 "integer.m"
                mercury__integer__succeeded = (mercury__integer__Mod_34 == (MR_Integer) 0);
#line 817 "integer.m"
                if (mercury__integer__succeeded)
#line 816 "integer.m"
                  {
#line 816 "integer.m"
                    mercury__integer__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 816 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_18_18, 0) = ((MR_Box) (mercury__integer__Len_32));
#line 816 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_18_18, 1) = ((MR_Box) (mercury__integer__Digits_35));
#line 816 "integer.m"
                  }
#line 817 "integer.m"
                else
#line 818 "integer.m"
                  {
#line 818 "integer.m"
                    MR_Integer mercury__integer__V_36_36 = (mercury__integer__Len_32 + (MR_Integer) 1);
#line 818 "integer.m"
                    MR_Word mercury__integer__V_38_38;

#line 818 "integer.m"
                    {
#line 818 "integer.m"
                      mercury__integer__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_38_38, 0) = ((MR_Box) (mercury__integer__Mod_34));
#line 818 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_38_38, 1) = ((MR_Box) (mercury__integer__Digits_35));
#line 818 "integer.m"
                    }
#line 818 "integer.m"
                    {
#line 818 "integer.m"
                      mercury__integer__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 818 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_18_18, 0) = ((MR_Box) (mercury__integer__V_36_36));
#line 818 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_18_18, 1) = ((MR_Box) (mercury__integer__V_38_38));
#line 818 "integer.m"
                    }
#line 818 "integer.m"
                  }
#line 837 "integer.m"
                mercury__integer__L1_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Digit_12, (MR_Integer) 0)));
#line 837 "integer.m"
                mercury__integer__D1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Digit_12, (MR_Integer) 1)));
#line 837 "integer.m"
                mercury__integer__L2_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_18_18, (MR_Integer) 0)));
#line 837 "integer.m"
                mercury__integer__D2_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_18_18, (MR_Integer) 1)));
#line 838 "integer.m"
                {
#line 838 "integer.m"
                  mercury__integer__add_pairs_4_p_0(&mercury__integer__Div_44, mercury__integer__Digit_12, mercury__integer__V_18_18, &mercury__integer__Ds_45);
                }
#line 839 "integer.m"
                mercury__integer__succeeded = (mercury__integer__L1_40 > mercury__integer__L2_42);
#line 841 "integer.m"
                if (mercury__integer__succeeded)
#line 840 "integer.m"
                  mercury__integer__Len_46 = mercury__integer__L1_40;
#line 841 "integer.m"
                else
#line 842 "integer.m"
                  mercury__integer__Len_46 = mercury__integer__L2_42;
#line 844 "integer.m"
                mercury__integer__succeeded = (mercury__integer__Div_44 == (MR_Integer) 0);
#line 846 "integer.m"
                if (mercury__integer__succeeded)
#line 845 "integer.m"
                  {
#line 845 "integer.m"
                    mercury__integer__STATE_VARIABLE_Integer_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 845 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__STATE_VARIABLE_Integer_17_17, 0) = ((MR_Box) (mercury__integer__Len_46));
#line 845 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__STATE_VARIABLE_Integer_17_17, 1) = ((MR_Box) (mercury__integer__Ds_45));
#line 845 "integer.m"
                  }
#line 846 "integer.m"
                else
#line 847 "integer.m"
                  {
#line 847 "integer.m"
                    MR_Integer mercury__integer__V_49_49 = (mercury__integer__Len_46 + (MR_Integer) 1);
#line 847 "integer.m"
                    MR_Word mercury__integer__V_51_51;

#line 847 "integer.m"
                    {
#line 847 "integer.m"
                      mercury__integer__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_51_51, 0) = ((MR_Box) (mercury__integer__Div_44));
#line 847 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_51_51, 1) = ((MR_Box) (mercury__integer__Ds_45));
#line 847 "integer.m"
                    }
#line 847 "integer.m"
                    {
#line 847 "integer.m"
                      mercury__integer__STATE_VARIABLE_Integer_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 847 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__STATE_VARIABLE_Integer_17_17, 0) = ((MR_Box) (mercury__integer__V_49_49));
#line 847 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__STATE_VARIABLE_Integer_17_17, 1) = ((MR_Box) (mercury__integer__V_51_51));
#line 847 "integer.m"
                    }
#line 847 "integer.m"
                  }
#line 1313 "integer.m"
                /* direct tailcall eliminated */
#line 1313 "integer.m"
                {
#line 1313 "integer.m"
                  MR_Word mercury__integer__HeadVar__1__tmp_copy_1 = mercury__integer__Cs_8;
#line 1313 "integer.m"
                  MR_Word mercury__integer__STATE_VARIABLE_Integer_0__tmp_copy_2 = mercury__integer__STATE_VARIABLE_Integer_17_17;

#line 1313 "integer.m"
                  mercury__integer__STATE_VARIABLE_Integer_0_2 = mercury__integer__STATE_VARIABLE_Integer_0__tmp_copy_2;
#line 1313 "integer.m"
                  mercury__integer__HeadVar__1_1 = mercury__integer__HeadVar__1__tmp_copy_1;
#line 1313 "integer.m"
                }
#line 1313 "integer.m"
                continue;
#line 1303 "integer.m"
              }
#line 1303 "integer.m"
          }
#line 1302 "integer.m"
        return mercury__integer__succeeded;
#line 1302 "integer.m"
      }
#line 1302 "integer.m"
      break;
#line 1302 "integer.m"
    }
#line 1299 "integer.m"
}

#line 1284 "integer.m"
MR_bool MR_CALL 
mercury__integer__string_to_integer_2_p_0(
#line 1284 "integer.m"
  MR_Word mercury__integer__Chars_3,
#line 1284 "integer.m"
  MR_Word * mercury__integer__Integer_4)
#line 1284 "integer.m"
{
#line 1286 "integer.m"
  {
#line 1286 "integer.m"
    MR_bool mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__Chars_3)) == (MR_mktag((MR_Integer) 1)));
#line 1286 "integer.m"
    MR_Char mercury__integer__HeadChar_5;
#line 1286 "integer.m"
    MR_Word mercury__integer__TailChars_6;

#line 1287 "integer.m"
    if (mercury__integer__succeeded)
#line 1287 "integer.m"
      {
#line 1287 "integer.m"
        mercury__integer__HeadChar_5 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Chars_3, (MR_Integer) 0)));
#line 1287 "integer.m"
        mercury__integer__TailChars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Chars_3, (MR_Integer) 1)));
#line 1288 "integer.m"
        mercury__integer__succeeded = (mercury__integer__HeadChar_5 == (MR_Char) 45);
#line 1292 "integer.m"
        if (mercury__integer__succeeded)
#line 1289 "integer.m"
          {
#line 1289 "integer.m"
            MR_Word mercury__integer__PosInteger_9;
#line 1289 "integer.m"
            MR_Word mercury__integer__V_12_12;
#line 1289 "integer.m"
            MR_Integer mercury__integer__V_13_13;
#line 1289 "integer.m"
            MR_Integer mercury__integer__V_16_16;
#line 1289 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 1289 "integer.m"
            MR_Char mercury__integer__V_7_7;
#line 1289 "integer.m"
            MR_Word mercury__integer__V_8_8;

#line 1289 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__TailChars_6)) == (MR_mktag((MR_Integer) 1)));
#line 1289 "integer.m"
            if (mercury__integer__succeeded)
#line 1289 "integer.m"
              {
#line 1289 "integer.m"
                mercury__integer__V_7_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__TailChars_6, (MR_Integer) 0)));
#line 1289 "integer.m"
                mercury__integer__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__TailChars_6, (MR_Integer) 1)));
#line 1257 "integer.m"
                mercury__integer__V_16_16 = (MR_Integer) 0;
#line 1257 "integer.m"
                mercury__integer__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1257 "integer.m"
                mercury__integer__V_12_12 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1290 "integer.m"
                {
#line 1290 "integer.m"
                  mercury__integer__succeeded = mercury__integer__string_to_integer_acc_3_p_0(mercury__integer__TailChars_6, mercury__integer__V_12_12, &mercury__integer__PosInteger_9);
                }
#line 1289 "integer.m"
                if (mercury__integer__succeeded)
#line 1289 "integer.m"
                  {
#line 1291 "integer.m"
                    mercury__integer__V_13_13 = (MR_Integer) -1;
#line 1291 "integer.m"
                    {
#line 1291 "integer.m"
                      *mercury__integer__Integer_4 = mercury__integer__big_sign_2_f_0(mercury__integer__V_13_13, mercury__integer__PosInteger_9);
                    }
#line 1291 "integer.m"
                    mercury__integer__succeeded = MR_TRUE;
#line 1289 "integer.m"
                  }
#line 1289 "integer.m"
              }
#line 1289 "integer.m"
          }
#line 1292 "integer.m"
        else
#line 1295 "integer.m"
          {
#line 1292 "integer.m"
            mercury__integer__succeeded = (mercury__integer__HeadChar_5 == (MR_Char) 43);
#line 1295 "integer.m"
            if (mercury__integer__succeeded)
#line 1293 "integer.m"
              {
#line 1293 "integer.m"
                MR_Word mercury__integer__V_14_14;
#line 1293 "integer.m"
                MR_Integer mercury__integer__V_18_18;
#line 1293 "integer.m"
                MR_Word mercury__integer__V_19_19;
#line 1293 "integer.m"
                MR_Char mercury__integer__V_10_10;
#line 1293 "integer.m"
                MR_Word mercury__integer__V_11_11;

#line 1293 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__TailChars_6)) == (MR_mktag((MR_Integer) 1)));
#line 1293 "integer.m"
                if (mercury__integer__succeeded)
#line 1293 "integer.m"
                  {
#line 1293 "integer.m"
                    mercury__integer__V_10_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__TailChars_6, (MR_Integer) 0)));
#line 1293 "integer.m"
                    mercury__integer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__TailChars_6, (MR_Integer) 1)));
#line 1257 "integer.m"
                    mercury__integer__V_18_18 = (MR_Integer) 0;
#line 1257 "integer.m"
                    mercury__integer__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1257 "integer.m"
                    mercury__integer__V_14_14 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1294 "integer.m"
                    {
#line 1294 "integer.m"
                      return mercury__integer__succeeded = mercury__integer__string_to_integer_acc_3_p_0(mercury__integer__TailChars_6, mercury__integer__V_14_14, mercury__integer__Integer_4);
                    }
#line 1293 "integer.m"
                  }
#line 1293 "integer.m"
              }
#line 1295 "integer.m"
            else
#line 1296 "integer.m"
              {
#line 1296 "integer.m"
                MR_Word mercury__integer__V_15_15 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1296 "integer.m"
                MR_Word mercury__integer__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1296 "integer.m"
                {
#line 1296 "integer.m"
                  return mercury__integer__succeeded = mercury__integer__string_to_integer_acc_3_p_0(mercury__integer__Chars_3, mercury__integer__V_15_15, mercury__integer__Integer_4);
                }
#line 1296 "integer.m"
              }
#line 1295 "integer.m"
          }
#line 1287 "integer.m"
      }
#line 1286 "integer.m"
    return mercury__integer__succeeded;
#line 1286 "integer.m"
  }
#line 1284 "integer.m"
}

#line 1241 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__int_list_2_f_0(
#line 1241 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1241 "integer.m"
  MR_Integer mercury__integer__Accum_2)
#line 1241 "integer.m"
{
#line 1243 "integer.m"
  while (MR_TRUE)
#line 1243 "integer.m"
    {
#line 1243 "integer.m"
      /* tailcall optimized into a loop */
#line 1243 "integer.m"
      {
#line 1243 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1243 "integer.m"
        MR_Integer mercury__integer__HeadVar__3_3;

#line 1243 "integer.m"
        if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1243 "integer.m"
          mercury__integer__HeadVar__3_3 = mercury__integer__Accum_2;
#line 1243 "integer.m"
        else
#line 1244 "integer.m"
          {
#line 1244 "integer.m"
            MR_Integer mercury__integer__H_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1244 "integer.m"
            MR_Word mercury__integer__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1244 "integer.m"
            MR_Integer mercury__integer__V_8_8;
#line 1244 "integer.m"
            MR_Integer mercury__integer__V_9_9 = (mercury__integer__Accum_2 * (MR_Integer) 16384);

#line 1244 "integer.m"
            mercury__integer__V_8_8 = (mercury__integer__V_9_9 + mercury__integer__H_5);
#line 1244 "integer.m"
            /* direct tailcall eliminated */
#line 1244 "integer.m"
            {
#line 1244 "integer.m"
              MR_Word mercury__integer__HeadVar__1__tmp_copy_1 = mercury__integer__T_6;
#line 1244 "integer.m"
              MR_Integer mercury__integer__Accum__tmp_copy_2 = mercury__integer__V_8_8;

#line 1244 "integer.m"
              mercury__integer__Accum_2 = mercury__integer__Accum__tmp_copy_2;
#line 1244 "integer.m"
              mercury__integer__HeadVar__1_1 = mercury__integer__HeadVar__1__tmp_copy_1;
#line 1244 "integer.m"
            }
#line 1244 "integer.m"
            continue;
#line 1244 "integer.m"
          }
#line 1243 "integer.m"
        return mercury__integer__HeadVar__3_3;
#line 1243 "integer.m"
      }
#line 1243 "integer.m"
      break;
#line 1243 "integer.m"
    }
#line 1241 "integer.m"
}

#line 1219 "integer.m"
MR_Float MR_CALL 
mercury__integer__float_list_3_f_0(
#line 1219 "integer.m"
  MR_Float mercury__integer__FBase_1,
#line 1219 "integer.m"
  MR_Float mercury__integer__Accum_2,
#line 1219 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3)
#line 1219 "integer.m"
{
#line 1221 "integer.m"
  while (MR_TRUE)
#line 1221 "integer.m"
    {
#line 1221 "integer.m"
      /* tailcall optimized into a loop */
#line 1221 "integer.m"
      {
#line 1221 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1221 "integer.m"
        MR_Float mercury__integer__HeadVar__4_4;

#line 1221 "integer.m"
        if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1221 "integer.m"
          mercury__integer__HeadVar__4_4 = mercury__integer__Accum_2;
#line 1221 "integer.m"
        else
#line 1222 "integer.m"
          {
#line 1222 "integer.m"
            MR_Integer mercury__integer__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 1222 "integer.m"
            MR_Word mercury__integer__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 1222 "integer.m"
            MR_Float mercury__integer__V_11_11;
#line 1222 "integer.m"
            MR_Float mercury__integer__V_12_12 = (mercury__integer__Accum_2 * mercury__integer__FBase_1);
#line 1222 "integer.m"
            MR_Float mercury__integer__V_13_13;

#line 46 "float.opt"
{
#define MR_PROC_LABEL mercury__integer__float_list_3_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  mercury__integer__H_9 ;
		{
#line 46 "float.opt"

    FloatVal = IntVal;

#line 3705 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_13_13  = FloatVal;
#line 46 "float.opt"
}
#line 1223 "integer.m"
            mercury__integer__V_11_11 = (mercury__integer__V_12_12 + mercury__integer__V_13_13);
#line 1223 "integer.m"
            /* direct tailcall eliminated */
#line 1223 "integer.m"
            {
#line 1223 "integer.m"
              MR_Float mercury__integer__Accum__tmp_copy_2 = mercury__integer__V_11_11;
#line 1223 "integer.m"
              MR_Word mercury__integer__HeadVar__3__tmp_copy_3 = mercury__integer__T_10;

#line 1223 "integer.m"
              mercury__integer__HeadVar__3_3 = mercury__integer__HeadVar__3__tmp_copy_3;
#line 1223 "integer.m"
              mercury__integer__Accum_2 = mercury__integer__Accum__tmp_copy_2;
#line 1223 "integer.m"
            }
#line 1223 "integer.m"
            continue;
#line 1222 "integer.m"
          }
#line 1221 "integer.m"
        return mercury__integer__HeadVar__4_4;
#line 1221 "integer.m"
      }
#line 1221 "integer.m"
      break;
#line 1221 "integer.m"
    }
#line 1219 "integer.m"
}

#line 1194 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_pow_sqmul_2_f_0(
#line 1194 "integer.m"
  MR_Word mercury__integer__A_4,
#line 1194 "integer.m"
  MR_Word mercury__integer__N_5)
#line 1194 "integer.m"
{
#line 1199 "integer.m"
  {
#line 1199 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1199 "integer.m"
    MR_Word mercury__integer__Result_6;
#line 1197 "integer.m"
    MR_Word mercury__integer__V_16_16 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1197 "integer.m"
    MR_Word mercury__integer__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1197 "integer.m"
    {
#line 1197 "integer.m"
      mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__N_5, mercury__integer__V_16_16);
    }
#line 1199 "integer.m"
    if (mercury__integer__succeeded)
#line 1259 "integer.m"
      mercury__integer__Result_6 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 1199 "integer.m"
    else
#line 1201 "integer.m"
      {
#line 1199 "integer.m"
        MR_Word mercury__integer__V_17_17 = (MR_Word) &mercury__integer_scalar_common_1[4];

#line 1199 "integer.m"
        {
#line 1199 "integer.m"
          mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__N_5, mercury__integer__V_17_17);
        }
#line 1201 "integer.m"
        if (mercury__integer__succeeded)
#line 1200 "integer.m"
          mercury__integer__Result_6 = mercury__integer__A_4;
#line 1201 "integer.m"
        else
#line 1206 "integer.m"
          {
#line 1202 "integer.m"
            MR_Word mercury__integer__V_9_9;
#line 1202 "integer.m"
            MR_Word mercury__integer__V_10_10 = (MR_Word) &mercury__integer_scalar_common_1[6];
#line 1202 "integer.m"
            MR_Word mercury__integer__V_18_18;
#line 1202 "integer.m"
            MR_Word mercury__integer__V_36_36;

#line 356 "integer.m"
            {
#line 356 "integer.m"
              mercury__integer__V_9_9 = mercury__integer__big_mod_2_f_0(mercury__integer__N_5, mercury__integer__V_10_10);
            }
#line 1257 "integer.m"
            mercury__integer__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1257 "integer.m"
            mercury__integer__V_18_18 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1202 "integer.m"
            {
#line 1202 "integer.m"
              mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__V_9_9, mercury__integer__V_18_18);
            }
#line 1206 "integer.m"
            if (mercury__integer__succeeded)
#line 1204 "integer.m"
              {
#line 1204 "integer.m"
                MR_Word mercury__integer__HalfResult_7;
#line 1204 "integer.m"
                MR_Word mercury__integer__V_11_11;
#line 1204 "integer.m"
                MR_Word mercury__integer__V_12_12 = (MR_Word) &mercury__integer_scalar_common_1[6];
#line 466 "integer.m"
                MR_Word mercury__integer___Rem_46;

#line 466 "integer.m"
                {
#line 466 "integer.m"
                  mercury__integer__big_quot_rem_4_p_0(mercury__integer__N_5, mercury__integer__V_12_12, &mercury__integer__V_11_11, &mercury__integer___Rem_46);
                }
#line 1204 "integer.m"
                {
#line 1204 "integer.m"
                  mercury__integer__HalfResult_7 = mercury__integer__big_pow_sqmul_2_f_0(mercury__integer__A_4, mercury__integer__V_11_11);
                }
#line 348 "integer.m"
                {
#line 348 "integer.m"
                  return mercury__integer__Result_6 = mercury__integer__big_mul_2_f_0(mercury__integer__HalfResult_7, mercury__integer__HalfResult_7);
                }
#line 1204 "integer.m"
              }
#line 1206 "integer.m"
            else
#line 1208 "integer.m"
              {
#line 1208 "integer.m"
                MR_Word mercury__integer__SubResult_8;
#line 1208 "integer.m"
                MR_Word mercury__integer__V_14_14;
#line 1208 "integer.m"
                MR_Word mercury__integer__V_15_15 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 1208 "integer.m"
                MR_Word mercury__integer__V_55_55;
#line 1208 "integer.m"
                MR_Integer mercury__integer__S_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, (MR_Integer) 0)));
#line 1208 "integer.m"
                MR_Word mercury__integer__Digits0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, (MR_Integer) 1)));
#line 1208 "integer.m"
                MR_Word mercury__integer__Digits_58;
#line 1208 "integer.m"
                MR_Integer mercury__integer__V_59_59 = ((MR_Integer) 0 - mercury__integer__S_56);

#line 445 "integer.m"
                {
#line 445 "integer.m"
                  mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_57, &mercury__integer__Digits_58);
                }
#line 444 "integer.m"
                {
#line 444 "integer.m"
                  mercury__integer__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_55_55, 0) = ((MR_Box) (mercury__integer__V_59_59));
#line 444 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_55_55, 1) = ((MR_Box) (mercury__integer__Digits_58));
#line 444 "integer.m"
                }
#line 346 "integer.m"
                {
#line 346 "integer.m"
                  mercury__integer__V_14_14 = mercury__integer__big_plus_2_f_0(mercury__integer__N_5, mercury__integer__V_55_55);
                }
#line 1208 "integer.m"
                {
#line 1208 "integer.m"
                  mercury__integer__SubResult_8 = mercury__integer__big_pow_sqmul_2_f_0(mercury__integer__A_4, mercury__integer__V_14_14);
                }
#line 348 "integer.m"
                {
#line 348 "integer.m"
                  return mercury__integer__Result_6 = mercury__integer__big_mul_2_f_0(mercury__integer__A_4, mercury__integer__SubResult_8);
                }
#line 1208 "integer.m"
              }
#line 1206 "integer.m"
          }
#line 1201 "integer.m"
      }
#line 1199 "integer.m"
    return mercury__integer__Result_6;
#line 1199 "integer.m"
  }
#line 1194 "integer.m"
}

#line 1177 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_pow_2_f_0(
#line 1177 "integer.m"
  MR_Word mercury__integer__A_4,
#line 1177 "integer.m"
  MR_Word mercury__integer__N_5)
#line 1177 "integer.m"
{
#line 1182 "integer.m"
  {
#line 1182 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1182 "integer.m"
    MR_Word mercury__integer__Result_6;
#line 1180 "integer.m"
    MR_Word mercury__integer__V_11_11 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1180 "integer.m"
    MR_Word mercury__integer__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1180 "integer.m"
    {
#line 1180 "integer.m"
      mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__N_5, mercury__integer__V_11_11);
    }
#line 1182 "integer.m"
    if (mercury__integer__succeeded)
#line 1259 "integer.m"
      mercury__integer__Result_6 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 1182 "integer.m"
    else
#line 1184 "integer.m"
      {
#line 1182 "integer.m"
        MR_Word mercury__integer__V_12_12 = (MR_Word) &mercury__integer_scalar_common_1[4];

#line 1182 "integer.m"
        {
#line 1182 "integer.m"
          mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__N_5, mercury__integer__V_12_12);
        }
#line 1184 "integer.m"
        if (mercury__integer__succeeded)
#line 1183 "integer.m"
          mercury__integer__Result_6 = mercury__integer__A_4;
#line 1184 "integer.m"
        else
#line 1186 "integer.m"
          {
#line 1184 "integer.m"
            MR_Word mercury__integer__V_13_13 = (MR_Word) &mercury__integer_scalar_common_1[4];

#line 1184 "integer.m"
            {
#line 1184 "integer.m"
              mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__A_4, mercury__integer__V_13_13);
            }
#line 1186 "integer.m"
            if (mercury__integer__succeeded)
#line 1259 "integer.m"
              mercury__integer__Result_6 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 1186 "integer.m"
            else
#line 1188 "integer.m"
              {
#line 1188 "integer.m"
                MR_Word mercury__integer__V_14_14 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1186 "integer.m"
                MR_Word mercury__integer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1186 "integer.m"
                {
#line 1186 "integer.m"
                  mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__A_4, mercury__integer__V_14_14);
                }
#line 1188 "integer.m"
                if (mercury__integer__succeeded)
#line 1257 "integer.m"
                  mercury__integer__Result_6 = mercury__integer__V_14_14;
#line 1188 "integer.m"
                else
#line 1190 "integer.m"
                  {
#line 1188 "integer.m"
                    MR_Word mercury__integer__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__N_5, (MR_Integer) 1)));
#line 1188 "integer.m"
                    MR_Integer mercury__integer__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__N_5, (MR_Integer) 0)));
#line 1188 "integer.m"
                    MR_Integer mercury__integer__V_8_8;
#line 1188 "integer.m"
                    MR_Word mercury__integer__V_9_9;

#line 1188 "integer.m"
                    mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 1188 "integer.m"
                    if (mercury__integer__succeeded)
#line 1188 "integer.m"
                      {
#line 1188 "integer.m"
                        mercury__integer__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_10_10, (MR_Integer) 0)));
#line 1188 "integer.m"
                        mercury__integer__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_10_10, (MR_Integer) 1)));
#line 1189 "integer.m"
                        {
#line 1189 "integer.m"
                          return mercury__integer__Result_6 = mercury__integer__big_pow_sqmul_2_f_0(mercury__integer__A_4, mercury__integer__N_5);
                        }
#line 1188 "integer.m"
                      }
#line 1188 "integer.m"
                    else
#line 1257 "integer.m"
                      {
#line 1257 "integer.m"
                        MR_Word mercury__integer__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1257 "integer.m"
                        mercury__integer__Result_6 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1257 "integer.m"
                      }
#line 1190 "integer.m"
                  }
#line 1188 "integer.m"
              }
#line 1186 "integer.m"
          }
#line 1184 "integer.m"
      }
#line 1182 "integer.m"
    return mercury__integer__Result_6;
#line 1182 "integer.m"
  }
#line 1177 "integer.m"
}

#line 1162 "integer.m"
static MR_bool MR_CALL 
mercury__integer__pos_geq_2_p_0(
#line 1162 "integer.m"
  MR_Word mercury__integer__Xs_3,
#line 1162 "integer.m"
  MR_Word mercury__integer__Ys_4)
#line 1162 "integer.m"
{
#line 1164 "integer.m"
  {
#line 1164 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1164 "integer.m"
    MR_Word mercury__integer__C_5;

#line 695 "integer.m"
    {
#line 695 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__Xs_3, mercury__integer__Ys_4);
    }
#line 1167 "integer.m"
#line 1167 "integer.m"
    switch (mercury__integer__C_5) {
#line 1167 "integer.m"
      default:
#line 1167 "integer.m"
        mercury__integer__succeeded = MR_FALSE;
#line 1167 "integer.m"
        break;
#line 1167 "integer.m"
      case (MR_Integer) 0:
#line 1167 "integer.m"
        mercury__integer__succeeded = MR_TRUE;
#line 1167 "integer.m"
        break;
#line 1167 "integer.m"
      case (MR_Integer) 2:
#line 1166 "integer.m"
        mercury__integer__succeeded = MR_TRUE;
#line 1167 "integer.m"
        break;
#line 1167 "integer.m"
    }
#line 1164 "integer.m"
    return mercury__integer__succeeded;
#line 1164 "integer.m"
  }
#line 1162 "integer.m"
}

#line 1151 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_3_f_0(
#line 1151 "integer.m"
  MR_Integer mercury__integer__X_1,
#line 1151 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1151 "integer.m"
  MR_Integer mercury__integer__D_3)
#line 1151 "integer.m"
{
#line 1153 "integer.m"
  {
#line 1153 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1153 "integer.m"
    MR_Word mercury__integer__HeadVar__4_4;

#line 1153 "integer.m"
    if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1153 "integer.m"
      {
#line 1153 "integer.m"
        MR_Word mercury__integer__V_8_8;
#line 1153 "integer.m"
        MR_Integer mercury__integer__V_9_9;
#line 1153 "integer.m"
        MR_Word mercury__integer__V_10_10;

#line 1153 "integer.m"
        {
#line 1153 "integer.m"
          mercury__integer__V_9_9 = mercury__int__div_2_f_0(mercury__integer__X_1, mercury__integer__D_3);
        }
#line 1153 "integer.m"
        mercury__integer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1153 "integer.m"
        {
#line 1153 "integer.m"
          mercury__integer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_8_8, 0) = ((MR_Box) (mercury__integer__V_9_9));
#line 1153 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_8_8, 1) = ((MR_Box) (mercury__integer__V_10_10));
#line 1153 "integer.m"
        }
#line 1153 "integer.m"
        {
#line 1153 "integer.m"
          mercury__integer__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1153 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 1153 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, 1) = ((MR_Box) (mercury__integer__V_8_8));
#line 1153 "integer.m"
        }
#line 1153 "integer.m"
      }
#line 1153 "integer.m"
    else
#line 1154 "integer.m"
      {
#line 1154 "integer.m"
        MR_Integer mercury__integer__H_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 1154 "integer.m"
        MR_Word mercury__integer__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1154 "integer.m"
        MR_Integer mercury__integer__Len_15;
#line 1154 "integer.m"
        MR_Word mercury__integer__Tail_16;
#line 1154 "integer.m"
        MR_Integer mercury__integer__V_17_17;
#line 1154 "integer.m"
        MR_Word mercury__integer__V_19_19;
#line 1154 "integer.m"
        MR_Integer mercury__integer__V_20_20;
#line 1154 "integer.m"
        MR_Word mercury__integer__V_21_21;
#line 1154 "integer.m"
        MR_Integer mercury__integer__V_22_22;
#line 1154 "integer.m"
        MR_Integer mercury__integer__V_23_23;
#line 1154 "integer.m"
        MR_Integer mercury__integer__V_24_24;

#line 1154 "integer.m"
        {
#line 1154 "integer.m"
          mercury__integer__V_20_20 = mercury__int__div_2_f_0(mercury__integer__X_1, mercury__integer__D_3);
        }
#line 193 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__div_by_digit_2_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 193 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 4201 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 193 "int.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 354 "int.opt"
        if (mercury__integer__succeeded)
#line 355 "int.opt"
          mercury__integer__succeeded = (mercury__integer__D_3 == (MR_Integer) 0);
#line 360 "int.opt"
        if (mercury__integer__succeeded)
#line 357 "int.opt"
          {
#line 357 "int.opt"
            MR_Word mercury__integer__TypeCtorInfo_9_31 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 357 "int.opt"
            MR_Word mercury__integer__V_7_29 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

#line 359 "int.opt"
            {
#line 359 "int.opt"
              mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_31, ((MR_Box) (mercury__integer__V_7_29)));
            }
#line 357 "int.opt"
          }
#line 360 "int.opt"
        else
#line 361 "int.opt"
          mercury__integer__V_24_24 = (mercury__integer__X_1 % mercury__integer__D_3);
#line 1155 "integer.m"
        mercury__integer__V_23_23 = (mercury__integer__V_24_24 * (MR_Integer) 16384);
#line 1155 "integer.m"
        mercury__integer__V_22_22 = (mercury__integer__V_23_23 + mercury__integer__H_12);
#line 1155 "integer.m"
        {
#line 1155 "integer.m"
          mercury__integer__V_21_21 = mercury__integer__div_by_digit_2_3_f_0(mercury__integer__V_22_22, mercury__integer__T_13, mercury__integer__D_3);
        }
#line 1155 "integer.m"
        mercury__integer__Len_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_21_21, (MR_Integer) 0)));
#line 1155 "integer.m"
        mercury__integer__Tail_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_21_21, (MR_Integer) 1)));
#line 1154 "integer.m"
        mercury__integer__V_17_17 = (mercury__integer__Len_15 + (MR_Integer) 1);
#line 1154 "integer.m"
        {
#line 1154 "integer.m"
          mercury__integer__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 1154 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__Tail_16));
#line 1154 "integer.m"
        }
#line 1154 "integer.m"
        {
#line 1154 "integer.m"
          mercury__integer__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1154 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, 0) = ((MR_Box) (mercury__integer__V_17_17));
#line 1154 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, 1) = ((MR_Box) (mercury__integer__V_19_19));
#line 1154 "integer.m"
        }
#line 1154 "integer.m"
      }
#line 1153 "integer.m"
    return mercury__integer__HeadVar__4_4;
#line 1153 "integer.m"
  }
#line 1151 "integer.m"
}

#line 1133 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_1_3_f_0(
#line 1133 "integer.m"
  MR_Integer mercury__integer__X_1,
#line 1133 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1133 "integer.m"
  MR_Integer mercury__integer__D_3)
#line 1133 "integer.m"
{
#line 1135 "integer.m"
  while (MR_TRUE)
#line 1135 "integer.m"
    {
#line 1135 "integer.m"
      /* tailcall optimized into a loop */
#line 1135 "integer.m"
      {
#line 1135 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1135 "integer.m"
        MR_Word mercury__integer__Integer_4;

#line 1135 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1135 "integer.m"
          {
#line 1135 "integer.m"
            MR_Integer mercury__integer__Q_8;

#line 1136 "integer.m"
            {
#line 1136 "integer.m"
              mercury__integer__Q_8 = mercury__int__div_2_f_0(mercury__integer__X_1, mercury__integer__D_3);
            }
#line 1137 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Q_8 == (MR_Integer) 0);
#line 1139 "integer.m"
            if (mercury__integer__succeeded)
#line 1257 "integer.m"
              {
#line 1257 "integer.m"
                MR_Word mercury__integer__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1257 "integer.m"
                mercury__integer__Integer_4 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1257 "integer.m"
              }
#line 1139 "integer.m"
            else
#line 1140 "integer.m"
              {
#line 1140 "integer.m"
                MR_Word mercury__integer__V_10_10;
#line 1140 "integer.m"
                MR_Word mercury__integer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1140 "integer.m"
                {
#line 1140 "integer.m"
                  mercury__integer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_10_10, 0) = ((MR_Box) (mercury__integer__Q_8));
#line 1140 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_10_10, 1) = ((MR_Box) (mercury__integer__V_11_11));
#line 1140 "integer.m"
                }
#line 1140 "integer.m"
                {
#line 1140 "integer.m"
                  mercury__integer__Integer_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1140 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 1140 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 1) = ((MR_Box) (mercury__integer__V_10_10));
#line 1140 "integer.m"
                }
#line 1140 "integer.m"
              }
#line 1135 "integer.m"
          }
#line 1135 "integer.m"
        else
#line 1142 "integer.m"
          {
#line 1142 "integer.m"
            MR_Integer mercury__integer__H_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 1142 "integer.m"
            MR_Word mercury__integer__T_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1142 "integer.m"
            MR_Integer mercury__integer__Q_17;

#line 1143 "integer.m"
            {
#line 1143 "integer.m"
              mercury__integer__Q_17 = mercury__int__div_2_f_0(mercury__integer__X_1, mercury__integer__D_3);
            }
#line 1144 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Q_17 == (MR_Integer) 0);
#line 1146 "integer.m"
            if (mercury__integer__succeeded)
#line 1145 "integer.m"
              {
#line 1145 "integer.m"
                MR_Integer mercury__integer__V_20_20;
#line 1145 "integer.m"
                MR_Integer mercury__integer__V_21_21;
#line 1145 "integer.m"
                MR_Integer mercury__integer__V_22_22;

#line 193 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__div_by_digit_1_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 193 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 4404 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 193 "int.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 354 "int.opt"
                if (mercury__integer__succeeded)
#line 355 "int.opt"
                  mercury__integer__succeeded = (mercury__integer__D_3 == (MR_Integer) 0);
#line 360 "int.opt"
                if (mercury__integer__succeeded)
#line 357 "int.opt"
                  {
#line 357 "int.opt"
                    MR_Word mercury__integer__TypeCtorInfo_9_39 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 357 "int.opt"
                    MR_Word mercury__integer__V_7_37 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

#line 359 "int.opt"
                    {
#line 359 "int.opt"
                      mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_39, ((MR_Box) (mercury__integer__V_7_37)));
                    }
#line 357 "int.opt"
                  }
#line 360 "int.opt"
                else
#line 361 "int.opt"
                  mercury__integer__V_22_22 = (mercury__integer__X_1 % mercury__integer__D_3);
#line 1145 "integer.m"
                mercury__integer__V_21_21 = (mercury__integer__V_22_22 * (MR_Integer) 16384);
#line 1145 "integer.m"
                mercury__integer__V_20_20 = (mercury__integer__V_21_21 + mercury__integer__H_13);
#line 1145 "integer.m"
                /* direct tailcall eliminated */
#line 1145 "integer.m"
                {
#line 1145 "integer.m"
                  MR_Integer mercury__integer__X__tmp_copy_1 = mercury__integer__V_20_20;
#line 1145 "integer.m"
                  MR_Word mercury__integer__HeadVar__2__tmp_copy_2 = mercury__integer__T_14;

#line 1145 "integer.m"
                  mercury__integer__HeadVar__2_2 = mercury__integer__HeadVar__2__tmp_copy_2;
#line 1145 "integer.m"
                  mercury__integer__X_1 = mercury__integer__X__tmp_copy_1;
#line 1145 "integer.m"
                }
#line 1145 "integer.m"
                continue;
#line 1145 "integer.m"
              }
#line 1146 "integer.m"
            else
#line 1147 "integer.m"
              {
#line 1147 "integer.m"
                MR_Integer mercury__integer__L_18;
#line 1147 "integer.m"
                MR_Word mercury__integer__Ds_19;
#line 1147 "integer.m"
                MR_Word mercury__integer__V_24_24;
#line 1147 "integer.m"
                MR_Integer mercury__integer__V_25_25;
#line 1147 "integer.m"
                MR_Integer mercury__integer__V_26_26;
#line 1147 "integer.m"
                MR_Integer mercury__integer__V_27_27;
#line 1147 "integer.m"
                MR_Integer mercury__integer__V_29_29;
#line 1147 "integer.m"
                MR_Word mercury__integer__V_31_31;

#line 193 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__div_by_digit_1_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 193 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 4496 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 193 "int.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 354 "int.opt"
                if (mercury__integer__succeeded)
#line 355 "int.opt"
                  mercury__integer__succeeded = (mercury__integer__D_3 == (MR_Integer) 0);
#line 360 "int.opt"
                if (mercury__integer__succeeded)
#line 357 "int.opt"
                  {
#line 357 "int.opt"
                    MR_Word mercury__integer__TypeCtorInfo_9_45 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 357 "int.opt"
                    MR_Word mercury__integer__V_7_43 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

#line 359 "int.opt"
                    {
#line 359 "int.opt"
                      mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_45, ((MR_Box) (mercury__integer__V_7_43)));
                    }
#line 357 "int.opt"
                  }
#line 360 "int.opt"
                else
#line 361 "int.opt"
                  mercury__integer__V_27_27 = (mercury__integer__X_1 % mercury__integer__D_3);
#line 1147 "integer.m"
                mercury__integer__V_26_26 = (mercury__integer__V_27_27 * (MR_Integer) 16384);
#line 1147 "integer.m"
                mercury__integer__V_25_25 = (mercury__integer__V_26_26 + mercury__integer__H_13);
#line 1147 "integer.m"
                {
#line 1147 "integer.m"
                  mercury__integer__V_24_24 = mercury__integer__div_by_digit_2_3_f_0(mercury__integer__V_25_25, mercury__integer__T_14, mercury__integer__D_3);
                }
#line 1147 "integer.m"
                mercury__integer__L_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, (MR_Integer) 0)));
#line 1147 "integer.m"
                mercury__integer__Ds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, (MR_Integer) 1)));
#line 1148 "integer.m"
                mercury__integer__V_29_29 = (mercury__integer__L_18 + (MR_Integer) 1);
#line 1148 "integer.m"
                {
#line 1148 "integer.m"
                  mercury__integer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_31_31, 0) = ((MR_Box) (mercury__integer__Q_17));
#line 1148 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_31_31, 1) = ((MR_Box) (mercury__integer__Ds_19));
#line 1148 "integer.m"
                }
#line 1148 "integer.m"
                {
#line 1148 "integer.m"
                  mercury__integer__Integer_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1148 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 0) = ((MR_Box) (mercury__integer__V_29_29));
#line 1148 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 1) = ((MR_Box) (mercury__integer__V_31_31));
#line 1148 "integer.m"
                }
#line 1147 "integer.m"
              }
#line 1142 "integer.m"
          }
#line 1135 "integer.m"
        return mercury__integer__Integer_4;
#line 1135 "integer.m"
      }
#line 1135 "integer.m"
      break;
#line 1135 "integer.m"
    }
#line 1133 "integer.m"
}

#line 1128 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_f_0(
#line 1128 "integer.m"
  MR_Integer mercury__integer__Digit_1,
#line 1128 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 1128 "integer.m"
{
#line 1130 "integer.m"
  {
#line 1130 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1130 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 1130 "integer.m"
    MR_Word mercury__integer__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1130 "integer.m"
    MR_Integer mercury__integer__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));

#line 1130 "integer.m"
    if ((mercury__integer__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1257 "integer.m"
      {
#line 1257 "integer.m"
        MR_Word mercury__integer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1257 "integer.m"
        mercury__integer__HeadVar__3_3 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1257 "integer.m"
      }
#line 1130 "integer.m"
    else
#line 1131 "integer.m"
      {
#line 1131 "integer.m"
        MR_Integer mercury__integer__X_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_12_12, (MR_Integer) 0)));
#line 1131 "integer.m"
        MR_Word mercury__integer__Xs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_12_12, (MR_Integer) 1)));

#line 1131 "integer.m"
        {
#line 1131 "integer.m"
          return mercury__integer__HeadVar__3_3 = mercury__integer__div_by_digit_1_3_f_0(mercury__integer__X_9, mercury__integer__Xs_10, mercury__integer__Digit_1);
        }
#line 1131 "integer.m"
      }
#line 1130 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 1130 "integer.m"
  }
#line 1128 "integer.m"
}

#line 1124 "integer.m"
static MR_Word MR_CALL 
mercury__integer__integer_prepend_2_f_0(
#line 1124 "integer.m"
  MR_Integer mercury__integer__Digit_4,
#line 1124 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 1124 "integer.m"
{
#line 1126 "integer.m"
  {
#line 1126 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1126 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 1126 "integer.m"
    MR_Integer mercury__integer__L_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 1126 "integer.m"
    MR_Word mercury__integer__List_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1126 "integer.m"
    MR_Integer mercury__integer__V_7_7 = (mercury__integer__L_5 + (MR_Integer) 1);
#line 1126 "integer.m"
    MR_Word mercury__integer__V_9_9;

#line 1126 "integer.m"
    {
#line 1126 "integer.m"
      mercury__integer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "integer.m"
      MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, 0) = ((MR_Box) (mercury__integer__Digit_4));
#line 1126 "integer.m"
      MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, 1) = ((MR_Box) (mercury__integer__List_6));
#line 1126 "integer.m"
    }
#line 1126 "integer.m"
    {
#line 1126 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1126 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_7_7));
#line 1126 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_9_9));
#line 1126 "integer.m"
    }
#line 1126 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 1126 "integer.m"
  }
#line 1124 "integer.m"
}

#line 1119 "integer.m"
static MR_Word MR_CALL 
mercury__integer__integer_append_2_f_0(
#line 1119 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1119 "integer.m"
  MR_Integer mercury__integer__Digit_6)
#line 1119 "integer.m"
{
#line 1121 "integer.m"
  {
#line 1121 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1121 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 1121 "integer.m"
    MR_Word mercury__integer__TypeCtorInfo_12_12;
#line 1121 "integer.m"
    MR_Integer mercury__integer__L_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1121 "integer.m"
    MR_Word mercury__integer__List_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1121 "integer.m"
    MR_Word mercury__integer__NewList_7;
#line 1121 "integer.m"
    MR_Integer mercury__integer__V_8_8 = (mercury__integer__L_4 + (MR_Integer) 1);
#line 1121 "integer.m"
    MR_Word mercury__integer__V_10_10;
#line 1121 "integer.m"
    MR_Word mercury__integer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1122 "integer.m"
    {
#line 1122 "integer.m"
      mercury__integer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "integer.m"
      MR_hl_field(MR_mktag(1), mercury__integer__V_10_10, 0) = ((MR_Box) (mercury__integer__Digit_6));
#line 1122 "integer.m"
      MR_hl_field(MR_mktag(1), mercury__integer__V_10_10, 1) = ((MR_Box) (mercury__integer__V_11_11));
#line 1122 "integer.m"
    }
#line 4724 "integer.c"
    mercury__integer__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1122 "integer.m"
    {
#line 1122 "integer.m"
      mercury__list__append_3_p_1(mercury__integer__TypeCtorInfo_12_12, mercury__integer__List_5, mercury__integer__V_10_10, &mercury__integer__NewList_7);
    }
#line 1121 "integer.m"
    {
#line 1121 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1121 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_8_8));
#line 1121 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__NewList_7));
#line 1121 "integer.m"
    }
#line 1121 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 1121 "integer.m"
  }
#line 1119 "integer.m"
}

#line 1108 "integer.m"
static MR_Word MR_CALL 
mercury__integer__det_tail_1_f_0(
#line 1108 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 1108 "integer.m"
{
#line 1110 "integer.m"
  {
#line 1110 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1110 "integer.m"
    MR_Word mercury__integer__I_5;
#line 1110 "integer.m"
    MR_Integer mercury__integer__Len_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1110 "integer.m"
    MR_Word mercury__integer__Digits_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

#line 1114 "integer.m"
    if ((mercury__integer__Digits_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1112 "integer.m"
      {
#line 1113 "integer.m"
        {
#line 1113 "integer.m"
          mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_tail\'/1", (MR_String) "empty list");
        }
#line 1112 "integer.m"
      }
#line 1114 "integer.m"
    else
#line 1115 "integer.m"
      {
#line 1115 "integer.m"
        MR_Word mercury__integer__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 1)));
#line 1115 "integer.m"
        MR_Integer mercury__integer__V_8_8 = (mercury__integer__Len_3 - (MR_Integer) 1);
#line 1115 "integer.m"
        MR_Integer mercury__integer__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 0)));

#line 1116 "integer.m"
        {
#line 1116 "integer.m"
          mercury__integer__I_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__I_5, 0) = ((MR_Box) (mercury__integer__V_8_8));
#line 1116 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__I_5, 1) = ((MR_Box) (mercury__integer__T_7));
#line 1116 "integer.m"
        }
#line 1115 "integer.m"
      }
#line 1110 "integer.m"
    return mercury__integer__I_5;
#line 1110 "integer.m"
  }
#line 1108 "integer.m"
}

#line 1095 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__det_second_1_f_0(
#line 1095 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 1095 "integer.m"
{
#line 1097 "integer.m"
  {
#line 1097 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1097 "integer.m"
    MR_Integer mercury__integer__Second_5;
#line 1097 "integer.m"
    MR_Word mercury__integer__Digits_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1097 "integer.m"
    MR_Integer mercury__integer__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 1101 "integer.m"
    if ((mercury__integer__Digits_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1099 "integer.m"
      {
#line 1100 "integer.m"
        {
#line 1100 "integer.m"
          mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_second\'/1", (MR_String) "empty list");
        }
#line 1099 "integer.m"
      }
#line 1101 "integer.m"
    else
#line 1101 "integer.m"
      {
#line 1101 "integer.m"
        MR_Word mercury__integer__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 1)));
#line 1102 "integer.m"
        MR_Integer mercury__integer__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 0)));

#line 1101 "integer.m"
        if ((mercury__integer__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1102 "integer.m"
          {
#line 1103 "integer.m"
            {
#line 1103 "integer.m"
              mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_second\'/1", (MR_String) "short list");
            }
#line 1102 "integer.m"
          }
#line 1101 "integer.m"
        else
#line 1105 "integer.m"
          {
#line 1105 "integer.m"
            MR_Word mercury__integer__V_8_8;

#line 1105 "integer.m"
            mercury__integer__Second_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 1105 "integer.m"
            mercury__integer__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 1105 "integer.m"
          }
#line 1101 "integer.m"
      }
#line 1097 "integer.m"
    return mercury__integer__Second_5;
#line 1097 "integer.m"
  }
#line 1095 "integer.m"
}

#line 1085 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__det_first_1_f_0(
#line 1085 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 1085 "integer.m"
{
#line 1087 "integer.m"
  {
#line 1087 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1087 "integer.m"
    MR_Integer mercury__integer__First_5;
#line 1087 "integer.m"
    MR_Word mercury__integer__Digits_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1087 "integer.m"
    MR_Integer mercury__integer__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 1091 "integer.m"
    if ((mercury__integer__Digits_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1089 "integer.m"
      {
#line 1090 "integer.m"
        {
#line 1090 "integer.m"
          mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_first\'/1", (MR_String) "empty list");
        }
#line 1089 "integer.m"
      }
#line 1091 "integer.m"
    else
#line 1092 "integer.m"
      {
#line 1092 "integer.m"
        MR_Word mercury__integer__V_6_6;

#line 1092 "integer.m"
        mercury__integer__First_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 0)));
#line 1092 "integer.m"
        mercury__integer__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 1)));
#line 1092 "integer.m"
      }
#line 1087 "integer.m"
    return mercury__integer__First_5;
#line 1087 "integer.m"
  }
#line 1085 "integer.m"
}

#line 1075 "integer.m"
static MR_Word MR_CALL 
mercury__integer__decap_1_f_0(
#line 1075 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 1075 "integer.m"
{
#line 1077 "integer.m"
  while (MR_TRUE)
#line 1077 "integer.m"
    {
#line 1077 "integer.m"
      /* tailcall optimized into a loop */
#line 1077 "integer.m"
      {
#line 1077 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1077 "integer.m"
        MR_Word mercury__integer__HeadVar__2_2;
#line 1077 "integer.m"
        MR_Word mercury__integer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1077 "integer.m"
        MR_Integer mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 1077 "integer.m"
        if ((mercury__integer__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1257 "integer.m"
          {
#line 1257 "integer.m"
            MR_Word mercury__integer__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1257 "integer.m"
            mercury__integer__HeadVar__2_2 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1257 "integer.m"
          }
#line 1077 "integer.m"
        else
#line 1078 "integer.m"
          {
#line 1078 "integer.m"
            MR_Integer mercury__integer__H_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_14_14, (MR_Integer) 0)));
#line 1078 "integer.m"
            MR_Word mercury__integer__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_14_14, (MR_Integer) 1)));

#line 1079 "integer.m"
            mercury__integer__succeeded = (mercury__integer__H_6 == (MR_Integer) 0);
#line 1081 "integer.m"
            if (mercury__integer__succeeded)
#line 1080 "integer.m"
              {
#line 1080 "integer.m"
                MR_Word mercury__integer__V_10_10;
#line 1080 "integer.m"
                MR_Integer mercury__integer__V_11_11 = (mercury__integer__V_15_15 - (MR_Integer) 1);

#line 1080 "integer.m"
                {
#line 1080 "integer.m"
                  mercury__integer__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1080 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, 0) = ((MR_Box) (mercury__integer__V_11_11));
#line 1080 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, 1) = ((MR_Box) (mercury__integer__T_7));
#line 1080 "integer.m"
                }
#line 1080 "integer.m"
                /* direct tailcall eliminated */
#line 1080 "integer.m"
                {
#line 1080 "integer.m"
                  MR_Word mercury__integer__HeadVar__1__tmp_copy_1 = mercury__integer__V_10_10;

#line 1080 "integer.m"
                  mercury__integer__HeadVar__1_1 = mercury__integer__HeadVar__1__tmp_copy_1;
#line 1080 "integer.m"
                }
#line 1080 "integer.m"
                continue;
#line 1080 "integer.m"
              }
#line 1081 "integer.m"
            else
#line 1082 "integer.m"
              mercury__integer__HeadVar__2_2 = mercury__integer__HeadVar__1_1;
#line 1078 "integer.m"
          }
#line 1077 "integer.m"
        return mercury__integer__HeadVar__2_2;
#line 1077 "integer.m"
      }
#line 1077 "integer.m"
      break;
#line 1077 "integer.m"
    }
#line 1075 "integer.m"
}

#line 1026 "integer.m"
static void MR_CALL 
mercury__integer__quot_rem_2_5_p_0(
#line 1026 "integer.m"
  MR_Word mercury__integer__Ur_6,
#line 1026 "integer.m"
  MR_Word mercury__integer__U_7,
#line 1026 "integer.m"
  MR_Word mercury__integer__V_8,
#line 1026 "integer.m"
  MR_Word * mercury__integer__Quot_9,
#line 1026 "integer.m"
  MR_Word * mercury__integer__Rem_10)
#line 1026 "integer.m"
{
#line 1040 "integer.m"
  {
#line 1040 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1159 "integer.m"
    MR_Word mercury__integer__V_61_61;

#line 695 "integer.m"
    {
#line 695 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__V_61_61, mercury__integer__Ur_6, mercury__integer__V_8);
    }
#line 1160 "integer.m"
    mercury__integer__succeeded = ((MR_Integer) 1 == mercury__integer__V_61_61);
#line 1040 "integer.m"
    if (mercury__integer__succeeded)
#line 1036 "integer.m"
      {
#line 1036 "integer.m"
        MR_Integer mercury__integer__Ua_12;
#line 1031 "integer.m"
        MR_Word mercury__integer__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 1)));
#line 1031 "integer.m"
        MR_Integer mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 0)));
#line 1031 "integer.m"
        MR_Word mercury__integer__V_13_13;

#line 1031 "integer.m"
        mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 1031 "integer.m"
        if (mercury__integer__succeeded)
#line 1031 "integer.m"
          {
#line 1031 "integer.m"
            mercury__integer__Ua_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_24_24, (MR_Integer) 0)));
#line 1031 "integer.m"
            mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_24_24, (MR_Integer) 1)));
#line 1033 "integer.m"
            {
#line 1033 "integer.m"
              MR_Word mercury__integer__TypeCtorInfo_12_74;
#line 1033 "integer.m"
              MR_Word mercury__integer__Quot0_14;
#line 1033 "integer.m"
              MR_Word mercury__integer__V_25_25;
#line 1033 "integer.m"
              MR_Word mercury__integer__V_26_26;
#line 1033 "integer.m"
              MR_Integer mercury__integer__L_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Ur_6, (MR_Integer) 0)));
#line 1033 "integer.m"
              MR_Word mercury__integer__List_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Ur_6, (MR_Integer) 1)));
#line 1033 "integer.m"
              MR_Word mercury__integer__NewList_69;
#line 1033 "integer.m"
              MR_Integer mercury__integer__V_70_70 = (mercury__integer__L_67 + (MR_Integer) 1);
#line 1033 "integer.m"
              MR_Word mercury__integer__V_72_72;
#line 1033 "integer.m"
              MR_Word mercury__integer__V_73_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1033 "integer.m"
              MR_Integer mercury__integer__Len_76;
#line 1033 "integer.m"
              MR_Word mercury__integer__Digits_77;
#line 1033 "integer.m"
              MR_Integer mercury__integer__L_86;
#line 1033 "integer.m"
              MR_Word mercury__integer__List_87;
#line 1033 "integer.m"
              MR_Integer mercury__integer__V_88_88;
#line 1033 "integer.m"
              MR_Word mercury__integer__V_90_90;

#line 1122 "integer.m"
              {
#line 1122 "integer.m"
                mercury__integer__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "integer.m"
                MR_hl_field(MR_mktag(1), mercury__integer__V_72_72, 0) = ((MR_Box) (mercury__integer__Ua_12));
#line 1122 "integer.m"
                MR_hl_field(MR_mktag(1), mercury__integer__V_72_72, 1) = ((MR_Box) (mercury__integer__V_73_73));
#line 1122 "integer.m"
              }
#line 5121 "integer.c"
              mercury__integer__TypeCtorInfo_12_74 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1122 "integer.m"
              {
#line 1122 "integer.m"
                mercury__list__append_3_p_1(mercury__integer__TypeCtorInfo_12_74, mercury__integer__List_68, mercury__integer__V_72_72, &mercury__integer__NewList_69);
              }
#line 1121 "integer.m"
              {
#line 1121 "integer.m"
                mercury__integer__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1121 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_25_25, 0) = ((MR_Box) (mercury__integer__V_70_70));
#line 1121 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_25_25, 1) = ((MR_Box) (mercury__integer__NewList_69));
#line 1121 "integer.m"
              }
#line 1110 "integer.m"
              mercury__integer__Len_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 0)));
#line 1110 "integer.m"
              mercury__integer__Digits_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 1)));
#line 1114 "integer.m"
              if ((mercury__integer__Digits_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1112 "integer.m"
                {
#line 1113 "integer.m"
                  {
#line 1113 "integer.m"
                    mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_tail\'/1", (MR_String) "empty list");
#line 1113 "integer.m"
                    return;
                  }
#line 1112 "integer.m"
                }
#line 1114 "integer.m"
              else
#line 1115 "integer.m"
                {
#line 1115 "integer.m"
                  MR_Word mercury__integer__T_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_77, (MR_Integer) 1)));
#line 1115 "integer.m"
                  MR_Integer mercury__integer__V_80_80 = (mercury__integer__Len_76 - (MR_Integer) 1);
#line 1115 "integer.m"
                  MR_Integer mercury__integer__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_77, (MR_Integer) 0)));

#line 1116 "integer.m"
                  {
#line 1116 "integer.m"
                    mercury__integer__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_26_26, 0) = ((MR_Box) (mercury__integer__V_80_80));
#line 1116 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_26_26, 1) = ((MR_Box) (mercury__integer__T_79));
#line 1116 "integer.m"
                  }
#line 1115 "integer.m"
                }
#line 1032 "integer.m"
              {
#line 1032 "integer.m"
                mercury__integer__quot_rem_2_5_p_0(mercury__integer__V_25_25, mercury__integer__V_26_26, mercury__integer__V_8, &mercury__integer__Quot0_14, mercury__integer__Rem_10);
              }
#line 1126 "integer.m"
              mercury__integer__L_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Quot0_14, (MR_Integer) 0)));
#line 1126 "integer.m"
              mercury__integer__List_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Quot0_14, (MR_Integer) 1)));
#line 1126 "integer.m"
              mercury__integer__V_88_88 = (mercury__integer__L_86 + (MR_Integer) 1);
#line 1126 "integer.m"
              {
#line 1126 "integer.m"
                mercury__integer__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "integer.m"
                MR_hl_field(MR_mktag(1), mercury__integer__V_90_90, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1126 "integer.m"
                MR_hl_field(MR_mktag(1), mercury__integer__V_90_90, 1) = ((MR_Box) (mercury__integer__List_87));
#line 1126 "integer.m"
              }
#line 1126 "integer.m"
              {
#line 1126 "integer.m"
                MR_Word base;
#line 1126 "integer.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1126 "integer.m"
                *mercury__integer__Quot_9 = base;
#line 1126 "integer.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__integer__V_88_88));
#line 1126 "integer.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_90_90));
#line 1126 "integer.m"
              }
#line 1033 "integer.m"
            }
#line 1031 "integer.m"
          }
#line 1031 "integer.m"
        else
#line 1037 "integer.m"
          {
#line 1037 "integer.m"
            *mercury__integer__Quot_9 = (MR_Word) &mercury__integer_scalar_common_1[10];
#line 1038 "integer.m"
            *mercury__integer__Rem_10 = mercury__integer__Ur_6;
#line 1037 "integer.m"
          }
#line 1036 "integer.m"
      }
#line 1040 "integer.m"
    else
#line 1045 "integer.m"
      {
#line 1045 "integer.m"
        MR_Integer mercury__integer__Qhat_16;
#line 1045 "integer.m"
        MR_Word mercury__integer__QhatByV_17;
#line 1045 "integer.m"
        MR_Integer mercury__integer__Q_18;
#line 1045 "integer.m"
        MR_Word mercury__integer__QByV_19;
#line 1045 "integer.m"
        MR_Word mercury__integer__NewUr_21;
#line 1041 "integer.m"
        MR_Integer mercury__integer__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Ur_6, (MR_Integer) 0)));
#line 1041 "integer.m"
        MR_Integer mercury__integer__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_8, (MR_Integer) 0)));
#line 1073 "integer.m"
        MR_Word mercury__integer__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Ur_6, (MR_Integer) 1)));
#line 1073 "integer.m"
        MR_Word mercury__integer__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_8, (MR_Integer) 1)));
#line 1065 "integer.m"
        MR_Integer mercury__integer__Ua_52;
#line 1061 "integer.m"
        MR_Word mercury__integer__V_44_44;
#line 1061 "integer.m"
        MR_Integer mercury__integer__V_22_22;
#line 1061 "integer.m"
        MR_Word mercury__integer__V_23_23;

#line 1041 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_32_32 > mercury__integer__V_33_33);
#line 1043 "integer.m"
        if (mercury__integer__succeeded)
#line 1042 "integer.m"
          {
#line 1042 "integer.m"
            MR_Integer mercury__integer__V_34_34;
#line 1042 "integer.m"
            MR_Integer mercury__integer__V_35_35;
#line 1042 "integer.m"
            MR_Integer mercury__integer__V_36_36;
#line 1042 "integer.m"
            MR_Integer mercury__integer__V_38_38;
#line 1042 "integer.m"
            MR_Integer mercury__integer__V_39_39;

#line 1042 "integer.m"
            {
#line 1042 "integer.m"
              mercury__integer__V_36_36 = mercury__integer__det_first_1_f_0(mercury__integer__Ur_6);
            }
#line 1042 "integer.m"
            mercury__integer__V_35_35 = (mercury__integer__V_36_36 * (MR_Integer) 16384);
#line 1042 "integer.m"
            {
#line 1042 "integer.m"
              mercury__integer__V_38_38 = mercury__integer__det_second_1_f_0(mercury__integer__Ur_6);
            }
#line 1042 "integer.m"
            mercury__integer__V_34_34 = (mercury__integer__V_35_35 + mercury__integer__V_38_38);
#line 1042 "integer.m"
            {
#line 1042 "integer.m"
              mercury__integer__V_39_39 = mercury__integer__det_first_1_f_0(mercury__integer__V_8);
            }
#line 1042 "integer.m"
            {
#line 1042 "integer.m"
              mercury__integer__Qhat_16 = mercury__int__div_2_f_0(mercury__integer__V_34_34, mercury__integer__V_39_39);
            }
#line 1042 "integer.m"
          }
#line 1043 "integer.m"
        else
#line 1044 "integer.m"
          {
#line 1044 "integer.m"
            MR_Integer mercury__integer__V_40_40;
#line 1044 "integer.m"
            MR_Integer mercury__integer__V_41_41;

#line 1044 "integer.m"
            {
#line 1044 "integer.m"
              mercury__integer__V_40_40 = mercury__integer__det_first_1_f_0(mercury__integer__Ur_6);
            }
#line 1044 "integer.m"
            {
#line 1044 "integer.m"
              mercury__integer__V_41_41 = mercury__integer__det_first_1_f_0(mercury__integer__V_8);
            }
#line 1044 "integer.m"
            {
#line 1044 "integer.m"
              mercury__integer__Qhat_16 = mercury__int__div_2_f_0(mercury__integer__V_40_40, mercury__integer__V_41_41);
            }
#line 1044 "integer.m"
          }
#line 1046 "integer.m"
        {
#line 1046 "integer.m"
          mercury__integer__QhatByV_17 = mercury__integer__mul_by_digit_2_f_0(mercury__integer__Qhat_16, mercury__integer__V_8);
        }
#line 1047 "integer.m"
        {
#line 1047 "integer.m"
          mercury__integer__succeeded = mercury__integer__pos_geq_2_p_0(mercury__integer__Ur_6, mercury__integer__QhatByV_17);
        }
#line 1050 "integer.m"
        if (mercury__integer__succeeded)
#line 1048 "integer.m"
          {
#line 1048 "integer.m"
            mercury__integer__Q_18 = mercury__integer__Qhat_16;
#line 1049 "integer.m"
            mercury__integer__QByV_19 = mercury__integer__QhatByV_17;
#line 1048 "integer.m"
          }
#line 1050 "integer.m"
        else
#line 1051 "integer.m"
          {
#line 1051 "integer.m"
            MR_Word mercury__integer__QhatMinus1ByV_20;

#line 1051 "integer.m"
            {
#line 1051 "integer.m"
              mercury__integer__QhatMinus1ByV_20 = mercury__integer__pos_minus_2_f_0(mercury__integer__QhatByV_17, mercury__integer__V_8);
            }
#line 1052 "integer.m"
            {
#line 1052 "integer.m"
              mercury__integer__succeeded = mercury__integer__pos_geq_2_p_0(mercury__integer__Ur_6, mercury__integer__QhatMinus1ByV_20);
            }
#line 1055 "integer.m"
            if (mercury__integer__succeeded)
#line 1053 "integer.m"
              {
#line 1053 "integer.m"
                mercury__integer__Q_18 = (mercury__integer__Qhat_16 - (MR_Integer) 1);
#line 1054 "integer.m"
                mercury__integer__QByV_19 = mercury__integer__QhatMinus1ByV_20;
#line 1053 "integer.m"
              }
#line 1055 "integer.m"
            else
#line 1056 "integer.m"
              {
#line 1056 "integer.m"
                mercury__integer__Q_18 = (mercury__integer__Qhat_16 - (MR_Integer) 2);
#line 1057 "integer.m"
                {
#line 1057 "integer.m"
                  mercury__integer__QByV_19 = mercury__integer__pos_minus_2_f_0(mercury__integer__QhatMinus1ByV_20, mercury__integer__V_8);
                }
#line 1056 "integer.m"
              }
#line 1051 "integer.m"
          }
#line 1060 "integer.m"
        {
#line 1060 "integer.m"
          mercury__integer__NewUr_21 = mercury__integer__pos_minus_2_f_0(mercury__integer__Ur_6, mercury__integer__QByV_19);
        }
#line 1061 "integer.m"
        mercury__integer__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 0)));
#line 1061 "integer.m"
        mercury__integer__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 1)));
#line 1061 "integer.m"
        mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 1061 "integer.m"
        if (mercury__integer__succeeded)
#line 1061 "integer.m"
          {
#line 1061 "integer.m"
            mercury__integer__Ua_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_44_44, (MR_Integer) 0)));
#line 1061 "integer.m"
            mercury__integer__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_44_44, (MR_Integer) 1)));
#line 1062 "integer.m"
            {
#line 1062 "integer.m"
              MR_Word mercury__integer__V_45_45;
#line 1062 "integer.m"
              MR_Word mercury__integer__V_46_46;
#line 1062 "integer.m"
              MR_Word mercury__integer__Quot0_50;

#line 1062 "integer.m"
              {
#line 1062 "integer.m"
                mercury__integer__V_45_45 = mercury__integer__integer_append_2_f_0(mercury__integer__NewUr_21, mercury__integer__Ua_52);
              }
#line 1062 "integer.m"
              {
#line 1062 "integer.m"
                mercury__integer__V_46_46 = mercury__integer__det_tail_1_f_0(mercury__integer__U_7);
              }
#line 1062 "integer.m"
              {
#line 1062 "integer.m"
                mercury__integer__quot_rem_2_5_p_0(mercury__integer__V_45_45, mercury__integer__V_46_46, mercury__integer__V_8, &mercury__integer__Quot0_50, mercury__integer__Rem_10);
              }
#line 1063 "integer.m"
              {
#line 1063 "integer.m"
                *mercury__integer__Quot_9 = mercury__integer__integer_prepend_2_f_0(mercury__integer__Q_18, mercury__integer__Quot0_50);
              }
#line 1062 "integer.m"
            }
#line 1061 "integer.m"
          }
#line 1061 "integer.m"
        else
#line 1066 "integer.m"
          {
#line 1066 "integer.m"
            MR_Word mercury__integer__V_48_48;
#line 1066 "integer.m"
            MR_Word mercury__integer__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1066 "integer.m"
            {
#line 1066 "integer.m"
              mercury__integer__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1066 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_48_48, 0) = ((MR_Box) (mercury__integer__Q_18));
#line 1066 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_48_48, 1) = ((MR_Box) (mercury__integer__V_49_49));
#line 1066 "integer.m"
            }
#line 1066 "integer.m"
            {
#line 1066 "integer.m"
              MR_Word base;
#line 1066 "integer.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1066 "integer.m"
              *mercury__integer__Quot_9 = base;
#line 1066 "integer.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 1066 "integer.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_48_48));
#line 1066 "integer.m"
            }
#line 1067 "integer.m"
            *mercury__integer__Rem_10 = mercury__integer__NewUr_21;
#line 1066 "integer.m"
          }
#line 1045 "integer.m"
      }
#line 1040 "integer.m"
  }
#line 1026 "integer.m"
}

#line 1007 "integer.m"
static void MR_CALL 
mercury__integer__quot_rem_4_p_0(
#line 1007 "integer.m"
  MR_Word mercury__integer__U_5,
#line 1007 "integer.m"
  MR_Word mercury__integer__V_6,
#line 1007 "integer.m"
  MR_Word * mercury__integer__Quot_7,
#line 1007 "integer.m"
  MR_Word * mercury__integer__Rem_8)
#line 1007 "integer.m"
{
#line 1013 "integer.m"
  {
#line 1013 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1013 "integer.m"
    MR_Integer mercury__integer__UI_10;
#line 1013 "integer.m"
    MR_Integer mercury__integer__VI_12;
#line 1010 "integer.m"
    MR_Word mercury__integer__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_5, (MR_Integer) 1)));
#line 1010 "integer.m"
    MR_Word mercury__integer__V_18_18;
#line 1010 "integer.m"
    MR_Word mercury__integer__V_19_19;
#line 1010 "integer.m"
    MR_Word mercury__integer__V_20_20;
#line 1010 "integer.m"
    MR_Integer mercury__integer__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_5, (MR_Integer) 0)));
#line 1010 "integer.m"
    MR_Integer mercury__integer__V_11_11;

#line 1010 "integer.m"
    mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 1010 "integer.m"
    if (mercury__integer__succeeded)
#line 1010 "integer.m"
      {
#line 1010 "integer.m"
        mercury__integer__UI_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 1010 "integer.m"
        mercury__integer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 1010 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1010 "integer.m"
        if (mercury__integer__succeeded)
#line 1010 "integer.m"
          {
#line 1010 "integer.m"
            mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 0)));
#line 1010 "integer.m"
            mercury__integer__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 1)));
#line 1010 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 1010 "integer.m"
            if (mercury__integer__succeeded)
#line 1010 "integer.m"
              {
#line 1010 "integer.m"
                mercury__integer__VI_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_19_19, (MR_Integer) 0)));
#line 1010 "integer.m"
                mercury__integer__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_19_19, (MR_Integer) 1)));
#line 1010 "integer.m"
                mercury__integer__succeeded = (mercury__integer__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1010 "integer.m"
              }
#line 1010 "integer.m"
          }
#line 1010 "integer.m"
      }
#line 1013 "integer.m"
    if (mercury__integer__succeeded)
#line 1011 "integer.m"
      {
#line 1011 "integer.m"
        MR_Integer mercury__integer__V_21_21;
#line 1011 "integer.m"
        MR_Integer mercury__integer__V_22_22;

#line 193 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__quot_rem_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 193 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 5583 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 193 "int.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 39 "int.opt"
        if (mercury__integer__succeeded)
#line 40 "int.opt"
          mercury__integer__succeeded = (mercury__integer__VI_12 == (MR_Integer) 0);
#line 45 "int.opt"
        if (mercury__integer__succeeded)
#line 42 "int.opt"
          {
#line 42 "int.opt"
            MR_Word mercury__integer__TypeCtorInfo_9_36 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 42 "int.opt"
            MR_Word mercury__integer__V_7_34 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

#line 44 "int.opt"
            {
#line 44 "int.opt"
              mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_36, ((MR_Box) (mercury__integer__V_7_34)));
#line 44 "int.opt"
              return;
            }
#line 42 "int.opt"
          }
#line 45 "int.opt"
        else
#line 46 "int.opt"
          mercury__integer__V_21_21 = (mercury__integer__UI_10 / mercury__integer__VI_12);
#line 757 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_21_21 == (MR_Integer) 0);
#line 759 "integer.m"
        if (mercury__integer__succeeded)
#line 1257 "integer.m"
          {
#line 1257 "integer.m"
            MR_Word mercury__integer__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1257 "integer.m"
            *mercury__integer__Quot_7 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1257 "integer.m"
          }
#line 759 "integer.m"
        else
#line 761 "integer.m"
          {
#line 759 "integer.m"
            mercury__integer__succeeded = (mercury__integer__V_21_21 > (MR_Integer) 0);
#line 761 "integer.m"
            if (mercury__integer__succeeded)
#line 760 "integer.m"
              {
#line 760 "integer.m"
                MR_Word mercury__integer__V_41_41;
#line 760 "integer.m"
                MR_Word mercury__integer__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 760 "integer.m"
                {
#line 760 "integer.m"
                  mercury__integer__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_41_41, 0) = ((MR_Box) (mercury__integer__V_21_21));
#line 760 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_41_41, 1) = ((MR_Box) (mercury__integer__V_42_42));
#line 760 "integer.m"
                }
#line 760 "integer.m"
                {
#line 760 "integer.m"
                  MR_Word base;
#line 760 "integer.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 760 "integer.m"
                  *mercury__integer__Quot_7 = base;
#line 760 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 760 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_41_41));
#line 760 "integer.m"
                }
#line 760 "integer.m"
              }
#line 761 "integer.m"
            else
#line 762 "integer.m"
              {
#line 762 "integer.m"
                MR_Word mercury__integer__V_44_44;
#line 762 "integer.m"
                MR_Word mercury__integer__V_45_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 762 "integer.m"
                {
#line 762 "integer.m"
                  mercury__integer__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_44_44, 0) = ((MR_Box) (mercury__integer__V_21_21));
#line 762 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_44_44, 1) = ((MR_Box) (mercury__integer__V_45_45));
#line 762 "integer.m"
                }
#line 762 "integer.m"
                {
#line 762 "integer.m"
                  MR_Word base;
#line 762 "integer.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 762 "integer.m"
                  *mercury__integer__Quot_7 = base;
#line 762 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) -1));
#line 762 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_44_44));
#line 762 "integer.m"
                }
#line 762 "integer.m"
              }
#line 761 "integer.m"
          }
#line 193 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__quot_rem_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 193 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 5724 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 193 "int.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 354 "int.opt"
        if (mercury__integer__succeeded)
#line 355 "int.opt"
          mercury__integer__succeeded = (mercury__integer__VI_12 == (MR_Integer) 0);
#line 360 "int.opt"
        if (mercury__integer__succeeded)
#line 357 "int.opt"
          {
#line 357 "int.opt"
            MR_Word mercury__integer__TypeCtorInfo_9_53 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 357 "int.opt"
            MR_Word mercury__integer__V_7_51 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

#line 359 "int.opt"
            {
#line 359 "int.opt"
              mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_53, ((MR_Box) (mercury__integer__V_7_51)));
#line 359 "int.opt"
              return;
            }
#line 357 "int.opt"
          }
#line 360 "int.opt"
        else
#line 361 "int.opt"
          mercury__integer__V_22_22 = (mercury__integer__UI_10 % mercury__integer__VI_12);
#line 757 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_22_22 == (MR_Integer) 0);
#line 759 "integer.m"
        if (mercury__integer__succeeded)
#line 1257 "integer.m"
          {
#line 1257 "integer.m"
            MR_Word mercury__integer__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1257 "integer.m"
            *mercury__integer__Rem_8 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1257 "integer.m"
          }
#line 759 "integer.m"
        else
#line 761 "integer.m"
          {
#line 759 "integer.m"
            mercury__integer__succeeded = (mercury__integer__V_22_22 > (MR_Integer) 0);
#line 761 "integer.m"
            if (mercury__integer__succeeded)
#line 760 "integer.m"
              {
#line 760 "integer.m"
                MR_Word mercury__integer__V_58_58;
#line 760 "integer.m"
                MR_Word mercury__integer__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 760 "integer.m"
                {
#line 760 "integer.m"
                  mercury__integer__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_58_58, 0) = ((MR_Box) (mercury__integer__V_22_22));
#line 760 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_58_58, 1) = ((MR_Box) (mercury__integer__V_59_59));
#line 760 "integer.m"
                }
#line 760 "integer.m"
                {
#line 760 "integer.m"
                  MR_Word base;
#line 760 "integer.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 760 "integer.m"
                  *mercury__integer__Rem_8 = base;
#line 760 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 760 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_58_58));
#line 760 "integer.m"
                }
#line 760 "integer.m"
              }
#line 761 "integer.m"
            else
#line 762 "integer.m"
              {
#line 762 "integer.m"
                MR_Word mercury__integer__V_61_61;
#line 762 "integer.m"
                MR_Word mercury__integer__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 762 "integer.m"
                {
#line 762 "integer.m"
                  mercury__integer__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_61_61, 0) = ((MR_Box) (mercury__integer__V_22_22));
#line 762 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_61_61, 1) = ((MR_Box) (mercury__integer__V_62_62));
#line 762 "integer.m"
                }
#line 762 "integer.m"
                {
#line 762 "integer.m"
                  MR_Word base;
#line 762 "integer.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 762 "integer.m"
                  *mercury__integer__Rem_8 = base;
#line 762 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) -1));
#line 762 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_61_61));
#line 762 "integer.m"
                }
#line 762 "integer.m"
              }
#line 761 "integer.m"
          }
#line 1011 "integer.m"
      }
#line 1013 "integer.m"
    else
#line 1014 "integer.m"
      {
#line 1014 "integer.m"
        MR_Integer mercury__integer__V0_13;
#line 1014 "integer.m"
        MR_Word mercury__integer__QuotZeros_15;
#line 1014 "integer.m"
        MR_Word mercury__integer__Digits_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 1)));
#line 1087 "integer.m"
        MR_Integer mercury__integer__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 0)));

#line 1091 "integer.m"
        if ((mercury__integer__Digits_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1089 "integer.m"
          {
#line 1090 "integer.m"
            {
#line 1090 "integer.m"
              mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_first\'/1", (MR_String) "empty list");
#line 1090 "integer.m"
              return;
            }
#line 1089 "integer.m"
          }
#line 1091 "integer.m"
        else
#line 1092 "integer.m"
          {
#line 1092 "integer.m"
            MR_Word mercury__integer__V_68_68;

#line 1092 "integer.m"
            mercury__integer__V0_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_67, (MR_Integer) 0)));
#line 1092 "integer.m"
            mercury__integer__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_67, (MR_Integer) 1)));
#line 1092 "integer.m"
          }
#line 1015 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V0_13 < (MR_Integer) 8192);
#line 1020 "integer.m"
        if (mercury__integer__succeeded)
#line 1016 "integer.m"
          {
#line 1016 "integer.m"
            MR_Integer mercury__integer__M_14;
#line 1016 "integer.m"
            MR_Word mercury__integer__R_16;
#line 1016 "integer.m"
            MR_Integer mercury__integer__V_25_25 = (mercury__integer__V0_13 + (MR_Integer) 1);
#line 1016 "integer.m"
            MR_Word mercury__integer__V_27_27;
#line 1016 "integer.m"
            MR_Word mercury__integer__V_28_28;
#line 1016 "integer.m"
            MR_Word mercury__integer__V_29_29;
#line 1016 "integer.m"
            MR_Word mercury__integer__V_73_73;
#line 1016 "integer.m"
            MR_Integer mercury__integer__Len_76;
#line 1016 "integer.m"
            MR_Word mercury__integer__Digits0_77;
#line 1016 "integer.m"
            MR_Integer mercury__integer__Mod_78;
#line 1016 "integer.m"
            MR_Word mercury__integer__Digits_79;
#line 1016 "integer.m"
            MR_Integer mercury__integer__Len_85;
#line 1016 "integer.m"
            MR_Word mercury__integer__Digits0_86;
#line 1016 "integer.m"
            MR_Integer mercury__integer__Mod_87;
#line 1016 "integer.m"
            MR_Word mercury__integer__Digits_88;

#line 1016 "integer.m"
            {
#line 1016 "integer.m"
              mercury__integer__M_14 = mercury__int__div_2_f_0((MR_Integer) 16384, mercury__integer__V_25_25);
            }
#line 1257 "integer.m"
            mercury__integer__V_73_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1257 "integer.m"
            mercury__integer__V_27_27 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 813 "integer.m"
            mercury__integer__Len_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_5, (MR_Integer) 0)));
#line 813 "integer.m"
            mercury__integer__Digits0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_5, (MR_Integer) 1)));
#line 814 "integer.m"
            {
#line 814 "integer.m"
              mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__M_14, &mercury__integer__Mod_78, mercury__integer__Digits0_77, &mercury__integer__Digits_79);
            }
#line 815 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Mod_78 == (MR_Integer) 0);
#line 817 "integer.m"
            if (mercury__integer__succeeded)
#line 816 "integer.m"
              {
#line 816 "integer.m"
                mercury__integer__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 816 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, 0) = ((MR_Box) (mercury__integer__Len_76));
#line 816 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, 1) = ((MR_Box) (mercury__integer__Digits_79));
#line 816 "integer.m"
              }
#line 817 "integer.m"
            else
#line 818 "integer.m"
              {
#line 818 "integer.m"
                MR_Integer mercury__integer__V_80_80 = (mercury__integer__Len_76 + (MR_Integer) 1);
#line 818 "integer.m"
                MR_Word mercury__integer__V_82_82;

#line 818 "integer.m"
                {
#line 818 "integer.m"
                  mercury__integer__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_82_82, 0) = ((MR_Box) (mercury__integer__Mod_78));
#line 818 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_82_82, 1) = ((MR_Box) (mercury__integer__Digits_79));
#line 818 "integer.m"
                }
#line 818 "integer.m"
                {
#line 818 "integer.m"
                  mercury__integer__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 818 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, 0) = ((MR_Box) (mercury__integer__V_80_80));
#line 818 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, 1) = ((MR_Box) (mercury__integer__V_82_82));
#line 818 "integer.m"
                }
#line 818 "integer.m"
              }
#line 813 "integer.m"
            mercury__integer__Len_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 0)));
#line 813 "integer.m"
            mercury__integer__Digits0_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 1)));
#line 814 "integer.m"
            {
#line 814 "integer.m"
              mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__M_14, &mercury__integer__Mod_87, mercury__integer__Digits0_86, &mercury__integer__Digits_88);
            }
#line 815 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Mod_87 == (MR_Integer) 0);
#line 817 "integer.m"
            if (mercury__integer__succeeded)
#line 816 "integer.m"
              {
#line 816 "integer.m"
                mercury__integer__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 816 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 0) = ((MR_Box) (mercury__integer__Len_85));
#line 816 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 1) = ((MR_Box) (mercury__integer__Digits_88));
#line 816 "integer.m"
              }
#line 817 "integer.m"
            else
#line 818 "integer.m"
              {
#line 818 "integer.m"
                MR_Integer mercury__integer__V_89_89 = (mercury__integer__Len_85 + (MR_Integer) 1);
#line 818 "integer.m"
                MR_Word mercury__integer__V_91_91;

#line 818 "integer.m"
                {
#line 818 "integer.m"
                  mercury__integer__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_91_91, 0) = ((MR_Box) (mercury__integer__Mod_87));
#line 818 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_91_91, 1) = ((MR_Box) (mercury__integer__Digits_88));
#line 818 "integer.m"
                }
#line 818 "integer.m"
                {
#line 818 "integer.m"
                  mercury__integer__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 818 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 0) = ((MR_Box) (mercury__integer__V_89_89));
#line 818 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 1) = ((MR_Box) (mercury__integer__V_91_91));
#line 818 "integer.m"
                }
#line 818 "integer.m"
              }
#line 1017 "integer.m"
            {
#line 1017 "integer.m"
              mercury__integer__quot_rem_2_5_p_0(mercury__integer__V_27_27, mercury__integer__V_28_28, mercury__integer__V_29_29, &mercury__integer__QuotZeros_15, &mercury__integer__R_16);
            }
#line 1019 "integer.m"
            {
#line 1019 "integer.m"
              *mercury__integer__Rem_8 = mercury__integer__div_by_digit_2_f_0(mercury__integer__M_14, mercury__integer__R_16);
            }
#line 1016 "integer.m"
          }
#line 1020 "integer.m"
        else
#line 1021 "integer.m"
          {
#line 1021 "integer.m"
            MR_Word mercury__integer__V_30_30 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1021 "integer.m"
            MR_Word mercury__integer__V_93_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1021 "integer.m"
            {
#line 1021 "integer.m"
              mercury__integer__quot_rem_2_5_p_0(mercury__integer__V_30_30, mercury__integer__U_5, mercury__integer__V_6, &mercury__integer__QuotZeros_15, mercury__integer__Rem_8);
            }
#line 1021 "integer.m"
          }
#line 1023 "integer.m"
        {
#line 1023 "integer.m"
          *mercury__integer__Quot_7 = mercury__integer__decap_1_f_0(mercury__integer__QuotZeros_15);
        }
#line 1014 "integer.m"
      }
#line 1013 "integer.m"
  }
#line 1007 "integer.m"
}

#line 978 "integer.m"
void MR_CALL 
mercury__integer__big_quot_rem_4_p_0(
#line 978 "integer.m"
  MR_Word mercury__integer__X_5,
#line 978 "integer.m"
  MR_Word mercury__integer__Y_6,
#line 978 "integer.m"
  MR_Word * mercury__integer__Quot_7,
#line 978 "integer.m"
  MR_Word * mercury__integer__Rem_8)
#line 978 "integer.m"
{
#line 984 "integer.m"
  {
#line 984 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1248 "integer.m"
    MR_Integer mercury__integer__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_6, (MR_Integer) 0)));
#line 1248 "integer.m"
    MR_Word mercury__integer__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_6, (MR_Integer) 1)));

#line 1248 "integer.m"
    mercury__integer__succeeded = (mercury__integer__V_21_21 == (MR_Integer) 0);
#line 1248 "integer.m"
    if (mercury__integer__succeeded)
#line 1248 "integer.m"
      mercury__integer__succeeded = (mercury__integer__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 984 "integer.m"
    if (mercury__integer__succeeded)
#line 983 "integer.m"
      {
#line 983 "integer.m"
        MR_Word mercury__integer__TypeCtorInfo_20_20 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 983 "integer.m"
        MR_Word mercury__integer__V_15_15 = (MR_Word) ((MR_Box) ((MR_String) "integer.big_quot_rem: division by zero"));

#line 983 "integer.m"
        {
#line 983 "integer.m"
          mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_20_20, ((MR_Box) (mercury__integer__V_15_15)));
#line 983 "integer.m"
          return;
        }
#line 983 "integer.m"
      }
#line 984 "integer.m"
    else
#line 987 "integer.m"
      {
#line 1248 "integer.m"
        MR_Integer mercury__integer__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_5, (MR_Integer) 0)));
#line 1248 "integer.m"
        MR_Word mercury__integer__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_5, (MR_Integer) 1)));

#line 1248 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_23_23 == (MR_Integer) 0);
#line 1248 "integer.m"
        if (mercury__integer__succeeded)
#line 1248 "integer.m"
          mercury__integer__succeeded = (mercury__integer__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 987 "integer.m"
        if (mercury__integer__succeeded)
#line 985 "integer.m"
          {
#line 1257 "integer.m"
            *mercury__integer__Quot_7 = mercury__integer__X_5;
#line 1257 "integer.m"
            *mercury__integer__Rem_8 = mercury__integer__X_5;
#line 985 "integer.m"
          }
#line 987 "integer.m"
        else
#line 988 "integer.m"
          {
#line 988 "integer.m"
            MR_Integer mercury__integer__SignX_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_5, (MR_Integer) 0)));
#line 988 "integer.m"
            MR_Integer mercury__integer__SignY_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_6, (MR_Integer) 0)));
#line 988 "integer.m"
            MR_Word mercury__integer__Quot0_13;
#line 988 "integer.m"
            MR_Word mercury__integer__Rem0_14;
#line 988 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 988 "integer.m"
            MR_Word mercury__integer__V_18_18;
#line 988 "integer.m"
            MR_Integer mercury__integer__V_19_19;
#line 988 "integer.m"
            MR_Word mercury__integer__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_5, (MR_Integer) 1)));
#line 989 "integer.m"
            MR_Word mercury__integer__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_6, (MR_Integer) 1)));

#line 990 "integer.m"
            {
#line 990 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__big_abs_1_f_0(mercury__integer__X_5);
            }
#line 990 "integer.m"
            {
#line 990 "integer.m"
              mercury__integer__V_18_18 = mercury__integer__big_abs_1_f_0(mercury__integer__Y_6);
            }
#line 990 "integer.m"
            {
#line 990 "integer.m"
              mercury__integer__quot_rem_4_p_0(mercury__integer__V_17_17, mercury__integer__V_18_18, &mercury__integer__Quot0_13, &mercury__integer__Rem0_14);
            }
#line 991 "integer.m"
            mercury__integer__V_19_19 = (mercury__integer__SignX_9 * mercury__integer__SignY_11);
#line 991 "integer.m"
            {
#line 991 "integer.m"
              *mercury__integer__Quot_7 = mercury__integer__big_sign_2_f_0(mercury__integer__V_19_19, mercury__integer__Quot0_13);
            }
#line 992 "integer.m"
            {
#line 992 "integer.m"
              *mercury__integer__Rem_8 = mercury__integer__big_sign_2_f_0(mercury__integer__SignX_9, mercury__integer__Rem0_14);
            }
#line 988 "integer.m"
          }
#line 987 "integer.m"
      }
#line 984 "integer.m"
  }
#line 978 "integer.m"
}

#line 972 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_mul_list_3_f_0(
#line 972 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 972 "integer.m"
  MR_Word mercury__integer__Carry_2,
#line 972 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3)
#line 972 "integer.m"
{
#line 974 "integer.m"
  while (MR_TRUE)
#line 974 "integer.m"
    {
#line 974 "integer.m"
      /* tailcall optimized into a loop */
#line 974 "integer.m"
      {
#line 974 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 974 "integer.m"
        MR_Word mercury__integer__HeadVar__4_4;

#line 974 "integer.m"
        if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 974 "integer.m"
          mercury__integer__HeadVar__4_4 = mercury__integer__Carry_2;
#line 974 "integer.m"
        else
#line 975 "integer.m"
          {
#line 975 "integer.m"
            MR_Integer mercury__integer__X_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 975 "integer.m"
            MR_Word mercury__integer__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 975 "integer.m"
            MR_Word mercury__integer__V_11_11;
#line 975 "integer.m"
            MR_Word mercury__integer__V_12_12;
#line 975 "integer.m"
            MR_Word mercury__integer__V_13_13;
#line 975 "integer.m"
            MR_Integer mercury__integer__Len_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_2, (MR_Integer) 0)));
#line 975 "integer.m"
            MR_Word mercury__integer__Digits_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_2, (MR_Integer) 1)));
#line 975 "integer.m"
            MR_Integer mercury__integer__Len_26;
#line 975 "integer.m"
            MR_Word mercury__integer__Digits0_27;
#line 975 "integer.m"
            MR_Integer mercury__integer__Mod_28;
#line 975 "integer.m"
            MR_Word mercury__integer__Digits_29;
#line 975 "integer.m"
            MR_Integer mercury__integer__L1_34;
#line 975 "integer.m"
            MR_Integer mercury__integer__L2_36;
#line 975 "integer.m"
            MR_Integer mercury__integer__Div_38;
#line 975 "integer.m"
            MR_Word mercury__integer__Ds_39;
#line 975 "integer.m"
            MR_Integer mercury__integer__Len_40;
#line 837 "integer.m"
            MR_Word mercury__integer__D1_35;
#line 837 "integer.m"
            MR_Word mercury__integer__D2_37;

#line 801 "integer.m"
            if ((mercury__integer__Digits_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1257 "integer.m"
              {
#line 1257 "integer.m"
                MR_Word mercury__integer__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1257 "integer.m"
                mercury__integer__V_12_12 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1257 "integer.m"
              }
#line 801 "integer.m"
            else
#line 802 "integer.m"
              {
#line 802 "integer.m"
                MR_Integer mercury__integer__V_19_19 = (mercury__integer__Len_15 + (MR_Integer) 1);
#line 802 "integer.m"
                MR_Word mercury__integer__V_21_21;

#line 803 "integer.m"
                {
#line 803 "integer.m"
                  mercury__integer__V_21_21 = mercury__integer__mul_base_2_1_f_0(mercury__integer__Digits_16);
                }
#line 803 "integer.m"
                {
#line 803 "integer.m"
                  mercury__integer__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 803 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 0) = ((MR_Box) (mercury__integer__V_19_19));
#line 803 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 1) = ((MR_Box) (mercury__integer__V_21_21));
#line 803 "integer.m"
                }
#line 802 "integer.m"
              }
#line 813 "integer.m"
            mercury__integer__Len_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 813 "integer.m"
            mercury__integer__Digits0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 814 "integer.m"
            {
#line 814 "integer.m"
              mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__X_7, &mercury__integer__Mod_28, mercury__integer__Digits0_27, &mercury__integer__Digits_29);
            }
#line 815 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Mod_28 == (MR_Integer) 0);
#line 817 "integer.m"
            if (mercury__integer__succeeded)
#line 816 "integer.m"
              {
#line 816 "integer.m"
                mercury__integer__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 816 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 0) = ((MR_Box) (mercury__integer__Len_26));
#line 816 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 1) = ((MR_Box) (mercury__integer__Digits_29));
#line 816 "integer.m"
              }
#line 817 "integer.m"
            else
#line 818 "integer.m"
              {
#line 818 "integer.m"
                MR_Integer mercury__integer__V_30_30 = (mercury__integer__Len_26 + (MR_Integer) 1);
#line 818 "integer.m"
                MR_Word mercury__integer__V_32_32;

#line 818 "integer.m"
                {
#line 818 "integer.m"
                  mercury__integer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_32_32, 0) = ((MR_Box) (mercury__integer__Mod_28));
#line 818 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_32_32, 1) = ((MR_Box) (mercury__integer__Digits_29));
#line 818 "integer.m"
                }
#line 818 "integer.m"
                {
#line 818 "integer.m"
                  mercury__integer__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 818 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 0) = ((MR_Box) (mercury__integer__V_30_30));
#line 818 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 1) = ((MR_Box) (mercury__integer__V_32_32));
#line 818 "integer.m"
                }
#line 818 "integer.m"
              }
#line 837 "integer.m"
            mercury__integer__L1_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, (MR_Integer) 0)));
#line 837 "integer.m"
            mercury__integer__D1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, (MR_Integer) 1)));
#line 837 "integer.m"
            mercury__integer__L2_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, (MR_Integer) 0)));
#line 837 "integer.m"
            mercury__integer__D2_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, (MR_Integer) 1)));
#line 838 "integer.m"
            {
#line 838 "integer.m"
              mercury__integer__add_pairs_4_p_0(&mercury__integer__Div_38, mercury__integer__V_12_12, mercury__integer__V_13_13, &mercury__integer__Ds_39);
            }
#line 839 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_34 > mercury__integer__L2_36);
#line 841 "integer.m"
            if (mercury__integer__succeeded)
#line 840 "integer.m"
              mercury__integer__Len_40 = mercury__integer__L1_34;
#line 841 "integer.m"
            else
#line 842 "integer.m"
              mercury__integer__Len_40 = mercury__integer__L2_36;
#line 844 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Div_38 == (MR_Integer) 0);
#line 846 "integer.m"
            if (mercury__integer__succeeded)
#line 845 "integer.m"
              {
#line 845 "integer.m"
                mercury__integer__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 845 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 0) = ((MR_Box) (mercury__integer__Len_40));
#line 845 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 1) = ((MR_Box) (mercury__integer__Ds_39));
#line 845 "integer.m"
              }
#line 846 "integer.m"
            else
#line 847 "integer.m"
              {
#line 847 "integer.m"
                MR_Integer mercury__integer__V_43_43 = (mercury__integer__Len_40 + (MR_Integer) 1);
#line 847 "integer.m"
                MR_Word mercury__integer__V_45_45;

#line 847 "integer.m"
                {
#line 847 "integer.m"
                  mercury__integer__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_45_45, 0) = ((MR_Box) (mercury__integer__Div_38));
#line 847 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_45_45, 1) = ((MR_Box) (mercury__integer__Ds_39));
#line 847 "integer.m"
                }
#line 847 "integer.m"
                {
#line 847 "integer.m"
                  mercury__integer__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 847 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 0) = ((MR_Box) (mercury__integer__V_43_43));
#line 847 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 1) = ((MR_Box) (mercury__integer__V_45_45));
#line 847 "integer.m"
                }
#line 847 "integer.m"
              }
#line 976 "integer.m"
            /* direct tailcall eliminated */
#line 976 "integer.m"
            {
#line 976 "integer.m"
              MR_Word mercury__integer__HeadVar__1__tmp_copy_1 = mercury__integer__Xs_8;
#line 976 "integer.m"
              MR_Word mercury__integer__Carry__tmp_copy_2 = mercury__integer__V_11_11;

#line 976 "integer.m"
              mercury__integer__Carry_2 = mercury__integer__Carry__tmp_copy_2;
#line 976 "integer.m"
              mercury__integer__HeadVar__1_1 = mercury__integer__HeadVar__1__tmp_copy_1;
#line 976 "integer.m"
            }
#line 976 "integer.m"
            continue;
#line 975 "integer.m"
          }
#line 974 "integer.m"
        return mercury__integer__HeadVar__4_4;
#line 974 "integer.m"
      }
#line 974 "integer.m"
      break;
#line 974 "integer.m"
    }
#line 972 "integer.m"
}

#line 936 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_mul_karatsuba_2_f_0(
#line 936 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 936 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 936 "integer.m"
{
#line 938 "integer.m"
  {
#line 938 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 938 "integer.m"
    MR_Word mercury__integer__Res_8;
#line 938 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 938 "integer.m"
    MR_Word mercury__integer__Ds1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 938 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 938 "integer.m"
    MR_Word mercury__integer__Ds2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 939 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 < (MR_Integer) 35);
#line 941 "integer.m"
    if (mercury__integer__succeeded)
#line 940 "integer.m"
      {
#line 940 "integer.m"
        MR_Word mercury__integer__V_24_24 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 940 "integer.m"
        MR_Word mercury__integer__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 940 "integer.m"
        {
#line 940 "integer.m"
          return mercury__integer__Res_8 = mercury__integer__pos_mul_list_3_f_0(mercury__integer__Ds1_5, mercury__integer__V_24_24, mercury__integer__HeadVar__2_2);
        }
#line 940 "integer.m"
      }
#line 941 "integer.m"
    else
#line 966 "integer.m"
      {
#line 966 "integer.m"
        MR_Integer mercury__integer__Middle_9;
#line 966 "integer.m"
        MR_Word mercury__integer__Res0_20;
#line 966 "integer.m"
        MR_Word mercury__integer__Res1_21;
#line 966 "integer.m"
        MR_Word mercury__integer__Res2_22;
#line 966 "integer.m"
        MR_Word mercury__integer__V_38_38;
#line 966 "integer.m"
        MR_Word mercury__integer__V_39_39;
#line 966 "integer.m"
        MR_Integer mercury__integer__V_40_40;
#line 966 "integer.m"
        MR_Integer mercury__integer__V_41_41;
#line 966 "integer.m"
        MR_Word mercury__integer__V_44_44;
#line 966 "integer.m"
        MR_Word mercury__integer__V_45_45;
#line 966 "integer.m"
        MR_Word mercury__integer__V_46_46;
#line 966 "integer.m"
        MR_Integer mercury__integer__V_47_47;

#line 942 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L2_6 < mercury__integer__L1_4);
#line 944 "integer.m"
        if (mercury__integer__succeeded)
#line 943 "integer.m"
          {
#line 943 "integer.m"
            {
#line 943 "integer.m"
              mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.pos_mul_karatsuba\'/2", (MR_String) "second factor smaller");
            }
#line 943 "integer.m"
          }
#line 944 "integer.m"
        else
#line 945 "integer.m"
          {
#line 945 "integer.m"
            MR_Word mercury__integer__TypeCtorInfo_49_49;
#line 945 "integer.m"
            MR_Integer mercury__integer__HiDigits_10;
#line 945 "integer.m"
            MR_Integer mercury__integer__HiDigitsSmall_11;
#line 945 "integer.m"
            MR_Word mercury__integer__Ds1Upper_12;
#line 945 "integer.m"
            MR_Word mercury__integer__Ds1Lower_13;
#line 945 "integer.m"
            MR_Word mercury__integer__Ds2Upper_14;
#line 945 "integer.m"
            MR_Word mercury__integer__Ds2Lower_15;
#line 945 "integer.m"
            MR_Word mercury__integer__LoDs1_16;
#line 945 "integer.m"
            MR_Word mercury__integer__LoDs2_17;
#line 945 "integer.m"
            MR_Word mercury__integer__HiDs1_18;
#line 945 "integer.m"
            MR_Word mercury__integer__HiDs2_19;
#line 945 "integer.m"
            MR_Integer mercury__integer__V_31_31;
#line 945 "integer.m"
            MR_Integer mercury__integer__V_32_32;
#line 957 "integer.m"
            MR_Integer mercury__integer__V_33_33;

#line 945 "integer.m"
            {
#line 945 "integer.m"
              mercury__integer__Middle_9 = mercury__int__div_2_f_0(mercury__integer__L2_6, (MR_Integer) 2);
            }
#line 946 "integer.m"
            mercury__integer__HiDigits_10 = (mercury__integer__L2_6 - mercury__integer__Middle_9);
#line 947 "integer.m"
            mercury__integer__V_31_31 = (mercury__integer__L1_4 - mercury__integer__Middle_9);
#line 211 "int.opt"
            mercury__integer__succeeded = ((MR_Integer) 0 > mercury__integer__V_31_31);
#line 214 "int.opt"
            if (mercury__integer__succeeded)
#line 213 "int.opt"
              mercury__integer__HiDigitsSmall_11 = (MR_Integer) 0;
#line 214 "int.opt"
            else
#line 215 "int.opt"
              mercury__integer__HiDigitsSmall_11 = mercury__integer__V_31_31;
#line 6609 "integer.c"
            mercury__integer__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 950 "integer.m"
            {
#line 950 "integer.m"
              mercury__list__split_upto_4_p_0(mercury__integer__TypeCtorInfo_49_49, mercury__integer__HiDigitsSmall_11, mercury__integer__Ds1_5, &mercury__integer__Ds1Upper_12, &mercury__integer__Ds1Lower_13);
            }
#line 952 "integer.m"
            {
#line 952 "integer.m"
              mercury__list__split_upto_4_p_0(mercury__integer__TypeCtorInfo_49_49, mercury__integer__HiDigits_10, mercury__integer__Ds2_7, &mercury__integer__Ds2Upper_14, &mercury__integer__Ds2Lower_15);
            }
#line 240 "int.opt"
            mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__Middle_9);
#line 243 "int.opt"
            if (mercury__integer__succeeded)
#line 242 "int.opt"
              mercury__integer__V_32_32 = mercury__integer__L1_4;
#line 243 "int.opt"
            else
#line 244 "int.opt"
              mercury__integer__V_32_32 = mercury__integer__Middle_9;
#line 953 "integer.m"
            {
#line 953 "integer.m"
              mercury__integer__LoDs1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 953 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__LoDs1_16, 0) = ((MR_Box) (mercury__integer__V_32_32));
#line 953 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__LoDs1_16, 1) = ((MR_Box) (mercury__integer__Ds1Lower_13));
#line 953 "integer.m"
            }
#line 954 "integer.m"
            {
#line 954 "integer.m"
              mercury__integer__LoDs2_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 954 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__LoDs2_17, 0) = ((MR_Box) (mercury__integer__Middle_9));
#line 954 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__LoDs2_17, 1) = ((MR_Box) (mercury__integer__Ds2Lower_15));
#line 954 "integer.m"
            }
#line 955 "integer.m"
            {
#line 955 "integer.m"
              mercury__integer__HiDs1_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 955 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HiDs1_18, 0) = ((MR_Box) (mercury__integer__HiDigitsSmall_11));
#line 955 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HiDs1_18, 1) = ((MR_Box) (mercury__integer__Ds1Upper_12));
#line 955 "integer.m"
            }
#line 956 "integer.m"
            {
#line 956 "integer.m"
              mercury__integer__HiDs2_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 956 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HiDs2_19, 0) = ((MR_Box) (mercury__integer__HiDigits_10));
#line 956 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HiDs2_19, 1) = ((MR_Box) (mercury__integer__Ds2Upper_14));
#line 956 "integer.m"
            }
#line 933 "integer.m"
            mercury__integer__V_33_33 = ((MR_Integer) 35 * (MR_Integer) 10);
#line 957 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Middle_9 > mercury__integer__V_33_33);
#line 961 "integer.m"
            if (mercury__integer__succeeded)
#line 958 "integer.m"
              {
#line 958 "integer.m"
                MR_Word mercury__integer__V_34_34;
#line 958 "integer.m"
                MR_Word mercury__integer__V_35_35;
#line 958 "integer.m"
                MR_Integer mercury__integer__L1_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__LoDs1_16, (MR_Integer) 0)));
#line 958 "integer.m"
                MR_Integer mercury__integer__L2_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__LoDs2_17, (MR_Integer) 0)));
#line 958 "integer.m"
                MR_Integer mercury__integer__L1_78;
#line 958 "integer.m"
                MR_Integer mercury__integer__L2_80;
#line 958 "integer.m"
                MR_Integer mercury__integer__L1_86;
#line 958 "integer.m"
                MR_Integer mercury__integer__L2_88;
#line 917 "integer.m"
                MR_Word mercury__integer__Ds1_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__LoDs1_16, (MR_Integer) 1)));
#line 917 "integer.m"
                MR_Word mercury__integer__Ds2_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__LoDs2_17, (MR_Integer) 1)));
#line 917 "integer.m"
                MR_Word mercury__integer__Ds1_79;
#line 917 "integer.m"
                MR_Word mercury__integer__Ds2_81;
#line 917 "integer.m"
                MR_Word mercury__integer__Ds1_87;
#line 917 "integer.m"
                MR_Word mercury__integer__Ds2_89;

#line 918 "integer.m"
                mercury__integer__succeeded = (mercury__integer__L1_66 < mercury__integer__L2_68);
#line 917 "integer.m"
                if (mercury__integer__succeeded)
#line 919 "integer.m"
                  {
#line 919 "integer.m"
                    mercury__integer__Res0_20 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__LoDs1_16, mercury__integer__LoDs2_17);
                  }
#line 917 "integer.m"
                else
#line 921 "integer.m"
                  {
#line 921 "integer.m"
                    mercury__integer__Res0_20 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__LoDs2_17, mercury__integer__LoDs1_16);
                  }
#line 344 "integer.m"
                {
#line 344 "integer.m"
                  mercury__integer__V_34_34 = mercury__integer__big_plus_2_f_0(mercury__integer__LoDs1_16, mercury__integer__HiDs1_18);
                }
#line 344 "integer.m"
                {
#line 344 "integer.m"
                  mercury__integer__V_35_35 = mercury__integer__big_plus_2_f_0(mercury__integer__LoDs2_17, mercury__integer__HiDs2_19);
                }
#line 917 "integer.m"
                mercury__integer__L1_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_34_34, (MR_Integer) 0)));
#line 917 "integer.m"
                mercury__integer__Ds1_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_34_34, (MR_Integer) 1)));
#line 917 "integer.m"
                mercury__integer__L2_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_35_35, (MR_Integer) 0)));
#line 917 "integer.m"
                mercury__integer__Ds2_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_35_35, (MR_Integer) 1)));
#line 918 "integer.m"
                mercury__integer__succeeded = (mercury__integer__L1_78 < mercury__integer__L2_80);
#line 917 "integer.m"
                if (mercury__integer__succeeded)
#line 919 "integer.m"
                  {
#line 919 "integer.m"
                    mercury__integer__Res1_21 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__V_34_34, mercury__integer__V_35_35);
                  }
#line 917 "integer.m"
                else
#line 921 "integer.m"
                  {
#line 921 "integer.m"
                    mercury__integer__Res1_21 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__V_35_35, mercury__integer__V_34_34);
                  }
#line 917 "integer.m"
                mercury__integer__L1_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HiDs1_18, (MR_Integer) 0)));
#line 917 "integer.m"
                mercury__integer__Ds1_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HiDs1_18, (MR_Integer) 1)));
#line 917 "integer.m"
                mercury__integer__L2_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HiDs2_19, (MR_Integer) 0)));
#line 917 "integer.m"
                mercury__integer__Ds2_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HiDs2_19, (MR_Integer) 1)));
#line 918 "integer.m"
                mercury__integer__succeeded = (mercury__integer__L1_86 < mercury__integer__L2_88);
#line 917 "integer.m"
                if (mercury__integer__succeeded)
#line 919 "integer.m"
                  {
#line 919 "integer.m"
                    mercury__integer__Res2_22 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__HiDs1_18, mercury__integer__HiDs2_19);
                  }
#line 917 "integer.m"
                else
#line 921 "integer.m"
                  {
#line 921 "integer.m"
                    mercury__integer__Res2_22 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__HiDs2_19, mercury__integer__HiDs1_18);
                  }
#line 958 "integer.m"
              }
#line 961 "integer.m"
            else
#line 962 "integer.m"
              {
#line 962 "integer.m"
                MR_Word mercury__integer__V_36_36;
#line 962 "integer.m"
                MR_Word mercury__integer__V_37_37;

#line 962 "integer.m"
                {
#line 962 "integer.m"
                  mercury__integer__Res0_20 = mercury__integer__pos_mul_2_f_0(mercury__integer__LoDs1_16, mercury__integer__LoDs2_17);
                }
#line 344 "integer.m"
                {
#line 344 "integer.m"
                  mercury__integer__V_36_36 = mercury__integer__big_plus_2_f_0(mercury__integer__LoDs1_16, mercury__integer__HiDs1_18);
                }
#line 344 "integer.m"
                {
#line 344 "integer.m"
                  mercury__integer__V_37_37 = mercury__integer__big_plus_2_f_0(mercury__integer__LoDs2_17, mercury__integer__HiDs2_19);
                }
#line 963 "integer.m"
                {
#line 963 "integer.m"
                  mercury__integer__Res1_21 = mercury__integer__pos_mul_2_f_0(mercury__integer__V_36_36, mercury__integer__V_37_37);
                }
#line 964 "integer.m"
                {
#line 964 "integer.m"
                  mercury__integer__Res2_22 = mercury__integer__pos_mul_2_f_0(mercury__integer__HiDs1_18, mercury__integer__HiDs2_19);
                }
#line 962 "integer.m"
              }
#line 945 "integer.m"
          }
#line 967 "integer.m"
        mercury__integer__V_41_41 = ((MR_Integer) 2 * mercury__integer__Middle_9);
#line 967 "integer.m"
        mercury__integer__V_40_40 = (mercury__integer__V_41_41 * (MR_Integer) 14);
#line 967 "integer.m"
        {
#line 967 "integer.m"
          mercury__integer__V_39_39 = mercury__integer__big_left_shift_2_f_0(mercury__integer__Res2_22, mercury__integer__V_40_40);
        }
#line 968 "integer.m"
        {
#line 968 "integer.m"
          mercury__integer__V_46_46 = mercury__integer__f_plus_2_f_0(mercury__integer__Res2_22, mercury__integer__Res0_20);
        }
#line 968 "integer.m"
        {
#line 968 "integer.m"
          mercury__integer__V_45_45 = mercury__integer__f_minus_2_f_0(mercury__integer__Res1_21, mercury__integer__V_46_46);
        }
#line 968 "integer.m"
        mercury__integer__V_47_47 = (mercury__integer__Middle_9 * (MR_Integer) 14);
#line 968 "integer.m"
        {
#line 968 "integer.m"
          mercury__integer__V_44_44 = mercury__integer__big_left_shift_2_f_0(mercury__integer__V_45_45, mercury__integer__V_47_47);
        }
#line 967 "integer.m"
        {
#line 967 "integer.m"
          mercury__integer__V_38_38 = mercury__integer__f_plus_2_f_0(mercury__integer__V_39_39, mercury__integer__V_44_44);
        }
#line 968 "integer.m"
        {
#line 968 "integer.m"
          return mercury__integer__Res_8 = mercury__integer__f_plus_2_f_0(mercury__integer__V_38_38, mercury__integer__Res0_20);
        }
#line 966 "integer.m"
      }
#line 938 "integer.m"
    return mercury__integer__Res_8;
#line 938 "integer.m"
  }
#line 936 "integer.m"
}

#line 915 "integer.m"
MR_Word MR_CALL 
mercury__integer__pos_mul_2_f_0(
#line 915 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 915 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 915 "integer.m"
{
#line 917 "integer.m"
  {
#line 917 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 917 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 917 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 917 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 917 "integer.m"
    MR_Word mercury__integer__Ds1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 917 "integer.m"
    MR_Word mercury__integer__Ds2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 918 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
#line 917 "integer.m"
    if (mercury__integer__succeeded)
#line 919 "integer.m"
      {
#line 919 "integer.m"
        return mercury__integer__HeadVar__3_3 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__HeadVar__2_2);
      }
#line 917 "integer.m"
    else
#line 921 "integer.m"
      {
#line 921 "integer.m"
        return mercury__integer__HeadVar__3_3 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__HeadVar__2_2, mercury__integer__HeadVar__1_1);
      }
#line 917 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 917 "integer.m"
  }
#line 915 "integer.m"
}

#line 906 "integer.m"
static void MR_CALL 
mercury__integer__diff_pairs_equal_4_p_0(
#line 906 "integer.m"
  MR_Integer * mercury__integer__HeadVar__1_1,
#line 906 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 906 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 906 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4)
#line 906 "integer.m"
{
#line 909 "integer.m"
  {
#line 909 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 909 "integer.m"
    if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 909 "integer.m"
      {
#line 909 "integer.m"
        *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 909 "integer.m"
        *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 909 "integer.m"
      }
#line 909 "integer.m"
    else
#line 909 "integer.m"
      {
#line 909 "integer.m"
        MR_Word mercury__integer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 909 "integer.m"
        MR_Integer mercury__integer__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));

#line 909 "integer.m"
        if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 910 "integer.m"
          {
#line 910 "integer.m"
            *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 910 "integer.m"
            *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 910 "integer.m"
          }
#line 909 "integer.m"
        else
#line 911 "integer.m"
          {
#line 911 "integer.m"
            MR_Integer mercury__integer__Y_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 911 "integer.m"
            MR_Word mercury__integer__Ys_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 911 "integer.m"
            MR_Integer mercury__integer__Mod_13;
#line 911 "integer.m"
            MR_Word mercury__integer__TailDs_14;
#line 911 "integer.m"
            MR_Integer mercury__integer__DivTail_15;
#line 911 "integer.m"
            MR_Integer mercury__integer__V_16_16;
#line 911 "integer.m"
            MR_Integer mercury__integer__V_17_17;

#line 912 "integer.m"
            {
#line 912 "integer.m"
              mercury__integer__diff_pairs_equal_4_p_0(&mercury__integer__DivTail_15, mercury__integer__V_18_18, mercury__integer__Ys_12, &mercury__integer__TailDs_14);
            }
#line 913 "integer.m"
            mercury__integer__V_17_17 = (mercury__integer__V_19_19 - mercury__integer__Y_11);
#line 913 "integer.m"
            mercury__integer__V_16_16 = (mercury__integer__V_17_17 + mercury__integer__DivTail_15);
#line 832 "integer.m"
            {
#line 832 "integer.m"
              *mercury__integer__HeadVar__1_1 = mercury__int__f_62_62_2_f_0(mercury__integer__V_16_16, (MR_Integer) 14);
            }
#line 833 "integer.m"
            mercury__integer__Mod_13 = (mercury__integer__V_16_16 & (MR_Integer) 16383);
#line 911 "integer.m"
            {
#line 911 "integer.m"
              MR_Word base;
#line 911 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "integer.m"
              *mercury__integer__HeadVar__4_4 = base;
#line 911 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_13));
#line 911 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__TailDs_14));
#line 911 "integer.m"
            }
#line 911 "integer.m"
          }
#line 909 "integer.m"
      }
#line 909 "integer.m"
  }
#line 906 "integer.m"
}

#line 892 "integer.m"
static void MR_CALL 
mercury__integer__diff_pairs_4_p_0(
#line 892 "integer.m"
  MR_Integer * mercury__integer__Div_5,
#line 892 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 892 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 892 "integer.m"
  MR_Word * mercury__integer__Ds_10)
#line 892 "integer.m"
{
#line 895 "integer.m"
  {
#line 895 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 895 "integer.m"
    MR_Integer mercury__integer__L1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 895 "integer.m"
    MR_Word mercury__integer__D1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 895 "integer.m"
    MR_Integer mercury__integer__L2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 895 "integer.m"
    MR_Word mercury__integer__D2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));

#line 896 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_6 == mercury__integer__L2_8);
#line 898 "integer.m"
    if (mercury__integer__succeeded)
#line 897 "integer.m"
      {
#line 897 "integer.m"
        mercury__integer__diff_pairs_equal_4_p_0(mercury__integer__Div_5, mercury__integer__D1_7, mercury__integer__D2_9, mercury__integer__Ds_10);
#line 897 "integer.m"
        return;
      }
#line 898 "integer.m"
    else
#line 902 "integer.m"
      {
#line 902 "integer.m"
        MR_Integer mercury__integer__H1_11;
#line 902 "integer.m"
        MR_Word mercury__integer__T1_12;

#line 898 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_6 > mercury__integer__L2_8);
#line 898 "integer.m"
        if (mercury__integer__succeeded)
#line 898 "integer.m"
          {
#line 898 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_7)) == (MR_mktag((MR_Integer) 1)));
#line 898 "integer.m"
            if (mercury__integer__succeeded)
#line 898 "integer.m"
              {
#line 898 "integer.m"
                mercury__integer__H1_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 0)));
#line 898 "integer.m"
                mercury__integer__T1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 1)));
#line 898 "integer.m"
              }
#line 898 "integer.m"
          }
#line 902 "integer.m"
        if (mercury__integer__succeeded)
#line 899 "integer.m"
          {
#line 899 "integer.m"
            MR_Integer mercury__integer__Div1_13;
#line 899 "integer.m"
            MR_Word mercury__integer__Ds1_14;
#line 899 "integer.m"
            MR_Integer mercury__integer__Mod_15;
#line 899 "integer.m"
            MR_Word mercury__integer__V_16_16;
#line 899 "integer.m"
            MR_Integer mercury__integer__V_18_18 = (mercury__integer__L1_6 - (MR_Integer) 1);
#line 899 "integer.m"
            MR_Integer mercury__integer__V_20_20;

#line 899 "integer.m"
            {
#line 899 "integer.m"
              mercury__integer__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 899 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, 0) = ((MR_Box) (mercury__integer__V_18_18));
#line 899 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, 1) = ((MR_Box) (mercury__integer__T1_12));
#line 899 "integer.m"
            }
#line 899 "integer.m"
            {
#line 899 "integer.m"
              mercury__integer__diff_pairs_4_p_0(&mercury__integer__Div1_13, mercury__integer__V_16_16, mercury__integer__HeadVar__3_3, &mercury__integer__Ds1_14);
            }
#line 900 "integer.m"
            mercury__integer__V_20_20 = (mercury__integer__H1_11 + mercury__integer__Div1_13);
#line 832 "integer.m"
            {
#line 832 "integer.m"
              *mercury__integer__Div_5 = mercury__int__f_62_62_2_f_0(mercury__integer__V_20_20, (MR_Integer) 14);
            }
#line 833 "integer.m"
            mercury__integer__Mod_15 = (mercury__integer__V_20_20 & (MR_Integer) 16383);
#line 901 "integer.m"
            {
#line 901 "integer.m"
              MR_Word base;
#line 901 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 901 "integer.m"
              *mercury__integer__Ds_10 = base;
#line 901 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_15));
#line 901 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_14));
#line 901 "integer.m"
            }
#line 899 "integer.m"
          }
#line 902 "integer.m"
        else
#line 903 "integer.m"
          {
#line 903 "integer.m"
            {
#line 903 "integer.m"
              mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "predicate \140integer.diff_pairs\'/4", (MR_String) "invalid integer");
#line 903 "integer.m"
              return;
            }
#line 903 "integer.m"
          }
#line 902 "integer.m"
      }
#line 895 "integer.m"
  }
#line 892 "integer.m"
}

#line 877 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_minus_2_f_0(
#line 877 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 877 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 877 "integer.m"
{
#line 879 "integer.m"
  {
#line 879 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 879 "integer.m"
    MR_Word mercury__integer__Out_8;
#line 879 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 879 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 879 "integer.m"
    MR_Integer mercury__integer__Mod_9;
#line 879 "integer.m"
    MR_Word mercury__integer__Ds_10;
#line 879 "integer.m"
    MR_Integer mercury__integer__Len_11;
#line 879 "integer.m"
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 879 "integer.m"
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 880 "integer.m"
    {
#line 880 "integer.m"
      mercury__integer__diff_pairs_4_p_0(&mercury__integer__Mod_9, mercury__integer__HeadVar__1_1, mercury__integer__HeadVar__2_2, &mercury__integer__Ds_10);
    }
#line 881 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
#line 883 "integer.m"
    if (mercury__integer__succeeded)
#line 882 "integer.m"
      mercury__integer__Len_11 = mercury__integer__L1_4;
#line 883 "integer.m"
    else
#line 884 "integer.m"
      mercury__integer__Len_11 = mercury__integer__L2_6;
#line 886 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Mod_9 == (MR_Integer) 0);
#line 888 "integer.m"
    if (mercury__integer__succeeded)
#line 887 "integer.m"
      {
#line 887 "integer.m"
        MR_Word mercury__integer__V_14_14;

#line 887 "integer.m"
        {
#line 887 "integer.m"
          mercury__integer__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 887 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__Len_11));
#line 887 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__Ds_10));
#line 887 "integer.m"
        }
#line 887 "integer.m"
        {
#line 887 "integer.m"
          return mercury__integer__Out_8 = mercury__integer__decap_1_f_0(mercury__integer__V_14_14);
        }
#line 887 "integer.m"
      }
#line 888 "integer.m"
    else
#line 889 "integer.m"
      {
#line 889 "integer.m"
        MR_Integer mercury__integer__V_15_15 = (mercury__integer__Len_11 + (MR_Integer) 1);
#line 889 "integer.m"
        MR_Word mercury__integer__V_17_17;

#line 889 "integer.m"
        {
#line 889 "integer.m"
          mercury__integer__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, 0) = ((MR_Box) (mercury__integer__Mod_9));
#line 889 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, 1) = ((MR_Box) (mercury__integer__Ds_10));
#line 889 "integer.m"
        }
#line 889 "integer.m"
        {
#line 889 "integer.m"
          mercury__integer__Out_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 889 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Out_8, 0) = ((MR_Box) (mercury__integer__V_15_15));
#line 889 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Out_8, 1) = ((MR_Box) (mercury__integer__V_17_17));
#line 889 "integer.m"
        }
#line 889 "integer.m"
      }
#line 879 "integer.m"
    return mercury__integer__Out_8;
#line 879 "integer.m"
  }
#line 877 "integer.m"
}

#line 868 "integer.m"
static void MR_CALL 
mercury__integer__add_pairs_equal_4_p_0(
#line 868 "integer.m"
  MR_Integer * mercury__integer__HeadVar__1_1,
#line 868 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 868 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 868 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4)
#line 868 "integer.m"
{
#line 871 "integer.m"
  {
#line 871 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 871 "integer.m"
    if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 871 "integer.m"
      {
#line 871 "integer.m"
        *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 871 "integer.m"
        *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "integer.m"
      }
#line 871 "integer.m"
    else
#line 871 "integer.m"
      {
#line 871 "integer.m"
        MR_Word mercury__integer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 871 "integer.m"
        MR_Integer mercury__integer__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));

#line 871 "integer.m"
        if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 872 "integer.m"
          {
#line 872 "integer.m"
            *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 872 "integer.m"
            *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "integer.m"
          }
#line 871 "integer.m"
        else
#line 873 "integer.m"
          {
#line 873 "integer.m"
            MR_Integer mercury__integer__Y_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 873 "integer.m"
            MR_Word mercury__integer__Ys_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 873 "integer.m"
            MR_Integer mercury__integer__Mod_13;
#line 873 "integer.m"
            MR_Word mercury__integer__TailDs_14;
#line 873 "integer.m"
            MR_Integer mercury__integer__DivTail_15;
#line 873 "integer.m"
            MR_Integer mercury__integer__V_16_16;
#line 873 "integer.m"
            MR_Integer mercury__integer__V_17_17;

#line 874 "integer.m"
            {
#line 874 "integer.m"
              mercury__integer__add_pairs_equal_4_p_0(&mercury__integer__DivTail_15, mercury__integer__V_18_18, mercury__integer__Ys_12, &mercury__integer__TailDs_14);
            }
#line 875 "integer.m"
            mercury__integer__V_17_17 = (mercury__integer__V_19_19 + mercury__integer__Y_11);
#line 875 "integer.m"
            mercury__integer__V_16_16 = (mercury__integer__V_17_17 + mercury__integer__DivTail_15);
#line 832 "integer.m"
            {
#line 832 "integer.m"
              *mercury__integer__HeadVar__1_1 = mercury__int__f_62_62_2_f_0(mercury__integer__V_16_16, (MR_Integer) 14);
            }
#line 833 "integer.m"
            mercury__integer__Mod_13 = (mercury__integer__V_16_16 & (MR_Integer) 16383);
#line 873 "integer.m"
            {
#line 873 "integer.m"
              MR_Word base;
#line 873 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 873 "integer.m"
              *mercury__integer__HeadVar__4_4 = base;
#line 873 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_13));
#line 873 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__TailDs_14));
#line 873 "integer.m"
            }
#line 873 "integer.m"
          }
#line 871 "integer.m"
      }
#line 871 "integer.m"
  }
#line 868 "integer.m"
}

#line 850 "integer.m"
static void MR_CALL 
mercury__integer__add_pairs_4_p_0(
#line 850 "integer.m"
  MR_Integer * mercury__integer__Div_5,
#line 850 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 850 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 850 "integer.m"
  MR_Word * mercury__integer__Ds_10)
#line 850 "integer.m"
{
#line 853 "integer.m"
  {
#line 853 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 853 "integer.m"
    MR_Integer mercury__integer__L1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 853 "integer.m"
    MR_Word mercury__integer__D1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 853 "integer.m"
    MR_Integer mercury__integer__L2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 853 "integer.m"
    MR_Word mercury__integer__D2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));

#line 854 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_6 == mercury__integer__L2_8);
#line 856 "integer.m"
    if (mercury__integer__succeeded)
#line 855 "integer.m"
      {
#line 855 "integer.m"
        mercury__integer__add_pairs_equal_4_p_0(mercury__integer__Div_5, mercury__integer__D1_7, mercury__integer__D2_9, mercury__integer__Ds_10);
#line 855 "integer.m"
        return;
      }
#line 856 "integer.m"
    else
#line 860 "integer.m"
      {
#line 860 "integer.m"
        MR_Integer mercury__integer__H2_11;
#line 860 "integer.m"
        MR_Word mercury__integer__T2_12;

#line 856 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_6 < mercury__integer__L2_8);
#line 856 "integer.m"
        if (mercury__integer__succeeded)
#line 856 "integer.m"
          {
#line 856 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_9)) == (MR_mktag((MR_Integer) 1)));
#line 856 "integer.m"
            if (mercury__integer__succeeded)
#line 856 "integer.m"
              {
#line 856 "integer.m"
                mercury__integer__H2_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_9, (MR_Integer) 0)));
#line 856 "integer.m"
                mercury__integer__T2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_9, (MR_Integer) 1)));
#line 856 "integer.m"
              }
#line 856 "integer.m"
          }
#line 860 "integer.m"
        if (mercury__integer__succeeded)
#line 857 "integer.m"
          {
#line 857 "integer.m"
            MR_Integer mercury__integer__Div1_13;
#line 857 "integer.m"
            MR_Word mercury__integer__Ds1_14;
#line 857 "integer.m"
            MR_Integer mercury__integer__Mod_15;
#line 857 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 857 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_8 - (MR_Integer) 1);
#line 857 "integer.m"
            MR_Integer mercury__integer__V_22_22;

#line 857 "integer.m"
            {
#line 857 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 857 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 857 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_12));
#line 857 "integer.m"
            }
#line 857 "integer.m"
            {
#line 857 "integer.m"
              mercury__integer__add_pairs_4_p_0(&mercury__integer__Div1_13, mercury__integer__HeadVar__2_2, mercury__integer__V_19_19, &mercury__integer__Ds1_14);
            }
#line 858 "integer.m"
            mercury__integer__V_22_22 = (mercury__integer__H2_11 + mercury__integer__Div1_13);
#line 832 "integer.m"
            {
#line 832 "integer.m"
              *mercury__integer__Div_5 = mercury__int__f_62_62_2_f_0(mercury__integer__V_22_22, (MR_Integer) 14);
            }
#line 833 "integer.m"
            mercury__integer__Mod_15 = (mercury__integer__V_22_22 & (MR_Integer) 16383);
#line 859 "integer.m"
            {
#line 859 "integer.m"
              MR_Word base;
#line 859 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "integer.m"
              *mercury__integer__Ds_10 = base;
#line 859 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_15));
#line 859 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_14));
#line 859 "integer.m"
            }
#line 857 "integer.m"
          }
#line 860 "integer.m"
        else
#line 864 "integer.m"
          {
#line 864 "integer.m"
            MR_Integer mercury__integer__H1_16;
#line 864 "integer.m"
            MR_Word mercury__integer__T1_17;

#line 860 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_6 > mercury__integer__L2_8);
#line 860 "integer.m"
            if (mercury__integer__succeeded)
#line 860 "integer.m"
              {
#line 860 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_7)) == (MR_mktag((MR_Integer) 1)));
#line 860 "integer.m"
                if (mercury__integer__succeeded)
#line 860 "integer.m"
                  {
#line 860 "integer.m"
                    mercury__integer__H1_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 0)));
#line 860 "integer.m"
                    mercury__integer__T1_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 1)));
#line 860 "integer.m"
                  }
#line 860 "integer.m"
              }
#line 864 "integer.m"
            if (mercury__integer__succeeded)
#line 861 "integer.m"
              {
#line 861 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 861 "integer.m"
                MR_Integer mercury__integer__V_25_25 = (mercury__integer__L1_6 - (MR_Integer) 1);
#line 861 "integer.m"
                MR_Integer mercury__integer__V_27_27;
#line 861 "integer.m"
                MR_Integer mercury__integer__Div1_31;
#line 861 "integer.m"
                MR_Word mercury__integer__Ds1_32;
#line 861 "integer.m"
                MR_Integer mercury__integer__Mod_33;

#line 861 "integer.m"
                {
#line 861 "integer.m"
                  mercury__integer__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 861 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 0) = ((MR_Box) (mercury__integer__V_25_25));
#line 861 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 1) = ((MR_Box) (mercury__integer__T1_17));
#line 861 "integer.m"
                }
#line 861 "integer.m"
                {
#line 861 "integer.m"
                  mercury__integer__add_pairs_4_p_0(&mercury__integer__Div1_31, mercury__integer__V_23_23, mercury__integer__HeadVar__3_3, &mercury__integer__Ds1_32);
                }
#line 862 "integer.m"
                mercury__integer__V_27_27 = (mercury__integer__H1_16 + mercury__integer__Div1_31);
#line 832 "integer.m"
                {
#line 832 "integer.m"
                  *mercury__integer__Div_5 = mercury__int__f_62_62_2_f_0(mercury__integer__V_27_27, (MR_Integer) 14);
                }
#line 833 "integer.m"
                mercury__integer__Mod_33 = (mercury__integer__V_27_27 & (MR_Integer) 16383);
#line 863 "integer.m"
                {
#line 863 "integer.m"
                  MR_Word base;
#line 863 "integer.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "integer.m"
                  *mercury__integer__Ds_10 = base;
#line 863 "integer.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_33));
#line 863 "integer.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_32));
#line 863 "integer.m"
                }
#line 861 "integer.m"
              }
#line 864 "integer.m"
            else
#line 865 "integer.m"
              {
#line 865 "integer.m"
                {
#line 865 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "predicate \140integer.add_pairs\'/4", (MR_String) "invalid integer");
#line 865 "integer.m"
                  return;
                }
#line 865 "integer.m"
              }
#line 864 "integer.m"
          }
#line 860 "integer.m"
      }
#line 853 "integer.m"
  }
#line 850 "integer.m"
}

#line 821 "integer.m"
static void MR_CALL 
mercury__integer__mul_by_digit_2_4_p_0(
#line 821 "integer.m"
  MR_Integer mercury__integer__D_1,
#line 821 "integer.m"
  MR_Integer * mercury__integer__HeadVar__2_2,
#line 821 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 821 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4)
#line 821 "integer.m"
{
#line 824 "integer.m"
  {
#line 824 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 824 "integer.m"
    if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 824 "integer.m"
      {
#line 824 "integer.m"
        *mercury__integer__HeadVar__2_2 = (MR_Integer) 0;
#line 824 "integer.m"
        *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 824 "integer.m"
      }
#line 824 "integer.m"
    else
#line 825 "integer.m"
      {
#line 825 "integer.m"
        MR_Integer mercury__integer__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 825 "integer.m"
        MR_Word mercury__integer__Xs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 825 "integer.m"
        MR_Integer mercury__integer__Mod_10;
#line 825 "integer.m"
        MR_Word mercury__integer__NewXs_11;
#line 825 "integer.m"
        MR_Integer mercury__integer__DivXs_12;
#line 825 "integer.m"
        MR_Integer mercury__integer__V_13_13;
#line 825 "integer.m"
        MR_Integer mercury__integer__V_14_14;

#line 826 "integer.m"
        {
#line 826 "integer.m"
          mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__D_1, &mercury__integer__DivXs_12, mercury__integer__Xs_9, &mercury__integer__NewXs_11);
        }
#line 827 "integer.m"
        mercury__integer__V_14_14 = (mercury__integer__D_1 * mercury__integer__X_8);
#line 827 "integer.m"
        mercury__integer__V_13_13 = (mercury__integer__V_14_14 + mercury__integer__DivXs_12);
#line 832 "integer.m"
        {
#line 832 "integer.m"
          *mercury__integer__HeadVar__2_2 = mercury__int__f_62_62_2_f_0(mercury__integer__V_13_13, (MR_Integer) 14);
        }
#line 833 "integer.m"
        mercury__integer__Mod_10 = (mercury__integer__V_13_13 & (MR_Integer) 16383);
#line 825 "integer.m"
        {
#line 825 "integer.m"
          MR_Word base;
#line 825 "integer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "integer.m"
          *mercury__integer__HeadVar__4_4 = base;
#line 825 "integer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_10));
#line 825 "integer.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__NewXs_11));
#line 825 "integer.m"
        }
#line 825 "integer.m"
      }
#line 824 "integer.m"
  }
#line 821 "integer.m"
}

#line 811 "integer.m"
static MR_Word MR_CALL 
mercury__integer__mul_by_digit_2_f_0(
#line 811 "integer.m"
  MR_Integer mercury__integer__Digit_4,
#line 811 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 811 "integer.m"
{
#line 813 "integer.m"
  {
#line 813 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 813 "integer.m"
    MR_Word mercury__integer__Out_7;
#line 813 "integer.m"
    MR_Integer mercury__integer__Len_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 813 "integer.m"
    MR_Word mercury__integer__Digits0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 813 "integer.m"
    MR_Integer mercury__integer__Mod_8;
#line 813 "integer.m"
    MR_Word mercury__integer__Digits_9;

#line 814 "integer.m"
    {
#line 814 "integer.m"
      mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__Digit_4, &mercury__integer__Mod_8, mercury__integer__Digits0_6, &mercury__integer__Digits_9);
    }
#line 815 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Mod_8 == (MR_Integer) 0);
#line 817 "integer.m"
    if (mercury__integer__succeeded)
#line 816 "integer.m"
      {
#line 816 "integer.m"
        mercury__integer__Out_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 816 "integer.m"
        MR_hl_field(MR_mktag(0), mercury__integer__Out_7, 0) = ((MR_Box) (mercury__integer__Len_5));
#line 816 "integer.m"
        MR_hl_field(MR_mktag(0), mercury__integer__Out_7, 1) = ((MR_Box) (mercury__integer__Digits_9));
#line 816 "integer.m"
      }
#line 817 "integer.m"
    else
#line 818 "integer.m"
      {
#line 818 "integer.m"
        MR_Integer mercury__integer__V_10_10 = (mercury__integer__Len_5 + (MR_Integer) 1);
#line 818 "integer.m"
        MR_Word mercury__integer__V_12_12;

#line 818 "integer.m"
        {
#line 818 "integer.m"
          mercury__integer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_12_12, 0) = ((MR_Box) (mercury__integer__Mod_8));
#line 818 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_12_12, 1) = ((MR_Box) (mercury__integer__Digits_9));
#line 818 "integer.m"
        }
#line 818 "integer.m"
        {
#line 818 "integer.m"
          mercury__integer__Out_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 818 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Out_7, 0) = ((MR_Box) (mercury__integer__V_10_10));
#line 818 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Out_7, 1) = ((MR_Box) (mercury__integer__V_12_12));
#line 818 "integer.m"
        }
#line 818 "integer.m"
      }
#line 813 "integer.m"
    return mercury__integer__Out_7;
#line 813 "integer.m"
  }
#line 811 "integer.m"
}

#line 806 "integer.m"
static MR_Word MR_CALL 
mercury__integer__mul_base_2_1_f_0(
#line 806 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 806 "integer.m"
{
#line 808 "integer.m"
  {
#line 808 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 808 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;

#line 808 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 808 "integer.m"
      {
#line 808 "integer.m"
        MR_Word mercury__integer__V_4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 808 "integer.m"
        mercury__integer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__integer_scalar_common_1[9]);
#line 808 "integer.m"
      }
#line 808 "integer.m"
    else
#line 809 "integer.m"
      {
#line 809 "integer.m"
        MR_Integer mercury__integer__H_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 809 "integer.m"
        MR_Word mercury__integer__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 809 "integer.m"
        MR_Word mercury__integer__V_7_7;

#line 809 "integer.m"
        {
#line 809 "integer.m"
          mercury__integer__V_7_7 = mercury__integer__mul_base_2_1_f_0(mercury__integer__T_6);
        }
#line 809 "integer.m"
        {
#line 809 "integer.m"
          mercury__integer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__H_5));
#line 809 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__V_7_7));
#line 809 "integer.m"
        }
#line 809 "integer.m"
      }
#line 808 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 808 "integer.m"
  }
#line 806 "integer.m"
}

#line 784 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_int_to_digits_2_2_f_0(
#line 784 "integer.m"
  MR_Integer mercury__integer__D_4,
#line 784 "integer.m"
  MR_Word mercury__integer__Tail_5)
#line 784 "integer.m"
{
#line 789 "integer.m"
  while (MR_TRUE)
#line 789 "integer.m"
    {
#line 789 "integer.m"
      /* tailcall optimized into a loop */
#line 789 "integer.m"
      {
#line 789 "integer.m"
        MR_bool mercury__integer__succeeded = (mercury__integer__D_4 == (MR_Integer) 0);
#line 789 "integer.m"
        MR_Word mercury__integer__Result_6;

#line 789 "integer.m"
        if (mercury__integer__succeeded)
#line 788 "integer.m"
          mercury__integer__Result_6 = mercury__integer__Tail_5;
#line 789 "integer.m"
        else
#line 790 "integer.m"
          {
#line 790 "integer.m"
            MR_Integer mercury__integer__Length_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_5, (MR_Integer) 0)));
#line 790 "integer.m"
            MR_Word mercury__integer__Digits_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_5, (MR_Integer) 1)));
#line 790 "integer.m"
            MR_Integer mercury__integer__Div_9;
#line 790 "integer.m"
            MR_Integer mercury__integer__Mod_10;
#line 790 "integer.m"
            MR_Word mercury__integer__V_11_11;
#line 790 "integer.m"
            MR_Integer mercury__integer__V_12_12;
#line 790 "integer.m"
            MR_Word mercury__integer__V_14_14;

#line 832 "integer.m"
            {
#line 832 "integer.m"
              mercury__integer__Div_9 = mercury__int__f_62_62_2_f_0(mercury__integer__D_4, (MR_Integer) 14);
            }
#line 833 "integer.m"
            mercury__integer__Mod_10 = (mercury__integer__D_4 & (MR_Integer) 16383);
#line 792 "integer.m"
            mercury__integer__V_12_12 = (mercury__integer__Length_7 + (MR_Integer) 1);
#line 792 "integer.m"
            {
#line 792 "integer.m"
              mercury__integer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__Mod_10));
#line 792 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__Digits_8));
#line 792 "integer.m"
            }
#line 792 "integer.m"
            {
#line 792 "integer.m"
              mercury__integer__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 792 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 0) = ((MR_Box) (mercury__integer__V_12_12));
#line 792 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 1) = ((MR_Box) (mercury__integer__V_14_14));
#line 792 "integer.m"
            }
#line 792 "integer.m"
            /* direct tailcall eliminated */
#line 792 "integer.m"
            {
#line 792 "integer.m"
              MR_Integer mercury__integer__D__tmp_copy_4 = mercury__integer__Div_9;
#line 792 "integer.m"
              MR_Word mercury__integer__Tail__tmp_copy_5 = mercury__integer__V_11_11;

#line 792 "integer.m"
              mercury__integer__Tail_5 = mercury__integer__Tail__tmp_copy_5;
#line 792 "integer.m"
              mercury__integer__D_4 = mercury__integer__D__tmp_copy_4;
#line 792 "integer.m"
            }
#line 792 "integer.m"
            continue;
#line 790 "integer.m"
          }
#line 789 "integer.m"
        return mercury__integer__Result_6;
#line 789 "integer.m"
      }
#line 789 "integer.m"
      break;
#line 789 "integer.m"
    }
#line 784 "integer.m"
}

#line 776 "integer.m"
MR_Integer MR_CALL 
mercury__integer__integer_signum_1_f_0(
#line 776 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 776 "integer.m"
{
#line 778 "integer.m"
  {
#line 778 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 778 "integer.m"
    MR_Integer mercury__integer__HeadVar__2_2;
#line 778 "integer.m"
    MR_Integer mercury__integer__Sign_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 778 "integer.m"
    MR_Word mercury__integer__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

#line 778 "integer.m"
    {
#line 778 "integer.m"
      return mercury__integer__HeadVar__2_2 = mercury__integer__signum_1_f_0(mercury__integer__Sign_3);
    }
#line 778 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 778 "integer.m"
  }
#line 776 "integer.m"
}

#line 765 "integer.m"
MR_Integer MR_CALL 
mercury__integer__signum_1_f_0(
#line 765 "integer.m"
  MR_Integer mercury__integer__N_3)
#line 765 "integer.m"
{
#line 770 "integer.m"
  {
#line 770 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__N_3 < (MR_Integer) 0);
#line 770 "integer.m"
    MR_Integer mercury__integer__Sign_4;

#line 770 "integer.m"
    if (mercury__integer__succeeded)
#line 769 "integer.m"
      mercury__integer__Sign_4 = (MR_Integer) -1;
#line 770 "integer.m"
    else
#line 772 "integer.m"
      {
#line 770 "integer.m"
        mercury__integer__succeeded = (mercury__integer__N_3 == (MR_Integer) 0);
#line 772 "integer.m"
        if (mercury__integer__succeeded)
#line 771 "integer.m"
          mercury__integer__Sign_4 = (MR_Integer) 0;
#line 772 "integer.m"
        else
#line 773 "integer.m"
          mercury__integer__Sign_4 = (MR_Integer) 1;
#line 772 "integer.m"
      }
#line 770 "integer.m"
    return mercury__integer__Sign_4;
#line 770 "integer.m"
  }
#line 765 "integer.m"
}

#line 736 "integer.m"
MR_Word MR_CALL 
mercury__integer__int_to_integer_1_f_0(
#line 736 "integer.m"
  MR_Integer mercury__integer__D_3)
#line 736 "integer.m"
{
#line 741 "integer.m"
  {
#line 741 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__D_3 == (MR_Integer) 0);
#line 741 "integer.m"
    MR_Word mercury__integer__Int_4;

#line 741 "integer.m"
    if (mercury__integer__succeeded)
#line 1257 "integer.m"
      {
#line 1257 "integer.m"
        MR_Word mercury__integer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1257 "integer.m"
        mercury__integer__Int_4 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1257 "integer.m"
      }
#line 741 "integer.m"
    else
#line 743 "integer.m"
      {
#line 741 "integer.m"
        MR_Integer mercury__integer__V_6_6;

#line 741 "integer.m"
        mercury__integer__succeeded = (mercury__integer__D_3 > (MR_Integer) 0);
#line 741 "integer.m"
        if (mercury__integer__succeeded)
#line 741 "integer.m"
          {
#line 298 "integer.m"
            mercury__integer__V_6_6 = (MR_Integer) 16384;
#line 741 "integer.m"
            mercury__integer__succeeded = (mercury__integer__D_3 < mercury__integer__V_6_6);
#line 741 "integer.m"
          }
#line 743 "integer.m"
        if (mercury__integer__succeeded)
#line 742 "integer.m"
          {
#line 742 "integer.m"
            MR_Word mercury__integer__V_8_8;
#line 742 "integer.m"
            MR_Word mercury__integer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 742 "integer.m"
            {
#line 742 "integer.m"
              mercury__integer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_8_8, 0) = ((MR_Box) (mercury__integer__D_3));
#line 742 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_8_8, 1) = ((MR_Box) (mercury__integer__V_9_9));
#line 742 "integer.m"
            }
#line 742 "integer.m"
            {
#line 742 "integer.m"
              mercury__integer__Int_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 742 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Int_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 742 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Int_4, 1) = ((MR_Box) (mercury__integer__V_8_8));
#line 742 "integer.m"
            }
#line 742 "integer.m"
          }
#line 743 "integer.m"
        else
#line 745 "integer.m"
          {
#line 743 "integer.m"
            MR_Integer mercury__integer__V_11_11;
#line 743 "integer.m"
            MR_Integer mercury__integer__V_12_12;

#line 743 "integer.m"
            mercury__integer__succeeded = (mercury__integer__D_3 < (MR_Integer) 0);
#line 743 "integer.m"
            if (mercury__integer__succeeded)
#line 743 "integer.m"
              {
#line 298 "integer.m"
                mercury__integer__V_12_12 = (MR_Integer) 16384;
#line 743 "integer.m"
                mercury__integer__V_11_11 = ((MR_Integer) 0 - mercury__integer__V_12_12);
#line 743 "integer.m"
                mercury__integer__succeeded = (mercury__integer__D_3 > mercury__integer__V_11_11);
#line 743 "integer.m"
              }
#line 745 "integer.m"
            if (mercury__integer__succeeded)
#line 744 "integer.m"
              {
#line 744 "integer.m"
                MR_Word mercury__integer__V_14_14;
#line 744 "integer.m"
                MR_Word mercury__integer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 744 "integer.m"
                {
#line 744 "integer.m"
                  mercury__integer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__D_3));
#line 744 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__V_15_15));
#line 744 "integer.m"
                }
#line 744 "integer.m"
                {
#line 744 "integer.m"
                  mercury__integer__Int_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 744 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Int_4, 0) = ((MR_Box) ((MR_Integer) -1));
#line 744 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Int_4, 1) = ((MR_Box) (mercury__integer__V_14_14));
#line 744 "integer.m"
                }
#line 744 "integer.m"
              }
#line 745 "integer.m"
            else
#line 749 "integer.m"
              {
#line 746 "integer.m"
                MR_Integer mercury__integer__V_22_22;

#line 250 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__int_to_integer_1_f_0

	MR_Integer Min;

		{
#line 250 "int.opt"

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

#line 8164 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_22_22  = Min;
#line 250 "int.opt"
}
#line 746 "integer.m"
                mercury__integer__succeeded = (mercury__integer__D_3 == mercury__integer__V_22_22);
#line 749 "integer.m"
                if (mercury__integer__succeeded)
#line 748 "integer.m"
                  {
#line 748 "integer.m"
                    MR_Word mercury__integer__V_16_16;
#line 748 "integer.m"
                    MR_Integer mercury__integer__V_17_17 = (mercury__integer__D_3 + (MR_Integer) 1);
#line 748 "integer.m"
                    MR_Word mercury__integer__V_19_19;
#line 748 "integer.m"
                    MR_Word mercury__integer__V_32_32;
#line 748 "integer.m"
                    MR_Integer mercury__integer__S_33;
#line 748 "integer.m"
                    MR_Word mercury__integer__Digits0_34;
#line 748 "integer.m"
                    MR_Word mercury__integer__Digits_35;
#line 748 "integer.m"
                    MR_Integer mercury__integer__V_36_36;

#line 726 "integer.m"
                    {
#line 726 "integer.m"
                      mercury__integer__V_16_16 = mercury__integer__int_to_integer_1_f_0(mercury__integer__V_17_17);
                    }
#line 1259 "integer.m"
                    mercury__integer__V_19_19 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 444 "integer.m"
                    mercury__integer__S_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 0)));
#line 444 "integer.m"
                    mercury__integer__Digits0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 1)));
#line 444 "integer.m"
                    mercury__integer__V_36_36 = ((MR_Integer) 0 - mercury__integer__S_33);
#line 445 "integer.m"
                    {
#line 445 "integer.m"
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_34, &mercury__integer__Digits_35);
                    }
#line 444 "integer.m"
                    {
#line 444 "integer.m"
                      mercury__integer__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_32_32, 0) = ((MR_Box) (mercury__integer__V_36_36));
#line 444 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_32_32, 1) = ((MR_Box) (mercury__integer__Digits_35));
#line 444 "integer.m"
                    }
#line 346 "integer.m"
                    {
#line 346 "integer.m"
                      return mercury__integer__Int_4 = mercury__integer__big_plus_2_f_0(mercury__integer__V_16_16, mercury__integer__V_32_32);
                    }
#line 748 "integer.m"
                  }
#line 749 "integer.m"
                else
#line 750 "integer.m"
                  {
#line 750 "integer.m"
                    MR_Word mercury__integer__V_20_20;
#line 750 "integer.m"
                    MR_Integer mercury__integer__V_21_21;
#line 750 "integer.m"
                    MR_Word mercury__integer__V_40_40;
#line 750 "integer.m"
                    MR_Word mercury__integer__V_42_42;

#line 50 "int.opt"
                    {
#line 50 "int.opt"
                      mercury__int__abs_2_p_0(mercury__integer__D_3, &mercury__integer__V_21_21);
                    }
#line 1257 "integer.m"
                    mercury__integer__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1257 "integer.m"
                    mercury__integer__V_40_40 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 782 "integer.m"
                    {
#line 782 "integer.m"
                      mercury__integer__V_20_20 = mercury__integer__pos_int_to_digits_2_2_f_0(mercury__integer__V_21_21, mercury__integer__V_40_40);
                    }
#line 750 "integer.m"
                    {
#line 750 "integer.m"
                      return mercury__integer__Int_4 = mercury__integer__big_sign_2_f_0(mercury__integer__D_3, mercury__integer__V_20_20);
                    }
#line 750 "integer.m"
                  }
#line 749 "integer.m"
              }
#line 745 "integer.m"
          }
#line 743 "integer.m"
      }
#line 741 "integer.m"
    return mercury__integer__Int_4;
#line 741 "integer.m"
  }
#line 736 "integer.m"
}

#line 697 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_plus_2_f_0(
#line 697 "integer.m"
  MR_Word mercury__integer__X_4,
#line 697 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 697 "integer.m"
{
#line 702 "integer.m"
  {
#line 702 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 702 "integer.m"
    MR_Word mercury__integer__Sum_6;
#line 1248 "integer.m"
    MR_Integer mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 1248 "integer.m"
    MR_Word mercury__integer__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 1248 "integer.m"
    mercury__integer__succeeded = (mercury__integer__V_15_15 == (MR_Integer) 0);
#line 1248 "integer.m"
    if (mercury__integer__succeeded)
#line 1248 "integer.m"
      mercury__integer__succeeded = (mercury__integer__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "integer.m"
    if (mercury__integer__succeeded)
#line 701 "integer.m"
      mercury__integer__Sum_6 = mercury__integer__Y_5;
#line 702 "integer.m"
    else
#line 704 "integer.m"
      {
#line 1248 "integer.m"
        MR_Integer mercury__integer__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 1248 "integer.m"
        MR_Word mercury__integer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 1248 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_17_17 == (MR_Integer) 0);
#line 1248 "integer.m"
        if (mercury__integer__succeeded)
#line 1248 "integer.m"
          mercury__integer__succeeded = (mercury__integer__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 704 "integer.m"
        if (mercury__integer__succeeded)
#line 703 "integer.m"
          mercury__integer__Sum_6 = mercury__integer__X_4;
#line 704 "integer.m"
        else
#line 705 "integer.m"
          {
#line 705 "integer.m"
            MR_Word mercury__integer__AbsX_7;
#line 705 "integer.m"
            MR_Word mercury__integer__AbsY_8;
#line 705 "integer.m"
            MR_Integer mercury__integer__SignX_9;
#line 705 "integer.m"
            MR_Integer mercury__integer__SignY_10;
#line 705 "integer.m"
            MR_Integer mercury__integer__Sign_19;
#line 705 "integer.m"
            MR_Integer mercury__integer__Sign_21;
#line 778 "integer.m"
            MR_Word mercury__integer__V_20_20;
#line 778 "integer.m"
            MR_Word mercury__integer__V_22_22;

#line 705 "integer.m"
            {
#line 705 "integer.m"
              mercury__integer__AbsX_7 = mercury__integer__big_abs_1_f_0(mercury__integer__X_4);
            }
#line 706 "integer.m"
            {
#line 706 "integer.m"
              mercury__integer__AbsY_8 = mercury__integer__big_abs_1_f_0(mercury__integer__Y_5);
            }
#line 778 "integer.m"
            mercury__integer__Sign_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 778 "integer.m"
            mercury__integer__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));
#line 778 "integer.m"
            {
#line 778 "integer.m"
              mercury__integer__SignX_9 = mercury__integer__signum_1_f_0(mercury__integer__Sign_19);
            }
#line 778 "integer.m"
            mercury__integer__Sign_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 778 "integer.m"
            mercury__integer__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
#line 778 "integer.m"
            {
#line 778 "integer.m"
              mercury__integer__SignY_10 = mercury__integer__signum_1_f_0(mercury__integer__Sign_21);
            }
#line 709 "integer.m"
            mercury__integer__succeeded = (mercury__integer__SignX_9 == mercury__integer__SignY_10);
#line 711 "integer.m"
            if (mercury__integer__succeeded)
#line 710 "integer.m"
              {
#line 710 "integer.m"
                MR_Word mercury__integer__V_12_12;
#line 710 "integer.m"
                MR_Integer mercury__integer__L1_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 0)));
#line 710 "integer.m"
                MR_Integer mercury__integer__L2_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 0)));
#line 710 "integer.m"
                MR_Integer mercury__integer__Div_28;
#line 710 "integer.m"
                MR_Word mercury__integer__Ds_29;
#line 710 "integer.m"
                MR_Integer mercury__integer__Len_30;
#line 837 "integer.m"
                MR_Word mercury__integer__D1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 1)));
#line 837 "integer.m"
                MR_Word mercury__integer__D2_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 1)));

#line 838 "integer.m"
                {
#line 838 "integer.m"
                  mercury__integer__add_pairs_4_p_0(&mercury__integer__Div_28, mercury__integer__AbsX_7, mercury__integer__AbsY_8, &mercury__integer__Ds_29);
                }
#line 839 "integer.m"
                mercury__integer__succeeded = (mercury__integer__L1_24 > mercury__integer__L2_26);
#line 841 "integer.m"
                if (mercury__integer__succeeded)
#line 840 "integer.m"
                  mercury__integer__Len_30 = mercury__integer__L1_24;
#line 841 "integer.m"
                else
#line 842 "integer.m"
                  mercury__integer__Len_30 = mercury__integer__L2_26;
#line 844 "integer.m"
                mercury__integer__succeeded = (mercury__integer__Div_28 == (MR_Integer) 0);
#line 846 "integer.m"
                if (mercury__integer__succeeded)
#line 845 "integer.m"
                  {
#line 845 "integer.m"
                    mercury__integer__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 845 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 0) = ((MR_Box) (mercury__integer__Len_30));
#line 845 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 1) = ((MR_Box) (mercury__integer__Ds_29));
#line 845 "integer.m"
                  }
#line 846 "integer.m"
                else
#line 847 "integer.m"
                  {
#line 847 "integer.m"
                    MR_Integer mercury__integer__V_33_33 = (mercury__integer__Len_30 + (MR_Integer) 1);
#line 847 "integer.m"
                    MR_Word mercury__integer__V_35_35;

#line 847 "integer.m"
                    {
#line 847 "integer.m"
                      mercury__integer__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_35_35, 0) = ((MR_Box) (mercury__integer__Div_28));
#line 847 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_35_35, 1) = ((MR_Box) (mercury__integer__Ds_29));
#line 847 "integer.m"
                    }
#line 847 "integer.m"
                    {
#line 847 "integer.m"
                      mercury__integer__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 847 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 0) = ((MR_Box) (mercury__integer__V_33_33));
#line 847 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 1) = ((MR_Box) (mercury__integer__V_35_35));
#line 847 "integer.m"
                    }
#line 847 "integer.m"
                  }
#line 710 "integer.m"
                {
#line 710 "integer.m"
                  return mercury__integer__Sum_6 = mercury__integer__big_sign_2_f_0(mercury__integer__SignX_9, mercury__integer__V_12_12);
                }
#line 710 "integer.m"
              }
#line 711 "integer.m"
            else
#line 712 "integer.m"
              {
#line 712 "integer.m"
                MR_Word mercury__integer__C_11;

#line 695 "integer.m"
                {
#line 695 "integer.m"
                  mercury__integer____Compare____integer_0_0(&mercury__integer__C_11, mercury__integer__AbsX_7, mercury__integer__AbsY_8);
                }
#line 716 "integer.m"
#line 716 "integer.m"
                switch (mercury__integer__C_11) {
#line 716 "integer.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 716 "integer.m"
                  case (MR_Integer) 1:
#line 714 "integer.m"
                    {
#line 714 "integer.m"
                      MR_Word mercury__integer__V_14_14;
#line 714 "integer.m"
                      MR_Integer mercury__integer__L1_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 0)));
#line 714 "integer.m"
                      MR_Integer mercury__integer__L2_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 0)));
#line 714 "integer.m"
                      MR_Integer mercury__integer__Mod_45;
#line 714 "integer.m"
                      MR_Word mercury__integer__Ds_46;
#line 714 "integer.m"
                      MR_Integer mercury__integer__Len_47;
#line 879 "integer.m"
                      MR_Word mercury__integer__D1_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 1)));
#line 879 "integer.m"
                      MR_Word mercury__integer__D2_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 1)));

#line 880 "integer.m"
                      {
#line 880 "integer.m"
                        mercury__integer__diff_pairs_4_p_0(&mercury__integer__Mod_45, mercury__integer__AbsY_8, mercury__integer__AbsX_7, &mercury__integer__Ds_46);
                      }
#line 881 "integer.m"
                      mercury__integer__succeeded = (mercury__integer__L1_41 > mercury__integer__L2_43);
#line 883 "integer.m"
                      if (mercury__integer__succeeded)
#line 882 "integer.m"
                        mercury__integer__Len_47 = mercury__integer__L1_41;
#line 883 "integer.m"
                      else
#line 884 "integer.m"
                        mercury__integer__Len_47 = mercury__integer__L2_43;
#line 886 "integer.m"
                      mercury__integer__succeeded = (mercury__integer__Mod_45 == (MR_Integer) 0);
#line 888 "integer.m"
                      if (mercury__integer__succeeded)
#line 887 "integer.m"
                        {
#line 887 "integer.m"
                          MR_Word mercury__integer__V_50_50;

#line 887 "integer.m"
                          {
#line 887 "integer.m"
                            mercury__integer__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 887 "integer.m"
                            MR_hl_field(MR_mktag(0), mercury__integer__V_50_50, 0) = ((MR_Box) (mercury__integer__Len_47));
#line 887 "integer.m"
                            MR_hl_field(MR_mktag(0), mercury__integer__V_50_50, 1) = ((MR_Box) (mercury__integer__Ds_46));
#line 887 "integer.m"
                          }
#line 887 "integer.m"
                          {
#line 887 "integer.m"
                            mercury__integer__V_14_14 = mercury__integer__decap_1_f_0(mercury__integer__V_50_50);
                          }
#line 887 "integer.m"
                        }
#line 888 "integer.m"
                      else
#line 889 "integer.m"
                        {
#line 889 "integer.m"
                          MR_Integer mercury__integer__V_51_51 = (mercury__integer__Len_47 + (MR_Integer) 1);
#line 889 "integer.m"
                          MR_Word mercury__integer__V_53_53;

#line 889 "integer.m"
                          {
#line 889 "integer.m"
                            mercury__integer__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "integer.m"
                            MR_hl_field(MR_mktag(1), mercury__integer__V_53_53, 0) = ((MR_Box) (mercury__integer__Mod_45));
#line 889 "integer.m"
                            MR_hl_field(MR_mktag(1), mercury__integer__V_53_53, 1) = ((MR_Box) (mercury__integer__Ds_46));
#line 889 "integer.m"
                          }
#line 889 "integer.m"
                          {
#line 889 "integer.m"
                            mercury__integer__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 889 "integer.m"
                            MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__V_51_51));
#line 889 "integer.m"
                            MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__V_53_53));
#line 889 "integer.m"
                          }
#line 889 "integer.m"
                        }
#line 715 "integer.m"
                      {
#line 715 "integer.m"
                        return mercury__integer__Sum_6 = mercury__integer__big_sign_2_f_0(mercury__integer__SignY_10, mercury__integer__V_14_14);
                      }
#line 714 "integer.m"
                    }
#line 716 "integer.m"
                    break;
#line 716 "integer.m"
                  case (MR_Integer) 0:
#line 1257 "integer.m"
                    {
#line 1257 "integer.m"
                      MR_Word mercury__integer__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1257 "integer.m"
                      mercury__integer__Sum_6 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1257 "integer.m"
                    }
#line 716 "integer.m"
                    break;
#line 716 "integer.m"
                  case (MR_Integer) 2:
#line 717 "integer.m"
                    {
#line 717 "integer.m"
                      MR_Word mercury__integer__V_13_13;
#line 717 "integer.m"
                      MR_Integer mercury__integer__L1_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 0)));
#line 717 "integer.m"
                      MR_Integer mercury__integer__L2_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 0)));
#line 717 "integer.m"
                      MR_Integer mercury__integer__Mod_61;
#line 717 "integer.m"
                      MR_Word mercury__integer__Ds_62;
#line 717 "integer.m"
                      MR_Integer mercury__integer__Len_63;
#line 879 "integer.m"
                      MR_Word mercury__integer__D1_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 1)));
#line 879 "integer.m"
                      MR_Word mercury__integer__D2_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 1)));

#line 880 "integer.m"
                      {
#line 880 "integer.m"
                        mercury__integer__diff_pairs_4_p_0(&mercury__integer__Mod_61, mercury__integer__AbsX_7, mercury__integer__AbsY_8, &mercury__integer__Ds_62);
                      }
#line 881 "integer.m"
                      mercury__integer__succeeded = (mercury__integer__L1_57 > mercury__integer__L2_59);
#line 883 "integer.m"
                      if (mercury__integer__succeeded)
#line 882 "integer.m"
                        mercury__integer__Len_63 = mercury__integer__L1_57;
#line 883 "integer.m"
                      else
#line 884 "integer.m"
                        mercury__integer__Len_63 = mercury__integer__L2_59;
#line 886 "integer.m"
                      mercury__integer__succeeded = (mercury__integer__Mod_61 == (MR_Integer) 0);
#line 888 "integer.m"
                      if (mercury__integer__succeeded)
#line 887 "integer.m"
                        {
#line 887 "integer.m"
                          MR_Word mercury__integer__V_66_66;

#line 887 "integer.m"
                          {
#line 887 "integer.m"
                            mercury__integer__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 887 "integer.m"
                            MR_hl_field(MR_mktag(0), mercury__integer__V_66_66, 0) = ((MR_Box) (mercury__integer__Len_63));
#line 887 "integer.m"
                            MR_hl_field(MR_mktag(0), mercury__integer__V_66_66, 1) = ((MR_Box) (mercury__integer__Ds_62));
#line 887 "integer.m"
                          }
#line 887 "integer.m"
                          {
#line 887 "integer.m"
                            mercury__integer__V_13_13 = mercury__integer__decap_1_f_0(mercury__integer__V_66_66);
                          }
#line 887 "integer.m"
                        }
#line 888 "integer.m"
                      else
#line 889 "integer.m"
                        {
#line 889 "integer.m"
                          MR_Integer mercury__integer__V_67_67 = (mercury__integer__Len_63 + (MR_Integer) 1);
#line 889 "integer.m"
                          MR_Word mercury__integer__V_69_69;

#line 889 "integer.m"
                          {
#line 889 "integer.m"
                            mercury__integer__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "integer.m"
                            MR_hl_field(MR_mktag(1), mercury__integer__V_69_69, 0) = ((MR_Box) (mercury__integer__Mod_61));
#line 889 "integer.m"
                            MR_hl_field(MR_mktag(1), mercury__integer__V_69_69, 1) = ((MR_Box) (mercury__integer__Ds_62));
#line 889 "integer.m"
                          }
#line 889 "integer.m"
                          {
#line 889 "integer.m"
                            mercury__integer__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 889 "integer.m"
                            MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 0) = ((MR_Box) (mercury__integer__V_67_67));
#line 889 "integer.m"
                            MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 1) = ((MR_Box) (mercury__integer__V_69_69));
#line 889 "integer.m"
                          }
#line 889 "integer.m"
                        }
#line 718 "integer.m"
                      {
#line 718 "integer.m"
                        return mercury__integer__Sum_6 = mercury__integer__big_sign_2_f_0(mercury__integer__SignX_9, mercury__integer__V_13_13);
                      }
#line 717 "integer.m"
                    }
#line 716 "integer.m"
                    break;
#line 716 "integer.m"
                }
#line 712 "integer.m"
              }
#line 705 "integer.m"
          }
#line 704 "integer.m"
      }
#line 702 "integer.m"
    return mercury__integer__Sum_6;
#line 702 "integer.m"
  }
#line 697 "integer.m"
}

#line 687 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_cmp_2_f_0(
#line 687 "integer.m"
  MR_Word mercury__integer__X_4,
#line 687 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 687 "integer.m"
{
#line 690 "integer.m"
  {
#line 690 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 690 "integer.m"
    MR_Word mercury__integer__Result_6;

#line 690 "integer.m"
    {
#line 690 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__Result_6, mercury__integer__X_4, mercury__integer__Y_5);
    }
#line 690 "integer.m"
    return mercury__integer__Result_6;
#line 690 "integer.m"
  }
#line 687 "integer.m"
}

#line 682 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_xor_not_2_f_0(
#line 682 "integer.m"
  MR_Word mercury__integer__X1_4,
#line 682 "integer.m"
  MR_Word mercury__integer__NotX2_5)
#line 682 "integer.m"
{
#line 684 "integer.m"
  {
#line 684 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 684 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 684 "integer.m"
    MR_Word mercury__integer__V_6_6;
#line 684 "integer.m"
    MR_Word mercury__integer__V_7_7;
#line 684 "integer.m"
    MR_Word mercury__integer__V_8_8;
#line 684 "integer.m"
    MR_Word mercury__integer__V_11_11;
#line 684 "integer.m"
    MR_Word mercury__integer__V_14_14;
#line 684 "integer.m"
    MR_Word mercury__integer__V_17_17;
#line 684 "integer.m"
    MR_Word mercury__integer__V_19_19;
#line 684 "integer.m"
    MR_Word mercury__integer__V_20_20;
#line 684 "integer.m"
    MR_Integer mercury__integer__S_25;
#line 684 "integer.m"
    MR_Word mercury__integer__Digits0_26;
#line 684 "integer.m"
    MR_Word mercury__integer__Digits_27;
#line 684 "integer.m"
    MR_Integer mercury__integer__V_28_28;

#line 582 "integer.m"
    {
#line 582 "integer.m"
      mercury__integer__V_11_11 = mercury__integer__or_pairs_2_f_0(mercury__integer__X1_4, mercury__integer__NotX2_5);
    }
#line 582 "integer.m"
    {
#line 582 "integer.m"
      mercury__integer__V_7_7 = mercury__integer__decap_1_f_0(mercury__integer__V_11_11);
    }
#line 633 "integer.m"
    {
#line 633 "integer.m"
      mercury__integer__V_14_14 = mercury__integer__and_pairs_2_f_0(mercury__integer__X1_4, mercury__integer__NotX2_5);
    }
#line 633 "integer.m"
    {
#line 633 "integer.m"
      mercury__integer__V_8_8 = mercury__integer__decap_1_f_0(mercury__integer__V_14_14);
    }
#line 658 "integer.m"
    {
#line 658 "integer.m"
      mercury__integer__V_17_17 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__V_7_7, mercury__integer__V_8_8);
    }
#line 658 "integer.m"
    {
#line 658 "integer.m"
      mercury__integer__V_6_6 = mercury__integer__decap_1_f_0(mercury__integer__V_17_17);
    }
#line 1259 "integer.m"
    mercury__integer__V_20_20 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 418 "integer.m"
    {
#line 418 "integer.m"
      mercury__integer__V_19_19 = mercury__integer__big_plus_2_f_0(mercury__integer__V_6_6, mercury__integer__V_20_20);
    }
#line 444 "integer.m"
    mercury__integer__S_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 0)));
#line 444 "integer.m"
    mercury__integer__Digits0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 1)));
#line 444 "integer.m"
    mercury__integer__V_28_28 = ((MR_Integer) 0 - mercury__integer__S_25);
#line 445 "integer.m"
    {
#line 445 "integer.m"
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_26, &mercury__integer__Digits_27);
    }
#line 444 "integer.m"
    {
#line 444 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_28_28));
#line 444 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_27));
#line 444 "integer.m"
    }
#line 684 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 684 "integer.m"
  }
#line 682 "integer.m"
}

#line 675 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_not_pairs_equal_2_f_0(
#line 675 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 675 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 675 "integer.m"
{
#line 677 "integer.m"
  {
#line 677 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 677 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 677 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 677 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 677 "integer.m"
    else
#line 677 "integer.m"
      {
#line 677 "integer.m"
        MR_Word mercury__integer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 677 "integer.m"
        MR_Integer mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 677 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 678 "integer.m"
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 677 "integer.m"
        else
#line 679 "integer.m"
          {
#line 679 "integer.m"
            MR_Integer mercury__integer__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 679 "integer.m"
            MR_Word mercury__integer__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 679 "integer.m"
            MR_Integer mercury__integer__V_11_11;
#line 679 "integer.m"
            MR_Integer mercury__integer__V_12_12 = ~(mercury__integer__Y_9);
#line 679 "integer.m"
            MR_Word mercury__integer__V_13_13;

#line 680 "integer.m"
            mercury__integer__V_11_11 = (mercury__integer__V_15_15 & mercury__integer__V_12_12);
#line 680 "integer.m"
            {
#line 680 "integer.m"
              mercury__integer__V_13_13 = mercury__integer__and_not_pairs_equal_2_f_0(mercury__integer__V_14_14, mercury__integer__Ys_10);
            }
#line 680 "integer.m"
            {
#line 680 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_11_11));
#line 680 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_13_13));
#line 680 "integer.m"
            }
#line 679 "integer.m"
          }
#line 677 "integer.m"
      }
#line 677 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 677 "integer.m"
  }
#line 675 "integer.m"
}

#line 660 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_not_pairs_2_f_0(
#line 660 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 660 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 660 "integer.m"
{
#line 662 "integer.m"
  {
#line 662 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 662 "integer.m"
    MR_Word mercury__integer__Integer_8;
#line 662 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 662 "integer.m"
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 662 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 662 "integer.m"
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 663 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 == mercury__integer__L2_6);
#line 665 "integer.m"
    if (mercury__integer__succeeded)
#line 664 "integer.m"
      {
#line 664 "integer.m"
        MR_Word mercury__integer__V_16_16;

#line 664 "integer.m"
        {
#line 664 "integer.m"
          mercury__integer__V_16_16 = mercury__integer__and_not_pairs_equal_2_f_0(mercury__integer__D1_5, mercury__integer__D2_7);
        }
#line 664 "integer.m"
        {
#line 664 "integer.m"
          mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 664 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 664 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_16_16));
#line 664 "integer.m"
        }
#line 664 "integer.m"
      }
#line 665 "integer.m"
    else
#line 668 "integer.m"
      {
#line 668 "integer.m"
        MR_Word mercury__integer__T2_10;
#line 665 "integer.m"
        MR_Integer mercury__integer__V_9_9;

#line 665 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
#line 665 "integer.m"
        if (mercury__integer__succeeded)
#line 665 "integer.m"
          {
#line 665 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_7)) == (MR_mktag((MR_Integer) 1)));
#line 665 "integer.m"
            if (mercury__integer__succeeded)
#line 665 "integer.m"
              {
#line 665 "integer.m"
                mercury__integer__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 0)));
#line 665 "integer.m"
                mercury__integer__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 1)));
#line 665 "integer.m"
              }
#line 665 "integer.m"
          }
#line 668 "integer.m"
        if (mercury__integer__succeeded)
#line 666 "integer.m"
          {
#line 666 "integer.m"
            MR_Word mercury__integer__DsT_12;
#line 666 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 666 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 666 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_6 - (MR_Integer) 1);
#line 666 "integer.m"
            MR_Integer mercury__integer__V_11_11;

#line 666 "integer.m"
            {
#line 666 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 666 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 666 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_10));
#line 666 "integer.m"
            }
#line 666 "integer.m"
            {
#line 666 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__V_19_19);
            }
#line 666 "integer.m"
            mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 666 "integer.m"
            mercury__integer__DsT_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 667 "integer.m"
            {
#line 667 "integer.m"
              mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 667 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__DsT_12));
#line 667 "integer.m"
            }
#line 666 "integer.m"
          }
#line 668 "integer.m"
        else
#line 671 "integer.m"
          {
#line 671 "integer.m"
            MR_Integer mercury__integer__H1_13;
#line 671 "integer.m"
            MR_Word mercury__integer__T1_14;

#line 668 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
#line 668 "integer.m"
            if (mercury__integer__succeeded)
#line 668 "integer.m"
              {
#line 668 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_5)) == (MR_mktag((MR_Integer) 1)));
#line 668 "integer.m"
                if (mercury__integer__succeeded)
#line 668 "integer.m"
                  {
#line 668 "integer.m"
                    mercury__integer__H1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 0)));
#line 668 "integer.m"
                    mercury__integer__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 1)));
#line 668 "integer.m"
                  }
#line 668 "integer.m"
              }
#line 671 "integer.m"
            if (mercury__integer__succeeded)
#line 669 "integer.m"
              {
#line 669 "integer.m"
                MR_Word mercury__integer__V_22_22;
#line 669 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 669 "integer.m"
                MR_Integer mercury__integer__V_24_24 = (mercury__integer__L1_4 - (MR_Integer) 1);
#line 669 "integer.m"
                MR_Word mercury__integer__V_27_27;
#line 669 "integer.m"
                MR_Word mercury__integer__DsT_31;
#line 669 "integer.m"
                MR_Integer mercury__integer__V_15_15;

#line 669 "integer.m"
                {
#line 669 "integer.m"
                  mercury__integer__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 669 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 0) = ((MR_Box) (mercury__integer__V_24_24));
#line 669 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 1) = ((MR_Box) (mercury__integer__T1_14));
#line 669 "integer.m"
                }
#line 669 "integer.m"
                {
#line 669 "integer.m"
                  mercury__integer__V_22_22 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__V_23_23, mercury__integer__HeadVar__2_2);
                }
#line 669 "integer.m"
                mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_22_22, (MR_Integer) 0)));
#line 669 "integer.m"
                mercury__integer__DsT_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_22_22, (MR_Integer) 1)));
#line 670 "integer.m"
                {
#line 670 "integer.m"
                  mercury__integer__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_27_27, 0) = ((MR_Box) (mercury__integer__H1_13));
#line 670 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_27_27, 1) = ((MR_Box) (mercury__integer__DsT_31));
#line 670 "integer.m"
                }
#line 670 "integer.m"
                {
#line 670 "integer.m"
                  mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 670 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 670 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_27_27));
#line 670 "integer.m"
                }
#line 669 "integer.m"
              }
#line 671 "integer.m"
            else
#line 672 "integer.m"
              {
#line 672 "integer.m"
                {
#line 672 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.and_not_pairs\'/2", (MR_String) "invalid integer");
                }
#line 672 "integer.m"
              }
#line 671 "integer.m"
          }
#line 668 "integer.m"
      }
#line 662 "integer.m"
    return mercury__integer__Integer_8;
#line 662 "integer.m"
  }
#line 660 "integer.m"
}

#line 650 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_pairs_equal_2_f_0(
#line 650 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 650 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 650 "integer.m"
{
#line 652 "integer.m"
  {
#line 652 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 652 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 652 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 652 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 652 "integer.m"
    else
#line 652 "integer.m"
      {
#line 652 "integer.m"
        MR_Word mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 652 "integer.m"
        MR_Integer mercury__integer__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 652 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 653 "integer.m"
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 652 "integer.m"
        else
#line 654 "integer.m"
          {
#line 654 "integer.m"
            MR_Integer mercury__integer__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 654 "integer.m"
            MR_Word mercury__integer__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 654 "integer.m"
            MR_Integer mercury__integer__V_11_11 = (mercury__integer__V_14_14 & mercury__integer__Y_9);
#line 654 "integer.m"
            MR_Word mercury__integer__V_12_12;

#line 654 "integer.m"
            {
#line 654 "integer.m"
              mercury__integer__V_12_12 = mercury__integer__and_pairs_equal_2_f_0(mercury__integer__V_13_13, mercury__integer__Ys_10);
            }
#line 654 "integer.m"
            {
#line 654 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_11_11));
#line 654 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_12_12));
#line 654 "integer.m"
            }
#line 654 "integer.m"
          }
#line 652 "integer.m"
      }
#line 652 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 652 "integer.m"
  }
#line 650 "integer.m"
}

#line 635 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_pairs_2_f_0(
#line 635 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 635 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 635 "integer.m"
{
#line 637 "integer.m"
  {
#line 637 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 637 "integer.m"
    MR_Word mercury__integer__Integer_8;
#line 637 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 637 "integer.m"
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 637 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 637 "integer.m"
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 638 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 == mercury__integer__L2_6);
#line 640 "integer.m"
    if (mercury__integer__succeeded)
#line 639 "integer.m"
      {
#line 639 "integer.m"
        MR_Word mercury__integer__V_16_16;

#line 639 "integer.m"
        {
#line 639 "integer.m"
          mercury__integer__V_16_16 = mercury__integer__and_pairs_equal_2_f_0(mercury__integer__D1_5, mercury__integer__D2_7);
        }
#line 639 "integer.m"
        {
#line 639 "integer.m"
          mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 639 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 639 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_16_16));
#line 639 "integer.m"
        }
#line 639 "integer.m"
      }
#line 640 "integer.m"
    else
#line 643 "integer.m"
      {
#line 643 "integer.m"
        MR_Word mercury__integer__T2_10;
#line 640 "integer.m"
        MR_Integer mercury__integer__V_9_9;

#line 640 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
#line 640 "integer.m"
        if (mercury__integer__succeeded)
#line 640 "integer.m"
          {
#line 640 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_7)) == (MR_mktag((MR_Integer) 1)));
#line 640 "integer.m"
            if (mercury__integer__succeeded)
#line 640 "integer.m"
              {
#line 640 "integer.m"
                mercury__integer__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 0)));
#line 640 "integer.m"
                mercury__integer__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 1)));
#line 640 "integer.m"
              }
#line 640 "integer.m"
          }
#line 643 "integer.m"
        if (mercury__integer__succeeded)
#line 641 "integer.m"
          {
#line 641 "integer.m"
            MR_Word mercury__integer__DsT_12;
#line 641 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 641 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 641 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_6 - (MR_Integer) 1);
#line 641 "integer.m"
            MR_Integer mercury__integer__V_11_11;

#line 641 "integer.m"
            {
#line 641 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 641 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_10));
#line 641 "integer.m"
            }
#line 641 "integer.m"
            {
#line 641 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__and_pairs_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__V_19_19);
            }
#line 641 "integer.m"
            mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 641 "integer.m"
            mercury__integer__DsT_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 642 "integer.m"
            {
#line 642 "integer.m"
              mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 642 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 642 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__DsT_12));
#line 642 "integer.m"
            }
#line 641 "integer.m"
          }
#line 643 "integer.m"
        else
#line 646 "integer.m"
          {
#line 646 "integer.m"
            MR_Word mercury__integer__T1_14;
#line 643 "integer.m"
            MR_Integer mercury__integer__V_13_13;

#line 643 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
#line 643 "integer.m"
            if (mercury__integer__succeeded)
#line 643 "integer.m"
              {
#line 643 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_5)) == (MR_mktag((MR_Integer) 1)));
#line 643 "integer.m"
                if (mercury__integer__succeeded)
#line 643 "integer.m"
                  {
#line 643 "integer.m"
                    mercury__integer__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 0)));
#line 643 "integer.m"
                    mercury__integer__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 1)));
#line 643 "integer.m"
                  }
#line 643 "integer.m"
              }
#line 646 "integer.m"
            if (mercury__integer__succeeded)
#line 644 "integer.m"
              {
#line 644 "integer.m"
                MR_Word mercury__integer__V_22_22;
#line 644 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 644 "integer.m"
                MR_Integer mercury__integer__V_24_24 = (mercury__integer__L1_4 - (MR_Integer) 1);
#line 644 "integer.m"
                MR_Word mercury__integer__DsT_30;
#line 644 "integer.m"
                MR_Integer mercury__integer__V_15_15;

#line 644 "integer.m"
                {
#line 644 "integer.m"
                  mercury__integer__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 644 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 0) = ((MR_Box) (mercury__integer__V_24_24));
#line 644 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 1) = ((MR_Box) (mercury__integer__T1_14));
#line 644 "integer.m"
                }
#line 644 "integer.m"
                {
#line 644 "integer.m"
                  mercury__integer__V_22_22 = mercury__integer__and_pairs_2_f_0(mercury__integer__V_23_23, mercury__integer__HeadVar__2_2);
                }
#line 644 "integer.m"
                mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_22_22, (MR_Integer) 0)));
#line 644 "integer.m"
                mercury__integer__DsT_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_22_22, (MR_Integer) 1)));
#line 645 "integer.m"
                {
#line 645 "integer.m"
                  mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 645 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L2_6));
#line 645 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__DsT_30));
#line 645 "integer.m"
                }
#line 644 "integer.m"
              }
#line 646 "integer.m"
            else
#line 647 "integer.m"
              {
#line 647 "integer.m"
                {
#line 647 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.and_pairs\'/2", (MR_String) "invalid integer");
                }
#line 647 "integer.m"
              }
#line 646 "integer.m"
          }
#line 643 "integer.m"
      }
#line 637 "integer.m"
    return mercury__integer__Integer_8;
#line 637 "integer.m"
  }
#line 635 "integer.m"
}

#line 624 "integer.m"
static MR_Word MR_CALL 
mercury__integer__xor_pairs_equal_2_f_0(
#line 624 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 624 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 624 "integer.m"
{
#line 626 "integer.m"
  {
#line 626 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 626 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 626 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 626 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 626 "integer.m"
    else
#line 626 "integer.m"
      {
#line 626 "integer.m"
        MR_Word mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 626 "integer.m"
        MR_Integer mercury__integer__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 626 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 627 "integer.m"
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 626 "integer.m"
        else
#line 628 "integer.m"
          {
#line 628 "integer.m"
            MR_Integer mercury__integer__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 628 "integer.m"
            MR_Word mercury__integer__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 628 "integer.m"
            MR_Integer mercury__integer__V_11_11 = (mercury__integer__V_14_14 ^ mercury__integer__Y_9);
#line 628 "integer.m"
            MR_Word mercury__integer__V_12_12;

#line 629 "integer.m"
            {
#line 629 "integer.m"
              mercury__integer__V_12_12 = mercury__integer__xor_pairs_equal_2_f_0(mercury__integer__V_13_13, mercury__integer__Ys_10);
            }
#line 629 "integer.m"
            {
#line 629 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_11_11));
#line 629 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_12_12));
#line 629 "integer.m"
            }
#line 628 "integer.m"
          }
#line 626 "integer.m"
      }
#line 626 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 626 "integer.m"
  }
#line 624 "integer.m"
}

#line 609 "integer.m"
static MR_Word MR_CALL 
mercury__integer__xor_pairs_2_f_0(
#line 609 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 609 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 609 "integer.m"
{
#line 611 "integer.m"
  {
#line 611 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 611 "integer.m"
    MR_Word mercury__integer__Integer_8;
#line 611 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 611 "integer.m"
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 611 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "integer.m"
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 612 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 == mercury__integer__L2_6);
#line 614 "integer.m"
    if (mercury__integer__succeeded)
#line 613 "integer.m"
      {
#line 613 "integer.m"
        MR_Word mercury__integer__V_16_16;

#line 613 "integer.m"
        {
#line 613 "integer.m"
          mercury__integer__V_16_16 = mercury__integer__xor_pairs_equal_2_f_0(mercury__integer__D1_5, mercury__integer__D2_7);
        }
#line 613 "integer.m"
        {
#line 613 "integer.m"
          mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 613 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 613 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_16_16));
#line 613 "integer.m"
        }
#line 613 "integer.m"
      }
#line 614 "integer.m"
    else
#line 617 "integer.m"
      {
#line 617 "integer.m"
        MR_Integer mercury__integer__H2_9;
#line 617 "integer.m"
        MR_Word mercury__integer__T2_10;

#line 614 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
#line 614 "integer.m"
        if (mercury__integer__succeeded)
#line 614 "integer.m"
          {
#line 614 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_7)) == (MR_mktag((MR_Integer) 1)));
#line 614 "integer.m"
            if (mercury__integer__succeeded)
#line 614 "integer.m"
              {
#line 614 "integer.m"
                mercury__integer__H2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 0)));
#line 614 "integer.m"
                mercury__integer__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 1)));
#line 614 "integer.m"
              }
#line 614 "integer.m"
          }
#line 617 "integer.m"
        if (mercury__integer__succeeded)
#line 615 "integer.m"
          {
#line 615 "integer.m"
            MR_Word mercury__integer__DsT_12;
#line 615 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 615 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 615 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_6 - (MR_Integer) 1);
#line 615 "integer.m"
            MR_Word mercury__integer__V_22_22;
#line 615 "integer.m"
            MR_Integer mercury__integer__V_11_11;

#line 615 "integer.m"
            {
#line 615 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 615 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 615 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_10));
#line 615 "integer.m"
            }
#line 615 "integer.m"
            {
#line 615 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__xor_pairs_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__V_19_19);
            }
#line 615 "integer.m"
            mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 615 "integer.m"
            mercury__integer__DsT_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 616 "integer.m"
            {
#line 616 "integer.m"
              mercury__integer__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_22_22, 0) = ((MR_Box) (mercury__integer__H2_9));
#line 616 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_22_22, 1) = ((MR_Box) (mercury__integer__DsT_12));
#line 616 "integer.m"
            }
#line 616 "integer.m"
            {
#line 616 "integer.m"
              mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 616 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L2_6));
#line 616 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_22_22));
#line 616 "integer.m"
            }
#line 615 "integer.m"
          }
#line 617 "integer.m"
        else
#line 620 "integer.m"
          {
#line 620 "integer.m"
            MR_Integer mercury__integer__H1_13;
#line 620 "integer.m"
            MR_Word mercury__integer__T1_14;

#line 617 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
#line 617 "integer.m"
            if (mercury__integer__succeeded)
#line 617 "integer.m"
              {
#line 617 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_5)) == (MR_mktag((MR_Integer) 1)));
#line 617 "integer.m"
                if (mercury__integer__succeeded)
#line 617 "integer.m"
                  {
#line 617 "integer.m"
                    mercury__integer__H1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 0)));
#line 617 "integer.m"
                    mercury__integer__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 1)));
#line 617 "integer.m"
                  }
#line 617 "integer.m"
              }
#line 620 "integer.m"
            if (mercury__integer__succeeded)
#line 618 "integer.m"
              {
#line 618 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 618 "integer.m"
                MR_Word mercury__integer__V_24_24;
#line 618 "integer.m"
                MR_Integer mercury__integer__V_25_25 = (mercury__integer__L1_4 - (MR_Integer) 1);
#line 618 "integer.m"
                MR_Word mercury__integer__V_28_28;
#line 618 "integer.m"
                MR_Word mercury__integer__DsT_32;
#line 618 "integer.m"
                MR_Integer mercury__integer__V_15_15;

#line 618 "integer.m"
                {
#line 618 "integer.m"
                  mercury__integer__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 618 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 0) = ((MR_Box) (mercury__integer__V_25_25));
#line 618 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 1) = ((MR_Box) (mercury__integer__T1_14));
#line 618 "integer.m"
                }
#line 618 "integer.m"
                {
#line 618 "integer.m"
                  mercury__integer__V_23_23 = mercury__integer__xor_pairs_2_f_0(mercury__integer__V_24_24, mercury__integer__HeadVar__2_2);
                }
#line 618 "integer.m"
                mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 0)));
#line 618 "integer.m"
                mercury__integer__DsT_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 1)));
#line 619 "integer.m"
                {
#line 619 "integer.m"
                  mercury__integer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_28_28, 0) = ((MR_Box) (mercury__integer__H1_13));
#line 619 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_28_28, 1) = ((MR_Box) (mercury__integer__DsT_32));
#line 619 "integer.m"
                }
#line 619 "integer.m"
                {
#line 619 "integer.m"
                  mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 619 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 619 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_28_28));
#line 619 "integer.m"
                }
#line 618 "integer.m"
              }
#line 620 "integer.m"
            else
#line 621 "integer.m"
              {
#line 621 "integer.m"
                {
#line 621 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.xor_pairs\'/2", (MR_String) "invalid integer");
                }
#line 621 "integer.m"
              }
#line 620 "integer.m"
          }
#line 617 "integer.m"
      }
#line 611 "integer.m"
    return mercury__integer__Integer_8;
#line 611 "integer.m"
  }
#line 609 "integer.m"
}

#line 599 "integer.m"
static MR_Word MR_CALL 
mercury__integer__or_pairs_equal_2_f_0(
#line 599 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 599 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 599 "integer.m"
{
#line 601 "integer.m"
  {
#line 601 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 601 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 601 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 601 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 601 "integer.m"
    else
#line 601 "integer.m"
      {
#line 601 "integer.m"
        MR_Word mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 601 "integer.m"
        MR_Integer mercury__integer__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 601 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 602 "integer.m"
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 601 "integer.m"
        else
#line 603 "integer.m"
          {
#line 603 "integer.m"
            MR_Integer mercury__integer__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 603 "integer.m"
            MR_Word mercury__integer__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 603 "integer.m"
            MR_Integer mercury__integer__V_11_11 = (mercury__integer__V_14_14 | mercury__integer__Y_9);
#line 603 "integer.m"
            MR_Word mercury__integer__V_12_12;

#line 603 "integer.m"
            {
#line 603 "integer.m"
              mercury__integer__V_12_12 = mercury__integer__or_pairs_equal_2_f_0(mercury__integer__V_13_13, mercury__integer__Ys_10);
            }
#line 603 "integer.m"
            {
#line 603 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_11_11));
#line 603 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_12_12));
#line 603 "integer.m"
            }
#line 603 "integer.m"
          }
#line 601 "integer.m"
      }
#line 601 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 601 "integer.m"
  }
#line 599 "integer.m"
}

#line 584 "integer.m"
static MR_Word MR_CALL 
mercury__integer__or_pairs_2_f_0(
#line 584 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 584 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 584 "integer.m"
{
#line 586 "integer.m"
  {
#line 586 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 586 "integer.m"
    MR_Word mercury__integer__Integer_8;
#line 586 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 586 "integer.m"
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 586 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 586 "integer.m"
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 587 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 == mercury__integer__L2_6);
#line 589 "integer.m"
    if (mercury__integer__succeeded)
#line 588 "integer.m"
      {
#line 588 "integer.m"
        MR_Word mercury__integer__V_16_16;

#line 588 "integer.m"
        {
#line 588 "integer.m"
          mercury__integer__V_16_16 = mercury__integer__or_pairs_equal_2_f_0(mercury__integer__D1_5, mercury__integer__D2_7);
        }
#line 588 "integer.m"
        {
#line 588 "integer.m"
          mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 588 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 588 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_16_16));
#line 588 "integer.m"
        }
#line 588 "integer.m"
      }
#line 589 "integer.m"
    else
#line 592 "integer.m"
      {
#line 592 "integer.m"
        MR_Integer mercury__integer__H2_9;
#line 592 "integer.m"
        MR_Word mercury__integer__T2_10;

#line 589 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
#line 589 "integer.m"
        if (mercury__integer__succeeded)
#line 589 "integer.m"
          {
#line 589 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_7)) == (MR_mktag((MR_Integer) 1)));
#line 589 "integer.m"
            if (mercury__integer__succeeded)
#line 589 "integer.m"
              {
#line 589 "integer.m"
                mercury__integer__H2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 0)));
#line 589 "integer.m"
                mercury__integer__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 1)));
#line 589 "integer.m"
              }
#line 589 "integer.m"
          }
#line 592 "integer.m"
        if (mercury__integer__succeeded)
#line 590 "integer.m"
          {
#line 590 "integer.m"
            MR_Word mercury__integer__DsT_12;
#line 590 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 590 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 590 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_6 - (MR_Integer) 1);
#line 590 "integer.m"
            MR_Word mercury__integer__V_22_22;
#line 590 "integer.m"
            MR_Integer mercury__integer__V_11_11;

#line 590 "integer.m"
            {
#line 590 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 590 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 590 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_10));
#line 590 "integer.m"
            }
#line 590 "integer.m"
            {
#line 590 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__or_pairs_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__V_19_19);
            }
#line 590 "integer.m"
            mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 590 "integer.m"
            mercury__integer__DsT_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 591 "integer.m"
            {
#line 591 "integer.m"
              mercury__integer__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_22_22, 0) = ((MR_Box) (mercury__integer__H2_9));
#line 591 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_22_22, 1) = ((MR_Box) (mercury__integer__DsT_12));
#line 591 "integer.m"
            }
#line 591 "integer.m"
            {
#line 591 "integer.m"
              mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 591 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L2_6));
#line 591 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_22_22));
#line 591 "integer.m"
            }
#line 590 "integer.m"
          }
#line 592 "integer.m"
        else
#line 595 "integer.m"
          {
#line 595 "integer.m"
            MR_Integer mercury__integer__H1_13;
#line 595 "integer.m"
            MR_Word mercury__integer__T1_14;

#line 592 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
#line 592 "integer.m"
            if (mercury__integer__succeeded)
#line 592 "integer.m"
              {
#line 592 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_5)) == (MR_mktag((MR_Integer) 1)));
#line 592 "integer.m"
                if (mercury__integer__succeeded)
#line 592 "integer.m"
                  {
#line 592 "integer.m"
                    mercury__integer__H1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 0)));
#line 592 "integer.m"
                    mercury__integer__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 1)));
#line 592 "integer.m"
                  }
#line 592 "integer.m"
              }
#line 595 "integer.m"
            if (mercury__integer__succeeded)
#line 593 "integer.m"
              {
#line 593 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 593 "integer.m"
                MR_Word mercury__integer__V_24_24;
#line 593 "integer.m"
                MR_Integer mercury__integer__V_25_25 = (mercury__integer__L1_4 - (MR_Integer) 1);
#line 593 "integer.m"
                MR_Word mercury__integer__V_28_28;
#line 593 "integer.m"
                MR_Word mercury__integer__DsT_32;
#line 593 "integer.m"
                MR_Integer mercury__integer__V_15_15;

#line 593 "integer.m"
                {
#line 593 "integer.m"
                  mercury__integer__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 593 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 0) = ((MR_Box) (mercury__integer__V_25_25));
#line 593 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 1) = ((MR_Box) (mercury__integer__T1_14));
#line 593 "integer.m"
                }
#line 593 "integer.m"
                {
#line 593 "integer.m"
                  mercury__integer__V_23_23 = mercury__integer__or_pairs_2_f_0(mercury__integer__V_24_24, mercury__integer__HeadVar__2_2);
                }
#line 593 "integer.m"
                mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 0)));
#line 593 "integer.m"
                mercury__integer__DsT_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 1)));
#line 594 "integer.m"
                {
#line 594 "integer.m"
                  mercury__integer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 594 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_28_28, 0) = ((MR_Box) (mercury__integer__H1_13));
#line 594 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_28_28, 1) = ((MR_Box) (mercury__integer__DsT_32));
#line 594 "integer.m"
                }
#line 594 "integer.m"
                {
#line 594 "integer.m"
                  mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 594 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 594 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_28_28));
#line 594 "integer.m"
                }
#line 593 "integer.m"
              }
#line 595 "integer.m"
            else
#line 596 "integer.m"
              {
#line 596 "integer.m"
                {
#line 596 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.or_pairs\'/2", (MR_String) "invalid integer");
                }
#line 596 "integer.m"
              }
#line 595 "integer.m"
          }
#line 592 "integer.m"
      }
#line 586 "integer.m"
    return mercury__integer__Integer_8;
#line 586 "integer.m"
  }
#line 584 "integer.m"
}

#line 580 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_or_2_f_0(
#line 580 "integer.m"
  MR_Word mercury__integer__X_4,
#line 580 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 580 "integer.m"
{
#line 582 "integer.m"
  {
#line 582 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 582 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 582 "integer.m"
    MR_Word mercury__integer__V_6_6;

#line 582 "integer.m"
    {
#line 582 "integer.m"
      mercury__integer__V_6_6 = mercury__integer__or_pairs_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
#line 582 "integer.m"
    {
#line 582 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_6_6);
    }
#line 582 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 582 "integer.m"
  }
#line 580 "integer.m"
}

#line 570 "integer.m"
static void MR_CALL 
mercury__integer__zeros_3_p_0(
#line 570 "integer.m"
  MR_Integer mercury__integer__Len_4,
#line 570 "integer.m"
  MR_Word mercury__integer__Digits0_5,
#line 570 "integer.m"
  MR_Word * mercury__integer__Digits_6)
#line 570 "integer.m"
{
#line 576 "integer.m"
  {
#line 576 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__Len_4 > (MR_Integer) 0);

#line 576 "integer.m"
    if (mercury__integer__succeeded)
#line 574 "integer.m"
      {
#line 574 "integer.m"
        MR_Word mercury__integer__Digits1_7;
#line 574 "integer.m"
        MR_Integer mercury__integer__V_9_9 = (mercury__integer__Len_4 - (MR_Integer) 1);

#line 574 "integer.m"
        {
#line 574 "integer.m"
          mercury__integer__zeros_3_p_0(mercury__integer__V_9_9, mercury__integer__Digits0_5, &mercury__integer__Digits1_7);
        }
#line 575 "integer.m"
        {
#line 575 "integer.m"
          MR_Word base;
#line 575 "integer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "integer.m"
          *mercury__integer__Digits_6 = base;
#line 575 "integer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 575 "integer.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Digits1_7));
#line 575 "integer.m"
        }
#line 574 "integer.m"
      }
#line 576 "integer.m"
    else
#line 577 "integer.m"
      *mercury__integer__Digits_6 = mercury__integer__Digits0_5;
#line 576 "integer.m"
  }
#line 570 "integer.m"
}

#line 554 "integer.m"
static void MR_CALL 
mercury__integer__leftshift_6_p_0(
#line 554 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 554 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 554 "integer.m"
  MR_Integer mercury__integer__Len_3,
#line 554 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 554 "integer.m"
  MR_Integer * mercury__integer__Carry_5,
#line 554 "integer.m"
  MR_Word * mercury__integer__DigitsOut_6)
#line 554 "integer.m"
{
#line 557 "integer.m"
  {
#line 557 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 557 "integer.m"
    if ((mercury__integer__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "integer.m"
      {
#line 557 "integer.m"
        MR_Word mercury__integer__V_12_12;

#line 558 "integer.m"
        *mercury__integer__Carry_5 = (MR_Integer) 0;
#line 559 "integer.m"
        mercury__integer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 559 "integer.m"
        {
#line 559 "integer.m"
          mercury__integer__zeros_3_p_0(mercury__integer__Len_3, mercury__integer__V_12_12, mercury__integer__DigitsOut_6);
#line 559 "integer.m"
          return;
        }
#line 557 "integer.m"
      }
#line 557 "integer.m"
    else
#line 560 "integer.m"
      {
#line 560 "integer.m"
        MR_Integer mercury__integer__H_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
#line 560 "integer.m"
        MR_Word mercury__integer__T_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));

#line 561 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Len_3 <= (MR_Integer) 0);
#line 564 "integer.m"
        if (mercury__integer__succeeded)
#line 562 "integer.m"
          {
#line 562 "integer.m"
            *mercury__integer__Carry_5 = (MR_Integer) 0;
#line 563 "integer.m"
            *mercury__integer__DigitsOut_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 562 "integer.m"
          }
#line 564 "integer.m"
        else
#line 565 "integer.m"
          {
#line 565 "integer.m"
            MR_Integer mercury__integer__TailCarry_20;
#line 565 "integer.m"
            MR_Word mercury__integer__Tail_21;
#line 565 "integer.m"
            MR_Integer mercury__integer__V_23_23;
#line 565 "integer.m"
            MR_Integer mercury__integer__V_24_24;
#line 565 "integer.m"
            MR_Integer mercury__integer__V_26_26;
#line 565 "integer.m"
            MR_Integer mercury__integer__V_28_28;
#line 565 "integer.m"
            MR_Integer mercury__integer__V_29_29;
#line 565 "integer.m"
            MR_Integer mercury__integer__V_30_30;

#line 565 "integer.m"
            {
#line 565 "integer.m"
              mercury__integer__V_24_24 = mercury__int__f_60_60_2_f_0((MR_Integer) 16383, mercury__integer__HeadVar__2_2);
            }
#line 565 "integer.m"
            mercury__integer__V_23_23 = (mercury__integer__H_16 & mercury__integer__V_24_24);
#line 565 "integer.m"
            {
#line 565 "integer.m"
              *mercury__integer__Carry_5 = mercury__int__f_62_62_2_f_0(mercury__integer__V_23_23, mercury__integer__HeadVar__2_2);
            }
#line 566 "integer.m"
            mercury__integer__V_26_26 = (mercury__integer__Len_3 - (MR_Integer) 1);
#line 566 "integer.m"
            {
#line 566 "integer.m"
              mercury__integer__leftshift_6_p_0(mercury__integer__HeadVar__1_1, mercury__integer__HeadVar__2_2, mercury__integer__V_26_26, mercury__integer__T_17, &mercury__integer__TailCarry_20, &mercury__integer__Tail_21);
            }
#line 567 "integer.m"
            {
#line 567 "integer.m"
              mercury__integer__V_30_30 = mercury__int__f_60_60_2_f_0(mercury__integer__H_16, mercury__integer__HeadVar__1_1);
            }
#line 567 "integer.m"
            mercury__integer__V_29_29 = (mercury__integer__V_30_30 & (MR_Integer) 16383);
#line 567 "integer.m"
            mercury__integer__V_28_28 = (mercury__integer__TailCarry_20 | mercury__integer__V_29_29);
#line 567 "integer.m"
            {
#line 567 "integer.m"
              MR_Word base;
#line 567 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "integer.m"
              *mercury__integer__DigitsOut_6 = base;
#line 567 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__V_28_28));
#line 567 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Tail_21));
#line 567 "integer.m"
            }
#line 565 "integer.m"
          }
#line 560 "integer.m"
      }
#line 557 "integer.m"
  }
#line 554 "integer.m"
}

#line 530 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_left_shift_2_f_0(
#line 530 "integer.m"
  MR_Word mercury__integer__X_4,
#line 530 "integer.m"
  MR_Integer mercury__integer__I_5)
#line 530 "integer.m"
{
#line 535 "integer.m"
  {
#line 535 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 535 "integer.m"
    MR_Word mercury__integer__Result_6;
#line 1248 "integer.m"
    MR_Integer mercury__integer__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 1248 "integer.m"
    MR_Word mercury__integer__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 1248 "integer.m"
    mercury__integer__succeeded = (mercury__integer__V_9_9 == (MR_Integer) 0);
#line 1248 "integer.m"
    if (mercury__integer__succeeded)
#line 1248 "integer.m"
      mercury__integer__succeeded = (mercury__integer__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "integer.m"
    if (mercury__integer__succeeded)
#line 534 "integer.m"
      mercury__integer__Result_6 = mercury__integer__X_4;
#line 535 "integer.m"
    else
#line 537 "integer.m"
      {
#line 537 "integer.m"
        MR_Integer mercury__integer__Sign_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 537 "integer.m"
        MR_Word mercury__integer__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 440 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_11 < (MR_Integer) 0);
#line 537 "integer.m"
        if (mercury__integer__succeeded)
#line 536 "integer.m"
          {
#line 536 "integer.m"
            MR_Word mercury__integer__V_7_7;
#line 536 "integer.m"
            MR_Integer mercury__integer__Len_20 = ((MR_Integer) 0 - mercury__integer__Sign_11);
#line 536 "integer.m"
            MR_Word mercury__integer__Digits_21;
#line 536 "integer.m"
            MR_Integer mercury__integer__Div_22;
#line 536 "integer.m"
            MR_Integer mercury__integer__Mod_23;
#line 536 "integer.m"
            MR_Integer mercury__integer__NewLen_24;
#line 536 "integer.m"
            MR_Integer mercury__integer__Carry_25;
#line 536 "integer.m"
            MR_Word mercury__integer__NewDigits_26;
#line 536 "integer.m"
            MR_Integer mercury__integer__V_29_29;
#line 536 "integer.m"
            MR_Integer mercury__integer__V_6_37;
#line 536 "integer.m"
            MR_Integer mercury__integer__V_7_38;
#line 536 "integer.m"
            MR_Integer mercury__integer__S_39;
#line 536 "integer.m"
            MR_Word mercury__integer__Digits0_40;
#line 536 "integer.m"
            MR_Word mercury__integer__Digits_41;
#line 536 "integer.m"
            MR_Integer mercury__integer__V_42_42;

#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__V_12_12, &mercury__integer__Digits_21);
            }
#line 544 "integer.m"
            {
#line 544 "integer.m"
              mercury__integer__Div_22 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
            }
#line 270 "int.opt"
            {
#line 270 "int.opt"
              mercury__integer__V_7_38 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
            }
#line 269 "int.opt"
            mercury__integer__V_6_37 = (mercury__integer__V_7_38 * (MR_Integer) 14);
#line 268 "int.opt"
            mercury__integer__Mod_23 = (mercury__integer__I_5 - mercury__integer__V_6_37);
#line 546 "integer.m"
            mercury__integer__NewLen_24 = (mercury__integer__Len_20 + mercury__integer__Div_22);
#line 547 "integer.m"
            mercury__integer__V_29_29 = ((MR_Integer) 14 - mercury__integer__Mod_23);
#line 547 "integer.m"
            {
#line 547 "integer.m"
              mercury__integer__leftshift_6_p_0(mercury__integer__Mod_23, mercury__integer__V_29_29, mercury__integer__NewLen_24, mercury__integer__Digits_21, &mercury__integer__Carry_25, &mercury__integer__NewDigits_26);
            }
#line 548 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Carry_25 == (MR_Integer) 0);
#line 550 "integer.m"
            if (mercury__integer__succeeded)
#line 549 "integer.m"
              {
#line 549 "integer.m"
                mercury__integer__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 549 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 0) = ((MR_Box) (mercury__integer__NewLen_24));
#line 549 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 1) = ((MR_Box) (mercury__integer__NewDigits_26));
#line 549 "integer.m"
              }
#line 550 "integer.m"
            else
#line 551 "integer.m"
              {
#line 551 "integer.m"
                MR_Integer mercury__integer__V_31_31 = (mercury__integer__NewLen_24 + (MR_Integer) 1);
#line 551 "integer.m"
                MR_Word mercury__integer__V_33_33;

#line 551 "integer.m"
                {
#line 551 "integer.m"
                  mercury__integer__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_33_33, 0) = ((MR_Box) (mercury__integer__Carry_25));
#line 551 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_33_33, 1) = ((MR_Box) (mercury__integer__NewDigits_26));
#line 551 "integer.m"
                }
#line 551 "integer.m"
                {
#line 551 "integer.m"
                  mercury__integer__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 551 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 0) = ((MR_Box) (mercury__integer__V_31_31));
#line 551 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 1) = ((MR_Box) (mercury__integer__V_33_33));
#line 551 "integer.m"
                }
#line 551 "integer.m"
              }
#line 444 "integer.m"
            mercury__integer__S_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, (MR_Integer) 0)));
#line 444 "integer.m"
            mercury__integer__Digits0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, (MR_Integer) 1)));
#line 444 "integer.m"
            mercury__integer__V_42_42 = ((MR_Integer) 0 - mercury__integer__S_39);
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_40, &mercury__integer__Digits_41);
            }
#line 444 "integer.m"
            {
#line 444 "integer.m"
              mercury__integer__Result_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 0) = ((MR_Box) (mercury__integer__V_42_42));
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 1) = ((MR_Box) (mercury__integer__Digits_41));
#line 444 "integer.m"
            }
#line 536 "integer.m"
          }
#line 537 "integer.m"
        else
#line 543 "integer.m"
          {
#line 543 "integer.m"
            MR_Integer mercury__integer__Len_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 543 "integer.m"
            MR_Word mercury__integer__Digits_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));
#line 543 "integer.m"
            MR_Integer mercury__integer__Div_47;
#line 543 "integer.m"
            MR_Integer mercury__integer__Mod_48;
#line 543 "integer.m"
            MR_Integer mercury__integer__NewLen_49;
#line 543 "integer.m"
            MR_Integer mercury__integer__Carry_50;
#line 543 "integer.m"
            MR_Word mercury__integer__NewDigits_51;
#line 543 "integer.m"
            MR_Integer mercury__integer__V_54_54;
#line 543 "integer.m"
            MR_Integer mercury__integer__V_6_62;
#line 543 "integer.m"
            MR_Integer mercury__integer__V_7_63;

#line 544 "integer.m"
            {
#line 544 "integer.m"
              mercury__integer__Div_47 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
            }
#line 270 "int.opt"
            {
#line 270 "int.opt"
              mercury__integer__V_7_63 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
            }
#line 269 "int.opt"
            mercury__integer__V_6_62 = (mercury__integer__V_7_63 * (MR_Integer) 14);
#line 268 "int.opt"
            mercury__integer__Mod_48 = (mercury__integer__I_5 - mercury__integer__V_6_62);
#line 546 "integer.m"
            mercury__integer__NewLen_49 = (mercury__integer__Len_45 + mercury__integer__Div_47);
#line 547 "integer.m"
            mercury__integer__V_54_54 = ((MR_Integer) 14 - mercury__integer__Mod_48);
#line 547 "integer.m"
            {
#line 547 "integer.m"
              mercury__integer__leftshift_6_p_0(mercury__integer__Mod_48, mercury__integer__V_54_54, mercury__integer__NewLen_49, mercury__integer__Digits_46, &mercury__integer__Carry_50, &mercury__integer__NewDigits_51);
            }
#line 548 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Carry_50 == (MR_Integer) 0);
#line 550 "integer.m"
            if (mercury__integer__succeeded)
#line 549 "integer.m"
              {
#line 549 "integer.m"
                mercury__integer__Result_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 549 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 0) = ((MR_Box) (mercury__integer__NewLen_49));
#line 549 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 1) = ((MR_Box) (mercury__integer__NewDigits_51));
#line 549 "integer.m"
              }
#line 550 "integer.m"
            else
#line 551 "integer.m"
              {
#line 551 "integer.m"
                MR_Integer mercury__integer__V_56_56 = (mercury__integer__NewLen_49 + (MR_Integer) 1);
#line 551 "integer.m"
                MR_Word mercury__integer__V_58_58;

#line 551 "integer.m"
                {
#line 551 "integer.m"
                  mercury__integer__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_58_58, 0) = ((MR_Box) (mercury__integer__Carry_50));
#line 551 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_58_58, 1) = ((MR_Box) (mercury__integer__NewDigits_51));
#line 551 "integer.m"
                }
#line 551 "integer.m"
                {
#line 551 "integer.m"
                  mercury__integer__Result_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 551 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 0) = ((MR_Box) (mercury__integer__V_56_56));
#line 551 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 1) = ((MR_Box) (mercury__integer__V_58_58));
#line 551 "integer.m"
                }
#line 551 "integer.m"
              }
#line 543 "integer.m"
          }
#line 537 "integer.m"
      }
#line 535 "integer.m"
    return mercury__integer__Result_6;
#line 535 "integer.m"
  }
#line 530 "integer.m"
}

#line 516 "integer.m"
static MR_Word MR_CALL 
mercury__integer__rightshift_4_f_0(
#line 516 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 516 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 516 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 516 "integer.m"
  MR_Integer mercury__integer__HeadVar__4_4)
#line 516 "integer.m"
{
#line 518 "integer.m"
  {
#line 518 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 518 "integer.m"
    MR_Word mercury__integer__HeadVar__5_5;
#line 518 "integer.m"
    MR_Word mercury__integer__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 518 "integer.m"
    MR_Integer mercury__integer__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));

#line 518 "integer.m"
    if ((mercury__integer__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1257 "integer.m"
      {
#line 1257 "integer.m"
        MR_Word mercury__integer__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1257 "integer.m"
        mercury__integer__HeadVar__5_5 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1257 "integer.m"
      }
#line 518 "integer.m"
    else
#line 519 "integer.m"
      {
#line 519 "integer.m"
        MR_Integer mercury__integer__H_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_35_35, (MR_Integer) 0)));
#line 519 "integer.m"
        MR_Word mercury__integer__T_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_35_35, (MR_Integer) 1)));

#line 520 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_36_36 <= (MR_Integer) 0);
#line 522 "integer.m"
        if (mercury__integer__succeeded)
#line 1257 "integer.m"
          {
#line 1257 "integer.m"
            MR_Word mercury__integer__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1257 "integer.m"
            mercury__integer__HeadVar__5_5 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1257 "integer.m"
          }
#line 522 "integer.m"
        else
#line 523 "integer.m"
          {
#line 523 "integer.m"
            MR_Integer mercury__integer__NewH_18;
#line 523 "integer.m"
            MR_Integer mercury__integer__NewCarry_19;
#line 523 "integer.m"
            MR_Integer mercury__integer__TailLen_20;
#line 523 "integer.m"
            MR_Word mercury__integer__NewTail_21;
#line 523 "integer.m"
            MR_Integer mercury__integer__V_24_24;
#line 523 "integer.m"
            MR_Integer mercury__integer__V_25_25;
#line 523 "integer.m"
            MR_Integer mercury__integer__V_26_26;
#line 523 "integer.m"
            MR_Word mercury__integer__V_28_28;
#line 523 "integer.m"
            MR_Word mercury__integer__V_29_29;
#line 523 "integer.m"
            MR_Integer mercury__integer__V_30_30;
#line 523 "integer.m"
            MR_Integer mercury__integer__V_32_32;
#line 523 "integer.m"
            MR_Word mercury__integer__V_34_34;

#line 523 "integer.m"
            {
#line 523 "integer.m"
              mercury__integer__V_24_24 = mercury__int__f_62_62_2_f_0(mercury__integer__H_14, mercury__integer__HeadVar__1_1);
            }
#line 523 "integer.m"
            mercury__integer__NewH_18 = (mercury__integer__HeadVar__4_4 | mercury__integer__V_24_24);
#line 524 "integer.m"
            {
#line 524 "integer.m"
              mercury__integer__V_26_26 = mercury__int__f_62_62_2_f_0((MR_Integer) 16383, mercury__integer__HeadVar__2_2);
            }
#line 524 "integer.m"
            mercury__integer__V_25_25 = (mercury__integer__H_14 & mercury__integer__V_26_26);
#line 524 "integer.m"
            {
#line 524 "integer.m"
              mercury__integer__NewCarry_19 = mercury__int__f_60_60_2_f_0(mercury__integer__V_25_25, mercury__integer__HeadVar__2_2);
            }
#line 525 "integer.m"
            mercury__integer__V_30_30 = (mercury__integer__V_36_36 - (MR_Integer) 1);
#line 525 "integer.m"
            {
#line 525 "integer.m"
              mercury__integer__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 525 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 0) = ((MR_Box) (mercury__integer__V_30_30));
#line 525 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 1) = ((MR_Box) (mercury__integer__T_15));
#line 525 "integer.m"
            }
#line 525 "integer.m"
            {
#line 525 "integer.m"
              mercury__integer__V_28_28 = mercury__integer__rightshift_4_f_0(mercury__integer__HeadVar__1_1, mercury__integer__HeadVar__2_2, mercury__integer__V_29_29, mercury__integer__NewCarry_19);
            }
#line 525 "integer.m"
            mercury__integer__TailLen_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, (MR_Integer) 0)));
#line 525 "integer.m"
            mercury__integer__NewTail_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, (MR_Integer) 1)));
#line 527 "integer.m"
            mercury__integer__V_32_32 = (mercury__integer__TailLen_20 + (MR_Integer) 1);
#line 527 "integer.m"
            {
#line 527 "integer.m"
              mercury__integer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_34_34, 0) = ((MR_Box) (mercury__integer__NewH_18));
#line 527 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_34_34, 1) = ((MR_Box) (mercury__integer__NewTail_21));
#line 527 "integer.m"
            }
#line 527 "integer.m"
            {
#line 527 "integer.m"
              mercury__integer__HeadVar__5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 527 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__5_5, 0) = ((MR_Box) (mercury__integer__V_32_32));
#line 527 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__5_5, 1) = ((MR_Box) (mercury__integer__V_34_34));
#line 527 "integer.m"
            }
#line 523 "integer.m"
          }
#line 519 "integer.m"
      }
#line 518 "integer.m"
    return mercury__integer__HeadVar__5_5;
#line 518 "integer.m"
  }
#line 516 "integer.m"
}

#line 483 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_mod_2_f_0(
#line 483 "integer.m"
  MR_Word mercury__integer__X_4,
#line 483 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 483 "integer.m"
{
#line 485 "integer.m"
  {
#line 485 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 485 "integer.m"
    MR_Word mercury__integer__Mod_6;
#line 485 "integer.m"
    MR_Word mercury__integer__Rem_8;
#line 486 "integer.m"
    MR_Word mercury__integer___Trunc_7;
#line 487 "integer.m"
    MR_Integer mercury__integer__V_9_9;
#line 487 "integer.m"
    MR_Integer mercury__integer__V_11_11;
#line 487 "integer.m"
    MR_Integer mercury__integer__V_12_12;
#line 487 "integer.m"
    MR_Integer mercury__integer__Sign_13;
#line 487 "integer.m"
    MR_Integer mercury__integer__Sign_15;
#line 778 "integer.m"
    MR_Word mercury__integer__V_14_14;
#line 778 "integer.m"
    MR_Word mercury__integer__V_16_16;

#line 486 "integer.m"
    {
#line 486 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer___Trunc_7, &mercury__integer__Rem_8);
    }
#line 778 "integer.m"
    mercury__integer__Sign_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 778 "integer.m"
    mercury__integer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
#line 778 "integer.m"
    {
#line 778 "integer.m"
      mercury__integer__V_11_11 = mercury__integer__signum_1_f_0(mercury__integer__Sign_13);
    }
#line 778 "integer.m"
    mercury__integer__Sign_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Rem_8, (MR_Integer) 0)));
#line 778 "integer.m"
    mercury__integer__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Rem_8, (MR_Integer) 1)));
#line 778 "integer.m"
    {
#line 778 "integer.m"
      mercury__integer__V_12_12 = mercury__integer__signum_1_f_0(mercury__integer__Sign_15);
    }
#line 487 "integer.m"
    mercury__integer__V_9_9 = (mercury__integer__V_11_11 * mercury__integer__V_12_12);
#line 487 "integer.m"
    mercury__integer__succeeded = (mercury__integer__V_9_9 < (MR_Integer) 0);
#line 489 "integer.m"
    if (mercury__integer__succeeded)
#line 344 "integer.m"
      {
#line 344 "integer.m"
        return mercury__integer__Mod_6 = mercury__integer__big_plus_2_f_0(mercury__integer__Rem_8, mercury__integer__Y_5);
      }
#line 489 "integer.m"
    else
#line 490 "integer.m"
      mercury__integer__Mod_6 = mercury__integer__Rem_8;
#line 485 "integer.m"
    return mercury__integer__Mod_6;
#line 485 "integer.m"
  }
#line 483 "integer.m"
}

#line 473 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_div_2_f_0(
#line 473 "integer.m"
  MR_Word mercury__integer__X_4,
#line 473 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 473 "integer.m"
{
#line 475 "integer.m"
  {
#line 475 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 475 "integer.m"
    MR_Word mercury__integer__Div_6;
#line 475 "integer.m"
    MR_Word mercury__integer__Trunc_7;
#line 475 "integer.m"
    MR_Word mercury__integer__Rem_8;
#line 477 "integer.m"
    MR_Integer mercury__integer__V_9_9;
#line 477 "integer.m"
    MR_Integer mercury__integer__V_11_11;
#line 477 "integer.m"
    MR_Integer mercury__integer__V_12_12;
#line 477 "integer.m"
    MR_Integer mercury__integer__Sign_14;
#line 477 "integer.m"
    MR_Integer mercury__integer__Sign_16;
#line 778 "integer.m"
    MR_Word mercury__integer__V_15_15;
#line 778 "integer.m"
    MR_Word mercury__integer__V_17_17;

#line 476 "integer.m"
    {
#line 476 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer__Trunc_7, &mercury__integer__Rem_8);
    }
#line 778 "integer.m"
    mercury__integer__Sign_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 778 "integer.m"
    mercury__integer__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
#line 778 "integer.m"
    {
#line 778 "integer.m"
      mercury__integer__V_11_11 = mercury__integer__signum_1_f_0(mercury__integer__Sign_14);
    }
#line 778 "integer.m"
    mercury__integer__Sign_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Rem_8, (MR_Integer) 0)));
#line 778 "integer.m"
    mercury__integer__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Rem_8, (MR_Integer) 1)));
#line 778 "integer.m"
    {
#line 778 "integer.m"
      mercury__integer__V_12_12 = mercury__integer__signum_1_f_0(mercury__integer__Sign_16);
    }
#line 477 "integer.m"
    mercury__integer__V_9_9 = (mercury__integer__V_11_11 * mercury__integer__V_12_12);
#line 477 "integer.m"
    mercury__integer__succeeded = (mercury__integer__V_9_9 < (MR_Integer) 0);
#line 479 "integer.m"
    if (mercury__integer__succeeded)
#line 478 "integer.m"
      {
#line 478 "integer.m"
        MR_Word mercury__integer__V_13_13 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 478 "integer.m"
        MR_Word mercury__integer__V_24_24;
#line 478 "integer.m"
        MR_Integer mercury__integer__S_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, (MR_Integer) 0)));
#line 478 "integer.m"
        MR_Word mercury__integer__Digits0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, (MR_Integer) 1)));
#line 478 "integer.m"
        MR_Word mercury__integer__Digits_27;
#line 478 "integer.m"
        MR_Integer mercury__integer__V_28_28 = ((MR_Integer) 0 - mercury__integer__S_25);

#line 445 "integer.m"
        {
#line 445 "integer.m"
          mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_26, &mercury__integer__Digits_27);
        }
#line 444 "integer.m"
        {
#line 444 "integer.m"
          mercury__integer__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 0) = ((MR_Box) (mercury__integer__V_28_28));
#line 444 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 1) = ((MR_Box) (mercury__integer__Digits_27));
#line 444 "integer.m"
        }
#line 346 "integer.m"
        {
#line 346 "integer.m"
          return mercury__integer__Div_6 = mercury__integer__big_plus_2_f_0(mercury__integer__Trunc_7, mercury__integer__V_24_24);
        }
#line 478 "integer.m"
      }
#line 479 "integer.m"
    else
#line 480 "integer.m"
      mercury__integer__Div_6 = mercury__integer__Trunc_7;
#line 475 "integer.m"
    return mercury__integer__Div_6;
#line 475 "integer.m"
  }
#line 473 "integer.m"
}

#line 468 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_rem_2_f_0(
#line 468 "integer.m"
  MR_Word mercury__integer__X_4,
#line 468 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 468 "integer.m"
{
#line 471 "integer.m"
  {
#line 471 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 471 "integer.m"
    MR_Word mercury__integer__Rem_6;
#line 471 "integer.m"
    MR_Word mercury__integer___Quot_7;

#line 471 "integer.m"
    {
#line 471 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer___Quot_7, &mercury__integer__Rem_6);
    }
#line 471 "integer.m"
    return mercury__integer__Rem_6;
#line 471 "integer.m"
  }
#line 468 "integer.m"
}

#line 463 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_quot_2_f_0(
#line 463 "integer.m"
  MR_Word mercury__integer__X_4,
#line 463 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 463 "integer.m"
{
#line 466 "integer.m"
  {
#line 466 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 466 "integer.m"
    MR_Word mercury__integer__Quot_6;
#line 466 "integer.m"
    MR_Word mercury__integer___Rem_7;

#line 466 "integer.m"
    {
#line 466 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer__Quot_6, &mercury__integer___Rem_7);
    }
#line 466 "integer.m"
    return mercury__integer__Quot_6;
#line 466 "integer.m"
  }
#line 463 "integer.m"
}

#line 454 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_sign_2_f_0(
#line 454 "integer.m"
  MR_Integer mercury__integer__Sign_4,
#line 454 "integer.m"
  MR_Word mercury__integer__In_5)
#line 454 "integer.m"
{
#line 459 "integer.m"
  {
#line 459 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__Sign_4 < (MR_Integer) 0);
#line 459 "integer.m"
    MR_Word mercury__integer__Result_6;

#line 459 "integer.m"
    if (mercury__integer__succeeded)
#line 444 "integer.m"
      {
#line 444 "integer.m"
        MR_Integer mercury__integer__S_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__In_5, (MR_Integer) 0)));
#line 444 "integer.m"
        MR_Word mercury__integer__Digits0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__In_5, (MR_Integer) 1)));
#line 444 "integer.m"
        MR_Word mercury__integer__Digits_10;
#line 444 "integer.m"
        MR_Integer mercury__integer__V_11_11 = ((MR_Integer) 0 - mercury__integer__S_8);

#line 445 "integer.m"
        {
#line 445 "integer.m"
          mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_9, &mercury__integer__Digits_10);
        }
#line 444 "integer.m"
        {
#line 444 "integer.m"
          mercury__integer__Result_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 0) = ((MR_Box) (mercury__integer__V_11_11));
#line 444 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 1) = ((MR_Box) (mercury__integer__Digits_10));
#line 444 "integer.m"
        }
#line 444 "integer.m"
      }
#line 459 "integer.m"
    else
#line 460 "integer.m"
      mercury__integer__Result_6 = mercury__integer__In_5;
#line 459 "integer.m"
    return mercury__integer__Result_6;
#line 459 "integer.m"
  }
#line 454 "integer.m"
}

#line 447 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_mul_2_f_0(
#line 447 "integer.m"
  MR_Word mercury__integer__X_4,
#line 447 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 447 "integer.m"
{
#line 449 "integer.m"
  {
#line 449 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 449 "integer.m"
    MR_Word mercury__integer__Result_6;
#line 449 "integer.m"
    MR_Integer mercury__integer__Sign_7;
#line 449 "integer.m"
    MR_Word mercury__integer__Value_8;
#line 449 "integer.m"
    MR_Integer mercury__integer__V_9_9;
#line 449 "integer.m"
    MR_Integer mercury__integer__V_10_10;
#line 449 "integer.m"
    MR_Word mercury__integer__V_11_11;
#line 449 "integer.m"
    MR_Word mercury__integer__V_12_12;
#line 449 "integer.m"
    MR_Integer mercury__integer__Sign_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 449 "integer.m"
    MR_Integer mercury__integer__Sign_15;
#line 449 "integer.m"
    MR_Integer mercury__integer__L1_17;
#line 449 "integer.m"
    MR_Integer mercury__integer__L2_19;
#line 778 "integer.m"
    MR_Word mercury__integer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));
#line 778 "integer.m"
    MR_Word mercury__integer__V_16_16;
#line 917 "integer.m"
    MR_Word mercury__integer__Ds1_18;
#line 917 "integer.m"
    MR_Word mercury__integer__Ds2_20;

#line 778 "integer.m"
    {
#line 778 "integer.m"
      mercury__integer__V_9_9 = mercury__integer__signum_1_f_0(mercury__integer__Sign_13);
    }
#line 778 "integer.m"
    mercury__integer__Sign_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 778 "integer.m"
    mercury__integer__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
#line 778 "integer.m"
    {
#line 778 "integer.m"
      mercury__integer__V_10_10 = mercury__integer__signum_1_f_0(mercury__integer__Sign_15);
    }
#line 450 "integer.m"
    mercury__integer__Sign_7 = (mercury__integer__V_9_9 * mercury__integer__V_10_10);
#line 451 "integer.m"
    {
#line 451 "integer.m"
      mercury__integer__V_11_11 = mercury__integer__big_abs_1_f_0(mercury__integer__X_4);
    }
#line 451 "integer.m"
    {
#line 451 "integer.m"
      mercury__integer__V_12_12 = mercury__integer__big_abs_1_f_0(mercury__integer__Y_5);
    }
#line 917 "integer.m"
    mercury__integer__L1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, (MR_Integer) 0)));
#line 917 "integer.m"
    mercury__integer__Ds1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, (MR_Integer) 1)));
#line 917 "integer.m"
    mercury__integer__L2_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, (MR_Integer) 0)));
#line 917 "integer.m"
    mercury__integer__Ds2_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, (MR_Integer) 1)));
#line 918 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_17 < mercury__integer__L2_19);
#line 917 "integer.m"
    if (mercury__integer__succeeded)
#line 919 "integer.m"
      {
#line 919 "integer.m"
        mercury__integer__Value_8 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__V_11_11, mercury__integer__V_12_12);
      }
#line 917 "integer.m"
    else
#line 921 "integer.m"
      {
#line 921 "integer.m"
        mercury__integer__Value_8 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__V_12_12, mercury__integer__V_11_11);
      }
#line 452 "integer.m"
    {
#line 452 "integer.m"
      return mercury__integer__Result_6 = mercury__integer__big_sign_2_f_0(mercury__integer__Sign_7, mercury__integer__Value_8);
    }
#line 449 "integer.m"
    return mercury__integer__Result_6;
#line 449 "integer.m"
  }
#line 447 "integer.m"
}

#line 442 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_neg_1_f_0(
#line 442 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 442 "integer.m"
{
#line 444 "integer.m"
  {
#line 444 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 444 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;
#line 444 "integer.m"
    MR_Integer mercury__integer__S_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 444 "integer.m"
    MR_Word mercury__integer__Digits0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 444 "integer.m"
    MR_Word mercury__integer__Digits_5;
#line 444 "integer.m"
    MR_Integer mercury__integer__V_6_6 = ((MR_Integer) 0 - mercury__integer__S_3);

#line 445 "integer.m"
    {
#line 445 "integer.m"
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_4, &mercury__integer__Digits_5);
    }
#line 444 "integer.m"
    {
#line 444 "integer.m"
      mercury__integer__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__V_6_6));
#line 444 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__Digits_5));
#line 444 "integer.m"
    }
#line 444 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 444 "integer.m"
  }
#line 442 "integer.m"
}

#line 437 "integer.m"
MR_bool MR_CALL 
mercury__integer__big_isnegative_1_p_0(
#line 437 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 437 "integer.m"
{
#line 439 "integer.m"
  {
#line 439 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 439 "integer.m"
    MR_Integer mercury__integer__Sign_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 439 "integer.m"
    MR_Word mercury__integer__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

#line 440 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_2 < (MR_Integer) 0);
#line 439 "integer.m"
    return mercury__integer__succeeded;
#line 439 "integer.m"
  }
#line 437 "integer.m"
}

#line 431 "integer.m"
void MR_CALL 
mercury__integer__neg_list_2_p_0(
#line 431 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 431 "integer.m"
  MR_Word * mercury__integer__HeadVar__2_2)
#line 431 "integer.m"
{
#line 433 "integer.m"
  {
#line 433 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 433 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 433 "integer.m"
      *mercury__integer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 433 "integer.m"
    else
#line 434 "integer.m"
      {
#line 434 "integer.m"
        MR_Integer mercury__integer__H_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 434 "integer.m"
        MR_Word mercury__integer__T_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 434 "integer.m"
        MR_Word mercury__integer__NT_5;
#line 434 "integer.m"
        MR_Integer mercury__integer__V_6_6 = ((MR_Integer) 0 - mercury__integer__H_3);

#line 435 "integer.m"
        {
#line 435 "integer.m"
          mercury__integer__neg_list_2_p_0(mercury__integer__T_4, &mercury__integer__NT_5);
        }
#line 434 "integer.m"
        {
#line 434 "integer.m"
          MR_Word base;
#line 434 "integer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "integer.m"
          *mercury__integer__HeadVar__2_2 = base;
#line 434 "integer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__V_6_6));
#line 434 "integer.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__NT_5));
#line 434 "integer.m"
        }
#line 434 "integer.m"
      }
#line 433 "integer.m"
  }
#line 431 "integer.m"
}

#line 422 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_abs_1_f_0(
#line 422 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 422 "integer.m"
{
#line 424 "integer.m"
  {
#line 424 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 424 "integer.m"
    MR_Word mercury__integer__Result_5;
#line 424 "integer.m"
    MR_Integer mercury__integer__Sign_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 424 "integer.m"
    MR_Word mercury__integer__Ds_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

#line 425 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_3 < (MR_Integer) 0);
#line 427 "integer.m"
    if (mercury__integer__succeeded)
#line 444 "integer.m"
      {
#line 444 "integer.m"
        MR_Integer mercury__integer__S_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 444 "integer.m"
        MR_Word mercury__integer__Digits0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 444 "integer.m"
        MR_Word mercury__integer__Digits_10;
#line 444 "integer.m"
        MR_Integer mercury__integer__V_11_11 = ((MR_Integer) 0 - mercury__integer__S_8);

#line 445 "integer.m"
        {
#line 445 "integer.m"
          mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_9, &mercury__integer__Digits_10);
        }
#line 444 "integer.m"
        {
#line 444 "integer.m"
          mercury__integer__Result_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Result_5, 0) = ((MR_Box) (mercury__integer__V_11_11));
#line 444 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Result_5, 1) = ((MR_Box) (mercury__integer__Digits_10));
#line 444 "integer.m"
        }
#line 444 "integer.m"
      }
#line 427 "integer.m"
    else
#line 428 "integer.m"
      mercury__integer__Result_5 = mercury__integer__HeadVar__1_1;
#line 424 "integer.m"
    return mercury__integer__Result_5;
#line 424 "integer.m"
  }
#line 422 "integer.m"
}

#line 296 "integer.m"
MR_Integer MR_CALL 
mercury__integer__base_0_f_0(void)
#line 296 "integer.m"
{
#line 298 "integer.m"
  {
#line 298 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 298 "integer.m"
    return (MR_Integer) 16384;
#line 298 "integer.m"
  }
#line 296 "integer.m"
}

#line 219 "integer.m"
MR_Word MR_CALL 
mercury__integer__ten_0_f_0(void)
#line 219 "integer.m"
{
#line 1263 "integer.m"
  {
#line 1263 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1263 "integer.m"
    MR_Word mercury__integer__HeadVar__1_1 = (MR_Word) &mercury__integer_scalar_common_1[8];

#line 1263 "integer.m"
    return mercury__integer__HeadVar__1_1;
#line 1263 "integer.m"
  }
#line 219 "integer.m"
}

#line 215 "integer.m"
MR_Word MR_CALL 
mercury__integer__two_0_f_0(void)
#line 215 "integer.m"
{
#line 1261 "integer.m"
  {
#line 1261 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1261 "integer.m"
    MR_Word mercury__integer__HeadVar__1_1 = (MR_Word) &mercury__integer_scalar_common_1[6];

#line 1261 "integer.m"
    return mercury__integer__HeadVar__1_1;
#line 1261 "integer.m"
  }
#line 215 "integer.m"
}

#line 211 "integer.m"
MR_Word MR_CALL 
mercury__integer__one_0_f_0(void)
#line 211 "integer.m"
{
#line 1259 "integer.m"
  {
#line 1259 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1259 "integer.m"
    MR_Word mercury__integer__HeadVar__1_1 = (MR_Word) &mercury__integer_scalar_common_1[4];

#line 1259 "integer.m"
    return mercury__integer__HeadVar__1_1;
#line 1259 "integer.m"
  }
#line 211 "integer.m"
}

#line 207 "integer.m"
MR_Word MR_CALL 
mercury__integer__zero_0_f_0(void)
#line 207 "integer.m"
{
#line 1257 "integer.m"
  {
#line 1257 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1257 "integer.m"
    MR_Word mercury__integer__HeadVar__1_1 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1257 "integer.m"
    MR_Word mercury__integer__V_3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1257 "integer.m"
    return mercury__integer__HeadVar__1_1;
#line 1257 "integer.m"
  }
#line 207 "integer.m"
}

#line 203 "integer.m"
MR_Word MR_CALL 
mercury__integer__negative_one_0_f_0(void)
#line 203 "integer.m"
{
#line 1255 "integer.m"
  {
#line 1255 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1255 "integer.m"
    MR_Word mercury__integer__HeadVar__1_1 = (MR_Word) &mercury__integer_scalar_common_1[2];

#line 1255 "integer.m"
    return mercury__integer__HeadVar__1_1;
#line 1255 "integer.m"
  }
#line 203 "integer.m"
}

#line 194 "integer.m"
MR_bool MR_CALL 
mercury__integer__is_zero_1_p_0(
#line 194 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 194 "integer.m"
{
#line 1248 "integer.m"
  {
#line 1248 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1248 "integer.m"
    MR_Integer mercury__integer__V_2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1248 "integer.m"
    MR_Word mercury__integer__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

#line 1248 "integer.m"
    mercury__integer__succeeded = (mercury__integer__V_2_2 == (MR_Integer) 0);
#line 1248 "integer.m"
    if (mercury__integer__succeeded)
#line 1248 "integer.m"
      mercury__integer__succeeded = (mercury__integer__V_3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1248 "integer.m"
    return mercury__integer__succeeded;
#line 1248 "integer.m"
  }
#line 194 "integer.m"
}

#line 189 "integer.m"
MR_Integer MR_CALL 
mercury__integer__int_1_f_0(
#line 189 "integer.m"
  MR_Word mercury__integer__Integer_3)
#line 189 "integer.m"
{
#line 1234 "integer.m"
  {
#line 1234 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1234 "integer.m"
    MR_Integer mercury__integer__HeadVar__2_2;
#line 1234 "integer.m"
    MR_Integer mercury__integer__IntPrime_6;

#line 1232 "integer.m"
    {
#line 1232 "integer.m"
      mercury__integer__succeeded = mercury__integer__to_int_2_p_0(mercury__integer__Integer_3, &mercury__integer__IntPrime_6);
    }
#line 1234 "integer.m"
    if (mercury__integer__succeeded)
#line 1233 "integer.m"
      mercury__integer__HeadVar__2_2 = mercury__integer__IntPrime_6;
#line 1234 "integer.m"
    else
#line 1235 "integer.m"
      {
#line 1235 "integer.m"
        MR_Word mercury__integer__TypeCtorInfo_8_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 1235 "integer.m"
        MR_Word mercury__integer__V_7_7 = (MR_Word) ((MR_Box) ((MR_String) "integer.det_to_int: domain error (conversion would overflow)"));

#line 1235 "integer.m"
        {
#line 1235 "integer.m"
          mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_8_9, ((MR_Box) (mercury__integer__V_7_7)));
        }
#line 1235 "integer.m"
      }
#line 1234 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 1234 "integer.m"
  }
#line 189 "integer.m"
}

#line 187 "integer.m"
MR_Integer MR_CALL 
mercury__integer__det_to_int_1_f_0(
#line 187 "integer.m"
  MR_Word mercury__integer__Integer_3)
#line 187 "integer.m"
{
#line 1234 "integer.m"
  {
#line 1234 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1234 "integer.m"
    MR_Integer mercury__integer__Int_4;
#line 1234 "integer.m"
    MR_Integer mercury__integer__IntPrime_5;

#line 1232 "integer.m"
    {
#line 1232 "integer.m"
      mercury__integer__succeeded = mercury__integer__to_int_2_p_0(mercury__integer__Integer_3, &mercury__integer__IntPrime_5);
    }
#line 1234 "integer.m"
    if (mercury__integer__succeeded)
#line 1233 "integer.m"
      mercury__integer__Int_4 = mercury__integer__IntPrime_5;
#line 1234 "integer.m"
    else
#line 1235 "integer.m"
      {
#line 1235 "integer.m"
        MR_Word mercury__integer__TypeCtorInfo_8_8 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 1235 "integer.m"
        MR_Word mercury__integer__V_6_6 = (MR_Word) ((MR_Box) ((MR_String) "integer.det_to_int: domain error (conversion would overflow)"));

#line 1235 "integer.m"
        {
#line 1235 "integer.m"
          mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_8_8, ((MR_Box) (mercury__integer__V_6_6)));
        }
#line 1235 "integer.m"
      }
#line 1234 "integer.m"
    return mercury__integer__Int_4;
#line 1234 "integer.m"
  }
#line 187 "integer.m"
}

#line 183 "integer.m"
MR_bool MR_CALL 
mercury__integer__to_int_2_p_0(
#line 183 "integer.m"
  MR_Word mercury__integer__Integer_3,
#line 183 "integer.m"
  MR_Integer * mercury__integer__Int_4)
#line 183 "integer.m"
{
#line 1225 "integer.m"
  {
#line 1225 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1225 "integer.m"
    MR_Word mercury__integer__Digits_6;
#line 1225 "integer.m"
    MR_Word mercury__integer__V_7_7;
#line 1225 "integer.m"
    MR_Integer mercury__integer__V_8_8;
#line 1225 "integer.m"
    MR_Word mercury__integer__V_9_9;
#line 1225 "integer.m"
    MR_Integer mercury__integer__V_10_10;
#line 1225 "integer.m"
    MR_Integer mercury__integer__V_11_11;
#line 1225 "integer.m"
    MR_Word mercury__integer__C_16;
#line 1225 "integer.m"
    MR_Word mercury__integer__C_25;
#line 1228 "integer.m"
    MR_Integer mercury__integer___Sign_5;

#line 250 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__to_int_2_p_0

	MR_Integer Min;

		{
#line 250 "int.opt"

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

#line 11638 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_8_8  = Min;
#line 250 "int.opt"
}
#line 726 "integer.m"
    {
#line 726 "integer.m"
      mercury__integer__V_7_7 = mercury__integer__int_to_integer_1_f_0(mercury__integer__V_8_8);
    }
#line 690 "integer.m"
    {
#line 690 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_16, mercury__integer__Integer_3, mercury__integer__V_7_7);
    }
#line 338 "integer.m"
#line 338 "integer.m"
    switch (mercury__integer__C_16) {
#line 338 "integer.m"
      default:
#line 338 "integer.m"
        mercury__integer__succeeded = MR_FALSE;
#line 338 "integer.m"
        break;
#line 338 "integer.m"
      case (MR_Integer) 0:
#line 338 "integer.m"
        mercury__integer__succeeded = MR_TRUE;
#line 338 "integer.m"
        break;
#line 338 "integer.m"
      case (MR_Integer) 2:
#line 338 "integer.m"
        mercury__integer__succeeded = MR_TRUE;
#line 338 "integer.m"
        break;
#line 338 "integer.m"
    }
#line 1225 "integer.m"
    if (mercury__integer__succeeded)
#line 1225 "integer.m"
      {
#line 221 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__to_int_2_p_0

	MR_Integer Max;

		{
#line 221 "int.opt"

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

#line 11703 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_10_10  = Max;
#line 221 "int.opt"
}
#line 726 "integer.m"
        {
#line 726 "integer.m"
          mercury__integer__V_9_9 = mercury__integer__int_to_integer_1_f_0(mercury__integer__V_10_10);
        }
#line 690 "integer.m"
        {
#line 690 "integer.m"
          mercury__integer____Compare____integer_0_0(&mercury__integer__C_25, mercury__integer__Integer_3, mercury__integer__V_9_9);
        }
#line 334 "integer.m"
#line 334 "integer.m"
        switch (mercury__integer__C_25) {
#line 334 "integer.m"
          default:
#line 334 "integer.m"
            mercury__integer__succeeded = MR_FALSE;
#line 334 "integer.m"
            break;
#line 334 "integer.m"
          case (MR_Integer) 1:
#line 334 "integer.m"
            mercury__integer__succeeded = MR_TRUE;
#line 334 "integer.m"
            break;
#line 334 "integer.m"
          case (MR_Integer) 0:
#line 334 "integer.m"
            mercury__integer__succeeded = MR_TRUE;
#line 334 "integer.m"
            break;
#line 334 "integer.m"
        }
#line 1225 "integer.m"
        if (mercury__integer__succeeded)
#line 1225 "integer.m"
          {
#line 1228 "integer.m"
            mercury__integer___Sign_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Integer_3, (MR_Integer) 0)));
#line 1228 "integer.m"
            mercury__integer__Digits_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Integer_3, (MR_Integer) 1)));
#line 1229 "integer.m"
            mercury__integer__V_11_11 = (MR_Integer) 0;
#line 1229 "integer.m"
            {
#line 1229 "integer.m"
              *mercury__integer__Int_4 = mercury__integer__int_list_2_f_0(mercury__integer__Digits_6, mercury__integer__V_11_11);
            }
#line 1229 "integer.m"
            mercury__integer__succeeded = MR_TRUE;
#line 1225 "integer.m"
          }
#line 1225 "integer.m"
      }
#line 1225 "integer.m"
    return mercury__integer__succeeded;
#line 1225 "integer.m"
  }
#line 183 "integer.m"
}

#line 178 "integer.m"
MR_Float MR_CALL 
mercury__integer__float_1_f_0(
#line 178 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 178 "integer.m"
{
#line 1217 "integer.m"
  {
#line 1217 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1217 "integer.m"
    MR_Float mercury__integer__HeadVar__2_2;
#line 1217 "integer.m"
    MR_Word mercury__integer__List_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1217 "integer.m"
    MR_Float mercury__integer__V_5_5;
#line 1217 "integer.m"
    MR_Integer mercury__integer__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 46 "float.opt"
{
#define MR_PROC_LABEL mercury__integer__float_1_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  (MR_Integer) 16384 ;
		{
#line 46 "float.opt"

    FloatVal = IntVal;

#line 11804 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_5_5  = FloatVal;
#line 46 "float.opt"
}
#line 1217 "integer.m"
    {
#line 1217 "integer.m"
      return mercury__integer__HeadVar__2_2 = mercury__integer__float_list_3_f_0(mercury__integer__V_5_5, (MR_Float) 0.0000000000000000, mercury__integer__List_4);
    }
#line 1217 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 1217 "integer.m"
  }
#line 178 "integer.m"
}

#line 174 "integer.m"
MR_Word MR_CALL 
mercury__integer__pow_2_f_0(
#line 174 "integer.m"
  MR_Word mercury__integer__A_4,
#line 174 "integer.m"
  MR_Word mercury__integer__N_5)
#line 174 "integer.m"
{
#line 1173 "integer.m"
  {
#line 1173 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1173 "integer.m"
    MR_Word mercury__integer__P_6;
#line 439 "integer.m"
    MR_Integer mercury__integer__Sign_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__N_5, (MR_Integer) 0)));
#line 439 "integer.m"
    MR_Word mercury__integer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__N_5, (MR_Integer) 1)));

#line 440 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_10 < (MR_Integer) 0);
#line 1173 "integer.m"
    if (mercury__integer__succeeded)
#line 1172 "integer.m"
      {
#line 1172 "integer.m"
        MR_Word mercury__integer__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 1172 "integer.m"
        MR_Word mercury__integer__V_7_7 = (MR_Word) ((MR_Box) ((MR_String) "integer.pow: negative exponent"));

#line 1172 "integer.m"
        {
#line 1172 "integer.m"
          mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_9, ((MR_Box) (mercury__integer__V_7_7)));
        }
#line 1172 "integer.m"
      }
#line 1173 "integer.m"
    else
#line 1174 "integer.m"
      {
#line 1174 "integer.m"
        return mercury__integer__P_6 = mercury__integer__big_pow_2_f_0(mercury__integer__A_4, mercury__integer__N_5);
      }
#line 1173 "integer.m"
    return mercury__integer__P_6;
#line 1173 "integer.m"
  }
#line 174 "integer.m"
}

#line 168 "integer.m"
MR_Word MR_CALL 
mercury__integer__abs_1_f_0(
#line 168 "integer.m"
  MR_Word mercury__integer__N_3)
#line 168 "integer.m"
{
#line 420 "integer.m"
  {
#line 420 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 420 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;

#line 420 "integer.m"
    {
#line 420 "integer.m"
      return mercury__integer__HeadVar__2_2 = mercury__integer__big_abs_1_f_0(mercury__integer__N_3);
    }
#line 420 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 420 "integer.m"
  }
#line 168 "integer.m"
}

#line 164 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_92_1_f_0(
#line 164 "integer.m"
  MR_Word mercury__integer__X_3)
#line 164 "integer.m"
{
#line 418 "integer.m"
  {
#line 418 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 418 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;
#line 418 "integer.m"
    MR_Word mercury__integer__V_4_4;
#line 418 "integer.m"
    MR_Word mercury__integer__V_5_5 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 418 "integer.m"
    MR_Integer mercury__integer__S_10;
#line 418 "integer.m"
    MR_Word mercury__integer__Digits0_11;
#line 418 "integer.m"
    MR_Word mercury__integer__Digits_12;
#line 418 "integer.m"
    MR_Integer mercury__integer__V_13_13;

#line 418 "integer.m"
    {
#line 418 "integer.m"
      mercury__integer__V_4_4 = mercury__integer__big_plus_2_f_0(mercury__integer__X_3, mercury__integer__V_5_5);
    }
#line 444 "integer.m"
    mercury__integer__S_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_4_4, (MR_Integer) 0)));
#line 444 "integer.m"
    mercury__integer__Digits0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_4_4, (MR_Integer) 1)));
#line 444 "integer.m"
    mercury__integer__V_13_13 = ((MR_Integer) 0 - mercury__integer__S_10);
#line 445 "integer.m"
    {
#line 445 "integer.m"
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_11, &mercury__integer__Digits_12);
    }
#line 444 "integer.m"
    {
#line 444 "integer.m"
      mercury__integer__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__V_13_13));
#line 444 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__Digits_12));
#line 444 "integer.m"
    }
#line 418 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 418 "integer.m"
  }
#line 164 "integer.m"
}

#line 160 "integer.m"
MR_Word MR_CALL 
mercury__integer__xor_2_f_0(
#line 160 "integer.m"
  MR_Word mercury__integer__X_4,
#line 160 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 160 "integer.m"
{
#line 412 "integer.m"
  {
#line 412 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 412 "integer.m"
    MR_Word mercury__integer__Result_6;
#line 439 "integer.m"
    MR_Integer mercury__integer__Sign_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 439 "integer.m"
    MR_Word mercury__integer__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 440 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_11 < (MR_Integer) 0);
#line 412 "integer.m"
    if (mercury__integer__succeeded)
#line 409 "integer.m"
      {
#line 439 "integer.m"
        MR_Integer mercury__integer__Sign_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 439 "integer.m"
        MR_Word mercury__integer__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 440 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_14 < (MR_Integer) 0);
#line 409 "integer.m"
        if (mercury__integer__succeeded)
#line 408 "integer.m"
          {
#line 408 "integer.m"
            MR_Word mercury__integer__V_7_7;
#line 408 "integer.m"
            MR_Word mercury__integer__V_8_8;
#line 408 "integer.m"
            MR_Word mercury__integer__V_18_18;
#line 408 "integer.m"
            MR_Word mercury__integer__V_19_19 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 408 "integer.m"
            MR_Integer mercury__integer__S_24;
#line 408 "integer.m"
            MR_Word mercury__integer__Digits0_25;
#line 408 "integer.m"
            MR_Word mercury__integer__Digits_26;
#line 408 "integer.m"
            MR_Integer mercury__integer__V_27_27;
#line 408 "integer.m"
            MR_Word mercury__integer__V_29_29;
#line 408 "integer.m"
            MR_Word mercury__integer__V_30_30;
#line 408 "integer.m"
            MR_Integer mercury__integer__S_35;
#line 408 "integer.m"
            MR_Word mercury__integer__Digits0_36;
#line 408 "integer.m"
            MR_Word mercury__integer__Digits_37;
#line 408 "integer.m"
            MR_Integer mercury__integer__V_38_38;
#line 408 "integer.m"
            MR_Word mercury__integer__V_41_41;

#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_18_18 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_19_19);
            }
#line 444 "integer.m"
            mercury__integer__S_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_18_18, (MR_Integer) 0)));
#line 444 "integer.m"
            mercury__integer__Digits0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_18_18, (MR_Integer) 1)));
#line 444 "integer.m"
            mercury__integer__V_27_27 = ((MR_Integer) 0 - mercury__integer__S_24);
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_25, &mercury__integer__Digits_26);
            }
#line 444 "integer.m"
            {
#line 444 "integer.m"
              mercury__integer__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 0) = ((MR_Box) (mercury__integer__V_27_27));
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 1) = ((MR_Box) (mercury__integer__Digits_26));
#line 444 "integer.m"
            }
#line 1259 "integer.m"
            mercury__integer__V_30_30 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_29_29 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_30_30);
            }
#line 444 "integer.m"
            mercury__integer__S_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, (MR_Integer) 0)));
#line 444 "integer.m"
            mercury__integer__Digits0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, (MR_Integer) 1)));
#line 444 "integer.m"
            mercury__integer__V_38_38 = ((MR_Integer) 0 - mercury__integer__S_35);
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_36, &mercury__integer__Digits_37);
            }
#line 444 "integer.m"
            {
#line 444 "integer.m"
              mercury__integer__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 0) = ((MR_Box) (mercury__integer__V_38_38));
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 1) = ((MR_Box) (mercury__integer__Digits_37));
#line 444 "integer.m"
            }
#line 607 "integer.m"
            {
#line 607 "integer.m"
              mercury__integer__V_41_41 = mercury__integer__xor_pairs_2_f_0(mercury__integer__V_7_7, mercury__integer__V_8_8);
            }
#line 607 "integer.m"
            {
#line 607 "integer.m"
              return mercury__integer__Result_6 = mercury__integer__decap_1_f_0(mercury__integer__V_41_41);
            }
#line 408 "integer.m"
          }
#line 409 "integer.m"
        else
#line 410 "integer.m"
          {
#line 410 "integer.m"
            MR_Word mercury__integer__V_9_9;
#line 410 "integer.m"
            MR_Word mercury__integer__V_43_43;
#line 410 "integer.m"
            MR_Word mercury__integer__V_44_44 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 410 "integer.m"
            MR_Integer mercury__integer__S_49;
#line 410 "integer.m"
            MR_Word mercury__integer__Digits0_50;
#line 410 "integer.m"
            MR_Word mercury__integer__Digits_51;
#line 410 "integer.m"
            MR_Integer mercury__integer__V_52_52;
#line 410 "integer.m"
            MR_Word mercury__integer__V_55_55;
#line 410 "integer.m"
            MR_Word mercury__integer__V_56_56;
#line 410 "integer.m"
            MR_Word mercury__integer__V_57_57;
#line 410 "integer.m"
            MR_Word mercury__integer__V_60_60;
#line 410 "integer.m"
            MR_Word mercury__integer__V_63_63;
#line 410 "integer.m"
            MR_Word mercury__integer__V_66_66;
#line 410 "integer.m"
            MR_Word mercury__integer__V_68_68;
#line 410 "integer.m"
            MR_Word mercury__integer__V_69_69;
#line 410 "integer.m"
            MR_Integer mercury__integer__S_74;
#line 410 "integer.m"
            MR_Word mercury__integer__Digits0_75;
#line 410 "integer.m"
            MR_Word mercury__integer__Digits_76;
#line 410 "integer.m"
            MR_Integer mercury__integer__V_77_77;

#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_43_43 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_44_44);
            }
#line 444 "integer.m"
            mercury__integer__S_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_43_43, (MR_Integer) 0)));
#line 444 "integer.m"
            mercury__integer__Digits0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_43_43, (MR_Integer) 1)));
#line 444 "integer.m"
            mercury__integer__V_52_52 = ((MR_Integer) 0 - mercury__integer__S_49);
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_50, &mercury__integer__Digits_51);
            }
#line 444 "integer.m"
            {
#line 444 "integer.m"
              mercury__integer__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 0) = ((MR_Box) (mercury__integer__V_52_52));
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 1) = ((MR_Box) (mercury__integer__Digits_51));
#line 444 "integer.m"
            }
#line 582 "integer.m"
            {
#line 582 "integer.m"
              mercury__integer__V_60_60 = mercury__integer__or_pairs_2_f_0(mercury__integer__Y_5, mercury__integer__V_9_9);
            }
#line 582 "integer.m"
            {
#line 582 "integer.m"
              mercury__integer__V_56_56 = mercury__integer__decap_1_f_0(mercury__integer__V_60_60);
            }
#line 633 "integer.m"
            {
#line 633 "integer.m"
              mercury__integer__V_63_63 = mercury__integer__and_pairs_2_f_0(mercury__integer__Y_5, mercury__integer__V_9_9);
            }
#line 633 "integer.m"
            {
#line 633 "integer.m"
              mercury__integer__V_57_57 = mercury__integer__decap_1_f_0(mercury__integer__V_63_63);
            }
#line 658 "integer.m"
            {
#line 658 "integer.m"
              mercury__integer__V_66_66 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__V_56_56, mercury__integer__V_57_57);
            }
#line 658 "integer.m"
            {
#line 658 "integer.m"
              mercury__integer__V_55_55 = mercury__integer__decap_1_f_0(mercury__integer__V_66_66);
            }
#line 1259 "integer.m"
            mercury__integer__V_69_69 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_68_68 = mercury__integer__big_plus_2_f_0(mercury__integer__V_55_55, mercury__integer__V_69_69);
            }
#line 444 "integer.m"
            mercury__integer__S_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_68_68, (MR_Integer) 0)));
#line 444 "integer.m"
            mercury__integer__Digits0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_68_68, (MR_Integer) 1)));
#line 444 "integer.m"
            mercury__integer__V_77_77 = ((MR_Integer) 0 - mercury__integer__S_74);
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_75, &mercury__integer__Digits_76);
            }
#line 444 "integer.m"
            {
#line 444 "integer.m"
              mercury__integer__Result_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 0) = ((MR_Box) (mercury__integer__V_77_77));
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 1) = ((MR_Box) (mercury__integer__Digits_76));
#line 444 "integer.m"
            }
#line 410 "integer.m"
          }
#line 409 "integer.m"
      }
#line 412 "integer.m"
    else
#line 414 "integer.m"
      {
#line 439 "integer.m"
        MR_Integer mercury__integer__Sign_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 439 "integer.m"
        MR_Word mercury__integer__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 440 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_78 < (MR_Integer) 0);
#line 414 "integer.m"
        if (mercury__integer__succeeded)
#line 413 "integer.m"
          {
#line 413 "integer.m"
            MR_Word mercury__integer__V_10_10;
#line 413 "integer.m"
            MR_Word mercury__integer__V_82_82;
#line 413 "integer.m"
            MR_Word mercury__integer__V_83_83 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 413 "integer.m"
            MR_Integer mercury__integer__S_88;
#line 413 "integer.m"
            MR_Word mercury__integer__Digits0_89;
#line 413 "integer.m"
            MR_Word mercury__integer__Digits_90;
#line 413 "integer.m"
            MR_Integer mercury__integer__V_91_91;

#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_82_82 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_83_83);
            }
#line 444 "integer.m"
            mercury__integer__S_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_82_82, (MR_Integer) 0)));
#line 444 "integer.m"
            mercury__integer__Digits0_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_82_82, (MR_Integer) 1)));
#line 444 "integer.m"
            mercury__integer__V_91_91 = ((MR_Integer) 0 - mercury__integer__S_88);
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_89, &mercury__integer__Digits_90);
            }
#line 444 "integer.m"
            {
#line 444 "integer.m"
              mercury__integer__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, 0) = ((MR_Box) (mercury__integer__V_91_91));
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, 1) = ((MR_Box) (mercury__integer__Digits_90));
#line 444 "integer.m"
            }
#line 413 "integer.m"
            {
#line 413 "integer.m"
              return mercury__integer__Result_6 = mercury__integer__big_xor_not_2_f_0(mercury__integer__X_4, mercury__integer__V_10_10);
            }
#line 413 "integer.m"
          }
#line 414 "integer.m"
        else
#line 607 "integer.m"
          {
#line 607 "integer.m"
            MR_Word mercury__integer__V_94_94;

#line 607 "integer.m"
            {
#line 607 "integer.m"
              mercury__integer__V_94_94 = mercury__integer__xor_pairs_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
            }
#line 607 "integer.m"
            {
#line 607 "integer.m"
              return mercury__integer__Result_6 = mercury__integer__decap_1_f_0(mercury__integer__V_94_94);
            }
#line 607 "integer.m"
          }
#line 414 "integer.m"
      }
#line 412 "integer.m"
    return mercury__integer__Result_6;
#line 412 "integer.m"
  }
#line 160 "integer.m"
}

#line 156 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_92_47_2_f_0(
#line 156 "integer.m"
  MR_Word mercury__integer__X_4,
#line 156 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 156 "integer.m"
{
#line 399 "integer.m"
  {
#line 399 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 399 "integer.m"
    MR_Word mercury__integer__Result_6;
#line 439 "integer.m"
    MR_Integer mercury__integer__Sign_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 439 "integer.m"
    MR_Word mercury__integer__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 440 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_14 < (MR_Integer) 0);
#line 399 "integer.m"
    if (mercury__integer__succeeded)
#line 396 "integer.m"
      {
#line 439 "integer.m"
        MR_Integer mercury__integer__Sign_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 439 "integer.m"
        MR_Word mercury__integer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 440 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_17 < (MR_Integer) 0);
#line 396 "integer.m"
        if (mercury__integer__succeeded)
#line 395 "integer.m"
          {
#line 395 "integer.m"
            MR_Word mercury__integer__V_7_7;
#line 395 "integer.m"
            MR_Word mercury__integer__V_8_8;
#line 395 "integer.m"
            MR_Word mercury__integer__V_9_9;
#line 395 "integer.m"
            MR_Word mercury__integer__V_21_21;
#line 395 "integer.m"
            MR_Word mercury__integer__V_22_22 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 395 "integer.m"
            MR_Integer mercury__integer__S_27;
#line 395 "integer.m"
            MR_Word mercury__integer__Digits0_28;
#line 395 "integer.m"
            MR_Word mercury__integer__Digits_29;
#line 395 "integer.m"
            MR_Integer mercury__integer__V_30_30;
#line 395 "integer.m"
            MR_Word mercury__integer__V_32_32;
#line 395 "integer.m"
            MR_Word mercury__integer__V_33_33;
#line 395 "integer.m"
            MR_Integer mercury__integer__S_38;
#line 395 "integer.m"
            MR_Word mercury__integer__Digits0_39;
#line 395 "integer.m"
            MR_Word mercury__integer__Digits_40;
#line 395 "integer.m"
            MR_Integer mercury__integer__V_41_41;
#line 395 "integer.m"
            MR_Word mercury__integer__V_44_44;
#line 395 "integer.m"
            MR_Word mercury__integer__V_46_46;
#line 395 "integer.m"
            MR_Word mercury__integer__V_47_47;
#line 395 "integer.m"
            MR_Integer mercury__integer__S_52;
#line 395 "integer.m"
            MR_Word mercury__integer__Digits0_53;
#line 395 "integer.m"
            MR_Word mercury__integer__Digits_54;
#line 395 "integer.m"
            MR_Integer mercury__integer__V_55_55;

#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_21_21 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_22_22);
            }
#line 444 "integer.m"
            mercury__integer__S_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_21_21, (MR_Integer) 0)));
#line 444 "integer.m"
            mercury__integer__Digits0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_21_21, (MR_Integer) 1)));
#line 444 "integer.m"
            mercury__integer__V_30_30 = ((MR_Integer) 0 - mercury__integer__S_27);
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_28, &mercury__integer__Digits_29);
            }
#line 444 "integer.m"
            {
#line 444 "integer.m"
              mercury__integer__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 0) = ((MR_Box) (mercury__integer__V_30_30));
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 1) = ((MR_Box) (mercury__integer__Digits_29));
#line 444 "integer.m"
            }
#line 1259 "integer.m"
            mercury__integer__V_33_33 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_32_32 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_33_33);
            }
#line 444 "integer.m"
            mercury__integer__S_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_32_32, (MR_Integer) 0)));
#line 444 "integer.m"
            mercury__integer__Digits0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_32_32, (MR_Integer) 1)));
#line 444 "integer.m"
            mercury__integer__V_41_41 = ((MR_Integer) 0 - mercury__integer__S_38);
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_39, &mercury__integer__Digits_40);
            }
#line 444 "integer.m"
            {
#line 444 "integer.m"
              mercury__integer__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 0) = ((MR_Box) (mercury__integer__V_41_41));
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 1) = ((MR_Box) (mercury__integer__Digits_40));
#line 444 "integer.m"
            }
#line 633 "integer.m"
            {
#line 633 "integer.m"
              mercury__integer__V_44_44 = mercury__integer__and_pairs_2_f_0(mercury__integer__V_8_8, mercury__integer__V_9_9);
            }
#line 633 "integer.m"
            {
#line 633 "integer.m"
              mercury__integer__V_7_7 = mercury__integer__decap_1_f_0(mercury__integer__V_44_44);
            }
#line 1259 "integer.m"
            mercury__integer__V_47_47 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_46_46 = mercury__integer__big_plus_2_f_0(mercury__integer__V_7_7, mercury__integer__V_47_47);
            }
#line 444 "integer.m"
            mercury__integer__S_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_46_46, (MR_Integer) 0)));
#line 444 "integer.m"
            mercury__integer__Digits0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_46_46, (MR_Integer) 1)));
#line 444 "integer.m"
            mercury__integer__V_55_55 = ((MR_Integer) 0 - mercury__integer__S_52);
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_53, &mercury__integer__Digits_54);
            }
#line 444 "integer.m"
            {
#line 444 "integer.m"
              mercury__integer__Result_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 0) = ((MR_Box) (mercury__integer__V_55_55));
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 1) = ((MR_Box) (mercury__integer__Digits_54));
#line 444 "integer.m"
            }
#line 395 "integer.m"
          }
#line 396 "integer.m"
        else
#line 397 "integer.m"
          {
#line 397 "integer.m"
            MR_Word mercury__integer__V_10_10;
#line 397 "integer.m"
            MR_Word mercury__integer__V_11_11;
#line 397 "integer.m"
            MR_Word mercury__integer__V_57_57;
#line 397 "integer.m"
            MR_Word mercury__integer__V_58_58 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 397 "integer.m"
            MR_Integer mercury__integer__S_63;
#line 397 "integer.m"
            MR_Word mercury__integer__Digits0_64;
#line 397 "integer.m"
            MR_Word mercury__integer__Digits_65;
#line 397 "integer.m"
            MR_Integer mercury__integer__V_66_66;
#line 397 "integer.m"
            MR_Word mercury__integer__V_69_69;
#line 397 "integer.m"
            MR_Word mercury__integer__V_71_71;
#line 397 "integer.m"
            MR_Word mercury__integer__V_72_72;
#line 397 "integer.m"
            MR_Integer mercury__integer__S_77;
#line 397 "integer.m"
            MR_Word mercury__integer__Digits0_78;
#line 397 "integer.m"
            MR_Word mercury__integer__Digits_79;
#line 397 "integer.m"
            MR_Integer mercury__integer__V_80_80;

#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_57_57 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_58_58);
            }
#line 444 "integer.m"
            mercury__integer__S_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_57_57, (MR_Integer) 0)));
#line 444 "integer.m"
            mercury__integer__Digits0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_57_57, (MR_Integer) 1)));
#line 444 "integer.m"
            mercury__integer__V_66_66 = ((MR_Integer) 0 - mercury__integer__S_63);
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_64, &mercury__integer__Digits_65);
            }
#line 444 "integer.m"
            {
#line 444 "integer.m"
              mercury__integer__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 0) = ((MR_Box) (mercury__integer__V_66_66));
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 1) = ((MR_Box) (mercury__integer__Digits_65));
#line 444 "integer.m"
            }
#line 658 "integer.m"
            {
#line 658 "integer.m"
              mercury__integer__V_69_69 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__V_11_11, mercury__integer__Y_5);
            }
#line 658 "integer.m"
            {
#line 658 "integer.m"
              mercury__integer__V_10_10 = mercury__integer__decap_1_f_0(mercury__integer__V_69_69);
            }
#line 1259 "integer.m"
            mercury__integer__V_72_72 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_71_71 = mercury__integer__big_plus_2_f_0(mercury__integer__V_10_10, mercury__integer__V_72_72);
            }
#line 444 "integer.m"
            mercury__integer__S_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_71_71, (MR_Integer) 0)));
#line 444 "integer.m"
            mercury__integer__Digits0_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_71_71, (MR_Integer) 1)));
#line 444 "integer.m"
            mercury__integer__V_80_80 = ((MR_Integer) 0 - mercury__integer__S_77);
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_78, &mercury__integer__Digits_79);
            }
#line 444 "integer.m"
            {
#line 444 "integer.m"
              mercury__integer__Result_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 0) = ((MR_Box) (mercury__integer__V_80_80));
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 1) = ((MR_Box) (mercury__integer__Digits_79));
#line 444 "integer.m"
            }
#line 397 "integer.m"
          }
#line 396 "integer.m"
      }
#line 399 "integer.m"
    else
#line 401 "integer.m"
      {
#line 439 "integer.m"
        MR_Integer mercury__integer__Sign_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 439 "integer.m"
        MR_Word mercury__integer__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 440 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_81 < (MR_Integer) 0);
#line 401 "integer.m"
        if (mercury__integer__succeeded)
#line 400 "integer.m"
          {
#line 400 "integer.m"
            MR_Word mercury__integer__V_12_12;
#line 400 "integer.m"
            MR_Word mercury__integer__V_13_13;
#line 400 "integer.m"
            MR_Word mercury__integer__V_85_85;
#line 400 "integer.m"
            MR_Word mercury__integer__V_86_86 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 400 "integer.m"
            MR_Integer mercury__integer__S_91;
#line 400 "integer.m"
            MR_Word mercury__integer__Digits0_92;
#line 400 "integer.m"
            MR_Word mercury__integer__Digits_93;
#line 400 "integer.m"
            MR_Integer mercury__integer__V_94_94;
#line 400 "integer.m"
            MR_Word mercury__integer__V_97_97;

#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_85_85 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_86_86);
            }
#line 444 "integer.m"
            mercury__integer__S_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_85_85, (MR_Integer) 0)));
#line 444 "integer.m"
            mercury__integer__Digits0_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_85_85, (MR_Integer) 1)));
#line 444 "integer.m"
            mercury__integer__V_94_94 = ((MR_Integer) 0 - mercury__integer__S_91);
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_92, &mercury__integer__Digits_93);
            }
#line 444 "integer.m"
            {
#line 444 "integer.m"
              mercury__integer__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 0) = ((MR_Box) (mercury__integer__V_94_94));
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 1) = ((MR_Box) (mercury__integer__Digits_93));
#line 444 "integer.m"
            }
#line 658 "integer.m"
            {
#line 658 "integer.m"
              mercury__integer__V_97_97 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__V_13_13, mercury__integer__X_4);
            }
#line 658 "integer.m"
            {
#line 658 "integer.m"
              mercury__integer__V_12_12 = mercury__integer__decap_1_f_0(mercury__integer__V_97_97);
            }
#line 400 "integer.m"
            {
#line 400 "integer.m"
              return mercury__integer__Result_6 = mercury__integer__f_92_1_f_0(mercury__integer__V_12_12);
            }
#line 400 "integer.m"
          }
#line 401 "integer.m"
        else
#line 402 "integer.m"
          {
#line 402 "integer.m"
            return mercury__integer__Result_6 = mercury__integer__big_or_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
          }
#line 401 "integer.m"
      }
#line 399 "integer.m"
    return mercury__integer__Result_6;
#line 399 "integer.m"
  }
#line 156 "integer.m"
}

#line 152 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_47_92_2_f_0(
#line 152 "integer.m"
  MR_Word mercury__integer__X_4,
#line 152 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 152 "integer.m"
{
#line 386 "integer.m"
  {
#line 386 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 386 "integer.m"
    MR_Word mercury__integer__Result_6;
#line 439 "integer.m"
    MR_Integer mercury__integer__Sign_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 439 "integer.m"
    MR_Word mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 440 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_12 < (MR_Integer) 0);
#line 386 "integer.m"
    if (mercury__integer__succeeded)
#line 383 "integer.m"
      {
#line 439 "integer.m"
        MR_Integer mercury__integer__Sign_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 439 "integer.m"
        MR_Word mercury__integer__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 440 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_15 < (MR_Integer) 0);
#line 383 "integer.m"
        if (mercury__integer__succeeded)
#line 382 "integer.m"
          {
#line 382 "integer.m"
            MR_Word mercury__integer__V_7_7;
#line 382 "integer.m"
            MR_Word mercury__integer__V_8_8;
#line 382 "integer.m"
            MR_Word mercury__integer__V_9_9;
#line 382 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 382 "integer.m"
            MR_Word mercury__integer__V_20_20 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 382 "integer.m"
            MR_Integer mercury__integer__S_25;
#line 382 "integer.m"
            MR_Word mercury__integer__Digits0_26;
#line 382 "integer.m"
            MR_Word mercury__integer__Digits_27;
#line 382 "integer.m"
            MR_Integer mercury__integer__V_28_28;
#line 382 "integer.m"
            MR_Word mercury__integer__V_30_30;
#line 382 "integer.m"
            MR_Word mercury__integer__V_31_31;
#line 382 "integer.m"
            MR_Integer mercury__integer__S_36;
#line 382 "integer.m"
            MR_Word mercury__integer__Digits0_37;
#line 382 "integer.m"
            MR_Word mercury__integer__Digits_38;
#line 382 "integer.m"
            MR_Integer mercury__integer__V_39_39;
#line 382 "integer.m"
            MR_Word mercury__integer__V_42_42;
#line 382 "integer.m"
            MR_Word mercury__integer__V_44_44;
#line 382 "integer.m"
            MR_Word mercury__integer__V_45_45;
#line 382 "integer.m"
            MR_Integer mercury__integer__S_50;
#line 382 "integer.m"
            MR_Word mercury__integer__Digits0_51;
#line 382 "integer.m"
            MR_Word mercury__integer__Digits_52;
#line 382 "integer.m"
            MR_Integer mercury__integer__V_53_53;

#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_19_19 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_20_20);
            }
#line 444 "integer.m"
            mercury__integer__S_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 0)));
#line 444 "integer.m"
            mercury__integer__Digits0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 1)));
#line 444 "integer.m"
            mercury__integer__V_28_28 = ((MR_Integer) 0 - mercury__integer__S_25);
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_26, &mercury__integer__Digits_27);
            }
#line 444 "integer.m"
            {
#line 444 "integer.m"
              mercury__integer__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 0) = ((MR_Box) (mercury__integer__V_28_28));
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 1) = ((MR_Box) (mercury__integer__Digits_27));
#line 444 "integer.m"
            }
#line 1259 "integer.m"
            mercury__integer__V_31_31 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_30_30 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_31_31);
            }
#line 444 "integer.m"
            mercury__integer__S_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_30_30, (MR_Integer) 0)));
#line 444 "integer.m"
            mercury__integer__Digits0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_30_30, (MR_Integer) 1)));
#line 444 "integer.m"
            mercury__integer__V_39_39 = ((MR_Integer) 0 - mercury__integer__S_36);
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_37, &mercury__integer__Digits_38);
            }
#line 444 "integer.m"
            {
#line 444 "integer.m"
              mercury__integer__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 0) = ((MR_Box) (mercury__integer__V_39_39));
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 1) = ((MR_Box) (mercury__integer__Digits_38));
#line 444 "integer.m"
            }
#line 582 "integer.m"
            {
#line 582 "integer.m"
              mercury__integer__V_42_42 = mercury__integer__or_pairs_2_f_0(mercury__integer__V_8_8, mercury__integer__V_9_9);
            }
#line 582 "integer.m"
            {
#line 582 "integer.m"
              mercury__integer__V_7_7 = mercury__integer__decap_1_f_0(mercury__integer__V_42_42);
            }
#line 1259 "integer.m"
            mercury__integer__V_45_45 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_44_44 = mercury__integer__big_plus_2_f_0(mercury__integer__V_7_7, mercury__integer__V_45_45);
            }
#line 444 "integer.m"
            mercury__integer__S_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_44_44, (MR_Integer) 0)));
#line 444 "integer.m"
            mercury__integer__Digits0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_44_44, (MR_Integer) 1)));
#line 444 "integer.m"
            mercury__integer__V_53_53 = ((MR_Integer) 0 - mercury__integer__S_50);
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_51, &mercury__integer__Digits_52);
            }
#line 444 "integer.m"
            {
#line 444 "integer.m"
              mercury__integer__Result_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 0) = ((MR_Box) (mercury__integer__V_53_53));
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 1) = ((MR_Box) (mercury__integer__Digits_52));
#line 444 "integer.m"
            }
#line 382 "integer.m"
          }
#line 383 "integer.m"
        else
#line 384 "integer.m"
          {
#line 384 "integer.m"
            MR_Word mercury__integer__V_10_10;
#line 384 "integer.m"
            MR_Word mercury__integer__V_55_55;
#line 384 "integer.m"
            MR_Word mercury__integer__V_56_56 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 384 "integer.m"
            MR_Integer mercury__integer__S_61;
#line 384 "integer.m"
            MR_Word mercury__integer__Digits0_62;
#line 384 "integer.m"
            MR_Word mercury__integer__Digits_63;
#line 384 "integer.m"
            MR_Integer mercury__integer__V_64_64;
#line 384 "integer.m"
            MR_Word mercury__integer__V_67_67;

#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_55_55 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_56_56);
            }
#line 444 "integer.m"
            mercury__integer__S_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_55_55, (MR_Integer) 0)));
#line 444 "integer.m"
            mercury__integer__Digits0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_55_55, (MR_Integer) 1)));
#line 444 "integer.m"
            mercury__integer__V_64_64 = ((MR_Integer) 0 - mercury__integer__S_61);
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_62, &mercury__integer__Digits_63);
            }
#line 444 "integer.m"
            {
#line 444 "integer.m"
              mercury__integer__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, 0) = ((MR_Box) (mercury__integer__V_64_64));
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, 1) = ((MR_Box) (mercury__integer__Digits_63));
#line 444 "integer.m"
            }
#line 658 "integer.m"
            {
#line 658 "integer.m"
              mercury__integer__V_67_67 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__Y_5, mercury__integer__V_10_10);
            }
#line 658 "integer.m"
            {
#line 658 "integer.m"
              return mercury__integer__Result_6 = mercury__integer__decap_1_f_0(mercury__integer__V_67_67);
            }
#line 384 "integer.m"
          }
#line 383 "integer.m"
      }
#line 386 "integer.m"
    else
#line 388 "integer.m"
      {
#line 439 "integer.m"
        MR_Integer mercury__integer__Sign_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 439 "integer.m"
        MR_Word mercury__integer__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 440 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_68 < (MR_Integer) 0);
#line 388 "integer.m"
        if (mercury__integer__succeeded)
#line 387 "integer.m"
          {
#line 387 "integer.m"
            MR_Word mercury__integer__V_11_11;
#line 387 "integer.m"
            MR_Word mercury__integer__V_72_72;
#line 387 "integer.m"
            MR_Word mercury__integer__V_73_73 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 387 "integer.m"
            MR_Integer mercury__integer__S_78;
#line 387 "integer.m"
            MR_Word mercury__integer__Digits0_79;
#line 387 "integer.m"
            MR_Word mercury__integer__Digits_80;
#line 387 "integer.m"
            MR_Integer mercury__integer__V_81_81;
#line 387 "integer.m"
            MR_Word mercury__integer__V_84_84;

#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_72_72 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_73_73);
            }
#line 444 "integer.m"
            mercury__integer__S_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_72_72, (MR_Integer) 0)));
#line 444 "integer.m"
            mercury__integer__Digits0_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_72_72, (MR_Integer) 1)));
#line 444 "integer.m"
            mercury__integer__V_81_81 = ((MR_Integer) 0 - mercury__integer__S_78);
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_79, &mercury__integer__Digits_80);
            }
#line 444 "integer.m"
            {
#line 444 "integer.m"
              mercury__integer__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 0) = ((MR_Box) (mercury__integer__V_81_81));
#line 444 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 1) = ((MR_Box) (mercury__integer__Digits_80));
#line 444 "integer.m"
            }
#line 658 "integer.m"
            {
#line 658 "integer.m"
              mercury__integer__V_84_84 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__X_4, mercury__integer__V_11_11);
            }
#line 658 "integer.m"
            {
#line 658 "integer.m"
              return mercury__integer__Result_6 = mercury__integer__decap_1_f_0(mercury__integer__V_84_84);
            }
#line 387 "integer.m"
          }
#line 388 "integer.m"
        else
#line 633 "integer.m"
          {
#line 633 "integer.m"
            MR_Word mercury__integer__V_87_87;

#line 633 "integer.m"
            {
#line 633 "integer.m"
              mercury__integer__V_87_87 = mercury__integer__and_pairs_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
            }
#line 633 "integer.m"
            {
#line 633 "integer.m"
              return mercury__integer__Result_6 = mercury__integer__decap_1_f_0(mercury__integer__V_87_87);
            }
#line 633 "integer.m"
          }
#line 388 "integer.m"
      }
#line 386 "integer.m"
    return mercury__integer__Result_6;
#line 386 "integer.m"
  }
#line 152 "integer.m"
}

#line 148 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_62_62_2_f_0(
#line 148 "integer.m"
  MR_Word mercury__integer__X_4,
#line 148 "integer.m"
  MR_Integer mercury__integer__I_5)
#line 148 "integer.m"
{
#line 373 "integer.m"
  {
#line 373 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__I_5 < (MR_Integer) 0);
#line 373 "integer.m"
    MR_Word mercury__integer__Result_6;

#line 373 "integer.m"
    if (mercury__integer__succeeded)
#line 372 "integer.m"
      {
#line 372 "integer.m"
        MR_Integer mercury__integer__V_8_8 = ((MR_Integer) 0 - mercury__integer__I_5);

#line 372 "integer.m"
        {
#line 372 "integer.m"
          return mercury__integer__Result_6 = mercury__integer__f_60_60_2_f_0(mercury__integer__X_4, mercury__integer__V_8_8);
        }
#line 372 "integer.m"
      }
#line 373 "integer.m"
    else
#line 375 "integer.m"
      {
#line 373 "integer.m"
        mercury__integer__succeeded = (mercury__integer__I_5 > (MR_Integer) 0);
#line 375 "integer.m"
        if (mercury__integer__succeeded)
#line 498 "integer.m"
          {
#line 1248 "integer.m"
            MR_Integer mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 1248 "integer.m"
            MR_Word mercury__integer__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 1248 "integer.m"
            mercury__integer__succeeded = (mercury__integer__V_15_15 == (MR_Integer) 0);
#line 1248 "integer.m"
            if (mercury__integer__succeeded)
#line 1248 "integer.m"
              mercury__integer__succeeded = (mercury__integer__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 498 "integer.m"
            if (mercury__integer__succeeded)
#line 497 "integer.m"
              mercury__integer__Result_6 = mercury__integer__X_4;
#line 498 "integer.m"
            else
#line 500 "integer.m"
              {
#line 439 "integer.m"
                MR_Integer mercury__integer__Sign_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 439 "integer.m"
                MR_Word mercury__integer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 440 "integer.m"
                mercury__integer__succeeded = (mercury__integer__Sign_17 < (MR_Integer) 0);
#line 500 "integer.m"
                if (mercury__integer__succeeded)
#line 499 "integer.m"
                  {
#line 499 "integer.m"
                    MR_Word mercury__integer__V_13_13;
#line 499 "integer.m"
                    MR_Word mercury__integer__V_21_21;
#line 499 "integer.m"
                    MR_Word mercury__integer__V_22_22 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 499 "integer.m"
                    MR_Integer mercury__integer__S_27;
#line 499 "integer.m"
                    MR_Word mercury__integer__Digits0_28;
#line 499 "integer.m"
                    MR_Integer mercury__integer__Len_33;
#line 499 "integer.m"
                    MR_Word mercury__integer__Digits_34;
#line 499 "integer.m"
                    MR_Integer mercury__integer__Div_35;
#line 499 "integer.m"
                    MR_Word mercury__integer__V_53_53;
#line 499 "integer.m"
                    MR_Word mercury__integer__V_54_54;
#line 499 "integer.m"
                    MR_Integer mercury__integer__S_59;
#line 499 "integer.m"
                    MR_Word mercury__integer__Digits0_60;
#line 499 "integer.m"
                    MR_Word mercury__integer__Digits_61;
#line 499 "integer.m"
                    MR_Integer mercury__integer__V_62_62;

#line 418 "integer.m"
                    {
#line 418 "integer.m"
                      mercury__integer__V_21_21 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_22_22);
                    }
#line 444 "integer.m"
                    mercury__integer__S_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_21_21, (MR_Integer) 0)));
#line 444 "integer.m"
                    mercury__integer__Digits0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_21_21, (MR_Integer) 1)));
#line 444 "integer.m"
                    mercury__integer__Len_33 = ((MR_Integer) 0 - mercury__integer__S_27);
#line 445 "integer.m"
                    {
#line 445 "integer.m"
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_28, &mercury__integer__Digits_34);
                    }
#line 507 "integer.m"
                    {
#line 507 "integer.m"
                      mercury__integer__Div_35 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
                    }
#line 508 "integer.m"
                    mercury__integer__succeeded = (mercury__integer__Div_35 < mercury__integer__Len_33);
#line 512 "integer.m"
                    if (mercury__integer__succeeded)
#line 509 "integer.m"
                      {
#line 509 "integer.m"
                        MR_Integer mercury__integer__Mod_36;
#line 509 "integer.m"
                        MR_Word mercury__integer__V_39_39;
#line 509 "integer.m"
                        MR_Integer mercury__integer__V_40_40;
#line 509 "integer.m"
                        MR_Word mercury__integer__V_42_42;
#line 509 "integer.m"
                        MR_Integer mercury__integer__V_43_43;
#line 509 "integer.m"
                        MR_Integer mercury__integer__V_6_48;
#line 509 "integer.m"
                        MR_Integer mercury__integer__V_7_49;

#line 270 "int.opt"
                        {
#line 270 "int.opt"
                          mercury__integer__V_7_49 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
                        }
#line 269 "int.opt"
                        mercury__integer__V_6_48 = (mercury__integer__V_7_49 * (MR_Integer) 14);
#line 268 "int.opt"
                        mercury__integer__Mod_36 = (mercury__integer__I_5 - mercury__integer__V_6_48);
#line 510 "integer.m"
                        mercury__integer__V_40_40 = ((MR_Integer) 14 - mercury__integer__Mod_36);
#line 511 "integer.m"
                        mercury__integer__V_43_43 = (mercury__integer__Len_33 - mercury__integer__Div_35);
#line 511 "integer.m"
                        {
#line 511 "integer.m"
                          mercury__integer__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 511 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_42_42, 0) = ((MR_Box) (mercury__integer__V_43_43));
#line 511 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_42_42, 1) = ((MR_Box) (mercury__integer__Digits_34));
#line 511 "integer.m"
                        }
#line 510 "integer.m"
                        {
#line 510 "integer.m"
                          mercury__integer__V_39_39 = mercury__integer__rightshift_4_f_0(mercury__integer__Mod_36, mercury__integer__V_40_40, mercury__integer__V_42_42, (MR_Integer) 0);
                        }
#line 510 "integer.m"
                        {
#line 510 "integer.m"
                          mercury__integer__V_13_13 = mercury__integer__decap_1_f_0(mercury__integer__V_39_39);
                        }
#line 509 "integer.m"
                      }
#line 512 "integer.m"
                    else
#line 1257 "integer.m"
                      {
#line 1257 "integer.m"
                        MR_Word mercury__integer__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1257 "integer.m"
                        mercury__integer__V_13_13 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1257 "integer.m"
                      }
#line 1259 "integer.m"
                    mercury__integer__V_54_54 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 418 "integer.m"
                    {
#line 418 "integer.m"
                      mercury__integer__V_53_53 = mercury__integer__big_plus_2_f_0(mercury__integer__V_13_13, mercury__integer__V_54_54);
                    }
#line 444 "integer.m"
                    mercury__integer__S_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_53_53, (MR_Integer) 0)));
#line 444 "integer.m"
                    mercury__integer__Digits0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_53_53, (MR_Integer) 1)));
#line 444 "integer.m"
                    mercury__integer__V_62_62 = ((MR_Integer) 0 - mercury__integer__S_59);
#line 445 "integer.m"
                    {
#line 445 "integer.m"
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_60, &mercury__integer__Digits_61);
                    }
#line 444 "integer.m"
                    {
#line 444 "integer.m"
                      mercury__integer__Result_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 0) = ((MR_Box) (mercury__integer__V_62_62));
#line 444 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 1) = ((MR_Box) (mercury__integer__Digits_61));
#line 444 "integer.m"
                    }
#line 499 "integer.m"
                  }
#line 500 "integer.m"
                else
#line 506 "integer.m"
                  {
#line 506 "integer.m"
                    MR_Integer mercury__integer__Len_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 506 "integer.m"
                    MR_Word mercury__integer__Digits_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));
#line 506 "integer.m"
                    MR_Integer mercury__integer__Div_67;

#line 507 "integer.m"
                    {
#line 507 "integer.m"
                      mercury__integer__Div_67 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
                    }
#line 508 "integer.m"
                    mercury__integer__succeeded = (mercury__integer__Div_67 < mercury__integer__Len_65);
#line 512 "integer.m"
                    if (mercury__integer__succeeded)
#line 509 "integer.m"
                      {
#line 509 "integer.m"
                        MR_Integer mercury__integer__Mod_68;
#line 509 "integer.m"
                        MR_Word mercury__integer__V_71_71;
#line 509 "integer.m"
                        MR_Integer mercury__integer__V_72_72;
#line 509 "integer.m"
                        MR_Word mercury__integer__V_74_74;
#line 509 "integer.m"
                        MR_Integer mercury__integer__V_75_75;
#line 509 "integer.m"
                        MR_Integer mercury__integer__V_6_80;
#line 509 "integer.m"
                        MR_Integer mercury__integer__V_7_81;

#line 270 "int.opt"
                        {
#line 270 "int.opt"
                          mercury__integer__V_7_81 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
                        }
#line 269 "int.opt"
                        mercury__integer__V_6_80 = (mercury__integer__V_7_81 * (MR_Integer) 14);
#line 268 "int.opt"
                        mercury__integer__Mod_68 = (mercury__integer__I_5 - mercury__integer__V_6_80);
#line 510 "integer.m"
                        mercury__integer__V_72_72 = ((MR_Integer) 14 - mercury__integer__Mod_68);
#line 511 "integer.m"
                        mercury__integer__V_75_75 = (mercury__integer__Len_65 - mercury__integer__Div_67);
#line 511 "integer.m"
                        {
#line 511 "integer.m"
                          mercury__integer__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 511 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_74_74, 0) = ((MR_Box) (mercury__integer__V_75_75));
#line 511 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_74_74, 1) = ((MR_Box) (mercury__integer__Digits_66));
#line 511 "integer.m"
                        }
#line 510 "integer.m"
                        {
#line 510 "integer.m"
                          mercury__integer__V_71_71 = mercury__integer__rightshift_4_f_0(mercury__integer__Mod_68, mercury__integer__V_72_72, mercury__integer__V_74_74, (MR_Integer) 0);
                        }
#line 510 "integer.m"
                        {
#line 510 "integer.m"
                          return mercury__integer__Result_6 = mercury__integer__decap_1_f_0(mercury__integer__V_71_71);
                        }
#line 509 "integer.m"
                      }
#line 512 "integer.m"
                    else
#line 1257 "integer.m"
                      {
#line 1257 "integer.m"
                        MR_Word mercury__integer__V_83_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1257 "integer.m"
                        mercury__integer__Result_6 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1257 "integer.m"
                      }
#line 506 "integer.m"
                  }
#line 500 "integer.m"
              }
#line 498 "integer.m"
          }
#line 375 "integer.m"
        else
#line 376 "integer.m"
          mercury__integer__Result_6 = mercury__integer__X_4;
#line 375 "integer.m"
      }
#line 373 "integer.m"
    return mercury__integer__Result_6;
#line 373 "integer.m"
  }
#line 148 "integer.m"
}

#line 143 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_60_60_2_f_0(
#line 143 "integer.m"
  MR_Word mercury__integer__X_4,
#line 143 "integer.m"
  MR_Integer mercury__integer__I_5)
#line 143 "integer.m"
{
#line 364 "integer.m"
  {
#line 364 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__I_5 > (MR_Integer) 0);
#line 364 "integer.m"
    MR_Word mercury__integer__Result_6;

#line 364 "integer.m"
    if (mercury__integer__succeeded)
#line 363 "integer.m"
      {
#line 363 "integer.m"
        return mercury__integer__Result_6 = mercury__integer__big_left_shift_2_f_0(mercury__integer__X_4, mercury__integer__I_5);
      }
#line 364 "integer.m"
    else
#line 366 "integer.m"
      {
#line 364 "integer.m"
        mercury__integer__succeeded = (mercury__integer__I_5 < (MR_Integer) 0);
#line 366 "integer.m"
        if (mercury__integer__succeeded)
#line 365 "integer.m"
          {
#line 365 "integer.m"
            MR_Integer mercury__integer__V_9_9 = ((MR_Integer) 0 - mercury__integer__I_5);

#line 365 "integer.m"
            {
#line 365 "integer.m"
              return mercury__integer__Result_6 = mercury__integer__f_62_62_2_f_0(mercury__integer__X_4, mercury__integer__V_9_9);
            }
#line 365 "integer.m"
          }
#line 366 "integer.m"
        else
#line 367 "integer.m"
          mercury__integer__Result_6 = mercury__integer__X_4;
#line 366 "integer.m"
      }
#line 364 "integer.m"
    return mercury__integer__Result_6;
#line 364 "integer.m"
  }
#line 143 "integer.m"
}

#line 137 "integer.m"
void MR_CALL 
mercury__integer__divide_with_rem_4_p_0(
#line 137 "integer.m"
  MR_Word mercury__integer__X_5,
#line 137 "integer.m"
  MR_Word mercury__integer__Y_6,
#line 137 "integer.m"
  MR_Word * mercury__integer__Quotient_7,
#line 137 "integer.m"
  MR_Word * mercury__integer__Remainder_8)
#line 137 "integer.m"
{
#line 359 "integer.m"
  {
#line 359 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 359 "integer.m"
    {
#line 359 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_5, mercury__integer__Y_6, mercury__integer__Quotient_7, mercury__integer__Remainder_8);
#line 359 "integer.m"
      return;
    }
#line 359 "integer.m"
  }
#line 137 "integer.m"
}

#line 132 "integer.m"
MR_Word MR_CALL 
mercury__integer__mod_2_f_0(
#line 132 "integer.m"
  MR_Word mercury__integer__X_4,
#line 132 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 132 "integer.m"
{
#line 356 "integer.m"
  {
#line 356 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 356 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 356 "integer.m"
    {
#line 356 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__big_mod_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
#line 356 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 356 "integer.m"
  }
#line 132 "integer.m"
}

#line 127 "integer.m"
MR_Word MR_CALL 
mercury__integer__rem_2_f_0(
#line 127 "integer.m"
  MR_Word mercury__integer__X_4,
#line 127 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 127 "integer.m"
{
#line 471 "integer.m"
  {
#line 471 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 471 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 471 "integer.m"
    MR_Word mercury__integer___Quot_9;

#line 471 "integer.m"
    {
#line 471 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer___Quot_9, &mercury__integer__HeadVar__3_3);
    }
#line 471 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 471 "integer.m"
  }
#line 127 "integer.m"
}

#line 122 "integer.m"
MR_Word MR_CALL 
mercury__integer__div_2_f_0(
#line 122 "integer.m"
  MR_Word mercury__integer__X_4,
#line 122 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 122 "integer.m"
{
#line 350 "integer.m"
  {
#line 350 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 350 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 350 "integer.m"
    {
#line 350 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__big_div_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
#line 350 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 350 "integer.m"
  }
#line 122 "integer.m"
}

#line 117 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_47_47_2_f_0(
#line 117 "integer.m"
  MR_Word mercury__integer__X_4,
#line 117 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 117 "integer.m"
{
#line 466 "integer.m"
  {
#line 466 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 466 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 466 "integer.m"
    MR_Word mercury__integer___Rem_9;

#line 466 "integer.m"
    {
#line 466 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer__HeadVar__3_3, &mercury__integer___Rem_9);
    }
#line 466 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 466 "integer.m"
  }
#line 117 "integer.m"
}

#line 112 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_times_2_f_0(
#line 112 "integer.m"
  MR_Word mercury__integer__X_4,
#line 112 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 112 "integer.m"
{
#line 348 "integer.m"
  {
#line 348 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 348 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 348 "integer.m"
    {
#line 348 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__big_mul_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
#line 348 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 348 "integer.m"
  }
#line 112 "integer.m"
}

#line 108 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_minus_2_f_0(
#line 108 "integer.m"
  MR_Word mercury__integer__X_4,
#line 108 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 108 "integer.m"
{
#line 346 "integer.m"
  {
#line 346 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 346 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 346 "integer.m"
    MR_Word mercury__integer__V_6_6;
#line 346 "integer.m"
    MR_Integer mercury__integer__S_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 346 "integer.m"
    MR_Word mercury__integer__Digits0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
#line 346 "integer.m"
    MR_Word mercury__integer__Digits_9;
#line 346 "integer.m"
    MR_Integer mercury__integer__V_10_10 = ((MR_Integer) 0 - mercury__integer__S_7);

#line 445 "integer.m"
    {
#line 445 "integer.m"
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_8, &mercury__integer__Digits_9);
    }
#line 444 "integer.m"
    {
#line 444 "integer.m"
      mercury__integer__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 0) = ((MR_Box) (mercury__integer__V_10_10));
#line 444 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 1) = ((MR_Box) (mercury__integer__Digits_9));
#line 444 "integer.m"
    }
#line 346 "integer.m"
    {
#line 346 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_6_6);
    }
#line 346 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 346 "integer.m"
  }
#line 108 "integer.m"
}

#line 104 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_plus_2_f_0(
#line 104 "integer.m"
  MR_Word mercury__integer__X_4,
#line 104 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 104 "integer.m"
{
#line 344 "integer.m"
  {
#line 344 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 344 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 344 "integer.m"
    {
#line 344 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
#line 344 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 344 "integer.m"
  }
#line 104 "integer.m"
}

#line 100 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_minus_1_f_0(
#line 100 "integer.m"
  MR_Word mercury__integer__X_3)
#line 100 "integer.m"
{
#line 444 "integer.m"
  {
#line 444 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 444 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;
#line 444 "integer.m"
    MR_Integer mercury__integer__S_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_3, (MR_Integer) 0)));
#line 444 "integer.m"
    MR_Word mercury__integer__Digits0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_3, (MR_Integer) 1)));
#line 444 "integer.m"
    MR_Word mercury__integer__Digits_6;
#line 444 "integer.m"
    MR_Integer mercury__integer__V_7_7 = ((MR_Integer) 0 - mercury__integer__S_4);

#line 445 "integer.m"
    {
#line 445 "integer.m"
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_5, &mercury__integer__Digits_6);
    }
#line 444 "integer.m"
    {
#line 444 "integer.m"
      mercury__integer__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__V_7_7));
#line 444 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__Digits_6));
#line 444 "integer.m"
    }
#line 444 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 444 "integer.m"
  }
#line 100 "integer.m"
}

#line 96 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_plus_1_f_0(
#line 96 "integer.m"
  MR_Word mercury__integer__X_3)
#line 96 "integer.m"
{
#line 340 "integer.m"
  {
#line 340 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 340 "integer.m"
    MR_Word mercury__integer__X_2 = mercury__integer__X_3;

#line 340 "integer.m"
    return mercury__integer__X_2;
#line 340 "integer.m"
  }
#line 96 "integer.m"
}

#line 92 "integer.m"
MR_Word MR_CALL 
mercury__integer__det_from_base_string_2_f_0(
#line 92 "integer.m"
  MR_Integer mercury__integer__Base_4,
#line 92 "integer.m"
  MR_String mercury__integer__String_5)
#line 92 "integer.m"
{
#line 1533 "integer.m"
  {
#line 1533 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1533 "integer.m"
    MR_Word mercury__integer__Integer_6;
#line 1533 "integer.m"
    MR_Word mercury__integer__IntegerPrime_7;

#line 1531 "integer.m"
    {
#line 1531 "integer.m"
      mercury__integer__succeeded = mercury__integer__from_base_string_3_p_0(mercury__integer__Base_4, mercury__integer__String_5, &mercury__integer__IntegerPrime_7);
    }
#line 1533 "integer.m"
    if (mercury__integer__succeeded)
#line 1532 "integer.m"
      mercury__integer__Integer_6 = mercury__integer__IntegerPrime_7;
#line 1533 "integer.m"
    else
#line 1534 "integer.m"
      {
#line 1534 "integer.m"
        {
#line 1534 "integer.m"
          mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_from_base_string\'/2", (MR_String) "conversion failed");
        }
#line 1534 "integer.m"
      }
#line 1533 "integer.m"
    return mercury__integer__Integer_6;
#line 1533 "integer.m"
  }
#line 92 "integer.m"
}

#line 87 "integer.m"
MR_bool MR_CALL 
mercury__integer__from_base_string_2_f_0(
#line 87 "integer.m"
  MR_Integer mercury__integer__Base_4,
#line 87 "integer.m"
  MR_String mercury__integer__String_5,
#line 87 "integer.m"
  MR_Word * mercury__integer__Integer_6)
#line 87 "integer.m"
{
#line 1503 "integer.m"
  {
#line 1503 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 1503 "integer.m"
    {
#line 1503 "integer.m"
      return mercury__integer__succeeded = mercury__integer__from_base_string_3_p_0(mercury__integer__Base_4, mercury__integer__String_5, mercury__integer__Integer_6);
    }
#line 1503 "integer.m"
    return mercury__integer__succeeded;
#line 1503 "integer.m"
  }
#line 87 "integer.m"
}

#line 85 "integer.m"
MR_bool MR_CALL 
mercury__integer__from_base_string_3_p_0(
#line 85 "integer.m"
  MR_Integer mercury__integer__Base_4,
#line 85 "integer.m"
  MR_String mercury__integer__String_5,
#line 85 "integer.m"
  MR_Word * mercury__integer__Integer_6)
#line 85 "integer.m"
{
#line 1505 "integer.m"
  {
#line 1505 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1505 "integer.m"
    MR_Char mercury__integer__Char_7;
#line 1505 "integer.m"
    MR_Integer mercury__integer__Len_8;
#line 1505 "integer.m"
    MR_Integer mercury__integer__V_7_37;

#line 701 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__String_5 ;
		{
#line 701 "string.opt"

    Length = strlen(Str);

#line 13826 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_7_37  = Length;
#line 701 "string.opt"
}
#line 525 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__integer__V_7_37 ;
		{
#line 525 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 13855 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 525 "string.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 1505 "integer.m"
    if (mercury__integer__succeeded)
#line 1505 "integer.m"
      {
#line 520 "string.opt"
        {
#line 520 "string.opt"
          mercury__string__unsafe_index_3_p_0(mercury__integer__String_5, (MR_Integer) 0, &mercury__integer__Char_7);
        }
#line 701 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__String_5 ;
		{
#line 701 "string.opt"

    Length = strlen(Str);

#line 13886 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__Len_8  = Length;
#line 701 "string.opt"
}
#line 1508 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Char_7 == (MR_Char) 45);
#line 1513 "integer.m"
        if (mercury__integer__succeeded)
#line 1509 "integer.m"
          {
#line 1509 "integer.m"
            MR_Word mercury__integer__PosInteger_9;
#line 1509 "integer.m"
            MR_Integer mercury__integer__V_13_13;
#line 1509 "integer.m"
            MR_Word mercury__integer__V_14_14;
#line 1509 "integer.m"
            MR_Integer mercury__integer__V_42_42;
#line 1509 "integer.m"
            MR_Word mercury__integer__V_43_43;
#line 1509 "integer.m"
            MR_Integer mercury__integer__V_12_50;
#line 1509 "integer.m"
            MR_Integer mercury__integer__V_13_52;
#line 1509 "integer.m"
            MR_Integer mercury__integer__V_17_53;
#line 1509 "integer.m"
            MR_Integer mercury__integer__S_70;
#line 1509 "integer.m"
            MR_Word mercury__integer__Digits0_71;
#line 1509 "integer.m"
            MR_Word mercury__integer__Digits_72;
#line 1509 "integer.m"
            MR_Integer mercury__integer__V_73_73;
#line 394 "string.opt"
            MR_Integer mercury__integer__V_16_51;

#line 1509 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Len_8 > (MR_Integer) 1);
#line 1509 "integer.m"
            if (mercury__integer__succeeded)
#line 1509 "integer.m"
              {
#line 1510 "integer.m"
                mercury__integer__V_13_13 = (MR_Integer) 1;
#line 1257 "integer.m"
                mercury__integer__V_42_42 = (MR_Integer) 0;
#line 1257 "integer.m"
                mercury__integer__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 394 "string.opt"
                mercury__integer__V_16_51 = (MR_Integer) 0;
#line 1257 "integer.m"
                mercury__integer__V_14_14 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 215 "int.opt"
                mercury__integer__V_12_50 = mercury__integer__V_13_13;
#line 701 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__String_5 ;
		{
#line 701 "string.opt"

    Length = strlen(Str);

#line 13957 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_17_53  = Length;
#line 701 "string.opt"
}
#line 240 "int.opt"
                mercury__integer__succeeded = (mercury__integer__Len_8 < mercury__integer__V_17_53);
#line 243 "int.opt"
                if (mercury__integer__succeeded)
#line 242 "int.opt"
                  mercury__integer__V_13_52 = mercury__integer__Len_8;
#line 243 "int.opt"
                else
#line 244 "int.opt"
                  mercury__integer__V_13_52 = mercury__integer__V_17_53;
#line 397 "string.opt"
                {
#line 397 "string.opt"
                  mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__Base_4, mercury__integer__String_5, mercury__integer__V_12_50, mercury__integer__V_13_52, mercury__integer__V_14_14, &mercury__integer__PosInteger_9);
                }
#line 1509 "integer.m"
                if (mercury__integer__succeeded)
#line 1509 "integer.m"
                  {
#line 444 "integer.m"
                    mercury__integer__S_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__PosInteger_9, (MR_Integer) 0)));
#line 444 "integer.m"
                    mercury__integer__Digits0_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__PosInteger_9, (MR_Integer) 1)));
#line 444 "integer.m"
                    mercury__integer__V_73_73 = ((MR_Integer) 0 - mercury__integer__S_70);
#line 445 "integer.m"
                    {
#line 445 "integer.m"
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_71, &mercury__integer__Digits_72);
                    }
#line 444 "integer.m"
                    {
#line 444 "integer.m"
                      MR_Word base;
#line 444 "integer.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "integer.m"
                      *mercury__integer__Integer_6 = base;
#line 444 "integer.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__integer__V_73_73));
#line 444 "integer.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__Digits_72));
#line 444 "integer.m"
                    }
#line 444 "integer.m"
                    mercury__integer__succeeded = MR_TRUE;
#line 1509 "integer.m"
                  }
#line 1509 "integer.m"
              }
#line 1509 "integer.m"
          }
#line 1513 "integer.m"
        else
#line 1517 "integer.m"
          {
#line 1513 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Char_7 == (MR_Char) 43);
#line 1517 "integer.m"
            if (mercury__integer__succeeded)
#line 1514 "integer.m"
              {
#line 1514 "integer.m"
                MR_Integer mercury__integer__V_17_17;
#line 1514 "integer.m"
                MR_Word mercury__integer__V_18_18;
#line 1514 "integer.m"
                MR_Integer mercury__integer__V_74_74;
#line 1514 "integer.m"
                MR_Word mercury__integer__V_75_75;

#line 1514 "integer.m"
                mercury__integer__succeeded = (mercury__integer__Len_8 > (MR_Integer) 1);
#line 1514 "integer.m"
                if (mercury__integer__succeeded)
#line 1514 "integer.m"
                  {
#line 1515 "integer.m"
                    mercury__integer__V_17_17 = (MR_Integer) 1;
#line 1257 "integer.m"
                    mercury__integer__V_74_74 = (MR_Integer) 0;
#line 1257 "integer.m"
                    mercury__integer__V_75_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1257 "integer.m"
                    mercury__integer__V_18_18 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1515 "integer.m"
                    {
#line 1515 "integer.m"
                      return mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__Base_4, mercury__integer__String_5, mercury__integer__V_17_17, mercury__integer__Len_8, mercury__integer__V_18_18, mercury__integer__Integer_6);
                    }
#line 1514 "integer.m"
                  }
#line 1514 "integer.m"
              }
#line 1517 "integer.m"
            else
#line 1518 "integer.m"
              {
#line 1518 "integer.m"
                MR_Word mercury__integer__V_21_21 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1518 "integer.m"
                MR_Word mercury__integer__V_77_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1518 "integer.m"
                {
#line 1518 "integer.m"
                  return mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__Base_4, mercury__integer__String_5, (MR_Integer) 0, mercury__integer__Len_8, mercury__integer__V_21_21, mercury__integer__Integer_6);
                }
#line 1518 "integer.m"
              }
#line 1517 "integer.m"
          }
#line 1505 "integer.m"
      }
#line 1505 "integer.m"
    return mercury__integer__succeeded;
#line 1505 "integer.m"
  }
#line 85 "integer.m"
}

#line 77 "integer.m"
MR_Word MR_CALL 
mercury__integer__det_from_string_1_f_0(
#line 77 "integer.m"
  MR_String mercury__integer__S_3)
#line 77 "integer.m"
{
#line 1280 "integer.m"
  {
#line 1280 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1280 "integer.m"
    MR_Word mercury__integer__I_4;
#line 1280 "integer.m"
    MR_Word mercury__integer__IPrime_5;
#line 1273 "integer.m"
    MR_Word mercury__integer__Cs_11;

#line 1274 "integer.m"
    {
#line 1274 "integer.m"
      mercury__string__to_char_list_2_p_0(mercury__integer__S_3, &mercury__integer__Cs_11);
    }
#line 1275 "integer.m"
    {
#line 1275 "integer.m"
      mercury__integer__succeeded = mercury__integer__string_to_integer_2_p_0(mercury__integer__Cs_11, &mercury__integer__IPrime_5);
    }
#line 1280 "integer.m"
    if (mercury__integer__succeeded)
#line 1279 "integer.m"
      mercury__integer__I_4 = mercury__integer__IPrime_5;
#line 1280 "integer.m"
    else
#line 1281 "integer.m"
      {
#line 1281 "integer.m"
        {
#line 1281 "integer.m"
          mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_from_string\'/1", (MR_String) "conversion failed");
        }
#line 1281 "integer.m"
      }
#line 1280 "integer.m"
    return mercury__integer__I_4;
#line 1280 "integer.m"
  }
#line 77 "integer.m"
}

#line 72 "integer.m"
MR_bool MR_CALL 
mercury__integer__from_string_1_f_0(
#line 72 "integer.m"
  MR_String mercury__integer__S_3,
#line 72 "integer.m"
  MR_Word * mercury__integer__Big_4)
#line 72 "integer.m"
{
#line 1273 "integer.m"
  {
#line 1273 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1273 "integer.m"
    MR_Word mercury__integer__Cs_7;

#line 1274 "integer.m"
    {
#line 1274 "integer.m"
      mercury__string__to_char_list_2_p_0(mercury__integer__S_3, &mercury__integer__Cs_7);
    }
#line 1275 "integer.m"
    {
#line 1275 "integer.m"
      return mercury__integer__succeeded = mercury__integer__string_to_integer_2_p_0(mercury__integer__Cs_7, mercury__integer__Big_4);
    }
#line 1273 "integer.m"
    return mercury__integer__succeeded;
#line 1273 "integer.m"
  }
#line 72 "integer.m"
}

#line 70 "integer.m"
MR_bool MR_CALL 
mercury__integer__from_string_2_p_0(
#line 70 "integer.m"
  MR_String mercury__integer__S_3,
#line 70 "integer.m"
  MR_Word * mercury__integer__Big_4)
#line 70 "integer.m"
{
#line 1273 "integer.m"
  {
#line 1273 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1273 "integer.m"
    MR_Word mercury__integer__Cs_5;

#line 1274 "integer.m"
    {
#line 1274 "integer.m"
      mercury__string__to_char_list_2_p_0(mercury__integer__S_3, &mercury__integer__Cs_5);
    }
#line 1275 "integer.m"
    {
#line 1275 "integer.m"
      return mercury__integer__succeeded = mercury__integer__string_to_integer_2_p_0(mercury__integer__Cs_5, mercury__integer__Big_4);
    }
#line 1273 "integer.m"
    return mercury__integer__succeeded;
#line 1273 "integer.m"
  }
#line 70 "integer.m"
}

#line 64 "integer.m"
MR_String MR_CALL 
mercury__integer__to_base_string_2_f_0(
#line 64 "integer.m"
  MR_Word mercury__integer__Integer_4,
#line 64 "integer.m"
  MR_Integer mercury__integer__Base_5)
#line 64 "integer.m"
{
#line 1325 "integer.m"
  {
#line 1325 "integer.m"
    MR_bool mercury__integer__succeeded = ((MR_Integer) 2 <= mercury__integer__Base_5);
#line 1325 "integer.m"
    MR_String mercury__integer__String_6;
#line 1325 "integer.m"
    MR_Word mercury__integer__PrintBase_7;
#line 1325 "integer.m"
    MR_Integer mercury__integer__Sign_8;
#line 1325 "integer.m"
    MR_Word mercury__integer__Digits_9;
#line 1325 "integer.m"
    MR_Integer mercury__integer__V_16_16;
#line 1326 "integer.m"
    MR_Integer mercury__integer__V_12_12;

#line 1326 "integer.m"
    if (mercury__integer__succeeded)
#line 1326 "integer.m"
      {
#line 1326 "integer.m"
        mercury__integer__V_12_12 = (MR_Integer) 36;
#line 1326 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Base_5 <= mercury__integer__V_12_12);
#line 1326 "integer.m"
      }
#line 1328 "integer.m"
    if (mercury__integer__succeeded)
#line 1327 "integer.m"
      {
#line 1327 "integer.m"
      }
#line 1328 "integer.m"
    else
#line 1329 "integer.m"
      {
#line 1329 "integer.m"
        {
#line 1329 "integer.m"
          mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.to_base_string\'/2", (MR_String) "invalid base");
        }
#line 1329 "integer.m"
      }
#line 281 "int.opt"
    {
#line 281 "int.opt"
      mercury__int__pow_3_p_0(mercury__integer__Base_5, (MR_Integer) 3, &mercury__integer__V_16_16);
    }
#line 1331 "integer.m"
    mercury__integer__PrintBase_7 = (MR_Word) mercury__integer__V_16_16;
#line 1332 "integer.m"
    mercury__integer__Sign_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, (MR_Integer) 0)));
#line 1332 "integer.m"
    mercury__integer__Digits_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, (MR_Integer) 1)));
#line 1333 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_8 < (MR_Integer) 0);
#line 1336 "integer.m"
    if (mercury__integer__succeeded)
#line 1334 "integer.m"
      {
#line 1334 "integer.m"
        MR_Word mercury__integer__AbsDigits_10;
#line 1334 "integer.m"
        MR_String mercury__integer__V_20_20;

#line 1334 "integer.m"
        {
#line 1334 "integer.m"
          mercury__integer__neg_list_2_p_0(mercury__integer__Digits_9, &mercury__integer__AbsDigits_10);
        }
#line 1342 "integer.m"
        if ((mercury__integer__AbsDigits_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1342 "integer.m"
          mercury__integer__V_20_20 = (MR_String) "0";
#line 1342 "integer.m"
        else
#line 1343 "integer.m"
          {
#line 1343 "integer.m"
            MR_Word mercury__integer__DigitsInPrintBase_33;
#line 1343 "integer.m"
            MR_Word mercury__integer__V_38_38;
#line 1343 "integer.m"
            MR_Word mercury__integer__V_39_39;
#line 1343 "integer.m"
            MR_Word mercury__integer__V_48_48 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1343 "integer.m"
            MR_Word mercury__integer__V_50_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1346 "integer.m"
            MR_Integer mercury__integer__V_32_32;

#line 1402 "integer.m"
            {
#line 1402 "integer.m"
              mercury__integer__V_38_38 = mercury__integer__printbase_pos_int_to_digits_2_3_f_0(mercury__integer__PrintBase_7, (MR_Integer) 16384, mercury__integer__V_48_48);
            }
#line 1361 "integer.m"
            {
#line 1361 "integer.m"
              mercury__integer__V_39_39 = mercury__integer__printbase_rep_1_4_f_0(mercury__integer__PrintBase_7, mercury__integer__AbsDigits_10, mercury__integer__V_38_38, mercury__integer__V_48_48);
            }
#line 1346 "integer.m"
            mercury__integer__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_39_39, (MR_Integer) 0)));
#line 1346 "integer.m"
            mercury__integer__DigitsInPrintBase_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_39_39, (MR_Integer) 1)));
#line 1352 "integer.m"
            if ((mercury__integer__DigitsInPrintBase_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1353 "integer.m"
              {
#line 1354 "integer.m"
                {
#line 1354 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.digits_to_string\'/3", (MR_String) "empty list");
                }
#line 1353 "integer.m"
              }
#line 1352 "integer.m"
            else
#line 1348 "integer.m"
              {
#line 1348 "integer.m"
                MR_Integer mercury__integer__Head_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__DigitsInPrintBase_33, (MR_Integer) 0)));
#line 1348 "integer.m"
                MR_Word mercury__integer__Tail_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__DigitsInPrintBase_33, (MR_Integer) 1)));
#line 1348 "integer.m"
                MR_String mercury__integer__HeadStr_36;
#line 1348 "integer.m"
                MR_Word mercury__integer__TailStrs_37;
#line 1348 "integer.m"
                MR_Word mercury__integer__V_44_44;
#line 1348 "integer.m"
                MR_Word mercury__integer__V_45_45;

#line 1349 "integer.m"
                {
#line 1349 "integer.m"
                  mercury__string__int_to_base_string_3_p_0(mercury__integer__Head_34, mercury__integer__Base_5, &mercury__integer__HeadStr_36);
                }
#line 1350 "integer.m"
                mercury__integer__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1350 "integer.m"
                {
#line 1350 "integer.m"
                  mercury__integer__digits_to_strings_4_p_0(mercury__integer__Base_5, mercury__integer__Tail_35, mercury__integer__V_44_44, &mercury__integer__TailStrs_37);
                }
#line 1351 "integer.m"
                {
#line 1351 "integer.m"
                  mercury__integer__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1351 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_45_45, 0) = ((MR_Box) (mercury__integer__HeadStr_36));
#line 1351 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_45_45, 1) = ((MR_Box) (mercury__integer__TailStrs_37));
#line 1351 "integer.m"
                }
#line 195 "string.opt"
                {
#line 195 "string.opt"
                  mercury__integer__V_20_20 = mercury__string__append_list_1_f_0(mercury__integer__V_45_45);
                }
#line 1348 "integer.m"
              }
#line 1343 "integer.m"
          }
#line 157 "string.opt"
        {
#line 157 "string.opt"
          mercury__string__append_3_p_2((MR_String) "-", mercury__integer__V_20_20, &mercury__integer__String_6);
        }
#line 1334 "integer.m"
      }
#line 1336 "integer.m"
    else
#line 1337 "integer.m"
      {
#line 1337 "integer.m"
        return mercury__integer__String_6 = mercury__integer__digits_to_string_3_f_0(mercury__integer__Base_5, mercury__integer__PrintBase_7, mercury__integer__Digits_9);
      }
#line 1325 "integer.m"
    return mercury__integer__String_6;
#line 1325 "integer.m"
  }
#line 64 "integer.m"
}

#line 55 "integer.m"
MR_String MR_CALL 
mercury__integer__to_string_1_f_0(
#line 55 "integer.m"
  MR_Word mercury__integer__Integer_3)
#line 55 "integer.m"
{
#line 1323 "integer.m"
  {
#line 1323 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1323 "integer.m"
    MR_String mercury__integer__HeadVar__2_2;

#line 1323 "integer.m"
    {
#line 1323 "integer.m"
      return mercury__integer__HeadVar__2_2 = mercury__integer__to_base_string_2_f_0(mercury__integer__Integer_3, (MR_Integer) 10);
    }
#line 1323 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 1323 "integer.m"
  }
#line 55 "integer.m"
}

#line 51 "integer.m"
MR_Word MR_CALL 
mercury__integer__integer_1_f_0(
#line 51 "integer.m"
  MR_Integer mercury__integer__N_3)
#line 51 "integer.m"
{
#line 726 "integer.m"
  {
#line 726 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 726 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;

#line 726 "integer.m"
    {
#line 726 "integer.m"
      return mercury__integer__HeadVar__2_2 = mercury__integer__int_to_integer_1_f_0(mercury__integer__N_3);
    }
#line 726 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 726 "integer.m"
  }
#line 51 "integer.m"
}

#line 47 "integer.m"
MR_bool MR_CALL 
mercury__integer__f_greater_or_equal_2_p_0(
#line 47 "integer.m"
  MR_Word mercury__integer__X_3,
#line 47 "integer.m"
  MR_Word mercury__integer__Y_4)
#line 47 "integer.m"
{
#line 336 "integer.m"
  {
#line 336 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 336 "integer.m"
    MR_Word mercury__integer__C_5;

#line 690 "integer.m"
    {
#line 690 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__X_3, mercury__integer__Y_4);
    }
#line 338 "integer.m"
#line 338 "integer.m"
    switch (mercury__integer__C_5) {
#line 338 "integer.m"
      default:
#line 338 "integer.m"
        mercury__integer__succeeded = MR_FALSE;
#line 338 "integer.m"
        break;
#line 338 "integer.m"
      case (MR_Integer) 0:
#line 338 "integer.m"
        mercury__integer__succeeded = MR_TRUE;
#line 338 "integer.m"
        break;
#line 338 "integer.m"
      case (MR_Integer) 2:
#line 338 "integer.m"
        mercury__integer__succeeded = MR_TRUE;
#line 338 "integer.m"
        break;
#line 338 "integer.m"
    }
#line 336 "integer.m"
    return mercury__integer__succeeded;
#line 336 "integer.m"
  }
#line 47 "integer.m"
}

#line 43 "integer.m"
MR_bool MR_CALL 
mercury__integer__f_less_or_equal_2_p_0(
#line 43 "integer.m"
  MR_Word mercury__integer__X_3,
#line 43 "integer.m"
  MR_Word mercury__integer__Y_4)
#line 43 "integer.m"
{
#line 332 "integer.m"
  {
#line 332 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 332 "integer.m"
    MR_Word mercury__integer__C_5;

#line 690 "integer.m"
    {
#line 690 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__X_3, mercury__integer__Y_4);
    }
#line 334 "integer.m"
#line 334 "integer.m"
    switch (mercury__integer__C_5) {
#line 334 "integer.m"
      default:
#line 334 "integer.m"
        mercury__integer__succeeded = MR_FALSE;
#line 334 "integer.m"
        break;
#line 334 "integer.m"
      case (MR_Integer) 1:
#line 334 "integer.m"
        mercury__integer__succeeded = MR_TRUE;
#line 334 "integer.m"
        break;
#line 334 "integer.m"
      case (MR_Integer) 0:
#line 334 "integer.m"
        mercury__integer__succeeded = MR_TRUE;
#line 334 "integer.m"
        break;
#line 334 "integer.m"
    }
#line 332 "integer.m"
    return mercury__integer__succeeded;
#line 332 "integer.m"
  }
#line 43 "integer.m"
}

#line 39 "integer.m"
MR_bool MR_CALL 
mercury__integer__f_greater_than_2_p_0(
#line 39 "integer.m"
  MR_Word mercury__integer__X_3,
#line 39 "integer.m"
  MR_Word mercury__integer__Y_4)
#line 39 "integer.m"
{
#line 328 "integer.m"
  {
#line 328 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 328 "integer.m"
    MR_Word mercury__integer__C_5;

#line 690 "integer.m"
    {
#line 690 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__X_3, mercury__integer__Y_4);
    }
#line 330 "integer.m"
    mercury__integer__succeeded = (mercury__integer__C_5 == (MR_Integer) 2);
#line 328 "integer.m"
    return mercury__integer__succeeded;
#line 328 "integer.m"
  }
#line 39 "integer.m"
}

#line 35 "integer.m"
MR_bool MR_CALL 
mercury__integer__f_less_than_2_p_0(
#line 35 "integer.m"
  MR_Word mercury__integer__X_3,
#line 35 "integer.m"
  MR_Word mercury__integer__Y_4)
#line 35 "integer.m"
{
#line 324 "integer.m"
  {
#line 324 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 324 "integer.m"
    MR_Word mercury__integer__C_5;

#line 690 "integer.m"
    {
#line 690 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__X_3, mercury__integer__Y_4);
    }
#line 326 "integer.m"
    mercury__integer__succeeded = (mercury__integer__C_5 == (MR_Integer) 1);
#line 324 "integer.m"
    return mercury__integer__succeeded;
#line 324 "integer.m"
  }
#line 35 "integer.m"
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
