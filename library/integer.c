/*
** Automatically generated from `integer.m'
** by the Mercury compiler,
** version rotd-2022-11-18
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module integer.
// :- implementation.

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
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_FA_TypeInfo_Struct1 mercury__integer__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mercury__integer__integer__field_types_integer_0_0[2];

static const MR_DuFunctorDesc mercury__integer__integer__du_functor_desc_integer_0_0;

static const MR_DuFunctorDescPtr mercury__integer__integer__du_stag_ordered_integer_0_0[1];

static const MR_DuPtagLayout mercury__integer__integer__du_ptag_ordered_integer_0[1];

static const MR_DuFunctorDescPtr mercury__integer__integer__du_name_ordered_integer_0[1];

static const MR_Integer mercury__integer__integer__functor_number_map_integer_0[1];

static const MR_Integer mercury__integer__integer__functor_number_map_printbase_0[1];

static const MR_NotagFunctorDesc mercury__integer__integer__notag_functor_desc_printbase_0;

static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_54_95_95_91_50_93_95_48_6_p_in__string_0(
  MR_Integer Var_17,
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static MR_bool MR_CALL 
mercury__integer__accumulate_integer_underscore_4_p_0(
  MR_Integer Base_5,
  MR_Char Char_6,
  MR_Word STATE_VARIABLE_N_0_10,
  MR_Word * STATE_VARIABLE_N_11);

static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_95_95_91_50_93_95_48_6_p_in__string_0(
  MR_Integer Var_17,
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static MR_bool MR_CALL 
mercury__integer__string_to_integer_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Integer_0_2,
  MR_Word * STATE_VARIABLE_Integer_3);

static MR_Word MR_CALL 
mercury__integer__uint64_to_digits_2_2_f_0(
  uint64_t U_4,
  MR_Word Tail_5);

static MR_Word MR_CALL 
mercury__integer__pos_int64_to_digits_2_2_f_0(
  int64_t D_4,
  MR_Word Tail_5);

static MR_Word MR_CALL 
mercury__integer__uint32_to_digits_2_2_f_0(
  uint32_t U_4,
  MR_Word Tail_5);

static MR_Word MR_CALL 
mercury__integer__map__ho2_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__integer__LCMC__func__map__ho2__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_15);

static void MR_CALL 
mercury__integer__digits_to_strings_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Strs_0_3,
  MR_Word * STATE_VARIABLE_Strs_4);

static void MR_CALL 
mercury__integer__LCMC__pred__digits_to_strings__1_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Strs_0_3,
  MR_Word * AddrOfSTATE_VARIABLE_Strs_21);

static MR_Word MR_CALL 
mercury__integer__printbase_rep_1_4_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word Carry_4);

static MR_Word MR_CALL 
mercury__integer__printbase_pos_mul_list_4_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word Carry_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
mercury__integer__printbase_mul_by_digit_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer D_2,
  MR_Integer * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
mercury__integer__printbase_add_pairs_5_p_0(
  MR_Word Base_6,
  MR_Integer * Div_7,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * Ds_12);

static void MR_CALL 
mercury__integer__printbase_add_pairs_equal_5_p_0(
  MR_Word Base_1,
  MR_Integer * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_Word MR_CALL 
mercury__integer__printbase_pos_int_to_digits_2_3_f_0(
  MR_Word Base_5,
  MR_Integer D_6,
  MR_Word Tail_7);

static uint64_t MR_CALL 
mercury__integer__uint64_list_2_f_0(
  MR_Word HeadVar__1_1,
  uint64_t Accum_2);

static int64_t MR_CALL 
mercury__integer__int64_list_2_f_0(
  MR_Word HeadVar__1_1,
  int64_t Accum_2);

static uint32_t MR_CALL 
mercury__integer__uint32_list_2_f_0(
  MR_Word HeadVar__1_1,
  uint32_t Accum_2);

static MR_Unsigned MR_CALL 
mercury__integer__uint_list_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Unsigned Accum_2);

static MR_Word MR_CALL 
mercury__integer__uint_to_digits_2_2_f_0(
  MR_Unsigned U_4,
  MR_Word Tail_5);

static MR_Word MR_CALL 
mercury__integer__pos_int_to_digits_2_2_f_0(
  MR_Integer D_4,
  MR_Word Tail_5);

static MR_Integer MR_CALL 
mercury__integer__int_list_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer Accum_2);

static MR_Word MR_CALL 
mercury__integer__xor_pairs_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__integer__xor_pairs_equal_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__integer__LCMC__func__xor_pairs_equal__1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16);

static MR_Word MR_CALL 
mercury__integer__and_not_pairs_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__integer__and_not_pairs_equal_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__integer__LCMC__func__and_not_pairs_equal__1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17);

static MR_Word MR_CALL 
mercury__integer__or_pairs_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__integer__or_pairs_equal_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__integer__LCMC__func__or_pairs_equal__1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16);

static MR_Word MR_CALL 
mercury__integer__and_pairs_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__integer__and_pairs_equal_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__integer__LCMC__func__and_pairs_equal__1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16);

static MR_Word MR_CALL 
mercury__integer__rightshift_4_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__4_4);

static MR_Word MR_CALL 
mercury__integer__big_pow_sqmul_2_f_0(
  MR_Word A_4,
  MR_Word N_5);

static void MR_CALL 
mercury__integer__quot_rem_4_p_0(
  MR_Word U_5,
  MR_Word V_6,
  MR_Word * Quot_7,
  MR_Word * Rem_8);

static MR_Word MR_CALL 
mercury__integer__div_by_digit_1_3_f_0(
  MR_Integer X_1,
  MR_Word HeadVar__2_2,
  MR_Integer D_3);

static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_3_f_0(
  MR_Integer X_1,
  MR_Word HeadVar__2_2,
  MR_Integer D_3);

static void MR_CALL 
mercury__integer__quot_rem_2_5_p_0(
  MR_Word Ur_6,
  MR_Word U_7,
  MR_Word V_8,
  MR_Word * Quot_9,
  MR_Word * Rem_10);

static MR_Word MR_CALL 
mercury__integer__integer_prepend_2_f_0(
  MR_Integer Digit_4,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__integer__integer_append_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer Digit_6);

static MR_Word MR_CALL 
mercury__integer__mul_by_digit_2_f_0(
  MR_Integer Digit_4,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__integer__pos_minus_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
mercury__integer__pos_geq_2_p_0(
  MR_Word X_3,
  MR_Word Y_4);

static MR_Word MR_CALL 
mercury__integer__det_tail_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Integer MR_CALL 
mercury__integer__det_first_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
mercury__integer__pos_mul_karatsuba_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__integer__big_left_shift_2_f_0(
  MR_Word X_4,
  MR_Integer I_5);

static void MR_CALL 
mercury__integer__leftshift_6_p_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer Len_3,
  MR_Word HeadVar__4_4,
  MR_Integer * Carry_5,
  MR_Word * DigitsOut_6);

static void MR_CALL 
mercury__integer__zeros_3_p_0(
  MR_Integer Len_4,
  MR_Word Digits0_5,
  MR_Word * Digits_6);

static void MR_CALL 
mercury__integer__LCMC__pred__zeros__1_3_p_0(
  MR_Integer Len_4,
  MR_Word Digits0_5,
  MR_Word * AddrOfDigits_13);

static MR_Word MR_CALL 
mercury__integer__pos_mul_list_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word Carry_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
mercury__integer__mul_by_digit_2_4_p_0(
  MR_Integer D_1,
  MR_Integer * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_Word MR_CALL 
mercury__integer__mul_base_2_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
mercury__integer__LCMC__func__mul_base_2__1_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_9);

static void MR_CALL 
mercury__integer__diff_pairs_4_p_0(
  MR_Integer * Div_5,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * Ds_10);

static void MR_CALL 
mercury__integer__diff_pairs_equal_4_p_0(
  MR_Integer * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__integer__add_pairs_4_p_0(
  MR_Integer * Div_5,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * Ds_10);

static void MR_CALL 
mercury__integer__add_pairs_equal_4_p_0(
  MR_Integer * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_Word MR_CALL 
mercury__integer__decap_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
mercury__integer____Unify____digit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__integer____Compare____digit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__integer____Unify____integer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__integer____Compare____integer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__integer____Unify____printbase_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__integer____Compare____printbase_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__integer____Unify____sign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__integer____Compare____sign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__integer_scalar_common_1[30][2];

static /* final */ const MR_Box mercury__integer_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__integer_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__integer_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__integer_scalar_common_1[30][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[1])))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[4])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Integer) 16)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[12])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[3])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Integer) 16383)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Integer) 16383)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[16])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[3])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[19])))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[20])))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_Integer) -128)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[21])))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_Integer) -5)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[22])))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_Integer) 16383)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[16])))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_Integer) 16383)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[24])))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_Integer) 127)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[25])))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[26])))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_Integer) 255)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[25])))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(1, &mercury__integer_scalar_common_1[28])))
  },
};

static /* final */ const MR_Box mercury__integer_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__integer_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__integer_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__integer_scalar_common_4[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__integer_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
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
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"



const MR_TypeCtorInfo_Struct mercury__integer__integer__type_ctor_info_digit_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__integer____Unify____digit_0_0_10001)),
  ((MR_Box) (mercury__integer____Compare____digit_0_0_10001)),
  (MR_String) "integer",
  (MR_String) "digit",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 mercury__integer__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo mercury__integer__integer__field_types_integer_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__integer__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__integer__integer__du_functor_desc_integer_0_0 = {
  (MR_String) "i",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__integer__integer__field_types_integer_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__integer__integer__du_stag_ordered_integer_0_0[1] = {
  &mercury__integer__integer__du_functor_desc_integer_0_0
};

static const MR_DuPtagLayout mercury__integer__integer__du_ptag_ordered_integer_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__integer__integer__du_stag_ordered_integer_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__integer__integer__du_name_ordered_integer_0[1] = {
  &mercury__integer__integer__du_functor_desc_integer_0_0
};

static const MR_Integer mercury__integer__integer__functor_number_map_integer_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__integer__integer__type_ctor_info_integer_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__integer____Unify____integer_0_0_10001)),
  ((MR_Box) (mercury__integer____Compare____integer_0_0_10001)),
  (MR_String) "integer",
  (MR_String) "integer",
  { mercury__integer__integer__du_name_ordered_integer_0 },
  { mercury__integer__integer__du_ptag_ordered_integer_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__integer__integer__functor_number_map_integer_0,

};

static const MR_Integer mercury__integer__integer__functor_number_map_printbase_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__integer__integer__notag_functor_desc_printbase_0 = {
  (MR_String) "printbase",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__integer__integer__type_ctor_info_printbase_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__integer____Unify____printbase_0_0_10001)),
  ((MR_Box) (mercury__integer____Compare____printbase_0_0_10001)),
  (MR_String) "integer",
  (MR_String) "printbase",
  { &mercury__integer__integer__notag_functor_desc_printbase_0 },
  { &mercury__integer__integer__notag_functor_desc_printbase_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__integer__integer__functor_number_map_printbase_0,

};

const MR_TypeCtorInfo_Struct mercury__integer__integer__type_ctor_info_sign_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__integer____Unify____sign_0_0_10001)),
  ((MR_Box) (mercury__integer____Compare____sign_0_0_10001)),
  (MR_String) "integer",
  (MR_String) "sign",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mercury__integer____Compare____sign_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__integer____Unify____sign_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__integer____Compare____printbase_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 == ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__integer____Unify____printbase_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__integer____Compare____digit_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__integer____Unify____digit_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

MR_Word MR_CALL 
mercury__integer__big_rem_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_Word Rem_6;
  MR_Word _Quot_7;

  mercury__integer__big_quot_rem_4_p_0(X_4, Y_5, &_Quot_7, &Rem_6);
  return Rem_6;
}

MR_Word MR_CALL 
mercury__integer__big_quot_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_Word Quot_6;
  MR_Word _Rem_7;

  mercury__integer__big_quot_rem_4_p_0(X_4, Y_5, &Quot_6, &_Rem_7);
  return Quot_6;
}

MR_Word MR_CALL 
mercury__integer__big_neg_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Integer S_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Digits0_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word Digits_5;
  MR_Integer Var_6 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_3);

  mercury__integer__neg_list_2_p_0(Digits0_4, &Digits_5);
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Digits_5));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__integer__big_cmp_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_Word Result_6;

  mercury__integer____Compare____integer_0_0(&Result_6, X_4, Y_5);
  return Result_6;
}

MR_bool MR_CALL 
mercury__integer__big_isnegative_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Integer Sign_2 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

  succeeded = (Sign_2 < (MR_Integer) 0);
  return succeeded;
}

MR_Integer MR_CALL 
mercury__integer__integer_signum_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2;
  MR_Integer Sign_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

  HeadVar__2_2 = mercury__integer__signum_1_f_0(Sign_3);
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__integer__base_0_f_0(void)
{
  return (MR_Integer) 16384;
}

MR_bool MR_CALL 
mercury__integer__from_base_string_underscore_3_p_0(
  MR_Integer Base_4,
  MR_String String_5,
  MR_Word * Integer_6)
{
  MR_bool succeeded;
  MR_Char Char_7;
  MR_Integer Len_8;
  MR_Integer Var_34;

{
#define MR_PROC_LABEL mercury__integer__from_base_string_underscore_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_34  = Length;
}
{
#define MR_PROC_LABEL mercury__integer__from_base_string_underscore_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = (MR_Integer) 0 ;
	Length = Var_34 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__integer__from_base_string_underscore_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = String_5 ;
	Index = (MR_Integer) 0 ;
		{

    Ch = (unsigned char) Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
        if (Ch < 0) {
            Ch = 0xFFFD;
        }
    }


		;}
#undef MR_PROC_LABEL
	Char_7  = Ch;
}
{
#define MR_PROC_LABEL mercury__integer__from_base_string_underscore_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_8  = Length;
}
    succeeded = (Char_7 == (MR_Char) 45);
    if (succeeded)
    {
      MR_Word PosInteger_9;
      MR_Integer Var_13;
      MR_Word Var_14;
      MR_Integer Var_37;
      MR_Integer Var_38;
      MR_Integer Var_39;
      MR_Integer Var_40;
      MR_Integer S_42;
      MR_Word Digits0_43;
      MR_Word Digits_44;
      MR_Integer Var_45;

      succeeded = (Len_8 > (MR_Integer) 1);
      if (succeeded)
      {
        Var_13 = (MR_Integer) 1;
        Var_14 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
        Var_38 = (MR_Integer) 0;
        succeeded = (Var_38 > Var_13);
        if (succeeded)
          Var_37 = Var_38;
        else
          Var_37 = Var_13;
{
#define MR_PROC_LABEL mercury__integer__from_base_string_underscore_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_40  = Length;
}
        succeeded = (Len_8 < Var_40);
        if (succeeded)
          Var_39 = Len_8;
        else
          Var_39 = Var_40;
        succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_54_95_95_91_50_93_95_48_6_p_in__string_0(Base_4, String_5, Var_37, Var_39, Var_14, &PosInteger_9);
        if (succeeded)
        {
          S_42 = ((MR_Integer) ((MR_hl_field(0, PosInteger_9, (MR_Integer) 0))));
          Digits0_43 = ((MR_Word) ((MR_hl_field(0, PosInteger_9, (MR_Integer) 1))));
          Var_45 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_42);
          mercury__integer__neg_list_2_p_0(Digits0_43, &Digits_44);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Integer_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_45));
            MR_hl_field(0, base, 1) = ((MR_Box) (Digits_44));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      succeeded = (Char_7 == (MR_Char) 43);
      if (succeeded)
      {
        MR_Integer Var_17;
        MR_Word Var_18;
        MR_Integer Var_48;
        MR_Integer Var_49;
        MR_Integer Var_50;
        MR_Integer Var_51;

        succeeded = (Len_8 > (MR_Integer) 1);
        if (succeeded)
        {
          Var_17 = (MR_Integer) 1;
          Var_18 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
          Var_49 = (MR_Integer) 0;
          succeeded = (Var_49 > Var_17);
          if (succeeded)
            Var_48 = Var_49;
          else
            Var_48 = Var_17;
{
#define MR_PROC_LABEL mercury__integer__from_base_string_underscore_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_51  = Length;
}
          succeeded = (Len_8 < Var_51);
          if (succeeded)
            Var_50 = Len_8;
          else
            Var_50 = Var_51;
          succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_54_95_95_91_50_93_95_48_6_p_in__string_0(Base_4, String_5, Var_48, Var_50, Var_18, Integer_6);
        }
      }
      else
      {
        MR_Integer Var_55;
        MR_Integer Var_57;
        MR_Integer Var_58;

        succeeded = ((MR_Integer) 0 > (MR_Integer) 0);
        if (succeeded)
          Var_55 = (MR_Integer) 0;
        else
          Var_55 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__integer__from_base_string_underscore_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_58  = Length;
}
        succeeded = (Len_8 < Var_58);
        if (succeeded)
          Var_57 = Len_8;
        else
          Var_57 = Var_58;
        succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_54_95_95_91_50_93_95_48_6_p_in__string_0(Base_4, String_5, Var_55, Var_57, (MR_Word) (&mercury__integer_scalar_common_1[3]), Integer_6);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_54_95_95_91_50_93_95_48_6_p_in__string_0(
  MR_Integer Var_17,
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 < HeadVar__4_10);
    MR_Integer Var_13;
    MR_Char Var_14;
    MR_Integer Var_18;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_54_95_95_91_50_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_8 ;
	Index = HeadVar__3_9 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_13  = NextIndex;
	Var_14  = Ch;
	Var_18  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (Var_13 <= HeadVar__4_10);
    }
    if (succeeded)
    {
      MR_Word Var_15;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Word next_value_of_HeadVar__5_11;

      succeeded = mercury__integer__accumulate_integer_underscore_4_p_0(Var_17, Var_14, HeadVar__5_11, &Var_15);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_9 = Var_13;
        next_value_of_HeadVar__5_11 = Var_15;
        HeadVar__3_9 = next_value_of_HeadVar__3_9;
        HeadVar__5_11 = next_value_of_HeadVar__5_11;
        continue;
      }
    }
    else
    {
      *HeadVar__6_12 = HeadVar__5_11;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
mercury__integer__accumulate_integer_underscore_4_p_0(
  MR_Integer Base_5,
  MR_Char Char_6,
  MR_Word STATE_VARIABLE_N_0_10,
  MR_Word * STATE_VARIABLE_N_11)
{
  MR_bool succeeded;
  MR_Integer Digit0_8;

  succeeded = mercury__char__base_digit_to_int_3_p_0(Base_5, Char_6, &Digit0_8);
  if (succeeded)
  {
    MR_Word Digit_9;
    MR_Word Var_13;
    MR_Word Var_14;

    Digit_9 = mercury__integer__int_to_integer_1_f_0(Digit0_8);
    Var_14 = mercury__integer__int_to_integer_1_f_0(Base_5);
    Var_13 = mercury__integer__big_mul_2_f_0(Var_14, STATE_VARIABLE_N_0_10);
    *STATE_VARIABLE_N_11 = mercury__integer__big_plus_2_f_0(Var_13, Digit_9);
    succeeded = MR_TRUE;
  }
  else
  {
    succeeded = (Char_6 == (MR_Char) 95);
    if (succeeded)
    {
      *STATE_VARIABLE_N_11 = STATE_VARIABLE_N_0_10;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__integer__det_from_base_string_2_f_0(
  MR_Integer Base_4,
  MR_String String_5)
{
  MR_bool succeeded;
  MR_Word Integer_6;
  MR_Word IntegerPrime_7;

  succeeded = mercury__integer__from_base_string_3_p_0(Base_4, String_5, &IntegerPrime_7);
  if (succeeded)
    Integer_6 = IntegerPrime_7;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140integer.det_from_base_string\'/2", (MR_String) "conversion failed");
  return Integer_6;
}

MR_bool MR_CALL 
mercury__integer__from_base_string_3_p_0(
  MR_Integer Base_4,
  MR_String String_5,
  MR_Word * Integer_6)
{
  MR_bool succeeded;
  MR_Char Char_7;
  MR_Integer Len_8;
  MR_Integer Var_34;

{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_34  = Length;
}
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = (MR_Integer) 0 ;
	Length = Var_34 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = String_5 ;
	Index = (MR_Integer) 0 ;
		{

    Ch = (unsigned char) Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
        if (Ch < 0) {
            Ch = 0xFFFD;
        }
    }


		;}
#undef MR_PROC_LABEL
	Char_7  = Ch;
}
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_8  = Length;
}
    succeeded = (Char_7 == (MR_Char) 45);
    if (succeeded)
    {
      MR_Word PosInteger_9;
      MR_Integer Var_13;
      MR_Word Var_14;
      MR_Integer Var_37;
      MR_Integer Var_38;
      MR_Integer Var_39;
      MR_Integer Var_40;
      MR_Integer S_42;
      MR_Word Digits0_43;
      MR_Word Digits_44;
      MR_Integer Var_45;

      succeeded = (Len_8 > (MR_Integer) 1);
      if (succeeded)
      {
        Var_13 = (MR_Integer) 1;
        Var_14 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
        Var_38 = (MR_Integer) 0;
        succeeded = (Var_38 > Var_13);
        if (succeeded)
          Var_37 = Var_38;
        else
          Var_37 = Var_13;
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_40  = Length;
}
        succeeded = (Len_8 < Var_40);
        if (succeeded)
          Var_39 = Len_8;
        else
          Var_39 = Var_40;
        succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_95_95_91_50_93_95_48_6_p_in__string_0(Base_4, String_5, Var_37, Var_39, Var_14, &PosInteger_9);
        if (succeeded)
        {
          S_42 = ((MR_Integer) ((MR_hl_field(0, PosInteger_9, (MR_Integer) 0))));
          Digits0_43 = ((MR_Word) ((MR_hl_field(0, PosInteger_9, (MR_Integer) 1))));
          Var_45 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_42);
          mercury__integer__neg_list_2_p_0(Digits0_43, &Digits_44);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Integer_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_45));
            MR_hl_field(0, base, 1) = ((MR_Box) (Digits_44));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      succeeded = (Char_7 == (MR_Char) 43);
      if (succeeded)
      {
        MR_Integer Var_17;
        MR_Word Var_18;
        MR_Integer Var_48;
        MR_Integer Var_49;
        MR_Integer Var_50;
        MR_Integer Var_51;

        succeeded = (Len_8 > (MR_Integer) 1);
        if (succeeded)
        {
          Var_17 = (MR_Integer) 1;
          Var_18 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
          Var_49 = (MR_Integer) 0;
          succeeded = (Var_49 > Var_17);
          if (succeeded)
            Var_48 = Var_49;
          else
            Var_48 = Var_17;
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_51  = Length;
}
          succeeded = (Len_8 < Var_51);
          if (succeeded)
            Var_50 = Len_8;
          else
            Var_50 = Var_51;
          succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_95_95_91_50_93_95_48_6_p_in__string_0(Base_4, String_5, Var_48, Var_50, Var_18, Integer_6);
        }
      }
      else
      {
        MR_Integer Var_55;
        MR_Integer Var_57;
        MR_Integer Var_58;

        succeeded = ((MR_Integer) 0 > (MR_Integer) 0);
        if (succeeded)
          Var_55 = (MR_Integer) 0;
        else
          Var_55 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_58  = Length;
}
        succeeded = (Len_8 < Var_58);
        if (succeeded)
          Var_57 = Len_8;
        else
          Var_57 = Var_58;
        succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_95_95_91_50_93_95_48_6_p_in__string_0(Base_4, String_5, Var_55, Var_57, (MR_Word) (&mercury__integer_scalar_common_1[3]), Integer_6);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_95_95_91_50_93_95_48_6_p_in__string_0(
  MR_Integer Var_17,
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 < HeadVar__4_10);
    MR_Integer Var_13;
    MR_Char Var_14;
    MR_Integer Var_18;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_95_95_91_50_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_8 ;
	Index = HeadVar__3_9 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_13  = NextIndex;
	Var_14  = Ch;
	Var_18  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (Var_13 <= HeadVar__4_10);
    }
    if (succeeded)
    {
      MR_Word Var_15;
      MR_Integer Digit0_19;
      MR_Word Digit_20;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Word next_value_of_HeadVar__5_11;

      succeeded = mercury__char__base_digit_to_int_3_p_0(Var_17, Var_14, &Digit0_19);
      if (succeeded)
      {
        Digit_20 = mercury__integer__int_to_integer_1_f_0(Digit0_19);
        Var_22 = mercury__integer__int_to_integer_1_f_0(Var_17);
        Var_21 = mercury__integer__big_mul_2_f_0(Var_22, HeadVar__5_11);
        Var_15 = mercury__integer__big_plus_2_f_0(Var_21, Digit_20);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_9 = Var_13;
        next_value_of_HeadVar__5_11 = Var_15;
        HeadVar__3_9 = next_value_of_HeadVar__3_9;
        HeadVar__5_11 = next_value_of_HeadVar__5_11;
        continue;
      }
    }
    else
    {
      *HeadVar__6_12 = HeadVar__5_11;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
mercury__integer__det_from_string_1_f_0(
  MR_String S_3)
{
  MR_bool succeeded;
  MR_Word I_4;
  MR_Word IPrime_5;
  MR_Word Cs_8;
  MR_Integer Var_9;

{
#define MR_PROC_LABEL mercury__integer__det_from_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_9  = Length;
}
  mercury__string__do_to_char_list_loop_4_p_0(S_3, Var_9, (MR_Word) ((MR_Unsigned) 0U), &Cs_8);
  succeeded = mercury__integer__string_to_integer_2_p_0(Cs_8, &IPrime_5);
  if (succeeded)
    I_4 = IPrime_5;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140integer.det_from_string\'/1", (MR_String) "conversion failed");
  return I_4;
}

MR_bool MR_CALL 
mercury__integer__from_string_2_p_0(
  MR_String S_3,
  MR_Word * Big_4)
{
  MR_bool succeeded;
  MR_Word Cs_5;
  MR_Integer Var_6;

{
#define MR_PROC_LABEL mercury__integer__from_string_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str = S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_6  = Length;
}
  mercury__string__do_to_char_list_loop_4_p_0(S_3, Var_6, (MR_Word) ((MR_Unsigned) 0U), &Cs_5);
  succeeded = mercury__integer__string_to_integer_2_p_0(Cs_5, Big_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__integer__string_to_integer_2_p_0(
  MR_Word Chars_3,
  MR_Word * Integer_4)
{
  MR_bool succeeded = (Chars_3 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Char HeadChar_5;
  MR_Word TailChars_6;

  if (succeeded)
  {
    HeadChar_5 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars_3, (MR_Integer) 0)));
    TailChars_6 = ((MR_Word) ((MR_hl_field(1, Chars_3, (MR_Integer) 1))));
    succeeded = (HeadChar_5 == (MR_Char) 45);
    if (succeeded)
    {
      MR_Word PosInteger_9;
      MR_Word Var_12;
      MR_Integer Var_13;

      succeeded = (TailChars_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_12 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
        succeeded = mercury__integer__string_to_integer_acc_3_p_0(TailChars_6, Var_12, &PosInteger_9);
        if (succeeded)
        {
          Var_13 = (MR_Integer) -1;
          *Integer_4 = mercury__integer__big_sign_2_f_0(Var_13, PosInteger_9);
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      succeeded = (HeadChar_5 == (MR_Char) 43);
      if (succeeded)
      {
        MR_Word Var_14;

        succeeded = (TailChars_6 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_14 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
          succeeded = mercury__integer__string_to_integer_acc_3_p_0(TailChars_6, Var_14, Integer_4);
        }
      }
      else
        succeeded = mercury__integer__string_to_integer_acc_3_p_0(Chars_3, (MR_Word) (&mercury__integer_scalar_common_1[3]), Integer_4);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__integer__string_to_integer_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Integer_0_2,
  MR_Word * STATE_VARIABLE_Integer_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Integer_3 = STATE_VARIABLE_Integer_0_2;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Char C_7 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Cs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Digit0_10;
      MR_Integer Z_11;
      MR_Word Digit_12;
      MR_Char Var_15;
      MR_Integer Var_16;
      MR_Word STATE_VARIABLE_Integer_17_17;
      MR_Word Var_18;
      MR_Integer Var_19;
      MR_Word Var_20;
      MR_Integer Len_23;
      MR_Word Digits0_24;
      MR_Integer Mod_25;
      MR_Word Digits_26;
      MR_Integer L1_30;
      MR_Integer L2_32;
      MR_Integer Div_34;
      MR_Word Ds_35;
      MR_Integer Len_36;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Integer_0_2;

      succeeded = mercury__char__is_decimal_digit_1_p_0(C_7);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__integer__string_to_integer_acc_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = C_7 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Digit0_10  = Int;
}
        Var_15 = (MR_Char) 48;
{
#define MR_PROC_LABEL mercury__integer__string_to_integer_acc_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Var_15 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Z_11  = Int;
}
        Var_16 = (MR_Integer) ((MR_Unsigned) Digit0_10 - (MR_Unsigned) Z_11);
        Var_20 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
        Digit_12 = mercury__integer__pos_int_to_digits_2_2_f_0(Var_16, Var_20);
        Var_19 = (MR_Integer) 10;
        Len_23 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Integer_0_2, (MR_Integer) 0))));
        Digits0_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Integer_0_2, (MR_Integer) 1))));
        mercury__integer__mul_by_digit_2_4_p_0(Var_19, &Mod_25, Digits0_24, &Digits_26);
        succeeded = (Mod_25 == (MR_Integer) 0);
        if (succeeded)
          {
            Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_18, 0) = ((MR_Box) (Len_23));
            MR_hl_field(0, Var_18, 1) = ((MR_Box) (Digits_26));
          }
        else
        {
          MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) Len_23 + (MR_Unsigned) 1);
          MR_Word Var_29;

          {
            Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_29, 0) = ((MR_Box) (Mod_25));
            MR_hl_field(1, Var_29, 1) = ((MR_Box) (Digits_26));
          }
          {
            Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_18, 0) = ((MR_Box) (Var_27));
            MR_hl_field(0, Var_18, 1) = ((MR_Box) (Var_29));
          }
        }
        L1_30 = ((MR_Integer) ((MR_hl_field(0, Digit_12, (MR_Integer) 0))));
        L2_32 = ((MR_Integer) ((MR_hl_field(0, Var_18, (MR_Integer) 0))));
        mercury__integer__add_pairs_4_p_0(&Div_34, Digit_12, Var_18, &Ds_35);
        succeeded = (L1_30 > L2_32);
        if (succeeded)
          Len_36 = L1_30;
        else
          Len_36 = L2_32;
        succeeded = (Div_34 == (MR_Integer) 0);
        if (succeeded)
          {
            STATE_VARIABLE_Integer_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Integer_17_17, 0) = ((MR_Box) (Len_36));
            MR_hl_field(0, STATE_VARIABLE_Integer_17_17, 1) = ((MR_Box) (Ds_35));
          }
        else
        {
          MR_Integer Var_39 = (MR_Integer) ((MR_Unsigned) Len_36 + (MR_Unsigned) 1);
          MR_Word Var_41;

          {
            Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_41, 0) = ((MR_Box) (Div_34));
            MR_hl_field(1, Var_41, 1) = ((MR_Box) (Ds_35));
          }
          {
            STATE_VARIABLE_Integer_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Integer_17_17, 0) = ((MR_Box) (Var_39));
            MR_hl_field(0, STATE_VARIABLE_Integer_17_17, 1) = ((MR_Box) (Var_41));
          }
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Cs_8;
        next_value_of_STATE_VARIABLE_Integer_0_2 = STATE_VARIABLE_Integer_17_17;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Integer_0_2 = next_value_of_STATE_VARIABLE_Integer_0_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
mercury__integer__from_uint64_1_f_0(
  uint64_t U64_3)
{
  MR_bool succeeded;
  MR_Word Integer_4;
  uint64_t Var_13;

{
#define MR_PROC_LABEL mercury__integer__from_uint64_1_f_0

	MR_Integer I;
	uint64_t U64;

	I = (MR_Integer) 0 ;
		{

    U64 = (uint64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_13  = U64;
}
  succeeded = (U64_3 == Var_13);
  if (succeeded)
    Integer_4 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
  else
  {
    uint64_t Var_6;

{
#define MR_PROC_LABEL mercury__integer__from_uint64_1_f_0

	MR_Integer I;
	uint64_t U64;

	I = (MR_Integer) 16384 ;
		{

    U64 = (uint64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_6  = U64;
}
    succeeded = (U64_3 < Var_6);
    if (succeeded)
    {
      MR_Word Var_9;
      MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__integer__from_uint64_1_f_0

	uint64_t U64;
	MR_Integer I;

	U64 = U64_3 ;
		{

    I = (MR_Integer) U64;


		;}
#undef MR_PROC_LABEL
	Var_10  = I;
}
      {
        Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_9, 0) = ((MR_Box) (Var_10));
        MR_hl_field(1, Var_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Integer_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Integer_4, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Integer_4, 1) = ((MR_Box) (Var_9));
      }
    }
    else
      Integer_4 = mercury__integer__uint64_to_digits_2_2_f_0(U64_3, (MR_Word) (&mercury__integer_scalar_common_1[3]));
  }
  return Integer_4;
}

static MR_Word MR_CALL 
mercury__integer__uint64_to_digits_2_2_f_0(
  uint64_t U_4,
  MR_Word Tail_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Result_6;
    uint64_t Var_18;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__integer__uint64_to_digits_2_2_f_0

	MR_Integer I;
	uint64_t U64;

	I = (MR_Integer) 0 ;
		{

    U64 = (uint64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_18  = U64;
}
    succeeded = (U_4 == Var_18);
    if (succeeded)
      Result_6 = Tail_5;
    else
    {
      MR_Integer Length_7 = ((MR_Integer) ((MR_hl_field(0, Tail_5, (MR_Integer) 0))));
      MR_Word Digits_8 = ((MR_Word) ((MR_hl_field(0, Tail_5, (MR_Integer) 1))));
      uint64_t Div_9 = (U_4 >> 14);
      uint64_t Mod_10;
      MR_Word Var_12;
      MR_Integer Var_13;
      MR_Word Var_15;
      MR_Integer Var_16;
      uint64_t Var_20;
      uint64_t next_value_of_U_4;
      MR_Word next_value_of_Tail_5;

{
#define MR_PROC_LABEL mercury__integer__uint64_to_digits_2_2_f_0

	MR_Integer I;
	uint64_t U64;

	I = (MR_Integer) 16383 ;
		{

    U64 = (uint64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_20  = U64;
}
      Mod_10 = (U_4 & Var_20);
      Var_13 = (MR_Integer) ((MR_Unsigned) Length_7 + (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__integer__uint64_to_digits_2_2_f_0

	uint64_t U64;
	MR_Integer I;

	U64 = Mod_10 ;
		{

    I = (MR_Integer) U64;


		;}
#undef MR_PROC_LABEL
	Var_16  = I;
}
      {
        Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_15, 0) = ((MR_Box) (Var_16));
        MR_hl_field(1, Var_15, 1) = ((MR_Box) (Digits_8));
      }
      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_13));
        MR_hl_field(0, Var_12, 1) = ((MR_Box) (Var_15));
      }
      // direct tailcall eliminated
      ;
      next_value_of_U_4 = Div_9;
      next_value_of_Tail_5 = Var_12;
      U_4 = next_value_of_U_4;
      Tail_5 = next_value_of_Tail_5;
      continue;
    }
    return Result_6;
    break;
  }
}

MR_Word MR_CALL 
mercury__integer__from_int64_1_f_0(
  int64_t I64_3)
{
  MR_bool succeeded;
  MR_Word Integer_4;
  int64_t Var_33;

{
#define MR_PROC_LABEL mercury__integer__from_int64_1_f_0

	MR_Integer I;
	int64_t I64;

	I = (MR_Integer) 0 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_33  = I64;
}
  succeeded = (I64_3 == Var_33);
  if (succeeded)
    Integer_4 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
  else
  {
    int64_t Var_7;
    int64_t Var_9;
    MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__integer__from_int64_1_f_0

	MR_Integer I;
	int64_t I64;

	I = (MR_Integer) 0 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_7  = I64;
}
    succeeded = (I64_3 > Var_7);
    if (succeeded)
    {
      Var_10 = (MR_Integer) 16384;
{
#define MR_PROC_LABEL mercury__integer__from_int64_1_f_0

	MR_Integer I;
	int64_t I64;

	I = Var_10 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_9  = I64;
}
      succeeded = (I64_3 < Var_9);
    }
    if (succeeded)
    {
      MR_Word Var_12;
      MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__integer__from_int64_1_f_0

	int64_t I64;
	MR_Integer I;

	I64 = I64_3 ;
		{

    I = (MR_Integer) I64;


		;}
#undef MR_PROC_LABEL
	Var_13  = I;
}
      {
        Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_12, 0) = ((MR_Box) (Var_13));
        MR_hl_field(1, Var_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Integer_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Integer_4, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Integer_4, 1) = ((MR_Box) (Var_12));
      }
    }
    else
    {
      int64_t Var_15;
      int64_t Var_17;
      MR_Integer Var_18;
      MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__integer__from_int64_1_f_0

	MR_Integer I;
	int64_t I64;

	I = (MR_Integer) 0 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_15  = I64;
}
      succeeded = (I64_3 < Var_15);
      if (succeeded)
      {
        Var_19 = (MR_Integer) 16384;
        Var_18 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Var_19);
{
#define MR_PROC_LABEL mercury__integer__from_int64_1_f_0

	MR_Integer I;
	int64_t I64;

	I = Var_18 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_17  = I64;
}
        succeeded = (I64_3 > Var_17);
      }
      if (succeeded)
      {
        MR_Word Var_21;
        MR_Integer Var_22;

{
#define MR_PROC_LABEL mercury__integer__from_int64_1_f_0

	int64_t I64;
	MR_Integer I;

	I64 = I64_3 ;
		{

    I = (MR_Integer) I64;


		;}
#undef MR_PROC_LABEL
	Var_22  = I;
}
        {
          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
          MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Integer_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Integer_4, 0) = ((MR_Box) ((MR_Integer) -1));
          MR_hl_field(0, Integer_4, 1) = ((MR_Box) (Var_21));
        }
      }
      else
      {
        succeeded = (I64_3 == INT64_MIN);
        if (succeeded)
        {
          MR_Word Var_24;
          int64_t Var_25;
          int64_t Var_26;
          MR_Word Var_37;
          MR_Integer S_38;
          MR_Word Digits0_39;
          MR_Word Digits_40;
          MR_Integer Var_41;

{
#define MR_PROC_LABEL mercury__integer__from_int64_1_f_0

	MR_Integer I;
	int64_t I64;

	I = (MR_Integer) 1 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_26  = I64;
}
          Var_25 = (int64_t) ((uint64_t) I64_3 + (uint64_t) Var_26);
          Var_24 = mercury__integer__from_int64_1_f_0(Var_25);
          S_38 = ((MR_Integer) ((MR_hl_field(0, (MR_Word) (&mercury__integer_scalar_common_1[5]), (MR_Integer) 0))));
          Digits0_39 = ((MR_Word) ((MR_hl_field(0, (MR_Word) (&mercury__integer_scalar_common_1[5]), (MR_Integer) 1))));
          Var_41 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_38);
          mercury__integer__neg_list_2_p_0(Digits0_39, &Digits_40);
          {
            Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_37, 0) = ((MR_Box) (Var_41));
            MR_hl_field(0, Var_37, 1) = ((MR_Box) (Digits_40));
          }
          Integer_4 = mercury__integer__big_plus_2_f_0(Var_24, Var_37);
        }
        else
        {
          MR_Word Magnitude_5;
          int64_t Var_29;
          int64_t Var_30;

          Var_29 = mercury__int64__abs_1_f_0(I64_3);
          Magnitude_5 = mercury__integer__pos_int64_to_digits_2_2_f_0(Var_29, (MR_Word) (&mercury__integer_scalar_common_1[3]));
{
#define MR_PROC_LABEL mercury__integer__from_int64_1_f_0

	MR_Integer I;
	int64_t I64;

	I = (MR_Integer) 0 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_30  = I64;
}
          succeeded = (I64_3 < Var_30);
          if (succeeded)
          {
            MR_Integer S_45 = ((MR_Integer) ((MR_hl_field(0, Magnitude_5, (MR_Integer) 0))));
            MR_Word Digits0_46 = ((MR_Word) ((MR_hl_field(0, Magnitude_5, (MR_Integer) 1))));
            MR_Word Digits_47;
            MR_Integer Var_48 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_45);

            mercury__integer__neg_list_2_p_0(Digits0_46, &Digits_47);
            {
              Integer_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Integer_4, 0) = ((MR_Box) (Var_48));
              MR_hl_field(0, Integer_4, 1) = ((MR_Box) (Digits_47));
            }
          }
          else
            Integer_4 = Magnitude_5;
        }
      }
    }
  }
  return Integer_4;
}

static MR_Word MR_CALL 
mercury__integer__pos_int64_to_digits_2_2_f_0(
  int64_t D_4,
  MR_Word Tail_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Result_6;
    int64_t Var_18;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__integer__pos_int64_to_digits_2_2_f_0

	MR_Integer I;
	int64_t I64;

	I = (MR_Integer) 0 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_18  = I64;
}
    succeeded = (D_4 == Var_18);
    if (succeeded)
      Result_6 = Tail_5;
    else
    {
      MR_Integer Length_7 = ((MR_Integer) ((MR_hl_field(0, Tail_5, (MR_Integer) 0))));
      MR_Word Digits_8 = ((MR_Word) ((MR_hl_field(0, Tail_5, (MR_Integer) 1))));
      int64_t Div_9 = (D_4 >> 14);
      int64_t Mod_10;
      MR_Word Var_12;
      MR_Integer Var_13;
      MR_Word Var_15;
      MR_Integer Var_16;
      int64_t Var_20;
      int64_t next_value_of_D_4;
      MR_Word next_value_of_Tail_5;

{
#define MR_PROC_LABEL mercury__integer__pos_int64_to_digits_2_2_f_0

	MR_Integer I;
	int64_t I64;

	I = (MR_Integer) 16383 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_20  = I64;
}
      Mod_10 = (D_4 & Var_20);
      Var_13 = (MR_Integer) ((MR_Unsigned) Length_7 + (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__integer__pos_int64_to_digits_2_2_f_0

	int64_t I64;
	MR_Integer I;

	I64 = Mod_10 ;
		{

    I = (MR_Integer) I64;


		;}
#undef MR_PROC_LABEL
	Var_16  = I;
}
      {
        Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_15, 0) = ((MR_Box) (Var_16));
        MR_hl_field(1, Var_15, 1) = ((MR_Box) (Digits_8));
      }
      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_13));
        MR_hl_field(0, Var_12, 1) = ((MR_Box) (Var_15));
      }
      // direct tailcall eliminated
      ;
      next_value_of_D_4 = Div_9;
      next_value_of_Tail_5 = Var_12;
      D_4 = next_value_of_D_4;
      Tail_5 = next_value_of_Tail_5;
      continue;
    }
    return Result_6;
    break;
  }
}

MR_Word MR_CALL 
mercury__integer__from_uint32_1_f_0(
  uint32_t U32_3)
{
  MR_bool succeeded = (U32_3 == UINT32_C(0));
  MR_Word Integer_4;

  if (succeeded)
    Integer_4 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
  else
  {
    uint32_t Var_5;

{
#define MR_PROC_LABEL mercury__integer__from_uint32_1_f_0

	MR_Integer I;
	uint32_t U32;

	I = (MR_Integer) 16384 ;
		{

    U32 = (uint32_t) I;


		;}
#undef MR_PROC_LABEL
	Var_5  = U32;
}
    succeeded = (U32_3 < Var_5);
    if (succeeded)
    {
      MR_Word Var_8;
      MR_Integer Var_9;

{
#define MR_PROC_LABEL mercury__integer__from_uint32_1_f_0

	uint32_t U32;
	MR_Integer I;

	U32 = U32_3 ;
		{

    I = (MR_Integer) U32;


		;}
#undef MR_PROC_LABEL
	Var_9  = I;
}
      {
        Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_9));
        MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Integer_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Integer_4, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Integer_4, 1) = ((MR_Box) (Var_8));
      }
    }
    else
      Integer_4 = mercury__integer__uint32_to_digits_2_2_f_0(U32_3, (MR_Word) (&mercury__integer_scalar_common_1[3]));
  }
  return Integer_4;
}

static MR_Word MR_CALL 
mercury__integer__uint32_to_digits_2_2_f_0(
  uint32_t U_4,
  MR_Word Tail_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (U_4 == UINT32_C(0));
    MR_Word Result_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      Result_6 = Tail_5;
    else
    {
      MR_Integer Length_7 = ((MR_Integer) ((MR_hl_field(0, Tail_5, (MR_Integer) 0))));
      MR_Word Digits_8 = ((MR_Word) ((MR_hl_field(0, Tail_5, (MR_Integer) 1))));
      uint32_t Div_9 = (U_4 >> 14);
      uint32_t Mod_10;
      MR_Word Var_11;
      MR_Integer Var_12;
      MR_Word Var_14;
      MR_Integer Var_15;
      uint32_t Var_17;
      uint32_t next_value_of_U_4;
      MR_Word next_value_of_Tail_5;

{
#define MR_PROC_LABEL mercury__integer__uint32_to_digits_2_2_f_0

	MR_Integer I;
	uint32_t U32;

	I = (MR_Integer) 16383 ;
		{

    U32 = (uint32_t) I;


		;}
#undef MR_PROC_LABEL
	Var_17  = U32;
}
      Mod_10 = (U_4 & Var_17);
      Var_12 = (MR_Integer) ((MR_Unsigned) Length_7 + (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__integer__uint32_to_digits_2_2_f_0

	uint32_t U32;
	MR_Integer I;

	U32 = Mod_10 ;
		{

    I = (MR_Integer) U32;


		;}
#undef MR_PROC_LABEL
	Var_15  = I;
}
      {
        Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
        MR_hl_field(1, Var_14, 1) = ((MR_Box) (Digits_8));
      }
      {
        Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_11, 0) = ((MR_Box) (Var_12));
        MR_hl_field(0, Var_11, 1) = ((MR_Box) (Var_14));
      }
      // direct tailcall eliminated
      ;
      next_value_of_U_4 = Div_9;
      next_value_of_Tail_5 = Var_11;
      U_4 = next_value_of_U_4;
      Tail_5 = next_value_of_Tail_5;
      continue;
    }
    return Result_6;
    break;
  }
}

MR_Word MR_CALL 
mercury__integer__from_int32_1_f_0(
  int32_t I32_3)
{
  MR_Word Integer_4;
  MR_Integer I_5;

{
#define MR_PROC_LABEL mercury__integer__from_int32_1_f_0

	int32_t I32;
	MR_Integer I;

	I32 = I32_3 ;
		{

    I = I32;


		;}
#undef MR_PROC_LABEL
	I_5  = I;
}
  Integer_4 = mercury__integer__int_to_integer_1_f_0(I_5);
  return Integer_4;
}

MR_Word MR_CALL 
mercury__integer__from_uint16_1_f_0(
  uint16_t U16_3)
{
  MR_Word Integer_4;
  MR_Integer I_5;

{
#define MR_PROC_LABEL mercury__integer__from_uint16_1_f_0

	uint16_t U16;
	MR_Integer I;

	U16 = U16_3 ;
		{

    I = U16;


		;}
#undef MR_PROC_LABEL
	I_5  = I;
}
  Integer_4 = mercury__integer__int_to_integer_1_f_0(I_5);
  return Integer_4;
}

MR_Word MR_CALL 
mercury__integer__from_int16_1_f_0(
  int16_t I16_3)
{
  MR_Word Integer_4;
  MR_Integer I_5;

{
#define MR_PROC_LABEL mercury__integer__from_int16_1_f_0

	int16_t I16;
	MR_Integer I;

	I16 = I16_3 ;
		{

    I = I16;


		;}
#undef MR_PROC_LABEL
	I_5  = I;
}
  Integer_4 = mercury__integer__int_to_integer_1_f_0(I_5);
  return Integer_4;
}

MR_Word MR_CALL 
mercury__integer__from_uint8_1_f_0(
  uint8_t U8_3)
{
  MR_Word Integer_4;
  MR_Integer I_5;

{
#define MR_PROC_LABEL mercury__integer__from_uint8_1_f_0

	uint8_t U8;
	MR_Integer I;

	U8 = U8_3 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	I_5  = I;
}
  Integer_4 = mercury__integer__int_to_integer_1_f_0(I_5);
  return Integer_4;
}

MR_Word MR_CALL 
mercury__integer__from_int8_1_f_0(
  int8_t I8_3)
{
  MR_Word Integer_4;
  MR_Integer I_5;

{
#define MR_PROC_LABEL mercury__integer__from_int8_1_f_0

	int8_t I8;
	MR_Integer I;

	I8 = I8_3 ;
		{

    I = I8;


		;}
#undef MR_PROC_LABEL
	I_5  = I;
}
  Integer_4 = mercury__integer__int_to_integer_1_f_0(I_5);
  return Integer_4;
}

MR_Word MR_CALL 
mercury__integer__integer_1_f_0(
  MR_Integer N_3)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mercury__integer__int_to_integer_1_f_0(N_3);
  return HeadVar__2_2;
}

MR_String MR_CALL 
mercury__integer__to_string_1_f_0(
  MR_Word Integer_3)
{
  MR_String HeadVar__2_2;

  HeadVar__2_2 = mercury__integer__to_base_string_2_f_0(Integer_3, (MR_Integer) 10);
  return HeadVar__2_2;
}

MR_String MR_CALL 
mercury__integer__to_base_string_2_f_0(
  MR_Word Integer_4,
  MR_Integer Base_5)
{
  MR_bool succeeded = ((MR_Integer) 2 <= Base_5);
  MR_String String_6;
  MR_Word PrintBase_7;
  MR_Integer Sign_8;
  MR_Word Digits_9;
  MR_Integer Var_15;
  MR_Integer Var_12;

  if (succeeded)
  {
    Var_12 = (MR_Integer) 36;
    succeeded = (Base_5 <= Var_12);
  }
  if (!(succeeded))
    mercury__require__unexpected_2_p_0((MR_String) "function \140integer.to_base_string\'/2", (MR_String) "invalid base");
  mercury__int__pow_3_p_0(Base_5, (MR_Integer) 3, &Var_15);
  PrintBase_7 = (MR_Word) (Var_15);
  Sign_8 = ((MR_Integer) ((MR_hl_field(0, Integer_4, (MR_Integer) 0))));
  Digits_9 = ((MR_Word) ((MR_hl_field(0, Integer_4, (MR_Integer) 1))));
  succeeded = (Sign_8 < (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word AbsDigits_10;
    MR_String Var_19;

    mercury__integer__neg_list_2_p_0(Digits_9, &AbsDigits_10);
    if ((AbsDigits_10 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_19 = (MR_String) "0";
    else
    {
      MR_Word DigitsInPrintBase_29;
      MR_Word Var_34;
      MR_Word Var_35;

      Var_34 = mercury__integer__printbase_pos_int_to_digits_2_3_f_0(PrintBase_7, (MR_Integer) 16384, (MR_Word) (&mercury__integer_scalar_common_1[3]));
      Var_35 = mercury__integer__printbase_rep_1_4_f_0(PrintBase_7, AbsDigits_10, Var_34, (MR_Word) (&mercury__integer_scalar_common_1[3]));
      DigitsInPrintBase_29 = ((MR_Word) ((MR_hl_field(0, Var_35, (MR_Integer) 1))));
      if ((DigitsInPrintBase_29 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__require__unexpected_2_p_0((MR_String) "function \140integer.digits_to_string\'/3", (MR_String) "empty list");
      else
      {
        MR_Integer Head_30 = ((MR_Integer) ((MR_hl_field(1, DigitsInPrintBase_29, (MR_Integer) 0))));
        MR_Word Tail_31 = ((MR_Word) ((MR_hl_field(1, DigitsInPrintBase_29, (MR_Integer) 1))));
        MR_String HeadStr_32;
        MR_Word TailStrs_33;
        MR_Word Var_38;
        MR_Word Var_47;

        mercury__string__int_to_base_string_3_p_0(Head_30, Base_5, &HeadStr_32);
        mercury__integer__digits_to_strings_4_p_0(Base_5, Tail_31, (MR_Word) ((MR_Unsigned) 0U), &TailStrs_33);
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (HeadStr_32));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) (TailStrs_33));
        }
        Var_47 = mercury__integer__map__ho2_2_f_in__list_0(Var_38);
        mercury__string__unsafe_append_string_pieces_2_p_0(Var_47, &Var_19);
      }
    }
    mercury__string__append_3_p_2((MR_String) "-", Var_19, &String_6);
  }
  else
  if ((Digits_9 == (MR_Word) ((MR_Unsigned) 0U)))
    String_6 = (MR_String) "0";
  else
  {
    MR_Word DigitsInPrintBase_60;
    MR_Word Var_65;
    MR_Word Var_66;

    Var_65 = mercury__integer__printbase_pos_int_to_digits_2_3_f_0(PrintBase_7, (MR_Integer) 16384, (MR_Word) (&mercury__integer_scalar_common_1[3]));
    Var_66 = mercury__integer__printbase_rep_1_4_f_0(PrintBase_7, Digits_9, Var_65, (MR_Word) (&mercury__integer_scalar_common_1[3]));
    DigitsInPrintBase_60 = ((MR_Word) ((MR_hl_field(0, Var_66, (MR_Integer) 1))));
    if ((DigitsInPrintBase_60 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_2_p_0((MR_String) "function \140integer.digits_to_string\'/3", (MR_String) "empty list");
    else
    {
      MR_Integer Head_61 = ((MR_Integer) ((MR_hl_field(1, DigitsInPrintBase_60, (MR_Integer) 0))));
      MR_Word Tail_62 = ((MR_Word) ((MR_hl_field(1, DigitsInPrintBase_60, (MR_Integer) 1))));
      MR_String HeadStr_63;
      MR_Word TailStrs_64;
      MR_Word Var_69;
      MR_Word Var_78;

      mercury__string__int_to_base_string_3_p_0(Head_61, Base_5, &HeadStr_63);
      mercury__integer__digits_to_strings_4_p_0(Base_5, Tail_62, (MR_Word) ((MR_Unsigned) 0U), &TailStrs_64);
      {
        Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_69, 0) = ((MR_Box) (HeadStr_63));
        MR_hl_field(1, Var_69, 1) = ((MR_Box) (TailStrs_64));
      }
      Var_78 = mercury__integer__map__ho2_2_f_in__list_0(Var_69);
      mercury__string__unsafe_append_string_pieces_2_p_0(Var_78, &String_6);
    }
  }
  return String_6;
}

static MR_Word MR_CALL 
mercury__integer__map__ho2_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_8;
    MR_Integer Var_13;
    MR_Word * AddrSCCcallarg_9_14;

{
#define MR_PROC_LABEL mercury__integer__map__ho2_2_f_in__list_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_13  = Length;
}
    {
      Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_6));
      MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, Var_8, 2) = ((MR_Box) (Var_13));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__integer__LCMC__func__map__ho2__1_3_p_0(Var_7, AddrSCCcallarg_9_14);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__integer__LCMC__func__map__ho2__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Integer Var_13;
      MR_Word * AddrSCCcallarg_9_14;
      MR_Word HeadVar__3_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_15;

{
#define MR_PROC_LABEL mercury__integer__LCMC__func__map__ho2__1_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_13  = Length;
}
      {
        Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_6));
        MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(1, Var_8, 2) = ((MR_Box) (Var_13));
      }
      {
        HeadVar__3_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_16, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_16, 1) = NULL;
      }
      AddrSCCcallarg_9_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_16, (MR_Integer) 1)));
      *AddrOfHeadVar__3_15 = HeadVar__3_16;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_15 = AddrSCCcallarg_9_14;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_15 = next_value_of_AddrOfHeadVar__3_15;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__integer__digits_to_strings_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Strs_0_3,
  MR_Word * STATE_VARIABLE_Strs_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Strs_4 = STATE_VARIABLE_Strs_0_3;
  else
  {
    MR_Integer H_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word T_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Str_13;
    MR_String S1_17;
    MR_Word * AddrSTATE_VARIABLE_Strs_16_20;

    mercury__string__int_to_base_string_3_p_0(H_10, HeadVar__1_1, &S1_17);
    mercury__string__pad_left_4_p_0(S1_17, (MR_Char) 48, (MR_Integer) 3, &Str_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Strs_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Str_13));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrSTATE_VARIABLE_Strs_16_20 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Strs_4, (MR_Integer) 1)));
    mercury__integer__LCMC__pred__digits_to_strings__1_4_p_0(HeadVar__1_1, T_11, STATE_VARIABLE_Strs_0_3, AddrSTATE_VARIABLE_Strs_16_20);
  }
}

static void MR_CALL 
mercury__integer__LCMC__pred__digits_to_strings__1_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Strs_0_3,
  MR_Word * AddrOfSTATE_VARIABLE_Strs_21)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfSTATE_VARIABLE_Strs_21 = STATE_VARIABLE_Strs_0_3;
    else
    {
      MR_Integer H_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word T_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_String Str_13;
      MR_String S1_17;
      MR_Word * AddrSTATE_VARIABLE_Strs_16_20;
      MR_Word STATE_VARIABLE_Strs_22;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfSTATE_VARIABLE_Strs_21;

      mercury__string__int_to_base_string_3_p_0(H_10, HeadVar__1_1, &S1_17);
      mercury__string__pad_left_4_p_0(S1_17, (MR_Char) 48, (MR_Integer) 3, &Str_13);
      {
        STATE_VARIABLE_Strs_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Strs_22, 0) = ((MR_Box) (Str_13));
        MR_hl_field(1, STATE_VARIABLE_Strs_22, 1) = NULL;
      }
      AddrSTATE_VARIABLE_Strs_16_20 = (MR_Word *) (&(MR_hl_field(1, STATE_VARIABLE_Strs_22, (MR_Integer) 1)));
      *AddrOfSTATE_VARIABLE_Strs_21 = STATE_VARIABLE_Strs_22;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = T_11;
      next_value_of_AddrOfSTATE_VARIABLE_Strs_21 = AddrSTATE_VARIABLE_Strs_16_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfSTATE_VARIABLE_Strs_21 = next_value_of_AddrOfSTATE_VARIABLE_Strs_21;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__integer__printbase_rep_1_4_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word Carry_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__5_5;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__5_5 = Carry_4;
    else
    {
      MR_Integer X_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Xs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Integer L1_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Ds1_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer L2_19 = ((MR_Integer) ((MR_hl_field(0, Carry_4, (MR_Integer) 0))));
      MR_Word Ds2_20 = ((MR_Word) ((MR_hl_field(0, Carry_4, (MR_Integer) 1))));
      MR_Integer L1_32;
      MR_Integer L2_34;
      MR_Integer Div_36;
      MR_Word Ds_37;
      MR_Integer Len_38;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_Carry_4;

      succeeded = (L1_17 < L2_19);
      if (succeeded)
        Var_15 = mercury__integer__printbase_pos_mul_list_4_f_0(HeadVar__1_1, Ds1_18, (MR_Word) (&mercury__integer_scalar_common_1[3]), Carry_4);
      else
        Var_15 = mercury__integer__printbase_pos_mul_list_4_f_0(HeadVar__1_1, Ds2_20, (MR_Word) (&mercury__integer_scalar_common_1[3]), HeadVar__3_3);
      Var_16 = mercury__integer__printbase_pos_int_to_digits_2_3_f_0(HeadVar__1_1, X_10, (MR_Word) (&mercury__integer_scalar_common_1[3]));
      L1_32 = ((MR_Integer) ((MR_hl_field(0, Var_15, (MR_Integer) 0))));
      L2_34 = ((MR_Integer) ((MR_hl_field(0, Var_16, (MR_Integer) 0))));
      mercury__integer__printbase_add_pairs_5_p_0(HeadVar__1_1, &Div_36, Var_15, Var_16, &Ds_37);
      succeeded = (L1_32 > L2_34);
      if (succeeded)
        Len_38 = L1_32;
      else
        Len_38 = L2_34;
      succeeded = (Div_36 == (MR_Integer) 0);
      if (succeeded)
        {
          Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_14, 0) = ((MR_Box) (Len_38));
          MR_hl_field(0, Var_14, 1) = ((MR_Box) (Ds_37));
        }
      else
      {
        MR_Integer Var_41 = (MR_Integer) ((MR_Unsigned) Len_38 + (MR_Unsigned) 1);
        MR_Word Var_43;

        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (Div_36));
          MR_hl_field(1, Var_43, 1) = ((MR_Box) (Ds_37));
        }
        {
          Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_14, 0) = ((MR_Box) (Var_41));
          MR_hl_field(0, Var_14, 1) = ((MR_Box) (Var_43));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Xs_11;
      next_value_of_Carry_4 = Var_14;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      Carry_4 = next_value_of_Carry_4;
      continue;
    }
    return HeadVar__5_5;
    break;
  }
}

static MR_Word MR_CALL 
mercury__integer__printbase_pos_mul_list_4_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word Carry_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__5_5;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__5_5 = Carry_3;
    else
    {
      MR_Integer X_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Xs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Integer Len_17 = ((MR_Integer) ((MR_hl_field(0, Carry_3, (MR_Integer) 0))));
      MR_Word Digits_18 = ((MR_Word) ((MR_hl_field(0, Carry_3, (MR_Integer) 1))));
      MR_Integer Len_26;
      MR_Word Ds_27;
      MR_Integer Div_28;
      MR_Word DsOut_29;
      MR_Integer L1_33;
      MR_Integer L2_35;
      MR_Integer Div_37;
      MR_Word Ds_38;
      MR_Integer Len_39;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_Carry_3;

      if ((Digits_18 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_15 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
      else
      {
        MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) Len_17 + (MR_Unsigned) 1);
        MR_Word Var_23;

        Var_23 = mercury__integer__mul_base_2_1_f_0(Digits_18);
        {
          Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_15, 0) = ((MR_Box) (Var_21));
          MR_hl_field(0, Var_15, 1) = ((MR_Box) (Var_23));
        }
      }
      Len_26 = ((MR_Integer) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 0))));
      Ds_27 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 1))));
      mercury__integer__printbase_mul_by_digit_2_5_p_0(HeadVar__1_1, X_10, &Div_28, Ds_27, &DsOut_29);
      succeeded = (Div_28 == (MR_Integer) 0);
      if (succeeded)
        {
          Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_16, 0) = ((MR_Box) (Len_26));
          MR_hl_field(0, Var_16, 1) = ((MR_Box) (DsOut_29));
        }
      else
      {
        MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) Len_26 + (MR_Unsigned) 1);
        MR_Word Var_32;

        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (Div_28));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (DsOut_29));
        }
        {
          Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_16, 0) = ((MR_Box) (Var_30));
          MR_hl_field(0, Var_16, 1) = ((MR_Box) (Var_32));
        }
      }
      L1_33 = ((MR_Integer) ((MR_hl_field(0, Var_15, (MR_Integer) 0))));
      L2_35 = ((MR_Integer) ((MR_hl_field(0, Var_16, (MR_Integer) 0))));
      mercury__integer__printbase_add_pairs_5_p_0(HeadVar__1_1, &Div_37, Var_15, Var_16, &Ds_38);
      succeeded = (L1_33 > L2_35);
      if (succeeded)
        Len_39 = L1_33;
      else
        Len_39 = L2_35;
      succeeded = (Div_37 == (MR_Integer) 0);
      if (succeeded)
        {
          Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_14, 0) = ((MR_Box) (Len_39));
          MR_hl_field(0, Var_14, 1) = ((MR_Box) (Ds_38));
        }
      else
      {
        MR_Integer Var_42 = (MR_Integer) ((MR_Unsigned) Len_39 + (MR_Unsigned) 1);
        MR_Word Var_44;

        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (Div_37));
          MR_hl_field(1, Var_44, 1) = ((MR_Box) (Ds_38));
        }
        {
          Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_14, 0) = ((MR_Box) (Var_42));
          MR_hl_field(0, Var_14, 1) = ((MR_Box) (Var_44));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Xs_11;
      next_value_of_Carry_3 = Var_14;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      Carry_3 = next_value_of_Carry_3;
      continue;
    }
    return HeadVar__5_5;
    break;
  }
}

static void MR_CALL 
mercury__integer__printbase_mul_by_digit_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer D_2,
  MR_Integer * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Integer) 0;
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Integer X_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Xs_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Integer Mod_13;
    MR_Word NewXs_14;
    MR_Integer DivXs_15;
    MR_Integer Var_16;
    MR_Integer Var_17;
    MR_Integer Base_18;
    MR_Integer Var_19;
    MR_Integer Var_20;

    mercury__integer__printbase_mul_by_digit_2_5_p_0(HeadVar__1_1, D_2, &DivXs_15, Xs_12, &NewXs_14);
    Var_17 = (MR_Integer) ((MR_Unsigned) D_2 * (MR_Unsigned) X_11);
    Var_16 = (MR_Integer) ((MR_Unsigned) Var_17 + (MR_Unsigned) DivXs_15);
    Base_18 = (MR_Integer) (HeadVar__1_1);
    Var_20 = mercury__int__div_2_f_0(Var_16, Base_18);
    Var_19 = (MR_Integer) ((MR_Unsigned) Var_20 * (MR_Unsigned) Base_18);
    Mod_13 = (MR_Integer) ((MR_Unsigned) Var_16 - (MR_Unsigned) Var_19);
    *HeadVar__3_3 = mercury__int__div_2_f_0(Var_16, Base_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Mod_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (NewXs_14));
    }
  }
}

static void MR_CALL 
mercury__integer__printbase_add_pairs_5_p_0(
  MR_Word Base_6,
  MR_Integer * Div_7,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * Ds_12)
{
  MR_bool succeeded;
  MR_Integer L1_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word D1_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Integer L2_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 0))));
  MR_Word D2_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 1))));

  succeeded = (L1_8 == L2_10);
  if (succeeded)
    mercury__integer__printbase_add_pairs_equal_5_p_0(Base_6, Div_7, D1_9, D2_11, Ds_12);
  else
  {
    MR_Integer H2_13;
    MR_Word T2_14;

    succeeded = (L1_8 < L2_10);
    if (succeeded)
    {
      succeeded = (D2_11 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        H2_13 = ((MR_Integer) ((MR_hl_field(1, D2_11, (MR_Integer) 0))));
        T2_14 = ((MR_Word) ((MR_hl_field(1, D2_11, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Integer Div1_15;
      MR_Word Ds1_16;
      MR_Integer Mod_17;
      MR_Word Var_21;
      MR_Integer Var_22 = (MR_Integer) ((MR_Unsigned) L2_10 - (MR_Unsigned) 1);
      MR_Integer Var_24;
      MR_Integer Base_35;
      MR_Integer Var_36;
      MR_Integer Var_37;

      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_21, 0) = ((MR_Box) (Var_22));
        MR_hl_field(0, Var_21, 1) = ((MR_Box) (T2_14));
      }
      mercury__integer__printbase_add_pairs_5_p_0(Base_6, &Div1_15, HeadVar__3_3, Var_21, &Ds1_16);
      Var_24 = (MR_Integer) ((MR_Unsigned) H2_13 + (MR_Unsigned) Div1_15);
      Base_35 = (MR_Integer) (Base_6);
      Var_37 = mercury__int__div_2_f_0(Var_24, Base_35);
      Var_36 = (MR_Integer) ((MR_Unsigned) Var_37 * (MR_Unsigned) Base_35);
      Mod_17 = (MR_Integer) ((MR_Unsigned) Var_24 - (MR_Unsigned) Var_36);
      *Div_7 = mercury__int__div_2_f_0(Var_24, Base_35);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Ds_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Mod_17));
        MR_hl_field(1, base, 1) = ((MR_Box) (Ds1_16));
      }
    }
    else
    {
      MR_Integer H1_18;
      MR_Word T1_19;

      succeeded = (L1_8 > L2_10);
      if (succeeded)
      {
        succeeded = (D1_9 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          H1_18 = ((MR_Integer) ((MR_hl_field(1, D1_9, (MR_Integer) 0))));
          T1_19 = ((MR_Word) ((MR_hl_field(1, D1_9, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word Var_25;
        MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) L1_8 - (MR_Unsigned) 1);
        MR_Integer Var_29;
        MR_Integer Div1_32;
        MR_Word Ds1_33;
        MR_Integer Mod_34;
        MR_Integer Base_38;
        MR_Integer Var_39;
        MR_Integer Var_40;

        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_25, 0) = ((MR_Box) (Var_27));
          MR_hl_field(0, Var_25, 1) = ((MR_Box) (T1_19));
        }
        mercury__integer__printbase_add_pairs_5_p_0(Base_6, &Div1_32, Var_25, HeadVar__4_4, &Ds1_33);
        Var_29 = (MR_Integer) ((MR_Unsigned) H1_18 + (MR_Unsigned) Div1_32);
        Base_38 = (MR_Integer) (Base_6);
        Var_40 = mercury__int__div_2_f_0(Var_29, Base_38);
        Var_39 = (MR_Integer) ((MR_Unsigned) Var_40 * (MR_Unsigned) Base_38);
        Mod_34 = (MR_Integer) ((MR_Unsigned) Var_29 - (MR_Unsigned) Var_39);
        *Div_7 = mercury__int__div_2_f_0(Var_29, Base_38);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Ds_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Mod_34));
          MR_hl_field(1, base, 1) = ((MR_Box) (Ds1_33));
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140integer.printbase_add_pairs\'/5", (MR_String) "integer.printbase_add_pairs");
          return;
        }
    }
  }
}

static void MR_CALL 
mercury__integer__printbase_add_pairs_equal_5_p_0(
  MR_Word Base_1,
  MR_Integer * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Integer) 0;
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer Var_23 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Integer) 0;
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Integer Y_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Ys_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Integer Mod_17;
      MR_Word TailDs_18;
      MR_Integer DivTail_19;
      MR_Integer Var_20;
      MR_Integer Var_21;
      MR_Integer Base_24;
      MR_Integer Var_25;
      MR_Integer Var_26;

      mercury__integer__printbase_add_pairs_equal_5_p_0(Base_1, &DivTail_19, Var_22, Ys_16, &TailDs_18);
      Var_21 = (MR_Integer) ((MR_Unsigned) Var_23 + (MR_Unsigned) Y_15);
      Var_20 = (MR_Integer) ((MR_Unsigned) Var_21 + (MR_Unsigned) DivTail_19);
      Base_24 = (MR_Integer) (Base_1);
      Var_26 = mercury__int__div_2_f_0(Var_20, Base_24);
      Var_25 = (MR_Integer) ((MR_Unsigned) Var_26 * (MR_Unsigned) Base_24);
      Mod_17 = (MR_Integer) ((MR_Unsigned) Var_20 - (MR_Unsigned) Var_25);
      *HeadVar__2_2 = mercury__int__div_2_f_0(Var_20, Base_24);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Mod_17));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailDs_18));
      }
    }
  }
}

static MR_Word MR_CALL 
mercury__integer__printbase_pos_int_to_digits_2_3_f_0(
  MR_Word Base_5,
  MR_Integer D_6,
  MR_Word Tail_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (D_6 == (MR_Integer) 0);
    MR_Word Result_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      Result_8 = Tail_7;
    else
    {
      MR_Integer Length_9 = ((MR_Integer) ((MR_hl_field(0, Tail_7, (MR_Integer) 0))));
      MR_Word Digits_10 = ((MR_Word) ((MR_hl_field(0, Tail_7, (MR_Integer) 1))));
      MR_Integer Div_11;
      MR_Integer Mod_12;
      MR_Word Var_13;
      MR_Integer Var_14;
      MR_Word Var_16;
      MR_Integer Base_17 = (MR_Integer) (Base_5);
      MR_Integer Var_18;
      MR_Integer Var_19;
      MR_Integer next_value_of_D_6;
      MR_Word next_value_of_Tail_7;

      Var_19 = mercury__int__div_2_f_0(D_6, Base_17);
      Var_18 = (MR_Integer) ((MR_Unsigned) Var_19 * (MR_Unsigned) Base_17);
      Mod_12 = (MR_Integer) ((MR_Unsigned) D_6 - (MR_Unsigned) Var_18);
      Div_11 = mercury__int__div_2_f_0(D_6, Base_17);
      Var_14 = (MR_Integer) ((MR_Unsigned) Length_9 + (MR_Unsigned) 1);
      {
        Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_16, 0) = ((MR_Box) (Mod_12));
        MR_hl_field(1, Var_16, 1) = ((MR_Box) (Digits_10));
      }
      {
        Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_13, 0) = ((MR_Box) (Var_14));
        MR_hl_field(0, Var_13, 1) = ((MR_Box) (Var_16));
      }
      // direct tailcall eliminated
      ;
      next_value_of_D_6 = Div_11;
      next_value_of_Tail_7 = Var_13;
      D_6 = next_value_of_D_6;
      Tail_7 = next_value_of_Tail_7;
      continue;
    }
    return Result_8;
    break;
  }
}

MR_Float MR_CALL 
mercury__integer__float_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Float HeadVar__2_2;
  MR_Word List_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Float Var_5;

{
#define MR_PROC_LABEL mercury__integer__float_1_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal = (MR_Integer) 16384 ;
		{

    FloatVal = IntVal;


		;}
#undef MR_PROC_LABEL
	Var_5  = FloatVal;
}
  HeadVar__2_2 = mercury__integer__float_list_3_f_0(Var_5, (MR_Float) 0.0000000000000000, List_4);
  return HeadVar__2_2;
}

MR_Float MR_CALL 
mercury__integer__float_list_3_f_0(
  MR_Float FBase_1,
  MR_Float Accum_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Float HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = Accum_2;
    else
    {
      MR_Integer H_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word T_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Float Var_11;
      MR_Float Var_12 = (Accum_2 * FBase_1);
      MR_Float Var_13;
      MR_Float next_value_of_Accum_2;
      MR_Word next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__integer__float_list_3_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal = H_9 ;
		{

    FloatVal = IntVal;


		;}
#undef MR_PROC_LABEL
	Var_13  = FloatVal;
}
      Var_11 = (Var_12 + Var_13);
      // direct tailcall eliminated
      ;
      next_value_of_Accum_2 = Var_11;
      next_value_of_HeadVar__3_3 = T_10;
      Accum_2 = next_value_of_Accum_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    return HeadVar__4_4;
    break;
  }
}

uint64_t MR_CALL 
mercury__integer__det_to_uint64_1_f_0(
  MR_Word Integer_3)
{
  MR_bool succeeded;
  uint64_t UInt64_4;
  uint64_t UInt64Prime_5;

  succeeded = mercury__integer__to_uint64_2_p_0(Integer_3, &UInt64Prime_5);
  if (succeeded)
    UInt64_4 = UInt64Prime_5;
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "integer.det_to_uint64: domain error (conversion would overflow")))));
  return UInt64_4;
}

MR_bool MR_CALL 
mercury__integer__to_uint64_2_p_0(
  MR_Word Integer_3,
  uint64_t * UInt64_4)
{
  MR_bool succeeded;
  MR_Integer Sign_5 = ((MR_Integer) ((MR_hl_field(0, Integer_3, (MR_Integer) 0))));
  MR_Word Digits_6 = ((MR_Word) ((MR_hl_field(0, Integer_3, (MR_Integer) 1))));
  MR_Word Var_8;
  uint64_t Var_9;
  MR_Integer Var_10;
  MR_Word C_11;

  succeeded = (Sign_5 >= (MR_Integer) 0);
  if (succeeded)
  {
    Var_8 = (MR_Word) (&mercury__integer_scalar_common_1[29]);
    mercury__integer____Compare____integer_0_0(&C_11, Integer_3, Var_8);
    switch (C_11) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      Var_10 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__integer__to_uint64_2_p_0

	MR_Integer I;
	uint64_t U64;

	I = Var_10 ;
		{

    U64 = (uint64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_9  = U64;
}
      *UInt64_4 = mercury__integer__uint64_list_2_f_0(Digits_6, Var_9);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static uint64_t MR_CALL 
mercury__integer__uint64_list_2_f_0(
  MR_Word HeadVar__1_1,
  uint64_t Accum_2)
{
  while (MR_TRUE)
  {
    uint64_t HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = Accum_2;
    else
    {
      MR_Integer H_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word T_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      uint64_t Var_8;
      uint64_t Var_9;
      uint64_t Var_10;
      uint64_t Var_12;
      MR_Word next_value_of_HeadVar__1_1;
      uint64_t next_value_of_Accum_2;

{
#define MR_PROC_LABEL mercury__integer__uint64_list_2_f_0

	MR_Integer I;
	uint64_t U64;

	I = (MR_Integer) 16384 ;
		{

    U64 = (uint64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_10  = U64;
}
      Var_9 = (Accum_2 * Var_10);
{
#define MR_PROC_LABEL mercury__integer__uint64_list_2_f_0

	MR_Integer I;
	uint64_t U64;

	I = H_5 ;
		{

    U64 = (uint64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_12  = U64;
}
      Var_8 = (Var_9 + Var_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = T_6;
      next_value_of_Accum_2 = Var_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Accum_2 = next_value_of_Accum_2;
      continue;
    }
    return HeadVar__3_3;
    break;
  }
}

int64_t MR_CALL 
mercury__integer__det_to_int64_1_f_0(
  MR_Word Integer_3)
{
  MR_bool succeeded;
  int64_t Int64_4;
  int64_t Int64Prime_5;

  succeeded = mercury__integer__to_int64_2_p_0(Integer_3, &Int64Prime_5);
  if (succeeded)
    Int64_4 = Int64Prime_5;
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "integer.det_to_int64: domain error (conversion would overflow")))));
  return Int64_4;
}

MR_bool MR_CALL 
mercury__integer__to_int64_2_p_0(
  MR_Word Integer_3,
  int64_t * Int64_4)
{
  MR_bool succeeded;
  MR_Integer Sign_5 = ((MR_Integer) ((MR_hl_field(0, Integer_3, (MR_Integer) 0))));
  MR_Word Digits_6 = ((MR_Word) ((MR_hl_field(0, Integer_3, (MR_Integer) 1))));
  MR_Word SignRes_7;

  succeeded = (Sign_5 < (MR_Integer) 0);
  if (succeeded)
    SignRes_7 = (MR_Integer) 1;
  else
  {
    succeeded = (Sign_5 == (MR_Integer) 0);
    if (succeeded)
      SignRes_7 = (MR_Integer) 0;
    else
      SignRes_7 = (MR_Integer) 2;
  }
  switch (SignRes_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        int64_t Var_10;
        MR_Integer Var_11;
        MR_Word C_17;

        mercury__integer____Compare____integer_0_0(&C_17, Integer_3, (MR_Word) (&mercury__integer_scalar_common_1[23]));
        switch (C_17) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
        }
        if (succeeded)
        {
          Var_11 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__integer__to_int64_2_p_0

	MR_Integer I;
	int64_t I64;

	I = Var_11 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_10  = I64;
}
          *Int64_4 = mercury__integer__int64_list_2_f_0(Digits_6, Var_10);
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 0:
      {
{
#define MR_PROC_LABEL mercury__integer__to_int64_2_p_0

	MR_Integer I;
	int64_t I64;

	I = (MR_Integer) 0 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	*Int64_4  = I64;
}
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        int64_t Var_14;
        MR_Integer Var_15;
        MR_Word C_19;

        mercury__integer____Compare____integer_0_0(&C_19, Integer_3, (MR_Word) (&mercury__integer_scalar_common_1[27]));
        switch (C_19) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
        }
        if (succeeded)
        {
          Var_15 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__integer__to_int64_2_p_0

	MR_Integer I;
	int64_t I64;

	I = Var_15 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_14  = I64;
}
          *Int64_4 = mercury__integer__int64_list_2_f_0(Digits_6, Var_14);
          succeeded = MR_TRUE;
        }
      }
      break;
  }
  return succeeded;
}

static int64_t MR_CALL 
mercury__integer__int64_list_2_f_0(
  MR_Word HeadVar__1_1,
  int64_t Accum_2)
{
  while (MR_TRUE)
  {
    int64_t HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = Accum_2;
    else
    {
      MR_Integer H_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word T_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      int64_t Var_8;
      int64_t Var_9;
      int64_t Var_10;
      int64_t Var_12;
      MR_Word next_value_of_HeadVar__1_1;
      int64_t next_value_of_Accum_2;

{
#define MR_PROC_LABEL mercury__integer__int64_list_2_f_0

	MR_Integer I;
	int64_t I64;

	I = (MR_Integer) 16384 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_10  = I64;
}
      Var_9 = (int64_t) ((uint64_t) Accum_2 * (uint64_t) Var_10);
{
#define MR_PROC_LABEL mercury__integer__int64_list_2_f_0

	MR_Integer I;
	int64_t I64;

	I = H_5 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_12  = I64;
}
      Var_8 = (int64_t) ((uint64_t) Var_9 + (uint64_t) Var_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = T_6;
      next_value_of_Accum_2 = Var_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Accum_2 = next_value_of_Accum_2;
      continue;
    }
    return HeadVar__3_3;
    break;
  }
}

uint32_t MR_CALL 
mercury__integer__det_to_uint32_1_f_0(
  MR_Word Integer_3)
{
  MR_bool succeeded;
  uint32_t UInt32_4;
  uint32_t UInt32Prime_5;

  succeeded = mercury__integer__to_uint32_2_p_0(Integer_3, &UInt32Prime_5);
  if (succeeded)
    UInt32_4 = UInt32Prime_5;
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "integer.det_to_uint32: domain error (conversion would overflow")))));
  return UInt32_4;
}

MR_bool MR_CALL 
mercury__integer__to_uint32_2_p_0(
  MR_Word Integer_3,
  uint32_t * UInt32_4)
{
  MR_bool succeeded;
  MR_Integer Sign_5 = ((MR_Integer) ((MR_hl_field(0, Integer_3, (MR_Integer) 0))));
  MR_Word Digits_6 = ((MR_Word) ((MR_hl_field(0, Integer_3, (MR_Integer) 1))));
  MR_Word Var_8;
  uint32_t Var_9;
  MR_Word C_10;

  succeeded = (Sign_5 >= (MR_Integer) 0);
  if (succeeded)
  {
    Var_8 = (MR_Word) (&mercury__integer_scalar_common_1[18]);
    mercury__integer____Compare____integer_0_0(&C_10, Integer_3, Var_8);
    switch (C_10) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      Var_9 = UINT32_C(0);
      *UInt32_4 = mercury__integer__uint32_list_2_f_0(Digits_6, Var_9);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static uint32_t MR_CALL 
mercury__integer__uint32_list_2_f_0(
  MR_Word HeadVar__1_1,
  uint32_t Accum_2)
{
  while (MR_TRUE)
  {
    uint32_t HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = Accum_2;
    else
    {
      MR_Integer H_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word T_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      uint32_t Var_8;
      uint32_t Var_9;
      uint32_t Var_10;
      uint32_t Var_12;
      MR_Word next_value_of_HeadVar__1_1;
      uint32_t next_value_of_Accum_2;

{
#define MR_PROC_LABEL mercury__integer__uint32_list_2_f_0

	MR_Integer I;
	uint32_t U32;

	I = (MR_Integer) 16384 ;
		{

    U32 = (uint32_t) I;


		;}
#undef MR_PROC_LABEL
	Var_10  = U32;
}
      Var_9 = (Accum_2 * Var_10);
{
#define MR_PROC_LABEL mercury__integer__uint32_list_2_f_0

	MR_Integer I;
	uint32_t U32;

	I = H_5 ;
		{

    U32 = (uint32_t) I;


		;}
#undef MR_PROC_LABEL
	Var_12  = U32;
}
      Var_8 = (Var_9 + Var_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = T_6;
      next_value_of_Accum_2 = Var_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Accum_2 = next_value_of_Accum_2;
      continue;
    }
    return HeadVar__3_3;
    break;
  }
}

int32_t MR_CALL 
mercury__integer__det_to_int32_1_f_0(
  MR_Word Integer_3)
{
  MR_bool succeeded;
  int32_t Int32_4;
  int32_t Int32Prime_5;
  MR_Integer Int_9;

  succeeded = mercury__integer__to_int_2_p_0(Integer_3, &Int_9);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__integer__det_to_int32_1_f_0

	MR_Integer I;
	int32_t I32;
	MR_bool SUCCESS_INDICATOR;

	I = Int_9 ;
		{

    if (I > (MR_Integer) INT32_MAX) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else if (I < (MR_Integer) INT32_MIN) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        I32 = (int32_t) I;
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Int32Prime_5  = I32;
	}
succeeded  = SUCCESS_INDICATOR;
}
  }
  if (succeeded)
    Int32_4 = Int32Prime_5;
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "integer.det_to_int32: domain error (conversion would overflow")))));
  return Int32_4;
}

MR_bool MR_CALL 
mercury__integer__to_int32_2_p_0(
  MR_Word Integer_3,
  int32_t * Int32_4)
{
  MR_bool succeeded;
  MR_Integer Int_5;

  succeeded = mercury__integer__to_int_2_p_0(Integer_3, &Int_5);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__integer__to_int32_2_p_0

	MR_Integer I;
	int32_t I32;
	MR_bool SUCCESS_INDICATOR;

	I = Int_5 ;
		{

    if (I > (MR_Integer) INT32_MAX) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else if (I < (MR_Integer) INT32_MIN) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        I32 = (int32_t) I;
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*Int32_4  = I32;
	}
succeeded  = SUCCESS_INDICATOR;
}
  }
  return succeeded;
}

uint16_t MR_CALL 
mercury__integer__det_to_uint16_1_f_0(
  MR_Word Integer_3)
{
  MR_bool succeeded;
  uint16_t UInt16_4;
  uint16_t UInt16Prime_5;
  MR_Integer Int_9;

  succeeded = mercury__integer__to_int_2_p_0(Integer_3, &Int_9);
  if (succeeded)
    succeeded = mercury__uint16__from_int_2_p_0(Int_9, &UInt16Prime_5);
  if (succeeded)
    UInt16_4 = UInt16Prime_5;
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "integer.det_to_uint16: domain error (conversion would overflow)")))));
  return UInt16_4;
}

MR_bool MR_CALL 
mercury__integer__to_uint16_2_p_0(
  MR_Word Integer_3,
  uint16_t * UInt16_4)
{
  MR_bool succeeded;
  MR_Integer Int_5;

  succeeded = mercury__integer__to_int_2_p_0(Integer_3, &Int_5);
  if (succeeded)
    succeeded = mercury__uint16__from_int_2_p_0(Int_5, UInt16_4);
  return succeeded;
}

int16_t MR_CALL 
mercury__integer__det_to_int16_1_f_0(
  MR_Word Integer_3)
{
  MR_bool succeeded;
  int16_t Int16_4;
  int16_t Int16Prime_5;
  MR_Integer Int_9;

  succeeded = mercury__integer__to_int_2_p_0(Integer_3, &Int_9);
  if (succeeded)
    succeeded = mercury__int16__from_int_2_p_0(Int_9, &Int16Prime_5);
  if (succeeded)
    Int16_4 = Int16Prime_5;
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "integer.det_to_int16: domain error (conversion would overflow)")))));
  return Int16_4;
}

MR_bool MR_CALL 
mercury__integer__to_int16_2_p_0(
  MR_Word Integer_3,
  int16_t * Int16_4)
{
  MR_bool succeeded;
  MR_Integer Int_5;

  succeeded = mercury__integer__to_int_2_p_0(Integer_3, &Int_5);
  if (succeeded)
    succeeded = mercury__int16__from_int_2_p_0(Int_5, Int16_4);
  return succeeded;
}

uint8_t MR_CALL 
mercury__integer__det_to_uint8_1_f_0(
  MR_Word Integer_3)
{
  MR_bool succeeded;
  uint8_t UInt8_4;
  uint8_t UInt8Prime_5;

  succeeded = mercury__integer__to_uint8_2_p_0(Integer_3, &UInt8Prime_5);
  if (succeeded)
    UInt8_4 = UInt8Prime_5;
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "integer.det_to_uint8: domain error (conversion would overflow)")))));
  return UInt8_4;
}

MR_bool MR_CALL 
mercury__integer__to_uint8_2_p_0(
  MR_Word Integer_3,
  uint8_t * UInt8_4)
{
  MR_bool succeeded;
  MR_Integer Var_9 = ((MR_Integer) ((MR_hl_field(0, Integer_3, (MR_Integer) 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, Integer_3, (MR_Integer) 1))));

  succeeded = (Var_9 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Var_10 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *UInt8_4 = UINT8_C(0);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Integer Digit_6;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, Integer_3, (MR_Integer) 1))));
    MR_Word Var_8;

    succeeded = (Var_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Digit_6 = ((MR_Integer) ((MR_hl_field(1, Var_7, (MR_Integer) 0))));
      Var_8 = ((MR_Word) ((MR_hl_field(1, Var_7, (MR_Integer) 1))));
      succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = mercury__uint8__from_int_2_p_0(Digit_6, UInt8_4);
    }
  }
  return succeeded;
}

int8_t MR_CALL 
mercury__integer__det_to_int8_1_f_0(
  MR_Word Integer_3)
{
  MR_bool succeeded;
  int8_t Int8_4;
  int8_t Int8Prime_5;

  succeeded = mercury__integer__to_int8_2_p_0(Integer_3, &Int8Prime_5);
  if (succeeded)
    Int8_4 = Int8Prime_5;
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "integer.det_to_int8: domain error (conversion would overflow)")))));
  return Int8_4;
}

MR_bool MR_CALL 
mercury__integer__to_int8_2_p_0(
  MR_Word Integer_3,
  int8_t * Int8_4)
{
  MR_bool succeeded;
  MR_Integer Var_9 = ((MR_Integer) ((MR_hl_field(0, Integer_3, (MR_Integer) 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, Integer_3, (MR_Integer) 1))));

  succeeded = (Var_9 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Var_10 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *Int8_4 = INT8_C(0);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Integer Digit_6;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, Integer_3, (MR_Integer) 1))));
    MR_Word Var_8;

    succeeded = (Var_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Digit_6 = ((MR_Integer) ((MR_hl_field(1, Var_7, (MR_Integer) 0))));
      Var_8 = ((MR_Word) ((MR_hl_field(1, Var_7, (MR_Integer) 1))));
      succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = mercury__int8__from_int_2_p_0(Digit_6, Int8_4);
    }
  }
  return succeeded;
}

MR_Unsigned MR_CALL 
mercury__integer__det_to_uint_1_f_0(
  MR_Word Integer_3)
{
  MR_bool succeeded;
  MR_Unsigned UInt_4;
  MR_Unsigned UIntPrime_5;

  succeeded = mercury__integer__to_uint_2_p_0(Integer_3, &UIntPrime_5);
  if (succeeded)
    UInt_4 = UIntPrime_5;
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "integer.det_to_uint: domain error (conversion would overflow)")))));
  return UInt_4;
}

MR_bool MR_CALL 
mercury__integer__to_uint_2_p_0(
  MR_Word Integer_3,
  MR_Unsigned * UInt_4)
{
  MR_bool succeeded;
  MR_Word Digits_6;
  MR_Word Var_8;
  MR_Unsigned Var_9;
  MR_Unsigned Var_10;
  MR_Word C_13;
  MR_Word C_15;

  mercury__integer____Compare____integer_0_0(&C_13, Integer_3, (MR_Word) (&mercury__integer_scalar_common_1[3]));
  switch (C_13) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 2:
      succeeded = MR_TRUE;
      break;
  }
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__integer__to_uint_2_p_0

	MR_Unsigned Max;

		{

    if (sizeof(MR_Unsigned) == sizeof(unsigned int)) {
        Max = UINT_MAX;
    } else if (sizeof(MR_Unsigned) == sizeof(unsigned long)) {
        Max = (MR_Unsigned) ULONG_MAX;
    #if defined(ULLONG_MAX)
    } else if (sizeof(MR_Unsigned) == sizeof(unsigned long long)) {
        Max = (MR_Unsigned) ULLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max uint size");
    }


		;}
#undef MR_PROC_LABEL
	Var_9  = Max;
}
    Var_8 = mercury__integer__from_uint_1_f_0(Var_9);
    mercury__integer____Compare____integer_0_0(&C_15, Integer_3, Var_8);
    switch (C_15) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      Digits_6 = ((MR_Word) ((MR_hl_field(0, Integer_3, (MR_Integer) 1))));
      Var_10 = (MR_Unsigned) 0U;
      *UInt_4 = mercury__integer__uint_list_2_f_0(Digits_6, Var_10);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_Unsigned MR_CALL 
mercury__integer__uint_list_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Unsigned Accum_2)
{
  while (MR_TRUE)
  {
    MR_Unsigned HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = Accum_2;
    else
    {
      MR_Integer H_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word T_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Unsigned Var_8;
      MR_Unsigned Var_9;
      MR_Unsigned Var_10;
      MR_Unsigned Var_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Unsigned next_value_of_Accum_2;

{
#define MR_PROC_LABEL mercury__integer__uint_list_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I = (MR_Integer) 16384 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	Var_10  = U;
}
      Var_9 = (Accum_2 * Var_10);
{
#define MR_PROC_LABEL mercury__integer__uint_list_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I = H_5 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	Var_12  = U;
}
      Var_8 = (Var_9 + Var_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = T_6;
      next_value_of_Accum_2 = Var_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Accum_2 = next_value_of_Accum_2;
      continue;
    }
    return HeadVar__3_3;
    break;
  }
}

MR_Word MR_CALL 
mercury__integer__from_uint_1_f_0(
  MR_Unsigned U_3)
{
  MR_bool succeeded = (U_3 == (MR_Unsigned) 0U);
  MR_Word Integer_4;

  if (succeeded)
    Integer_4 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
  else
  {
    MR_Unsigned Var_5;

{
#define MR_PROC_LABEL mercury__integer__from_uint_1_f_0

	MR_Integer I;
	MR_Unsigned U;

	I = (MR_Integer) 16384 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	Var_5  = U;
}
    succeeded = (U_3 < Var_5);
    if (succeeded)
    {
      MR_Word Var_8;
      MR_Integer Var_9;

{
#define MR_PROC_LABEL mercury__integer__from_uint_1_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = U_3 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_9  = I;
}
      {
        Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_9));
        MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Integer_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Integer_4, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Integer_4, 1) = ((MR_Box) (Var_8));
      }
    }
    else
      Integer_4 = mercury__integer__uint_to_digits_2_2_f_0(U_3, (MR_Word) (&mercury__integer_scalar_common_1[3]));
  }
  return Integer_4;
}

static MR_Word MR_CALL 
mercury__integer__uint_to_digits_2_2_f_0(
  MR_Unsigned U_4,
  MR_Word Tail_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (U_4 == (MR_Unsigned) 0U);
    MR_Word Result_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      Result_6 = Tail_5;
    else
    {
      MR_Integer Length_7 = ((MR_Integer) ((MR_hl_field(0, Tail_5, (MR_Integer) 0))));
      MR_Word Digits_8 = ((MR_Word) ((MR_hl_field(0, Tail_5, (MR_Integer) 1))));
      MR_Unsigned Div_9 = (U_4 >> 14);
      MR_Unsigned Mod_10;
      MR_Word Var_11;
      MR_Integer Var_12;
      MR_Word Var_14;
      MR_Integer Var_15;
      MR_Unsigned Var_17;
      MR_Unsigned next_value_of_U_4;
      MR_Word next_value_of_Tail_5;

{
#define MR_PROC_LABEL mercury__integer__uint_to_digits_2_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I = (MR_Integer) 16383 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	Var_17  = U;
}
      Mod_10 = (U_4 & Var_17);
      Var_12 = (MR_Integer) ((MR_Unsigned) Length_7 + (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__integer__uint_to_digits_2_2_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = Mod_10 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_15  = I;
}
      {
        Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
        MR_hl_field(1, Var_14, 1) = ((MR_Box) (Digits_8));
      }
      {
        Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_11, 0) = ((MR_Box) (Var_12));
        MR_hl_field(0, Var_11, 1) = ((MR_Box) (Var_14));
      }
      // direct tailcall eliminated
      ;
      next_value_of_U_4 = Div_9;
      next_value_of_Tail_5 = Var_11;
      U_4 = next_value_of_U_4;
      Tail_5 = next_value_of_Tail_5;
      continue;
    }
    return Result_6;
    break;
  }
}

MR_Integer MR_CALL 
mercury__integer__det_to_int_1_f_0(
  MR_Word Integer_3)
{
  MR_bool succeeded;
  MR_Integer Int_4;
  MR_Integer IntPrime_5;

  succeeded = mercury__integer__to_int_2_p_0(Integer_3, &IntPrime_5);
  if (succeeded)
    Int_4 = IntPrime_5;
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "integer.det_to_int: domain error (conversion would overflow)")))));
  return Int_4;
}

MR_bool MR_CALL 
mercury__integer__to_int_2_p_0(
  MR_Word Integer_3,
  MR_Integer * Int_4)
{
  MR_bool succeeded;
  MR_Word Digits_6;
  MR_Word Var_7;
  MR_Integer Var_8;
  MR_Word Var_9;
  MR_Integer Var_10;
  MR_Integer Var_11;
  MR_Word C_12;
  MR_Word C_14;

{
#define MR_PROC_LABEL mercury__integer__to_int_2_p_0

	MR_Integer Min;

		{

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


		;}
#undef MR_PROC_LABEL
	Var_8  = Min;
}
  Var_7 = mercury__integer__int_to_integer_1_f_0(Var_8);
  mercury__integer____Compare____integer_0_0(&C_12, Integer_3, Var_7);
  switch (C_12) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 2:
      succeeded = MR_TRUE;
      break;
  }
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__integer__to_int_2_p_0

	MR_Integer Max;

		{

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


		;}
#undef MR_PROC_LABEL
	Var_10  = Max;
}
    Var_9 = mercury__integer__int_to_integer_1_f_0(Var_10);
    mercury__integer____Compare____integer_0_0(&C_14, Integer_3, Var_9);
    switch (C_14) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      Digits_6 = ((MR_Word) ((MR_hl_field(0, Integer_3, (MR_Integer) 1))));
      Var_11 = (MR_Integer) 0;
      *Int_4 = mercury__integer__int_list_2_f_0(Digits_6, Var_11);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__integer__int_to_integer_1_f_0(
  MR_Integer D_3)
{
  MR_bool succeeded = (D_3 == (MR_Integer) 0);
  MR_Word Int_4;

  if (succeeded)
    Int_4 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
  else
  {
    MR_Integer Var_6;

    succeeded = (D_3 > (MR_Integer) 0);
    if (succeeded)
    {
      Var_6 = (MR_Integer) 16384;
      succeeded = (D_3 < Var_6);
    }
    if (succeeded)
    {
      MR_Word Var_8;

      {
        Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_8, 0) = ((MR_Box) (D_3));
        MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Int_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Int_4, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Int_4, 1) = ((MR_Box) (Var_8));
      }
    }
    else
    {
      MR_Integer Var_11;
      MR_Integer Var_12;

      succeeded = (D_3 < (MR_Integer) 0);
      if (succeeded)
      {
        Var_12 = (MR_Integer) 16384;
        Var_11 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Var_12);
        succeeded = (D_3 > Var_11);
      }
      if (succeeded)
      {
        MR_Word Var_14;

        {
          Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_14, 0) = ((MR_Box) (D_3));
          MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Int_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Int_4, 0) = ((MR_Box) ((MR_Integer) -1));
          MR_hl_field(0, Int_4, 1) = ((MR_Box) (Var_14));
        }
      }
      else
      {
        MR_Integer Var_22;

{
#define MR_PROC_LABEL mercury__integer__int_to_integer_1_f_0

	MR_Integer Min;

		{

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


		;}
#undef MR_PROC_LABEL
	Var_22  = Min;
}
        succeeded = (D_3 == Var_22);
        if (succeeded)
        {
          MR_Word Var_16;
          MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) D_3 + (MR_Unsigned) 1);
          MR_Word Var_25;
          MR_Integer S_26;
          MR_Word Digits0_27;
          MR_Word Digits_28;
          MR_Integer Var_29;

          Var_16 = mercury__integer__int_to_integer_1_f_0(Var_17);
          S_26 = ((MR_Integer) ((MR_hl_field(0, (MR_Word) (&mercury__integer_scalar_common_1[5]), (MR_Integer) 0))));
          Digits0_27 = ((MR_Word) ((MR_hl_field(0, (MR_Word) (&mercury__integer_scalar_common_1[5]), (MR_Integer) 1))));
          Var_29 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_26);
          mercury__integer__neg_list_2_p_0(Digits0_27, &Digits_28);
          {
            Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_25, 0) = ((MR_Box) (Var_29));
            MR_hl_field(0, Var_25, 1) = ((MR_Box) (Digits_28));
          }
          Int_4 = mercury__integer__big_plus_2_f_0(Var_16, Var_25);
        }
        else
        {
          MR_Word Var_20;
          MR_Integer Var_21;

          mercury__int__abs_2_p_0(D_3, &Var_21);
          Var_20 = mercury__integer__pos_int_to_digits_2_2_f_0(Var_21, (MR_Word) (&mercury__integer_scalar_common_1[3]));
          Int_4 = mercury__integer__big_sign_2_f_0(D_3, Var_20);
        }
      }
    }
  }
  return Int_4;
}

static MR_Word MR_CALL 
mercury__integer__pos_int_to_digits_2_2_f_0(
  MR_Integer D_4,
  MR_Word Tail_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (D_4 == (MR_Integer) 0);
    MR_Word Result_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      Result_6 = Tail_5;
    else
    {
      MR_Integer Length_7 = ((MR_Integer) ((MR_hl_field(0, Tail_5, (MR_Integer) 0))));
      MR_Word Digits_8 = ((MR_Word) ((MR_hl_field(0, Tail_5, (MR_Integer) 1))));
      MR_Integer Div_9 = (D_4 >> 14);
      MR_Integer Mod_10 = (D_4 & (MR_Integer) 16383);
      MR_Word Var_11;
      MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) Length_7 + (MR_Unsigned) 1);
      MR_Word Var_14;
      MR_Integer next_value_of_D_4;
      MR_Word next_value_of_Tail_5;

      {
        Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_14, 0) = ((MR_Box) (Mod_10));
        MR_hl_field(1, Var_14, 1) = ((MR_Box) (Digits_8));
      }
      {
        Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_11, 0) = ((MR_Box) (Var_12));
        MR_hl_field(0, Var_11, 1) = ((MR_Box) (Var_14));
      }
      // direct tailcall eliminated
      ;
      next_value_of_D_4 = Div_9;
      next_value_of_Tail_5 = Var_11;
      D_4 = next_value_of_D_4;
      Tail_5 = next_value_of_Tail_5;
      continue;
    }
    return Result_6;
    break;
  }
}

static MR_Integer MR_CALL 
mercury__integer__int_list_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer Accum_2)
{
  while (MR_TRUE)
  {
    MR_Integer HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = Accum_2;
    else
    {
      MR_Integer H_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word T_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Var_8;
      MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) Accum_2 * (MR_Unsigned) 16384);
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_Accum_2;

      Var_8 = (MR_Integer) ((MR_Unsigned) Var_9 + (MR_Unsigned) H_5);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = T_6;
      next_value_of_Accum_2 = Var_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Accum_2 = next_value_of_Accum_2;
      continue;
    }
    return HeadVar__3_3;
    break;
  }
}

MR_Word MR_CALL 
mercury__integer__xor_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_bool succeeded;
  MR_Word Result_6;
  MR_Integer Sign_11 = ((MR_Integer) ((MR_hl_field(0, X_4, (MR_Integer) 0))));

  succeeded = (Sign_11 < (MR_Integer) 0);
  if (succeeded)
  {
    MR_Integer Sign_14 = ((MR_Integer) ((MR_hl_field(0, Y_5, (MR_Integer) 0))));

    succeeded = (Sign_14 < (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_7;
      MR_Word Var_8;
      MR_Word Var_17;
      MR_Integer S_19;
      MR_Word Digits0_20;
      MR_Word Digits_21;
      MR_Integer Var_22;
      MR_Word Var_23;
      MR_Integer S_25;
      MR_Word Digits0_26;
      MR_Word Digits_27;
      MR_Integer Var_28;
      MR_Word Var_29;

      Var_17 = mercury__integer__big_plus_2_f_0(X_4, (MR_Word) (&mercury__integer_scalar_common_1[5]));
      S_19 = ((MR_Integer) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
      Digits0_20 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
      Var_22 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_19);
      mercury__integer__neg_list_2_p_0(Digits0_20, &Digits_21);
      {
        Var_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_7, 0) = ((MR_Box) (Var_22));
        MR_hl_field(0, Var_7, 1) = ((MR_Box) (Digits_21));
      }
      Var_23 = mercury__integer__big_plus_2_f_0(Y_5, (MR_Word) (&mercury__integer_scalar_common_1[5]));
      S_25 = ((MR_Integer) ((MR_hl_field(0, Var_23, (MR_Integer) 0))));
      Digits0_26 = ((MR_Word) ((MR_hl_field(0, Var_23, (MR_Integer) 1))));
      Var_28 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_25);
      mercury__integer__neg_list_2_p_0(Digits0_26, &Digits_27);
      {
        Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_8, 0) = ((MR_Box) (Var_28));
        MR_hl_field(0, Var_8, 1) = ((MR_Box) (Digits_27));
      }
      Var_29 = mercury__integer__xor_pairs_2_f_0(Var_7, Var_8);
      Result_6 = mercury__integer__decap_1_f_0(Var_29);
    }
    else
    {
      MR_Word Var_9;
      MR_Word Var_30;
      MR_Integer S_32;
      MR_Word Digits0_33;
      MR_Word Digits_34;
      MR_Integer Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Integer S_44;
      MR_Word Digits0_45;
      MR_Word Digits_46;
      MR_Integer Var_47;

      Var_30 = mercury__integer__big_plus_2_f_0(X_4, (MR_Word) (&mercury__integer_scalar_common_1[5]));
      S_32 = ((MR_Integer) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
      Digits0_33 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 1))));
      Var_35 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_32);
      mercury__integer__neg_list_2_p_0(Digits0_33, &Digits_34);
      {
        Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_9, 0) = ((MR_Box) (Var_35));
        MR_hl_field(0, Var_9, 1) = ((MR_Box) (Digits_34));
      }
      Var_39 = mercury__integer__or_pairs_2_f_0(Y_5, Var_9);
      Var_37 = mercury__integer__decap_1_f_0(Var_39);
      Var_40 = mercury__integer__and_pairs_2_f_0(Y_5, Var_9);
      Var_38 = mercury__integer__decap_1_f_0(Var_40);
      Var_41 = mercury__integer__and_not_pairs_2_f_0(Var_37, Var_38);
      Var_36 = mercury__integer__decap_1_f_0(Var_41);
      Var_42 = mercury__integer__big_plus_2_f_0(Var_36, (MR_Word) (&mercury__integer_scalar_common_1[5]));
      S_44 = ((MR_Integer) ((MR_hl_field(0, Var_42, (MR_Integer) 0))));
      Digits0_45 = ((MR_Word) ((MR_hl_field(0, Var_42, (MR_Integer) 1))));
      Var_47 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_44);
      mercury__integer__neg_list_2_p_0(Digits0_45, &Digits_46);
      {
        Result_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Result_6, 0) = ((MR_Box) (Var_47));
        MR_hl_field(0, Result_6, 1) = ((MR_Box) (Digits_46));
      }
    }
  }
  else
  {
    MR_Integer Sign_48 = ((MR_Integer) ((MR_hl_field(0, Y_5, (MR_Integer) 0))));

    succeeded = (Sign_48 < (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_10;
      MR_Word Var_51;
      MR_Integer S_53;
      MR_Word Digits0_54;
      MR_Word Digits_55;
      MR_Integer Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Integer S_65;
      MR_Word Digits0_66;
      MR_Word Digits_67;
      MR_Integer Var_68;

      Var_51 = mercury__integer__big_plus_2_f_0(Y_5, (MR_Word) (&mercury__integer_scalar_common_1[5]));
      S_53 = ((MR_Integer) ((MR_hl_field(0, Var_51, (MR_Integer) 0))));
      Digits0_54 = ((MR_Word) ((MR_hl_field(0, Var_51, (MR_Integer) 1))));
      Var_56 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_53);
      mercury__integer__neg_list_2_p_0(Digits0_54, &Digits_55);
      {
        Var_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_56));
        MR_hl_field(0, Var_10, 1) = ((MR_Box) (Digits_55));
      }
      Var_60 = mercury__integer__or_pairs_2_f_0(X_4, Var_10);
      Var_58 = mercury__integer__decap_1_f_0(Var_60);
      Var_61 = mercury__integer__and_pairs_2_f_0(X_4, Var_10);
      Var_59 = mercury__integer__decap_1_f_0(Var_61);
      Var_62 = mercury__integer__and_not_pairs_2_f_0(Var_58, Var_59);
      Var_57 = mercury__integer__decap_1_f_0(Var_62);
      Var_63 = mercury__integer__big_plus_2_f_0(Var_57, (MR_Word) (&mercury__integer_scalar_common_1[5]));
      S_65 = ((MR_Integer) ((MR_hl_field(0, Var_63, (MR_Integer) 0))));
      Digits0_66 = ((MR_Word) ((MR_hl_field(0, Var_63, (MR_Integer) 1))));
      Var_68 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_65);
      mercury__integer__neg_list_2_p_0(Digits0_66, &Digits_67);
      {
        Result_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Result_6, 0) = ((MR_Box) (Var_68));
        MR_hl_field(0, Result_6, 1) = ((MR_Box) (Digits_67));
      }
    }
    else
    {
      MR_Word Var_69;

      Var_69 = mercury__integer__xor_pairs_2_f_0(X_4, Y_5);
      Result_6 = mercury__integer__decap_1_f_0(Var_69);
    }
  }
  return Result_6;
}

static MR_Word MR_CALL 
mercury__integer__xor_pairs_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Integer_8;
  MR_Integer L1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word D1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Integer L2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word D2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

  succeeded = (L1_4 == L2_6);
  if (succeeded)
  {
    MR_Word Var_16;

    Var_16 = mercury__integer__xor_pairs_equal_2_f_0(D1_5, D2_7);
    {
      Integer_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Integer_8, 0) = ((MR_Box) (L1_4));
      MR_hl_field(0, Integer_8, 1) = ((MR_Box) (Var_16));
    }
  }
  else
  {
    MR_Integer H2_9;
    MR_Word T2_10;

    succeeded = (L1_4 < L2_6);
    if (succeeded)
    {
      succeeded = (D2_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        H2_9 = ((MR_Integer) ((MR_hl_field(1, D2_7, (MR_Integer) 0))));
        T2_10 = ((MR_Word) ((MR_hl_field(1, D2_7, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word DsT_12;
      MR_Word Var_17;
      MR_Word Var_19;
      MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) L2_6 - (MR_Unsigned) 1);
      MR_Word Var_22;

      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_19, 0) = ((MR_Box) (Var_20));
        MR_hl_field(0, Var_19, 1) = ((MR_Box) (T2_10));
      }
      Var_17 = mercury__integer__xor_pairs_2_f_0(HeadVar__1_1, Var_19);
      DsT_12 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
      {
        Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_22, 0) = ((MR_Box) (H2_9));
        MR_hl_field(1, Var_22, 1) = ((MR_Box) (DsT_12));
      }
      {
        Integer_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Integer_8, 0) = ((MR_Box) (L2_6));
        MR_hl_field(0, Integer_8, 1) = ((MR_Box) (Var_22));
      }
    }
    else
    {
      MR_Integer H1_13;
      MR_Word T1_14;

      succeeded = (L1_4 > L2_6);
      if (succeeded)
      {
        succeeded = (D1_5 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          H1_13 = ((MR_Integer) ((MR_hl_field(1, D1_5, (MR_Integer) 0))));
          T1_14 = ((MR_Word) ((MR_hl_field(1, D1_5, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) L1_4 - (MR_Unsigned) 1);
        MR_Word Var_28;
        MR_Word DsT_31;

        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_24, 0) = ((MR_Box) (Var_25));
          MR_hl_field(0, Var_24, 1) = ((MR_Box) (T1_14));
        }
        Var_23 = mercury__integer__xor_pairs_2_f_0(Var_24, HeadVar__2_2);
        DsT_31 = ((MR_Word) ((MR_hl_field(0, Var_23, (MR_Integer) 1))));
        {
          Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_28, 0) = ((MR_Box) (H1_13));
          MR_hl_field(1, Var_28, 1) = ((MR_Box) (DsT_31));
        }
        {
          Integer_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Integer_8, 0) = ((MR_Box) (L1_4));
          MR_hl_field(0, Integer_8, 1) = ((MR_Box) (Var_28));
        }
      }
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140integer.xor_pairs\'/2", (MR_String) "invalid integer");
    }
  }
  return Integer_8;
}

static MR_Word MR_CALL 
mercury__integer__xor_pairs_equal_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer Y_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Ys_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_11 = (Var_14 ^ Y_9);
      MR_Word * AddrSCCcallarg_12_15;

      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_11));
        MR_hl_field(1, HeadVar__3_3, 1) = NULL;
      }
      AddrSCCcallarg_12_15 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
      mercury__integer__LCMC__func__xor_pairs_equal__1_3_p_0(Var_13, Ys_10, AddrSCCcallarg_12_15);
    }
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__integer__LCMC__func__xor_pairs_equal__1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_16 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__3_16 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer Y_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Ys_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Integer Var_11 = (Var_14 ^ Y_9);
        MR_Word * AddrSCCcallarg_12_15;
        MR_Word HeadVar__3_18;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word * next_value_of_AddrOfHeadVar__3_16;

        {
          HeadVar__3_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_18, 0) = ((MR_Box) (Var_11));
          MR_hl_field(1, HeadVar__3_18, 1) = NULL;
        }
        AddrSCCcallarg_12_15 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_18, (MR_Integer) 1)));
        *AddrOfHeadVar__3_16 = HeadVar__3_18;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_13;
        next_value_of_HeadVar__2_2 = Ys_10;
        next_value_of_AddrOfHeadVar__3_16 = AddrSCCcallarg_12_15;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_16 = next_value_of_AddrOfHeadVar__3_16;
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__integer__f_92_47_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_bool succeeded;
  MR_Word Result_6;
  MR_Integer Sign_14 = ((MR_Integer) ((MR_hl_field(0, X_4, (MR_Integer) 0))));

  succeeded = (Sign_14 < (MR_Integer) 0);
  if (succeeded)
  {
    MR_Integer Sign_17 = ((MR_Integer) ((MR_hl_field(0, Y_5, (MR_Integer) 0))));

    succeeded = (Sign_17 < (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_7;
      MR_Word Var_8;
      MR_Word Var_9;
      MR_Word Var_20;
      MR_Integer S_22;
      MR_Word Digits0_23;
      MR_Word Digits_24;
      MR_Integer Var_25;
      MR_Word Var_26;
      MR_Integer S_28;
      MR_Word Digits0_29;
      MR_Word Digits_30;
      MR_Integer Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Integer S_35;
      MR_Word Digits0_36;
      MR_Word Digits_37;
      MR_Integer Var_38;

      Var_20 = mercury__integer__big_plus_2_f_0(X_4, (MR_Word) (&mercury__integer_scalar_common_1[5]));
      S_22 = ((MR_Integer) ((MR_hl_field(0, Var_20, (MR_Integer) 0))));
      Digits0_23 = ((MR_Word) ((MR_hl_field(0, Var_20, (MR_Integer) 1))));
      Var_25 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_22);
      mercury__integer__neg_list_2_p_0(Digits0_23, &Digits_24);
      {
        Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_8, 0) = ((MR_Box) (Var_25));
        MR_hl_field(0, Var_8, 1) = ((MR_Box) (Digits_24));
      }
      Var_26 = mercury__integer__big_plus_2_f_0(Y_5, (MR_Word) (&mercury__integer_scalar_common_1[5]));
      S_28 = ((MR_Integer) ((MR_hl_field(0, Var_26, (MR_Integer) 0))));
      Digits0_29 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 1))));
      Var_31 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_28);
      mercury__integer__neg_list_2_p_0(Digits0_29, &Digits_30);
      {
        Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_9, 0) = ((MR_Box) (Var_31));
        MR_hl_field(0, Var_9, 1) = ((MR_Box) (Digits_30));
      }
      Var_32 = mercury__integer__and_pairs_2_f_0(Var_8, Var_9);
      Var_7 = mercury__integer__decap_1_f_0(Var_32);
      Var_33 = mercury__integer__big_plus_2_f_0(Var_7, (MR_Word) (&mercury__integer_scalar_common_1[5]));
      S_35 = ((MR_Integer) ((MR_hl_field(0, Var_33, (MR_Integer) 0))));
      Digits0_36 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 1))));
      Var_38 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_35);
      mercury__integer__neg_list_2_p_0(Digits0_36, &Digits_37);
      {
        Result_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Result_6, 0) = ((MR_Box) (Var_38));
        MR_hl_field(0, Result_6, 1) = ((MR_Box) (Digits_37));
      }
    }
    else
    {
      MR_Word Var_10;
      MR_Word Var_11;
      MR_Word Var_39;
      MR_Integer S_41;
      MR_Word Digits0_42;
      MR_Word Digits_43;
      MR_Integer Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Integer S_48;
      MR_Word Digits0_49;
      MR_Word Digits_50;
      MR_Integer Var_51;

      Var_39 = mercury__integer__big_plus_2_f_0(X_4, (MR_Word) (&mercury__integer_scalar_common_1[5]));
      S_41 = ((MR_Integer) ((MR_hl_field(0, Var_39, (MR_Integer) 0))));
      Digits0_42 = ((MR_Word) ((MR_hl_field(0, Var_39, (MR_Integer) 1))));
      Var_44 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_41);
      mercury__integer__neg_list_2_p_0(Digits0_42, &Digits_43);
      {
        Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_11, 0) = ((MR_Box) (Var_44));
        MR_hl_field(0, Var_11, 1) = ((MR_Box) (Digits_43));
      }
      Var_45 = mercury__integer__and_not_pairs_2_f_0(Var_11, Y_5);
      Var_10 = mercury__integer__decap_1_f_0(Var_45);
      Var_46 = mercury__integer__big_plus_2_f_0(Var_10, (MR_Word) (&mercury__integer_scalar_common_1[5]));
      S_48 = ((MR_Integer) ((MR_hl_field(0, Var_46, (MR_Integer) 0))));
      Digits0_49 = ((MR_Word) ((MR_hl_field(0, Var_46, (MR_Integer) 1))));
      Var_51 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_48);
      mercury__integer__neg_list_2_p_0(Digits0_49, &Digits_50);
      {
        Result_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Result_6, 0) = ((MR_Box) (Var_51));
        MR_hl_field(0, Result_6, 1) = ((MR_Box) (Digits_50));
      }
    }
  }
  else
  {
    MR_Integer Sign_52 = ((MR_Integer) ((MR_hl_field(0, Y_5, (MR_Integer) 0))));

    succeeded = (Sign_52 < (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Word Var_55;
      MR_Integer S_57;
      MR_Word Digits0_58;
      MR_Word Digits_59;
      MR_Integer Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Integer S_64;
      MR_Word Digits0_65;
      MR_Word Digits_66;
      MR_Integer Var_67;

      Var_55 = mercury__integer__big_plus_2_f_0(Y_5, (MR_Word) (&mercury__integer_scalar_common_1[5]));
      S_57 = ((MR_Integer) ((MR_hl_field(0, Var_55, (MR_Integer) 0))));
      Digits0_58 = ((MR_Word) ((MR_hl_field(0, Var_55, (MR_Integer) 1))));
      Var_60 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_57);
      mercury__integer__neg_list_2_p_0(Digits0_58, &Digits_59);
      {
        Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_13, 0) = ((MR_Box) (Var_60));
        MR_hl_field(0, Var_13, 1) = ((MR_Box) (Digits_59));
      }
      Var_61 = mercury__integer__and_not_pairs_2_f_0(Var_13, X_4);
      Var_12 = mercury__integer__decap_1_f_0(Var_61);
      Var_62 = mercury__integer__big_plus_2_f_0(Var_12, (MR_Word) (&mercury__integer_scalar_common_1[5]));
      S_64 = ((MR_Integer) ((MR_hl_field(0, Var_62, (MR_Integer) 0))));
      Digits0_65 = ((MR_Word) ((MR_hl_field(0, Var_62, (MR_Integer) 1))));
      Var_67 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_64);
      mercury__integer__neg_list_2_p_0(Digits0_65, &Digits_66);
      {
        Result_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Result_6, 0) = ((MR_Box) (Var_67));
        MR_hl_field(0, Result_6, 1) = ((MR_Box) (Digits_66));
      }
    }
    else
    {
      MR_Word Var_68;

      Var_68 = mercury__integer__or_pairs_2_f_0(X_4, Y_5);
      Result_6 = mercury__integer__decap_1_f_0(Var_68);
    }
  }
  return Result_6;
}

MR_Word MR_CALL 
mercury__integer__f_47_92_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_bool succeeded;
  MR_Word Result_6;
  MR_Integer Sign_12 = ((MR_Integer) ((MR_hl_field(0, X_4, (MR_Integer) 0))));

  succeeded = (Sign_12 < (MR_Integer) 0);
  if (succeeded)
  {
    MR_Integer Sign_15 = ((MR_Integer) ((MR_hl_field(0, Y_5, (MR_Integer) 0))));

    succeeded = (Sign_15 < (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_7;
      MR_Word Var_8;
      MR_Word Var_9;
      MR_Word Var_18;
      MR_Integer S_20;
      MR_Word Digits0_21;
      MR_Word Digits_22;
      MR_Integer Var_23;
      MR_Word Var_24;
      MR_Integer S_26;
      MR_Word Digits0_27;
      MR_Word Digits_28;
      MR_Integer Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Integer S_33;
      MR_Word Digits0_34;
      MR_Word Digits_35;
      MR_Integer Var_36;

      Var_18 = mercury__integer__big_plus_2_f_0(X_4, (MR_Word) (&mercury__integer_scalar_common_1[5]));
      S_20 = ((MR_Integer) ((MR_hl_field(0, Var_18, (MR_Integer) 0))));
      Digits0_21 = ((MR_Word) ((MR_hl_field(0, Var_18, (MR_Integer) 1))));
      Var_23 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_20);
      mercury__integer__neg_list_2_p_0(Digits0_21, &Digits_22);
      {
        Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_8, 0) = ((MR_Box) (Var_23));
        MR_hl_field(0, Var_8, 1) = ((MR_Box) (Digits_22));
      }
      Var_24 = mercury__integer__big_plus_2_f_0(Y_5, (MR_Word) (&mercury__integer_scalar_common_1[5]));
      S_26 = ((MR_Integer) ((MR_hl_field(0, Var_24, (MR_Integer) 0))));
      Digits0_27 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 1))));
      Var_29 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_26);
      mercury__integer__neg_list_2_p_0(Digits0_27, &Digits_28);
      {
        Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_9, 0) = ((MR_Box) (Var_29));
        MR_hl_field(0, Var_9, 1) = ((MR_Box) (Digits_28));
      }
      Var_30 = mercury__integer__or_pairs_2_f_0(Var_8, Var_9);
      Var_7 = mercury__integer__decap_1_f_0(Var_30);
      Var_31 = mercury__integer__big_plus_2_f_0(Var_7, (MR_Word) (&mercury__integer_scalar_common_1[5]));
      S_33 = ((MR_Integer) ((MR_hl_field(0, Var_31, (MR_Integer) 0))));
      Digits0_34 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 1))));
      Var_36 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_33);
      mercury__integer__neg_list_2_p_0(Digits0_34, &Digits_35);
      {
        Result_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Result_6, 0) = ((MR_Box) (Var_36));
        MR_hl_field(0, Result_6, 1) = ((MR_Box) (Digits_35));
      }
    }
    else
    {
      MR_Word Var_10;
      MR_Word Var_37;
      MR_Integer S_39;
      MR_Word Digits0_40;
      MR_Word Digits_41;
      MR_Integer Var_42;
      MR_Word Var_43;

      Var_37 = mercury__integer__big_plus_2_f_0(X_4, (MR_Word) (&mercury__integer_scalar_common_1[5]));
      S_39 = ((MR_Integer) ((MR_hl_field(0, Var_37, (MR_Integer) 0))));
      Digits0_40 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 1))));
      Var_42 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_39);
      mercury__integer__neg_list_2_p_0(Digits0_40, &Digits_41);
      {
        Var_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_42));
        MR_hl_field(0, Var_10, 1) = ((MR_Box) (Digits_41));
      }
      Var_43 = mercury__integer__and_not_pairs_2_f_0(Y_5, Var_10);
      Result_6 = mercury__integer__decap_1_f_0(Var_43);
    }
  }
  else
  {
    MR_Integer Sign_44 = ((MR_Integer) ((MR_hl_field(0, Y_5, (MR_Integer) 0))));

    succeeded = (Sign_44 < (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_11;
      MR_Word Var_47;
      MR_Integer S_49;
      MR_Word Digits0_50;
      MR_Word Digits_51;
      MR_Integer Var_52;
      MR_Word Var_53;

      Var_47 = mercury__integer__big_plus_2_f_0(Y_5, (MR_Word) (&mercury__integer_scalar_common_1[5]));
      S_49 = ((MR_Integer) ((MR_hl_field(0, Var_47, (MR_Integer) 0))));
      Digits0_50 = ((MR_Word) ((MR_hl_field(0, Var_47, (MR_Integer) 1))));
      Var_52 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_49);
      mercury__integer__neg_list_2_p_0(Digits0_50, &Digits_51);
      {
        Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_11, 0) = ((MR_Box) (Var_52));
        MR_hl_field(0, Var_11, 1) = ((MR_Box) (Digits_51));
      }
      Var_53 = mercury__integer__and_not_pairs_2_f_0(X_4, Var_11);
      Result_6 = mercury__integer__decap_1_f_0(Var_53);
    }
    else
    {
      MR_Word Var_54;

      Var_54 = mercury__integer__and_pairs_2_f_0(X_4, Y_5);
      Result_6 = mercury__integer__decap_1_f_0(Var_54);
    }
  }
  return Result_6;
}

static MR_Word MR_CALL 
mercury__integer__and_not_pairs_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Integer_8;
  MR_Integer L1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word D1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Integer L2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word D2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

  succeeded = (L1_4 == L2_6);
  if (succeeded)
  {
    MR_Word Var_16;

    Var_16 = mercury__integer__and_not_pairs_equal_2_f_0(D1_5, D2_7);
    {
      Integer_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Integer_8, 0) = ((MR_Box) (L1_4));
      MR_hl_field(0, Integer_8, 1) = ((MR_Box) (Var_16));
    }
  }
  else
  {
    MR_Word T2_10;

    succeeded = (L1_4 < L2_6);
    if (succeeded)
    {
      succeeded = (D2_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        T2_10 = ((MR_Word) ((MR_hl_field(1, D2_7, (MR_Integer) 1))));
    }
    if (succeeded)
    {
      MR_Word DsT_12;
      MR_Word Var_17;
      MR_Word Var_19;
      MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) L2_6 - (MR_Unsigned) 1);

      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_19, 0) = ((MR_Box) (Var_20));
        MR_hl_field(0, Var_19, 1) = ((MR_Box) (T2_10));
      }
      Var_17 = mercury__integer__and_not_pairs_2_f_0(HeadVar__1_1, Var_19);
      DsT_12 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
      {
        Integer_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Integer_8, 0) = ((MR_Box) (L1_4));
        MR_hl_field(0, Integer_8, 1) = ((MR_Box) (DsT_12));
      }
    }
    else
    {
      MR_Integer H1_13;
      MR_Word T1_14;

      succeeded = (L1_4 > L2_6);
      if (succeeded)
      {
        succeeded = (D1_5 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          H1_13 = ((MR_Integer) ((MR_hl_field(1, D1_5, (MR_Integer) 0))));
          T1_14 = ((MR_Word) ((MR_hl_field(1, D1_5, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) L1_4 - (MR_Unsigned) 1);
        MR_Word Var_27;
        MR_Word DsT_30;

        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_23, 0) = ((MR_Box) (Var_24));
          MR_hl_field(0, Var_23, 1) = ((MR_Box) (T1_14));
        }
        Var_22 = mercury__integer__and_not_pairs_2_f_0(Var_23, HeadVar__2_2);
        DsT_30 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 1))));
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (H1_13));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) (DsT_30));
        }
        {
          Integer_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Integer_8, 0) = ((MR_Box) (L1_4));
          MR_hl_field(0, Integer_8, 1) = ((MR_Box) (Var_27));
        }
      }
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140integer.and_not_pairs\'/2", (MR_String) "invalid integer");
    }
  }
  return Integer_8;
}

static MR_Word MR_CALL 
mercury__integer__and_not_pairs_equal_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer Y_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Ys_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_11;
      MR_Integer Var_12 = ~(Y_9);
      MR_Word * AddrSCCcallarg_13_16;

      Var_11 = (Var_15 & Var_12);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_11));
        MR_hl_field(1, HeadVar__3_3, 1) = NULL;
      }
      AddrSCCcallarg_13_16 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
      mercury__integer__LCMC__func__and_not_pairs_equal__1_3_p_0(Var_14, Ys_10, AddrSCCcallarg_13_16);
    }
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__integer__LCMC__func__and_not_pairs_equal__1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_17 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__3_17 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer Y_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Ys_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Integer Var_11;
        MR_Integer Var_12 = ~(Y_9);
        MR_Word * AddrSCCcallarg_13_16;
        MR_Word HeadVar__3_19;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word * next_value_of_AddrOfHeadVar__3_17;

        Var_11 = (Var_15 & Var_12);
        {
          HeadVar__3_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_19, 0) = ((MR_Box) (Var_11));
          MR_hl_field(1, HeadVar__3_19, 1) = NULL;
        }
        AddrSCCcallarg_13_16 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_19, (MR_Integer) 1)));
        *AddrOfHeadVar__3_17 = HeadVar__3_19;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_14;
        next_value_of_HeadVar__2_2 = Ys_10;
        next_value_of_AddrOfHeadVar__3_17 = AddrSCCcallarg_13_16;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_17 = next_value_of_AddrOfHeadVar__3_17;
        continue;
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__integer__or_pairs_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Integer_8;
  MR_Integer L1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word D1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Integer L2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word D2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

  succeeded = (L1_4 == L2_6);
  if (succeeded)
  {
    MR_Word Var_16;

    Var_16 = mercury__integer__or_pairs_equal_2_f_0(D1_5, D2_7);
    {
      Integer_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Integer_8, 0) = ((MR_Box) (L1_4));
      MR_hl_field(0, Integer_8, 1) = ((MR_Box) (Var_16));
    }
  }
  else
  {
    MR_Integer H2_9;
    MR_Word T2_10;

    succeeded = (L1_4 < L2_6);
    if (succeeded)
    {
      succeeded = (D2_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        H2_9 = ((MR_Integer) ((MR_hl_field(1, D2_7, (MR_Integer) 0))));
        T2_10 = ((MR_Word) ((MR_hl_field(1, D2_7, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word DsT_12;
      MR_Word Var_17;
      MR_Word Var_19;
      MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) L2_6 - (MR_Unsigned) 1);
      MR_Word Var_22;

      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_19, 0) = ((MR_Box) (Var_20));
        MR_hl_field(0, Var_19, 1) = ((MR_Box) (T2_10));
      }
      Var_17 = mercury__integer__or_pairs_2_f_0(HeadVar__1_1, Var_19);
      DsT_12 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
      {
        Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_22, 0) = ((MR_Box) (H2_9));
        MR_hl_field(1, Var_22, 1) = ((MR_Box) (DsT_12));
      }
      {
        Integer_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Integer_8, 0) = ((MR_Box) (L2_6));
        MR_hl_field(0, Integer_8, 1) = ((MR_Box) (Var_22));
      }
    }
    else
    {
      MR_Integer H1_13;
      MR_Word T1_14;

      succeeded = (L1_4 > L2_6);
      if (succeeded)
      {
        succeeded = (D1_5 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          H1_13 = ((MR_Integer) ((MR_hl_field(1, D1_5, (MR_Integer) 0))));
          T1_14 = ((MR_Word) ((MR_hl_field(1, D1_5, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) L1_4 - (MR_Unsigned) 1);
        MR_Word Var_28;
        MR_Word DsT_31;

        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_24, 0) = ((MR_Box) (Var_25));
          MR_hl_field(0, Var_24, 1) = ((MR_Box) (T1_14));
        }
        Var_23 = mercury__integer__or_pairs_2_f_0(Var_24, HeadVar__2_2);
        DsT_31 = ((MR_Word) ((MR_hl_field(0, Var_23, (MR_Integer) 1))));
        {
          Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_28, 0) = ((MR_Box) (H1_13));
          MR_hl_field(1, Var_28, 1) = ((MR_Box) (DsT_31));
        }
        {
          Integer_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Integer_8, 0) = ((MR_Box) (L1_4));
          MR_hl_field(0, Integer_8, 1) = ((MR_Box) (Var_28));
        }
      }
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140integer.or_pairs\'/2", (MR_String) "invalid integer");
    }
  }
  return Integer_8;
}

static MR_Word MR_CALL 
mercury__integer__or_pairs_equal_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer Y_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Ys_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_11 = (Var_14 | Y_9);
      MR_Word * AddrSCCcallarg_12_15;

      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_11));
        MR_hl_field(1, HeadVar__3_3, 1) = NULL;
      }
      AddrSCCcallarg_12_15 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
      mercury__integer__LCMC__func__or_pairs_equal__1_3_p_0(Var_13, Ys_10, AddrSCCcallarg_12_15);
    }
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__integer__LCMC__func__or_pairs_equal__1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_16 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__3_16 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer Y_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Ys_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Integer Var_11 = (Var_14 | Y_9);
        MR_Word * AddrSCCcallarg_12_15;
        MR_Word HeadVar__3_18;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word * next_value_of_AddrOfHeadVar__3_16;

        {
          HeadVar__3_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_18, 0) = ((MR_Box) (Var_11));
          MR_hl_field(1, HeadVar__3_18, 1) = NULL;
        }
        AddrSCCcallarg_12_15 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_18, (MR_Integer) 1)));
        *AddrOfHeadVar__3_16 = HeadVar__3_18;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_13;
        next_value_of_HeadVar__2_2 = Ys_10;
        next_value_of_AddrOfHeadVar__3_16 = AddrSCCcallarg_12_15;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_16 = next_value_of_AddrOfHeadVar__3_16;
        continue;
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__integer__and_pairs_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Integer_8;
  MR_Integer L1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word D1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Integer L2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word D2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

  succeeded = (L1_4 == L2_6);
  if (succeeded)
  {
    MR_Word Var_16;

    Var_16 = mercury__integer__and_pairs_equal_2_f_0(D1_5, D2_7);
    {
      Integer_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Integer_8, 0) = ((MR_Box) (L1_4));
      MR_hl_field(0, Integer_8, 1) = ((MR_Box) (Var_16));
    }
  }
  else
  {
    MR_Word T2_10;

    succeeded = (L1_4 < L2_6);
    if (succeeded)
    {
      succeeded = (D2_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        T2_10 = ((MR_Word) ((MR_hl_field(1, D2_7, (MR_Integer) 1))));
    }
    if (succeeded)
    {
      MR_Word DsT_12;
      MR_Word Var_17;
      MR_Word Var_19;
      MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) L2_6 - (MR_Unsigned) 1);

      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_19, 0) = ((MR_Box) (Var_20));
        MR_hl_field(0, Var_19, 1) = ((MR_Box) (T2_10));
      }
      Var_17 = mercury__integer__and_pairs_2_f_0(HeadVar__1_1, Var_19);
      DsT_12 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
      {
        Integer_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Integer_8, 0) = ((MR_Box) (L1_4));
        MR_hl_field(0, Integer_8, 1) = ((MR_Box) (DsT_12));
      }
    }
    else
    {
      MR_Word T1_14;

      succeeded = (L1_4 > L2_6);
      if (succeeded)
      {
        succeeded = (D1_5 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          T1_14 = ((MR_Word) ((MR_hl_field(1, D1_5, (MR_Integer) 1))));
      }
      if (succeeded)
      {
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) L1_4 - (MR_Unsigned) 1);
        MR_Word DsT_29;

        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_23, 0) = ((MR_Box) (Var_24));
          MR_hl_field(0, Var_23, 1) = ((MR_Box) (T1_14));
        }
        Var_22 = mercury__integer__and_pairs_2_f_0(Var_23, HeadVar__2_2);
        DsT_29 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 1))));
        {
          Integer_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Integer_8, 0) = ((MR_Box) (L2_6));
          MR_hl_field(0, Integer_8, 1) = ((MR_Box) (DsT_29));
        }
      }
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140integer.and_pairs\'/2", (MR_String) "invalid integer");
    }
  }
  return Integer_8;
}

static MR_Word MR_CALL 
mercury__integer__and_pairs_equal_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer Y_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Ys_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_11 = (Var_14 & Y_9);
      MR_Word * AddrSCCcallarg_12_15;

      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_11));
        MR_hl_field(1, HeadVar__3_3, 1) = NULL;
      }
      AddrSCCcallarg_12_15 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
      mercury__integer__LCMC__func__and_pairs_equal__1_3_p_0(Var_13, Ys_10, AddrSCCcallarg_12_15);
    }
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__integer__LCMC__func__and_pairs_equal__1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_16 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__3_16 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer Y_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Ys_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Integer Var_11 = (Var_14 & Y_9);
        MR_Word * AddrSCCcallarg_12_15;
        MR_Word HeadVar__3_18;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word * next_value_of_AddrOfHeadVar__3_16;

        {
          HeadVar__3_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_18, 0) = ((MR_Box) (Var_11));
          MR_hl_field(1, HeadVar__3_18, 1) = NULL;
        }
        AddrSCCcallarg_12_15 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_18, (MR_Integer) 1)));
        *AddrOfHeadVar__3_16 = HeadVar__3_18;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_13;
        next_value_of_HeadVar__2_2 = Ys_10;
        next_value_of_AddrOfHeadVar__3_16 = AddrSCCcallarg_12_15;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_16 = next_value_of_AddrOfHeadVar__3_16;
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__integer__f_92_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Integer S_6;
  MR_Word Digits0_7;
  MR_Word Digits_8;
  MR_Integer Var_9;

  Var_4 = mercury__integer__big_plus_2_f_0(X_3, (MR_Word) (&mercury__integer_scalar_common_1[5]));
  S_6 = ((MR_Integer) ((MR_hl_field(0, Var_4, (MR_Integer) 0))));
  Digits0_7 = ((MR_Word) ((MR_hl_field(0, Var_4, (MR_Integer) 1))));
  Var_9 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_6);
  mercury__integer__neg_list_2_p_0(Digits0_7, &Digits_8);
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_9));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Digits_8));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__integer__f_60_60_2_f_0(
  MR_Word tscc_proc_1_input_1_X_4,
  MR_Integer tscc_proc_1_input_2_I_5)
{
  MR_Word tscc_proc_2_input_1_X_4;
  MR_Integer tscc_proc_2_input_2_I_5;
  MR_Word tscc_output_1_Result_6;

  // The code for TSCC PROC 1: func integer.<</2-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: func integer.<</2-0
  ;
  // proc 2 in TSCC: func integer.>>/2-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word X_4 = tscc_proc_1_input_1_X_4;
    MR_Integer I_5 = tscc_proc_1_input_2_I_5;
    MR_Word Result_6;
    MR_bool succeeded = (I_5 > (MR_Integer) 0);

    if (succeeded)
      Result_6 = mercury__integer__big_left_shift_2_f_0(X_4, I_5);
    else
    {
      succeeded = (I_5 < (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) I_5);
        MR_Word next_value_of_tscc_proc_2_input_1_X_4 = X_4;
        MR_Integer next_value_of_tscc_proc_2_input_2_I_5 = Var_9;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_X_4 = next_value_of_tscc_proc_2_input_1_X_4;
        tscc_proc_2_input_2_I_5 = next_value_of_tscc_proc_2_input_2_I_5;
        goto top_of_proc_2;
      }
      else
        Result_6 = X_4;
    }
    tscc_output_1_Result_6 = Result_6;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word X_4 = tscc_proc_2_input_1_X_4;
    MR_Integer I_5 = tscc_proc_2_input_2_I_5;
    MR_Word Result_6;
    MR_bool succeeded = (I_5 < (MR_Integer) 0);

    if (succeeded)
    {
      MR_Integer Var_8 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) I_5);
      MR_Word next_value_of_tscc_proc_1_input_1_X_4 = X_4;
      MR_Integer next_value_of_tscc_proc_1_input_2_I_5 = Var_8;

      // direct tailcall eliminated
      ;
      tscc_proc_1_input_1_X_4 = next_value_of_tscc_proc_1_input_1_X_4;
      tscc_proc_1_input_2_I_5 = next_value_of_tscc_proc_1_input_2_I_5;
      goto top_of_proc_1;
    }
    else
    {
      succeeded = (I_5 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer Var_12 = ((MR_Integer) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
        MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 1))));

        succeeded = (Var_12 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          Result_6 = X_4;
        else
        {
          MR_Integer Sign_14 = ((MR_Integer) ((MR_hl_field(0, X_4, (MR_Integer) 0))));

          succeeded = (Sign_14 < (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word Var_10;
            MR_Word Var_17;
            MR_Integer S_19;
            MR_Word Digits0_20;
            MR_Integer Len_23;
            MR_Word Digits_24;
            MR_Integer Div_25;
            MR_Word Var_39;
            MR_Integer S_41;
            MR_Word Digits0_42;
            MR_Word Digits_43;
            MR_Integer Var_44;

            Var_17 = mercury__integer__big_plus_2_f_0(X_4, (MR_Word) (&mercury__integer_scalar_common_1[5]));
            S_19 = ((MR_Integer) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
            Digits0_20 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
            Len_23 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_19);
            mercury__integer__neg_list_2_p_0(Digits0_20, &Digits_24);
            Div_25 = mercury__int__div_2_f_0(I_5, (MR_Integer) 14);
            succeeded = (Div_25 < Len_23);
            if (succeeded)
            {
              MR_Integer Mod_26;
              MR_Word Var_29;
              MR_Integer Var_30;
              MR_Word Var_32;
              MR_Integer Var_33;
              MR_Integer Var_35;
              MR_Integer Var_36;

              Var_36 = mercury__int__div_2_f_0(I_5, (MR_Integer) 14);
              Var_35 = (MR_Integer) ((MR_Unsigned) Var_36 * (MR_Unsigned) 14);
              Mod_26 = (MR_Integer) ((MR_Unsigned) I_5 - (MR_Unsigned) Var_35);
              Var_30 = (MR_Integer) ((MR_Unsigned) 14 - (MR_Unsigned) Mod_26);
              Var_33 = (MR_Integer) ((MR_Unsigned) Len_23 - (MR_Unsigned) Div_25);
              {
                Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_32, 0) = ((MR_Box) (Var_33));
                MR_hl_field(0, Var_32, 1) = ((MR_Box) (Digits_24));
              }
              Var_29 = mercury__integer__rightshift_4_f_0(Mod_26, Var_30, Var_32, (MR_Integer) 0);
              Var_10 = mercury__integer__decap_1_f_0(Var_29);
            }
            else
              Var_10 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
            Var_39 = mercury__integer__big_plus_2_f_0(Var_10, (MR_Word) (&mercury__integer_scalar_common_1[5]));
            S_41 = ((MR_Integer) ((MR_hl_field(0, Var_39, (MR_Integer) 0))));
            Digits0_42 = ((MR_Word) ((MR_hl_field(0, Var_39, (MR_Integer) 1))));
            Var_44 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_41);
            mercury__integer__neg_list_2_p_0(Digits0_42, &Digits_43);
            {
              Result_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Result_6, 0) = ((MR_Box) (Var_44));
              MR_hl_field(0, Result_6, 1) = ((MR_Box) (Digits_43));
            }
          }
          else
          {
            MR_Integer Len_45 = ((MR_Integer) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
            MR_Word Digits_46 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 1))));
            MR_Integer Div_47;

            Div_47 = mercury__int__div_2_f_0(I_5, (MR_Integer) 14);
            succeeded = (Div_47 < Len_45);
            if (succeeded)
            {
              MR_Integer Mod_48;
              MR_Word Var_51;
              MR_Integer Var_52;
              MR_Word Var_54;
              MR_Integer Var_55;
              MR_Integer Var_57;
              MR_Integer Var_58;

              Var_58 = mercury__int__div_2_f_0(I_5, (MR_Integer) 14);
              Var_57 = (MR_Integer) ((MR_Unsigned) Var_58 * (MR_Unsigned) 14);
              Mod_48 = (MR_Integer) ((MR_Unsigned) I_5 - (MR_Unsigned) Var_57);
              Var_52 = (MR_Integer) ((MR_Unsigned) 14 - (MR_Unsigned) Mod_48);
              Var_55 = (MR_Integer) ((MR_Unsigned) Len_45 - (MR_Unsigned) Div_47);
              {
                Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_54, 0) = ((MR_Box) (Var_55));
                MR_hl_field(0, Var_54, 1) = ((MR_Box) (Digits_46));
              }
              Var_51 = mercury__integer__rightshift_4_f_0(Mod_48, Var_52, Var_54, (MR_Integer) 0);
              Result_6 = mercury__integer__decap_1_f_0(Var_51);
            }
            else
              Result_6 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
          }
        }
      }
      else
        Result_6 = X_4;
    }
    tscc_output_1_Result_6 = Result_6;
    goto tscc_end;
  }
tscc_end:;
  return tscc_output_1_Result_6;
}

MR_Word MR_CALL 
mercury__integer__f_62_62_2_f_0(
  MR_Word tscc_proc_2_input_1_X_4,
  MR_Integer tscc_proc_2_input_2_I_5)
{
  MR_Word tscc_proc_1_input_1_X_4;
  MR_Integer tscc_proc_1_input_2_I_5;
  MR_Word tscc_output_1_Result_6;

  // The code for TSCC PROC 2: func integer.>>/2-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: func integer.<</2-0
  ;
  // proc 2 in TSCC: func integer.>>/2-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word X_4 = tscc_proc_1_input_1_X_4;
    MR_Integer I_5 = tscc_proc_1_input_2_I_5;
    MR_Word Result_6;
    MR_bool succeeded = (I_5 > (MR_Integer) 0);

    if (succeeded)
      Result_6 = mercury__integer__big_left_shift_2_f_0(X_4, I_5);
    else
    {
      succeeded = (I_5 < (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) I_5);
        MR_Word next_value_of_tscc_proc_2_input_1_X_4 = X_4;
        MR_Integer next_value_of_tscc_proc_2_input_2_I_5 = Var_9;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_X_4 = next_value_of_tscc_proc_2_input_1_X_4;
        tscc_proc_2_input_2_I_5 = next_value_of_tscc_proc_2_input_2_I_5;
        goto top_of_proc_2;
      }
      else
        Result_6 = X_4;
    }
    tscc_output_1_Result_6 = Result_6;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word X_4 = tscc_proc_2_input_1_X_4;
    MR_Integer I_5 = tscc_proc_2_input_2_I_5;
    MR_Word Result_6;
    MR_bool succeeded = (I_5 < (MR_Integer) 0);

    if (succeeded)
    {
      MR_Integer Var_8 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) I_5);
      MR_Word next_value_of_tscc_proc_1_input_1_X_4 = X_4;
      MR_Integer next_value_of_tscc_proc_1_input_2_I_5 = Var_8;

      // direct tailcall eliminated
      ;
      tscc_proc_1_input_1_X_4 = next_value_of_tscc_proc_1_input_1_X_4;
      tscc_proc_1_input_2_I_5 = next_value_of_tscc_proc_1_input_2_I_5;
      goto top_of_proc_1;
    }
    else
    {
      succeeded = (I_5 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer Var_12 = ((MR_Integer) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
        MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 1))));

        succeeded = (Var_12 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          Result_6 = X_4;
        else
        {
          MR_Integer Sign_14 = ((MR_Integer) ((MR_hl_field(0, X_4, (MR_Integer) 0))));

          succeeded = (Sign_14 < (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word Var_10;
            MR_Word Var_17;
            MR_Integer S_19;
            MR_Word Digits0_20;
            MR_Integer Len_23;
            MR_Word Digits_24;
            MR_Integer Div_25;
            MR_Word Var_39;
            MR_Integer S_41;
            MR_Word Digits0_42;
            MR_Word Digits_43;
            MR_Integer Var_44;

            Var_17 = mercury__integer__big_plus_2_f_0(X_4, (MR_Word) (&mercury__integer_scalar_common_1[5]));
            S_19 = ((MR_Integer) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
            Digits0_20 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
            Len_23 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_19);
            mercury__integer__neg_list_2_p_0(Digits0_20, &Digits_24);
            Div_25 = mercury__int__div_2_f_0(I_5, (MR_Integer) 14);
            succeeded = (Div_25 < Len_23);
            if (succeeded)
            {
              MR_Integer Mod_26;
              MR_Word Var_29;
              MR_Integer Var_30;
              MR_Word Var_32;
              MR_Integer Var_33;
              MR_Integer Var_35;
              MR_Integer Var_36;

              Var_36 = mercury__int__div_2_f_0(I_5, (MR_Integer) 14);
              Var_35 = (MR_Integer) ((MR_Unsigned) Var_36 * (MR_Unsigned) 14);
              Mod_26 = (MR_Integer) ((MR_Unsigned) I_5 - (MR_Unsigned) Var_35);
              Var_30 = (MR_Integer) ((MR_Unsigned) 14 - (MR_Unsigned) Mod_26);
              Var_33 = (MR_Integer) ((MR_Unsigned) Len_23 - (MR_Unsigned) Div_25);
              {
                Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_32, 0) = ((MR_Box) (Var_33));
                MR_hl_field(0, Var_32, 1) = ((MR_Box) (Digits_24));
              }
              Var_29 = mercury__integer__rightshift_4_f_0(Mod_26, Var_30, Var_32, (MR_Integer) 0);
              Var_10 = mercury__integer__decap_1_f_0(Var_29);
            }
            else
              Var_10 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
            Var_39 = mercury__integer__big_plus_2_f_0(Var_10, (MR_Word) (&mercury__integer_scalar_common_1[5]));
            S_41 = ((MR_Integer) ((MR_hl_field(0, Var_39, (MR_Integer) 0))));
            Digits0_42 = ((MR_Word) ((MR_hl_field(0, Var_39, (MR_Integer) 1))));
            Var_44 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_41);
            mercury__integer__neg_list_2_p_0(Digits0_42, &Digits_43);
            {
              Result_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Result_6, 0) = ((MR_Box) (Var_44));
              MR_hl_field(0, Result_6, 1) = ((MR_Box) (Digits_43));
            }
          }
          else
          {
            MR_Integer Len_45 = ((MR_Integer) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
            MR_Word Digits_46 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 1))));
            MR_Integer Div_47;

            Div_47 = mercury__int__div_2_f_0(I_5, (MR_Integer) 14);
            succeeded = (Div_47 < Len_45);
            if (succeeded)
            {
              MR_Integer Mod_48;
              MR_Word Var_51;
              MR_Integer Var_52;
              MR_Word Var_54;
              MR_Integer Var_55;
              MR_Integer Var_57;
              MR_Integer Var_58;

              Var_58 = mercury__int__div_2_f_0(I_5, (MR_Integer) 14);
              Var_57 = (MR_Integer) ((MR_Unsigned) Var_58 * (MR_Unsigned) 14);
              Mod_48 = (MR_Integer) ((MR_Unsigned) I_5 - (MR_Unsigned) Var_57);
              Var_52 = (MR_Integer) ((MR_Unsigned) 14 - (MR_Unsigned) Mod_48);
              Var_55 = (MR_Integer) ((MR_Unsigned) Len_45 - (MR_Unsigned) Div_47);
              {
                Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_54, 0) = ((MR_Box) (Var_55));
                MR_hl_field(0, Var_54, 1) = ((MR_Box) (Digits_46));
              }
              Var_51 = mercury__integer__rightshift_4_f_0(Mod_48, Var_52, Var_54, (MR_Integer) 0);
              Result_6 = mercury__integer__decap_1_f_0(Var_51);
            }
            else
              Result_6 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
          }
        }
      }
      else
        Result_6 = X_4;
    }
    tscc_output_1_Result_6 = Result_6;
    goto tscc_end;
  }
tscc_end:;
  return tscc_output_1_Result_6;
}

static MR_Word MR_CALL 
mercury__integer__rightshift_4_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word HeadVar__5_5;
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

  if ((Var_35 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__5_5 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
  else
  {
    MR_Integer H_14 = ((MR_Integer) ((MR_hl_field(1, Var_35, (MR_Integer) 0))));
    MR_Word T_15 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 1))));

    succeeded = (Var_36 <= (MR_Integer) 0);
    if (succeeded)
      HeadVar__5_5 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
    else
    {
      MR_Integer NewH_18;
      MR_Integer NewCarry_19;
      MR_Integer TailLen_20;
      MR_Word NewTail_21;
      MR_Integer Var_24;
      MR_Integer Var_25;
      MR_Integer Var_26;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Integer Var_30;
      MR_Integer Var_32;
      MR_Word Var_34;

      Var_24 = mercury__int__f_62_62_2_f_0(H_14, HeadVar__1_1);
      NewH_18 = (HeadVar__4_4 | Var_24);
      Var_26 = mercury__int__f_62_62_2_f_0((MR_Integer) 16383, HeadVar__2_2);
      Var_25 = (H_14 & Var_26);
      NewCarry_19 = mercury__int__f_60_60_2_f_0(Var_25, HeadVar__2_2);
      Var_30 = (MR_Integer) ((MR_Unsigned) Var_36 - (MR_Unsigned) 1);
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(0, Var_29, 1) = ((MR_Box) (T_15));
      }
      Var_28 = mercury__integer__rightshift_4_f_0(HeadVar__1_1, HeadVar__2_2, Var_29, NewCarry_19);
      TailLen_20 = ((MR_Integer) ((MR_hl_field(0, Var_28, (MR_Integer) 0))));
      NewTail_21 = ((MR_Word) ((MR_hl_field(0, Var_28, (MR_Integer) 1))));
      Var_32 = (MR_Integer) ((MR_Unsigned) TailLen_20 + (MR_Unsigned) 1);
      {
        Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_34, 0) = ((MR_Box) (NewH_18));
        MR_hl_field(1, Var_34, 1) = ((MR_Box) (NewTail_21));
      }
      {
        HeadVar__5_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__5_5, 0) = ((MR_Box) (Var_32));
        MR_hl_field(0, HeadVar__5_5, 1) = ((MR_Box) (Var_34));
      }
    }
  }
  return HeadVar__5_5;
}

MR_Word MR_CALL 
mercury__integer__pow_2_f_0(
  MR_Word A_4,
  MR_Word N_5)
{
  MR_bool succeeded;
  MR_Word P_6;
  MR_Integer Sign_10 = ((MR_Integer) ((MR_hl_field(0, N_5, (MR_Integer) 0))));

  succeeded = (Sign_10 < (MR_Integer) 0);
  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "integer.pow: negative exponent")))));
  else
    P_6 = mercury__integer__big_pow_2_f_0(A_4, N_5);
  return P_6;
}

MR_Word MR_CALL 
mercury__integer__big_pow_2_f_0(
  MR_Word A_4,
  MR_Word N_5)
{
  MR_bool succeeded;
  MR_Word Result_6;

  succeeded = mercury__integer____Unify____integer_0_0(N_5, (MR_Word) (&mercury__integer_scalar_common_1[3]));
  if (succeeded)
    Result_6 = (MR_Word) (&mercury__integer_scalar_common_1[5]);
  else
  {
    succeeded = mercury__integer____Unify____integer_0_0(N_5, (MR_Word) (&mercury__integer_scalar_common_1[5]));
    if (succeeded)
      Result_6 = A_4;
    else
    {
      succeeded = mercury__integer____Unify____integer_0_0(A_4, (MR_Word) (&mercury__integer_scalar_common_1[5]));
      if (succeeded)
        Result_6 = (MR_Word) (&mercury__integer_scalar_common_1[5]);
      else
      {
        succeeded = mercury__integer____Unify____integer_0_0(A_4, (MR_Word) (&mercury__integer_scalar_common_1[3]));
        if (succeeded)
          Result_6 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
        else
        {
          MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, N_5, (MR_Integer) 1))));

          succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            Result_6 = mercury__integer__big_pow_sqmul_2_f_0(A_4, N_5);
          else
            Result_6 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
        }
      }
    }
  }
  return Result_6;
}

static MR_Word MR_CALL 
mercury__integer__big_pow_sqmul_2_f_0(
  MR_Word A_4,
  MR_Word N_5)
{
  MR_bool succeeded;
  MR_Word Result_6;

  succeeded = mercury__integer____Unify____integer_0_0(N_5, (MR_Word) (&mercury__integer_scalar_common_1[3]));
  if (succeeded)
    Result_6 = (MR_Word) (&mercury__integer_scalar_common_1[5]);
  else
  {
    succeeded = mercury__integer____Unify____integer_0_0(N_5, (MR_Word) (&mercury__integer_scalar_common_1[5]));
    if (succeeded)
      Result_6 = A_4;
    else
    {
      MR_Word Var_9;

      Var_9 = mercury__integer__big_mod_2_f_0(N_5, (MR_Word) (&mercury__integer_scalar_common_1[7]));
      succeeded = mercury__integer____Unify____integer_0_0(Var_9, (MR_Word) (&mercury__integer_scalar_common_1[3]));
      if (succeeded)
      {
        MR_Word HalfResult_7;
        MR_Word Var_11;
        MR_Word _Rem_23;

        mercury__integer__big_quot_rem_4_p_0(N_5, (MR_Word) (&mercury__integer_scalar_common_1[7]), &Var_11, &_Rem_23);
        HalfResult_7 = mercury__integer__big_pow_sqmul_2_f_0(A_4, Var_11);
        Result_6 = mercury__integer__big_mul_2_f_0(HalfResult_7, HalfResult_7);
      }
      else
      {
        MR_Word SubResult_8;
        MR_Word Var_14;
        MR_Word Var_24;
        MR_Integer S_25 = ((MR_Integer) ((MR_hl_field(0, (MR_Word) (&mercury__integer_scalar_common_1[5]), (MR_Integer) 0))));
        MR_Word Digits0_26 = ((MR_Word) ((MR_hl_field(0, (MR_Word) (&mercury__integer_scalar_common_1[5]), (MR_Integer) 1))));
        MR_Word Digits_27;
        MR_Integer Var_28 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_25);

        mercury__integer__neg_list_2_p_0(Digits0_26, &Digits_27);
        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_24, 0) = ((MR_Box) (Var_28));
          MR_hl_field(0, Var_24, 1) = ((MR_Box) (Digits_27));
        }
        Var_14 = mercury__integer__big_plus_2_f_0(N_5, Var_24);
        SubResult_8 = mercury__integer__big_pow_sqmul_2_f_0(A_4, Var_14);
        Result_6 = mercury__integer__big_mul_2_f_0(A_4, SubResult_8);
      }
    }
  }
  return Result_6;
}

MR_bool MR_CALL 
mercury__integer____Unify____integer_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&mercury__integer_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__integer__divide_with_rem_4_p_0(
  MR_Word X_5,
  MR_Word Y_6,
  MR_Word * Quotient_7,
  MR_Word * Remainder_8)
{
  mercury__integer__big_quot_rem_4_p_0(X_5, Y_6, Quotient_7, Remainder_8);
}

MR_Word MR_CALL 
mercury__integer__rem_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_Word HeadVar__3_3;
  MR_Word _Quot_6;

  mercury__integer__big_quot_rem_4_p_0(X_4, Y_5, &_Quot_6, &HeadVar__3_3);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__integer__mod_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__integer__big_mod_2_f_0(X_4, Y_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__integer__big_mod_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_bool succeeded;
  MR_Word Mod_6;
  MR_Word Rem_8;
  MR_Word _Trunc_7;
  MR_Integer Var_9;
  MR_Integer Var_11;
  MR_Integer Var_12;
  MR_Integer Sign_13;
  MR_Integer Sign_15;

  mercury__integer__big_quot_rem_4_p_0(X_4, Y_5, &_Trunc_7, &Rem_8);
  Sign_13 = ((MR_Integer) ((MR_hl_field(0, Y_5, (MR_Integer) 0))));
  Var_11 = mercury__integer__signum_1_f_0(Sign_13);
  Sign_15 = ((MR_Integer) ((MR_hl_field(0, Rem_8, (MR_Integer) 0))));
  Var_12 = mercury__integer__signum_1_f_0(Sign_15);
  Var_9 = (MR_Integer) ((MR_Unsigned) Var_11 * (MR_Unsigned) Var_12);
  succeeded = (Var_9 < (MR_Integer) 0);
  if (succeeded)
    Mod_6 = mercury__integer__big_plus_2_f_0(Rem_8, Y_5);
  else
    Mod_6 = Rem_8;
  return Mod_6;
}

MR_Word MR_CALL 
mercury__integer__f_47_47_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_Word HeadVar__3_3;
  MR_Word _Rem_6;

  mercury__integer__big_quot_rem_4_p_0(X_4, Y_5, &HeadVar__3_3, &_Rem_6);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__integer__div_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__integer__big_div_2_f_0(X_4, Y_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__integer__big_div_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_bool succeeded;
  MR_Word Div_6;
  MR_Word Trunc_7;
  MR_Word Rem_8;
  MR_Integer Var_9;
  MR_Integer Var_11;
  MR_Integer Var_12;
  MR_Integer Sign_14;
  MR_Integer Sign_16;

  mercury__integer__big_quot_rem_4_p_0(X_4, Y_5, &Trunc_7, &Rem_8);
  Sign_14 = ((MR_Integer) ((MR_hl_field(0, Y_5, (MR_Integer) 0))));
  Var_11 = mercury__integer__signum_1_f_0(Sign_14);
  Sign_16 = ((MR_Integer) ((MR_hl_field(0, Rem_8, (MR_Integer) 0))));
  Var_12 = mercury__integer__signum_1_f_0(Sign_16);
  Var_9 = (MR_Integer) ((MR_Unsigned) Var_11 * (MR_Unsigned) Var_12);
  succeeded = (Var_9 < (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Var_18;
    MR_Integer S_19 = ((MR_Integer) ((MR_hl_field(0, (MR_Word) (&mercury__integer_scalar_common_1[5]), (MR_Integer) 0))));
    MR_Word Digits0_20 = ((MR_Word) ((MR_hl_field(0, (MR_Word) (&mercury__integer_scalar_common_1[5]), (MR_Integer) 1))));
    MR_Word Digits_21;
    MR_Integer Var_22 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_19);

    mercury__integer__neg_list_2_p_0(Digits0_20, &Digits_21);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (Var_22));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) (Digits_21));
    }
    Div_6 = mercury__integer__big_plus_2_f_0(Trunc_7, Var_18);
  }
  else
    Div_6 = Trunc_7;
  return Div_6;
}

void MR_CALL 
mercury__integer__big_quot_rem_4_p_0(
  MR_Word X_5,
  MR_Word Y_6,
  MR_Word * Quot_7,
  MR_Word * Rem_8)
{
  MR_bool succeeded;
  MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(0, Y_6, (MR_Integer) 0))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Y_6, (MR_Integer) 1))));

  succeeded = (Var_21 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "integer.big_quot_rem: division by zero")))));
      return;
    }
  else
  {
    MR_Integer Var_23 = ((MR_Integer) ((MR_hl_field(0, X_5, (MR_Integer) 0))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 1))));

    succeeded = (Var_23 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *Quot_7 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
      *Rem_8 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
    }
    else
    {
      MR_Integer SignX_9 = ((MR_Integer) ((MR_hl_field(0, X_5, (MR_Integer) 0))));
      MR_Integer SignY_11 = ((MR_Integer) ((MR_hl_field(0, Y_6, (MR_Integer) 0))));
      MR_Word Quot0_13;
      MR_Word Rem0_14;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Integer Var_19;

      Var_17 = mercury__integer__big_abs_1_f_0(X_5);
      Var_18 = mercury__integer__big_abs_1_f_0(Y_6);
      mercury__integer__quot_rem_4_p_0(Var_17, Var_18, &Quot0_13, &Rem0_14);
      Var_19 = (MR_Integer) ((MR_Unsigned) SignX_9 * (MR_Unsigned) SignY_11);
      *Quot_7 = mercury__integer__big_sign_2_f_0(Var_19, Quot0_13);
      *Rem_8 = mercury__integer__big_sign_2_f_0(SignX_9, Rem0_14);
    }
  }
}

static void MR_CALL 
mercury__integer__quot_rem_4_p_0(
  MR_Word U_5,
  MR_Word V_6,
  MR_Word * Quot_7,
  MR_Word * Rem_8)
{
  MR_bool succeeded;
  MR_Integer UI_10;
  MR_Integer VI_12;
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, U_5, (MR_Integer) 1))));
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;

  succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    UI_10 = ((MR_Integer) ((MR_hl_field(1, Var_17, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 1))));
    succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(0, V_6, (MR_Integer) 1))));
      succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        VI_12 = ((MR_Integer) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
        Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 1))));
        succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (succeeded)
  {
    MR_Integer Var_21;
    MR_Integer Var_22;

{
#define MR_PROC_LABEL mercury__integer__quot_rem_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = (VI_12 == (MR_Integer) 0);
    if (succeeded)
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int.\'//\': division by zero")))));
        return;
      }
    else
      Var_21 = (UI_10 / VI_12);
    succeeded = (Var_21 == (MR_Integer) 0);
    if (succeeded)
      *Quot_7 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
    else
    {
      succeeded = (Var_21 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_36;

        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_21));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Quot_7 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_36));
        }
      }
      else
      {
        MR_Word Var_39;

        {
          Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_21));
          MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Quot_7 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Integer) -1));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_39));
        }
      }
    }
{
#define MR_PROC_LABEL mercury__integer__quot_rem_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = (VI_12 == (MR_Integer) 0);
    if (succeeded)
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int.rem: division by zero")))));
        return;
      }
    else
      Var_22 = (UI_10 % VI_12);
    succeeded = (Var_22 == (MR_Integer) 0);
    if (succeeded)
      *Rem_8 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
    else
    {
      succeeded = (Var_22 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_48;

        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_22));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Rem_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_48));
        }
      }
      else
      {
        MR_Word Var_51;

        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_22));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Rem_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Integer) -1));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_51));
        }
      }
    }
  }
  else
  {
    MR_Integer V0_13;
    MR_Word QuotZeros_15;
    MR_Word Digits_56 = ((MR_Word) ((MR_hl_field(0, V_6, (MR_Integer) 1))));

    if ((Digits_56 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "function \140integer.det_first\'/1", (MR_String) "empty list");
        return;
      }
    else
      V0_13 = ((MR_Integer) ((MR_hl_field(1, Digits_56, (MR_Integer) 0))));
    succeeded = (V0_13 < (MR_Integer) 8192);
    if (succeeded)
    {
      MR_Integer M_14;
      MR_Word R_16;
      MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) V0_13 + (MR_Unsigned) 1);
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Integer Len_62;
      MR_Word Digits0_63;
      MR_Integer Mod_64;
      MR_Word Digits_65;
      MR_Integer Len_69;
      MR_Word Digits0_70;
      MR_Integer Mod_71;
      MR_Word Digits_72;
      MR_Word Var_84;

      M_14 = mercury__int__div_2_f_0((MR_Integer) 16384, Var_25);
      Len_62 = ((MR_Integer) ((MR_hl_field(0, U_5, (MR_Integer) 0))));
      Digits0_63 = ((MR_Word) ((MR_hl_field(0, U_5, (MR_Integer) 1))));
      mercury__integer__mul_by_digit_2_4_p_0(M_14, &Mod_64, Digits0_63, &Digits_65);
      succeeded = (Mod_64 == (MR_Integer) 0);
      if (succeeded)
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (Len_62));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) (Digits_65));
        }
      else
      {
        MR_Integer Var_66 = (MR_Integer) ((MR_Unsigned) Len_62 + (MR_Unsigned) 1);
        MR_Word Var_68;

        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (Mod_64));
          MR_hl_field(1, Var_68, 1) = ((MR_Box) (Digits_65));
        }
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (Var_66));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) (Var_68));
        }
      }
      Len_69 = ((MR_Integer) ((MR_hl_field(0, V_6, (MR_Integer) 0))));
      Digits0_70 = ((MR_Word) ((MR_hl_field(0, V_6, (MR_Integer) 1))));
      mercury__integer__mul_by_digit_2_4_p_0(M_14, &Mod_71, Digits0_70, &Digits_72);
      succeeded = (Mod_71 == (MR_Integer) 0);
      if (succeeded)
        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_29, 0) = ((MR_Box) (Len_69));
          MR_hl_field(0, Var_29, 1) = ((MR_Box) (Digits_72));
        }
      else
      {
        MR_Integer Var_73 = (MR_Integer) ((MR_Unsigned) Len_69 + (MR_Unsigned) 1);
        MR_Word Var_75;

        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = ((MR_Box) (Mod_71));
          MR_hl_field(1, Var_75, 1) = ((MR_Box) (Digits_72));
        }
        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_29, 0) = ((MR_Box) (Var_73));
          MR_hl_field(0, Var_29, 1) = ((MR_Box) (Var_75));
        }
      }
      mercury__integer__quot_rem_2_5_p_0((MR_Word) (&mercury__integer_scalar_common_1[3]), Var_28, Var_29, &QuotZeros_15, &R_16);
      Var_84 = ((MR_Word) ((MR_hl_field(0, R_16, (MR_Integer) 1))));
      if ((Var_84 == (MR_Word) ((MR_Unsigned) 0U)))
        *Rem_8 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
      else
      {
        MR_Integer X_81 = ((MR_Integer) ((MR_hl_field(1, Var_84, (MR_Integer) 0))));
        MR_Word Xs_82 = ((MR_Word) ((MR_hl_field(1, Var_84, (MR_Integer) 1))));

        *Rem_8 = mercury__integer__div_by_digit_1_3_f_0(X_81, Xs_82, M_14);
      }
    }
    else
      mercury__integer__quot_rem_2_5_p_0((MR_Word) (&mercury__integer_scalar_common_1[3]), U_5, V_6, &QuotZeros_15, Rem_8);
    *Quot_7 = mercury__integer__decap_1_f_0(QuotZeros_15);
  }
}

static MR_Word MR_CALL 
mercury__integer__div_by_digit_1_3_f_0(
  MR_Integer X_1,
  MR_Word HeadVar__2_2,
  MR_Integer D_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Integer_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer Q_8;

      Q_8 = mercury__int__div_2_f_0(X_1, D_3);
      succeeded = (Q_8 == (MR_Integer) 0);
      if (succeeded)
        Integer_4 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
      else
      {
        MR_Word Var_10;

        {
          Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_10, 0) = ((MR_Box) (Q_8));
          MR_hl_field(1, Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Integer_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Integer_4, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Integer_4, 1) = ((MR_Box) (Var_10));
        }
      }
    }
    else
    {
      MR_Integer H_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word T_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Q_17;

      Q_17 = mercury__int__div_2_f_0(X_1, D_3);
      succeeded = (Q_17 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer Var_20;
        MR_Integer Var_21;
        MR_Integer Var_22;
        MR_Integer next_value_of_X_1;
        MR_Word next_value_of_HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__integer__div_by_digit_1_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          succeeded = (D_3 == (MR_Integer) 0);
        if (succeeded)
          mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int.rem: division by zero")))));
        else
          Var_22 = (X_1 % D_3);
        Var_21 = (MR_Integer) ((MR_Unsigned) Var_22 * (MR_Unsigned) 16384);
        Var_20 = (MR_Integer) ((MR_Unsigned) Var_21 + (MR_Unsigned) H_13);
        // direct tailcall eliminated
        ;
        next_value_of_X_1 = Var_20;
        next_value_of_HeadVar__2_2 = T_14;
        X_1 = next_value_of_X_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
      else
      {
        MR_Integer L_18;
        MR_Word Ds_19;
        MR_Word Var_24;
        MR_Integer Var_25;
        MR_Integer Var_26;
        MR_Integer Var_27;
        MR_Integer Var_29;
        MR_Word Var_31;

{
#define MR_PROC_LABEL mercury__integer__div_by_digit_1_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          succeeded = (D_3 == (MR_Integer) 0);
        if (succeeded)
          mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int.rem: division by zero")))));
        else
          Var_27 = (X_1 % D_3);
        Var_26 = (MR_Integer) ((MR_Unsigned) Var_27 * (MR_Unsigned) 16384);
        Var_25 = (MR_Integer) ((MR_Unsigned) Var_26 + (MR_Unsigned) H_13);
        Var_24 = mercury__integer__div_by_digit_2_3_f_0(Var_25, T_14, D_3);
        L_18 = ((MR_Integer) ((MR_hl_field(0, Var_24, (MR_Integer) 0))));
        Ds_19 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 1))));
        Var_29 = (MR_Integer) ((MR_Unsigned) L_18 + (MR_Unsigned) 1);
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (Q_17));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) (Ds_19));
        }
        {
          Integer_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Integer_4, 0) = ((MR_Box) (Var_29));
          MR_hl_field(0, Integer_4, 1) = ((MR_Box) (Var_31));
        }
      }
    }
    return Integer_4;
    break;
  }
}

static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_3_f_0(
  MR_Integer X_1,
  MR_Word HeadVar__2_2,
  MR_Integer D_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_8;
    MR_Integer Var_9;

    Var_9 = mercury__int__div_2_f_0(X_1, D_3);
    {
      Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, HeadVar__4_4, 1) = ((MR_Box) (Var_8));
    }
  }
  else
  {
    MR_Integer H_12 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word T_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer Len_15;
    MR_Word Tail_16;
    MR_Integer Var_17;
    MR_Word Var_19;
    MR_Integer Var_20;
    MR_Word Var_21;
    MR_Integer Var_22;
    MR_Integer Var_23;
    MR_Integer Var_24;

    Var_20 = mercury__int__div_2_f_0(X_1, D_3);
{
#define MR_PROC_LABEL mercury__integer__div_by_digit_2_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = (D_3 == (MR_Integer) 0);
    if (succeeded)
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int.rem: division by zero")))));
    else
      Var_24 = (X_1 % D_3);
    Var_23 = (MR_Integer) ((MR_Unsigned) Var_24 * (MR_Unsigned) 16384);
    Var_22 = (MR_Integer) ((MR_Unsigned) Var_23 + (MR_Unsigned) H_12);
    Var_21 = mercury__integer__div_by_digit_2_3_f_0(Var_22, T_13, D_3);
    Len_15 = ((MR_Integer) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
    Tail_16 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 1))));
    Var_17 = (MR_Integer) ((MR_Unsigned) Len_15 + (MR_Unsigned) 1);
    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, Var_19, 1) = ((MR_Box) (Tail_16));
    }
    {
      HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (Var_17));
      MR_hl_field(0, HeadVar__4_4, 1) = ((MR_Box) (Var_19));
    }
  }
  return HeadVar__4_4;
}

static void MR_CALL 
mercury__integer__quot_rem_2_5_p_0(
  MR_Word Ur_6,
  MR_Word U_7,
  MR_Word V_8,
  MR_Word * Quot_9,
  MR_Word * Rem_10)
{
  MR_bool succeeded;
  MR_Word Result_53;

  mercury__integer____Compare____integer_0_0(&Result_53, Ur_6, V_8);
  succeeded = (Result_53 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Integer Ua_12;
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, U_7, (MR_Integer) 1))));

    succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Ua_12 = ((MR_Integer) ((MR_hl_field(1, Var_24, (MR_Integer) 0))));
      {
        MR_Word Quot0_14;
        MR_Word Var_25;
        MR_Word Var_26;
        MR_Integer L_55 = ((MR_Integer) ((MR_hl_field(0, Ur_6, (MR_Integer) 0))));
        MR_Word List_56 = ((MR_Word) ((MR_hl_field(0, Ur_6, (MR_Integer) 1))));
        MR_Word NewList_57;
        MR_Integer Var_58 = (MR_Integer) ((MR_Unsigned) L_55 + (MR_Unsigned) 1);
        MR_Word Var_60;
        MR_Integer Len_63;
        MR_Word Digits_64;
        MR_Integer L_71;
        MR_Word List_72;
        MR_Integer Var_73;
        MR_Word Var_75;

        {
          Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_60, 0) = ((MR_Box) (Ua_12));
          MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), List_56, Var_60, &NewList_57);
        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_25, 0) = ((MR_Box) (Var_58));
          MR_hl_field(0, Var_25, 1) = ((MR_Box) (NewList_57));
        }
        Len_63 = ((MR_Integer) ((MR_hl_field(0, U_7, (MR_Integer) 0))));
        Digits_64 = ((MR_Word) ((MR_hl_field(0, U_7, (MR_Integer) 1))));
        if ((Digits_64 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140integer.det_tail\'/1", (MR_String) "empty list");
            return;
          }
        else
        {
          MR_Word T_66 = ((MR_Word) ((MR_hl_field(1, Digits_64, (MR_Integer) 1))));
          MR_Integer Var_69 = (MR_Integer) ((MR_Unsigned) Len_63 - (MR_Unsigned) 1);

          {
            Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_26, 0) = ((MR_Box) (Var_69));
            MR_hl_field(0, Var_26, 1) = ((MR_Box) (T_66));
          }
        }
        mercury__integer__quot_rem_2_5_p_0(Var_25, Var_26, V_8, &Quot0_14, Rem_10);
        L_71 = ((MR_Integer) ((MR_hl_field(0, Quot0_14, (MR_Integer) 0))));
        List_72 = ((MR_Word) ((MR_hl_field(0, Quot0_14, (MR_Integer) 1))));
        Var_73 = (MR_Integer) ((MR_Unsigned) L_71 + (MR_Unsigned) 1);
        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(1, Var_75, 1) = ((MR_Box) (List_72));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Quot_9 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_73));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_75));
        }
      }
    }
    else
    {
      *Quot_9 = (MR_Word) (&mercury__integer_scalar_common_1[14]);
      *Rem_10 = Ur_6;
    }
  }
  else
  {
    MR_Integer Qhat_16;
    MR_Word QhatByV_17;
    MR_Integer Q_18;
    MR_Word QByV_19;
    MR_Word NewUr_21;
    MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, Ur_6, (MR_Integer) 1))));
    MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, V_8, (MR_Integer) 1))));
    MR_Integer Var_32 = ((MR_Integer) ((MR_hl_field(0, Ur_6, (MR_Integer) 0))));
    MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(0, V_8, (MR_Integer) 0))));
    MR_Word Result_106;
    MR_Integer Ua_52;
    MR_Word Var_44;

    succeeded = (Var_32 > Var_33);
    if (succeeded)
    {
      MR_Integer Var_34;
      MR_Integer Var_35;
      MR_Integer Var_36;
      MR_Integer Var_38;
      MR_Integer Var_39;
      MR_Word Var_94;

      if ((Var_76 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140integer.det_first\'/1", (MR_String) "empty list");
          return;
        }
      else
        Var_36 = ((MR_Integer) ((MR_hl_field(1, Var_76, (MR_Integer) 0))));
      Var_35 = (MR_Integer) ((MR_Unsigned) Var_36 * (MR_Unsigned) 16384);
      Var_94 = ((MR_Word) ((MR_hl_field(1, Var_76, (MR_Integer) 1))));
      if ((Var_94 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140integer.det_second\'/1", (MR_String) "short list");
          return;
        }
      else
        Var_38 = ((MR_Integer) ((MR_hl_field(1, Var_94, (MR_Integer) 0))));
      Var_34 = (MR_Integer) ((MR_Unsigned) Var_35 + (MR_Unsigned) Var_38);
      if ((Var_77 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140integer.det_first\'/1", (MR_String) "empty list");
          return;
        }
      else
        Var_39 = ((MR_Integer) ((MR_hl_field(1, Var_77, (MR_Integer) 0))));
      Qhat_16 = mercury__int__div_2_f_0(Var_34, Var_39);
    }
    else
    {
      MR_Integer Var_40;
      MR_Integer Var_41;
      MR_Word Digits_102 = ((MR_Word) ((MR_hl_field(0, Ur_6, (MR_Integer) 1))));

      if ((Digits_102 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140integer.det_first\'/1", (MR_String) "empty list");
          return;
        }
      else
        Var_40 = ((MR_Integer) ((MR_hl_field(1, Digits_102, (MR_Integer) 0))));
      Var_41 = mercury__integer__det_first_1_f_0(V_8);
      Qhat_16 = mercury__int__div_2_f_0(Var_40, Var_41);
    }
    QhatByV_17 = mercury__integer__mul_by_digit_2_f_0(Qhat_16, V_8);
    mercury__integer____Compare____integer_0_0(&Result_106, Ur_6, QhatByV_17);
    switch (Result_106) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      Q_18 = Qhat_16;
      QByV_19 = QhatByV_17;
    }
    else
    {
      MR_Word QhatMinus1ByV_20;

      QhatMinus1ByV_20 = mercury__integer__pos_minus_2_f_0(QhatByV_17, V_8);
      succeeded = mercury__integer__pos_geq_2_p_0(Ur_6, QhatMinus1ByV_20);
      if (succeeded)
      {
        Q_18 = (MR_Integer) ((MR_Unsigned) Qhat_16 - (MR_Unsigned) 1);
        QByV_19 = QhatMinus1ByV_20;
      }
      else
      {
        Q_18 = (MR_Integer) ((MR_Unsigned) Qhat_16 - (MR_Unsigned) 2);
        QByV_19 = mercury__integer__pos_minus_2_f_0(QhatMinus1ByV_20, V_8);
      }
    }
    NewUr_21 = mercury__integer__pos_minus_2_f_0(Ur_6, QByV_19);
    Var_44 = ((MR_Word) ((MR_hl_field(0, U_7, (MR_Integer) 1))));
    succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Ua_52 = ((MR_Integer) ((MR_hl_field(1, Var_44, (MR_Integer) 0))));
      {
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Quot0_50;

        Var_45 = mercury__integer__integer_append_2_f_0(NewUr_21, Ua_52);
        Var_46 = mercury__integer__det_tail_1_f_0(U_7);
        mercury__integer__quot_rem_2_5_p_0(Var_45, Var_46, V_8, &Quot0_50, Rem_10);
        *Quot_9 = mercury__integer__integer_prepend_2_f_0(Q_18, Quot0_50);
      }
    }
    else
    {
      MR_Word Var_48;

      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (Q_18));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Quot_9 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_48));
      }
      *Rem_10 = NewUr_21;
    }
  }
}

static MR_Word MR_CALL 
mercury__integer__integer_prepend_2_f_0(
  MR_Integer Digit_4,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Integer L_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word List_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Integer Var_7 = (MR_Integer) ((MR_Unsigned) L_5 + (MR_Unsigned) 1);
  MR_Word Var_9;

  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (Digit_4));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (List_6));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_9));
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__integer__integer_append_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer Digit_6)
{
  MR_Word HeadVar__3_3;
  MR_Integer L_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word List_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word NewList_7;
  MR_Integer Var_8 = (MR_Integer) ((MR_Unsigned) L_4 + (MR_Unsigned) 1);
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (Digit_6));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), List_5, Var_10, &NewList_7);
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (NewList_7));
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__integer__mul_by_digit_2_f_0(
  MR_Integer Digit_4,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Out_7;
  MR_Integer Len_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word Digits0_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Integer Mod_8;
  MR_Word Digits_9;

  mercury__integer__mul_by_digit_2_4_p_0(Digit_4, &Mod_8, Digits0_6, &Digits_9);
  succeeded = (Mod_8 == (MR_Integer) 0);
  if (succeeded)
    {
      Out_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Out_7, 0) = ((MR_Box) (Len_5));
      MR_hl_field(0, Out_7, 1) = ((MR_Box) (Digits_9));
    }
  else
  {
    MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) Len_5 + (MR_Unsigned) 1);
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_12, 0) = ((MR_Box) (Mod_8));
      MR_hl_field(1, Var_12, 1) = ((MR_Box) (Digits_9));
    }
    {
      Out_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Out_7, 0) = ((MR_Box) (Var_10));
      MR_hl_field(0, Out_7, 1) = ((MR_Box) (Var_12));
    }
  }
  return Out_7;
}

static MR_Word MR_CALL 
mercury__integer__pos_minus_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Out_8;
  MR_Integer L1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer L2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Integer Mod_9;
  MR_Word Ds_10;
  MR_Integer Len_11;

  mercury__integer__diff_pairs_4_p_0(&Mod_9, HeadVar__1_1, HeadVar__2_2, &Ds_10);
  succeeded = (L1_4 > L2_6);
  if (succeeded)
    Len_11 = L1_4;
  else
    Len_11 = L2_6;
  succeeded = (Mod_9 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = ((MR_Box) (Len_11));
      MR_hl_field(0, Var_14, 1) = ((MR_Box) (Ds_10));
    }
    Out_8 = mercury__integer__decap_1_f_0(Var_14);
  }
  else
  {
    MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) Len_11 + (MR_Unsigned) 1);
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (Mod_9));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) (Ds_10));
    }
    {
      Out_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Out_8, 0) = ((MR_Box) (Var_15));
      MR_hl_field(0, Out_8, 1) = ((MR_Box) (Var_17));
    }
  }
  return Out_8;
}

static MR_bool MR_CALL 
mercury__integer__pos_geq_2_p_0(
  MR_Word X_3,
  MR_Word Y_4)
{
  MR_bool succeeded;
  MR_Word Result_5;

  mercury__integer____Compare____integer_0_0(&Result_5, X_3, Y_4);
  switch (Result_5) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 2:
      succeeded = MR_TRUE;
      break;
  }
  return succeeded;
}

static MR_Word MR_CALL 
mercury__integer__det_tail_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word I_5;
  MR_Integer Len_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Digits_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  if ((Digits_4 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__require__unexpected_2_p_0((MR_String) "function \140integer.det_tail\'/1", (MR_String) "empty list");
  else
  {
    MR_Word T_7 = ((MR_Word) ((MR_hl_field(1, Digits_4, (MR_Integer) 1))));
    MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) Len_3 - (MR_Unsigned) 1);

    {
      I_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, I_5, 0) = ((MR_Box) (Var_10));
      MR_hl_field(0, I_5, 1) = ((MR_Box) (T_7));
    }
  }
  return I_5;
}

static MR_Integer MR_CALL 
mercury__integer__det_first_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer First_5;
  MR_Word Digits_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  if ((Digits_4 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__require__unexpected_2_p_0((MR_String) "function \140integer.det_first\'/1", (MR_String) "empty list");
  else
    First_5 = ((MR_Integer) ((MR_hl_field(1, Digits_4, (MR_Integer) 0))));
  return First_5;
}

MR_Word MR_CALL 
mercury__integer__f_times_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__integer__big_mul_2_f_0(X_4, Y_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__integer__big_mul_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_bool succeeded;
  MR_Word Result_6;
  MR_Integer Sign_7;
  MR_Word Value_8;
  MR_Integer Var_9;
  MR_Integer Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Integer Sign_13 = ((MR_Integer) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
  MR_Integer Sign_15;
  MR_Integer L1_17;
  MR_Integer L2_19;

  Var_9 = mercury__integer__signum_1_f_0(Sign_13);
  Sign_15 = ((MR_Integer) ((MR_hl_field(0, Y_5, (MR_Integer) 0))));
  Var_10 = mercury__integer__signum_1_f_0(Sign_15);
  Sign_7 = (MR_Integer) ((MR_Unsigned) Var_9 * (MR_Unsigned) Var_10);
  Var_11 = mercury__integer__big_abs_1_f_0(X_4);
  Var_12 = mercury__integer__big_abs_1_f_0(Y_5);
  L1_17 = ((MR_Integer) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
  L2_19 = ((MR_Integer) ((MR_hl_field(0, Var_12, (MR_Integer) 0))));
  succeeded = (L1_17 < L2_19);
  if (succeeded)
    Value_8 = mercury__integer__pos_mul_karatsuba_2_f_0(Var_11, Var_12);
  else
    Value_8 = mercury__integer__pos_mul_karatsuba_2_f_0(Var_12, Var_11);
  Result_6 = mercury__integer__big_sign_2_f_0(Sign_7, Value_8);
  return Result_6;
}

MR_Word MR_CALL 
mercury__integer__pos_mul_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Integer L1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer L2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

  succeeded = (L1_4 < L2_6);
  if (succeeded)
    HeadVar__3_3 = mercury__integer__pos_mul_karatsuba_2_f_0(HeadVar__1_1, HeadVar__2_2);
  else
    HeadVar__3_3 = mercury__integer__pos_mul_karatsuba_2_f_0(HeadVar__2_2, HeadVar__1_1);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__integer__pos_mul_karatsuba_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Res_8;
  MR_Integer L1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Ds1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Integer L2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word Ds2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

  succeeded = (L1_4 < (MR_Integer) 35);
  if (succeeded)
    Res_8 = mercury__integer__pos_mul_list_3_f_0(Ds1_5, (MR_Word) (&mercury__integer_scalar_common_1[3]), HeadVar__2_2);
  else
  {
    MR_Integer Middle_9;
    MR_Word Res0_20;
    MR_Word Res1_21;
    MR_Word Res2_22;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Integer Var_39;
    MR_Integer Var_40;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Integer Var_46;
    MR_Word Var_93;
    MR_Integer S_94;
    MR_Word Digits0_95;
    MR_Word Digits_96;
    MR_Integer Var_97;

    succeeded = (L2_6 < L1_4);
    if (succeeded)
      mercury__require__unexpected_2_p_0((MR_String) "function \140integer.pos_mul_karatsuba\'/2", (MR_String) "second factor smaller");
    else
    {
      MR_Integer HiDigits_10;
      MR_Integer HiDigitsSmall_11;
      MR_Word Ds1Upper_12;
      MR_Word Ds1Lower_13;
      MR_Word Ds2Upper_14;
      MR_Word Ds2Lower_15;
      MR_Word LoDs1_16;
      MR_Word LoDs2_17;
      MR_Word HiDs1_18;
      MR_Word HiDs2_19;
      MR_Integer Var_30;
      MR_Integer Var_31;
      MR_Integer Var_32;

      Middle_9 = mercury__int__div_2_f_0(L2_6, (MR_Integer) 2);
      HiDigits_10 = (MR_Integer) ((MR_Unsigned) L2_6 - (MR_Unsigned) Middle_9);
      Var_30 = (MR_Integer) ((MR_Unsigned) L1_4 - (MR_Unsigned) Middle_9);
      succeeded = ((MR_Integer) 0 > Var_30);
      if (succeeded)
        HiDigitsSmall_11 = (MR_Integer) 0;
      else
        HiDigitsSmall_11 = Var_30;
      mercury__list__split_upto_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HiDigitsSmall_11, Ds1_5, &Ds1Upper_12, &Ds1Lower_13);
      mercury__list__split_upto_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HiDigits_10, Ds2_7, &Ds2Upper_14, &Ds2Lower_15);
      succeeded = (L1_4 < Middle_9);
      if (succeeded)
        Var_31 = L1_4;
      else
        Var_31 = Middle_9;
      {
        LoDs1_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, LoDs1_16, 0) = ((MR_Box) (Var_31));
        MR_hl_field(0, LoDs1_16, 1) = ((MR_Box) (Ds1Lower_13));
      }
      {
        LoDs2_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, LoDs2_17, 0) = ((MR_Box) (Middle_9));
        MR_hl_field(0, LoDs2_17, 1) = ((MR_Box) (Ds2Lower_15));
      }
      {
        HiDs1_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HiDs1_18, 0) = ((MR_Box) (HiDigitsSmall_11));
        MR_hl_field(0, HiDs1_18, 1) = ((MR_Box) (Ds1Upper_12));
      }
      {
        HiDs2_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HiDs2_19, 0) = ((MR_Box) (HiDigits_10));
        MR_hl_field(0, HiDs2_19, 1) = ((MR_Box) (Ds2Upper_14));
      }
      Var_32 = (MR_Integer) ((MR_Unsigned) 35 * (MR_Unsigned) 10);
      succeeded = (Middle_9 > Var_32);
      if (succeeded)
      {
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Integer L1_53 = ((MR_Integer) ((MR_hl_field(0, LoDs1_16, (MR_Integer) 0))));
        MR_Integer L2_55 = ((MR_Integer) ((MR_hl_field(0, LoDs2_17, (MR_Integer) 0))));
        MR_Integer L1_61;
        MR_Integer L2_63;
        MR_Integer L1_69;
        MR_Integer L2_71;

        succeeded = (L1_53 < L2_55);
        if (succeeded)
          Res0_20 = mercury__integer__pos_mul_karatsuba_2_f_0(LoDs1_16, LoDs2_17);
        else
          Res0_20 = mercury__integer__pos_mul_karatsuba_2_f_0(LoDs2_17, LoDs1_16);
        Var_33 = mercury__integer__big_plus_2_f_0(LoDs1_16, HiDs1_18);
        Var_34 = mercury__integer__big_plus_2_f_0(LoDs2_17, HiDs2_19);
        L1_61 = ((MR_Integer) ((MR_hl_field(0, Var_33, (MR_Integer) 0))));
        L2_63 = ((MR_Integer) ((MR_hl_field(0, Var_34, (MR_Integer) 0))));
        succeeded = (L1_61 < L2_63);
        if (succeeded)
          Res1_21 = mercury__integer__pos_mul_karatsuba_2_f_0(Var_33, Var_34);
        else
          Res1_21 = mercury__integer__pos_mul_karatsuba_2_f_0(Var_34, Var_33);
        L1_69 = ((MR_Integer) ((MR_hl_field(0, HiDs1_18, (MR_Integer) 0))));
        L2_71 = ((MR_Integer) ((MR_hl_field(0, HiDs2_19, (MR_Integer) 0))));
        succeeded = (L1_69 < L2_71);
        if (succeeded)
          Res2_22 = mercury__integer__pos_mul_karatsuba_2_f_0(HiDs1_18, HiDs2_19);
        else
          Res2_22 = mercury__integer__pos_mul_karatsuba_2_f_0(HiDs2_19, HiDs1_18);
      }
      else
      {
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Integer L1_77 = ((MR_Integer) ((MR_hl_field(0, LoDs1_16, (MR_Integer) 0))));
        MR_Integer L2_79 = ((MR_Integer) ((MR_hl_field(0, LoDs2_17, (MR_Integer) 0))));
        MR_Integer L1_85;
        MR_Integer L2_87;

        succeeded = (L1_77 < L2_79);
        if (succeeded)
          Res0_20 = mercury__integer__pos_mul_karatsuba_2_f_0(LoDs1_16, LoDs2_17);
        else
          Res0_20 = mercury__integer__pos_mul_karatsuba_2_f_0(LoDs2_17, LoDs1_16);
        Var_35 = mercury__integer__big_plus_2_f_0(LoDs1_16, HiDs1_18);
        Var_36 = mercury__integer__big_plus_2_f_0(LoDs2_17, HiDs2_19);
        L1_85 = ((MR_Integer) ((MR_hl_field(0, Var_35, (MR_Integer) 0))));
        L2_87 = ((MR_Integer) ((MR_hl_field(0, Var_36, (MR_Integer) 0))));
        succeeded = (L1_85 < L2_87);
        if (succeeded)
          Res1_21 = mercury__integer__pos_mul_karatsuba_2_f_0(Var_35, Var_36);
        else
          Res1_21 = mercury__integer__pos_mul_karatsuba_2_f_0(Var_36, Var_35);
        Res2_22 = mercury__integer__pos_mul_2_f_0(HiDs1_18, HiDs2_19);
      }
    }
    Var_40 = (MR_Integer) ((MR_Unsigned) 2 * (MR_Unsigned) Middle_9);
    Var_39 = (MR_Integer) ((MR_Unsigned) Var_40 * (MR_Unsigned) 14);
    Var_38 = mercury__integer__big_left_shift_2_f_0(Res2_22, Var_39);
    Var_45 = mercury__integer__big_plus_2_f_0(Res2_22, Res0_20);
    S_94 = ((MR_Integer) ((MR_hl_field(0, Var_45, (MR_Integer) 0))));
    Digits0_95 = ((MR_Word) ((MR_hl_field(0, Var_45, (MR_Integer) 1))));
    Var_97 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_94);
    mercury__integer__neg_list_2_p_0(Digits0_95, &Digits_96);
    {
      Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_93, 0) = ((MR_Box) (Var_97));
      MR_hl_field(0, Var_93, 1) = ((MR_Box) (Digits_96));
    }
    Var_44 = mercury__integer__big_plus_2_f_0(Res1_21, Var_93);
    Var_46 = (MR_Integer) ((MR_Unsigned) Middle_9 * (MR_Unsigned) 14);
    Var_43 = mercury__integer__big_left_shift_2_f_0(Var_44, Var_46);
    Var_37 = mercury__integer__big_plus_2_f_0(Var_38, Var_43);
    Res_8 = mercury__integer__big_plus_2_f_0(Var_37, Res0_20);
  }
  return Res_8;
}

static MR_Word MR_CALL 
mercury__integer__big_left_shift_2_f_0(
  MR_Word X_4,
  MR_Integer I_5)
{
  MR_bool succeeded;
  MR_Word Result_6;
  MR_Integer Var_9 = ((MR_Integer) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 1))));

  succeeded = (Var_9 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Var_10 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    Result_6 = X_4;
  else
  {
    MR_Integer Sign_11 = ((MR_Integer) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 1))));

    succeeded = (Sign_11 < (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_7;
      MR_Integer Len_18 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Sign_11);
      MR_Word Digits_19;
      MR_Integer Div_20;
      MR_Integer Mod_21;
      MR_Integer NewLen_22;
      MR_Integer Carry_23;
      MR_Word NewDigits_24;
      MR_Integer Var_27;
      MR_Integer Var_32;
      MR_Integer Var_33;
      MR_Integer S_34;
      MR_Word Digits0_35;
      MR_Word Digits_36;
      MR_Integer Var_37;

      mercury__integer__neg_list_2_p_0(Var_12, &Digits_19);
      Div_20 = mercury__int__div_2_f_0(I_5, (MR_Integer) 14);
      Var_33 = mercury__int__div_2_f_0(I_5, (MR_Integer) 14);
      Var_32 = (MR_Integer) ((MR_Unsigned) Var_33 * (MR_Unsigned) 14);
      Mod_21 = (MR_Integer) ((MR_Unsigned) I_5 - (MR_Unsigned) Var_32);
      NewLen_22 = (MR_Integer) ((MR_Unsigned) Len_18 + (MR_Unsigned) Div_20);
      Var_27 = (MR_Integer) ((MR_Unsigned) 14 - (MR_Unsigned) Mod_21);
      mercury__integer__leftshift_6_p_0(Mod_21, Var_27, NewLen_22, Digits_19, &Carry_23, &NewDigits_24);
      succeeded = (Carry_23 == (MR_Integer) 0);
      if (succeeded)
        {
          Var_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_7, 0) = ((MR_Box) (NewLen_22));
          MR_hl_field(0, Var_7, 1) = ((MR_Box) (NewDigits_24));
        }
      else
      {
        MR_Integer Var_29 = (MR_Integer) ((MR_Unsigned) NewLen_22 + (MR_Unsigned) 1);
        MR_Word Var_31;

        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (Carry_23));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) (NewDigits_24));
        }
        {
          Var_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_7, 0) = ((MR_Box) (Var_29));
          MR_hl_field(0, Var_7, 1) = ((MR_Box) (Var_31));
        }
      }
      S_34 = ((MR_Integer) ((MR_hl_field(0, Var_7, (MR_Integer) 0))));
      Digits0_35 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 1))));
      Var_37 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_34);
      mercury__integer__neg_list_2_p_0(Digits0_35, &Digits_36);
      {
        Result_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Result_6, 0) = ((MR_Box) (Var_37));
        MR_hl_field(0, Result_6, 1) = ((MR_Box) (Digits_36));
      }
    }
    else
    {
      MR_Integer Len_38 = ((MR_Integer) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
      MR_Word Digits_39 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 1))));
      MR_Integer Div_40;
      MR_Integer Mod_41;
      MR_Integer NewLen_42;
      MR_Integer Carry_43;
      MR_Word NewDigits_44;
      MR_Integer Var_47;
      MR_Integer Var_52;
      MR_Integer Var_53;

      Div_40 = mercury__int__div_2_f_0(I_5, (MR_Integer) 14);
      Var_53 = mercury__int__div_2_f_0(I_5, (MR_Integer) 14);
      Var_52 = (MR_Integer) ((MR_Unsigned) Var_53 * (MR_Unsigned) 14);
      Mod_41 = (MR_Integer) ((MR_Unsigned) I_5 - (MR_Unsigned) Var_52);
      NewLen_42 = (MR_Integer) ((MR_Unsigned) Len_38 + (MR_Unsigned) Div_40);
      Var_47 = (MR_Integer) ((MR_Unsigned) 14 - (MR_Unsigned) Mod_41);
      mercury__integer__leftshift_6_p_0(Mod_41, Var_47, NewLen_42, Digits_39, &Carry_43, &NewDigits_44);
      succeeded = (Carry_43 == (MR_Integer) 0);
      if (succeeded)
        {
          Result_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Result_6, 0) = ((MR_Box) (NewLen_42));
          MR_hl_field(0, Result_6, 1) = ((MR_Box) (NewDigits_44));
        }
      else
      {
        MR_Integer Var_49 = (MR_Integer) ((MR_Unsigned) NewLen_42 + (MR_Unsigned) 1);
        MR_Word Var_51;

        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (Carry_43));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) (NewDigits_44));
        }
        {
          Result_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Result_6, 0) = ((MR_Box) (Var_49));
          MR_hl_field(0, Result_6, 1) = ((MR_Box) (Var_51));
        }
      }
    }
  }
  return Result_6;
}

static void MR_CALL 
mercury__integer__leftshift_6_p_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer Len_3,
  MR_Word HeadVar__4_4,
  MR_Integer * Carry_5,
  MR_Word * DigitsOut_6)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Carry_5 = (MR_Integer) 0;
    mercury__integer__zeros_3_p_0(Len_3, (MR_Word) ((MR_Unsigned) 0U), DigitsOut_6);
  }
  else
  {
    MR_Integer H_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word T_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));

    succeeded = (Len_3 <= (MR_Integer) 0);
    if (succeeded)
    {
      *Carry_5 = (MR_Integer) 0;
      *DigitsOut_6 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Integer TailCarry_20;
      MR_Word Tail_21;
      MR_Integer Var_23;
      MR_Integer Var_24;
      MR_Integer Var_26;
      MR_Integer Var_28;
      MR_Integer Var_29;
      MR_Integer Var_30;

      Var_24 = mercury__int__f_60_60_2_f_0((MR_Integer) 16383, HeadVar__2_2);
      Var_23 = (H_16 & Var_24);
      *Carry_5 = mercury__int__f_62_62_2_f_0(Var_23, HeadVar__2_2);
      Var_26 = (MR_Integer) ((MR_Unsigned) Len_3 - (MR_Unsigned) 1);
      mercury__integer__leftshift_6_p_0(HeadVar__1_1, HeadVar__2_2, Var_26, T_17, &TailCarry_20, &Tail_21);
      Var_30 = mercury__int__f_60_60_2_f_0(H_16, HeadVar__1_1);
      Var_29 = (Var_30 & (MR_Integer) 16383);
      Var_28 = (TailCarry_20 | Var_29);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *DigitsOut_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_28));
        MR_hl_field(1, base, 1) = ((MR_Box) (Tail_21));
      }
    }
  }
}

static void MR_CALL 
mercury__integer__zeros_3_p_0(
  MR_Integer Len_4,
  MR_Word Digits0_5,
  MR_Word * Digits_6)
{
  MR_bool succeeded = (Len_4 > (MR_Integer) 0);

  if (succeeded)
  {
    MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) Len_4 - (MR_Unsigned) 1);
    MR_Word * AddrDigits1_12;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Digits_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrDigits1_12 = (MR_Word *) (&(MR_hl_field(1, *Digits_6, (MR_Integer) 1)));
    mercury__integer__LCMC__pred__zeros__1_3_p_0(Var_9, Digits0_5, AddrDigits1_12);
  }
  else
    *Digits_6 = Digits0_5;
}

static void MR_CALL 
mercury__integer__LCMC__pred__zeros__1_3_p_0(
  MR_Integer Len_4,
  MR_Word Digits0_5,
  MR_Word * AddrOfDigits_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Len_4 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) Len_4 - (MR_Unsigned) 1);
      MR_Word Digits_6;
      MR_Word * AddrDigits1_12;
      MR_Integer next_value_of_Len_4;
      MR_Word * next_value_of_AddrOfDigits_13;

      {
        Digits_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Digits_6, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(1, Digits_6, 1) = NULL;
      }
      AddrDigits1_12 = (MR_Word *) (&(MR_hl_field(1, Digits_6, (MR_Integer) 1)));
      *AddrOfDigits_13 = Digits_6;
      // direct tailcall eliminated
      ;
      next_value_of_Len_4 = Var_9;
      next_value_of_AddrOfDigits_13 = AddrDigits1_12;
      Len_4 = next_value_of_Len_4;
      AddrOfDigits_13 = next_value_of_AddrOfDigits_13;
      continue;
    }
    else
      *AddrOfDigits_13 = Digits0_5;
    break;
  }
}

static MR_Word MR_CALL 
mercury__integer__pos_mul_list_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word Carry_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = Carry_2;
    else
    {
      MR_Integer X_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Xs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_11;
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Integer Len_14 = ((MR_Integer) ((MR_hl_field(0, Carry_2, (MR_Integer) 0))));
      MR_Word Digits_15 = ((MR_Word) ((MR_hl_field(0, Carry_2, (MR_Integer) 1))));
      MR_Integer Len_23;
      MR_Word Digits0_24;
      MR_Integer Mod_25;
      MR_Word Digits_26;
      MR_Integer L1_30;
      MR_Integer L2_32;
      MR_Integer Div_34;
      MR_Word Ds_35;
      MR_Integer Len_36;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_Carry_2;

      if ((Digits_15 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_12 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
      else
      {
        MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) Len_14 + (MR_Unsigned) 1);
        MR_Word Var_20;

        Var_20 = mercury__integer__mul_base_2_1_f_0(Digits_15);
        {
          Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_18));
          MR_hl_field(0, Var_12, 1) = ((MR_Box) (Var_20));
        }
      }
      Len_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
      Digits0_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
      mercury__integer__mul_by_digit_2_4_p_0(X_7, &Mod_25, Digits0_24, &Digits_26);
      succeeded = (Mod_25 == (MR_Integer) 0);
      if (succeeded)
        {
          Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_13, 0) = ((MR_Box) (Len_23));
          MR_hl_field(0, Var_13, 1) = ((MR_Box) (Digits_26));
        }
      else
      {
        MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) Len_23 + (MR_Unsigned) 1);
        MR_Word Var_29;

        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (Mod_25));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (Digits_26));
        }
        {
          Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_13, 0) = ((MR_Box) (Var_27));
          MR_hl_field(0, Var_13, 1) = ((MR_Box) (Var_29));
        }
      }
      L1_30 = ((MR_Integer) ((MR_hl_field(0, Var_12, (MR_Integer) 0))));
      L2_32 = ((MR_Integer) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
      mercury__integer__add_pairs_4_p_0(&Div_34, Var_12, Var_13, &Ds_35);
      succeeded = (L1_30 > L2_32);
      if (succeeded)
        Len_36 = L1_30;
      else
        Len_36 = L2_32;
      succeeded = (Div_34 == (MR_Integer) 0);
      if (succeeded)
        {
          Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_11, 0) = ((MR_Box) (Len_36));
          MR_hl_field(0, Var_11, 1) = ((MR_Box) (Ds_35));
        }
      else
      {
        MR_Integer Var_39 = (MR_Integer) ((MR_Unsigned) Len_36 + (MR_Unsigned) 1);
        MR_Word Var_41;

        {
          Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_41, 0) = ((MR_Box) (Div_34));
          MR_hl_field(1, Var_41, 1) = ((MR_Box) (Ds_35));
        }
        {
          Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_11, 0) = ((MR_Box) (Var_39));
          MR_hl_field(0, Var_11, 1) = ((MR_Box) (Var_41));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Xs_8;
      next_value_of_Carry_2 = Var_11;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Carry_2 = next_value_of_Carry_2;
      continue;
    }
    return HeadVar__4_4;
    break;
  }
}

static void MR_CALL 
mercury__integer__mul_by_digit_2_4_p_0(
  MR_Integer D_1,
  MR_Integer * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Integer) 0;
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Integer X_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Xs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer Mod_10;
    MR_Word NewXs_11;
    MR_Integer DivXs_12;
    MR_Integer Var_13;
    MR_Integer Var_14;

    mercury__integer__mul_by_digit_2_4_p_0(D_1, &DivXs_12, Xs_9, &NewXs_11);
    Var_14 = (MR_Integer) ((MR_Unsigned) D_1 * (MR_Unsigned) X_8);
    Var_13 = (MR_Integer) ((MR_Unsigned) Var_14 + (MR_Unsigned) DivXs_12);
    *HeadVar__2_2 = (Var_13 >> 14);
    Mod_10 = (Var_13 & (MR_Integer) 16383);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Mod_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (NewXs_11));
    }
  }
}

static MR_Word MR_CALL 
mercury__integer__mul_base_2_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) (MR_mkword(1, &mercury__integer_scalar_common_1[3]));
  else
  {
    MR_Integer H_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word T_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word * AddrSCCcallarg_7_8;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (H_5));
      MR_hl_field(1, HeadVar__2_2, 1) = NULL;
    }
    AddrSCCcallarg_7_8 = (MR_Word *) (&(MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1)));
    mercury__integer__LCMC__func__mul_base_2__1_2_p_0(T_6, AddrSCCcallarg_7_8);
  }
  return HeadVar__2_2;
}

static void MR_CALL 
mercury__integer__LCMC__func__mul_base_2__1_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__2_9 = (MR_Word) (MR_mkword(1, &mercury__integer_scalar_common_1[3]));
    else
    {
      MR_Integer H_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word T_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word * AddrSCCcallarg_7_8;
      MR_Word HeadVar__2_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_9;

      {
        HeadVar__2_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_10, 0) = ((MR_Box) (H_5));
        MR_hl_field(1, HeadVar__2_10, 1) = NULL;
      }
      AddrSCCcallarg_7_8 = (MR_Word *) (&(MR_hl_field(1, HeadVar__2_10, (MR_Integer) 1)));
      *AddrOfHeadVar__2_9 = HeadVar__2_10;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = T_6;
      next_value_of_AddrOfHeadVar__2_9 = AddrSCCcallarg_7_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_9 = next_value_of_AddrOfHeadVar__2_9;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__integer__f_minus_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;
  MR_Integer S_7 = ((MR_Integer) ((MR_hl_field(0, Y_5, (MR_Integer) 0))));
  MR_Word Digits0_8 = ((MR_Word) ((MR_hl_field(0, Y_5, (MR_Integer) 1))));
  MR_Word Digits_9;
  MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_7);

  mercury__integer__neg_list_2_p_0(Digits0_8, &Digits_9);
  {
    Var_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_6, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, Var_6, 1) = ((MR_Box) (Digits_9));
  }
  HeadVar__3_3 = mercury__integer__big_plus_2_f_0(X_4, Var_6);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__integer__f_plus_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__integer__big_plus_2_f_0(X_4, Y_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__integer__big_plus_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_bool succeeded;
  MR_Word Sum_6;
  MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 1))));

  succeeded = (Var_15 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    Sum_6 = Y_5;
  else
  {
    MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(0, Y_5, (MR_Integer) 0))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Y_5, (MR_Integer) 1))));

    succeeded = (Var_17 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      Sum_6 = X_4;
    else
    {
      MR_Word AbsX_7;
      MR_Word AbsY_8;
      MR_Integer SignX_9;
      MR_Integer SignY_10;
      MR_Integer Sign_19;
      MR_Integer Sign_21;

      AbsX_7 = mercury__integer__big_abs_1_f_0(X_4);
      AbsY_8 = mercury__integer__big_abs_1_f_0(Y_5);
      Sign_19 = ((MR_Integer) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
      SignX_9 = mercury__integer__signum_1_f_0(Sign_19);
      Sign_21 = ((MR_Integer) ((MR_hl_field(0, Y_5, (MR_Integer) 0))));
      SignY_10 = mercury__integer__signum_1_f_0(Sign_21);
      succeeded = (SignX_9 == SignY_10);
      if (succeeded)
      {
        MR_Word Var_12;
        MR_Integer L1_23 = ((MR_Integer) ((MR_hl_field(0, AbsX_7, (MR_Integer) 0))));
        MR_Integer L2_25 = ((MR_Integer) ((MR_hl_field(0, AbsY_8, (MR_Integer) 0))));
        MR_Integer Div_27;
        MR_Word Ds_28;
        MR_Integer Len_29;

        mercury__integer__add_pairs_4_p_0(&Div_27, AbsX_7, AbsY_8, &Ds_28);
        succeeded = (L1_23 > L2_25);
        if (succeeded)
          Len_29 = L1_23;
        else
          Len_29 = L2_25;
        succeeded = (Div_27 == (MR_Integer) 0);
        if (succeeded)
          {
            Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_12, 0) = ((MR_Box) (Len_29));
            MR_hl_field(0, Var_12, 1) = ((MR_Box) (Ds_28));
          }
        else
        {
          MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) Len_29 + (MR_Unsigned) 1);
          MR_Word Var_34;

          {
            Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_34, 0) = ((MR_Box) (Div_27));
            MR_hl_field(1, Var_34, 1) = ((MR_Box) (Ds_28));
          }
          {
            Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_32));
            MR_hl_field(0, Var_12, 1) = ((MR_Box) (Var_34));
          }
        }
        Sum_6 = mercury__integer__big_sign_2_f_0(SignX_9, Var_12);
      }
      else
      {
        MR_Word C_11;

        mercury__integer____Compare____integer_0_0(&C_11, AbsX_7, AbsY_8);
        switch (C_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_13;
              MR_Integer L1_36 = ((MR_Integer) ((MR_hl_field(0, AbsY_8, (MR_Integer) 0))));
              MR_Integer L2_38 = ((MR_Integer) ((MR_hl_field(0, AbsX_7, (MR_Integer) 0))));
              MR_Integer Mod_40;
              MR_Word Ds_41;
              MR_Integer Len_42;

              mercury__integer__diff_pairs_4_p_0(&Mod_40, AbsY_8, AbsX_7, &Ds_41);
              succeeded = (L1_36 > L2_38);
              if (succeeded)
                Len_42 = L1_36;
              else
                Len_42 = L2_38;
              succeeded = (Mod_40 == (MR_Integer) 0);
              if (succeeded)
              {
                MR_Word Var_45;

                {
                  Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_45, 0) = ((MR_Box) (Len_42));
                  MR_hl_field(0, Var_45, 1) = ((MR_Box) (Ds_41));
                }
                Var_13 = mercury__integer__decap_1_f_0(Var_45);
              }
              else
              {
                MR_Integer Var_46 = (MR_Integer) ((MR_Unsigned) Len_42 + (MR_Unsigned) 1);
                MR_Word Var_48;

                {
                  Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_48, 0) = ((MR_Box) (Mod_40));
                  MR_hl_field(1, Var_48, 1) = ((MR_Box) (Ds_41));
                }
                {
                  Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_13, 0) = ((MR_Box) (Var_46));
                  MR_hl_field(0, Var_13, 1) = ((MR_Box) (Var_48));
                }
              }
              Sum_6 = mercury__integer__big_sign_2_f_0(SignY_10, Var_13);
            }
            break;
          case (MR_Integer) 0:
            Sum_6 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_14;
              MR_Integer L1_51 = ((MR_Integer) ((MR_hl_field(0, AbsX_7, (MR_Integer) 0))));
              MR_Integer L2_53 = ((MR_Integer) ((MR_hl_field(0, AbsY_8, (MR_Integer) 0))));
              MR_Integer Mod_55;
              MR_Word Ds_56;
              MR_Integer Len_57;

              mercury__integer__diff_pairs_4_p_0(&Mod_55, AbsX_7, AbsY_8, &Ds_56);
              succeeded = (L1_51 > L2_53);
              if (succeeded)
                Len_57 = L1_51;
              else
                Len_57 = L2_53;
              succeeded = (Mod_55 == (MR_Integer) 0);
              if (succeeded)
              {
                MR_Word Var_60;

                {
                  Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_60, 0) = ((MR_Box) (Len_57));
                  MR_hl_field(0, Var_60, 1) = ((MR_Box) (Ds_56));
                }
                Var_14 = mercury__integer__decap_1_f_0(Var_60);
              }
              else
              {
                MR_Integer Var_61 = (MR_Integer) ((MR_Unsigned) Len_57 + (MR_Unsigned) 1);
                MR_Word Var_63;

                {
                  Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_63, 0) = ((MR_Box) (Mod_55));
                  MR_hl_field(1, Var_63, 1) = ((MR_Box) (Ds_56));
                }
                {
                  Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_14, 0) = ((MR_Box) (Var_61));
                  MR_hl_field(0, Var_14, 1) = ((MR_Box) (Var_63));
                }
              }
              Sum_6 = mercury__integer__big_sign_2_f_0(SignX_9, Var_14);
            }
            break;
        }
      }
    }
  }
  return Sum_6;
}

MR_Word MR_CALL 
mercury__integer__big_sign_2_f_0(
  MR_Integer Sign_4,
  MR_Word In_5)
{
  MR_bool succeeded = (Sign_4 < (MR_Integer) 0);
  MR_Word Result_6;

  if (succeeded)
  {
    MR_Integer S_8 = ((MR_Integer) ((MR_hl_field(0, In_5, (MR_Integer) 0))));
    MR_Word Digits0_9 = ((MR_Word) ((MR_hl_field(0, In_5, (MR_Integer) 1))));
    MR_Word Digits_10;
    MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_8);

    mercury__integer__neg_list_2_p_0(Digits0_9, &Digits_10);
    {
      Result_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_6, 0) = ((MR_Box) (Var_11));
      MR_hl_field(0, Result_6, 1) = ((MR_Box) (Digits_10));
    }
  }
  else
    Result_6 = In_5;
  return Result_6;
}

static void MR_CALL 
mercury__integer__diff_pairs_4_p_0(
  MR_Integer * Div_5,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * Ds_10)
{
  MR_bool succeeded;
  MR_Integer L1_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word D1_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Integer L2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word D2_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));

  succeeded = (L1_6 == L2_8);
  if (succeeded)
    mercury__integer__diff_pairs_equal_4_p_0(Div_5, D1_7, D2_9, Ds_10);
  else
  {
    MR_Integer H1_11;
    MR_Word T1_12;

    succeeded = (L1_6 > L2_8);
    if (succeeded)
    {
      succeeded = (D1_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        H1_11 = ((MR_Integer) ((MR_hl_field(1, D1_7, (MR_Integer) 0))));
        T1_12 = ((MR_Word) ((MR_hl_field(1, D1_7, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Integer Div1_13;
      MR_Word Ds1_14;
      MR_Integer Mod_15;
      MR_Word Var_16;
      MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) L1_6 - (MR_Unsigned) 1);
      MR_Integer Var_20;

      {
        Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_16, 0) = ((MR_Box) (Var_18));
        MR_hl_field(0, Var_16, 1) = ((MR_Box) (T1_12));
      }
      mercury__integer__diff_pairs_4_p_0(&Div1_13, Var_16, HeadVar__3_3, &Ds1_14);
      Var_20 = (MR_Integer) ((MR_Unsigned) H1_11 + (MR_Unsigned) Div1_13);
      *Div_5 = (Var_20 >> 14);
      Mod_15 = (Var_20 & (MR_Integer) 16383);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Ds_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Mod_15));
        MR_hl_field(1, base, 1) = ((MR_Box) (Ds1_14));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140integer.diff_pairs\'/4", (MR_String) "invalid integer");
        return;
      }
  }
}

static void MR_CALL 
mercury__integer__diff_pairs_equal_4_p_0(
  MR_Integer * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__1_1 = (MR_Integer) 0;
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__1_1 = (MR_Integer) 0;
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Integer Y_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Ys_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer Mod_13;
      MR_Word TailDs_14;
      MR_Integer DivTail_15;
      MR_Integer Var_16;
      MR_Integer Var_17;

      mercury__integer__diff_pairs_equal_4_p_0(&DivTail_15, Var_18, Ys_12, &TailDs_14);
      Var_17 = (MR_Integer) ((MR_Unsigned) Var_19 - (MR_Unsigned) Y_11);
      Var_16 = (MR_Integer) ((MR_Unsigned) Var_17 + (MR_Unsigned) DivTail_15);
      *HeadVar__1_1 = (Var_16 >> 14);
      Mod_13 = (Var_16 & (MR_Integer) 16383);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Mod_13));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailDs_14));
      }
    }
  }
}

static void MR_CALL 
mercury__integer__add_pairs_4_p_0(
  MR_Integer * Div_5,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * Ds_10)
{
  MR_bool succeeded;
  MR_Integer L1_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word D1_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Integer L2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word D2_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));

  succeeded = (L1_6 == L2_8);
  if (succeeded)
    mercury__integer__add_pairs_equal_4_p_0(Div_5, D1_7, D2_9, Ds_10);
  else
  {
    MR_Integer H2_11;
    MR_Word T2_12;

    succeeded = (L1_6 < L2_8);
    if (succeeded)
    {
      succeeded = (D2_9 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        H2_11 = ((MR_Integer) ((MR_hl_field(1, D2_9, (MR_Integer) 0))));
        T2_12 = ((MR_Word) ((MR_hl_field(1, D2_9, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Integer Div1_13;
      MR_Word Ds1_14;
      MR_Integer Mod_15;
      MR_Word Var_19;
      MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) L2_8 - (MR_Unsigned) 1);
      MR_Integer Var_22;

      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_19, 0) = ((MR_Box) (Var_20));
        MR_hl_field(0, Var_19, 1) = ((MR_Box) (T2_12));
      }
      mercury__integer__add_pairs_4_p_0(&Div1_13, HeadVar__2_2, Var_19, &Ds1_14);
      Var_22 = (MR_Integer) ((MR_Unsigned) H2_11 + (MR_Unsigned) Div1_13);
      *Div_5 = (Var_22 >> 14);
      Mod_15 = (Var_22 & (MR_Integer) 16383);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Ds_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Mod_15));
        MR_hl_field(1, base, 1) = ((MR_Box) (Ds1_14));
      }
    }
    else
    {
      MR_Integer H1_16;
      MR_Word T1_17;

      succeeded = (L1_6 > L2_8);
      if (succeeded)
      {
        succeeded = (D1_7 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          H1_16 = ((MR_Integer) ((MR_hl_field(1, D1_7, (MR_Integer) 0))));
          T1_17 = ((MR_Word) ((MR_hl_field(1, D1_7, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word Var_23;
        MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) L1_6 - (MR_Unsigned) 1);
        MR_Integer Var_27;
        MR_Integer Div1_30;
        MR_Word Ds1_31;
        MR_Integer Mod_32;

        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_23, 0) = ((MR_Box) (Var_25));
          MR_hl_field(0, Var_23, 1) = ((MR_Box) (T1_17));
        }
        mercury__integer__add_pairs_4_p_0(&Div1_30, Var_23, HeadVar__3_3, &Ds1_31);
        Var_27 = (MR_Integer) ((MR_Unsigned) H1_16 + (MR_Unsigned) Div1_30);
        *Div_5 = (Var_27 >> 14);
        Mod_32 = (Var_27 & (MR_Integer) 16383);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Ds_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Mod_32));
          MR_hl_field(1, base, 1) = ((MR_Box) (Ds1_31));
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140integer.add_pairs\'/4", (MR_String) "invalid integer");
          return;
        }
    }
  }
}

static void MR_CALL 
mercury__integer__add_pairs_equal_4_p_0(
  MR_Integer * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__1_1 = (MR_Integer) 0;
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__1_1 = (MR_Integer) 0;
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Integer Y_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Ys_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer Mod_13;
      MR_Word TailDs_14;
      MR_Integer DivTail_15;
      MR_Integer Var_16;
      MR_Integer Var_17;

      mercury__integer__add_pairs_equal_4_p_0(&DivTail_15, Var_18, Ys_12, &TailDs_14);
      Var_17 = (MR_Integer) ((MR_Unsigned) Var_19 + (MR_Unsigned) Y_11);
      Var_16 = (MR_Integer) ((MR_Unsigned) Var_17 + (MR_Unsigned) DivTail_15);
      *HeadVar__1_1 = (Var_16 >> 14);
      Mod_13 = (Var_16 & (MR_Integer) 16383);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Mod_13));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailDs_14));
      }
    }
  }
}

static MR_Word MR_CALL 
mercury__integer__decap_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Var_14 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) (&mercury__integer_scalar_common_1[3]);
    else
    {
      MR_Integer H_6 = ((MR_Integer) ((MR_hl_field(1, Var_14, (MR_Integer) 0))));
      MR_Word T_7 = ((MR_Word) ((MR_hl_field(1, Var_14, (MR_Integer) 1))));

      succeeded = (H_6 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_10;
        MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) Var_15 - (MR_Unsigned) 1);
        MR_Word next_value_of_HeadVar__1_1;

        {
          Var_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_11));
          MR_hl_field(0, Var_10, 1) = ((MR_Box) (T_7));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_10;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
        HeadVar__2_2 = HeadVar__1_1;
    }
    return HeadVar__2_2;
    break;
  }
}

MR_Integer MR_CALL 
mercury__integer__signum_1_f_0(
  MR_Integer N_3)
{
  MR_bool succeeded = (N_3 < (MR_Integer) 0);
  MR_Integer Sign_4;

  if (succeeded)
    Sign_4 = (MR_Integer) -1;
  else
  {
    succeeded = (N_3 == (MR_Integer) 0);
    if (succeeded)
      Sign_4 = (MR_Integer) 0;
    else
      Sign_4 = (MR_Integer) 1;
  }
  return Sign_4;
}

MR_Word MR_CALL 
mercury__integer__f_minus_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Integer S_4 = ((MR_Integer) ((MR_hl_field(0, X_3, (MR_Integer) 0))));
  MR_Word Digits0_5 = ((MR_Word) ((MR_hl_field(0, X_3, (MR_Integer) 1))));
  MR_Word Digits_6;
  MR_Integer Var_7 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_4);

  mercury__integer__neg_list_2_p_0(Digits0_5, &Digits_6);
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Digits_6));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__integer__f_plus_1_f_0(
  MR_Word X_3)
{
  MR_Word X_2 = X_3;

  return X_2;
}

MR_bool MR_CALL 
mercury__integer__is_zero_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Integer Var_2 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Var_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  succeeded = (Var_2 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Var_3 == (MR_Word) ((MR_Unsigned) 0U));
  return succeeded;
}

MR_Word MR_CALL 
mercury__integer__abs_1_f_0(
  MR_Word N_3)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mercury__integer__big_abs_1_f_0(N_3);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__integer__big_abs_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word Result_5;
  MR_Integer Sign_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

  succeeded = (Sign_3 < (MR_Integer) 0);
  if (succeeded)
  {
    MR_Integer S_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Digits0_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Digits_10;
    MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) S_8);

    mercury__integer__neg_list_2_p_0(Digits0_9, &Digits_10);
    {
      Result_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_5, 0) = ((MR_Box) (Var_11));
      MR_hl_field(0, Result_5, 1) = ((MR_Box) (Digits_10));
    }
  }
  else
    Result_5 = HeadVar__1_1;
  return Result_5;
}

void MR_CALL 
mercury__integer__neg_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer H_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word T_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer Var_6 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) H_3);
    MR_Word * AddrNT_7;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_6));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrNT_7 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__2_2, (MR_Integer) 1)));
    mercury__integer__LCMC__pred__neg_list__1_2_p_0(T_4, AddrNT_7);
  }
}

void MR_CALL 
mercury__integer__LCMC__pred__neg_list__1_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__2_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer H_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word T_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Var_6 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) H_3);
      MR_Word * AddrNT_7;
      MR_Word HeadVar__2_9;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_8;

      {
        HeadVar__2_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_9, 0) = ((MR_Box) (Var_6));
        MR_hl_field(1, HeadVar__2_9, 1) = NULL;
      }
      AddrNT_7 = (MR_Word *) (&(MR_hl_field(1, HeadVar__2_9, (MR_Integer) 1)));
      *AddrOfHeadVar__2_8 = HeadVar__2_9;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = T_4;
      next_value_of_AddrOfHeadVar__2_8 = AddrNT_7;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_8 = next_value_of_AddrOfHeadVar__2_8;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__integer__f_greater_or_equal_2_p_0(
  MR_Word X_3,
  MR_Word Y_4)
{
  MR_bool succeeded;
  MR_Word C_5;

  mercury__integer____Compare____integer_0_0(&C_5, X_3, Y_4);
  switch (C_5) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 2:
      succeeded = MR_TRUE;
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__integer__f_less_or_equal_2_p_0(
  MR_Word X_3,
  MR_Word Y_4)
{
  MR_bool succeeded;
  MR_Word C_5;

  mercury__integer____Compare____integer_0_0(&C_5, X_3, Y_4);
  switch (C_5) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 1:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 0:
      succeeded = MR_TRUE;
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__integer__f_greater_than_2_p_0(
  MR_Word X_3,
  MR_Word Y_4)
{
  MR_bool succeeded;
  MR_Word C_5;

  mercury__integer____Compare____integer_0_0(&C_5, X_3, Y_4);
  succeeded = (C_5 == (MR_Integer) 2);
  return succeeded;
}

MR_bool MR_CALL 
mercury__integer__f_less_than_2_p_0(
  MR_Word X_3,
  MR_Word Y_4)
{
  MR_bool succeeded;
  MR_Word C_5;

  mercury__integer____Compare____integer_0_0(&C_5, X_3, Y_4);
  succeeded = (C_5 == (MR_Integer) 1);
  return succeeded;
}

void MR_CALL 
mercury__integer____Compare____integer_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 == ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
        SubResult1_6 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&mercury__integer_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_Word MR_CALL 
mercury__integer__sixteen_0_f_0(void)
{
  return (MR_Word) (&mercury__integer_scalar_common_1[13]);
}

MR_Word MR_CALL 
mercury__integer__ten_0_f_0(void)
{
  return (MR_Word) (&mercury__integer_scalar_common_1[11]);
}

MR_Word MR_CALL 
mercury__integer__eight_0_f_0(void)
{
  return (MR_Word) (&mercury__integer_scalar_common_1[9]);
}

MR_Word MR_CALL 
mercury__integer__two_0_f_0(void)
{
  return (MR_Word) (&mercury__integer_scalar_common_1[7]);
}

MR_Word MR_CALL 
mercury__integer__one_0_f_0(void)
{
  return (MR_Word) (&mercury__integer_scalar_common_1[5]);
}

MR_Word MR_CALL 
mercury__integer__zero_0_f_0(void)
{
  return (MR_Word) (&mercury__integer_scalar_common_1[3]);
}

MR_Word MR_CALL 
mercury__integer__negative_one_0_f_0(void)
{
  return (MR_Word) (&mercury__integer_scalar_common_1[2]);
}

static MR_bool MR_CALL 
mercury__integer____Unify____digit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__integer____Unify____digit_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__integer____Compare____digit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__integer____Compare____digit_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__integer____Unify____integer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__integer____Unify____integer_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__integer____Compare____integer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__integer____Compare____integer_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__integer____Unify____printbase_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__integer____Unify____printbase_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__integer____Compare____printbase_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__integer____Compare____printbase_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__integer____Unify____sign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__integer____Unify____sign_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__integer____Compare____sign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__integer____Compare____sign_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__integer__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module integer.
