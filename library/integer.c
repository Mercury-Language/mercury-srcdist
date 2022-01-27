/*
** Automatically generated from `integer.m'
** by the Mercury compiler,
** version rotd-2014-12-08
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
#include "char.mih"
#include "construct.mih"
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




#line 90 "integer.c"
static const MR_FA_TypeInfo_Struct1 mercury__integer__list__ti_list_1builtin__type_ctor_info_int_0;

#line 93 "integer.c"
static const MR_PseudoTypeInfo mercury__integer__integer__field_types_integer_0_0[2];

#line 96 "integer.c"
static const MR_DuFunctorDesc mercury__integer__integer__du_functor_desc_integer_0_0;

#line 99 "integer.c"
static const MR_DuFunctorDescPtr mercury__integer__integer__du_stag_ordered_integer_0_0[1];

#line 102 "integer.c"
static const MR_DuPtagLayout mercury__integer__integer__du_ptag_ordered_integer_0[1];

#line 105 "integer.c"
static const MR_DuFunctorDescPtr mercury__integer__integer__du_name_ordered_integer_0[1];

#line 108 "integer.c"
static const MR_Integer mercury__integer__integer__functor_number_map_integer_0[1];

#line 111 "integer.c"
static MR_bool MR_CALL 
mercury__integer____Unify____digit_0_0_10001(
#line 114 "integer.c"
  MR_Box mercury__integer__wrapper_arg_1,
#line 116 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2);

#line 119 "integer.c"
static void MR_CALL 
mercury__integer____Compare____digit_0_0_10001(
#line 122 "integer.c"
  MR_Box * mercury__integer__wrapper_arg_1,
#line 124 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2,
#line 126 "integer.c"
  MR_Box mercury__integer__wrapper_arg_3);

#line 129 "integer.c"
static MR_bool MR_CALL 
mercury__integer____Unify____integer_0_0_10001(
#line 132 "integer.c"
  MR_Box mercury__integer__wrapper_arg_1,
#line 134 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2);

#line 137 "integer.c"
static void MR_CALL 
mercury__integer____Compare____integer_0_0_10001(
#line 140 "integer.c"
  MR_Box * mercury__integer__wrapper_arg_1,
#line 142 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2,
#line 144 "integer.c"
  MR_Box mercury__integer__wrapper_arg_3);

#line 147 "integer.c"
static MR_bool MR_CALL 
mercury__integer____Unify____sign_0_0_10001(
#line 150 "integer.c"
  MR_Box mercury__integer__wrapper_arg_1,
#line 152 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2);

#line 155 "integer.c"
static void MR_CALL 
mercury__integer____Compare____sign_0_0_10001(
#line 158 "integer.c"
  MR_Box * mercury__integer__wrapper_arg_1,
#line 160 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2,
#line 162 "integer.c"
  MR_Box mercury__integer__wrapper_arg_3);

#line 110 "string.opt"
static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0(
#line 110 "string.opt"
  MR_Integer mercury__integer__V_17_17,
#line 110 "string.opt"
  MR_String mercury__integer__String_8_8,
#line 110 "string.opt"
  MR_Integer mercury__integer__I_9_9,
#line 110 "string.opt"
  MR_Integer mercury__integer__End_10_10,
#line 110 "string.opt"
  MR_Word mercury__integer__STATE_VARIABLE_Acc_0_14_11,
#line 110 "string.opt"
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

#line 1257 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_pos_mul_list_3_f_0(
#line 1257 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1257 "integer.m"
  MR_Word mercury__integer__Carry_2,
#line 1257 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3);

#line 1239 "integer.m"
static void MR_CALL 
mercury__integer__printbase_add_pairs_equal_4_p_0(
#line 1239 "integer.m"
  MR_Integer * mercury__integer__HeadVar__1_1,
#line 1239 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1239 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1239 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4);

#line 1221 "integer.m"
static void MR_CALL 
mercury__integer__printbase_add_pairs_4_p_0(
#line 1221 "integer.m"
  MR_Integer * mercury__integer__Div_5,
#line 1221 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1221 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1221 "integer.m"
  MR_Word * mercury__integer__Ds_10);

#line 1206 "integer.m"
static void MR_CALL 
mercury__integer__printbase_mul_by_digit_2_4_p_0(
#line 1206 "integer.m"
  MR_Integer mercury__integer__D_1,
#line 1206 "integer.m"
  MR_Integer * mercury__integer__HeadVar__2_2,
#line 1206 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1206 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4);

#line 1182 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_pos_int_to_digits_2_2_f_0(
#line 1182 "integer.m"
  MR_Integer mercury__integer__D_4,
#line 1182 "integer.m"
  MR_Word mercury__integer__Tail_5);

#line 1150 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_rep_1_3_f_0(
#line 1150 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1150 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1150 "integer.m"
  MR_Word mercury__integer__Carry_3);

#line 1137 "integer.m"
static void MR_CALL 
mercury__integer__digits_to_strings_3_p_0(
#line 1137 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1137 "integer.m"
  MR_Word * mercury__integer__DCG_0_2,
#line 1137 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3);

#line 1088 "integer.m"
static MR_bool MR_CALL 
mercury__integer__string_to_integer_acc_2_f_0(
#line 1088 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1088 "integer.m"
  MR_Word mercury__integer__Acc_2,
#line 1088 "integer.m"
  MR_Word * mercury__integer__HeadVar__3_3);

#line 1052 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__int_list_2_f_0(
#line 1052 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1052 "integer.m"
  MR_Integer mercury__integer__Accum_2);

#line 1018 "integer.m"
static MR_Word MR_CALL 
mercury__integer__bits_pow_4_f_0(
#line 1018 "integer.m"
  MR_Integer mercury__integer__Shifts_6,
#line 1018 "integer.m"
  MR_Integer mercury__integer__H_7,
#line 1018 "integer.m"
  MR_Word mercury__integer__A_8,
#line 1018 "integer.m"
  MR_Word mercury__integer__Accum_9);

#line 1012 "integer.m"
static MR_Word MR_CALL 
mercury__integer__bits_pow_list_3_f_0(
#line 1012 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1012 "integer.m"
  MR_Word mercury__integer__A_2,
#line 1012 "integer.m"
  MR_Word mercury__integer__Accum_3);

#line 1001 "integer.m"
static MR_Word MR_CALL 
mercury__integer__bits_pow_head_2_f_0(
#line 1001 "integer.m"
  MR_Integer mercury__integer__H_4,
#line 1001 "integer.m"
  MR_Word mercury__integer__A_5);

#line 971 "integer.m"
static MR_bool MR_CALL 
mercury__integer__pos_geq_2_p_0(
#line 971 "integer.m"
  MR_Word mercury__integer__Xs_3,
#line 971 "integer.m"
  MR_Word mercury__integer__Ys_4);

#line 960 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_3_f_0(
#line 960 "integer.m"
  MR_Integer mercury__integer__X_1,
#line 960 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 960 "integer.m"
  MR_Integer mercury__integer__D_3);

#line 947 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_1_3_f_0(
#line 947 "integer.m"
  MR_Integer mercury__integer__X_1,
#line 947 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 947 "integer.m"
  MR_Integer mercury__integer__D_3);

#line 942 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_f_0(
#line 942 "integer.m"
  MR_Integer mercury__integer__Digit_1,
#line 942 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 938 "integer.m"
static MR_Word MR_CALL 
mercury__integer__integer_prepend_2_f_0(
#line 938 "integer.m"
  MR_Integer mercury__integer__Digit_4,
#line 938 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 933 "integer.m"
static MR_Word MR_CALL 
mercury__integer__integer_append_2_f_0(
#line 933 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 933 "integer.m"
  MR_Integer mercury__integer__Digit_6);

#line 928 "integer.m"
static MR_Word MR_CALL 
mercury__integer__tail_1_f_0(
#line 928 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1);

#line 919 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__head_tail_1_f_0(
#line 919 "integer.m"
  MR_Word mercury__integer__I_3);

#line 915 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__head_1_f_0(
#line 915 "integer.m"
  MR_Word mercury__integer__I_3);

#line 910 "integer.m"
static MR_Word MR_CALL 
mercury__integer__decap_1_f_0(
#line 910 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1);

#line 860 "integer.m"
static void MR_CALL 
mercury__integer__quot_rem_2_5_p_0(
#line 860 "integer.m"
  MR_Word mercury__integer__Ur_6,
#line 860 "integer.m"
  MR_Word mercury__integer__U_7,
#line 860 "integer.m"
  MR_Word mercury__integer__V_8,
#line 860 "integer.m"
  MR_Word * mercury__integer__Quot_9,
#line 860 "integer.m"
  MR_Word * mercury__integer__Rem_10);

#line 841 "integer.m"
static void MR_CALL 
mercury__integer__quot_rem_4_p_0(
#line 841 "integer.m"
  MR_Word mercury__integer__U_5,
#line 841 "integer.m"
  MR_Word mercury__integer__V_6,
#line 841 "integer.m"
  MR_Word * mercury__integer__Quot_7,
#line 841 "integer.m"
  MR_Word * mercury__integer__Rem_8);

#line 804 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_mul_list_3_f_0(
#line 804 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 804 "integer.m"
  MR_Word mercury__integer__Carry_2,
#line 804 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3);

#line 768 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_mul_karatsuba_2_f_0(
#line 768 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 768 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 738 "integer.m"
static void MR_CALL 
mercury__integer__diff_pairs_equal_4_p_0(
#line 738 "integer.m"
  MR_Integer * mercury__integer__HeadVar__1_1,
#line 738 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 738 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 738 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4);

#line 724 "integer.m"
static void MR_CALL 
mercury__integer__diff_pairs_4_p_0(
#line 724 "integer.m"
  MR_Integer * mercury__integer__Div_5,
#line 724 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 724 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 724 "integer.m"
  MR_Word * mercury__integer__Ds_10);

#line 717 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_minus_2_f_0(
#line 717 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 717 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 708 "integer.m"
static void MR_CALL 
mercury__integer__add_pairs_equal_4_p_0(
#line 708 "integer.m"
  MR_Integer * mercury__integer__HeadVar__1_1,
#line 708 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 708 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 708 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4);

#line 690 "integer.m"
static void MR_CALL 
mercury__integer__add_pairs_4_p_0(
#line 690 "integer.m"
  MR_Integer * mercury__integer__Div_5,
#line 690 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 690 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 690 "integer.m"
  MR_Word * mercury__integer__Ds_10);

#line 669 "integer.m"
static void MR_CALL 
mercury__integer__mul_by_digit_2_4_p_0(
#line 669 "integer.m"
  MR_Integer mercury__integer__D_1,
#line 669 "integer.m"
  MR_Integer * mercury__integer__HeadVar__2_2,
#line 669 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 669 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4);

#line 663 "integer.m"
static MR_Word MR_CALL 
mercury__integer__mul_by_digit_2_f_0(
#line 663 "integer.m"
  MR_Integer mercury__integer__Digit_4,
#line 663 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 658 "integer.m"
static MR_Word MR_CALL 
mercury__integer__mul_base_2_1_f_0(
#line 658 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1);

#line 635 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_int_to_digits_2_2_f_0(
#line 635 "integer.m"
  MR_Integer mercury__integer__D_4,
#line 635 "integer.m"
  MR_Word mercury__integer__Tail_5);

#line 545 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_xor_not_2_f_0(
#line 545 "integer.m"
  MR_Word mercury__integer__X1_4,
#line 545 "integer.m"
  MR_Word mercury__integer__NotX2_5);

#line 538 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_not_pairs_equal_2_f_0(
#line 538 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 538 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 523 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_not_pairs_2_f_0(
#line 523 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 523 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 513 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_pairs_equal_2_f_0(
#line 513 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 513 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 498 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_pairs_2_f_0(
#line 498 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 498 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 487 "integer.m"
static MR_Word MR_CALL 
mercury__integer__xor_pairs_equal_2_f_0(
#line 487 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 487 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 472 "integer.m"
static MR_Word MR_CALL 
mercury__integer__xor_pairs_2_f_0(
#line 472 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 472 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 462 "integer.m"
static MR_Word MR_CALL 
mercury__integer__or_pairs_equal_2_f_0(
#line 462 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 462 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 447 "integer.m"
static MR_Word MR_CALL 
mercury__integer__or_pairs_2_f_0(
#line 447 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 447 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 443 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_or_2_f_0(
#line 443 "integer.m"
  MR_Word mercury__integer__X_4,
#line 443 "integer.m"
  MR_Word mercury__integer__Y_5);

#line 433 "integer.m"
static void MR_CALL 
mercury__integer__zeros_3_p_0(
#line 433 "integer.m"
  MR_Integer mercury__integer__Len_4,
#line 433 "integer.m"
  MR_Word * mercury__integer__DCG_0_5,
#line 433 "integer.m"
  MR_Word mercury__integer__DCG_3_8);

#line 417 "integer.m"
static void MR_CALL 
mercury__integer__leftshift_6_p_0(
#line 417 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 417 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 417 "integer.m"
  MR_Integer mercury__integer__Len_3,
#line 417 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 417 "integer.m"
  MR_Integer * mercury__integer__Carry_5,
#line 417 "integer.m"
  MR_Word * mercury__integer__DigitsOut_6);

#line 393 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_left_shift_2_f_0(
#line 393 "integer.m"
  MR_Word mercury__integer__X_4,
#line 393 "integer.m"
  MR_Integer mercury__integer__I_5);

#line 379 "integer.m"
static MR_Word MR_CALL 
mercury__integer__rightshift_4_f_0(
#line 379 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 379 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 379 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 379 "integer.m"
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "builtin.mh"
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
#include "math.mh"
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
#include "private_builtin.mh"
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



#line 1053 "integer.c"
const MR_TypeCtorInfo_Struct mercury__integer__integer__type_ctor_info_digit_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__integer____Unify____digit_0_0_10001)),
  ((MR_Box) (mercury__integer____Compare____digit_0_0_10001)),
  (MR_String) "integer",
  (MR_String) "digit",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1074 "integer.c"
static const MR_FA_TypeInfo_Struct1 mercury__integer__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1082 "integer.c"
static const MR_PseudoTypeInfo mercury__integer__integer__field_types_integer_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__integer__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 1088 "integer.c"
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

#line 1103 "integer.c"
static const MR_DuFunctorDescPtr mercury__integer__integer__du_stag_ordered_integer_0_0[1] = {
  &mercury__integer__integer__du_functor_desc_integer_0_0
};

#line 1108 "integer.c"
static const MR_DuPtagLayout mercury__integer__integer__du_ptag_ordered_integer_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__integer__integer__du_stag_ordered_integer_0_0
  }
};

#line 1117 "integer.c"
static const MR_DuFunctorDescPtr mercury__integer__integer__du_name_ordered_integer_0[1] = {
  &mercury__integer__integer__du_functor_desc_integer_0_0
};

#line 1122 "integer.c"
static const MR_Integer mercury__integer__integer__functor_number_map_integer_0[1] = {
  (MR_Integer) 0
};

#line 1127 "integer.c"
const MR_TypeCtorInfo_Struct mercury__integer__integer__type_ctor_info_integer_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__integer____Unify____integer_0_0_10001)),
  ((MR_Box) (mercury__integer____Compare____integer_0_0_10001)),
  (MR_String) "integer",
  (MR_String) "integer",
  {
    mercury__integer__integer__du_name_ordered_integer_0
  },
  {
    mercury__integer__integer__du_ptag_ordered_integer_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__integer__integer__functor_number_map_integer_0
};

#line 1148 "integer.c"
const MR_TypeCtorInfo_Struct mercury__integer__integer__type_ctor_info_sign_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__integer____Unify____sign_0_0_10001)),
  ((MR_Box) (mercury__integer____Compare____sign_0_0_10001)),
  (MR_String) "integer",
  (MR_String) "sign",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1169 "integer.c"
static MR_bool MR_CALL 
mercury__integer____Unify____digit_0_0_10001(
#line 1172 "integer.c"
  MR_Box mercury__integer__wrapper_arg_1,
#line 1174 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2)
#line 1176 "integer.c"
{
#line 1178 "integer.c"
  {
#line 1180 "integer.c"
    MR_bool mercury__integer__succeeded;

#line 1183 "integer.c"
    {
#line 1185 "integer.c"
      mercury__integer__succeeded = mercury__integer____Unify____digit_0_0(((MR_Integer) mercury__integer__wrapper_arg_1), ((MR_Integer) mercury__integer__wrapper_arg_2));
    }
#line 1188 "integer.c"
    return mercury__integer__succeeded;
#line 1190 "integer.c"
  }
#line 1192 "integer.c"
}

#line 1195 "integer.c"
static void MR_CALL 
mercury__integer____Compare____digit_0_0_10001(
#line 1198 "integer.c"
  MR_Box * mercury__integer__wrapper_arg_1,
#line 1200 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2,
#line 1202 "integer.c"
  MR_Box mercury__integer__wrapper_arg_3)
#line 1204 "integer.c"
{
#line 1206 "integer.c"
  {
#line 1208 "integer.c"
    MR_Word mercury__integer__conv0_HeadVar__1_1;

#line 1211 "integer.c"
    {
#line 1213 "integer.c"
      mercury__integer____Compare____digit_0_0(&mercury__integer__conv0_HeadVar__1_1, ((MR_Integer) mercury__integer__wrapper_arg_2), ((MR_Integer) mercury__integer__wrapper_arg_3));
    }
#line 1216 "integer.c"
    *mercury__integer__wrapper_arg_1 = ((MR_Box) (mercury__integer__conv0_HeadVar__1_1));
#line 1218 "integer.c"
  }
#line 1220 "integer.c"
}

#line 1223 "integer.c"
static MR_bool MR_CALL 
mercury__integer____Unify____integer_0_0_10001(
#line 1226 "integer.c"
  MR_Box mercury__integer__wrapper_arg_1,
#line 1228 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2)
#line 1230 "integer.c"
{
#line 1232 "integer.c"
  {
#line 1234 "integer.c"
    MR_bool mercury__integer__succeeded;

#line 1237 "integer.c"
    {
#line 1239 "integer.c"
      mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(((MR_Word) mercury__integer__wrapper_arg_1), ((MR_Word) mercury__integer__wrapper_arg_2));
    }
#line 1242 "integer.c"
    return mercury__integer__succeeded;
#line 1244 "integer.c"
  }
#line 1246 "integer.c"
}

#line 1249 "integer.c"
static void MR_CALL 
mercury__integer____Compare____integer_0_0_10001(
#line 1252 "integer.c"
  MR_Box * mercury__integer__wrapper_arg_1,
#line 1254 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2,
#line 1256 "integer.c"
  MR_Box mercury__integer__wrapper_arg_3)
#line 1258 "integer.c"
{
#line 1260 "integer.c"
  {
#line 1262 "integer.c"
    MR_Word mercury__integer__conv0_HeadVar__1_1;

#line 1265 "integer.c"
    {
#line 1267 "integer.c"
      mercury__integer____Compare____integer_0_0(&mercury__integer__conv0_HeadVar__1_1, ((MR_Word) mercury__integer__wrapper_arg_2), ((MR_Word) mercury__integer__wrapper_arg_3));
    }
#line 1270 "integer.c"
    *mercury__integer__wrapper_arg_1 = ((MR_Box) (mercury__integer__conv0_HeadVar__1_1));
#line 1272 "integer.c"
  }
#line 1274 "integer.c"
}

#line 1277 "integer.c"
static MR_bool MR_CALL 
mercury__integer____Unify____sign_0_0_10001(
#line 1280 "integer.c"
  MR_Box mercury__integer__wrapper_arg_1,
#line 1282 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2)
#line 1284 "integer.c"
{
#line 1286 "integer.c"
  {
#line 1288 "integer.c"
    MR_bool mercury__integer__succeeded;

#line 1291 "integer.c"
    {
#line 1293 "integer.c"
      mercury__integer__succeeded = mercury__integer____Unify____sign_0_0(((MR_Integer) mercury__integer__wrapper_arg_1), ((MR_Integer) mercury__integer__wrapper_arg_2));
    }
#line 1296 "integer.c"
    return mercury__integer__succeeded;
#line 1298 "integer.c"
  }
#line 1300 "integer.c"
}

#line 1303 "integer.c"
static void MR_CALL 
mercury__integer____Compare____sign_0_0_10001(
#line 1306 "integer.c"
  MR_Box * mercury__integer__wrapper_arg_1,
#line 1308 "integer.c"
  MR_Box mercury__integer__wrapper_arg_2,
#line 1310 "integer.c"
  MR_Box mercury__integer__wrapper_arg_3)
#line 1312 "integer.c"
{
#line 1314 "integer.c"
  {
#line 1316 "integer.c"
    MR_Word mercury__integer__conv0_HeadVar__1_1;

#line 1319 "integer.c"
    {
#line 1321 "integer.c"
      mercury__integer____Compare____sign_0_0(&mercury__integer__conv0_HeadVar__1_1, ((MR_Integer) mercury__integer__wrapper_arg_2), ((MR_Integer) mercury__integer__wrapper_arg_3));
    }
#line 1324 "integer.c"
    *mercury__integer__wrapper_arg_1 = ((MR_Box) (mercury__integer__conv0_HeadVar__1_1));
#line 1326 "integer.c"
  }
#line 1328 "integer.c"
}

#line 110 "string.opt"
static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0(
#line 110 "string.opt"
  MR_Integer mercury__integer__V_17_17,
#line 110 "string.opt"
  MR_String mercury__integer__String_8_8,
#line 110 "string.opt"
  MR_Integer mercury__integer__I_9_9,
#line 110 "string.opt"
  MR_Integer mercury__integer__End_10_10,
#line 110 "string.opt"
  MR_Word mercury__integer__STATE_VARIABLE_Acc_0_14_11,
#line 110 "string.opt"
  MR_Word * mercury__integer__STATE_VARIABLE_Acc_15_12)
#line 110 "string.opt"
{
#line 953 "string.opt"
  while (MR_TRUE)
#line 953 "string.opt"
    {
#line 953 "string.opt"
      /* tailcall optimized into a loop */
#line 953 "string.opt"
      {
#line 953 "string.opt"
        MR_bool mercury__integer__succeeded = (mercury__integer__I_9_9 < mercury__integer__End_10_10);
#line 953 "string.opt"
        MR_Integer mercury__integer__J_12_13;
#line 953 "string.opt"
        MR_Char mercury__integer__Char_13_14;

#line 947 "string.opt"
        if (mercury__integer__succeeded)
#line 947 "string.opt"
          {
#line 191 "string.opt"
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
#line 191 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 1392 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__integer__J_12_13  = NextIndex;
	 mercury__integer__Char_13_14  = Ch;
#line 191 "string.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 947 "string.opt"
            if (mercury__integer__succeeded)
#line 949 "string.opt"
              mercury__integer__succeeded = (mercury__integer__J_12_13 <= mercury__integer__End_10_10);
#line 947 "string.opt"
          }
#line 953 "string.opt"
        if (mercury__integer__succeeded)
#line 951 "string.opt"
          {
#line 951 "string.opt"
            MR_Word mercury__integer__STATE_VARIABLE_Acc_16_16_15;
#line 951 "string.opt"
            MR_Integer mercury__integer__Digit0_23;
#line 951 "string.opt"
            MR_Word mercury__integer__Digit_24;
#line 951 "string.opt"
            MR_Word mercury__integer__V_26_26;
#line 951 "string.opt"
            MR_Word mercury__integer__V_27_27;

#line 1289 "integer.m"
            {
#line 1289 "integer.m"
              mercury__integer__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__integer__V_17_17, mercury__integer__Char_13_14, &mercury__integer__Digit0_23);
            }
#line 951 "string.opt"
            if (mercury__integer__succeeded)
#line 951 "string.opt"
              {
#line 589 "integer.m"
                {
#line 589 "integer.m"
                  mercury__integer__Digit_24 = mercury__integer__int_to_integer_1_f_0(mercury__integer__Digit0_23);
                }
#line 589 "integer.m"
                {
#line 589 "integer.m"
                  mercury__integer__V_27_27 = mercury__integer__int_to_integer_1_f_0(mercury__integer__V_17_17);
                }
#line 233 "integer.m"
                {
#line 233 "integer.m"
                  mercury__integer__V_26_26 = mercury__integer__big_mul_2_f_0(mercury__integer__V_27_27, mercury__integer__STATE_VARIABLE_Acc_0_14_11);
                }
#line 229 "integer.m"
                {
#line 229 "integer.m"
                  mercury__integer__STATE_VARIABLE_Acc_16_16_15 = mercury__integer__big_plus_2_f_0(mercury__integer__V_26_26, mercury__integer__Digit_24);
                }
#line 952 "string.opt"
                /* direct tailcall eliminated */
#line 952 "string.opt"
                {
#line 952 "string.opt"
                  MR_Integer mercury__integer__I_9__tmp_copy_9 = mercury__integer__J_12_13;
#line 952 "string.opt"
                  MR_Word mercury__integer__STATE_VARIABLE_Acc_0_14__tmp_copy_11 = mercury__integer__STATE_VARIABLE_Acc_16_16_15;

#line 952 "string.opt"
                  mercury__integer__STATE_VARIABLE_Acc_0_14_11 = mercury__integer__STATE_VARIABLE_Acc_0_14__tmp_copy_11;
#line 952 "string.opt"
                  mercury__integer__I_9_9 = mercury__integer__I_9__tmp_copy_9;
#line 952 "string.opt"
                }
#line 952 "string.opt"
                continue;
#line 951 "string.opt"
              }
#line 951 "string.opt"
          }
#line 953 "string.opt"
        else
#line 954 "string.opt"
          {
#line 954 "string.opt"
            *mercury__integer__STATE_VARIABLE_Acc_15_12 = mercury__integer__STATE_VARIABLE_Acc_0_14_11;
#line 954 "string.opt"
            mercury__integer__succeeded = MR_TRUE;
#line 954 "string.opt"
          }
#line 953 "string.opt"
        return mercury__integer__succeeded;
#line 953 "string.opt"
      }
#line 953 "string.opt"
      break;
#line 953 "string.opt"
    }
#line 110 "string.opt"
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
#line 607 "string.opt"
  {
#line 607 "string.opt"
    MR_bool mercury__integer__succeeded = ((MR_Integer) 0 > mercury__integer__Start0_9_9);
#line 607 "string.opt"
    MR_Integer mercury__integer__Start_12_13;
#line 607 "string.opt"
    MR_Integer mercury__integer__End_13_15;
#line 607 "string.opt"
    MR_Integer mercury__integer__V_17_16;

#line 78 "int.opt"
    if (mercury__integer__succeeded)
#line 77 "int.opt"
      mercury__integer__Start_12_13 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__integer__Start_12_13 = mercury__integer__Start0_9_9;
#line 242 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__String_8_8 ;
		{
#line 242 "string.opt"

    Length = strlen(Str);

#line 1544 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_17_16  = Length;
#line 242 "string.opt"
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
#line 612 "string.opt"
    {
#line 612 "string.opt"
      return mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__V_18_18, mercury__integer__String_8_8, mercury__integer__Start_12_13, mercury__integer__End_13_15, mercury__integer__STATE_VARIABLE_Acc_0_14_11, mercury__integer__STATE_VARIABLE_Acc_15_12);
    }
#line 607 "string.opt"
    return mercury__integer__succeeded;
#line 607 "string.opt"
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

#line 175 "integer.m"
void MR_CALL 
mercury__integer____Compare____sign_0_0(
#line 175 "integer.m"
  MR_Word * mercury__integer__HeadVar__1_1,
#line 175 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 175 "integer.m"
  MR_Integer mercury__integer__HeadVar__3_3)
#line 175 "integer.m"
{
#line 175 "integer.m"
  {
#line 175 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 175 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar1_4 = mercury__integer__HeadVar__2_2;
#line 175 "integer.m"
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
#line 175 "integer.m"
  }
#line 175 "integer.m"
}

#line 175 "integer.m"
MR_bool MR_CALL 
mercury__integer____Unify____sign_0_0(
#line 175 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 175 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2)
#line 175 "integer.m"
{
#line 175 "integer.m"
  {
#line 175 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 175 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar1_3 = mercury__integer__HeadVar__1_1;
#line 175 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar2_4 = mercury__integer__HeadVar__2_2;

#line 175 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_3 == mercury__integer__Cast_HeadVar2_4);
#line 175 "integer.m"
    return mercury__integer__succeeded;
#line 175 "integer.m"
  }
#line 175 "integer.m"
}

#line 178 "integer.m"
void MR_CALL 
mercury__integer____Compare____integer_0_0(
#line 178 "integer.m"
  MR_Word * mercury__integer__HeadVar__1_1,
#line 178 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 178 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3)
#line 178 "integer.m"
{
#line 178 "integer.m"
  {
#line 178 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 178 "integer.m"
    MR_Integer mercury__integer__CastX_9 = (MR_Integer) mercury__integer__HeadVar__2_2;
#line 178 "integer.m"
    MR_Integer mercury__integer__CastY_10 = (MR_Integer) mercury__integer__HeadVar__3_3;

#line 178 "integer.m"
    mercury__integer__succeeded = (mercury__integer__CastX_9 == mercury__integer__CastY_10);
#line 178 "integer.m"
    if (mercury__integer__succeeded)
#line 1688 "integer.c"
      *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 178 "integer.m"
    else
#line 178 "integer.m"
      {
#line 178 "integer.m"
        MR_Integer mercury__integer__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 178 "integer.m"
        MR_Word mercury__integer__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 178 "integer.m"
        MR_Integer mercury__integer__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 178 "integer.m"
        MR_Word mercury__integer__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 178 "integer.m"
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
#line 1727 "integer.c"
        mercury__integer__succeeded = (mercury__integer__V_8_8 == (MR_Integer) 0);
#line 178 "integer.m"
        mercury__integer__succeeded = !(mercury__integer__succeeded);
#line 178 "integer.m"
        if (mercury__integer__succeeded)
#line 178 "integer.m"
          *mercury__integer__HeadVar__1_1 = mercury__integer__V_8_8;
#line 178 "integer.m"
        else
#line 178 "integer.m"
          {
#line 178 "integer.m"
            MR_Word mercury__integer__TypeInfo_12_12 = (MR_Word) &mercury__integer_scalar_common_1[0];

#line 178 "integer.m"
            {
#line 178 "integer.m"
              mercury__builtin__compare_3_p_0(mercury__integer__TypeInfo_12_12, mercury__integer__HeadVar__1_1, ((MR_Box) (mercury__integer__V_5_5)), ((MR_Box) (mercury__integer__V_7_7)));
#line 178 "integer.m"
              return;
            }
#line 178 "integer.m"
          }
#line 178 "integer.m"
      }
#line 178 "integer.m"
  }
#line 178 "integer.m"
}

#line 178 "integer.m"
MR_bool MR_CALL 
mercury__integer____Unify____integer_0_0(
#line 178 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 178 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 178 "integer.m"
{
#line 178 "integer.m"
  {
#line 178 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 178 "integer.m"
    MR_Integer mercury__integer__CastX_7 = (MR_Integer) mercury__integer__HeadVar__1_1;
#line 178 "integer.m"
    MR_Integer mercury__integer__CastY_8 = (MR_Integer) mercury__integer__HeadVar__2_2;

#line 178 "integer.m"
    mercury__integer__succeeded = (mercury__integer__CastX_7 == mercury__integer__CastY_8);
#line 178 "integer.m"
    if (mercury__integer__succeeded)
#line 178 "integer.m"
      mercury__integer__succeeded = MR_TRUE;
#line 178 "integer.m"
    else
#line 178 "integer.m"
      {
#line 178 "integer.m"
        MR_Word mercury__integer__TypeInfo_9_9;
#line 178 "integer.m"
        MR_Integer mercury__integer__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 178 "integer.m"
        MR_Word mercury__integer__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 178 "integer.m"
        MR_Integer mercury__integer__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 178 "integer.m"
        MR_Word mercury__integer__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 1797 "integer.c"
        mercury__integer__succeeded = (mercury__integer__V_3_3 == mercury__integer__V_5_5);
#line 178 "integer.m"
        if (mercury__integer__succeeded)
#line 178 "integer.m"
          {
#line 1803 "integer.c"
            mercury__integer__TypeInfo_9_9 = (MR_Word) &mercury__integer_scalar_common_1[0];
#line 1805 "integer.c"
            {
#line 1807 "integer.c"
              return mercury__integer__succeeded = mercury__builtin__unify_2_p_0(mercury__integer__TypeInfo_9_9, ((MR_Box) (mercury__integer__V_4_4)), ((MR_Box) (mercury__integer__V_6_6)));
            }
#line 178 "integer.m"
          }
#line 178 "integer.m"
      }
#line 178 "integer.m"
    return mercury__integer__succeeded;
#line 178 "integer.m"
  }
#line 178 "integer.m"
}

#line 176 "integer.m"
void MR_CALL 
mercury__integer____Compare____digit_0_0(
#line 176 "integer.m"
  MR_Word * mercury__integer__HeadVar__1_1,
#line 176 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 176 "integer.m"
  MR_Integer mercury__integer__HeadVar__3_3)
#line 176 "integer.m"
{
#line 176 "integer.m"
  {
#line 176 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 176 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar1_4 = mercury__integer__HeadVar__2_2;
#line 176 "integer.m"
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
#line 176 "integer.m"
  }
#line 176 "integer.m"
}

#line 176 "integer.m"
MR_bool MR_CALL 
mercury__integer____Unify____digit_0_0(
#line 176 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 176 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2)
#line 176 "integer.m"
{
#line 176 "integer.m"
  {
#line 176 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 176 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar1_3 = mercury__integer__HeadVar__1_1;
#line 176 "integer.m"
    MR_Integer mercury__integer__Cast_HeadVar2_4 = mercury__integer__HeadVar__2_2;

#line 176 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_3 == mercury__integer__Cast_HeadVar2_4);
#line 176 "integer.m"
    return mercury__integer__succeeded;
#line 176 "integer.m"
  }
#line 176 "integer.m"
}

#line 1257 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_pos_mul_list_3_f_0(
#line 1257 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1257 "integer.m"
  MR_Word mercury__integer__Carry_2,
#line 1257 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3)
#line 1257 "integer.m"
{
#line 1259 "integer.m"
  while (MR_TRUE)
#line 1259 "integer.m"
    {
#line 1259 "integer.m"
      /* tailcall optimized into a loop */
#line 1259 "integer.m"
      {
#line 1259 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1259 "integer.m"
        MR_Word mercury__integer__HeadVar__4_4;

#line 1259 "integer.m"
        if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1259 "integer.m"
          mercury__integer__HeadVar__4_4 = mercury__integer__Carry_2;
#line 1259 "integer.m"
        else
#line 1260 "integer.m"
          {
#line 1260 "integer.m"
            MR_Integer mercury__integer__X_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1260 "integer.m"
            MR_Word mercury__integer__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1260 "integer.m"
            MR_Word mercury__integer__V_11_11;
#line 1260 "integer.m"
            MR_Word mercury__integer__V_12_12;
#line 1260 "integer.m"
            MR_Word mercury__integer__V_13_13;
#line 1260 "integer.m"
            MR_Integer mercury__integer__Len_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_2, (MR_Integer) 0)));
#line 1260 "integer.m"
            MR_Word mercury__integer__Digits_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_2, (MR_Integer) 1)));
#line 1260 "integer.m"
            MR_Integer mercury__integer__Len_26;
#line 1260 "integer.m"
            MR_Word mercury__integer__Ds_27;
#line 1260 "integer.m"
            MR_Integer mercury__integer__Div_28;
#line 1260 "integer.m"
            MR_Word mercury__integer__DsOut_29;
#line 1260 "integer.m"
            MR_Integer mercury__integer__L1_34;
#line 1260 "integer.m"
            MR_Integer mercury__integer__L2_36;
#line 1260 "integer.m"
            MR_Integer mercury__integer__Div_38;
#line 1260 "integer.m"
            MR_Word mercury__integer__Ds_39;
#line 1260 "integer.m"
            MR_Integer mercury__integer__Len_40;
#line 1216 "integer.m"
            MR_Word mercury__integer__D1_35;
#line 1216 "integer.m"
            MR_Word mercury__integer__D2_37;

#line 653 "integer.m"
            if ((mercury__integer__Digits_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1057 "integer.m"
              {
#line 1057 "integer.m"
                MR_Word mercury__integer__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1057 "integer.m"
                mercury__integer__V_12_12 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1057 "integer.m"
              }
#line 653 "integer.m"
            else
#line 654 "integer.m"
              {
#line 654 "integer.m"
                MR_Integer mercury__integer__V_19_19 = (mercury__integer__Len_15 + (MR_Integer) 1);
#line 654 "integer.m"
                MR_Word mercury__integer__V_21_21;

#line 655 "integer.m"
                {
#line 655 "integer.m"
                  mercury__integer__V_21_21 = mercury__integer__mul_base_2_1_f_0(mercury__integer__Digits_16);
                }
#line 655 "integer.m"
                {
#line 655 "integer.m"
                  mercury__integer__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 655 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 0) = ((MR_Box) (mercury__integer__V_19_19));
#line 655 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 1) = ((MR_Box) (mercury__integer__V_21_21));
#line 655 "integer.m"
                }
#line 654 "integer.m"
              }
#line 1202 "integer.m"
            mercury__integer__Len_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 1202 "integer.m"
            mercury__integer__Ds_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 1203 "integer.m"
            {
#line 1203 "integer.m"
              mercury__integer__printbase_mul_by_digit_2_4_p_0(mercury__integer__X_7, &mercury__integer__Div_28, mercury__integer__Ds_27, &mercury__integer__DsOut_29);
            }
#line 1204 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Div_28 == (MR_Integer) 0);
#line 1204 "integer.m"
            if (mercury__integer__succeeded)
#line 1204 "integer.m"
              {
#line 1204 "integer.m"
                mercury__integer__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1204 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 0) = ((MR_Box) (mercury__integer__Len_26));
#line 1204 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 1) = ((MR_Box) (mercury__integer__DsOut_29));
#line 1204 "integer.m"
              }
#line 1204 "integer.m"
            else
#line 1204 "integer.m"
              {
#line 1204 "integer.m"
                MR_Integer mercury__integer__V_30_30 = (mercury__integer__Len_26 + (MR_Integer) 1);
#line 1204 "integer.m"
                MR_Word mercury__integer__V_32_32;

#line 1204 "integer.m"
                {
#line 1204 "integer.m"
                  mercury__integer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_32_32, 0) = ((MR_Box) (mercury__integer__Div_28));
#line 1204 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_32_32, 1) = ((MR_Box) (mercury__integer__DsOut_29));
#line 1204 "integer.m"
                }
#line 1204 "integer.m"
                {
#line 1204 "integer.m"
                  mercury__integer__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1204 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 0) = ((MR_Box) (mercury__integer__V_30_30));
#line 1204 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 1) = ((MR_Box) (mercury__integer__V_32_32));
#line 1204 "integer.m"
                }
#line 1204 "integer.m"
              }
#line 1216 "integer.m"
            mercury__integer__L1_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, (MR_Integer) 0)));
#line 1216 "integer.m"
            mercury__integer__D1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, (MR_Integer) 1)));
#line 1216 "integer.m"
            mercury__integer__L2_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, (MR_Integer) 0)));
#line 1216 "integer.m"
            mercury__integer__D2_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, (MR_Integer) 1)));
#line 1217 "integer.m"
            {
#line 1217 "integer.m"
              mercury__integer__printbase_add_pairs_4_p_0(&mercury__integer__Div_38, mercury__integer__V_12_12, mercury__integer__V_13_13, &mercury__integer__Ds_39);
            }
#line 1218 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_34 > mercury__integer__L2_36);
#line 1218 "integer.m"
            if (mercury__integer__succeeded)
#line 1218 "integer.m"
              mercury__integer__Len_40 = mercury__integer__L1_34;
#line 1218 "integer.m"
            else
#line 1218 "integer.m"
              mercury__integer__Len_40 = mercury__integer__L2_36;
#line 1219 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Div_38 == (MR_Integer) 0);
#line 1219 "integer.m"
            if (mercury__integer__succeeded)
#line 1219 "integer.m"
              {
#line 1219 "integer.m"
                mercury__integer__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1219 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 0) = ((MR_Box) (mercury__integer__Len_40));
#line 1219 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 1) = ((MR_Box) (mercury__integer__Ds_39));
#line 1219 "integer.m"
              }
#line 1219 "integer.m"
            else
#line 1219 "integer.m"
              {
#line 1219 "integer.m"
                MR_Integer mercury__integer__V_43_43 = (mercury__integer__Len_40 + (MR_Integer) 1);
#line 1219 "integer.m"
                MR_Word mercury__integer__V_45_45;

#line 1219 "integer.m"
                {
#line 1219 "integer.m"
                  mercury__integer__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1219 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_45_45, 0) = ((MR_Box) (mercury__integer__Div_38));
#line 1219 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_45_45, 1) = ((MR_Box) (mercury__integer__Ds_39));
#line 1219 "integer.m"
                }
#line 1219 "integer.m"
                {
#line 1219 "integer.m"
                  mercury__integer__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1219 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 0) = ((MR_Box) (mercury__integer__V_43_43));
#line 1219 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 1) = ((MR_Box) (mercury__integer__V_45_45));
#line 1219 "integer.m"
                }
#line 1219 "integer.m"
              }
#line 1261 "integer.m"
            /* direct tailcall eliminated */
#line 1261 "integer.m"
            {
#line 1261 "integer.m"
              MR_Word mercury__integer__HeadVar__1__tmp_copy_1 = mercury__integer__Xs_8;
#line 1261 "integer.m"
              MR_Word mercury__integer__Carry__tmp_copy_2 = mercury__integer__V_11_11;

#line 1261 "integer.m"
              mercury__integer__Carry_2 = mercury__integer__Carry__tmp_copy_2;
#line 1261 "integer.m"
              mercury__integer__HeadVar__1_1 = mercury__integer__HeadVar__1__tmp_copy_1;
#line 1261 "integer.m"
            }
#line 1261 "integer.m"
            continue;
#line 1260 "integer.m"
          }
#line 1259 "integer.m"
        return mercury__integer__HeadVar__4_4;
#line 1259 "integer.m"
      }
#line 1259 "integer.m"
      break;
#line 1259 "integer.m"
    }
#line 1257 "integer.m"
}

#line 1239 "integer.m"
static void MR_CALL 
mercury__integer__printbase_add_pairs_equal_4_p_0(
#line 1239 "integer.m"
  MR_Integer * mercury__integer__HeadVar__1_1,
#line 1239 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1239 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1239 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4)
#line 1239 "integer.m"
{
#line 1242 "integer.m"
  {
#line 1242 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 1242 "integer.m"
    if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1242 "integer.m"
      {
#line 1242 "integer.m"
        *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 1242 "integer.m"
        *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1242 "integer.m"
      }
#line 1242 "integer.m"
    else
#line 1242 "integer.m"
      {
#line 1242 "integer.m"
        MR_Word mercury__integer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1242 "integer.m"
        MR_Integer mercury__integer__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));

#line 1242 "integer.m"
        if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1243 "integer.m"
          {
#line 1243 "integer.m"
            *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 1243 "integer.m"
            *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1243 "integer.m"
          }
#line 1242 "integer.m"
        else
#line 1244 "integer.m"
          {
#line 1244 "integer.m"
            MR_Integer mercury__integer__Y_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 1244 "integer.m"
            MR_Word mercury__integer__Ys_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 1244 "integer.m"
            MR_Integer mercury__integer__Mod_13;
#line 1244 "integer.m"
            MR_Word mercury__integer__TailDs_14;
#line 1244 "integer.m"
            MR_Integer mercury__integer__DivTail_15;
#line 1244 "integer.m"
            MR_Integer mercury__integer__V_16_16;
#line 1244 "integer.m"
            MR_Integer mercury__integer__V_17_17;
#line 1244 "integer.m"
            MR_Integer mercury__integer__V_6_28;
#line 1244 "integer.m"
            MR_Integer mercury__integer__V_7_29;

#line 1245 "integer.m"
            {
#line 1245 "integer.m"
              mercury__integer__printbase_add_pairs_equal_4_p_0(&mercury__integer__DivTail_15, mercury__integer__V_18_18, mercury__integer__Ys_12, &mercury__integer__TailDs_14);
            }
#line 1246 "integer.m"
            mercury__integer__V_17_17 = (mercury__integer__V_19_19 + mercury__integer__Y_11);
#line 1246 "integer.m"
            mercury__integer__V_16_16 = (mercury__integer__V_17_17 + mercury__integer__DivTail_15);
#line 113 "int.opt"
            {
#line 113 "int.opt"
              mercury__integer__V_7_29 = mercury__int__div_2_f_0(mercury__integer__V_16_16, (MR_Integer) 10000);
            }
#line 112 "int.opt"
            mercury__integer__V_6_28 = (mercury__integer__V_7_29 * (MR_Integer) 10000);
#line 111 "int.opt"
            mercury__integer__Mod_13 = (mercury__integer__V_16_16 - mercury__integer__V_6_28);
#line 1198 "integer.m"
            {
#line 1198 "integer.m"
              *mercury__integer__HeadVar__1_1 = mercury__int__div_2_f_0(mercury__integer__V_16_16, (MR_Integer) 10000);
            }
#line 1244 "integer.m"
            {
#line 1244 "integer.m"
              MR_Word base;
#line 1244 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "integer.m"
              *mercury__integer__HeadVar__4_4 = base;
#line 1244 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_13));
#line 1244 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__TailDs_14));
#line 1244 "integer.m"
            }
#line 1244 "integer.m"
          }
#line 1242 "integer.m"
      }
#line 1242 "integer.m"
  }
#line 1239 "integer.m"
}

#line 1221 "integer.m"
static void MR_CALL 
mercury__integer__printbase_add_pairs_4_p_0(
#line 1221 "integer.m"
  MR_Integer * mercury__integer__Div_5,
#line 1221 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1221 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1221 "integer.m"
  MR_Word * mercury__integer__Ds_10)
#line 1221 "integer.m"
{
#line 1224 "integer.m"
  {
#line 1224 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1224 "integer.m"
    MR_Integer mercury__integer__L1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 1224 "integer.m"
    MR_Word mercury__integer__D1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1224 "integer.m"
    MR_Integer mercury__integer__L2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 1224 "integer.m"
    MR_Word mercury__integer__D2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));

#line 1225 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_6 == mercury__integer__L2_8);
#line 1227 "integer.m"
    if (mercury__integer__succeeded)
#line 1226 "integer.m"
      {
#line 1226 "integer.m"
        mercury__integer__printbase_add_pairs_equal_4_p_0(mercury__integer__Div_5, mercury__integer__D1_7, mercury__integer__D2_9, mercury__integer__Ds_10);
#line 1226 "integer.m"
        return;
      }
#line 1227 "integer.m"
    else
#line 1231 "integer.m"
      {
#line 1231 "integer.m"
        MR_Integer mercury__integer__H2_11;
#line 1231 "integer.m"
        MR_Word mercury__integer__T2_12;

#line 1227 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_6 < mercury__integer__L2_8);
#line 1227 "integer.m"
        if (mercury__integer__succeeded)
#line 1227 "integer.m"
          {
#line 1227 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_9)) == (MR_mktag((MR_Integer) 1)));
#line 1227 "integer.m"
            if (mercury__integer__succeeded)
#line 1227 "integer.m"
              {
#line 1227 "integer.m"
                mercury__integer__H2_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_9, (MR_Integer) 0)));
#line 1227 "integer.m"
                mercury__integer__T2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_9, (MR_Integer) 1)));
#line 1227 "integer.m"
              }
#line 1227 "integer.m"
          }
#line 1231 "integer.m"
        if (mercury__integer__succeeded)
#line 1228 "integer.m"
          {
#line 1228 "integer.m"
            MR_Integer mercury__integer__Div1_13;
#line 1228 "integer.m"
            MR_Word mercury__integer__Ds1_14;
#line 1228 "integer.m"
            MR_Integer mercury__integer__Mod_15;
#line 1228 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 1228 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_8 - (MR_Integer) 1);
#line 1228 "integer.m"
            MR_Integer mercury__integer__V_22_22;
#line 1228 "integer.m"
            MR_Integer mercury__integer__V_6_43;
#line 1228 "integer.m"
            MR_Integer mercury__integer__V_7_44;

#line 1228 "integer.m"
            {
#line 1228 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1228 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 1228 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_12));
#line 1228 "integer.m"
            }
#line 1228 "integer.m"
            {
#line 1228 "integer.m"
              mercury__integer__printbase_add_pairs_4_p_0(&mercury__integer__Div1_13, mercury__integer__HeadVar__2_2, mercury__integer__V_19_19, &mercury__integer__Ds1_14);
            }
#line 1229 "integer.m"
            mercury__integer__V_22_22 = (mercury__integer__H2_11 + mercury__integer__Div1_13);
#line 113 "int.opt"
            {
#line 113 "int.opt"
              mercury__integer__V_7_44 = mercury__int__div_2_f_0(mercury__integer__V_22_22, (MR_Integer) 10000);
            }
#line 112 "int.opt"
            mercury__integer__V_6_43 = (mercury__integer__V_7_44 * (MR_Integer) 10000);
#line 111 "int.opt"
            mercury__integer__Mod_15 = (mercury__integer__V_22_22 - mercury__integer__V_6_43);
#line 1198 "integer.m"
            {
#line 1198 "integer.m"
              *mercury__integer__Div_5 = mercury__int__div_2_f_0(mercury__integer__V_22_22, (MR_Integer) 10000);
            }
#line 1230 "integer.m"
            {
#line 1230 "integer.m"
              MR_Word base;
#line 1230 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1230 "integer.m"
              *mercury__integer__Ds_10 = base;
#line 1230 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_15));
#line 1230 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_14));
#line 1230 "integer.m"
            }
#line 1228 "integer.m"
          }
#line 1231 "integer.m"
        else
#line 1235 "integer.m"
          {
#line 1235 "integer.m"
            MR_Integer mercury__integer__H1_16;
#line 1235 "integer.m"
            MR_Word mercury__integer__T1_17;

#line 1231 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_6 > mercury__integer__L2_8);
#line 1231 "integer.m"
            if (mercury__integer__succeeded)
#line 1231 "integer.m"
              {
#line 1231 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_7)) == (MR_mktag((MR_Integer) 1)));
#line 1231 "integer.m"
                if (mercury__integer__succeeded)
#line 1231 "integer.m"
                  {
#line 1231 "integer.m"
                    mercury__integer__H1_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 0)));
#line 1231 "integer.m"
                    mercury__integer__T1_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 1)));
#line 1231 "integer.m"
                  }
#line 1231 "integer.m"
              }
#line 1235 "integer.m"
            if (mercury__integer__succeeded)
#line 1232 "integer.m"
              {
#line 1232 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 1232 "integer.m"
                MR_Integer mercury__integer__V_25_25 = (mercury__integer__L1_6 - (MR_Integer) 1);
#line 1232 "integer.m"
                MR_Integer mercury__integer__V_27_27;
#line 1232 "integer.m"
                MR_Integer mercury__integer__Div1_29;
#line 1232 "integer.m"
                MR_Word mercury__integer__Ds1_30;
#line 1232 "integer.m"
                MR_Integer mercury__integer__Mod_31;
#line 1232 "integer.m"
                MR_Integer mercury__integer__V_6_53;
#line 1232 "integer.m"
                MR_Integer mercury__integer__V_7_54;

#line 1232 "integer.m"
                {
#line 1232 "integer.m"
                  mercury__integer__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1232 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 0) = ((MR_Box) (mercury__integer__V_25_25));
#line 1232 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 1) = ((MR_Box) (mercury__integer__T1_17));
#line 1232 "integer.m"
                }
#line 1232 "integer.m"
                {
#line 1232 "integer.m"
                  mercury__integer__printbase_add_pairs_4_p_0(&mercury__integer__Div1_29, mercury__integer__V_23_23, mercury__integer__HeadVar__3_3, &mercury__integer__Ds1_30);
                }
#line 1233 "integer.m"
                mercury__integer__V_27_27 = (mercury__integer__H1_16 + mercury__integer__Div1_29);
#line 113 "int.opt"
                {
#line 113 "int.opt"
                  mercury__integer__V_7_54 = mercury__int__div_2_f_0(mercury__integer__V_27_27, (MR_Integer) 10000);
                }
#line 112 "int.opt"
                mercury__integer__V_6_53 = (mercury__integer__V_7_54 * (MR_Integer) 10000);
#line 111 "int.opt"
                mercury__integer__Mod_31 = (mercury__integer__V_27_27 - mercury__integer__V_6_53);
#line 1198 "integer.m"
                {
#line 1198 "integer.m"
                  *mercury__integer__Div_5 = mercury__int__div_2_f_0(mercury__integer__V_27_27, (MR_Integer) 10000);
                }
#line 1234 "integer.m"
                {
#line 1234 "integer.m"
                  MR_Word base;
#line 1234 "integer.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "integer.m"
                  *mercury__integer__Ds_10 = base;
#line 1234 "integer.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_31));
#line 1234 "integer.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_30));
#line 1234 "integer.m"
                }
#line 1232 "integer.m"
              }
#line 1235 "integer.m"
            else
#line 1236 "integer.m"
              {
#line 1236 "integer.m"
                {
#line 1236 "integer.m"
                  mercury__require__error_1_p_0((MR_String) "integer.printbase_add_pairs");
#line 1236 "integer.m"
                  return;
                }
#line 1236 "integer.m"
              }
#line 1235 "integer.m"
          }
#line 1231 "integer.m"
      }
#line 1224 "integer.m"
  }
#line 1221 "integer.m"
}

#line 1206 "integer.m"
static void MR_CALL 
mercury__integer__printbase_mul_by_digit_2_4_p_0(
#line 1206 "integer.m"
  MR_Integer mercury__integer__D_1,
#line 1206 "integer.m"
  MR_Integer * mercury__integer__HeadVar__2_2,
#line 1206 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1206 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4)
#line 1206 "integer.m"
{
#line 1209 "integer.m"
  {
#line 1209 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 1209 "integer.m"
    if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1209 "integer.m"
      {
#line 1209 "integer.m"
        *mercury__integer__HeadVar__2_2 = (MR_Integer) 0;
#line 1209 "integer.m"
        *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1209 "integer.m"
      }
#line 1209 "integer.m"
    else
#line 1210 "integer.m"
      {
#line 1210 "integer.m"
        MR_Integer mercury__integer__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 1210 "integer.m"
        MR_Word mercury__integer__Xs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 1210 "integer.m"
        MR_Integer mercury__integer__Mod_10;
#line 1210 "integer.m"
        MR_Word mercury__integer__NewXs_11;
#line 1210 "integer.m"
        MR_Integer mercury__integer__DivXs_12;
#line 1210 "integer.m"
        MR_Integer mercury__integer__V_13_13;
#line 1210 "integer.m"
        MR_Integer mercury__integer__V_14_14;
#line 1210 "integer.m"
        MR_Integer mercury__integer__V_6_23;
#line 1210 "integer.m"
        MR_Integer mercury__integer__V_7_24;

#line 1211 "integer.m"
        {
#line 1211 "integer.m"
          mercury__integer__printbase_mul_by_digit_2_4_p_0(mercury__integer__D_1, &mercury__integer__DivXs_12, mercury__integer__Xs_9, &mercury__integer__NewXs_11);
        }
#line 1212 "integer.m"
        mercury__integer__V_14_14 = (mercury__integer__D_1 * mercury__integer__X_8);
#line 1212 "integer.m"
        mercury__integer__V_13_13 = (mercury__integer__V_14_14 + mercury__integer__DivXs_12);
#line 113 "int.opt"
        {
#line 113 "int.opt"
          mercury__integer__V_7_24 = mercury__int__div_2_f_0(mercury__integer__V_13_13, (MR_Integer) 10000);
        }
#line 112 "int.opt"
        mercury__integer__V_6_23 = (mercury__integer__V_7_24 * (MR_Integer) 10000);
#line 111 "int.opt"
        mercury__integer__Mod_10 = (mercury__integer__V_13_13 - mercury__integer__V_6_23);
#line 1198 "integer.m"
        {
#line 1198 "integer.m"
          *mercury__integer__HeadVar__2_2 = mercury__int__div_2_f_0(mercury__integer__V_13_13, (MR_Integer) 10000);
        }
#line 1210 "integer.m"
        {
#line 1210 "integer.m"
          MR_Word base;
#line 1210 "integer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "integer.m"
          *mercury__integer__HeadVar__4_4 = base;
#line 1210 "integer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_10));
#line 1210 "integer.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__NewXs_11));
#line 1210 "integer.m"
        }
#line 1210 "integer.m"
      }
#line 1209 "integer.m"
  }
#line 1206 "integer.m"
}

#line 1182 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_pos_int_to_digits_2_2_f_0(
#line 1182 "integer.m"
  MR_Integer mercury__integer__D_4,
#line 1182 "integer.m"
  MR_Word mercury__integer__Tail_5)
#line 1182 "integer.m"
{
#line 1187 "integer.m"
  while (MR_TRUE)
#line 1187 "integer.m"
    {
#line 1187 "integer.m"
      /* tailcall optimized into a loop */
#line 1187 "integer.m"
      {
#line 1187 "integer.m"
        MR_bool mercury__integer__succeeded = (mercury__integer__D_4 == (MR_Integer) 0);
#line 1187 "integer.m"
        MR_Word mercury__integer__Result_6;

#line 1187 "integer.m"
        if (mercury__integer__succeeded)
#line 1186 "integer.m"
          mercury__integer__Result_6 = mercury__integer__Tail_5;
#line 1187 "integer.m"
        else
#line 1188 "integer.m"
          {
#line 1188 "integer.m"
            MR_Integer mercury__integer__Length_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_5, (MR_Integer) 0)));
#line 1188 "integer.m"
            MR_Word mercury__integer__Digits_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_5, (MR_Integer) 1)));
#line 1188 "integer.m"
            MR_Integer mercury__integer__Div_9;
#line 1188 "integer.m"
            MR_Integer mercury__integer__Mod_10;
#line 1188 "integer.m"
            MR_Word mercury__integer__V_11_11;
#line 1188 "integer.m"
            MR_Integer mercury__integer__V_12_12;
#line 1188 "integer.m"
            MR_Word mercury__integer__V_14_14;
#line 1188 "integer.m"
            MR_Integer mercury__integer__V_6_23;
#line 1188 "integer.m"
            MR_Integer mercury__integer__V_7_24;

#line 113 "int.opt"
            {
#line 113 "int.opt"
              mercury__integer__V_7_24 = mercury__int__div_2_f_0(mercury__integer__D_4, (MR_Integer) 10000);
            }
#line 112 "int.opt"
            mercury__integer__V_6_23 = (mercury__integer__V_7_24 * (MR_Integer) 10000);
#line 111 "int.opt"
            mercury__integer__Mod_10 = (mercury__integer__D_4 - mercury__integer__V_6_23);
#line 1198 "integer.m"
            {
#line 1198 "integer.m"
              mercury__integer__Div_9 = mercury__int__div_2_f_0(mercury__integer__D_4, (MR_Integer) 10000);
            }
#line 1191 "integer.m"
            mercury__integer__V_12_12 = (mercury__integer__Length_7 + (MR_Integer) 1);
#line 1191 "integer.m"
            {
#line 1191 "integer.m"
              mercury__integer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__Mod_10));
#line 1191 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__Digits_8));
#line 1191 "integer.m"
            }
#line 1191 "integer.m"
            {
#line 1191 "integer.m"
              mercury__integer__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1191 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 0) = ((MR_Box) (mercury__integer__V_12_12));
#line 1191 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 1) = ((MR_Box) (mercury__integer__V_14_14));
#line 1191 "integer.m"
            }
#line 1190 "integer.m"
            /* direct tailcall eliminated */
#line 1190 "integer.m"
            {
#line 1190 "integer.m"
              MR_Integer mercury__integer__D__tmp_copy_4 = mercury__integer__Div_9;
#line 1190 "integer.m"
              MR_Word mercury__integer__Tail__tmp_copy_5 = mercury__integer__V_11_11;

#line 1190 "integer.m"
              mercury__integer__Tail_5 = mercury__integer__Tail__tmp_copy_5;
#line 1190 "integer.m"
              mercury__integer__D_4 = mercury__integer__D__tmp_copy_4;
#line 1190 "integer.m"
            }
#line 1190 "integer.m"
            continue;
#line 1188 "integer.m"
          }
#line 1187 "integer.m"
        return mercury__integer__Result_6;
#line 1187 "integer.m"
      }
#line 1187 "integer.m"
      break;
#line 1187 "integer.m"
    }
#line 1182 "integer.m"
}

#line 1150 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_rep_1_3_f_0(
#line 1150 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1150 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1150 "integer.m"
  MR_Word mercury__integer__Carry_3)
#line 1150 "integer.m"
{
#line 1152 "integer.m"
  while (MR_TRUE)
#line 1152 "integer.m"
    {
#line 1152 "integer.m"
      /* tailcall optimized into a loop */
#line 1152 "integer.m"
      {
#line 1152 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1152 "integer.m"
        MR_Word mercury__integer__HeadVar__4_4;

#line 1152 "integer.m"
        if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1152 "integer.m"
          mercury__integer__HeadVar__4_4 = mercury__integer__Carry_3;
#line 1152 "integer.m"
        else
#line 1153 "integer.m"
          {
#line 1153 "integer.m"
            MR_Integer mercury__integer__X_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1153 "integer.m"
            MR_Word mercury__integer__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1153 "integer.m"
            MR_Word mercury__integer__V_11_11;
#line 1153 "integer.m"
            MR_Word mercury__integer__V_12_12;
#line 1153 "integer.m"
            MR_Word mercury__integer__V_13_13;
#line 1153 "integer.m"
            MR_Integer mercury__integer__L1_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 1153 "integer.m"
            MR_Word mercury__integer__Ds1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1153 "integer.m"
            MR_Integer mercury__integer__L2_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_3, (MR_Integer) 0)));
#line 1153 "integer.m"
            MR_Word mercury__integer__Ds2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_3, (MR_Integer) 1)));
#line 1153 "integer.m"
            MR_Word mercury__integer__V_27_27;
#line 1153 "integer.m"
            MR_Word mercury__integer__V_29_29;
#line 1153 "integer.m"
            MR_Integer mercury__integer__L1_31;
#line 1153 "integer.m"
            MR_Integer mercury__integer__L2_33;
#line 1153 "integer.m"
            MR_Integer mercury__integer__Div_35;
#line 1153 "integer.m"
            MR_Word mercury__integer__Ds_36;
#line 1153 "integer.m"
            MR_Integer mercury__integer__Len_37;
#line 1216 "integer.m"
            MR_Word mercury__integer__D1_32;
#line 1216 "integer.m"
            MR_Word mercury__integer__D2_34;

#line 1251 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_14 < mercury__integer__L2_16);
#line 1250 "integer.m"
            if (mercury__integer__succeeded)
#line 1252 "integer.m"
              {
#line 1252 "integer.m"
                MR_Word mercury__integer__V_18_18 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1252 "integer.m"
                MR_Word mercury__integer__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1252 "integer.m"
                {
#line 1252 "integer.m"
                  mercury__integer__V_12_12 = mercury__integer__printbase_pos_mul_list_3_f_0(mercury__integer__Ds1_15, mercury__integer__V_18_18, mercury__integer__Carry_3);
                }
#line 1252 "integer.m"
              }
#line 1250 "integer.m"
            else
#line 1254 "integer.m"
              {
#line 1254 "integer.m"
                MR_Word mercury__integer__V_20_20 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1254 "integer.m"
                MR_Word mercury__integer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1254 "integer.m"
                {
#line 1254 "integer.m"
                  mercury__integer__V_12_12 = mercury__integer__printbase_pos_mul_list_3_f_0(mercury__integer__Ds2_17, mercury__integer__V_20_20, mercury__integer__HeadVar__2_2);
                }
#line 1254 "integer.m"
              }
#line 1057 "integer.m"
            mercury__integer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1057 "integer.m"
            mercury__integer__V_27_27 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1180 "integer.m"
            {
#line 1180 "integer.m"
              mercury__integer__V_13_13 = mercury__integer__printbase_pos_int_to_digits_2_2_f_0(mercury__integer__X_7, mercury__integer__V_27_27);
            }
#line 1216 "integer.m"
            mercury__integer__L1_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, (MR_Integer) 0)));
#line 1216 "integer.m"
            mercury__integer__D1_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, (MR_Integer) 1)));
#line 1216 "integer.m"
            mercury__integer__L2_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, (MR_Integer) 0)));
#line 1216 "integer.m"
            mercury__integer__D2_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, (MR_Integer) 1)));
#line 1217 "integer.m"
            {
#line 1217 "integer.m"
              mercury__integer__printbase_add_pairs_4_p_0(&mercury__integer__Div_35, mercury__integer__V_12_12, mercury__integer__V_13_13, &mercury__integer__Ds_36);
            }
#line 1218 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_31 > mercury__integer__L2_33);
#line 1218 "integer.m"
            if (mercury__integer__succeeded)
#line 1218 "integer.m"
              mercury__integer__Len_37 = mercury__integer__L1_31;
#line 1218 "integer.m"
            else
#line 1218 "integer.m"
              mercury__integer__Len_37 = mercury__integer__L2_33;
#line 1219 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Div_35 == (MR_Integer) 0);
#line 1219 "integer.m"
            if (mercury__integer__succeeded)
#line 1219 "integer.m"
              {
#line 1219 "integer.m"
                mercury__integer__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1219 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 0) = ((MR_Box) (mercury__integer__Len_37));
#line 1219 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 1) = ((MR_Box) (mercury__integer__Ds_36));
#line 1219 "integer.m"
              }
#line 1219 "integer.m"
            else
#line 1219 "integer.m"
              {
#line 1219 "integer.m"
                MR_Integer mercury__integer__V_40_40 = (mercury__integer__Len_37 + (MR_Integer) 1);
#line 1219 "integer.m"
                MR_Word mercury__integer__V_42_42;

#line 1219 "integer.m"
                {
#line 1219 "integer.m"
                  mercury__integer__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1219 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_42_42, 0) = ((MR_Box) (mercury__integer__Div_35));
#line 1219 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_42_42, 1) = ((MR_Box) (mercury__integer__Ds_36));
#line 1219 "integer.m"
                }
#line 1219 "integer.m"
                {
#line 1219 "integer.m"
                  mercury__integer__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1219 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 0) = ((MR_Box) (mercury__integer__V_40_40));
#line 1219 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 1) = ((MR_Box) (mercury__integer__V_42_42));
#line 1219 "integer.m"
                }
#line 1219 "integer.m"
              }
#line 1154 "integer.m"
            /* direct tailcall eliminated */
#line 1154 "integer.m"
            {
#line 1154 "integer.m"
              MR_Word mercury__integer__HeadVar__1__tmp_copy_1 = mercury__integer__Xs_8;
#line 1154 "integer.m"
              MR_Word mercury__integer__Carry__tmp_copy_3 = mercury__integer__V_11_11;

#line 1154 "integer.m"
              mercury__integer__Carry_3 = mercury__integer__Carry__tmp_copy_3;
#line 1154 "integer.m"
              mercury__integer__HeadVar__1_1 = mercury__integer__HeadVar__1__tmp_copy_1;
#line 1154 "integer.m"
            }
#line 1154 "integer.m"
            continue;
#line 1153 "integer.m"
          }
#line 1152 "integer.m"
        return mercury__integer__HeadVar__4_4;
#line 1152 "integer.m"
      }
#line 1152 "integer.m"
      break;
#line 1152 "integer.m"
    }
#line 1150 "integer.m"
}

#line 1137 "integer.m"
static void MR_CALL 
mercury__integer__digits_to_strings_3_p_0(
#line 1137 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1137 "integer.m"
  MR_Word * mercury__integer__DCG_0_2,
#line 1137 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3)
#line 1137 "integer.m"
{
#line 1140 "integer.m"
  {
#line 1140 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 1140 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1140 "integer.m"
      *mercury__integer__DCG_0_2 = mercury__integer__HeadVar__3_3;
#line 1140 "integer.m"
    else
#line 1141 "integer.m"
      {
#line 1141 "integer.m"
        MR_Integer mercury__integer__H_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1141 "integer.m"
        MR_Word mercury__integer__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1141 "integer.m"
        MR_String mercury__integer__S_8;
#line 1141 "integer.m"
        MR_Word mercury__integer__DCG_1_10;
#line 1141 "integer.m"
        MR_String mercury__integer__S1_14;

#line 705 "string.opt"
        {
#line 705 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__integer__H_6, (MR_Integer) 10, &mercury__integer__S1_14);
        }
#line 1162 "integer.m"
        {
#line 1162 "integer.m"
          mercury__string__pad_left_4_p_0(mercury__integer__S1_14, (MR_Char) 48, (MR_Integer) 4, &mercury__integer__S_8);
        }
#line 1144 "integer.m"
        {
#line 1144 "integer.m"
          mercury__integer__digits_to_strings_3_p_0(mercury__integer__T_7, &mercury__integer__DCG_1_10, mercury__integer__HeadVar__3_3);
        }
#line 1143 "integer.m"
        {
#line 1143 "integer.m"
          MR_Word base;
#line 1143 "integer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "integer.m"
          *mercury__integer__DCG_0_2 = base;
#line 1143 "integer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__S_8));
#line 1143 "integer.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__DCG_1_10));
#line 1143 "integer.m"
        }
#line 1141 "integer.m"
      }
#line 1140 "integer.m"
  }
#line 1137 "integer.m"
}

#line 1088 "integer.m"
static MR_bool MR_CALL 
mercury__integer__string_to_integer_acc_2_f_0(
#line 1088 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1088 "integer.m"
  MR_Word mercury__integer__Acc_2,
#line 1088 "integer.m"
  MR_Word * mercury__integer__HeadVar__3_3)
#line 1088 "integer.m"
{
#line 1091 "integer.m"
  while (MR_TRUE)
#line 1091 "integer.m"
    {
#line 1091 "integer.m"
      /* tailcall optimized into a loop */
#line 1091 "integer.m"
      {
#line 1091 "integer.m"
        MR_bool mercury__integer__succeeded;

#line 1091 "integer.m"
        if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1091 "integer.m"
          {
#line 1091 "integer.m"
            *mercury__integer__HeadVar__3_3 = mercury__integer__Acc_2;
#line 1091 "integer.m"
            mercury__integer__succeeded = MR_TRUE;
#line 1091 "integer.m"
          }
#line 1091 "integer.m"
        else
#line 1092 "integer.m"
          {
#line 1092 "integer.m"
            MR_Char mercury__integer__C_5 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1092 "integer.m"
            MR_Word mercury__integer__Cs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1092 "integer.m"
            MR_Integer mercury__integer__Digit0_9;
#line 1092 "integer.m"
            MR_Integer mercury__integer__Z_10;
#line 1092 "integer.m"
            MR_Word mercury__integer__Digit_11;
#line 1092 "integer.m"
            MR_Word mercury__integer__NewAcc_12;
#line 1092 "integer.m"
            MR_Char mercury__integer__V_13_13;
#line 1092 "integer.m"
            MR_Integer mercury__integer__V_14_14;
#line 1092 "integer.m"
            MR_Word mercury__integer__V_15_15;
#line 1092 "integer.m"
            MR_Integer mercury__integer__V_16_16;
#line 1092 "integer.m"
            MR_Word mercury__integer__V_23_23;
#line 1092 "integer.m"
            MR_Integer mercury__integer__V_24_24;
#line 1092 "integer.m"
            MR_Word mercury__integer__V_25_25;
#line 1092 "integer.m"
            MR_Integer mercury__integer__Len_28;
#line 1092 "integer.m"
            MR_Word mercury__integer__Digits0_29;
#line 1092 "integer.m"
            MR_Integer mercury__integer__Mod_30;
#line 1092 "integer.m"
            MR_Word mercury__integer__Digits_31;
#line 1092 "integer.m"
            MR_Integer mercury__integer__L1_36;
#line 1092 "integer.m"
            MR_Integer mercury__integer__L2_38;
#line 1092 "integer.m"
            MR_Integer mercury__integer__Div_40;
#line 1092 "integer.m"
            MR_Word mercury__integer__Ds_41;
#line 1092 "integer.m"
            MR_Integer mercury__integer__Len_42;
#line 685 "integer.m"
            MR_Word mercury__integer__D1_37;
#line 685 "integer.m"
            MR_Word mercury__integer__D2_39;

#line 120 "char.opt"
            {
#line 120 "char.opt"
              mercury__integer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__integer__C_5);
            }
#line 1092 "integer.m"
            if (mercury__integer__succeeded)
#line 1092 "integer.m"
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

#line 3120 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__Digit0_9  = Int;
#line 66 "char.opt"
}
#line 1099 "integer.m"
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

#line 3142 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__Z_10  = Int;
#line 66 "char.opt"
}
#line 1100 "integer.m"
                mercury__integer__V_14_14 = (mercury__integer__Digit0_9 - mercury__integer__Z_10);
#line 1057 "integer.m"
                mercury__integer__V_24_24 = (MR_Integer) 0;
#line 1057 "integer.m"
                mercury__integer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1057 "integer.m"
                mercury__integer__V_23_23 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 633 "integer.m"
                {
#line 633 "integer.m"
                  mercury__integer__Digit_11 = mercury__integer__pos_int_to_digits_2_2_f_0(mercury__integer__V_14_14, mercury__integer__V_23_23);
                }
#line 1101 "integer.m"
                mercury__integer__V_16_16 = (MR_Integer) 10;
#line 665 "integer.m"
                mercury__integer__Len_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Acc_2, (MR_Integer) 0)));
#line 665 "integer.m"
                mercury__integer__Digits0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Acc_2, (MR_Integer) 1)));
#line 666 "integer.m"
                {
#line 666 "integer.m"
                  mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__V_16_16, &mercury__integer__Mod_30, mercury__integer__Digits0_29, &mercury__integer__Digits_31);
                }
#line 667 "integer.m"
                mercury__integer__succeeded = (mercury__integer__Mod_30 == (MR_Integer) 0);
#line 667 "integer.m"
                if (mercury__integer__succeeded)
#line 667 "integer.m"
                  {
#line 667 "integer.m"
                    mercury__integer__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, 0) = ((MR_Box) (mercury__integer__Len_28));
#line 667 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, 1) = ((MR_Box) (mercury__integer__Digits_31));
#line 667 "integer.m"
                  }
#line 667 "integer.m"
                else
#line 667 "integer.m"
                  {
#line 667 "integer.m"
                    MR_Integer mercury__integer__V_32_32 = (mercury__integer__Len_28 + (MR_Integer) 1);
#line 667 "integer.m"
                    MR_Word mercury__integer__V_34_34;

#line 667 "integer.m"
                    {
#line 667 "integer.m"
                      mercury__integer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_34_34, 0) = ((MR_Box) (mercury__integer__Mod_30));
#line 667 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_34_34, 1) = ((MR_Box) (mercury__integer__Digits_31));
#line 667 "integer.m"
                    }
#line 667 "integer.m"
                    {
#line 667 "integer.m"
                      mercury__integer__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, 0) = ((MR_Box) (mercury__integer__V_32_32));
#line 667 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, 1) = ((MR_Box) (mercury__integer__V_34_34));
#line 667 "integer.m"
                    }
#line 667 "integer.m"
                  }
#line 685 "integer.m"
                mercury__integer__L1_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Digit_11, (MR_Integer) 0)));
#line 685 "integer.m"
                mercury__integer__D1_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Digit_11, (MR_Integer) 1)));
#line 685 "integer.m"
                mercury__integer__L2_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, (MR_Integer) 0)));
#line 685 "integer.m"
                mercury__integer__D2_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, (MR_Integer) 1)));
#line 686 "integer.m"
                {
#line 686 "integer.m"
                  mercury__integer__add_pairs_4_p_0(&mercury__integer__Div_40, mercury__integer__Digit_11, mercury__integer__V_15_15, &mercury__integer__Ds_41);
                }
#line 687 "integer.m"
                mercury__integer__succeeded = (mercury__integer__L1_36 > mercury__integer__L2_38);
#line 687 "integer.m"
                if (mercury__integer__succeeded)
#line 687 "integer.m"
                  mercury__integer__Len_42 = mercury__integer__L1_36;
#line 687 "integer.m"
                else
#line 687 "integer.m"
                  mercury__integer__Len_42 = mercury__integer__L2_38;
#line 688 "integer.m"
                mercury__integer__succeeded = (mercury__integer__Div_40 == (MR_Integer) 0);
#line 688 "integer.m"
                if (mercury__integer__succeeded)
#line 688 "integer.m"
                  {
#line 688 "integer.m"
                    mercury__integer__NewAcc_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 688 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__NewAcc_12, 0) = ((MR_Box) (mercury__integer__Len_42));
#line 688 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__NewAcc_12, 1) = ((MR_Box) (mercury__integer__Ds_41));
#line 688 "integer.m"
                  }
#line 688 "integer.m"
                else
#line 688 "integer.m"
                  {
#line 688 "integer.m"
                    MR_Integer mercury__integer__V_45_45 = (mercury__integer__Len_42 + (MR_Integer) 1);
#line 688 "integer.m"
                    MR_Word mercury__integer__V_47_47;

#line 688 "integer.m"
                    {
#line 688 "integer.m"
                      mercury__integer__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_47_47, 0) = ((MR_Box) (mercury__integer__Div_40));
#line 688 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_47_47, 1) = ((MR_Box) (mercury__integer__Ds_41));
#line 688 "integer.m"
                    }
#line 688 "integer.m"
                    {
#line 688 "integer.m"
                      mercury__integer__NewAcc_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 688 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__NewAcc_12, 0) = ((MR_Box) (mercury__integer__V_45_45));
#line 688 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__NewAcc_12, 1) = ((MR_Box) (mercury__integer__V_47_47));
#line 688 "integer.m"
                    }
#line 688 "integer.m"
                  }
#line 1102 "integer.m"
                /* direct tailcall eliminated */
#line 1102 "integer.m"
                {
#line 1102 "integer.m"
                  MR_Word mercury__integer__HeadVar__1__tmp_copy_1 = mercury__integer__Cs_6;
#line 1102 "integer.m"
                  MR_Word mercury__integer__Acc__tmp_copy_2 = mercury__integer__NewAcc_12;

#line 1102 "integer.m"
                  mercury__integer__Acc_2 = mercury__integer__Acc__tmp_copy_2;
#line 1102 "integer.m"
                  mercury__integer__HeadVar__1_1 = mercury__integer__HeadVar__1__tmp_copy_1;
#line 1102 "integer.m"
                }
#line 1102 "integer.m"
                continue;
#line 1092 "integer.m"
              }
#line 1092 "integer.m"
          }
#line 1091 "integer.m"
        return mercury__integer__succeeded;
#line 1091 "integer.m"
      }
#line 1091 "integer.m"
      break;
#line 1091 "integer.m"
    }
#line 1088 "integer.m"
}

#line 1078 "integer.m"
MR_bool MR_CALL 
mercury__integer__string_to_integer_1_f_0(
#line 1078 "integer.m"
  MR_Word mercury__integer__CCs0_1,
#line 1078 "integer.m"
  MR_Word * mercury__integer__Integer_6)
#line 1078 "integer.m"
{
#line 1080 "integer.m"
  {
#line 1080 "integer.m"
    MR_bool mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__CCs0_1)) == (MR_mktag((MR_Integer) 1)));
#line 1080 "integer.m"
    MR_Char mercury__integer__C_4;
#line 1080 "integer.m"
    MR_Word mercury__integer__Cs_5;

#line 1080 "integer.m"
    if (mercury__integer__succeeded)
#line 1080 "integer.m"
      {
#line 1080 "integer.m"
        mercury__integer__C_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__CCs0_1, (MR_Integer) 0)));
#line 1080 "integer.m"
        mercury__integer__Cs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__CCs0_1, (MR_Integer) 1)));
#line 1081 "integer.m"
        mercury__integer__succeeded = (mercury__integer__C_4 == (MR_Char) 45);
#line 1083 "integer.m"
        if (mercury__integer__succeeded)
#line 1082 "integer.m"
          {
#line 1082 "integer.m"
            MR_Word mercury__integer__V_9_9;

#line 1082 "integer.m"
            {
#line 1082 "integer.m"
              mercury__integer__succeeded = mercury__integer__string_to_integer_1_f_0(mercury__integer__Cs_5, &mercury__integer__V_9_9);
            }
#line 1082 "integer.m"
            if (mercury__integer__succeeded)
#line 1082 "integer.m"
              {
#line 1082 "integer.m"
                {
#line 1082 "integer.m"
                  *mercury__integer__Integer_6 = mercury__integer__big_sign_2_f_0((MR_Integer) -1, mercury__integer__V_9_9);
                }
#line 1082 "integer.m"
                mercury__integer__succeeded = MR_TRUE;
#line 1082 "integer.m"
              }
#line 1082 "integer.m"
          }
#line 1083 "integer.m"
        else
#line 1084 "integer.m"
          {
#line 1084 "integer.m"
            MR_Word mercury__integer__CCs_7;
#line 1084 "integer.m"
            MR_Word mercury__integer__V_10_10;
#line 1084 "integer.m"
            MR_Word mercury__integer__V_12_12;

#line 1084 "integer.m"
            mercury__integer__succeeded = (mercury__integer__C_4 == (MR_Char) 43);
#line 1084 "integer.m"
            if (mercury__integer__succeeded)
#line 1084 "integer.m"
              mercury__integer__CCs_7 = mercury__integer__Cs_5;
#line 1084 "integer.m"
            else
#line 1084 "integer.m"
              mercury__integer__CCs_7 = mercury__integer__CCs0_1;
#line 1057 "integer.m"
            mercury__integer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1057 "integer.m"
            mercury__integer__V_10_10 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1085 "integer.m"
            {
#line 1085 "integer.m"
              return mercury__integer__succeeded = mercury__integer__string_to_integer_acc_2_f_0(mercury__integer__CCs_7, mercury__integer__V_10_10, mercury__integer__Integer_6);
            }
#line 1084 "integer.m"
          }
#line 1080 "integer.m"
      }
#line 1080 "integer.m"
    return mercury__integer__succeeded;
#line 1080 "integer.m"
  }
#line 1078 "integer.m"
}

#line 1052 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__int_list_2_f_0(
#line 1052 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1052 "integer.m"
  MR_Integer mercury__integer__Accum_2)
#line 1052 "integer.m"
{
#line 1054 "integer.m"
  while (MR_TRUE)
#line 1054 "integer.m"
    {
#line 1054 "integer.m"
      /* tailcall optimized into a loop */
#line 1054 "integer.m"
      {
#line 1054 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1054 "integer.m"
        MR_Integer mercury__integer__HeadVar__3_3;

#line 1054 "integer.m"
        if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1054 "integer.m"
          mercury__integer__HeadVar__3_3 = mercury__integer__Accum_2;
#line 1054 "integer.m"
        else
#line 1055 "integer.m"
          {
#line 1055 "integer.m"
            MR_Integer mercury__integer__H_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1055 "integer.m"
            MR_Word mercury__integer__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1055 "integer.m"
            MR_Integer mercury__integer__V_8_8;
#line 1055 "integer.m"
            MR_Integer mercury__integer__V_9_9 = (mercury__integer__Accum_2 * (MR_Integer) 16384);

#line 1055 "integer.m"
            mercury__integer__V_8_8 = (mercury__integer__V_9_9 + mercury__integer__H_5);
#line 1055 "integer.m"
            /* direct tailcall eliminated */
#line 1055 "integer.m"
            {
#line 1055 "integer.m"
              MR_Word mercury__integer__HeadVar__1__tmp_copy_1 = mercury__integer__T_6;
#line 1055 "integer.m"
              MR_Integer mercury__integer__Accum__tmp_copy_2 = mercury__integer__V_8_8;

#line 1055 "integer.m"
              mercury__integer__Accum_2 = mercury__integer__Accum__tmp_copy_2;
#line 1055 "integer.m"
              mercury__integer__HeadVar__1_1 = mercury__integer__HeadVar__1__tmp_copy_1;
#line 1055 "integer.m"
            }
#line 1055 "integer.m"
            continue;
#line 1055 "integer.m"
          }
#line 1054 "integer.m"
        return mercury__integer__HeadVar__3_3;
#line 1054 "integer.m"
      }
#line 1054 "integer.m"
      break;
#line 1054 "integer.m"
    }
#line 1052 "integer.m"
}

#line 1035 "integer.m"
MR_Float MR_CALL 
mercury__integer__float_list_3_f_0(
#line 1035 "integer.m"
  MR_Float mercury__integer__FBase_1,
#line 1035 "integer.m"
  MR_Float mercury__integer__Accum_2,
#line 1035 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3)
#line 1035 "integer.m"
{
#line 1037 "integer.m"
  while (MR_TRUE)
#line 1037 "integer.m"
    {
#line 1037 "integer.m"
      /* tailcall optimized into a loop */
#line 1037 "integer.m"
      {
#line 1037 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1037 "integer.m"
        MR_Float mercury__integer__HeadVar__4_4;

#line 1037 "integer.m"
        if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1037 "integer.m"
          mercury__integer__HeadVar__4_4 = mercury__integer__Accum_2;
#line 1037 "integer.m"
        else
#line 1038 "integer.m"
          {
#line 1038 "integer.m"
            MR_Integer mercury__integer__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 1038 "integer.m"
            MR_Word mercury__integer__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 1038 "integer.m"
            MR_Float mercury__integer__V_11_11;
#line 1038 "integer.m"
            MR_Float mercury__integer__V_12_12 = (mercury__integer__Accum_2 * mercury__integer__FBase_1);
#line 1038 "integer.m"
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

#line 3541 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_13_13  = FloatVal;
#line 81 "float.opt"
}
#line 1039 "integer.m"
            mercury__integer__V_11_11 = (mercury__integer__V_12_12 + mercury__integer__V_13_13);
#line 1039 "integer.m"
            /* direct tailcall eliminated */
#line 1039 "integer.m"
            {
#line 1039 "integer.m"
              MR_Float mercury__integer__Accum__tmp_copy_2 = mercury__integer__V_11_11;
#line 1039 "integer.m"
              MR_Word mercury__integer__HeadVar__3__tmp_copy_3 = mercury__integer__T_10;

#line 1039 "integer.m"
              mercury__integer__HeadVar__3_3 = mercury__integer__HeadVar__3__tmp_copy_3;
#line 1039 "integer.m"
              mercury__integer__Accum_2 = mercury__integer__Accum__tmp_copy_2;
#line 1039 "integer.m"
            }
#line 1039 "integer.m"
            continue;
#line 1038 "integer.m"
          }
#line 1037 "integer.m"
        return mercury__integer__HeadVar__4_4;
#line 1037 "integer.m"
      }
#line 1037 "integer.m"
      break;
#line 1037 "integer.m"
    }
#line 1035 "integer.m"
}

#line 1018 "integer.m"
static MR_Word MR_CALL 
mercury__integer__bits_pow_4_f_0(
#line 1018 "integer.m"
  MR_Integer mercury__integer__Shifts_6,
#line 1018 "integer.m"
  MR_Integer mercury__integer__H_7,
#line 1018 "integer.m"
  MR_Word mercury__integer__A_8,
#line 1018 "integer.m"
  MR_Word mercury__integer__Accum_9)
#line 1018 "integer.m"
{
#line 1020 "integer.m"
  {
#line 1020 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__Shifts_6 <= (MR_Integer) 0);
#line 1020 "integer.m"
    MR_Word mercury__integer__HeadVar__5_5;

#line 1020 "integer.m"
    if (mercury__integer__succeeded)
#line 1020 "integer.m"
      mercury__integer__HeadVar__5_5 = mercury__integer__Accum_9;
#line 1020 "integer.m"
    else
#line 1020 "integer.m"
      {
#line 1023 "integer.m"
        MR_Integer mercury__integer__V_11_11 = (mercury__integer__H_7 & (MR_Integer) 1);

#line 1023 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_11_11 == (MR_Integer) 1);
#line 1020 "integer.m"
        if (mercury__integer__succeeded)
#line 1024 "integer.m"
          {
#line 1024 "integer.m"
            MR_Word mercury__integer__V_13_13;
#line 1024 "integer.m"
            MR_Integer mercury__integer__V_14_14 = (mercury__integer__H_7 & (MR_Integer) 16382);

#line 1024 "integer.m"
            {
#line 1024 "integer.m"
              mercury__integer__V_13_13 = mercury__integer__bits_pow_4_f_0(mercury__integer__Shifts_6, mercury__integer__V_14_14, mercury__integer__A_8, mercury__integer__Accum_9);
            }
#line 233 "integer.m"
            {
#line 233 "integer.m"
              return mercury__integer__HeadVar__5_5 = mercury__integer__big_mul_2_f_0(mercury__integer__A_8, mercury__integer__V_13_13);
            }
#line 1024 "integer.m"
          }
#line 1020 "integer.m"
        else
#line 1026 "integer.m"
          {
#line 1026 "integer.m"
            MR_Word mercury__integer__V_16_16;
#line 1026 "integer.m"
            MR_Integer mercury__integer__V_17_17 = (mercury__integer__Shifts_6 - (MR_Integer) 1);
#line 1026 "integer.m"
            MR_Integer mercury__integer__V_19_19;

#line 1026 "integer.m"
            {
#line 1026 "integer.m"
              mercury__integer__V_19_19 = mercury__int__f_62_62_2_f_0(mercury__integer__H_7, (MR_Integer) 1);
            }
#line 1026 "integer.m"
            {
#line 1026 "integer.m"
              mercury__integer__V_16_16 = mercury__integer__bits_pow_4_f_0(mercury__integer__V_17_17, mercury__integer__V_19_19, mercury__integer__A_8, mercury__integer__Accum_9);
            }
#line 233 "integer.m"
            {
#line 233 "integer.m"
              return mercury__integer__HeadVar__5_5 = mercury__integer__big_mul_2_f_0(mercury__integer__V_16_16, mercury__integer__V_16_16);
            }
#line 1026 "integer.m"
          }
#line 1020 "integer.m"
      }
#line 1020 "integer.m"
    return mercury__integer__HeadVar__5_5;
#line 1020 "integer.m"
  }
#line 1018 "integer.m"
}

#line 1012 "integer.m"
static MR_Word MR_CALL 
mercury__integer__bits_pow_list_3_f_0(
#line 1012 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1012 "integer.m"
  MR_Word mercury__integer__A_2,
#line 1012 "integer.m"
  MR_Word mercury__integer__Accum_3)
#line 1012 "integer.m"
{
#line 1014 "integer.m"
  while (MR_TRUE)
#line 1014 "integer.m"
    {
#line 1014 "integer.m"
      /* tailcall optimized into a loop */
#line 1014 "integer.m"
      {
#line 1014 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1014 "integer.m"
        MR_Word mercury__integer__HeadVar__4_4;

#line 1014 "integer.m"
        if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1014 "integer.m"
          mercury__integer__HeadVar__4_4 = mercury__integer__Accum_3;
#line 1014 "integer.m"
        else
#line 1015 "integer.m"
          {
#line 1015 "integer.m"
            MR_Integer mercury__integer__H_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1015 "integer.m"
            MR_Word mercury__integer__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1015 "integer.m"
            MR_Word mercury__integer__V_11_11;

#line 1016 "integer.m"
            {
#line 1016 "integer.m"
              mercury__integer__V_11_11 = mercury__integer__bits_pow_4_f_0((MR_Integer) 14, mercury__integer__H_7, mercury__integer__A_2, mercury__integer__Accum_3);
            }
#line 1016 "integer.m"
            /* direct tailcall eliminated */
#line 1016 "integer.m"
            {
#line 1016 "integer.m"
              MR_Word mercury__integer__HeadVar__1__tmp_copy_1 = mercury__integer__T_8;
#line 1016 "integer.m"
              MR_Word mercury__integer__Accum__tmp_copy_3 = mercury__integer__V_11_11;

#line 1016 "integer.m"
              mercury__integer__Accum_3 = mercury__integer__Accum__tmp_copy_3;
#line 1016 "integer.m"
              mercury__integer__HeadVar__1_1 = mercury__integer__HeadVar__1__tmp_copy_1;
#line 1016 "integer.m"
            }
#line 1016 "integer.m"
            continue;
#line 1015 "integer.m"
          }
#line 1014 "integer.m"
        return mercury__integer__HeadVar__4_4;
#line 1014 "integer.m"
      }
#line 1014 "integer.m"
      break;
#line 1014 "integer.m"
    }
#line 1012 "integer.m"
}

#line 1001 "integer.m"
static MR_Word MR_CALL 
mercury__integer__bits_pow_head_2_f_0(
#line 1001 "integer.m"
  MR_Integer mercury__integer__H_4,
#line 1001 "integer.m"
  MR_Word mercury__integer__A_5)
#line 1001 "integer.m"
{
#line 1003 "integer.m"
  {
#line 1003 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__H_4 == (MR_Integer) 0);
#line 1003 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 1003 "integer.m"
    if (mercury__integer__succeeded)
#line 1059 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 1003 "integer.m"
    else
#line 1003 "integer.m"
      {
#line 1006 "integer.m"
        MR_Integer mercury__integer__V_6_6 = (mercury__integer__H_4 & (MR_Integer) 1);

#line 1006 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_6_6 == (MR_Integer) 1);
#line 1003 "integer.m"
        if (mercury__integer__succeeded)
#line 1007 "integer.m"
          {
#line 1007 "integer.m"
            MR_Word mercury__integer__V_8_8;
#line 1007 "integer.m"
            MR_Integer mercury__integer__V_9_9 = (mercury__integer__H_4 & (MR_Integer) 16382);

#line 1007 "integer.m"
            {
#line 1007 "integer.m"
              mercury__integer__V_8_8 = mercury__integer__bits_pow_head_2_f_0(mercury__integer__V_9_9, mercury__integer__A_5);
            }
#line 233 "integer.m"
            {
#line 233 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__big_mul_2_f_0(mercury__integer__A_5, mercury__integer__V_8_8);
            }
#line 1007 "integer.m"
          }
#line 1003 "integer.m"
        else
#line 1009 "integer.m"
          {
#line 1009 "integer.m"
            MR_Word mercury__integer__V_11_11;
#line 1009 "integer.m"
            MR_Integer mercury__integer__V_12_12;

#line 1009 "integer.m"
            {
#line 1009 "integer.m"
              mercury__integer__V_12_12 = mercury__int__f_62_62_2_f_0(mercury__integer__H_4, (MR_Integer) 1);
            }
#line 1009 "integer.m"
            {
#line 1009 "integer.m"
              mercury__integer__V_11_11 = mercury__integer__bits_pow_head_2_f_0(mercury__integer__V_12_12, mercury__integer__A_5);
            }
#line 233 "integer.m"
            {
#line 233 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__big_mul_2_f_0(mercury__integer__V_11_11, mercury__integer__V_11_11);
            }
#line 1009 "integer.m"
          }
#line 1003 "integer.m"
      }
#line 1003 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 1003 "integer.m"
  }
#line 1001 "integer.m"
}

#line 984 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_pow_2_f_0(
#line 984 "integer.m"
  MR_Word mercury__integer__A_4,
#line 984 "integer.m"
  MR_Word mercury__integer__N_5)
#line 984 "integer.m"
{
#line 986 "integer.m"
  {
#line 986 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 986 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 987 "integer.m"
    MR_Word mercury__integer__V_11_11 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 987 "integer.m"
    MR_Word mercury__integer__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 987 "integer.m"
    {
#line 987 "integer.m"
      mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__N_5, mercury__integer__V_11_11);
    }
#line 986 "integer.m"
    if (mercury__integer__succeeded)
#line 1059 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 986 "integer.m"
    else
#line 986 "integer.m"
      {
#line 989 "integer.m"
        MR_Word mercury__integer__V_12_12 = (MR_Word) &mercury__integer_scalar_common_1[2];

#line 989 "integer.m"
        {
#line 989 "integer.m"
          mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__N_5, mercury__integer__V_12_12);
        }
#line 986 "integer.m"
        if (mercury__integer__succeeded)
#line 986 "integer.m"
          mercury__integer__HeadVar__3_3 = mercury__integer__A_4;
#line 986 "integer.m"
        else
#line 986 "integer.m"
          {
#line 991 "integer.m"
            MR_Word mercury__integer__V_13_13 = (MR_Word) &mercury__integer_scalar_common_1[2];

#line 991 "integer.m"
            {
#line 991 "integer.m"
              mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__A_4, mercury__integer__V_13_13);
            }
#line 986 "integer.m"
            if (mercury__integer__succeeded)
#line 1059 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 986 "integer.m"
            else
#line 986 "integer.m"
              {
#line 986 "integer.m"
                MR_Word mercury__integer__V_14_14 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 993 "integer.m"
                MR_Word mercury__integer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 993 "integer.m"
                {
#line 993 "integer.m"
                  mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__A_4, mercury__integer__V_14_14);
                }
#line 986 "integer.m"
                if (mercury__integer__succeeded)
#line 1057 "integer.m"
                  mercury__integer__HeadVar__3_3 = mercury__integer__V_14_14;
#line 986 "integer.m"
                else
#line 986 "integer.m"
                  {
#line 986 "integer.m"
                    MR_Integer mercury__integer__Head_7;
#line 986 "integer.m"
                    MR_Word mercury__integer__Tail_8;
#line 995 "integer.m"
                    MR_Word mercury__integer__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__N_5, (MR_Integer) 1)));
#line 995 "integer.m"
                    MR_Integer mercury__integer__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__N_5, (MR_Integer) 0)));

#line 995 "integer.m"
                    mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 995 "integer.m"
                    if (mercury__integer__succeeded)
#line 995 "integer.m"
                      {
#line 995 "integer.m"
                        mercury__integer__Head_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, (MR_Integer) 0)));
#line 995 "integer.m"
                        mercury__integer__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, (MR_Integer) 1)));
#line 996 "integer.m"
                        {
#line 996 "integer.m"
                          MR_Word mercury__integer__V_10_10;

#line 996 "integer.m"
                          {
#line 996 "integer.m"
                            mercury__integer__V_10_10 = mercury__integer__bits_pow_head_2_f_0(mercury__integer__Head_7, mercury__integer__A_4);
                          }
#line 996 "integer.m"
                          {
#line 996 "integer.m"
                            return mercury__integer__HeadVar__3_3 = mercury__integer__bits_pow_list_3_f_0(mercury__integer__Tail_8, mercury__integer__A_4, mercury__integer__V_10_10);
                          }
#line 996 "integer.m"
                        }
#line 995 "integer.m"
                      }
#line 995 "integer.m"
                    else
#line 1057 "integer.m"
                      {
#line 1057 "integer.m"
                        MR_Word mercury__integer__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1057 "integer.m"
                        mercury__integer__HeadVar__3_3 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1057 "integer.m"
                      }
#line 986 "integer.m"
                  }
#line 986 "integer.m"
              }
#line 986 "integer.m"
          }
#line 986 "integer.m"
      }
#line 986 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 986 "integer.m"
  }
#line 984 "integer.m"
}

#line 971 "integer.m"
static MR_bool MR_CALL 
mercury__integer__pos_geq_2_p_0(
#line 971 "integer.m"
  MR_Word mercury__integer__Xs_3,
#line 971 "integer.m"
  MR_Word mercury__integer__Ys_4)
#line 971 "integer.m"
{
#line 973 "integer.m"
  {
#line 973 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 973 "integer.m"
    MR_Word mercury__integer__C_5;

#line 558 "integer.m"
    {
#line 558 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__Xs_3, mercury__integer__Ys_4);
    }
#line 975 "integer.m"
    if ((mercury__integer__C_5 == (MR_Integer) 0))
#line 975 "integer.m"
      mercury__integer__succeeded = MR_TRUE;
#line 975 "integer.m"
    else
#line 975 "integer.m"
      if ((mercury__integer__C_5 == (MR_Integer) 2))
#line 975 "integer.m"
        mercury__integer__succeeded = MR_TRUE;
#line 975 "integer.m"
      else
#line 975 "integer.m"
        mercury__integer__succeeded = MR_FALSE;
#line 973 "integer.m"
    return mercury__integer__succeeded;
#line 973 "integer.m"
  }
#line 971 "integer.m"
}

#line 960 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_3_f_0(
#line 960 "integer.m"
  MR_Integer mercury__integer__X_1,
#line 960 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 960 "integer.m"
  MR_Integer mercury__integer__D_3)
#line 960 "integer.m"
{
#line 962 "integer.m"
  {
#line 962 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 962 "integer.m"
    MR_Word mercury__integer__HeadVar__4_4;

#line 962 "integer.m"
    if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 962 "integer.m"
      {
#line 962 "integer.m"
        MR_Word mercury__integer__V_8_8;
#line 962 "integer.m"
        MR_Integer mercury__integer__V_9_9;
#line 962 "integer.m"
        MR_Word mercury__integer__V_10_10;

#line 962 "integer.m"
        {
#line 962 "integer.m"
          mercury__integer__V_9_9 = mercury__int__div_2_f_0(mercury__integer__X_1, mercury__integer__D_3);
        }
#line 962 "integer.m"
        mercury__integer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 962 "integer.m"
        {
#line 962 "integer.m"
          mercury__integer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 962 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_8_8, 0) = ((MR_Box) (mercury__integer__V_9_9));
#line 962 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_8_8, 1) = ((MR_Box) (mercury__integer__V_10_10));
#line 962 "integer.m"
        }
#line 962 "integer.m"
        {
#line 962 "integer.m"
          mercury__integer__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 962 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 962 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, 1) = ((MR_Box) (mercury__integer__V_8_8));
#line 962 "integer.m"
        }
#line 962 "integer.m"
      }
#line 962 "integer.m"
    else
#line 963 "integer.m"
      {
#line 963 "integer.m"
        MR_Integer mercury__integer__H_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 963 "integer.m"
        MR_Word mercury__integer__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 963 "integer.m"
        MR_Integer mercury__integer__Len_15;
#line 963 "integer.m"
        MR_Word mercury__integer__Tail_16;
#line 963 "integer.m"
        MR_Integer mercury__integer__V_17_17;
#line 963 "integer.m"
        MR_Word mercury__integer__V_19_19;
#line 963 "integer.m"
        MR_Integer mercury__integer__V_20_20;
#line 963 "integer.m"
        MR_Word mercury__integer__V_21_21;
#line 963 "integer.m"
        MR_Integer mercury__integer__V_22_22;
#line 963 "integer.m"
        MR_Integer mercury__integer__V_23_23;
#line 963 "integer.m"
        MR_Integer mercury__integer__V_24_24;

#line 963 "integer.m"
        {
#line 963 "integer.m"
          mercury__integer__V_20_20 = mercury__int__div_2_f_0(mercury__integer__X_1, mercury__integer__D_3);
        }
#line 292 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__div_by_digit_2_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 292 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 4124 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 292 "int.opt"
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
#line 964 "integer.m"
        mercury__integer__V_23_23 = (mercury__integer__V_24_24 * (MR_Integer) 16384);
#line 964 "integer.m"
        mercury__integer__V_22_22 = (mercury__integer__V_23_23 + mercury__integer__H_12);
#line 964 "integer.m"
        {
#line 964 "integer.m"
          mercury__integer__V_21_21 = mercury__integer__div_by_digit_2_3_f_0(mercury__integer__V_22_22, mercury__integer__T_13, mercury__integer__D_3);
        }
#line 964 "integer.m"
        mercury__integer__Len_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_21_21, (MR_Integer) 0)));
#line 964 "integer.m"
        mercury__integer__Tail_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_21_21, (MR_Integer) 1)));
#line 963 "integer.m"
        mercury__integer__V_17_17 = (mercury__integer__Len_15 + (MR_Integer) 1);
#line 963 "integer.m"
        {
#line 963 "integer.m"
          mercury__integer__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 963 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 963 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__Tail_16));
#line 963 "integer.m"
        }
#line 963 "integer.m"
        {
#line 963 "integer.m"
          mercury__integer__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 963 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, 0) = ((MR_Box) (mercury__integer__V_17_17));
#line 963 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, 1) = ((MR_Box) (mercury__integer__V_19_19));
#line 963 "integer.m"
        }
#line 963 "integer.m"
      }
#line 962 "integer.m"
    return mercury__integer__HeadVar__4_4;
#line 962 "integer.m"
  }
#line 960 "integer.m"
}

#line 947 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_1_3_f_0(
#line 947 "integer.m"
  MR_Integer mercury__integer__X_1,
#line 947 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 947 "integer.m"
  MR_Integer mercury__integer__D_3)
#line 947 "integer.m"
{
#line 949 "integer.m"
  while (MR_TRUE)
#line 949 "integer.m"
    {
#line 949 "integer.m"
      /* tailcall optimized into a loop */
#line 949 "integer.m"
      {
#line 949 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 949 "integer.m"
        MR_Word mercury__integer__Integer_4;

#line 949 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 949 "integer.m"
          {
#line 949 "integer.m"
            MR_Integer mercury__integer__Q_7;

#line 950 "integer.m"
            {
#line 950 "integer.m"
              mercury__integer__Q_7 = mercury__int__div_2_f_0(mercury__integer__X_1, mercury__integer__D_3);
            }
#line 949 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Q_7 == (MR_Integer) 0);
#line 949 "integer.m"
            if (mercury__integer__succeeded)
#line 1057 "integer.m"
              {
#line 1057 "integer.m"
                MR_Word mercury__integer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1057 "integer.m"
                mercury__integer__Integer_4 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1057 "integer.m"
              }
#line 949 "integer.m"
            else
#line 949 "integer.m"
              {
#line 949 "integer.m"
                MR_Word mercury__integer__V_9_9;
#line 949 "integer.m"
                MR_Word mercury__integer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 949 "integer.m"
                {
#line 949 "integer.m"
                  mercury__integer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 949 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, 0) = ((MR_Box) (mercury__integer__Q_7));
#line 949 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, 1) = ((MR_Box) (mercury__integer__V_10_10));
#line 949 "integer.m"
                }
#line 949 "integer.m"
                {
#line 949 "integer.m"
                  mercury__integer__Integer_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 949 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 949 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 1) = ((MR_Box) (mercury__integer__V_9_9));
#line 949 "integer.m"
                }
#line 949 "integer.m"
              }
#line 949 "integer.m"
          }
#line 949 "integer.m"
        else
#line 951 "integer.m"
          {
#line 951 "integer.m"
            MR_Integer mercury__integer__H_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 951 "integer.m"
            MR_Word mercury__integer__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 951 "integer.m"
            MR_Integer mercury__integer__Q_16;

#line 952 "integer.m"
            {
#line 952 "integer.m"
              mercury__integer__Q_16 = mercury__int__div_2_f_0(mercury__integer__X_1, mercury__integer__D_3);
            }
#line 953 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Q_16 == (MR_Integer) 0);
#line 955 "integer.m"
            if (mercury__integer__succeeded)
#line 954 "integer.m"
              {
#line 954 "integer.m"
                MR_Integer mercury__integer__V_19_19;
#line 954 "integer.m"
                MR_Integer mercury__integer__V_20_20;
#line 954 "integer.m"
                MR_Integer mercury__integer__V_21_21;

#line 292 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__div_by_digit_1_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 292 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 4327 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 292 "int.opt"
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
#line 954 "integer.m"
                mercury__integer__V_20_20 = (mercury__integer__V_21_21 * (MR_Integer) 16384);
#line 954 "integer.m"
                mercury__integer__V_19_19 = (mercury__integer__V_20_20 + mercury__integer__H_12);
#line 954 "integer.m"
                /* direct tailcall eliminated */
#line 954 "integer.m"
                {
#line 954 "integer.m"
                  MR_Integer mercury__integer__X__tmp_copy_1 = mercury__integer__V_19_19;
#line 954 "integer.m"
                  MR_Word mercury__integer__HeadVar__2__tmp_copy_2 = mercury__integer__T_13;

#line 954 "integer.m"
                  mercury__integer__HeadVar__2_2 = mercury__integer__HeadVar__2__tmp_copy_2;
#line 954 "integer.m"
                  mercury__integer__X_1 = mercury__integer__X__tmp_copy_1;
#line 954 "integer.m"
                }
#line 954 "integer.m"
                continue;
#line 954 "integer.m"
              }
#line 955 "integer.m"
            else
#line 956 "integer.m"
              {
#line 956 "integer.m"
                MR_Integer mercury__integer__L_17;
#line 956 "integer.m"
                MR_Word mercury__integer__Ds_18;
#line 956 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 956 "integer.m"
                MR_Integer mercury__integer__V_24_24;
#line 956 "integer.m"
                MR_Integer mercury__integer__V_25_25;
#line 956 "integer.m"
                MR_Integer mercury__integer__V_26_26;
#line 956 "integer.m"
                MR_Integer mercury__integer__V_28_28;
#line 956 "integer.m"
                MR_Word mercury__integer__V_30_30;

#line 292 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__div_by_digit_1_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 292 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 4419 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 292 "int.opt"
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
#line 956 "integer.m"
                mercury__integer__V_25_25 = (mercury__integer__V_26_26 * (MR_Integer) 16384);
#line 956 "integer.m"
                mercury__integer__V_24_24 = (mercury__integer__V_25_25 + mercury__integer__H_12);
#line 956 "integer.m"
                {
#line 956 "integer.m"
                  mercury__integer__V_23_23 = mercury__integer__div_by_digit_2_3_f_0(mercury__integer__V_24_24, mercury__integer__T_13, mercury__integer__D_3);
                }
#line 956 "integer.m"
                mercury__integer__L_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 0)));
#line 956 "integer.m"
                mercury__integer__Ds_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 1)));
#line 957 "integer.m"
                mercury__integer__V_28_28 = (mercury__integer__L_17 + (MR_Integer) 1);
#line 957 "integer.m"
                {
#line 957 "integer.m"
                  mercury__integer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_30_30, 0) = ((MR_Box) (mercury__integer__Q_16));
#line 957 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_30_30, 1) = ((MR_Box) (mercury__integer__Ds_18));
#line 957 "integer.m"
                }
#line 957 "integer.m"
                {
#line 957 "integer.m"
                  mercury__integer__Integer_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 957 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 0) = ((MR_Box) (mercury__integer__V_28_28));
#line 957 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 1) = ((MR_Box) (mercury__integer__V_30_30));
#line 957 "integer.m"
                }
#line 956 "integer.m"
              }
#line 951 "integer.m"
          }
#line 949 "integer.m"
        return mercury__integer__Integer_4;
#line 949 "integer.m"
      }
#line 949 "integer.m"
      break;
#line 949 "integer.m"
    }
#line 947 "integer.m"
}

#line 942 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_f_0(
#line 942 "integer.m"
  MR_Integer mercury__integer__Digit_1,
#line 942 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 942 "integer.m"
{
#line 944 "integer.m"
  {
#line 944 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 944 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 944 "integer.m"
    MR_Word mercury__integer__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 944 "integer.m"
    MR_Integer mercury__integer__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));

#line 944 "integer.m"
    if ((mercury__integer__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1057 "integer.m"
      {
#line 1057 "integer.m"
        MR_Word mercury__integer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1057 "integer.m"
        mercury__integer__HeadVar__3_3 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1057 "integer.m"
      }
#line 944 "integer.m"
    else
#line 945 "integer.m"
      {
#line 945 "integer.m"
        MR_Integer mercury__integer__X_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_12_12, (MR_Integer) 0)));
#line 945 "integer.m"
        MR_Word mercury__integer__Xs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_12_12, (MR_Integer) 1)));

#line 945 "integer.m"
        {
#line 945 "integer.m"
          return mercury__integer__HeadVar__3_3 = mercury__integer__div_by_digit_1_3_f_0(mercury__integer__X_9, mercury__integer__Xs_10, mercury__integer__Digit_1);
        }
#line 945 "integer.m"
      }
#line 944 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 944 "integer.m"
  }
#line 942 "integer.m"
}

#line 938 "integer.m"
static MR_Word MR_CALL 
mercury__integer__integer_prepend_2_f_0(
#line 938 "integer.m"
  MR_Integer mercury__integer__Digit_4,
#line 938 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 938 "integer.m"
{
#line 940 "integer.m"
  {
#line 940 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 940 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 940 "integer.m"
    MR_Integer mercury__integer__L_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 940 "integer.m"
    MR_Word mercury__integer__List_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 940 "integer.m"
    MR_Integer mercury__integer__V_7_7 = (mercury__integer__L_5 + (MR_Integer) 1);
#line 940 "integer.m"
    MR_Word mercury__integer__V_9_9;

#line 940 "integer.m"
    {
#line 940 "integer.m"
      mercury__integer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 940 "integer.m"
      MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, 0) = ((MR_Box) (mercury__integer__Digit_4));
#line 940 "integer.m"
      MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, 1) = ((MR_Box) (mercury__integer__List_6));
#line 940 "integer.m"
    }
#line 940 "integer.m"
    {
#line 940 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 940 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_7_7));
#line 940 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_9_9));
#line 940 "integer.m"
    }
#line 940 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 940 "integer.m"
  }
#line 938 "integer.m"
}

#line 933 "integer.m"
static MR_Word MR_CALL 
mercury__integer__integer_append_2_f_0(
#line 933 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 933 "integer.m"
  MR_Integer mercury__integer__Digit_6)
#line 933 "integer.m"
{
#line 935 "integer.m"
  {
#line 935 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 935 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 935 "integer.m"
    MR_Word mercury__integer__TypeCtorInfo_12_12;
#line 935 "integer.m"
    MR_Integer mercury__integer__L_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 935 "integer.m"
    MR_Word mercury__integer__List_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 935 "integer.m"
    MR_Word mercury__integer__NewList_7;
#line 935 "integer.m"
    MR_Integer mercury__integer__V_8_8 = (mercury__integer__L_4 + (MR_Integer) 1);
#line 935 "integer.m"
    MR_Word mercury__integer__V_10_10;
#line 935 "integer.m"
    MR_Word mercury__integer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 936 "integer.m"
    {
#line 936 "integer.m"
      mercury__integer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "integer.m"
      MR_hl_field(MR_mktag(1), mercury__integer__V_10_10, 0) = ((MR_Box) (mercury__integer__Digit_6));
#line 936 "integer.m"
      MR_hl_field(MR_mktag(1), mercury__integer__V_10_10, 1) = ((MR_Box) (mercury__integer__V_11_11));
#line 936 "integer.m"
    }
#line 4647 "integer.c"
    mercury__integer__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 936 "integer.m"
    {
#line 936 "integer.m"
      mercury__list__append_3_p_1(mercury__integer__TypeCtorInfo_12_12, mercury__integer__List_5, mercury__integer__V_10_10, &mercury__integer__NewList_7);
    }
#line 935 "integer.m"
    {
#line 935 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 935 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_8_8));
#line 935 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__NewList_7));
#line 935 "integer.m"
    }
#line 935 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 935 "integer.m"
  }
#line 933 "integer.m"
}

#line 928 "integer.m"
static MR_Word MR_CALL 
mercury__integer__tail_1_f_0(
#line 928 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 928 "integer.m"
{
#line 930 "integer.m"
  {
#line 930 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 930 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;
#line 930 "integer.m"
    MR_Word mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 930 "integer.m"
    MR_Integer mercury__integer__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 930 "integer.m"
    if ((mercury__integer__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 930 "integer.m"
      {
#line 930 "integer.m"
        MR_Word mercury__integer__TypeCtorInfo_12_12 = (MR_Word) &mercury__integer__integer__type_ctor_info_integer_0;
#line 930 "integer.m"
        MR_Box mercury__integer__conv0_HeadVar__2_2;

#line 930 "integer.m"
        {
#line 930 "integer.m"
          mercury__integer__conv0_HeadVar__2_2 = mercury__require__func_error_1_f_0(mercury__integer__TypeCtorInfo_12_12, (MR_String) "integer.tail: []");
        }
#line 930 "integer.m"
        mercury__integer__HeadVar__2_2 = ((MR_Word) mercury__integer__conv0_HeadVar__2_2);
#line 930 "integer.m"
      }
#line 930 "integer.m"
    else
#line 931 "integer.m"
      {
#line 931 "integer.m"
        MR_Word mercury__integer__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_13_13, (MR_Integer) 1)));
#line 931 "integer.m"
        MR_Integer mercury__integer__V_10_10 = (mercury__integer__V_14_14 - (MR_Integer) 1);
#line 931 "integer.m"
        MR_Integer mercury__integer__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_13_13, (MR_Integer) 0)));

#line 931 "integer.m"
        {
#line 931 "integer.m"
          mercury__integer__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 931 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__V_10_10));
#line 931 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__Tail_8));
#line 931 "integer.m"
        }
#line 931 "integer.m"
      }
#line 930 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 930 "integer.m"
  }
#line 928 "integer.m"
}

#line 919 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__head_tail_1_f_0(
#line 919 "integer.m"
  MR_Word mercury__integer__I_3)
#line 919 "integer.m"
{
#line 921 "integer.m"
  {
#line 921 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 921 "integer.m"
    MR_Integer mercury__integer__HeadVar__2_2;
#line 921 "integer.m"
    MR_Integer mercury__integer__HT_6;
#line 922 "integer.m"
    MR_Word mercury__integer__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__I_3, (MR_Integer) 1)));
#line 922 "integer.m"
    MR_Word mercury__integer__V_9_9;
#line 922 "integer.m"
    MR_Integer mercury__integer__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__I_3, (MR_Integer) 0)));
#line 922 "integer.m"
    MR_Integer mercury__integer__V_5_5;
#line 922 "integer.m"
    MR_Word mercury__integer__V_7_7;

#line 922 "integer.m"
    mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_8_8)) == (MR_mktag((MR_Integer) 1)));
#line 922 "integer.m"
    if (mercury__integer__succeeded)
#line 922 "integer.m"
      {
#line 922 "integer.m"
        mercury__integer__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_8_8, (MR_Integer) 0)));
#line 922 "integer.m"
        mercury__integer__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_8_8, (MR_Integer) 1)));
#line 922 "integer.m"
        mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 922 "integer.m"
        if (mercury__integer__succeeded)
#line 922 "integer.m"
          {
#line 922 "integer.m"
            mercury__integer__HT_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, (MR_Integer) 0)));
#line 922 "integer.m"
            mercury__integer__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, (MR_Integer) 1)));
#line 922 "integer.m"
          }
#line 922 "integer.m"
      }
#line 921 "integer.m"
    if (mercury__integer__succeeded)
#line 921 "integer.m"
      mercury__integer__HeadVar__2_2 = mercury__integer__HT_6;
#line 921 "integer.m"
    else
#line 925 "integer.m"
      {
#line 925 "integer.m"
        MR_Word mercury__integer__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 925 "integer.m"
        MR_Box mercury__integer__conv0_HeadVar__2_2;

#line 925 "integer.m"
        {
#line 925 "integer.m"
          mercury__integer__conv0_HeadVar__2_2 = mercury__require__func_error_1_f_0(mercury__integer__TypeCtorInfo_11_11, (MR_String) "integer.head_tail: []");
        }
#line 925 "integer.m"
        mercury__integer__HeadVar__2_2 = ((MR_Integer) mercury__integer__conv0_HeadVar__2_2);
#line 925 "integer.m"
      }
#line 921 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 921 "integer.m"
  }
#line 919 "integer.m"
}

#line 915 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__head_1_f_0(
#line 915 "integer.m"
  MR_Word mercury__integer__I_3)
#line 915 "integer.m"
{
#line 917 "integer.m"
  {
#line 917 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 917 "integer.m"
    MR_Integer mercury__integer__HeadVar__2_2;
#line 917 "integer.m"
    MR_Integer mercury__integer__Hd_5;
#line 917 "integer.m"
    MR_Word mercury__integer__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__I_3, (MR_Integer) 1)));
#line 917 "integer.m"
    MR_Integer mercury__integer__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__I_3, (MR_Integer) 0)));
#line 917 "integer.m"
    MR_Word mercury__integer___T_6;

#line 917 "integer.m"
    mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 917 "integer.m"
    if (mercury__integer__succeeded)
#line 917 "integer.m"
      {
#line 917 "integer.m"
        mercury__integer__Hd_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_7_7, (MR_Integer) 0)));
#line 917 "integer.m"
        mercury__integer___T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_7_7, (MR_Integer) 1)));
#line 917 "integer.m"
        mercury__integer__HeadVar__2_2 = mercury__integer__Hd_5;
#line 917 "integer.m"
      }
#line 917 "integer.m"
    else
#line 917 "integer.m"
      {
#line 917 "integer.m"
        MR_Word mercury__integer__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 917 "integer.m"
        MR_Box mercury__integer__conv0_HeadVar__2_2;

#line 917 "integer.m"
        {
#line 917 "integer.m"
          mercury__integer__conv0_HeadVar__2_2 = mercury__require__func_error_1_f_0(mercury__integer__TypeCtorInfo_9_9, (MR_String) "integer.head: []");
        }
#line 917 "integer.m"
        mercury__integer__HeadVar__2_2 = ((MR_Integer) mercury__integer__conv0_HeadVar__2_2);
#line 917 "integer.m"
      }
#line 917 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 917 "integer.m"
  }
#line 915 "integer.m"
}

#line 910 "integer.m"
static MR_Word MR_CALL 
mercury__integer__decap_1_f_0(
#line 910 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 910 "integer.m"
{
#line 912 "integer.m"
  while (MR_TRUE)
#line 912 "integer.m"
    {
#line 912 "integer.m"
      /* tailcall optimized into a loop */
#line 912 "integer.m"
      {
#line 912 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 912 "integer.m"
        MR_Word mercury__integer__HeadVar__2_2;
#line 912 "integer.m"
        MR_Word mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 912 "integer.m"
        MR_Integer mercury__integer__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 912 "integer.m"
        if ((mercury__integer__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1057 "integer.m"
          {
#line 1057 "integer.m"
            MR_Word mercury__integer__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1057 "integer.m"
            mercury__integer__HeadVar__2_2 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1057 "integer.m"
          }
#line 912 "integer.m"
        else
#line 913 "integer.m"
          {
#line 913 "integer.m"
            MR_Integer mercury__integer__H_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_13_13, (MR_Integer) 0)));
#line 913 "integer.m"
            MR_Word mercury__integer__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_13_13, (MR_Integer) 1)));

#line 913 "integer.m"
            mercury__integer__succeeded = (mercury__integer__H_6 == (MR_Integer) 0);
#line 913 "integer.m"
            if (mercury__integer__succeeded)
#line 913 "integer.m"
              {
#line 913 "integer.m"
                MR_Word mercury__integer__V_9_9;
#line 913 "integer.m"
                MR_Integer mercury__integer__V_10_10 = (mercury__integer__V_14_14 - (MR_Integer) 1);

#line 913 "integer.m"
                {
#line 913 "integer.m"
                  mercury__integer__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 913 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 0) = ((MR_Box) (mercury__integer__V_10_10));
#line 913 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 1) = ((MR_Box) (mercury__integer__T_7));
#line 913 "integer.m"
                }
#line 913 "integer.m"
                /* direct tailcall eliminated */
#line 913 "integer.m"
                {
#line 913 "integer.m"
                  MR_Word mercury__integer__HeadVar__1__tmp_copy_1 = mercury__integer__V_9_9;

#line 913 "integer.m"
                  mercury__integer__HeadVar__1_1 = mercury__integer__HeadVar__1__tmp_copy_1;
#line 913 "integer.m"
                }
#line 913 "integer.m"
                continue;
#line 913 "integer.m"
              }
#line 913 "integer.m"
            else
#line 913 "integer.m"
              mercury__integer__HeadVar__2_2 = mercury__integer__HeadVar__1_1;
#line 913 "integer.m"
          }
#line 912 "integer.m"
        return mercury__integer__HeadVar__2_2;
#line 912 "integer.m"
      }
#line 912 "integer.m"
      break;
#line 912 "integer.m"
    }
#line 910 "integer.m"
}

#line 860 "integer.m"
static void MR_CALL 
mercury__integer__quot_rem_2_5_p_0(
#line 860 "integer.m"
  MR_Word mercury__integer__Ur_6,
#line 860 "integer.m"
  MR_Word mercury__integer__U_7,
#line 860 "integer.m"
  MR_Word mercury__integer__V_8,
#line 860 "integer.m"
  MR_Word * mercury__integer__Quot_9,
#line 860 "integer.m"
  MR_Word * mercury__integer__Rem_10)
#line 860 "integer.m"
{
#line 874 "integer.m"
  {
#line 874 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 968 "integer.m"
    MR_Word mercury__integer__V_61_61;

#line 558 "integer.m"
    {
#line 558 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__V_61_61, mercury__integer__Ur_6, mercury__integer__V_8);
    }
#line 969 "integer.m"
    mercury__integer__succeeded = ((MR_Integer) 1 == mercury__integer__V_61_61);
#line 874 "integer.m"
    if (mercury__integer__succeeded)
#line 870 "integer.m"
      {
#line 870 "integer.m"
        MR_Integer mercury__integer__Ua_12;
#line 865 "integer.m"
        MR_Word mercury__integer__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 1)));
#line 865 "integer.m"
        MR_Integer mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 0)));
#line 865 "integer.m"
        MR_Word mercury__integer__V_13_13;

#line 865 "integer.m"
        mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 865 "integer.m"
        if (mercury__integer__succeeded)
#line 865 "integer.m"
          {
#line 865 "integer.m"
            mercury__integer__Ua_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_24_24, (MR_Integer) 0)));
#line 865 "integer.m"
            mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_24_24, (MR_Integer) 1)));
#line 867 "integer.m"
            {
#line 867 "integer.m"
              MR_Word mercury__integer__TypeCtorInfo_12_74;
#line 867 "integer.m"
              MR_Word mercury__integer__Quot0_14;
#line 867 "integer.m"
              MR_Word mercury__integer__V_25_25;
#line 867 "integer.m"
              MR_Word mercury__integer__V_26_26;
#line 867 "integer.m"
              MR_Integer mercury__integer__L_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Ur_6, (MR_Integer) 0)));
#line 867 "integer.m"
              MR_Word mercury__integer__List_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Ur_6, (MR_Integer) 1)));
#line 867 "integer.m"
              MR_Word mercury__integer__NewList_69;
#line 867 "integer.m"
              MR_Integer mercury__integer__V_70_70 = (mercury__integer__L_67 + (MR_Integer) 1);
#line 867 "integer.m"
              MR_Word mercury__integer__V_72_72;
#line 867 "integer.m"
              MR_Word mercury__integer__V_73_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 867 "integer.m"
              MR_Word mercury__integer__V_85_85;
#line 867 "integer.m"
              MR_Integer mercury__integer__V_86_86;
#line 867 "integer.m"
              MR_Integer mercury__integer__L_88;
#line 867 "integer.m"
              MR_Word mercury__integer__List_89;
#line 867 "integer.m"
              MR_Integer mercury__integer__V_90_90;
#line 867 "integer.m"
              MR_Word mercury__integer__V_92_92;

#line 936 "integer.m"
              {
#line 936 "integer.m"
                mercury__integer__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "integer.m"
                MR_hl_field(MR_mktag(1), mercury__integer__V_72_72, 0) = ((MR_Box) (mercury__integer__Ua_12));
#line 936 "integer.m"
                MR_hl_field(MR_mktag(1), mercury__integer__V_72_72, 1) = ((MR_Box) (mercury__integer__V_73_73));
#line 936 "integer.m"
              }
#line 5071 "integer.c"
              mercury__integer__TypeCtorInfo_12_74 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 936 "integer.m"
              {
#line 936 "integer.m"
                mercury__list__append_3_p_1(mercury__integer__TypeCtorInfo_12_74, mercury__integer__List_68, mercury__integer__V_72_72, &mercury__integer__NewList_69);
              }
#line 935 "integer.m"
              {
#line 935 "integer.m"
                mercury__integer__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 935 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_25_25, 0) = ((MR_Box) (mercury__integer__V_70_70));
#line 935 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_25_25, 1) = ((MR_Box) (mercury__integer__NewList_69));
#line 935 "integer.m"
              }
#line 930 "integer.m"
              mercury__integer__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 0)));
#line 930 "integer.m"
              mercury__integer__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 1)));
#line 930 "integer.m"
              if ((mercury__integer__V_85_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 930 "integer.m"
                {
#line 930 "integer.m"
                  MR_Word mercury__integer__TypeCtorInfo_12_84 = (MR_Word) &mercury__integer__integer__type_ctor_info_integer_0;
#line 930 "integer.m"
                  MR_Box mercury__integer__conv0_V_26_26;

#line 930 "integer.m"
                  {
#line 930 "integer.m"
                    mercury__integer__conv0_V_26_26 = mercury__require__func_error_1_f_0(mercury__integer__TypeCtorInfo_12_84, (MR_String) "integer.tail: []");
#line 930 "integer.m"
                    return;
                  }
#line 930 "integer.m"
                  mercury__integer__V_26_26 = ((MR_Word) mercury__integer__conv0_V_26_26);
#line 930 "integer.m"
                }
#line 930 "integer.m"
              else
#line 931 "integer.m"
                {
#line 931 "integer.m"
                  MR_Word mercury__integer__Tail_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_85_85, (MR_Integer) 1)));
#line 931 "integer.m"
                  MR_Integer mercury__integer__V_82_82 = (mercury__integer__V_86_86 - (MR_Integer) 1);
#line 931 "integer.m"
                  MR_Integer mercury__integer__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_85_85, (MR_Integer) 0)));

#line 931 "integer.m"
                  {
#line 931 "integer.m"
                    mercury__integer__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 931 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_26_26, 0) = ((MR_Box) (mercury__integer__V_82_82));
#line 931 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_26_26, 1) = ((MR_Box) (mercury__integer__Tail_80));
#line 931 "integer.m"
                  }
#line 931 "integer.m"
                }
#line 866 "integer.m"
              {
#line 866 "integer.m"
                mercury__integer__quot_rem_2_5_p_0(mercury__integer__V_25_25, mercury__integer__V_26_26, mercury__integer__V_8, &mercury__integer__Quot0_14, mercury__integer__Rem_10);
              }
#line 940 "integer.m"
              mercury__integer__L_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Quot0_14, (MR_Integer) 0)));
#line 940 "integer.m"
              mercury__integer__List_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Quot0_14, (MR_Integer) 1)));
#line 940 "integer.m"
              mercury__integer__V_90_90 = (mercury__integer__L_88 + (MR_Integer) 1);
#line 940 "integer.m"
              {
#line 940 "integer.m"
                mercury__integer__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 940 "integer.m"
                MR_hl_field(MR_mktag(1), mercury__integer__V_92_92, 0) = ((MR_Box) ((MR_Integer) 0));
#line 940 "integer.m"
                MR_hl_field(MR_mktag(1), mercury__integer__V_92_92, 1) = ((MR_Box) (mercury__integer__List_89));
#line 940 "integer.m"
              }
#line 940 "integer.m"
              {
#line 940 "integer.m"
                MR_Word base;
#line 940 "integer.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 940 "integer.m"
                *mercury__integer__Quot_9 = base;
#line 940 "integer.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__integer__V_90_90));
#line 940 "integer.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_92_92));
#line 940 "integer.m"
              }
#line 867 "integer.m"
            }
#line 865 "integer.m"
          }
#line 865 "integer.m"
        else
#line 871 "integer.m"
          {
#line 871 "integer.m"
            *mercury__integer__Quot_9 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 872 "integer.m"
            *mercury__integer__Rem_10 = mercury__integer__Ur_6;
#line 871 "integer.m"
          }
#line 870 "integer.m"
      }
#line 874 "integer.m"
    else
#line 879 "integer.m"
      {
#line 879 "integer.m"
        MR_Integer mercury__integer__Qhat_16;
#line 879 "integer.m"
        MR_Word mercury__integer__QhatByV_17;
#line 879 "integer.m"
        MR_Integer mercury__integer__Q_18;
#line 879 "integer.m"
        MR_Word mercury__integer__QByV_19;
#line 879 "integer.m"
        MR_Word mercury__integer__NewUr_21;
#line 875 "integer.m"
        MR_Integer mercury__integer__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Ur_6, (MR_Integer) 0)));
#line 875 "integer.m"
        MR_Integer mercury__integer__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_8, (MR_Integer) 0)));
#line 908 "integer.m"
        MR_Word mercury__integer__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Ur_6, (MR_Integer) 1)));
#line 908 "integer.m"
        MR_Word mercury__integer__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_8, (MR_Integer) 1)));
#line 900 "integer.m"
        MR_Integer mercury__integer__Ua_52;
#line 895 "integer.m"
        MR_Word mercury__integer__V_44_44;
#line 895 "integer.m"
        MR_Integer mercury__integer__V_22_22;
#line 895 "integer.m"
        MR_Word mercury__integer__V_23_23;

#line 875 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_32_32 > mercury__integer__V_33_33);
#line 877 "integer.m"
        if (mercury__integer__succeeded)
#line 876 "integer.m"
          {
#line 876 "integer.m"
            MR_Integer mercury__integer__V_34_34;
#line 876 "integer.m"
            MR_Integer mercury__integer__V_35_35;
#line 876 "integer.m"
            MR_Integer mercury__integer__V_36_36;
#line 876 "integer.m"
            MR_Integer mercury__integer__V_38_38;
#line 876 "integer.m"
            MR_Integer mercury__integer__V_39_39;

#line 876 "integer.m"
            {
#line 876 "integer.m"
              mercury__integer__V_36_36 = mercury__integer__head_1_f_0(mercury__integer__Ur_6);
            }
#line 876 "integer.m"
            mercury__integer__V_35_35 = (mercury__integer__V_36_36 * (MR_Integer) 16384);
#line 876 "integer.m"
            {
#line 876 "integer.m"
              mercury__integer__V_38_38 = mercury__integer__head_tail_1_f_0(mercury__integer__Ur_6);
            }
#line 876 "integer.m"
            mercury__integer__V_34_34 = (mercury__integer__V_35_35 + mercury__integer__V_38_38);
#line 876 "integer.m"
            {
#line 876 "integer.m"
              mercury__integer__V_39_39 = mercury__integer__head_1_f_0(mercury__integer__V_8);
            }
#line 876 "integer.m"
            {
#line 876 "integer.m"
              mercury__integer__Qhat_16 = mercury__int__div_2_f_0(mercury__integer__V_34_34, mercury__integer__V_39_39);
            }
#line 876 "integer.m"
          }
#line 877 "integer.m"
        else
#line 878 "integer.m"
          {
#line 878 "integer.m"
            MR_Integer mercury__integer__V_40_40;
#line 878 "integer.m"
            MR_Integer mercury__integer__V_41_41;

#line 878 "integer.m"
            {
#line 878 "integer.m"
              mercury__integer__V_40_40 = mercury__integer__head_1_f_0(mercury__integer__Ur_6);
            }
#line 878 "integer.m"
            {
#line 878 "integer.m"
              mercury__integer__V_41_41 = mercury__integer__head_1_f_0(mercury__integer__V_8);
            }
#line 878 "integer.m"
            {
#line 878 "integer.m"
              mercury__integer__Qhat_16 = mercury__int__div_2_f_0(mercury__integer__V_40_40, mercury__integer__V_41_41);
            }
#line 878 "integer.m"
          }
#line 880 "integer.m"
        {
#line 880 "integer.m"
          mercury__integer__QhatByV_17 = mercury__integer__mul_by_digit_2_f_0(mercury__integer__Qhat_16, mercury__integer__V_8);
        }
#line 881 "integer.m"
        {
#line 881 "integer.m"
          mercury__integer__succeeded = mercury__integer__pos_geq_2_p_0(mercury__integer__Ur_6, mercury__integer__QhatByV_17);
        }
#line 884 "integer.m"
        if (mercury__integer__succeeded)
#line 882 "integer.m"
          {
#line 882 "integer.m"
            mercury__integer__Q_18 = mercury__integer__Qhat_16;
#line 883 "integer.m"
            mercury__integer__QByV_19 = mercury__integer__QhatByV_17;
#line 882 "integer.m"
          }
#line 884 "integer.m"
        else
#line 885 "integer.m"
          {
#line 885 "integer.m"
            MR_Word mercury__integer__QhatMinus1ByV_20;

#line 885 "integer.m"
            {
#line 885 "integer.m"
              mercury__integer__QhatMinus1ByV_20 = mercury__integer__pos_minus_2_f_0(mercury__integer__QhatByV_17, mercury__integer__V_8);
            }
#line 886 "integer.m"
            {
#line 886 "integer.m"
              mercury__integer__succeeded = mercury__integer__pos_geq_2_p_0(mercury__integer__Ur_6, mercury__integer__QhatMinus1ByV_20);
            }
#line 889 "integer.m"
            if (mercury__integer__succeeded)
#line 887 "integer.m"
              {
#line 887 "integer.m"
                mercury__integer__Q_18 = (mercury__integer__Qhat_16 - (MR_Integer) 1);
#line 888 "integer.m"
                mercury__integer__QByV_19 = mercury__integer__QhatMinus1ByV_20;
#line 887 "integer.m"
              }
#line 889 "integer.m"
            else
#line 890 "integer.m"
              {
#line 890 "integer.m"
                mercury__integer__Q_18 = (mercury__integer__Qhat_16 - (MR_Integer) 2);
#line 891 "integer.m"
                {
#line 891 "integer.m"
                  mercury__integer__QByV_19 = mercury__integer__pos_minus_2_f_0(mercury__integer__QhatMinus1ByV_20, mercury__integer__V_8);
                }
#line 890 "integer.m"
              }
#line 885 "integer.m"
          }
#line 894 "integer.m"
        {
#line 894 "integer.m"
          mercury__integer__NewUr_21 = mercury__integer__pos_minus_2_f_0(mercury__integer__Ur_6, mercury__integer__QByV_19);
        }
#line 895 "integer.m"
        mercury__integer__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 0)));
#line 895 "integer.m"
        mercury__integer__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 1)));
#line 895 "integer.m"
        mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 895 "integer.m"
        if (mercury__integer__succeeded)
#line 895 "integer.m"
          {
#line 895 "integer.m"
            mercury__integer__Ua_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_44_44, (MR_Integer) 0)));
#line 895 "integer.m"
            mercury__integer__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_44_44, (MR_Integer) 1)));
#line 897 "integer.m"
            {
#line 897 "integer.m"
              MR_Word mercury__integer__V_45_45;
#line 897 "integer.m"
              MR_Word mercury__integer__V_46_46;
#line 897 "integer.m"
              MR_Word mercury__integer__Quot0_50;

#line 896 "integer.m"
              {
#line 896 "integer.m"
                mercury__integer__V_45_45 = mercury__integer__integer_append_2_f_0(mercury__integer__NewUr_21, mercury__integer__Ua_52);
              }
#line 896 "integer.m"
              {
#line 896 "integer.m"
                mercury__integer__V_46_46 = mercury__integer__tail_1_f_0(mercury__integer__U_7);
              }
#line 896 "integer.m"
              {
#line 896 "integer.m"
                mercury__integer__quot_rem_2_5_p_0(mercury__integer__V_45_45, mercury__integer__V_46_46, mercury__integer__V_8, &mercury__integer__Quot0_50, mercury__integer__Rem_10);
              }
#line 898 "integer.m"
              {
#line 898 "integer.m"
                *mercury__integer__Quot_9 = mercury__integer__integer_prepend_2_f_0(mercury__integer__Q_18, mercury__integer__Quot0_50);
              }
#line 897 "integer.m"
            }
#line 895 "integer.m"
          }
#line 895 "integer.m"
        else
#line 901 "integer.m"
          {
#line 901 "integer.m"
            MR_Word mercury__integer__V_48_48;
#line 901 "integer.m"
            MR_Word mercury__integer__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 901 "integer.m"
            {
#line 901 "integer.m"
              mercury__integer__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 901 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_48_48, 0) = ((MR_Box) (mercury__integer__Q_18));
#line 901 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_48_48, 1) = ((MR_Box) (mercury__integer__V_49_49));
#line 901 "integer.m"
            }
#line 901 "integer.m"
            {
#line 901 "integer.m"
              MR_Word base;
#line 901 "integer.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 901 "integer.m"
              *mercury__integer__Quot_9 = base;
#line 901 "integer.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 901 "integer.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_48_48));
#line 901 "integer.m"
            }
#line 902 "integer.m"
            *mercury__integer__Rem_10 = mercury__integer__NewUr_21;
#line 901 "integer.m"
          }
#line 879 "integer.m"
      }
#line 874 "integer.m"
  }
#line 860 "integer.m"
}

#line 841 "integer.m"
static void MR_CALL 
mercury__integer__quot_rem_4_p_0(
#line 841 "integer.m"
  MR_Word mercury__integer__U_5,
#line 841 "integer.m"
  MR_Word mercury__integer__V_6,
#line 841 "integer.m"
  MR_Word * mercury__integer__Quot_7,
#line 841 "integer.m"
  MR_Word * mercury__integer__Rem_8)
#line 841 "integer.m"
{
#line 847 "integer.m"
  {
#line 847 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 847 "integer.m"
    MR_Integer mercury__integer__UI_10;
#line 847 "integer.m"
    MR_Integer mercury__integer__VI_12;
#line 844 "integer.m"
    MR_Word mercury__integer__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_5, (MR_Integer) 1)));
#line 844 "integer.m"
    MR_Word mercury__integer__V_18_18;
#line 844 "integer.m"
    MR_Word mercury__integer__V_19_19;
#line 844 "integer.m"
    MR_Word mercury__integer__V_20_20;
#line 844 "integer.m"
    MR_Integer mercury__integer__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_5, (MR_Integer) 0)));
#line 844 "integer.m"
    MR_Integer mercury__integer__V_11_11;

#line 844 "integer.m"
    mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 844 "integer.m"
    if (mercury__integer__succeeded)
#line 844 "integer.m"
      {
#line 844 "integer.m"
        mercury__integer__UI_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 844 "integer.m"
        mercury__integer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 844 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 844 "integer.m"
        if (mercury__integer__succeeded)
#line 844 "integer.m"
          {
#line 844 "integer.m"
            mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 0)));
#line 844 "integer.m"
            mercury__integer__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 1)));
#line 844 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 844 "integer.m"
            if (mercury__integer__succeeded)
#line 844 "integer.m"
              {
#line 844 "integer.m"
                mercury__integer__VI_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_19_19, (MR_Integer) 0)));
#line 844 "integer.m"
                mercury__integer__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_19_19, (MR_Integer) 1)));
#line 844 "integer.m"
                mercury__integer__succeeded = (mercury__integer__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 844 "integer.m"
              }
#line 844 "integer.m"
          }
#line 844 "integer.m"
      }
#line 847 "integer.m"
    if (mercury__integer__succeeded)
#line 845 "integer.m"
      {
#line 845 "integer.m"
        MR_Integer mercury__integer__V_21_21;
#line 845 "integer.m"
        MR_Integer mercury__integer__V_22_22;

#line 292 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__quot_rem_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 292 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 5540 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 292 "int.opt"
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
#line 621 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_21_21 == (MR_Integer) 0);
#line 620 "integer.m"
        if (mercury__integer__succeeded)
#line 1057 "integer.m"
          {
#line 1057 "integer.m"
            MR_Word mercury__integer__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1057 "integer.m"
            *mercury__integer__Quot_7 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1057 "integer.m"
          }
#line 620 "integer.m"
        else
#line 620 "integer.m"
          {
#line 621 "integer.m"
            mercury__integer__succeeded = (mercury__integer__V_21_21 > (MR_Integer) 0);
#line 620 "integer.m"
            if (mercury__integer__succeeded)
#line 621 "integer.m"
              {
#line 621 "integer.m"
                MR_Word mercury__integer__V_40_40;
#line 621 "integer.m"
                MR_Word mercury__integer__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 621 "integer.m"
                {
#line 621 "integer.m"
                  mercury__integer__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_40_40, 0) = ((MR_Box) (mercury__integer__V_21_21));
#line 621 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_40_40, 1) = ((MR_Box) (mercury__integer__V_41_41));
#line 621 "integer.m"
                }
#line 621 "integer.m"
                {
#line 621 "integer.m"
                  MR_Word base;
#line 621 "integer.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 621 "integer.m"
                  *mercury__integer__Quot_7 = base;
#line 621 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 621 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_40_40));
#line 621 "integer.m"
                }
#line 621 "integer.m"
              }
#line 620 "integer.m"
            else
#line 621 "integer.m"
              {
#line 621 "integer.m"
                MR_Word mercury__integer__V_43_43;
#line 621 "integer.m"
                MR_Word mercury__integer__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 621 "integer.m"
                {
#line 621 "integer.m"
                  mercury__integer__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_43_43, 0) = ((MR_Box) (mercury__integer__V_21_21));
#line 621 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_43_43, 1) = ((MR_Box) (mercury__integer__V_44_44));
#line 621 "integer.m"
                }
#line 621 "integer.m"
                {
#line 621 "integer.m"
                  MR_Word base;
#line 621 "integer.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 621 "integer.m"
                  *mercury__integer__Quot_7 = base;
#line 621 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) -1));
#line 621 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_43_43));
#line 621 "integer.m"
                }
#line 621 "integer.m"
              }
#line 620 "integer.m"
          }
#line 292 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__quot_rem_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 292 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 5681 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 292 "int.opt"
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
#line 621 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_22_22 == (MR_Integer) 0);
#line 620 "integer.m"
        if (mercury__integer__succeeded)
#line 1057 "integer.m"
          {
#line 1057 "integer.m"
            MR_Word mercury__integer__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1057 "integer.m"
            *mercury__integer__Rem_8 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1057 "integer.m"
          }
#line 620 "integer.m"
        else
#line 620 "integer.m"
          {
#line 621 "integer.m"
            mercury__integer__succeeded = (mercury__integer__V_22_22 > (MR_Integer) 0);
#line 620 "integer.m"
            if (mercury__integer__succeeded)
#line 621 "integer.m"
              {
#line 621 "integer.m"
                MR_Word mercury__integer__V_56_56;
#line 621 "integer.m"
                MR_Word mercury__integer__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 621 "integer.m"
                {
#line 621 "integer.m"
                  mercury__integer__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_56_56, 0) = ((MR_Box) (mercury__integer__V_22_22));
#line 621 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_56_56, 1) = ((MR_Box) (mercury__integer__V_57_57));
#line 621 "integer.m"
                }
#line 621 "integer.m"
                {
#line 621 "integer.m"
                  MR_Word base;
#line 621 "integer.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 621 "integer.m"
                  *mercury__integer__Rem_8 = base;
#line 621 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 621 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_56_56));
#line 621 "integer.m"
                }
#line 621 "integer.m"
              }
#line 620 "integer.m"
            else
#line 621 "integer.m"
              {
#line 621 "integer.m"
                MR_Word mercury__integer__V_59_59;
#line 621 "integer.m"
                MR_Word mercury__integer__V_60_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 621 "integer.m"
                {
#line 621 "integer.m"
                  mercury__integer__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_59_59, 0) = ((MR_Box) (mercury__integer__V_22_22));
#line 621 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_59_59, 1) = ((MR_Box) (mercury__integer__V_60_60));
#line 621 "integer.m"
                }
#line 621 "integer.m"
                {
#line 621 "integer.m"
                  MR_Word base;
#line 621 "integer.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 621 "integer.m"
                  *mercury__integer__Rem_8 = base;
#line 621 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) -1));
#line 621 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_59_59));
#line 621 "integer.m"
                }
#line 621 "integer.m"
              }
#line 620 "integer.m"
          }
#line 845 "integer.m"
      }
#line 847 "integer.m"
    else
#line 848 "integer.m"
      {
#line 848 "integer.m"
        MR_Integer mercury__integer__V0_13;
#line 848 "integer.m"
        MR_Word mercury__integer__QuotZeros_15;
#line 917 "integer.m"
        MR_Integer mercury__integer__Hd_65;
#line 917 "integer.m"
        MR_Word mercury__integer__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 1)));
#line 917 "integer.m"
        MR_Integer mercury__integer__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 0)));
#line 917 "integer.m"
        MR_Word mercury__integer___T_66;

#line 917 "integer.m"
        mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 917 "integer.m"
        if (mercury__integer__succeeded)
#line 917 "integer.m"
          {
#line 917 "integer.m"
            mercury__integer__Hd_65 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_67_67, (MR_Integer) 0)));
#line 917 "integer.m"
            mercury__integer___T_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_67_67, (MR_Integer) 1)));
#line 917 "integer.m"
            mercury__integer__V0_13 = mercury__integer__Hd_65;
#line 917 "integer.m"
          }
#line 917 "integer.m"
        else
#line 917 "integer.m"
          {
#line 917 "integer.m"
            MR_Word mercury__integer__TypeCtorInfo_9_69 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 917 "integer.m"
            MR_Box mercury__integer__conv0_V0_13;

#line 917 "integer.m"
            {
#line 917 "integer.m"
              mercury__integer__conv0_V0_13 = mercury__require__func_error_1_f_0(mercury__integer__TypeCtorInfo_9_69, (MR_String) "integer.head: []");
#line 917 "integer.m"
              return;
            }
#line 917 "integer.m"
            mercury__integer__V0_13 = ((MR_Integer) mercury__integer__conv0_V0_13);
#line 917 "integer.m"
          }
#line 849 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V0_13 < (MR_Integer) 8192);
#line 854 "integer.m"
        if (mercury__integer__succeeded)
#line 850 "integer.m"
          {
#line 850 "integer.m"
            MR_Integer mercury__integer__M_14;
#line 850 "integer.m"
            MR_Word mercury__integer__R_16;
#line 850 "integer.m"
            MR_Integer mercury__integer__V_25_25 = (mercury__integer__V0_13 + (MR_Integer) 1);
#line 850 "integer.m"
            MR_Word mercury__integer__V_27_27;
#line 850 "integer.m"
            MR_Word mercury__integer__V_28_28;
#line 850 "integer.m"
            MR_Word mercury__integer__V_29_29;
#line 850 "integer.m"
            MR_Word mercury__integer__V_71_71;
#line 850 "integer.m"
            MR_Integer mercury__integer__Len_74;
#line 850 "integer.m"
            MR_Word mercury__integer__Digits0_75;
#line 850 "integer.m"
            MR_Integer mercury__integer__Mod_76;
#line 850 "integer.m"
            MR_Word mercury__integer__Digits_77;
#line 850 "integer.m"
            MR_Integer mercury__integer__Len_83;
#line 850 "integer.m"
            MR_Word mercury__integer__Digits0_84;
#line 850 "integer.m"
            MR_Integer mercury__integer__Mod_85;
#line 850 "integer.m"
            MR_Word mercury__integer__Digits_86;

#line 850 "integer.m"
            {
#line 850 "integer.m"
              mercury__integer__M_14 = mercury__int__div_2_f_0((MR_Integer) 16384, mercury__integer__V_25_25);
            }
#line 1057 "integer.m"
            mercury__integer__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1057 "integer.m"
            mercury__integer__V_27_27 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 665 "integer.m"
            mercury__integer__Len_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_5, (MR_Integer) 0)));
#line 665 "integer.m"
            mercury__integer__Digits0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_5, (MR_Integer) 1)));
#line 666 "integer.m"
            {
#line 666 "integer.m"
              mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__M_14, &mercury__integer__Mod_76, mercury__integer__Digits0_75, &mercury__integer__Digits_77);
            }
#line 667 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Mod_76 == (MR_Integer) 0);
#line 667 "integer.m"
            if (mercury__integer__succeeded)
#line 667 "integer.m"
              {
#line 667 "integer.m"
                mercury__integer__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, 0) = ((MR_Box) (mercury__integer__Len_74));
#line 667 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, 1) = ((MR_Box) (mercury__integer__Digits_77));
#line 667 "integer.m"
              }
#line 667 "integer.m"
            else
#line 667 "integer.m"
              {
#line 667 "integer.m"
                MR_Integer mercury__integer__V_78_78 = (mercury__integer__Len_74 + (MR_Integer) 1);
#line 667 "integer.m"
                MR_Word mercury__integer__V_80_80;

#line 667 "integer.m"
                {
#line 667 "integer.m"
                  mercury__integer__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_80_80, 0) = ((MR_Box) (mercury__integer__Mod_76));
#line 667 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_80_80, 1) = ((MR_Box) (mercury__integer__Digits_77));
#line 667 "integer.m"
                }
#line 667 "integer.m"
                {
#line 667 "integer.m"
                  mercury__integer__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, 0) = ((MR_Box) (mercury__integer__V_78_78));
#line 667 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, 1) = ((MR_Box) (mercury__integer__V_80_80));
#line 667 "integer.m"
                }
#line 667 "integer.m"
              }
#line 665 "integer.m"
            mercury__integer__Len_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 0)));
#line 665 "integer.m"
            mercury__integer__Digits0_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 1)));
#line 666 "integer.m"
            {
#line 666 "integer.m"
              mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__M_14, &mercury__integer__Mod_85, mercury__integer__Digits0_84, &mercury__integer__Digits_86);
            }
#line 667 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Mod_85 == (MR_Integer) 0);
#line 667 "integer.m"
            if (mercury__integer__succeeded)
#line 667 "integer.m"
              {
#line 667 "integer.m"
                mercury__integer__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 0) = ((MR_Box) (mercury__integer__Len_83));
#line 667 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 1) = ((MR_Box) (mercury__integer__Digits_86));
#line 667 "integer.m"
              }
#line 667 "integer.m"
            else
#line 667 "integer.m"
              {
#line 667 "integer.m"
                MR_Integer mercury__integer__V_87_87 = (mercury__integer__Len_83 + (MR_Integer) 1);
#line 667 "integer.m"
                MR_Word mercury__integer__V_89_89;

#line 667 "integer.m"
                {
#line 667 "integer.m"
                  mercury__integer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_89_89, 0) = ((MR_Box) (mercury__integer__Mod_85));
#line 667 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_89_89, 1) = ((MR_Box) (mercury__integer__Digits_86));
#line 667 "integer.m"
                }
#line 667 "integer.m"
                {
#line 667 "integer.m"
                  mercury__integer__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 0) = ((MR_Box) (mercury__integer__V_87_87));
#line 667 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 1) = ((MR_Box) (mercury__integer__V_89_89));
#line 667 "integer.m"
                }
#line 667 "integer.m"
              }
#line 851 "integer.m"
            {
#line 851 "integer.m"
              mercury__integer__quot_rem_2_5_p_0(mercury__integer__V_27_27, mercury__integer__V_28_28, mercury__integer__V_29_29, &mercury__integer__QuotZeros_15, &mercury__integer__R_16);
            }
#line 853 "integer.m"
            {
#line 853 "integer.m"
              *mercury__integer__Rem_8 = mercury__integer__div_by_digit_2_f_0(mercury__integer__M_14, mercury__integer__R_16);
            }
#line 850 "integer.m"
          }
#line 854 "integer.m"
        else
#line 855 "integer.m"
          {
#line 855 "integer.m"
            MR_Word mercury__integer__V_30_30 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 855 "integer.m"
            MR_Word mercury__integer__V_91_91 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 855 "integer.m"
            {
#line 855 "integer.m"
              mercury__integer__quot_rem_2_5_p_0(mercury__integer__V_30_30, mercury__integer__U_5, mercury__integer__V_6, &mercury__integer__QuotZeros_15, mercury__integer__Rem_8);
            }
#line 855 "integer.m"
          }
#line 857 "integer.m"
        {
#line 857 "integer.m"
          *mercury__integer__Quot_7 = mercury__integer__decap_1_f_0(mercury__integer__QuotZeros_15);
        }
#line 848 "integer.m"
      }
#line 847 "integer.m"
  }
#line 841 "integer.m"
}

#line 810 "integer.m"
void MR_CALL 
mercury__integer__big_quot_rem_4_p_0(
#line 810 "integer.m"
  MR_Word mercury__integer__X_5,
#line 810 "integer.m"
  MR_Word mercury__integer__Y_6,
#line 810 "integer.m"
  MR_Word * mercury__integer__Quot_7,
#line 810 "integer.m"
  MR_Word * mercury__integer__Rem_8)
#line 810 "integer.m"
{
#line 816 "integer.m"
  {
#line 816 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 309 "integer.m"
    MR_Integer mercury__integer__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_6, (MR_Integer) 0)));
#line 309 "integer.m"
    MR_Word mercury__integer__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_6, (MR_Integer) 1)));

#line 309 "integer.m"
    mercury__integer__succeeded = (mercury__integer__V_19_19 == (MR_Integer) 0);
#line 309 "integer.m"
    if (mercury__integer__succeeded)
#line 309 "integer.m"
      mercury__integer__succeeded = (mercury__integer__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 816 "integer.m"
    if (mercury__integer__succeeded)
#line 815 "integer.m"
      {
#line 815 "integer.m"
        {
#line 815 "integer.m"
          mercury__require__error_1_p_0((MR_String) "integer.big_quot_rem: division by zero");
#line 815 "integer.m"
          return;
        }
#line 815 "integer.m"
      }
#line 816 "integer.m"
    else
#line 819 "integer.m"
      {
#line 309 "integer.m"
        MR_Integer mercury__integer__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_5, (MR_Integer) 0)));
#line 309 "integer.m"
        MR_Word mercury__integer__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_5, (MR_Integer) 1)));

#line 309 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_21_21 == (MR_Integer) 0);
#line 309 "integer.m"
        if (mercury__integer__succeeded)
#line 309 "integer.m"
          mercury__integer__succeeded = (mercury__integer__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 819 "integer.m"
        if (mercury__integer__succeeded)
#line 817 "integer.m"
          {
#line 1057 "integer.m"
            *mercury__integer__Quot_7 = mercury__integer__X_5;
#line 1057 "integer.m"
            *mercury__integer__Rem_8 = mercury__integer__X_5;
#line 817 "integer.m"
          }
#line 819 "integer.m"
        else
#line 820 "integer.m"
          {
#line 820 "integer.m"
            MR_Integer mercury__integer__SignX_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_5, (MR_Integer) 0)));
#line 820 "integer.m"
            MR_Integer mercury__integer__SignY_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_6, (MR_Integer) 0)));
#line 820 "integer.m"
            MR_Word mercury__integer__Quot0_13;
#line 820 "integer.m"
            MR_Word mercury__integer__Rem0_14;
#line 820 "integer.m"
            MR_Word mercury__integer__V_16_16;
#line 820 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 820 "integer.m"
            MR_Integer mercury__integer__V_18_18;
#line 820 "integer.m"
            MR_Word mercury__integer__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_5, (MR_Integer) 1)));
#line 821 "integer.m"
            MR_Word mercury__integer__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_6, (MR_Integer) 1)));

#line 822 "integer.m"
            {
#line 822 "integer.m"
              mercury__integer__V_16_16 = mercury__integer__big_abs_1_f_0(mercury__integer__X_5);
            }
#line 822 "integer.m"
            {
#line 822 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__big_abs_1_f_0(mercury__integer__Y_6);
            }
#line 822 "integer.m"
            {
#line 822 "integer.m"
              mercury__integer__quot_rem_4_p_0(mercury__integer__V_16_16, mercury__integer__V_17_17, &mercury__integer__Quot0_13, &mercury__integer__Rem0_14);
            }
#line 823 "integer.m"
            mercury__integer__V_18_18 = (mercury__integer__SignX_9 * mercury__integer__SignY_11);
#line 823 "integer.m"
            {
#line 823 "integer.m"
              *mercury__integer__Quot_7 = mercury__integer__big_sign_2_f_0(mercury__integer__V_18_18, mercury__integer__Quot0_13);
            }
#line 824 "integer.m"
            {
#line 824 "integer.m"
              *mercury__integer__Rem_8 = mercury__integer__big_sign_2_f_0(mercury__integer__SignX_9, mercury__integer__Rem0_14);
            }
#line 820 "integer.m"
          }
#line 819 "integer.m"
      }
#line 816 "integer.m"
  }
#line 810 "integer.m"
}

#line 804 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_mul_list_3_f_0(
#line 804 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 804 "integer.m"
  MR_Word mercury__integer__Carry_2,
#line 804 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3)
#line 804 "integer.m"
{
#line 806 "integer.m"
  while (MR_TRUE)
#line 806 "integer.m"
    {
#line 806 "integer.m"
      /* tailcall optimized into a loop */
#line 806 "integer.m"
      {
#line 806 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 806 "integer.m"
        MR_Word mercury__integer__HeadVar__4_4;

#line 806 "integer.m"
        if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 806 "integer.m"
          mercury__integer__HeadVar__4_4 = mercury__integer__Carry_2;
#line 806 "integer.m"
        else
#line 807 "integer.m"
          {
#line 807 "integer.m"
            MR_Integer mercury__integer__X_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 807 "integer.m"
            MR_Word mercury__integer__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 807 "integer.m"
            MR_Word mercury__integer__V_11_11;
#line 807 "integer.m"
            MR_Word mercury__integer__V_12_12;
#line 807 "integer.m"
            MR_Word mercury__integer__V_13_13;
#line 807 "integer.m"
            MR_Integer mercury__integer__Len_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_2, (MR_Integer) 0)));
#line 807 "integer.m"
            MR_Word mercury__integer__Digits_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_2, (MR_Integer) 1)));
#line 807 "integer.m"
            MR_Integer mercury__integer__Len_26;
#line 807 "integer.m"
            MR_Word mercury__integer__Digits0_27;
#line 807 "integer.m"
            MR_Integer mercury__integer__Mod_28;
#line 807 "integer.m"
            MR_Word mercury__integer__Digits_29;
#line 807 "integer.m"
            MR_Integer mercury__integer__L1_34;
#line 807 "integer.m"
            MR_Integer mercury__integer__L2_36;
#line 807 "integer.m"
            MR_Integer mercury__integer__Div_38;
#line 807 "integer.m"
            MR_Word mercury__integer__Ds_39;
#line 807 "integer.m"
            MR_Integer mercury__integer__Len_40;
#line 685 "integer.m"
            MR_Word mercury__integer__D1_35;
#line 685 "integer.m"
            MR_Word mercury__integer__D2_37;

#line 653 "integer.m"
            if ((mercury__integer__Digits_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1057 "integer.m"
              {
#line 1057 "integer.m"
                MR_Word mercury__integer__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1057 "integer.m"
                mercury__integer__V_12_12 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1057 "integer.m"
              }
#line 653 "integer.m"
            else
#line 654 "integer.m"
              {
#line 654 "integer.m"
                MR_Integer mercury__integer__V_19_19 = (mercury__integer__Len_15 + (MR_Integer) 1);
#line 654 "integer.m"
                MR_Word mercury__integer__V_21_21;

#line 655 "integer.m"
                {
#line 655 "integer.m"
                  mercury__integer__V_21_21 = mercury__integer__mul_base_2_1_f_0(mercury__integer__Digits_16);
                }
#line 655 "integer.m"
                {
#line 655 "integer.m"
                  mercury__integer__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 655 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 0) = ((MR_Box) (mercury__integer__V_19_19));
#line 655 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 1) = ((MR_Box) (mercury__integer__V_21_21));
#line 655 "integer.m"
                }
#line 654 "integer.m"
              }
#line 665 "integer.m"
            mercury__integer__Len_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 665 "integer.m"
            mercury__integer__Digits0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 666 "integer.m"
            {
#line 666 "integer.m"
              mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__X_7, &mercury__integer__Mod_28, mercury__integer__Digits0_27, &mercury__integer__Digits_29);
            }
#line 667 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Mod_28 == (MR_Integer) 0);
#line 667 "integer.m"
            if (mercury__integer__succeeded)
#line 667 "integer.m"
              {
#line 667 "integer.m"
                mercury__integer__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 0) = ((MR_Box) (mercury__integer__Len_26));
#line 667 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 1) = ((MR_Box) (mercury__integer__Digits_29));
#line 667 "integer.m"
              }
#line 667 "integer.m"
            else
#line 667 "integer.m"
              {
#line 667 "integer.m"
                MR_Integer mercury__integer__V_30_30 = (mercury__integer__Len_26 + (MR_Integer) 1);
#line 667 "integer.m"
                MR_Word mercury__integer__V_32_32;

#line 667 "integer.m"
                {
#line 667 "integer.m"
                  mercury__integer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_32_32, 0) = ((MR_Box) (mercury__integer__Mod_28));
#line 667 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_32_32, 1) = ((MR_Box) (mercury__integer__Digits_29));
#line 667 "integer.m"
                }
#line 667 "integer.m"
                {
#line 667 "integer.m"
                  mercury__integer__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 0) = ((MR_Box) (mercury__integer__V_30_30));
#line 667 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 1) = ((MR_Box) (mercury__integer__V_32_32));
#line 667 "integer.m"
                }
#line 667 "integer.m"
              }
#line 685 "integer.m"
            mercury__integer__L1_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, (MR_Integer) 0)));
#line 685 "integer.m"
            mercury__integer__D1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, (MR_Integer) 1)));
#line 685 "integer.m"
            mercury__integer__L2_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, (MR_Integer) 0)));
#line 685 "integer.m"
            mercury__integer__D2_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, (MR_Integer) 1)));
#line 686 "integer.m"
            {
#line 686 "integer.m"
              mercury__integer__add_pairs_4_p_0(&mercury__integer__Div_38, mercury__integer__V_12_12, mercury__integer__V_13_13, &mercury__integer__Ds_39);
            }
#line 687 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_34 > mercury__integer__L2_36);
#line 687 "integer.m"
            if (mercury__integer__succeeded)
#line 687 "integer.m"
              mercury__integer__Len_40 = mercury__integer__L1_34;
#line 687 "integer.m"
            else
#line 687 "integer.m"
              mercury__integer__Len_40 = mercury__integer__L2_36;
#line 688 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Div_38 == (MR_Integer) 0);
#line 688 "integer.m"
            if (mercury__integer__succeeded)
#line 688 "integer.m"
              {
#line 688 "integer.m"
                mercury__integer__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 688 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 0) = ((MR_Box) (mercury__integer__Len_40));
#line 688 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 1) = ((MR_Box) (mercury__integer__Ds_39));
#line 688 "integer.m"
              }
#line 688 "integer.m"
            else
#line 688 "integer.m"
              {
#line 688 "integer.m"
                MR_Integer mercury__integer__V_43_43 = (mercury__integer__Len_40 + (MR_Integer) 1);
#line 688 "integer.m"
                MR_Word mercury__integer__V_45_45;

#line 688 "integer.m"
                {
#line 688 "integer.m"
                  mercury__integer__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_45_45, 0) = ((MR_Box) (mercury__integer__Div_38));
#line 688 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_45_45, 1) = ((MR_Box) (mercury__integer__Ds_39));
#line 688 "integer.m"
                }
#line 688 "integer.m"
                {
#line 688 "integer.m"
                  mercury__integer__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 688 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 0) = ((MR_Box) (mercury__integer__V_43_43));
#line 688 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 1) = ((MR_Box) (mercury__integer__V_45_45));
#line 688 "integer.m"
                }
#line 688 "integer.m"
              }
#line 808 "integer.m"
            /* direct tailcall eliminated */
#line 808 "integer.m"
            {
#line 808 "integer.m"
              MR_Word mercury__integer__HeadVar__1__tmp_copy_1 = mercury__integer__Xs_8;
#line 808 "integer.m"
              MR_Word mercury__integer__Carry__tmp_copy_2 = mercury__integer__V_11_11;

#line 808 "integer.m"
              mercury__integer__Carry_2 = mercury__integer__Carry__tmp_copy_2;
#line 808 "integer.m"
              mercury__integer__HeadVar__1_1 = mercury__integer__HeadVar__1__tmp_copy_1;
#line 808 "integer.m"
            }
#line 808 "integer.m"
            continue;
#line 807 "integer.m"
          }
#line 806 "integer.m"
        return mercury__integer__HeadVar__4_4;
#line 806 "integer.m"
      }
#line 806 "integer.m"
      break;
#line 806 "integer.m"
    }
#line 804 "integer.m"
}

#line 768 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_mul_karatsuba_2_f_0(
#line 768 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 768 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 768 "integer.m"
{
#line 770 "integer.m"
  {
#line 770 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 770 "integer.m"
    MR_Word mercury__integer__Res_8;
#line 770 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 770 "integer.m"
    MR_Word mercury__integer__Ds1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 770 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 770 "integer.m"
    MR_Word mercury__integer__Ds2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 771 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 < (MR_Integer) 35);
#line 773 "integer.m"
    if (mercury__integer__succeeded)
#line 772 "integer.m"
      {
#line 772 "integer.m"
        MR_Word mercury__integer__V_24_24 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 772 "integer.m"
        MR_Word mercury__integer__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 772 "integer.m"
        {
#line 772 "integer.m"
          return mercury__integer__Res_8 = mercury__integer__pos_mul_list_3_f_0(mercury__integer__Ds1_5, mercury__integer__V_24_24, mercury__integer__HeadVar__2_2);
        }
#line 772 "integer.m"
      }
#line 773 "integer.m"
    else
#line 798 "integer.m"
      {
#line 798 "integer.m"
        MR_Integer mercury__integer__Middle_9;
#line 798 "integer.m"
        MR_Word mercury__integer__Res0_20;
#line 798 "integer.m"
        MR_Word mercury__integer__Res1_21;
#line 798 "integer.m"
        MR_Word mercury__integer__Res2_22;
#line 798 "integer.m"
        MR_Word mercury__integer__V_36_36;
#line 798 "integer.m"
        MR_Word mercury__integer__V_37_37;
#line 798 "integer.m"
        MR_Integer mercury__integer__V_38_38;
#line 798 "integer.m"
        MR_Integer mercury__integer__V_39_39;
#line 798 "integer.m"
        MR_Word mercury__integer__V_42_42;
#line 798 "integer.m"
        MR_Word mercury__integer__V_43_43;
#line 798 "integer.m"
        MR_Word mercury__integer__V_44_44;
#line 798 "integer.m"
        MR_Integer mercury__integer__V_45_45;

#line 774 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L2_6 < mercury__integer__L1_4);
#line 776 "integer.m"
        if (mercury__integer__succeeded)
#line 775 "integer.m"
          {
#line 775 "integer.m"
            {
#line 775 "integer.m"
              mercury__require__error_1_p_0((MR_String) "integer.pos_mul_karatsuba: second factor smaller");
            }
#line 775 "integer.m"
          }
#line 776 "integer.m"
        else
#line 777 "integer.m"
          {
#line 777 "integer.m"
            MR_Word mercury__integer__TypeCtorInfo_47_47;
#line 777 "integer.m"
            MR_Integer mercury__integer__HiDigits_10;
#line 777 "integer.m"
            MR_Integer mercury__integer__HiDigitsSmall_11;
#line 777 "integer.m"
            MR_Word mercury__integer__Ds1Upper_12;
#line 777 "integer.m"
            MR_Word mercury__integer__Ds1Lower_13;
#line 777 "integer.m"
            MR_Word mercury__integer__Ds2Upper_14;
#line 777 "integer.m"
            MR_Word mercury__integer__Ds2Lower_15;
#line 777 "integer.m"
            MR_Word mercury__integer__LoDs1_16;
#line 777 "integer.m"
            MR_Word mercury__integer__LoDs2_17;
#line 777 "integer.m"
            MR_Word mercury__integer__HiDs1_18;
#line 777 "integer.m"
            MR_Word mercury__integer__HiDs2_19;
#line 777 "integer.m"
            MR_Integer mercury__integer__V_29_29;
#line 777 "integer.m"
            MR_Integer mercury__integer__V_30_30;

#line 777 "integer.m"
            {
#line 777 "integer.m"
              mercury__integer__Middle_9 = mercury__int__div_2_f_0(mercury__integer__L2_6, (MR_Integer) 2);
            }
#line 778 "integer.m"
            mercury__integer__HiDigits_10 = (mercury__integer__L2_6 - mercury__integer__Middle_9);
#line 779 "integer.m"
            mercury__integer__V_29_29 = (mercury__integer__L1_4 - mercury__integer__Middle_9);
#line 75 "int.opt"
            mercury__integer__succeeded = ((MR_Integer) 0 > mercury__integer__V_29_29);
#line 78 "int.opt"
            if (mercury__integer__succeeded)
#line 77 "int.opt"
              mercury__integer__HiDigitsSmall_11 = (MR_Integer) 0;
#line 78 "int.opt"
            else
#line 79 "int.opt"
              mercury__integer__HiDigitsSmall_11 = mercury__integer__V_29_29;
#line 6571 "integer.c"
            mercury__integer__TypeCtorInfo_47_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 782 "integer.m"
            {
#line 782 "integer.m"
              mercury__list__split_upto_4_p_0(mercury__integer__TypeCtorInfo_47_47, mercury__integer__HiDigitsSmall_11, mercury__integer__Ds1_5, &mercury__integer__Ds1Upper_12, &mercury__integer__Ds1Lower_13);
            }
#line 784 "integer.m"
            {
#line 784 "integer.m"
              mercury__list__split_upto_4_p_0(mercury__integer__TypeCtorInfo_47_47, mercury__integer__HiDigits_10, mercury__integer__Ds2_7, &mercury__integer__Ds2Upper_14, &mercury__integer__Ds2Lower_15);
            }
#line 85 "int.opt"
            mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__Middle_9);
#line 88 "int.opt"
            if (mercury__integer__succeeded)
#line 87 "int.opt"
              mercury__integer__V_30_30 = mercury__integer__L1_4;
#line 88 "int.opt"
            else
#line 89 "int.opt"
              mercury__integer__V_30_30 = mercury__integer__Middle_9;
#line 785 "integer.m"
            {
#line 785 "integer.m"
              mercury__integer__LoDs1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 785 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__LoDs1_16, 0) = ((MR_Box) (mercury__integer__V_30_30));
#line 785 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__LoDs1_16, 1) = ((MR_Box) (mercury__integer__Ds1Lower_13));
#line 785 "integer.m"
            }
#line 786 "integer.m"
            {
#line 786 "integer.m"
              mercury__integer__LoDs2_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 786 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__LoDs2_17, 0) = ((MR_Box) (mercury__integer__Middle_9));
#line 786 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__LoDs2_17, 1) = ((MR_Box) (mercury__integer__Ds2Lower_15));
#line 786 "integer.m"
            }
#line 787 "integer.m"
            {
#line 787 "integer.m"
              mercury__integer__HiDs1_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 787 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HiDs1_18, 0) = ((MR_Box) (mercury__integer__HiDigitsSmall_11));
#line 787 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HiDs1_18, 1) = ((MR_Box) (mercury__integer__Ds1Upper_12));
#line 787 "integer.m"
            }
#line 788 "integer.m"
            {
#line 788 "integer.m"
              mercury__integer__HiDs2_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 788 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HiDs2_19, 0) = ((MR_Box) (mercury__integer__HiDigits_10));
#line 788 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HiDs2_19, 1) = ((MR_Box) (mercury__integer__Ds2Upper_14));
#line 788 "integer.m"
            }
#line 789 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Middle_9 > (MR_Integer) 350);
#line 793 "integer.m"
            if (mercury__integer__succeeded)
#line 790 "integer.m"
              {
#line 790 "integer.m"
                MR_Word mercury__integer__V_32_32;
#line 790 "integer.m"
                MR_Word mercury__integer__V_33_33;
#line 790 "integer.m"
                MR_Integer mercury__integer__L1_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__LoDs1_16, (MR_Integer) 0)));
#line 790 "integer.m"
                MR_Integer mercury__integer__L2_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__LoDs2_17, (MR_Integer) 0)));
#line 790 "integer.m"
                MR_Integer mercury__integer__L1_76;
#line 790 "integer.m"
                MR_Integer mercury__integer__L2_78;
#line 790 "integer.m"
                MR_Integer mercury__integer__L1_84;
#line 790 "integer.m"
                MR_Integer mercury__integer__L2_86;
#line 749 "integer.m"
                MR_Word mercury__integer__Ds1_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__LoDs1_16, (MR_Integer) 1)));
#line 749 "integer.m"
                MR_Word mercury__integer__Ds2_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__LoDs2_17, (MR_Integer) 1)));
#line 749 "integer.m"
                MR_Word mercury__integer__Ds1_77;
#line 749 "integer.m"
                MR_Word mercury__integer__Ds2_79;
#line 749 "integer.m"
                MR_Word mercury__integer__Ds1_85;
#line 749 "integer.m"
                MR_Word mercury__integer__Ds2_87;

#line 750 "integer.m"
                mercury__integer__succeeded = (mercury__integer__L1_64 < mercury__integer__L2_66);
#line 749 "integer.m"
                if (mercury__integer__succeeded)
#line 751 "integer.m"
                  {
#line 751 "integer.m"
                    mercury__integer__Res0_20 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__LoDs1_16, mercury__integer__LoDs2_17);
                  }
#line 749 "integer.m"
                else
#line 753 "integer.m"
                  {
#line 753 "integer.m"
                    mercury__integer__Res0_20 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__LoDs2_17, mercury__integer__LoDs1_16);
                  }
#line 229 "integer.m"
                {
#line 229 "integer.m"
                  mercury__integer__V_32_32 = mercury__integer__big_plus_2_f_0(mercury__integer__LoDs1_16, mercury__integer__HiDs1_18);
                }
#line 229 "integer.m"
                {
#line 229 "integer.m"
                  mercury__integer__V_33_33 = mercury__integer__big_plus_2_f_0(mercury__integer__LoDs2_17, mercury__integer__HiDs2_19);
                }
#line 749 "integer.m"
                mercury__integer__L1_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_32_32, (MR_Integer) 0)));
#line 749 "integer.m"
                mercury__integer__Ds1_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_32_32, (MR_Integer) 1)));
#line 749 "integer.m"
                mercury__integer__L2_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_33_33, (MR_Integer) 0)));
#line 749 "integer.m"
                mercury__integer__Ds2_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_33_33, (MR_Integer) 1)));
#line 750 "integer.m"
                mercury__integer__succeeded = (mercury__integer__L1_76 < mercury__integer__L2_78);
#line 749 "integer.m"
                if (mercury__integer__succeeded)
#line 751 "integer.m"
                  {
#line 751 "integer.m"
                    mercury__integer__Res1_21 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__V_32_32, mercury__integer__V_33_33);
                  }
#line 749 "integer.m"
                else
#line 753 "integer.m"
                  {
#line 753 "integer.m"
                    mercury__integer__Res1_21 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__V_33_33, mercury__integer__V_32_32);
                  }
#line 749 "integer.m"
                mercury__integer__L1_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HiDs1_18, (MR_Integer) 0)));
#line 749 "integer.m"
                mercury__integer__Ds1_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HiDs1_18, (MR_Integer) 1)));
#line 749 "integer.m"
                mercury__integer__L2_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HiDs2_19, (MR_Integer) 0)));
#line 749 "integer.m"
                mercury__integer__Ds2_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HiDs2_19, (MR_Integer) 1)));
#line 750 "integer.m"
                mercury__integer__succeeded = (mercury__integer__L1_84 < mercury__integer__L2_86);
#line 749 "integer.m"
                if (mercury__integer__succeeded)
#line 751 "integer.m"
                  {
#line 751 "integer.m"
                    mercury__integer__Res2_22 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__HiDs1_18, mercury__integer__HiDs2_19);
                  }
#line 749 "integer.m"
                else
#line 753 "integer.m"
                  {
#line 753 "integer.m"
                    mercury__integer__Res2_22 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__HiDs2_19, mercury__integer__HiDs1_18);
                  }
#line 790 "integer.m"
              }
#line 793 "integer.m"
            else
#line 794 "integer.m"
              {
#line 794 "integer.m"
                MR_Word mercury__integer__V_34_34;
#line 794 "integer.m"
                MR_Word mercury__integer__V_35_35;

#line 794 "integer.m"
                {
#line 794 "integer.m"
                  mercury__integer__Res0_20 = mercury__integer__pos_mul_2_f_0(mercury__integer__LoDs1_16, mercury__integer__LoDs2_17);
                }
#line 229 "integer.m"
                {
#line 229 "integer.m"
                  mercury__integer__V_34_34 = mercury__integer__big_plus_2_f_0(mercury__integer__LoDs1_16, mercury__integer__HiDs1_18);
                }
#line 229 "integer.m"
                {
#line 229 "integer.m"
                  mercury__integer__V_35_35 = mercury__integer__big_plus_2_f_0(mercury__integer__LoDs2_17, mercury__integer__HiDs2_19);
                }
#line 795 "integer.m"
                {
#line 795 "integer.m"
                  mercury__integer__Res1_21 = mercury__integer__pos_mul_2_f_0(mercury__integer__V_34_34, mercury__integer__V_35_35);
                }
#line 796 "integer.m"
                {
#line 796 "integer.m"
                  mercury__integer__Res2_22 = mercury__integer__pos_mul_2_f_0(mercury__integer__HiDs1_18, mercury__integer__HiDs2_19);
                }
#line 794 "integer.m"
              }
#line 777 "integer.m"
          }
#line 799 "integer.m"
        mercury__integer__V_39_39 = ((MR_Integer) 2 * mercury__integer__Middle_9);
#line 799 "integer.m"
        mercury__integer__V_38_38 = (mercury__integer__V_39_39 * (MR_Integer) 14);
#line 799 "integer.m"
        {
#line 799 "integer.m"
          mercury__integer__V_37_37 = mercury__integer__big_left_shift_2_f_0(mercury__integer__Res2_22, mercury__integer__V_38_38);
        }
#line 229 "integer.m"
        {
#line 229 "integer.m"
          mercury__integer__V_44_44 = mercury__integer__big_plus_2_f_0(mercury__integer__Res2_22, mercury__integer__Res0_20);
        }
#line 800 "integer.m"
        {
#line 800 "integer.m"
          mercury__integer__V_43_43 = mercury__integer__f_minus_2_f_0(mercury__integer__Res1_21, mercury__integer__V_44_44);
        }
#line 800 "integer.m"
        mercury__integer__V_45_45 = (mercury__integer__Middle_9 * (MR_Integer) 14);
#line 800 "integer.m"
        {
#line 800 "integer.m"
          mercury__integer__V_42_42 = mercury__integer__big_left_shift_2_f_0(mercury__integer__V_43_43, mercury__integer__V_45_45);
        }
#line 799 "integer.m"
        {
#line 799 "integer.m"
          mercury__integer__V_36_36 = mercury__integer__f_plus_2_f_0(mercury__integer__V_37_37, mercury__integer__V_42_42);
        }
#line 800 "integer.m"
        {
#line 800 "integer.m"
          return mercury__integer__Res_8 = mercury__integer__f_plus_2_f_0(mercury__integer__V_36_36, mercury__integer__Res0_20);
        }
#line 798 "integer.m"
      }
#line 770 "integer.m"
    return mercury__integer__Res_8;
#line 770 "integer.m"
  }
#line 768 "integer.m"
}

#line 747 "integer.m"
MR_Word MR_CALL 
mercury__integer__pos_mul_2_f_0(
#line 747 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 747 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 747 "integer.m"
{
#line 749 "integer.m"
  {
#line 749 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 749 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 749 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 749 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 749 "integer.m"
    MR_Word mercury__integer__Ds1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 749 "integer.m"
    MR_Word mercury__integer__Ds2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 750 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
#line 749 "integer.m"
    if (mercury__integer__succeeded)
#line 751 "integer.m"
      {
#line 751 "integer.m"
        return mercury__integer__HeadVar__3_3 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__HeadVar__2_2);
      }
#line 749 "integer.m"
    else
#line 753 "integer.m"
      {
#line 753 "integer.m"
        return mercury__integer__HeadVar__3_3 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__HeadVar__2_2, mercury__integer__HeadVar__1_1);
      }
#line 749 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 749 "integer.m"
  }
#line 747 "integer.m"
}

#line 738 "integer.m"
static void MR_CALL 
mercury__integer__diff_pairs_equal_4_p_0(
#line 738 "integer.m"
  MR_Integer * mercury__integer__HeadVar__1_1,
#line 738 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 738 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 738 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4)
#line 738 "integer.m"
{
#line 741 "integer.m"
  {
#line 741 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 741 "integer.m"
    if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 741 "integer.m"
      {
#line 741 "integer.m"
        *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 741 "integer.m"
        *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 741 "integer.m"
      }
#line 741 "integer.m"
    else
#line 741 "integer.m"
      {
#line 741 "integer.m"
        MR_Word mercury__integer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 741 "integer.m"
        MR_Integer mercury__integer__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));

#line 741 "integer.m"
        if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 742 "integer.m"
          {
#line 742 "integer.m"
            *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 742 "integer.m"
            *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 742 "integer.m"
          }
#line 741 "integer.m"
        else
#line 743 "integer.m"
          {
#line 743 "integer.m"
            MR_Integer mercury__integer__Y_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 743 "integer.m"
            MR_Word mercury__integer__Ys_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 743 "integer.m"
            MR_Integer mercury__integer__Mod_13;
#line 743 "integer.m"
            MR_Word mercury__integer__TailDs_14;
#line 743 "integer.m"
            MR_Integer mercury__integer__DivTail_15;
#line 743 "integer.m"
            MR_Integer mercury__integer__V_16_16;
#line 743 "integer.m"
            MR_Integer mercury__integer__V_17_17;

#line 744 "integer.m"
            {
#line 744 "integer.m"
              mercury__integer__diff_pairs_equal_4_p_0(&mercury__integer__DivTail_15, mercury__integer__V_18_18, mercury__integer__Ys_12, &mercury__integer__TailDs_14);
            }
#line 745 "integer.m"
            mercury__integer__V_17_17 = (mercury__integer__V_19_19 - mercury__integer__Y_11);
#line 745 "integer.m"
            mercury__integer__V_16_16 = (mercury__integer__V_17_17 + mercury__integer__DivTail_15);
#line 680 "integer.m"
            {
#line 680 "integer.m"
              *mercury__integer__HeadVar__1_1 = mercury__int__f_62_62_2_f_0(mercury__integer__V_16_16, (MR_Integer) 14);
            }
#line 681 "integer.m"
            mercury__integer__Mod_13 = (mercury__integer__V_16_16 & (MR_Integer) 16383);
#line 743 "integer.m"
            {
#line 743 "integer.m"
              MR_Word base;
#line 743 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "integer.m"
              *mercury__integer__HeadVar__4_4 = base;
#line 743 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_13));
#line 743 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__TailDs_14));
#line 743 "integer.m"
            }
#line 743 "integer.m"
          }
#line 741 "integer.m"
      }
#line 741 "integer.m"
  }
#line 738 "integer.m"
}

#line 724 "integer.m"
static void MR_CALL 
mercury__integer__diff_pairs_4_p_0(
#line 724 "integer.m"
  MR_Integer * mercury__integer__Div_5,
#line 724 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 724 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 724 "integer.m"
  MR_Word * mercury__integer__Ds_10)
#line 724 "integer.m"
{
#line 727 "integer.m"
  {
#line 727 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 727 "integer.m"
    MR_Integer mercury__integer__L1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 727 "integer.m"
    MR_Word mercury__integer__D1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 727 "integer.m"
    MR_Integer mercury__integer__L2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 727 "integer.m"
    MR_Word mercury__integer__D2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));

#line 728 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_6 == mercury__integer__L2_8);
#line 730 "integer.m"
    if (mercury__integer__succeeded)
#line 729 "integer.m"
      {
#line 729 "integer.m"
        mercury__integer__diff_pairs_equal_4_p_0(mercury__integer__Div_5, mercury__integer__D1_7, mercury__integer__D2_9, mercury__integer__Ds_10);
#line 729 "integer.m"
        return;
      }
#line 730 "integer.m"
    else
#line 734 "integer.m"
      {
#line 734 "integer.m"
        MR_Integer mercury__integer__H1_11;
#line 734 "integer.m"
        MR_Word mercury__integer__T1_12;

#line 730 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_6 > mercury__integer__L2_8);
#line 730 "integer.m"
        if (mercury__integer__succeeded)
#line 730 "integer.m"
          {
#line 730 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_7)) == (MR_mktag((MR_Integer) 1)));
#line 730 "integer.m"
            if (mercury__integer__succeeded)
#line 730 "integer.m"
              {
#line 730 "integer.m"
                mercury__integer__H1_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 0)));
#line 730 "integer.m"
                mercury__integer__T1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 1)));
#line 730 "integer.m"
              }
#line 730 "integer.m"
          }
#line 734 "integer.m"
        if (mercury__integer__succeeded)
#line 731 "integer.m"
          {
#line 731 "integer.m"
            MR_Integer mercury__integer__Div1_13;
#line 731 "integer.m"
            MR_Word mercury__integer__Ds1_14;
#line 731 "integer.m"
            MR_Integer mercury__integer__Mod_15;
#line 731 "integer.m"
            MR_Word mercury__integer__V_16_16;
#line 731 "integer.m"
            MR_Integer mercury__integer__V_18_18 = (mercury__integer__L1_6 - (MR_Integer) 1);
#line 731 "integer.m"
            MR_Integer mercury__integer__V_20_20;

#line 731 "integer.m"
            {
#line 731 "integer.m"
              mercury__integer__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 731 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, 0) = ((MR_Box) (mercury__integer__V_18_18));
#line 731 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, 1) = ((MR_Box) (mercury__integer__T1_12));
#line 731 "integer.m"
            }
#line 731 "integer.m"
            {
#line 731 "integer.m"
              mercury__integer__diff_pairs_4_p_0(&mercury__integer__Div1_13, mercury__integer__V_16_16, mercury__integer__HeadVar__3_3, &mercury__integer__Ds1_14);
            }
#line 732 "integer.m"
            mercury__integer__V_20_20 = (mercury__integer__H1_11 + mercury__integer__Div1_13);
#line 680 "integer.m"
            {
#line 680 "integer.m"
              *mercury__integer__Div_5 = mercury__int__f_62_62_2_f_0(mercury__integer__V_20_20, (MR_Integer) 14);
            }
#line 681 "integer.m"
            mercury__integer__Mod_15 = (mercury__integer__V_20_20 & (MR_Integer) 16383);
#line 733 "integer.m"
            {
#line 733 "integer.m"
              MR_Word base;
#line 733 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "integer.m"
              *mercury__integer__Ds_10 = base;
#line 733 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_15));
#line 733 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_14));
#line 733 "integer.m"
            }
#line 731 "integer.m"
          }
#line 734 "integer.m"
        else
#line 735 "integer.m"
          {
#line 735 "integer.m"
            {
#line 735 "integer.m"
              mercury__require__error_1_p_0((MR_String) "integer.diff_pairs");
#line 735 "integer.m"
              return;
            }
#line 735 "integer.m"
          }
#line 734 "integer.m"
      }
#line 727 "integer.m"
  }
#line 724 "integer.m"
}

#line 717 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_minus_2_f_0(
#line 717 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 717 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 717 "integer.m"
{
#line 719 "integer.m"
  {
#line 719 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 719 "integer.m"
    MR_Word mercury__integer__Out_8;
#line 719 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 719 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 719 "integer.m"
    MR_Integer mercury__integer__Mod_9;
#line 719 "integer.m"
    MR_Word mercury__integer__Ds_10;
#line 719 "integer.m"
    MR_Integer mercury__integer__Len_11;
#line 719 "integer.m"
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 719 "integer.m"
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 720 "integer.m"
    {
#line 720 "integer.m"
      mercury__integer__diff_pairs_4_p_0(&mercury__integer__Mod_9, mercury__integer__HeadVar__1_1, mercury__integer__HeadVar__2_2, &mercury__integer__Ds_10);
    }
#line 721 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
#line 721 "integer.m"
    if (mercury__integer__succeeded)
#line 721 "integer.m"
      mercury__integer__Len_11 = mercury__integer__L1_4;
#line 721 "integer.m"
    else
#line 721 "integer.m"
      mercury__integer__Len_11 = mercury__integer__L2_6;
#line 722 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Mod_9 == (MR_Integer) 0);
#line 722 "integer.m"
    if (mercury__integer__succeeded)
#line 722 "integer.m"
      {
#line 722 "integer.m"
        MR_Word mercury__integer__V_14_14;

#line 722 "integer.m"
        {
#line 722 "integer.m"
          mercury__integer__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 722 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__Len_11));
#line 722 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__Ds_10));
#line 722 "integer.m"
        }
#line 722 "integer.m"
        {
#line 722 "integer.m"
          return mercury__integer__Out_8 = mercury__integer__decap_1_f_0(mercury__integer__V_14_14);
        }
#line 722 "integer.m"
      }
#line 722 "integer.m"
    else
#line 722 "integer.m"
      {
#line 722 "integer.m"
        MR_Integer mercury__integer__V_15_15 = (mercury__integer__Len_11 + (MR_Integer) 1);
#line 722 "integer.m"
        MR_Word mercury__integer__V_17_17;

#line 722 "integer.m"
        {
#line 722 "integer.m"
          mercury__integer__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, 0) = ((MR_Box) (mercury__integer__Mod_9));
#line 722 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, 1) = ((MR_Box) (mercury__integer__Ds_10));
#line 722 "integer.m"
        }
#line 722 "integer.m"
        {
#line 722 "integer.m"
          mercury__integer__Out_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 722 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Out_8, 0) = ((MR_Box) (mercury__integer__V_15_15));
#line 722 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Out_8, 1) = ((MR_Box) (mercury__integer__V_17_17));
#line 722 "integer.m"
        }
#line 722 "integer.m"
      }
#line 719 "integer.m"
    return mercury__integer__Out_8;
#line 719 "integer.m"
  }
#line 717 "integer.m"
}

#line 708 "integer.m"
static void MR_CALL 
mercury__integer__add_pairs_equal_4_p_0(
#line 708 "integer.m"
  MR_Integer * mercury__integer__HeadVar__1_1,
#line 708 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 708 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 708 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4)
#line 708 "integer.m"
{
#line 711 "integer.m"
  {
#line 711 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 711 "integer.m"
    if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 711 "integer.m"
      {
#line 711 "integer.m"
        *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 711 "integer.m"
        *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 711 "integer.m"
      }
#line 711 "integer.m"
    else
#line 711 "integer.m"
      {
#line 711 "integer.m"
        MR_Word mercury__integer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 711 "integer.m"
        MR_Integer mercury__integer__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));

#line 711 "integer.m"
        if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 712 "integer.m"
          {
#line 712 "integer.m"
            *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 712 "integer.m"
            *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 712 "integer.m"
          }
#line 711 "integer.m"
        else
#line 713 "integer.m"
          {
#line 713 "integer.m"
            MR_Integer mercury__integer__Y_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 713 "integer.m"
            MR_Word mercury__integer__Ys_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 713 "integer.m"
            MR_Integer mercury__integer__Mod_13;
#line 713 "integer.m"
            MR_Word mercury__integer__TailDs_14;
#line 713 "integer.m"
            MR_Integer mercury__integer__DivTail_15;
#line 713 "integer.m"
            MR_Integer mercury__integer__V_16_16;
#line 713 "integer.m"
            MR_Integer mercury__integer__V_17_17;

#line 714 "integer.m"
            {
#line 714 "integer.m"
              mercury__integer__add_pairs_equal_4_p_0(&mercury__integer__DivTail_15, mercury__integer__V_18_18, mercury__integer__Ys_12, &mercury__integer__TailDs_14);
            }
#line 715 "integer.m"
            mercury__integer__V_17_17 = (mercury__integer__V_19_19 + mercury__integer__Y_11);
#line 715 "integer.m"
            mercury__integer__V_16_16 = (mercury__integer__V_17_17 + mercury__integer__DivTail_15);
#line 680 "integer.m"
            {
#line 680 "integer.m"
              *mercury__integer__HeadVar__1_1 = mercury__int__f_62_62_2_f_0(mercury__integer__V_16_16, (MR_Integer) 14);
            }
#line 681 "integer.m"
            mercury__integer__Mod_13 = (mercury__integer__V_16_16 & (MR_Integer) 16383);
#line 713 "integer.m"
            {
#line 713 "integer.m"
              MR_Word base;
#line 713 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "integer.m"
              *mercury__integer__HeadVar__4_4 = base;
#line 713 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_13));
#line 713 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__TailDs_14));
#line 713 "integer.m"
            }
#line 713 "integer.m"
          }
#line 711 "integer.m"
      }
#line 711 "integer.m"
  }
#line 708 "integer.m"
}

#line 690 "integer.m"
static void MR_CALL 
mercury__integer__add_pairs_4_p_0(
#line 690 "integer.m"
  MR_Integer * mercury__integer__Div_5,
#line 690 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 690 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 690 "integer.m"
  MR_Word * mercury__integer__Ds_10)
#line 690 "integer.m"
{
#line 693 "integer.m"
  {
#line 693 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 693 "integer.m"
    MR_Integer mercury__integer__L1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 693 "integer.m"
    MR_Word mercury__integer__D1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 693 "integer.m"
    MR_Integer mercury__integer__L2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 693 "integer.m"
    MR_Word mercury__integer__D2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));

#line 694 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_6 == mercury__integer__L2_8);
#line 696 "integer.m"
    if (mercury__integer__succeeded)
#line 695 "integer.m"
      {
#line 695 "integer.m"
        mercury__integer__add_pairs_equal_4_p_0(mercury__integer__Div_5, mercury__integer__D1_7, mercury__integer__D2_9, mercury__integer__Ds_10);
#line 695 "integer.m"
        return;
      }
#line 696 "integer.m"
    else
#line 700 "integer.m"
      {
#line 700 "integer.m"
        MR_Integer mercury__integer__H2_11;
#line 700 "integer.m"
        MR_Word mercury__integer__T2_12;

#line 696 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_6 < mercury__integer__L2_8);
#line 696 "integer.m"
        if (mercury__integer__succeeded)
#line 696 "integer.m"
          {
#line 696 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_9)) == (MR_mktag((MR_Integer) 1)));
#line 696 "integer.m"
            if (mercury__integer__succeeded)
#line 696 "integer.m"
              {
#line 696 "integer.m"
                mercury__integer__H2_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_9, (MR_Integer) 0)));
#line 696 "integer.m"
                mercury__integer__T2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_9, (MR_Integer) 1)));
#line 696 "integer.m"
              }
#line 696 "integer.m"
          }
#line 700 "integer.m"
        if (mercury__integer__succeeded)
#line 697 "integer.m"
          {
#line 697 "integer.m"
            MR_Integer mercury__integer__Div1_13;
#line 697 "integer.m"
            MR_Word mercury__integer__Ds1_14;
#line 697 "integer.m"
            MR_Integer mercury__integer__Mod_15;
#line 697 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 697 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_8 - (MR_Integer) 1);
#line 697 "integer.m"
            MR_Integer mercury__integer__V_22_22;

#line 697 "integer.m"
            {
#line 697 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 697 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 697 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_12));
#line 697 "integer.m"
            }
#line 697 "integer.m"
            {
#line 697 "integer.m"
              mercury__integer__add_pairs_4_p_0(&mercury__integer__Div1_13, mercury__integer__HeadVar__2_2, mercury__integer__V_19_19, &mercury__integer__Ds1_14);
            }
#line 698 "integer.m"
            mercury__integer__V_22_22 = (mercury__integer__H2_11 + mercury__integer__Div1_13);
#line 680 "integer.m"
            {
#line 680 "integer.m"
              *mercury__integer__Div_5 = mercury__int__f_62_62_2_f_0(mercury__integer__V_22_22, (MR_Integer) 14);
            }
#line 681 "integer.m"
            mercury__integer__Mod_15 = (mercury__integer__V_22_22 & (MR_Integer) 16383);
#line 699 "integer.m"
            {
#line 699 "integer.m"
              MR_Word base;
#line 699 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "integer.m"
              *mercury__integer__Ds_10 = base;
#line 699 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_15));
#line 699 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_14));
#line 699 "integer.m"
            }
#line 697 "integer.m"
          }
#line 700 "integer.m"
        else
#line 704 "integer.m"
          {
#line 704 "integer.m"
            MR_Integer mercury__integer__H1_16;
#line 704 "integer.m"
            MR_Word mercury__integer__T1_17;

#line 700 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_6 > mercury__integer__L2_8);
#line 700 "integer.m"
            if (mercury__integer__succeeded)
#line 700 "integer.m"
              {
#line 700 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_7)) == (MR_mktag((MR_Integer) 1)));
#line 700 "integer.m"
                if (mercury__integer__succeeded)
#line 700 "integer.m"
                  {
#line 700 "integer.m"
                    mercury__integer__H1_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 0)));
#line 700 "integer.m"
                    mercury__integer__T1_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 1)));
#line 700 "integer.m"
                  }
#line 700 "integer.m"
              }
#line 704 "integer.m"
            if (mercury__integer__succeeded)
#line 701 "integer.m"
              {
#line 701 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 701 "integer.m"
                MR_Integer mercury__integer__V_25_25 = (mercury__integer__L1_6 - (MR_Integer) 1);
#line 701 "integer.m"
                MR_Integer mercury__integer__V_27_27;
#line 701 "integer.m"
                MR_Integer mercury__integer__Div1_29;
#line 701 "integer.m"
                MR_Word mercury__integer__Ds1_30;
#line 701 "integer.m"
                MR_Integer mercury__integer__Mod_31;

#line 701 "integer.m"
                {
#line 701 "integer.m"
                  mercury__integer__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 701 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 0) = ((MR_Box) (mercury__integer__V_25_25));
#line 701 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 1) = ((MR_Box) (mercury__integer__T1_17));
#line 701 "integer.m"
                }
#line 701 "integer.m"
                {
#line 701 "integer.m"
                  mercury__integer__add_pairs_4_p_0(&mercury__integer__Div1_29, mercury__integer__V_23_23, mercury__integer__HeadVar__3_3, &mercury__integer__Ds1_30);
                }
#line 702 "integer.m"
                mercury__integer__V_27_27 = (mercury__integer__H1_16 + mercury__integer__Div1_29);
#line 680 "integer.m"
                {
#line 680 "integer.m"
                  *mercury__integer__Div_5 = mercury__int__f_62_62_2_f_0(mercury__integer__V_27_27, (MR_Integer) 14);
                }
#line 681 "integer.m"
                mercury__integer__Mod_31 = (mercury__integer__V_27_27 & (MR_Integer) 16383);
#line 703 "integer.m"
                {
#line 703 "integer.m"
                  MR_Word base;
#line 703 "integer.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "integer.m"
                  *mercury__integer__Ds_10 = base;
#line 703 "integer.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_31));
#line 703 "integer.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_30));
#line 703 "integer.m"
                }
#line 701 "integer.m"
              }
#line 704 "integer.m"
            else
#line 705 "integer.m"
              {
#line 705 "integer.m"
                {
#line 705 "integer.m"
                  mercury__require__error_1_p_0((MR_String) "integer.add_pairs");
#line 705 "integer.m"
                  return;
                }
#line 705 "integer.m"
              }
#line 704 "integer.m"
          }
#line 700 "integer.m"
      }
#line 693 "integer.m"
  }
#line 690 "integer.m"
}

#line 669 "integer.m"
static void MR_CALL 
mercury__integer__mul_by_digit_2_4_p_0(
#line 669 "integer.m"
  MR_Integer mercury__integer__D_1,
#line 669 "integer.m"
  MR_Integer * mercury__integer__HeadVar__2_2,
#line 669 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 669 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4)
#line 669 "integer.m"
{
#line 672 "integer.m"
  {
#line 672 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 672 "integer.m"
    if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "integer.m"
      {
#line 672 "integer.m"
        *mercury__integer__HeadVar__2_2 = (MR_Integer) 0;
#line 672 "integer.m"
        *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 672 "integer.m"
      }
#line 672 "integer.m"
    else
#line 673 "integer.m"
      {
#line 673 "integer.m"
        MR_Integer mercury__integer__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 673 "integer.m"
        MR_Word mercury__integer__Xs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 673 "integer.m"
        MR_Integer mercury__integer__Mod_10;
#line 673 "integer.m"
        MR_Word mercury__integer__NewXs_11;
#line 673 "integer.m"
        MR_Integer mercury__integer__DivXs_12;
#line 673 "integer.m"
        MR_Integer mercury__integer__V_13_13;
#line 673 "integer.m"
        MR_Integer mercury__integer__V_14_14;

#line 674 "integer.m"
        {
#line 674 "integer.m"
          mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__D_1, &mercury__integer__DivXs_12, mercury__integer__Xs_9, &mercury__integer__NewXs_11);
        }
#line 675 "integer.m"
        mercury__integer__V_14_14 = (mercury__integer__D_1 * mercury__integer__X_8);
#line 675 "integer.m"
        mercury__integer__V_13_13 = (mercury__integer__V_14_14 + mercury__integer__DivXs_12);
#line 680 "integer.m"
        {
#line 680 "integer.m"
          *mercury__integer__HeadVar__2_2 = mercury__int__f_62_62_2_f_0(mercury__integer__V_13_13, (MR_Integer) 14);
        }
#line 681 "integer.m"
        mercury__integer__Mod_10 = (mercury__integer__V_13_13 & (MR_Integer) 16383);
#line 673 "integer.m"
        {
#line 673 "integer.m"
          MR_Word base;
#line 673 "integer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "integer.m"
          *mercury__integer__HeadVar__4_4 = base;
#line 673 "integer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_10));
#line 673 "integer.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__NewXs_11));
#line 673 "integer.m"
        }
#line 673 "integer.m"
      }
#line 672 "integer.m"
  }
#line 669 "integer.m"
}

#line 663 "integer.m"
static MR_Word MR_CALL 
mercury__integer__mul_by_digit_2_f_0(
#line 663 "integer.m"
  MR_Integer mercury__integer__Digit_4,
#line 663 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 663 "integer.m"
{
#line 665 "integer.m"
  {
#line 665 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 665 "integer.m"
    MR_Word mercury__integer__Out_7;
#line 665 "integer.m"
    MR_Integer mercury__integer__Len_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 665 "integer.m"
    MR_Word mercury__integer__Digits0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 665 "integer.m"
    MR_Integer mercury__integer__Mod_8;
#line 665 "integer.m"
    MR_Word mercury__integer__Digits_9;

#line 666 "integer.m"
    {
#line 666 "integer.m"
      mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__Digit_4, &mercury__integer__Mod_8, mercury__integer__Digits0_6, &mercury__integer__Digits_9);
    }
#line 667 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Mod_8 == (MR_Integer) 0);
#line 667 "integer.m"
    if (mercury__integer__succeeded)
#line 667 "integer.m"
      {
#line 667 "integer.m"
        mercury__integer__Out_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "integer.m"
        MR_hl_field(MR_mktag(0), mercury__integer__Out_7, 0) = ((MR_Box) (mercury__integer__Len_5));
#line 667 "integer.m"
        MR_hl_field(MR_mktag(0), mercury__integer__Out_7, 1) = ((MR_Box) (mercury__integer__Digits_9));
#line 667 "integer.m"
      }
#line 667 "integer.m"
    else
#line 667 "integer.m"
      {
#line 667 "integer.m"
        MR_Integer mercury__integer__V_10_10 = (mercury__integer__Len_5 + (MR_Integer) 1);
#line 667 "integer.m"
        MR_Word mercury__integer__V_12_12;

#line 667 "integer.m"
        {
#line 667 "integer.m"
          mercury__integer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_12_12, 0) = ((MR_Box) (mercury__integer__Mod_8));
#line 667 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_12_12, 1) = ((MR_Box) (mercury__integer__Digits_9));
#line 667 "integer.m"
        }
#line 667 "integer.m"
        {
#line 667 "integer.m"
          mercury__integer__Out_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Out_7, 0) = ((MR_Box) (mercury__integer__V_10_10));
#line 667 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Out_7, 1) = ((MR_Box) (mercury__integer__V_12_12));
#line 667 "integer.m"
        }
#line 667 "integer.m"
      }
#line 665 "integer.m"
    return mercury__integer__Out_7;
#line 665 "integer.m"
  }
#line 663 "integer.m"
}

#line 658 "integer.m"
static MR_Word MR_CALL 
mercury__integer__mul_base_2_1_f_0(
#line 658 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 658 "integer.m"
{
#line 660 "integer.m"
  {
#line 660 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 660 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;

#line 660 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 660 "integer.m"
      {
#line 660 "integer.m"
        MR_Word mercury__integer__V_4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 660 "integer.m"
        mercury__integer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__integer_scalar_common_1[3]);
#line 660 "integer.m"
      }
#line 660 "integer.m"
    else
#line 661 "integer.m"
      {
#line 661 "integer.m"
        MR_Integer mercury__integer__H_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 661 "integer.m"
        MR_Word mercury__integer__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 661 "integer.m"
        MR_Word mercury__integer__V_7_7;

#line 661 "integer.m"
        {
#line 661 "integer.m"
          mercury__integer__V_7_7 = mercury__integer__mul_base_2_1_f_0(mercury__integer__T_6);
        }
#line 661 "integer.m"
        {
#line 661 "integer.m"
          mercury__integer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 661 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__H_5));
#line 661 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__V_7_7));
#line 661 "integer.m"
        }
#line 661 "integer.m"
      }
#line 660 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 660 "integer.m"
  }
#line 658 "integer.m"
}

#line 635 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_int_to_digits_2_2_f_0(
#line 635 "integer.m"
  MR_Integer mercury__integer__D_4,
#line 635 "integer.m"
  MR_Word mercury__integer__Tail_5)
#line 635 "integer.m"
{
#line 640 "integer.m"
  while (MR_TRUE)
#line 640 "integer.m"
    {
#line 640 "integer.m"
      /* tailcall optimized into a loop */
#line 640 "integer.m"
      {
#line 640 "integer.m"
        MR_bool mercury__integer__succeeded = (mercury__integer__D_4 == (MR_Integer) 0);
#line 640 "integer.m"
        MR_Word mercury__integer__Result_6;

#line 640 "integer.m"
        if (mercury__integer__succeeded)
#line 639 "integer.m"
          mercury__integer__Result_6 = mercury__integer__Tail_5;
#line 640 "integer.m"
        else
#line 641 "integer.m"
          {
#line 641 "integer.m"
            MR_Integer mercury__integer__Length_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_5, (MR_Integer) 0)));
#line 641 "integer.m"
            MR_Word mercury__integer__Digits_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_5, (MR_Integer) 1)));
#line 641 "integer.m"
            MR_Integer mercury__integer__Div_9;
#line 641 "integer.m"
            MR_Integer mercury__integer__Mod_10;
#line 641 "integer.m"
            MR_Word mercury__integer__V_11_11;
#line 641 "integer.m"
            MR_Integer mercury__integer__V_12_12;
#line 641 "integer.m"
            MR_Word mercury__integer__V_14_14;

#line 680 "integer.m"
            {
#line 680 "integer.m"
              mercury__integer__Div_9 = mercury__int__f_62_62_2_f_0(mercury__integer__D_4, (MR_Integer) 14);
            }
#line 681 "integer.m"
            mercury__integer__Mod_10 = (mercury__integer__D_4 & (MR_Integer) 16383);
#line 644 "integer.m"
            mercury__integer__V_12_12 = (mercury__integer__Length_7 + (MR_Integer) 1);
#line 644 "integer.m"
            {
#line 644 "integer.m"
              mercury__integer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__Mod_10));
#line 644 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__Digits_8));
#line 644 "integer.m"
            }
#line 644 "integer.m"
            {
#line 644 "integer.m"
              mercury__integer__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 644 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 0) = ((MR_Box) (mercury__integer__V_12_12));
#line 644 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 1) = ((MR_Box) (mercury__integer__V_14_14));
#line 644 "integer.m"
            }
#line 643 "integer.m"
            /* direct tailcall eliminated */
#line 643 "integer.m"
            {
#line 643 "integer.m"
              MR_Integer mercury__integer__D__tmp_copy_4 = mercury__integer__Div_9;
#line 643 "integer.m"
              MR_Word mercury__integer__Tail__tmp_copy_5 = mercury__integer__V_11_11;

#line 643 "integer.m"
              mercury__integer__Tail_5 = mercury__integer__Tail__tmp_copy_5;
#line 643 "integer.m"
              mercury__integer__D_4 = mercury__integer__D__tmp_copy_4;
#line 643 "integer.m"
            }
#line 643 "integer.m"
            continue;
#line 641 "integer.m"
          }
#line 640 "integer.m"
        return mercury__integer__Result_6;
#line 640 "integer.m"
      }
#line 640 "integer.m"
      break;
#line 640 "integer.m"
    }
#line 635 "integer.m"
}

#line 627 "integer.m"
MR_Integer MR_CALL 
mercury__integer__integer_signum_1_f_0(
#line 627 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 627 "integer.m"
{
#line 629 "integer.m"
  {
#line 629 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 629 "integer.m"
    MR_Integer mercury__integer__HeadVar__2_2;
#line 629 "integer.m"
    MR_Integer mercury__integer__Sign_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 629 "integer.m"
    MR_Word mercury__integer__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

#line 629 "integer.m"
    {
#line 629 "integer.m"
      return mercury__integer__HeadVar__2_2 = mercury__integer__signum_1_f_0(mercury__integer__Sign_3);
    }
#line 629 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 629 "integer.m"
  }
#line 627 "integer.m"
}

#line 623 "integer.m"
MR_Integer MR_CALL 
mercury__integer__signum_1_f_0(
#line 623 "integer.m"
  MR_Integer mercury__integer__N_3)
#line 623 "integer.m"
{
#line 625 "integer.m"
  {
#line 625 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__N_3 < (MR_Integer) 0);
#line 625 "integer.m"
    MR_Integer mercury__integer__HeadVar__2_2;

#line 625 "integer.m"
    if (mercury__integer__succeeded)
#line 625 "integer.m"
      mercury__integer__HeadVar__2_2 = (MR_Integer) -1;
#line 625 "integer.m"
    else
#line 625 "integer.m"
      {
#line 625 "integer.m"
        mercury__integer__succeeded = (mercury__integer__N_3 == (MR_Integer) 0);
#line 625 "integer.m"
        if (mercury__integer__succeeded)
#line 625 "integer.m"
          mercury__integer__HeadVar__2_2 = (MR_Integer) 0;
#line 625 "integer.m"
        else
#line 625 "integer.m"
          mercury__integer__HeadVar__2_2 = (MR_Integer) 1;
#line 625 "integer.m"
      }
#line 625 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 625 "integer.m"
  }
#line 623 "integer.m"
}

#line 600 "integer.m"
MR_Word MR_CALL 
mercury__integer__int_to_integer_1_f_0(
#line 600 "integer.m"
  MR_Integer mercury__integer__D_3)
#line 600 "integer.m"
{
#line 605 "integer.m"
  {
#line 605 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__D_3 == (MR_Integer) 0);
#line 605 "integer.m"
    MR_Word mercury__integer__Int_4;

#line 605 "integer.m"
    if (mercury__integer__succeeded)
#line 1057 "integer.m"
      {
#line 1057 "integer.m"
        MR_Word mercury__integer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1057 "integer.m"
        mercury__integer__Int_4 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1057 "integer.m"
      }
#line 605 "integer.m"
    else
#line 607 "integer.m"
      {
#line 605 "integer.m"
        MR_Integer mercury__integer__V_6_6;

#line 605 "integer.m"
        mercury__integer__succeeded = (mercury__integer__D_3 > (MR_Integer) 0);
#line 605 "integer.m"
        if (mercury__integer__succeeded)
#line 605 "integer.m"
          {
#line 183 "integer.m"
            mercury__integer__V_6_6 = (MR_Integer) 16384;
#line 605 "integer.m"
            mercury__integer__succeeded = (mercury__integer__D_3 < mercury__integer__V_6_6);
#line 605 "integer.m"
          }
#line 607 "integer.m"
        if (mercury__integer__succeeded)
#line 606 "integer.m"
          {
#line 606 "integer.m"
            MR_Word mercury__integer__V_8_8;
#line 606 "integer.m"
            MR_Word mercury__integer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 606 "integer.m"
            {
#line 606 "integer.m"
              mercury__integer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_8_8, 0) = ((MR_Box) (mercury__integer__D_3));
#line 606 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_8_8, 1) = ((MR_Box) (mercury__integer__V_9_9));
#line 606 "integer.m"
            }
#line 606 "integer.m"
            {
#line 606 "integer.m"
              mercury__integer__Int_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 606 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Int_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 606 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Int_4, 1) = ((MR_Box) (mercury__integer__V_8_8));
#line 606 "integer.m"
            }
#line 606 "integer.m"
          }
#line 607 "integer.m"
        else
#line 609 "integer.m"
          {
#line 607 "integer.m"
            MR_Integer mercury__integer__V_11_11;

#line 607 "integer.m"
            mercury__integer__succeeded = (mercury__integer__D_3 < (MR_Integer) 0);
#line 607 "integer.m"
            if (mercury__integer__succeeded)
#line 607 "integer.m"
              {
#line 607 "integer.m"
                mercury__integer__V_11_11 = (MR_Integer) -16384;
#line 607 "integer.m"
                mercury__integer__succeeded = (mercury__integer__D_3 > mercury__integer__V_11_11);
#line 607 "integer.m"
              }
#line 609 "integer.m"
            if (mercury__integer__succeeded)
#line 608 "integer.m"
              {
#line 608 "integer.m"
                MR_Word mercury__integer__V_14_14;
#line 608 "integer.m"
                MR_Word mercury__integer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 608 "integer.m"
                {
#line 608 "integer.m"
                  mercury__integer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__D_3));
#line 608 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__V_15_15));
#line 608 "integer.m"
                }
#line 608 "integer.m"
                {
#line 608 "integer.m"
                  mercury__integer__Int_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 608 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Int_4, 0) = ((MR_Box) ((MR_Integer) -1));
#line 608 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Int_4, 1) = ((MR_Box) (mercury__integer__V_14_14));
#line 608 "integer.m"
                }
#line 608 "integer.m"
              }
#line 609 "integer.m"
            else
#line 613 "integer.m"
              {
#line 610 "integer.m"
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

#line 8120 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_22_22  = Min;
#line 156 "int.opt"
}
#line 610 "integer.m"
                mercury__integer__succeeded = (mercury__integer__D_3 == mercury__integer__V_22_22);
#line 613 "integer.m"
                if (mercury__integer__succeeded)
#line 612 "integer.m"
                  {
#line 612 "integer.m"
                    MR_Word mercury__integer__V_16_16;
#line 612 "integer.m"
                    MR_Integer mercury__integer__V_17_17 = (mercury__integer__D_3 + (MR_Integer) 1);
#line 612 "integer.m"
                    MR_Word mercury__integer__V_19_19;
#line 612 "integer.m"
                    MR_Word mercury__integer__V_32_32;
#line 612 "integer.m"
                    MR_Integer mercury__integer__S_33;
#line 612 "integer.m"
                    MR_Word mercury__integer__Digits0_34;
#line 612 "integer.m"
                    MR_Word mercury__integer__Digits_35;
#line 612 "integer.m"
                    MR_Integer mercury__integer__V_36_36;

#line 589 "integer.m"
                    {
#line 589 "integer.m"
                      mercury__integer__V_16_16 = mercury__integer__int_to_integer_1_f_0(mercury__integer__V_17_17);
                    }
#line 1059 "integer.m"
                    mercury__integer__V_19_19 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 313 "integer.m"
                    mercury__integer__S_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 0)));
#line 313 "integer.m"
                    mercury__integer__Digits0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 1)));
#line 313 "integer.m"
                    mercury__integer__V_36_36 = ((MR_Integer) 0 - mercury__integer__S_33);
#line 314 "integer.m"
                    {
#line 314 "integer.m"
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_34, &mercury__integer__Digits_35);
                    }
#line 313 "integer.m"
                    {
#line 313 "integer.m"
                      mercury__integer__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_32_32, 0) = ((MR_Box) (mercury__integer__V_36_36));
#line 313 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_32_32, 1) = ((MR_Box) (mercury__integer__Digits_35));
#line 313 "integer.m"
                    }
#line 231 "integer.m"
                    {
#line 231 "integer.m"
                      return mercury__integer__Int_4 = mercury__integer__big_plus_2_f_0(mercury__integer__V_16_16, mercury__integer__V_32_32);
                    }
#line 612 "integer.m"
                  }
#line 613 "integer.m"
                else
#line 614 "integer.m"
                  {
#line 614 "integer.m"
                    MR_Word mercury__integer__V_20_20;
#line 614 "integer.m"
                    MR_Integer mercury__integer__V_21_21;
#line 614 "integer.m"
                    MR_Word mercury__integer__V_40_40;
#line 614 "integer.m"
                    MR_Word mercury__integer__V_42_42;

#line 70 "int.opt"
                    {
#line 70 "int.opt"
                      mercury__int__abs_2_p_0(mercury__integer__D_3, &mercury__integer__V_21_21);
                    }
#line 1057 "integer.m"
                    mercury__integer__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1057 "integer.m"
                    mercury__integer__V_40_40 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 633 "integer.m"
                    {
#line 633 "integer.m"
                      mercury__integer__V_20_20 = mercury__integer__pos_int_to_digits_2_2_f_0(mercury__integer__V_21_21, mercury__integer__V_40_40);
                    }
#line 614 "integer.m"
                    {
#line 614 "integer.m"
                      return mercury__integer__Int_4 = mercury__integer__big_sign_2_f_0(mercury__integer__D_3, mercury__integer__V_20_20);
                    }
#line 614 "integer.m"
                  }
#line 613 "integer.m"
              }
#line 609 "integer.m"
          }
#line 607 "integer.m"
      }
#line 605 "integer.m"
    return mercury__integer__Int_4;
#line 605 "integer.m"
  }
#line 600 "integer.m"
}

#line 560 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_plus_2_f_0(
#line 560 "integer.m"
  MR_Word mercury__integer__X_4,
#line 560 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 560 "integer.m"
{
#line 565 "integer.m"
  {
#line 565 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 565 "integer.m"
    MR_Word mercury__integer__Sum_6;
#line 563 "integer.m"
    MR_Word mercury__integer__V_15_15 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 563 "integer.m"
    MR_Word mercury__integer__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 563 "integer.m"
    {
#line 563 "integer.m"
      mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__X_4, mercury__integer__V_15_15);
    }
#line 565 "integer.m"
    if (mercury__integer__succeeded)
#line 564 "integer.m"
      mercury__integer__Sum_6 = mercury__integer__Y_5;
#line 565 "integer.m"
    else
#line 567 "integer.m"
      {
#line 565 "integer.m"
        MR_Word mercury__integer__V_16_16 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 565 "integer.m"
        MR_Word mercury__integer__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 565 "integer.m"
        {
#line 565 "integer.m"
          mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__Y_5, mercury__integer__V_16_16);
        }
#line 567 "integer.m"
        if (mercury__integer__succeeded)
#line 566 "integer.m"
          mercury__integer__Sum_6 = mercury__integer__X_4;
#line 567 "integer.m"
        else
#line 568 "integer.m"
          {
#line 568 "integer.m"
            MR_Word mercury__integer__AbsX_7;
#line 568 "integer.m"
            MR_Word mercury__integer__AbsY_8;
#line 568 "integer.m"
            MR_Integer mercury__integer__SignX_9;
#line 568 "integer.m"
            MR_Integer mercury__integer__SignY_10;
#line 568 "integer.m"
            MR_Integer mercury__integer__Sign_21;
#line 568 "integer.m"
            MR_Integer mercury__integer__Sign_23;
#line 629 "integer.m"
            MR_Word mercury__integer__V_22_22;
#line 629 "integer.m"
            MR_Word mercury__integer__V_24_24;

#line 568 "integer.m"
            {
#line 568 "integer.m"
              mercury__integer__AbsX_7 = mercury__integer__big_abs_1_f_0(mercury__integer__X_4);
            }
#line 569 "integer.m"
            {
#line 569 "integer.m"
              mercury__integer__AbsY_8 = mercury__integer__big_abs_1_f_0(mercury__integer__Y_5);
            }
#line 629 "integer.m"
            mercury__integer__Sign_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 629 "integer.m"
            mercury__integer__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));
#line 629 "integer.m"
            {
#line 629 "integer.m"
              mercury__integer__SignX_9 = mercury__integer__signum_1_f_0(mercury__integer__Sign_21);
            }
#line 629 "integer.m"
            mercury__integer__Sign_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 629 "integer.m"
            mercury__integer__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
#line 629 "integer.m"
            {
#line 629 "integer.m"
              mercury__integer__SignY_10 = mercury__integer__signum_1_f_0(mercury__integer__Sign_23);
            }
#line 572 "integer.m"
            mercury__integer__succeeded = (mercury__integer__SignX_9 == mercury__integer__SignY_10);
#line 574 "integer.m"
            if (mercury__integer__succeeded)
#line 573 "integer.m"
              {
#line 573 "integer.m"
                MR_Word mercury__integer__V_12_12;
#line 573 "integer.m"
                MR_Integer mercury__integer__L1_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 0)));
#line 573 "integer.m"
                MR_Integer mercury__integer__L2_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 0)));
#line 573 "integer.m"
                MR_Integer mercury__integer__Div_30;
#line 573 "integer.m"
                MR_Word mercury__integer__Ds_31;
#line 573 "integer.m"
                MR_Integer mercury__integer__Len_32;
#line 685 "integer.m"
                MR_Word mercury__integer__D1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 1)));
#line 685 "integer.m"
                MR_Word mercury__integer__D2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 1)));

#line 686 "integer.m"
                {
#line 686 "integer.m"
                  mercury__integer__add_pairs_4_p_0(&mercury__integer__Div_30, mercury__integer__AbsX_7, mercury__integer__AbsY_8, &mercury__integer__Ds_31);
                }
#line 687 "integer.m"
                mercury__integer__succeeded = (mercury__integer__L1_26 > mercury__integer__L2_28);
#line 687 "integer.m"
                if (mercury__integer__succeeded)
#line 687 "integer.m"
                  mercury__integer__Len_32 = mercury__integer__L1_26;
#line 687 "integer.m"
                else
#line 687 "integer.m"
                  mercury__integer__Len_32 = mercury__integer__L2_28;
#line 688 "integer.m"
                mercury__integer__succeeded = (mercury__integer__Div_30 == (MR_Integer) 0);
#line 688 "integer.m"
                if (mercury__integer__succeeded)
#line 688 "integer.m"
                  {
#line 688 "integer.m"
                    mercury__integer__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 688 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 0) = ((MR_Box) (mercury__integer__Len_32));
#line 688 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 1) = ((MR_Box) (mercury__integer__Ds_31));
#line 688 "integer.m"
                  }
#line 688 "integer.m"
                else
#line 688 "integer.m"
                  {
#line 688 "integer.m"
                    MR_Integer mercury__integer__V_35_35 = (mercury__integer__Len_32 + (MR_Integer) 1);
#line 688 "integer.m"
                    MR_Word mercury__integer__V_37_37;

#line 688 "integer.m"
                    {
#line 688 "integer.m"
                      mercury__integer__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_37_37, 0) = ((MR_Box) (mercury__integer__Div_30));
#line 688 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_37_37, 1) = ((MR_Box) (mercury__integer__Ds_31));
#line 688 "integer.m"
                    }
#line 688 "integer.m"
                    {
#line 688 "integer.m"
                      mercury__integer__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 688 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 0) = ((MR_Box) (mercury__integer__V_35_35));
#line 688 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 1) = ((MR_Box) (mercury__integer__V_37_37));
#line 688 "integer.m"
                    }
#line 688 "integer.m"
                  }
#line 573 "integer.m"
                {
#line 573 "integer.m"
                  return mercury__integer__Sum_6 = mercury__integer__big_sign_2_f_0(mercury__integer__SignX_9, mercury__integer__V_12_12);
                }
#line 573 "integer.m"
              }
#line 574 "integer.m"
            else
#line 575 "integer.m"
              {
#line 575 "integer.m"
                MR_Word mercury__integer__C_11;

#line 558 "integer.m"
                {
#line 558 "integer.m"
                  mercury__integer____Compare____integer_0_0(&mercury__integer__C_11, mercury__integer__AbsX_7, mercury__integer__AbsY_8);
                }
#line 579 "integer.m"
                if ((mercury__integer__C_11 == (MR_Integer) 1))
#line 577 "integer.m"
                  {
#line 577 "integer.m"
                    MR_Word mercury__integer__V_14_14;
#line 577 "integer.m"
                    MR_Integer mercury__integer__L1_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 0)));
#line 577 "integer.m"
                    MR_Integer mercury__integer__L2_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 0)));
#line 577 "integer.m"
                    MR_Integer mercury__integer__Mod_47;
#line 577 "integer.m"
                    MR_Word mercury__integer__Ds_48;
#line 577 "integer.m"
                    MR_Integer mercury__integer__Len_49;
#line 719 "integer.m"
                    MR_Word mercury__integer__D1_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 1)));
#line 719 "integer.m"
                    MR_Word mercury__integer__D2_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 1)));

#line 720 "integer.m"
                    {
#line 720 "integer.m"
                      mercury__integer__diff_pairs_4_p_0(&mercury__integer__Mod_47, mercury__integer__AbsY_8, mercury__integer__AbsX_7, &mercury__integer__Ds_48);
                    }
#line 721 "integer.m"
                    mercury__integer__succeeded = (mercury__integer__L1_43 > mercury__integer__L2_45);
#line 721 "integer.m"
                    if (mercury__integer__succeeded)
#line 721 "integer.m"
                      mercury__integer__Len_49 = mercury__integer__L1_43;
#line 721 "integer.m"
                    else
#line 721 "integer.m"
                      mercury__integer__Len_49 = mercury__integer__L2_45;
#line 722 "integer.m"
                    mercury__integer__succeeded = (mercury__integer__Mod_47 == (MR_Integer) 0);
#line 722 "integer.m"
                    if (mercury__integer__succeeded)
#line 722 "integer.m"
                      {
#line 722 "integer.m"
                        MR_Word mercury__integer__V_52_52;

#line 722 "integer.m"
                        {
#line 722 "integer.m"
                          mercury__integer__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 722 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_52_52, 0) = ((MR_Box) (mercury__integer__Len_49));
#line 722 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_52_52, 1) = ((MR_Box) (mercury__integer__Ds_48));
#line 722 "integer.m"
                        }
#line 722 "integer.m"
                        {
#line 722 "integer.m"
                          mercury__integer__V_14_14 = mercury__integer__decap_1_f_0(mercury__integer__V_52_52);
                        }
#line 722 "integer.m"
                      }
#line 722 "integer.m"
                    else
#line 722 "integer.m"
                      {
#line 722 "integer.m"
                        MR_Integer mercury__integer__V_53_53 = (mercury__integer__Len_49 + (MR_Integer) 1);
#line 722 "integer.m"
                        MR_Word mercury__integer__V_55_55;

#line 722 "integer.m"
                        {
#line 722 "integer.m"
                          mercury__integer__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "integer.m"
                          MR_hl_field(MR_mktag(1), mercury__integer__V_55_55, 0) = ((MR_Box) (mercury__integer__Mod_47));
#line 722 "integer.m"
                          MR_hl_field(MR_mktag(1), mercury__integer__V_55_55, 1) = ((MR_Box) (mercury__integer__Ds_48));
#line 722 "integer.m"
                        }
#line 722 "integer.m"
                        {
#line 722 "integer.m"
                          mercury__integer__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 722 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__V_53_53));
#line 722 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__V_55_55));
#line 722 "integer.m"
                        }
#line 722 "integer.m"
                      }
#line 578 "integer.m"
                    {
#line 578 "integer.m"
                      return mercury__integer__Sum_6 = mercury__integer__big_sign_2_f_0(mercury__integer__SignY_10, mercury__integer__V_14_14);
                    }
#line 577 "integer.m"
                  }
#line 579 "integer.m"
                else
#line 579 "integer.m"
                  if ((mercury__integer__C_11 == (MR_Integer) 0))
#line 1057 "integer.m"
                    {
#line 1057 "integer.m"
                      MR_Word mercury__integer__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1057 "integer.m"
                      mercury__integer__Sum_6 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1057 "integer.m"
                    }
#line 579 "integer.m"
                  else
#line 580 "integer.m"
                    {
#line 580 "integer.m"
                      MR_Word mercury__integer__V_13_13;
#line 580 "integer.m"
                      MR_Integer mercury__integer__L1_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 0)));
#line 580 "integer.m"
                      MR_Integer mercury__integer__L2_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 0)));
#line 580 "integer.m"
                      MR_Integer mercury__integer__Mod_63;
#line 580 "integer.m"
                      MR_Word mercury__integer__Ds_64;
#line 580 "integer.m"
                      MR_Integer mercury__integer__Len_65;
#line 719 "integer.m"
                      MR_Word mercury__integer__D1_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 1)));
#line 719 "integer.m"
                      MR_Word mercury__integer__D2_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 1)));

#line 720 "integer.m"
                      {
#line 720 "integer.m"
                        mercury__integer__diff_pairs_4_p_0(&mercury__integer__Mod_63, mercury__integer__AbsX_7, mercury__integer__AbsY_8, &mercury__integer__Ds_64);
                      }
#line 721 "integer.m"
                      mercury__integer__succeeded = (mercury__integer__L1_59 > mercury__integer__L2_61);
#line 721 "integer.m"
                      if (mercury__integer__succeeded)
#line 721 "integer.m"
                        mercury__integer__Len_65 = mercury__integer__L1_59;
#line 721 "integer.m"
                      else
#line 721 "integer.m"
                        mercury__integer__Len_65 = mercury__integer__L2_61;
#line 722 "integer.m"
                      mercury__integer__succeeded = (mercury__integer__Mod_63 == (MR_Integer) 0);
#line 722 "integer.m"
                      if (mercury__integer__succeeded)
#line 722 "integer.m"
                        {
#line 722 "integer.m"
                          MR_Word mercury__integer__V_68_68;

#line 722 "integer.m"
                          {
#line 722 "integer.m"
                            mercury__integer__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 722 "integer.m"
                            MR_hl_field(MR_mktag(0), mercury__integer__V_68_68, 0) = ((MR_Box) (mercury__integer__Len_65));
#line 722 "integer.m"
                            MR_hl_field(MR_mktag(0), mercury__integer__V_68_68, 1) = ((MR_Box) (mercury__integer__Ds_64));
#line 722 "integer.m"
                          }
#line 722 "integer.m"
                          {
#line 722 "integer.m"
                            mercury__integer__V_13_13 = mercury__integer__decap_1_f_0(mercury__integer__V_68_68);
                          }
#line 722 "integer.m"
                        }
#line 722 "integer.m"
                      else
#line 722 "integer.m"
                        {
#line 722 "integer.m"
                          MR_Integer mercury__integer__V_69_69 = (mercury__integer__Len_65 + (MR_Integer) 1);
#line 722 "integer.m"
                          MR_Word mercury__integer__V_71_71;

#line 722 "integer.m"
                          {
#line 722 "integer.m"
                            mercury__integer__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "integer.m"
                            MR_hl_field(MR_mktag(1), mercury__integer__V_71_71, 0) = ((MR_Box) (mercury__integer__Mod_63));
#line 722 "integer.m"
                            MR_hl_field(MR_mktag(1), mercury__integer__V_71_71, 1) = ((MR_Box) (mercury__integer__Ds_64));
#line 722 "integer.m"
                          }
#line 722 "integer.m"
                          {
#line 722 "integer.m"
                            mercury__integer__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 722 "integer.m"
                            MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 0) = ((MR_Box) (mercury__integer__V_69_69));
#line 722 "integer.m"
                            MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 1) = ((MR_Box) (mercury__integer__V_71_71));
#line 722 "integer.m"
                          }
#line 722 "integer.m"
                        }
#line 581 "integer.m"
                      {
#line 581 "integer.m"
                        return mercury__integer__Sum_6 = mercury__integer__big_sign_2_f_0(mercury__integer__SignX_9, mercury__integer__V_13_13);
                      }
#line 580 "integer.m"
                    }
#line 575 "integer.m"
              }
#line 568 "integer.m"
          }
#line 567 "integer.m"
      }
#line 565 "integer.m"
    return mercury__integer__Sum_6;
#line 565 "integer.m"
  }
#line 560 "integer.m"
}

#line 550 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_cmp_2_f_0(
#line 550 "integer.m"
  MR_Word mercury__integer__X_4,
#line 550 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 550 "integer.m"
{
#line 553 "integer.m"
  {
#line 553 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 553 "integer.m"
    MR_Word mercury__integer__Result_6;

#line 553 "integer.m"
    {
#line 553 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__Result_6, mercury__integer__X_4, mercury__integer__Y_5);
    }
#line 553 "integer.m"
    return mercury__integer__Result_6;
#line 553 "integer.m"
  }
#line 550 "integer.m"
}

#line 545 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_xor_not_2_f_0(
#line 545 "integer.m"
  MR_Word mercury__integer__X1_4,
#line 545 "integer.m"
  MR_Word mercury__integer__NotX2_5)
#line 545 "integer.m"
{
#line 547 "integer.m"
  {
#line 547 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 547 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 547 "integer.m"
    MR_Word mercury__integer__V_6_6;
#line 547 "integer.m"
    MR_Word mercury__integer__V_7_7;
#line 547 "integer.m"
    MR_Word mercury__integer__V_8_8;
#line 547 "integer.m"
    MR_Word mercury__integer__V_11_11;
#line 547 "integer.m"
    MR_Word mercury__integer__V_14_14;
#line 547 "integer.m"
    MR_Word mercury__integer__V_17_17;
#line 547 "integer.m"
    MR_Word mercury__integer__V_19_19;
#line 547 "integer.m"
    MR_Word mercury__integer__V_20_20;
#line 547 "integer.m"
    MR_Integer mercury__integer__S_25;
#line 547 "integer.m"
    MR_Word mercury__integer__Digits0_26;
#line 547 "integer.m"
    MR_Word mercury__integer__Digits_27;
#line 547 "integer.m"
    MR_Integer mercury__integer__V_28_28;

#line 445 "integer.m"
    {
#line 445 "integer.m"
      mercury__integer__V_11_11 = mercury__integer__or_pairs_2_f_0(mercury__integer__X1_4, mercury__integer__NotX2_5);
    }
#line 445 "integer.m"
    {
#line 445 "integer.m"
      mercury__integer__V_7_7 = mercury__integer__decap_1_f_0(mercury__integer__V_11_11);
    }
#line 496 "integer.m"
    {
#line 496 "integer.m"
      mercury__integer__V_14_14 = mercury__integer__and_pairs_2_f_0(mercury__integer__X1_4, mercury__integer__NotX2_5);
    }
#line 496 "integer.m"
    {
#line 496 "integer.m"
      mercury__integer__V_8_8 = mercury__integer__decap_1_f_0(mercury__integer__V_14_14);
    }
#line 521 "integer.m"
    {
#line 521 "integer.m"
      mercury__integer__V_17_17 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__V_7_7, mercury__integer__V_8_8);
    }
#line 521 "integer.m"
    {
#line 521 "integer.m"
      mercury__integer__V_6_6 = mercury__integer__decap_1_f_0(mercury__integer__V_17_17);
    }
#line 1059 "integer.m"
    mercury__integer__V_20_20 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 289 "integer.m"
    {
#line 289 "integer.m"
      mercury__integer__V_19_19 = mercury__integer__big_plus_2_f_0(mercury__integer__V_6_6, mercury__integer__V_20_20);
    }
#line 313 "integer.m"
    mercury__integer__S_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 0)));
#line 313 "integer.m"
    mercury__integer__Digits0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 1)));
#line 313 "integer.m"
    mercury__integer__V_28_28 = ((MR_Integer) 0 - mercury__integer__S_25);
#line 314 "integer.m"
    {
#line 314 "integer.m"
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_26, &mercury__integer__Digits_27);
    }
#line 313 "integer.m"
    {
#line 313 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_28_28));
#line 313 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_27));
#line 313 "integer.m"
    }
#line 547 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 547 "integer.m"
  }
#line 545 "integer.m"
}

#line 538 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_not_pairs_equal_2_f_0(
#line 538 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 538 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 538 "integer.m"
{
#line 540 "integer.m"
  {
#line 540 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 540 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 540 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 540 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 540 "integer.m"
    else
#line 540 "integer.m"
      {
#line 540 "integer.m"
        MR_Word mercury__integer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 540 "integer.m"
        MR_Integer mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 540 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 541 "integer.m"
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 540 "integer.m"
        else
#line 542 "integer.m"
          {
#line 542 "integer.m"
            MR_Integer mercury__integer__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 542 "integer.m"
            MR_Word mercury__integer__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 542 "integer.m"
            MR_Integer mercury__integer__V_11_11;
#line 542 "integer.m"
            MR_Integer mercury__integer__V_12_12 = ~(mercury__integer__Y_9);
#line 542 "integer.m"
            MR_Word mercury__integer__V_13_13;

#line 543 "integer.m"
            mercury__integer__V_11_11 = (mercury__integer__V_15_15 & mercury__integer__V_12_12);
#line 543 "integer.m"
            {
#line 543 "integer.m"
              mercury__integer__V_13_13 = mercury__integer__and_not_pairs_equal_2_f_0(mercury__integer__V_14_14, mercury__integer__Ys_10);
            }
#line 543 "integer.m"
            {
#line 543 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_11_11));
#line 543 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_13_13));
#line 543 "integer.m"
            }
#line 542 "integer.m"
          }
#line 540 "integer.m"
      }
#line 540 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 540 "integer.m"
  }
#line 538 "integer.m"
}

#line 523 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_not_pairs_2_f_0(
#line 523 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 523 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 523 "integer.m"
{
#line 525 "integer.m"
  {
#line 525 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 525 "integer.m"
    MR_Word mercury__integer__Integer_8;
#line 525 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 525 "integer.m"
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 525 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 525 "integer.m"
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 526 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 == mercury__integer__L2_6);
#line 528 "integer.m"
    if (mercury__integer__succeeded)
#line 527 "integer.m"
      {
#line 527 "integer.m"
        MR_Word mercury__integer__V_16_16;

#line 527 "integer.m"
        {
#line 527 "integer.m"
          mercury__integer__V_16_16 = mercury__integer__and_not_pairs_equal_2_f_0(mercury__integer__D1_5, mercury__integer__D2_7);
        }
#line 527 "integer.m"
        {
#line 527 "integer.m"
          mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 527 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 527 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_16_16));
#line 527 "integer.m"
        }
#line 527 "integer.m"
      }
#line 528 "integer.m"
    else
#line 531 "integer.m"
      {
#line 531 "integer.m"
        MR_Word mercury__integer__T2_10;
#line 528 "integer.m"
        MR_Integer mercury__integer__V_9_9;

#line 528 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
#line 528 "integer.m"
        if (mercury__integer__succeeded)
#line 528 "integer.m"
          {
#line 528 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_7)) == (MR_mktag((MR_Integer) 1)));
#line 528 "integer.m"
            if (mercury__integer__succeeded)
#line 528 "integer.m"
              {
#line 528 "integer.m"
                mercury__integer__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 0)));
#line 528 "integer.m"
                mercury__integer__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 1)));
#line 528 "integer.m"
              }
#line 528 "integer.m"
          }
#line 531 "integer.m"
        if (mercury__integer__succeeded)
#line 529 "integer.m"
          {
#line 529 "integer.m"
            MR_Word mercury__integer__DsT_12;
#line 529 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 529 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 529 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_6 - (MR_Integer) 1);
#line 529 "integer.m"
            MR_Integer mercury__integer__V_11_11;

#line 529 "integer.m"
            {
#line 529 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 529 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 529 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_10));
#line 529 "integer.m"
            }
#line 529 "integer.m"
            {
#line 529 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__V_19_19);
            }
#line 529 "integer.m"
            mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 529 "integer.m"
            mercury__integer__DsT_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 530 "integer.m"
            {
#line 530 "integer.m"
              mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 530 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 530 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__DsT_12));
#line 530 "integer.m"
            }
#line 529 "integer.m"
          }
#line 531 "integer.m"
        else
#line 534 "integer.m"
          {
#line 534 "integer.m"
            MR_Integer mercury__integer__H1_13;
#line 534 "integer.m"
            MR_Word mercury__integer__T1_14;

#line 531 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
#line 531 "integer.m"
            if (mercury__integer__succeeded)
#line 531 "integer.m"
              {
#line 531 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_5)) == (MR_mktag((MR_Integer) 1)));
#line 531 "integer.m"
                if (mercury__integer__succeeded)
#line 531 "integer.m"
                  {
#line 531 "integer.m"
                    mercury__integer__H1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 0)));
#line 531 "integer.m"
                    mercury__integer__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 1)));
#line 531 "integer.m"
                  }
#line 531 "integer.m"
              }
#line 534 "integer.m"
            if (mercury__integer__succeeded)
#line 532 "integer.m"
              {
#line 532 "integer.m"
                MR_Word mercury__integer__V_22_22;
#line 532 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 532 "integer.m"
                MR_Integer mercury__integer__V_24_24 = (mercury__integer__L1_4 - (MR_Integer) 1);
#line 532 "integer.m"
                MR_Word mercury__integer__V_27_27;
#line 532 "integer.m"
                MR_Word mercury__integer__DsT_29;
#line 532 "integer.m"
                MR_Integer mercury__integer__V_15_15;

#line 532 "integer.m"
                {
#line 532 "integer.m"
                  mercury__integer__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 532 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 0) = ((MR_Box) (mercury__integer__V_24_24));
#line 532 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 1) = ((MR_Box) (mercury__integer__T1_14));
#line 532 "integer.m"
                }
#line 532 "integer.m"
                {
#line 532 "integer.m"
                  mercury__integer__V_22_22 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__V_23_23, mercury__integer__HeadVar__2_2);
                }
#line 532 "integer.m"
                mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_22_22, (MR_Integer) 0)));
#line 532 "integer.m"
                mercury__integer__DsT_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_22_22, (MR_Integer) 1)));
#line 533 "integer.m"
                {
#line 533 "integer.m"
                  mercury__integer__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_27_27, 0) = ((MR_Box) (mercury__integer__H1_13));
#line 533 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_27_27, 1) = ((MR_Box) (mercury__integer__DsT_29));
#line 533 "integer.m"
                }
#line 533 "integer.m"
                {
#line 533 "integer.m"
                  mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 533 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 533 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_27_27));
#line 533 "integer.m"
                }
#line 532 "integer.m"
              }
#line 534 "integer.m"
            else
#line 535 "integer.m"
              {
#line 535 "integer.m"
                {
#line 535 "integer.m"
                  mercury__require__error_1_p_0((MR_String) "integer.and_not_pairs");
                }
#line 535 "integer.m"
              }
#line 534 "integer.m"
          }
#line 531 "integer.m"
      }
#line 525 "integer.m"
    return mercury__integer__Integer_8;
#line 525 "integer.m"
  }
#line 523 "integer.m"
}

#line 513 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_pairs_equal_2_f_0(
#line 513 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 513 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 513 "integer.m"
{
#line 515 "integer.m"
  {
#line 515 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 515 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 515 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 515 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "integer.m"
    else
#line 515 "integer.m"
      {
#line 515 "integer.m"
        MR_Word mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 515 "integer.m"
        MR_Integer mercury__integer__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 515 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 516 "integer.m"
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "integer.m"
        else
#line 517 "integer.m"
          {
#line 517 "integer.m"
            MR_Integer mercury__integer__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 517 "integer.m"
            MR_Word mercury__integer__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 517 "integer.m"
            MR_Integer mercury__integer__V_11_11 = (mercury__integer__V_14_14 & mercury__integer__Y_9);
#line 517 "integer.m"
            MR_Word mercury__integer__V_12_12;

#line 517 "integer.m"
            {
#line 517 "integer.m"
              mercury__integer__V_12_12 = mercury__integer__and_pairs_equal_2_f_0(mercury__integer__V_13_13, mercury__integer__Ys_10);
            }
#line 517 "integer.m"
            {
#line 517 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_11_11));
#line 517 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_12_12));
#line 517 "integer.m"
            }
#line 517 "integer.m"
          }
#line 515 "integer.m"
      }
#line 515 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 515 "integer.m"
  }
#line 513 "integer.m"
}

#line 498 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_pairs_2_f_0(
#line 498 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 498 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 498 "integer.m"
{
#line 500 "integer.m"
  {
#line 500 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 500 "integer.m"
    MR_Word mercury__integer__Integer_8;
#line 500 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 500 "integer.m"
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 500 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 500 "integer.m"
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 501 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 == mercury__integer__L2_6);
#line 503 "integer.m"
    if (mercury__integer__succeeded)
#line 502 "integer.m"
      {
#line 502 "integer.m"
        MR_Word mercury__integer__V_16_16;

#line 502 "integer.m"
        {
#line 502 "integer.m"
          mercury__integer__V_16_16 = mercury__integer__and_pairs_equal_2_f_0(mercury__integer__D1_5, mercury__integer__D2_7);
        }
#line 502 "integer.m"
        {
#line 502 "integer.m"
          mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 502 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 502 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_16_16));
#line 502 "integer.m"
        }
#line 502 "integer.m"
      }
#line 503 "integer.m"
    else
#line 506 "integer.m"
      {
#line 506 "integer.m"
        MR_Word mercury__integer__T2_10;
#line 503 "integer.m"
        MR_Integer mercury__integer__V_9_9;

#line 503 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
#line 503 "integer.m"
        if (mercury__integer__succeeded)
#line 503 "integer.m"
          {
#line 503 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_7)) == (MR_mktag((MR_Integer) 1)));
#line 503 "integer.m"
            if (mercury__integer__succeeded)
#line 503 "integer.m"
              {
#line 503 "integer.m"
                mercury__integer__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 0)));
#line 503 "integer.m"
                mercury__integer__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 1)));
#line 503 "integer.m"
              }
#line 503 "integer.m"
          }
#line 506 "integer.m"
        if (mercury__integer__succeeded)
#line 504 "integer.m"
          {
#line 504 "integer.m"
            MR_Word mercury__integer__DsT_12;
#line 504 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 504 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 504 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_6 - (MR_Integer) 1);
#line 504 "integer.m"
            MR_Integer mercury__integer__V_11_11;

#line 504 "integer.m"
            {
#line 504 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 504 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 504 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_10));
#line 504 "integer.m"
            }
#line 504 "integer.m"
            {
#line 504 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__and_pairs_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__V_19_19);
            }
#line 504 "integer.m"
            mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 504 "integer.m"
            mercury__integer__DsT_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 505 "integer.m"
            {
#line 505 "integer.m"
              mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 505 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 505 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__DsT_12));
#line 505 "integer.m"
            }
#line 504 "integer.m"
          }
#line 506 "integer.m"
        else
#line 509 "integer.m"
          {
#line 509 "integer.m"
            MR_Word mercury__integer__T1_14;
#line 506 "integer.m"
            MR_Integer mercury__integer__V_13_13;

#line 506 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
#line 506 "integer.m"
            if (mercury__integer__succeeded)
#line 506 "integer.m"
              {
#line 506 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_5)) == (MR_mktag((MR_Integer) 1)));
#line 506 "integer.m"
                if (mercury__integer__succeeded)
#line 506 "integer.m"
                  {
#line 506 "integer.m"
                    mercury__integer__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 0)));
#line 506 "integer.m"
                    mercury__integer__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 1)));
#line 506 "integer.m"
                  }
#line 506 "integer.m"
              }
#line 509 "integer.m"
            if (mercury__integer__succeeded)
#line 507 "integer.m"
              {
#line 507 "integer.m"
                MR_Word mercury__integer__V_22_22;
#line 507 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 507 "integer.m"
                MR_Integer mercury__integer__V_24_24 = (mercury__integer__L1_4 - (MR_Integer) 1);
#line 507 "integer.m"
                MR_Word mercury__integer__DsT_28;
#line 507 "integer.m"
                MR_Integer mercury__integer__V_15_15;

#line 507 "integer.m"
                {
#line 507 "integer.m"
                  mercury__integer__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 507 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 0) = ((MR_Box) (mercury__integer__V_24_24));
#line 507 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 1) = ((MR_Box) (mercury__integer__T1_14));
#line 507 "integer.m"
                }
#line 507 "integer.m"
                {
#line 507 "integer.m"
                  mercury__integer__V_22_22 = mercury__integer__and_pairs_2_f_0(mercury__integer__V_23_23, mercury__integer__HeadVar__2_2);
                }
#line 507 "integer.m"
                mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_22_22, (MR_Integer) 0)));
#line 507 "integer.m"
                mercury__integer__DsT_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_22_22, (MR_Integer) 1)));
#line 508 "integer.m"
                {
#line 508 "integer.m"
                  mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 508 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L2_6));
#line 508 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__DsT_28));
#line 508 "integer.m"
                }
#line 507 "integer.m"
              }
#line 509 "integer.m"
            else
#line 510 "integer.m"
              {
#line 510 "integer.m"
                {
#line 510 "integer.m"
                  mercury__require__error_1_p_0((MR_String) "integer.and_pairs");
                }
#line 510 "integer.m"
              }
#line 509 "integer.m"
          }
#line 506 "integer.m"
      }
#line 500 "integer.m"
    return mercury__integer__Integer_8;
#line 500 "integer.m"
  }
#line 498 "integer.m"
}

#line 487 "integer.m"
static MR_Word MR_CALL 
mercury__integer__xor_pairs_equal_2_f_0(
#line 487 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 487 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 487 "integer.m"
{
#line 489 "integer.m"
  {
#line 489 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 489 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 489 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 489 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 489 "integer.m"
    else
#line 489 "integer.m"
      {
#line 489 "integer.m"
        MR_Word mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 489 "integer.m"
        MR_Integer mercury__integer__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 489 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "integer.m"
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 489 "integer.m"
        else
#line 491 "integer.m"
          {
#line 491 "integer.m"
            MR_Integer mercury__integer__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 491 "integer.m"
            MR_Word mercury__integer__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 491 "integer.m"
            MR_Integer mercury__integer__V_11_11 = (mercury__integer__V_14_14 ^ mercury__integer__Y_9);
#line 491 "integer.m"
            MR_Word mercury__integer__V_12_12;

#line 492 "integer.m"
            {
#line 492 "integer.m"
              mercury__integer__V_12_12 = mercury__integer__xor_pairs_equal_2_f_0(mercury__integer__V_13_13, mercury__integer__Ys_10);
            }
#line 492 "integer.m"
            {
#line 492 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_11_11));
#line 492 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_12_12));
#line 492 "integer.m"
            }
#line 491 "integer.m"
          }
#line 489 "integer.m"
      }
#line 489 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 489 "integer.m"
  }
#line 487 "integer.m"
}

#line 472 "integer.m"
static MR_Word MR_CALL 
mercury__integer__xor_pairs_2_f_0(
#line 472 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 472 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 472 "integer.m"
{
#line 474 "integer.m"
  {
#line 474 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 474 "integer.m"
    MR_Word mercury__integer__Integer_8;
#line 474 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 474 "integer.m"
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 474 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 474 "integer.m"
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 475 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 == mercury__integer__L2_6);
#line 477 "integer.m"
    if (mercury__integer__succeeded)
#line 476 "integer.m"
      {
#line 476 "integer.m"
        MR_Word mercury__integer__V_16_16;

#line 476 "integer.m"
        {
#line 476 "integer.m"
          mercury__integer__V_16_16 = mercury__integer__xor_pairs_equal_2_f_0(mercury__integer__D1_5, mercury__integer__D2_7);
        }
#line 476 "integer.m"
        {
#line 476 "integer.m"
          mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 476 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 476 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_16_16));
#line 476 "integer.m"
        }
#line 476 "integer.m"
      }
#line 477 "integer.m"
    else
#line 480 "integer.m"
      {
#line 480 "integer.m"
        MR_Integer mercury__integer__H2_9;
#line 480 "integer.m"
        MR_Word mercury__integer__T2_10;

#line 477 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
#line 477 "integer.m"
        if (mercury__integer__succeeded)
#line 477 "integer.m"
          {
#line 477 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_7)) == (MR_mktag((MR_Integer) 1)));
#line 477 "integer.m"
            if (mercury__integer__succeeded)
#line 477 "integer.m"
              {
#line 477 "integer.m"
                mercury__integer__H2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 0)));
#line 477 "integer.m"
                mercury__integer__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 1)));
#line 477 "integer.m"
              }
#line 477 "integer.m"
          }
#line 480 "integer.m"
        if (mercury__integer__succeeded)
#line 478 "integer.m"
          {
#line 478 "integer.m"
            MR_Word mercury__integer__DsT_12;
#line 478 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 478 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 478 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_6 - (MR_Integer) 1);
#line 478 "integer.m"
            MR_Word mercury__integer__V_22_22;
#line 478 "integer.m"
            MR_Integer mercury__integer__V_11_11;

#line 478 "integer.m"
            {
#line 478 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 478 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 478 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_10));
#line 478 "integer.m"
            }
#line 478 "integer.m"
            {
#line 478 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__xor_pairs_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__V_19_19);
            }
#line 478 "integer.m"
            mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 478 "integer.m"
            mercury__integer__DsT_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 479 "integer.m"
            {
#line 479 "integer.m"
              mercury__integer__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_22_22, 0) = ((MR_Box) (mercury__integer__H2_9));
#line 479 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_22_22, 1) = ((MR_Box) (mercury__integer__DsT_12));
#line 479 "integer.m"
            }
#line 479 "integer.m"
            {
#line 479 "integer.m"
              mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 479 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L2_6));
#line 479 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_22_22));
#line 479 "integer.m"
            }
#line 478 "integer.m"
          }
#line 480 "integer.m"
        else
#line 483 "integer.m"
          {
#line 483 "integer.m"
            MR_Integer mercury__integer__H1_13;
#line 483 "integer.m"
            MR_Word mercury__integer__T1_14;

#line 480 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
#line 480 "integer.m"
            if (mercury__integer__succeeded)
#line 480 "integer.m"
              {
#line 480 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_5)) == (MR_mktag((MR_Integer) 1)));
#line 480 "integer.m"
                if (mercury__integer__succeeded)
#line 480 "integer.m"
                  {
#line 480 "integer.m"
                    mercury__integer__H1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 0)));
#line 480 "integer.m"
                    mercury__integer__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 1)));
#line 480 "integer.m"
                  }
#line 480 "integer.m"
              }
#line 483 "integer.m"
            if (mercury__integer__succeeded)
#line 481 "integer.m"
              {
#line 481 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 481 "integer.m"
                MR_Word mercury__integer__V_24_24;
#line 481 "integer.m"
                MR_Integer mercury__integer__V_25_25 = (mercury__integer__L1_4 - (MR_Integer) 1);
#line 481 "integer.m"
                MR_Word mercury__integer__V_28_28;
#line 481 "integer.m"
                MR_Word mercury__integer__DsT_30;
#line 481 "integer.m"
                MR_Integer mercury__integer__V_15_15;

#line 481 "integer.m"
                {
#line 481 "integer.m"
                  mercury__integer__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 481 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 0) = ((MR_Box) (mercury__integer__V_25_25));
#line 481 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 1) = ((MR_Box) (mercury__integer__T1_14));
#line 481 "integer.m"
                }
#line 481 "integer.m"
                {
#line 481 "integer.m"
                  mercury__integer__V_23_23 = mercury__integer__xor_pairs_2_f_0(mercury__integer__V_24_24, mercury__integer__HeadVar__2_2);
                }
#line 481 "integer.m"
                mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 0)));
#line 481 "integer.m"
                mercury__integer__DsT_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 1)));
#line 482 "integer.m"
                {
#line 482 "integer.m"
                  mercury__integer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_28_28, 0) = ((MR_Box) (mercury__integer__H1_13));
#line 482 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_28_28, 1) = ((MR_Box) (mercury__integer__DsT_30));
#line 482 "integer.m"
                }
#line 482 "integer.m"
                {
#line 482 "integer.m"
                  mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 482 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 482 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_28_28));
#line 482 "integer.m"
                }
#line 481 "integer.m"
              }
#line 483 "integer.m"
            else
#line 484 "integer.m"
              {
#line 484 "integer.m"
                {
#line 484 "integer.m"
                  mercury__require__error_1_p_0((MR_String) "integer.xor_pairs");
                }
#line 484 "integer.m"
              }
#line 483 "integer.m"
          }
#line 480 "integer.m"
      }
#line 474 "integer.m"
    return mercury__integer__Integer_8;
#line 474 "integer.m"
  }
#line 472 "integer.m"
}

#line 462 "integer.m"
static MR_Word MR_CALL 
mercury__integer__or_pairs_equal_2_f_0(
#line 462 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 462 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 462 "integer.m"
{
#line 464 "integer.m"
  {
#line 464 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 464 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 464 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 464 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 464 "integer.m"
    else
#line 464 "integer.m"
      {
#line 464 "integer.m"
        MR_Word mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 464 "integer.m"
        MR_Integer mercury__integer__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 464 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 465 "integer.m"
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 464 "integer.m"
        else
#line 466 "integer.m"
          {
#line 466 "integer.m"
            MR_Integer mercury__integer__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 466 "integer.m"
            MR_Word mercury__integer__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 466 "integer.m"
            MR_Integer mercury__integer__V_11_11 = (mercury__integer__V_14_14 | mercury__integer__Y_9);
#line 466 "integer.m"
            MR_Word mercury__integer__V_12_12;

#line 466 "integer.m"
            {
#line 466 "integer.m"
              mercury__integer__V_12_12 = mercury__integer__or_pairs_equal_2_f_0(mercury__integer__V_13_13, mercury__integer__Ys_10);
            }
#line 466 "integer.m"
            {
#line 466 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_11_11));
#line 466 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_12_12));
#line 466 "integer.m"
            }
#line 466 "integer.m"
          }
#line 464 "integer.m"
      }
#line 464 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 464 "integer.m"
  }
#line 462 "integer.m"
}

#line 447 "integer.m"
static MR_Word MR_CALL 
mercury__integer__or_pairs_2_f_0(
#line 447 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 447 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 447 "integer.m"
{
#line 449 "integer.m"
  {
#line 449 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 449 "integer.m"
    MR_Word mercury__integer__Integer_8;
#line 449 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 449 "integer.m"
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 449 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 449 "integer.m"
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 450 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 == mercury__integer__L2_6);
#line 452 "integer.m"
    if (mercury__integer__succeeded)
#line 451 "integer.m"
      {
#line 451 "integer.m"
        MR_Word mercury__integer__V_16_16;

#line 451 "integer.m"
        {
#line 451 "integer.m"
          mercury__integer__V_16_16 = mercury__integer__or_pairs_equal_2_f_0(mercury__integer__D1_5, mercury__integer__D2_7);
        }
#line 451 "integer.m"
        {
#line 451 "integer.m"
          mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 451 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 451 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_16_16));
#line 451 "integer.m"
        }
#line 451 "integer.m"
      }
#line 452 "integer.m"
    else
#line 455 "integer.m"
      {
#line 455 "integer.m"
        MR_Integer mercury__integer__H2_9;
#line 455 "integer.m"
        MR_Word mercury__integer__T2_10;

#line 452 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
#line 452 "integer.m"
        if (mercury__integer__succeeded)
#line 452 "integer.m"
          {
#line 452 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_7)) == (MR_mktag((MR_Integer) 1)));
#line 452 "integer.m"
            if (mercury__integer__succeeded)
#line 452 "integer.m"
              {
#line 452 "integer.m"
                mercury__integer__H2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 0)));
#line 452 "integer.m"
                mercury__integer__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 1)));
#line 452 "integer.m"
              }
#line 452 "integer.m"
          }
#line 455 "integer.m"
        if (mercury__integer__succeeded)
#line 453 "integer.m"
          {
#line 453 "integer.m"
            MR_Word mercury__integer__DsT_12;
#line 453 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 453 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 453 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_6 - (MR_Integer) 1);
#line 453 "integer.m"
            MR_Word mercury__integer__V_22_22;
#line 453 "integer.m"
            MR_Integer mercury__integer__V_11_11;

#line 453 "integer.m"
            {
#line 453 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 453 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 453 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_10));
#line 453 "integer.m"
            }
#line 453 "integer.m"
            {
#line 453 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__or_pairs_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__V_19_19);
            }
#line 453 "integer.m"
            mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 453 "integer.m"
            mercury__integer__DsT_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 454 "integer.m"
            {
#line 454 "integer.m"
              mercury__integer__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_22_22, 0) = ((MR_Box) (mercury__integer__H2_9));
#line 454 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_22_22, 1) = ((MR_Box) (mercury__integer__DsT_12));
#line 454 "integer.m"
            }
#line 454 "integer.m"
            {
#line 454 "integer.m"
              mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 454 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L2_6));
#line 454 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_22_22));
#line 454 "integer.m"
            }
#line 453 "integer.m"
          }
#line 455 "integer.m"
        else
#line 458 "integer.m"
          {
#line 458 "integer.m"
            MR_Integer mercury__integer__H1_13;
#line 458 "integer.m"
            MR_Word mercury__integer__T1_14;

#line 455 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
#line 455 "integer.m"
            if (mercury__integer__succeeded)
#line 455 "integer.m"
              {
#line 455 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_5)) == (MR_mktag((MR_Integer) 1)));
#line 455 "integer.m"
                if (mercury__integer__succeeded)
#line 455 "integer.m"
                  {
#line 455 "integer.m"
                    mercury__integer__H1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 0)));
#line 455 "integer.m"
                    mercury__integer__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 1)));
#line 455 "integer.m"
                  }
#line 455 "integer.m"
              }
#line 458 "integer.m"
            if (mercury__integer__succeeded)
#line 456 "integer.m"
              {
#line 456 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 456 "integer.m"
                MR_Word mercury__integer__V_24_24;
#line 456 "integer.m"
                MR_Integer mercury__integer__V_25_25 = (mercury__integer__L1_4 - (MR_Integer) 1);
#line 456 "integer.m"
                MR_Word mercury__integer__V_28_28;
#line 456 "integer.m"
                MR_Word mercury__integer__DsT_30;
#line 456 "integer.m"
                MR_Integer mercury__integer__V_15_15;

#line 456 "integer.m"
                {
#line 456 "integer.m"
                  mercury__integer__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 456 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 0) = ((MR_Box) (mercury__integer__V_25_25));
#line 456 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 1) = ((MR_Box) (mercury__integer__T1_14));
#line 456 "integer.m"
                }
#line 456 "integer.m"
                {
#line 456 "integer.m"
                  mercury__integer__V_23_23 = mercury__integer__or_pairs_2_f_0(mercury__integer__V_24_24, mercury__integer__HeadVar__2_2);
                }
#line 456 "integer.m"
                mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 0)));
#line 456 "integer.m"
                mercury__integer__DsT_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 1)));
#line 457 "integer.m"
                {
#line 457 "integer.m"
                  mercury__integer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_28_28, 0) = ((MR_Box) (mercury__integer__H1_13));
#line 457 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_28_28, 1) = ((MR_Box) (mercury__integer__DsT_30));
#line 457 "integer.m"
                }
#line 457 "integer.m"
                {
#line 457 "integer.m"
                  mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 457 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 457 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_28_28));
#line 457 "integer.m"
                }
#line 456 "integer.m"
              }
#line 458 "integer.m"
            else
#line 459 "integer.m"
              {
#line 459 "integer.m"
                {
#line 459 "integer.m"
                  mercury__require__error_1_p_0((MR_String) "integer.or_pairs");
                }
#line 459 "integer.m"
              }
#line 458 "integer.m"
          }
#line 455 "integer.m"
      }
#line 449 "integer.m"
    return mercury__integer__Integer_8;
#line 449 "integer.m"
  }
#line 447 "integer.m"
}

#line 443 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_or_2_f_0(
#line 443 "integer.m"
  MR_Word mercury__integer__X_4,
#line 443 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 443 "integer.m"
{
#line 445 "integer.m"
  {
#line 445 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 445 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 445 "integer.m"
    MR_Word mercury__integer__V_6_6;

#line 445 "integer.m"
    {
#line 445 "integer.m"
      mercury__integer__V_6_6 = mercury__integer__or_pairs_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
#line 445 "integer.m"
    {
#line 445 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_6_6);
    }
#line 445 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 445 "integer.m"
  }
#line 443 "integer.m"
}

#line 433 "integer.m"
static void MR_CALL 
mercury__integer__zeros_3_p_0(
#line 433 "integer.m"
  MR_Integer mercury__integer__Len_4,
#line 433 "integer.m"
  MR_Word * mercury__integer__DCG_0_5,
#line 433 "integer.m"
  MR_Word mercury__integer__DCG_3_8)
#line 433 "integer.m"
{
#line 439 "integer.m"
  {
#line 439 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__Len_4 > (MR_Integer) 0);

#line 439 "integer.m"
    if (mercury__integer__succeeded)
#line 437 "integer.m"
      {
#line 437 "integer.m"
        MR_Word mercury__integer__DCG_1_6;
#line 437 "integer.m"
        MR_Integer mercury__integer__V_11_11 = (mercury__integer__Len_4 - (MR_Integer) 1);

#line 438 "integer.m"
        {
#line 438 "integer.m"
          mercury__integer__zeros_3_p_0(mercury__integer__V_11_11, &mercury__integer__DCG_1_6, mercury__integer__DCG_3_8);
        }
#line 437 "integer.m"
        {
#line 437 "integer.m"
          MR_Word base;
#line 437 "integer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "integer.m"
          *mercury__integer__DCG_0_5 = base;
#line 437 "integer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 437 "integer.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__DCG_1_6));
#line 437 "integer.m"
        }
#line 437 "integer.m"
      }
#line 439 "integer.m"
    else
#line 440 "integer.m"
      *mercury__integer__DCG_0_5 = mercury__integer__DCG_3_8;
#line 439 "integer.m"
  }
#line 433 "integer.m"
}

#line 417 "integer.m"
static void MR_CALL 
mercury__integer__leftshift_6_p_0(
#line 417 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 417 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 417 "integer.m"
  MR_Integer mercury__integer__Len_3,
#line 417 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 417 "integer.m"
  MR_Integer * mercury__integer__Carry_5,
#line 417 "integer.m"
  MR_Word * mercury__integer__DigitsOut_6)
#line 417 "integer.m"
{
#line 420 "integer.m"
  {
#line 420 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 420 "integer.m"
    if ((mercury__integer__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 420 "integer.m"
      {
#line 420 "integer.m"
        MR_Word mercury__integer__V_12_12;

#line 421 "integer.m"
        *mercury__integer__Carry_5 = (MR_Integer) 0;
#line 422 "integer.m"
        mercury__integer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 422 "integer.m"
        {
#line 422 "integer.m"
          mercury__integer__zeros_3_p_0(mercury__integer__Len_3, mercury__integer__DigitsOut_6, mercury__integer__V_12_12);
#line 422 "integer.m"
          return;
        }
#line 420 "integer.m"
      }
#line 420 "integer.m"
    else
#line 423 "integer.m"
      {
#line 423 "integer.m"
        MR_Integer mercury__integer__H_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
#line 423 "integer.m"
        MR_Word mercury__integer__T_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));

#line 424 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Len_3 <= (MR_Integer) 0);
#line 427 "integer.m"
        if (mercury__integer__succeeded)
#line 425 "integer.m"
          {
#line 425 "integer.m"
            *mercury__integer__Carry_5 = (MR_Integer) 0;
#line 426 "integer.m"
            *mercury__integer__DigitsOut_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 425 "integer.m"
          }
#line 427 "integer.m"
        else
#line 428 "integer.m"
          {
#line 428 "integer.m"
            MR_Integer mercury__integer__TailCarry_20;
#line 428 "integer.m"
            MR_Word mercury__integer__Tail_21;
#line 428 "integer.m"
            MR_Integer mercury__integer__V_23_23;
#line 428 "integer.m"
            MR_Integer mercury__integer__V_24_24;
#line 428 "integer.m"
            MR_Integer mercury__integer__V_26_26;
#line 428 "integer.m"
            MR_Integer mercury__integer__V_28_28;
#line 428 "integer.m"
            MR_Integer mercury__integer__V_29_29;
#line 428 "integer.m"
            MR_Integer mercury__integer__V_30_30;

#line 428 "integer.m"
            {
#line 428 "integer.m"
              mercury__integer__V_24_24 = mercury__int__f_60_60_2_f_0((MR_Integer) 16383, mercury__integer__HeadVar__2_2);
            }
#line 428 "integer.m"
            mercury__integer__V_23_23 = (mercury__integer__H_16 & mercury__integer__V_24_24);
#line 428 "integer.m"
            {
#line 428 "integer.m"
              *mercury__integer__Carry_5 = mercury__int__f_62_62_2_f_0(mercury__integer__V_23_23, mercury__integer__HeadVar__2_2);
            }
#line 429 "integer.m"
            mercury__integer__V_26_26 = (mercury__integer__Len_3 - (MR_Integer) 1);
#line 429 "integer.m"
            {
#line 429 "integer.m"
              mercury__integer__leftshift_6_p_0(mercury__integer__HeadVar__1_1, mercury__integer__HeadVar__2_2, mercury__integer__V_26_26, mercury__integer__T_17, &mercury__integer__TailCarry_20, &mercury__integer__Tail_21);
            }
#line 430 "integer.m"
            {
#line 430 "integer.m"
              mercury__integer__V_30_30 = mercury__int__f_60_60_2_f_0(mercury__integer__H_16, mercury__integer__HeadVar__1_1);
            }
#line 430 "integer.m"
            mercury__integer__V_29_29 = (mercury__integer__V_30_30 & (MR_Integer) 16383);
#line 430 "integer.m"
            mercury__integer__V_28_28 = (mercury__integer__TailCarry_20 | mercury__integer__V_29_29);
#line 430 "integer.m"
            {
#line 430 "integer.m"
              MR_Word base;
#line 430 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "integer.m"
              *mercury__integer__DigitsOut_6 = base;
#line 430 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__V_28_28));
#line 430 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Tail_21));
#line 430 "integer.m"
            }
#line 428 "integer.m"
          }
#line 423 "integer.m"
      }
#line 420 "integer.m"
  }
#line 417 "integer.m"
}

#line 393 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_left_shift_2_f_0(
#line 393 "integer.m"
  MR_Word mercury__integer__X_4,
#line 393 "integer.m"
  MR_Integer mercury__integer__I_5)
#line 393 "integer.m"
{
#line 395 "integer.m"
  {
#line 395 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 395 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 309 "integer.m"
    MR_Integer mercury__integer__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 309 "integer.m"
    MR_Word mercury__integer__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 309 "integer.m"
    mercury__integer__succeeded = (mercury__integer__V_8_8 == (MR_Integer) 0);
#line 309 "integer.m"
    if (mercury__integer__succeeded)
#line 309 "integer.m"
      mercury__integer__succeeded = (mercury__integer__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "integer.m"
    if (mercury__integer__succeeded)
#line 395 "integer.m"
      mercury__integer__HeadVar__3_3 = mercury__integer__X_4;
#line 395 "integer.m"
    else
#line 395 "integer.m"
      {
#line 395 "integer.m"
        MR_Integer mercury__integer__Sign_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 395 "integer.m"
        MR_Word mercury__integer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 305 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_10 < (MR_Integer) 0);
#line 395 "integer.m"
        if (mercury__integer__succeeded)
#line 399 "integer.m"
          {
#line 399 "integer.m"
            MR_Word mercury__integer__V_6_6;
#line 399 "integer.m"
            MR_Integer mercury__integer__Len_19 = ((MR_Integer) 0 - mercury__integer__Sign_10);
#line 399 "integer.m"
            MR_Word mercury__integer__Digits_20;
#line 399 "integer.m"
            MR_Integer mercury__integer__Div_21;
#line 399 "integer.m"
            MR_Integer mercury__integer__Mod_22;
#line 399 "integer.m"
            MR_Integer mercury__integer__NewLen_23;
#line 399 "integer.m"
            MR_Integer mercury__integer__Carry_24;
#line 399 "integer.m"
            MR_Word mercury__integer__NewDigits_25;
#line 399 "integer.m"
            MR_Integer mercury__integer__V_28_28;
#line 399 "integer.m"
            MR_Integer mercury__integer__V_6_36;
#line 399 "integer.m"
            MR_Integer mercury__integer__V_7_37;
#line 399 "integer.m"
            MR_Integer mercury__integer__S_38;
#line 399 "integer.m"
            MR_Word mercury__integer__Digits0_39;
#line 399 "integer.m"
            MR_Word mercury__integer__Digits_40;
#line 399 "integer.m"
            MR_Integer mercury__integer__V_41_41;

#line 314 "integer.m"
            {
#line 314 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__V_11_11, &mercury__integer__Digits_20);
            }
#line 407 "integer.m"
            {
#line 407 "integer.m"
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
#line 409 "integer.m"
            mercury__integer__NewLen_23 = (mercury__integer__Len_19 + mercury__integer__Div_21);
#line 410 "integer.m"
            mercury__integer__V_28_28 = ((MR_Integer) 14 - mercury__integer__Mod_22);
#line 410 "integer.m"
            {
#line 410 "integer.m"
              mercury__integer__leftshift_6_p_0(mercury__integer__Mod_22, mercury__integer__V_28_28, mercury__integer__NewLen_23, mercury__integer__Digits_20, &mercury__integer__Carry_24, &mercury__integer__NewDigits_25);
            }
#line 411 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Carry_24 == (MR_Integer) 0);
#line 413 "integer.m"
            if (mercury__integer__succeeded)
#line 412 "integer.m"
              {
#line 412 "integer.m"
                mercury__integer__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 412 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 0) = ((MR_Box) (mercury__integer__NewLen_23));
#line 412 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 1) = ((MR_Box) (mercury__integer__NewDigits_25));
#line 412 "integer.m"
              }
#line 413 "integer.m"
            else
#line 414 "integer.m"
              {
#line 414 "integer.m"
                MR_Integer mercury__integer__V_30_30 = (mercury__integer__NewLen_23 + (MR_Integer) 1);
#line 414 "integer.m"
                MR_Word mercury__integer__V_32_32;

#line 414 "integer.m"
                {
#line 414 "integer.m"
                  mercury__integer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_32_32, 0) = ((MR_Box) (mercury__integer__Carry_24));
#line 414 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_32_32, 1) = ((MR_Box) (mercury__integer__NewDigits_25));
#line 414 "integer.m"
                }
#line 414 "integer.m"
                {
#line 414 "integer.m"
                  mercury__integer__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 414 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 0) = ((MR_Box) (mercury__integer__V_30_30));
#line 414 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 1) = ((MR_Box) (mercury__integer__V_32_32));
#line 414 "integer.m"
                }
#line 414 "integer.m"
              }
#line 313 "integer.m"
            mercury__integer__S_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, (MR_Integer) 0)));
#line 313 "integer.m"
            mercury__integer__Digits0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, (MR_Integer) 1)));
#line 313 "integer.m"
            mercury__integer__V_41_41 = ((MR_Integer) 0 - mercury__integer__S_38);
#line 314 "integer.m"
            {
#line 314 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_39, &mercury__integer__Digits_40);
            }
#line 313 "integer.m"
            {
#line 313 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_41_41));
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_40));
#line 313 "integer.m"
            }
#line 399 "integer.m"
          }
#line 395 "integer.m"
        else
#line 406 "integer.m"
          {
#line 406 "integer.m"
            MR_Integer mercury__integer__Len_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 406 "integer.m"
            MR_Word mercury__integer__Digits_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));
#line 406 "integer.m"
            MR_Integer mercury__integer__Div_46;
#line 406 "integer.m"
            MR_Integer mercury__integer__Mod_47;
#line 406 "integer.m"
            MR_Integer mercury__integer__NewLen_48;
#line 406 "integer.m"
            MR_Integer mercury__integer__Carry_49;
#line 406 "integer.m"
            MR_Word mercury__integer__NewDigits_50;
#line 406 "integer.m"
            MR_Integer mercury__integer__V_53_53;
#line 406 "integer.m"
            MR_Integer mercury__integer__V_6_61;
#line 406 "integer.m"
            MR_Integer mercury__integer__V_7_62;

#line 407 "integer.m"
            {
#line 407 "integer.m"
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
#line 409 "integer.m"
            mercury__integer__NewLen_48 = (mercury__integer__Len_44 + mercury__integer__Div_46);
#line 410 "integer.m"
            mercury__integer__V_53_53 = ((MR_Integer) 14 - mercury__integer__Mod_47);
#line 410 "integer.m"
            {
#line 410 "integer.m"
              mercury__integer__leftshift_6_p_0(mercury__integer__Mod_47, mercury__integer__V_53_53, mercury__integer__NewLen_48, mercury__integer__Digits_45, &mercury__integer__Carry_49, &mercury__integer__NewDigits_50);
            }
#line 411 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Carry_49 == (MR_Integer) 0);
#line 413 "integer.m"
            if (mercury__integer__succeeded)
#line 412 "integer.m"
              {
#line 412 "integer.m"
                mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 412 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__NewLen_48));
#line 412 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__NewDigits_50));
#line 412 "integer.m"
              }
#line 413 "integer.m"
            else
#line 414 "integer.m"
              {
#line 414 "integer.m"
                MR_Integer mercury__integer__V_55_55 = (mercury__integer__NewLen_48 + (MR_Integer) 1);
#line 414 "integer.m"
                MR_Word mercury__integer__V_57_57;

#line 414 "integer.m"
                {
#line 414 "integer.m"
                  mercury__integer__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_57_57, 0) = ((MR_Box) (mercury__integer__Carry_49));
#line 414 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_57_57, 1) = ((MR_Box) (mercury__integer__NewDigits_50));
#line 414 "integer.m"
                }
#line 414 "integer.m"
                {
#line 414 "integer.m"
                  mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 414 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_55_55));
#line 414 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_57_57));
#line 414 "integer.m"
                }
#line 414 "integer.m"
              }
#line 406 "integer.m"
          }
#line 395 "integer.m"
      }
#line 395 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 395 "integer.m"
  }
#line 393 "integer.m"
}

#line 379 "integer.m"
static MR_Word MR_CALL 
mercury__integer__rightshift_4_f_0(
#line 379 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 379 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 379 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 379 "integer.m"
  MR_Integer mercury__integer__HeadVar__4_4)
#line 379 "integer.m"
{
#line 381 "integer.m"
  {
#line 381 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 381 "integer.m"
    MR_Word mercury__integer__HeadVar__5_5;
#line 381 "integer.m"
    MR_Word mercury__integer__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 381 "integer.m"
    MR_Integer mercury__integer__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));

#line 381 "integer.m"
    if ((mercury__integer__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1057 "integer.m"
      {
#line 1057 "integer.m"
        MR_Word mercury__integer__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1057 "integer.m"
        mercury__integer__HeadVar__5_5 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1057 "integer.m"
      }
#line 381 "integer.m"
    else
#line 382 "integer.m"
      {
#line 382 "integer.m"
        MR_Integer mercury__integer__H_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_35_35, (MR_Integer) 0)));
#line 382 "integer.m"
        MR_Word mercury__integer__T_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_35_35, (MR_Integer) 1)));

#line 383 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_36_36 <= (MR_Integer) 0);
#line 385 "integer.m"
        if (mercury__integer__succeeded)
#line 1057 "integer.m"
          {
#line 1057 "integer.m"
            MR_Word mercury__integer__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1057 "integer.m"
            mercury__integer__HeadVar__5_5 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1057 "integer.m"
          }
#line 385 "integer.m"
        else
#line 386 "integer.m"
          {
#line 386 "integer.m"
            MR_Integer mercury__integer__NewH_18;
#line 386 "integer.m"
            MR_Integer mercury__integer__NewCarry_19;
#line 386 "integer.m"
            MR_Integer mercury__integer__TailLen_20;
#line 386 "integer.m"
            MR_Word mercury__integer__NewTail_21;
#line 386 "integer.m"
            MR_Integer mercury__integer__V_24_24;
#line 386 "integer.m"
            MR_Integer mercury__integer__V_25_25;
#line 386 "integer.m"
            MR_Integer mercury__integer__V_26_26;
#line 386 "integer.m"
            MR_Word mercury__integer__V_28_28;
#line 386 "integer.m"
            MR_Word mercury__integer__V_29_29;
#line 386 "integer.m"
            MR_Integer mercury__integer__V_30_30;
#line 386 "integer.m"
            MR_Integer mercury__integer__V_32_32;
#line 386 "integer.m"
            MR_Word mercury__integer__V_34_34;

#line 386 "integer.m"
            {
#line 386 "integer.m"
              mercury__integer__V_24_24 = mercury__int__f_62_62_2_f_0(mercury__integer__H_14, mercury__integer__HeadVar__1_1);
            }
#line 386 "integer.m"
            mercury__integer__NewH_18 = (mercury__integer__HeadVar__4_4 | mercury__integer__V_24_24);
#line 387 "integer.m"
            {
#line 387 "integer.m"
              mercury__integer__V_26_26 = mercury__int__f_62_62_2_f_0((MR_Integer) 16383, mercury__integer__HeadVar__2_2);
            }
#line 387 "integer.m"
            mercury__integer__V_25_25 = (mercury__integer__H_14 & mercury__integer__V_26_26);
#line 387 "integer.m"
            {
#line 387 "integer.m"
              mercury__integer__NewCarry_19 = mercury__int__f_60_60_2_f_0(mercury__integer__V_25_25, mercury__integer__HeadVar__2_2);
            }
#line 388 "integer.m"
            mercury__integer__V_30_30 = (mercury__integer__V_36_36 - (MR_Integer) 1);
#line 388 "integer.m"
            {
#line 388 "integer.m"
              mercury__integer__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 388 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 0) = ((MR_Box) (mercury__integer__V_30_30));
#line 388 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 1) = ((MR_Box) (mercury__integer__T_15));
#line 388 "integer.m"
            }
#line 388 "integer.m"
            {
#line 388 "integer.m"
              mercury__integer__V_28_28 = mercury__integer__rightshift_4_f_0(mercury__integer__HeadVar__1_1, mercury__integer__HeadVar__2_2, mercury__integer__V_29_29, mercury__integer__NewCarry_19);
            }
#line 388 "integer.m"
            mercury__integer__TailLen_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, (MR_Integer) 0)));
#line 388 "integer.m"
            mercury__integer__NewTail_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, (MR_Integer) 1)));
#line 390 "integer.m"
            mercury__integer__V_32_32 = (mercury__integer__TailLen_20 + (MR_Integer) 1);
#line 390 "integer.m"
            {
#line 390 "integer.m"
              mercury__integer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_34_34, 0) = ((MR_Box) (mercury__integer__NewH_18));
#line 390 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_34_34, 1) = ((MR_Box) (mercury__integer__NewTail_21));
#line 390 "integer.m"
            }
#line 390 "integer.m"
            {
#line 390 "integer.m"
              mercury__integer__HeadVar__5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 390 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__5_5, 0) = ((MR_Box) (mercury__integer__V_32_32));
#line 390 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__5_5, 1) = ((MR_Box) (mercury__integer__V_34_34));
#line 390 "integer.m"
            }
#line 386 "integer.m"
          }
#line 382 "integer.m"
      }
#line 381 "integer.m"
    return mercury__integer__HeadVar__5_5;
#line 381 "integer.m"
  }
#line 379 "integer.m"
}

#line 346 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_mod_2_f_0(
#line 346 "integer.m"
  MR_Word mercury__integer__X_4,
#line 346 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 346 "integer.m"
{
#line 348 "integer.m"
  {
#line 348 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 348 "integer.m"
    MR_Word mercury__integer__Mod_6;
#line 348 "integer.m"
    MR_Word mercury__integer__Rem_8;
#line 349 "integer.m"
    MR_Word mercury__integer___Trunc_7;
#line 350 "integer.m"
    MR_Integer mercury__integer__V_9_9;
#line 350 "integer.m"
    MR_Integer mercury__integer__V_11_11;
#line 350 "integer.m"
    MR_Integer mercury__integer__V_12_12;
#line 350 "integer.m"
    MR_Integer mercury__integer__Sign_13;
#line 350 "integer.m"
    MR_Integer mercury__integer__Sign_15;
#line 629 "integer.m"
    MR_Word mercury__integer__V_14_14;
#line 629 "integer.m"
    MR_Word mercury__integer__V_16_16;

#line 349 "integer.m"
    {
#line 349 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer___Trunc_7, &mercury__integer__Rem_8);
    }
#line 629 "integer.m"
    mercury__integer__Sign_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 629 "integer.m"
    mercury__integer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
#line 629 "integer.m"
    {
#line 629 "integer.m"
      mercury__integer__V_11_11 = mercury__integer__signum_1_f_0(mercury__integer__Sign_13);
    }
#line 629 "integer.m"
    mercury__integer__Sign_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Rem_8, (MR_Integer) 0)));
#line 629 "integer.m"
    mercury__integer__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Rem_8, (MR_Integer) 1)));
#line 629 "integer.m"
    {
#line 629 "integer.m"
      mercury__integer__V_12_12 = mercury__integer__signum_1_f_0(mercury__integer__Sign_15);
    }
#line 350 "integer.m"
    mercury__integer__V_9_9 = (mercury__integer__V_11_11 * mercury__integer__V_12_12);
#line 350 "integer.m"
    mercury__integer__succeeded = (mercury__integer__V_9_9 < (MR_Integer) 0);
#line 352 "integer.m"
    if (mercury__integer__succeeded)
#line 229 "integer.m"
      {
#line 229 "integer.m"
        return mercury__integer__Mod_6 = mercury__integer__big_plus_2_f_0(mercury__integer__Rem_8, mercury__integer__Y_5);
      }
#line 352 "integer.m"
    else
#line 353 "integer.m"
      mercury__integer__Mod_6 = mercury__integer__Rem_8;
#line 348 "integer.m"
    return mercury__integer__Mod_6;
#line 348 "integer.m"
  }
#line 346 "integer.m"
}

#line 336 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_div_2_f_0(
#line 336 "integer.m"
  MR_Word mercury__integer__X_4,
#line 336 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 336 "integer.m"
{
#line 338 "integer.m"
  {
#line 338 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 338 "integer.m"
    MR_Word mercury__integer__Div_6;
#line 338 "integer.m"
    MR_Word mercury__integer__Trunc_7;
#line 338 "integer.m"
    MR_Word mercury__integer__Rem_8;
#line 340 "integer.m"
    MR_Integer mercury__integer__V_9_9;
#line 340 "integer.m"
    MR_Integer mercury__integer__V_11_11;
#line 340 "integer.m"
    MR_Integer mercury__integer__V_12_12;
#line 340 "integer.m"
    MR_Integer mercury__integer__Sign_14;
#line 340 "integer.m"
    MR_Integer mercury__integer__Sign_16;
#line 629 "integer.m"
    MR_Word mercury__integer__V_15_15;
#line 629 "integer.m"
    MR_Word mercury__integer__V_17_17;

#line 339 "integer.m"
    {
#line 339 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer__Trunc_7, &mercury__integer__Rem_8);
    }
#line 629 "integer.m"
    mercury__integer__Sign_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 629 "integer.m"
    mercury__integer__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
#line 629 "integer.m"
    {
#line 629 "integer.m"
      mercury__integer__V_11_11 = mercury__integer__signum_1_f_0(mercury__integer__Sign_14);
    }
#line 629 "integer.m"
    mercury__integer__Sign_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Rem_8, (MR_Integer) 0)));
#line 629 "integer.m"
    mercury__integer__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Rem_8, (MR_Integer) 1)));
#line 629 "integer.m"
    {
#line 629 "integer.m"
      mercury__integer__V_12_12 = mercury__integer__signum_1_f_0(mercury__integer__Sign_16);
    }
#line 340 "integer.m"
    mercury__integer__V_9_9 = (mercury__integer__V_11_11 * mercury__integer__V_12_12);
#line 340 "integer.m"
    mercury__integer__succeeded = (mercury__integer__V_9_9 < (MR_Integer) 0);
#line 342 "integer.m"
    if (mercury__integer__succeeded)
#line 341 "integer.m"
      {
#line 341 "integer.m"
        MR_Word mercury__integer__V_13_13 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 341 "integer.m"
        MR_Word mercury__integer__V_24_24;
#line 341 "integer.m"
        MR_Integer mercury__integer__S_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, (MR_Integer) 0)));
#line 341 "integer.m"
        MR_Word mercury__integer__Digits0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, (MR_Integer) 1)));
#line 341 "integer.m"
        MR_Word mercury__integer__Digits_27;
#line 341 "integer.m"
        MR_Integer mercury__integer__V_28_28 = ((MR_Integer) 0 - mercury__integer__S_25);

#line 314 "integer.m"
        {
#line 314 "integer.m"
          mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_26, &mercury__integer__Digits_27);
        }
#line 313 "integer.m"
        {
#line 313 "integer.m"
          mercury__integer__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 0) = ((MR_Box) (mercury__integer__V_28_28));
#line 313 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 1) = ((MR_Box) (mercury__integer__Digits_27));
#line 313 "integer.m"
        }
#line 231 "integer.m"
        {
#line 231 "integer.m"
          return mercury__integer__Div_6 = mercury__integer__big_plus_2_f_0(mercury__integer__Trunc_7, mercury__integer__V_24_24);
        }
#line 341 "integer.m"
      }
#line 342 "integer.m"
    else
#line 343 "integer.m"
      mercury__integer__Div_6 = mercury__integer__Trunc_7;
#line 338 "integer.m"
    return mercury__integer__Div_6;
#line 338 "integer.m"
  }
#line 336 "integer.m"
}

#line 331 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_rem_2_f_0(
#line 331 "integer.m"
  MR_Word mercury__integer__X_4,
#line 331 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 331 "integer.m"
{
#line 334 "integer.m"
  {
#line 334 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 334 "integer.m"
    MR_Word mercury__integer__Rem_6;
#line 334 "integer.m"
    MR_Word mercury__integer___Quot_7;

#line 334 "integer.m"
    {
#line 334 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer___Quot_7, &mercury__integer__Rem_6);
    }
#line 334 "integer.m"
    return mercury__integer__Rem_6;
#line 334 "integer.m"
  }
#line 331 "integer.m"
}

#line 326 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_quot_2_f_0(
#line 326 "integer.m"
  MR_Word mercury__integer__X_4,
#line 326 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 326 "integer.m"
{
#line 329 "integer.m"
  {
#line 329 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 329 "integer.m"
    MR_Word mercury__integer__Quot_6;
#line 329 "integer.m"
    MR_Word mercury__integer___Rem_7;

#line 329 "integer.m"
    {
#line 329 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer__Quot_6, &mercury__integer___Rem_7);
    }
#line 329 "integer.m"
    return mercury__integer__Quot_6;
#line 329 "integer.m"
  }
#line 326 "integer.m"
}

#line 322 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_sign_2_f_0(
#line 322 "integer.m"
  MR_Integer mercury__integer__Sign_4,
#line 322 "integer.m"
  MR_Word mercury__integer__In_5)
#line 322 "integer.m"
{
#line 324 "integer.m"
  {
#line 324 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__Sign_4 < (MR_Integer) 0);
#line 324 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 324 "integer.m"
    if (mercury__integer__succeeded)
#line 313 "integer.m"
      {
#line 313 "integer.m"
        MR_Integer mercury__integer__S_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__In_5, (MR_Integer) 0)));
#line 313 "integer.m"
        MR_Word mercury__integer__Digits0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__In_5, (MR_Integer) 1)));
#line 313 "integer.m"
        MR_Word mercury__integer__Digits_9;
#line 313 "integer.m"
        MR_Integer mercury__integer__V_10_10 = ((MR_Integer) 0 - mercury__integer__S_7);

#line 314 "integer.m"
        {
#line 314 "integer.m"
          mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_8, &mercury__integer__Digits_9);
        }
#line 313 "integer.m"
        {
#line 313 "integer.m"
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_10_10));
#line 313 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_9));
#line 313 "integer.m"
        }
#line 313 "integer.m"
      }
#line 324 "integer.m"
    else
#line 324 "integer.m"
      mercury__integer__HeadVar__3_3 = mercury__integer__In_5;
#line 324 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 324 "integer.m"
  }
#line 322 "integer.m"
}

#line 316 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_mul_2_f_0(
#line 316 "integer.m"
  MR_Word mercury__integer__X_4,
#line 316 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 316 "integer.m"
{
#line 318 "integer.m"
  {
#line 318 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 318 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 318 "integer.m"
    MR_Integer mercury__integer__V_6_6;
#line 318 "integer.m"
    MR_Integer mercury__integer__V_7_7;
#line 318 "integer.m"
    MR_Integer mercury__integer__V_8_8;
#line 318 "integer.m"
    MR_Word mercury__integer__V_9_9;
#line 318 "integer.m"
    MR_Word mercury__integer__V_10_10;
#line 318 "integer.m"
    MR_Word mercury__integer__V_11_11;
#line 318 "integer.m"
    MR_Integer mercury__integer__Sign_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 318 "integer.m"
    MR_Integer mercury__integer__Sign_14;
#line 318 "integer.m"
    MR_Integer mercury__integer__L1_16;
#line 318 "integer.m"
    MR_Integer mercury__integer__L2_18;
#line 629 "integer.m"
    MR_Word mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));
#line 629 "integer.m"
    MR_Word mercury__integer__V_15_15;
#line 749 "integer.m"
    MR_Word mercury__integer__Ds1_17;
#line 749 "integer.m"
    MR_Word mercury__integer__Ds2_19;

#line 629 "integer.m"
    {
#line 629 "integer.m"
      mercury__integer__V_7_7 = mercury__integer__signum_1_f_0(mercury__integer__Sign_12);
    }
#line 629 "integer.m"
    mercury__integer__Sign_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 629 "integer.m"
    mercury__integer__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
#line 629 "integer.m"
    {
#line 629 "integer.m"
      mercury__integer__V_8_8 = mercury__integer__signum_1_f_0(mercury__integer__Sign_14);
    }
#line 319 "integer.m"
    mercury__integer__V_6_6 = (mercury__integer__V_7_7 * mercury__integer__V_8_8);
#line 320 "integer.m"
    {
#line 320 "integer.m"
      mercury__integer__V_10_10 = mercury__integer__big_abs_1_f_0(mercury__integer__X_4);
    }
#line 320 "integer.m"
    {
#line 320 "integer.m"
      mercury__integer__V_11_11 = mercury__integer__big_abs_1_f_0(mercury__integer__Y_5);
    }
#line 749 "integer.m"
    mercury__integer__L1_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, (MR_Integer) 0)));
#line 749 "integer.m"
    mercury__integer__Ds1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, (MR_Integer) 1)));
#line 749 "integer.m"
    mercury__integer__L2_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, (MR_Integer) 0)));
#line 749 "integer.m"
    mercury__integer__Ds2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, (MR_Integer) 1)));
#line 750 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_16 < mercury__integer__L2_18);
#line 749 "integer.m"
    if (mercury__integer__succeeded)
#line 751 "integer.m"
      {
#line 751 "integer.m"
        mercury__integer__V_9_9 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__V_10_10, mercury__integer__V_11_11);
      }
#line 749 "integer.m"
    else
#line 753 "integer.m"
      {
#line 753 "integer.m"
        mercury__integer__V_9_9 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__V_11_11, mercury__integer__V_10_10);
      }
#line 319 "integer.m"
    {
#line 319 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__big_sign_2_f_0(mercury__integer__V_6_6, mercury__integer__V_9_9);
    }
#line 318 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 318 "integer.m"
  }
#line 316 "integer.m"
}

#line 311 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_neg_1_f_0(
#line 311 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 311 "integer.m"
{
#line 313 "integer.m"
  {
#line 313 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 313 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;
#line 313 "integer.m"
    MR_Integer mercury__integer__S_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 313 "integer.m"
    MR_Word mercury__integer__Digits0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 313 "integer.m"
    MR_Word mercury__integer__Digits_5;
#line 313 "integer.m"
    MR_Integer mercury__integer__V_6_6 = ((MR_Integer) 0 - mercury__integer__S_3);

#line 314 "integer.m"
    {
#line 314 "integer.m"
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_4, &mercury__integer__Digits_5);
    }
#line 313 "integer.m"
    {
#line 313 "integer.m"
      mercury__integer__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__V_6_6));
#line 313 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__Digits_5));
#line 313 "integer.m"
    }
#line 313 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 313 "integer.m"
  }
#line 311 "integer.m"
}

#line 303 "integer.m"
MR_bool MR_CALL 
mercury__integer__big_isnegative_1_p_0(
#line 303 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 303 "integer.m"
{
#line 305 "integer.m"
  {
#line 305 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 305 "integer.m"
    MR_Integer mercury__integer__Sign_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 305 "integer.m"
    MR_Word mercury__integer__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

#line 305 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_2 < (MR_Integer) 0);
#line 305 "integer.m"
    return mercury__integer__succeeded;
#line 305 "integer.m"
  }
#line 303 "integer.m"
}

#line 297 "integer.m"
void MR_CALL 
mercury__integer__neg_list_2_p_0(
#line 297 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 297 "integer.m"
  MR_Word * mercury__integer__HeadVar__2_2)
#line 297 "integer.m"
{
#line 299 "integer.m"
  {
#line 299 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 299 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 299 "integer.m"
      *mercury__integer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "integer.m"
    else
#line 300 "integer.m"
      {
#line 300 "integer.m"
        MR_Integer mercury__integer__H_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 300 "integer.m"
        MR_Word mercury__integer__T_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 300 "integer.m"
        MR_Word mercury__integer__NT_5;
#line 300 "integer.m"
        MR_Integer mercury__integer__V_6_6 = ((MR_Integer) 0 - mercury__integer__H_3);

#line 301 "integer.m"
        {
#line 301 "integer.m"
          mercury__integer__neg_list_2_p_0(mercury__integer__T_4, &mercury__integer__NT_5);
        }
#line 300 "integer.m"
        {
#line 300 "integer.m"
          MR_Word base;
#line 300 "integer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "integer.m"
          *mercury__integer__HeadVar__2_2 = base;
#line 300 "integer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__V_6_6));
#line 300 "integer.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__NT_5));
#line 300 "integer.m"
        }
#line 300 "integer.m"
      }
#line 299 "integer.m"
  }
#line 297 "integer.m"
}

#line 293 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_abs_1_f_0(
#line 293 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 293 "integer.m"
{
#line 295 "integer.m"
  {
#line 295 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 295 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;
#line 295 "integer.m"
    MR_Integer mercury__integer__Sign_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 295 "integer.m"
    MR_Word mercury__integer__Ds_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

#line 295 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_3 < (MR_Integer) 0);
#line 295 "integer.m"
    if (mercury__integer__succeeded)
#line 313 "integer.m"
      {
#line 313 "integer.m"
        MR_Integer mercury__integer__S_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 313 "integer.m"
        MR_Word mercury__integer__Digits0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 313 "integer.m"
        MR_Word mercury__integer__Digits_9;
#line 313 "integer.m"
        MR_Integer mercury__integer__V_10_10 = ((MR_Integer) 0 - mercury__integer__S_7);

#line 314 "integer.m"
        {
#line 314 "integer.m"
          mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_8, &mercury__integer__Digits_9);
        }
#line 313 "integer.m"
        {
#line 313 "integer.m"
          mercury__integer__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__V_10_10));
#line 313 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__Digits_9));
#line 313 "integer.m"
        }
#line 313 "integer.m"
      }
#line 295 "integer.m"
    else
#line 295 "integer.m"
      mercury__integer__HeadVar__2_2 = mercury__integer__HeadVar__1_1;
#line 295 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 295 "integer.m"
  }
#line 293 "integer.m"
}

#line 181 "integer.m"
MR_Integer MR_CALL 
mercury__integer__base_0_f_0(void)
#line 181 "integer.m"
{
#line 183 "integer.m"
  {
#line 183 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 183 "integer.m"
    return (MR_Integer) 16384;
#line 183 "integer.m"
  }
#line 181 "integer.m"
}

#line 102 "integer.m"
MR_Word MR_CALL 
mercury__integer__one_0_f_0(void)
#line 102 "integer.m"
{
#line 1059 "integer.m"
  {
#line 1059 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1059 "integer.m"
    MR_Word mercury__integer__HeadVar__1_1 = (MR_Word) &mercury__integer_scalar_common_1[2];

#line 1059 "integer.m"
    return mercury__integer__HeadVar__1_1;
#line 1059 "integer.m"
  }
#line 102 "integer.m"
}

#line 100 "integer.m"
MR_Word MR_CALL 
mercury__integer__zero_0_f_0(void)
#line 100 "integer.m"
{
#line 1057 "integer.m"
  {
#line 1057 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1057 "integer.m"
    MR_Word mercury__integer__HeadVar__1_1 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1057 "integer.m"
    MR_Word mercury__integer__V_3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1057 "integer.m"
    return mercury__integer__HeadVar__1_1;
#line 1057 "integer.m"
  }
#line 100 "integer.m"
}

#line 98 "integer.m"
MR_Integer MR_CALL 
mercury__integer__int_1_f_0(
#line 98 "integer.m"
  MR_Word mercury__integer__Integer_3)
#line 98 "integer.m"
{
#line 1048 "integer.m"
  {
#line 1048 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1048 "integer.m"
    MR_Integer mercury__integer__Int_4;
#line 1043 "integer.m"
    MR_Word mercury__integer__V_7_7;
#line 1043 "integer.m"
    MR_Integer mercury__integer__V_8_8;
#line 1043 "integer.m"
    MR_Word mercury__integer__V_9_9;
#line 1043 "integer.m"
    MR_Integer mercury__integer__V_10_10;
#line 1043 "integer.m"
    MR_Word mercury__integer__C_17;
#line 1043 "integer.m"
    MR_Word mercury__integer__C_26;

#line 156 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__int_1_f_0

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

#line 11393 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_8_8  = Min;
#line 156 "int.opt"
}
#line 589 "integer.m"
    {
#line 589 "integer.m"
      mercury__integer__V_7_7 = mercury__integer__int_to_integer_1_f_0(mercury__integer__V_8_8);
    }
#line 553 "integer.m"
    {
#line 553 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_17, mercury__integer__Integer_3, mercury__integer__V_7_7);
    }
#line 223 "integer.m"
    if ((mercury__integer__C_17 == (MR_Integer) 0))
#line 223 "integer.m"
      mercury__integer__succeeded = MR_TRUE;
#line 223 "integer.m"
    else
#line 223 "integer.m"
      if ((mercury__integer__C_17 == (MR_Integer) 2))
#line 223 "integer.m"
        mercury__integer__succeeded = MR_TRUE;
#line 223 "integer.m"
      else
#line 223 "integer.m"
        mercury__integer__succeeded = MR_FALSE;
#line 1043 "integer.m"
    if (mercury__integer__succeeded)
#line 1043 "integer.m"
      {
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__int_1_f_0

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

#line 11449 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_10_10  = Max;
#line 141 "int.opt"
}
#line 589 "integer.m"
        {
#line 589 "integer.m"
          mercury__integer__V_9_9 = mercury__integer__int_to_integer_1_f_0(mercury__integer__V_10_10);
        }
#line 553 "integer.m"
        {
#line 553 "integer.m"
          mercury__integer____Compare____integer_0_0(&mercury__integer__C_26, mercury__integer__Integer_3, mercury__integer__V_9_9);
        }
#line 219 "integer.m"
        if ((mercury__integer__C_26 == (MR_Integer) 1))
#line 219 "integer.m"
          mercury__integer__succeeded = MR_TRUE;
#line 219 "integer.m"
        else
#line 219 "integer.m"
          if ((mercury__integer__C_26 == (MR_Integer) 0))
#line 219 "integer.m"
            mercury__integer__succeeded = MR_TRUE;
#line 219 "integer.m"
          else
#line 219 "integer.m"
            mercury__integer__succeeded = MR_FALSE;
#line 1043 "integer.m"
      }
#line 1048 "integer.m"
    if (mercury__integer__succeeded)
#line 1046 "integer.m"
      {
#line 1046 "integer.m"
        MR_Word mercury__integer__Digits_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Integer_3, (MR_Integer) 1)));
#line 1046 "integer.m"
        MR_Integer mercury__integer___Sign_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Integer_3, (MR_Integer) 0)));

#line 1047 "integer.m"
        {
#line 1047 "integer.m"
          return mercury__integer__Int_4 = mercury__integer__int_list_2_f_0(mercury__integer__Digits_6, (MR_Integer) 0);
        }
#line 1046 "integer.m"
      }
#line 1048 "integer.m"
    else
#line 1049 "integer.m"
      {
#line 1049 "integer.m"
        {
#line 1049 "integer.m"
          mercury__require__error_1_p_0((MR_String) "integer.int: domain error (conversion would overflow)");
        }
#line 1049 "integer.m"
      }
#line 1048 "integer.m"
    return mercury__integer__Int_4;
#line 1048 "integer.m"
  }
#line 98 "integer.m"
}

#line 97 "integer.m"
MR_Float MR_CALL 
mercury__integer__float_1_f_0(
#line 97 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 97 "integer.m"
{
#line 1033 "integer.m"
  {
#line 1033 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1033 "integer.m"
    MR_Float mercury__integer__HeadVar__2_2;
#line 1033 "integer.m"
    MR_Word mercury__integer__List_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1033 "integer.m"
    MR_Float mercury__integer__V_5_5;
#line 1033 "integer.m"
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

#line 11549 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_5_5  = FloatVal;
#line 81 "float.opt"
}
#line 1033 "integer.m"
    {
#line 1033 "integer.m"
      return mercury__integer__HeadVar__2_2 = mercury__integer__float_list_3_f_0(mercury__integer__V_5_5, (MR_Float) 0.0000000000000000, mercury__integer__List_4);
    }
#line 1033 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 1033 "integer.m"
  }
#line 97 "integer.m"
}

#line 95 "integer.m"
MR_Word MR_CALL 
mercury__integer__pow_2_f_0(
#line 95 "integer.m"
  MR_Word mercury__integer__A_4,
#line 95 "integer.m"
  MR_Word mercury__integer__N_5)
#line 95 "integer.m"
{
#line 980 "integer.m"
  {
#line 980 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 980 "integer.m"
    MR_Word mercury__integer__P_6;
#line 305 "integer.m"
    MR_Integer mercury__integer__Sign_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__N_5, (MR_Integer) 0)));
#line 305 "integer.m"
    MR_Word mercury__integer__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__N_5, (MR_Integer) 1)));

#line 305 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_8 < (MR_Integer) 0);
#line 980 "integer.m"
    if (mercury__integer__succeeded)
#line 979 "integer.m"
      {
#line 979 "integer.m"
        {
#line 979 "integer.m"
          mercury__require__error_1_p_0((MR_String) "integer.pow: negative exponent");
        }
#line 979 "integer.m"
      }
#line 980 "integer.m"
    else
#line 981 "integer.m"
      {
#line 981 "integer.m"
        return mercury__integer__P_6 = mercury__integer__big_pow_2_f_0(mercury__integer__A_4, mercury__integer__N_5);
      }
#line 980 "integer.m"
    return mercury__integer__P_6;
#line 980 "integer.m"
  }
#line 95 "integer.m"
}

#line 93 "integer.m"
MR_Word MR_CALL 
mercury__integer__abs_1_f_0(
#line 93 "integer.m"
  MR_Word mercury__integer__N_3)
#line 93 "integer.m"
{
#line 291 "integer.m"
  {
#line 291 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 291 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;

#line 291 "integer.m"
    {
#line 291 "integer.m"
      return mercury__integer__HeadVar__2_2 = mercury__integer__big_abs_1_f_0(mercury__integer__N_3);
    }
#line 291 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 291 "integer.m"
  }
#line 93 "integer.m"
}

#line 91 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_92_1_f_0(
#line 91 "integer.m"
  MR_Word mercury__integer__X_3)
#line 91 "integer.m"
{
#line 289 "integer.m"
  {
#line 289 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 289 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;
#line 289 "integer.m"
    MR_Word mercury__integer__V_4_4;
#line 289 "integer.m"
    MR_Word mercury__integer__V_5_5 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 289 "integer.m"
    MR_Integer mercury__integer__S_10;
#line 289 "integer.m"
    MR_Word mercury__integer__Digits0_11;
#line 289 "integer.m"
    MR_Word mercury__integer__Digits_12;
#line 289 "integer.m"
    MR_Integer mercury__integer__V_13_13;

#line 289 "integer.m"
    {
#line 289 "integer.m"
      mercury__integer__V_4_4 = mercury__integer__big_plus_2_f_0(mercury__integer__X_3, mercury__integer__V_5_5);
    }
#line 313 "integer.m"
    mercury__integer__S_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_4_4, (MR_Integer) 0)));
#line 313 "integer.m"
    mercury__integer__Digits0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_4_4, (MR_Integer) 1)));
#line 313 "integer.m"
    mercury__integer__V_13_13 = ((MR_Integer) 0 - mercury__integer__S_10);
#line 314 "integer.m"
    {
#line 314 "integer.m"
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_11, &mercury__integer__Digits_12);
    }
#line 313 "integer.m"
    {
#line 313 "integer.m"
      mercury__integer__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__V_13_13));
#line 313 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__Digits_12));
#line 313 "integer.m"
    }
#line 289 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 289 "integer.m"
  }
#line 91 "integer.m"
}

#line 89 "integer.m"
MR_Word MR_CALL 
mercury__integer__xor_2_f_0(
#line 89 "integer.m"
  MR_Word mercury__integer__X_4,
#line 89 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 89 "integer.m"
{
#line 276 "integer.m"
  {
#line 276 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 276 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 305 "integer.m"
    MR_Integer mercury__integer__Sign_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 305 "integer.m"
    MR_Word mercury__integer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 305 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_10 < (MR_Integer) 0);
#line 276 "integer.m"
    if (mercury__integer__succeeded)
#line 276 "integer.m"
      {
#line 305 "integer.m"
        MR_Integer mercury__integer__Sign_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 305 "integer.m"
        MR_Word mercury__integer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 305 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_13 < (MR_Integer) 0);
#line 276 "integer.m"
        if (mercury__integer__succeeded)
#line 279 "integer.m"
          {
#line 279 "integer.m"
            MR_Word mercury__integer__V_6_6;
#line 279 "integer.m"
            MR_Word mercury__integer__V_7_7;
#line 279 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 279 "integer.m"
            MR_Word mercury__integer__V_18_18 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 279 "integer.m"
            MR_Integer mercury__integer__S_23;
#line 279 "integer.m"
            MR_Word mercury__integer__Digits0_24;
#line 279 "integer.m"
            MR_Word mercury__integer__Digits_25;
#line 279 "integer.m"
            MR_Integer mercury__integer__V_26_26;
#line 279 "integer.m"
            MR_Word mercury__integer__V_28_28;
#line 279 "integer.m"
            MR_Word mercury__integer__V_29_29;
#line 279 "integer.m"
            MR_Integer mercury__integer__S_34;
#line 279 "integer.m"
            MR_Word mercury__integer__Digits0_35;
#line 279 "integer.m"
            MR_Word mercury__integer__Digits_36;
#line 279 "integer.m"
            MR_Integer mercury__integer__V_37_37;
#line 279 "integer.m"
            MR_Word mercury__integer__V_40_40;

#line 289 "integer.m"
            {
#line 289 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_18_18);
            }
#line 313 "integer.m"
            mercury__integer__S_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 313 "integer.m"
            mercury__integer__Digits0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 313 "integer.m"
            mercury__integer__V_26_26 = ((MR_Integer) 0 - mercury__integer__S_23);
#line 314 "integer.m"
            {
#line 314 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_24, &mercury__integer__Digits_25);
            }
#line 313 "integer.m"
            {
#line 313 "integer.m"
              mercury__integer__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 0) = ((MR_Box) (mercury__integer__V_26_26));
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 1) = ((MR_Box) (mercury__integer__Digits_25));
#line 313 "integer.m"
            }
#line 1059 "integer.m"
            mercury__integer__V_29_29 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 289 "integer.m"
            {
#line 289 "integer.m"
              mercury__integer__V_28_28 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_29_29);
            }
#line 313 "integer.m"
            mercury__integer__S_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, (MR_Integer) 0)));
#line 313 "integer.m"
            mercury__integer__Digits0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, (MR_Integer) 1)));
#line 313 "integer.m"
            mercury__integer__V_37_37 = ((MR_Integer) 0 - mercury__integer__S_34);
#line 314 "integer.m"
            {
#line 314 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_35, &mercury__integer__Digits_36);
            }
#line 313 "integer.m"
            {
#line 313 "integer.m"
              mercury__integer__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 0) = ((MR_Box) (mercury__integer__V_37_37));
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 1) = ((MR_Box) (mercury__integer__Digits_36));
#line 313 "integer.m"
            }
#line 470 "integer.m"
            {
#line 470 "integer.m"
              mercury__integer__V_40_40 = mercury__integer__xor_pairs_2_f_0(mercury__integer__V_6_6, mercury__integer__V_7_7);
            }
#line 470 "integer.m"
            {
#line 470 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_40_40);
            }
#line 279 "integer.m"
          }
#line 276 "integer.m"
        else
#line 281 "integer.m"
          {
#line 281 "integer.m"
            MR_Word mercury__integer__V_8_8;
#line 281 "integer.m"
            MR_Word mercury__integer__V_42_42;
#line 281 "integer.m"
            MR_Word mercury__integer__V_43_43 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 281 "integer.m"
            MR_Integer mercury__integer__S_48;
#line 281 "integer.m"
            MR_Word mercury__integer__Digits0_49;
#line 281 "integer.m"
            MR_Word mercury__integer__Digits_50;
#line 281 "integer.m"
            MR_Integer mercury__integer__V_51_51;
#line 281 "integer.m"
            MR_Word mercury__integer__V_54_54;
#line 281 "integer.m"
            MR_Word mercury__integer__V_55_55;
#line 281 "integer.m"
            MR_Word mercury__integer__V_56_56;
#line 281 "integer.m"
            MR_Word mercury__integer__V_59_59;
#line 281 "integer.m"
            MR_Word mercury__integer__V_62_62;
#line 281 "integer.m"
            MR_Word mercury__integer__V_65_65;
#line 281 "integer.m"
            MR_Word mercury__integer__V_67_67;
#line 281 "integer.m"
            MR_Word mercury__integer__V_68_68;
#line 281 "integer.m"
            MR_Integer mercury__integer__S_73;
#line 281 "integer.m"
            MR_Word mercury__integer__Digits0_74;
#line 281 "integer.m"
            MR_Word mercury__integer__Digits_75;
#line 281 "integer.m"
            MR_Integer mercury__integer__V_76_76;

#line 289 "integer.m"
            {
#line 289 "integer.m"
              mercury__integer__V_42_42 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_43_43);
            }
#line 313 "integer.m"
            mercury__integer__S_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_42_42, (MR_Integer) 0)));
#line 313 "integer.m"
            mercury__integer__Digits0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_42_42, (MR_Integer) 1)));
#line 313 "integer.m"
            mercury__integer__V_51_51 = ((MR_Integer) 0 - mercury__integer__S_48);
#line 314 "integer.m"
            {
#line 314 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_49, &mercury__integer__Digits_50);
            }
#line 313 "integer.m"
            {
#line 313 "integer.m"
              mercury__integer__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 0) = ((MR_Box) (mercury__integer__V_51_51));
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 1) = ((MR_Box) (mercury__integer__Digits_50));
#line 313 "integer.m"
            }
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__V_59_59 = mercury__integer__or_pairs_2_f_0(mercury__integer__Y_5, mercury__integer__V_8_8);
            }
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__V_55_55 = mercury__integer__decap_1_f_0(mercury__integer__V_59_59);
            }
#line 496 "integer.m"
            {
#line 496 "integer.m"
              mercury__integer__V_62_62 = mercury__integer__and_pairs_2_f_0(mercury__integer__Y_5, mercury__integer__V_8_8);
            }
#line 496 "integer.m"
            {
#line 496 "integer.m"
              mercury__integer__V_56_56 = mercury__integer__decap_1_f_0(mercury__integer__V_62_62);
            }
#line 521 "integer.m"
            {
#line 521 "integer.m"
              mercury__integer__V_65_65 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__V_55_55, mercury__integer__V_56_56);
            }
#line 521 "integer.m"
            {
#line 521 "integer.m"
              mercury__integer__V_54_54 = mercury__integer__decap_1_f_0(mercury__integer__V_65_65);
            }
#line 1059 "integer.m"
            mercury__integer__V_68_68 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 289 "integer.m"
            {
#line 289 "integer.m"
              mercury__integer__V_67_67 = mercury__integer__big_plus_2_f_0(mercury__integer__V_54_54, mercury__integer__V_68_68);
            }
#line 313 "integer.m"
            mercury__integer__S_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_67_67, (MR_Integer) 0)));
#line 313 "integer.m"
            mercury__integer__Digits0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_67_67, (MR_Integer) 1)));
#line 313 "integer.m"
            mercury__integer__V_76_76 = ((MR_Integer) 0 - mercury__integer__S_73);
#line 314 "integer.m"
            {
#line 314 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_74, &mercury__integer__Digits_75);
            }
#line 313 "integer.m"
            {
#line 313 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_76_76));
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_75));
#line 313 "integer.m"
            }
#line 281 "integer.m"
          }
#line 276 "integer.m"
      }
#line 276 "integer.m"
    else
#line 276 "integer.m"
      {
#line 305 "integer.m"
        MR_Integer mercury__integer__Sign_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 305 "integer.m"
        MR_Word mercury__integer__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 305 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_77 < (MR_Integer) 0);
#line 276 "integer.m"
        if (mercury__integer__succeeded)
#line 284 "integer.m"
          {
#line 284 "integer.m"
            MR_Word mercury__integer__V_9_9;
#line 284 "integer.m"
            MR_Word mercury__integer__V_81_81;
#line 284 "integer.m"
            MR_Word mercury__integer__V_82_82 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 284 "integer.m"
            MR_Integer mercury__integer__S_87;
#line 284 "integer.m"
            MR_Word mercury__integer__Digits0_88;
#line 284 "integer.m"
            MR_Word mercury__integer__Digits_89;
#line 284 "integer.m"
            MR_Integer mercury__integer__V_90_90;

#line 289 "integer.m"
            {
#line 289 "integer.m"
              mercury__integer__V_81_81 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_82_82);
            }
#line 313 "integer.m"
            mercury__integer__S_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_81_81, (MR_Integer) 0)));
#line 313 "integer.m"
            mercury__integer__Digits0_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_81_81, (MR_Integer) 1)));
#line 313 "integer.m"
            mercury__integer__V_90_90 = ((MR_Integer) 0 - mercury__integer__S_87);
#line 314 "integer.m"
            {
#line 314 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_88, &mercury__integer__Digits_89);
            }
#line 313 "integer.m"
            {
#line 313 "integer.m"
              mercury__integer__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 0) = ((MR_Box) (mercury__integer__V_90_90));
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 1) = ((MR_Box) (mercury__integer__Digits_89));
#line 313 "integer.m"
            }
#line 284 "integer.m"
            {
#line 284 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__big_xor_not_2_f_0(mercury__integer__X_4, mercury__integer__V_9_9);
            }
#line 284 "integer.m"
          }
#line 276 "integer.m"
        else
#line 470 "integer.m"
          {
#line 470 "integer.m"
            MR_Word mercury__integer__V_93_93;

#line 470 "integer.m"
            {
#line 470 "integer.m"
              mercury__integer__V_93_93 = mercury__integer__xor_pairs_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
            }
#line 470 "integer.m"
            {
#line 470 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_93_93);
            }
#line 470 "integer.m"
          }
#line 276 "integer.m"
      }
#line 276 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 276 "integer.m"
  }
#line 89 "integer.m"
}

#line 87 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_92_47_2_f_0(
#line 87 "integer.m"
  MR_Word mercury__integer__X_4,
#line 87 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 87 "integer.m"
{
#line 263 "integer.m"
  {
#line 263 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 263 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 305 "integer.m"
    MR_Integer mercury__integer__Sign_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 305 "integer.m"
    MR_Word mercury__integer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 305 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_13 < (MR_Integer) 0);
#line 263 "integer.m"
    if (mercury__integer__succeeded)
#line 263 "integer.m"
      {
#line 305 "integer.m"
        MR_Integer mercury__integer__Sign_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 305 "integer.m"
        MR_Word mercury__integer__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 305 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_16 < (MR_Integer) 0);
#line 263 "integer.m"
        if (mercury__integer__succeeded)
#line 266 "integer.m"
          {
#line 266 "integer.m"
            MR_Word mercury__integer__V_6_6;
#line 266 "integer.m"
            MR_Word mercury__integer__V_7_7;
#line 266 "integer.m"
            MR_Word mercury__integer__V_8_8;
#line 266 "integer.m"
            MR_Word mercury__integer__V_20_20;
#line 266 "integer.m"
            MR_Word mercury__integer__V_21_21 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 266 "integer.m"
            MR_Integer mercury__integer__S_26;
#line 266 "integer.m"
            MR_Word mercury__integer__Digits0_27;
#line 266 "integer.m"
            MR_Word mercury__integer__Digits_28;
#line 266 "integer.m"
            MR_Integer mercury__integer__V_29_29;
#line 266 "integer.m"
            MR_Word mercury__integer__V_31_31;
#line 266 "integer.m"
            MR_Word mercury__integer__V_32_32;
#line 266 "integer.m"
            MR_Integer mercury__integer__S_37;
#line 266 "integer.m"
            MR_Word mercury__integer__Digits0_38;
#line 266 "integer.m"
            MR_Word mercury__integer__Digits_39;
#line 266 "integer.m"
            MR_Integer mercury__integer__V_40_40;
#line 266 "integer.m"
            MR_Word mercury__integer__V_43_43;
#line 266 "integer.m"
            MR_Word mercury__integer__V_45_45;
#line 266 "integer.m"
            MR_Word mercury__integer__V_46_46;
#line 266 "integer.m"
            MR_Integer mercury__integer__S_51;
#line 266 "integer.m"
            MR_Word mercury__integer__Digits0_52;
#line 266 "integer.m"
            MR_Word mercury__integer__Digits_53;
#line 266 "integer.m"
            MR_Integer mercury__integer__V_54_54;

#line 289 "integer.m"
            {
#line 289 "integer.m"
              mercury__integer__V_20_20 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_21_21);
            }
#line 313 "integer.m"
            mercury__integer__S_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_20_20, (MR_Integer) 0)));
#line 313 "integer.m"
            mercury__integer__Digits0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_20_20, (MR_Integer) 1)));
#line 313 "integer.m"
            mercury__integer__V_29_29 = ((MR_Integer) 0 - mercury__integer__S_26);
#line 314 "integer.m"
            {
#line 314 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_27, &mercury__integer__Digits_28);
            }
#line 313 "integer.m"
            {
#line 313 "integer.m"
              mercury__integer__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 0) = ((MR_Box) (mercury__integer__V_29_29));
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 1) = ((MR_Box) (mercury__integer__Digits_28));
#line 313 "integer.m"
            }
#line 1059 "integer.m"
            mercury__integer__V_32_32 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 289 "integer.m"
            {
#line 289 "integer.m"
              mercury__integer__V_31_31 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_32_32);
            }
#line 313 "integer.m"
            mercury__integer__S_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_31_31, (MR_Integer) 0)));
#line 313 "integer.m"
            mercury__integer__Digits0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_31_31, (MR_Integer) 1)));
#line 313 "integer.m"
            mercury__integer__V_40_40 = ((MR_Integer) 0 - mercury__integer__S_37);
#line 314 "integer.m"
            {
#line 314 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_38, &mercury__integer__Digits_39);
            }
#line 313 "integer.m"
            {
#line 313 "integer.m"
              mercury__integer__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 0) = ((MR_Box) (mercury__integer__V_40_40));
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 1) = ((MR_Box) (mercury__integer__Digits_39));
#line 313 "integer.m"
            }
#line 496 "integer.m"
            {
#line 496 "integer.m"
              mercury__integer__V_43_43 = mercury__integer__and_pairs_2_f_0(mercury__integer__V_7_7, mercury__integer__V_8_8);
            }
#line 496 "integer.m"
            {
#line 496 "integer.m"
              mercury__integer__V_6_6 = mercury__integer__decap_1_f_0(mercury__integer__V_43_43);
            }
#line 1059 "integer.m"
            mercury__integer__V_46_46 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 289 "integer.m"
            {
#line 289 "integer.m"
              mercury__integer__V_45_45 = mercury__integer__big_plus_2_f_0(mercury__integer__V_6_6, mercury__integer__V_46_46);
            }
#line 313 "integer.m"
            mercury__integer__S_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_45_45, (MR_Integer) 0)));
#line 313 "integer.m"
            mercury__integer__Digits0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_45_45, (MR_Integer) 1)));
#line 313 "integer.m"
            mercury__integer__V_54_54 = ((MR_Integer) 0 - mercury__integer__S_51);
#line 314 "integer.m"
            {
#line 314 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_52, &mercury__integer__Digits_53);
            }
#line 313 "integer.m"
            {
#line 313 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_54_54));
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_53));
#line 313 "integer.m"
            }
#line 266 "integer.m"
          }
#line 263 "integer.m"
        else
#line 268 "integer.m"
          {
#line 268 "integer.m"
            MR_Word mercury__integer__V_9_9;
#line 268 "integer.m"
            MR_Word mercury__integer__V_10_10;
#line 268 "integer.m"
            MR_Word mercury__integer__V_56_56;
#line 268 "integer.m"
            MR_Word mercury__integer__V_57_57 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 268 "integer.m"
            MR_Integer mercury__integer__S_62;
#line 268 "integer.m"
            MR_Word mercury__integer__Digits0_63;
#line 268 "integer.m"
            MR_Word mercury__integer__Digits_64;
#line 268 "integer.m"
            MR_Integer mercury__integer__V_65_65;
#line 268 "integer.m"
            MR_Word mercury__integer__V_68_68;
#line 268 "integer.m"
            MR_Word mercury__integer__V_70_70;
#line 268 "integer.m"
            MR_Word mercury__integer__V_71_71;
#line 268 "integer.m"
            MR_Integer mercury__integer__S_76;
#line 268 "integer.m"
            MR_Word mercury__integer__Digits0_77;
#line 268 "integer.m"
            MR_Word mercury__integer__Digits_78;
#line 268 "integer.m"
            MR_Integer mercury__integer__V_79_79;

#line 289 "integer.m"
            {
#line 289 "integer.m"
              mercury__integer__V_56_56 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_57_57);
            }
#line 313 "integer.m"
            mercury__integer__S_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_56_56, (MR_Integer) 0)));
#line 313 "integer.m"
            mercury__integer__Digits0_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_56_56, (MR_Integer) 1)));
#line 313 "integer.m"
            mercury__integer__V_65_65 = ((MR_Integer) 0 - mercury__integer__S_62);
#line 314 "integer.m"
            {
#line 314 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_63, &mercury__integer__Digits_64);
            }
#line 313 "integer.m"
            {
#line 313 "integer.m"
              mercury__integer__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, 0) = ((MR_Box) (mercury__integer__V_65_65));
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, 1) = ((MR_Box) (mercury__integer__Digits_64));
#line 313 "integer.m"
            }
#line 521 "integer.m"
            {
#line 521 "integer.m"
              mercury__integer__V_68_68 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__V_10_10, mercury__integer__Y_5);
            }
#line 521 "integer.m"
            {
#line 521 "integer.m"
              mercury__integer__V_9_9 = mercury__integer__decap_1_f_0(mercury__integer__V_68_68);
            }
#line 1059 "integer.m"
            mercury__integer__V_71_71 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 289 "integer.m"
            {
#line 289 "integer.m"
              mercury__integer__V_70_70 = mercury__integer__big_plus_2_f_0(mercury__integer__V_9_9, mercury__integer__V_71_71);
            }
#line 313 "integer.m"
            mercury__integer__S_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_70_70, (MR_Integer) 0)));
#line 313 "integer.m"
            mercury__integer__Digits0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_70_70, (MR_Integer) 1)));
#line 313 "integer.m"
            mercury__integer__V_79_79 = ((MR_Integer) 0 - mercury__integer__S_76);
#line 314 "integer.m"
            {
#line 314 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_77, &mercury__integer__Digits_78);
            }
#line 313 "integer.m"
            {
#line 313 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_79_79));
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_78));
#line 313 "integer.m"
            }
#line 268 "integer.m"
          }
#line 263 "integer.m"
      }
#line 263 "integer.m"
    else
#line 263 "integer.m"
      {
#line 305 "integer.m"
        MR_Integer mercury__integer__Sign_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 305 "integer.m"
        MR_Word mercury__integer__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 305 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_80 < (MR_Integer) 0);
#line 263 "integer.m"
        if (mercury__integer__succeeded)
#line 271 "integer.m"
          {
#line 271 "integer.m"
            MR_Word mercury__integer__V_11_11;
#line 271 "integer.m"
            MR_Word mercury__integer__V_12_12;
#line 271 "integer.m"
            MR_Word mercury__integer__V_84_84;
#line 271 "integer.m"
            MR_Word mercury__integer__V_85_85 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 271 "integer.m"
            MR_Integer mercury__integer__S_90;
#line 271 "integer.m"
            MR_Word mercury__integer__Digits0_91;
#line 271 "integer.m"
            MR_Word mercury__integer__Digits_92;
#line 271 "integer.m"
            MR_Integer mercury__integer__V_93_93;
#line 271 "integer.m"
            MR_Word mercury__integer__V_96_96;

#line 289 "integer.m"
            {
#line 289 "integer.m"
              mercury__integer__V_84_84 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_85_85);
            }
#line 313 "integer.m"
            mercury__integer__S_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_84_84, (MR_Integer) 0)));
#line 313 "integer.m"
            mercury__integer__Digits0_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_84_84, (MR_Integer) 1)));
#line 313 "integer.m"
            mercury__integer__V_93_93 = ((MR_Integer) 0 - mercury__integer__S_90);
#line 314 "integer.m"
            {
#line 314 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_91, &mercury__integer__Digits_92);
            }
#line 313 "integer.m"
            {
#line 313 "integer.m"
              mercury__integer__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 0) = ((MR_Box) (mercury__integer__V_93_93));
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 1) = ((MR_Box) (mercury__integer__Digits_92));
#line 313 "integer.m"
            }
#line 521 "integer.m"
            {
#line 521 "integer.m"
              mercury__integer__V_96_96 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__V_12_12, mercury__integer__X_4);
            }
#line 521 "integer.m"
            {
#line 521 "integer.m"
              mercury__integer__V_11_11 = mercury__integer__decap_1_f_0(mercury__integer__V_96_96);
            }
#line 271 "integer.m"
            {
#line 271 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__f_92_1_f_0(mercury__integer__V_11_11);
            }
#line 271 "integer.m"
          }
#line 263 "integer.m"
        else
#line 273 "integer.m"
          {
#line 273 "integer.m"
            return mercury__integer__HeadVar__3_3 = mercury__integer__big_or_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
          }
#line 263 "integer.m"
      }
#line 263 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 263 "integer.m"
  }
#line 87 "integer.m"
}

#line 85 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_47_92_2_f_0(
#line 85 "integer.m"
  MR_Word mercury__integer__X_4,
#line 85 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 85 "integer.m"
{
#line 250 "integer.m"
  {
#line 250 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 250 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 305 "integer.m"
    MR_Integer mercury__integer__Sign_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 305 "integer.m"
    MR_Word mercury__integer__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 305 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_11 < (MR_Integer) 0);
#line 250 "integer.m"
    if (mercury__integer__succeeded)
#line 250 "integer.m"
      {
#line 305 "integer.m"
        MR_Integer mercury__integer__Sign_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 305 "integer.m"
        MR_Word mercury__integer__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 305 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_14 < (MR_Integer) 0);
#line 250 "integer.m"
        if (mercury__integer__succeeded)
#line 253 "integer.m"
          {
#line 253 "integer.m"
            MR_Word mercury__integer__V_6_6;
#line 253 "integer.m"
            MR_Word mercury__integer__V_7_7;
#line 253 "integer.m"
            MR_Word mercury__integer__V_8_8;
#line 253 "integer.m"
            MR_Word mercury__integer__V_18_18;
#line 253 "integer.m"
            MR_Word mercury__integer__V_19_19 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 253 "integer.m"
            MR_Integer mercury__integer__S_24;
#line 253 "integer.m"
            MR_Word mercury__integer__Digits0_25;
#line 253 "integer.m"
            MR_Word mercury__integer__Digits_26;
#line 253 "integer.m"
            MR_Integer mercury__integer__V_27_27;
#line 253 "integer.m"
            MR_Word mercury__integer__V_29_29;
#line 253 "integer.m"
            MR_Word mercury__integer__V_30_30;
#line 253 "integer.m"
            MR_Integer mercury__integer__S_35;
#line 253 "integer.m"
            MR_Word mercury__integer__Digits0_36;
#line 253 "integer.m"
            MR_Word mercury__integer__Digits_37;
#line 253 "integer.m"
            MR_Integer mercury__integer__V_38_38;
#line 253 "integer.m"
            MR_Word mercury__integer__V_41_41;
#line 253 "integer.m"
            MR_Word mercury__integer__V_43_43;
#line 253 "integer.m"
            MR_Word mercury__integer__V_44_44;
#line 253 "integer.m"
            MR_Integer mercury__integer__S_49;
#line 253 "integer.m"
            MR_Word mercury__integer__Digits0_50;
#line 253 "integer.m"
            MR_Word mercury__integer__Digits_51;
#line 253 "integer.m"
            MR_Integer mercury__integer__V_52_52;

#line 289 "integer.m"
            {
#line 289 "integer.m"
              mercury__integer__V_18_18 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_19_19);
            }
#line 313 "integer.m"
            mercury__integer__S_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_18_18, (MR_Integer) 0)));
#line 313 "integer.m"
            mercury__integer__Digits0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_18_18, (MR_Integer) 1)));
#line 313 "integer.m"
            mercury__integer__V_27_27 = ((MR_Integer) 0 - mercury__integer__S_24);
#line 314 "integer.m"
            {
#line 314 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_25, &mercury__integer__Digits_26);
            }
#line 313 "integer.m"
            {
#line 313 "integer.m"
              mercury__integer__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 0) = ((MR_Box) (mercury__integer__V_27_27));
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 1) = ((MR_Box) (mercury__integer__Digits_26));
#line 313 "integer.m"
            }
#line 1059 "integer.m"
            mercury__integer__V_30_30 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 289 "integer.m"
            {
#line 289 "integer.m"
              mercury__integer__V_29_29 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_30_30);
            }
#line 313 "integer.m"
            mercury__integer__S_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, (MR_Integer) 0)));
#line 313 "integer.m"
            mercury__integer__Digits0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, (MR_Integer) 1)));
#line 313 "integer.m"
            mercury__integer__V_38_38 = ((MR_Integer) 0 - mercury__integer__S_35);
#line 314 "integer.m"
            {
#line 314 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_36, &mercury__integer__Digits_37);
            }
#line 313 "integer.m"
            {
#line 313 "integer.m"
              mercury__integer__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 0) = ((MR_Box) (mercury__integer__V_38_38));
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 1) = ((MR_Box) (mercury__integer__Digits_37));
#line 313 "integer.m"
            }
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__V_41_41 = mercury__integer__or_pairs_2_f_0(mercury__integer__V_7_7, mercury__integer__V_8_8);
            }
#line 445 "integer.m"
            {
#line 445 "integer.m"
              mercury__integer__V_6_6 = mercury__integer__decap_1_f_0(mercury__integer__V_41_41);
            }
#line 1059 "integer.m"
            mercury__integer__V_44_44 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 289 "integer.m"
            {
#line 289 "integer.m"
              mercury__integer__V_43_43 = mercury__integer__big_plus_2_f_0(mercury__integer__V_6_6, mercury__integer__V_44_44);
            }
#line 313 "integer.m"
            mercury__integer__S_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_43_43, (MR_Integer) 0)));
#line 313 "integer.m"
            mercury__integer__Digits0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_43_43, (MR_Integer) 1)));
#line 313 "integer.m"
            mercury__integer__V_52_52 = ((MR_Integer) 0 - mercury__integer__S_49);
#line 314 "integer.m"
            {
#line 314 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_50, &mercury__integer__Digits_51);
            }
#line 313 "integer.m"
            {
#line 313 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_52_52));
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_51));
#line 313 "integer.m"
            }
#line 253 "integer.m"
          }
#line 250 "integer.m"
        else
#line 255 "integer.m"
          {
#line 255 "integer.m"
            MR_Word mercury__integer__V_9_9;
#line 255 "integer.m"
            MR_Word mercury__integer__V_54_54;
#line 255 "integer.m"
            MR_Word mercury__integer__V_55_55 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 255 "integer.m"
            MR_Integer mercury__integer__S_60;
#line 255 "integer.m"
            MR_Word mercury__integer__Digits0_61;
#line 255 "integer.m"
            MR_Word mercury__integer__Digits_62;
#line 255 "integer.m"
            MR_Integer mercury__integer__V_63_63;
#line 255 "integer.m"
            MR_Word mercury__integer__V_66_66;

#line 289 "integer.m"
            {
#line 289 "integer.m"
              mercury__integer__V_54_54 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_55_55);
            }
#line 313 "integer.m"
            mercury__integer__S_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_54_54, (MR_Integer) 0)));
#line 313 "integer.m"
            mercury__integer__Digits0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_54_54, (MR_Integer) 1)));
#line 313 "integer.m"
            mercury__integer__V_63_63 = ((MR_Integer) 0 - mercury__integer__S_60);
#line 314 "integer.m"
            {
#line 314 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_61, &mercury__integer__Digits_62);
            }
#line 313 "integer.m"
            {
#line 313 "integer.m"
              mercury__integer__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 0) = ((MR_Box) (mercury__integer__V_63_63));
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 1) = ((MR_Box) (mercury__integer__Digits_62));
#line 313 "integer.m"
            }
#line 521 "integer.m"
            {
#line 521 "integer.m"
              mercury__integer__V_66_66 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__Y_5, mercury__integer__V_9_9);
            }
#line 521 "integer.m"
            {
#line 521 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_66_66);
            }
#line 255 "integer.m"
          }
#line 250 "integer.m"
      }
#line 250 "integer.m"
    else
#line 250 "integer.m"
      {
#line 305 "integer.m"
        MR_Integer mercury__integer__Sign_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 305 "integer.m"
        MR_Word mercury__integer__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 305 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_67 < (MR_Integer) 0);
#line 250 "integer.m"
        if (mercury__integer__succeeded)
#line 258 "integer.m"
          {
#line 258 "integer.m"
            MR_Word mercury__integer__V_10_10;
#line 258 "integer.m"
            MR_Word mercury__integer__V_71_71;
#line 258 "integer.m"
            MR_Word mercury__integer__V_72_72 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 258 "integer.m"
            MR_Integer mercury__integer__S_77;
#line 258 "integer.m"
            MR_Word mercury__integer__Digits0_78;
#line 258 "integer.m"
            MR_Word mercury__integer__Digits_79;
#line 258 "integer.m"
            MR_Integer mercury__integer__V_80_80;
#line 258 "integer.m"
            MR_Word mercury__integer__V_83_83;

#line 289 "integer.m"
            {
#line 289 "integer.m"
              mercury__integer__V_71_71 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_72_72);
            }
#line 313 "integer.m"
            mercury__integer__S_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_71_71, (MR_Integer) 0)));
#line 313 "integer.m"
            mercury__integer__Digits0_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_71_71, (MR_Integer) 1)));
#line 313 "integer.m"
            mercury__integer__V_80_80 = ((MR_Integer) 0 - mercury__integer__S_77);
#line 314 "integer.m"
            {
#line 314 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_78, &mercury__integer__Digits_79);
            }
#line 313 "integer.m"
            {
#line 313 "integer.m"
              mercury__integer__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, 0) = ((MR_Box) (mercury__integer__V_80_80));
#line 313 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, 1) = ((MR_Box) (mercury__integer__Digits_79));
#line 313 "integer.m"
            }
#line 521 "integer.m"
            {
#line 521 "integer.m"
              mercury__integer__V_83_83 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__X_4, mercury__integer__V_10_10);
            }
#line 521 "integer.m"
            {
#line 521 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_83_83);
            }
#line 258 "integer.m"
          }
#line 250 "integer.m"
        else
#line 496 "integer.m"
          {
#line 496 "integer.m"
            MR_Word mercury__integer__V_86_86;

#line 496 "integer.m"
            {
#line 496 "integer.m"
              mercury__integer__V_86_86 = mercury__integer__and_pairs_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
            }
#line 496 "integer.m"
            {
#line 496 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_86_86);
            }
#line 496 "integer.m"
          }
#line 250 "integer.m"
      }
#line 250 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 250 "integer.m"
  }
#line 85 "integer.m"
}

#line 83 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_62_62_2_f_0(
#line 83 "integer.m"
  MR_Word mercury__integer__X_4,
#line 83 "integer.m"
  MR_Integer mercury__integer__I_5)
#line 83 "integer.m"
{
#line 248 "integer.m"
  {
#line 248 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__I_5 < (MR_Integer) 0);
#line 248 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 248 "integer.m"
    if (mercury__integer__succeeded)
#line 248 "integer.m"
      {
#line 248 "integer.m"
        MR_Integer mercury__integer__V_7_7 = ((MR_Integer) 0 - mercury__integer__I_5);

#line 248 "integer.m"
        {
#line 248 "integer.m"
          return mercury__integer__HeadVar__3_3 = mercury__integer__f_60_60_2_f_0(mercury__integer__X_4, mercury__integer__V_7_7);
        }
#line 248 "integer.m"
      }
#line 248 "integer.m"
    else
#line 248 "integer.m"
      {
#line 248 "integer.m"
        mercury__integer__succeeded = (mercury__integer__I_5 > (MR_Integer) 0);
#line 248 "integer.m"
        if (mercury__integer__succeeded)
#line 358 "integer.m"
          {
#line 309 "integer.m"
            MR_Integer mercury__integer__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 309 "integer.m"
            MR_Word mercury__integer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 309 "integer.m"
            mercury__integer__succeeded = (mercury__integer__V_13_13 == (MR_Integer) 0);
#line 309 "integer.m"
            if (mercury__integer__succeeded)
#line 309 "integer.m"
              mercury__integer__succeeded = (mercury__integer__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "integer.m"
            if (mercury__integer__succeeded)
#line 358 "integer.m"
              mercury__integer__HeadVar__3_3 = mercury__integer__X_4;
#line 358 "integer.m"
            else
#line 358 "integer.m"
              {
#line 305 "integer.m"
                MR_Integer mercury__integer__Sign_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 305 "integer.m"
                MR_Word mercury__integer__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 305 "integer.m"
                mercury__integer__succeeded = (mercury__integer__Sign_15 < (MR_Integer) 0);
#line 358 "integer.m"
                if (mercury__integer__succeeded)
#line 362 "integer.m"
                  {
#line 362 "integer.m"
                    MR_Word mercury__integer__V_11_11;
#line 362 "integer.m"
                    MR_Word mercury__integer__V_19_19;
#line 362 "integer.m"
                    MR_Word mercury__integer__V_20_20 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 362 "integer.m"
                    MR_Integer mercury__integer__S_25;
#line 362 "integer.m"
                    MR_Word mercury__integer__Digits0_26;
#line 362 "integer.m"
                    MR_Integer mercury__integer__Len_31;
#line 362 "integer.m"
                    MR_Word mercury__integer__Digits_32;
#line 362 "integer.m"
                    MR_Integer mercury__integer__Div_33;
#line 362 "integer.m"
                    MR_Word mercury__integer__V_51_51;
#line 362 "integer.m"
                    MR_Word mercury__integer__V_52_52;
#line 362 "integer.m"
                    MR_Integer mercury__integer__S_57;
#line 362 "integer.m"
                    MR_Word mercury__integer__Digits0_58;
#line 362 "integer.m"
                    MR_Word mercury__integer__Digits_59;
#line 362 "integer.m"
                    MR_Integer mercury__integer__V_60_60;

#line 289 "integer.m"
                    {
#line 289 "integer.m"
                      mercury__integer__V_19_19 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_20_20);
                    }
#line 313 "integer.m"
                    mercury__integer__S_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 0)));
#line 313 "integer.m"
                    mercury__integer__Digits0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 1)));
#line 313 "integer.m"
                    mercury__integer__Len_31 = ((MR_Integer) 0 - mercury__integer__S_25);
#line 314 "integer.m"
                    {
#line 314 "integer.m"
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_26, &mercury__integer__Digits_32);
                    }
#line 370 "integer.m"
                    {
#line 370 "integer.m"
                      mercury__integer__Div_33 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
                    }
#line 371 "integer.m"
                    mercury__integer__succeeded = (mercury__integer__Div_33 < mercury__integer__Len_31);
#line 375 "integer.m"
                    if (mercury__integer__succeeded)
#line 372 "integer.m"
                      {
#line 372 "integer.m"
                        MR_Integer mercury__integer__Mod_34;
#line 372 "integer.m"
                        MR_Word mercury__integer__V_37_37;
#line 372 "integer.m"
                        MR_Integer mercury__integer__V_38_38;
#line 372 "integer.m"
                        MR_Word mercury__integer__V_40_40;
#line 372 "integer.m"
                        MR_Integer mercury__integer__V_41_41;
#line 372 "integer.m"
                        MR_Integer mercury__integer__V_6_46;
#line 372 "integer.m"
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
#line 373 "integer.m"
                        mercury__integer__V_38_38 = ((MR_Integer) 14 - mercury__integer__Mod_34);
#line 374 "integer.m"
                        mercury__integer__V_41_41 = (mercury__integer__Len_31 - mercury__integer__Div_33);
#line 374 "integer.m"
                        {
#line 374 "integer.m"
                          mercury__integer__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 374 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_40_40, 0) = ((MR_Box) (mercury__integer__V_41_41));
#line 374 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_40_40, 1) = ((MR_Box) (mercury__integer__Digits_32));
#line 374 "integer.m"
                        }
#line 373 "integer.m"
                        {
#line 373 "integer.m"
                          mercury__integer__V_37_37 = mercury__integer__rightshift_4_f_0(mercury__integer__Mod_34, mercury__integer__V_38_38, mercury__integer__V_40_40, (MR_Integer) 0);
                        }
#line 373 "integer.m"
                        {
#line 373 "integer.m"
                          mercury__integer__V_11_11 = mercury__integer__decap_1_f_0(mercury__integer__V_37_37);
                        }
#line 372 "integer.m"
                      }
#line 375 "integer.m"
                    else
#line 1057 "integer.m"
                      {
#line 1057 "integer.m"
                        MR_Word mercury__integer__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1057 "integer.m"
                        mercury__integer__V_11_11 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1057 "integer.m"
                      }
#line 1059 "integer.m"
                    mercury__integer__V_52_52 = (MR_Word) &mercury__integer_scalar_common_1[2];
#line 289 "integer.m"
                    {
#line 289 "integer.m"
                      mercury__integer__V_51_51 = mercury__integer__big_plus_2_f_0(mercury__integer__V_11_11, mercury__integer__V_52_52);
                    }
#line 313 "integer.m"
                    mercury__integer__S_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_51_51, (MR_Integer) 0)));
#line 313 "integer.m"
                    mercury__integer__Digits0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_51_51, (MR_Integer) 1)));
#line 313 "integer.m"
                    mercury__integer__V_60_60 = ((MR_Integer) 0 - mercury__integer__S_57);
#line 314 "integer.m"
                    {
#line 314 "integer.m"
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_58, &mercury__integer__Digits_59);
                    }
#line 313 "integer.m"
                    {
#line 313 "integer.m"
                      mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_60_60));
#line 313 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_59));
#line 313 "integer.m"
                    }
#line 362 "integer.m"
                  }
#line 358 "integer.m"
                else
#line 369 "integer.m"
                  {
#line 369 "integer.m"
                    MR_Integer mercury__integer__Len_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 369 "integer.m"
                    MR_Word mercury__integer__Digits_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));
#line 369 "integer.m"
                    MR_Integer mercury__integer__Div_65;

#line 370 "integer.m"
                    {
#line 370 "integer.m"
                      mercury__integer__Div_65 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
                    }
#line 371 "integer.m"
                    mercury__integer__succeeded = (mercury__integer__Div_65 < mercury__integer__Len_63);
#line 375 "integer.m"
                    if (mercury__integer__succeeded)
#line 372 "integer.m"
                      {
#line 372 "integer.m"
                        MR_Integer mercury__integer__Mod_66;
#line 372 "integer.m"
                        MR_Word mercury__integer__V_69_69;
#line 372 "integer.m"
                        MR_Integer mercury__integer__V_70_70;
#line 372 "integer.m"
                        MR_Word mercury__integer__V_72_72;
#line 372 "integer.m"
                        MR_Integer mercury__integer__V_73_73;
#line 372 "integer.m"
                        MR_Integer mercury__integer__V_6_78;
#line 372 "integer.m"
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
#line 373 "integer.m"
                        mercury__integer__V_70_70 = ((MR_Integer) 14 - mercury__integer__Mod_66);
#line 374 "integer.m"
                        mercury__integer__V_73_73 = (mercury__integer__Len_63 - mercury__integer__Div_65);
#line 374 "integer.m"
                        {
#line 374 "integer.m"
                          mercury__integer__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 374 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_72_72, 0) = ((MR_Box) (mercury__integer__V_73_73));
#line 374 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_72_72, 1) = ((MR_Box) (mercury__integer__Digits_64));
#line 374 "integer.m"
                        }
#line 373 "integer.m"
                        {
#line 373 "integer.m"
                          mercury__integer__V_69_69 = mercury__integer__rightshift_4_f_0(mercury__integer__Mod_66, mercury__integer__V_70_70, mercury__integer__V_72_72, (MR_Integer) 0);
                        }
#line 373 "integer.m"
                        {
#line 373 "integer.m"
                          return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_69_69);
                        }
#line 372 "integer.m"
                      }
#line 375 "integer.m"
                    else
#line 1057 "integer.m"
                      {
#line 1057 "integer.m"
                        MR_Word mercury__integer__V_81_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1057 "integer.m"
                        mercury__integer__HeadVar__3_3 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1057 "integer.m"
                      }
#line 369 "integer.m"
                  }
#line 358 "integer.m"
              }
#line 358 "integer.m"
          }
#line 248 "integer.m"
        else
#line 248 "integer.m"
          mercury__integer__HeadVar__3_3 = mercury__integer__X_4;
#line 248 "integer.m"
      }
#line 248 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 248 "integer.m"
  }
#line 83 "integer.m"
}

#line 81 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_60_60_2_f_0(
#line 81 "integer.m"
  MR_Word mercury__integer__X_4,
#line 81 "integer.m"
  MR_Integer mercury__integer__I_5)
#line 81 "integer.m"
{
#line 246 "integer.m"
  {
#line 246 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__I_5 > (MR_Integer) 0);
#line 246 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 246 "integer.m"
    if (mercury__integer__succeeded)
#line 246 "integer.m"
      {
#line 246 "integer.m"
        return mercury__integer__HeadVar__3_3 = mercury__integer__big_left_shift_2_f_0(mercury__integer__X_4, mercury__integer__I_5);
      }
#line 246 "integer.m"
    else
#line 246 "integer.m"
      {
#line 246 "integer.m"
        mercury__integer__succeeded = (mercury__integer__I_5 < (MR_Integer) 0);
#line 246 "integer.m"
        if (mercury__integer__succeeded)
#line 246 "integer.m"
          {
#line 246 "integer.m"
            MR_Integer mercury__integer__V_8_8 = ((MR_Integer) 0 - mercury__integer__I_5);

#line 246 "integer.m"
            {
#line 246 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__f_62_62_2_f_0(mercury__integer__X_4, mercury__integer__V_8_8);
            }
#line 246 "integer.m"
          }
#line 246 "integer.m"
        else
#line 246 "integer.m"
          mercury__integer__HeadVar__3_3 = mercury__integer__X_4;
#line 246 "integer.m"
      }
#line 246 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 246 "integer.m"
  }
#line 81 "integer.m"
}

#line 78 "integer.m"
void MR_CALL 
mercury__integer__divide_with_rem_4_p_0(
#line 78 "integer.m"
  MR_Word mercury__integer__X_5,
#line 78 "integer.m"
  MR_Word mercury__integer__Y_6,
#line 78 "integer.m"
  MR_Word * mercury__integer__Quotient_7,
#line 78 "integer.m"
  MR_Word * mercury__integer__Remainder_8)
#line 78 "integer.m"
{
#line 244 "integer.m"
  {
#line 244 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 244 "integer.m"
    {
#line 244 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_5, mercury__integer__Y_6, mercury__integer__Quotient_7, mercury__integer__Remainder_8);
#line 244 "integer.m"
      return;
    }
#line 244 "integer.m"
  }
#line 78 "integer.m"
}

#line 73 "integer.m"
MR_Word MR_CALL 
mercury__integer__mod_2_f_0(
#line 73 "integer.m"
  MR_Word mercury__integer__X_4,
#line 73 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 73 "integer.m"
{
#line 241 "integer.m"
  {
#line 241 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 241 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 241 "integer.m"
    {
#line 241 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__big_mod_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
#line 241 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 241 "integer.m"
  }
#line 73 "integer.m"
}

#line 71 "integer.m"
MR_Word MR_CALL 
mercury__integer__rem_2_f_0(
#line 71 "integer.m"
  MR_Word mercury__integer__X_4,
#line 71 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 71 "integer.m"
{
#line 334 "integer.m"
  {
#line 334 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 334 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 334 "integer.m"
    MR_Word mercury__integer___Quot_9;

#line 334 "integer.m"
    {
#line 334 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer___Quot_9, &mercury__integer__HeadVar__3_3);
    }
#line 334 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 334 "integer.m"
  }
#line 71 "integer.m"
}

#line 69 "integer.m"
MR_Word MR_CALL 
mercury__integer__div_2_f_0(
#line 69 "integer.m"
  MR_Word mercury__integer__X_4,
#line 69 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 69 "integer.m"
{
#line 235 "integer.m"
  {
#line 235 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 235 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 235 "integer.m"
    {
#line 235 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__big_div_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
#line 235 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 235 "integer.m"
  }
#line 69 "integer.m"
}

#line 67 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_47_47_2_f_0(
#line 67 "integer.m"
  MR_Word mercury__integer__X_4,
#line 67 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 67 "integer.m"
{
#line 329 "integer.m"
  {
#line 329 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 329 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 329 "integer.m"
    MR_Word mercury__integer___Rem_9;

#line 329 "integer.m"
    {
#line 329 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer__HeadVar__3_3, &mercury__integer___Rem_9);
    }
#line 329 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 329 "integer.m"
  }
#line 67 "integer.m"
}

#line 65 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_times_2_f_0(
#line 65 "integer.m"
  MR_Word mercury__integer__X_4,
#line 65 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 65 "integer.m"
{
#line 233 "integer.m"
  {
#line 233 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 233 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 233 "integer.m"
    {
#line 233 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__big_mul_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
#line 233 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 233 "integer.m"
  }
#line 65 "integer.m"
}

#line 63 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_minus_2_f_0(
#line 63 "integer.m"
  MR_Word mercury__integer__X_4,
#line 63 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 63 "integer.m"
{
#line 231 "integer.m"
  {
#line 231 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 231 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 231 "integer.m"
    MR_Word mercury__integer__V_6_6;
#line 231 "integer.m"
    MR_Integer mercury__integer__S_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 231 "integer.m"
    MR_Word mercury__integer__Digits0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
#line 231 "integer.m"
    MR_Word mercury__integer__Digits_9;
#line 231 "integer.m"
    MR_Integer mercury__integer__V_10_10 = ((MR_Integer) 0 - mercury__integer__S_7);

#line 314 "integer.m"
    {
#line 314 "integer.m"
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_8, &mercury__integer__Digits_9);
    }
#line 313 "integer.m"
    {
#line 313 "integer.m"
      mercury__integer__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 0) = ((MR_Box) (mercury__integer__V_10_10));
#line 313 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 1) = ((MR_Box) (mercury__integer__Digits_9));
#line 313 "integer.m"
    }
#line 231 "integer.m"
    {
#line 231 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_6_6);
    }
#line 231 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 231 "integer.m"
  }
#line 63 "integer.m"
}

#line 61 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_plus_2_f_0(
#line 61 "integer.m"
  MR_Word mercury__integer__X_4,
#line 61 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 61 "integer.m"
{
#line 229 "integer.m"
  {
#line 229 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 229 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 229 "integer.m"
    {
#line 229 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
#line 229 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 229 "integer.m"
  }
#line 61 "integer.m"
}

#line 59 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_minus_1_f_0(
#line 59 "integer.m"
  MR_Word mercury__integer__X_3)
#line 59 "integer.m"
{
#line 313 "integer.m"
  {
#line 313 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 313 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;
#line 313 "integer.m"
    MR_Integer mercury__integer__S_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_3, (MR_Integer) 0)));
#line 313 "integer.m"
    MR_Word mercury__integer__Digits0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_3, (MR_Integer) 1)));
#line 313 "integer.m"
    MR_Word mercury__integer__Digits_6;
#line 313 "integer.m"
    MR_Integer mercury__integer__V_7_7 = ((MR_Integer) 0 - mercury__integer__S_4);

#line 314 "integer.m"
    {
#line 314 "integer.m"
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_5, &mercury__integer__Digits_6);
    }
#line 313 "integer.m"
    {
#line 313 "integer.m"
      mercury__integer__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__V_7_7));
#line 313 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__Digits_6));
#line 313 "integer.m"
    }
#line 313 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 313 "integer.m"
  }
#line 59 "integer.m"
}

#line 57 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_plus_1_f_0(
#line 57 "integer.m"
  MR_Word mercury__integer__X_3)
#line 57 "integer.m"
{
#line 225 "integer.m"
  {
#line 225 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 225 "integer.m"
    MR_Word mercury__integer__X_2 = mercury__integer__X_3;

#line 225 "integer.m"
    return mercury__integer__X_2;
#line 225 "integer.m"
  }
#line 57 "integer.m"
}

#line 55 "integer.m"
MR_Word MR_CALL 
mercury__integer__det_from_base_string_2_f_0(
#line 55 "integer.m"
  MR_Integer mercury__integer__Base_4,
#line 55 "integer.m"
  MR_String mercury__integer__String_5)
#line 55 "integer.m"
{
#line 1296 "integer.m"
  {
#line 1296 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1296 "integer.m"
    MR_Word mercury__integer__Integer_6;
#line 1296 "integer.m"
    MR_Word mercury__integer__Integer0_7;

#line 1294 "integer.m"
    {
#line 1294 "integer.m"
      mercury__integer__succeeded = mercury__integer__from_base_string_2_f_0(mercury__integer__Base_4, mercury__integer__String_5, &mercury__integer__Integer0_7);
    }
#line 1296 "integer.m"
    if (mercury__integer__succeeded)
#line 1295 "integer.m"
      mercury__integer__Integer_6 = mercury__integer__Integer0_7;
#line 1296 "integer.m"
    else
#line 1297 "integer.m"
      {
#line 1297 "integer.m"
        {
#line 1297 "integer.m"
          mercury__require__error_1_p_0((MR_String) "integer.det_from_base_string");
        }
#line 1297 "integer.m"
      }
#line 1296 "integer.m"
    return mercury__integer__Integer_6;
#line 1296 "integer.m"
  }
#line 55 "integer.m"
}

#line 51 "integer.m"
MR_bool MR_CALL 
mercury__integer__from_base_string_2_f_0(
#line 51 "integer.m"
  MR_Integer mercury__integer__Base_4,
#line 51 "integer.m"
  MR_String mercury__integer__String_5,
#line 51 "integer.m"
  MR_Word * mercury__integer__Integer_6)
#line 51 "integer.m"
{
#line 1266 "integer.m"
  {
#line 1266 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1266 "integer.m"
    MR_Char mercury__integer__Char_7;
#line 1266 "integer.m"
    MR_Integer mercury__integer__Len_8;
#line 1266 "integer.m"
    MR_Integer mercury__integer__Len_7_40;

#line 242 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__from_base_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__String_5 ;
		{
#line 242 "string.opt"

    Length = strlen(Str);

#line 13538 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__Len_7_40  = Length;
#line 242 "string.opt"
}
#line 762 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__from_base_string_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__integer__Len_7_40 ;
		{
#line 762 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 13567 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 762 "string.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 1266 "integer.m"
    if (mercury__integer__succeeded)
#line 1266 "integer.m"
      {
#line 159 "string.opt"
        {
#line 159 "string.opt"
          mercury__string__unsafe_index_3_p_0(mercury__integer__String_5, (MR_Integer) 0, &mercury__integer__Char_7);
        }
#line 242 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__from_base_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__String_5 ;
		{
#line 242 "string.opt"

    Length = strlen(Str);

#line 13598 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__Len_8  = Length;
#line 242 "string.opt"
}
#line 1269 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Char_7 == (MR_Char) 45);
#line 1274 "integer.m"
        if (mercury__integer__succeeded)
#line 1270 "integer.m"
          {
#line 1270 "integer.m"
            MR_Word mercury__integer__N_9;
#line 1270 "integer.m"
            MR_Integer mercury__integer__V_13_13;
#line 1270 "integer.m"
            MR_Word mercury__integer__V_14_14;
#line 1270 "integer.m"
            MR_Integer mercury__integer__V_45_45;
#line 1270 "integer.m"
            MR_Word mercury__integer__V_46_46;
#line 1270 "integer.m"
            MR_Integer mercury__integer__Start_12_53;
#line 1270 "integer.m"
            MR_Integer mercury__integer__End_13_55;
#line 1270 "integer.m"
            MR_Integer mercury__integer__V_17_56;
#line 1270 "integer.m"
            MR_Integer mercury__integer__S_73;
#line 1270 "integer.m"
            MR_Word mercury__integer__Digits0_74;
#line 1270 "integer.m"
            MR_Word mercury__integer__Digits_75;
#line 1270 "integer.m"
            MR_Integer mercury__integer__V_76_76;
#line 609 "string.opt"
            MR_Integer mercury__integer__V_16_54;

#line 1270 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Len_8 > (MR_Integer) 1);
#line 1270 "integer.m"
            if (mercury__integer__succeeded)
#line 1270 "integer.m"
              {
#line 1271 "integer.m"
                mercury__integer__V_13_13 = (MR_Integer) 1;
#line 1057 "integer.m"
                mercury__integer__V_45_45 = (MR_Integer) 0;
#line 1057 "integer.m"
                mercury__integer__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 609 "string.opt"
                mercury__integer__V_16_54 = (MR_Integer) 0;
#line 1057 "integer.m"
                mercury__integer__V_14_14 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 79 "int.opt"
                mercury__integer__Start_12_53 = mercury__integer__V_13_13;
#line 242 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__from_base_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__String_5 ;
		{
#line 242 "string.opt"

    Length = strlen(Str);

#line 13669 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_17_56  = Length;
#line 242 "string.opt"
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
#line 612 "string.opt"
                {
#line 612 "string.opt"
                  mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__Base_4, mercury__integer__String_5, mercury__integer__Start_12_53, mercury__integer__End_13_55, mercury__integer__V_14_14, &mercury__integer__N_9);
                }
#line 1270 "integer.m"
                if (mercury__integer__succeeded)
#line 1270 "integer.m"
                  {
#line 313 "integer.m"
                    mercury__integer__S_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__N_9, (MR_Integer) 0)));
#line 313 "integer.m"
                    mercury__integer__Digits0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__N_9, (MR_Integer) 1)));
#line 313 "integer.m"
                    mercury__integer__V_76_76 = ((MR_Integer) 0 - mercury__integer__S_73);
#line 314 "integer.m"
                    {
#line 314 "integer.m"
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_74, &mercury__integer__Digits_75);
                    }
#line 313 "integer.m"
                    {
#line 313 "integer.m"
                      MR_Word base;
#line 313 "integer.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "integer.m"
                      *mercury__integer__Integer_6 = base;
#line 313 "integer.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__integer__V_76_76));
#line 313 "integer.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__Digits_75));
#line 313 "integer.m"
                    }
#line 313 "integer.m"
                    mercury__integer__succeeded = MR_TRUE;
#line 1270 "integer.m"
                  }
#line 1270 "integer.m"
              }
#line 1270 "integer.m"
          }
#line 1274 "integer.m"
        else
#line 1279 "integer.m"
          {
#line 1274 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Char_7 == (MR_Char) 43);
#line 1279 "integer.m"
            if (mercury__integer__succeeded)
#line 1275 "integer.m"
              {
#line 1275 "integer.m"
                MR_Integer mercury__integer__V_17_17;
#line 1275 "integer.m"
                MR_Word mercury__integer__V_18_18;
#line 1275 "integer.m"
                MR_Integer mercury__integer__V_77_77;
#line 1275 "integer.m"
                MR_Word mercury__integer__V_78_78;

#line 1275 "integer.m"
                mercury__integer__succeeded = (mercury__integer__Len_8 > (MR_Integer) 1);
#line 1275 "integer.m"
                if (mercury__integer__succeeded)
#line 1275 "integer.m"
                  {
#line 1276 "integer.m"
                    mercury__integer__V_17_17 = (MR_Integer) 1;
#line 1057 "integer.m"
                    mercury__integer__V_77_77 = (MR_Integer) 0;
#line 1057 "integer.m"
                    mercury__integer__V_78_78 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1057 "integer.m"
                    mercury__integer__V_18_18 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1276 "integer.m"
                    {
#line 1276 "integer.m"
                      return mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__Base_4, mercury__integer__String_5, mercury__integer__V_17_17, mercury__integer__Len_8, mercury__integer__V_18_18, mercury__integer__Integer_6);
                    }
#line 1275 "integer.m"
                  }
#line 1275 "integer.m"
              }
#line 1279 "integer.m"
            else
#line 1281 "integer.m"
              {
#line 1281 "integer.m"
                MR_Word mercury__integer__V_21_21 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1281 "integer.m"
                MR_Word mercury__integer__V_80_80 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1280 "integer.m"
                {
#line 1280 "integer.m"
                  return mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__Base_4, mercury__integer__String_5, (MR_Integer) 0, mercury__integer__Len_8, mercury__integer__V_21_21, mercury__integer__Integer_6);
                }
#line 1281 "integer.m"
              }
#line 1279 "integer.m"
          }
#line 1266 "integer.m"
      }
#line 1266 "integer.m"
    return mercury__integer__succeeded;
#line 1266 "integer.m"
  }
#line 51 "integer.m"
}

#line 43 "integer.m"
MR_Word MR_CALL 
mercury__integer__det_from_string_1_f_0(
#line 43 "integer.m"
  MR_String mercury__integer__S_3)
#line 43 "integer.m"
{
#line 1070 "integer.m"
  {
#line 1070 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1070 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;
#line 1070 "integer.m"
    MR_Word mercury__integer__I_4;
#line 1066 "integer.m"
    MR_Word mercury__integer__Cs_9;

#line 1067 "integer.m"
    {
#line 1067 "integer.m"
      mercury__string__to_char_list_2_p_0(mercury__integer__S_3, &mercury__integer__Cs_9);
    }
#line 1068 "integer.m"
    {
#line 1068 "integer.m"
      mercury__integer__succeeded = mercury__integer__string_to_integer_1_f_0(mercury__integer__Cs_9, &mercury__integer__I_4);
    }
#line 1070 "integer.m"
    if (mercury__integer__succeeded)
#line 1070 "integer.m"
      mercury__integer__HeadVar__2_2 = mercury__integer__I_4;
#line 1070 "integer.m"
    else
#line 1074 "integer.m"
      {
#line 1074 "integer.m"
        MR_Word mercury__integer__TypeCtorInfo_6_6 = (MR_Word) &mercury__integer__integer__type_ctor_info_integer_0;
#line 1074 "integer.m"
        MR_Box mercury__integer__conv0_HeadVar__2_2;

#line 1074 "integer.m"
        {
#line 1074 "integer.m"
          mercury__integer__conv0_HeadVar__2_2 = mercury__require__func_error_1_f_0(mercury__integer__TypeCtorInfo_6_6, (MR_String) "integer.det_from_string/1: cannot convert to integer.");
        }
#line 1074 "integer.m"
        mercury__integer__HeadVar__2_2 = ((MR_Word) mercury__integer__conv0_HeadVar__2_2);
#line 1074 "integer.m"
      }
#line 1070 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 1070 "integer.m"
  }
#line 43 "integer.m"
}

#line 41 "integer.m"
MR_bool MR_CALL 
mercury__integer__from_string_1_f_0(
#line 41 "integer.m"
  MR_String mercury__integer__S_3,
#line 41 "integer.m"
  MR_Word * mercury__integer__Big_4)
#line 41 "integer.m"
{
#line 1066 "integer.m"
  {
#line 1066 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1066 "integer.m"
    MR_Word mercury__integer__Cs_5;

#line 1067 "integer.m"
    {
#line 1067 "integer.m"
      mercury__string__to_char_list_2_p_0(mercury__integer__S_3, &mercury__integer__Cs_5);
    }
#line 1068 "integer.m"
    {
#line 1068 "integer.m"
      return mercury__integer__succeeded = mercury__integer__string_to_integer_1_f_0(mercury__integer__Cs_5, mercury__integer__Big_4);
    }
#line 1066 "integer.m"
    return mercury__integer__succeeded;
#line 1066 "integer.m"
  }
#line 41 "integer.m"
}

#line 39 "integer.m"
MR_String MR_CALL 
mercury__integer__to_string_1_f_0(
#line 39 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 39 "integer.m"
{
#line 1112 "integer.m"
  {
#line 1112 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1112 "integer.m"
    MR_String mercury__integer__HeadVar__2_2;
#line 1112 "integer.m"
    MR_Integer mercury__integer__Sign_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1112 "integer.m"
    MR_Word mercury__integer__Digits_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1112 "integer.m"
    MR_String mercury__integer__SignStr_5;
#line 1112 "integer.m"
    MR_Word mercury__integer__AbsDigits_6;
#line 1112 "integer.m"
    MR_String mercury__integer__V_7_7;

#line 1113 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_3 < (MR_Integer) 0);
#line 1116 "integer.m"
    if (mercury__integer__succeeded)
#line 1114 "integer.m"
      {
#line 1114 "integer.m"
        mercury__integer__SignStr_5 = (MR_String) "-";
#line 1115 "integer.m"
        {
#line 1115 "integer.m"
          mercury__integer__neg_list_2_p_0(mercury__integer__Digits_4, &mercury__integer__AbsDigits_6);
        }
#line 1114 "integer.m"
      }
#line 1116 "integer.m"
    else
#line 1117 "integer.m"
      {
#line 1117 "integer.m"
        mercury__integer__SignStr_5 = (MR_String) "";
#line 1118 "integer.m"
        mercury__integer__AbsDigits_6 = mercury__integer__Digits_4;
#line 1117 "integer.m"
      }
#line 1123 "integer.m"
    if ((mercury__integer__AbsDigits_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1123 "integer.m"
      mercury__integer__V_7_7 = (MR_String) "0";
#line 1123 "integer.m"
    else
#line 1124 "integer.m"
      {
#line 1124 "integer.m"
        MR_Word mercury__integer__DigitsInPrintBase_14;
#line 1124 "integer.m"
        MR_Word mercury__integer__V_19_19;
#line 1124 "integer.m"
        MR_Word mercury__integer__V_20_20;
#line 1124 "integer.m"
        MR_Word mercury__integer__V_26_26 = (MR_Word) &mercury__integer_scalar_common_1[3];
#line 1124 "integer.m"
        MR_Word mercury__integer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1126 "integer.m"
        MR_Integer mercury__integer__V_13_13;

#line 1180 "integer.m"
        {
#line 1180 "integer.m"
          mercury__integer__V_19_19 = mercury__integer__printbase_pos_int_to_digits_2_2_f_0((MR_Integer) 16384, mercury__integer__V_26_26);
        }
#line 1148 "integer.m"
        {
#line 1148 "integer.m"
          mercury__integer__V_20_20 = mercury__integer__printbase_rep_1_3_f_0(mercury__integer__AbsDigits_6, mercury__integer__V_19_19, mercury__integer__V_26_26);
        }
#line 1126 "integer.m"
        mercury__integer__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_20_20, (MR_Integer) 0)));
#line 1126 "integer.m"
        mercury__integer__DigitsInPrintBase_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_20_20, (MR_Integer) 1)));
#line 1132 "integer.m"
        if ((mercury__integer__DigitsInPrintBase_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1133 "integer.m"
          {
#line 1134 "integer.m"
            {
#line 1134 "integer.m"
              mercury__require__error_1_p_0((MR_String) "integer.digits_to_string/1: empty list");
            }
#line 1133 "integer.m"
          }
#line 1132 "integer.m"
        else
#line 1128 "integer.m"
          {
#line 1128 "integer.m"
            MR_Integer mercury__integer__Head_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__DigitsInPrintBase_14, (MR_Integer) 0)));
#line 1128 "integer.m"
            MR_Word mercury__integer__Tail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__DigitsInPrintBase_14, (MR_Integer) 1)));
#line 1128 "integer.m"
            MR_String mercury__integer__SHead_17;
#line 1128 "integer.m"
            MR_Word mercury__integer__Ss_18;
#line 1128 "integer.m"
            MR_Word mercury__integer__V_23_23;
#line 1128 "integer.m"
            MR_Word mercury__integer__V_24_24;

#line 705 "string.opt"
            {
#line 705 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__integer__Head_15, (MR_Integer) 10, &mercury__integer__SHead_17);
            }
#line 1130 "integer.m"
            mercury__integer__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1130 "integer.m"
            {
#line 1130 "integer.m"
              mercury__integer__digits_to_strings_3_p_0(mercury__integer__Tail_16, &mercury__integer__Ss_18, mercury__integer__V_23_23);
            }
#line 1131 "integer.m"
            {
#line 1131 "integer.m"
              mercury__integer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_24_24, 0) = ((MR_Box) (mercury__integer__SHead_17));
#line 1131 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_24_24, 1) = ((MR_Box) (mercury__integer__Ss_18));
#line 1131 "integer.m"
            }
#line 410 "string.opt"
            {
#line 410 "string.opt"
              mercury__integer__V_7_7 = mercury__string__append_list_1_f_0(mercury__integer__V_24_24);
            }
#line 1128 "integer.m"
          }
#line 1124 "integer.m"
      }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2(mercury__integer__SignStr_5, mercury__integer__V_7_7, &mercury__integer__HeadVar__2_2);
    }
#line 1112 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 1112 "integer.m"
  }
#line 39 "integer.m"
}

#line 37 "integer.m"
MR_Word MR_CALL 
mercury__integer__integer_1_f_0(
#line 37 "integer.m"
  MR_Integer mercury__integer__N_3)
#line 37 "integer.m"
{
#line 589 "integer.m"
  {
#line 589 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 589 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;

#line 589 "integer.m"
    {
#line 589 "integer.m"
      return mercury__integer__HeadVar__2_2 = mercury__integer__int_to_integer_1_f_0(mercury__integer__N_3);
    }
#line 589 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 589 "integer.m"
  }
#line 37 "integer.m"
}

#line 35 "integer.m"
MR_bool MR_CALL 
mercury__integer__f_greater_or_equal_2_p_0(
#line 35 "integer.m"
  MR_Word mercury__integer__X_3,
#line 35 "integer.m"
  MR_Word mercury__integer__Y_4)
#line 35 "integer.m"
{
#line 221 "integer.m"
  {
#line 221 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 221 "integer.m"
    MR_Word mercury__integer__C_5;

#line 553 "integer.m"
    {
#line 553 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__X_3, mercury__integer__Y_4);
    }
#line 223 "integer.m"
    if ((mercury__integer__C_5 == (MR_Integer) 0))
#line 223 "integer.m"
      mercury__integer__succeeded = MR_TRUE;
#line 223 "integer.m"
    else
#line 223 "integer.m"
      if ((mercury__integer__C_5 == (MR_Integer) 2))
#line 223 "integer.m"
        mercury__integer__succeeded = MR_TRUE;
#line 223 "integer.m"
      else
#line 223 "integer.m"
        mercury__integer__succeeded = MR_FALSE;
#line 221 "integer.m"
    return mercury__integer__succeeded;
#line 221 "integer.m"
  }
#line 35 "integer.m"
}

#line 33 "integer.m"
MR_bool MR_CALL 
mercury__integer__f_less_or_equal_2_p_0(
#line 33 "integer.m"
  MR_Word mercury__integer__X_3,
#line 33 "integer.m"
  MR_Word mercury__integer__Y_4)
#line 33 "integer.m"
{
#line 217 "integer.m"
  {
#line 217 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 217 "integer.m"
    MR_Word mercury__integer__C_5;

#line 553 "integer.m"
    {
#line 553 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__X_3, mercury__integer__Y_4);
    }
#line 219 "integer.m"
    if ((mercury__integer__C_5 == (MR_Integer) 1))
#line 219 "integer.m"
      mercury__integer__succeeded = MR_TRUE;
#line 219 "integer.m"
    else
#line 219 "integer.m"
      if ((mercury__integer__C_5 == (MR_Integer) 0))
#line 219 "integer.m"
        mercury__integer__succeeded = MR_TRUE;
#line 219 "integer.m"
      else
#line 219 "integer.m"
        mercury__integer__succeeded = MR_FALSE;
#line 217 "integer.m"
    return mercury__integer__succeeded;
#line 217 "integer.m"
  }
#line 33 "integer.m"
}

#line 31 "integer.m"
MR_bool MR_CALL 
mercury__integer__f_greater_than_2_p_0(
#line 31 "integer.m"
  MR_Word mercury__integer__X_3,
#line 31 "integer.m"
  MR_Word mercury__integer__Y_4)
#line 31 "integer.m"
{
#line 213 "integer.m"
  {
#line 213 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 213 "integer.m"
    MR_Word mercury__integer__C_5;

#line 553 "integer.m"
    {
#line 553 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__X_3, mercury__integer__Y_4);
    }
#line 215 "integer.m"
    mercury__integer__succeeded = (mercury__integer__C_5 == (MR_Integer) 2);
#line 213 "integer.m"
    return mercury__integer__succeeded;
#line 213 "integer.m"
  }
#line 31 "integer.m"
}

#line 29 "integer.m"
MR_bool MR_CALL 
mercury__integer__f_less_than_2_p_0(
#line 29 "integer.m"
  MR_Word mercury__integer__X_3,
#line 29 "integer.m"
  MR_Word mercury__integer__Y_4)
#line 29 "integer.m"
{
#line 209 "integer.m"
  {
#line 209 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 209 "integer.m"
    MR_Word mercury__integer__C_5;

#line 553 "integer.m"
    {
#line 553 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__X_3, mercury__integer__Y_4);
    }
#line 211 "integer.m"
    mercury__integer__succeeded = (mercury__integer__C_5 == (MR_Integer) 1);
#line 209 "integer.m"
    return mercury__integer__succeeded;
#line 209 "integer.m"
  }
#line 29 "integer.m"
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
	MR_register_type_ctor_info(&mercury__integer__integer__type_ctor_info_sign_0);
}

void mercury__integer__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module integer. */
