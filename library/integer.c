/*
** Automatically generated from `integer.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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

#line 69 "string.opt"
static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0(
#line 69 "string.opt"
  MR_Integer mercury__integer__V_17_17,
#line 69 "string.opt"
  MR_String mercury__integer__V_8_8,
#line 69 "string.opt"
  MR_Integer mercury__integer__V_9_9,
#line 69 "string.opt"
  MR_Integer mercury__integer__V_10_10,
#line 69 "string.opt"
  MR_Word mercury__integer__V_14_11,
#line 69 "string.opt"
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

#line 1430 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_pos_mul_list_4_f_0(
#line 1430 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1430 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1430 "integer.m"
  MR_Word mercury__integer__Carry_3,
#line 1430 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4);

#line 1412 "integer.m"
static void MR_CALL 
mercury__integer__printbase_add_pairs_equal_5_p_0(
#line 1412 "integer.m"
  MR_Word mercury__integer__Base_1,
#line 1412 "integer.m"
  MR_Integer * mercury__integer__HeadVar__2_2,
#line 1412 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1412 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 1412 "integer.m"
  MR_Word * mercury__integer__HeadVar__5_5);

#line 1394 "integer.m"
static void MR_CALL 
mercury__integer__printbase_add_pairs_5_p_0(
#line 1394 "integer.m"
  MR_Word mercury__integer__Base_6,
#line 1394 "integer.m"
  MR_Integer * mercury__integer__Div_7,
#line 1394 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1394 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 1394 "integer.m"
  MR_Word * mercury__integer__Ds_12);

#line 1379 "integer.m"
static void MR_CALL 
mercury__integer__printbase_mul_by_digit_2_5_p_0(
#line 1379 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1379 "integer.m"
  MR_Integer mercury__integer__D_2,
#line 1379 "integer.m"
  MR_Integer * mercury__integer__HeadVar__3_3,
#line 1379 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 1379 "integer.m"
  MR_Word * mercury__integer__HeadVar__5_5);

#line 1355 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_pos_int_to_digits_2_3_f_0(
#line 1355 "integer.m"
  MR_Word mercury__integer__Base_5,
#line 1355 "integer.m"
  MR_Integer mercury__integer__D_6,
#line 1355 "integer.m"
  MR_Word mercury__integer__Tail_7);

#line 1323 "integer.m"
static void MR_CALL 
mercury__integer__digits_to_strings_4_p_0(
#line 1323 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 1323 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1323 "integer.m"
  MR_Word * mercury__integer__DCG_0_3,
#line 1323 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4);

#line 1314 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_rep_1_4_f_0(
#line 1314 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1314 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1314 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1314 "integer.m"
  MR_Word mercury__integer__Carry_4);

#line 1291 "integer.m"
static MR_String MR_CALL 
mercury__integer__digits_to_string_3_f_0(
#line 1291 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 1291 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1291 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3);

#line 1250 "integer.m"
static MR_bool MR_CALL 
mercury__integer__string_to_integer_acc_2_f_0(
#line 1250 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1250 "integer.m"
  MR_Word mercury__integer__Acc_2,
#line 1250 "integer.m"
  MR_Word * mercury__integer__HeadVar__3_3);

#line 1193 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__int_list_2_f_0(
#line 1193 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1193 "integer.m"
  MR_Integer mercury__integer__Accum_2);

#line 1144 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_pow_sqmul_2_f_0(
#line 1144 "integer.m"
  MR_Word mercury__integer__A_4,
#line 1144 "integer.m"
  MR_Word mercury__integer__N_5);

#line 1112 "integer.m"
static MR_bool MR_CALL 
mercury__integer__pos_geq_2_p_0(
#line 1112 "integer.m"
  MR_Word mercury__integer__Xs_3,
#line 1112 "integer.m"
  MR_Word mercury__integer__Ys_4);

#line 1101 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_3_f_0(
#line 1101 "integer.m"
  MR_Integer mercury__integer__X_1,
#line 1101 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1101 "integer.m"
  MR_Integer mercury__integer__D_3);

#line 1088 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_1_3_f_0(
#line 1088 "integer.m"
  MR_Integer mercury__integer__X_1,
#line 1088 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1088 "integer.m"
  MR_Integer mercury__integer__D_3);

#line 1083 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_f_0(
#line 1083 "integer.m"
  MR_Integer mercury__integer__Digit_1,
#line 1083 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 1079 "integer.m"
static MR_Word MR_CALL 
mercury__integer__integer_prepend_2_f_0(
#line 1079 "integer.m"
  MR_Integer mercury__integer__Digit_4,
#line 1079 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 1074 "integer.m"
static MR_Word MR_CALL 
mercury__integer__integer_append_2_f_0(
#line 1074 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1074 "integer.m"
  MR_Integer mercury__integer__Digit_6);

#line 1063 "integer.m"
static MR_Word MR_CALL 
mercury__integer__det_tail_1_f_0(
#line 1063 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1);

#line 1050 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__det_second_1_f_0(
#line 1050 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1);

#line 1040 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__det_first_1_f_0(
#line 1040 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1);

#line 1035 "integer.m"
static MR_Word MR_CALL 
mercury__integer__decap_1_f_0(
#line 1035 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1);

#line 985 "integer.m"
static void MR_CALL 
mercury__integer__quot_rem_2_5_p_0(
#line 985 "integer.m"
  MR_Word mercury__integer__Ur_6,
#line 985 "integer.m"
  MR_Word mercury__integer__U_7,
#line 985 "integer.m"
  MR_Word mercury__integer__V_8,
#line 985 "integer.m"
  MR_Word * mercury__integer__Quot_9,
#line 985 "integer.m"
  MR_Word * mercury__integer__Rem_10);

#line 966 "integer.m"
static void MR_CALL 
mercury__integer__quot_rem_4_p_0(
#line 966 "integer.m"
  MR_Word mercury__integer__U_5,
#line 966 "integer.m"
  MR_Word mercury__integer__V_6,
#line 966 "integer.m"
  MR_Word * mercury__integer__Quot_7,
#line 966 "integer.m"
  MR_Word * mercury__integer__Rem_8);

#line 929 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_mul_list_3_f_0(
#line 929 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 929 "integer.m"
  MR_Word mercury__integer__Carry_2,
#line 929 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3);

#line 893 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_mul_karatsuba_2_f_0(
#line 893 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 893 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 863 "integer.m"
static void MR_CALL 
mercury__integer__diff_pairs_equal_4_p_0(
#line 863 "integer.m"
  MR_Integer * mercury__integer__HeadVar__1_1,
#line 863 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 863 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 863 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4);

#line 849 "integer.m"
static void MR_CALL 
mercury__integer__diff_pairs_4_p_0(
#line 849 "integer.m"
  MR_Integer * mercury__integer__Div_5,
#line 849 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 849 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 849 "integer.m"
  MR_Word * mercury__integer__Ds_10);

#line 842 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_minus_2_f_0(
#line 842 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 842 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 833 "integer.m"
static void MR_CALL 
mercury__integer__add_pairs_equal_4_p_0(
#line 833 "integer.m"
  MR_Integer * mercury__integer__HeadVar__1_1,
#line 833 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 833 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 833 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4);

#line 815 "integer.m"
static void MR_CALL 
mercury__integer__add_pairs_4_p_0(
#line 815 "integer.m"
  MR_Integer * mercury__integer__Div_5,
#line 815 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 815 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 815 "integer.m"
  MR_Word * mercury__integer__Ds_10);

#line 794 "integer.m"
static void MR_CALL 
mercury__integer__mul_by_digit_2_4_p_0(
#line 794 "integer.m"
  MR_Integer mercury__integer__D_1,
#line 794 "integer.m"
  MR_Integer * mercury__integer__HeadVar__2_2,
#line 794 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 794 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4);

#line 788 "integer.m"
static MR_Word MR_CALL 
mercury__integer__mul_by_digit_2_f_0(
#line 788 "integer.m"
  MR_Integer mercury__integer__Digit_4,
#line 788 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 783 "integer.m"
static MR_Word MR_CALL 
mercury__integer__mul_base_2_1_f_0(
#line 783 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1);

#line 760 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_int_to_digits_2_2_f_0(
#line 760 "integer.m"
  MR_Integer mercury__integer__D_4,
#line 760 "integer.m"
  MR_Word mercury__integer__Tail_5);

#line 670 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_xor_not_2_f_0(
#line 670 "integer.m"
  MR_Word mercury__integer__X1_4,
#line 670 "integer.m"
  MR_Word mercury__integer__NotX2_5);

#line 663 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_not_pairs_equal_2_f_0(
#line 663 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 663 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 648 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_not_pairs_2_f_0(
#line 648 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 648 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 638 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_pairs_equal_2_f_0(
#line 638 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 638 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 623 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_pairs_2_f_0(
#line 623 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 623 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 612 "integer.m"
static MR_Word MR_CALL 
mercury__integer__xor_pairs_equal_2_f_0(
#line 612 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 612 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 597 "integer.m"
static MR_Word MR_CALL 
mercury__integer__xor_pairs_2_f_0(
#line 597 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 597 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 587 "integer.m"
static MR_Word MR_CALL 
mercury__integer__or_pairs_equal_2_f_0(
#line 587 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 587 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 572 "integer.m"
static MR_Word MR_CALL 
mercury__integer__or_pairs_2_f_0(
#line 572 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 572 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2);

#line 568 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_or_2_f_0(
#line 568 "integer.m"
  MR_Word mercury__integer__X_4,
#line 568 "integer.m"
  MR_Word mercury__integer__Y_5);

#line 558 "integer.m"
static void MR_CALL 
mercury__integer__zeros_3_p_0(
#line 558 "integer.m"
  MR_Integer mercury__integer__Len_4,
#line 558 "integer.m"
  MR_Word * mercury__integer__DCG_0_5,
#line 558 "integer.m"
  MR_Word mercury__integer__DCG_3_8);

#line 542 "integer.m"
static void MR_CALL 
mercury__integer__leftshift_6_p_0(
#line 542 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 542 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 542 "integer.m"
  MR_Integer mercury__integer__Len_3,
#line 542 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 542 "integer.m"
  MR_Integer * mercury__integer__Carry_5,
#line 542 "integer.m"
  MR_Word * mercury__integer__DigitsOut_6);

#line 518 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_left_shift_2_f_0(
#line 518 "integer.m"
  MR_Word mercury__integer__X_4,
#line 518 "integer.m"
  MR_Integer mercury__integer__I_5);

#line 504 "integer.m"
static MR_Word MR_CALL 
mercury__integer__rightshift_4_f_0(
#line 504 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 504 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 504 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 504 "integer.m"
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

#line 69 "string.opt"
static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0(
#line 69 "string.opt"
  MR_Integer mercury__integer__V_17_17,
#line 69 "string.opt"
  MR_String mercury__integer__V_8_8,
#line 69 "string.opt"
  MR_Integer mercury__integer__V_9_9,
#line 69 "string.opt"
  MR_Integer mercury__integer__V_10_10,
#line 69 "string.opt"
  MR_Word mercury__integer__V_14_11,
#line 69 "string.opt"
  MR_Word * mercury__integer__V_15_12)
#line 69 "string.opt"
{
#line 421 "string.opt"
  while (MR_TRUE)
#line 421 "string.opt"
    {
#line 421 "string.opt"
      /* tailcall optimized into a loop */
#line 421 "string.opt"
      {
#line 421 "string.opt"
        MR_bool mercury__integer__succeeded = (mercury__integer__V_9_9 < mercury__integer__V_10_10);
#line 421 "string.opt"
        MR_Integer mercury__integer__V_12_13;
#line 421 "string.opt"
        MR_Char mercury__integer__V_13_14;

#line 415 "string.opt"
        if (mercury__integer__succeeded)
#line 415 "string.opt"
          {
#line 1047 "string.opt"
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
#line 1047 "string.opt"

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
#line 1047 "string.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 415 "string.opt"
            if (mercury__integer__succeeded)
#line 417 "string.opt"
              mercury__integer__succeeded = (mercury__integer__V_12_13 <= mercury__integer__V_10_10);
#line 415 "string.opt"
          }
#line 421 "string.opt"
        if (mercury__integer__succeeded)
#line 419 "string.opt"
          {
#line 419 "string.opt"
            MR_Word mercury__integer__V_16_15;
#line 419 "string.opt"
            MR_Integer mercury__integer__Digit0_23;
#line 419 "string.opt"
            MR_Word mercury__integer__Digit_24;
#line 419 "string.opt"
            MR_Word mercury__integer__V_26_26;
#line 419 "string.opt"
            MR_Word mercury__integer__V_27_27;

#line 1467 "integer.m"
            {
#line 1467 "integer.m"
              mercury__integer__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__integer__V_17_17, mercury__integer__V_13_14, &mercury__integer__Digit0_23);
            }
#line 419 "string.opt"
            if (mercury__integer__succeeded)
#line 419 "string.opt"
              {
#line 714 "integer.m"
                {
#line 714 "integer.m"
                  mercury__integer__Digit_24 = mercury__integer__int_to_integer_1_f_0(mercury__integer__Digit0_23);
                }
#line 714 "integer.m"
                {
#line 714 "integer.m"
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
#line 420 "string.opt"
                /* direct tailcall eliminated */
#line 420 "string.opt"
                {
#line 420 "string.opt"
                  MR_Integer mercury__integer__V_9__tmp_copy_9 = mercury__integer__V_12_13;
#line 420 "string.opt"
                  MR_Word mercury__integer__V_14__tmp_copy_11 = mercury__integer__V_16_15;

#line 420 "string.opt"
                  mercury__integer__V_14_11 = mercury__integer__V_14__tmp_copy_11;
#line 420 "string.opt"
                  mercury__integer__V_9_9 = mercury__integer__V_9__tmp_copy_9;
#line 420 "string.opt"
                }
#line 420 "string.opt"
                continue;
#line 419 "string.opt"
              }
#line 419 "string.opt"
          }
#line 421 "string.opt"
        else
#line 422 "string.opt"
          {
#line 422 "string.opt"
            *mercury__integer__V_15_12 = mercury__integer__V_14_11;
#line 422 "string.opt"
            mercury__integer__succeeded = MR_TRUE;
#line 422 "string.opt"
          }
#line 421 "string.opt"
        return mercury__integer__succeeded;
#line 421 "string.opt"
      }
#line 421 "string.opt"
      break;
#line 421 "string.opt"
    }
#line 69 "string.opt"
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
#line 394 "string.opt"
  {
#line 394 "string.opt"
    MR_bool mercury__integer__succeeded = ((MR_Integer) 0 > mercury__integer__V_9_9);
#line 394 "string.opt"
    MR_Integer mercury__integer__V_12_13;
#line 394 "string.opt"
    MR_Integer mercury__integer__V_13_15;
#line 394 "string.opt"
    MR_Integer mercury__integer__V_17_16;

#line 216 "int.opt"
    if (mercury__integer__succeeded)
#line 215 "int.opt"
      mercury__integer__V_12_13 = (MR_Integer) 0;
#line 216 "int.opt"
    else
#line 217 "int.opt"
      mercury__integer__V_12_13 = mercury__integer__V_9_9;
#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__V_8_8 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 1385 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_17_16  = Length;
#line 703 "string.opt"
}
#line 242 "int.opt"
    mercury__integer__succeeded = (mercury__integer__V_10_10 < mercury__integer__V_17_16);
#line 245 "int.opt"
    if (mercury__integer__succeeded)
#line 244 "int.opt"
      mercury__integer__V_13_15 = mercury__integer__V_10_10;
#line 245 "int.opt"
    else
#line 246 "int.opt"
      mercury__integer__V_13_15 = mercury__integer__V_17_16;
#line 399 "string.opt"
    {
#line 399 "string.opt"
      return mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__V_18_18, mercury__integer__V_8_8, mercury__integer__V_12_13, mercury__integer__V_13_15, mercury__integer__V_14_11, mercury__integer__V_15_12);
    }
#line 394 "string.opt"
    return mercury__integer__succeeded;
#line 394 "string.opt"
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

#line 71 "private_builtin.opt"
    mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_4 < mercury__integer__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
    if (mercury__integer__succeeded)
#line 73 "private_builtin.opt"
      *mercury__integer__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
    else
#line 79 "private_builtin.opt"
      {
#line 76 "private_builtin.opt"
        mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_4 == mercury__integer__Cast_HeadVar2_5);
#line 79 "private_builtin.opt"
        if (mercury__integer__succeeded)
#line 78 "private_builtin.opt"
          *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
        else
#line 80 "private_builtin.opt"
          *mercury__integer__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
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

#line 1343 "integer.m"
void MR_CALL 
mercury__integer____Compare____printbase_0_0(
#line 1343 "integer.m"
  MR_Word * mercury__integer__HeadVar__1_1,
#line 1343 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1343 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3)
#line 1343 "integer.m"
{
#line 1343 "integer.m"
  {
#line 1343 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1343 "integer.m"
    MR_Integer mercury__integer__CastX_6 = (MR_Integer) mercury__integer__HeadVar__2_2;
#line 1343 "integer.m"
    MR_Integer mercury__integer__CastY_7 = (MR_Integer) mercury__integer__HeadVar__3_3;

#line 1343 "integer.m"
    mercury__integer__succeeded = (mercury__integer__CastX_6 == mercury__integer__CastY_7);
#line 1343 "integer.m"
    if (mercury__integer__succeeded)
#line 1529 "integer.c"
      *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 1343 "integer.m"
    else
#line 1343 "integer.m"
      {
#line 1343 "integer.m"
        MR_Integer mercury__integer__V_4_4 = (MR_Integer) mercury__integer__HeadVar__2_2;
#line 1343 "integer.m"
        MR_Integer mercury__integer__V_5_5 = (MR_Integer) mercury__integer__HeadVar__3_3;

#line 71 "private_builtin.opt"
        mercury__integer__succeeded = (mercury__integer__V_4_4 < mercury__integer__V_5_5);
#line 74 "private_builtin.opt"
        if (mercury__integer__succeeded)
#line 73 "private_builtin.opt"
          *mercury__integer__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
        else
#line 79 "private_builtin.opt"
          {
#line 76 "private_builtin.opt"
            mercury__integer__succeeded = (mercury__integer__V_4_4 == mercury__integer__V_5_5);
#line 79 "private_builtin.opt"
            if (mercury__integer__succeeded)
#line 78 "private_builtin.opt"
              *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
            else
#line 80 "private_builtin.opt"
              *mercury__integer__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
          }
#line 1343 "integer.m"
      }
#line 1343 "integer.m"
  }
#line 1343 "integer.m"
}

#line 1343 "integer.m"
MR_bool MR_CALL 
mercury__integer____Unify____printbase_0_0(
#line 1343 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1343 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 1343 "integer.m"
{
#line 1343 "integer.m"
  {
#line 1343 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1343 "integer.m"
    MR_Integer mercury__integer__CastX_5 = (MR_Integer) mercury__integer__HeadVar__1_1;
#line 1343 "integer.m"
    MR_Integer mercury__integer__CastY_6 = (MR_Integer) mercury__integer__HeadVar__2_2;

#line 1343 "integer.m"
    mercury__integer__succeeded = (mercury__integer__CastX_5 == mercury__integer__CastY_6);
#line 1343 "integer.m"
    if (mercury__integer__succeeded)
#line 1343 "integer.m"
      mercury__integer__succeeded = MR_TRUE;
#line 1343 "integer.m"
    else
#line 1343 "integer.m"
      {
#line 1343 "integer.m"
        MR_Integer mercury__integer__V_3_3 = (MR_Integer) mercury__integer__HeadVar__1_1;
#line 1343 "integer.m"
        MR_Integer mercury__integer__V_4_4 = (MR_Integer) mercury__integer__HeadVar__2_2;

#line 1602 "integer.c"
        mercury__integer__succeeded = (mercury__integer__V_3_3 == mercury__integer__V_4_4);
#line 1343 "integer.m"
      }
#line 1343 "integer.m"
    return mercury__integer__succeeded;
#line 1343 "integer.m"
  }
#line 1343 "integer.m"
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

#line 71 "private_builtin.opt"
        mercury__integer__succeeded = (mercury__integer__V_4_4 < mercury__integer__V_6_6);
#line 74 "private_builtin.opt"
        if (mercury__integer__succeeded)
#line 73 "private_builtin.opt"
          mercury__integer__V_8_8 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
        else
#line 79 "private_builtin.opt"
          {
#line 76 "private_builtin.opt"
            mercury__integer__succeeded = (mercury__integer__V_4_4 == mercury__integer__V_6_6);
#line 79 "private_builtin.opt"
            if (mercury__integer__succeeded)
#line 78 "private_builtin.opt"
              mercury__integer__V_8_8 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
            else
#line 80 "private_builtin.opt"
              mercury__integer__V_8_8 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
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

#line 71 "private_builtin.opt"
    mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_4 < mercury__integer__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
    if (mercury__integer__succeeded)
#line 73 "private_builtin.opt"
      *mercury__integer__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
    else
#line 79 "private_builtin.opt"
      {
#line 76 "private_builtin.opt"
        mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_4 == mercury__integer__Cast_HeadVar2_5);
#line 79 "private_builtin.opt"
        if (mercury__integer__succeeded)
#line 78 "private_builtin.opt"
          *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
        else
#line 80 "private_builtin.opt"
          *mercury__integer__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
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

#line 1430 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_pos_mul_list_4_f_0(
#line 1430 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1430 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1430 "integer.m"
  MR_Word mercury__integer__Carry_3,
#line 1430 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4)
#line 1430 "integer.m"
{
#line 1433 "integer.m"
  while (MR_TRUE)
#line 1433 "integer.m"
    {
#line 1433 "integer.m"
      /* tailcall optimized into a loop */
#line 1433 "integer.m"
      {
#line 1433 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1433 "integer.m"
        MR_Word mercury__integer__HeadVar__5_5;

#line 1433 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1433 "integer.m"
          mercury__integer__HeadVar__5_5 = mercury__integer__Carry_3;
#line 1433 "integer.m"
        else
#line 1434 "integer.m"
          {
#line 1434 "integer.m"
            MR_Integer mercury__integer__X_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 1434 "integer.m"
            MR_Word mercury__integer__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1434 "integer.m"
            MR_Word mercury__integer__V_14_14;
#line 1434 "integer.m"
            MR_Word mercury__integer__V_15_15;
#line 1434 "integer.m"
            MR_Word mercury__integer__V_16_16;
#line 1434 "integer.m"
            MR_Integer mercury__integer__Len_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_3, (MR_Integer) 0)));
#line 1434 "integer.m"
            MR_Word mercury__integer__Digits_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_3, (MR_Integer) 1)));
#line 1434 "integer.m"
            MR_Integer mercury__integer__Len_30;
#line 1434 "integer.m"
            MR_Word mercury__integer__Ds_31;
#line 1434 "integer.m"
            MR_Integer mercury__integer__Div_32;
#line 1434 "integer.m"
            MR_Word mercury__integer__DsOut_33;
#line 1434 "integer.m"
            MR_Integer mercury__integer__L1_39;
#line 1434 "integer.m"
            MR_Integer mercury__integer__L2_41;
#line 1434 "integer.m"
            MR_Integer mercury__integer__Div_43;
#line 1434 "integer.m"
            MR_Word mercury__integer__Ds_44;
#line 1434 "integer.m"
            MR_Integer mercury__integer__Len_45;
#line 1389 "integer.m"
            MR_Word mercury__integer__D1_40;
#line 1389 "integer.m"
            MR_Word mercury__integer__D2_42;

#line 778 "integer.m"
            if ((mercury__integer__Digits_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1209 "integer.m"
              {
#line 1209 "integer.m"
                MR_Word mercury__integer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1209 "integer.m"
                mercury__integer__V_15_15 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1209 "integer.m"
              }
#line 778 "integer.m"
            else
#line 779 "integer.m"
              {
#line 779 "integer.m"
                MR_Integer mercury__integer__V_22_22 = (mercury__integer__Len_18 + (MR_Integer) 1);
#line 779 "integer.m"
                MR_Word mercury__integer__V_24_24;

#line 780 "integer.m"
                {
#line 780 "integer.m"
                  mercury__integer__V_24_24 = mercury__integer__mul_base_2_1_f_0(mercury__integer__Digits_19);
                }
#line 780 "integer.m"
                {
#line 780 "integer.m"
                  mercury__integer__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 780 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, 0) = ((MR_Box) (mercury__integer__V_22_22));
#line 780 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, 1) = ((MR_Box) (mercury__integer__V_24_24));
#line 780 "integer.m"
                }
#line 779 "integer.m"
              }
#line 1375 "integer.m"
            mercury__integer__Len_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
#line 1375 "integer.m"
            mercury__integer__Ds_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));
#line 1376 "integer.m"
            {
#line 1376 "integer.m"
              mercury__integer__printbase_mul_by_digit_2_5_p_0(mercury__integer__HeadVar__1_1, mercury__integer__X_10, &mercury__integer__Div_32, mercury__integer__Ds_31, &mercury__integer__DsOut_33);
            }
#line 1377 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Div_32 == (MR_Integer) 0);
#line 1377 "integer.m"
            if (mercury__integer__succeeded)
#line 1377 "integer.m"
              {
#line 1377 "integer.m"
                mercury__integer__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1377 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, 0) = ((MR_Box) (mercury__integer__Len_30));
#line 1377 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, 1) = ((MR_Box) (mercury__integer__DsOut_33));
#line 1377 "integer.m"
              }
#line 1377 "integer.m"
            else
#line 1377 "integer.m"
              {
#line 1377 "integer.m"
                MR_Integer mercury__integer__V_34_34 = (mercury__integer__Len_30 + (MR_Integer) 1);
#line 1377 "integer.m"
                MR_Word mercury__integer__V_36_36;

#line 1377 "integer.m"
                {
#line 1377 "integer.m"
                  mercury__integer__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_36_36, 0) = ((MR_Box) (mercury__integer__Div_32));
#line 1377 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_36_36, 1) = ((MR_Box) (mercury__integer__DsOut_33));
#line 1377 "integer.m"
                }
#line 1377 "integer.m"
                {
#line 1377 "integer.m"
                  mercury__integer__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1377 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, 0) = ((MR_Box) (mercury__integer__V_34_34));
#line 1377 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, 1) = ((MR_Box) (mercury__integer__V_36_36));
#line 1377 "integer.m"
                }
#line 1377 "integer.m"
              }
#line 1389 "integer.m"
            mercury__integer__L1_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, (MR_Integer) 0)));
#line 1389 "integer.m"
            mercury__integer__D1_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, (MR_Integer) 1)));
#line 1389 "integer.m"
            mercury__integer__L2_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, (MR_Integer) 0)));
#line 1389 "integer.m"
            mercury__integer__D2_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, (MR_Integer) 1)));
#line 1390 "integer.m"
            {
#line 1390 "integer.m"
              mercury__integer__printbase_add_pairs_5_p_0(mercury__integer__HeadVar__1_1, &mercury__integer__Div_43, mercury__integer__V_15_15, mercury__integer__V_16_16, &mercury__integer__Ds_44);
            }
#line 1391 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_39 > mercury__integer__L2_41);
#line 1391 "integer.m"
            if (mercury__integer__succeeded)
#line 1391 "integer.m"
              mercury__integer__Len_45 = mercury__integer__L1_39;
#line 1391 "integer.m"
            else
#line 1391 "integer.m"
              mercury__integer__Len_45 = mercury__integer__L2_41;
#line 1392 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Div_43 == (MR_Integer) 0);
#line 1392 "integer.m"
            if (mercury__integer__succeeded)
#line 1392 "integer.m"
              {
#line 1392 "integer.m"
                mercury__integer__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1392 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__Len_45));
#line 1392 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__Ds_44));
#line 1392 "integer.m"
              }
#line 1392 "integer.m"
            else
#line 1392 "integer.m"
              {
#line 1392 "integer.m"
                MR_Integer mercury__integer__V_48_48 = (mercury__integer__Len_45 + (MR_Integer) 1);
#line 1392 "integer.m"
                MR_Word mercury__integer__V_50_50;

#line 1392 "integer.m"
                {
#line 1392 "integer.m"
                  mercury__integer__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1392 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_50_50, 0) = ((MR_Box) (mercury__integer__Div_43));
#line 1392 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_50_50, 1) = ((MR_Box) (mercury__integer__Ds_44));
#line 1392 "integer.m"
                }
#line 1392 "integer.m"
                {
#line 1392 "integer.m"
                  mercury__integer__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1392 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__V_48_48));
#line 1392 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__V_50_50));
#line 1392 "integer.m"
                }
#line 1392 "integer.m"
              }
#line 1435 "integer.m"
            /* direct tailcall eliminated */
#line 1435 "integer.m"
            {
#line 1435 "integer.m"
              MR_Word mercury__integer__HeadVar__2__tmp_copy_2 = mercury__integer__Xs_11;
#line 1435 "integer.m"
              MR_Word mercury__integer__Carry__tmp_copy_3 = mercury__integer__V_14_14;

#line 1435 "integer.m"
              mercury__integer__Carry_3 = mercury__integer__Carry__tmp_copy_3;
#line 1435 "integer.m"
              mercury__integer__HeadVar__2_2 = mercury__integer__HeadVar__2__tmp_copy_2;
#line 1435 "integer.m"
            }
#line 1435 "integer.m"
            continue;
#line 1434 "integer.m"
          }
#line 1433 "integer.m"
        return mercury__integer__HeadVar__5_5;
#line 1433 "integer.m"
      }
#line 1433 "integer.m"
      break;
#line 1433 "integer.m"
    }
#line 1430 "integer.m"
}

#line 1412 "integer.m"
static void MR_CALL 
mercury__integer__printbase_add_pairs_equal_5_p_0(
#line 1412 "integer.m"
  MR_Word mercury__integer__Base_1,
#line 1412 "integer.m"
  MR_Integer * mercury__integer__HeadVar__2_2,
#line 1412 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1412 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 1412 "integer.m"
  MR_Word * mercury__integer__HeadVar__5_5)
#line 1412 "integer.m"
{
#line 1415 "integer.m"
  {
#line 1415 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 1415 "integer.m"
    if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1415 "integer.m"
      {
#line 1415 "integer.m"
        *mercury__integer__HeadVar__2_2 = (MR_Integer) 0;
#line 1415 "integer.m"
        *mercury__integer__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1415 "integer.m"
      }
#line 1415 "integer.m"
    else
#line 1415 "integer.m"
      {
#line 1415 "integer.m"
        MR_Word mercury__integer__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 1415 "integer.m"
        MR_Integer mercury__integer__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));

#line 1415 "integer.m"
        if ((mercury__integer__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1416 "integer.m"
          {
#line 1416 "integer.m"
            *mercury__integer__HeadVar__2_2 = (MR_Integer) 0;
#line 1416 "integer.m"
            *mercury__integer__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1416 "integer.m"
          }
#line 1415 "integer.m"
        else
#line 1417 "integer.m"
          {
#line 1417 "integer.m"
            MR_Integer mercury__integer__Y_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
#line 1417 "integer.m"
            MR_Word mercury__integer__Ys_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));
#line 1417 "integer.m"
            MR_Integer mercury__integer__Mod_17;
#line 1417 "integer.m"
            MR_Word mercury__integer__TailDs_18;
#line 1417 "integer.m"
            MR_Integer mercury__integer__DivTail_19;
#line 1417 "integer.m"
            MR_Integer mercury__integer__V_20_20;
#line 1417 "integer.m"
            MR_Integer mercury__integer__V_21_21;
#line 1417 "integer.m"
            MR_Integer mercury__integer__Base_27;
#line 1417 "integer.m"
            MR_Integer mercury__integer__V_6_31;
#line 1417 "integer.m"
            MR_Integer mercury__integer__V_7_32;

#line 1418 "integer.m"
            {
#line 1418 "integer.m"
              mercury__integer__printbase_add_pairs_equal_5_p_0(mercury__integer__Base_1, &mercury__integer__DivTail_19, mercury__integer__V_22_22, mercury__integer__Ys_16, &mercury__integer__TailDs_18);
            }
#line 1419 "integer.m"
            mercury__integer__V_21_21 = (mercury__integer__V_23_23 + mercury__integer__Y_15);
#line 1419 "integer.m"
            mercury__integer__V_20_20 = (mercury__integer__V_21_21 + mercury__integer__DivTail_19);
#line 1369 "integer.m"
            mercury__integer__Base_27 = (MR_Integer) mercury__integer__Base_1;
#line 272 "int.opt"
            {
#line 272 "int.opt"
              mercury__integer__V_7_32 = mercury__int__div_2_f_0(mercury__integer__V_20_20, mercury__integer__Base_27);
            }
#line 271 "int.opt"
            mercury__integer__V_6_31 = (mercury__integer__V_7_32 * mercury__integer__Base_27);
#line 270 "int.opt"
            mercury__integer__Mod_17 = (mercury__integer__V_20_20 - mercury__integer__V_6_31);
#line 1371 "integer.m"
            {
#line 1371 "integer.m"
              *mercury__integer__HeadVar__2_2 = mercury__int__div_2_f_0(mercury__integer__V_20_20, mercury__integer__Base_27);
            }
#line 1417 "integer.m"
            {
#line 1417 "integer.m"
              MR_Word base;
#line 1417 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1417 "integer.m"
              *mercury__integer__HeadVar__5_5 = base;
#line 1417 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_17));
#line 1417 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__TailDs_18));
#line 1417 "integer.m"
            }
#line 1417 "integer.m"
          }
#line 1415 "integer.m"
      }
#line 1415 "integer.m"
  }
#line 1412 "integer.m"
}

#line 1394 "integer.m"
static void MR_CALL 
mercury__integer__printbase_add_pairs_5_p_0(
#line 1394 "integer.m"
  MR_Word mercury__integer__Base_6,
#line 1394 "integer.m"
  MR_Integer * mercury__integer__Div_7,
#line 1394 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1394 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 1394 "integer.m"
  MR_Word * mercury__integer__Ds_12)
#line 1394 "integer.m"
{
#line 1397 "integer.m"
  {
#line 1397 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1397 "integer.m"
    MR_Integer mercury__integer__L1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 1397 "integer.m"
    MR_Word mercury__integer__D1_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 1397 "integer.m"
    MR_Integer mercury__integer__L2_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
#line 1397 "integer.m"
    MR_Word mercury__integer__D2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));

#line 1398 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_8 == mercury__integer__L2_10);
#line 1400 "integer.m"
    if (mercury__integer__succeeded)
#line 1399 "integer.m"
      {
#line 1399 "integer.m"
        mercury__integer__printbase_add_pairs_equal_5_p_0(mercury__integer__Base_6, mercury__integer__Div_7, mercury__integer__D1_9, mercury__integer__D2_11, mercury__integer__Ds_12);
#line 1399 "integer.m"
        return;
      }
#line 1400 "integer.m"
    else
#line 1404 "integer.m"
      {
#line 1404 "integer.m"
        MR_Integer mercury__integer__H2_13;
#line 1404 "integer.m"
        MR_Word mercury__integer__T2_14;

#line 1400 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_8 < mercury__integer__L2_10);
#line 1400 "integer.m"
        if (mercury__integer__succeeded)
#line 1400 "integer.m"
          {
#line 1400 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_11)) == (MR_mktag((MR_Integer) 1)));
#line 1400 "integer.m"
            if (mercury__integer__succeeded)
#line 1400 "integer.m"
              {
#line 1400 "integer.m"
                mercury__integer__H2_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_11, (MR_Integer) 0)));
#line 1400 "integer.m"
                mercury__integer__T2_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_11, (MR_Integer) 1)));
#line 1400 "integer.m"
              }
#line 1400 "integer.m"
          }
#line 1404 "integer.m"
        if (mercury__integer__succeeded)
#line 1401 "integer.m"
          {
#line 1401 "integer.m"
            MR_Integer mercury__integer__Div1_15;
#line 1401 "integer.m"
            MR_Word mercury__integer__Ds1_16;
#line 1401 "integer.m"
            MR_Integer mercury__integer__Mod_17;
#line 1401 "integer.m"
            MR_Word mercury__integer__V_21_21;
#line 1401 "integer.m"
            MR_Integer mercury__integer__V_22_22 = (mercury__integer__L2_10 - (MR_Integer) 1);
#line 1401 "integer.m"
            MR_Integer mercury__integer__V_24_24;
#line 1401 "integer.m"
            MR_Integer mercury__integer__Base_42;
#line 1401 "integer.m"
            MR_Integer mercury__integer__V_6_46;
#line 1401 "integer.m"
            MR_Integer mercury__integer__V_7_47;

#line 1401 "integer.m"
            {
#line 1401 "integer.m"
              mercury__integer__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1401 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_21_21, 0) = ((MR_Box) (mercury__integer__V_22_22));
#line 1401 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_21_21, 1) = ((MR_Box) (mercury__integer__T2_14));
#line 1401 "integer.m"
            }
#line 1401 "integer.m"
            {
#line 1401 "integer.m"
              mercury__integer__printbase_add_pairs_5_p_0(mercury__integer__Base_6, &mercury__integer__Div1_15, mercury__integer__HeadVar__3_3, mercury__integer__V_21_21, &mercury__integer__Ds1_16);
            }
#line 1402 "integer.m"
            mercury__integer__V_24_24 = (mercury__integer__H2_13 + mercury__integer__Div1_15);
#line 1369 "integer.m"
            mercury__integer__Base_42 = (MR_Integer) mercury__integer__Base_6;
#line 272 "int.opt"
            {
#line 272 "int.opt"
              mercury__integer__V_7_47 = mercury__int__div_2_f_0(mercury__integer__V_24_24, mercury__integer__Base_42);
            }
#line 271 "int.opt"
            mercury__integer__V_6_46 = (mercury__integer__V_7_47 * mercury__integer__Base_42);
#line 270 "int.opt"
            mercury__integer__Mod_17 = (mercury__integer__V_24_24 - mercury__integer__V_6_46);
#line 1371 "integer.m"
            {
#line 1371 "integer.m"
              *mercury__integer__Div_7 = mercury__int__div_2_f_0(mercury__integer__V_24_24, mercury__integer__Base_42);
            }
#line 1403 "integer.m"
            {
#line 1403 "integer.m"
              MR_Word base;
#line 1403 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1403 "integer.m"
              *mercury__integer__Ds_12 = base;
#line 1403 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_17));
#line 1403 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_16));
#line 1403 "integer.m"
            }
#line 1401 "integer.m"
          }
#line 1404 "integer.m"
        else
#line 1408 "integer.m"
          {
#line 1408 "integer.m"
            MR_Integer mercury__integer__H1_18;
#line 1408 "integer.m"
            MR_Word mercury__integer__T1_19;

#line 1404 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_8 > mercury__integer__L2_10);
#line 1404 "integer.m"
            if (mercury__integer__succeeded)
#line 1404 "integer.m"
              {
#line 1404 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_9)) == (MR_mktag((MR_Integer) 1)));
#line 1404 "integer.m"
                if (mercury__integer__succeeded)
#line 1404 "integer.m"
                  {
#line 1404 "integer.m"
                    mercury__integer__H1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_9, (MR_Integer) 0)));
#line 1404 "integer.m"
                    mercury__integer__T1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_9, (MR_Integer) 1)));
#line 1404 "integer.m"
                  }
#line 1404 "integer.m"
              }
#line 1408 "integer.m"
            if (mercury__integer__succeeded)
#line 1405 "integer.m"
              {
#line 1405 "integer.m"
                MR_Word mercury__integer__V_25_25;
#line 1405 "integer.m"
                MR_Integer mercury__integer__V_27_27 = (mercury__integer__L1_8 - (MR_Integer) 1);
#line 1405 "integer.m"
                MR_Integer mercury__integer__V_29_29;
#line 1405 "integer.m"
                MR_Integer mercury__integer__Div1_33;
#line 1405 "integer.m"
                MR_Word mercury__integer__Ds1_34;
#line 1405 "integer.m"
                MR_Integer mercury__integer__Mod_35;
#line 1405 "integer.m"
                MR_Integer mercury__integer__Base_51;
#line 1405 "integer.m"
                MR_Integer mercury__integer__V_6_55;
#line 1405 "integer.m"
                MR_Integer mercury__integer__V_7_56;

#line 1405 "integer.m"
                {
#line 1405 "integer.m"
                  mercury__integer__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1405 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_25_25, 0) = ((MR_Box) (mercury__integer__V_27_27));
#line 1405 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_25_25, 1) = ((MR_Box) (mercury__integer__T1_19));
#line 1405 "integer.m"
                }
#line 1405 "integer.m"
                {
#line 1405 "integer.m"
                  mercury__integer__printbase_add_pairs_5_p_0(mercury__integer__Base_6, &mercury__integer__Div1_33, mercury__integer__V_25_25, mercury__integer__HeadVar__4_4, &mercury__integer__Ds1_34);
                }
#line 1406 "integer.m"
                mercury__integer__V_29_29 = (mercury__integer__H1_18 + mercury__integer__Div1_33);
#line 1369 "integer.m"
                mercury__integer__Base_51 = (MR_Integer) mercury__integer__Base_6;
#line 272 "int.opt"
                {
#line 272 "int.opt"
                  mercury__integer__V_7_56 = mercury__int__div_2_f_0(mercury__integer__V_29_29, mercury__integer__Base_51);
                }
#line 271 "int.opt"
                mercury__integer__V_6_55 = (mercury__integer__V_7_56 * mercury__integer__Base_51);
#line 270 "int.opt"
                mercury__integer__Mod_35 = (mercury__integer__V_29_29 - mercury__integer__V_6_55);
#line 1371 "integer.m"
                {
#line 1371 "integer.m"
                  *mercury__integer__Div_7 = mercury__int__div_2_f_0(mercury__integer__V_29_29, mercury__integer__Base_51);
                }
#line 1407 "integer.m"
                {
#line 1407 "integer.m"
                  MR_Word base;
#line 1407 "integer.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1407 "integer.m"
                  *mercury__integer__Ds_12 = base;
#line 1407 "integer.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_35));
#line 1407 "integer.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_34));
#line 1407 "integer.m"
                }
#line 1405 "integer.m"
              }
#line 1408 "integer.m"
            else
#line 1409 "integer.m"
              {
#line 1409 "integer.m"
                {
#line 1409 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "predicate \140integer.printbase_add_pairs\'/5", (MR_String) "integer.printbase_add_pairs");
#line 1409 "integer.m"
                  return;
                }
#line 1409 "integer.m"
              }
#line 1408 "integer.m"
          }
#line 1404 "integer.m"
      }
#line 1397 "integer.m"
  }
#line 1394 "integer.m"
}

#line 1379 "integer.m"
static void MR_CALL 
mercury__integer__printbase_mul_by_digit_2_5_p_0(
#line 1379 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1379 "integer.m"
  MR_Integer mercury__integer__D_2,
#line 1379 "integer.m"
  MR_Integer * mercury__integer__HeadVar__3_3,
#line 1379 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 1379 "integer.m"
  MR_Word * mercury__integer__HeadVar__5_5)
#line 1379 "integer.m"
{
#line 1382 "integer.m"
  {
#line 1382 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 1382 "integer.m"
    if ((mercury__integer__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1382 "integer.m"
      {
#line 1382 "integer.m"
        *mercury__integer__HeadVar__3_3 = (MR_Integer) 0;
#line 1382 "integer.m"
        *mercury__integer__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1382 "integer.m"
      }
#line 1382 "integer.m"
    else
#line 1383 "integer.m"
      {
#line 1383 "integer.m"
        MR_Integer mercury__integer__X_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
#line 1383 "integer.m"
        MR_Word mercury__integer__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));
#line 1383 "integer.m"
        MR_Integer mercury__integer__Mod_13;
#line 1383 "integer.m"
        MR_Word mercury__integer__NewXs_14;
#line 1383 "integer.m"
        MR_Integer mercury__integer__DivXs_15;
#line 1383 "integer.m"
        MR_Integer mercury__integer__V_16_16;
#line 1383 "integer.m"
        MR_Integer mercury__integer__V_17_17;
#line 1383 "integer.m"
        MR_Integer mercury__integer__Base_21;
#line 1383 "integer.m"
        MR_Integer mercury__integer__V_6_25;
#line 1383 "integer.m"
        MR_Integer mercury__integer__V_7_26;

#line 1384 "integer.m"
        {
#line 1384 "integer.m"
          mercury__integer__printbase_mul_by_digit_2_5_p_0(mercury__integer__HeadVar__1_1, mercury__integer__D_2, &mercury__integer__DivXs_15, mercury__integer__Xs_12, &mercury__integer__NewXs_14);
        }
#line 1385 "integer.m"
        mercury__integer__V_17_17 = (mercury__integer__D_2 * mercury__integer__X_11);
#line 1385 "integer.m"
        mercury__integer__V_16_16 = (mercury__integer__V_17_17 + mercury__integer__DivXs_15);
#line 1369 "integer.m"
        mercury__integer__Base_21 = (MR_Integer) mercury__integer__HeadVar__1_1;
#line 272 "int.opt"
        {
#line 272 "int.opt"
          mercury__integer__V_7_26 = mercury__int__div_2_f_0(mercury__integer__V_16_16, mercury__integer__Base_21);
        }
#line 271 "int.opt"
        mercury__integer__V_6_25 = (mercury__integer__V_7_26 * mercury__integer__Base_21);
#line 270 "int.opt"
        mercury__integer__Mod_13 = (mercury__integer__V_16_16 - mercury__integer__V_6_25);
#line 1371 "integer.m"
        {
#line 1371 "integer.m"
          *mercury__integer__HeadVar__3_3 = mercury__int__div_2_f_0(mercury__integer__V_16_16, mercury__integer__Base_21);
        }
#line 1383 "integer.m"
        {
#line 1383 "integer.m"
          MR_Word base;
#line 1383 "integer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1383 "integer.m"
          *mercury__integer__HeadVar__5_5 = base;
#line 1383 "integer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_13));
#line 1383 "integer.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__NewXs_14));
#line 1383 "integer.m"
        }
#line 1383 "integer.m"
      }
#line 1382 "integer.m"
  }
#line 1379 "integer.m"
}

#line 1355 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_pos_int_to_digits_2_3_f_0(
#line 1355 "integer.m"
  MR_Word mercury__integer__Base_5,
#line 1355 "integer.m"
  MR_Integer mercury__integer__D_6,
#line 1355 "integer.m"
  MR_Word mercury__integer__Tail_7)
#line 1355 "integer.m"
{
#line 1360 "integer.m"
  while (MR_TRUE)
#line 1360 "integer.m"
    {
#line 1360 "integer.m"
      /* tailcall optimized into a loop */
#line 1360 "integer.m"
      {
#line 1360 "integer.m"
        MR_bool mercury__integer__succeeded = (mercury__integer__D_6 == (MR_Integer) 0);
#line 1360 "integer.m"
        MR_Word mercury__integer__Result_8;

#line 1360 "integer.m"
        if (mercury__integer__succeeded)
#line 1359 "integer.m"
          mercury__integer__Result_8 = mercury__integer__Tail_7;
#line 1360 "integer.m"
        else
#line 1361 "integer.m"
          {
#line 1361 "integer.m"
            MR_Integer mercury__integer__Length_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_7, (MR_Integer) 0)));
#line 1361 "integer.m"
            MR_Word mercury__integer__Digits_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_7, (MR_Integer) 1)));
#line 1361 "integer.m"
            MR_Integer mercury__integer__Div_11;
#line 1361 "integer.m"
            MR_Integer mercury__integer__Mod_12;
#line 1361 "integer.m"
            MR_Word mercury__integer__V_13_13;
#line 1361 "integer.m"
            MR_Integer mercury__integer__V_14_14;
#line 1361 "integer.m"
            MR_Word mercury__integer__V_16_16;
#line 1361 "integer.m"
            MR_Integer mercury__integer__Base_20 = (MR_Integer) mercury__integer__Base_5;
#line 1361 "integer.m"
            MR_Integer mercury__integer__V_6_24;
#line 1361 "integer.m"
            MR_Integer mercury__integer__V_7_25;

#line 272 "int.opt"
            {
#line 272 "int.opt"
              mercury__integer__V_7_25 = mercury__int__div_2_f_0(mercury__integer__D_6, mercury__integer__Base_20);
            }
#line 271 "int.opt"
            mercury__integer__V_6_24 = (mercury__integer__V_7_25 * mercury__integer__Base_20);
#line 270 "int.opt"
            mercury__integer__Mod_12 = (mercury__integer__D_6 - mercury__integer__V_6_24);
#line 1371 "integer.m"
            {
#line 1371 "integer.m"
              mercury__integer__Div_11 = mercury__int__div_2_f_0(mercury__integer__D_6, mercury__integer__Base_20);
            }
#line 1364 "integer.m"
            mercury__integer__V_14_14 = (mercury__integer__Length_9 + (MR_Integer) 1);
#line 1364 "integer.m"
            {
#line 1364 "integer.m"
              mercury__integer__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_16_16, 0) = ((MR_Box) (mercury__integer__Mod_12));
#line 1364 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_16_16, 1) = ((MR_Box) (mercury__integer__Digits_10));
#line 1364 "integer.m"
            }
#line 1364 "integer.m"
            {
#line 1364 "integer.m"
              mercury__integer__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1364 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 0) = ((MR_Box) (mercury__integer__V_14_14));
#line 1364 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 1) = ((MR_Box) (mercury__integer__V_16_16));
#line 1364 "integer.m"
            }
#line 1363 "integer.m"
            /* direct tailcall eliminated */
#line 1363 "integer.m"
            {
#line 1363 "integer.m"
              MR_Integer mercury__integer__D__tmp_copy_6 = mercury__integer__Div_11;
#line 1363 "integer.m"
              MR_Word mercury__integer__Tail__tmp_copy_7 = mercury__integer__V_13_13;

#line 1363 "integer.m"
              mercury__integer__Tail_7 = mercury__integer__Tail__tmp_copy_7;
#line 1363 "integer.m"
              mercury__integer__D_6 = mercury__integer__D__tmp_copy_6;
#line 1363 "integer.m"
            }
#line 1363 "integer.m"
            continue;
#line 1361 "integer.m"
          }
#line 1360 "integer.m"
        return mercury__integer__Result_8;
#line 1360 "integer.m"
      }
#line 1360 "integer.m"
      break;
#line 1360 "integer.m"
    }
#line 1355 "integer.m"
}

#line 1323 "integer.m"
static void MR_CALL 
mercury__integer__digits_to_strings_4_p_0(
#line 1323 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 1323 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1323 "integer.m"
  MR_Word * mercury__integer__DCG_0_3,
#line 1323 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4)
#line 1323 "integer.m"
{
#line 1326 "integer.m"
  {
#line 1326 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 1326 "integer.m"
    if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1326 "integer.m"
      *mercury__integer__DCG_0_3 = mercury__integer__HeadVar__4_4;
#line 1326 "integer.m"
    else
#line 1327 "integer.m"
      {
#line 1327 "integer.m"
        MR_Integer mercury__integer__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 1327 "integer.m"
        MR_Word mercury__integer__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1327 "integer.m"
        MR_String mercury__integer__S_11;
#line 1327 "integer.m"
        MR_Word mercury__integer__DCG_1_13;
#line 1327 "integer.m"
        MR_String mercury__integer__S1_18;

#line 1335 "integer.m"
        {
#line 1335 "integer.m"
          mercury__string__int_to_base_string_3_p_0(mercury__integer__H_9, mercury__integer__HeadVar__1_1, &mercury__integer__S1_18);
        }
#line 1336 "integer.m"
        {
#line 1336 "integer.m"
          mercury__string__pad_left_4_p_0(mercury__integer__S1_18, (MR_Char) 48, (MR_Integer) 3, &mercury__integer__S_11);
        }
#line 1330 "integer.m"
        {
#line 1330 "integer.m"
          mercury__integer__digits_to_strings_4_p_0(mercury__integer__HeadVar__1_1, mercury__integer__T_10, &mercury__integer__DCG_1_13, mercury__integer__HeadVar__4_4);
        }
#line 1329 "integer.m"
        {
#line 1329 "integer.m"
          MR_Word base;
#line 1329 "integer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1329 "integer.m"
          *mercury__integer__DCG_0_3 = base;
#line 1329 "integer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__S_11));
#line 1329 "integer.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__DCG_1_13));
#line 1329 "integer.m"
        }
#line 1327 "integer.m"
      }
#line 1326 "integer.m"
  }
#line 1323 "integer.m"
}

#line 1314 "integer.m"
static MR_Word MR_CALL 
mercury__integer__printbase_rep_1_4_f_0(
#line 1314 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1314 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1314 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 1314 "integer.m"
  MR_Word mercury__integer__Carry_4)
#line 1314 "integer.m"
{
#line 1316 "integer.m"
  while (MR_TRUE)
#line 1316 "integer.m"
    {
#line 1316 "integer.m"
      /* tailcall optimized into a loop */
#line 1316 "integer.m"
      {
#line 1316 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1316 "integer.m"
        MR_Word mercury__integer__HeadVar__5_5;

#line 1316 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1316 "integer.m"
          mercury__integer__HeadVar__5_5 = mercury__integer__Carry_4;
#line 1316 "integer.m"
        else
#line 1317 "integer.m"
          {
#line 1317 "integer.m"
            MR_Integer mercury__integer__X_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 1317 "integer.m"
            MR_Word mercury__integer__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1317 "integer.m"
            MR_Word mercury__integer__V_14_14;
#line 1317 "integer.m"
            MR_Word mercury__integer__V_15_15;
#line 1317 "integer.m"
            MR_Word mercury__integer__V_16_16;
#line 1317 "integer.m"
            MR_Integer mercury__integer__L1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 1317 "integer.m"
            MR_Word mercury__integer__Ds1_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 1317 "integer.m"
            MR_Integer mercury__integer__L2_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_4, (MR_Integer) 0)));
#line 1317 "integer.m"
            MR_Word mercury__integer__Ds2_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_4, (MR_Integer) 1)));
#line 1317 "integer.m"
            MR_Word mercury__integer__V_32_32;
#line 1317 "integer.m"
            MR_Word mercury__integer__V_34_34;
#line 1317 "integer.m"
            MR_Integer mercury__integer__L1_37;
#line 1317 "integer.m"
            MR_Integer mercury__integer__L2_39;
#line 1317 "integer.m"
            MR_Integer mercury__integer__Div_41;
#line 1317 "integer.m"
            MR_Word mercury__integer__Ds_42;
#line 1317 "integer.m"
            MR_Integer mercury__integer__Len_43;
#line 1389 "integer.m"
            MR_Word mercury__integer__D1_38;
#line 1389 "integer.m"
            MR_Word mercury__integer__D2_40;

#line 1424 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_18 < mercury__integer__L2_20);
#line 1423 "integer.m"
            if (mercury__integer__succeeded)
#line 1425 "integer.m"
              {
#line 1425 "integer.m"
                MR_Word mercury__integer__V_22_22 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1425 "integer.m"
                MR_Word mercury__integer__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1425 "integer.m"
                {
#line 1425 "integer.m"
                  mercury__integer__V_15_15 = mercury__integer__printbase_pos_mul_list_4_f_0(mercury__integer__HeadVar__1_1, mercury__integer__Ds1_19, mercury__integer__V_22_22, mercury__integer__Carry_4);
                }
#line 1425 "integer.m"
              }
#line 1423 "integer.m"
            else
#line 1427 "integer.m"
              {
#line 1427 "integer.m"
                MR_Word mercury__integer__V_24_24 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1427 "integer.m"
                MR_Word mercury__integer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1427 "integer.m"
                {
#line 1427 "integer.m"
                  mercury__integer__V_15_15 = mercury__integer__printbase_pos_mul_list_4_f_0(mercury__integer__HeadVar__1_1, mercury__integer__Ds2_21, mercury__integer__V_24_24, mercury__integer__HeadVar__3_3);
                }
#line 1427 "integer.m"
              }
#line 1209 "integer.m"
            mercury__integer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1209 "integer.m"
            mercury__integer__V_32_32 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1353 "integer.m"
            {
#line 1353 "integer.m"
              mercury__integer__V_16_16 = mercury__integer__printbase_pos_int_to_digits_2_3_f_0(mercury__integer__HeadVar__1_1, mercury__integer__X_10, mercury__integer__V_32_32);
            }
#line 1389 "integer.m"
            mercury__integer__L1_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, (MR_Integer) 0)));
#line 1389 "integer.m"
            mercury__integer__D1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, (MR_Integer) 1)));
#line 1389 "integer.m"
            mercury__integer__L2_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, (MR_Integer) 0)));
#line 1389 "integer.m"
            mercury__integer__D2_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, (MR_Integer) 1)));
#line 1390 "integer.m"
            {
#line 1390 "integer.m"
              mercury__integer__printbase_add_pairs_5_p_0(mercury__integer__HeadVar__1_1, &mercury__integer__Div_41, mercury__integer__V_15_15, mercury__integer__V_16_16, &mercury__integer__Ds_42);
            }
#line 1391 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_37 > mercury__integer__L2_39);
#line 1391 "integer.m"
            if (mercury__integer__succeeded)
#line 1391 "integer.m"
              mercury__integer__Len_43 = mercury__integer__L1_37;
#line 1391 "integer.m"
            else
#line 1391 "integer.m"
              mercury__integer__Len_43 = mercury__integer__L2_39;
#line 1392 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Div_41 == (MR_Integer) 0);
#line 1392 "integer.m"
            if (mercury__integer__succeeded)
#line 1392 "integer.m"
              {
#line 1392 "integer.m"
                mercury__integer__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1392 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__Len_43));
#line 1392 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__Ds_42));
#line 1392 "integer.m"
              }
#line 1392 "integer.m"
            else
#line 1392 "integer.m"
              {
#line 1392 "integer.m"
                MR_Integer mercury__integer__V_46_46 = (mercury__integer__Len_43 + (MR_Integer) 1);
#line 1392 "integer.m"
                MR_Word mercury__integer__V_48_48;

#line 1392 "integer.m"
                {
#line 1392 "integer.m"
                  mercury__integer__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1392 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_48_48, 0) = ((MR_Box) (mercury__integer__Div_41));
#line 1392 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_48_48, 1) = ((MR_Box) (mercury__integer__Ds_42));
#line 1392 "integer.m"
                }
#line 1392 "integer.m"
                {
#line 1392 "integer.m"
                  mercury__integer__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1392 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__V_46_46));
#line 1392 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__V_48_48));
#line 1392 "integer.m"
                }
#line 1392 "integer.m"
              }
#line 1318 "integer.m"
            /* direct tailcall eliminated */
#line 1318 "integer.m"
            {
#line 1318 "integer.m"
              MR_Word mercury__integer__HeadVar__2__tmp_copy_2 = mercury__integer__Xs_11;
#line 1318 "integer.m"
              MR_Word mercury__integer__Carry__tmp_copy_4 = mercury__integer__V_14_14;

#line 1318 "integer.m"
              mercury__integer__Carry_4 = mercury__integer__Carry__tmp_copy_4;
#line 1318 "integer.m"
              mercury__integer__HeadVar__2_2 = mercury__integer__HeadVar__2__tmp_copy_2;
#line 1318 "integer.m"
            }
#line 1318 "integer.m"
            continue;
#line 1317 "integer.m"
          }
#line 1316 "integer.m"
        return mercury__integer__HeadVar__5_5;
#line 1316 "integer.m"
      }
#line 1316 "integer.m"
      break;
#line 1316 "integer.m"
    }
#line 1314 "integer.m"
}

#line 1291 "integer.m"
static MR_String MR_CALL 
mercury__integer__digits_to_string_3_f_0(
#line 1291 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 1291 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1291 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3)
#line 1291 "integer.m"
{
#line 1293 "integer.m"
  {
#line 1293 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1293 "integer.m"
    MR_String mercury__integer__HeadVar__4_4;

#line 1293 "integer.m"
    if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1293 "integer.m"
      mercury__integer__HeadVar__4_4 = (MR_String) "0";
#line 1293 "integer.m"
    else
#line 1294 "integer.m"
      {
#line 1294 "integer.m"
        MR_Word mercury__integer__DigitsInPrintBase_14;
#line 1294 "integer.m"
        MR_Word mercury__integer__V_19_19;
#line 1294 "integer.m"
        MR_Word mercury__integer__V_20_20;
#line 1294 "integer.m"
        MR_Word mercury__integer__V_29_29 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1294 "integer.m"
        MR_Word mercury__integer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1297 "integer.m"
        MR_Integer mercury__integer__V_13_13;

#line 1353 "integer.m"
        {
#line 1353 "integer.m"
          mercury__integer__V_19_19 = mercury__integer__printbase_pos_int_to_digits_2_3_f_0(mercury__integer__HeadVar__2_2, (MR_Integer) 16384, mercury__integer__V_29_29);
        }
#line 1312 "integer.m"
        {
#line 1312 "integer.m"
          mercury__integer__V_20_20 = mercury__integer__printbase_rep_1_4_f_0(mercury__integer__HeadVar__2_2, mercury__integer__HeadVar__3_3, mercury__integer__V_19_19, mercury__integer__V_29_29);
        }
#line 1297 "integer.m"
        mercury__integer__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_20_20, (MR_Integer) 0)));
#line 1297 "integer.m"
        mercury__integer__DigitsInPrintBase_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_20_20, (MR_Integer) 1)));
#line 1303 "integer.m"
        if ((mercury__integer__DigitsInPrintBase_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1304 "integer.m"
          {
#line 1305 "integer.m"
            {
#line 1305 "integer.m"
              mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.digits_to_string\'/3", (MR_String) "empty list");
            }
#line 1304 "integer.m"
          }
#line 1303 "integer.m"
        else
#line 1299 "integer.m"
          {
#line 1299 "integer.m"
            MR_Integer mercury__integer__Head_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__DigitsInPrintBase_14, (MR_Integer) 0)));
#line 1299 "integer.m"
            MR_Word mercury__integer__Tail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__DigitsInPrintBase_14, (MR_Integer) 1)));
#line 1299 "integer.m"
            MR_String mercury__integer__SHead_17;
#line 1299 "integer.m"
            MR_Word mercury__integer__Ss_18;
#line 1299 "integer.m"
            MR_Word mercury__integer__V_25_25;
#line 1299 "integer.m"
            MR_Word mercury__integer__V_26_26;

#line 1300 "integer.m"
            {
#line 1300 "integer.m"
              mercury__string__int_to_base_string_3_p_0(mercury__integer__Head_15, mercury__integer__HeadVar__1_1, &mercury__integer__SHead_17);
            }
#line 1301 "integer.m"
            mercury__integer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1301 "integer.m"
            {
#line 1301 "integer.m"
              mercury__integer__digits_to_strings_4_p_0(mercury__integer__HeadVar__1_1, mercury__integer__Tail_16, &mercury__integer__Ss_18, mercury__integer__V_25_25);
            }
#line 1302 "integer.m"
            {
#line 1302 "integer.m"
              mercury__integer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1302 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_26_26, 0) = ((MR_Box) (mercury__integer__SHead_17));
#line 1302 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_26_26, 1) = ((MR_Box) (mercury__integer__Ss_18));
#line 1302 "integer.m"
            }
#line 197 "string.opt"
            {
#line 197 "string.opt"
              return mercury__integer__HeadVar__4_4 = mercury__string__append_list_1_f_0(mercury__integer__V_26_26);
            }
#line 1299 "integer.m"
          }
#line 1294 "integer.m"
      }
#line 1293 "integer.m"
    return mercury__integer__HeadVar__4_4;
#line 1293 "integer.m"
  }
#line 1291 "integer.m"
}

#line 1250 "integer.m"
static MR_bool MR_CALL 
mercury__integer__string_to_integer_acc_2_f_0(
#line 1250 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1250 "integer.m"
  MR_Word mercury__integer__Acc_2,
#line 1250 "integer.m"
  MR_Word * mercury__integer__HeadVar__3_3)
#line 1250 "integer.m"
{
#line 1253 "integer.m"
  while (MR_TRUE)
#line 1253 "integer.m"
    {
#line 1253 "integer.m"
      /* tailcall optimized into a loop */
#line 1253 "integer.m"
      {
#line 1253 "integer.m"
        MR_bool mercury__integer__succeeded;

#line 1253 "integer.m"
        if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1253 "integer.m"
          {
#line 1253 "integer.m"
            *mercury__integer__HeadVar__3_3 = mercury__integer__Acc_2;
#line 1253 "integer.m"
            mercury__integer__succeeded = MR_TRUE;
#line 1253 "integer.m"
          }
#line 1253 "integer.m"
        else
#line 1254 "integer.m"
          {
#line 1254 "integer.m"
            MR_Char mercury__integer__C_5 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1254 "integer.m"
            MR_Word mercury__integer__Cs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1254 "integer.m"
            MR_Integer mercury__integer__Digit0_9;
#line 1254 "integer.m"
            MR_Integer mercury__integer__Z_10;
#line 1254 "integer.m"
            MR_Word mercury__integer__Digit_11;
#line 1254 "integer.m"
            MR_Word mercury__integer__NewAcc_12;
#line 1254 "integer.m"
            MR_Char mercury__integer__V_13_13;
#line 1254 "integer.m"
            MR_Integer mercury__integer__V_14_14;
#line 1254 "integer.m"
            MR_Word mercury__integer__V_15_15;
#line 1254 "integer.m"
            MR_Integer mercury__integer__V_16_16;
#line 1254 "integer.m"
            MR_Word mercury__integer__V_23_23;
#line 1254 "integer.m"
            MR_Integer mercury__integer__V_24_24;
#line 1254 "integer.m"
            MR_Word mercury__integer__V_25_25;
#line 1254 "integer.m"
            MR_Integer mercury__integer__Len_28;
#line 1254 "integer.m"
            MR_Word mercury__integer__Digits0_29;
#line 1254 "integer.m"
            MR_Integer mercury__integer__Mod_30;
#line 1254 "integer.m"
            MR_Word mercury__integer__Digits_31;
#line 1254 "integer.m"
            MR_Integer mercury__integer__L1_36;
#line 1254 "integer.m"
            MR_Integer mercury__integer__L2_38;
#line 1254 "integer.m"
            MR_Integer mercury__integer__Div_40;
#line 1254 "integer.m"
            MR_Word mercury__integer__Ds_41;
#line 1254 "integer.m"
            MR_Integer mercury__integer__Len_42;
#line 810 "integer.m"
            MR_Word mercury__integer__D1_37;
#line 810 "integer.m"
            MR_Word mercury__integer__D2_39;

#line 75 "char.opt"
            {
#line 75 "char.opt"
              mercury__integer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__integer__C_5);
            }
#line 1254 "integer.m"
            if (mercury__integer__succeeded)
#line 1254 "integer.m"
              {
#line 111 "char.opt"
{
#define MR_PROC_LABEL mercury__integer__string_to_integer_acc_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__integer__C_5 ;
		{
#line 111 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 3220 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__Digit0_9  = Int;
#line 111 "char.opt"
}
#line 1261 "integer.m"
                mercury__integer__V_13_13 = (MR_Char) 48;
#line 111 "char.opt"
{
#define MR_PROC_LABEL mercury__integer__string_to_integer_acc_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__integer__V_13_13 ;
		{
#line 111 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 3242 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__Z_10  = Int;
#line 111 "char.opt"
}
#line 1262 "integer.m"
                mercury__integer__V_14_14 = (mercury__integer__Digit0_9 - mercury__integer__Z_10);
#line 1209 "integer.m"
                mercury__integer__V_24_24 = (MR_Integer) 0;
#line 1209 "integer.m"
                mercury__integer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1209 "integer.m"
                mercury__integer__V_23_23 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 758 "integer.m"
                {
#line 758 "integer.m"
                  mercury__integer__Digit_11 = mercury__integer__pos_int_to_digits_2_2_f_0(mercury__integer__V_14_14, mercury__integer__V_23_23);
                }
#line 1263 "integer.m"
                mercury__integer__V_16_16 = (MR_Integer) 10;
#line 790 "integer.m"
                mercury__integer__Len_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Acc_2, (MR_Integer) 0)));
#line 790 "integer.m"
                mercury__integer__Digits0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Acc_2, (MR_Integer) 1)));
#line 791 "integer.m"
                {
#line 791 "integer.m"
                  mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__V_16_16, &mercury__integer__Mod_30, mercury__integer__Digits0_29, &mercury__integer__Digits_31);
                }
#line 792 "integer.m"
                mercury__integer__succeeded = (mercury__integer__Mod_30 == (MR_Integer) 0);
#line 792 "integer.m"
                if (mercury__integer__succeeded)
#line 792 "integer.m"
                  {
#line 792 "integer.m"
                    mercury__integer__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 792 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, 0) = ((MR_Box) (mercury__integer__Len_28));
#line 792 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, 1) = ((MR_Box) (mercury__integer__Digits_31));
#line 792 "integer.m"
                  }
#line 792 "integer.m"
                else
#line 792 "integer.m"
                  {
#line 792 "integer.m"
                    MR_Integer mercury__integer__V_32_32 = (mercury__integer__Len_28 + (MR_Integer) 1);
#line 792 "integer.m"
                    MR_Word mercury__integer__V_34_34;

#line 792 "integer.m"
                    {
#line 792 "integer.m"
                      mercury__integer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_34_34, 0) = ((MR_Box) (mercury__integer__Mod_30));
#line 792 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_34_34, 1) = ((MR_Box) (mercury__integer__Digits_31));
#line 792 "integer.m"
                    }
#line 792 "integer.m"
                    {
#line 792 "integer.m"
                      mercury__integer__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 792 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, 0) = ((MR_Box) (mercury__integer__V_32_32));
#line 792 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, 1) = ((MR_Box) (mercury__integer__V_34_34));
#line 792 "integer.m"
                    }
#line 792 "integer.m"
                  }
#line 810 "integer.m"
                mercury__integer__L1_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Digit_11, (MR_Integer) 0)));
#line 810 "integer.m"
                mercury__integer__D1_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Digit_11, (MR_Integer) 1)));
#line 810 "integer.m"
                mercury__integer__L2_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, (MR_Integer) 0)));
#line 810 "integer.m"
                mercury__integer__D2_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_15_15, (MR_Integer) 1)));
#line 811 "integer.m"
                {
#line 811 "integer.m"
                  mercury__integer__add_pairs_4_p_0(&mercury__integer__Div_40, mercury__integer__Digit_11, mercury__integer__V_15_15, &mercury__integer__Ds_41);
                }
#line 812 "integer.m"
                mercury__integer__succeeded = (mercury__integer__L1_36 > mercury__integer__L2_38);
#line 812 "integer.m"
                if (mercury__integer__succeeded)
#line 812 "integer.m"
                  mercury__integer__Len_42 = mercury__integer__L1_36;
#line 812 "integer.m"
                else
#line 812 "integer.m"
                  mercury__integer__Len_42 = mercury__integer__L2_38;
#line 813 "integer.m"
                mercury__integer__succeeded = (mercury__integer__Div_40 == (MR_Integer) 0);
#line 813 "integer.m"
                if (mercury__integer__succeeded)
#line 813 "integer.m"
                  {
#line 813 "integer.m"
                    mercury__integer__NewAcc_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 813 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__NewAcc_12, 0) = ((MR_Box) (mercury__integer__Len_42));
#line 813 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__NewAcc_12, 1) = ((MR_Box) (mercury__integer__Ds_41));
#line 813 "integer.m"
                  }
#line 813 "integer.m"
                else
#line 813 "integer.m"
                  {
#line 813 "integer.m"
                    MR_Integer mercury__integer__V_45_45 = (mercury__integer__Len_42 + (MR_Integer) 1);
#line 813 "integer.m"
                    MR_Word mercury__integer__V_47_47;

#line 813 "integer.m"
                    {
#line 813 "integer.m"
                      mercury__integer__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_47_47, 0) = ((MR_Box) (mercury__integer__Div_40));
#line 813 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_47_47, 1) = ((MR_Box) (mercury__integer__Ds_41));
#line 813 "integer.m"
                    }
#line 813 "integer.m"
                    {
#line 813 "integer.m"
                      mercury__integer__NewAcc_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 813 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__NewAcc_12, 0) = ((MR_Box) (mercury__integer__V_45_45));
#line 813 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__NewAcc_12, 1) = ((MR_Box) (mercury__integer__V_47_47));
#line 813 "integer.m"
                    }
#line 813 "integer.m"
                  }
#line 1264 "integer.m"
                /* direct tailcall eliminated */
#line 1264 "integer.m"
                {
#line 1264 "integer.m"
                  MR_Word mercury__integer__HeadVar__1__tmp_copy_1 = mercury__integer__Cs_6;
#line 1264 "integer.m"
                  MR_Word mercury__integer__Acc__tmp_copy_2 = mercury__integer__NewAcc_12;

#line 1264 "integer.m"
                  mercury__integer__Acc_2 = mercury__integer__Acc__tmp_copy_2;
#line 1264 "integer.m"
                  mercury__integer__HeadVar__1_1 = mercury__integer__HeadVar__1__tmp_copy_1;
#line 1264 "integer.m"
                }
#line 1264 "integer.m"
                continue;
#line 1254 "integer.m"
              }
#line 1254 "integer.m"
          }
#line 1253 "integer.m"
        return mercury__integer__succeeded;
#line 1253 "integer.m"
      }
#line 1253 "integer.m"
      break;
#line 1253 "integer.m"
    }
#line 1250 "integer.m"
}

#line 1236 "integer.m"
MR_bool MR_CALL 
mercury__integer__string_to_integer_1_f_0(
#line 1236 "integer.m"
  MR_Word mercury__integer__Chars_3,
#line 1236 "integer.m"
  MR_Word * mercury__integer__Integer_4)
#line 1236 "integer.m"
{
#line 1238 "integer.m"
  {
#line 1238 "integer.m"
    MR_bool mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__Chars_3)) == (MR_mktag((MR_Integer) 1)));
#line 1238 "integer.m"
    MR_Char mercury__integer__C_5;
#line 1238 "integer.m"
    MR_Word mercury__integer__Cs_6;

#line 1239 "integer.m"
    if (mercury__integer__succeeded)
#line 1239 "integer.m"
      {
#line 1239 "integer.m"
        mercury__integer__C_5 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Chars_3, (MR_Integer) 0)));
#line 1239 "integer.m"
        mercury__integer__Cs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Chars_3, (MR_Integer) 1)));
#line 1240 "integer.m"
        mercury__integer__succeeded = (mercury__integer__C_5 == (MR_Char) 45);
#line 1243 "integer.m"
        if (mercury__integer__succeeded)
#line 1241 "integer.m"
          {
#line 1241 "integer.m"
            MR_Integer mercury__integer__V_11_11;
#line 1241 "integer.m"
            MR_Word mercury__integer__V_12_12;
#line 1241 "integer.m"
            MR_Word mercury__integer__V_13_13;
#line 1241 "integer.m"
            MR_Integer mercury__integer__V_16_16;
#line 1241 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 1241 "integer.m"
            MR_Char mercury__integer__V_7_7;
#line 1241 "integer.m"
            MR_Word mercury__integer__V_8_8;

#line 1241 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__Cs_6)) == (MR_mktag((MR_Integer) 1)));
#line 1241 "integer.m"
            if (mercury__integer__succeeded)
#line 1241 "integer.m"
              {
#line 1241 "integer.m"
                mercury__integer__V_7_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Cs_6, (MR_Integer) 0)));
#line 1241 "integer.m"
                mercury__integer__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Cs_6, (MR_Integer) 1)));
#line 1242 "integer.m"
                mercury__integer__V_11_11 = (MR_Integer) -1;
#line 1209 "integer.m"
                mercury__integer__V_16_16 = (MR_Integer) 0;
#line 1209 "integer.m"
                mercury__integer__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1209 "integer.m"
                mercury__integer__V_13_13 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1242 "integer.m"
                {
#line 1242 "integer.m"
                  mercury__integer__succeeded = mercury__integer__string_to_integer_acc_2_f_0(mercury__integer__Cs_6, mercury__integer__V_13_13, &mercury__integer__V_12_12);
                }
#line 1241 "integer.m"
                if (mercury__integer__succeeded)
#line 1241 "integer.m"
                  {
#line 1242 "integer.m"
                    {
#line 1242 "integer.m"
                      *mercury__integer__Integer_4 = mercury__integer__big_sign_2_f_0(mercury__integer__V_11_11, mercury__integer__V_12_12);
                    }
#line 1242 "integer.m"
                    mercury__integer__succeeded = MR_TRUE;
#line 1241 "integer.m"
                  }
#line 1241 "integer.m"
              }
#line 1241 "integer.m"
          }
#line 1243 "integer.m"
        else
#line 1246 "integer.m"
          {
#line 1243 "integer.m"
            mercury__integer__succeeded = (mercury__integer__C_5 == (MR_Char) 43);
#line 1246 "integer.m"
            if (mercury__integer__succeeded)
#line 1244 "integer.m"
              {
#line 1244 "integer.m"
                MR_Word mercury__integer__V_14_14;
#line 1244 "integer.m"
                MR_Integer mercury__integer__V_18_18;
#line 1244 "integer.m"
                MR_Word mercury__integer__V_19_19;
#line 1244 "integer.m"
                MR_Char mercury__integer__V_9_9;
#line 1244 "integer.m"
                MR_Word mercury__integer__V_10_10;

#line 1244 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__Cs_6)) == (MR_mktag((MR_Integer) 1)));
#line 1244 "integer.m"
                if (mercury__integer__succeeded)
#line 1244 "integer.m"
                  {
#line 1244 "integer.m"
                    mercury__integer__V_9_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Cs_6, (MR_Integer) 0)));
#line 1244 "integer.m"
                    mercury__integer__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Cs_6, (MR_Integer) 1)));
#line 1209 "integer.m"
                    mercury__integer__V_18_18 = (MR_Integer) 0;
#line 1209 "integer.m"
                    mercury__integer__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1209 "integer.m"
                    mercury__integer__V_14_14 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1245 "integer.m"
                    {
#line 1245 "integer.m"
                      return mercury__integer__succeeded = mercury__integer__string_to_integer_acc_2_f_0(mercury__integer__Cs_6, mercury__integer__V_14_14, mercury__integer__Integer_4);
                    }
#line 1244 "integer.m"
                  }
#line 1244 "integer.m"
              }
#line 1246 "integer.m"
            else
#line 1247 "integer.m"
              {
#line 1247 "integer.m"
                MR_Word mercury__integer__V_15_15 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1247 "integer.m"
                MR_Word mercury__integer__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1247 "integer.m"
                {
#line 1247 "integer.m"
                  return mercury__integer__succeeded = mercury__integer__string_to_integer_acc_2_f_0(mercury__integer__Chars_3, mercury__integer__V_15_15, mercury__integer__Integer_4);
                }
#line 1247 "integer.m"
              }
#line 1246 "integer.m"
          }
#line 1239 "integer.m"
      }
#line 1238 "integer.m"
    return mercury__integer__succeeded;
#line 1238 "integer.m"
  }
#line 1236 "integer.m"
}

#line 1193 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__int_list_2_f_0(
#line 1193 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1193 "integer.m"
  MR_Integer mercury__integer__Accum_2)
#line 1193 "integer.m"
{
#line 1195 "integer.m"
  while (MR_TRUE)
#line 1195 "integer.m"
    {
#line 1195 "integer.m"
      /* tailcall optimized into a loop */
#line 1195 "integer.m"
      {
#line 1195 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1195 "integer.m"
        MR_Integer mercury__integer__HeadVar__3_3;

#line 1195 "integer.m"
        if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1195 "integer.m"
          mercury__integer__HeadVar__3_3 = mercury__integer__Accum_2;
#line 1195 "integer.m"
        else
#line 1196 "integer.m"
          {
#line 1196 "integer.m"
            MR_Integer mercury__integer__H_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1196 "integer.m"
            MR_Word mercury__integer__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1196 "integer.m"
            MR_Integer mercury__integer__V_8_8;
#line 1196 "integer.m"
            MR_Integer mercury__integer__V_9_9 = (mercury__integer__Accum_2 * (MR_Integer) 16384);

#line 1196 "integer.m"
            mercury__integer__V_8_8 = (mercury__integer__V_9_9 + mercury__integer__H_5);
#line 1196 "integer.m"
            /* direct tailcall eliminated */
#line 1196 "integer.m"
            {
#line 1196 "integer.m"
              MR_Word mercury__integer__HeadVar__1__tmp_copy_1 = mercury__integer__T_6;
#line 1196 "integer.m"
              MR_Integer mercury__integer__Accum__tmp_copy_2 = mercury__integer__V_8_8;

#line 1196 "integer.m"
              mercury__integer__Accum_2 = mercury__integer__Accum__tmp_copy_2;
#line 1196 "integer.m"
              mercury__integer__HeadVar__1_1 = mercury__integer__HeadVar__1__tmp_copy_1;
#line 1196 "integer.m"
            }
#line 1196 "integer.m"
            continue;
#line 1196 "integer.m"
          }
#line 1195 "integer.m"
        return mercury__integer__HeadVar__3_3;
#line 1195 "integer.m"
      }
#line 1195 "integer.m"
      break;
#line 1195 "integer.m"
    }
#line 1193 "integer.m"
}

#line 1171 "integer.m"
MR_Float MR_CALL 
mercury__integer__float_list_3_f_0(
#line 1171 "integer.m"
  MR_Float mercury__integer__FBase_1,
#line 1171 "integer.m"
  MR_Float mercury__integer__Accum_2,
#line 1171 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3)
#line 1171 "integer.m"
{
#line 1173 "integer.m"
  while (MR_TRUE)
#line 1173 "integer.m"
    {
#line 1173 "integer.m"
      /* tailcall optimized into a loop */
#line 1173 "integer.m"
      {
#line 1173 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1173 "integer.m"
        MR_Float mercury__integer__HeadVar__4_4;

#line 1173 "integer.m"
        if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1173 "integer.m"
          mercury__integer__HeadVar__4_4 = mercury__integer__Accum_2;
#line 1173 "integer.m"
        else
#line 1174 "integer.m"
          {
#line 1174 "integer.m"
            MR_Integer mercury__integer__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 1174 "integer.m"
            MR_Word mercury__integer__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 1174 "integer.m"
            MR_Float mercury__integer__V_11_11;
#line 1174 "integer.m"
            MR_Float mercury__integer__V_12_12 = (mercury__integer__Accum_2 * mercury__integer__FBase_1);
#line 1174 "integer.m"
            MR_Float mercury__integer__V_13_13;

#line 48 "float.opt"
{
#define MR_PROC_LABEL mercury__integer__float_list_3_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  mercury__integer__H_9 ;
		{
#line 48 "float.opt"

    FloatVal = IntVal;

#line 3705 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_13_13  = FloatVal;
#line 48 "float.opt"
}
#line 1175 "integer.m"
            mercury__integer__V_11_11 = (mercury__integer__V_12_12 + mercury__integer__V_13_13);
#line 1175 "integer.m"
            /* direct tailcall eliminated */
#line 1175 "integer.m"
            {
#line 1175 "integer.m"
              MR_Float mercury__integer__Accum__tmp_copy_2 = mercury__integer__V_11_11;
#line 1175 "integer.m"
              MR_Word mercury__integer__HeadVar__3__tmp_copy_3 = mercury__integer__T_10;

#line 1175 "integer.m"
              mercury__integer__HeadVar__3_3 = mercury__integer__HeadVar__3__tmp_copy_3;
#line 1175 "integer.m"
              mercury__integer__Accum_2 = mercury__integer__Accum__tmp_copy_2;
#line 1175 "integer.m"
            }
#line 1175 "integer.m"
            continue;
#line 1174 "integer.m"
          }
#line 1173 "integer.m"
        return mercury__integer__HeadVar__4_4;
#line 1173 "integer.m"
      }
#line 1173 "integer.m"
      break;
#line 1173 "integer.m"
    }
#line 1171 "integer.m"
}

#line 1144 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_pow_sqmul_2_f_0(
#line 1144 "integer.m"
  MR_Word mercury__integer__A_4,
#line 1144 "integer.m"
  MR_Word mercury__integer__N_5)
#line 1144 "integer.m"
{
#line 1149 "integer.m"
  {
#line 1149 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1149 "integer.m"
    MR_Word mercury__integer__Res_6;
#line 1147 "integer.m"
    MR_Word mercury__integer__V_16_16 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1147 "integer.m"
    MR_Word mercury__integer__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1147 "integer.m"
    {
#line 1147 "integer.m"
      mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__N_5, mercury__integer__V_16_16);
    }
#line 1149 "integer.m"
    if (mercury__integer__succeeded)
#line 1211 "integer.m"
      mercury__integer__Res_6 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 1149 "integer.m"
    else
#line 1152 "integer.m"
      {
#line 1150 "integer.m"
        MR_Word mercury__integer__V_17_17 = (MR_Word) &mercury__integer_scalar_common_1[4];

#line 1150 "integer.m"
        {
#line 1150 "integer.m"
          mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__N_5, mercury__integer__V_17_17);
        }
#line 1152 "integer.m"
        if (mercury__integer__succeeded)
#line 1151 "integer.m"
          mercury__integer__Res_6 = mercury__integer__A_4;
#line 1152 "integer.m"
        else
#line 1157 "integer.m"
          {
#line 1154 "integer.m"
            MR_Word mercury__integer__V_8_8;
#line 1154 "integer.m"
            MR_Word mercury__integer__V_9_9 = (MR_Word) &mercury__integer_scalar_common_1[6];
#line 1154 "integer.m"
            MR_Word mercury__integer__V_18_18;
#line 1154 "integer.m"
            MR_Word mercury__integer__V_36_36;

#line 356 "integer.m"
            {
#line 356 "integer.m"
              mercury__integer__V_8_8 = mercury__integer__big_mod_2_f_0(mercury__integer__N_5, mercury__integer__V_9_9);
            }
#line 1209 "integer.m"
            mercury__integer__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1209 "integer.m"
            mercury__integer__V_18_18 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1154 "integer.m"
            {
#line 1154 "integer.m"
              mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__V_8_8, mercury__integer__V_18_18);
            }
#line 1157 "integer.m"
            if (mercury__integer__succeeded)
#line 1155 "integer.m"
              {
#line 1155 "integer.m"
                MR_Word mercury__integer__TRes_7;
#line 1155 "integer.m"
                MR_Word mercury__integer__V_10_10;
#line 1155 "integer.m"
                MR_Word mercury__integer__V_11_11 = (MR_Word) &mercury__integer_scalar_common_1[6];
#line 454 "integer.m"
                MR_Word mercury__integer___Rem_46;

#line 454 "integer.m"
                {
#line 454 "integer.m"
                  mercury__integer__big_quot_rem_4_p_0(mercury__integer__N_5, mercury__integer__V_11_11, &mercury__integer__V_10_10, &mercury__integer___Rem_46);
                }
#line 1155 "integer.m"
                {
#line 1155 "integer.m"
                  mercury__integer__TRes_7 = mercury__integer__big_pow_sqmul_2_f_0(mercury__integer__A_4, mercury__integer__V_10_10);
                }
#line 348 "integer.m"
                {
#line 348 "integer.m"
                  return mercury__integer__Res_6 = mercury__integer__big_mul_2_f_0(mercury__integer__TRes_7, mercury__integer__TRes_7);
                }
#line 1155 "integer.m"
              }
#line 1157 "integer.m"
            else
#line 1159 "integer.m"
              {
#line 1159 "integer.m"
                MR_Word mercury__integer__V_13_13;
#line 1159 "integer.m"
                MR_Word mercury__integer__V_14_14 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 1159 "integer.m"
                MR_Word mercury__integer__TRes_15;
#line 1159 "integer.m"
                MR_Word mercury__integer__V_55_55;
#line 1159 "integer.m"
                MR_Integer mercury__integer__S_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, (MR_Integer) 0)));
#line 1159 "integer.m"
                MR_Word mercury__integer__Digits0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, (MR_Integer) 1)));
#line 1159 "integer.m"
                MR_Word mercury__integer__Digits_58;
#line 1159 "integer.m"
                MR_Integer mercury__integer__V_59_59 = ((MR_Integer) 0 - mercury__integer__S_56);

#line 439 "integer.m"
                {
#line 439 "integer.m"
                  mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_57, &mercury__integer__Digits_58);
                }
#line 438 "integer.m"
                {
#line 438 "integer.m"
                  mercury__integer__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_55_55, 0) = ((MR_Box) (mercury__integer__V_59_59));
#line 438 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_55_55, 1) = ((MR_Box) (mercury__integer__Digits_58));
#line 438 "integer.m"
                }
#line 346 "integer.m"
                {
#line 346 "integer.m"
                  mercury__integer__V_13_13 = mercury__integer__big_plus_2_f_0(mercury__integer__N_5, mercury__integer__V_55_55);
                }
#line 1159 "integer.m"
                {
#line 1159 "integer.m"
                  mercury__integer__TRes_15 = mercury__integer__big_pow_sqmul_2_f_0(mercury__integer__A_4, mercury__integer__V_13_13);
                }
#line 348 "integer.m"
                {
#line 348 "integer.m"
                  return mercury__integer__Res_6 = mercury__integer__big_mul_2_f_0(mercury__integer__A_4, mercury__integer__TRes_15);
                }
#line 1159 "integer.m"
              }
#line 1157 "integer.m"
          }
#line 1152 "integer.m"
      }
#line 1149 "integer.m"
    return mercury__integer__Res_6;
#line 1149 "integer.m"
  }
#line 1144 "integer.m"
}

#line 1127 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_pow_2_f_0(
#line 1127 "integer.m"
  MR_Word mercury__integer__A_4,
#line 1127 "integer.m"
  MR_Word mercury__integer__N_5)
#line 1127 "integer.m"
{
#line 1129 "integer.m"
  {
#line 1129 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1129 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 1130 "integer.m"
    MR_Word mercury__integer__V_10_10 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1130 "integer.m"
    MR_Word mercury__integer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1130 "integer.m"
    {
#line 1130 "integer.m"
      mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__N_5, mercury__integer__V_10_10);
    }
#line 1129 "integer.m"
    if (mercury__integer__succeeded)
#line 1211 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 1129 "integer.m"
    else
#line 1134 "integer.m"
      {
#line 1132 "integer.m"
        MR_Word mercury__integer__V_11_11 = (MR_Word) &mercury__integer_scalar_common_1[4];

#line 1132 "integer.m"
        {
#line 1132 "integer.m"
          mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__N_5, mercury__integer__V_11_11);
        }
#line 1134 "integer.m"
        if (mercury__integer__succeeded)
#line 1133 "integer.m"
          mercury__integer__HeadVar__3_3 = mercury__integer__A_4;
#line 1134 "integer.m"
        else
#line 1136 "integer.m"
          {
#line 1134 "integer.m"
            MR_Word mercury__integer__V_12_12 = (MR_Word) &mercury__integer_scalar_common_1[4];

#line 1134 "integer.m"
            {
#line 1134 "integer.m"
              mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__A_4, mercury__integer__V_12_12);
            }
#line 1136 "integer.m"
            if (mercury__integer__succeeded)
#line 1211 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 1136 "integer.m"
            else
#line 1138 "integer.m"
              {
#line 1138 "integer.m"
                MR_Word mercury__integer__V_13_13 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1136 "integer.m"
                MR_Word mercury__integer__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1136 "integer.m"
                {
#line 1136 "integer.m"
                  mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__A_4, mercury__integer__V_13_13);
                }
#line 1138 "integer.m"
                if (mercury__integer__succeeded)
#line 1209 "integer.m"
                  mercury__integer__HeadVar__3_3 = mercury__integer__V_13_13;
#line 1138 "integer.m"
                else
#line 1140 "integer.m"
                  {
#line 1138 "integer.m"
                    MR_Word mercury__integer__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__N_5, (MR_Integer) 1)));
#line 1138 "integer.m"
                    MR_Integer mercury__integer__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__N_5, (MR_Integer) 0)));
#line 1138 "integer.m"
                    MR_Integer mercury__integer__V_7_7;
#line 1138 "integer.m"
                    MR_Word mercury__integer__V_8_8;

#line 1138 "integer.m"
                    mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 1138 "integer.m"
                    if (mercury__integer__succeeded)
#line 1138 "integer.m"
                      {
#line 1138 "integer.m"
                        mercury__integer__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, (MR_Integer) 0)));
#line 1138 "integer.m"
                        mercury__integer__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, (MR_Integer) 1)));
#line 1139 "integer.m"
                        {
#line 1139 "integer.m"
                          return mercury__integer__HeadVar__3_3 = mercury__integer__big_pow_sqmul_2_f_0(mercury__integer__A_4, mercury__integer__N_5);
                        }
#line 1138 "integer.m"
                      }
#line 1138 "integer.m"
                    else
#line 1209 "integer.m"
                      {
#line 1209 "integer.m"
                        MR_Word mercury__integer__V_37_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1209 "integer.m"
                        mercury__integer__HeadVar__3_3 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1209 "integer.m"
                      }
#line 1140 "integer.m"
                  }
#line 1138 "integer.m"
              }
#line 1136 "integer.m"
          }
#line 1134 "integer.m"
      }
#line 1129 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 1129 "integer.m"
  }
#line 1127 "integer.m"
}

#line 1112 "integer.m"
static MR_bool MR_CALL 
mercury__integer__pos_geq_2_p_0(
#line 1112 "integer.m"
  MR_Word mercury__integer__Xs_3,
#line 1112 "integer.m"
  MR_Word mercury__integer__Ys_4)
#line 1112 "integer.m"
{
#line 1114 "integer.m"
  {
#line 1114 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1114 "integer.m"
    MR_Word mercury__integer__C_5;

#line 683 "integer.m"
    {
#line 683 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__Xs_3, mercury__integer__Ys_4);
    }
#line 1117 "integer.m"
#line 1117 "integer.m"
    switch (mercury__integer__C_5) {
#line 1117 "integer.m"
      default:
#line 1117 "integer.m"
        mercury__integer__succeeded = MR_FALSE;
#line 1117 "integer.m"
        break;
#line 1117 "integer.m"
      case (MR_Integer) 0:
#line 1117 "integer.m"
        mercury__integer__succeeded = MR_TRUE;
#line 1117 "integer.m"
        break;
#line 1117 "integer.m"
      case (MR_Integer) 2:
#line 1116 "integer.m"
        mercury__integer__succeeded = MR_TRUE;
#line 1117 "integer.m"
        break;
#line 1117 "integer.m"
    }
#line 1114 "integer.m"
    return mercury__integer__succeeded;
#line 1114 "integer.m"
  }
#line 1112 "integer.m"
}

#line 1101 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_3_f_0(
#line 1101 "integer.m"
  MR_Integer mercury__integer__X_1,
#line 1101 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1101 "integer.m"
  MR_Integer mercury__integer__D_3)
#line 1101 "integer.m"
{
#line 1103 "integer.m"
  {
#line 1103 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1103 "integer.m"
    MR_Word mercury__integer__HeadVar__4_4;

#line 1103 "integer.m"
    if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1103 "integer.m"
      {
#line 1103 "integer.m"
        MR_Word mercury__integer__V_8_8;
#line 1103 "integer.m"
        MR_Integer mercury__integer__V_9_9;
#line 1103 "integer.m"
        MR_Word mercury__integer__V_10_10;

#line 1103 "integer.m"
        {
#line 1103 "integer.m"
          mercury__integer__V_9_9 = mercury__int__div_2_f_0(mercury__integer__X_1, mercury__integer__D_3);
        }
#line 1103 "integer.m"
        mercury__integer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1103 "integer.m"
        {
#line 1103 "integer.m"
          mercury__integer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_8_8, 0) = ((MR_Box) (mercury__integer__V_9_9));
#line 1103 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_8_8, 1) = ((MR_Box) (mercury__integer__V_10_10));
#line 1103 "integer.m"
        }
#line 1103 "integer.m"
        {
#line 1103 "integer.m"
          mercury__integer__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1103 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 1103 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, 1) = ((MR_Box) (mercury__integer__V_8_8));
#line 1103 "integer.m"
        }
#line 1103 "integer.m"
      }
#line 1103 "integer.m"
    else
#line 1104 "integer.m"
      {
#line 1104 "integer.m"
        MR_Integer mercury__integer__H_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 1104 "integer.m"
        MR_Word mercury__integer__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1104 "integer.m"
        MR_Integer mercury__integer__Len_15;
#line 1104 "integer.m"
        MR_Word mercury__integer__Tail_16;
#line 1104 "integer.m"
        MR_Integer mercury__integer__V_17_17;
#line 1104 "integer.m"
        MR_Word mercury__integer__V_19_19;
#line 1104 "integer.m"
        MR_Integer mercury__integer__V_20_20;
#line 1104 "integer.m"
        MR_Word mercury__integer__V_21_21;
#line 1104 "integer.m"
        MR_Integer mercury__integer__V_22_22;
#line 1104 "integer.m"
        MR_Integer mercury__integer__V_23_23;
#line 1104 "integer.m"
        MR_Integer mercury__integer__V_24_24;

#line 1104 "integer.m"
        {
#line 1104 "integer.m"
          mercury__integer__V_20_20 = mercury__int__div_2_f_0(mercury__integer__X_1, mercury__integer__D_3);
        }
#line 195 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__div_by_digit_2_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 195 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 4201 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 195 "int.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 356 "int.opt"
        if (mercury__integer__succeeded)
#line 357 "int.opt"
          mercury__integer__succeeded = (mercury__integer__D_3 == (MR_Integer) 0);
#line 362 "int.opt"
        if (mercury__integer__succeeded)
#line 359 "int.opt"
          {
#line 359 "int.opt"
            MR_Word mercury__integer__TypeCtorInfo_9_31 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 359 "int.opt"
            MR_Word mercury__integer__V_7_29 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

#line 361 "int.opt"
            {
#line 361 "int.opt"
              mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_31, ((MR_Box) (mercury__integer__V_7_29)));
            }
#line 359 "int.opt"
          }
#line 362 "int.opt"
        else
#line 363 "int.opt"
          mercury__integer__V_24_24 = (mercury__integer__X_1 % mercury__integer__D_3);
#line 1105 "integer.m"
        mercury__integer__V_23_23 = (mercury__integer__V_24_24 * (MR_Integer) 16384);
#line 1105 "integer.m"
        mercury__integer__V_22_22 = (mercury__integer__V_23_23 + mercury__integer__H_12);
#line 1105 "integer.m"
        {
#line 1105 "integer.m"
          mercury__integer__V_21_21 = mercury__integer__div_by_digit_2_3_f_0(mercury__integer__V_22_22, mercury__integer__T_13, mercury__integer__D_3);
        }
#line 1105 "integer.m"
        mercury__integer__Len_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_21_21, (MR_Integer) 0)));
#line 1105 "integer.m"
        mercury__integer__Tail_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_21_21, (MR_Integer) 1)));
#line 1104 "integer.m"
        mercury__integer__V_17_17 = (mercury__integer__Len_15 + (MR_Integer) 1);
#line 1104 "integer.m"
        {
#line 1104 "integer.m"
          mercury__integer__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 1104 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__Tail_16));
#line 1104 "integer.m"
        }
#line 1104 "integer.m"
        {
#line 1104 "integer.m"
          mercury__integer__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1104 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, 0) = ((MR_Box) (mercury__integer__V_17_17));
#line 1104 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, 1) = ((MR_Box) (mercury__integer__V_19_19));
#line 1104 "integer.m"
        }
#line 1104 "integer.m"
      }
#line 1103 "integer.m"
    return mercury__integer__HeadVar__4_4;
#line 1103 "integer.m"
  }
#line 1101 "integer.m"
}

#line 1088 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_1_3_f_0(
#line 1088 "integer.m"
  MR_Integer mercury__integer__X_1,
#line 1088 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 1088 "integer.m"
  MR_Integer mercury__integer__D_3)
#line 1088 "integer.m"
{
#line 1090 "integer.m"
  while (MR_TRUE)
#line 1090 "integer.m"
    {
#line 1090 "integer.m"
      /* tailcall optimized into a loop */
#line 1090 "integer.m"
      {
#line 1090 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 1090 "integer.m"
        MR_Word mercury__integer__Integer_4;

#line 1090 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1090 "integer.m"
          {
#line 1090 "integer.m"
            MR_Integer mercury__integer__Q_7;

#line 1091 "integer.m"
            {
#line 1091 "integer.m"
              mercury__integer__Q_7 = mercury__int__div_2_f_0(mercury__integer__X_1, mercury__integer__D_3);
            }
#line 1090 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Q_7 == (MR_Integer) 0);
#line 1090 "integer.m"
            if (mercury__integer__succeeded)
#line 1209 "integer.m"
              {
#line 1209 "integer.m"
                MR_Word mercury__integer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1209 "integer.m"
                mercury__integer__Integer_4 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1209 "integer.m"
              }
#line 1090 "integer.m"
            else
#line 1090 "integer.m"
              {
#line 1090 "integer.m"
                MR_Word mercury__integer__V_9_9;
#line 1090 "integer.m"
                MR_Word mercury__integer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1090 "integer.m"
                {
#line 1090 "integer.m"
                  mercury__integer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1090 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, 0) = ((MR_Box) (mercury__integer__Q_7));
#line 1090 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, 1) = ((MR_Box) (mercury__integer__V_10_10));
#line 1090 "integer.m"
                }
#line 1090 "integer.m"
                {
#line 1090 "integer.m"
                  mercury__integer__Integer_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1090 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 1090 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 1) = ((MR_Box) (mercury__integer__V_9_9));
#line 1090 "integer.m"
                }
#line 1090 "integer.m"
              }
#line 1090 "integer.m"
          }
#line 1090 "integer.m"
        else
#line 1092 "integer.m"
          {
#line 1092 "integer.m"
            MR_Integer mercury__integer__H_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 1092 "integer.m"
            MR_Word mercury__integer__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1092 "integer.m"
            MR_Integer mercury__integer__Q_16;

#line 1093 "integer.m"
            {
#line 1093 "integer.m"
              mercury__integer__Q_16 = mercury__int__div_2_f_0(mercury__integer__X_1, mercury__integer__D_3);
            }
#line 1094 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Q_16 == (MR_Integer) 0);
#line 1096 "integer.m"
            if (mercury__integer__succeeded)
#line 1095 "integer.m"
              {
#line 1095 "integer.m"
                MR_Integer mercury__integer__V_19_19;
#line 1095 "integer.m"
                MR_Integer mercury__integer__V_20_20;
#line 1095 "integer.m"
                MR_Integer mercury__integer__V_21_21;

#line 195 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__div_by_digit_1_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 195 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 4404 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 195 "int.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 356 "int.opt"
                if (mercury__integer__succeeded)
#line 357 "int.opt"
                  mercury__integer__succeeded = (mercury__integer__D_3 == (MR_Integer) 0);
#line 362 "int.opt"
                if (mercury__integer__succeeded)
#line 359 "int.opt"
                  {
#line 359 "int.opt"
                    MR_Word mercury__integer__TypeCtorInfo_9_38 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 359 "int.opt"
                    MR_Word mercury__integer__V_7_36 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

#line 361 "int.opt"
                    {
#line 361 "int.opt"
                      mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_38, ((MR_Box) (mercury__integer__V_7_36)));
                    }
#line 359 "int.opt"
                  }
#line 362 "int.opt"
                else
#line 363 "int.opt"
                  mercury__integer__V_21_21 = (mercury__integer__X_1 % mercury__integer__D_3);
#line 1095 "integer.m"
                mercury__integer__V_20_20 = (mercury__integer__V_21_21 * (MR_Integer) 16384);
#line 1095 "integer.m"
                mercury__integer__V_19_19 = (mercury__integer__V_20_20 + mercury__integer__H_12);
#line 1095 "integer.m"
                /* direct tailcall eliminated */
#line 1095 "integer.m"
                {
#line 1095 "integer.m"
                  MR_Integer mercury__integer__X__tmp_copy_1 = mercury__integer__V_19_19;
#line 1095 "integer.m"
                  MR_Word mercury__integer__HeadVar__2__tmp_copy_2 = mercury__integer__T_13;

#line 1095 "integer.m"
                  mercury__integer__HeadVar__2_2 = mercury__integer__HeadVar__2__tmp_copy_2;
#line 1095 "integer.m"
                  mercury__integer__X_1 = mercury__integer__X__tmp_copy_1;
#line 1095 "integer.m"
                }
#line 1095 "integer.m"
                continue;
#line 1095 "integer.m"
              }
#line 1096 "integer.m"
            else
#line 1097 "integer.m"
              {
#line 1097 "integer.m"
                MR_Integer mercury__integer__L_17;
#line 1097 "integer.m"
                MR_Word mercury__integer__Ds_18;
#line 1097 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 1097 "integer.m"
                MR_Integer mercury__integer__V_24_24;
#line 1097 "integer.m"
                MR_Integer mercury__integer__V_25_25;
#line 1097 "integer.m"
                MR_Integer mercury__integer__V_26_26;
#line 1097 "integer.m"
                MR_Integer mercury__integer__V_28_28;
#line 1097 "integer.m"
                MR_Word mercury__integer__V_30_30;

#line 195 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__div_by_digit_1_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 195 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 4496 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 195 "int.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 356 "int.opt"
                if (mercury__integer__succeeded)
#line 357 "int.opt"
                  mercury__integer__succeeded = (mercury__integer__D_3 == (MR_Integer) 0);
#line 362 "int.opt"
                if (mercury__integer__succeeded)
#line 359 "int.opt"
                  {
#line 359 "int.opt"
                    MR_Word mercury__integer__TypeCtorInfo_9_44 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 359 "int.opt"
                    MR_Word mercury__integer__V_7_42 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

#line 361 "int.opt"
                    {
#line 361 "int.opt"
                      mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_44, ((MR_Box) (mercury__integer__V_7_42)));
                    }
#line 359 "int.opt"
                  }
#line 362 "int.opt"
                else
#line 363 "int.opt"
                  mercury__integer__V_26_26 = (mercury__integer__X_1 % mercury__integer__D_3);
#line 1097 "integer.m"
                mercury__integer__V_25_25 = (mercury__integer__V_26_26 * (MR_Integer) 16384);
#line 1097 "integer.m"
                mercury__integer__V_24_24 = (mercury__integer__V_25_25 + mercury__integer__H_12);
#line 1097 "integer.m"
                {
#line 1097 "integer.m"
                  mercury__integer__V_23_23 = mercury__integer__div_by_digit_2_3_f_0(mercury__integer__V_24_24, mercury__integer__T_13, mercury__integer__D_3);
                }
#line 1097 "integer.m"
                mercury__integer__L_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 0)));
#line 1097 "integer.m"
                mercury__integer__Ds_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 1)));
#line 1098 "integer.m"
                mercury__integer__V_28_28 = (mercury__integer__L_17 + (MR_Integer) 1);
#line 1098 "integer.m"
                {
#line 1098 "integer.m"
                  mercury__integer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1098 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_30_30, 0) = ((MR_Box) (mercury__integer__Q_16));
#line 1098 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_30_30, 1) = ((MR_Box) (mercury__integer__Ds_18));
#line 1098 "integer.m"
                }
#line 1098 "integer.m"
                {
#line 1098 "integer.m"
                  mercury__integer__Integer_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1098 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 0) = ((MR_Box) (mercury__integer__V_28_28));
#line 1098 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 1) = ((MR_Box) (mercury__integer__V_30_30));
#line 1098 "integer.m"
                }
#line 1097 "integer.m"
              }
#line 1092 "integer.m"
          }
#line 1090 "integer.m"
        return mercury__integer__Integer_4;
#line 1090 "integer.m"
      }
#line 1090 "integer.m"
      break;
#line 1090 "integer.m"
    }
#line 1088 "integer.m"
}

#line 1083 "integer.m"
static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_f_0(
#line 1083 "integer.m"
  MR_Integer mercury__integer__Digit_1,
#line 1083 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 1083 "integer.m"
{
#line 1085 "integer.m"
  {
#line 1085 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1085 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 1085 "integer.m"
    MR_Word mercury__integer__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1085 "integer.m"
    MR_Integer mercury__integer__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));

#line 1085 "integer.m"
    if ((mercury__integer__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1209 "integer.m"
      {
#line 1209 "integer.m"
        MR_Word mercury__integer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1209 "integer.m"
        mercury__integer__HeadVar__3_3 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1209 "integer.m"
      }
#line 1085 "integer.m"
    else
#line 1086 "integer.m"
      {
#line 1086 "integer.m"
        MR_Integer mercury__integer__X_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_12_12, (MR_Integer) 0)));
#line 1086 "integer.m"
        MR_Word mercury__integer__Xs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_12_12, (MR_Integer) 1)));

#line 1086 "integer.m"
        {
#line 1086 "integer.m"
          return mercury__integer__HeadVar__3_3 = mercury__integer__div_by_digit_1_3_f_0(mercury__integer__X_9, mercury__integer__Xs_10, mercury__integer__Digit_1);
        }
#line 1086 "integer.m"
      }
#line 1085 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 1085 "integer.m"
  }
#line 1083 "integer.m"
}

#line 1079 "integer.m"
static MR_Word MR_CALL 
mercury__integer__integer_prepend_2_f_0(
#line 1079 "integer.m"
  MR_Integer mercury__integer__Digit_4,
#line 1079 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 1079 "integer.m"
{
#line 1081 "integer.m"
  {
#line 1081 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1081 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 1081 "integer.m"
    MR_Integer mercury__integer__L_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 1081 "integer.m"
    MR_Word mercury__integer__List_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 1081 "integer.m"
    MR_Integer mercury__integer__V_7_7 = (mercury__integer__L_5 + (MR_Integer) 1);
#line 1081 "integer.m"
    MR_Word mercury__integer__V_9_9;

#line 1081 "integer.m"
    {
#line 1081 "integer.m"
      mercury__integer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "integer.m"
      MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, 0) = ((MR_Box) (mercury__integer__Digit_4));
#line 1081 "integer.m"
      MR_hl_field(MR_mktag(1), mercury__integer__V_9_9, 1) = ((MR_Box) (mercury__integer__List_6));
#line 1081 "integer.m"
    }
#line 1081 "integer.m"
    {
#line 1081 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1081 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_7_7));
#line 1081 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_9_9));
#line 1081 "integer.m"
    }
#line 1081 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 1081 "integer.m"
  }
#line 1079 "integer.m"
}

#line 1074 "integer.m"
static MR_Word MR_CALL 
mercury__integer__integer_append_2_f_0(
#line 1074 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 1074 "integer.m"
  MR_Integer mercury__integer__Digit_6)
#line 1074 "integer.m"
{
#line 1076 "integer.m"
  {
#line 1076 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1076 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 1076 "integer.m"
    MR_Word mercury__integer__TypeCtorInfo_12_12;
#line 1076 "integer.m"
    MR_Integer mercury__integer__L_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1076 "integer.m"
    MR_Word mercury__integer__List_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1076 "integer.m"
    MR_Word mercury__integer__NewList_7;
#line 1076 "integer.m"
    MR_Integer mercury__integer__V_8_8 = (mercury__integer__L_4 + (MR_Integer) 1);
#line 1076 "integer.m"
    MR_Word mercury__integer__V_10_10;
#line 1076 "integer.m"
    MR_Word mercury__integer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1077 "integer.m"
    {
#line 1077 "integer.m"
      mercury__integer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1077 "integer.m"
      MR_hl_field(MR_mktag(1), mercury__integer__V_10_10, 0) = ((MR_Box) (mercury__integer__Digit_6));
#line 1077 "integer.m"
      MR_hl_field(MR_mktag(1), mercury__integer__V_10_10, 1) = ((MR_Box) (mercury__integer__V_11_11));
#line 1077 "integer.m"
    }
#line 4724 "integer.c"
    mercury__integer__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1077 "integer.m"
    {
#line 1077 "integer.m"
      mercury__list__append_3_p_1(mercury__integer__TypeCtorInfo_12_12, mercury__integer__List_5, mercury__integer__V_10_10, &mercury__integer__NewList_7);
    }
#line 1076 "integer.m"
    {
#line 1076 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1076 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_8_8));
#line 1076 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__NewList_7));
#line 1076 "integer.m"
    }
#line 1076 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 1076 "integer.m"
  }
#line 1074 "integer.m"
}

#line 1063 "integer.m"
static MR_Word MR_CALL 
mercury__integer__det_tail_1_f_0(
#line 1063 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 1063 "integer.m"
{
#line 1065 "integer.m"
  {
#line 1065 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1065 "integer.m"
    MR_Word mercury__integer__I_5;
#line 1065 "integer.m"
    MR_Integer mercury__integer__Len_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1065 "integer.m"
    MR_Word mercury__integer__Digits_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

#line 1069 "integer.m"
    if ((mercury__integer__Digits_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1067 "integer.m"
      {
#line 1068 "integer.m"
        {
#line 1068 "integer.m"
          mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_tail\'/1", (MR_String) "empty list");
        }
#line 1067 "integer.m"
      }
#line 1069 "integer.m"
    else
#line 1070 "integer.m"
      {
#line 1070 "integer.m"
        MR_Word mercury__integer__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 1)));
#line 1070 "integer.m"
        MR_Integer mercury__integer__V_8_8 = (mercury__integer__Len_3 - (MR_Integer) 1);
#line 1070 "integer.m"
        MR_Integer mercury__integer__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 0)));

#line 1071 "integer.m"
        {
#line 1071 "integer.m"
          mercury__integer__I_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__I_5, 0) = ((MR_Box) (mercury__integer__V_8_8));
#line 1071 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__I_5, 1) = ((MR_Box) (mercury__integer__T_7));
#line 1071 "integer.m"
        }
#line 1070 "integer.m"
      }
#line 1065 "integer.m"
    return mercury__integer__I_5;
#line 1065 "integer.m"
  }
#line 1063 "integer.m"
}

#line 1050 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__det_second_1_f_0(
#line 1050 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 1050 "integer.m"
{
#line 1052 "integer.m"
  {
#line 1052 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1052 "integer.m"
    MR_Integer mercury__integer__Second_5;
#line 1052 "integer.m"
    MR_Word mercury__integer__Digits_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1052 "integer.m"
    MR_Integer mercury__integer__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 1056 "integer.m"
    if ((mercury__integer__Digits_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1054 "integer.m"
      {
#line 1055 "integer.m"
        {
#line 1055 "integer.m"
          mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_second\'/1", (MR_String) "empty list");
        }
#line 1054 "integer.m"
      }
#line 1056 "integer.m"
    else
#line 1056 "integer.m"
      {
#line 1056 "integer.m"
        MR_Word mercury__integer__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 1)));
#line 1057 "integer.m"
        MR_Integer mercury__integer__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 0)));

#line 1056 "integer.m"
        if ((mercury__integer__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1057 "integer.m"
          {
#line 1058 "integer.m"
            {
#line 1058 "integer.m"
              mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_second\'/1", (MR_String) "short list");
            }
#line 1057 "integer.m"
          }
#line 1056 "integer.m"
        else
#line 1060 "integer.m"
          {
#line 1060 "integer.m"
            MR_Word mercury__integer__V_8_8;

#line 1060 "integer.m"
            mercury__integer__Second_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 1060 "integer.m"
            mercury__integer__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 1060 "integer.m"
          }
#line 1056 "integer.m"
      }
#line 1052 "integer.m"
    return mercury__integer__Second_5;
#line 1052 "integer.m"
  }
#line 1050 "integer.m"
}

#line 1040 "integer.m"
static MR_Integer MR_CALL 
mercury__integer__det_first_1_f_0(
#line 1040 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 1040 "integer.m"
{
#line 1042 "integer.m"
  {
#line 1042 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1042 "integer.m"
    MR_Integer mercury__integer__First_5;
#line 1042 "integer.m"
    MR_Word mercury__integer__Digits_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1042 "integer.m"
    MR_Integer mercury__integer__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 1046 "integer.m"
    if ((mercury__integer__Digits_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1044 "integer.m"
      {
#line 1045 "integer.m"
        {
#line 1045 "integer.m"
          mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_first\'/1", (MR_String) "empty list");
        }
#line 1044 "integer.m"
      }
#line 1046 "integer.m"
    else
#line 1047 "integer.m"
      {
#line 1047 "integer.m"
        MR_Word mercury__integer__V_6_6;

#line 1047 "integer.m"
        mercury__integer__First_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 0)));
#line 1047 "integer.m"
        mercury__integer__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 1)));
#line 1047 "integer.m"
      }
#line 1042 "integer.m"
    return mercury__integer__First_5;
#line 1042 "integer.m"
  }
#line 1040 "integer.m"
}

#line 1035 "integer.m"
static MR_Word MR_CALL 
mercury__integer__decap_1_f_0(
#line 1035 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
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
        MR_Word mercury__integer__HeadVar__2_2;
#line 1037 "integer.m"
        MR_Word mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1037 "integer.m"
        MR_Integer mercury__integer__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 1037 "integer.m"
        if ((mercury__integer__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1209 "integer.m"
          {
#line 1209 "integer.m"
            MR_Word mercury__integer__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1209 "integer.m"
            mercury__integer__HeadVar__2_2 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1209 "integer.m"
          }
#line 1037 "integer.m"
        else
#line 1038 "integer.m"
          {
#line 1038 "integer.m"
            MR_Integer mercury__integer__H_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_13_13, (MR_Integer) 0)));
#line 1038 "integer.m"
            MR_Word mercury__integer__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_13_13, (MR_Integer) 1)));

#line 1038 "integer.m"
            mercury__integer__succeeded = (mercury__integer__H_6 == (MR_Integer) 0);
#line 1038 "integer.m"
            if (mercury__integer__succeeded)
#line 1038 "integer.m"
              {
#line 1038 "integer.m"
                MR_Word mercury__integer__V_9_9;
#line 1038 "integer.m"
                MR_Integer mercury__integer__V_10_10 = (mercury__integer__V_14_14 - (MR_Integer) 1);

#line 1038 "integer.m"
                {
#line 1038 "integer.m"
                  mercury__integer__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 0) = ((MR_Box) (mercury__integer__V_10_10));
#line 1038 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 1) = ((MR_Box) (mercury__integer__T_7));
#line 1038 "integer.m"
                }
#line 1038 "integer.m"
                /* direct tailcall eliminated */
#line 1038 "integer.m"
                {
#line 1038 "integer.m"
                  MR_Word mercury__integer__HeadVar__1__tmp_copy_1 = mercury__integer__V_9_9;

#line 1038 "integer.m"
                  mercury__integer__HeadVar__1_1 = mercury__integer__HeadVar__1__tmp_copy_1;
#line 1038 "integer.m"
                }
#line 1038 "integer.m"
                continue;
#line 1038 "integer.m"
              }
#line 1038 "integer.m"
            else
#line 1038 "integer.m"
              mercury__integer__HeadVar__2_2 = mercury__integer__HeadVar__1_1;
#line 1038 "integer.m"
          }
#line 1037 "integer.m"
        return mercury__integer__HeadVar__2_2;
#line 1037 "integer.m"
      }
#line 1037 "integer.m"
      break;
#line 1037 "integer.m"
    }
#line 1035 "integer.m"
}

#line 985 "integer.m"
static void MR_CALL 
mercury__integer__quot_rem_2_5_p_0(
#line 985 "integer.m"
  MR_Word mercury__integer__Ur_6,
#line 985 "integer.m"
  MR_Word mercury__integer__U_7,
#line 985 "integer.m"
  MR_Word mercury__integer__V_8,
#line 985 "integer.m"
  MR_Word * mercury__integer__Quot_9,
#line 985 "integer.m"
  MR_Word * mercury__integer__Rem_10)
#line 985 "integer.m"
{
#line 999 "integer.m"
  {
#line 999 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1109 "integer.m"
    MR_Word mercury__integer__V_61_61;

#line 683 "integer.m"
    {
#line 683 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__V_61_61, mercury__integer__Ur_6, mercury__integer__V_8);
    }
#line 1110 "integer.m"
    mercury__integer__succeeded = ((MR_Integer) 1 == mercury__integer__V_61_61);
#line 999 "integer.m"
    if (mercury__integer__succeeded)
#line 995 "integer.m"
      {
#line 995 "integer.m"
        MR_Integer mercury__integer__Ua_12;
#line 990 "integer.m"
        MR_Word mercury__integer__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 1)));
#line 990 "integer.m"
        MR_Integer mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 0)));
#line 990 "integer.m"
        MR_Word mercury__integer__V_13_13;

#line 990 "integer.m"
        mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 990 "integer.m"
        if (mercury__integer__succeeded)
#line 990 "integer.m"
          {
#line 990 "integer.m"
            mercury__integer__Ua_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_24_24, (MR_Integer) 0)));
#line 990 "integer.m"
            mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_24_24, (MR_Integer) 1)));
#line 992 "integer.m"
            {
#line 992 "integer.m"
              MR_Word mercury__integer__TypeCtorInfo_12_74;
#line 992 "integer.m"
              MR_Word mercury__integer__Quot0_14;
#line 992 "integer.m"
              MR_Word mercury__integer__V_25_25;
#line 992 "integer.m"
              MR_Word mercury__integer__V_26_26;
#line 992 "integer.m"
              MR_Integer mercury__integer__L_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Ur_6, (MR_Integer) 0)));
#line 992 "integer.m"
              MR_Word mercury__integer__List_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Ur_6, (MR_Integer) 1)));
#line 992 "integer.m"
              MR_Word mercury__integer__NewList_69;
#line 992 "integer.m"
              MR_Integer mercury__integer__V_70_70 = (mercury__integer__L_67 + (MR_Integer) 1);
#line 992 "integer.m"
              MR_Word mercury__integer__V_72_72;
#line 992 "integer.m"
              MR_Word mercury__integer__V_73_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 992 "integer.m"
              MR_Integer mercury__integer__Len_76;
#line 992 "integer.m"
              MR_Word mercury__integer__Digits_77;
#line 992 "integer.m"
              MR_Integer mercury__integer__L_86;
#line 992 "integer.m"
              MR_Word mercury__integer__List_87;
#line 992 "integer.m"
              MR_Integer mercury__integer__V_88_88;
#line 992 "integer.m"
              MR_Word mercury__integer__V_90_90;

#line 1077 "integer.m"
              {
#line 1077 "integer.m"
                mercury__integer__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1077 "integer.m"
                MR_hl_field(MR_mktag(1), mercury__integer__V_72_72, 0) = ((MR_Box) (mercury__integer__Ua_12));
#line 1077 "integer.m"
                MR_hl_field(MR_mktag(1), mercury__integer__V_72_72, 1) = ((MR_Box) (mercury__integer__V_73_73));
#line 1077 "integer.m"
              }
#line 5121 "integer.c"
              mercury__integer__TypeCtorInfo_12_74 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1077 "integer.m"
              {
#line 1077 "integer.m"
                mercury__list__append_3_p_1(mercury__integer__TypeCtorInfo_12_74, mercury__integer__List_68, mercury__integer__V_72_72, &mercury__integer__NewList_69);
              }
#line 1076 "integer.m"
              {
#line 1076 "integer.m"
                mercury__integer__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1076 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_25_25, 0) = ((MR_Box) (mercury__integer__V_70_70));
#line 1076 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_25_25, 1) = ((MR_Box) (mercury__integer__NewList_69));
#line 1076 "integer.m"
              }
#line 1065 "integer.m"
              mercury__integer__Len_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 0)));
#line 1065 "integer.m"
              mercury__integer__Digits_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 1)));
#line 1069 "integer.m"
              if ((mercury__integer__Digits_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1067 "integer.m"
                {
#line 1068 "integer.m"
                  {
#line 1068 "integer.m"
                    mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_tail\'/1", (MR_String) "empty list");
#line 1068 "integer.m"
                    return;
                  }
#line 1067 "integer.m"
                }
#line 1069 "integer.m"
              else
#line 1070 "integer.m"
                {
#line 1070 "integer.m"
                  MR_Word mercury__integer__T_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_77, (MR_Integer) 1)));
#line 1070 "integer.m"
                  MR_Integer mercury__integer__V_80_80 = (mercury__integer__Len_76 - (MR_Integer) 1);
#line 1070 "integer.m"
                  MR_Integer mercury__integer__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_77, (MR_Integer) 0)));

#line 1071 "integer.m"
                  {
#line 1071 "integer.m"
                    mercury__integer__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_26_26, 0) = ((MR_Box) (mercury__integer__V_80_80));
#line 1071 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_26_26, 1) = ((MR_Box) (mercury__integer__T_79));
#line 1071 "integer.m"
                  }
#line 1070 "integer.m"
                }
#line 991 "integer.m"
              {
#line 991 "integer.m"
                mercury__integer__quot_rem_2_5_p_0(mercury__integer__V_25_25, mercury__integer__V_26_26, mercury__integer__V_8, &mercury__integer__Quot0_14, mercury__integer__Rem_10);
              }
#line 1081 "integer.m"
              mercury__integer__L_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Quot0_14, (MR_Integer) 0)));
#line 1081 "integer.m"
              mercury__integer__List_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Quot0_14, (MR_Integer) 1)));
#line 1081 "integer.m"
              mercury__integer__V_88_88 = (mercury__integer__L_86 + (MR_Integer) 1);
#line 1081 "integer.m"
              {
#line 1081 "integer.m"
                mercury__integer__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "integer.m"
                MR_hl_field(MR_mktag(1), mercury__integer__V_90_90, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1081 "integer.m"
                MR_hl_field(MR_mktag(1), mercury__integer__V_90_90, 1) = ((MR_Box) (mercury__integer__List_87));
#line 1081 "integer.m"
              }
#line 1081 "integer.m"
              {
#line 1081 "integer.m"
                MR_Word base;
#line 1081 "integer.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1081 "integer.m"
                *mercury__integer__Quot_9 = base;
#line 1081 "integer.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__integer__V_88_88));
#line 1081 "integer.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_90_90));
#line 1081 "integer.m"
              }
#line 992 "integer.m"
            }
#line 990 "integer.m"
          }
#line 990 "integer.m"
        else
#line 996 "integer.m"
          {
#line 996 "integer.m"
            *mercury__integer__Quot_9 = (MR_Word) &mercury__integer_scalar_common_1[10];
#line 997 "integer.m"
            *mercury__integer__Rem_10 = mercury__integer__Ur_6;
#line 996 "integer.m"
          }
#line 995 "integer.m"
      }
#line 999 "integer.m"
    else
#line 1004 "integer.m"
      {
#line 1004 "integer.m"
        MR_Integer mercury__integer__Qhat_16;
#line 1004 "integer.m"
        MR_Word mercury__integer__QhatByV_17;
#line 1004 "integer.m"
        MR_Integer mercury__integer__Q_18;
#line 1004 "integer.m"
        MR_Word mercury__integer__QByV_19;
#line 1004 "integer.m"
        MR_Word mercury__integer__NewUr_21;
#line 1000 "integer.m"
        MR_Integer mercury__integer__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Ur_6, (MR_Integer) 0)));
#line 1000 "integer.m"
        MR_Integer mercury__integer__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_8, (MR_Integer) 0)));
#line 1033 "integer.m"
        MR_Word mercury__integer__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Ur_6, (MR_Integer) 1)));
#line 1033 "integer.m"
        MR_Word mercury__integer__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_8, (MR_Integer) 1)));
#line 1025 "integer.m"
        MR_Integer mercury__integer__Ua_52;
#line 1020 "integer.m"
        MR_Word mercury__integer__V_44_44;
#line 1020 "integer.m"
        MR_Integer mercury__integer__V_22_22;
#line 1020 "integer.m"
        MR_Word mercury__integer__V_23_23;

#line 1000 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_32_32 > mercury__integer__V_33_33);
#line 1002 "integer.m"
        if (mercury__integer__succeeded)
#line 1001 "integer.m"
          {
#line 1001 "integer.m"
            MR_Integer mercury__integer__V_34_34;
#line 1001 "integer.m"
            MR_Integer mercury__integer__V_35_35;
#line 1001 "integer.m"
            MR_Integer mercury__integer__V_36_36;
#line 1001 "integer.m"
            MR_Integer mercury__integer__V_38_38;
#line 1001 "integer.m"
            MR_Integer mercury__integer__V_39_39;

#line 1001 "integer.m"
            {
#line 1001 "integer.m"
              mercury__integer__V_36_36 = mercury__integer__det_first_1_f_0(mercury__integer__Ur_6);
            }
#line 1001 "integer.m"
            mercury__integer__V_35_35 = (mercury__integer__V_36_36 * (MR_Integer) 16384);
#line 1001 "integer.m"
            {
#line 1001 "integer.m"
              mercury__integer__V_38_38 = mercury__integer__det_second_1_f_0(mercury__integer__Ur_6);
            }
#line 1001 "integer.m"
            mercury__integer__V_34_34 = (mercury__integer__V_35_35 + mercury__integer__V_38_38);
#line 1001 "integer.m"
            {
#line 1001 "integer.m"
              mercury__integer__V_39_39 = mercury__integer__det_first_1_f_0(mercury__integer__V_8);
            }
#line 1001 "integer.m"
            {
#line 1001 "integer.m"
              mercury__integer__Qhat_16 = mercury__int__div_2_f_0(mercury__integer__V_34_34, mercury__integer__V_39_39);
            }
#line 1001 "integer.m"
          }
#line 1002 "integer.m"
        else
#line 1003 "integer.m"
          {
#line 1003 "integer.m"
            MR_Integer mercury__integer__V_40_40;
#line 1003 "integer.m"
            MR_Integer mercury__integer__V_41_41;

#line 1003 "integer.m"
            {
#line 1003 "integer.m"
              mercury__integer__V_40_40 = mercury__integer__det_first_1_f_0(mercury__integer__Ur_6);
            }
#line 1003 "integer.m"
            {
#line 1003 "integer.m"
              mercury__integer__V_41_41 = mercury__integer__det_first_1_f_0(mercury__integer__V_8);
            }
#line 1003 "integer.m"
            {
#line 1003 "integer.m"
              mercury__integer__Qhat_16 = mercury__int__div_2_f_0(mercury__integer__V_40_40, mercury__integer__V_41_41);
            }
#line 1003 "integer.m"
          }
#line 1005 "integer.m"
        {
#line 1005 "integer.m"
          mercury__integer__QhatByV_17 = mercury__integer__mul_by_digit_2_f_0(mercury__integer__Qhat_16, mercury__integer__V_8);
        }
#line 1006 "integer.m"
        {
#line 1006 "integer.m"
          mercury__integer__succeeded = mercury__integer__pos_geq_2_p_0(mercury__integer__Ur_6, mercury__integer__QhatByV_17);
        }
#line 1009 "integer.m"
        if (mercury__integer__succeeded)
#line 1007 "integer.m"
          {
#line 1007 "integer.m"
            mercury__integer__Q_18 = mercury__integer__Qhat_16;
#line 1008 "integer.m"
            mercury__integer__QByV_19 = mercury__integer__QhatByV_17;
#line 1007 "integer.m"
          }
#line 1009 "integer.m"
        else
#line 1010 "integer.m"
          {
#line 1010 "integer.m"
            MR_Word mercury__integer__QhatMinus1ByV_20;

#line 1010 "integer.m"
            {
#line 1010 "integer.m"
              mercury__integer__QhatMinus1ByV_20 = mercury__integer__pos_minus_2_f_0(mercury__integer__QhatByV_17, mercury__integer__V_8);
            }
#line 1011 "integer.m"
            {
#line 1011 "integer.m"
              mercury__integer__succeeded = mercury__integer__pos_geq_2_p_0(mercury__integer__Ur_6, mercury__integer__QhatMinus1ByV_20);
            }
#line 1014 "integer.m"
            if (mercury__integer__succeeded)
#line 1012 "integer.m"
              {
#line 1012 "integer.m"
                mercury__integer__Q_18 = (mercury__integer__Qhat_16 - (MR_Integer) 1);
#line 1013 "integer.m"
                mercury__integer__QByV_19 = mercury__integer__QhatMinus1ByV_20;
#line 1012 "integer.m"
              }
#line 1014 "integer.m"
            else
#line 1015 "integer.m"
              {
#line 1015 "integer.m"
                mercury__integer__Q_18 = (mercury__integer__Qhat_16 - (MR_Integer) 2);
#line 1016 "integer.m"
                {
#line 1016 "integer.m"
                  mercury__integer__QByV_19 = mercury__integer__pos_minus_2_f_0(mercury__integer__QhatMinus1ByV_20, mercury__integer__V_8);
                }
#line 1015 "integer.m"
              }
#line 1010 "integer.m"
          }
#line 1019 "integer.m"
        {
#line 1019 "integer.m"
          mercury__integer__NewUr_21 = mercury__integer__pos_minus_2_f_0(mercury__integer__Ur_6, mercury__integer__QByV_19);
        }
#line 1020 "integer.m"
        mercury__integer__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 0)));
#line 1020 "integer.m"
        mercury__integer__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 1)));
#line 1020 "integer.m"
        mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 1020 "integer.m"
        if (mercury__integer__succeeded)
#line 1020 "integer.m"
          {
#line 1020 "integer.m"
            mercury__integer__Ua_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_44_44, (MR_Integer) 0)));
#line 1020 "integer.m"
            mercury__integer__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_44_44, (MR_Integer) 1)));
#line 1022 "integer.m"
            {
#line 1022 "integer.m"
              MR_Word mercury__integer__V_45_45;
#line 1022 "integer.m"
              MR_Word mercury__integer__V_46_46;
#line 1022 "integer.m"
              MR_Word mercury__integer__Quot0_50;

#line 1021 "integer.m"
              {
#line 1021 "integer.m"
                mercury__integer__V_45_45 = mercury__integer__integer_append_2_f_0(mercury__integer__NewUr_21, mercury__integer__Ua_52);
              }
#line 1021 "integer.m"
              {
#line 1021 "integer.m"
                mercury__integer__V_46_46 = mercury__integer__det_tail_1_f_0(mercury__integer__U_7);
              }
#line 1021 "integer.m"
              {
#line 1021 "integer.m"
                mercury__integer__quot_rem_2_5_p_0(mercury__integer__V_45_45, mercury__integer__V_46_46, mercury__integer__V_8, &mercury__integer__Quot0_50, mercury__integer__Rem_10);
              }
#line 1023 "integer.m"
              {
#line 1023 "integer.m"
                *mercury__integer__Quot_9 = mercury__integer__integer_prepend_2_f_0(mercury__integer__Q_18, mercury__integer__Quot0_50);
              }
#line 1022 "integer.m"
            }
#line 1020 "integer.m"
          }
#line 1020 "integer.m"
        else
#line 1026 "integer.m"
          {
#line 1026 "integer.m"
            MR_Word mercury__integer__V_48_48;
#line 1026 "integer.m"
            MR_Word mercury__integer__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1026 "integer.m"
            {
#line 1026 "integer.m"
              mercury__integer__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_48_48, 0) = ((MR_Box) (mercury__integer__Q_18));
#line 1026 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_48_48, 1) = ((MR_Box) (mercury__integer__V_49_49));
#line 1026 "integer.m"
            }
#line 1026 "integer.m"
            {
#line 1026 "integer.m"
              MR_Word base;
#line 1026 "integer.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1026 "integer.m"
              *mercury__integer__Quot_9 = base;
#line 1026 "integer.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 1026 "integer.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_48_48));
#line 1026 "integer.m"
            }
#line 1027 "integer.m"
            *mercury__integer__Rem_10 = mercury__integer__NewUr_21;
#line 1026 "integer.m"
          }
#line 1004 "integer.m"
      }
#line 999 "integer.m"
  }
#line 985 "integer.m"
}

#line 966 "integer.m"
static void MR_CALL 
mercury__integer__quot_rem_4_p_0(
#line 966 "integer.m"
  MR_Word mercury__integer__U_5,
#line 966 "integer.m"
  MR_Word mercury__integer__V_6,
#line 966 "integer.m"
  MR_Word * mercury__integer__Quot_7,
#line 966 "integer.m"
  MR_Word * mercury__integer__Rem_8)
#line 966 "integer.m"
{
#line 972 "integer.m"
  {
#line 972 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 972 "integer.m"
    MR_Integer mercury__integer__UI_10;
#line 972 "integer.m"
    MR_Integer mercury__integer__VI_12;
#line 969 "integer.m"
    MR_Word mercury__integer__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_5, (MR_Integer) 1)));
#line 969 "integer.m"
    MR_Word mercury__integer__V_18_18;
#line 969 "integer.m"
    MR_Word mercury__integer__V_19_19;
#line 969 "integer.m"
    MR_Word mercury__integer__V_20_20;
#line 969 "integer.m"
    MR_Integer mercury__integer__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_5, (MR_Integer) 0)));
#line 969 "integer.m"
    MR_Integer mercury__integer__V_11_11;

#line 969 "integer.m"
    mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 969 "integer.m"
    if (mercury__integer__succeeded)
#line 969 "integer.m"
      {
#line 969 "integer.m"
        mercury__integer__UI_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 969 "integer.m"
        mercury__integer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 969 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 969 "integer.m"
        if (mercury__integer__succeeded)
#line 969 "integer.m"
          {
#line 969 "integer.m"
            mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 0)));
#line 969 "integer.m"
            mercury__integer__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 1)));
#line 969 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 969 "integer.m"
            if (mercury__integer__succeeded)
#line 969 "integer.m"
              {
#line 969 "integer.m"
                mercury__integer__VI_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_19_19, (MR_Integer) 0)));
#line 969 "integer.m"
                mercury__integer__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_19_19, (MR_Integer) 1)));
#line 969 "integer.m"
                mercury__integer__succeeded = (mercury__integer__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 969 "integer.m"
              }
#line 969 "integer.m"
          }
#line 969 "integer.m"
      }
#line 972 "integer.m"
    if (mercury__integer__succeeded)
#line 970 "integer.m"
      {
#line 970 "integer.m"
        MR_Integer mercury__integer__V_21_21;
#line 970 "integer.m"
        MR_Integer mercury__integer__V_22_22;

#line 195 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__quot_rem_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 195 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 5583 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 195 "int.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 41 "int.opt"
        if (mercury__integer__succeeded)
#line 42 "int.opt"
          mercury__integer__succeeded = (mercury__integer__VI_12 == (MR_Integer) 0);
#line 47 "int.opt"
        if (mercury__integer__succeeded)
#line 44 "int.opt"
          {
#line 44 "int.opt"
            MR_Word mercury__integer__TypeCtorInfo_9_36 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 44 "int.opt"
            MR_Word mercury__integer__V_7_34 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

#line 46 "int.opt"
            {
#line 46 "int.opt"
              mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_36, ((MR_Box) (mercury__integer__V_7_34)));
#line 46 "int.opt"
              return;
            }
#line 44 "int.opt"
          }
#line 47 "int.opt"
        else
#line 48 "int.opt"
          mercury__integer__V_21_21 = (mercury__integer__UI_10 / mercury__integer__VI_12);
#line 746 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_21_21 == (MR_Integer) 0);
#line 745 "integer.m"
        if (mercury__integer__succeeded)
#line 1209 "integer.m"
          {
#line 1209 "integer.m"
            MR_Word mercury__integer__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1209 "integer.m"
            *mercury__integer__Quot_7 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1209 "integer.m"
          }
#line 745 "integer.m"
        else
#line 746 "integer.m"
          {
#line 746 "integer.m"
            mercury__integer__succeeded = (mercury__integer__V_21_21 > (MR_Integer) 0);
#line 746 "integer.m"
            if (mercury__integer__succeeded)
#line 746 "integer.m"
              {
#line 746 "integer.m"
                MR_Word mercury__integer__V_40_40;
#line 746 "integer.m"
                MR_Word mercury__integer__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 746 "integer.m"
                {
#line 746 "integer.m"
                  mercury__integer__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_40_40, 0) = ((MR_Box) (mercury__integer__V_21_21));
#line 746 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_40_40, 1) = ((MR_Box) (mercury__integer__V_41_41));
#line 746 "integer.m"
                }
#line 746 "integer.m"
                {
#line 746 "integer.m"
                  MR_Word base;
#line 746 "integer.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 746 "integer.m"
                  *mercury__integer__Quot_7 = base;
#line 746 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 746 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_40_40));
#line 746 "integer.m"
                }
#line 746 "integer.m"
              }
#line 746 "integer.m"
            else
#line 746 "integer.m"
              {
#line 746 "integer.m"
                MR_Word mercury__integer__V_43_43;
#line 746 "integer.m"
                MR_Word mercury__integer__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 746 "integer.m"
                {
#line 746 "integer.m"
                  mercury__integer__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_43_43, 0) = ((MR_Box) (mercury__integer__V_21_21));
#line 746 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_43_43, 1) = ((MR_Box) (mercury__integer__V_44_44));
#line 746 "integer.m"
                }
#line 746 "integer.m"
                {
#line 746 "integer.m"
                  MR_Word base;
#line 746 "integer.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 746 "integer.m"
                  *mercury__integer__Quot_7 = base;
#line 746 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) -1));
#line 746 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_43_43));
#line 746 "integer.m"
                }
#line 746 "integer.m"
              }
#line 746 "integer.m"
          }
#line 195 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__quot_rem_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 195 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 5724 "integer.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 195 "int.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 356 "int.opt"
        if (mercury__integer__succeeded)
#line 357 "int.opt"
          mercury__integer__succeeded = (mercury__integer__VI_12 == (MR_Integer) 0);
#line 362 "int.opt"
        if (mercury__integer__succeeded)
#line 359 "int.opt"
          {
#line 359 "int.opt"
            MR_Word mercury__integer__TypeCtorInfo_9_52 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 359 "int.opt"
            MR_Word mercury__integer__V_7_50 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

#line 361 "int.opt"
            {
#line 361 "int.opt"
              mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_52, ((MR_Box) (mercury__integer__V_7_50)));
#line 361 "int.opt"
              return;
            }
#line 359 "int.opt"
          }
#line 362 "int.opt"
        else
#line 363 "int.opt"
          mercury__integer__V_22_22 = (mercury__integer__UI_10 % mercury__integer__VI_12);
#line 746 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_22_22 == (MR_Integer) 0);
#line 745 "integer.m"
        if (mercury__integer__succeeded)
#line 1209 "integer.m"
          {
#line 1209 "integer.m"
            MR_Word mercury__integer__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1209 "integer.m"
            *mercury__integer__Rem_8 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1209 "integer.m"
          }
#line 745 "integer.m"
        else
#line 746 "integer.m"
          {
#line 746 "integer.m"
            mercury__integer__succeeded = (mercury__integer__V_22_22 > (MR_Integer) 0);
#line 746 "integer.m"
            if (mercury__integer__succeeded)
#line 746 "integer.m"
              {
#line 746 "integer.m"
                MR_Word mercury__integer__V_56_56;
#line 746 "integer.m"
                MR_Word mercury__integer__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 746 "integer.m"
                {
#line 746 "integer.m"
                  mercury__integer__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_56_56, 0) = ((MR_Box) (mercury__integer__V_22_22));
#line 746 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_56_56, 1) = ((MR_Box) (mercury__integer__V_57_57));
#line 746 "integer.m"
                }
#line 746 "integer.m"
                {
#line 746 "integer.m"
                  MR_Word base;
#line 746 "integer.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 746 "integer.m"
                  *mercury__integer__Rem_8 = base;
#line 746 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 746 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_56_56));
#line 746 "integer.m"
                }
#line 746 "integer.m"
              }
#line 746 "integer.m"
            else
#line 746 "integer.m"
              {
#line 746 "integer.m"
                MR_Word mercury__integer__V_59_59;
#line 746 "integer.m"
                MR_Word mercury__integer__V_60_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 746 "integer.m"
                {
#line 746 "integer.m"
                  mercury__integer__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_59_59, 0) = ((MR_Box) (mercury__integer__V_22_22));
#line 746 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_59_59, 1) = ((MR_Box) (mercury__integer__V_60_60));
#line 746 "integer.m"
                }
#line 746 "integer.m"
                {
#line 746 "integer.m"
                  MR_Word base;
#line 746 "integer.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 746 "integer.m"
                  *mercury__integer__Rem_8 = base;
#line 746 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) -1));
#line 746 "integer.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__V_59_59));
#line 746 "integer.m"
                }
#line 746 "integer.m"
              }
#line 746 "integer.m"
          }
#line 970 "integer.m"
      }
#line 972 "integer.m"
    else
#line 973 "integer.m"
      {
#line 973 "integer.m"
        MR_Integer mercury__integer__V0_13;
#line 973 "integer.m"
        MR_Word mercury__integer__QuotZeros_15;
#line 973 "integer.m"
        MR_Word mercury__integer__Digits_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 1)));
#line 1042 "integer.m"
        MR_Integer mercury__integer__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 0)));

#line 1046 "integer.m"
        if ((mercury__integer__Digits_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1044 "integer.m"
          {
#line 1045 "integer.m"
            {
#line 1045 "integer.m"
              mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_first\'/1", (MR_String) "empty list");
#line 1045 "integer.m"
              return;
            }
#line 1044 "integer.m"
          }
#line 1046 "integer.m"
        else
#line 1047 "integer.m"
          {
#line 1047 "integer.m"
            MR_Word mercury__integer__V_66_66;

#line 1047 "integer.m"
            mercury__integer__V0_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_65, (MR_Integer) 0)));
#line 1047 "integer.m"
            mercury__integer__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_65, (MR_Integer) 1)));
#line 1047 "integer.m"
          }
#line 974 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V0_13 < (MR_Integer) 8192);
#line 979 "integer.m"
        if (mercury__integer__succeeded)
#line 975 "integer.m"
          {
#line 975 "integer.m"
            MR_Integer mercury__integer__M_14;
#line 975 "integer.m"
            MR_Word mercury__integer__R_16;
#line 975 "integer.m"
            MR_Integer mercury__integer__V_25_25 = (mercury__integer__V0_13 + (MR_Integer) 1);
#line 975 "integer.m"
            MR_Word mercury__integer__V_27_27;
#line 975 "integer.m"
            MR_Word mercury__integer__V_28_28;
#line 975 "integer.m"
            MR_Word mercury__integer__V_29_29;
#line 975 "integer.m"
            MR_Word mercury__integer__V_71_71;
#line 975 "integer.m"
            MR_Integer mercury__integer__Len_74;
#line 975 "integer.m"
            MR_Word mercury__integer__Digits0_75;
#line 975 "integer.m"
            MR_Integer mercury__integer__Mod_76;
#line 975 "integer.m"
            MR_Word mercury__integer__Digits_77;
#line 975 "integer.m"
            MR_Integer mercury__integer__Len_83;
#line 975 "integer.m"
            MR_Word mercury__integer__Digits0_84;
#line 975 "integer.m"
            MR_Integer mercury__integer__Mod_85;
#line 975 "integer.m"
            MR_Word mercury__integer__Digits_86;

#line 975 "integer.m"
            {
#line 975 "integer.m"
              mercury__integer__M_14 = mercury__int__div_2_f_0((MR_Integer) 16384, mercury__integer__V_25_25);
            }
#line 1209 "integer.m"
            mercury__integer__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1209 "integer.m"
            mercury__integer__V_27_27 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 790 "integer.m"
            mercury__integer__Len_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_5, (MR_Integer) 0)));
#line 790 "integer.m"
            mercury__integer__Digits0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_5, (MR_Integer) 1)));
#line 791 "integer.m"
            {
#line 791 "integer.m"
              mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__M_14, &mercury__integer__Mod_76, mercury__integer__Digits0_75, &mercury__integer__Digits_77);
            }
#line 792 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Mod_76 == (MR_Integer) 0);
#line 792 "integer.m"
            if (mercury__integer__succeeded)
#line 792 "integer.m"
              {
#line 792 "integer.m"
                mercury__integer__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 792 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, 0) = ((MR_Box) (mercury__integer__Len_74));
#line 792 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, 1) = ((MR_Box) (mercury__integer__Digits_77));
#line 792 "integer.m"
              }
#line 792 "integer.m"
            else
#line 792 "integer.m"
              {
#line 792 "integer.m"
                MR_Integer mercury__integer__V_78_78 = (mercury__integer__Len_74 + (MR_Integer) 1);
#line 792 "integer.m"
                MR_Word mercury__integer__V_80_80;

#line 792 "integer.m"
                {
#line 792 "integer.m"
                  mercury__integer__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_80_80, 0) = ((MR_Box) (mercury__integer__Mod_76));
#line 792 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_80_80, 1) = ((MR_Box) (mercury__integer__Digits_77));
#line 792 "integer.m"
                }
#line 792 "integer.m"
                {
#line 792 "integer.m"
                  mercury__integer__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 792 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, 0) = ((MR_Box) (mercury__integer__V_78_78));
#line 792 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, 1) = ((MR_Box) (mercury__integer__V_80_80));
#line 792 "integer.m"
                }
#line 792 "integer.m"
              }
#line 790 "integer.m"
            mercury__integer__Len_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 0)));
#line 790 "integer.m"
            mercury__integer__Digits0_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 1)));
#line 791 "integer.m"
            {
#line 791 "integer.m"
              mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__M_14, &mercury__integer__Mod_85, mercury__integer__Digits0_84, &mercury__integer__Digits_86);
            }
#line 792 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Mod_85 == (MR_Integer) 0);
#line 792 "integer.m"
            if (mercury__integer__succeeded)
#line 792 "integer.m"
              {
#line 792 "integer.m"
                mercury__integer__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 792 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 0) = ((MR_Box) (mercury__integer__Len_83));
#line 792 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 1) = ((MR_Box) (mercury__integer__Digits_86));
#line 792 "integer.m"
              }
#line 792 "integer.m"
            else
#line 792 "integer.m"
              {
#line 792 "integer.m"
                MR_Integer mercury__integer__V_87_87 = (mercury__integer__Len_83 + (MR_Integer) 1);
#line 792 "integer.m"
                MR_Word mercury__integer__V_89_89;

#line 792 "integer.m"
                {
#line 792 "integer.m"
                  mercury__integer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_89_89, 0) = ((MR_Box) (mercury__integer__Mod_85));
#line 792 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_89_89, 1) = ((MR_Box) (mercury__integer__Digits_86));
#line 792 "integer.m"
                }
#line 792 "integer.m"
                {
#line 792 "integer.m"
                  mercury__integer__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 792 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 0) = ((MR_Box) (mercury__integer__V_87_87));
#line 792 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 1) = ((MR_Box) (mercury__integer__V_89_89));
#line 792 "integer.m"
                }
#line 792 "integer.m"
              }
#line 976 "integer.m"
            {
#line 976 "integer.m"
              mercury__integer__quot_rem_2_5_p_0(mercury__integer__V_27_27, mercury__integer__V_28_28, mercury__integer__V_29_29, &mercury__integer__QuotZeros_15, &mercury__integer__R_16);
            }
#line 978 "integer.m"
            {
#line 978 "integer.m"
              *mercury__integer__Rem_8 = mercury__integer__div_by_digit_2_f_0(mercury__integer__M_14, mercury__integer__R_16);
            }
#line 975 "integer.m"
          }
#line 979 "integer.m"
        else
#line 980 "integer.m"
          {
#line 980 "integer.m"
            MR_Word mercury__integer__V_30_30 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 980 "integer.m"
            MR_Word mercury__integer__V_91_91 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 980 "integer.m"
            {
#line 980 "integer.m"
              mercury__integer__quot_rem_2_5_p_0(mercury__integer__V_30_30, mercury__integer__U_5, mercury__integer__V_6, &mercury__integer__QuotZeros_15, mercury__integer__Rem_8);
            }
#line 980 "integer.m"
          }
#line 982 "integer.m"
        {
#line 982 "integer.m"
          *mercury__integer__Quot_7 = mercury__integer__decap_1_f_0(mercury__integer__QuotZeros_15);
        }
#line 973 "integer.m"
      }
#line 972 "integer.m"
  }
#line 966 "integer.m"
}

#line 935 "integer.m"
void MR_CALL 
mercury__integer__big_quot_rem_4_p_0(
#line 935 "integer.m"
  MR_Word mercury__integer__X_5,
#line 935 "integer.m"
  MR_Word mercury__integer__Y_6,
#line 935 "integer.m"
  MR_Word * mercury__integer__Quot_7,
#line 935 "integer.m"
  MR_Word * mercury__integer__Rem_8)
#line 935 "integer.m"
{
#line 941 "integer.m"
  {
#line 941 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1200 "integer.m"
    MR_Integer mercury__integer__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_6, (MR_Integer) 0)));
#line 1200 "integer.m"
    MR_Word mercury__integer__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_6, (MR_Integer) 1)));

#line 1200 "integer.m"
    mercury__integer__succeeded = (mercury__integer__V_21_21 == (MR_Integer) 0);
#line 1200 "integer.m"
    if (mercury__integer__succeeded)
#line 1200 "integer.m"
      mercury__integer__succeeded = (mercury__integer__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 941 "integer.m"
    if (mercury__integer__succeeded)
#line 940 "integer.m"
      {
#line 940 "integer.m"
        MR_Word mercury__integer__TypeCtorInfo_20_20 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 940 "integer.m"
        MR_Word mercury__integer__V_15_15 = (MR_Word) ((MR_Box) ((MR_String) "integer.big_quot_rem: division by zero"));

#line 940 "integer.m"
        {
#line 940 "integer.m"
          mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_20_20, ((MR_Box) (mercury__integer__V_15_15)));
#line 940 "integer.m"
          return;
        }
#line 940 "integer.m"
      }
#line 941 "integer.m"
    else
#line 944 "integer.m"
      {
#line 1200 "integer.m"
        MR_Integer mercury__integer__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_5, (MR_Integer) 0)));
#line 1200 "integer.m"
        MR_Word mercury__integer__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_5, (MR_Integer) 1)));

#line 1200 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_23_23 == (MR_Integer) 0);
#line 1200 "integer.m"
        if (mercury__integer__succeeded)
#line 1200 "integer.m"
          mercury__integer__succeeded = (mercury__integer__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 944 "integer.m"
        if (mercury__integer__succeeded)
#line 942 "integer.m"
          {
#line 1209 "integer.m"
            *mercury__integer__Quot_7 = mercury__integer__X_5;
#line 1209 "integer.m"
            *mercury__integer__Rem_8 = mercury__integer__X_5;
#line 942 "integer.m"
          }
#line 944 "integer.m"
        else
#line 945 "integer.m"
          {
#line 945 "integer.m"
            MR_Integer mercury__integer__SignX_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_5, (MR_Integer) 0)));
#line 945 "integer.m"
            MR_Integer mercury__integer__SignY_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_6, (MR_Integer) 0)));
#line 945 "integer.m"
            MR_Word mercury__integer__Quot0_13;
#line 945 "integer.m"
            MR_Word mercury__integer__Rem0_14;
#line 945 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 945 "integer.m"
            MR_Word mercury__integer__V_18_18;
#line 945 "integer.m"
            MR_Integer mercury__integer__V_19_19;
#line 945 "integer.m"
            MR_Word mercury__integer__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_5, (MR_Integer) 1)));
#line 946 "integer.m"
            MR_Word mercury__integer__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_6, (MR_Integer) 1)));

#line 947 "integer.m"
            {
#line 947 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__big_abs_1_f_0(mercury__integer__X_5);
            }
#line 947 "integer.m"
            {
#line 947 "integer.m"
              mercury__integer__V_18_18 = mercury__integer__big_abs_1_f_0(mercury__integer__Y_6);
            }
#line 947 "integer.m"
            {
#line 947 "integer.m"
              mercury__integer__quot_rem_4_p_0(mercury__integer__V_17_17, mercury__integer__V_18_18, &mercury__integer__Quot0_13, &mercury__integer__Rem0_14);
            }
#line 948 "integer.m"
            mercury__integer__V_19_19 = (mercury__integer__SignX_9 * mercury__integer__SignY_11);
#line 948 "integer.m"
            {
#line 948 "integer.m"
              *mercury__integer__Quot_7 = mercury__integer__big_sign_2_f_0(mercury__integer__V_19_19, mercury__integer__Quot0_13);
            }
#line 949 "integer.m"
            {
#line 949 "integer.m"
              *mercury__integer__Rem_8 = mercury__integer__big_sign_2_f_0(mercury__integer__SignX_9, mercury__integer__Rem0_14);
            }
#line 945 "integer.m"
          }
#line 944 "integer.m"
      }
#line 941 "integer.m"
  }
#line 935 "integer.m"
}

#line 929 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_mul_list_3_f_0(
#line 929 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 929 "integer.m"
  MR_Word mercury__integer__Carry_2,
#line 929 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3)
#line 929 "integer.m"
{
#line 931 "integer.m"
  while (MR_TRUE)
#line 931 "integer.m"
    {
#line 931 "integer.m"
      /* tailcall optimized into a loop */
#line 931 "integer.m"
      {
#line 931 "integer.m"
        MR_bool mercury__integer__succeeded;
#line 931 "integer.m"
        MR_Word mercury__integer__HeadVar__4_4;

#line 931 "integer.m"
        if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 931 "integer.m"
          mercury__integer__HeadVar__4_4 = mercury__integer__Carry_2;
#line 931 "integer.m"
        else
#line 932 "integer.m"
          {
#line 932 "integer.m"
            MR_Integer mercury__integer__X_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 932 "integer.m"
            MR_Word mercury__integer__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 932 "integer.m"
            MR_Word mercury__integer__V_11_11;
#line 932 "integer.m"
            MR_Word mercury__integer__V_12_12;
#line 932 "integer.m"
            MR_Word mercury__integer__V_13_13;
#line 932 "integer.m"
            MR_Integer mercury__integer__Len_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_2, (MR_Integer) 0)));
#line 932 "integer.m"
            MR_Word mercury__integer__Digits_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_2, (MR_Integer) 1)));
#line 932 "integer.m"
            MR_Integer mercury__integer__Len_26;
#line 932 "integer.m"
            MR_Word mercury__integer__Digits0_27;
#line 932 "integer.m"
            MR_Integer mercury__integer__Mod_28;
#line 932 "integer.m"
            MR_Word mercury__integer__Digits_29;
#line 932 "integer.m"
            MR_Integer mercury__integer__L1_34;
#line 932 "integer.m"
            MR_Integer mercury__integer__L2_36;
#line 932 "integer.m"
            MR_Integer mercury__integer__Div_38;
#line 932 "integer.m"
            MR_Word mercury__integer__Ds_39;
#line 932 "integer.m"
            MR_Integer mercury__integer__Len_40;
#line 810 "integer.m"
            MR_Word mercury__integer__D1_35;
#line 810 "integer.m"
            MR_Word mercury__integer__D2_37;

#line 778 "integer.m"
            if ((mercury__integer__Digits_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1209 "integer.m"
              {
#line 1209 "integer.m"
                MR_Word mercury__integer__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1209 "integer.m"
                mercury__integer__V_12_12 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1209 "integer.m"
              }
#line 778 "integer.m"
            else
#line 779 "integer.m"
              {
#line 779 "integer.m"
                MR_Integer mercury__integer__V_19_19 = (mercury__integer__Len_15 + (MR_Integer) 1);
#line 779 "integer.m"
                MR_Word mercury__integer__V_21_21;

#line 780 "integer.m"
                {
#line 780 "integer.m"
                  mercury__integer__V_21_21 = mercury__integer__mul_base_2_1_f_0(mercury__integer__Digits_16);
                }
#line 780 "integer.m"
                {
#line 780 "integer.m"
                  mercury__integer__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 780 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 0) = ((MR_Box) (mercury__integer__V_19_19));
#line 780 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 1) = ((MR_Box) (mercury__integer__V_21_21));
#line 780 "integer.m"
                }
#line 779 "integer.m"
              }
#line 790 "integer.m"
            mercury__integer__Len_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 790 "integer.m"
            mercury__integer__Digits0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 791 "integer.m"
            {
#line 791 "integer.m"
              mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__X_7, &mercury__integer__Mod_28, mercury__integer__Digits0_27, &mercury__integer__Digits_29);
            }
#line 792 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Mod_28 == (MR_Integer) 0);
#line 792 "integer.m"
            if (mercury__integer__succeeded)
#line 792 "integer.m"
              {
#line 792 "integer.m"
                mercury__integer__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 792 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 0) = ((MR_Box) (mercury__integer__Len_26));
#line 792 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 1) = ((MR_Box) (mercury__integer__Digits_29));
#line 792 "integer.m"
              }
#line 792 "integer.m"
            else
#line 792 "integer.m"
              {
#line 792 "integer.m"
                MR_Integer mercury__integer__V_30_30 = (mercury__integer__Len_26 + (MR_Integer) 1);
#line 792 "integer.m"
                MR_Word mercury__integer__V_32_32;

#line 792 "integer.m"
                {
#line 792 "integer.m"
                  mercury__integer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_32_32, 0) = ((MR_Box) (mercury__integer__Mod_28));
#line 792 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_32_32, 1) = ((MR_Box) (mercury__integer__Digits_29));
#line 792 "integer.m"
                }
#line 792 "integer.m"
                {
#line 792 "integer.m"
                  mercury__integer__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 792 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 0) = ((MR_Box) (mercury__integer__V_30_30));
#line 792 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 1) = ((MR_Box) (mercury__integer__V_32_32));
#line 792 "integer.m"
                }
#line 792 "integer.m"
              }
#line 810 "integer.m"
            mercury__integer__L1_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, (MR_Integer) 0)));
#line 810 "integer.m"
            mercury__integer__D1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, (MR_Integer) 1)));
#line 810 "integer.m"
            mercury__integer__L2_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, (MR_Integer) 0)));
#line 810 "integer.m"
            mercury__integer__D2_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, (MR_Integer) 1)));
#line 811 "integer.m"
            {
#line 811 "integer.m"
              mercury__integer__add_pairs_4_p_0(&mercury__integer__Div_38, mercury__integer__V_12_12, mercury__integer__V_13_13, &mercury__integer__Ds_39);
            }
#line 812 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_34 > mercury__integer__L2_36);
#line 812 "integer.m"
            if (mercury__integer__succeeded)
#line 812 "integer.m"
              mercury__integer__Len_40 = mercury__integer__L1_34;
#line 812 "integer.m"
            else
#line 812 "integer.m"
              mercury__integer__Len_40 = mercury__integer__L2_36;
#line 813 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Div_38 == (MR_Integer) 0);
#line 813 "integer.m"
            if (mercury__integer__succeeded)
#line 813 "integer.m"
              {
#line 813 "integer.m"
                mercury__integer__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 813 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 0) = ((MR_Box) (mercury__integer__Len_40));
#line 813 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 1) = ((MR_Box) (mercury__integer__Ds_39));
#line 813 "integer.m"
              }
#line 813 "integer.m"
            else
#line 813 "integer.m"
              {
#line 813 "integer.m"
                MR_Integer mercury__integer__V_43_43 = (mercury__integer__Len_40 + (MR_Integer) 1);
#line 813 "integer.m"
                MR_Word mercury__integer__V_45_45;

#line 813 "integer.m"
                {
#line 813 "integer.m"
                  mercury__integer__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_45_45, 0) = ((MR_Box) (mercury__integer__Div_38));
#line 813 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_45_45, 1) = ((MR_Box) (mercury__integer__Ds_39));
#line 813 "integer.m"
                }
#line 813 "integer.m"
                {
#line 813 "integer.m"
                  mercury__integer__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 813 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 0) = ((MR_Box) (mercury__integer__V_43_43));
#line 813 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 1) = ((MR_Box) (mercury__integer__V_45_45));
#line 813 "integer.m"
                }
#line 813 "integer.m"
              }
#line 933 "integer.m"
            /* direct tailcall eliminated */
#line 933 "integer.m"
            {
#line 933 "integer.m"
              MR_Word mercury__integer__HeadVar__1__tmp_copy_1 = mercury__integer__Xs_8;
#line 933 "integer.m"
              MR_Word mercury__integer__Carry__tmp_copy_2 = mercury__integer__V_11_11;

#line 933 "integer.m"
              mercury__integer__Carry_2 = mercury__integer__Carry__tmp_copy_2;
#line 933 "integer.m"
              mercury__integer__HeadVar__1_1 = mercury__integer__HeadVar__1__tmp_copy_1;
#line 933 "integer.m"
            }
#line 933 "integer.m"
            continue;
#line 932 "integer.m"
          }
#line 931 "integer.m"
        return mercury__integer__HeadVar__4_4;
#line 931 "integer.m"
      }
#line 931 "integer.m"
      break;
#line 931 "integer.m"
    }
#line 929 "integer.m"
}

#line 893 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_mul_karatsuba_2_f_0(
#line 893 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 893 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 893 "integer.m"
{
#line 895 "integer.m"
  {
#line 895 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 895 "integer.m"
    MR_Word mercury__integer__Res_8;
#line 895 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 895 "integer.m"
    MR_Word mercury__integer__Ds1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 895 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 895 "integer.m"
    MR_Word mercury__integer__Ds2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 896 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 < (MR_Integer) 35);
#line 898 "integer.m"
    if (mercury__integer__succeeded)
#line 897 "integer.m"
      {
#line 897 "integer.m"
        MR_Word mercury__integer__V_24_24 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 897 "integer.m"
        MR_Word mercury__integer__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 897 "integer.m"
        {
#line 897 "integer.m"
          return mercury__integer__Res_8 = mercury__integer__pos_mul_list_3_f_0(mercury__integer__Ds1_5, mercury__integer__V_24_24, mercury__integer__HeadVar__2_2);
        }
#line 897 "integer.m"
      }
#line 898 "integer.m"
    else
#line 923 "integer.m"
      {
#line 923 "integer.m"
        MR_Integer mercury__integer__Middle_9;
#line 923 "integer.m"
        MR_Word mercury__integer__Res0_20;
#line 923 "integer.m"
        MR_Word mercury__integer__Res1_21;
#line 923 "integer.m"
        MR_Word mercury__integer__Res2_22;
#line 923 "integer.m"
        MR_Word mercury__integer__V_38_38;
#line 923 "integer.m"
        MR_Word mercury__integer__V_39_39;
#line 923 "integer.m"
        MR_Integer mercury__integer__V_40_40;
#line 923 "integer.m"
        MR_Integer mercury__integer__V_41_41;
#line 923 "integer.m"
        MR_Word mercury__integer__V_44_44;
#line 923 "integer.m"
        MR_Word mercury__integer__V_45_45;
#line 923 "integer.m"
        MR_Word mercury__integer__V_46_46;
#line 923 "integer.m"
        MR_Integer mercury__integer__V_47_47;

#line 899 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L2_6 < mercury__integer__L1_4);
#line 901 "integer.m"
        if (mercury__integer__succeeded)
#line 900 "integer.m"
          {
#line 900 "integer.m"
            {
#line 900 "integer.m"
              mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.pos_mul_karatsuba\'/2", (MR_String) "second factor smaller");
            }
#line 900 "integer.m"
          }
#line 901 "integer.m"
        else
#line 902 "integer.m"
          {
#line 902 "integer.m"
            MR_Word mercury__integer__TypeCtorInfo_49_49;
#line 902 "integer.m"
            MR_Integer mercury__integer__HiDigits_10;
#line 902 "integer.m"
            MR_Integer mercury__integer__HiDigitsSmall_11;
#line 902 "integer.m"
            MR_Word mercury__integer__Ds1Upper_12;
#line 902 "integer.m"
            MR_Word mercury__integer__Ds1Lower_13;
#line 902 "integer.m"
            MR_Word mercury__integer__Ds2Upper_14;
#line 902 "integer.m"
            MR_Word mercury__integer__Ds2Lower_15;
#line 902 "integer.m"
            MR_Word mercury__integer__LoDs1_16;
#line 902 "integer.m"
            MR_Word mercury__integer__LoDs2_17;
#line 902 "integer.m"
            MR_Word mercury__integer__HiDs1_18;
#line 902 "integer.m"
            MR_Word mercury__integer__HiDs2_19;
#line 902 "integer.m"
            MR_Integer mercury__integer__V_31_31;
#line 902 "integer.m"
            MR_Integer mercury__integer__V_32_32;
#line 914 "integer.m"
            MR_Integer mercury__integer__V_33_33;

#line 902 "integer.m"
            {
#line 902 "integer.m"
              mercury__integer__Middle_9 = mercury__int__div_2_f_0(mercury__integer__L2_6, (MR_Integer) 2);
            }
#line 903 "integer.m"
            mercury__integer__HiDigits_10 = (mercury__integer__L2_6 - mercury__integer__Middle_9);
#line 904 "integer.m"
            mercury__integer__V_31_31 = (mercury__integer__L1_4 - mercury__integer__Middle_9);
#line 213 "int.opt"
            mercury__integer__succeeded = ((MR_Integer) 0 > mercury__integer__V_31_31);
#line 216 "int.opt"
            if (mercury__integer__succeeded)
#line 215 "int.opt"
              mercury__integer__HiDigitsSmall_11 = (MR_Integer) 0;
#line 216 "int.opt"
            else
#line 217 "int.opt"
              mercury__integer__HiDigitsSmall_11 = mercury__integer__V_31_31;
#line 6609 "integer.c"
            mercury__integer__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 907 "integer.m"
            {
#line 907 "integer.m"
              mercury__list__split_upto_4_p_0(mercury__integer__TypeCtorInfo_49_49, mercury__integer__HiDigitsSmall_11, mercury__integer__Ds1_5, &mercury__integer__Ds1Upper_12, &mercury__integer__Ds1Lower_13);
            }
#line 909 "integer.m"
            {
#line 909 "integer.m"
              mercury__list__split_upto_4_p_0(mercury__integer__TypeCtorInfo_49_49, mercury__integer__HiDigits_10, mercury__integer__Ds2_7, &mercury__integer__Ds2Upper_14, &mercury__integer__Ds2Lower_15);
            }
#line 242 "int.opt"
            mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__Middle_9);
#line 245 "int.opt"
            if (mercury__integer__succeeded)
#line 244 "int.opt"
              mercury__integer__V_32_32 = mercury__integer__L1_4;
#line 245 "int.opt"
            else
#line 246 "int.opt"
              mercury__integer__V_32_32 = mercury__integer__Middle_9;
#line 910 "integer.m"
            {
#line 910 "integer.m"
              mercury__integer__LoDs1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 910 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__LoDs1_16, 0) = ((MR_Box) (mercury__integer__V_32_32));
#line 910 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__LoDs1_16, 1) = ((MR_Box) (mercury__integer__Ds1Lower_13));
#line 910 "integer.m"
            }
#line 911 "integer.m"
            {
#line 911 "integer.m"
              mercury__integer__LoDs2_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 911 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__LoDs2_17, 0) = ((MR_Box) (mercury__integer__Middle_9));
#line 911 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__LoDs2_17, 1) = ((MR_Box) (mercury__integer__Ds2Lower_15));
#line 911 "integer.m"
            }
#line 912 "integer.m"
            {
#line 912 "integer.m"
              mercury__integer__HiDs1_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 912 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HiDs1_18, 0) = ((MR_Box) (mercury__integer__HiDigitsSmall_11));
#line 912 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HiDs1_18, 1) = ((MR_Box) (mercury__integer__Ds1Upper_12));
#line 912 "integer.m"
            }
#line 913 "integer.m"
            {
#line 913 "integer.m"
              mercury__integer__HiDs2_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 913 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HiDs2_19, 0) = ((MR_Box) (mercury__integer__HiDigits_10));
#line 913 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HiDs2_19, 1) = ((MR_Box) (mercury__integer__Ds2Upper_14));
#line 913 "integer.m"
            }
#line 890 "integer.m"
            mercury__integer__V_33_33 = ((MR_Integer) 35 * (MR_Integer) 10);
#line 914 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Middle_9 > mercury__integer__V_33_33);
#line 918 "integer.m"
            if (mercury__integer__succeeded)
#line 915 "integer.m"
              {
#line 915 "integer.m"
                MR_Word mercury__integer__V_34_34;
#line 915 "integer.m"
                MR_Word mercury__integer__V_35_35;
#line 915 "integer.m"
                MR_Integer mercury__integer__L1_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__LoDs1_16, (MR_Integer) 0)));
#line 915 "integer.m"
                MR_Integer mercury__integer__L2_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__LoDs2_17, (MR_Integer) 0)));
#line 915 "integer.m"
                MR_Integer mercury__integer__L1_78;
#line 915 "integer.m"
                MR_Integer mercury__integer__L2_80;
#line 915 "integer.m"
                MR_Integer mercury__integer__L1_86;
#line 915 "integer.m"
                MR_Integer mercury__integer__L2_88;
#line 874 "integer.m"
                MR_Word mercury__integer__Ds1_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__LoDs1_16, (MR_Integer) 1)));
#line 874 "integer.m"
                MR_Word mercury__integer__Ds2_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__LoDs2_17, (MR_Integer) 1)));
#line 874 "integer.m"
                MR_Word mercury__integer__Ds1_79;
#line 874 "integer.m"
                MR_Word mercury__integer__Ds2_81;
#line 874 "integer.m"
                MR_Word mercury__integer__Ds1_87;
#line 874 "integer.m"
                MR_Word mercury__integer__Ds2_89;

#line 875 "integer.m"
                mercury__integer__succeeded = (mercury__integer__L1_66 < mercury__integer__L2_68);
#line 874 "integer.m"
                if (mercury__integer__succeeded)
#line 876 "integer.m"
                  {
#line 876 "integer.m"
                    mercury__integer__Res0_20 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__LoDs1_16, mercury__integer__LoDs2_17);
                  }
#line 874 "integer.m"
                else
#line 878 "integer.m"
                  {
#line 878 "integer.m"
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
#line 874 "integer.m"
                mercury__integer__L1_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_34_34, (MR_Integer) 0)));
#line 874 "integer.m"
                mercury__integer__Ds1_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_34_34, (MR_Integer) 1)));
#line 874 "integer.m"
                mercury__integer__L2_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_35_35, (MR_Integer) 0)));
#line 874 "integer.m"
                mercury__integer__Ds2_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_35_35, (MR_Integer) 1)));
#line 875 "integer.m"
                mercury__integer__succeeded = (mercury__integer__L1_78 < mercury__integer__L2_80);
#line 874 "integer.m"
                if (mercury__integer__succeeded)
#line 876 "integer.m"
                  {
#line 876 "integer.m"
                    mercury__integer__Res1_21 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__V_34_34, mercury__integer__V_35_35);
                  }
#line 874 "integer.m"
                else
#line 878 "integer.m"
                  {
#line 878 "integer.m"
                    mercury__integer__Res1_21 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__V_35_35, mercury__integer__V_34_34);
                  }
#line 874 "integer.m"
                mercury__integer__L1_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HiDs1_18, (MR_Integer) 0)));
#line 874 "integer.m"
                mercury__integer__Ds1_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HiDs1_18, (MR_Integer) 1)));
#line 874 "integer.m"
                mercury__integer__L2_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HiDs2_19, (MR_Integer) 0)));
#line 874 "integer.m"
                mercury__integer__Ds2_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HiDs2_19, (MR_Integer) 1)));
#line 875 "integer.m"
                mercury__integer__succeeded = (mercury__integer__L1_86 < mercury__integer__L2_88);
#line 874 "integer.m"
                if (mercury__integer__succeeded)
#line 876 "integer.m"
                  {
#line 876 "integer.m"
                    mercury__integer__Res2_22 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__HiDs1_18, mercury__integer__HiDs2_19);
                  }
#line 874 "integer.m"
                else
#line 878 "integer.m"
                  {
#line 878 "integer.m"
                    mercury__integer__Res2_22 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__HiDs2_19, mercury__integer__HiDs1_18);
                  }
#line 915 "integer.m"
              }
#line 918 "integer.m"
            else
#line 919 "integer.m"
              {
#line 919 "integer.m"
                MR_Word mercury__integer__V_36_36;
#line 919 "integer.m"
                MR_Word mercury__integer__V_37_37;

#line 919 "integer.m"
                {
#line 919 "integer.m"
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
#line 920 "integer.m"
                {
#line 920 "integer.m"
                  mercury__integer__Res1_21 = mercury__integer__pos_mul_2_f_0(mercury__integer__V_36_36, mercury__integer__V_37_37);
                }
#line 921 "integer.m"
                {
#line 921 "integer.m"
                  mercury__integer__Res2_22 = mercury__integer__pos_mul_2_f_0(mercury__integer__HiDs1_18, mercury__integer__HiDs2_19);
                }
#line 919 "integer.m"
              }
#line 902 "integer.m"
          }
#line 924 "integer.m"
        mercury__integer__V_41_41 = ((MR_Integer) 2 * mercury__integer__Middle_9);
#line 924 "integer.m"
        mercury__integer__V_40_40 = (mercury__integer__V_41_41 * (MR_Integer) 14);
#line 924 "integer.m"
        {
#line 924 "integer.m"
          mercury__integer__V_39_39 = mercury__integer__big_left_shift_2_f_0(mercury__integer__Res2_22, mercury__integer__V_40_40);
        }
#line 925 "integer.m"
        {
#line 925 "integer.m"
          mercury__integer__V_46_46 = mercury__integer__f_plus_2_f_0(mercury__integer__Res2_22, mercury__integer__Res0_20);
        }
#line 925 "integer.m"
        {
#line 925 "integer.m"
          mercury__integer__V_45_45 = mercury__integer__f_minus_2_f_0(mercury__integer__Res1_21, mercury__integer__V_46_46);
        }
#line 925 "integer.m"
        mercury__integer__V_47_47 = (mercury__integer__Middle_9 * (MR_Integer) 14);
#line 925 "integer.m"
        {
#line 925 "integer.m"
          mercury__integer__V_44_44 = mercury__integer__big_left_shift_2_f_0(mercury__integer__V_45_45, mercury__integer__V_47_47);
        }
#line 924 "integer.m"
        {
#line 924 "integer.m"
          mercury__integer__V_38_38 = mercury__integer__f_plus_2_f_0(mercury__integer__V_39_39, mercury__integer__V_44_44);
        }
#line 925 "integer.m"
        {
#line 925 "integer.m"
          return mercury__integer__Res_8 = mercury__integer__f_plus_2_f_0(mercury__integer__V_38_38, mercury__integer__Res0_20);
        }
#line 923 "integer.m"
      }
#line 895 "integer.m"
    return mercury__integer__Res_8;
#line 895 "integer.m"
  }
#line 893 "integer.m"
}

#line 872 "integer.m"
MR_Word MR_CALL 
mercury__integer__pos_mul_2_f_0(
#line 872 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 872 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 872 "integer.m"
{
#line 874 "integer.m"
  {
#line 874 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 874 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 874 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 874 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 874 "integer.m"
    MR_Word mercury__integer__Ds1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 874 "integer.m"
    MR_Word mercury__integer__Ds2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 875 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
#line 874 "integer.m"
    if (mercury__integer__succeeded)
#line 876 "integer.m"
      {
#line 876 "integer.m"
        return mercury__integer__HeadVar__3_3 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__HeadVar__2_2);
      }
#line 874 "integer.m"
    else
#line 878 "integer.m"
      {
#line 878 "integer.m"
        return mercury__integer__HeadVar__3_3 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__HeadVar__2_2, mercury__integer__HeadVar__1_1);
      }
#line 874 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 874 "integer.m"
  }
#line 872 "integer.m"
}

#line 863 "integer.m"
static void MR_CALL 
mercury__integer__diff_pairs_equal_4_p_0(
#line 863 "integer.m"
  MR_Integer * mercury__integer__HeadVar__1_1,
#line 863 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 863 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 863 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4)
#line 863 "integer.m"
{
#line 866 "integer.m"
  {
#line 866 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 866 "integer.m"
    if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 866 "integer.m"
      {
#line 866 "integer.m"
        *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 866 "integer.m"
        *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "integer.m"
      }
#line 866 "integer.m"
    else
#line 866 "integer.m"
      {
#line 866 "integer.m"
        MR_Word mercury__integer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 866 "integer.m"
        MR_Integer mercury__integer__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));

#line 866 "integer.m"
        if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 867 "integer.m"
          {
#line 867 "integer.m"
            *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 867 "integer.m"
            *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 867 "integer.m"
          }
#line 866 "integer.m"
        else
#line 868 "integer.m"
          {
#line 868 "integer.m"
            MR_Integer mercury__integer__Y_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 868 "integer.m"
            MR_Word mercury__integer__Ys_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 868 "integer.m"
            MR_Integer mercury__integer__Mod_13;
#line 868 "integer.m"
            MR_Word mercury__integer__TailDs_14;
#line 868 "integer.m"
            MR_Integer mercury__integer__DivTail_15;
#line 868 "integer.m"
            MR_Integer mercury__integer__V_16_16;
#line 868 "integer.m"
            MR_Integer mercury__integer__V_17_17;

#line 869 "integer.m"
            {
#line 869 "integer.m"
              mercury__integer__diff_pairs_equal_4_p_0(&mercury__integer__DivTail_15, mercury__integer__V_18_18, mercury__integer__Ys_12, &mercury__integer__TailDs_14);
            }
#line 870 "integer.m"
            mercury__integer__V_17_17 = (mercury__integer__V_19_19 - mercury__integer__Y_11);
#line 870 "integer.m"
            mercury__integer__V_16_16 = (mercury__integer__V_17_17 + mercury__integer__DivTail_15);
#line 805 "integer.m"
            {
#line 805 "integer.m"
              *mercury__integer__HeadVar__1_1 = mercury__int__f_62_62_2_f_0(mercury__integer__V_16_16, (MR_Integer) 14);
            }
#line 806 "integer.m"
            mercury__integer__Mod_13 = (mercury__integer__V_16_16 & (MR_Integer) 16383);
#line 868 "integer.m"
            {
#line 868 "integer.m"
              MR_Word base;
#line 868 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 868 "integer.m"
              *mercury__integer__HeadVar__4_4 = base;
#line 868 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_13));
#line 868 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__TailDs_14));
#line 868 "integer.m"
            }
#line 868 "integer.m"
          }
#line 866 "integer.m"
      }
#line 866 "integer.m"
  }
#line 863 "integer.m"
}

#line 849 "integer.m"
static void MR_CALL 
mercury__integer__diff_pairs_4_p_0(
#line 849 "integer.m"
  MR_Integer * mercury__integer__Div_5,
#line 849 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 849 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 849 "integer.m"
  MR_Word * mercury__integer__Ds_10)
#line 849 "integer.m"
{
#line 852 "integer.m"
  {
#line 852 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 852 "integer.m"
    MR_Integer mercury__integer__L1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 852 "integer.m"
    MR_Word mercury__integer__D1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 852 "integer.m"
    MR_Integer mercury__integer__L2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 852 "integer.m"
    MR_Word mercury__integer__D2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));

#line 853 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_6 == mercury__integer__L2_8);
#line 855 "integer.m"
    if (mercury__integer__succeeded)
#line 854 "integer.m"
      {
#line 854 "integer.m"
        mercury__integer__diff_pairs_equal_4_p_0(mercury__integer__Div_5, mercury__integer__D1_7, mercury__integer__D2_9, mercury__integer__Ds_10);
#line 854 "integer.m"
        return;
      }
#line 855 "integer.m"
    else
#line 859 "integer.m"
      {
#line 859 "integer.m"
        MR_Integer mercury__integer__H1_11;
#line 859 "integer.m"
        MR_Word mercury__integer__T1_12;

#line 855 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_6 > mercury__integer__L2_8);
#line 855 "integer.m"
        if (mercury__integer__succeeded)
#line 855 "integer.m"
          {
#line 855 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_7)) == (MR_mktag((MR_Integer) 1)));
#line 855 "integer.m"
            if (mercury__integer__succeeded)
#line 855 "integer.m"
              {
#line 855 "integer.m"
                mercury__integer__H1_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 0)));
#line 855 "integer.m"
                mercury__integer__T1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 1)));
#line 855 "integer.m"
              }
#line 855 "integer.m"
          }
#line 859 "integer.m"
        if (mercury__integer__succeeded)
#line 856 "integer.m"
          {
#line 856 "integer.m"
            MR_Integer mercury__integer__Div1_13;
#line 856 "integer.m"
            MR_Word mercury__integer__Ds1_14;
#line 856 "integer.m"
            MR_Integer mercury__integer__Mod_15;
#line 856 "integer.m"
            MR_Word mercury__integer__V_16_16;
#line 856 "integer.m"
            MR_Integer mercury__integer__V_18_18 = (mercury__integer__L1_6 - (MR_Integer) 1);
#line 856 "integer.m"
            MR_Integer mercury__integer__V_20_20;

#line 856 "integer.m"
            {
#line 856 "integer.m"
              mercury__integer__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 856 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, 0) = ((MR_Box) (mercury__integer__V_18_18));
#line 856 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_16_16, 1) = ((MR_Box) (mercury__integer__T1_12));
#line 856 "integer.m"
            }
#line 856 "integer.m"
            {
#line 856 "integer.m"
              mercury__integer__diff_pairs_4_p_0(&mercury__integer__Div1_13, mercury__integer__V_16_16, mercury__integer__HeadVar__3_3, &mercury__integer__Ds1_14);
            }
#line 857 "integer.m"
            mercury__integer__V_20_20 = (mercury__integer__H1_11 + mercury__integer__Div1_13);
#line 805 "integer.m"
            {
#line 805 "integer.m"
              *mercury__integer__Div_5 = mercury__int__f_62_62_2_f_0(mercury__integer__V_20_20, (MR_Integer) 14);
            }
#line 806 "integer.m"
            mercury__integer__Mod_15 = (mercury__integer__V_20_20 & (MR_Integer) 16383);
#line 858 "integer.m"
            {
#line 858 "integer.m"
              MR_Word base;
#line 858 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 858 "integer.m"
              *mercury__integer__Ds_10 = base;
#line 858 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_15));
#line 858 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_14));
#line 858 "integer.m"
            }
#line 856 "integer.m"
          }
#line 859 "integer.m"
        else
#line 860 "integer.m"
          {
#line 860 "integer.m"
            {
#line 860 "integer.m"
              mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "predicate \140integer.diff_pairs\'/4", (MR_String) "invalid integer");
#line 860 "integer.m"
              return;
            }
#line 860 "integer.m"
          }
#line 859 "integer.m"
      }
#line 852 "integer.m"
  }
#line 849 "integer.m"
}

#line 842 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_minus_2_f_0(
#line 842 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 842 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 842 "integer.m"
{
#line 844 "integer.m"
  {
#line 844 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 844 "integer.m"
    MR_Word mercury__integer__Out_8;
#line 844 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 844 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 844 "integer.m"
    MR_Integer mercury__integer__Mod_9;
#line 844 "integer.m"
    MR_Word mercury__integer__Ds_10;
#line 844 "integer.m"
    MR_Integer mercury__integer__Len_11;
#line 844 "integer.m"
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 844 "integer.m"
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 845 "integer.m"
    {
#line 845 "integer.m"
      mercury__integer__diff_pairs_4_p_0(&mercury__integer__Mod_9, mercury__integer__HeadVar__1_1, mercury__integer__HeadVar__2_2, &mercury__integer__Ds_10);
    }
#line 846 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
#line 846 "integer.m"
    if (mercury__integer__succeeded)
#line 846 "integer.m"
      mercury__integer__Len_11 = mercury__integer__L1_4;
#line 846 "integer.m"
    else
#line 846 "integer.m"
      mercury__integer__Len_11 = mercury__integer__L2_6;
#line 847 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Mod_9 == (MR_Integer) 0);
#line 847 "integer.m"
    if (mercury__integer__succeeded)
#line 847 "integer.m"
      {
#line 847 "integer.m"
        MR_Word mercury__integer__V_14_14;

#line 847 "integer.m"
        {
#line 847 "integer.m"
          mercury__integer__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 847 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__Len_11));
#line 847 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__Ds_10));
#line 847 "integer.m"
        }
#line 847 "integer.m"
        {
#line 847 "integer.m"
          return mercury__integer__Out_8 = mercury__integer__decap_1_f_0(mercury__integer__V_14_14);
        }
#line 847 "integer.m"
      }
#line 847 "integer.m"
    else
#line 847 "integer.m"
      {
#line 847 "integer.m"
        MR_Integer mercury__integer__V_15_15 = (mercury__integer__Len_11 + (MR_Integer) 1);
#line 847 "integer.m"
        MR_Word mercury__integer__V_17_17;

#line 847 "integer.m"
        {
#line 847 "integer.m"
          mercury__integer__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, 0) = ((MR_Box) (mercury__integer__Mod_9));
#line 847 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_17_17, 1) = ((MR_Box) (mercury__integer__Ds_10));
#line 847 "integer.m"
        }
#line 847 "integer.m"
        {
#line 847 "integer.m"
          mercury__integer__Out_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 847 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Out_8, 0) = ((MR_Box) (mercury__integer__V_15_15));
#line 847 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Out_8, 1) = ((MR_Box) (mercury__integer__V_17_17));
#line 847 "integer.m"
        }
#line 847 "integer.m"
      }
#line 844 "integer.m"
    return mercury__integer__Out_8;
#line 844 "integer.m"
  }
#line 842 "integer.m"
}

#line 833 "integer.m"
static void MR_CALL 
mercury__integer__add_pairs_equal_4_p_0(
#line 833 "integer.m"
  MR_Integer * mercury__integer__HeadVar__1_1,
#line 833 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 833 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 833 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4)
#line 833 "integer.m"
{
#line 836 "integer.m"
  {
#line 836 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 836 "integer.m"
    if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 836 "integer.m"
      {
#line 836 "integer.m"
        *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 836 "integer.m"
        *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 836 "integer.m"
      }
#line 836 "integer.m"
    else
#line 836 "integer.m"
      {
#line 836 "integer.m"
        MR_Word mercury__integer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 836 "integer.m"
        MR_Integer mercury__integer__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));

#line 836 "integer.m"
        if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 837 "integer.m"
          {
#line 837 "integer.m"
            *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
#line 837 "integer.m"
            *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 837 "integer.m"
          }
#line 836 "integer.m"
        else
#line 838 "integer.m"
          {
#line 838 "integer.m"
            MR_Integer mercury__integer__Y_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 838 "integer.m"
            MR_Word mercury__integer__Ys_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 838 "integer.m"
            MR_Integer mercury__integer__Mod_13;
#line 838 "integer.m"
            MR_Word mercury__integer__TailDs_14;
#line 838 "integer.m"
            MR_Integer mercury__integer__DivTail_15;
#line 838 "integer.m"
            MR_Integer mercury__integer__V_16_16;
#line 838 "integer.m"
            MR_Integer mercury__integer__V_17_17;

#line 839 "integer.m"
            {
#line 839 "integer.m"
              mercury__integer__add_pairs_equal_4_p_0(&mercury__integer__DivTail_15, mercury__integer__V_18_18, mercury__integer__Ys_12, &mercury__integer__TailDs_14);
            }
#line 840 "integer.m"
            mercury__integer__V_17_17 = (mercury__integer__V_19_19 + mercury__integer__Y_11);
#line 840 "integer.m"
            mercury__integer__V_16_16 = (mercury__integer__V_17_17 + mercury__integer__DivTail_15);
#line 805 "integer.m"
            {
#line 805 "integer.m"
              *mercury__integer__HeadVar__1_1 = mercury__int__f_62_62_2_f_0(mercury__integer__V_16_16, (MR_Integer) 14);
            }
#line 806 "integer.m"
            mercury__integer__Mod_13 = (mercury__integer__V_16_16 & (MR_Integer) 16383);
#line 838 "integer.m"
            {
#line 838 "integer.m"
              MR_Word base;
#line 838 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "integer.m"
              *mercury__integer__HeadVar__4_4 = base;
#line 838 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_13));
#line 838 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__TailDs_14));
#line 838 "integer.m"
            }
#line 838 "integer.m"
          }
#line 836 "integer.m"
      }
#line 836 "integer.m"
  }
#line 833 "integer.m"
}

#line 815 "integer.m"
static void MR_CALL 
mercury__integer__add_pairs_4_p_0(
#line 815 "integer.m"
  MR_Integer * mercury__integer__Div_5,
#line 815 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2,
#line 815 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 815 "integer.m"
  MR_Word * mercury__integer__Ds_10)
#line 815 "integer.m"
{
#line 818 "integer.m"
  {
#line 818 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 818 "integer.m"
    MR_Integer mercury__integer__L1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 818 "integer.m"
    MR_Word mercury__integer__D1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 818 "integer.m"
    MR_Integer mercury__integer__L2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 818 "integer.m"
    MR_Word mercury__integer__D2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));

#line 819 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_6 == mercury__integer__L2_8);
#line 821 "integer.m"
    if (mercury__integer__succeeded)
#line 820 "integer.m"
      {
#line 820 "integer.m"
        mercury__integer__add_pairs_equal_4_p_0(mercury__integer__Div_5, mercury__integer__D1_7, mercury__integer__D2_9, mercury__integer__Ds_10);
#line 820 "integer.m"
        return;
      }
#line 821 "integer.m"
    else
#line 825 "integer.m"
      {
#line 825 "integer.m"
        MR_Integer mercury__integer__H2_11;
#line 825 "integer.m"
        MR_Word mercury__integer__T2_12;

#line 821 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_6 < mercury__integer__L2_8);
#line 821 "integer.m"
        if (mercury__integer__succeeded)
#line 821 "integer.m"
          {
#line 821 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_9)) == (MR_mktag((MR_Integer) 1)));
#line 821 "integer.m"
            if (mercury__integer__succeeded)
#line 821 "integer.m"
              {
#line 821 "integer.m"
                mercury__integer__H2_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_9, (MR_Integer) 0)));
#line 821 "integer.m"
                mercury__integer__T2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_9, (MR_Integer) 1)));
#line 821 "integer.m"
              }
#line 821 "integer.m"
          }
#line 825 "integer.m"
        if (mercury__integer__succeeded)
#line 822 "integer.m"
          {
#line 822 "integer.m"
            MR_Integer mercury__integer__Div1_13;
#line 822 "integer.m"
            MR_Word mercury__integer__Ds1_14;
#line 822 "integer.m"
            MR_Integer mercury__integer__Mod_15;
#line 822 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 822 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_8 - (MR_Integer) 1);
#line 822 "integer.m"
            MR_Integer mercury__integer__V_22_22;

#line 822 "integer.m"
            {
#line 822 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 822 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 822 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_12));
#line 822 "integer.m"
            }
#line 822 "integer.m"
            {
#line 822 "integer.m"
              mercury__integer__add_pairs_4_p_0(&mercury__integer__Div1_13, mercury__integer__HeadVar__2_2, mercury__integer__V_19_19, &mercury__integer__Ds1_14);
            }
#line 823 "integer.m"
            mercury__integer__V_22_22 = (mercury__integer__H2_11 + mercury__integer__Div1_13);
#line 805 "integer.m"
            {
#line 805 "integer.m"
              *mercury__integer__Div_5 = mercury__int__f_62_62_2_f_0(mercury__integer__V_22_22, (MR_Integer) 14);
            }
#line 806 "integer.m"
            mercury__integer__Mod_15 = (mercury__integer__V_22_22 & (MR_Integer) 16383);
#line 824 "integer.m"
            {
#line 824 "integer.m"
              MR_Word base;
#line 824 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "integer.m"
              *mercury__integer__Ds_10 = base;
#line 824 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_15));
#line 824 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_14));
#line 824 "integer.m"
            }
#line 822 "integer.m"
          }
#line 825 "integer.m"
        else
#line 829 "integer.m"
          {
#line 829 "integer.m"
            MR_Integer mercury__integer__H1_16;
#line 829 "integer.m"
            MR_Word mercury__integer__T1_17;

#line 825 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_6 > mercury__integer__L2_8);
#line 825 "integer.m"
            if (mercury__integer__succeeded)
#line 825 "integer.m"
              {
#line 825 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_7)) == (MR_mktag((MR_Integer) 1)));
#line 825 "integer.m"
                if (mercury__integer__succeeded)
#line 825 "integer.m"
                  {
#line 825 "integer.m"
                    mercury__integer__H1_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 0)));
#line 825 "integer.m"
                    mercury__integer__T1_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 1)));
#line 825 "integer.m"
                  }
#line 825 "integer.m"
              }
#line 829 "integer.m"
            if (mercury__integer__succeeded)
#line 826 "integer.m"
              {
#line 826 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 826 "integer.m"
                MR_Integer mercury__integer__V_25_25 = (mercury__integer__L1_6 - (MR_Integer) 1);
#line 826 "integer.m"
                MR_Integer mercury__integer__V_27_27;
#line 826 "integer.m"
                MR_Integer mercury__integer__Div1_31;
#line 826 "integer.m"
                MR_Word mercury__integer__Ds1_32;
#line 826 "integer.m"
                MR_Integer mercury__integer__Mod_33;

#line 826 "integer.m"
                {
#line 826 "integer.m"
                  mercury__integer__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 826 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 0) = ((MR_Box) (mercury__integer__V_25_25));
#line 826 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 1) = ((MR_Box) (mercury__integer__T1_17));
#line 826 "integer.m"
                }
#line 826 "integer.m"
                {
#line 826 "integer.m"
                  mercury__integer__add_pairs_4_p_0(&mercury__integer__Div1_31, mercury__integer__V_23_23, mercury__integer__HeadVar__3_3, &mercury__integer__Ds1_32);
                }
#line 827 "integer.m"
                mercury__integer__V_27_27 = (mercury__integer__H1_16 + mercury__integer__Div1_31);
#line 805 "integer.m"
                {
#line 805 "integer.m"
                  *mercury__integer__Div_5 = mercury__int__f_62_62_2_f_0(mercury__integer__V_27_27, (MR_Integer) 14);
                }
#line 806 "integer.m"
                mercury__integer__Mod_33 = (mercury__integer__V_27_27 & (MR_Integer) 16383);
#line 828 "integer.m"
                {
#line 828 "integer.m"
                  MR_Word base;
#line 828 "integer.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "integer.m"
                  *mercury__integer__Ds_10 = base;
#line 828 "integer.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_33));
#line 828 "integer.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_32));
#line 828 "integer.m"
                }
#line 826 "integer.m"
              }
#line 829 "integer.m"
            else
#line 830 "integer.m"
              {
#line 830 "integer.m"
                {
#line 830 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "predicate \140integer.add_pairs\'/4", (MR_String) "invalid integer");
#line 830 "integer.m"
                  return;
                }
#line 830 "integer.m"
              }
#line 829 "integer.m"
          }
#line 825 "integer.m"
      }
#line 818 "integer.m"
  }
#line 815 "integer.m"
}

#line 794 "integer.m"
static void MR_CALL 
mercury__integer__mul_by_digit_2_4_p_0(
#line 794 "integer.m"
  MR_Integer mercury__integer__D_1,
#line 794 "integer.m"
  MR_Integer * mercury__integer__HeadVar__2_2,
#line 794 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 794 "integer.m"
  MR_Word * mercury__integer__HeadVar__4_4)
#line 794 "integer.m"
{
#line 797 "integer.m"
  {
#line 797 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 797 "integer.m"
    if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 797 "integer.m"
      {
#line 797 "integer.m"
        *mercury__integer__HeadVar__2_2 = (MR_Integer) 0;
#line 797 "integer.m"
        *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 797 "integer.m"
      }
#line 797 "integer.m"
    else
#line 798 "integer.m"
      {
#line 798 "integer.m"
        MR_Integer mercury__integer__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
#line 798 "integer.m"
        MR_Word mercury__integer__Xs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 798 "integer.m"
        MR_Integer mercury__integer__Mod_10;
#line 798 "integer.m"
        MR_Word mercury__integer__NewXs_11;
#line 798 "integer.m"
        MR_Integer mercury__integer__DivXs_12;
#line 798 "integer.m"
        MR_Integer mercury__integer__V_13_13;
#line 798 "integer.m"
        MR_Integer mercury__integer__V_14_14;

#line 799 "integer.m"
        {
#line 799 "integer.m"
          mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__D_1, &mercury__integer__DivXs_12, mercury__integer__Xs_9, &mercury__integer__NewXs_11);
        }
#line 800 "integer.m"
        mercury__integer__V_14_14 = (mercury__integer__D_1 * mercury__integer__X_8);
#line 800 "integer.m"
        mercury__integer__V_13_13 = (mercury__integer__V_14_14 + mercury__integer__DivXs_12);
#line 805 "integer.m"
        {
#line 805 "integer.m"
          *mercury__integer__HeadVar__2_2 = mercury__int__f_62_62_2_f_0(mercury__integer__V_13_13, (MR_Integer) 14);
        }
#line 806 "integer.m"
        mercury__integer__Mod_10 = (mercury__integer__V_13_13 & (MR_Integer) 16383);
#line 798 "integer.m"
        {
#line 798 "integer.m"
          MR_Word base;
#line 798 "integer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "integer.m"
          *mercury__integer__HeadVar__4_4 = base;
#line 798 "integer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_10));
#line 798 "integer.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__NewXs_11));
#line 798 "integer.m"
        }
#line 798 "integer.m"
      }
#line 797 "integer.m"
  }
#line 794 "integer.m"
}

#line 788 "integer.m"
static MR_Word MR_CALL 
mercury__integer__mul_by_digit_2_f_0(
#line 788 "integer.m"
  MR_Integer mercury__integer__Digit_4,
#line 788 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 788 "integer.m"
{
#line 790 "integer.m"
  {
#line 790 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 790 "integer.m"
    MR_Word mercury__integer__Out_7;
#line 790 "integer.m"
    MR_Integer mercury__integer__Len_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 790 "integer.m"
    MR_Word mercury__integer__Digits0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 790 "integer.m"
    MR_Integer mercury__integer__Mod_8;
#line 790 "integer.m"
    MR_Word mercury__integer__Digits_9;

#line 791 "integer.m"
    {
#line 791 "integer.m"
      mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__Digit_4, &mercury__integer__Mod_8, mercury__integer__Digits0_6, &mercury__integer__Digits_9);
    }
#line 792 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Mod_8 == (MR_Integer) 0);
#line 792 "integer.m"
    if (mercury__integer__succeeded)
#line 792 "integer.m"
      {
#line 792 "integer.m"
        mercury__integer__Out_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 792 "integer.m"
        MR_hl_field(MR_mktag(0), mercury__integer__Out_7, 0) = ((MR_Box) (mercury__integer__Len_5));
#line 792 "integer.m"
        MR_hl_field(MR_mktag(0), mercury__integer__Out_7, 1) = ((MR_Box) (mercury__integer__Digits_9));
#line 792 "integer.m"
      }
#line 792 "integer.m"
    else
#line 792 "integer.m"
      {
#line 792 "integer.m"
        MR_Integer mercury__integer__V_10_10 = (mercury__integer__Len_5 + (MR_Integer) 1);
#line 792 "integer.m"
        MR_Word mercury__integer__V_12_12;

#line 792 "integer.m"
        {
#line 792 "integer.m"
          mercury__integer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_12_12, 0) = ((MR_Box) (mercury__integer__Mod_8));
#line 792 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__V_12_12, 1) = ((MR_Box) (mercury__integer__Digits_9));
#line 792 "integer.m"
        }
#line 792 "integer.m"
        {
#line 792 "integer.m"
          mercury__integer__Out_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 792 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Out_7, 0) = ((MR_Box) (mercury__integer__V_10_10));
#line 792 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Out_7, 1) = ((MR_Box) (mercury__integer__V_12_12));
#line 792 "integer.m"
        }
#line 792 "integer.m"
      }
#line 790 "integer.m"
    return mercury__integer__Out_7;
#line 790 "integer.m"
  }
#line 788 "integer.m"
}

#line 783 "integer.m"
static MR_Word MR_CALL 
mercury__integer__mul_base_2_1_f_0(
#line 783 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 783 "integer.m"
{
#line 785 "integer.m"
  {
#line 785 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 785 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;

#line 785 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 785 "integer.m"
      {
#line 785 "integer.m"
        MR_Word mercury__integer__V_4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 785 "integer.m"
        mercury__integer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__integer_scalar_common_1[9]);
#line 785 "integer.m"
      }
#line 785 "integer.m"
    else
#line 786 "integer.m"
      {
#line 786 "integer.m"
        MR_Integer mercury__integer__H_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 786 "integer.m"
        MR_Word mercury__integer__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 786 "integer.m"
        MR_Word mercury__integer__V_7_7;

#line 786 "integer.m"
        {
#line 786 "integer.m"
          mercury__integer__V_7_7 = mercury__integer__mul_base_2_1_f_0(mercury__integer__T_6);
        }
#line 786 "integer.m"
        {
#line 786 "integer.m"
          mercury__integer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__H_5));
#line 786 "integer.m"
          MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__V_7_7));
#line 786 "integer.m"
        }
#line 786 "integer.m"
      }
#line 785 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 785 "integer.m"
  }
#line 783 "integer.m"
}

#line 760 "integer.m"
static MR_Word MR_CALL 
mercury__integer__pos_int_to_digits_2_2_f_0(
#line 760 "integer.m"
  MR_Integer mercury__integer__D_4,
#line 760 "integer.m"
  MR_Word mercury__integer__Tail_5)
#line 760 "integer.m"
{
#line 765 "integer.m"
  while (MR_TRUE)
#line 765 "integer.m"
    {
#line 765 "integer.m"
      /* tailcall optimized into a loop */
#line 765 "integer.m"
      {
#line 765 "integer.m"
        MR_bool mercury__integer__succeeded = (mercury__integer__D_4 == (MR_Integer) 0);
#line 765 "integer.m"
        MR_Word mercury__integer__Result_6;

#line 765 "integer.m"
        if (mercury__integer__succeeded)
#line 764 "integer.m"
          mercury__integer__Result_6 = mercury__integer__Tail_5;
#line 765 "integer.m"
        else
#line 766 "integer.m"
          {
#line 766 "integer.m"
            MR_Integer mercury__integer__Length_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_5, (MR_Integer) 0)));
#line 766 "integer.m"
            MR_Word mercury__integer__Digits_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_5, (MR_Integer) 1)));
#line 766 "integer.m"
            MR_Integer mercury__integer__Div_9;
#line 766 "integer.m"
            MR_Integer mercury__integer__Mod_10;
#line 766 "integer.m"
            MR_Word mercury__integer__V_11_11;
#line 766 "integer.m"
            MR_Integer mercury__integer__V_12_12;
#line 766 "integer.m"
            MR_Word mercury__integer__V_14_14;

#line 805 "integer.m"
            {
#line 805 "integer.m"
              mercury__integer__Div_9 = mercury__int__f_62_62_2_f_0(mercury__integer__D_4, (MR_Integer) 14);
            }
#line 806 "integer.m"
            mercury__integer__Mod_10 = (mercury__integer__D_4 & (MR_Integer) 16383);
#line 769 "integer.m"
            mercury__integer__V_12_12 = (mercury__integer__Length_7 + (MR_Integer) 1);
#line 769 "integer.m"
            {
#line 769 "integer.m"
              mercury__integer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__Mod_10));
#line 769 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__Digits_8));
#line 769 "integer.m"
            }
#line 769 "integer.m"
            {
#line 769 "integer.m"
              mercury__integer__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 769 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 0) = ((MR_Box) (mercury__integer__V_12_12));
#line 769 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, 1) = ((MR_Box) (mercury__integer__V_14_14));
#line 769 "integer.m"
            }
#line 768 "integer.m"
            /* direct tailcall eliminated */
#line 768 "integer.m"
            {
#line 768 "integer.m"
              MR_Integer mercury__integer__D__tmp_copy_4 = mercury__integer__Div_9;
#line 768 "integer.m"
              MR_Word mercury__integer__Tail__tmp_copy_5 = mercury__integer__V_11_11;

#line 768 "integer.m"
              mercury__integer__Tail_5 = mercury__integer__Tail__tmp_copy_5;
#line 768 "integer.m"
              mercury__integer__D_4 = mercury__integer__D__tmp_copy_4;
#line 768 "integer.m"
            }
#line 768 "integer.m"
            continue;
#line 766 "integer.m"
          }
#line 765 "integer.m"
        return mercury__integer__Result_6;
#line 765 "integer.m"
      }
#line 765 "integer.m"
      break;
#line 765 "integer.m"
    }
#line 760 "integer.m"
}

#line 752 "integer.m"
MR_Integer MR_CALL 
mercury__integer__integer_signum_1_f_0(
#line 752 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 752 "integer.m"
{
#line 754 "integer.m"
  {
#line 754 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 754 "integer.m"
    MR_Integer mercury__integer__HeadVar__2_2;
#line 754 "integer.m"
    MR_Integer mercury__integer__Sign_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 754 "integer.m"
    MR_Word mercury__integer__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

#line 754 "integer.m"
    {
#line 754 "integer.m"
      return mercury__integer__HeadVar__2_2 = mercury__integer__signum_1_f_0(mercury__integer__Sign_3);
    }
#line 754 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 754 "integer.m"
  }
#line 752 "integer.m"
}

#line 748 "integer.m"
MR_Integer MR_CALL 
mercury__integer__signum_1_f_0(
#line 748 "integer.m"
  MR_Integer mercury__integer__N_3)
#line 748 "integer.m"
{
#line 750 "integer.m"
  {
#line 750 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__N_3 < (MR_Integer) 0);
#line 750 "integer.m"
    MR_Integer mercury__integer__HeadVar__2_2;

#line 750 "integer.m"
    if (mercury__integer__succeeded)
#line 750 "integer.m"
      mercury__integer__HeadVar__2_2 = (MR_Integer) -1;
#line 750 "integer.m"
    else
#line 750 "integer.m"
      {
#line 750 "integer.m"
        mercury__integer__succeeded = (mercury__integer__N_3 == (MR_Integer) 0);
#line 750 "integer.m"
        if (mercury__integer__succeeded)
#line 750 "integer.m"
          mercury__integer__HeadVar__2_2 = (MR_Integer) 0;
#line 750 "integer.m"
        else
#line 750 "integer.m"
          mercury__integer__HeadVar__2_2 = (MR_Integer) 1;
#line 750 "integer.m"
      }
#line 750 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 750 "integer.m"
  }
#line 748 "integer.m"
}

#line 725 "integer.m"
MR_Word MR_CALL 
mercury__integer__int_to_integer_1_f_0(
#line 725 "integer.m"
  MR_Integer mercury__integer__D_3)
#line 725 "integer.m"
{
#line 730 "integer.m"
  {
#line 730 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__D_3 == (MR_Integer) 0);
#line 730 "integer.m"
    MR_Word mercury__integer__Int_4;

#line 730 "integer.m"
    if (mercury__integer__succeeded)
#line 1209 "integer.m"
      {
#line 1209 "integer.m"
        MR_Word mercury__integer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1209 "integer.m"
        mercury__integer__Int_4 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1209 "integer.m"
      }
#line 730 "integer.m"
    else
#line 732 "integer.m"
      {
#line 730 "integer.m"
        MR_Integer mercury__integer__V_6_6;

#line 730 "integer.m"
        mercury__integer__succeeded = (mercury__integer__D_3 > (MR_Integer) 0);
#line 730 "integer.m"
        if (mercury__integer__succeeded)
#line 730 "integer.m"
          {
#line 298 "integer.m"
            mercury__integer__V_6_6 = (MR_Integer) 16384;
#line 730 "integer.m"
            mercury__integer__succeeded = (mercury__integer__D_3 < mercury__integer__V_6_6);
#line 730 "integer.m"
          }
#line 732 "integer.m"
        if (mercury__integer__succeeded)
#line 731 "integer.m"
          {
#line 731 "integer.m"
            MR_Word mercury__integer__V_8_8;
#line 731 "integer.m"
            MR_Word mercury__integer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 731 "integer.m"
            {
#line 731 "integer.m"
              mercury__integer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_8_8, 0) = ((MR_Box) (mercury__integer__D_3));
#line 731 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_8_8, 1) = ((MR_Box) (mercury__integer__V_9_9));
#line 731 "integer.m"
            }
#line 731 "integer.m"
            {
#line 731 "integer.m"
              mercury__integer__Int_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 731 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Int_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 731 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Int_4, 1) = ((MR_Box) (mercury__integer__V_8_8));
#line 731 "integer.m"
            }
#line 731 "integer.m"
          }
#line 732 "integer.m"
        else
#line 734 "integer.m"
          {
#line 732 "integer.m"
            MR_Integer mercury__integer__V_11_11;
#line 732 "integer.m"
            MR_Integer mercury__integer__V_12_12;

#line 732 "integer.m"
            mercury__integer__succeeded = (mercury__integer__D_3 < (MR_Integer) 0);
#line 732 "integer.m"
            if (mercury__integer__succeeded)
#line 732 "integer.m"
              {
#line 298 "integer.m"
                mercury__integer__V_12_12 = (MR_Integer) 16384;
#line 732 "integer.m"
                mercury__integer__V_11_11 = ((MR_Integer) 0 - mercury__integer__V_12_12);
#line 732 "integer.m"
                mercury__integer__succeeded = (mercury__integer__D_3 > mercury__integer__V_11_11);
#line 732 "integer.m"
              }
#line 734 "integer.m"
            if (mercury__integer__succeeded)
#line 733 "integer.m"
              {
#line 733 "integer.m"
                MR_Word mercury__integer__V_14_14;
#line 733 "integer.m"
                MR_Word mercury__integer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 733 "integer.m"
                {
#line 733 "integer.m"
                  mercury__integer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__D_3));
#line 733 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__V_15_15));
#line 733 "integer.m"
                }
#line 733 "integer.m"
                {
#line 733 "integer.m"
                  mercury__integer__Int_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 733 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Int_4, 0) = ((MR_Box) ((MR_Integer) -1));
#line 733 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Int_4, 1) = ((MR_Box) (mercury__integer__V_14_14));
#line 733 "integer.m"
                }
#line 733 "integer.m"
              }
#line 734 "integer.m"
            else
#line 738 "integer.m"
              {
#line 735 "integer.m"
                MR_Integer mercury__integer__V_22_22;

#line 252 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__int_to_integer_1_f_0

	MR_Integer Min;

		{
#line 252 "int.opt"

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
#line 252 "int.opt"
}
#line 735 "integer.m"
                mercury__integer__succeeded = (mercury__integer__D_3 == mercury__integer__V_22_22);
#line 738 "integer.m"
                if (mercury__integer__succeeded)
#line 737 "integer.m"
                  {
#line 737 "integer.m"
                    MR_Word mercury__integer__V_16_16;
#line 737 "integer.m"
                    MR_Integer mercury__integer__V_17_17 = (mercury__integer__D_3 + (MR_Integer) 1);
#line 737 "integer.m"
                    MR_Word mercury__integer__V_19_19;
#line 737 "integer.m"
                    MR_Word mercury__integer__V_32_32;
#line 737 "integer.m"
                    MR_Integer mercury__integer__S_33;
#line 737 "integer.m"
                    MR_Word mercury__integer__Digits0_34;
#line 737 "integer.m"
                    MR_Word mercury__integer__Digits_35;
#line 737 "integer.m"
                    MR_Integer mercury__integer__V_36_36;

#line 714 "integer.m"
                    {
#line 714 "integer.m"
                      mercury__integer__V_16_16 = mercury__integer__int_to_integer_1_f_0(mercury__integer__V_17_17);
                    }
#line 1211 "integer.m"
                    mercury__integer__V_19_19 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 438 "integer.m"
                    mercury__integer__S_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 0)));
#line 438 "integer.m"
                    mercury__integer__Digits0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 1)));
#line 438 "integer.m"
                    mercury__integer__V_36_36 = ((MR_Integer) 0 - mercury__integer__S_33);
#line 439 "integer.m"
                    {
#line 439 "integer.m"
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_34, &mercury__integer__Digits_35);
                    }
#line 438 "integer.m"
                    {
#line 438 "integer.m"
                      mercury__integer__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_32_32, 0) = ((MR_Box) (mercury__integer__V_36_36));
#line 438 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_32_32, 1) = ((MR_Box) (mercury__integer__Digits_35));
#line 438 "integer.m"
                    }
#line 346 "integer.m"
                    {
#line 346 "integer.m"
                      return mercury__integer__Int_4 = mercury__integer__big_plus_2_f_0(mercury__integer__V_16_16, mercury__integer__V_32_32);
                    }
#line 737 "integer.m"
                  }
#line 738 "integer.m"
                else
#line 739 "integer.m"
                  {
#line 739 "integer.m"
                    MR_Word mercury__integer__V_20_20;
#line 739 "integer.m"
                    MR_Integer mercury__integer__V_21_21;
#line 739 "integer.m"
                    MR_Word mercury__integer__V_40_40;
#line 739 "integer.m"
                    MR_Word mercury__integer__V_42_42;

#line 52 "int.opt"
                    {
#line 52 "int.opt"
                      mercury__int__abs_2_p_0(mercury__integer__D_3, &mercury__integer__V_21_21);
                    }
#line 1209 "integer.m"
                    mercury__integer__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1209 "integer.m"
                    mercury__integer__V_40_40 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 758 "integer.m"
                    {
#line 758 "integer.m"
                      mercury__integer__V_20_20 = mercury__integer__pos_int_to_digits_2_2_f_0(mercury__integer__V_21_21, mercury__integer__V_40_40);
                    }
#line 739 "integer.m"
                    {
#line 739 "integer.m"
                      return mercury__integer__Int_4 = mercury__integer__big_sign_2_f_0(mercury__integer__D_3, mercury__integer__V_20_20);
                    }
#line 739 "integer.m"
                  }
#line 738 "integer.m"
              }
#line 734 "integer.m"
          }
#line 732 "integer.m"
      }
#line 730 "integer.m"
    return mercury__integer__Int_4;
#line 730 "integer.m"
  }
#line 725 "integer.m"
}

#line 685 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_plus_2_f_0(
#line 685 "integer.m"
  MR_Word mercury__integer__X_4,
#line 685 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 685 "integer.m"
{
#line 690 "integer.m"
  {
#line 690 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 690 "integer.m"
    MR_Word mercury__integer__Sum_6;
#line 1200 "integer.m"
    MR_Integer mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 1200 "integer.m"
    MR_Word mercury__integer__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 1200 "integer.m"
    mercury__integer__succeeded = (mercury__integer__V_15_15 == (MR_Integer) 0);
#line 1200 "integer.m"
    if (mercury__integer__succeeded)
#line 1200 "integer.m"
      mercury__integer__succeeded = (mercury__integer__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 690 "integer.m"
    if (mercury__integer__succeeded)
#line 689 "integer.m"
      mercury__integer__Sum_6 = mercury__integer__Y_5;
#line 690 "integer.m"
    else
#line 692 "integer.m"
      {
#line 1200 "integer.m"
        MR_Integer mercury__integer__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 1200 "integer.m"
        MR_Word mercury__integer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 1200 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_17_17 == (MR_Integer) 0);
#line 1200 "integer.m"
        if (mercury__integer__succeeded)
#line 1200 "integer.m"
          mercury__integer__succeeded = (mercury__integer__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 692 "integer.m"
        if (mercury__integer__succeeded)
#line 691 "integer.m"
          mercury__integer__Sum_6 = mercury__integer__X_4;
#line 692 "integer.m"
        else
#line 693 "integer.m"
          {
#line 693 "integer.m"
            MR_Word mercury__integer__AbsX_7;
#line 693 "integer.m"
            MR_Word mercury__integer__AbsY_8;
#line 693 "integer.m"
            MR_Integer mercury__integer__SignX_9;
#line 693 "integer.m"
            MR_Integer mercury__integer__SignY_10;
#line 693 "integer.m"
            MR_Integer mercury__integer__Sign_19;
#line 693 "integer.m"
            MR_Integer mercury__integer__Sign_21;
#line 754 "integer.m"
            MR_Word mercury__integer__V_20_20;
#line 754 "integer.m"
            MR_Word mercury__integer__V_22_22;

#line 693 "integer.m"
            {
#line 693 "integer.m"
              mercury__integer__AbsX_7 = mercury__integer__big_abs_1_f_0(mercury__integer__X_4);
            }
#line 694 "integer.m"
            {
#line 694 "integer.m"
              mercury__integer__AbsY_8 = mercury__integer__big_abs_1_f_0(mercury__integer__Y_5);
            }
#line 754 "integer.m"
            mercury__integer__Sign_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 754 "integer.m"
            mercury__integer__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));
#line 754 "integer.m"
            {
#line 754 "integer.m"
              mercury__integer__SignX_9 = mercury__integer__signum_1_f_0(mercury__integer__Sign_19);
            }
#line 754 "integer.m"
            mercury__integer__Sign_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 754 "integer.m"
            mercury__integer__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
#line 754 "integer.m"
            {
#line 754 "integer.m"
              mercury__integer__SignY_10 = mercury__integer__signum_1_f_0(mercury__integer__Sign_21);
            }
#line 697 "integer.m"
            mercury__integer__succeeded = (mercury__integer__SignX_9 == mercury__integer__SignY_10);
#line 699 "integer.m"
            if (mercury__integer__succeeded)
#line 698 "integer.m"
              {
#line 698 "integer.m"
                MR_Word mercury__integer__V_12_12;
#line 698 "integer.m"
                MR_Integer mercury__integer__L1_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 0)));
#line 698 "integer.m"
                MR_Integer mercury__integer__L2_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 0)));
#line 698 "integer.m"
                MR_Integer mercury__integer__Div_28;
#line 698 "integer.m"
                MR_Word mercury__integer__Ds_29;
#line 698 "integer.m"
                MR_Integer mercury__integer__Len_30;
#line 810 "integer.m"
                MR_Word mercury__integer__D1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 1)));
#line 810 "integer.m"
                MR_Word mercury__integer__D2_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 1)));

#line 811 "integer.m"
                {
#line 811 "integer.m"
                  mercury__integer__add_pairs_4_p_0(&mercury__integer__Div_28, mercury__integer__AbsX_7, mercury__integer__AbsY_8, &mercury__integer__Ds_29);
                }
#line 812 "integer.m"
                mercury__integer__succeeded = (mercury__integer__L1_24 > mercury__integer__L2_26);
#line 812 "integer.m"
                if (mercury__integer__succeeded)
#line 812 "integer.m"
                  mercury__integer__Len_30 = mercury__integer__L1_24;
#line 812 "integer.m"
                else
#line 812 "integer.m"
                  mercury__integer__Len_30 = mercury__integer__L2_26;
#line 813 "integer.m"
                mercury__integer__succeeded = (mercury__integer__Div_28 == (MR_Integer) 0);
#line 813 "integer.m"
                if (mercury__integer__succeeded)
#line 813 "integer.m"
                  {
#line 813 "integer.m"
                    mercury__integer__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 813 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 0) = ((MR_Box) (mercury__integer__Len_30));
#line 813 "integer.m"
                    MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 1) = ((MR_Box) (mercury__integer__Ds_29));
#line 813 "integer.m"
                  }
#line 813 "integer.m"
                else
#line 813 "integer.m"
                  {
#line 813 "integer.m"
                    MR_Integer mercury__integer__V_33_33 = (mercury__integer__Len_30 + (MR_Integer) 1);
#line 813 "integer.m"
                    MR_Word mercury__integer__V_35_35;

#line 813 "integer.m"
                    {
#line 813 "integer.m"
                      mercury__integer__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_35_35, 0) = ((MR_Box) (mercury__integer__Div_28));
#line 813 "integer.m"
                      MR_hl_field(MR_mktag(1), mercury__integer__V_35_35, 1) = ((MR_Box) (mercury__integer__Ds_29));
#line 813 "integer.m"
                    }
#line 813 "integer.m"
                    {
#line 813 "integer.m"
                      mercury__integer__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 813 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 0) = ((MR_Box) (mercury__integer__V_33_33));
#line 813 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 1) = ((MR_Box) (mercury__integer__V_35_35));
#line 813 "integer.m"
                    }
#line 813 "integer.m"
                  }
#line 698 "integer.m"
                {
#line 698 "integer.m"
                  return mercury__integer__Sum_6 = mercury__integer__big_sign_2_f_0(mercury__integer__SignX_9, mercury__integer__V_12_12);
                }
#line 698 "integer.m"
              }
#line 699 "integer.m"
            else
#line 700 "integer.m"
              {
#line 700 "integer.m"
                MR_Word mercury__integer__C_11;

#line 683 "integer.m"
                {
#line 683 "integer.m"
                  mercury__integer____Compare____integer_0_0(&mercury__integer__C_11, mercury__integer__AbsX_7, mercury__integer__AbsY_8);
                }
#line 704 "integer.m"
#line 704 "integer.m"
                switch (mercury__integer__C_11) {
#line 704 "integer.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 704 "integer.m"
                  case (MR_Integer) 1:
#line 702 "integer.m"
                    {
#line 702 "integer.m"
                      MR_Word mercury__integer__V_14_14;
#line 702 "integer.m"
                      MR_Integer mercury__integer__L1_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 0)));
#line 702 "integer.m"
                      MR_Integer mercury__integer__L2_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 0)));
#line 702 "integer.m"
                      MR_Integer mercury__integer__Mod_45;
#line 702 "integer.m"
                      MR_Word mercury__integer__Ds_46;
#line 702 "integer.m"
                      MR_Integer mercury__integer__Len_47;
#line 844 "integer.m"
                      MR_Word mercury__integer__D1_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 1)));
#line 844 "integer.m"
                      MR_Word mercury__integer__D2_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 1)));

#line 845 "integer.m"
                      {
#line 845 "integer.m"
                        mercury__integer__diff_pairs_4_p_0(&mercury__integer__Mod_45, mercury__integer__AbsY_8, mercury__integer__AbsX_7, &mercury__integer__Ds_46);
                      }
#line 846 "integer.m"
                      mercury__integer__succeeded = (mercury__integer__L1_41 > mercury__integer__L2_43);
#line 846 "integer.m"
                      if (mercury__integer__succeeded)
#line 846 "integer.m"
                        mercury__integer__Len_47 = mercury__integer__L1_41;
#line 846 "integer.m"
                      else
#line 846 "integer.m"
                        mercury__integer__Len_47 = mercury__integer__L2_43;
#line 847 "integer.m"
                      mercury__integer__succeeded = (mercury__integer__Mod_45 == (MR_Integer) 0);
#line 847 "integer.m"
                      if (mercury__integer__succeeded)
#line 847 "integer.m"
                        {
#line 847 "integer.m"
                          MR_Word mercury__integer__V_50_50;

#line 847 "integer.m"
                          {
#line 847 "integer.m"
                            mercury__integer__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 847 "integer.m"
                            MR_hl_field(MR_mktag(0), mercury__integer__V_50_50, 0) = ((MR_Box) (mercury__integer__Len_47));
#line 847 "integer.m"
                            MR_hl_field(MR_mktag(0), mercury__integer__V_50_50, 1) = ((MR_Box) (mercury__integer__Ds_46));
#line 847 "integer.m"
                          }
#line 847 "integer.m"
                          {
#line 847 "integer.m"
                            mercury__integer__V_14_14 = mercury__integer__decap_1_f_0(mercury__integer__V_50_50);
                          }
#line 847 "integer.m"
                        }
#line 847 "integer.m"
                      else
#line 847 "integer.m"
                        {
#line 847 "integer.m"
                          MR_Integer mercury__integer__V_51_51 = (mercury__integer__Len_47 + (MR_Integer) 1);
#line 847 "integer.m"
                          MR_Word mercury__integer__V_53_53;

#line 847 "integer.m"
                          {
#line 847 "integer.m"
                            mercury__integer__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "integer.m"
                            MR_hl_field(MR_mktag(1), mercury__integer__V_53_53, 0) = ((MR_Box) (mercury__integer__Mod_45));
#line 847 "integer.m"
                            MR_hl_field(MR_mktag(1), mercury__integer__V_53_53, 1) = ((MR_Box) (mercury__integer__Ds_46));
#line 847 "integer.m"
                          }
#line 847 "integer.m"
                          {
#line 847 "integer.m"
                            mercury__integer__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 847 "integer.m"
                            MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 0) = ((MR_Box) (mercury__integer__V_51_51));
#line 847 "integer.m"
                            MR_hl_field(MR_mktag(0), mercury__integer__V_14_14, 1) = ((MR_Box) (mercury__integer__V_53_53));
#line 847 "integer.m"
                          }
#line 847 "integer.m"
                        }
#line 703 "integer.m"
                      {
#line 703 "integer.m"
                        return mercury__integer__Sum_6 = mercury__integer__big_sign_2_f_0(mercury__integer__SignY_10, mercury__integer__V_14_14);
                      }
#line 702 "integer.m"
                    }
#line 704 "integer.m"
                    break;
#line 704 "integer.m"
                  case (MR_Integer) 0:
#line 1209 "integer.m"
                    {
#line 1209 "integer.m"
                      MR_Word mercury__integer__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1209 "integer.m"
                      mercury__integer__Sum_6 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1209 "integer.m"
                    }
#line 704 "integer.m"
                    break;
#line 704 "integer.m"
                  case (MR_Integer) 2:
#line 705 "integer.m"
                    {
#line 705 "integer.m"
                      MR_Word mercury__integer__V_13_13;
#line 705 "integer.m"
                      MR_Integer mercury__integer__L1_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 0)));
#line 705 "integer.m"
                      MR_Integer mercury__integer__L2_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 0)));
#line 705 "integer.m"
                      MR_Integer mercury__integer__Mod_61;
#line 705 "integer.m"
                      MR_Word mercury__integer__Ds_62;
#line 705 "integer.m"
                      MR_Integer mercury__integer__Len_63;
#line 844 "integer.m"
                      MR_Word mercury__integer__D1_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 1)));
#line 844 "integer.m"
                      MR_Word mercury__integer__D2_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 1)));

#line 845 "integer.m"
                      {
#line 845 "integer.m"
                        mercury__integer__diff_pairs_4_p_0(&mercury__integer__Mod_61, mercury__integer__AbsX_7, mercury__integer__AbsY_8, &mercury__integer__Ds_62);
                      }
#line 846 "integer.m"
                      mercury__integer__succeeded = (mercury__integer__L1_57 > mercury__integer__L2_59);
#line 846 "integer.m"
                      if (mercury__integer__succeeded)
#line 846 "integer.m"
                        mercury__integer__Len_63 = mercury__integer__L1_57;
#line 846 "integer.m"
                      else
#line 846 "integer.m"
                        mercury__integer__Len_63 = mercury__integer__L2_59;
#line 847 "integer.m"
                      mercury__integer__succeeded = (mercury__integer__Mod_61 == (MR_Integer) 0);
#line 847 "integer.m"
                      if (mercury__integer__succeeded)
#line 847 "integer.m"
                        {
#line 847 "integer.m"
                          MR_Word mercury__integer__V_66_66;

#line 847 "integer.m"
                          {
#line 847 "integer.m"
                            mercury__integer__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 847 "integer.m"
                            MR_hl_field(MR_mktag(0), mercury__integer__V_66_66, 0) = ((MR_Box) (mercury__integer__Len_63));
#line 847 "integer.m"
                            MR_hl_field(MR_mktag(0), mercury__integer__V_66_66, 1) = ((MR_Box) (mercury__integer__Ds_62));
#line 847 "integer.m"
                          }
#line 847 "integer.m"
                          {
#line 847 "integer.m"
                            mercury__integer__V_13_13 = mercury__integer__decap_1_f_0(mercury__integer__V_66_66);
                          }
#line 847 "integer.m"
                        }
#line 847 "integer.m"
                      else
#line 847 "integer.m"
                        {
#line 847 "integer.m"
                          MR_Integer mercury__integer__V_67_67 = (mercury__integer__Len_63 + (MR_Integer) 1);
#line 847 "integer.m"
                          MR_Word mercury__integer__V_69_69;

#line 847 "integer.m"
                          {
#line 847 "integer.m"
                            mercury__integer__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "integer.m"
                            MR_hl_field(MR_mktag(1), mercury__integer__V_69_69, 0) = ((MR_Box) (mercury__integer__Mod_61));
#line 847 "integer.m"
                            MR_hl_field(MR_mktag(1), mercury__integer__V_69_69, 1) = ((MR_Box) (mercury__integer__Ds_62));
#line 847 "integer.m"
                          }
#line 847 "integer.m"
                          {
#line 847 "integer.m"
                            mercury__integer__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 847 "integer.m"
                            MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 0) = ((MR_Box) (mercury__integer__V_67_67));
#line 847 "integer.m"
                            MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, 1) = ((MR_Box) (mercury__integer__V_69_69));
#line 847 "integer.m"
                          }
#line 847 "integer.m"
                        }
#line 706 "integer.m"
                      {
#line 706 "integer.m"
                        return mercury__integer__Sum_6 = mercury__integer__big_sign_2_f_0(mercury__integer__SignX_9, mercury__integer__V_13_13);
                      }
#line 705 "integer.m"
                    }
#line 704 "integer.m"
                    break;
#line 704 "integer.m"
                }
#line 700 "integer.m"
              }
#line 693 "integer.m"
          }
#line 692 "integer.m"
      }
#line 690 "integer.m"
    return mercury__integer__Sum_6;
#line 690 "integer.m"
  }
#line 685 "integer.m"
}

#line 675 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_cmp_2_f_0(
#line 675 "integer.m"
  MR_Word mercury__integer__X_4,
#line 675 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 675 "integer.m"
{
#line 678 "integer.m"
  {
#line 678 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 678 "integer.m"
    MR_Word mercury__integer__Result_6;

#line 678 "integer.m"
    {
#line 678 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__Result_6, mercury__integer__X_4, mercury__integer__Y_5);
    }
#line 678 "integer.m"
    return mercury__integer__Result_6;
#line 678 "integer.m"
  }
#line 675 "integer.m"
}

#line 670 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_xor_not_2_f_0(
#line 670 "integer.m"
  MR_Word mercury__integer__X1_4,
#line 670 "integer.m"
  MR_Word mercury__integer__NotX2_5)
#line 670 "integer.m"
{
#line 672 "integer.m"
  {
#line 672 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 672 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 672 "integer.m"
    MR_Word mercury__integer__V_6_6;
#line 672 "integer.m"
    MR_Word mercury__integer__V_7_7;
#line 672 "integer.m"
    MR_Word mercury__integer__V_8_8;
#line 672 "integer.m"
    MR_Word mercury__integer__V_11_11;
#line 672 "integer.m"
    MR_Word mercury__integer__V_14_14;
#line 672 "integer.m"
    MR_Word mercury__integer__V_17_17;
#line 672 "integer.m"
    MR_Word mercury__integer__V_19_19;
#line 672 "integer.m"
    MR_Word mercury__integer__V_20_20;
#line 672 "integer.m"
    MR_Integer mercury__integer__S_25;
#line 672 "integer.m"
    MR_Word mercury__integer__Digits0_26;
#line 672 "integer.m"
    MR_Word mercury__integer__Digits_27;
#line 672 "integer.m"
    MR_Integer mercury__integer__V_28_28;

#line 570 "integer.m"
    {
#line 570 "integer.m"
      mercury__integer__V_11_11 = mercury__integer__or_pairs_2_f_0(mercury__integer__X1_4, mercury__integer__NotX2_5);
    }
#line 570 "integer.m"
    {
#line 570 "integer.m"
      mercury__integer__V_7_7 = mercury__integer__decap_1_f_0(mercury__integer__V_11_11);
    }
#line 621 "integer.m"
    {
#line 621 "integer.m"
      mercury__integer__V_14_14 = mercury__integer__and_pairs_2_f_0(mercury__integer__X1_4, mercury__integer__NotX2_5);
    }
#line 621 "integer.m"
    {
#line 621 "integer.m"
      mercury__integer__V_8_8 = mercury__integer__decap_1_f_0(mercury__integer__V_14_14);
    }
#line 646 "integer.m"
    {
#line 646 "integer.m"
      mercury__integer__V_17_17 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__V_7_7, mercury__integer__V_8_8);
    }
#line 646 "integer.m"
    {
#line 646 "integer.m"
      mercury__integer__V_6_6 = mercury__integer__decap_1_f_0(mercury__integer__V_17_17);
    }
#line 1211 "integer.m"
    mercury__integer__V_20_20 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 418 "integer.m"
    {
#line 418 "integer.m"
      mercury__integer__V_19_19 = mercury__integer__big_plus_2_f_0(mercury__integer__V_6_6, mercury__integer__V_20_20);
    }
#line 438 "integer.m"
    mercury__integer__S_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 0)));
#line 438 "integer.m"
    mercury__integer__Digits0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 1)));
#line 438 "integer.m"
    mercury__integer__V_28_28 = ((MR_Integer) 0 - mercury__integer__S_25);
#line 439 "integer.m"
    {
#line 439 "integer.m"
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_26, &mercury__integer__Digits_27);
    }
#line 438 "integer.m"
    {
#line 438 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_28_28));
#line 438 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_27));
#line 438 "integer.m"
    }
#line 672 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 672 "integer.m"
  }
#line 670 "integer.m"
}

#line 663 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_not_pairs_equal_2_f_0(
#line 663 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 663 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 663 "integer.m"
{
#line 665 "integer.m"
  {
#line 665 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 665 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 665 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 665 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 665 "integer.m"
    else
#line 665 "integer.m"
      {
#line 665 "integer.m"
        MR_Word mercury__integer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 665 "integer.m"
        MR_Integer mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 665 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 666 "integer.m"
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 665 "integer.m"
        else
#line 667 "integer.m"
          {
#line 667 "integer.m"
            MR_Integer mercury__integer__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 667 "integer.m"
            MR_Word mercury__integer__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 667 "integer.m"
            MR_Integer mercury__integer__V_11_11;
#line 667 "integer.m"
            MR_Integer mercury__integer__V_12_12 = ~(mercury__integer__Y_9);
#line 667 "integer.m"
            MR_Word mercury__integer__V_13_13;

#line 668 "integer.m"
            mercury__integer__V_11_11 = (mercury__integer__V_15_15 & mercury__integer__V_12_12);
#line 668 "integer.m"
            {
#line 668 "integer.m"
              mercury__integer__V_13_13 = mercury__integer__and_not_pairs_equal_2_f_0(mercury__integer__V_14_14, mercury__integer__Ys_10);
            }
#line 668 "integer.m"
            {
#line 668 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_11_11));
#line 668 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_13_13));
#line 668 "integer.m"
            }
#line 667 "integer.m"
          }
#line 665 "integer.m"
      }
#line 665 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 665 "integer.m"
  }
#line 663 "integer.m"
}

#line 648 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_not_pairs_2_f_0(
#line 648 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 648 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 648 "integer.m"
{
#line 650 "integer.m"
  {
#line 650 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 650 "integer.m"
    MR_Word mercury__integer__Integer_8;
#line 650 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 650 "integer.m"
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 650 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 650 "integer.m"
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 651 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 == mercury__integer__L2_6);
#line 653 "integer.m"
    if (mercury__integer__succeeded)
#line 652 "integer.m"
      {
#line 652 "integer.m"
        MR_Word mercury__integer__V_16_16;

#line 652 "integer.m"
        {
#line 652 "integer.m"
          mercury__integer__V_16_16 = mercury__integer__and_not_pairs_equal_2_f_0(mercury__integer__D1_5, mercury__integer__D2_7);
        }
#line 652 "integer.m"
        {
#line 652 "integer.m"
          mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 652 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 652 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_16_16));
#line 652 "integer.m"
        }
#line 652 "integer.m"
      }
#line 653 "integer.m"
    else
#line 656 "integer.m"
      {
#line 656 "integer.m"
        MR_Word mercury__integer__T2_10;
#line 653 "integer.m"
        MR_Integer mercury__integer__V_9_9;

#line 653 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
#line 653 "integer.m"
        if (mercury__integer__succeeded)
#line 653 "integer.m"
          {
#line 653 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_7)) == (MR_mktag((MR_Integer) 1)));
#line 653 "integer.m"
            if (mercury__integer__succeeded)
#line 653 "integer.m"
              {
#line 653 "integer.m"
                mercury__integer__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 0)));
#line 653 "integer.m"
                mercury__integer__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 1)));
#line 653 "integer.m"
              }
#line 653 "integer.m"
          }
#line 656 "integer.m"
        if (mercury__integer__succeeded)
#line 654 "integer.m"
          {
#line 654 "integer.m"
            MR_Word mercury__integer__DsT_12;
#line 654 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 654 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 654 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_6 - (MR_Integer) 1);
#line 654 "integer.m"
            MR_Integer mercury__integer__V_11_11;

#line 654 "integer.m"
            {
#line 654 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 654 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 654 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_10));
#line 654 "integer.m"
            }
#line 654 "integer.m"
            {
#line 654 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__V_19_19);
            }
#line 654 "integer.m"
            mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 654 "integer.m"
            mercury__integer__DsT_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 655 "integer.m"
            {
#line 655 "integer.m"
              mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 655 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 655 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__DsT_12));
#line 655 "integer.m"
            }
#line 654 "integer.m"
          }
#line 656 "integer.m"
        else
#line 659 "integer.m"
          {
#line 659 "integer.m"
            MR_Integer mercury__integer__H1_13;
#line 659 "integer.m"
            MR_Word mercury__integer__T1_14;

#line 656 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
#line 656 "integer.m"
            if (mercury__integer__succeeded)
#line 656 "integer.m"
              {
#line 656 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_5)) == (MR_mktag((MR_Integer) 1)));
#line 656 "integer.m"
                if (mercury__integer__succeeded)
#line 656 "integer.m"
                  {
#line 656 "integer.m"
                    mercury__integer__H1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 0)));
#line 656 "integer.m"
                    mercury__integer__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 1)));
#line 656 "integer.m"
                  }
#line 656 "integer.m"
              }
#line 659 "integer.m"
            if (mercury__integer__succeeded)
#line 657 "integer.m"
              {
#line 657 "integer.m"
                MR_Word mercury__integer__V_22_22;
#line 657 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 657 "integer.m"
                MR_Integer mercury__integer__V_24_24 = (mercury__integer__L1_4 - (MR_Integer) 1);
#line 657 "integer.m"
                MR_Word mercury__integer__V_27_27;
#line 657 "integer.m"
                MR_Word mercury__integer__DsT_31;
#line 657 "integer.m"
                MR_Integer mercury__integer__V_15_15;

#line 657 "integer.m"
                {
#line 657 "integer.m"
                  mercury__integer__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 657 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 0) = ((MR_Box) (mercury__integer__V_24_24));
#line 657 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 1) = ((MR_Box) (mercury__integer__T1_14));
#line 657 "integer.m"
                }
#line 657 "integer.m"
                {
#line 657 "integer.m"
                  mercury__integer__V_22_22 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__V_23_23, mercury__integer__HeadVar__2_2);
                }
#line 657 "integer.m"
                mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_22_22, (MR_Integer) 0)));
#line 657 "integer.m"
                mercury__integer__DsT_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_22_22, (MR_Integer) 1)));
#line 658 "integer.m"
                {
#line 658 "integer.m"
                  mercury__integer__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_27_27, 0) = ((MR_Box) (mercury__integer__H1_13));
#line 658 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_27_27, 1) = ((MR_Box) (mercury__integer__DsT_31));
#line 658 "integer.m"
                }
#line 658 "integer.m"
                {
#line 658 "integer.m"
                  mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 658 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 658 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_27_27));
#line 658 "integer.m"
                }
#line 657 "integer.m"
              }
#line 659 "integer.m"
            else
#line 660 "integer.m"
              {
#line 660 "integer.m"
                {
#line 660 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.and_not_pairs\'/2", (MR_String) "invalid integer");
                }
#line 660 "integer.m"
              }
#line 659 "integer.m"
          }
#line 656 "integer.m"
      }
#line 650 "integer.m"
    return mercury__integer__Integer_8;
#line 650 "integer.m"
  }
#line 648 "integer.m"
}

#line 638 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_pairs_equal_2_f_0(
#line 638 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 638 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 638 "integer.m"
{
#line 640 "integer.m"
  {
#line 640 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 640 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 640 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 640 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "integer.m"
    else
#line 640 "integer.m"
      {
#line 640 "integer.m"
        MR_Word mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 640 "integer.m"
        MR_Integer mercury__integer__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 640 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 641 "integer.m"
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "integer.m"
        else
#line 642 "integer.m"
          {
#line 642 "integer.m"
            MR_Integer mercury__integer__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 642 "integer.m"
            MR_Word mercury__integer__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 642 "integer.m"
            MR_Integer mercury__integer__V_11_11 = (mercury__integer__V_14_14 & mercury__integer__Y_9);
#line 642 "integer.m"
            MR_Word mercury__integer__V_12_12;

#line 642 "integer.m"
            {
#line 642 "integer.m"
              mercury__integer__V_12_12 = mercury__integer__and_pairs_equal_2_f_0(mercury__integer__V_13_13, mercury__integer__Ys_10);
            }
#line 642 "integer.m"
            {
#line 642 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_11_11));
#line 642 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_12_12));
#line 642 "integer.m"
            }
#line 642 "integer.m"
          }
#line 640 "integer.m"
      }
#line 640 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 640 "integer.m"
  }
#line 638 "integer.m"
}

#line 623 "integer.m"
static MR_Word MR_CALL 
mercury__integer__and_pairs_2_f_0(
#line 623 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 623 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 623 "integer.m"
{
#line 625 "integer.m"
  {
#line 625 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 625 "integer.m"
    MR_Word mercury__integer__Integer_8;
#line 625 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 625 "integer.m"
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 625 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 625 "integer.m"
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 626 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 == mercury__integer__L2_6);
#line 628 "integer.m"
    if (mercury__integer__succeeded)
#line 627 "integer.m"
      {
#line 627 "integer.m"
        MR_Word mercury__integer__V_16_16;

#line 627 "integer.m"
        {
#line 627 "integer.m"
          mercury__integer__V_16_16 = mercury__integer__and_pairs_equal_2_f_0(mercury__integer__D1_5, mercury__integer__D2_7);
        }
#line 627 "integer.m"
        {
#line 627 "integer.m"
          mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 627 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 627 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_16_16));
#line 627 "integer.m"
        }
#line 627 "integer.m"
      }
#line 628 "integer.m"
    else
#line 631 "integer.m"
      {
#line 631 "integer.m"
        MR_Word mercury__integer__T2_10;
#line 628 "integer.m"
        MR_Integer mercury__integer__V_9_9;

#line 628 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
#line 628 "integer.m"
        if (mercury__integer__succeeded)
#line 628 "integer.m"
          {
#line 628 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_7)) == (MR_mktag((MR_Integer) 1)));
#line 628 "integer.m"
            if (mercury__integer__succeeded)
#line 628 "integer.m"
              {
#line 628 "integer.m"
                mercury__integer__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 0)));
#line 628 "integer.m"
                mercury__integer__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 1)));
#line 628 "integer.m"
              }
#line 628 "integer.m"
          }
#line 631 "integer.m"
        if (mercury__integer__succeeded)
#line 629 "integer.m"
          {
#line 629 "integer.m"
            MR_Word mercury__integer__DsT_12;
#line 629 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 629 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 629 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_6 - (MR_Integer) 1);
#line 629 "integer.m"
            MR_Integer mercury__integer__V_11_11;

#line 629 "integer.m"
            {
#line 629 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 629 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 629 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_10));
#line 629 "integer.m"
            }
#line 629 "integer.m"
            {
#line 629 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__and_pairs_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__V_19_19);
            }
#line 629 "integer.m"
            mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 629 "integer.m"
            mercury__integer__DsT_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 630 "integer.m"
            {
#line 630 "integer.m"
              mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 630 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 630 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__DsT_12));
#line 630 "integer.m"
            }
#line 629 "integer.m"
          }
#line 631 "integer.m"
        else
#line 634 "integer.m"
          {
#line 634 "integer.m"
            MR_Word mercury__integer__T1_14;
#line 631 "integer.m"
            MR_Integer mercury__integer__V_13_13;

#line 631 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
#line 631 "integer.m"
            if (mercury__integer__succeeded)
#line 631 "integer.m"
              {
#line 631 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_5)) == (MR_mktag((MR_Integer) 1)));
#line 631 "integer.m"
                if (mercury__integer__succeeded)
#line 631 "integer.m"
                  {
#line 631 "integer.m"
                    mercury__integer__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 0)));
#line 631 "integer.m"
                    mercury__integer__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 1)));
#line 631 "integer.m"
                  }
#line 631 "integer.m"
              }
#line 634 "integer.m"
            if (mercury__integer__succeeded)
#line 632 "integer.m"
              {
#line 632 "integer.m"
                MR_Word mercury__integer__V_22_22;
#line 632 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 632 "integer.m"
                MR_Integer mercury__integer__V_24_24 = (mercury__integer__L1_4 - (MR_Integer) 1);
#line 632 "integer.m"
                MR_Word mercury__integer__DsT_30;
#line 632 "integer.m"
                MR_Integer mercury__integer__V_15_15;

#line 632 "integer.m"
                {
#line 632 "integer.m"
                  mercury__integer__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 632 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 0) = ((MR_Box) (mercury__integer__V_24_24));
#line 632 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, 1) = ((MR_Box) (mercury__integer__T1_14));
#line 632 "integer.m"
                }
#line 632 "integer.m"
                {
#line 632 "integer.m"
                  mercury__integer__V_22_22 = mercury__integer__and_pairs_2_f_0(mercury__integer__V_23_23, mercury__integer__HeadVar__2_2);
                }
#line 632 "integer.m"
                mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_22_22, (MR_Integer) 0)));
#line 632 "integer.m"
                mercury__integer__DsT_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_22_22, (MR_Integer) 1)));
#line 633 "integer.m"
                {
#line 633 "integer.m"
                  mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 633 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L2_6));
#line 633 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__DsT_30));
#line 633 "integer.m"
                }
#line 632 "integer.m"
              }
#line 634 "integer.m"
            else
#line 635 "integer.m"
              {
#line 635 "integer.m"
                {
#line 635 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.and_pairs\'/2", (MR_String) "invalid integer");
                }
#line 635 "integer.m"
              }
#line 634 "integer.m"
          }
#line 631 "integer.m"
      }
#line 625 "integer.m"
    return mercury__integer__Integer_8;
#line 625 "integer.m"
  }
#line 623 "integer.m"
}

#line 612 "integer.m"
static MR_Word MR_CALL 
mercury__integer__xor_pairs_equal_2_f_0(
#line 612 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 612 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 612 "integer.m"
{
#line 614 "integer.m"
  {
#line 614 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 614 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 614 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 614 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 614 "integer.m"
    else
#line 614 "integer.m"
      {
#line 614 "integer.m"
        MR_Word mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 614 "integer.m"
        MR_Integer mercury__integer__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 614 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "integer.m"
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 614 "integer.m"
        else
#line 616 "integer.m"
          {
#line 616 "integer.m"
            MR_Integer mercury__integer__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 616 "integer.m"
            MR_Word mercury__integer__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 616 "integer.m"
            MR_Integer mercury__integer__V_11_11 = (mercury__integer__V_14_14 ^ mercury__integer__Y_9);
#line 616 "integer.m"
            MR_Word mercury__integer__V_12_12;

#line 617 "integer.m"
            {
#line 617 "integer.m"
              mercury__integer__V_12_12 = mercury__integer__xor_pairs_equal_2_f_0(mercury__integer__V_13_13, mercury__integer__Ys_10);
            }
#line 617 "integer.m"
            {
#line 617 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_11_11));
#line 617 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_12_12));
#line 617 "integer.m"
            }
#line 616 "integer.m"
          }
#line 614 "integer.m"
      }
#line 614 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 614 "integer.m"
  }
#line 612 "integer.m"
}

#line 597 "integer.m"
static MR_Word MR_CALL 
mercury__integer__xor_pairs_2_f_0(
#line 597 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 597 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 597 "integer.m"
{
#line 599 "integer.m"
  {
#line 599 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 599 "integer.m"
    MR_Word mercury__integer__Integer_8;
#line 599 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 599 "integer.m"
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 599 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 599 "integer.m"
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 600 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 == mercury__integer__L2_6);
#line 602 "integer.m"
    if (mercury__integer__succeeded)
#line 601 "integer.m"
      {
#line 601 "integer.m"
        MR_Word mercury__integer__V_16_16;

#line 601 "integer.m"
        {
#line 601 "integer.m"
          mercury__integer__V_16_16 = mercury__integer__xor_pairs_equal_2_f_0(mercury__integer__D1_5, mercury__integer__D2_7);
        }
#line 601 "integer.m"
        {
#line 601 "integer.m"
          mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 601 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 601 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_16_16));
#line 601 "integer.m"
        }
#line 601 "integer.m"
      }
#line 602 "integer.m"
    else
#line 605 "integer.m"
      {
#line 605 "integer.m"
        MR_Integer mercury__integer__H2_9;
#line 605 "integer.m"
        MR_Word mercury__integer__T2_10;

#line 602 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
#line 602 "integer.m"
        if (mercury__integer__succeeded)
#line 602 "integer.m"
          {
#line 602 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_7)) == (MR_mktag((MR_Integer) 1)));
#line 602 "integer.m"
            if (mercury__integer__succeeded)
#line 602 "integer.m"
              {
#line 602 "integer.m"
                mercury__integer__H2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 0)));
#line 602 "integer.m"
                mercury__integer__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 1)));
#line 602 "integer.m"
              }
#line 602 "integer.m"
          }
#line 605 "integer.m"
        if (mercury__integer__succeeded)
#line 603 "integer.m"
          {
#line 603 "integer.m"
            MR_Word mercury__integer__DsT_12;
#line 603 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 603 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 603 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_6 - (MR_Integer) 1);
#line 603 "integer.m"
            MR_Word mercury__integer__V_22_22;
#line 603 "integer.m"
            MR_Integer mercury__integer__V_11_11;

#line 603 "integer.m"
            {
#line 603 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 603 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 603 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_10));
#line 603 "integer.m"
            }
#line 603 "integer.m"
            {
#line 603 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__xor_pairs_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__V_19_19);
            }
#line 603 "integer.m"
            mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 603 "integer.m"
            mercury__integer__DsT_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 604 "integer.m"
            {
#line 604 "integer.m"
              mercury__integer__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_22_22, 0) = ((MR_Box) (mercury__integer__H2_9));
#line 604 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_22_22, 1) = ((MR_Box) (mercury__integer__DsT_12));
#line 604 "integer.m"
            }
#line 604 "integer.m"
            {
#line 604 "integer.m"
              mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 604 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L2_6));
#line 604 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_22_22));
#line 604 "integer.m"
            }
#line 603 "integer.m"
          }
#line 605 "integer.m"
        else
#line 608 "integer.m"
          {
#line 608 "integer.m"
            MR_Integer mercury__integer__H1_13;
#line 608 "integer.m"
            MR_Word mercury__integer__T1_14;

#line 605 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
#line 605 "integer.m"
            if (mercury__integer__succeeded)
#line 605 "integer.m"
              {
#line 605 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_5)) == (MR_mktag((MR_Integer) 1)));
#line 605 "integer.m"
                if (mercury__integer__succeeded)
#line 605 "integer.m"
                  {
#line 605 "integer.m"
                    mercury__integer__H1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 0)));
#line 605 "integer.m"
                    mercury__integer__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 1)));
#line 605 "integer.m"
                  }
#line 605 "integer.m"
              }
#line 608 "integer.m"
            if (mercury__integer__succeeded)
#line 606 "integer.m"
              {
#line 606 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 606 "integer.m"
                MR_Word mercury__integer__V_24_24;
#line 606 "integer.m"
                MR_Integer mercury__integer__V_25_25 = (mercury__integer__L1_4 - (MR_Integer) 1);
#line 606 "integer.m"
                MR_Word mercury__integer__V_28_28;
#line 606 "integer.m"
                MR_Word mercury__integer__DsT_32;
#line 606 "integer.m"
                MR_Integer mercury__integer__V_15_15;

#line 606 "integer.m"
                {
#line 606 "integer.m"
                  mercury__integer__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 606 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 0) = ((MR_Box) (mercury__integer__V_25_25));
#line 606 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 1) = ((MR_Box) (mercury__integer__T1_14));
#line 606 "integer.m"
                }
#line 606 "integer.m"
                {
#line 606 "integer.m"
                  mercury__integer__V_23_23 = mercury__integer__xor_pairs_2_f_0(mercury__integer__V_24_24, mercury__integer__HeadVar__2_2);
                }
#line 606 "integer.m"
                mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 0)));
#line 606 "integer.m"
                mercury__integer__DsT_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 1)));
#line 607 "integer.m"
                {
#line 607 "integer.m"
                  mercury__integer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_28_28, 0) = ((MR_Box) (mercury__integer__H1_13));
#line 607 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_28_28, 1) = ((MR_Box) (mercury__integer__DsT_32));
#line 607 "integer.m"
                }
#line 607 "integer.m"
                {
#line 607 "integer.m"
                  mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 607 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 607 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_28_28));
#line 607 "integer.m"
                }
#line 606 "integer.m"
              }
#line 608 "integer.m"
            else
#line 609 "integer.m"
              {
#line 609 "integer.m"
                {
#line 609 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.xor_pairs\'/2", (MR_String) "invalid integer");
                }
#line 609 "integer.m"
              }
#line 608 "integer.m"
          }
#line 605 "integer.m"
      }
#line 599 "integer.m"
    return mercury__integer__Integer_8;
#line 599 "integer.m"
  }
#line 597 "integer.m"
}

#line 587 "integer.m"
static MR_Word MR_CALL 
mercury__integer__or_pairs_equal_2_f_0(
#line 587 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 587 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 587 "integer.m"
{
#line 589 "integer.m"
  {
#line 589 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 589 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 589 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 589 "integer.m"
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 589 "integer.m"
    else
#line 589 "integer.m"
      {
#line 589 "integer.m"
        MR_Word mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 589 "integer.m"
        MR_Integer mercury__integer__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 589 "integer.m"
        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 590 "integer.m"
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 589 "integer.m"
        else
#line 591 "integer.m"
          {
#line 591 "integer.m"
            MR_Integer mercury__integer__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 591 "integer.m"
            MR_Word mercury__integer__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
#line 591 "integer.m"
            MR_Integer mercury__integer__V_11_11 = (mercury__integer__V_14_14 | mercury__integer__Y_9);
#line 591 "integer.m"
            MR_Word mercury__integer__V_12_12;

#line 591 "integer.m"
            {
#line 591 "integer.m"
              mercury__integer__V_12_12 = mercury__integer__or_pairs_equal_2_f_0(mercury__integer__V_13_13, mercury__integer__Ys_10);
            }
#line 591 "integer.m"
            {
#line 591 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_11_11));
#line 591 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_12_12));
#line 591 "integer.m"
            }
#line 591 "integer.m"
          }
#line 589 "integer.m"
      }
#line 589 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 589 "integer.m"
  }
#line 587 "integer.m"
}

#line 572 "integer.m"
static MR_Word MR_CALL 
mercury__integer__or_pairs_2_f_0(
#line 572 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 572 "integer.m"
  MR_Word mercury__integer__HeadVar__2_2)
#line 572 "integer.m"
{
#line 574 "integer.m"
  {
#line 574 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 574 "integer.m"
    MR_Word mercury__integer__Integer_8;
#line 574 "integer.m"
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 574 "integer.m"
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 574 "integer.m"
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
#line 574 "integer.m"
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

#line 575 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_4 == mercury__integer__L2_6);
#line 577 "integer.m"
    if (mercury__integer__succeeded)
#line 576 "integer.m"
      {
#line 576 "integer.m"
        MR_Word mercury__integer__V_16_16;

#line 576 "integer.m"
        {
#line 576 "integer.m"
          mercury__integer__V_16_16 = mercury__integer__or_pairs_equal_2_f_0(mercury__integer__D1_5, mercury__integer__D2_7);
        }
#line 576 "integer.m"
        {
#line 576 "integer.m"
          mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 576 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 576 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_16_16));
#line 576 "integer.m"
        }
#line 576 "integer.m"
      }
#line 577 "integer.m"
    else
#line 580 "integer.m"
      {
#line 580 "integer.m"
        MR_Integer mercury__integer__H2_9;
#line 580 "integer.m"
        MR_Word mercury__integer__T2_10;

#line 577 "integer.m"
        mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
#line 577 "integer.m"
        if (mercury__integer__succeeded)
#line 577 "integer.m"
          {
#line 577 "integer.m"
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_7)) == (MR_mktag((MR_Integer) 1)));
#line 577 "integer.m"
            if (mercury__integer__succeeded)
#line 577 "integer.m"
              {
#line 577 "integer.m"
                mercury__integer__H2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 0)));
#line 577 "integer.m"
                mercury__integer__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 1)));
#line 577 "integer.m"
              }
#line 577 "integer.m"
          }
#line 580 "integer.m"
        if (mercury__integer__succeeded)
#line 578 "integer.m"
          {
#line 578 "integer.m"
            MR_Word mercury__integer__DsT_12;
#line 578 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 578 "integer.m"
            MR_Word mercury__integer__V_19_19;
#line 578 "integer.m"
            MR_Integer mercury__integer__V_20_20 = (mercury__integer__L2_6 - (MR_Integer) 1);
#line 578 "integer.m"
            MR_Word mercury__integer__V_22_22;
#line 578 "integer.m"
            MR_Integer mercury__integer__V_11_11;

#line 578 "integer.m"
            {
#line 578 "integer.m"
              mercury__integer__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 578 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 0) = ((MR_Box) (mercury__integer__V_20_20));
#line 578 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, 1) = ((MR_Box) (mercury__integer__T2_10));
#line 578 "integer.m"
            }
#line 578 "integer.m"
            {
#line 578 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__or_pairs_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__V_19_19);
            }
#line 578 "integer.m"
            mercury__integer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 578 "integer.m"
            mercury__integer__DsT_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 579 "integer.m"
            {
#line 579 "integer.m"
              mercury__integer__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_22_22, 0) = ((MR_Box) (mercury__integer__H2_9));
#line 579 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_22_22, 1) = ((MR_Box) (mercury__integer__DsT_12));
#line 579 "integer.m"
            }
#line 579 "integer.m"
            {
#line 579 "integer.m"
              mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 579 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L2_6));
#line 579 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_22_22));
#line 579 "integer.m"
            }
#line 578 "integer.m"
          }
#line 580 "integer.m"
        else
#line 583 "integer.m"
          {
#line 583 "integer.m"
            MR_Integer mercury__integer__H1_13;
#line 583 "integer.m"
            MR_Word mercury__integer__T1_14;

#line 580 "integer.m"
            mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
#line 580 "integer.m"
            if (mercury__integer__succeeded)
#line 580 "integer.m"
              {
#line 580 "integer.m"
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_5)) == (MR_mktag((MR_Integer) 1)));
#line 580 "integer.m"
                if (mercury__integer__succeeded)
#line 580 "integer.m"
                  {
#line 580 "integer.m"
                    mercury__integer__H1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 0)));
#line 580 "integer.m"
                    mercury__integer__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 1)));
#line 580 "integer.m"
                  }
#line 580 "integer.m"
              }
#line 583 "integer.m"
            if (mercury__integer__succeeded)
#line 581 "integer.m"
              {
#line 581 "integer.m"
                MR_Word mercury__integer__V_23_23;
#line 581 "integer.m"
                MR_Word mercury__integer__V_24_24;
#line 581 "integer.m"
                MR_Integer mercury__integer__V_25_25 = (mercury__integer__L1_4 - (MR_Integer) 1);
#line 581 "integer.m"
                MR_Word mercury__integer__V_28_28;
#line 581 "integer.m"
                MR_Word mercury__integer__DsT_32;
#line 581 "integer.m"
                MR_Integer mercury__integer__V_15_15;

#line 581 "integer.m"
                {
#line 581 "integer.m"
                  mercury__integer__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 581 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 0) = ((MR_Box) (mercury__integer__V_25_25));
#line 581 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 1) = ((MR_Box) (mercury__integer__T1_14));
#line 581 "integer.m"
                }
#line 581 "integer.m"
                {
#line 581 "integer.m"
                  mercury__integer__V_23_23 = mercury__integer__or_pairs_2_f_0(mercury__integer__V_24_24, mercury__integer__HeadVar__2_2);
                }
#line 581 "integer.m"
                mercury__integer__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 0)));
#line 581 "integer.m"
                mercury__integer__DsT_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_23_23, (MR_Integer) 1)));
#line 582 "integer.m"
                {
#line 582 "integer.m"
                  mercury__integer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_28_28, 0) = ((MR_Box) (mercury__integer__H1_13));
#line 582 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_28_28, 1) = ((MR_Box) (mercury__integer__DsT_32));
#line 582 "integer.m"
                }
#line 582 "integer.m"
                {
#line 582 "integer.m"
                  mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 582 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
#line 582 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__V_28_28));
#line 582 "integer.m"
                }
#line 581 "integer.m"
              }
#line 583 "integer.m"
            else
#line 584 "integer.m"
              {
#line 584 "integer.m"
                {
#line 584 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.or_pairs\'/2", (MR_String) "invalid integer");
                }
#line 584 "integer.m"
              }
#line 583 "integer.m"
          }
#line 580 "integer.m"
      }
#line 574 "integer.m"
    return mercury__integer__Integer_8;
#line 574 "integer.m"
  }
#line 572 "integer.m"
}

#line 568 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_or_2_f_0(
#line 568 "integer.m"
  MR_Word mercury__integer__X_4,
#line 568 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 568 "integer.m"
{
#line 570 "integer.m"
  {
#line 570 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 570 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 570 "integer.m"
    MR_Word mercury__integer__V_6_6;

#line 570 "integer.m"
    {
#line 570 "integer.m"
      mercury__integer__V_6_6 = mercury__integer__or_pairs_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
#line 570 "integer.m"
    {
#line 570 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_6_6);
    }
#line 570 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 570 "integer.m"
  }
#line 568 "integer.m"
}

#line 558 "integer.m"
static void MR_CALL 
mercury__integer__zeros_3_p_0(
#line 558 "integer.m"
  MR_Integer mercury__integer__Len_4,
#line 558 "integer.m"
  MR_Word * mercury__integer__DCG_0_5,
#line 558 "integer.m"
  MR_Word mercury__integer__DCG_3_8)
#line 558 "integer.m"
{
#line 564 "integer.m"
  {
#line 564 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__Len_4 > (MR_Integer) 0);

#line 564 "integer.m"
    if (mercury__integer__succeeded)
#line 562 "integer.m"
      {
#line 562 "integer.m"
        MR_Word mercury__integer__DCG_1_6;
#line 562 "integer.m"
        MR_Integer mercury__integer__V_11_11 = (mercury__integer__Len_4 - (MR_Integer) 1);

#line 563 "integer.m"
        {
#line 563 "integer.m"
          mercury__integer__zeros_3_p_0(mercury__integer__V_11_11, &mercury__integer__DCG_1_6, mercury__integer__DCG_3_8);
        }
#line 562 "integer.m"
        {
#line 562 "integer.m"
          MR_Word base;
#line 562 "integer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "integer.m"
          *mercury__integer__DCG_0_5 = base;
#line 562 "integer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 562 "integer.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__DCG_1_6));
#line 562 "integer.m"
        }
#line 562 "integer.m"
      }
#line 564 "integer.m"
    else
#line 565 "integer.m"
      *mercury__integer__DCG_0_5 = mercury__integer__DCG_3_8;
#line 564 "integer.m"
  }
#line 558 "integer.m"
}

#line 542 "integer.m"
static void MR_CALL 
mercury__integer__leftshift_6_p_0(
#line 542 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 542 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 542 "integer.m"
  MR_Integer mercury__integer__Len_3,
#line 542 "integer.m"
  MR_Word mercury__integer__HeadVar__4_4,
#line 542 "integer.m"
  MR_Integer * mercury__integer__Carry_5,
#line 542 "integer.m"
  MR_Word * mercury__integer__DigitsOut_6)
#line 542 "integer.m"
{
#line 545 "integer.m"
  {
#line 545 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 545 "integer.m"
    if ((mercury__integer__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 545 "integer.m"
      {
#line 545 "integer.m"
        MR_Word mercury__integer__V_12_12;

#line 546 "integer.m"
        *mercury__integer__Carry_5 = (MR_Integer) 0;
#line 547 "integer.m"
        mercury__integer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 547 "integer.m"
        {
#line 547 "integer.m"
          mercury__integer__zeros_3_p_0(mercury__integer__Len_3, mercury__integer__DigitsOut_6, mercury__integer__V_12_12);
#line 547 "integer.m"
          return;
        }
#line 545 "integer.m"
      }
#line 545 "integer.m"
    else
#line 548 "integer.m"
      {
#line 548 "integer.m"
        MR_Integer mercury__integer__H_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
#line 548 "integer.m"
        MR_Word mercury__integer__T_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));

#line 549 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Len_3 <= (MR_Integer) 0);
#line 552 "integer.m"
        if (mercury__integer__succeeded)
#line 550 "integer.m"
          {
#line 550 "integer.m"
            *mercury__integer__Carry_5 = (MR_Integer) 0;
#line 551 "integer.m"
            *mercury__integer__DigitsOut_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "integer.m"
          }
#line 552 "integer.m"
        else
#line 553 "integer.m"
          {
#line 553 "integer.m"
            MR_Integer mercury__integer__TailCarry_20;
#line 553 "integer.m"
            MR_Word mercury__integer__Tail_21;
#line 553 "integer.m"
            MR_Integer mercury__integer__V_23_23;
#line 553 "integer.m"
            MR_Integer mercury__integer__V_24_24;
#line 553 "integer.m"
            MR_Integer mercury__integer__V_26_26;
#line 553 "integer.m"
            MR_Integer mercury__integer__V_28_28;
#line 553 "integer.m"
            MR_Integer mercury__integer__V_29_29;
#line 553 "integer.m"
            MR_Integer mercury__integer__V_30_30;

#line 553 "integer.m"
            {
#line 553 "integer.m"
              mercury__integer__V_24_24 = mercury__int__f_60_60_2_f_0((MR_Integer) 16383, mercury__integer__HeadVar__2_2);
            }
#line 553 "integer.m"
            mercury__integer__V_23_23 = (mercury__integer__H_16 & mercury__integer__V_24_24);
#line 553 "integer.m"
            {
#line 553 "integer.m"
              *mercury__integer__Carry_5 = mercury__int__f_62_62_2_f_0(mercury__integer__V_23_23, mercury__integer__HeadVar__2_2);
            }
#line 554 "integer.m"
            mercury__integer__V_26_26 = (mercury__integer__Len_3 - (MR_Integer) 1);
#line 554 "integer.m"
            {
#line 554 "integer.m"
              mercury__integer__leftshift_6_p_0(mercury__integer__HeadVar__1_1, mercury__integer__HeadVar__2_2, mercury__integer__V_26_26, mercury__integer__T_17, &mercury__integer__TailCarry_20, &mercury__integer__Tail_21);
            }
#line 555 "integer.m"
            {
#line 555 "integer.m"
              mercury__integer__V_30_30 = mercury__int__f_60_60_2_f_0(mercury__integer__H_16, mercury__integer__HeadVar__1_1);
            }
#line 555 "integer.m"
            mercury__integer__V_29_29 = (mercury__integer__V_30_30 & (MR_Integer) 16383);
#line 555 "integer.m"
            mercury__integer__V_28_28 = (mercury__integer__TailCarry_20 | mercury__integer__V_29_29);
#line 555 "integer.m"
            {
#line 555 "integer.m"
              MR_Word base;
#line 555 "integer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "integer.m"
              *mercury__integer__DigitsOut_6 = base;
#line 555 "integer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__V_28_28));
#line 555 "integer.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Tail_21));
#line 555 "integer.m"
            }
#line 553 "integer.m"
          }
#line 548 "integer.m"
      }
#line 545 "integer.m"
  }
#line 542 "integer.m"
}

#line 518 "integer.m"
static MR_Word MR_CALL 
mercury__integer__big_left_shift_2_f_0(
#line 518 "integer.m"
  MR_Word mercury__integer__X_4,
#line 518 "integer.m"
  MR_Integer mercury__integer__I_5)
#line 518 "integer.m"
{
#line 520 "integer.m"
  {
#line 520 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 520 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 1200 "integer.m"
    MR_Integer mercury__integer__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 1200 "integer.m"
    MR_Word mercury__integer__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 1200 "integer.m"
    mercury__integer__succeeded = (mercury__integer__V_8_8 == (MR_Integer) 0);
#line 1200 "integer.m"
    if (mercury__integer__succeeded)
#line 1200 "integer.m"
      mercury__integer__succeeded = (mercury__integer__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 520 "integer.m"
    if (mercury__integer__succeeded)
#line 522 "integer.m"
      mercury__integer__HeadVar__3_3 = mercury__integer__X_4;
#line 520 "integer.m"
    else
#line 525 "integer.m"
      {
#line 525 "integer.m"
        MR_Integer mercury__integer__Sign_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 525 "integer.m"
        MR_Word mercury__integer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 434 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_10 < (MR_Integer) 0);
#line 525 "integer.m"
        if (mercury__integer__succeeded)
#line 524 "integer.m"
          {
#line 524 "integer.m"
            MR_Word mercury__integer__V_6_6;
#line 524 "integer.m"
            MR_Integer mercury__integer__Len_19 = ((MR_Integer) 0 - mercury__integer__Sign_10);
#line 524 "integer.m"
            MR_Word mercury__integer__Digits_20;
#line 524 "integer.m"
            MR_Integer mercury__integer__Div_21;
#line 524 "integer.m"
            MR_Integer mercury__integer__Mod_22;
#line 524 "integer.m"
            MR_Integer mercury__integer__NewLen_23;
#line 524 "integer.m"
            MR_Integer mercury__integer__Carry_24;
#line 524 "integer.m"
            MR_Word mercury__integer__NewDigits_25;
#line 524 "integer.m"
            MR_Integer mercury__integer__V_28_28;
#line 524 "integer.m"
            MR_Integer mercury__integer__V_6_36;
#line 524 "integer.m"
            MR_Integer mercury__integer__V_7_37;
#line 524 "integer.m"
            MR_Integer mercury__integer__S_38;
#line 524 "integer.m"
            MR_Word mercury__integer__Digits0_39;
#line 524 "integer.m"
            MR_Word mercury__integer__Digits_40;
#line 524 "integer.m"
            MR_Integer mercury__integer__V_41_41;

#line 439 "integer.m"
            {
#line 439 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__V_11_11, &mercury__integer__Digits_20);
            }
#line 532 "integer.m"
            {
#line 532 "integer.m"
              mercury__integer__Div_21 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
            }
#line 272 "int.opt"
            {
#line 272 "int.opt"
              mercury__integer__V_7_37 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
            }
#line 271 "int.opt"
            mercury__integer__V_6_36 = (mercury__integer__V_7_37 * (MR_Integer) 14);
#line 270 "int.opt"
            mercury__integer__Mod_22 = (mercury__integer__I_5 - mercury__integer__V_6_36);
#line 534 "integer.m"
            mercury__integer__NewLen_23 = (mercury__integer__Len_19 + mercury__integer__Div_21);
#line 535 "integer.m"
            mercury__integer__V_28_28 = ((MR_Integer) 14 - mercury__integer__Mod_22);
#line 535 "integer.m"
            {
#line 535 "integer.m"
              mercury__integer__leftshift_6_p_0(mercury__integer__Mod_22, mercury__integer__V_28_28, mercury__integer__NewLen_23, mercury__integer__Digits_20, &mercury__integer__Carry_24, &mercury__integer__NewDigits_25);
            }
#line 536 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Carry_24 == (MR_Integer) 0);
#line 538 "integer.m"
            if (mercury__integer__succeeded)
#line 537 "integer.m"
              {
#line 537 "integer.m"
                mercury__integer__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 537 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 0) = ((MR_Box) (mercury__integer__NewLen_23));
#line 537 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 1) = ((MR_Box) (mercury__integer__NewDigits_25));
#line 537 "integer.m"
              }
#line 538 "integer.m"
            else
#line 539 "integer.m"
              {
#line 539 "integer.m"
                MR_Integer mercury__integer__V_30_30 = (mercury__integer__NewLen_23 + (MR_Integer) 1);
#line 539 "integer.m"
                MR_Word mercury__integer__V_32_32;

#line 539 "integer.m"
                {
#line 539 "integer.m"
                  mercury__integer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_32_32, 0) = ((MR_Box) (mercury__integer__Carry_24));
#line 539 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_32_32, 1) = ((MR_Box) (mercury__integer__NewDigits_25));
#line 539 "integer.m"
                }
#line 539 "integer.m"
                {
#line 539 "integer.m"
                  mercury__integer__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 539 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 0) = ((MR_Box) (mercury__integer__V_30_30));
#line 539 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 1) = ((MR_Box) (mercury__integer__V_32_32));
#line 539 "integer.m"
                }
#line 539 "integer.m"
              }
#line 438 "integer.m"
            mercury__integer__S_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, (MR_Integer) 0)));
#line 438 "integer.m"
            mercury__integer__Digits0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, (MR_Integer) 1)));
#line 438 "integer.m"
            mercury__integer__V_41_41 = ((MR_Integer) 0 - mercury__integer__S_38);
#line 439 "integer.m"
            {
#line 439 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_39, &mercury__integer__Digits_40);
            }
#line 438 "integer.m"
            {
#line 438 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_41_41));
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_40));
#line 438 "integer.m"
            }
#line 524 "integer.m"
          }
#line 525 "integer.m"
        else
#line 531 "integer.m"
          {
#line 531 "integer.m"
            MR_Integer mercury__integer__Len_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 531 "integer.m"
            MR_Word mercury__integer__Digits_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));
#line 531 "integer.m"
            MR_Integer mercury__integer__Div_46;
#line 531 "integer.m"
            MR_Integer mercury__integer__Mod_47;
#line 531 "integer.m"
            MR_Integer mercury__integer__NewLen_48;
#line 531 "integer.m"
            MR_Integer mercury__integer__Carry_49;
#line 531 "integer.m"
            MR_Word mercury__integer__NewDigits_50;
#line 531 "integer.m"
            MR_Integer mercury__integer__V_53_53;
#line 531 "integer.m"
            MR_Integer mercury__integer__V_6_61;
#line 531 "integer.m"
            MR_Integer mercury__integer__V_7_62;

#line 532 "integer.m"
            {
#line 532 "integer.m"
              mercury__integer__Div_46 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
            }
#line 272 "int.opt"
            {
#line 272 "int.opt"
              mercury__integer__V_7_62 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
            }
#line 271 "int.opt"
            mercury__integer__V_6_61 = (mercury__integer__V_7_62 * (MR_Integer) 14);
#line 270 "int.opt"
            mercury__integer__Mod_47 = (mercury__integer__I_5 - mercury__integer__V_6_61);
#line 534 "integer.m"
            mercury__integer__NewLen_48 = (mercury__integer__Len_44 + mercury__integer__Div_46);
#line 535 "integer.m"
            mercury__integer__V_53_53 = ((MR_Integer) 14 - mercury__integer__Mod_47);
#line 535 "integer.m"
            {
#line 535 "integer.m"
              mercury__integer__leftshift_6_p_0(mercury__integer__Mod_47, mercury__integer__V_53_53, mercury__integer__NewLen_48, mercury__integer__Digits_45, &mercury__integer__Carry_49, &mercury__integer__NewDigits_50);
            }
#line 536 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Carry_49 == (MR_Integer) 0);
#line 538 "integer.m"
            if (mercury__integer__succeeded)
#line 537 "integer.m"
              {
#line 537 "integer.m"
                mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 537 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__NewLen_48));
#line 537 "integer.m"
                MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__NewDigits_50));
#line 537 "integer.m"
              }
#line 538 "integer.m"
            else
#line 539 "integer.m"
              {
#line 539 "integer.m"
                MR_Integer mercury__integer__V_55_55 = (mercury__integer__NewLen_48 + (MR_Integer) 1);
#line 539 "integer.m"
                MR_Word mercury__integer__V_57_57;

#line 539 "integer.m"
                {
#line 539 "integer.m"
                  mercury__integer__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_57_57, 0) = ((MR_Box) (mercury__integer__Carry_49));
#line 539 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_57_57, 1) = ((MR_Box) (mercury__integer__NewDigits_50));
#line 539 "integer.m"
                }
#line 539 "integer.m"
                {
#line 539 "integer.m"
                  mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 539 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_55_55));
#line 539 "integer.m"
                  MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__V_57_57));
#line 539 "integer.m"
                }
#line 539 "integer.m"
              }
#line 531 "integer.m"
          }
#line 525 "integer.m"
      }
#line 520 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 520 "integer.m"
  }
#line 518 "integer.m"
}

#line 504 "integer.m"
static MR_Word MR_CALL 
mercury__integer__rightshift_4_f_0(
#line 504 "integer.m"
  MR_Integer mercury__integer__HeadVar__1_1,
#line 504 "integer.m"
  MR_Integer mercury__integer__HeadVar__2_2,
#line 504 "integer.m"
  MR_Word mercury__integer__HeadVar__3_3,
#line 504 "integer.m"
  MR_Integer mercury__integer__HeadVar__4_4)
#line 504 "integer.m"
{
#line 506 "integer.m"
  {
#line 506 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 506 "integer.m"
    MR_Word mercury__integer__HeadVar__5_5;
#line 506 "integer.m"
    MR_Word mercury__integer__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
#line 506 "integer.m"
    MR_Integer mercury__integer__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));

#line 506 "integer.m"
    if ((mercury__integer__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1209 "integer.m"
      {
#line 1209 "integer.m"
        MR_Word mercury__integer__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1209 "integer.m"
        mercury__integer__HeadVar__5_5 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1209 "integer.m"
      }
#line 506 "integer.m"
    else
#line 507 "integer.m"
      {
#line 507 "integer.m"
        MR_Integer mercury__integer__H_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__V_35_35, (MR_Integer) 0)));
#line 507 "integer.m"
        MR_Word mercury__integer__T_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__V_35_35, (MR_Integer) 1)));

#line 508 "integer.m"
        mercury__integer__succeeded = (mercury__integer__V_36_36 <= (MR_Integer) 0);
#line 510 "integer.m"
        if (mercury__integer__succeeded)
#line 1209 "integer.m"
          {
#line 1209 "integer.m"
            MR_Word mercury__integer__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1209 "integer.m"
            mercury__integer__HeadVar__5_5 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1209 "integer.m"
          }
#line 510 "integer.m"
        else
#line 511 "integer.m"
          {
#line 511 "integer.m"
            MR_Integer mercury__integer__NewH_18;
#line 511 "integer.m"
            MR_Integer mercury__integer__NewCarry_19;
#line 511 "integer.m"
            MR_Integer mercury__integer__TailLen_20;
#line 511 "integer.m"
            MR_Word mercury__integer__NewTail_21;
#line 511 "integer.m"
            MR_Integer mercury__integer__V_24_24;
#line 511 "integer.m"
            MR_Integer mercury__integer__V_25_25;
#line 511 "integer.m"
            MR_Integer mercury__integer__V_26_26;
#line 511 "integer.m"
            MR_Word mercury__integer__V_28_28;
#line 511 "integer.m"
            MR_Word mercury__integer__V_29_29;
#line 511 "integer.m"
            MR_Integer mercury__integer__V_30_30;
#line 511 "integer.m"
            MR_Integer mercury__integer__V_32_32;
#line 511 "integer.m"
            MR_Word mercury__integer__V_34_34;

#line 511 "integer.m"
            {
#line 511 "integer.m"
              mercury__integer__V_24_24 = mercury__int__f_62_62_2_f_0(mercury__integer__H_14, mercury__integer__HeadVar__1_1);
            }
#line 511 "integer.m"
            mercury__integer__NewH_18 = (mercury__integer__HeadVar__4_4 | mercury__integer__V_24_24);
#line 512 "integer.m"
            {
#line 512 "integer.m"
              mercury__integer__V_26_26 = mercury__int__f_62_62_2_f_0((MR_Integer) 16383, mercury__integer__HeadVar__2_2);
            }
#line 512 "integer.m"
            mercury__integer__V_25_25 = (mercury__integer__H_14 & mercury__integer__V_26_26);
#line 512 "integer.m"
            {
#line 512 "integer.m"
              mercury__integer__NewCarry_19 = mercury__int__f_60_60_2_f_0(mercury__integer__V_25_25, mercury__integer__HeadVar__2_2);
            }
#line 513 "integer.m"
            mercury__integer__V_30_30 = (mercury__integer__V_36_36 - (MR_Integer) 1);
#line 513 "integer.m"
            {
#line 513 "integer.m"
              mercury__integer__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 513 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 0) = ((MR_Box) (mercury__integer__V_30_30));
#line 513 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, 1) = ((MR_Box) (mercury__integer__T_15));
#line 513 "integer.m"
            }
#line 513 "integer.m"
            {
#line 513 "integer.m"
              mercury__integer__V_28_28 = mercury__integer__rightshift_4_f_0(mercury__integer__HeadVar__1_1, mercury__integer__HeadVar__2_2, mercury__integer__V_29_29, mercury__integer__NewCarry_19);
            }
#line 513 "integer.m"
            mercury__integer__TailLen_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, (MR_Integer) 0)));
#line 513 "integer.m"
            mercury__integer__NewTail_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, (MR_Integer) 1)));
#line 515 "integer.m"
            mercury__integer__V_32_32 = (mercury__integer__TailLen_20 + (MR_Integer) 1);
#line 515 "integer.m"
            {
#line 515 "integer.m"
              mercury__integer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_34_34, 0) = ((MR_Box) (mercury__integer__NewH_18));
#line 515 "integer.m"
              MR_hl_field(MR_mktag(1), mercury__integer__V_34_34, 1) = ((MR_Box) (mercury__integer__NewTail_21));
#line 515 "integer.m"
            }
#line 515 "integer.m"
            {
#line 515 "integer.m"
              mercury__integer__HeadVar__5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 515 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__5_5, 0) = ((MR_Box) (mercury__integer__V_32_32));
#line 515 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__5_5, 1) = ((MR_Box) (mercury__integer__V_34_34));
#line 515 "integer.m"
            }
#line 511 "integer.m"
          }
#line 507 "integer.m"
      }
#line 506 "integer.m"
    return mercury__integer__HeadVar__5_5;
#line 506 "integer.m"
  }
#line 504 "integer.m"
}

#line 471 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_mod_2_f_0(
#line 471 "integer.m"
  MR_Word mercury__integer__X_4,
#line 471 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 471 "integer.m"
{
#line 473 "integer.m"
  {
#line 473 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 473 "integer.m"
    MR_Word mercury__integer__Mod_6;
#line 473 "integer.m"
    MR_Word mercury__integer__Rem_8;
#line 474 "integer.m"
    MR_Word mercury__integer___Trunc_7;
#line 475 "integer.m"
    MR_Integer mercury__integer__V_9_9;
#line 475 "integer.m"
    MR_Integer mercury__integer__V_11_11;
#line 475 "integer.m"
    MR_Integer mercury__integer__V_12_12;
#line 475 "integer.m"
    MR_Integer mercury__integer__Sign_13;
#line 475 "integer.m"
    MR_Integer mercury__integer__Sign_15;
#line 754 "integer.m"
    MR_Word mercury__integer__V_14_14;
#line 754 "integer.m"
    MR_Word mercury__integer__V_16_16;

#line 474 "integer.m"
    {
#line 474 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer___Trunc_7, &mercury__integer__Rem_8);
    }
#line 754 "integer.m"
    mercury__integer__Sign_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 754 "integer.m"
    mercury__integer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
#line 754 "integer.m"
    {
#line 754 "integer.m"
      mercury__integer__V_11_11 = mercury__integer__signum_1_f_0(mercury__integer__Sign_13);
    }
#line 754 "integer.m"
    mercury__integer__Sign_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Rem_8, (MR_Integer) 0)));
#line 754 "integer.m"
    mercury__integer__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Rem_8, (MR_Integer) 1)));
#line 754 "integer.m"
    {
#line 754 "integer.m"
      mercury__integer__V_12_12 = mercury__integer__signum_1_f_0(mercury__integer__Sign_15);
    }
#line 475 "integer.m"
    mercury__integer__V_9_9 = (mercury__integer__V_11_11 * mercury__integer__V_12_12);
#line 475 "integer.m"
    mercury__integer__succeeded = (mercury__integer__V_9_9 < (MR_Integer) 0);
#line 477 "integer.m"
    if (mercury__integer__succeeded)
#line 344 "integer.m"
      {
#line 344 "integer.m"
        return mercury__integer__Mod_6 = mercury__integer__big_plus_2_f_0(mercury__integer__Rem_8, mercury__integer__Y_5);
      }
#line 477 "integer.m"
    else
#line 478 "integer.m"
      mercury__integer__Mod_6 = mercury__integer__Rem_8;
#line 473 "integer.m"
    return mercury__integer__Mod_6;
#line 473 "integer.m"
  }
#line 471 "integer.m"
}

#line 461 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_div_2_f_0(
#line 461 "integer.m"
  MR_Word mercury__integer__X_4,
#line 461 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 461 "integer.m"
{
#line 463 "integer.m"
  {
#line 463 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 463 "integer.m"
    MR_Word mercury__integer__Div_6;
#line 463 "integer.m"
    MR_Word mercury__integer__Trunc_7;
#line 463 "integer.m"
    MR_Word mercury__integer__Rem_8;
#line 465 "integer.m"
    MR_Integer mercury__integer__V_9_9;
#line 465 "integer.m"
    MR_Integer mercury__integer__V_11_11;
#line 465 "integer.m"
    MR_Integer mercury__integer__V_12_12;
#line 465 "integer.m"
    MR_Integer mercury__integer__Sign_14;
#line 465 "integer.m"
    MR_Integer mercury__integer__Sign_16;
#line 754 "integer.m"
    MR_Word mercury__integer__V_15_15;
#line 754 "integer.m"
    MR_Word mercury__integer__V_17_17;

#line 464 "integer.m"
    {
#line 464 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer__Trunc_7, &mercury__integer__Rem_8);
    }
#line 754 "integer.m"
    mercury__integer__Sign_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 754 "integer.m"
    mercury__integer__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
#line 754 "integer.m"
    {
#line 754 "integer.m"
      mercury__integer__V_11_11 = mercury__integer__signum_1_f_0(mercury__integer__Sign_14);
    }
#line 754 "integer.m"
    mercury__integer__Sign_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Rem_8, (MR_Integer) 0)));
#line 754 "integer.m"
    mercury__integer__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Rem_8, (MR_Integer) 1)));
#line 754 "integer.m"
    {
#line 754 "integer.m"
      mercury__integer__V_12_12 = mercury__integer__signum_1_f_0(mercury__integer__Sign_16);
    }
#line 465 "integer.m"
    mercury__integer__V_9_9 = (mercury__integer__V_11_11 * mercury__integer__V_12_12);
#line 465 "integer.m"
    mercury__integer__succeeded = (mercury__integer__V_9_9 < (MR_Integer) 0);
#line 467 "integer.m"
    if (mercury__integer__succeeded)
#line 466 "integer.m"
      {
#line 466 "integer.m"
        MR_Word mercury__integer__V_13_13 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 466 "integer.m"
        MR_Word mercury__integer__V_24_24;
#line 466 "integer.m"
        MR_Integer mercury__integer__S_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, (MR_Integer) 0)));
#line 466 "integer.m"
        MR_Word mercury__integer__Digits0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_13_13, (MR_Integer) 1)));
#line 466 "integer.m"
        MR_Word mercury__integer__Digits_27;
#line 466 "integer.m"
        MR_Integer mercury__integer__V_28_28 = ((MR_Integer) 0 - mercury__integer__S_25);

#line 439 "integer.m"
        {
#line 439 "integer.m"
          mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_26, &mercury__integer__Digits_27);
        }
#line 438 "integer.m"
        {
#line 438 "integer.m"
          mercury__integer__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 0) = ((MR_Box) (mercury__integer__V_28_28));
#line 438 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__V_24_24, 1) = ((MR_Box) (mercury__integer__Digits_27));
#line 438 "integer.m"
        }
#line 346 "integer.m"
        {
#line 346 "integer.m"
          return mercury__integer__Div_6 = mercury__integer__big_plus_2_f_0(mercury__integer__Trunc_7, mercury__integer__V_24_24);
        }
#line 466 "integer.m"
      }
#line 467 "integer.m"
    else
#line 468 "integer.m"
      mercury__integer__Div_6 = mercury__integer__Trunc_7;
#line 463 "integer.m"
    return mercury__integer__Div_6;
#line 463 "integer.m"
  }
#line 461 "integer.m"
}

#line 456 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_rem_2_f_0(
#line 456 "integer.m"
  MR_Word mercury__integer__X_4,
#line 456 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 456 "integer.m"
{
#line 459 "integer.m"
  {
#line 459 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 459 "integer.m"
    MR_Word mercury__integer__Rem_6;
#line 459 "integer.m"
    MR_Word mercury__integer___Quot_7;

#line 459 "integer.m"
    {
#line 459 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer___Quot_7, &mercury__integer__Rem_6);
    }
#line 459 "integer.m"
    return mercury__integer__Rem_6;
#line 459 "integer.m"
  }
#line 456 "integer.m"
}

#line 451 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_quot_2_f_0(
#line 451 "integer.m"
  MR_Word mercury__integer__X_4,
#line 451 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 451 "integer.m"
{
#line 454 "integer.m"
  {
#line 454 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 454 "integer.m"
    MR_Word mercury__integer__Quot_6;
#line 454 "integer.m"
    MR_Word mercury__integer___Rem_7;

#line 454 "integer.m"
    {
#line 454 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer__Quot_6, &mercury__integer___Rem_7);
    }
#line 454 "integer.m"
    return mercury__integer__Quot_6;
#line 454 "integer.m"
  }
#line 451 "integer.m"
}

#line 447 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_sign_2_f_0(
#line 447 "integer.m"
  MR_Integer mercury__integer__Sign_4,
#line 447 "integer.m"
  MR_Word mercury__integer__In_5)
#line 447 "integer.m"
{
#line 449 "integer.m"
  {
#line 449 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__Sign_4 < (MR_Integer) 0);
#line 449 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 449 "integer.m"
    if (mercury__integer__succeeded)
#line 438 "integer.m"
      {
#line 438 "integer.m"
        MR_Integer mercury__integer__S_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__In_5, (MR_Integer) 0)));
#line 438 "integer.m"
        MR_Word mercury__integer__Digits0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__In_5, (MR_Integer) 1)));
#line 438 "integer.m"
        MR_Word mercury__integer__Digits_9;
#line 438 "integer.m"
        MR_Integer mercury__integer__V_10_10 = ((MR_Integer) 0 - mercury__integer__S_7);

#line 439 "integer.m"
        {
#line 439 "integer.m"
          mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_8, &mercury__integer__Digits_9);
        }
#line 438 "integer.m"
        {
#line 438 "integer.m"
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_10_10));
#line 438 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_9));
#line 438 "integer.m"
        }
#line 438 "integer.m"
      }
#line 449 "integer.m"
    else
#line 449 "integer.m"
      mercury__integer__HeadVar__3_3 = mercury__integer__In_5;
#line 449 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 449 "integer.m"
  }
#line 447 "integer.m"
}

#line 441 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_mul_2_f_0(
#line 441 "integer.m"
  MR_Word mercury__integer__X_4,
#line 441 "integer.m"
  MR_Word mercury__integer__Y_5)
#line 441 "integer.m"
{
#line 443 "integer.m"
  {
#line 443 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 443 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 443 "integer.m"
    MR_Integer mercury__integer__V_6_6;
#line 443 "integer.m"
    MR_Integer mercury__integer__V_7_7;
#line 443 "integer.m"
    MR_Integer mercury__integer__V_8_8;
#line 443 "integer.m"
    MR_Word mercury__integer__V_9_9;
#line 443 "integer.m"
    MR_Word mercury__integer__V_10_10;
#line 443 "integer.m"
    MR_Word mercury__integer__V_11_11;
#line 443 "integer.m"
    MR_Integer mercury__integer__Sign_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 443 "integer.m"
    MR_Integer mercury__integer__Sign_14;
#line 443 "integer.m"
    MR_Integer mercury__integer__L1_16;
#line 443 "integer.m"
    MR_Integer mercury__integer__L2_18;
#line 754 "integer.m"
    MR_Word mercury__integer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));
#line 754 "integer.m"
    MR_Word mercury__integer__V_15_15;
#line 874 "integer.m"
    MR_Word mercury__integer__Ds1_17;
#line 874 "integer.m"
    MR_Word mercury__integer__Ds2_19;

#line 754 "integer.m"
    {
#line 754 "integer.m"
      mercury__integer__V_7_7 = mercury__integer__signum_1_f_0(mercury__integer__Sign_12);
    }
#line 754 "integer.m"
    mercury__integer__Sign_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 754 "integer.m"
    mercury__integer__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
#line 754 "integer.m"
    {
#line 754 "integer.m"
      mercury__integer__V_8_8 = mercury__integer__signum_1_f_0(mercury__integer__Sign_14);
    }
#line 444 "integer.m"
    mercury__integer__V_6_6 = (mercury__integer__V_7_7 * mercury__integer__V_8_8);
#line 445 "integer.m"
    {
#line 445 "integer.m"
      mercury__integer__V_10_10 = mercury__integer__big_abs_1_f_0(mercury__integer__X_4);
    }
#line 445 "integer.m"
    {
#line 445 "integer.m"
      mercury__integer__V_11_11 = mercury__integer__big_abs_1_f_0(mercury__integer__Y_5);
    }
#line 874 "integer.m"
    mercury__integer__L1_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, (MR_Integer) 0)));
#line 874 "integer.m"
    mercury__integer__Ds1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, (MR_Integer) 1)));
#line 874 "integer.m"
    mercury__integer__L2_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, (MR_Integer) 0)));
#line 874 "integer.m"
    mercury__integer__Ds2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_11_11, (MR_Integer) 1)));
#line 875 "integer.m"
    mercury__integer__succeeded = (mercury__integer__L1_16 < mercury__integer__L2_18);
#line 874 "integer.m"
    if (mercury__integer__succeeded)
#line 876 "integer.m"
      {
#line 876 "integer.m"
        mercury__integer__V_9_9 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__V_10_10, mercury__integer__V_11_11);
      }
#line 874 "integer.m"
    else
#line 878 "integer.m"
      {
#line 878 "integer.m"
        mercury__integer__V_9_9 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__V_11_11, mercury__integer__V_10_10);
      }
#line 444 "integer.m"
    {
#line 444 "integer.m"
      return mercury__integer__HeadVar__3_3 = mercury__integer__big_sign_2_f_0(mercury__integer__V_6_6, mercury__integer__V_9_9);
    }
#line 443 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 443 "integer.m"
  }
#line 441 "integer.m"
}

#line 436 "integer.m"
MR_Word MR_CALL 
mercury__integer__big_neg_1_f_0(
#line 436 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 436 "integer.m"
{
#line 438 "integer.m"
  {
#line 438 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 438 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;
#line 438 "integer.m"
    MR_Integer mercury__integer__S_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 438 "integer.m"
    MR_Word mercury__integer__Digits0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 438 "integer.m"
    MR_Word mercury__integer__Digits_5;
#line 438 "integer.m"
    MR_Integer mercury__integer__V_6_6 = ((MR_Integer) 0 - mercury__integer__S_3);

#line 439 "integer.m"
    {
#line 439 "integer.m"
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_4, &mercury__integer__Digits_5);
    }
#line 438 "integer.m"
    {
#line 438 "integer.m"
      mercury__integer__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__V_6_6));
#line 438 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__Digits_5));
#line 438 "integer.m"
    }
#line 438 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 438 "integer.m"
  }
#line 436 "integer.m"
}

#line 432 "integer.m"
MR_bool MR_CALL 
mercury__integer__big_isnegative_1_p_0(
#line 432 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 432 "integer.m"
{
#line 434 "integer.m"
  {
#line 434 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 434 "integer.m"
    MR_Integer mercury__integer__Sign_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 434 "integer.m"
    MR_Word mercury__integer__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

#line 434 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_2 < (MR_Integer) 0);
#line 434 "integer.m"
    return mercury__integer__succeeded;
#line 434 "integer.m"
  }
#line 432 "integer.m"
}

#line 426 "integer.m"
void MR_CALL 
mercury__integer__neg_list_2_p_0(
#line 426 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1,
#line 426 "integer.m"
  MR_Word * mercury__integer__HeadVar__2_2)
#line 426 "integer.m"
{
#line 428 "integer.m"
  {
#line 428 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 428 "integer.m"
    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "integer.m"
      *mercury__integer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 428 "integer.m"
    else
#line 429 "integer.m"
      {
#line 429 "integer.m"
        MR_Integer mercury__integer__H_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 429 "integer.m"
        MR_Word mercury__integer__T_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 429 "integer.m"
        MR_Word mercury__integer__NT_5;
#line 429 "integer.m"
        MR_Integer mercury__integer__V_6_6 = ((MR_Integer) 0 - mercury__integer__H_3);

#line 430 "integer.m"
        {
#line 430 "integer.m"
          mercury__integer__neg_list_2_p_0(mercury__integer__T_4, &mercury__integer__NT_5);
        }
#line 429 "integer.m"
        {
#line 429 "integer.m"
          MR_Word base;
#line 429 "integer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "integer.m"
          *mercury__integer__HeadVar__2_2 = base;
#line 429 "integer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__V_6_6));
#line 429 "integer.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__NT_5));
#line 429 "integer.m"
        }
#line 429 "integer.m"
      }
#line 428 "integer.m"
  }
#line 426 "integer.m"
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
    MR_Word mercury__integer__HeadVar__2_2;
#line 424 "integer.m"
    MR_Integer mercury__integer__Sign_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 424 "integer.m"
    MR_Word mercury__integer__Ds_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

#line 424 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_3 < (MR_Integer) 0);
#line 424 "integer.m"
    if (mercury__integer__succeeded)
#line 438 "integer.m"
      {
#line 438 "integer.m"
        MR_Integer mercury__integer__S_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 438 "integer.m"
        MR_Word mercury__integer__Digits0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 438 "integer.m"
        MR_Word mercury__integer__Digits_9;
#line 438 "integer.m"
        MR_Integer mercury__integer__V_10_10 = ((MR_Integer) 0 - mercury__integer__S_7);

#line 439 "integer.m"
        {
#line 439 "integer.m"
          mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_8, &mercury__integer__Digits_9);
        }
#line 438 "integer.m"
        {
#line 438 "integer.m"
          mercury__integer__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__V_10_10));
#line 438 "integer.m"
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__Digits_9));
#line 438 "integer.m"
        }
#line 438 "integer.m"
      }
#line 424 "integer.m"
    else
#line 424 "integer.m"
      mercury__integer__HeadVar__2_2 = mercury__integer__HeadVar__1_1;
#line 424 "integer.m"
    return mercury__integer__HeadVar__2_2;
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

#line 215 "integer.m"
MR_Word MR_CALL 
mercury__integer__ten_0_f_0(void)
#line 215 "integer.m"
{
#line 1215 "integer.m"
  {
#line 1215 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1215 "integer.m"
    MR_Word mercury__integer__HeadVar__1_1 = (MR_Word) &mercury__integer_scalar_common_1[8];

#line 1215 "integer.m"
    return mercury__integer__HeadVar__1_1;
#line 1215 "integer.m"
  }
#line 215 "integer.m"
}

#line 211 "integer.m"
MR_Word MR_CALL 
mercury__integer__two_0_f_0(void)
#line 211 "integer.m"
{
#line 1213 "integer.m"
  {
#line 1213 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1213 "integer.m"
    MR_Word mercury__integer__HeadVar__1_1 = (MR_Word) &mercury__integer_scalar_common_1[6];

#line 1213 "integer.m"
    return mercury__integer__HeadVar__1_1;
#line 1213 "integer.m"
  }
#line 211 "integer.m"
}

#line 207 "integer.m"
MR_Word MR_CALL 
mercury__integer__one_0_f_0(void)
#line 207 "integer.m"
{
#line 1211 "integer.m"
  {
#line 1211 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1211 "integer.m"
    MR_Word mercury__integer__HeadVar__1_1 = (MR_Word) &mercury__integer_scalar_common_1[4];

#line 1211 "integer.m"
    return mercury__integer__HeadVar__1_1;
#line 1211 "integer.m"
  }
#line 207 "integer.m"
}

#line 203 "integer.m"
MR_Word MR_CALL 
mercury__integer__zero_0_f_0(void)
#line 203 "integer.m"
{
#line 1209 "integer.m"
  {
#line 1209 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1209 "integer.m"
    MR_Word mercury__integer__HeadVar__1_1 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1209 "integer.m"
    MR_Word mercury__integer__V_3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1209 "integer.m"
    return mercury__integer__HeadVar__1_1;
#line 1209 "integer.m"
  }
#line 203 "integer.m"
}

#line 199 "integer.m"
MR_Word MR_CALL 
mercury__integer__negative_one_0_f_0(void)
#line 199 "integer.m"
{
#line 1207 "integer.m"
  {
#line 1207 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1207 "integer.m"
    MR_Word mercury__integer__HeadVar__1_1 = (MR_Word) &mercury__integer_scalar_common_1[2];

#line 1207 "integer.m"
    return mercury__integer__HeadVar__1_1;
#line 1207 "integer.m"
  }
#line 199 "integer.m"
}

#line 190 "integer.m"
MR_bool MR_CALL 
mercury__integer__is_zero_1_p_0(
#line 190 "integer.m"
  MR_Word mercury__integer__HeadVar__1_1)
#line 190 "integer.m"
{
#line 1200 "integer.m"
  {
#line 1200 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1200 "integer.m"
    MR_Integer mercury__integer__V_2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
#line 1200 "integer.m"
    MR_Word mercury__integer__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

#line 1200 "integer.m"
    mercury__integer__succeeded = (mercury__integer__V_2_2 == (MR_Integer) 0);
#line 1200 "integer.m"
    if (mercury__integer__succeeded)
#line 1200 "integer.m"
      mercury__integer__succeeded = (mercury__integer__V_3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1200 "integer.m"
    return mercury__integer__succeeded;
#line 1200 "integer.m"
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
#line 1186 "integer.m"
  {
#line 1186 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1186 "integer.m"
    MR_Integer mercury__integer__HeadVar__2_2;
#line 1186 "integer.m"
    MR_Integer mercury__integer__IntPrime_6;

#line 1184 "integer.m"
    {
#line 1184 "integer.m"
      mercury__integer__succeeded = mercury__integer__to_int_2_p_0(mercury__integer__Integer_3, &mercury__integer__IntPrime_6);
    }
#line 1186 "integer.m"
    if (mercury__integer__succeeded)
#line 1185 "integer.m"
      mercury__integer__HeadVar__2_2 = mercury__integer__IntPrime_6;
#line 1186 "integer.m"
    else
#line 1187 "integer.m"
      {
#line 1187 "integer.m"
        MR_Word mercury__integer__TypeCtorInfo_8_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 1187 "integer.m"
        MR_Word mercury__integer__V_7_7 = (MR_Word) ((MR_Box) ((MR_String) "integer.det_to_int: domain error (conversion would overflow)"));

#line 1187 "integer.m"
        {
#line 1187 "integer.m"
          mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_8_9, ((MR_Box) (mercury__integer__V_7_7)));
        }
#line 1187 "integer.m"
      }
#line 1186 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 1186 "integer.m"
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
#line 1186 "integer.m"
  {
#line 1186 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1186 "integer.m"
    MR_Integer mercury__integer__Int_4;
#line 1186 "integer.m"
    MR_Integer mercury__integer__IntPrime_5;

#line 1184 "integer.m"
    {
#line 1184 "integer.m"
      mercury__integer__succeeded = mercury__integer__to_int_2_p_0(mercury__integer__Integer_3, &mercury__integer__IntPrime_5);
    }
#line 1186 "integer.m"
    if (mercury__integer__succeeded)
#line 1185 "integer.m"
      mercury__integer__Int_4 = mercury__integer__IntPrime_5;
#line 1186 "integer.m"
    else
#line 1187 "integer.m"
      {
#line 1187 "integer.m"
        MR_Word mercury__integer__TypeCtorInfo_8_8 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 1187 "integer.m"
        MR_Word mercury__integer__V_6_6 = (MR_Word) ((MR_Box) ((MR_String) "integer.det_to_int: domain error (conversion would overflow)"));

#line 1187 "integer.m"
        {
#line 1187 "integer.m"
          mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_8_8, ((MR_Box) (mercury__integer__V_6_6)));
        }
#line 1187 "integer.m"
      }
#line 1186 "integer.m"
    return mercury__integer__Int_4;
#line 1186 "integer.m"
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
#line 1177 "integer.m"
  {
#line 1177 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1177 "integer.m"
    MR_Word mercury__integer__Digits_6;
#line 1177 "integer.m"
    MR_Word mercury__integer__V_7_7;
#line 1177 "integer.m"
    MR_Integer mercury__integer__V_8_8;
#line 1177 "integer.m"
    MR_Word mercury__integer__V_9_9;
#line 1177 "integer.m"
    MR_Integer mercury__integer__V_10_10;
#line 1177 "integer.m"
    MR_Integer mercury__integer__V_11_11;
#line 1177 "integer.m"
    MR_Word mercury__integer__C_16;
#line 1177 "integer.m"
    MR_Word mercury__integer__C_25;
#line 1180 "integer.m"
    MR_Integer mercury__integer___Sign_5;

#line 252 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__to_int_2_p_0

	MR_Integer Min;

		{
#line 252 "int.opt"

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
#line 252 "int.opt"
}
#line 714 "integer.m"
    {
#line 714 "integer.m"
      mercury__integer__V_7_7 = mercury__integer__int_to_integer_1_f_0(mercury__integer__V_8_8);
    }
#line 678 "integer.m"
    {
#line 678 "integer.m"
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
#line 1177 "integer.m"
    if (mercury__integer__succeeded)
#line 1177 "integer.m"
      {
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__integer__to_int_2_p_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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
#line 223 "int.opt"
}
#line 714 "integer.m"
        {
#line 714 "integer.m"
          mercury__integer__V_9_9 = mercury__integer__int_to_integer_1_f_0(mercury__integer__V_10_10);
        }
#line 678 "integer.m"
        {
#line 678 "integer.m"
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
#line 1177 "integer.m"
        if (mercury__integer__succeeded)
#line 1177 "integer.m"
          {
#line 1180 "integer.m"
            mercury__integer___Sign_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Integer_3, (MR_Integer) 0)));
#line 1180 "integer.m"
            mercury__integer__Digits_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Integer_3, (MR_Integer) 1)));
#line 1181 "integer.m"
            mercury__integer__V_11_11 = (MR_Integer) 0;
#line 1181 "integer.m"
            {
#line 1181 "integer.m"
              *mercury__integer__Int_4 = mercury__integer__int_list_2_f_0(mercury__integer__Digits_6, mercury__integer__V_11_11);
            }
#line 1181 "integer.m"
            mercury__integer__succeeded = MR_TRUE;
#line 1177 "integer.m"
          }
#line 1177 "integer.m"
      }
#line 1177 "integer.m"
    return mercury__integer__succeeded;
#line 1177 "integer.m"
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
#line 1169 "integer.m"
  {
#line 1169 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1169 "integer.m"
    MR_Float mercury__integer__HeadVar__2_2;
#line 1169 "integer.m"
    MR_Word mercury__integer__List_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
#line 1169 "integer.m"
    MR_Float mercury__integer__V_5_5;
#line 1169 "integer.m"
    MR_Integer mercury__integer__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

#line 48 "float.opt"
{
#define MR_PROC_LABEL mercury__integer__float_1_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  (MR_Integer) 16384 ;
		{
#line 48 "float.opt"

    FloatVal = IntVal;

#line 11804 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_5_5  = FloatVal;
#line 48 "float.opt"
}
#line 1169 "integer.m"
    {
#line 1169 "integer.m"
      return mercury__integer__HeadVar__2_2 = mercury__integer__float_list_3_f_0(mercury__integer__V_5_5, (MR_Float) 0.0000000000000000, mercury__integer__List_4);
    }
#line 1169 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 1169 "integer.m"
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
#line 1123 "integer.m"
  {
#line 1123 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1123 "integer.m"
    MR_Word mercury__integer__P_6;
#line 434 "integer.m"
    MR_Integer mercury__integer__Sign_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__N_5, (MR_Integer) 0)));
#line 434 "integer.m"
    MR_Word mercury__integer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__N_5, (MR_Integer) 1)));

#line 434 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_10 < (MR_Integer) 0);
#line 1123 "integer.m"
    if (mercury__integer__succeeded)
#line 1122 "integer.m"
      {
#line 1122 "integer.m"
        MR_Word mercury__integer__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 1122 "integer.m"
        MR_Word mercury__integer__V_7_7 = (MR_Word) ((MR_Box) ((MR_String) "integer.pow: negative exponent"));

#line 1122 "integer.m"
        {
#line 1122 "integer.m"
          mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_9, ((MR_Box) (mercury__integer__V_7_7)));
        }
#line 1122 "integer.m"
      }
#line 1123 "integer.m"
    else
#line 1124 "integer.m"
      {
#line 1124 "integer.m"
        return mercury__integer__P_6 = mercury__integer__big_pow_2_f_0(mercury__integer__A_4, mercury__integer__N_5);
      }
#line 1123 "integer.m"
    return mercury__integer__P_6;
#line 1123 "integer.m"
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
#line 164 "integer.m"
}

#line 160 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_92_1_f_0(
#line 160 "integer.m"
  MR_Word mercury__integer__X_3)
#line 160 "integer.m"
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
#line 438 "integer.m"
    mercury__integer__S_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_4_4, (MR_Integer) 0)));
#line 438 "integer.m"
    mercury__integer__Digits0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_4_4, (MR_Integer) 1)));
#line 438 "integer.m"
    mercury__integer__V_13_13 = ((MR_Integer) 0 - mercury__integer__S_10);
#line 439 "integer.m"
    {
#line 439 "integer.m"
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_11, &mercury__integer__Digits_12);
    }
#line 438 "integer.m"
    {
#line 438 "integer.m"
      mercury__integer__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__V_13_13));
#line 438 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__Digits_12));
#line 438 "integer.m"
    }
#line 418 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 418 "integer.m"
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
#line 405 "integer.m"
  {
#line 405 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 405 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 434 "integer.m"
    MR_Integer mercury__integer__Sign_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 434 "integer.m"
    MR_Word mercury__integer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 434 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_10 < (MR_Integer) 0);
#line 405 "integer.m"
    if (mercury__integer__succeeded)
#line 409 "integer.m"
      {
#line 434 "integer.m"
        MR_Integer mercury__integer__Sign_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 434 "integer.m"
        MR_Word mercury__integer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 434 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_13 < (MR_Integer) 0);
#line 409 "integer.m"
        if (mercury__integer__succeeded)
#line 408 "integer.m"
          {
#line 408 "integer.m"
            MR_Word mercury__integer__V_6_6;
#line 408 "integer.m"
            MR_Word mercury__integer__V_7_7;
#line 408 "integer.m"
            MR_Word mercury__integer__V_17_17;
#line 408 "integer.m"
            MR_Word mercury__integer__V_18_18 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 408 "integer.m"
            MR_Integer mercury__integer__S_23;
#line 408 "integer.m"
            MR_Word mercury__integer__Digits0_24;
#line 408 "integer.m"
            MR_Word mercury__integer__Digits_25;
#line 408 "integer.m"
            MR_Integer mercury__integer__V_26_26;
#line 408 "integer.m"
            MR_Word mercury__integer__V_28_28;
#line 408 "integer.m"
            MR_Word mercury__integer__V_29_29;
#line 408 "integer.m"
            MR_Integer mercury__integer__S_34;
#line 408 "integer.m"
            MR_Word mercury__integer__Digits0_35;
#line 408 "integer.m"
            MR_Word mercury__integer__Digits_36;
#line 408 "integer.m"
            MR_Integer mercury__integer__V_37_37;
#line 408 "integer.m"
            MR_Word mercury__integer__V_40_40;

#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_17_17 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_18_18);
            }
#line 438 "integer.m"
            mercury__integer__S_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 0)));
#line 438 "integer.m"
            mercury__integer__Digits0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_17_17, (MR_Integer) 1)));
#line 438 "integer.m"
            mercury__integer__V_26_26 = ((MR_Integer) 0 - mercury__integer__S_23);
#line 439 "integer.m"
            {
#line 439 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_24, &mercury__integer__Digits_25);
            }
#line 438 "integer.m"
            {
#line 438 "integer.m"
              mercury__integer__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 0) = ((MR_Box) (mercury__integer__V_26_26));
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 1) = ((MR_Box) (mercury__integer__Digits_25));
#line 438 "integer.m"
            }
#line 1211 "integer.m"
            mercury__integer__V_29_29 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_28_28 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_29_29);
            }
#line 438 "integer.m"
            mercury__integer__S_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, (MR_Integer) 0)));
#line 438 "integer.m"
            mercury__integer__Digits0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_28_28, (MR_Integer) 1)));
#line 438 "integer.m"
            mercury__integer__V_37_37 = ((MR_Integer) 0 - mercury__integer__S_34);
#line 439 "integer.m"
            {
#line 439 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_35, &mercury__integer__Digits_36);
            }
#line 438 "integer.m"
            {
#line 438 "integer.m"
              mercury__integer__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 0) = ((MR_Box) (mercury__integer__V_37_37));
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 1) = ((MR_Box) (mercury__integer__Digits_36));
#line 438 "integer.m"
            }
#line 595 "integer.m"
            {
#line 595 "integer.m"
              mercury__integer__V_40_40 = mercury__integer__xor_pairs_2_f_0(mercury__integer__V_6_6, mercury__integer__V_7_7);
            }
#line 595 "integer.m"
            {
#line 595 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_40_40);
            }
#line 408 "integer.m"
          }
#line 409 "integer.m"
        else
#line 410 "integer.m"
          {
#line 410 "integer.m"
            MR_Word mercury__integer__V_8_8;
#line 410 "integer.m"
            MR_Word mercury__integer__V_42_42;
#line 410 "integer.m"
            MR_Word mercury__integer__V_43_43 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 410 "integer.m"
            MR_Integer mercury__integer__S_48;
#line 410 "integer.m"
            MR_Word mercury__integer__Digits0_49;
#line 410 "integer.m"
            MR_Word mercury__integer__Digits_50;
#line 410 "integer.m"
            MR_Integer mercury__integer__V_51_51;
#line 410 "integer.m"
            MR_Word mercury__integer__V_54_54;
#line 410 "integer.m"
            MR_Word mercury__integer__V_55_55;
#line 410 "integer.m"
            MR_Word mercury__integer__V_56_56;
#line 410 "integer.m"
            MR_Word mercury__integer__V_59_59;
#line 410 "integer.m"
            MR_Word mercury__integer__V_62_62;
#line 410 "integer.m"
            MR_Word mercury__integer__V_65_65;
#line 410 "integer.m"
            MR_Word mercury__integer__V_67_67;
#line 410 "integer.m"
            MR_Word mercury__integer__V_68_68;
#line 410 "integer.m"
            MR_Integer mercury__integer__S_73;
#line 410 "integer.m"
            MR_Word mercury__integer__Digits0_74;
#line 410 "integer.m"
            MR_Word mercury__integer__Digits_75;
#line 410 "integer.m"
            MR_Integer mercury__integer__V_76_76;

#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_42_42 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_43_43);
            }
#line 438 "integer.m"
            mercury__integer__S_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_42_42, (MR_Integer) 0)));
#line 438 "integer.m"
            mercury__integer__Digits0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_42_42, (MR_Integer) 1)));
#line 438 "integer.m"
            mercury__integer__V_51_51 = ((MR_Integer) 0 - mercury__integer__S_48);
#line 439 "integer.m"
            {
#line 439 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_49, &mercury__integer__Digits_50);
            }
#line 438 "integer.m"
            {
#line 438 "integer.m"
              mercury__integer__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 0) = ((MR_Box) (mercury__integer__V_51_51));
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 1) = ((MR_Box) (mercury__integer__Digits_50));
#line 438 "integer.m"
            }
#line 570 "integer.m"
            {
#line 570 "integer.m"
              mercury__integer__V_59_59 = mercury__integer__or_pairs_2_f_0(mercury__integer__Y_5, mercury__integer__V_8_8);
            }
#line 570 "integer.m"
            {
#line 570 "integer.m"
              mercury__integer__V_55_55 = mercury__integer__decap_1_f_0(mercury__integer__V_59_59);
            }
#line 621 "integer.m"
            {
#line 621 "integer.m"
              mercury__integer__V_62_62 = mercury__integer__and_pairs_2_f_0(mercury__integer__Y_5, mercury__integer__V_8_8);
            }
#line 621 "integer.m"
            {
#line 621 "integer.m"
              mercury__integer__V_56_56 = mercury__integer__decap_1_f_0(mercury__integer__V_62_62);
            }
#line 646 "integer.m"
            {
#line 646 "integer.m"
              mercury__integer__V_65_65 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__V_55_55, mercury__integer__V_56_56);
            }
#line 646 "integer.m"
            {
#line 646 "integer.m"
              mercury__integer__V_54_54 = mercury__integer__decap_1_f_0(mercury__integer__V_65_65);
            }
#line 1211 "integer.m"
            mercury__integer__V_68_68 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_67_67 = mercury__integer__big_plus_2_f_0(mercury__integer__V_54_54, mercury__integer__V_68_68);
            }
#line 438 "integer.m"
            mercury__integer__S_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_67_67, (MR_Integer) 0)));
#line 438 "integer.m"
            mercury__integer__Digits0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_67_67, (MR_Integer) 1)));
#line 438 "integer.m"
            mercury__integer__V_76_76 = ((MR_Integer) 0 - mercury__integer__S_73);
#line 439 "integer.m"
            {
#line 439 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_74, &mercury__integer__Digits_75);
            }
#line 438 "integer.m"
            {
#line 438 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_76_76));
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_75));
#line 438 "integer.m"
            }
#line 410 "integer.m"
          }
#line 409 "integer.m"
      }
#line 405 "integer.m"
    else
#line 414 "integer.m"
      {
#line 434 "integer.m"
        MR_Integer mercury__integer__Sign_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 434 "integer.m"
        MR_Word mercury__integer__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 434 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_77 < (MR_Integer) 0);
#line 414 "integer.m"
        if (mercury__integer__succeeded)
#line 413 "integer.m"
          {
#line 413 "integer.m"
            MR_Word mercury__integer__V_9_9;
#line 413 "integer.m"
            MR_Word mercury__integer__V_81_81;
#line 413 "integer.m"
            MR_Word mercury__integer__V_82_82 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 413 "integer.m"
            MR_Integer mercury__integer__S_87;
#line 413 "integer.m"
            MR_Word mercury__integer__Digits0_88;
#line 413 "integer.m"
            MR_Word mercury__integer__Digits_89;
#line 413 "integer.m"
            MR_Integer mercury__integer__V_90_90;

#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_81_81 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_82_82);
            }
#line 438 "integer.m"
            mercury__integer__S_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_81_81, (MR_Integer) 0)));
#line 438 "integer.m"
            mercury__integer__Digits0_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_81_81, (MR_Integer) 1)));
#line 438 "integer.m"
            mercury__integer__V_90_90 = ((MR_Integer) 0 - mercury__integer__S_87);
#line 439 "integer.m"
            {
#line 439 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_88, &mercury__integer__Digits_89);
            }
#line 438 "integer.m"
            {
#line 438 "integer.m"
              mercury__integer__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 0) = ((MR_Box) (mercury__integer__V_90_90));
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 1) = ((MR_Box) (mercury__integer__Digits_89));
#line 438 "integer.m"
            }
#line 413 "integer.m"
            {
#line 413 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__big_xor_not_2_f_0(mercury__integer__X_4, mercury__integer__V_9_9);
            }
#line 413 "integer.m"
          }
#line 414 "integer.m"
        else
#line 595 "integer.m"
          {
#line 595 "integer.m"
            MR_Word mercury__integer__V_93_93;

#line 595 "integer.m"
            {
#line 595 "integer.m"
              mercury__integer__V_93_93 = mercury__integer__xor_pairs_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
            }
#line 595 "integer.m"
            {
#line 595 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_93_93);
            }
#line 595 "integer.m"
          }
#line 414 "integer.m"
      }
#line 405 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 405 "integer.m"
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
#line 392 "integer.m"
  {
#line 392 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 392 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 434 "integer.m"
    MR_Integer mercury__integer__Sign_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 434 "integer.m"
    MR_Word mercury__integer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 434 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_13 < (MR_Integer) 0);
#line 392 "integer.m"
    if (mercury__integer__succeeded)
#line 396 "integer.m"
      {
#line 434 "integer.m"
        MR_Integer mercury__integer__Sign_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 434 "integer.m"
        MR_Word mercury__integer__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 434 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_16 < (MR_Integer) 0);
#line 396 "integer.m"
        if (mercury__integer__succeeded)
#line 395 "integer.m"
          {
#line 395 "integer.m"
            MR_Word mercury__integer__V_6_6;
#line 395 "integer.m"
            MR_Word mercury__integer__V_7_7;
#line 395 "integer.m"
            MR_Word mercury__integer__V_8_8;
#line 395 "integer.m"
            MR_Word mercury__integer__V_20_20;
#line 395 "integer.m"
            MR_Word mercury__integer__V_21_21 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 395 "integer.m"
            MR_Integer mercury__integer__S_26;
#line 395 "integer.m"
            MR_Word mercury__integer__Digits0_27;
#line 395 "integer.m"
            MR_Word mercury__integer__Digits_28;
#line 395 "integer.m"
            MR_Integer mercury__integer__V_29_29;
#line 395 "integer.m"
            MR_Word mercury__integer__V_31_31;
#line 395 "integer.m"
            MR_Word mercury__integer__V_32_32;
#line 395 "integer.m"
            MR_Integer mercury__integer__S_37;
#line 395 "integer.m"
            MR_Word mercury__integer__Digits0_38;
#line 395 "integer.m"
            MR_Word mercury__integer__Digits_39;
#line 395 "integer.m"
            MR_Integer mercury__integer__V_40_40;
#line 395 "integer.m"
            MR_Word mercury__integer__V_43_43;
#line 395 "integer.m"
            MR_Word mercury__integer__V_45_45;
#line 395 "integer.m"
            MR_Word mercury__integer__V_46_46;
#line 395 "integer.m"
            MR_Integer mercury__integer__S_51;
#line 395 "integer.m"
            MR_Word mercury__integer__Digits0_52;
#line 395 "integer.m"
            MR_Word mercury__integer__Digits_53;
#line 395 "integer.m"
            MR_Integer mercury__integer__V_54_54;

#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_20_20 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_21_21);
            }
#line 438 "integer.m"
            mercury__integer__S_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_20_20, (MR_Integer) 0)));
#line 438 "integer.m"
            mercury__integer__Digits0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_20_20, (MR_Integer) 1)));
#line 438 "integer.m"
            mercury__integer__V_29_29 = ((MR_Integer) 0 - mercury__integer__S_26);
#line 439 "integer.m"
            {
#line 439 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_27, &mercury__integer__Digits_28);
            }
#line 438 "integer.m"
            {
#line 438 "integer.m"
              mercury__integer__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 0) = ((MR_Box) (mercury__integer__V_29_29));
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 1) = ((MR_Box) (mercury__integer__Digits_28));
#line 438 "integer.m"
            }
#line 1211 "integer.m"
            mercury__integer__V_32_32 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_31_31 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_32_32);
            }
#line 438 "integer.m"
            mercury__integer__S_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_31_31, (MR_Integer) 0)));
#line 438 "integer.m"
            mercury__integer__Digits0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_31_31, (MR_Integer) 1)));
#line 438 "integer.m"
            mercury__integer__V_40_40 = ((MR_Integer) 0 - mercury__integer__S_37);
#line 439 "integer.m"
            {
#line 439 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_38, &mercury__integer__Digits_39);
            }
#line 438 "integer.m"
            {
#line 438 "integer.m"
              mercury__integer__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 0) = ((MR_Box) (mercury__integer__V_40_40));
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 1) = ((MR_Box) (mercury__integer__Digits_39));
#line 438 "integer.m"
            }
#line 621 "integer.m"
            {
#line 621 "integer.m"
              mercury__integer__V_43_43 = mercury__integer__and_pairs_2_f_0(mercury__integer__V_7_7, mercury__integer__V_8_8);
            }
#line 621 "integer.m"
            {
#line 621 "integer.m"
              mercury__integer__V_6_6 = mercury__integer__decap_1_f_0(mercury__integer__V_43_43);
            }
#line 1211 "integer.m"
            mercury__integer__V_46_46 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_45_45 = mercury__integer__big_plus_2_f_0(mercury__integer__V_6_6, mercury__integer__V_46_46);
            }
#line 438 "integer.m"
            mercury__integer__S_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_45_45, (MR_Integer) 0)));
#line 438 "integer.m"
            mercury__integer__Digits0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_45_45, (MR_Integer) 1)));
#line 438 "integer.m"
            mercury__integer__V_54_54 = ((MR_Integer) 0 - mercury__integer__S_51);
#line 439 "integer.m"
            {
#line 439 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_52, &mercury__integer__Digits_53);
            }
#line 438 "integer.m"
            {
#line 438 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_54_54));
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_53));
#line 438 "integer.m"
            }
#line 395 "integer.m"
          }
#line 396 "integer.m"
        else
#line 397 "integer.m"
          {
#line 397 "integer.m"
            MR_Word mercury__integer__V_9_9;
#line 397 "integer.m"
            MR_Word mercury__integer__V_10_10;
#line 397 "integer.m"
            MR_Word mercury__integer__V_56_56;
#line 397 "integer.m"
            MR_Word mercury__integer__V_57_57 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 397 "integer.m"
            MR_Integer mercury__integer__S_62;
#line 397 "integer.m"
            MR_Word mercury__integer__Digits0_63;
#line 397 "integer.m"
            MR_Word mercury__integer__Digits_64;
#line 397 "integer.m"
            MR_Integer mercury__integer__V_65_65;
#line 397 "integer.m"
            MR_Word mercury__integer__V_68_68;
#line 397 "integer.m"
            MR_Word mercury__integer__V_70_70;
#line 397 "integer.m"
            MR_Word mercury__integer__V_71_71;
#line 397 "integer.m"
            MR_Integer mercury__integer__S_76;
#line 397 "integer.m"
            MR_Word mercury__integer__Digits0_77;
#line 397 "integer.m"
            MR_Word mercury__integer__Digits_78;
#line 397 "integer.m"
            MR_Integer mercury__integer__V_79_79;

#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_56_56 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_57_57);
            }
#line 438 "integer.m"
            mercury__integer__S_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_56_56, (MR_Integer) 0)));
#line 438 "integer.m"
            mercury__integer__Digits0_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_56_56, (MR_Integer) 1)));
#line 438 "integer.m"
            mercury__integer__V_65_65 = ((MR_Integer) 0 - mercury__integer__S_62);
#line 439 "integer.m"
            {
#line 439 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_63, &mercury__integer__Digits_64);
            }
#line 438 "integer.m"
            {
#line 438 "integer.m"
              mercury__integer__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, 0) = ((MR_Box) (mercury__integer__V_65_65));
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, 1) = ((MR_Box) (mercury__integer__Digits_64));
#line 438 "integer.m"
            }
#line 646 "integer.m"
            {
#line 646 "integer.m"
              mercury__integer__V_68_68 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__V_10_10, mercury__integer__Y_5);
            }
#line 646 "integer.m"
            {
#line 646 "integer.m"
              mercury__integer__V_9_9 = mercury__integer__decap_1_f_0(mercury__integer__V_68_68);
            }
#line 1211 "integer.m"
            mercury__integer__V_71_71 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_70_70 = mercury__integer__big_plus_2_f_0(mercury__integer__V_9_9, mercury__integer__V_71_71);
            }
#line 438 "integer.m"
            mercury__integer__S_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_70_70, (MR_Integer) 0)));
#line 438 "integer.m"
            mercury__integer__Digits0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_70_70, (MR_Integer) 1)));
#line 438 "integer.m"
            mercury__integer__V_79_79 = ((MR_Integer) 0 - mercury__integer__S_76);
#line 439 "integer.m"
            {
#line 439 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_77, &mercury__integer__Digits_78);
            }
#line 438 "integer.m"
            {
#line 438 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_79_79));
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_78));
#line 438 "integer.m"
            }
#line 397 "integer.m"
          }
#line 396 "integer.m"
      }
#line 392 "integer.m"
    else
#line 401 "integer.m"
      {
#line 434 "integer.m"
        MR_Integer mercury__integer__Sign_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 434 "integer.m"
        MR_Word mercury__integer__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 434 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_80 < (MR_Integer) 0);
#line 401 "integer.m"
        if (mercury__integer__succeeded)
#line 400 "integer.m"
          {
#line 400 "integer.m"
            MR_Word mercury__integer__V_11_11;
#line 400 "integer.m"
            MR_Word mercury__integer__V_12_12;
#line 400 "integer.m"
            MR_Word mercury__integer__V_84_84;
#line 400 "integer.m"
            MR_Word mercury__integer__V_85_85 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 400 "integer.m"
            MR_Integer mercury__integer__S_90;
#line 400 "integer.m"
            MR_Word mercury__integer__Digits0_91;
#line 400 "integer.m"
            MR_Word mercury__integer__Digits_92;
#line 400 "integer.m"
            MR_Integer mercury__integer__V_93_93;
#line 400 "integer.m"
            MR_Word mercury__integer__V_96_96;

#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_84_84 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_85_85);
            }
#line 438 "integer.m"
            mercury__integer__S_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_84_84, (MR_Integer) 0)));
#line 438 "integer.m"
            mercury__integer__Digits0_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_84_84, (MR_Integer) 1)));
#line 438 "integer.m"
            mercury__integer__V_93_93 = ((MR_Integer) 0 - mercury__integer__S_90);
#line 439 "integer.m"
            {
#line 439 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_91, &mercury__integer__Digits_92);
            }
#line 438 "integer.m"
            {
#line 438 "integer.m"
              mercury__integer__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 0) = ((MR_Box) (mercury__integer__V_93_93));
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_12_12, 1) = ((MR_Box) (mercury__integer__Digits_92));
#line 438 "integer.m"
            }
#line 646 "integer.m"
            {
#line 646 "integer.m"
              mercury__integer__V_96_96 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__V_12_12, mercury__integer__X_4);
            }
#line 646 "integer.m"
            {
#line 646 "integer.m"
              mercury__integer__V_11_11 = mercury__integer__decap_1_f_0(mercury__integer__V_96_96);
            }
#line 400 "integer.m"
            {
#line 400 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__f_92_1_f_0(mercury__integer__V_11_11);
            }
#line 400 "integer.m"
          }
#line 401 "integer.m"
        else
#line 402 "integer.m"
          {
#line 402 "integer.m"
            return mercury__integer__HeadVar__3_3 = mercury__integer__big_or_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
          }
#line 401 "integer.m"
      }
#line 392 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 392 "integer.m"
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
#line 379 "integer.m"
  {
#line 379 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 379 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 434 "integer.m"
    MR_Integer mercury__integer__Sign_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 434 "integer.m"
    MR_Word mercury__integer__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 434 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_11 < (MR_Integer) 0);
#line 379 "integer.m"
    if (mercury__integer__succeeded)
#line 383 "integer.m"
      {
#line 434 "integer.m"
        MR_Integer mercury__integer__Sign_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 434 "integer.m"
        MR_Word mercury__integer__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 434 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_14 < (MR_Integer) 0);
#line 383 "integer.m"
        if (mercury__integer__succeeded)
#line 382 "integer.m"
          {
#line 382 "integer.m"
            MR_Word mercury__integer__V_6_6;
#line 382 "integer.m"
            MR_Word mercury__integer__V_7_7;
#line 382 "integer.m"
            MR_Word mercury__integer__V_8_8;
#line 382 "integer.m"
            MR_Word mercury__integer__V_18_18;
#line 382 "integer.m"
            MR_Word mercury__integer__V_19_19 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 382 "integer.m"
            MR_Integer mercury__integer__S_24;
#line 382 "integer.m"
            MR_Word mercury__integer__Digits0_25;
#line 382 "integer.m"
            MR_Word mercury__integer__Digits_26;
#line 382 "integer.m"
            MR_Integer mercury__integer__V_27_27;
#line 382 "integer.m"
            MR_Word mercury__integer__V_29_29;
#line 382 "integer.m"
            MR_Word mercury__integer__V_30_30;
#line 382 "integer.m"
            MR_Integer mercury__integer__S_35;
#line 382 "integer.m"
            MR_Word mercury__integer__Digits0_36;
#line 382 "integer.m"
            MR_Word mercury__integer__Digits_37;
#line 382 "integer.m"
            MR_Integer mercury__integer__V_38_38;
#line 382 "integer.m"
            MR_Word mercury__integer__V_41_41;
#line 382 "integer.m"
            MR_Word mercury__integer__V_43_43;
#line 382 "integer.m"
            MR_Word mercury__integer__V_44_44;
#line 382 "integer.m"
            MR_Integer mercury__integer__S_49;
#line 382 "integer.m"
            MR_Word mercury__integer__Digits0_50;
#line 382 "integer.m"
            MR_Word mercury__integer__Digits_51;
#line 382 "integer.m"
            MR_Integer mercury__integer__V_52_52;

#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_18_18 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_19_19);
            }
#line 438 "integer.m"
            mercury__integer__S_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_18_18, (MR_Integer) 0)));
#line 438 "integer.m"
            mercury__integer__Digits0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_18_18, (MR_Integer) 1)));
#line 438 "integer.m"
            mercury__integer__V_27_27 = ((MR_Integer) 0 - mercury__integer__S_24);
#line 439 "integer.m"
            {
#line 439 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_25, &mercury__integer__Digits_26);
            }
#line 438 "integer.m"
            {
#line 438 "integer.m"
              mercury__integer__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 0) = ((MR_Box) (mercury__integer__V_27_27));
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_7_7, 1) = ((MR_Box) (mercury__integer__Digits_26));
#line 438 "integer.m"
            }
#line 1211 "integer.m"
            mercury__integer__V_30_30 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_29_29 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_30_30);
            }
#line 438 "integer.m"
            mercury__integer__S_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, (MR_Integer) 0)));
#line 438 "integer.m"
            mercury__integer__Digits0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_29_29, (MR_Integer) 1)));
#line 438 "integer.m"
            mercury__integer__V_38_38 = ((MR_Integer) 0 - mercury__integer__S_35);
#line 439 "integer.m"
            {
#line 439 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_36, &mercury__integer__Digits_37);
            }
#line 438 "integer.m"
            {
#line 438 "integer.m"
              mercury__integer__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 0) = ((MR_Box) (mercury__integer__V_38_38));
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_8_8, 1) = ((MR_Box) (mercury__integer__Digits_37));
#line 438 "integer.m"
            }
#line 570 "integer.m"
            {
#line 570 "integer.m"
              mercury__integer__V_41_41 = mercury__integer__or_pairs_2_f_0(mercury__integer__V_7_7, mercury__integer__V_8_8);
            }
#line 570 "integer.m"
            {
#line 570 "integer.m"
              mercury__integer__V_6_6 = mercury__integer__decap_1_f_0(mercury__integer__V_41_41);
            }
#line 1211 "integer.m"
            mercury__integer__V_44_44 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_43_43 = mercury__integer__big_plus_2_f_0(mercury__integer__V_6_6, mercury__integer__V_44_44);
            }
#line 438 "integer.m"
            mercury__integer__S_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_43_43, (MR_Integer) 0)));
#line 438 "integer.m"
            mercury__integer__Digits0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_43_43, (MR_Integer) 1)));
#line 438 "integer.m"
            mercury__integer__V_52_52 = ((MR_Integer) 0 - mercury__integer__S_49);
#line 439 "integer.m"
            {
#line 439 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_50, &mercury__integer__Digits_51);
            }
#line 438 "integer.m"
            {
#line 438 "integer.m"
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_52_52));
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_51));
#line 438 "integer.m"
            }
#line 382 "integer.m"
          }
#line 383 "integer.m"
        else
#line 384 "integer.m"
          {
#line 384 "integer.m"
            MR_Word mercury__integer__V_9_9;
#line 384 "integer.m"
            MR_Word mercury__integer__V_54_54;
#line 384 "integer.m"
            MR_Word mercury__integer__V_55_55 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 384 "integer.m"
            MR_Integer mercury__integer__S_60;
#line 384 "integer.m"
            MR_Word mercury__integer__Digits0_61;
#line 384 "integer.m"
            MR_Word mercury__integer__Digits_62;
#line 384 "integer.m"
            MR_Integer mercury__integer__V_63_63;
#line 384 "integer.m"
            MR_Word mercury__integer__V_66_66;

#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_54_54 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_55_55);
            }
#line 438 "integer.m"
            mercury__integer__S_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_54_54, (MR_Integer) 0)));
#line 438 "integer.m"
            mercury__integer__Digits0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_54_54, (MR_Integer) 1)));
#line 438 "integer.m"
            mercury__integer__V_63_63 = ((MR_Integer) 0 - mercury__integer__S_60);
#line 439 "integer.m"
            {
#line 439 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_61, &mercury__integer__Digits_62);
            }
#line 438 "integer.m"
            {
#line 438 "integer.m"
              mercury__integer__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 0) = ((MR_Box) (mercury__integer__V_63_63));
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_9_9, 1) = ((MR_Box) (mercury__integer__Digits_62));
#line 438 "integer.m"
            }
#line 646 "integer.m"
            {
#line 646 "integer.m"
              mercury__integer__V_66_66 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__Y_5, mercury__integer__V_9_9);
            }
#line 646 "integer.m"
            {
#line 646 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_66_66);
            }
#line 384 "integer.m"
          }
#line 383 "integer.m"
      }
#line 379 "integer.m"
    else
#line 388 "integer.m"
      {
#line 434 "integer.m"
        MR_Integer mercury__integer__Sign_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
#line 434 "integer.m"
        MR_Word mercury__integer__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

#line 434 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Sign_67 < (MR_Integer) 0);
#line 388 "integer.m"
        if (mercury__integer__succeeded)
#line 387 "integer.m"
          {
#line 387 "integer.m"
            MR_Word mercury__integer__V_10_10;
#line 387 "integer.m"
            MR_Word mercury__integer__V_71_71;
#line 387 "integer.m"
            MR_Word mercury__integer__V_72_72 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 387 "integer.m"
            MR_Integer mercury__integer__S_77;
#line 387 "integer.m"
            MR_Word mercury__integer__Digits0_78;
#line 387 "integer.m"
            MR_Word mercury__integer__Digits_79;
#line 387 "integer.m"
            MR_Integer mercury__integer__V_80_80;
#line 387 "integer.m"
            MR_Word mercury__integer__V_83_83;

#line 418 "integer.m"
            {
#line 418 "integer.m"
              mercury__integer__V_71_71 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__V_72_72);
            }
#line 438 "integer.m"
            mercury__integer__S_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_71_71, (MR_Integer) 0)));
#line 438 "integer.m"
            mercury__integer__Digits0_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_71_71, (MR_Integer) 1)));
#line 438 "integer.m"
            mercury__integer__V_80_80 = ((MR_Integer) 0 - mercury__integer__S_77);
#line 439 "integer.m"
            {
#line 439 "integer.m"
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_78, &mercury__integer__Digits_79);
            }
#line 438 "integer.m"
            {
#line 438 "integer.m"
              mercury__integer__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, 0) = ((MR_Box) (mercury__integer__V_80_80));
#line 438 "integer.m"
              MR_hl_field(MR_mktag(0), mercury__integer__V_10_10, 1) = ((MR_Box) (mercury__integer__Digits_79));
#line 438 "integer.m"
            }
#line 646 "integer.m"
            {
#line 646 "integer.m"
              mercury__integer__V_83_83 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__X_4, mercury__integer__V_10_10);
            }
#line 646 "integer.m"
            {
#line 646 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_83_83);
            }
#line 387 "integer.m"
          }
#line 388 "integer.m"
        else
#line 621 "integer.m"
          {
#line 621 "integer.m"
            MR_Word mercury__integer__V_86_86;

#line 621 "integer.m"
            {
#line 621 "integer.m"
              mercury__integer__V_86_86 = mercury__integer__and_pairs_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
            }
#line 621 "integer.m"
            {
#line 621 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_86_86);
            }
#line 621 "integer.m"
          }
#line 388 "integer.m"
      }
#line 379 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 379 "integer.m"
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
#line 370 "integer.m"
  {
#line 370 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__I_5 < (MR_Integer) 0);
#line 370 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 370 "integer.m"
    if (mercury__integer__succeeded)
#line 372 "integer.m"
      {
#line 372 "integer.m"
        MR_Integer mercury__integer__V_7_7 = ((MR_Integer) 0 - mercury__integer__I_5);

#line 372 "integer.m"
        {
#line 372 "integer.m"
          return mercury__integer__HeadVar__3_3 = mercury__integer__f_60_60_2_f_0(mercury__integer__X_4, mercury__integer__V_7_7);
        }
#line 372 "integer.m"
      }
#line 370 "integer.m"
    else
#line 375 "integer.m"
      {
#line 373 "integer.m"
        mercury__integer__succeeded = (mercury__integer__I_5 > (MR_Integer) 0);
#line 375 "integer.m"
        if (mercury__integer__succeeded)
#line 483 "integer.m"
          {
#line 1200 "integer.m"
            MR_Integer mercury__integer__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 1200 "integer.m"
            MR_Word mercury__integer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 1200 "integer.m"
            mercury__integer__succeeded = (mercury__integer__V_13_13 == (MR_Integer) 0);
#line 1200 "integer.m"
            if (mercury__integer__succeeded)
#line 1200 "integer.m"
              mercury__integer__succeeded = (mercury__integer__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 483 "integer.m"
            if (mercury__integer__succeeded)
#line 485 "integer.m"
              mercury__integer__HeadVar__3_3 = mercury__integer__X_4;
#line 483 "integer.m"
            else
#line 488 "integer.m"
              {
#line 434 "integer.m"
                MR_Integer mercury__integer__Sign_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 434 "integer.m"
                MR_Word mercury__integer__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

#line 434 "integer.m"
                mercury__integer__succeeded = (mercury__integer__Sign_15 < (MR_Integer) 0);
#line 488 "integer.m"
                if (mercury__integer__succeeded)
#line 487 "integer.m"
                  {
#line 487 "integer.m"
                    MR_Word mercury__integer__V_11_11;
#line 487 "integer.m"
                    MR_Word mercury__integer__V_19_19;
#line 487 "integer.m"
                    MR_Word mercury__integer__V_20_20 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 487 "integer.m"
                    MR_Integer mercury__integer__S_25;
#line 487 "integer.m"
                    MR_Word mercury__integer__Digits0_26;
#line 487 "integer.m"
                    MR_Integer mercury__integer__Len_31;
#line 487 "integer.m"
                    MR_Word mercury__integer__Digits_32;
#line 487 "integer.m"
                    MR_Integer mercury__integer__Div_33;
#line 487 "integer.m"
                    MR_Word mercury__integer__V_51_51;
#line 487 "integer.m"
                    MR_Word mercury__integer__V_52_52;
#line 487 "integer.m"
                    MR_Integer mercury__integer__S_57;
#line 487 "integer.m"
                    MR_Word mercury__integer__Digits0_58;
#line 487 "integer.m"
                    MR_Word mercury__integer__Digits_59;
#line 487 "integer.m"
                    MR_Integer mercury__integer__V_60_60;

#line 418 "integer.m"
                    {
#line 418 "integer.m"
                      mercury__integer__V_19_19 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__V_20_20);
                    }
#line 438 "integer.m"
                    mercury__integer__S_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 0)));
#line 438 "integer.m"
                    mercury__integer__Digits0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_19_19, (MR_Integer) 1)));
#line 438 "integer.m"
                    mercury__integer__Len_31 = ((MR_Integer) 0 - mercury__integer__S_25);
#line 439 "integer.m"
                    {
#line 439 "integer.m"
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_26, &mercury__integer__Digits_32);
                    }
#line 495 "integer.m"
                    {
#line 495 "integer.m"
                      mercury__integer__Div_33 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
                    }
#line 496 "integer.m"
                    mercury__integer__succeeded = (mercury__integer__Div_33 < mercury__integer__Len_31);
#line 500 "integer.m"
                    if (mercury__integer__succeeded)
#line 497 "integer.m"
                      {
#line 497 "integer.m"
                        MR_Integer mercury__integer__Mod_34;
#line 497 "integer.m"
                        MR_Word mercury__integer__V_37_37;
#line 497 "integer.m"
                        MR_Integer mercury__integer__V_38_38;
#line 497 "integer.m"
                        MR_Word mercury__integer__V_40_40;
#line 497 "integer.m"
                        MR_Integer mercury__integer__V_41_41;
#line 497 "integer.m"
                        MR_Integer mercury__integer__V_6_46;
#line 497 "integer.m"
                        MR_Integer mercury__integer__V_7_47;

#line 272 "int.opt"
                        {
#line 272 "int.opt"
                          mercury__integer__V_7_47 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
                        }
#line 271 "int.opt"
                        mercury__integer__V_6_46 = (mercury__integer__V_7_47 * (MR_Integer) 14);
#line 270 "int.opt"
                        mercury__integer__Mod_34 = (mercury__integer__I_5 - mercury__integer__V_6_46);
#line 498 "integer.m"
                        mercury__integer__V_38_38 = ((MR_Integer) 14 - mercury__integer__Mod_34);
#line 499 "integer.m"
                        mercury__integer__V_41_41 = (mercury__integer__Len_31 - mercury__integer__Div_33);
#line 499 "integer.m"
                        {
#line 499 "integer.m"
                          mercury__integer__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 499 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_40_40, 0) = ((MR_Box) (mercury__integer__V_41_41));
#line 499 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_40_40, 1) = ((MR_Box) (mercury__integer__Digits_32));
#line 499 "integer.m"
                        }
#line 498 "integer.m"
                        {
#line 498 "integer.m"
                          mercury__integer__V_37_37 = mercury__integer__rightshift_4_f_0(mercury__integer__Mod_34, mercury__integer__V_38_38, mercury__integer__V_40_40, (MR_Integer) 0);
                        }
#line 498 "integer.m"
                        {
#line 498 "integer.m"
                          mercury__integer__V_11_11 = mercury__integer__decap_1_f_0(mercury__integer__V_37_37);
                        }
#line 497 "integer.m"
                      }
#line 500 "integer.m"
                    else
#line 1209 "integer.m"
                      {
#line 1209 "integer.m"
                        MR_Word mercury__integer__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1209 "integer.m"
                        mercury__integer__V_11_11 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1209 "integer.m"
                      }
#line 1211 "integer.m"
                    mercury__integer__V_52_52 = (MR_Word) &mercury__integer_scalar_common_1[4];
#line 418 "integer.m"
                    {
#line 418 "integer.m"
                      mercury__integer__V_51_51 = mercury__integer__big_plus_2_f_0(mercury__integer__V_11_11, mercury__integer__V_52_52);
                    }
#line 438 "integer.m"
                    mercury__integer__S_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_51_51, (MR_Integer) 0)));
#line 438 "integer.m"
                    mercury__integer__Digits0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_51_51, (MR_Integer) 1)));
#line 438 "integer.m"
                    mercury__integer__V_60_60 = ((MR_Integer) 0 - mercury__integer__S_57);
#line 439 "integer.m"
                    {
#line 439 "integer.m"
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_58, &mercury__integer__Digits_59);
                    }
#line 438 "integer.m"
                    {
#line 438 "integer.m"
                      mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__V_60_60));
#line 438 "integer.m"
                      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_59));
#line 438 "integer.m"
                    }
#line 487 "integer.m"
                  }
#line 488 "integer.m"
                else
#line 494 "integer.m"
                  {
#line 494 "integer.m"
                    MR_Integer mercury__integer__Len_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
#line 494 "integer.m"
                    MR_Word mercury__integer__Digits_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));
#line 494 "integer.m"
                    MR_Integer mercury__integer__Div_65;

#line 495 "integer.m"
                    {
#line 495 "integer.m"
                      mercury__integer__Div_65 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
                    }
#line 496 "integer.m"
                    mercury__integer__succeeded = (mercury__integer__Div_65 < mercury__integer__Len_63);
#line 500 "integer.m"
                    if (mercury__integer__succeeded)
#line 497 "integer.m"
                      {
#line 497 "integer.m"
                        MR_Integer mercury__integer__Mod_66;
#line 497 "integer.m"
                        MR_Word mercury__integer__V_69_69;
#line 497 "integer.m"
                        MR_Integer mercury__integer__V_70_70;
#line 497 "integer.m"
                        MR_Word mercury__integer__V_72_72;
#line 497 "integer.m"
                        MR_Integer mercury__integer__V_73_73;
#line 497 "integer.m"
                        MR_Integer mercury__integer__V_6_78;
#line 497 "integer.m"
                        MR_Integer mercury__integer__V_7_79;

#line 272 "int.opt"
                        {
#line 272 "int.opt"
                          mercury__integer__V_7_79 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
                        }
#line 271 "int.opt"
                        mercury__integer__V_6_78 = (mercury__integer__V_7_79 * (MR_Integer) 14);
#line 270 "int.opt"
                        mercury__integer__Mod_66 = (mercury__integer__I_5 - mercury__integer__V_6_78);
#line 498 "integer.m"
                        mercury__integer__V_70_70 = ((MR_Integer) 14 - mercury__integer__Mod_66);
#line 499 "integer.m"
                        mercury__integer__V_73_73 = (mercury__integer__Len_63 - mercury__integer__Div_65);
#line 499 "integer.m"
                        {
#line 499 "integer.m"
                          mercury__integer__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 499 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_72_72, 0) = ((MR_Box) (mercury__integer__V_73_73));
#line 499 "integer.m"
                          MR_hl_field(MR_mktag(0), mercury__integer__V_72_72, 1) = ((MR_Box) (mercury__integer__Digits_64));
#line 499 "integer.m"
                        }
#line 498 "integer.m"
                        {
#line 498 "integer.m"
                          mercury__integer__V_69_69 = mercury__integer__rightshift_4_f_0(mercury__integer__Mod_66, mercury__integer__V_70_70, mercury__integer__V_72_72, (MR_Integer) 0);
                        }
#line 498 "integer.m"
                        {
#line 498 "integer.m"
                          return mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__V_69_69);
                        }
#line 497 "integer.m"
                      }
#line 500 "integer.m"
                    else
#line 1209 "integer.m"
                      {
#line 1209 "integer.m"
                        MR_Word mercury__integer__V_81_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1209 "integer.m"
                        mercury__integer__HeadVar__3_3 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1209 "integer.m"
                      }
#line 494 "integer.m"
                  }
#line 488 "integer.m"
              }
#line 483 "integer.m"
          }
#line 375 "integer.m"
        else
#line 376 "integer.m"
          mercury__integer__HeadVar__3_3 = mercury__integer__X_4;
#line 375 "integer.m"
      }
#line 370 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 370 "integer.m"
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
#line 361 "integer.m"
  {
#line 361 "integer.m"
    MR_bool mercury__integer__succeeded = (mercury__integer__I_5 > (MR_Integer) 0);
#line 361 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;

#line 361 "integer.m"
    if (mercury__integer__succeeded)
#line 363 "integer.m"
      {
#line 363 "integer.m"
        return mercury__integer__HeadVar__3_3 = mercury__integer__big_left_shift_2_f_0(mercury__integer__X_4, mercury__integer__I_5);
      }
#line 361 "integer.m"
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
            MR_Integer mercury__integer__V_8_8 = ((MR_Integer) 0 - mercury__integer__I_5);

#line 365 "integer.m"
            {
#line 365 "integer.m"
              return mercury__integer__HeadVar__3_3 = mercury__integer__f_62_62_2_f_0(mercury__integer__X_4, mercury__integer__V_8_8);
            }
#line 365 "integer.m"
          }
#line 366 "integer.m"
        else
#line 367 "integer.m"
          mercury__integer__HeadVar__3_3 = mercury__integer__X_4;
#line 366 "integer.m"
      }
#line 361 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 361 "integer.m"
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
#line 459 "integer.m"
  {
#line 459 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 459 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 459 "integer.m"
    MR_Word mercury__integer___Quot_9;

#line 459 "integer.m"
    {
#line 459 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer___Quot_9, &mercury__integer__HeadVar__3_3);
    }
#line 459 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 459 "integer.m"
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
#line 454 "integer.m"
  {
#line 454 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 454 "integer.m"
    MR_Word mercury__integer__HeadVar__3_3;
#line 454 "integer.m"
    MR_Word mercury__integer___Rem_9;

#line 454 "integer.m"
    {
#line 454 "integer.m"
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer__HeadVar__3_3, &mercury__integer___Rem_9);
    }
#line 454 "integer.m"
    return mercury__integer__HeadVar__3_3;
#line 454 "integer.m"
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

#line 439 "integer.m"
    {
#line 439 "integer.m"
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_8, &mercury__integer__Digits_9);
    }
#line 438 "integer.m"
    {
#line 438 "integer.m"
      mercury__integer__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 0) = ((MR_Box) (mercury__integer__V_10_10));
#line 438 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__V_6_6, 1) = ((MR_Box) (mercury__integer__Digits_9));
#line 438 "integer.m"
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
#line 100 "integer.m"
}

#line 96 "integer.m"
MR_Word MR_CALL 
mercury__integer__f_minus_1_f_0(
#line 96 "integer.m"
  MR_Word mercury__integer__X_3)
#line 96 "integer.m"
{
#line 438 "integer.m"
  {
#line 438 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 438 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;
#line 438 "integer.m"
    MR_Integer mercury__integer__S_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_3, (MR_Integer) 0)));
#line 438 "integer.m"
    MR_Word mercury__integer__Digits0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_3, (MR_Integer) 1)));
#line 438 "integer.m"
    MR_Word mercury__integer__Digits_6;
#line 438 "integer.m"
    MR_Integer mercury__integer__V_7_7 = ((MR_Integer) 0 - mercury__integer__S_4);

#line 439 "integer.m"
    {
#line 439 "integer.m"
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_5, &mercury__integer__Digits_6);
    }
#line 438 "integer.m"
    {
#line 438 "integer.m"
      mercury__integer__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__V_7_7));
#line 438 "integer.m"
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__Digits_6));
#line 438 "integer.m"
    }
#line 438 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 438 "integer.m"
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
#line 1474 "integer.m"
  {
#line 1474 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1474 "integer.m"
    MR_Word mercury__integer__Integer_6;
#line 1474 "integer.m"
    MR_Word mercury__integer__Integer0_7;

#line 1472 "integer.m"
    {
#line 1472 "integer.m"
      mercury__integer__succeeded = mercury__integer__from_base_string_3_p_0(mercury__integer__Base_4, mercury__integer__String_5, &mercury__integer__Integer0_7);
    }
#line 1474 "integer.m"
    if (mercury__integer__succeeded)
#line 1473 "integer.m"
      mercury__integer__Integer_6 = mercury__integer__Integer0_7;
#line 1474 "integer.m"
    else
#line 1475 "integer.m"
      {
#line 1475 "integer.m"
        {
#line 1475 "integer.m"
          mercury__require__error_1_p_0((MR_String) "integer.det_from_base_string: conversion failed");
        }
#line 1475 "integer.m"
      }
#line 1474 "integer.m"
    return mercury__integer__Integer_6;
#line 1474 "integer.m"
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
#line 1442 "integer.m"
  {
#line 1442 "integer.m"
    MR_bool mercury__integer__succeeded;

#line 1442 "integer.m"
    {
#line 1442 "integer.m"
      return mercury__integer__succeeded = mercury__integer__from_base_string_3_p_0(mercury__integer__Base_4, mercury__integer__String_5, mercury__integer__Integer_6);
    }
#line 1442 "integer.m"
    return mercury__integer__succeeded;
#line 1442 "integer.m"
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
#line 1444 "integer.m"
  {
#line 1444 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1444 "integer.m"
    MR_Char mercury__integer__Char_7;
#line 1444 "integer.m"
    MR_Integer mercury__integer__Len_8;
#line 1444 "integer.m"
    MR_Integer mercury__integer__V_7_40;

#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__String_5 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 13826 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_7_40  = Length;
#line 703 "string.opt"
}
#line 527 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__integer__V_7_40 ;
		{
#line 527 "string.opt"

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
#line 527 "string.opt"
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
#line 1444 "integer.m"
    if (mercury__integer__succeeded)
#line 1444 "integer.m"
      {
#line 522 "string.opt"
        {
#line 522 "string.opt"
          mercury__string__unsafe_index_3_p_0(mercury__integer__String_5, (MR_Integer) 0, &mercury__integer__Char_7);
        }
#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__String_5 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 13886 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__Len_8  = Length;
#line 703 "string.opt"
}
#line 1447 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Char_7 == (MR_Char) 45);
#line 1452 "integer.m"
        if (mercury__integer__succeeded)
#line 1448 "integer.m"
          {
#line 1448 "integer.m"
            MR_Word mercury__integer__N_9;
#line 1448 "integer.m"
            MR_Integer mercury__integer__V_13_13;
#line 1448 "integer.m"
            MR_Word mercury__integer__V_14_14;
#line 1448 "integer.m"
            MR_Integer mercury__integer__V_45_45;
#line 1448 "integer.m"
            MR_Word mercury__integer__V_46_46;
#line 1448 "integer.m"
            MR_Integer mercury__integer__V_12_53;
#line 1448 "integer.m"
            MR_Integer mercury__integer__V_13_55;
#line 1448 "integer.m"
            MR_Integer mercury__integer__V_17_56;
#line 1448 "integer.m"
            MR_Integer mercury__integer__S_73;
#line 1448 "integer.m"
            MR_Word mercury__integer__Digits0_74;
#line 1448 "integer.m"
            MR_Word mercury__integer__Digits_75;
#line 1448 "integer.m"
            MR_Integer mercury__integer__V_76_76;
#line 396 "string.opt"
            MR_Integer mercury__integer__V_16_54;

#line 1448 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Len_8 > (MR_Integer) 1);
#line 1448 "integer.m"
            if (mercury__integer__succeeded)
#line 1448 "integer.m"
              {
#line 1449 "integer.m"
                mercury__integer__V_13_13 = (MR_Integer) 1;
#line 1209 "integer.m"
                mercury__integer__V_45_45 = (MR_Integer) 0;
#line 1209 "integer.m"
                mercury__integer__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 396 "string.opt"
                mercury__integer__V_16_54 = (MR_Integer) 0;
#line 1209 "integer.m"
                mercury__integer__V_14_14 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 217 "int.opt"
                mercury__integer__V_12_53 = mercury__integer__V_13_13;
#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__String_5 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 13957 "integer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_17_56  = Length;
#line 703 "string.opt"
}
#line 242 "int.opt"
                mercury__integer__succeeded = (mercury__integer__Len_8 < mercury__integer__V_17_56);
#line 245 "int.opt"
                if (mercury__integer__succeeded)
#line 244 "int.opt"
                  mercury__integer__V_13_55 = mercury__integer__Len_8;
#line 245 "int.opt"
                else
#line 246 "int.opt"
                  mercury__integer__V_13_55 = mercury__integer__V_17_56;
#line 399 "string.opt"
                {
#line 399 "string.opt"
                  mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__Base_4, mercury__integer__String_5, mercury__integer__V_12_53, mercury__integer__V_13_55, mercury__integer__V_14_14, &mercury__integer__N_9);
                }
#line 1448 "integer.m"
                if (mercury__integer__succeeded)
#line 1448 "integer.m"
                  {
#line 438 "integer.m"
                    mercury__integer__S_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__N_9, (MR_Integer) 0)));
#line 438 "integer.m"
                    mercury__integer__Digits0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__N_9, (MR_Integer) 1)));
#line 438 "integer.m"
                    mercury__integer__V_76_76 = ((MR_Integer) 0 - mercury__integer__S_73);
#line 439 "integer.m"
                    {
#line 439 "integer.m"
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_74, &mercury__integer__Digits_75);
                    }
#line 438 "integer.m"
                    {
#line 438 "integer.m"
                      MR_Word base;
#line 438 "integer.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "integer.m"
                      *mercury__integer__Integer_6 = base;
#line 438 "integer.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__integer__V_76_76));
#line 438 "integer.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__Digits_75));
#line 438 "integer.m"
                    }
#line 438 "integer.m"
                    mercury__integer__succeeded = MR_TRUE;
#line 1448 "integer.m"
                  }
#line 1448 "integer.m"
              }
#line 1448 "integer.m"
          }
#line 1452 "integer.m"
        else
#line 1457 "integer.m"
          {
#line 1452 "integer.m"
            mercury__integer__succeeded = (mercury__integer__Char_7 == (MR_Char) 43);
#line 1457 "integer.m"
            if (mercury__integer__succeeded)
#line 1453 "integer.m"
              {
#line 1453 "integer.m"
                MR_Integer mercury__integer__V_17_17;
#line 1453 "integer.m"
                MR_Word mercury__integer__V_18_18;
#line 1453 "integer.m"
                MR_Integer mercury__integer__V_77_77;
#line 1453 "integer.m"
                MR_Word mercury__integer__V_78_78;

#line 1453 "integer.m"
                mercury__integer__succeeded = (mercury__integer__Len_8 > (MR_Integer) 1);
#line 1453 "integer.m"
                if (mercury__integer__succeeded)
#line 1453 "integer.m"
                  {
#line 1454 "integer.m"
                    mercury__integer__V_17_17 = (MR_Integer) 1;
#line 1209 "integer.m"
                    mercury__integer__V_77_77 = (MR_Integer) 0;
#line 1209 "integer.m"
                    mercury__integer__V_78_78 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1209 "integer.m"
                    mercury__integer__V_18_18 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1454 "integer.m"
                    {
#line 1454 "integer.m"
                      return mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__Base_4, mercury__integer__String_5, mercury__integer__V_17_17, mercury__integer__Len_8, mercury__integer__V_18_18, mercury__integer__Integer_6);
                    }
#line 1453 "integer.m"
                  }
#line 1453 "integer.m"
              }
#line 1457 "integer.m"
            else
#line 1459 "integer.m"
              {
#line 1459 "integer.m"
                MR_Word mercury__integer__V_21_21 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1459 "integer.m"
                MR_Word mercury__integer__V_80_80 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1458 "integer.m"
                {
#line 1458 "integer.m"
                  return mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__Base_4, mercury__integer__String_5, (MR_Integer) 0, mercury__integer__Len_8, mercury__integer__V_21_21, mercury__integer__Integer_6);
                }
#line 1459 "integer.m"
              }
#line 1457 "integer.m"
          }
#line 1444 "integer.m"
      }
#line 1444 "integer.m"
    return mercury__integer__succeeded;
#line 1444 "integer.m"
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
#line 1232 "integer.m"
  {
#line 1232 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1232 "integer.m"
    MR_Word mercury__integer__I_4;
#line 1232 "integer.m"
    MR_Word mercury__integer__IPrime_5;
#line 1225 "integer.m"
    MR_Word mercury__integer__Cs_9;

#line 1226 "integer.m"
    {
#line 1226 "integer.m"
      mercury__string__to_char_list_2_p_0(mercury__integer__S_3, &mercury__integer__Cs_9);
    }
#line 1227 "integer.m"
    {
#line 1227 "integer.m"
      mercury__integer__succeeded = mercury__integer__string_to_integer_1_f_0(mercury__integer__Cs_9, &mercury__integer__IPrime_5);
    }
#line 1232 "integer.m"
    if (mercury__integer__succeeded)
#line 1231 "integer.m"
      mercury__integer__I_4 = mercury__integer__IPrime_5;
#line 1232 "integer.m"
    else
#line 1233 "integer.m"
      {
#line 1233 "integer.m"
        {
#line 1233 "integer.m"
          mercury__require__error_1_p_0((MR_String) "integer.det_from_string: conversion failed");
        }
#line 1233 "integer.m"
      }
#line 1232 "integer.m"
    return mercury__integer__I_4;
#line 1232 "integer.m"
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
#line 1225 "integer.m"
  {
#line 1225 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1225 "integer.m"
    MR_Word mercury__integer__Cs_7;

#line 1226 "integer.m"
    {
#line 1226 "integer.m"
      mercury__string__to_char_list_2_p_0(mercury__integer__S_3, &mercury__integer__Cs_7);
    }
#line 1227 "integer.m"
    {
#line 1227 "integer.m"
      return mercury__integer__succeeded = mercury__integer__string_to_integer_1_f_0(mercury__integer__Cs_7, mercury__integer__Big_4);
    }
#line 1225 "integer.m"
    return mercury__integer__succeeded;
#line 1225 "integer.m"
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
#line 1225 "integer.m"
  {
#line 1225 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1225 "integer.m"
    MR_Word mercury__integer__Cs_5;

#line 1226 "integer.m"
    {
#line 1226 "integer.m"
      mercury__string__to_char_list_2_p_0(mercury__integer__S_3, &mercury__integer__Cs_5);
    }
#line 1227 "integer.m"
    {
#line 1227 "integer.m"
      return mercury__integer__succeeded = mercury__integer__string_to_integer_1_f_0(mercury__integer__Cs_5, mercury__integer__Big_4);
    }
#line 1225 "integer.m"
    return mercury__integer__succeeded;
#line 1225 "integer.m"
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
#line 1276 "integer.m"
  {
#line 1276 "integer.m"
    MR_bool mercury__integer__succeeded = ((MR_Integer) 2 <= mercury__integer__Base_5);
#line 1276 "integer.m"
    MR_String mercury__integer__String_6;
#line 1276 "integer.m"
    MR_Word mercury__integer__PrintBase_7;
#line 1276 "integer.m"
    MR_Integer mercury__integer__Sign_8;
#line 1276 "integer.m"
    MR_Word mercury__integer__Digits_9;
#line 1276 "integer.m"
    MR_Integer mercury__integer__V_14_14;
#line 1277 "integer.m"
    MR_Integer mercury__integer__V_12_12;

#line 1277 "integer.m"
    if (mercury__integer__succeeded)
#line 1277 "integer.m"
      {
#line 1277 "integer.m"
        mercury__integer__V_12_12 = (MR_Integer) 36;
#line 1277 "integer.m"
        mercury__integer__succeeded = (mercury__integer__Base_5 <= mercury__integer__V_12_12);
#line 1277 "integer.m"
      }
#line 1279 "integer.m"
    if (mercury__integer__succeeded)
#line 1278 "integer.m"
      {
#line 1278 "integer.m"
      }
#line 1279 "integer.m"
    else
#line 1280 "integer.m"
      {
#line 1280 "integer.m"
        {
#line 1280 "integer.m"
          mercury__require__error_1_p_0((MR_String) "integer.to_base_string: invalid base");
        }
#line 1280 "integer.m"
      }
#line 283 "int.opt"
    {
#line 283 "int.opt"
      mercury__int__pow_3_p_0(mercury__integer__Base_5, (MR_Integer) 3, &mercury__integer__V_14_14);
    }
#line 1282 "integer.m"
    mercury__integer__PrintBase_7 = (MR_Word) mercury__integer__V_14_14;
#line 1283 "integer.m"
    mercury__integer__Sign_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, (MR_Integer) 0)));
#line 1283 "integer.m"
    mercury__integer__Digits_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, (MR_Integer) 1)));
#line 1284 "integer.m"
    mercury__integer__succeeded = (mercury__integer__Sign_8 < (MR_Integer) 0);
#line 1287 "integer.m"
    if (mercury__integer__succeeded)
#line 1285 "integer.m"
      {
#line 1285 "integer.m"
        MR_Word mercury__integer__AbsDigits_10;
#line 1285 "integer.m"
        MR_String mercury__integer__V_18_18;

#line 1285 "integer.m"
        {
#line 1285 "integer.m"
          mercury__integer__neg_list_2_p_0(mercury__integer__Digits_9, &mercury__integer__AbsDigits_10);
        }
#line 1293 "integer.m"
        if ((mercury__integer__AbsDigits_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1293 "integer.m"
          mercury__integer__V_18_18 = (MR_String) "0";
#line 1293 "integer.m"
        else
#line 1294 "integer.m"
          {
#line 1294 "integer.m"
            MR_Word mercury__integer__DigitsInPrintBase_31;
#line 1294 "integer.m"
            MR_Word mercury__integer__V_36_36;
#line 1294 "integer.m"
            MR_Word mercury__integer__V_37_37;
#line 1294 "integer.m"
            MR_Word mercury__integer__V_46_46 = (MR_Word) &mercury__integer_scalar_common_1[9];
#line 1294 "integer.m"
            MR_Word mercury__integer__V_48_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1297 "integer.m"
            MR_Integer mercury__integer__V_30_30;

#line 1353 "integer.m"
            {
#line 1353 "integer.m"
              mercury__integer__V_36_36 = mercury__integer__printbase_pos_int_to_digits_2_3_f_0(mercury__integer__PrintBase_7, (MR_Integer) 16384, mercury__integer__V_46_46);
            }
#line 1312 "integer.m"
            {
#line 1312 "integer.m"
              mercury__integer__V_37_37 = mercury__integer__printbase_rep_1_4_f_0(mercury__integer__PrintBase_7, mercury__integer__AbsDigits_10, mercury__integer__V_36_36, mercury__integer__V_46_46);
            }
#line 1297 "integer.m"
            mercury__integer__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_37_37, (MR_Integer) 0)));
#line 1297 "integer.m"
            mercury__integer__DigitsInPrintBase_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_37_37, (MR_Integer) 1)));
#line 1303 "integer.m"
            if ((mercury__integer__DigitsInPrintBase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1304 "integer.m"
              {
#line 1305 "integer.m"
                {
#line 1305 "integer.m"
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.digits_to_string\'/3", (MR_String) "empty list");
                }
#line 1304 "integer.m"
              }
#line 1303 "integer.m"
            else
#line 1299 "integer.m"
              {
#line 1299 "integer.m"
                MR_Integer mercury__integer__Head_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__DigitsInPrintBase_31, (MR_Integer) 0)));
#line 1299 "integer.m"
                MR_Word mercury__integer__Tail_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__DigitsInPrintBase_31, (MR_Integer) 1)));
#line 1299 "integer.m"
                MR_String mercury__integer__SHead_34;
#line 1299 "integer.m"
                MR_Word mercury__integer__Ss_35;
#line 1299 "integer.m"
                MR_Word mercury__integer__V_42_42;
#line 1299 "integer.m"
                MR_Word mercury__integer__V_43_43;

#line 1300 "integer.m"
                {
#line 1300 "integer.m"
                  mercury__string__int_to_base_string_3_p_0(mercury__integer__Head_32, mercury__integer__Base_5, &mercury__integer__SHead_34);
                }
#line 1301 "integer.m"
                mercury__integer__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1301 "integer.m"
                {
#line 1301 "integer.m"
                  mercury__integer__digits_to_strings_4_p_0(mercury__integer__Base_5, mercury__integer__Tail_33, &mercury__integer__Ss_35, mercury__integer__V_42_42);
                }
#line 1302 "integer.m"
                {
#line 1302 "integer.m"
                  mercury__integer__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1302 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_43_43, 0) = ((MR_Box) (mercury__integer__SHead_34));
#line 1302 "integer.m"
                  MR_hl_field(MR_mktag(1), mercury__integer__V_43_43, 1) = ((MR_Box) (mercury__integer__Ss_35));
#line 1302 "integer.m"
                }
#line 197 "string.opt"
                {
#line 197 "string.opt"
                  mercury__integer__V_18_18 = mercury__string__append_list_1_f_0(mercury__integer__V_43_43);
                }
#line 1299 "integer.m"
              }
#line 1294 "integer.m"
          }
#line 159 "string.opt"
        {
#line 159 "string.opt"
          mercury__string__append_3_p_2((MR_String) "-", mercury__integer__V_18_18, &mercury__integer__String_6);
        }
#line 1285 "integer.m"
      }
#line 1287 "integer.m"
    else
#line 1288 "integer.m"
      {
#line 1288 "integer.m"
        return mercury__integer__String_6 = mercury__integer__digits_to_string_3_f_0(mercury__integer__Base_5, mercury__integer__PrintBase_7, mercury__integer__Digits_9);
      }
#line 1276 "integer.m"
    return mercury__integer__String_6;
#line 1276 "integer.m"
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
#line 1274 "integer.m"
  {
#line 1274 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 1274 "integer.m"
    MR_String mercury__integer__HeadVar__2_2;

#line 1274 "integer.m"
    {
#line 1274 "integer.m"
      return mercury__integer__HeadVar__2_2 = mercury__integer__to_base_string_2_f_0(mercury__integer__Integer_3, (MR_Integer) 10);
    }
#line 1274 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 1274 "integer.m"
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
#line 714 "integer.m"
  {
#line 714 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 714 "integer.m"
    MR_Word mercury__integer__HeadVar__2_2;

#line 714 "integer.m"
    {
#line 714 "integer.m"
      return mercury__integer__HeadVar__2_2 = mercury__integer__int_to_integer_1_f_0(mercury__integer__N_3);
    }
#line 714 "integer.m"
    return mercury__integer__HeadVar__2_2;
#line 714 "integer.m"
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
#line 336 "integer.m"
  {
#line 336 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 336 "integer.m"
    MR_Word mercury__integer__C_5;

#line 678 "integer.m"
    {
#line 678 "integer.m"
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
#line 332 "integer.m"
  {
#line 332 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 332 "integer.m"
    MR_Word mercury__integer__C_5;

#line 678 "integer.m"
    {
#line 678 "integer.m"
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
#line 328 "integer.m"
  {
#line 328 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 328 "integer.m"
    MR_Word mercury__integer__C_5;

#line 678 "integer.m"
    {
#line 678 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__X_3, mercury__integer__Y_4);
    }
#line 330 "integer.m"
    mercury__integer__succeeded = (mercury__integer__C_5 == (MR_Integer) 2);
#line 328 "integer.m"
    return mercury__integer__succeeded;
#line 328 "integer.m"
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
#line 324 "integer.m"
  {
#line 324 "integer.m"
    MR_bool mercury__integer__succeeded;
#line 324 "integer.m"
    MR_Word mercury__integer__C_5;

#line 678 "integer.m"
    {
#line 678 "integer.m"
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__X_3, mercury__integer__Y_4);
    }
#line 326 "integer.m"
    mercury__integer__succeeded = (mercury__integer__C_5 == (MR_Integer) 1);
#line 324 "integer.m"
    return mercury__integer__succeeded;
#line 324 "integer.m"
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
