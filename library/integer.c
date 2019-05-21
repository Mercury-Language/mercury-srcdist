/*
** Automatically generated from `integer.m'
** by the Mercury compiler,
** version rotd-2017-07-18
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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
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
mercury__integer____Unify____digit_0_0_10001(
  MR_Box mercury__integer__wrapper_arg_1,
  MR_Box mercury__integer__wrapper_arg_2);

static void MR_CALL 
mercury__integer____Compare____digit_0_0_10001(
  MR_Box * mercury__integer__wrapper_arg_1,
  MR_Box mercury__integer__wrapper_arg_2,
  MR_Box mercury__integer__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__integer____Unify____integer_0_0_10001(
  MR_Box mercury__integer__wrapper_arg_1,
  MR_Box mercury__integer__wrapper_arg_2);

static void MR_CALL 
mercury__integer____Compare____integer_0_0_10001(
  MR_Box * mercury__integer__wrapper_arg_1,
  MR_Box mercury__integer__wrapper_arg_2,
  MR_Box mercury__integer__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__integer____Unify____printbase_0_0_10001(
  MR_Box mercury__integer__wrapper_arg_1,
  MR_Box mercury__integer__wrapper_arg_2);

static void MR_CALL 
mercury__integer____Compare____printbase_0_0_10001(
  MR_Box * mercury__integer__wrapper_arg_1,
  MR_Box mercury__integer__wrapper_arg_2,
  MR_Box mercury__integer__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__integer____Unify____sign_0_0_10001(
  MR_Box mercury__integer__wrapper_arg_1,
  MR_Box mercury__integer__wrapper_arg_2);

static void MR_CALL 
mercury__integer____Compare____sign_0_0_10001(
  MR_Box * mercury__integer__wrapper_arg_1,
  MR_Box mercury__integer__wrapper_arg_2,
  MR_Box mercury__integer__wrapper_arg_3);

static MR_Integer MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0(
  MR_Integer mercury__integer__Var_18,
  MR_String mercury__integer__V_8_8,
  MR_Integer mercury__integer__V_9_9,
  MR_Integer mercury__integer__V_10_10,
  MR_Word mercury__integer__V_14_11,
  MR_Word * mercury__integer__V_15_12);

static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_95_95_91_50_93_95_48_6_p_in__string_0(
  MR_Integer mercury__integer__Var_17,
  MR_String mercury__integer__V_8_8,
  MR_Integer mercury__integer__V_9_9,
  MR_Integer mercury__integer__V_10_10,
  MR_Word mercury__integer__V_14_11,
  MR_Word * mercury__integer__V_15_12);

static MR_bool MR_CALL 
mercury__integer__accumulate_integer_underscore_4_p_0(
  MR_Integer mercury__integer__Base_5,
  MR_Char mercury__integer__Char_6,
  MR_Word mercury__integer__STATE_VARIABLE_N_0_10,
  MR_Word * mercury__integer__STATE_VARIABLE_N_11);

static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0(
  MR_Integer mercury__integer__Var_18,
  MR_String mercury__integer__V_8_8,
  MR_Integer mercury__integer__V_9_9,
  MR_Integer mercury__integer__V_10_10,
  MR_Word mercury__integer__V_14_11,
  MR_Word * mercury__integer__V_15_12);

static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_95_95_91_50_93_95_48_6_p_in__string_0(
  MR_Integer mercury__integer__Var_17,
  MR_String mercury__integer__V_8_8,
  MR_Integer mercury__integer__V_9_9,
  MR_Integer mercury__integer__V_10_10,
  MR_Word mercury__integer__V_14_11,
  MR_Word * mercury__integer__V_15_12);

static MR_bool MR_CALL 
mercury__integer__string_to_integer_acc_3_p_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__STATE_VARIABLE_Integer_0_2,
  MR_Word * mercury__integer__STATE_VARIABLE_Integer_3);

static MR_String MR_CALL 
mercury__integer__digits_to_string_3_f_0(
  MR_Integer mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__HeadVar__3_3);

static void MR_CALL 
mercury__integer__digits_to_strings_4_p_0(
  MR_Integer mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__STATE_VARIABLE_Strs_0_3,
  MR_Word * mercury__integer__STATE_VARIABLE_Strs_4);

static MR_Word MR_CALL 
mercury__integer__printbase_rep_1_4_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__HeadVar__3_3,
  MR_Word mercury__integer__Carry_4);

static MR_Word MR_CALL 
mercury__integer__printbase_pos_mul_list_4_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__Carry_3,
  MR_Word mercury__integer__HeadVar__4_4);

static void MR_CALL 
mercury__integer__printbase_mul_by_digit_2_5_p_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Integer mercury__integer__D_2,
  MR_Integer * mercury__integer__HeadVar__3_3,
  MR_Word mercury__integer__HeadVar__4_4,
  MR_Word * mercury__integer__HeadVar__5_5);

static void MR_CALL 
mercury__integer__printbase_add_pairs_5_p_0(
  MR_Word mercury__integer__Base_6,
  MR_Integer * mercury__integer__Div_7,
  MR_Word mercury__integer__HeadVar__3_3,
  MR_Word mercury__integer__HeadVar__4_4,
  MR_Word * mercury__integer__Ds_12);

static void MR_CALL 
mercury__integer__printbase_add_pairs_equal_5_p_0(
  MR_Word mercury__integer__Base_1,
  MR_Integer * mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__HeadVar__3_3,
  MR_Word mercury__integer__HeadVar__4_4,
  MR_Word * mercury__integer__HeadVar__5_5);

static MR_Word MR_CALL 
mercury__integer__printbase_pos_int_to_digits_2_3_f_0(
  MR_Word mercury__integer__Base_5,
  MR_Integer mercury__integer__D_6,
  MR_Word mercury__integer__Tail_7);

static MR_Unsigned MR_CALL 
mercury__integer__uint_list_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Unsigned mercury__integer__Accum_2);

static MR_Word MR_CALL 
mercury__integer__uint_to_digits_2_2_f_0(
  MR_Unsigned mercury__integer__U_4,
  MR_Word mercury__integer__Tail_5);

static MR_Word MR_CALL 
mercury__integer__pos_int_to_digits_2_2_f_0(
  MR_Integer mercury__integer__D_4,
  MR_Word mercury__integer__Tail_5);

static MR_Integer MR_CALL 
mercury__integer__int_list_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Integer mercury__integer__Accum_2);

static MR_Word MR_CALL 
mercury__integer__big_xor_not_2_f_0(
  MR_Word mercury__integer__X1_4,
  MR_Word mercury__integer__NotX2_5);

static MR_Word MR_CALL 
mercury__integer__xor_pairs_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__integer__xor_pairs_equal_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__integer__big_or_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Word mercury__integer__Y_5);

static MR_Word MR_CALL 
mercury__integer__and_not_pairs_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__integer__and_not_pairs_equal_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__integer__or_pairs_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__integer__or_pairs_equal_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__integer__and_pairs_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__integer__and_pairs_equal_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__integer__rightshift_4_f_0(
  MR_Integer mercury__integer__HeadVar__1_1,
  MR_Integer mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__HeadVar__3_3,
  MR_Integer mercury__integer__HeadVar__4_4);

static MR_Word MR_CALL 
mercury__integer__big_pow_sqmul_2_f_0(
  MR_Word mercury__integer__A_4,
  MR_Word mercury__integer__N_5);

static void MR_CALL 
mercury__integer__quot_rem_4_p_0(
  MR_Word mercury__integer__U_5,
  MR_Word mercury__integer__V_6,
  MR_Word * mercury__integer__Quot_7,
  MR_Word * mercury__integer__Rem_8);

static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_f_0(
  MR_Integer mercury__integer__Digit_1,
  MR_Word mercury__integer__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__integer__div_by_digit_1_3_f_0(
  MR_Integer mercury__integer__X_1,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Integer mercury__integer__D_3);

static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_3_f_0(
  MR_Integer mercury__integer__X_1,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Integer mercury__integer__D_3);

static void MR_CALL 
mercury__integer__quot_rem_2_5_p_0(
  MR_Word mercury__integer__Ur_6,
  MR_Word mercury__integer__U_7,
  MR_Word mercury__integer__V_8,
  MR_Word * mercury__integer__Quot_9,
  MR_Word * mercury__integer__Rem_10);

static MR_Word MR_CALL 
mercury__integer__integer_prepend_2_f_0(
  MR_Integer mercury__integer__Digit_4,
  MR_Word mercury__integer__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__integer__integer_append_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Integer mercury__integer__Digit_6);

static MR_Word MR_CALL 
mercury__integer__mul_by_digit_2_f_0(
  MR_Integer mercury__integer__Digit_4,
  MR_Word mercury__integer__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__integer__pos_minus_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2);

static MR_bool MR_CALL 
mercury__integer__pos_geq_2_p_0(
  MR_Word mercury__integer__X_3,
  MR_Word mercury__integer__Y_4);

static MR_Word MR_CALL 
mercury__integer__det_tail_1_f_0(
  MR_Word mercury__integer__HeadVar__1_1);

static MR_Integer MR_CALL 
mercury__integer__det_second_1_f_0(
  MR_Word mercury__integer__HeadVar__1_1);

static MR_Integer MR_CALL 
mercury__integer__det_first_1_f_0(
  MR_Word mercury__integer__HeadVar__1_1);

static MR_Word MR_CALL 
mercury__integer__pos_mul_karatsuba_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__integer__big_left_shift_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Integer mercury__integer__I_5);

static void MR_CALL 
mercury__integer__leftshift_6_p_0(
  MR_Integer mercury__integer__HeadVar__1_1,
  MR_Integer mercury__integer__HeadVar__2_2,
  MR_Integer mercury__integer__Len_3,
  MR_Word mercury__integer__HeadVar__4_4,
  MR_Integer * mercury__integer__Carry_5,
  MR_Word * mercury__integer__DigitsOut_6);

static void MR_CALL 
mercury__integer__zeros_3_p_0(
  MR_Integer mercury__integer__Len_4,
  MR_Word mercury__integer__Digits0_5,
  MR_Word * mercury__integer__Digits_6);

static MR_Word MR_CALL 
mercury__integer__pos_mul_list_3_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__Carry_2,
  MR_Word mercury__integer__HeadVar__3_3);

static void MR_CALL 
mercury__integer__mul_by_digit_2_4_p_0(
  MR_Integer mercury__integer__D_1,
  MR_Integer * mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__HeadVar__3_3,
  MR_Word * mercury__integer__HeadVar__4_4);

static MR_Word MR_CALL 
mercury__integer__mul_base_2_1_f_0(
  MR_Word mercury__integer__HeadVar__1_1);

static void MR_CALL 
mercury__integer__diff_pairs_4_p_0(
  MR_Integer * mercury__integer__Div_5,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__HeadVar__3_3,
  MR_Word * mercury__integer__Ds_10);

static void MR_CALL 
mercury__integer__diff_pairs_equal_4_p_0(
  MR_Integer * mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__HeadVar__3_3,
  MR_Word * mercury__integer__HeadVar__4_4);

static void MR_CALL 
mercury__integer__add_pairs_4_p_0(
  MR_Integer * mercury__integer__Div_5,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__HeadVar__3_3,
  MR_Word * mercury__integer__Ds_10);

static void MR_CALL 
mercury__integer__add_pairs_equal_4_p_0(
  MR_Integer * mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__HeadVar__3_3,
  MR_Word * mercury__integer__HeadVar__4_4);

static MR_Word MR_CALL 
mercury__integer__decap_1_f_0(
  MR_Word mercury__integer__HeadVar__1_1);


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
#include "uint.mh"
#include "version_array.mh"



const MR_TypeCtorInfo_Struct mercury__integer__integer__type_ctor_info_digit_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct1 mercury__integer__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo mercury__integer__integer__field_types_integer_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__integer__list__ti_list_1builtin__type_ctor_info_int_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__integer__integer__du_stag_ordered_integer_0_0[1] = {
  &mercury__integer__integer__du_functor_desc_integer_0_0
};

static const MR_DuPtagLayout mercury__integer__integer__du_ptag_ordered_integer_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__integer__integer__du_stag_ordered_integer_0_0
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
  (MR_Integer) 17,
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

static const MR_Integer mercury__integer__integer__functor_number_map_printbase_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__integer__integer__notag_functor_desc_printbase_0 = {
  (MR_String) "printbase",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__integer__integer__type_ctor_info_printbase_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

const MR_TypeCtorInfo_Struct mercury__integer__integer__type_ctor_info_sign_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static MR_bool MR_CALL 
mercury__integer____Unify____digit_0_0_10001(
  MR_Box mercury__integer__wrapper_arg_1,
  MR_Box mercury__integer__wrapper_arg_2)
{
  {
    MR_bool mercury__integer__succeeded;

    {
      mercury__integer__succeeded = mercury__integer____Unify____digit_0_0(((MR_Integer) mercury__integer__wrapper_arg_1), ((MR_Integer) mercury__integer__wrapper_arg_2));
    }
    return mercury__integer__succeeded;
  }
}

static void MR_CALL 
mercury__integer____Compare____digit_0_0_10001(
  MR_Box * mercury__integer__wrapper_arg_1,
  MR_Box mercury__integer__wrapper_arg_2,
  MR_Box mercury__integer__wrapper_arg_3)
{
  {
    MR_Word mercury__integer__conv0_HeadVar__1_1;

    {
      mercury__integer____Compare____digit_0_0(&mercury__integer__conv0_HeadVar__1_1, ((MR_Integer) mercury__integer__wrapper_arg_2), ((MR_Integer) mercury__integer__wrapper_arg_3));
    }
    *mercury__integer__wrapper_arg_1 = ((MR_Box) (mercury__integer__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__integer____Unify____integer_0_0_10001(
  MR_Box mercury__integer__wrapper_arg_1,
  MR_Box mercury__integer__wrapper_arg_2)
{
  {
    MR_bool mercury__integer__succeeded;

    {
      mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(((MR_Word) mercury__integer__wrapper_arg_1), ((MR_Word) mercury__integer__wrapper_arg_2));
    }
    return mercury__integer__succeeded;
  }
}

static void MR_CALL 
mercury__integer____Compare____integer_0_0_10001(
  MR_Box * mercury__integer__wrapper_arg_1,
  MR_Box mercury__integer__wrapper_arg_2,
  MR_Box mercury__integer__wrapper_arg_3)
{
  {
    MR_Word mercury__integer__conv0_HeadVar__1_1;

    {
      mercury__integer____Compare____integer_0_0(&mercury__integer__conv0_HeadVar__1_1, ((MR_Word) mercury__integer__wrapper_arg_2), ((MR_Word) mercury__integer__wrapper_arg_3));
    }
    *mercury__integer__wrapper_arg_1 = ((MR_Box) (mercury__integer__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__integer____Unify____printbase_0_0_10001(
  MR_Box mercury__integer__wrapper_arg_1,
  MR_Box mercury__integer__wrapper_arg_2)
{
  {
    MR_bool mercury__integer__succeeded;

    {
      mercury__integer__succeeded = mercury__integer____Unify____printbase_0_0(((MR_Word) mercury__integer__wrapper_arg_1), ((MR_Word) mercury__integer__wrapper_arg_2));
    }
    return mercury__integer__succeeded;
  }
}

static void MR_CALL 
mercury__integer____Compare____printbase_0_0_10001(
  MR_Box * mercury__integer__wrapper_arg_1,
  MR_Box mercury__integer__wrapper_arg_2,
  MR_Box mercury__integer__wrapper_arg_3)
{
  {
    MR_Word mercury__integer__conv0_HeadVar__1_1;

    {
      mercury__integer____Compare____printbase_0_0(&mercury__integer__conv0_HeadVar__1_1, ((MR_Word) mercury__integer__wrapper_arg_2), ((MR_Word) mercury__integer__wrapper_arg_3));
    }
    *mercury__integer__wrapper_arg_1 = ((MR_Box) (mercury__integer__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__integer____Unify____sign_0_0_10001(
  MR_Box mercury__integer__wrapper_arg_1,
  MR_Box mercury__integer__wrapper_arg_2)
{
  {
    MR_bool mercury__integer__succeeded;

    {
      mercury__integer__succeeded = mercury__integer____Unify____sign_0_0(((MR_Integer) mercury__integer__wrapper_arg_1), ((MR_Integer) mercury__integer__wrapper_arg_2));
    }
    return mercury__integer__succeeded;
  }
}

static void MR_CALL 
mercury__integer____Compare____sign_0_0_10001(
  MR_Box * mercury__integer__wrapper_arg_1,
  MR_Box mercury__integer__wrapper_arg_2,
  MR_Box mercury__integer__wrapper_arg_3)
{
  {
    MR_Word mercury__integer__conv0_HeadVar__1_1;

    {
      mercury__integer____Compare____sign_0_0(&mercury__integer__conv0_HeadVar__1_1, ((MR_Integer) mercury__integer__wrapper_arg_2), ((MR_Integer) mercury__integer__wrapper_arg_3));
    }
    *mercury__integer__wrapper_arg_1 = ((MR_Box) (mercury__integer__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__integer__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__integer____Compare____sign_0_0(
  MR_Word * mercury__integer__HeadVar__1_1,
  MR_Integer mercury__integer__HeadVar__2_2,
  MR_Integer mercury__integer__HeadVar__3_3)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__Cast_HeadVar1_4 = mercury__integer__HeadVar__2_2;
    MR_Integer mercury__integer__Cast_HeadVar2_5 = mercury__integer__HeadVar__3_3;

    mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_4 < mercury__integer__Cast_HeadVar2_5);
    if (mercury__integer__succeeded)
      *mercury__integer__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_4 == mercury__integer__Cast_HeadVar2_5);
        if (mercury__integer__succeeded)
          *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__integer__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__integer____Unify____sign_0_0(
  MR_Integer mercury__integer__HeadVar__1_1,
  MR_Integer mercury__integer__HeadVar__2_2)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__Cast_HeadVar1_3 = mercury__integer__HeadVar__1_1;
    MR_Integer mercury__integer__Cast_HeadVar2_4 = mercury__integer__HeadVar__2_2;

    mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_3 == mercury__integer__Cast_HeadVar2_4);
    return mercury__integer__succeeded;
  }
}

void MR_CALL 
mercury__integer____Compare____printbase_0_0(
  MR_Word * mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__HeadVar__3_3)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__CastX_6 = (MR_Integer) mercury__integer__HeadVar__2_2;
    MR_Integer mercury__integer__CastY_7 = (MR_Integer) mercury__integer__HeadVar__3_3;

    mercury__integer__succeeded = (mercury__integer__CastX_6 == mercury__integer__CastY_7);
    if (mercury__integer__succeeded)
      *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__integer__ArgX1_4 = (MR_Integer) mercury__integer__HeadVar__2_2;
        MR_Integer mercury__integer__ArgY1_5 = (MR_Integer) mercury__integer__HeadVar__3_3;

        mercury__integer__succeeded = (mercury__integer__ArgX1_4 < mercury__integer__ArgY1_5);
        if (mercury__integer__succeeded)
          *mercury__integer__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            mercury__integer__succeeded = (mercury__integer__ArgX1_4 == mercury__integer__ArgY1_5);
            if (mercury__integer__succeeded)
              *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
            else
              *mercury__integer__HeadVar__1_1 = (MR_Integer) 2;
          }
      }
  }
}

MR_bool MR_CALL 
mercury__integer____Unify____printbase_0_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__CastX_5 = (MR_Integer) mercury__integer__HeadVar__1_1;
    MR_Integer mercury__integer__CastY_6 = (MR_Integer) mercury__integer__HeadVar__2_2;

    mercury__integer__succeeded = (mercury__integer__CastX_5 == mercury__integer__CastY_6);
    if (mercury__integer__succeeded)
      mercury__integer__succeeded = MR_TRUE;
    else
      {
        MR_Integer mercury__integer__ArgX1_3 = (MR_Integer) mercury__integer__HeadVar__1_1;
        MR_Integer mercury__integer__ArgY1_4 = (MR_Integer) mercury__integer__HeadVar__2_2;

        mercury__integer__succeeded = (mercury__integer__ArgX1_3 == mercury__integer__ArgY1_4);
      }
    return mercury__integer__succeeded;
  }
}

void MR_CALL 
mercury__integer____Compare____digit_0_0(
  MR_Word * mercury__integer__HeadVar__1_1,
  MR_Integer mercury__integer__HeadVar__2_2,
  MR_Integer mercury__integer__HeadVar__3_3)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__Cast_HeadVar1_4 = mercury__integer__HeadVar__2_2;
    MR_Integer mercury__integer__Cast_HeadVar2_5 = mercury__integer__HeadVar__3_3;

    mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_4 < mercury__integer__Cast_HeadVar2_5);
    if (mercury__integer__succeeded)
      *mercury__integer__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_4 == mercury__integer__Cast_HeadVar2_5);
        if (mercury__integer__succeeded)
          *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__integer__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__integer____Unify____digit_0_0(
  MR_Integer mercury__integer__HeadVar__1_1,
  MR_Integer mercury__integer__HeadVar__2_2)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__Cast_HeadVar1_3 = mercury__integer__HeadVar__1_1;
    MR_Integer mercury__integer__Cast_HeadVar2_4 = mercury__integer__HeadVar__2_2;

    mercury__integer__succeeded = (mercury__integer__Cast_HeadVar1_3 == mercury__integer__Cast_HeadVar2_4);
    return mercury__integer__succeeded;
  }
}

MR_Word MR_CALL 
mercury__integer__big_rem_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Word mercury__integer__Y_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Rem_6;
    MR_Word mercury__integer___Quot_7;

    {
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer___Quot_7, &mercury__integer__Rem_6);
    }
    return mercury__integer__Rem_6;
  }
}

MR_Word MR_CALL 
mercury__integer__big_quot_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Word mercury__integer__Y_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Quot_6;
    MR_Word mercury__integer___Rem_7;

    {
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer__Quot_6, &mercury__integer___Rem_7);
    }
    return mercury__integer__Quot_6;
  }
}

MR_Word MR_CALL 
mercury__integer__big_neg_1_f_0(
  MR_Word mercury__integer__HeadVar__1_1)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__2_2;
    MR_Integer mercury__integer__S_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__integer__Digits0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__integer__Digits_5;
    MR_Integer mercury__integer__Var_6 = ((MR_Integer) 0 - mercury__integer__S_3);

    {
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_4, &mercury__integer__Digits_5);
    }
    {
      mercury__integer__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__Var_6));
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__Digits_5));
    }
    return mercury__integer__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__integer__big_cmp_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Word mercury__integer__Y_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Result_6;

    {
      mercury__integer____Compare____integer_0_0(&mercury__integer__Result_6, mercury__integer__X_4, mercury__integer__Y_5);
    }
    return mercury__integer__Result_6;
  }
}

MR_bool MR_CALL 
mercury__integer__big_isnegative_1_p_0(
  MR_Word mercury__integer__HeadVar__1_1)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__Sign_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__integer__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

    mercury__integer__succeeded = (mercury__integer__Sign_2 < (MR_Integer) 0);
    return mercury__integer__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__integer__integer_signum_1_f_0(
  MR_Word mercury__integer__HeadVar__1_1)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__HeadVar__2_2;
    MR_Integer mercury__integer__Sign_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__integer__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

    {
      mercury__integer__HeadVar__2_2 = mercury__integer__signum_1_f_0(mercury__integer__Sign_3);
    }
    return mercury__integer__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__integer__base_0_f_0(void)
{
  {
    MR_bool mercury__integer__succeeded;

    return (MR_Integer) 16384;
  }
}

MR_bool MR_CALL 
mercury__integer__from_base_string_underscore_3_p_0(
  MR_Integer mercury__integer__Base_4,
  MR_String mercury__integer__String_5,
  MR_Word * mercury__integer__Integer_6)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Char mercury__integer__Char_7;
    MR_Integer mercury__integer__Len_8;
    MR_Integer mercury__integer__V_7_37;

{
#define MR_PROC_LABEL mercury__integer__from_base_string_underscore_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_7_37  = Length;
}
{
#define MR_PROC_LABEL mercury__integer__from_base_string_underscore_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__integer__V_7_37 ;
		{

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__integer__succeeded)
      {
        {
          mercury__string__unsafe_index_3_p_0(mercury__integer__String_5, (MR_Integer) 0, &mercury__integer__Char_7);
        }
{
#define MR_PROC_LABEL mercury__integer__from_base_string_underscore_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__integer__Len_8  = Length;
}
        mercury__integer__succeeded = (mercury__integer__Char_7 == (MR_Char) 45);
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__PosInteger_9;
            MR_Integer mercury__integer__Var_13;
            MR_Word mercury__integer__Var_14;
            MR_Integer mercury__integer__Var_42;
            MR_Word mercury__integer__Var_43;
            MR_Integer mercury__integer__V_12_50;
            MR_Integer mercury__integer__V_13_52;
            MR_Integer mercury__integer__V_17_53;
            MR_Integer mercury__integer__S_70;
            MR_Word mercury__integer__Digits0_71;
            MR_Word mercury__integer__Digits_72;
            MR_Integer mercury__integer__Var_73;
            MR_Integer mercury__integer__V_16_51;

            mercury__integer__succeeded = (mercury__integer__Len_8 > (MR_Integer) 1);
            if (mercury__integer__succeeded)
              {
                mercury__integer__Var_13 = (MR_Integer) 1;
                mercury__integer__Var_42 = (MR_Integer) 0;
                mercury__integer__Var_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__integer__V_16_51 = (MR_Integer) 0;
                mercury__integer__Var_14 = (MR_Word) &mercury__integer_scalar_common_1[9];
                mercury__integer__V_12_50 = mercury__integer__Var_13;
{
#define MR_PROC_LABEL mercury__integer__from_base_string_underscore_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_17_53  = Length;
}
                mercury__integer__succeeded = (mercury__integer__Len_8 < mercury__integer__V_17_53);
                if (mercury__integer__succeeded)
                  mercury__integer__V_13_52 = mercury__integer__Len_8;
                else
                  mercury__integer__V_13_52 = mercury__integer__V_17_53;
                {
                  mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__Base_4, mercury__integer__String_5, mercury__integer__V_12_50, mercury__integer__V_13_52, mercury__integer__Var_14, &mercury__integer__PosInteger_9);
                }
                if (mercury__integer__succeeded)
                  {
                    mercury__integer__S_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__PosInteger_9, (MR_Integer) 0)));
                    mercury__integer__Digits0_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__PosInteger_9, (MR_Integer) 1)));
                    mercury__integer__Var_73 = ((MR_Integer) 0 - mercury__integer__S_70);
                    {
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_71, &mercury__integer__Digits_72);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *mercury__integer__Integer_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__integer__Var_73));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__Digits_72));
                    }
                    mercury__integer__succeeded = MR_TRUE;
                  }
              }
          }
        else
          {
            mercury__integer__succeeded = (mercury__integer__Char_7 == (MR_Char) 43);
            if (mercury__integer__succeeded)
              {
                MR_Integer mercury__integer__Var_17;
                MR_Word mercury__integer__Var_18;
                MR_Integer mercury__integer__Var_74;
                MR_Word mercury__integer__Var_75;

                mercury__integer__succeeded = (mercury__integer__Len_8 > (MR_Integer) 1);
                if (mercury__integer__succeeded)
                  {
                    mercury__integer__Var_17 = (MR_Integer) 1;
                    mercury__integer__Var_74 = (MR_Integer) 0;
                    mercury__integer__Var_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mercury__integer__Var_18 = (MR_Word) &mercury__integer_scalar_common_1[9];
                    {
                      mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__Base_4, mercury__integer__String_5, mercury__integer__Var_17, mercury__integer__Len_8, mercury__integer__Var_18, mercury__integer__Integer_6);
                    }
                  }
              }
            else
              {
                MR_Word mercury__integer__Var_21 = (MR_Word) &mercury__integer_scalar_common_1[9];
                MR_Word mercury__integer__Var_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__Base_4, mercury__integer__String_5, (MR_Integer) 0, mercury__integer__Len_8, mercury__integer__Var_21, mercury__integer__Integer_6);
                }
              }
          }
      }
    return mercury__integer__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0(
  MR_Integer mercury__integer__Var_18,
  MR_String mercury__integer__V_8_8,
  MR_Integer mercury__integer__V_9_9,
  MR_Integer mercury__integer__V_10_10,
  MR_Word mercury__integer__V_14_11,
  MR_Word * mercury__integer__V_15_12)
{
  {
    MR_bool mercury__integer__succeeded = ((MR_Integer) 0 > mercury__integer__V_9_9);
    MR_Integer mercury__integer__V_12_13;
    MR_Integer mercury__integer__V_13_15;
    MR_Integer mercury__integer__V_17_16;

    if (mercury__integer__succeeded)
      mercury__integer__V_12_13 = (MR_Integer) 0;
    else
      mercury__integer__V_12_13 = mercury__integer__V_9_9;
{
#define MR_PROC_LABEL mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__V_8_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_17_16  = Length;
}
    mercury__integer__succeeded = (mercury__integer__V_10_10 < mercury__integer__V_17_16);
    if (mercury__integer__succeeded)
      mercury__integer__V_13_15 = mercury__integer__V_10_10;
    else
      mercury__integer__V_13_15 = mercury__integer__V_17_16;
    {
      mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__Var_18, mercury__integer__V_8_8, mercury__integer__V_12_13, mercury__integer__V_13_15, mercury__integer__V_14_11, mercury__integer__V_15_12);
    }
    return mercury__integer__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_95_95_91_50_93_95_48_6_p_in__string_0(
  MR_Integer mercury__integer__Var_17,
  MR_String mercury__integer__V_8_8,
  MR_Integer mercury__integer__V_9_9,
  MR_Integer mercury__integer__V_10_10,
  MR_Word mercury__integer__V_14_11,
  MR_Word * mercury__integer__V_15_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__integer__succeeded = (mercury__integer__V_9_9 < mercury__integer__V_10_10);
        MR_Integer mercury__integer__V_12_13;
        MR_Char mercury__integer__V_13_14;

        if (mercury__integer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_95_95_91_50_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__integer__V_8_8 ;
	Index =  mercury__integer__V_9_9 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__integer__V_12_13  = NextIndex;
	 mercury__integer__V_13_14  = Ch;
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__integer__succeeded)
              mercury__integer__succeeded = (mercury__integer__V_12_13 <= mercury__integer__V_10_10);
          }
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__V_16_15;

            {
              mercury__integer__succeeded = mercury__integer__accumulate_integer_underscore_4_p_0(mercury__integer__Var_17, mercury__integer__V_13_14, mercury__integer__V_14_11, &mercury__integer__V_16_15);
            }
            if (mercury__integer__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__integer__next_value_of_V_9_9 = mercury__integer__V_12_13;
                  MR_Word mercury__integer__next_value_of_V_14_11 = mercury__integer__V_16_15;

                  mercury__integer__V_14_11 = mercury__integer__next_value_of_V_14_11;
                  mercury__integer__V_9_9 = mercury__integer__next_value_of_V_9_9;
                }
                continue;
              }
          }
        else
          {
            *mercury__integer__V_15_12 = mercury__integer__V_14_11;
            mercury__integer__succeeded = MR_TRUE;
          }
        return mercury__integer__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__integer__accumulate_integer_underscore_4_p_0(
  MR_Integer mercury__integer__Base_5,
  MR_Char mercury__integer__Char_6,
  MR_Word mercury__integer__STATE_VARIABLE_N_0_10,
  MR_Word * mercury__integer__STATE_VARIABLE_N_11)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__Digit0_8;

    {
      mercury__integer__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__integer__Base_5, mercury__integer__Char_6, &mercury__integer__Digit0_8);
    }
    if (mercury__integer__succeeded)
      {
        MR_Word mercury__integer__Digit_9;
        MR_Word mercury__integer__Var_13;
        MR_Word mercury__integer__Var_14;

        {
          mercury__integer__Digit_9 = mercury__integer__int_to_integer_1_f_0(mercury__integer__Digit0_8);
        }
        {
          mercury__integer__Var_14 = mercury__integer__int_to_integer_1_f_0(mercury__integer__Base_5);
        }
        {
          mercury__integer__Var_13 = mercury__integer__big_mul_2_f_0(mercury__integer__Var_14, mercury__integer__STATE_VARIABLE_N_0_10);
        }
        {
          *mercury__integer__STATE_VARIABLE_N_11 = mercury__integer__big_plus_2_f_0(mercury__integer__Var_13, mercury__integer__Digit_9);
        }
        mercury__integer__succeeded = MR_TRUE;
      }
    else
      {
        mercury__integer__succeeded = (mercury__integer__Char_6 == (MR_Char) 95);
        if (mercury__integer__succeeded)
          {
            *mercury__integer__STATE_VARIABLE_N_11 = mercury__integer__STATE_VARIABLE_N_0_10;
            mercury__integer__succeeded = MR_TRUE;
          }
      }
    return mercury__integer__succeeded;
  }
}

MR_Word MR_CALL 
mercury__integer__det_from_base_string_2_f_0(
  MR_Integer mercury__integer__Base_4,
  MR_String mercury__integer__String_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Integer_6;
    MR_Word mercury__integer__IntegerPrime_7;

    {
      mercury__integer__succeeded = mercury__integer__from_base_string_3_p_0(mercury__integer__Base_4, mercury__integer__String_5, &mercury__integer__IntegerPrime_7);
    }
    if (mercury__integer__succeeded)
      mercury__integer__Integer_6 = mercury__integer__IntegerPrime_7;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_from_base_string\'/2", (MR_String) "conversion failed");
        }
      }
    return mercury__integer__Integer_6;
  }
}

MR_bool MR_CALL 
mercury__integer__from_base_string_2_f_0(
  MR_Integer mercury__integer__Base_4,
  MR_String mercury__integer__String_5,
  MR_Word * mercury__integer__Integer_6)
{
  {
    MR_bool mercury__integer__succeeded;

    {
      mercury__integer__succeeded = mercury__integer__from_base_string_3_p_0(mercury__integer__Base_4, mercury__integer__String_5, mercury__integer__Integer_6);
    }
    return mercury__integer__succeeded;
  }
}

MR_bool MR_CALL 
mercury__integer__from_base_string_3_p_0(
  MR_Integer mercury__integer__Base_4,
  MR_String mercury__integer__String_5,
  MR_Word * mercury__integer__Integer_6)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Char mercury__integer__Char_7;
    MR_Integer mercury__integer__Len_8;
    MR_Integer mercury__integer__V_7_37;

{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_7_37  = Length;
}
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__integer__V_7_37 ;
		{

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__integer__succeeded)
      {
        {
          mercury__string__unsafe_index_3_p_0(mercury__integer__String_5, (MR_Integer) 0, &mercury__integer__Char_7);
        }
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__integer__Len_8  = Length;
}
        mercury__integer__succeeded = (mercury__integer__Char_7 == (MR_Char) 45);
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__PosInteger_9;
            MR_Integer mercury__integer__Var_13;
            MR_Word mercury__integer__Var_14;
            MR_Integer mercury__integer__Var_42;
            MR_Word mercury__integer__Var_43;
            MR_Integer mercury__integer__V_12_50;
            MR_Integer mercury__integer__V_13_52;
            MR_Integer mercury__integer__V_17_53;
            MR_Integer mercury__integer__S_70;
            MR_Word mercury__integer__Digits0_71;
            MR_Word mercury__integer__Digits_72;
            MR_Integer mercury__integer__Var_73;
            MR_Integer mercury__integer__V_16_51;

            mercury__integer__succeeded = (mercury__integer__Len_8 > (MR_Integer) 1);
            if (mercury__integer__succeeded)
              {
                mercury__integer__Var_13 = (MR_Integer) 1;
                mercury__integer__Var_42 = (MR_Integer) 0;
                mercury__integer__Var_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__integer__V_16_51 = (MR_Integer) 0;
                mercury__integer__Var_14 = (MR_Word) &mercury__integer_scalar_common_1[9];
                mercury__integer__V_12_50 = mercury__integer__Var_13;
{
#define MR_PROC_LABEL mercury__integer__from_base_string_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_17_53  = Length;
}
                mercury__integer__succeeded = (mercury__integer__Len_8 < mercury__integer__V_17_53);
                if (mercury__integer__succeeded)
                  mercury__integer__V_13_52 = mercury__integer__Len_8;
                else
                  mercury__integer__V_13_52 = mercury__integer__V_17_53;
                {
                  mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__Base_4, mercury__integer__String_5, mercury__integer__V_12_50, mercury__integer__V_13_52, mercury__integer__Var_14, &mercury__integer__PosInteger_9);
                }
                if (mercury__integer__succeeded)
                  {
                    mercury__integer__S_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__PosInteger_9, (MR_Integer) 0)));
                    mercury__integer__Digits0_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__PosInteger_9, (MR_Integer) 1)));
                    mercury__integer__Var_73 = ((MR_Integer) 0 - mercury__integer__S_70);
                    {
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_71, &mercury__integer__Digits_72);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *mercury__integer__Integer_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__integer__Var_73));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__Digits_72));
                    }
                    mercury__integer__succeeded = MR_TRUE;
                  }
              }
          }
        else
          {
            mercury__integer__succeeded = (mercury__integer__Char_7 == (MR_Char) 43);
            if (mercury__integer__succeeded)
              {
                MR_Integer mercury__integer__Var_17;
                MR_Word mercury__integer__Var_18;
                MR_Integer mercury__integer__Var_74;
                MR_Word mercury__integer__Var_75;

                mercury__integer__succeeded = (mercury__integer__Len_8 > (MR_Integer) 1);
                if (mercury__integer__succeeded)
                  {
                    mercury__integer__Var_17 = (MR_Integer) 1;
                    mercury__integer__Var_74 = (MR_Integer) 0;
                    mercury__integer__Var_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mercury__integer__Var_18 = (MR_Word) &mercury__integer_scalar_common_1[9];
                    {
                      mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__Base_4, mercury__integer__String_5, mercury__integer__Var_17, mercury__integer__Len_8, mercury__integer__Var_18, mercury__integer__Integer_6);
                    }
                  }
              }
            else
              {
                MR_Word mercury__integer__Var_21 = (MR_Word) &mercury__integer_scalar_common_1[9];
                MR_Word mercury__integer__Var_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__Base_4, mercury__integer__String_5, (MR_Integer) 0, mercury__integer__Len_8, mercury__integer__Var_21, mercury__integer__Integer_6);
                }
              }
          }
      }
    return mercury__integer__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0(
  MR_Integer mercury__integer__Var_18,
  MR_String mercury__integer__V_8_8,
  MR_Integer mercury__integer__V_9_9,
  MR_Integer mercury__integer__V_10_10,
  MR_Word mercury__integer__V_14_11,
  MR_Word * mercury__integer__V_15_12)
{
  {
    MR_bool mercury__integer__succeeded = ((MR_Integer) 0 > mercury__integer__V_9_9);
    MR_Integer mercury__integer__V_12_13;
    MR_Integer mercury__integer__V_13_15;
    MR_Integer mercury__integer__V_17_16;

    if (mercury__integer__succeeded)
      mercury__integer__V_12_13 = (MR_Integer) 0;
    else
      mercury__integer__V_12_13 = mercury__integer__V_9_9;
{
#define MR_PROC_LABEL mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_51_95_95_91_50_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__integer__V_8_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__integer__V_17_16  = Length;
}
    mercury__integer__succeeded = (mercury__integer__V_10_10 < mercury__integer__V_17_16);
    if (mercury__integer__succeeded)
      mercury__integer__V_13_15 = mercury__integer__V_10_10;
    else
      mercury__integer__V_13_15 = mercury__integer__V_17_16;
    {
      mercury__integer__succeeded = mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_95_95_91_50_93_95_48_6_p_in__string_0(mercury__integer__Var_18, mercury__integer__V_8_8, mercury__integer__V_12_13, mercury__integer__V_13_15, mercury__integer__V_14_11, mercury__integer__V_15_12);
    }
    return mercury__integer__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_95_95_91_50_93_95_48_6_p_in__string_0(
  MR_Integer mercury__integer__Var_17,
  MR_String mercury__integer__V_8_8,
  MR_Integer mercury__integer__V_9_9,
  MR_Integer mercury__integer__V_10_10,
  MR_Word mercury__integer__V_14_11,
  MR_Word * mercury__integer__V_15_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__integer__succeeded = (mercury__integer__V_9_9 < mercury__integer__V_10_10);
        MR_Integer mercury__integer__V_12_13;
        MR_Char mercury__integer__V_13_14;

        if (mercury__integer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__integer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_95_95_91_50_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__integer__V_8_8 ;
	Index =  mercury__integer__V_9_9 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__integer__V_12_13  = NextIndex;
	 mercury__integer__V_13_14  = Ch;
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__integer__succeeded)
              mercury__integer__succeeded = (mercury__integer__V_12_13 <= mercury__integer__V_10_10);
          }
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__V_16_15;
            MR_Integer mercury__integer__Digit0_23;
            MR_Word mercury__integer__Digit_24;
            MR_Word mercury__integer__Var_26;
            MR_Word mercury__integer__Var_27;

            {
              mercury__integer__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__integer__Var_17, mercury__integer__V_13_14, &mercury__integer__Digit0_23);
            }
            if (mercury__integer__succeeded)
              {
                {
                  mercury__integer__Digit_24 = mercury__integer__int_to_integer_1_f_0(mercury__integer__Digit0_23);
                }
                {
                  mercury__integer__Var_27 = mercury__integer__int_to_integer_1_f_0(mercury__integer__Var_17);
                }
                {
                  mercury__integer__Var_26 = mercury__integer__big_mul_2_f_0(mercury__integer__Var_27, mercury__integer__V_14_11);
                }
                {
                  mercury__integer__V_16_15 = mercury__integer__big_plus_2_f_0(mercury__integer__Var_26, mercury__integer__Digit_24);
                }
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__integer__next_value_of_V_9_9 = mercury__integer__V_12_13;
                  MR_Word mercury__integer__next_value_of_V_14_11 = mercury__integer__V_16_15;

                  mercury__integer__V_14_11 = mercury__integer__next_value_of_V_14_11;
                  mercury__integer__V_9_9 = mercury__integer__next_value_of_V_9_9;
                }
                continue;
              }
          }
        else
          {
            *mercury__integer__V_15_12 = mercury__integer__V_14_11;
            mercury__integer__succeeded = MR_TRUE;
          }
        return mercury__integer__succeeded;
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__integer__det_from_string_1_f_0(
  MR_String mercury__integer__S_3)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__I_4;
    MR_Word mercury__integer__IPrime_5;
    MR_Word mercury__integer__Cs_11;

    {
      mercury__string__to_char_list_2_p_0(mercury__integer__S_3, &mercury__integer__Cs_11);
    }
    {
      mercury__integer__succeeded = mercury__integer__string_to_integer_2_p_0(mercury__integer__Cs_11, &mercury__integer__IPrime_5);
    }
    if (mercury__integer__succeeded)
      mercury__integer__I_4 = mercury__integer__IPrime_5;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_from_string\'/1", (MR_String) "conversion failed");
        }
      }
    return mercury__integer__I_4;
  }
}

MR_bool MR_CALL 
mercury__integer__from_string_2_p_0(
  MR_String mercury__integer__S_3,
  MR_Word * mercury__integer__Big_4)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Cs_5;

    {
      mercury__string__to_char_list_2_p_0(mercury__integer__S_3, &mercury__integer__Cs_5);
    }
    {
      mercury__integer__succeeded = mercury__integer__string_to_integer_2_p_0(mercury__integer__Cs_5, mercury__integer__Big_4);
    }
    return mercury__integer__succeeded;
  }
}

MR_bool MR_CALL 
mercury__integer__from_string_1_f_0(
  MR_String mercury__integer__S_3,
  MR_Word * mercury__integer__Big_4)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Cs_7;

    {
      mercury__string__to_char_list_2_p_0(mercury__integer__S_3, &mercury__integer__Cs_7);
    }
    {
      mercury__integer__succeeded = mercury__integer__string_to_integer_2_p_0(mercury__integer__Cs_7, mercury__integer__Big_4);
    }
    return mercury__integer__succeeded;
  }
}

MR_bool MR_CALL 
mercury__integer__string_to_integer_2_p_0(
  MR_Word mercury__integer__Chars_3,
  MR_Word * mercury__integer__Integer_4)
{
  {
    MR_bool mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__Chars_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Char mercury__integer__HeadChar_5;
    MR_Word mercury__integer__TailChars_6;

    if (mercury__integer__succeeded)
      {
        mercury__integer__HeadChar_5 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Chars_3, (MR_Integer) 0)));
        mercury__integer__TailChars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Chars_3, (MR_Integer) 1)));
        mercury__integer__succeeded = (mercury__integer__HeadChar_5 == (MR_Char) 45);
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__PosInteger_9;
            MR_Word mercury__integer__Var_12;
            MR_Integer mercury__integer__Var_13;
            MR_Integer mercury__integer__Var_16;
            MR_Word mercury__integer__Var_17;
            MR_Char mercury__integer__Var_7;
            MR_Word mercury__integer__Var_8;

            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__TailChars_6)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__integer__succeeded)
              {
                mercury__integer__Var_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__TailChars_6, (MR_Integer) 0)));
                mercury__integer__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__TailChars_6, (MR_Integer) 1)));
                mercury__integer__Var_16 = (MR_Integer) 0;
                mercury__integer__Var_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__integer__Var_12 = (MR_Word) &mercury__integer_scalar_common_1[9];
                {
                  mercury__integer__succeeded = mercury__integer__string_to_integer_acc_3_p_0(mercury__integer__TailChars_6, mercury__integer__Var_12, &mercury__integer__PosInteger_9);
                }
                if (mercury__integer__succeeded)
                  {
                    mercury__integer__Var_13 = (MR_Integer) -1;
                    {
                      *mercury__integer__Integer_4 = mercury__integer__big_sign_2_f_0(mercury__integer__Var_13, mercury__integer__PosInteger_9);
                    }
                    mercury__integer__succeeded = MR_TRUE;
                  }
              }
          }
        else
          {
            mercury__integer__succeeded = (mercury__integer__HeadChar_5 == (MR_Char) 43);
            if (mercury__integer__succeeded)
              {
                MR_Word mercury__integer__Var_14;
                MR_Integer mercury__integer__Var_18;
                MR_Word mercury__integer__Var_19;
                MR_Char mercury__integer__Var_10;
                MR_Word mercury__integer__Var_11;

                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__TailChars_6)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__integer__succeeded)
                  {
                    mercury__integer__Var_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__TailChars_6, (MR_Integer) 0)));
                    mercury__integer__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__TailChars_6, (MR_Integer) 1)));
                    mercury__integer__Var_18 = (MR_Integer) 0;
                    mercury__integer__Var_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mercury__integer__Var_14 = (MR_Word) &mercury__integer_scalar_common_1[9];
                    {
                      mercury__integer__succeeded = mercury__integer__string_to_integer_acc_3_p_0(mercury__integer__TailChars_6, mercury__integer__Var_14, mercury__integer__Integer_4);
                    }
                  }
              }
            else
              {
                MR_Word mercury__integer__Var_15 = (MR_Word) &mercury__integer_scalar_common_1[9];
                MR_Word mercury__integer__Var_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__integer__succeeded = mercury__integer__string_to_integer_acc_3_p_0(mercury__integer__Chars_3, mercury__integer__Var_15, mercury__integer__Integer_4);
                }
              }
          }
      }
    return mercury__integer__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__integer__string_to_integer_acc_3_p_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__STATE_VARIABLE_Integer_0_2,
  MR_Word * mercury__integer__STATE_VARIABLE_Integer_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__integer__succeeded;

        if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__integer__STATE_VARIABLE_Integer_3 = mercury__integer__STATE_VARIABLE_Integer_0_2;
            mercury__integer__succeeded = MR_TRUE;
          }
        else
          {
            MR_Char mercury__integer__C_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__integer__Cs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer mercury__integer__Digit0_10;
            MR_Integer mercury__integer__Z_11;
            MR_Word mercury__integer__Digit_12;
            MR_Char mercury__integer__Var_15;
            MR_Integer mercury__integer__Var_16;
            MR_Word mercury__integer__STATE_VARIABLE_Integer_17_17;
            MR_Word mercury__integer__Var_18;
            MR_Integer mercury__integer__Var_19;
            MR_Word mercury__integer__Var_27;
            MR_Integer mercury__integer__Var_28;
            MR_Word mercury__integer__Var_29;
            MR_Integer mercury__integer__Len_32;
            MR_Word mercury__integer__Digits0_33;
            MR_Integer mercury__integer__Mod_34;
            MR_Word mercury__integer__Digits_35;
            MR_Integer mercury__integer__L1_40;
            MR_Integer mercury__integer__L2_42;
            MR_Integer mercury__integer__Div_44;
            MR_Word mercury__integer__Ds_45;
            MR_Integer mercury__integer__Len_46;
            MR_Word mercury__integer__D1_41;
            MR_Word mercury__integer__D2_43;

            {
              mercury__integer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__integer__C_7);
            }
            if (mercury__integer__succeeded)
              {
{
#define MR_PROC_LABEL mercury__integer__string_to_integer_acc_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__integer__C_7 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__integer__Digit0_10  = Int;
}
                mercury__integer__Var_15 = (MR_Char) 48;
{
#define MR_PROC_LABEL mercury__integer__string_to_integer_acc_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__integer__Var_15 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__integer__Z_11  = Int;
}
                mercury__integer__Var_16 = (mercury__integer__Digit0_10 - mercury__integer__Z_11);
                mercury__integer__Var_28 = (MR_Integer) 0;
                mercury__integer__Var_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__integer__Var_27 = (MR_Word) &mercury__integer_scalar_common_1[9];
                {
                  mercury__integer__Digit_12 = mercury__integer__pos_int_to_digits_2_2_f_0(mercury__integer__Var_16, mercury__integer__Var_27);
                }
                mercury__integer__Var_19 = (MR_Integer) 10;
                mercury__integer__Len_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__STATE_VARIABLE_Integer_0_2, (MR_Integer) 0)));
                mercury__integer__Digits0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__STATE_VARIABLE_Integer_0_2, (MR_Integer) 1)));
                {
                  mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__Var_19, &mercury__integer__Mod_34, mercury__integer__Digits0_33, &mercury__integer__Digits_35);
                }
                mercury__integer__succeeded = (mercury__integer__Mod_34 == (MR_Integer) 0);
                if (mercury__integer__succeeded)
                  {
                    mercury__integer__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__integer__Var_18, 0) = ((MR_Box) (mercury__integer__Len_32));
                    MR_hl_field(MR_mktag(0), mercury__integer__Var_18, 1) = ((MR_Box) (mercury__integer__Digits_35));
                  }
                else
                  {
                    MR_Integer mercury__integer__Var_36 = (mercury__integer__Len_32 + (MR_Integer) 1);
                    MR_Word mercury__integer__Var_38;

                    {
                      mercury__integer__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__integer__Var_38, 0) = ((MR_Box) (mercury__integer__Mod_34));
                      MR_hl_field(MR_mktag(1), mercury__integer__Var_38, 1) = ((MR_Box) (mercury__integer__Digits_35));
                    }
                    {
                      mercury__integer__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__integer__Var_18, 0) = ((MR_Box) (mercury__integer__Var_36));
                      MR_hl_field(MR_mktag(0), mercury__integer__Var_18, 1) = ((MR_Box) (mercury__integer__Var_38));
                    }
                  }
                mercury__integer__L1_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Digit_12, (MR_Integer) 0)));
                mercury__integer__D1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Digit_12, (MR_Integer) 1)));
                mercury__integer__L2_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_18, (MR_Integer) 0)));
                mercury__integer__D2_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_18, (MR_Integer) 1)));
                {
                  mercury__integer__add_pairs_4_p_0(&mercury__integer__Div_44, mercury__integer__Digit_12, mercury__integer__Var_18, &mercury__integer__Ds_45);
                }
                mercury__integer__succeeded = (mercury__integer__L1_40 > mercury__integer__L2_42);
                if (mercury__integer__succeeded)
                  mercury__integer__Len_46 = mercury__integer__L1_40;
                else
                  mercury__integer__Len_46 = mercury__integer__L2_42;
                mercury__integer__succeeded = (mercury__integer__Div_44 == (MR_Integer) 0);
                if (mercury__integer__succeeded)
                  {
                    mercury__integer__STATE_VARIABLE_Integer_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__integer__STATE_VARIABLE_Integer_17_17, 0) = ((MR_Box) (mercury__integer__Len_46));
                    MR_hl_field(MR_mktag(0), mercury__integer__STATE_VARIABLE_Integer_17_17, 1) = ((MR_Box) (mercury__integer__Ds_45));
                  }
                else
                  {
                    MR_Integer mercury__integer__Var_49 = (mercury__integer__Len_46 + (MR_Integer) 1);
                    MR_Word mercury__integer__Var_51;

                    {
                      mercury__integer__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__integer__Var_51, 0) = ((MR_Box) (mercury__integer__Div_44));
                      MR_hl_field(MR_mktag(1), mercury__integer__Var_51, 1) = ((MR_Box) (mercury__integer__Ds_45));
                    }
                    {
                      mercury__integer__STATE_VARIABLE_Integer_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__integer__STATE_VARIABLE_Integer_17_17, 0) = ((MR_Box) (mercury__integer__Var_49));
                      MR_hl_field(MR_mktag(0), mercury__integer__STATE_VARIABLE_Integer_17_17, 1) = ((MR_Box) (mercury__integer__Var_51));
                    }
                  }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__integer__next_value_of_HeadVar__1_1 = mercury__integer__Cs_8;
                  MR_Word mercury__integer__next_value_of_STATE_VARIABLE_Integer_0_2 = mercury__integer__STATE_VARIABLE_Integer_17_17;

                  mercury__integer__STATE_VARIABLE_Integer_0_2 = mercury__integer__next_value_of_STATE_VARIABLE_Integer_0_2;
                  mercury__integer__HeadVar__1_1 = mercury__integer__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return mercury__integer__succeeded;
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__integer__integer_1_f_0(
  MR_Integer mercury__integer__N_3)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__2_2;

    {
      mercury__integer__HeadVar__2_2 = mercury__integer__int_to_integer_1_f_0(mercury__integer__N_3);
    }
    return mercury__integer__HeadVar__2_2;
  }
}

MR_String MR_CALL 
mercury__integer__to_string_1_f_0(
  MR_Word mercury__integer__Integer_3)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_String mercury__integer__HeadVar__2_2;

    {
      mercury__integer__HeadVar__2_2 = mercury__integer__to_base_string_2_f_0(mercury__integer__Integer_3, (MR_Integer) 10);
    }
    return mercury__integer__HeadVar__2_2;
  }
}

MR_String MR_CALL 
mercury__integer__to_base_string_2_f_0(
  MR_Word mercury__integer__Integer_4,
  MR_Integer mercury__integer__Base_5)
{
  {
    MR_bool mercury__integer__succeeded = ((MR_Integer) 2 <= mercury__integer__Base_5);
    MR_String mercury__integer__String_6;
    MR_Word mercury__integer__PrintBase_7;
    MR_Integer mercury__integer__Sign_8;
    MR_Word mercury__integer__Digits_9;
    MR_Integer mercury__integer__Var_16;
    MR_Integer mercury__integer__Var_12;

    if (mercury__integer__succeeded)
      {
        mercury__integer__Var_12 = (MR_Integer) 36;
        mercury__integer__succeeded = (mercury__integer__Base_5 <= mercury__integer__Var_12);
      }
    if (mercury__integer__succeeded)
      {
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.to_base_string\'/2", (MR_String) "invalid base");
        }
      }
    {
      mercury__int__pow_3_p_0(mercury__integer__Base_5, (MR_Integer) 3, &mercury__integer__Var_16);
    }
    mercury__integer__PrintBase_7 = (MR_Word) mercury__integer__Var_16;
    mercury__integer__Sign_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, (MR_Integer) 0)));
    mercury__integer__Digits_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, (MR_Integer) 1)));
    mercury__integer__succeeded = (mercury__integer__Sign_8 < (MR_Integer) 0);
    if (mercury__integer__succeeded)
      {
        MR_Word mercury__integer__AbsDigits_10;
        MR_String mercury__integer__Var_20;

        {
          mercury__integer__neg_list_2_p_0(mercury__integer__Digits_9, &mercury__integer__AbsDigits_10);
        }
        if ((mercury__integer__AbsDigits_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__integer__Var_20 = (MR_String) "0";
        else
          {
            MR_Word mercury__integer__DigitsInPrintBase_33;
            MR_Word mercury__integer__Var_38;
            MR_Word mercury__integer__Var_39;
            MR_Word mercury__integer__Var_48 = (MR_Word) &mercury__integer_scalar_common_1[9];
            MR_Word mercury__integer__Var_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Integer mercury__integer__Var_32;

            {
              mercury__integer__Var_38 = mercury__integer__printbase_pos_int_to_digits_2_3_f_0(mercury__integer__PrintBase_7, (MR_Integer) 16384, mercury__integer__Var_48);
            }
            {
              mercury__integer__Var_39 = mercury__integer__printbase_rep_1_4_f_0(mercury__integer__PrintBase_7, mercury__integer__AbsDigits_10, mercury__integer__Var_38, mercury__integer__Var_48);
            }
            mercury__integer__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_39, (MR_Integer) 0)));
            mercury__integer__DigitsInPrintBase_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_39, (MR_Integer) 1)));
            if ((mercury__integer__DigitsInPrintBase_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.digits_to_string\'/3", (MR_String) "empty list");
                }
              }
            else
              {
                MR_Integer mercury__integer__Head_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__DigitsInPrintBase_33, (MR_Integer) 0)));
                MR_Word mercury__integer__Tail_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__DigitsInPrintBase_33, (MR_Integer) 1)));
                MR_String mercury__integer__HeadStr_36;
                MR_Word mercury__integer__TailStrs_37;
                MR_Word mercury__integer__Var_44;
                MR_Word mercury__integer__Var_45;

                {
                  mercury__string__int_to_base_string_3_p_0(mercury__integer__Head_34, mercury__integer__Base_5, &mercury__integer__HeadStr_36);
                }
                mercury__integer__Var_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  mercury__integer__digits_to_strings_4_p_0(mercury__integer__Base_5, mercury__integer__Tail_35, mercury__integer__Var_44, &mercury__integer__TailStrs_37);
                }
                {
                  mercury__integer__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_45, 0) = ((MR_Box) (mercury__integer__HeadStr_36));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_45, 1) = ((MR_Box) (mercury__integer__TailStrs_37));
                }
                {
                  mercury__integer__Var_20 = mercury__string__append_list_1_f_0(mercury__integer__Var_45);
                }
              }
          }
        {
          mercury__string__append_3_p_2((MR_String) "-", mercury__integer__Var_20, &mercury__integer__String_6);
        }
      }
    else
      {
        mercury__integer__String_6 = mercury__integer__digits_to_string_3_f_0(mercury__integer__Base_5, mercury__integer__PrintBase_7, mercury__integer__Digits_9);
      }
    return mercury__integer__String_6;
  }
}

static MR_String MR_CALL 
mercury__integer__digits_to_string_3_f_0(
  MR_Integer mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__HeadVar__3_3)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_String mercury__integer__HeadVar__4_4;

    if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__integer__HeadVar__4_4 = (MR_String) "0";
    else
      {
        MR_Word mercury__integer__DigitsInPrintBase_14;
        MR_Word mercury__integer__Var_19;
        MR_Word mercury__integer__Var_20;
        MR_Word mercury__integer__Var_29 = (MR_Word) &mercury__integer_scalar_common_1[9];
        MR_Word mercury__integer__Var_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Integer mercury__integer__Var_13;

        {
          mercury__integer__Var_19 = mercury__integer__printbase_pos_int_to_digits_2_3_f_0(mercury__integer__HeadVar__2_2, (MR_Integer) 16384, mercury__integer__Var_29);
        }
        {
          mercury__integer__Var_20 = mercury__integer__printbase_rep_1_4_f_0(mercury__integer__HeadVar__2_2, mercury__integer__HeadVar__3_3, mercury__integer__Var_19, mercury__integer__Var_29);
        }
        mercury__integer__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_20, (MR_Integer) 0)));
        mercury__integer__DigitsInPrintBase_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_20, (MR_Integer) 1)));
        if ((mercury__integer__DigitsInPrintBase_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.digits_to_string\'/3", (MR_String) "empty list");
            }
          }
        else
          {
            MR_Integer mercury__integer__Head_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__DigitsInPrintBase_14, (MR_Integer) 0)));
            MR_Word mercury__integer__Tail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__DigitsInPrintBase_14, (MR_Integer) 1)));
            MR_String mercury__integer__HeadStr_17;
            MR_Word mercury__integer__TailStrs_18;
            MR_Word mercury__integer__Var_25;
            MR_Word mercury__integer__Var_26;

            {
              mercury__string__int_to_base_string_3_p_0(mercury__integer__Head_15, mercury__integer__HeadVar__1_1, &mercury__integer__HeadStr_17);
            }
            mercury__integer__Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__integer__digits_to_strings_4_p_0(mercury__integer__HeadVar__1_1, mercury__integer__Tail_16, mercury__integer__Var_25, &mercury__integer__TailStrs_18);
            }
            {
              mercury__integer__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__integer__Var_26, 0) = ((MR_Box) (mercury__integer__HeadStr_17));
              MR_hl_field(MR_mktag(1), mercury__integer__Var_26, 1) = ((MR_Box) (mercury__integer__TailStrs_18));
            }
            {
              mercury__integer__HeadVar__4_4 = mercury__string__append_list_1_f_0(mercury__integer__Var_26);
            }
          }
      }
    return mercury__integer__HeadVar__4_4;
  }
}

static void MR_CALL 
mercury__integer__digits_to_strings_4_p_0(
  MR_Integer mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__STATE_VARIABLE_Strs_0_3,
  MR_Word * mercury__integer__STATE_VARIABLE_Strs_4)
{
  {
    MR_bool mercury__integer__succeeded;

    if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__integer__STATE_VARIABLE_Strs_4 = mercury__integer__STATE_VARIABLE_Strs_0_3;
    else
      {
        MR_Integer mercury__integer__H_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__integer__T_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
        MR_String mercury__integer__Str_13;
        MR_Word mercury__integer__STATE_VARIABLE_Strs_16_16;
        MR_String mercury__integer__S1_21;

        {
          mercury__string__int_to_base_string_3_p_0(mercury__integer__H_10, mercury__integer__HeadVar__1_1, &mercury__integer__S1_21);
        }
        {
          mercury__string__pad_left_4_p_0(mercury__integer__S1_21, (MR_Char) 48, (MR_Integer) 3, &mercury__integer__Str_13);
        }
        {
          mercury__integer__digits_to_strings_4_p_0(mercury__integer__HeadVar__1_1, mercury__integer__T_11, mercury__integer__STATE_VARIABLE_Strs_0_3, &mercury__integer__STATE_VARIABLE_Strs_16_16);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__integer__STATE_VARIABLE_Strs_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Str_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__STATE_VARIABLE_Strs_16_16));
        }
      }
  }
}

static MR_Word MR_CALL 
mercury__integer__printbase_rep_1_4_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__HeadVar__3_3,
  MR_Word mercury__integer__Carry_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__integer__succeeded;
        MR_Word mercury__integer__HeadVar__5_5;

        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__integer__HeadVar__5_5 = mercury__integer__Carry_4;
        else
          {
            MR_Integer mercury__integer__X_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__integer__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__integer__Var_14;
            MR_Word mercury__integer__Var_15;
            MR_Word mercury__integer__Var_16;
            MR_Integer mercury__integer__L1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__integer__Ds1_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
            MR_Integer mercury__integer__L2_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_4, (MR_Integer) 0)));
            MR_Word mercury__integer__Ds2_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_4, (MR_Integer) 1)));
            MR_Word mercury__integer__Var_32;
            MR_Word mercury__integer__Var_34;
            MR_Integer mercury__integer__L1_37;
            MR_Integer mercury__integer__L2_39;
            MR_Integer mercury__integer__Div_41;
            MR_Word mercury__integer__Ds_42;
            MR_Integer mercury__integer__Len_43;
            MR_Word mercury__integer__D1_38;
            MR_Word mercury__integer__D2_40;

            mercury__integer__succeeded = (mercury__integer__L1_18 < mercury__integer__L2_20);
            if (mercury__integer__succeeded)
              {
                MR_Word mercury__integer__Var_22 = (MR_Word) &mercury__integer_scalar_common_1[9];
                MR_Word mercury__integer__Var_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__integer__Var_15 = mercury__integer__printbase_pos_mul_list_4_f_0(mercury__integer__HeadVar__1_1, mercury__integer__Ds1_19, mercury__integer__Var_22, mercury__integer__Carry_4);
                }
              }
            else
              {
                MR_Word mercury__integer__Var_24 = (MR_Word) &mercury__integer_scalar_common_1[9];
                MR_Word mercury__integer__Var_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__integer__Var_15 = mercury__integer__printbase_pos_mul_list_4_f_0(mercury__integer__HeadVar__1_1, mercury__integer__Ds2_21, mercury__integer__Var_24, mercury__integer__HeadVar__3_3);
                }
              }
            mercury__integer__Var_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__integer__Var_32 = (MR_Word) &mercury__integer_scalar_common_1[9];
            {
              mercury__integer__Var_16 = mercury__integer__printbase_pos_int_to_digits_2_3_f_0(mercury__integer__HeadVar__1_1, mercury__integer__X_10, mercury__integer__Var_32);
            }
            mercury__integer__L1_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_15, (MR_Integer) 0)));
            mercury__integer__D1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_15, (MR_Integer) 1)));
            mercury__integer__L2_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_16, (MR_Integer) 0)));
            mercury__integer__D2_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_16, (MR_Integer) 1)));
            {
              mercury__integer__printbase_add_pairs_5_p_0(mercury__integer__HeadVar__1_1, &mercury__integer__Div_41, mercury__integer__Var_15, mercury__integer__Var_16, &mercury__integer__Ds_42);
            }
            mercury__integer__succeeded = (mercury__integer__L1_37 > mercury__integer__L2_39);
            if (mercury__integer__succeeded)
              mercury__integer__Len_43 = mercury__integer__L1_37;
            else
              mercury__integer__Len_43 = mercury__integer__L2_39;
            mercury__integer__succeeded = (mercury__integer__Div_41 == (MR_Integer) 0);
            if (mercury__integer__succeeded)
              {
                mercury__integer__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__integer__Var_14, 0) = ((MR_Box) (mercury__integer__Len_43));
                MR_hl_field(MR_mktag(0), mercury__integer__Var_14, 1) = ((MR_Box) (mercury__integer__Ds_42));
              }
            else
              {
                MR_Integer mercury__integer__Var_46 = (mercury__integer__Len_43 + (MR_Integer) 1);
                MR_Word mercury__integer__Var_48;

                {
                  mercury__integer__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_48, 0) = ((MR_Box) (mercury__integer__Div_41));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_48, 1) = ((MR_Box) (mercury__integer__Ds_42));
                }
                {
                  mercury__integer__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_14, 0) = ((MR_Box) (mercury__integer__Var_46));
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_14, 1) = ((MR_Box) (mercury__integer__Var_48));
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__integer__next_value_of_HeadVar__2_2 = mercury__integer__Xs_11;
              MR_Word mercury__integer__next_value_of_Carry_4 = mercury__integer__Var_14;

              mercury__integer__Carry_4 = mercury__integer__next_value_of_Carry_4;
              mercury__integer__HeadVar__2_2 = mercury__integer__next_value_of_HeadVar__2_2;
            }
            continue;
          }
        return mercury__integer__HeadVar__5_5;
      }
      break;
    }
}

static MR_Word MR_CALL 
mercury__integer__printbase_pos_mul_list_4_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__Carry_3,
  MR_Word mercury__integer__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__integer__succeeded;
        MR_Word mercury__integer__HeadVar__5_5;

        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__integer__HeadVar__5_5 = mercury__integer__Carry_3;
        else
          {
            MR_Integer mercury__integer__X_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__integer__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__integer__Var_14;
            MR_Word mercury__integer__Var_15;
            MR_Word mercury__integer__Var_16;
            MR_Integer mercury__integer__Len_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_3, (MR_Integer) 0)));
            MR_Word mercury__integer__Digits_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_3, (MR_Integer) 1)));
            MR_Integer mercury__integer__Len_30;
            MR_Word mercury__integer__Ds_31;
            MR_Integer mercury__integer__Div_32;
            MR_Word mercury__integer__DsOut_33;
            MR_Integer mercury__integer__L1_39;
            MR_Integer mercury__integer__L2_41;
            MR_Integer mercury__integer__Div_43;
            MR_Word mercury__integer__Ds_44;
            MR_Integer mercury__integer__Len_45;
            MR_Word mercury__integer__D1_40;
            MR_Word mercury__integer__D2_42;

            if ((mercury__integer__Digits_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word mercury__integer__Var_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                mercury__integer__Var_15 = (MR_Word) &mercury__integer_scalar_common_1[9];
              }
            else
              {
                MR_Integer mercury__integer__Var_22 = (mercury__integer__Len_18 + (MR_Integer) 1);
                MR_Word mercury__integer__Var_24;

                {
                  mercury__integer__Var_24 = mercury__integer__mul_base_2_1_f_0(mercury__integer__Digits_19);
                }
                {
                  mercury__integer__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_15, 0) = ((MR_Box) (mercury__integer__Var_22));
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_15, 1) = ((MR_Box) (mercury__integer__Var_24));
                }
              }
            mercury__integer__Len_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
            mercury__integer__Ds_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));
            {
              mercury__integer__printbase_mul_by_digit_2_5_p_0(mercury__integer__HeadVar__1_1, mercury__integer__X_10, &mercury__integer__Div_32, mercury__integer__Ds_31, &mercury__integer__DsOut_33);
            }
            mercury__integer__succeeded = (mercury__integer__Div_32 == (MR_Integer) 0);
            if (mercury__integer__succeeded)
              {
                mercury__integer__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__integer__Var_16, 0) = ((MR_Box) (mercury__integer__Len_30));
                MR_hl_field(MR_mktag(0), mercury__integer__Var_16, 1) = ((MR_Box) (mercury__integer__DsOut_33));
              }
            else
              {
                MR_Integer mercury__integer__Var_34 = (mercury__integer__Len_30 + (MR_Integer) 1);
                MR_Word mercury__integer__Var_36;

                {
                  mercury__integer__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_36, 0) = ((MR_Box) (mercury__integer__Div_32));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_36, 1) = ((MR_Box) (mercury__integer__DsOut_33));
                }
                {
                  mercury__integer__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_16, 0) = ((MR_Box) (mercury__integer__Var_34));
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_16, 1) = ((MR_Box) (mercury__integer__Var_36));
                }
              }
            mercury__integer__L1_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_15, (MR_Integer) 0)));
            mercury__integer__D1_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_15, (MR_Integer) 1)));
            mercury__integer__L2_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_16, (MR_Integer) 0)));
            mercury__integer__D2_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_16, (MR_Integer) 1)));
            {
              mercury__integer__printbase_add_pairs_5_p_0(mercury__integer__HeadVar__1_1, &mercury__integer__Div_43, mercury__integer__Var_15, mercury__integer__Var_16, &mercury__integer__Ds_44);
            }
            mercury__integer__succeeded = (mercury__integer__L1_39 > mercury__integer__L2_41);
            if (mercury__integer__succeeded)
              mercury__integer__Len_45 = mercury__integer__L1_39;
            else
              mercury__integer__Len_45 = mercury__integer__L2_41;
            mercury__integer__succeeded = (mercury__integer__Div_43 == (MR_Integer) 0);
            if (mercury__integer__succeeded)
              {
                mercury__integer__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__integer__Var_14, 0) = ((MR_Box) (mercury__integer__Len_45));
                MR_hl_field(MR_mktag(0), mercury__integer__Var_14, 1) = ((MR_Box) (mercury__integer__Ds_44));
              }
            else
              {
                MR_Integer mercury__integer__Var_48 = (mercury__integer__Len_45 + (MR_Integer) 1);
                MR_Word mercury__integer__Var_50;

                {
                  mercury__integer__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_50, 0) = ((MR_Box) (mercury__integer__Div_43));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_50, 1) = ((MR_Box) (mercury__integer__Ds_44));
                }
                {
                  mercury__integer__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_14, 0) = ((MR_Box) (mercury__integer__Var_48));
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_14, 1) = ((MR_Box) (mercury__integer__Var_50));
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__integer__next_value_of_HeadVar__2_2 = mercury__integer__Xs_11;
              MR_Word mercury__integer__next_value_of_Carry_3 = mercury__integer__Var_14;

              mercury__integer__Carry_3 = mercury__integer__next_value_of_Carry_3;
              mercury__integer__HeadVar__2_2 = mercury__integer__next_value_of_HeadVar__2_2;
            }
            continue;
          }
        return mercury__integer__HeadVar__5_5;
      }
      break;
    }
}

static void MR_CALL 
mercury__integer__printbase_mul_by_digit_2_5_p_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Integer mercury__integer__D_2,
  MR_Integer * mercury__integer__HeadVar__3_3,
  MR_Word mercury__integer__HeadVar__4_4,
  MR_Word * mercury__integer__HeadVar__5_5)
{
  {
    MR_bool mercury__integer__succeeded;

    if ((mercury__integer__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__integer__HeadVar__3_3 = (MR_Integer) 0;
        *mercury__integer__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Integer mercury__integer__X_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word mercury__integer__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));
        MR_Integer mercury__integer__Mod_13;
        MR_Word mercury__integer__NewXs_14;
        MR_Integer mercury__integer__DivXs_15;
        MR_Integer mercury__integer__Var_16;
        MR_Integer mercury__integer__Var_17;
        MR_Integer mercury__integer__Base_21;
        MR_Integer mercury__integer__V_6_25;
        MR_Integer mercury__integer__V_7_26;

        {
          mercury__integer__printbase_mul_by_digit_2_5_p_0(mercury__integer__HeadVar__1_1, mercury__integer__D_2, &mercury__integer__DivXs_15, mercury__integer__Xs_12, &mercury__integer__NewXs_14);
        }
        mercury__integer__Var_17 = (mercury__integer__D_2 * mercury__integer__X_11);
        mercury__integer__Var_16 = (mercury__integer__Var_17 + mercury__integer__DivXs_15);
        mercury__integer__Base_21 = (MR_Integer) mercury__integer__HeadVar__1_1;
        {
          mercury__integer__V_7_26 = mercury__int__div_2_f_0(mercury__integer__Var_16, mercury__integer__Base_21);
        }
        mercury__integer__V_6_25 = (mercury__integer__V_7_26 * mercury__integer__Base_21);
        mercury__integer__Mod_13 = (mercury__integer__Var_16 - mercury__integer__V_6_25);
        {
          *mercury__integer__HeadVar__3_3 = mercury__int__div_2_f_0(mercury__integer__Var_16, mercury__integer__Base_21);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__integer__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__NewXs_14));
        }
      }
  }
}

static void MR_CALL 
mercury__integer__printbase_add_pairs_5_p_0(
  MR_Word mercury__integer__Base_6,
  MR_Integer * mercury__integer__Div_7,
  MR_Word mercury__integer__HeadVar__3_3,
  MR_Word mercury__integer__HeadVar__4_4,
  MR_Word * mercury__integer__Ds_12)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__L1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word mercury__integer__D1_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
    MR_Integer mercury__integer__L2_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
    MR_Word mercury__integer__D2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));

    mercury__integer__succeeded = (mercury__integer__L1_8 == mercury__integer__L2_10);
    if (mercury__integer__succeeded)
      {
        mercury__integer__printbase_add_pairs_equal_5_p_0(mercury__integer__Base_6, mercury__integer__Div_7, mercury__integer__D1_9, mercury__integer__D2_11, mercury__integer__Ds_12);
      }
    else
      {
        MR_Integer mercury__integer__H2_13;
        MR_Word mercury__integer__T2_14;

        mercury__integer__succeeded = (mercury__integer__L1_8 < mercury__integer__L2_10);
        if (mercury__integer__succeeded)
          {
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_11)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__integer__succeeded)
              {
                mercury__integer__H2_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_11, (MR_Integer) 0)));
                mercury__integer__T2_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_11, (MR_Integer) 1)));
              }
          }
        if (mercury__integer__succeeded)
          {
            MR_Integer mercury__integer__Div1_15;
            MR_Word mercury__integer__Ds1_16;
            MR_Integer mercury__integer__Mod_17;
            MR_Word mercury__integer__Var_21;
            MR_Integer mercury__integer__Var_22 = (mercury__integer__L2_10 - (MR_Integer) 1);
            MR_Integer mercury__integer__Var_24;
            MR_Integer mercury__integer__Base_42;
            MR_Integer mercury__integer__V_6_46;
            MR_Integer mercury__integer__V_7_47;

            {
              mercury__integer__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_21, 0) = ((MR_Box) (mercury__integer__Var_22));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_21, 1) = ((MR_Box) (mercury__integer__T2_14));
            }
            {
              mercury__integer__printbase_add_pairs_5_p_0(mercury__integer__Base_6, &mercury__integer__Div1_15, mercury__integer__HeadVar__3_3, mercury__integer__Var_21, &mercury__integer__Ds1_16);
            }
            mercury__integer__Var_24 = (mercury__integer__H2_13 + mercury__integer__Div1_15);
            mercury__integer__Base_42 = (MR_Integer) mercury__integer__Base_6;
            {
              mercury__integer__V_7_47 = mercury__int__div_2_f_0(mercury__integer__Var_24, mercury__integer__Base_42);
            }
            mercury__integer__V_6_46 = (mercury__integer__V_7_47 * mercury__integer__Base_42);
            mercury__integer__Mod_17 = (mercury__integer__Var_24 - mercury__integer__V_6_46);
            {
              *mercury__integer__Div_7 = mercury__int__div_2_f_0(mercury__integer__Var_24, mercury__integer__Base_42);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__integer__Ds_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_17));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_16));
            }
          }
        else
          {
            MR_Integer mercury__integer__H1_18;
            MR_Word mercury__integer__T1_19;

            mercury__integer__succeeded = (mercury__integer__L1_8 > mercury__integer__L2_10);
            if (mercury__integer__succeeded)
              {
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_9)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__integer__succeeded)
                  {
                    mercury__integer__H1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_9, (MR_Integer) 0)));
                    mercury__integer__T1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_9, (MR_Integer) 1)));
                  }
              }
            if (mercury__integer__succeeded)
              {
                MR_Word mercury__integer__Var_25;
                MR_Integer mercury__integer__Var_27 = (mercury__integer__L1_8 - (MR_Integer) 1);
                MR_Integer mercury__integer__Var_29;
                MR_Integer mercury__integer__Div1_33;
                MR_Word mercury__integer__Ds1_34;
                MR_Integer mercury__integer__Mod_35;
                MR_Integer mercury__integer__Base_51;
                MR_Integer mercury__integer__V_6_55;
                MR_Integer mercury__integer__V_7_56;

                {
                  mercury__integer__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_25, 0) = ((MR_Box) (mercury__integer__Var_27));
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_25, 1) = ((MR_Box) (mercury__integer__T1_19));
                }
                {
                  mercury__integer__printbase_add_pairs_5_p_0(mercury__integer__Base_6, &mercury__integer__Div1_33, mercury__integer__Var_25, mercury__integer__HeadVar__4_4, &mercury__integer__Ds1_34);
                }
                mercury__integer__Var_29 = (mercury__integer__H1_18 + mercury__integer__Div1_33);
                mercury__integer__Base_51 = (MR_Integer) mercury__integer__Base_6;
                {
                  mercury__integer__V_7_56 = mercury__int__div_2_f_0(mercury__integer__Var_29, mercury__integer__Base_51);
                }
                mercury__integer__V_6_55 = (mercury__integer__V_7_56 * mercury__integer__Base_51);
                mercury__integer__Mod_35 = (mercury__integer__Var_29 - mercury__integer__V_6_55);
                {
                  *mercury__integer__Div_7 = mercury__int__div_2_f_0(mercury__integer__Var_29, mercury__integer__Base_51);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__integer__Ds_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_35));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_34));
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "predicate \140integer.printbase_add_pairs\'/5", (MR_String) "integer.printbase_add_pairs");
                  return;
                }
              }
          }
      }
  }
}

static void MR_CALL 
mercury__integer__printbase_add_pairs_equal_5_p_0(
  MR_Word mercury__integer__Base_1,
  MR_Integer * mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__HeadVar__3_3,
  MR_Word mercury__integer__HeadVar__4_4,
  MR_Word * mercury__integer__HeadVar__5_5)
{
  {
    MR_bool mercury__integer__succeeded;

    if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__integer__HeadVar__2_2 = (MR_Integer) 0;
        *mercury__integer__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word mercury__integer__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer mercury__integer__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));

        if ((mercury__integer__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__integer__HeadVar__2_2 = (MR_Integer) 0;
            *mercury__integer__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Integer mercury__integer__Y_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word mercury__integer__Ys_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));
            MR_Integer mercury__integer__Mod_17;
            MR_Word mercury__integer__TailDs_18;
            MR_Integer mercury__integer__DivTail_19;
            MR_Integer mercury__integer__Var_20;
            MR_Integer mercury__integer__Var_21;
            MR_Integer mercury__integer__Base_27;
            MR_Integer mercury__integer__V_6_31;
            MR_Integer mercury__integer__V_7_32;

            {
              mercury__integer__printbase_add_pairs_equal_5_p_0(mercury__integer__Base_1, &mercury__integer__DivTail_19, mercury__integer__Var_22, mercury__integer__Ys_16, &mercury__integer__TailDs_18);
            }
            mercury__integer__Var_21 = (mercury__integer__Var_23 + mercury__integer__Y_15);
            mercury__integer__Var_20 = (mercury__integer__Var_21 + mercury__integer__DivTail_19);
            mercury__integer__Base_27 = (MR_Integer) mercury__integer__Base_1;
            {
              mercury__integer__V_7_32 = mercury__int__div_2_f_0(mercury__integer__Var_20, mercury__integer__Base_27);
            }
            mercury__integer__V_6_31 = (mercury__integer__V_7_32 * mercury__integer__Base_27);
            mercury__integer__Mod_17 = (mercury__integer__Var_20 - mercury__integer__V_6_31);
            {
              *mercury__integer__HeadVar__2_2 = mercury__int__div_2_f_0(mercury__integer__Var_20, mercury__integer__Base_27);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__integer__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_17));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__TailDs_18));
            }
          }
      }
  }
}

static MR_Word MR_CALL 
mercury__integer__printbase_pos_int_to_digits_2_3_f_0(
  MR_Word mercury__integer__Base_5,
  MR_Integer mercury__integer__D_6,
  MR_Word mercury__integer__Tail_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__integer__succeeded = (mercury__integer__D_6 == (MR_Integer) 0);
        MR_Word mercury__integer__Result_8;

        if (mercury__integer__succeeded)
          mercury__integer__Result_8 = mercury__integer__Tail_7;
        else
          {
            MR_Integer mercury__integer__Length_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_7, (MR_Integer) 0)));
            MR_Word mercury__integer__Digits_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_7, (MR_Integer) 1)));
            MR_Integer mercury__integer__Div_11;
            MR_Integer mercury__integer__Mod_12;
            MR_Word mercury__integer__Var_13;
            MR_Integer mercury__integer__Var_14;
            MR_Word mercury__integer__Var_16;
            MR_Integer mercury__integer__Base_20 = (MR_Integer) mercury__integer__Base_5;
            MR_Integer mercury__integer__V_6_24;
            MR_Integer mercury__integer__V_7_25;

            {
              mercury__integer__V_7_25 = mercury__int__div_2_f_0(mercury__integer__D_6, mercury__integer__Base_20);
            }
            mercury__integer__V_6_24 = (mercury__integer__V_7_25 * mercury__integer__Base_20);
            mercury__integer__Mod_12 = (mercury__integer__D_6 - mercury__integer__V_6_24);
            {
              mercury__integer__Div_11 = mercury__int__div_2_f_0(mercury__integer__D_6, mercury__integer__Base_20);
            }
            mercury__integer__Var_14 = (mercury__integer__Length_9 + (MR_Integer) 1);
            {
              mercury__integer__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__integer__Var_16, 0) = ((MR_Box) (mercury__integer__Mod_12));
              MR_hl_field(MR_mktag(1), mercury__integer__Var_16, 1) = ((MR_Box) (mercury__integer__Digits_10));
            }
            {
              mercury__integer__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_13, 0) = ((MR_Box) (mercury__integer__Var_14));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_13, 1) = ((MR_Box) (mercury__integer__Var_16));
            }
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__integer__next_value_of_D_6 = mercury__integer__Div_11;
              MR_Word mercury__integer__next_value_of_Tail_7 = mercury__integer__Var_13;

              mercury__integer__Tail_7 = mercury__integer__next_value_of_Tail_7;
              mercury__integer__D_6 = mercury__integer__next_value_of_D_6;
            }
            continue;
          }
        return mercury__integer__Result_8;
      }
      break;
    }
}

MR_Float MR_CALL 
mercury__integer__float_1_f_0(
  MR_Word mercury__integer__HeadVar__1_1)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Float mercury__integer__HeadVar__2_2;
    MR_Word mercury__integer__List_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
    MR_Float mercury__integer__Var_5;
    MR_Integer mercury__integer__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

{
#define MR_PROC_LABEL mercury__integer__float_1_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  (MR_Integer) 16384 ;
		{

    FloatVal = IntVal;


		;}
#undef MR_PROC_LABEL
	 mercury__integer__Var_5  = FloatVal;
}
    {
      mercury__integer__HeadVar__2_2 = mercury__integer__float_list_3_f_0(mercury__integer__Var_5, (MR_Float) 0.0000000000000000, mercury__integer__List_4);
    }
    return mercury__integer__HeadVar__2_2;
  }
}

MR_Float MR_CALL 
mercury__integer__float_list_3_f_0(
  MR_Float mercury__integer__FBase_1,
  MR_Float mercury__integer__Accum_2,
  MR_Word mercury__integer__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__integer__succeeded;
        MR_Float mercury__integer__HeadVar__4_4;

        if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__integer__HeadVar__4_4 = mercury__integer__Accum_2;
        else
          {
            MR_Integer mercury__integer__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__integer__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
            MR_Float mercury__integer__Var_11;
            MR_Float mercury__integer__Var_12 = (mercury__integer__Accum_2 * mercury__integer__FBase_1);
            MR_Float mercury__integer__Var_13;

{
#define MR_PROC_LABEL mercury__integer__float_list_3_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  mercury__integer__H_9 ;
		{

    FloatVal = IntVal;


		;}
#undef MR_PROC_LABEL
	 mercury__integer__Var_13  = FloatVal;
}
            mercury__integer__Var_11 = (mercury__integer__Var_12 + mercury__integer__Var_13);
            /* direct tailcall eliminated */
            {
              MR_Float mercury__integer__next_value_of_Accum_2 = mercury__integer__Var_11;
              MR_Word mercury__integer__next_value_of_HeadVar__3_3 = mercury__integer__T_10;

              mercury__integer__HeadVar__3_3 = mercury__integer__next_value_of_HeadVar__3_3;
              mercury__integer__Accum_2 = mercury__integer__next_value_of_Accum_2;
            }
            continue;
          }
        return mercury__integer__HeadVar__4_4;
      }
      break;
    }
}

MR_Unsigned MR_CALL 
mercury__integer__det_to_uint_1_f_0(
  MR_Word mercury__integer__Integer_3)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Unsigned mercury__integer__UInt_4;
    MR_Unsigned mercury__integer__UIntPrime_5;

    {
      mercury__integer__succeeded = mercury__integer__to_uint_2_p_0(mercury__integer__Integer_3, &mercury__integer__UIntPrime_5);
    }
    if (mercury__integer__succeeded)
      mercury__integer__UInt_4 = mercury__integer__UIntPrime_5;
    else
      {
        MR_Word mercury__integer__TypeCtorInfo_8_8 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__integer__Var_6 = (MR_Word) ((MR_Box) ((MR_String) "integer.det_to_uint: domain error (conversion would overflow)"));

        {
          mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_8_8, ((MR_Box) (mercury__integer__Var_6)));
        }
      }
    return mercury__integer__UInt_4;
  }
}

MR_bool MR_CALL 
mercury__integer__to_uint_2_p_0(
  MR_Word mercury__integer__Integer_3,
  MR_Unsigned * mercury__integer__UInt_4)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Digits_6;
    MR_Word mercury__integer__Var_7 = (MR_Word) &mercury__integer_scalar_common_1[9];
    MR_Word mercury__integer__Var_8;
    MR_Unsigned mercury__integer__Var_9;
    MR_Unsigned mercury__integer__Var_10;
    MR_Word mercury__integer__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__integer__C_15;
    MR_Word mercury__integer__C_22;
    MR_Integer mercury__integer___Sign_5;

    {
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_15, mercury__integer__Integer_3, mercury__integer__Var_7);
    }
    switch (mercury__integer__C_15) {
      default:
        mercury__integer__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        mercury__integer__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        mercury__integer__succeeded = MR_TRUE;
        break;
    }
    if (mercury__integer__succeeded)
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
	 mercury__integer__Var_9  = Max;
}
        {
          mercury__integer__Var_8 = mercury__integer__from_uint_1_f_0(mercury__integer__Var_9);
        }
        {
          mercury__integer____Compare____integer_0_0(&mercury__integer__C_22, mercury__integer__Integer_3, mercury__integer__Var_8);
        }
        switch (mercury__integer__C_22) {
          default:
            mercury__integer__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            mercury__integer__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            mercury__integer__succeeded = MR_TRUE;
            break;
        }
        if (mercury__integer__succeeded)
          {
            mercury__integer___Sign_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Integer_3, (MR_Integer) 0)));
            mercury__integer__Digits_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Integer_3, (MR_Integer) 1)));
            mercury__integer__Var_10 = 0U;
            {
              *mercury__integer__UInt_4 = mercury__integer__uint_list_2_f_0(mercury__integer__Digits_6, mercury__integer__Var_10);
            }
            mercury__integer__succeeded = MR_TRUE;
          }
      }
    return mercury__integer__succeeded;
  }
}

static MR_Unsigned MR_CALL 
mercury__integer__uint_list_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Unsigned mercury__integer__Accum_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__integer__succeeded;
        MR_Unsigned mercury__integer__HeadVar__3_3;

        if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__integer__HeadVar__3_3 = mercury__integer__Accum_2;
        else
          {
            MR_Integer mercury__integer__H_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__integer__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
            MR_Unsigned mercury__integer__Var_8;
            MR_Unsigned mercury__integer__Var_9;
            MR_Unsigned mercury__integer__Var_10;
            MR_Unsigned mercury__integer__Var_12;

{
#define MR_PROC_LABEL mercury__integer__uint_list_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I =  (MR_Integer) 16384 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 mercury__integer__Var_10  = U;
}
            mercury__integer__Var_9 = (mercury__integer__Accum_2 * mercury__integer__Var_10);
{
#define MR_PROC_LABEL mercury__integer__uint_list_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I =  mercury__integer__H_5 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 mercury__integer__Var_12  = U;
}
            mercury__integer__Var_8 = (mercury__integer__Var_9 + mercury__integer__Var_12);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__integer__next_value_of_HeadVar__1_1 = mercury__integer__T_6;
              MR_Unsigned mercury__integer__next_value_of_Accum_2 = mercury__integer__Var_8;

              mercury__integer__Accum_2 = mercury__integer__next_value_of_Accum_2;
              mercury__integer__HeadVar__1_1 = mercury__integer__next_value_of_HeadVar__1_1;
            }
            continue;
          }
        return mercury__integer__HeadVar__3_3;
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__integer__from_uint_1_f_0(
  MR_Unsigned mercury__integer__U_3)
{
  {
    MR_bool mercury__integer__succeeded = (mercury__integer__U_3 == 0U);
    MR_Word mercury__integer__Integer_4;

    if (mercury__integer__succeeded)
      {
        MR_Word mercury__integer__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        mercury__integer__Integer_4 = (MR_Word) &mercury__integer_scalar_common_1[9];
      }
    else
      {
        MR_Unsigned mercury__integer__Var_5;

{
#define MR_PROC_LABEL mercury__integer__from_uint_1_f_0

	MR_Integer I;
	MR_Unsigned U;

	I =  (MR_Integer) 16384 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 mercury__integer__Var_5  = U;
}
        mercury__integer__succeeded = (mercury__integer__U_3 < mercury__integer__Var_5);
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__Var_8;
            MR_Integer mercury__integer__Var_9;
            MR_Word mercury__integer__Var_10;

{
#define MR_PROC_LABEL mercury__integer__from_uint_1_f_0

	MR_Unsigned U;
	MR_Integer I;

	U =  mercury__integer__U_3 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	 mercury__integer__Var_9  = I;
}
            mercury__integer__Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__integer__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__integer__Var_8, 0) = ((MR_Box) (mercury__integer__Var_9));
              MR_hl_field(MR_mktag(1), mercury__integer__Var_8, 1) = ((MR_Box) (mercury__integer__Var_10));
            }
            {
              mercury__integer__Integer_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 0) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 1) = ((MR_Box) (mercury__integer__Var_8));
            }
          }
        else
          {
            MR_Word mercury__integer__Var_14 = (MR_Word) &mercury__integer_scalar_common_1[9];
            MR_Word mercury__integer__Var_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__integer__Integer_4 = mercury__integer__uint_to_digits_2_2_f_0(mercury__integer__U_3, mercury__integer__Var_14);
            }
          }
      }
    return mercury__integer__Integer_4;
  }
}

static MR_Word MR_CALL 
mercury__integer__uint_to_digits_2_2_f_0(
  MR_Unsigned mercury__integer__U_4,
  MR_Word mercury__integer__Tail_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__integer__succeeded = (mercury__integer__U_4 == 0U);
        MR_Word mercury__integer__Result_6;

        if (mercury__integer__succeeded)
          mercury__integer__Result_6 = mercury__integer__Tail_5;
        else
          {
            MR_Integer mercury__integer__Length_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_5, (MR_Integer) 0)));
            MR_Word mercury__integer__Digits_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_5, (MR_Integer) 1)));
            MR_Unsigned mercury__integer__Div_9 = (mercury__integer__U_4 >> (MR_Integer) 14);
            MR_Unsigned mercury__integer__Mod_10;
            MR_Word mercury__integer__Var_11;
            MR_Integer mercury__integer__Var_12;
            MR_Word mercury__integer__Var_14;
            MR_Integer mercury__integer__Var_15;
            MR_Unsigned mercury__integer__Var_20;

{
#define MR_PROC_LABEL mercury__integer__uint_to_digits_2_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I =  (MR_Integer) 16383 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 mercury__integer__Var_20  = U;
}
            mercury__integer__Mod_10 = (mercury__integer__U_4 & mercury__integer__Var_20);
            mercury__integer__Var_12 = (mercury__integer__Length_7 + (MR_Integer) 1);
{
#define MR_PROC_LABEL mercury__integer__uint_to_digits_2_2_f_0

	MR_Unsigned U;
	MR_Integer I;

	U =  mercury__integer__Mod_10 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	 mercury__integer__Var_15  = I;
}
            {
              mercury__integer__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__integer__Var_14, 0) = ((MR_Box) (mercury__integer__Var_15));
              MR_hl_field(MR_mktag(1), mercury__integer__Var_14, 1) = ((MR_Box) (mercury__integer__Digits_8));
            }
            {
              mercury__integer__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_11, 0) = ((MR_Box) (mercury__integer__Var_12));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_11, 1) = ((MR_Box) (mercury__integer__Var_14));
            }
            /* direct tailcall eliminated */
            {
              MR_Unsigned mercury__integer__next_value_of_U_4 = mercury__integer__Div_9;
              MR_Word mercury__integer__next_value_of_Tail_5 = mercury__integer__Var_11;

              mercury__integer__Tail_5 = mercury__integer__next_value_of_Tail_5;
              mercury__integer__U_4 = mercury__integer__next_value_of_U_4;
            }
            continue;
          }
        return mercury__integer__Result_6;
      }
      break;
    }
}

MR_Integer MR_CALL 
mercury__integer__int_1_f_0(
  MR_Word mercury__integer__Integer_3)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__HeadVar__2_2;
    MR_Integer mercury__integer__IntPrime_6;

    {
      mercury__integer__succeeded = mercury__integer__to_int_2_p_0(mercury__integer__Integer_3, &mercury__integer__IntPrime_6);
    }
    if (mercury__integer__succeeded)
      mercury__integer__HeadVar__2_2 = mercury__integer__IntPrime_6;
    else
      {
        MR_Word mercury__integer__TypeCtorInfo_8_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__integer__Var_7 = (MR_Word) ((MR_Box) ((MR_String) "integer.det_to_int: domain error (conversion would overflow)"));

        {
          mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_8_9, ((MR_Box) (mercury__integer__Var_7)));
        }
      }
    return mercury__integer__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__integer__det_to_int_1_f_0(
  MR_Word mercury__integer__Integer_3)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__Int_4;
    MR_Integer mercury__integer__IntPrime_5;

    {
      mercury__integer__succeeded = mercury__integer__to_int_2_p_0(mercury__integer__Integer_3, &mercury__integer__IntPrime_5);
    }
    if (mercury__integer__succeeded)
      mercury__integer__Int_4 = mercury__integer__IntPrime_5;
    else
      {
        MR_Word mercury__integer__TypeCtorInfo_8_8 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__integer__Var_6 = (MR_Word) ((MR_Box) ((MR_String) "integer.det_to_int: domain error (conversion would overflow)"));

        {
          mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_8_8, ((MR_Box) (mercury__integer__Var_6)));
        }
      }
    return mercury__integer__Int_4;
  }
}

MR_bool MR_CALL 
mercury__integer__to_int_2_p_0(
  MR_Word mercury__integer__Integer_3,
  MR_Integer * mercury__integer__Int_4)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Digits_6;
    MR_Word mercury__integer__Var_7;
    MR_Integer mercury__integer__Var_8;
    MR_Word mercury__integer__Var_9;
    MR_Integer mercury__integer__Var_10;
    MR_Integer mercury__integer__Var_11;
    MR_Word mercury__integer__C_16;
    MR_Word mercury__integer__C_25;
    MR_Integer mercury__integer___Sign_5;

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
	 mercury__integer__Var_8  = Min;
}
    {
      mercury__integer__Var_7 = mercury__integer__int_to_integer_1_f_0(mercury__integer__Var_8);
    }
    {
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_16, mercury__integer__Integer_3, mercury__integer__Var_7);
    }
    switch (mercury__integer__C_16) {
      default:
        mercury__integer__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        mercury__integer__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        mercury__integer__succeeded = MR_TRUE;
        break;
    }
    if (mercury__integer__succeeded)
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
	 mercury__integer__Var_10  = Max;
}
        {
          mercury__integer__Var_9 = mercury__integer__int_to_integer_1_f_0(mercury__integer__Var_10);
        }
        {
          mercury__integer____Compare____integer_0_0(&mercury__integer__C_25, mercury__integer__Integer_3, mercury__integer__Var_9);
        }
        switch (mercury__integer__C_25) {
          default:
            mercury__integer__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            mercury__integer__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            mercury__integer__succeeded = MR_TRUE;
            break;
        }
        if (mercury__integer__succeeded)
          {
            mercury__integer___Sign_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Integer_3, (MR_Integer) 0)));
            mercury__integer__Digits_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Integer_3, (MR_Integer) 1)));
            mercury__integer__Var_11 = (MR_Integer) 0;
            {
              *mercury__integer__Int_4 = mercury__integer__int_list_2_f_0(mercury__integer__Digits_6, mercury__integer__Var_11);
            }
            mercury__integer__succeeded = MR_TRUE;
          }
      }
    return mercury__integer__succeeded;
  }
}

MR_Word MR_CALL 
mercury__integer__int_to_integer_1_f_0(
  MR_Integer mercury__integer__D_3)
{
  {
    MR_bool mercury__integer__succeeded = (mercury__integer__D_3 == (MR_Integer) 0);
    MR_Word mercury__integer__Int_4;

    if (mercury__integer__succeeded)
      {
        MR_Word mercury__integer__Var_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        mercury__integer__Int_4 = (MR_Word) &mercury__integer_scalar_common_1[9];
      }
    else
      {
        MR_Integer mercury__integer__Var_6;

        mercury__integer__succeeded = (mercury__integer__D_3 > (MR_Integer) 0);
        if (mercury__integer__succeeded)
          {
            mercury__integer__Var_6 = (MR_Integer) 16384;
            mercury__integer__succeeded = (mercury__integer__D_3 < mercury__integer__Var_6);
          }
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__Var_8;
            MR_Word mercury__integer__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__integer__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__integer__Var_8, 0) = ((MR_Box) (mercury__integer__D_3));
              MR_hl_field(MR_mktag(1), mercury__integer__Var_8, 1) = ((MR_Box) (mercury__integer__Var_9));
            }
            {
              mercury__integer__Int_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Int_4, 0) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), mercury__integer__Int_4, 1) = ((MR_Box) (mercury__integer__Var_8));
            }
          }
        else
          {
            MR_Integer mercury__integer__Var_11;
            MR_Integer mercury__integer__Var_12;

            mercury__integer__succeeded = (mercury__integer__D_3 < (MR_Integer) 0);
            if (mercury__integer__succeeded)
              {
                mercury__integer__Var_12 = (MR_Integer) 16384;
                mercury__integer__Var_11 = ((MR_Integer) 0 - mercury__integer__Var_12);
                mercury__integer__succeeded = (mercury__integer__D_3 > mercury__integer__Var_11);
              }
            if (mercury__integer__succeeded)
              {
                MR_Word mercury__integer__Var_14;
                MR_Word mercury__integer__Var_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__integer__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_14, 0) = ((MR_Box) (mercury__integer__D_3));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_14, 1) = ((MR_Box) (mercury__integer__Var_15));
                }
                {
                  mercury__integer__Int_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Int_4, 0) = ((MR_Box) ((MR_Integer) -1));
                  MR_hl_field(MR_mktag(0), mercury__integer__Int_4, 1) = ((MR_Box) (mercury__integer__Var_14));
                }
              }
            else
              {
                MR_Integer mercury__integer__Var_22;

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
	 mercury__integer__Var_22  = Min;
}
                mercury__integer__succeeded = (mercury__integer__D_3 == mercury__integer__Var_22);
                if (mercury__integer__succeeded)
                  {
                    MR_Word mercury__integer__Var_16;
                    MR_Integer mercury__integer__Var_17 = (mercury__integer__D_3 + (MR_Integer) 1);
                    MR_Word mercury__integer__Var_19;
                    MR_Word mercury__integer__Var_32;
                    MR_Integer mercury__integer__S_33;
                    MR_Word mercury__integer__Digits0_34;
                    MR_Word mercury__integer__Digits_35;
                    MR_Integer mercury__integer__Var_36;

                    {
                      mercury__integer__Var_16 = mercury__integer__int_to_integer_1_f_0(mercury__integer__Var_17);
                    }
                    mercury__integer__Var_19 = (MR_Word) &mercury__integer_scalar_common_1[4];
                    mercury__integer__S_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_19, (MR_Integer) 0)));
                    mercury__integer__Digits0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_19, (MR_Integer) 1)));
                    mercury__integer__Var_36 = ((MR_Integer) 0 - mercury__integer__S_33);
                    {
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_34, &mercury__integer__Digits_35);
                    }
                    {
                      mercury__integer__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__integer__Var_32, 0) = ((MR_Box) (mercury__integer__Var_36));
                      MR_hl_field(MR_mktag(0), mercury__integer__Var_32, 1) = ((MR_Box) (mercury__integer__Digits_35));
                    }
                    {
                      mercury__integer__Int_4 = mercury__integer__big_plus_2_f_0(mercury__integer__Var_16, mercury__integer__Var_32);
                    }
                  }
                else
                  {
                    MR_Word mercury__integer__Var_20;
                    MR_Integer mercury__integer__Var_21;
                    MR_Word mercury__integer__Var_40;
                    MR_Word mercury__integer__Var_42;

                    {
                      mercury__int__abs_2_p_0(mercury__integer__D_3, &mercury__integer__Var_21);
                    }
                    mercury__integer__Var_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mercury__integer__Var_40 = (MR_Word) &mercury__integer_scalar_common_1[9];
                    {
                      mercury__integer__Var_20 = mercury__integer__pos_int_to_digits_2_2_f_0(mercury__integer__Var_21, mercury__integer__Var_40);
                    }
                    {
                      mercury__integer__Int_4 = mercury__integer__big_sign_2_f_0(mercury__integer__D_3, mercury__integer__Var_20);
                    }
                  }
              }
          }
      }
    return mercury__integer__Int_4;
  }
}

static MR_Word MR_CALL 
mercury__integer__pos_int_to_digits_2_2_f_0(
  MR_Integer mercury__integer__D_4,
  MR_Word mercury__integer__Tail_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__integer__succeeded = (mercury__integer__D_4 == (MR_Integer) 0);
        MR_Word mercury__integer__Result_6;

        if (mercury__integer__succeeded)
          mercury__integer__Result_6 = mercury__integer__Tail_5;
        else
          {
            MR_Integer mercury__integer__Length_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_5, (MR_Integer) 0)));
            MR_Word mercury__integer__Digits_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Tail_5, (MR_Integer) 1)));
            MR_Integer mercury__integer__Div_9 = (mercury__integer__D_4 >> (MR_Integer) 14);
            MR_Integer mercury__integer__Mod_10 = (mercury__integer__D_4 & (MR_Integer) 16383);
            MR_Word mercury__integer__Var_11;
            MR_Integer mercury__integer__Var_12 = (mercury__integer__Length_7 + (MR_Integer) 1);
            MR_Word mercury__integer__Var_14;

            {
              mercury__integer__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__integer__Var_14, 0) = ((MR_Box) (mercury__integer__Mod_10));
              MR_hl_field(MR_mktag(1), mercury__integer__Var_14, 1) = ((MR_Box) (mercury__integer__Digits_8));
            }
            {
              mercury__integer__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_11, 0) = ((MR_Box) (mercury__integer__Var_12));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_11, 1) = ((MR_Box) (mercury__integer__Var_14));
            }
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__integer__next_value_of_D_4 = mercury__integer__Div_9;
              MR_Word mercury__integer__next_value_of_Tail_5 = mercury__integer__Var_11;

              mercury__integer__Tail_5 = mercury__integer__next_value_of_Tail_5;
              mercury__integer__D_4 = mercury__integer__next_value_of_D_4;
            }
            continue;
          }
        return mercury__integer__Result_6;
      }
      break;
    }
}

static MR_Integer MR_CALL 
mercury__integer__int_list_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Integer mercury__integer__Accum_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__integer__succeeded;
        MR_Integer mercury__integer__HeadVar__3_3;

        if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__integer__HeadVar__3_3 = mercury__integer__Accum_2;
        else
          {
            MR_Integer mercury__integer__H_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__integer__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer mercury__integer__Var_8;
            MR_Integer mercury__integer__Var_9 = (mercury__integer__Accum_2 * (MR_Integer) 16384);

            mercury__integer__Var_8 = (mercury__integer__Var_9 + mercury__integer__H_5);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__integer__next_value_of_HeadVar__1_1 = mercury__integer__T_6;
              MR_Integer mercury__integer__next_value_of_Accum_2 = mercury__integer__Var_8;

              mercury__integer__Accum_2 = mercury__integer__next_value_of_Accum_2;
              mercury__integer__HeadVar__1_1 = mercury__integer__next_value_of_HeadVar__1_1;
            }
            continue;
          }
        return mercury__integer__HeadVar__3_3;
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__integer__xor_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Word mercury__integer__Y_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Result_6;
    MR_Integer mercury__integer__Sign_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
    MR_Word mercury__integer__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

    mercury__integer__succeeded = (mercury__integer__Sign_11 < (MR_Integer) 0);
    if (mercury__integer__succeeded)
      {
        MR_Integer mercury__integer__Sign_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
        MR_Word mercury__integer__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

        mercury__integer__succeeded = (mercury__integer__Sign_14 < (MR_Integer) 0);
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__Var_7;
            MR_Word mercury__integer__Var_8;
            MR_Word mercury__integer__Var_18;
            MR_Word mercury__integer__Var_19 = (MR_Word) &mercury__integer_scalar_common_1[4];
            MR_Integer mercury__integer__S_24;
            MR_Word mercury__integer__Digits0_25;
            MR_Word mercury__integer__Digits_26;
            MR_Integer mercury__integer__Var_27;
            MR_Word mercury__integer__Var_29;
            MR_Word mercury__integer__Var_30;
            MR_Integer mercury__integer__S_35;
            MR_Word mercury__integer__Digits0_36;
            MR_Word mercury__integer__Digits_37;
            MR_Integer mercury__integer__Var_38;
            MR_Word mercury__integer__Var_41;

            {
              mercury__integer__Var_18 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__Var_19);
            }
            mercury__integer__S_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_18, (MR_Integer) 0)));
            mercury__integer__Digits0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_18, (MR_Integer) 1)));
            mercury__integer__Var_27 = ((MR_Integer) 0 - mercury__integer__S_24);
            {
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_25, &mercury__integer__Digits_26);
            }
            {
              mercury__integer__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_7, 0) = ((MR_Box) (mercury__integer__Var_27));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_7, 1) = ((MR_Box) (mercury__integer__Digits_26));
            }
            mercury__integer__Var_30 = (MR_Word) &mercury__integer_scalar_common_1[4];
            {
              mercury__integer__Var_29 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__Var_30);
            }
            mercury__integer__S_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_29, (MR_Integer) 0)));
            mercury__integer__Digits0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_29, (MR_Integer) 1)));
            mercury__integer__Var_38 = ((MR_Integer) 0 - mercury__integer__S_35);
            {
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_36, &mercury__integer__Digits_37);
            }
            {
              mercury__integer__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_8, 0) = ((MR_Box) (mercury__integer__Var_38));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_8, 1) = ((MR_Box) (mercury__integer__Digits_37));
            }
            {
              mercury__integer__Var_41 = mercury__integer__xor_pairs_2_f_0(mercury__integer__Var_7, mercury__integer__Var_8);
            }
            {
              mercury__integer__Result_6 = mercury__integer__decap_1_f_0(mercury__integer__Var_41);
            }
          }
        else
          {
            MR_Word mercury__integer__Var_9;
            MR_Word mercury__integer__Var_43;
            MR_Word mercury__integer__Var_44 = (MR_Word) &mercury__integer_scalar_common_1[4];
            MR_Integer mercury__integer__S_49;
            MR_Word mercury__integer__Digits0_50;
            MR_Word mercury__integer__Digits_51;
            MR_Integer mercury__integer__Var_52;
            MR_Word mercury__integer__Var_55;
            MR_Word mercury__integer__Var_56;
            MR_Word mercury__integer__Var_57;
            MR_Word mercury__integer__Var_60;
            MR_Word mercury__integer__Var_63;
            MR_Word mercury__integer__Var_66;
            MR_Word mercury__integer__Var_68;
            MR_Word mercury__integer__Var_69;
            MR_Integer mercury__integer__S_74;
            MR_Word mercury__integer__Digits0_75;
            MR_Word mercury__integer__Digits_76;
            MR_Integer mercury__integer__Var_77;

            {
              mercury__integer__Var_43 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__Var_44);
            }
            mercury__integer__S_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_43, (MR_Integer) 0)));
            mercury__integer__Digits0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_43, (MR_Integer) 1)));
            mercury__integer__Var_52 = ((MR_Integer) 0 - mercury__integer__S_49);
            {
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_50, &mercury__integer__Digits_51);
            }
            {
              mercury__integer__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_9, 0) = ((MR_Box) (mercury__integer__Var_52));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_9, 1) = ((MR_Box) (mercury__integer__Digits_51));
            }
            {
              mercury__integer__Var_60 = mercury__integer__or_pairs_2_f_0(mercury__integer__Y_5, mercury__integer__Var_9);
            }
            {
              mercury__integer__Var_56 = mercury__integer__decap_1_f_0(mercury__integer__Var_60);
            }
            {
              mercury__integer__Var_63 = mercury__integer__and_pairs_2_f_0(mercury__integer__Y_5, mercury__integer__Var_9);
            }
            {
              mercury__integer__Var_57 = mercury__integer__decap_1_f_0(mercury__integer__Var_63);
            }
            {
              mercury__integer__Var_66 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__Var_56, mercury__integer__Var_57);
            }
            {
              mercury__integer__Var_55 = mercury__integer__decap_1_f_0(mercury__integer__Var_66);
            }
            mercury__integer__Var_69 = (MR_Word) &mercury__integer_scalar_common_1[4];
            {
              mercury__integer__Var_68 = mercury__integer__big_plus_2_f_0(mercury__integer__Var_55, mercury__integer__Var_69);
            }
            mercury__integer__S_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_68, (MR_Integer) 0)));
            mercury__integer__Digits0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_68, (MR_Integer) 1)));
            mercury__integer__Var_77 = ((MR_Integer) 0 - mercury__integer__S_74);
            {
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_75, &mercury__integer__Digits_76);
            }
            {
              mercury__integer__Result_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 0) = ((MR_Box) (mercury__integer__Var_77));
              MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 1) = ((MR_Box) (mercury__integer__Digits_76));
            }
          }
      }
    else
      {
        MR_Integer mercury__integer__Sign_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
        MR_Word mercury__integer__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

        mercury__integer__succeeded = (mercury__integer__Sign_78 < (MR_Integer) 0);
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__Var_10;
            MR_Word mercury__integer__Var_82;
            MR_Word mercury__integer__Var_83 = (MR_Word) &mercury__integer_scalar_common_1[4];
            MR_Integer mercury__integer__S_88;
            MR_Word mercury__integer__Digits0_89;
            MR_Word mercury__integer__Digits_90;
            MR_Integer mercury__integer__Var_91;

            {
              mercury__integer__Var_82 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__Var_83);
            }
            mercury__integer__S_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_82, (MR_Integer) 0)));
            mercury__integer__Digits0_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_82, (MR_Integer) 1)));
            mercury__integer__Var_91 = ((MR_Integer) 0 - mercury__integer__S_88);
            {
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_89, &mercury__integer__Digits_90);
            }
            {
              mercury__integer__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_10, 0) = ((MR_Box) (mercury__integer__Var_91));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_10, 1) = ((MR_Box) (mercury__integer__Digits_90));
            }
            {
              mercury__integer__Result_6 = mercury__integer__big_xor_not_2_f_0(mercury__integer__X_4, mercury__integer__Var_10);
            }
          }
        else
          {
            MR_Word mercury__integer__Var_94;

            {
              mercury__integer__Var_94 = mercury__integer__xor_pairs_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
            }
            {
              mercury__integer__Result_6 = mercury__integer__decap_1_f_0(mercury__integer__Var_94);
            }
          }
      }
    return mercury__integer__Result_6;
  }
}

static MR_Word MR_CALL 
mercury__integer__big_xor_not_2_f_0(
  MR_Word mercury__integer__X1_4,
  MR_Word mercury__integer__NotX2_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__3_3;
    MR_Word mercury__integer__Var_6;
    MR_Word mercury__integer__Var_7;
    MR_Word mercury__integer__Var_8;
    MR_Word mercury__integer__Var_11;
    MR_Word mercury__integer__Var_14;
    MR_Word mercury__integer__Var_17;
    MR_Word mercury__integer__Var_19;
    MR_Word mercury__integer__Var_20;
    MR_Integer mercury__integer__S_25;
    MR_Word mercury__integer__Digits0_26;
    MR_Word mercury__integer__Digits_27;
    MR_Integer mercury__integer__Var_28;

    {
      mercury__integer__Var_11 = mercury__integer__or_pairs_2_f_0(mercury__integer__X1_4, mercury__integer__NotX2_5);
    }
    {
      mercury__integer__Var_7 = mercury__integer__decap_1_f_0(mercury__integer__Var_11);
    }
    {
      mercury__integer__Var_14 = mercury__integer__and_pairs_2_f_0(mercury__integer__X1_4, mercury__integer__NotX2_5);
    }
    {
      mercury__integer__Var_8 = mercury__integer__decap_1_f_0(mercury__integer__Var_14);
    }
    {
      mercury__integer__Var_17 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__Var_7, mercury__integer__Var_8);
    }
    {
      mercury__integer__Var_6 = mercury__integer__decap_1_f_0(mercury__integer__Var_17);
    }
    mercury__integer__Var_20 = (MR_Word) &mercury__integer_scalar_common_1[4];
    {
      mercury__integer__Var_19 = mercury__integer__big_plus_2_f_0(mercury__integer__Var_6, mercury__integer__Var_20);
    }
    mercury__integer__S_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_19, (MR_Integer) 0)));
    mercury__integer__Digits0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_19, (MR_Integer) 1)));
    mercury__integer__Var_28 = ((MR_Integer) 0 - mercury__integer__S_25);
    {
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_26, &mercury__integer__Digits_27);
    }
    {
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__Var_28));
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Digits_27));
    }
    return mercury__integer__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__integer__xor_pairs_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Integer_8;
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

    mercury__integer__succeeded = (mercury__integer__L1_4 == mercury__integer__L2_6);
    if (mercury__integer__succeeded)
      {
        MR_Word mercury__integer__Var_16;

        {
          mercury__integer__Var_16 = mercury__integer__xor_pairs_equal_2_f_0(mercury__integer__D1_5, mercury__integer__D2_7);
        }
        {
          mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__Var_16));
        }
      }
    else
      {
        MR_Integer mercury__integer__H2_9;
        MR_Word mercury__integer__T2_10;

        mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
        if (mercury__integer__succeeded)
          {
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_7)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__integer__succeeded)
              {
                mercury__integer__H2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 0)));
                mercury__integer__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 1)));
              }
          }
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__DsT_12;
            MR_Word mercury__integer__Var_17;
            MR_Word mercury__integer__Var_19;
            MR_Integer mercury__integer__Var_20 = (mercury__integer__L2_6 - (MR_Integer) 1);
            MR_Word mercury__integer__Var_22;
            MR_Integer mercury__integer__Var_11;

            {
              mercury__integer__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_19, 0) = ((MR_Box) (mercury__integer__Var_20));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_19, 1) = ((MR_Box) (mercury__integer__T2_10));
            }
            {
              mercury__integer__Var_17 = mercury__integer__xor_pairs_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__Var_19);
            }
            mercury__integer__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_17, (MR_Integer) 0)));
            mercury__integer__DsT_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_17, (MR_Integer) 1)));
            {
              mercury__integer__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__integer__Var_22, 0) = ((MR_Box) (mercury__integer__H2_9));
              MR_hl_field(MR_mktag(1), mercury__integer__Var_22, 1) = ((MR_Box) (mercury__integer__DsT_12));
            }
            {
              mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L2_6));
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__Var_22));
            }
          }
        else
          {
            MR_Integer mercury__integer__H1_13;
            MR_Word mercury__integer__T1_14;

            mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
            if (mercury__integer__succeeded)
              {
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_5)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__integer__succeeded)
                  {
                    mercury__integer__H1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 0)));
                    mercury__integer__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 1)));
                  }
              }
            if (mercury__integer__succeeded)
              {
                MR_Word mercury__integer__Var_23;
                MR_Word mercury__integer__Var_24;
                MR_Integer mercury__integer__Var_25 = (mercury__integer__L1_4 - (MR_Integer) 1);
                MR_Word mercury__integer__Var_28;
                MR_Word mercury__integer__DsT_32;
                MR_Integer mercury__integer__Var_15;

                {
                  mercury__integer__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_24, 0) = ((MR_Box) (mercury__integer__Var_25));
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_24, 1) = ((MR_Box) (mercury__integer__T1_14));
                }
                {
                  mercury__integer__Var_23 = mercury__integer__xor_pairs_2_f_0(mercury__integer__Var_24, mercury__integer__HeadVar__2_2);
                }
                mercury__integer__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_23, (MR_Integer) 0)));
                mercury__integer__DsT_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_23, (MR_Integer) 1)));
                {
                  mercury__integer__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_28, 0) = ((MR_Box) (mercury__integer__H1_13));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_28, 1) = ((MR_Box) (mercury__integer__DsT_32));
                }
                {
                  mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__Var_28));
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.xor_pairs\'/2", (MR_String) "invalid integer");
                }
              }
          }
      }
    return mercury__integer__Integer_8;
  }
}

static MR_Word MR_CALL 
mercury__integer__xor_pairs_equal_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__3_3;

    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__integer__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mercury__integer__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Integer mercury__integer__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__integer__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__integer__Var_11 = (mercury__integer__Var_14 ^ mercury__integer__Y_9);
            MR_Word mercury__integer__Var_12;

            {
              mercury__integer__Var_12 = mercury__integer__xor_pairs_equal_2_f_0(mercury__integer__Var_13, mercury__integer__Ys_10);
            }
            {
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__Var_11));
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Var_12));
            }
          }
      }
    return mercury__integer__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__integer__f_92_47_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Word mercury__integer__Y_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Result_6;
    MR_Integer mercury__integer__Sign_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
    MR_Word mercury__integer__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

    mercury__integer__succeeded = (mercury__integer__Sign_14 < (MR_Integer) 0);
    if (mercury__integer__succeeded)
      {
        MR_Integer mercury__integer__Sign_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
        MR_Word mercury__integer__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

        mercury__integer__succeeded = (mercury__integer__Sign_17 < (MR_Integer) 0);
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__Var_7;
            MR_Word mercury__integer__Var_8;
            MR_Word mercury__integer__Var_9;
            MR_Word mercury__integer__Var_21;
            MR_Word mercury__integer__Var_22 = (MR_Word) &mercury__integer_scalar_common_1[4];
            MR_Integer mercury__integer__S_27;
            MR_Word mercury__integer__Digits0_28;
            MR_Word mercury__integer__Digits_29;
            MR_Integer mercury__integer__Var_30;
            MR_Word mercury__integer__Var_32;
            MR_Word mercury__integer__Var_33;
            MR_Integer mercury__integer__S_38;
            MR_Word mercury__integer__Digits0_39;
            MR_Word mercury__integer__Digits_40;
            MR_Integer mercury__integer__Var_41;
            MR_Word mercury__integer__Var_44;
            MR_Word mercury__integer__Var_46;
            MR_Word mercury__integer__Var_47;
            MR_Integer mercury__integer__S_52;
            MR_Word mercury__integer__Digits0_53;
            MR_Word mercury__integer__Digits_54;
            MR_Integer mercury__integer__Var_55;

            {
              mercury__integer__Var_21 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__Var_22);
            }
            mercury__integer__S_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_21, (MR_Integer) 0)));
            mercury__integer__Digits0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_21, (MR_Integer) 1)));
            mercury__integer__Var_30 = ((MR_Integer) 0 - mercury__integer__S_27);
            {
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_28, &mercury__integer__Digits_29);
            }
            {
              mercury__integer__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_8, 0) = ((MR_Box) (mercury__integer__Var_30));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_8, 1) = ((MR_Box) (mercury__integer__Digits_29));
            }
            mercury__integer__Var_33 = (MR_Word) &mercury__integer_scalar_common_1[4];
            {
              mercury__integer__Var_32 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__Var_33);
            }
            mercury__integer__S_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_32, (MR_Integer) 0)));
            mercury__integer__Digits0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_32, (MR_Integer) 1)));
            mercury__integer__Var_41 = ((MR_Integer) 0 - mercury__integer__S_38);
            {
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_39, &mercury__integer__Digits_40);
            }
            {
              mercury__integer__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_9, 0) = ((MR_Box) (mercury__integer__Var_41));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_9, 1) = ((MR_Box) (mercury__integer__Digits_40));
            }
            {
              mercury__integer__Var_44 = mercury__integer__and_pairs_2_f_0(mercury__integer__Var_8, mercury__integer__Var_9);
            }
            {
              mercury__integer__Var_7 = mercury__integer__decap_1_f_0(mercury__integer__Var_44);
            }
            mercury__integer__Var_47 = (MR_Word) &mercury__integer_scalar_common_1[4];
            {
              mercury__integer__Var_46 = mercury__integer__big_plus_2_f_0(mercury__integer__Var_7, mercury__integer__Var_47);
            }
            mercury__integer__S_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_46, (MR_Integer) 0)));
            mercury__integer__Digits0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_46, (MR_Integer) 1)));
            mercury__integer__Var_55 = ((MR_Integer) 0 - mercury__integer__S_52);
            {
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_53, &mercury__integer__Digits_54);
            }
            {
              mercury__integer__Result_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 0) = ((MR_Box) (mercury__integer__Var_55));
              MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 1) = ((MR_Box) (mercury__integer__Digits_54));
            }
          }
        else
          {
            MR_Word mercury__integer__Var_10;
            MR_Word mercury__integer__Var_11;
            MR_Word mercury__integer__Var_57;
            MR_Word mercury__integer__Var_58 = (MR_Word) &mercury__integer_scalar_common_1[4];
            MR_Integer mercury__integer__S_63;
            MR_Word mercury__integer__Digits0_64;
            MR_Word mercury__integer__Digits_65;
            MR_Integer mercury__integer__Var_66;
            MR_Word mercury__integer__Var_69;
            MR_Word mercury__integer__Var_71;
            MR_Word mercury__integer__Var_72;
            MR_Integer mercury__integer__S_77;
            MR_Word mercury__integer__Digits0_78;
            MR_Word mercury__integer__Digits_79;
            MR_Integer mercury__integer__Var_80;

            {
              mercury__integer__Var_57 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__Var_58);
            }
            mercury__integer__S_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_57, (MR_Integer) 0)));
            mercury__integer__Digits0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_57, (MR_Integer) 1)));
            mercury__integer__Var_66 = ((MR_Integer) 0 - mercury__integer__S_63);
            {
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_64, &mercury__integer__Digits_65);
            }
            {
              mercury__integer__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_11, 0) = ((MR_Box) (mercury__integer__Var_66));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_11, 1) = ((MR_Box) (mercury__integer__Digits_65));
            }
            {
              mercury__integer__Var_69 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__Var_11, mercury__integer__Y_5);
            }
            {
              mercury__integer__Var_10 = mercury__integer__decap_1_f_0(mercury__integer__Var_69);
            }
            mercury__integer__Var_72 = (MR_Word) &mercury__integer_scalar_common_1[4];
            {
              mercury__integer__Var_71 = mercury__integer__big_plus_2_f_0(mercury__integer__Var_10, mercury__integer__Var_72);
            }
            mercury__integer__S_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_71, (MR_Integer) 0)));
            mercury__integer__Digits0_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_71, (MR_Integer) 1)));
            mercury__integer__Var_80 = ((MR_Integer) 0 - mercury__integer__S_77);
            {
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_78, &mercury__integer__Digits_79);
            }
            {
              mercury__integer__Result_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 0) = ((MR_Box) (mercury__integer__Var_80));
              MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 1) = ((MR_Box) (mercury__integer__Digits_79));
            }
          }
      }
    else
      {
        MR_Integer mercury__integer__Sign_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
        MR_Word mercury__integer__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

        mercury__integer__succeeded = (mercury__integer__Sign_81 < (MR_Integer) 0);
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__Var_12;
            MR_Word mercury__integer__Var_13;
            MR_Word mercury__integer__Var_85;
            MR_Word mercury__integer__Var_86 = (MR_Word) &mercury__integer_scalar_common_1[4];
            MR_Integer mercury__integer__S_91;
            MR_Word mercury__integer__Digits0_92;
            MR_Word mercury__integer__Digits_93;
            MR_Integer mercury__integer__Var_94;
            MR_Word mercury__integer__Var_97;

            {
              mercury__integer__Var_85 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__Var_86);
            }
            mercury__integer__S_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_85, (MR_Integer) 0)));
            mercury__integer__Digits0_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_85, (MR_Integer) 1)));
            mercury__integer__Var_94 = ((MR_Integer) 0 - mercury__integer__S_91);
            {
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_92, &mercury__integer__Digits_93);
            }
            {
              mercury__integer__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_13, 0) = ((MR_Box) (mercury__integer__Var_94));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_13, 1) = ((MR_Box) (mercury__integer__Digits_93));
            }
            {
              mercury__integer__Var_97 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__Var_13, mercury__integer__X_4);
            }
            {
              mercury__integer__Var_12 = mercury__integer__decap_1_f_0(mercury__integer__Var_97);
            }
            {
              mercury__integer__Result_6 = mercury__integer__f_92_1_f_0(mercury__integer__Var_12);
            }
          }
        else
          {
            mercury__integer__Result_6 = mercury__integer__big_or_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
          }
      }
    return mercury__integer__Result_6;
  }
}

static MR_Word MR_CALL 
mercury__integer__big_or_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Word mercury__integer__Y_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__3_3;
    MR_Word mercury__integer__Var_6;

    {
      mercury__integer__Var_6 = mercury__integer__or_pairs_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
    {
      mercury__integer__HeadVar__3_3 = mercury__integer__decap_1_f_0(mercury__integer__Var_6);
    }
    return mercury__integer__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__integer__f_47_92_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Word mercury__integer__Y_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Result_6;
    MR_Integer mercury__integer__Sign_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
    MR_Word mercury__integer__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

    mercury__integer__succeeded = (mercury__integer__Sign_12 < (MR_Integer) 0);
    if (mercury__integer__succeeded)
      {
        MR_Integer mercury__integer__Sign_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
        MR_Word mercury__integer__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

        mercury__integer__succeeded = (mercury__integer__Sign_15 < (MR_Integer) 0);
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__Var_7;
            MR_Word mercury__integer__Var_8;
            MR_Word mercury__integer__Var_9;
            MR_Word mercury__integer__Var_19;
            MR_Word mercury__integer__Var_20 = (MR_Word) &mercury__integer_scalar_common_1[4];
            MR_Integer mercury__integer__S_25;
            MR_Word mercury__integer__Digits0_26;
            MR_Word mercury__integer__Digits_27;
            MR_Integer mercury__integer__Var_28;
            MR_Word mercury__integer__Var_30;
            MR_Word mercury__integer__Var_31;
            MR_Integer mercury__integer__S_36;
            MR_Word mercury__integer__Digits0_37;
            MR_Word mercury__integer__Digits_38;
            MR_Integer mercury__integer__Var_39;
            MR_Word mercury__integer__Var_42;
            MR_Word mercury__integer__Var_44;
            MR_Word mercury__integer__Var_45;
            MR_Integer mercury__integer__S_50;
            MR_Word mercury__integer__Digits0_51;
            MR_Word mercury__integer__Digits_52;
            MR_Integer mercury__integer__Var_53;

            {
              mercury__integer__Var_19 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__Var_20);
            }
            mercury__integer__S_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_19, (MR_Integer) 0)));
            mercury__integer__Digits0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_19, (MR_Integer) 1)));
            mercury__integer__Var_28 = ((MR_Integer) 0 - mercury__integer__S_25);
            {
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_26, &mercury__integer__Digits_27);
            }
            {
              mercury__integer__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_8, 0) = ((MR_Box) (mercury__integer__Var_28));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_8, 1) = ((MR_Box) (mercury__integer__Digits_27));
            }
            mercury__integer__Var_31 = (MR_Word) &mercury__integer_scalar_common_1[4];
            {
              mercury__integer__Var_30 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__Var_31);
            }
            mercury__integer__S_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_30, (MR_Integer) 0)));
            mercury__integer__Digits0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_30, (MR_Integer) 1)));
            mercury__integer__Var_39 = ((MR_Integer) 0 - mercury__integer__S_36);
            {
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_37, &mercury__integer__Digits_38);
            }
            {
              mercury__integer__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_9, 0) = ((MR_Box) (mercury__integer__Var_39));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_9, 1) = ((MR_Box) (mercury__integer__Digits_38));
            }
            {
              mercury__integer__Var_42 = mercury__integer__or_pairs_2_f_0(mercury__integer__Var_8, mercury__integer__Var_9);
            }
            {
              mercury__integer__Var_7 = mercury__integer__decap_1_f_0(mercury__integer__Var_42);
            }
            mercury__integer__Var_45 = (MR_Word) &mercury__integer_scalar_common_1[4];
            {
              mercury__integer__Var_44 = mercury__integer__big_plus_2_f_0(mercury__integer__Var_7, mercury__integer__Var_45);
            }
            mercury__integer__S_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_44, (MR_Integer) 0)));
            mercury__integer__Digits0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_44, (MR_Integer) 1)));
            mercury__integer__Var_53 = ((MR_Integer) 0 - mercury__integer__S_50);
            {
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_51, &mercury__integer__Digits_52);
            }
            {
              mercury__integer__Result_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 0) = ((MR_Box) (mercury__integer__Var_53));
              MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 1) = ((MR_Box) (mercury__integer__Digits_52));
            }
          }
        else
          {
            MR_Word mercury__integer__Var_10;
            MR_Word mercury__integer__Var_55;
            MR_Word mercury__integer__Var_56 = (MR_Word) &mercury__integer_scalar_common_1[4];
            MR_Integer mercury__integer__S_61;
            MR_Word mercury__integer__Digits0_62;
            MR_Word mercury__integer__Digits_63;
            MR_Integer mercury__integer__Var_64;
            MR_Word mercury__integer__Var_67;

            {
              mercury__integer__Var_55 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__Var_56);
            }
            mercury__integer__S_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_55, (MR_Integer) 0)));
            mercury__integer__Digits0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_55, (MR_Integer) 1)));
            mercury__integer__Var_64 = ((MR_Integer) 0 - mercury__integer__S_61);
            {
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_62, &mercury__integer__Digits_63);
            }
            {
              mercury__integer__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_10, 0) = ((MR_Box) (mercury__integer__Var_64));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_10, 1) = ((MR_Box) (mercury__integer__Digits_63));
            }
            {
              mercury__integer__Var_67 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__Y_5, mercury__integer__Var_10);
            }
            {
              mercury__integer__Result_6 = mercury__integer__decap_1_f_0(mercury__integer__Var_67);
            }
          }
      }
    else
      {
        MR_Integer mercury__integer__Sign_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
        MR_Word mercury__integer__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

        mercury__integer__succeeded = (mercury__integer__Sign_68 < (MR_Integer) 0);
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__Var_11;
            MR_Word mercury__integer__Var_72;
            MR_Word mercury__integer__Var_73 = (MR_Word) &mercury__integer_scalar_common_1[4];
            MR_Integer mercury__integer__S_78;
            MR_Word mercury__integer__Digits0_79;
            MR_Word mercury__integer__Digits_80;
            MR_Integer mercury__integer__Var_81;
            MR_Word mercury__integer__Var_84;

            {
              mercury__integer__Var_72 = mercury__integer__big_plus_2_f_0(mercury__integer__Y_5, mercury__integer__Var_73);
            }
            mercury__integer__S_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_72, (MR_Integer) 0)));
            mercury__integer__Digits0_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_72, (MR_Integer) 1)));
            mercury__integer__Var_81 = ((MR_Integer) 0 - mercury__integer__S_78);
            {
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_79, &mercury__integer__Digits_80);
            }
            {
              mercury__integer__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_11, 0) = ((MR_Box) (mercury__integer__Var_81));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_11, 1) = ((MR_Box) (mercury__integer__Digits_80));
            }
            {
              mercury__integer__Var_84 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__X_4, mercury__integer__Var_11);
            }
            {
              mercury__integer__Result_6 = mercury__integer__decap_1_f_0(mercury__integer__Var_84);
            }
          }
        else
          {
            MR_Word mercury__integer__Var_87;

            {
              mercury__integer__Var_87 = mercury__integer__and_pairs_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
            }
            {
              mercury__integer__Result_6 = mercury__integer__decap_1_f_0(mercury__integer__Var_87);
            }
          }
      }
    return mercury__integer__Result_6;
  }
}

static MR_Word MR_CALL 
mercury__integer__and_not_pairs_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Integer_8;
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

    mercury__integer__succeeded = (mercury__integer__L1_4 == mercury__integer__L2_6);
    if (mercury__integer__succeeded)
      {
        MR_Word mercury__integer__Var_16;

        {
          mercury__integer__Var_16 = mercury__integer__and_not_pairs_equal_2_f_0(mercury__integer__D1_5, mercury__integer__D2_7);
        }
        {
          mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__Var_16));
        }
      }
    else
      {
        MR_Word mercury__integer__T2_10;
        MR_Integer mercury__integer__Var_9;

        mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
        if (mercury__integer__succeeded)
          {
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_7)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__integer__succeeded)
              {
                mercury__integer__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 0)));
                mercury__integer__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 1)));
              }
          }
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__DsT_12;
            MR_Word mercury__integer__Var_17;
            MR_Word mercury__integer__Var_19;
            MR_Integer mercury__integer__Var_20 = (mercury__integer__L2_6 - (MR_Integer) 1);
            MR_Integer mercury__integer__Var_11;

            {
              mercury__integer__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_19, 0) = ((MR_Box) (mercury__integer__Var_20));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_19, 1) = ((MR_Box) (mercury__integer__T2_10));
            }
            {
              mercury__integer__Var_17 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__Var_19);
            }
            mercury__integer__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_17, (MR_Integer) 0)));
            mercury__integer__DsT_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_17, (MR_Integer) 1)));
            {
              mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__DsT_12));
            }
          }
        else
          {
            MR_Integer mercury__integer__H1_13;
            MR_Word mercury__integer__T1_14;

            mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
            if (mercury__integer__succeeded)
              {
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_5)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__integer__succeeded)
                  {
                    mercury__integer__H1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 0)));
                    mercury__integer__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 1)));
                  }
              }
            if (mercury__integer__succeeded)
              {
                MR_Word mercury__integer__Var_22;
                MR_Word mercury__integer__Var_23;
                MR_Integer mercury__integer__Var_24 = (mercury__integer__L1_4 - (MR_Integer) 1);
                MR_Word mercury__integer__Var_27;
                MR_Word mercury__integer__DsT_31;
                MR_Integer mercury__integer__Var_15;

                {
                  mercury__integer__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_23, 0) = ((MR_Box) (mercury__integer__Var_24));
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_23, 1) = ((MR_Box) (mercury__integer__T1_14));
                }
                {
                  mercury__integer__Var_22 = mercury__integer__and_not_pairs_2_f_0(mercury__integer__Var_23, mercury__integer__HeadVar__2_2);
                }
                mercury__integer__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_22, (MR_Integer) 0)));
                mercury__integer__DsT_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_22, (MR_Integer) 1)));
                {
                  mercury__integer__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_27, 0) = ((MR_Box) (mercury__integer__H1_13));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_27, 1) = ((MR_Box) (mercury__integer__DsT_31));
                }
                {
                  mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__Var_27));
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.and_not_pairs\'/2", (MR_String) "invalid integer");
                }
              }
          }
      }
    return mercury__integer__Integer_8;
  }
}

static MR_Word MR_CALL 
mercury__integer__and_not_pairs_equal_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__3_3;

    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__integer__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mercury__integer__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Integer mercury__integer__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__integer__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__integer__Var_11;
            MR_Integer mercury__integer__Var_12 = ~(mercury__integer__Y_9);
            MR_Word mercury__integer__Var_13;

            mercury__integer__Var_11 = (mercury__integer__Var_15 & mercury__integer__Var_12);
            {
              mercury__integer__Var_13 = mercury__integer__and_not_pairs_equal_2_f_0(mercury__integer__Var_14, mercury__integer__Ys_10);
            }
            {
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__Var_11));
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Var_13));
            }
          }
      }
    return mercury__integer__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__integer__or_pairs_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Integer_8;
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

    mercury__integer__succeeded = (mercury__integer__L1_4 == mercury__integer__L2_6);
    if (mercury__integer__succeeded)
      {
        MR_Word mercury__integer__Var_16;

        {
          mercury__integer__Var_16 = mercury__integer__or_pairs_equal_2_f_0(mercury__integer__D1_5, mercury__integer__D2_7);
        }
        {
          mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__Var_16));
        }
      }
    else
      {
        MR_Integer mercury__integer__H2_9;
        MR_Word mercury__integer__T2_10;

        mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
        if (mercury__integer__succeeded)
          {
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_7)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__integer__succeeded)
              {
                mercury__integer__H2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 0)));
                mercury__integer__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 1)));
              }
          }
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__DsT_12;
            MR_Word mercury__integer__Var_17;
            MR_Word mercury__integer__Var_19;
            MR_Integer mercury__integer__Var_20 = (mercury__integer__L2_6 - (MR_Integer) 1);
            MR_Word mercury__integer__Var_22;
            MR_Integer mercury__integer__Var_11;

            {
              mercury__integer__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_19, 0) = ((MR_Box) (mercury__integer__Var_20));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_19, 1) = ((MR_Box) (mercury__integer__T2_10));
            }
            {
              mercury__integer__Var_17 = mercury__integer__or_pairs_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__Var_19);
            }
            mercury__integer__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_17, (MR_Integer) 0)));
            mercury__integer__DsT_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_17, (MR_Integer) 1)));
            {
              mercury__integer__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__integer__Var_22, 0) = ((MR_Box) (mercury__integer__H2_9));
              MR_hl_field(MR_mktag(1), mercury__integer__Var_22, 1) = ((MR_Box) (mercury__integer__DsT_12));
            }
            {
              mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L2_6));
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__Var_22));
            }
          }
        else
          {
            MR_Integer mercury__integer__H1_13;
            MR_Word mercury__integer__T1_14;

            mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
            if (mercury__integer__succeeded)
              {
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_5)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__integer__succeeded)
                  {
                    mercury__integer__H1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 0)));
                    mercury__integer__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 1)));
                  }
              }
            if (mercury__integer__succeeded)
              {
                MR_Word mercury__integer__Var_23;
                MR_Word mercury__integer__Var_24;
                MR_Integer mercury__integer__Var_25 = (mercury__integer__L1_4 - (MR_Integer) 1);
                MR_Word mercury__integer__Var_28;
                MR_Word mercury__integer__DsT_32;
                MR_Integer mercury__integer__Var_15;

                {
                  mercury__integer__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_24, 0) = ((MR_Box) (mercury__integer__Var_25));
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_24, 1) = ((MR_Box) (mercury__integer__T1_14));
                }
                {
                  mercury__integer__Var_23 = mercury__integer__or_pairs_2_f_0(mercury__integer__Var_24, mercury__integer__HeadVar__2_2);
                }
                mercury__integer__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_23, (MR_Integer) 0)));
                mercury__integer__DsT_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_23, (MR_Integer) 1)));
                {
                  mercury__integer__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_28, 0) = ((MR_Box) (mercury__integer__H1_13));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_28, 1) = ((MR_Box) (mercury__integer__DsT_32));
                }
                {
                  mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__Var_28));
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.or_pairs\'/2", (MR_String) "invalid integer");
                }
              }
          }
      }
    return mercury__integer__Integer_8;
  }
}

static MR_Word MR_CALL 
mercury__integer__or_pairs_equal_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__3_3;

    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__integer__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mercury__integer__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Integer mercury__integer__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__integer__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__integer__Var_11 = (mercury__integer__Var_14 | mercury__integer__Y_9);
            MR_Word mercury__integer__Var_12;

            {
              mercury__integer__Var_12 = mercury__integer__or_pairs_equal_2_f_0(mercury__integer__Var_13, mercury__integer__Ys_10);
            }
            {
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__Var_11));
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Var_12));
            }
          }
      }
    return mercury__integer__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__integer__and_pairs_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Integer_8;
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

    mercury__integer__succeeded = (mercury__integer__L1_4 == mercury__integer__L2_6);
    if (mercury__integer__succeeded)
      {
        MR_Word mercury__integer__Var_16;

        {
          mercury__integer__Var_16 = mercury__integer__and_pairs_equal_2_f_0(mercury__integer__D1_5, mercury__integer__D2_7);
        }
        {
          mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
          MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__Var_16));
        }
      }
    else
      {
        MR_Word mercury__integer__T2_10;
        MR_Integer mercury__integer__Var_9;

        mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
        if (mercury__integer__succeeded)
          {
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_7)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__integer__succeeded)
              {
                mercury__integer__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 0)));
                mercury__integer__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_7, (MR_Integer) 1)));
              }
          }
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__DsT_12;
            MR_Word mercury__integer__Var_17;
            MR_Word mercury__integer__Var_19;
            MR_Integer mercury__integer__Var_20 = (mercury__integer__L2_6 - (MR_Integer) 1);
            MR_Integer mercury__integer__Var_11;

            {
              mercury__integer__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_19, 0) = ((MR_Box) (mercury__integer__Var_20));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_19, 1) = ((MR_Box) (mercury__integer__T2_10));
            }
            {
              mercury__integer__Var_17 = mercury__integer__and_pairs_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__Var_19);
            }
            mercury__integer__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_17, (MR_Integer) 0)));
            mercury__integer__DsT_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_17, (MR_Integer) 1)));
            {
              mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L1_4));
              MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__DsT_12));
            }
          }
        else
          {
            MR_Word mercury__integer__T1_14;
            MR_Integer mercury__integer__Var_13;

            mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
            if (mercury__integer__succeeded)
              {
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_5)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__integer__succeeded)
                  {
                    mercury__integer__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 0)));
                    mercury__integer__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_5, (MR_Integer) 1)));
                  }
              }
            if (mercury__integer__succeeded)
              {
                MR_Word mercury__integer__Var_22;
                MR_Word mercury__integer__Var_23;
                MR_Integer mercury__integer__Var_24 = (mercury__integer__L1_4 - (MR_Integer) 1);
                MR_Word mercury__integer__DsT_30;
                MR_Integer mercury__integer__Var_15;

                {
                  mercury__integer__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_23, 0) = ((MR_Box) (mercury__integer__Var_24));
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_23, 1) = ((MR_Box) (mercury__integer__T1_14));
                }
                {
                  mercury__integer__Var_22 = mercury__integer__and_pairs_2_f_0(mercury__integer__Var_23, mercury__integer__HeadVar__2_2);
                }
                mercury__integer__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_22, (MR_Integer) 0)));
                mercury__integer__DsT_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_22, (MR_Integer) 1)));
                {
                  mercury__integer__Integer_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 0) = ((MR_Box) (mercury__integer__L2_6));
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_8, 1) = ((MR_Box) (mercury__integer__DsT_30));
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.and_pairs\'/2", (MR_String) "invalid integer");
                }
              }
          }
      }
    return mercury__integer__Integer_8;
  }
}

static MR_Word MR_CALL 
mercury__integer__and_pairs_equal_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__3_3;

    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__integer__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mercury__integer__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Integer mercury__integer__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__integer__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__integer__Var_11 = (mercury__integer__Var_14 & mercury__integer__Y_9);
            MR_Word mercury__integer__Var_12;

            {
              mercury__integer__Var_12 = mercury__integer__and_pairs_equal_2_f_0(mercury__integer__Var_13, mercury__integer__Ys_10);
            }
            {
              mercury__integer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__Var_11));
              MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Var_12));
            }
          }
      }
    return mercury__integer__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__integer__f_92_1_f_0(
  MR_Word mercury__integer__X_3)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__2_2;
    MR_Word mercury__integer__Var_4;
    MR_Word mercury__integer__Var_5 = (MR_Word) &mercury__integer_scalar_common_1[4];
    MR_Integer mercury__integer__S_10;
    MR_Word mercury__integer__Digits0_11;
    MR_Word mercury__integer__Digits_12;
    MR_Integer mercury__integer__Var_13;

    {
      mercury__integer__Var_4 = mercury__integer__big_plus_2_f_0(mercury__integer__X_3, mercury__integer__Var_5);
    }
    mercury__integer__S_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_4, (MR_Integer) 0)));
    mercury__integer__Digits0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_4, (MR_Integer) 1)));
    mercury__integer__Var_13 = ((MR_Integer) 0 - mercury__integer__S_10);
    {
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_11, &mercury__integer__Digits_12);
    }
    {
      mercury__integer__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__Var_13));
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__Digits_12));
    }
    return mercury__integer__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__integer__f_62_62_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Integer mercury__integer__I_5)
{
  {
    MR_bool mercury__integer__succeeded = (mercury__integer__I_5 < (MR_Integer) 0);
    MR_Word mercury__integer__Result_6;

    if (mercury__integer__succeeded)
      {
        MR_Integer mercury__integer__Var_8 = ((MR_Integer) 0 - mercury__integer__I_5);

        {
          mercury__integer__Result_6 = mercury__integer__f_60_60_2_f_0(mercury__integer__X_4, mercury__integer__Var_8);
        }
      }
    else
      {
        mercury__integer__succeeded = (mercury__integer__I_5 > (MR_Integer) 0);
        if (mercury__integer__succeeded)
          {
            MR_Integer mercury__integer__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
            MR_Word mercury__integer__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

            mercury__integer__succeeded = (mercury__integer__Var_15 == (MR_Integer) 0);
            if (mercury__integer__succeeded)
              mercury__integer__succeeded = (mercury__integer__Var_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (mercury__integer__succeeded)
              mercury__integer__Result_6 = mercury__integer__X_4;
            else
              {
                MR_Integer mercury__integer__Sign_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
                MR_Word mercury__integer__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

                mercury__integer__succeeded = (mercury__integer__Sign_17 < (MR_Integer) 0);
                if (mercury__integer__succeeded)
                  {
                    MR_Word mercury__integer__Var_13;
                    MR_Word mercury__integer__Var_21;
                    MR_Word mercury__integer__Var_22 = (MR_Word) &mercury__integer_scalar_common_1[4];
                    MR_Integer mercury__integer__S_27;
                    MR_Word mercury__integer__Digits0_28;
                    MR_Integer mercury__integer__Len_33;
                    MR_Word mercury__integer__Digits_34;
                    MR_Integer mercury__integer__Div_35;
                    MR_Word mercury__integer__Var_53;
                    MR_Word mercury__integer__Var_54;
                    MR_Integer mercury__integer__S_59;
                    MR_Word mercury__integer__Digits0_60;
                    MR_Word mercury__integer__Digits_61;
                    MR_Integer mercury__integer__Var_62;

                    {
                      mercury__integer__Var_21 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__Var_22);
                    }
                    mercury__integer__S_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_21, (MR_Integer) 0)));
                    mercury__integer__Digits0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_21, (MR_Integer) 1)));
                    mercury__integer__Len_33 = ((MR_Integer) 0 - mercury__integer__S_27);
                    {
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_28, &mercury__integer__Digits_34);
                    }
                    {
                      mercury__integer__Div_35 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
                    }
                    mercury__integer__succeeded = (mercury__integer__Div_35 < mercury__integer__Len_33);
                    if (mercury__integer__succeeded)
                      {
                        MR_Integer mercury__integer__Mod_36;
                        MR_Word mercury__integer__Var_39;
                        MR_Integer mercury__integer__Var_40;
                        MR_Word mercury__integer__Var_42;
                        MR_Integer mercury__integer__Var_43;
                        MR_Integer mercury__integer__V_6_48;
                        MR_Integer mercury__integer__V_7_49;

                        {
                          mercury__integer__V_7_49 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
                        }
                        mercury__integer__V_6_48 = (mercury__integer__V_7_49 * (MR_Integer) 14);
                        mercury__integer__Mod_36 = (mercury__integer__I_5 - mercury__integer__V_6_48);
                        mercury__integer__Var_40 = ((MR_Integer) 14 - mercury__integer__Mod_36);
                        mercury__integer__Var_43 = (mercury__integer__Len_33 - mercury__integer__Div_35);
                        {
                          mercury__integer__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mercury__integer__Var_42, 0) = ((MR_Box) (mercury__integer__Var_43));
                          MR_hl_field(MR_mktag(0), mercury__integer__Var_42, 1) = ((MR_Box) (mercury__integer__Digits_34));
                        }
                        {
                          mercury__integer__Var_39 = mercury__integer__rightshift_4_f_0(mercury__integer__Mod_36, mercury__integer__Var_40, mercury__integer__Var_42, (MR_Integer) 0);
                        }
                        {
                          mercury__integer__Var_13 = mercury__integer__decap_1_f_0(mercury__integer__Var_39);
                        }
                      }
                    else
                      {
                        MR_Word mercury__integer__Var_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                        mercury__integer__Var_13 = (MR_Word) &mercury__integer_scalar_common_1[9];
                      }
                    mercury__integer__Var_54 = (MR_Word) &mercury__integer_scalar_common_1[4];
                    {
                      mercury__integer__Var_53 = mercury__integer__big_plus_2_f_0(mercury__integer__Var_13, mercury__integer__Var_54);
                    }
                    mercury__integer__S_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_53, (MR_Integer) 0)));
                    mercury__integer__Digits0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_53, (MR_Integer) 1)));
                    mercury__integer__Var_62 = ((MR_Integer) 0 - mercury__integer__S_59);
                    {
                      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_60, &mercury__integer__Digits_61);
                    }
                    {
                      mercury__integer__Result_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 0) = ((MR_Box) (mercury__integer__Var_62));
                      MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 1) = ((MR_Box) (mercury__integer__Digits_61));
                    }
                  }
                else
                  {
                    MR_Integer mercury__integer__Len_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
                    MR_Word mercury__integer__Digits_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));
                    MR_Integer mercury__integer__Div_67;

                    {
                      mercury__integer__Div_67 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
                    }
                    mercury__integer__succeeded = (mercury__integer__Div_67 < mercury__integer__Len_65);
                    if (mercury__integer__succeeded)
                      {
                        MR_Integer mercury__integer__Mod_68;
                        MR_Word mercury__integer__Var_71;
                        MR_Integer mercury__integer__Var_72;
                        MR_Word mercury__integer__Var_74;
                        MR_Integer mercury__integer__Var_75;
                        MR_Integer mercury__integer__V_6_80;
                        MR_Integer mercury__integer__V_7_81;

                        {
                          mercury__integer__V_7_81 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
                        }
                        mercury__integer__V_6_80 = (mercury__integer__V_7_81 * (MR_Integer) 14);
                        mercury__integer__Mod_68 = (mercury__integer__I_5 - mercury__integer__V_6_80);
                        mercury__integer__Var_72 = ((MR_Integer) 14 - mercury__integer__Mod_68);
                        mercury__integer__Var_75 = (mercury__integer__Len_65 - mercury__integer__Div_67);
                        {
                          mercury__integer__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mercury__integer__Var_74, 0) = ((MR_Box) (mercury__integer__Var_75));
                          MR_hl_field(MR_mktag(0), mercury__integer__Var_74, 1) = ((MR_Box) (mercury__integer__Digits_66));
                        }
                        {
                          mercury__integer__Var_71 = mercury__integer__rightshift_4_f_0(mercury__integer__Mod_68, mercury__integer__Var_72, mercury__integer__Var_74, (MR_Integer) 0);
                        }
                        {
                          mercury__integer__Result_6 = mercury__integer__decap_1_f_0(mercury__integer__Var_71);
                        }
                      }
                    else
                      {
                        MR_Word mercury__integer__Var_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                        mercury__integer__Result_6 = (MR_Word) &mercury__integer_scalar_common_1[9];
                      }
                  }
              }
          }
        else
          mercury__integer__Result_6 = mercury__integer__X_4;
      }
    return mercury__integer__Result_6;
  }
}

MR_Word MR_CALL 
mercury__integer__f_60_60_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Integer mercury__integer__I_5)
{
  {
    MR_bool mercury__integer__succeeded = (mercury__integer__I_5 > (MR_Integer) 0);
    MR_Word mercury__integer__Result_6;

    if (mercury__integer__succeeded)
      {
        mercury__integer__Result_6 = mercury__integer__big_left_shift_2_f_0(mercury__integer__X_4, mercury__integer__I_5);
      }
    else
      {
        mercury__integer__succeeded = (mercury__integer__I_5 < (MR_Integer) 0);
        if (mercury__integer__succeeded)
          {
            MR_Integer mercury__integer__Var_9 = ((MR_Integer) 0 - mercury__integer__I_5);

            {
              mercury__integer__Result_6 = mercury__integer__f_62_62_2_f_0(mercury__integer__X_4, mercury__integer__Var_9);
            }
          }
        else
          mercury__integer__Result_6 = mercury__integer__X_4;
      }
    return mercury__integer__Result_6;
  }
}

static MR_Word MR_CALL 
mercury__integer__rightshift_4_f_0(
  MR_Integer mercury__integer__HeadVar__1_1,
  MR_Integer mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__HeadVar__3_3,
  MR_Integer mercury__integer__HeadVar__4_4)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__5_5;
    MR_Word mercury__integer__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
    MR_Integer mercury__integer__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));

    if ((mercury__integer__Var_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__integer__Var_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        mercury__integer__HeadVar__5_5 = (MR_Word) &mercury__integer_scalar_common_1[9];
      }
    else
      {
        MR_Integer mercury__integer__H_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Var_35, (MR_Integer) 0)));
        MR_Word mercury__integer__T_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Var_35, (MR_Integer) 1)));

        mercury__integer__succeeded = (mercury__integer__Var_36 <= (MR_Integer) 0);
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__Var_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            mercury__integer__HeadVar__5_5 = (MR_Word) &mercury__integer_scalar_common_1[9];
          }
        else
          {
            MR_Integer mercury__integer__NewH_18;
            MR_Integer mercury__integer__NewCarry_19;
            MR_Integer mercury__integer__TailLen_20;
            MR_Word mercury__integer__NewTail_21;
            MR_Integer mercury__integer__Var_24;
            MR_Integer mercury__integer__Var_25;
            MR_Integer mercury__integer__Var_26;
            MR_Word mercury__integer__Var_28;
            MR_Word mercury__integer__Var_29;
            MR_Integer mercury__integer__Var_30;
            MR_Integer mercury__integer__Var_32;
            MR_Word mercury__integer__Var_34;

            {
              mercury__integer__Var_24 = mercury__int__f_62_62_2_f_0(mercury__integer__H_14, mercury__integer__HeadVar__1_1);
            }
            mercury__integer__NewH_18 = (mercury__integer__HeadVar__4_4 | mercury__integer__Var_24);
            {
              mercury__integer__Var_26 = mercury__int__f_62_62_2_f_0((MR_Integer) 16383, mercury__integer__HeadVar__2_2);
            }
            mercury__integer__Var_25 = (mercury__integer__H_14 & mercury__integer__Var_26);
            {
              mercury__integer__NewCarry_19 = mercury__int__f_60_60_2_f_0(mercury__integer__Var_25, mercury__integer__HeadVar__2_2);
            }
            mercury__integer__Var_30 = (mercury__integer__Var_36 - (MR_Integer) 1);
            {
              mercury__integer__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_29, 0) = ((MR_Box) (mercury__integer__Var_30));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_29, 1) = ((MR_Box) (mercury__integer__T_15));
            }
            {
              mercury__integer__Var_28 = mercury__integer__rightshift_4_f_0(mercury__integer__HeadVar__1_1, mercury__integer__HeadVar__2_2, mercury__integer__Var_29, mercury__integer__NewCarry_19);
            }
            mercury__integer__TailLen_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_28, (MR_Integer) 0)));
            mercury__integer__NewTail_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_28, (MR_Integer) 1)));
            mercury__integer__Var_32 = (mercury__integer__TailLen_20 + (MR_Integer) 1);
            {
              mercury__integer__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__integer__Var_34, 0) = ((MR_Box) (mercury__integer__NewH_18));
              MR_hl_field(MR_mktag(1), mercury__integer__Var_34, 1) = ((MR_Box) (mercury__integer__NewTail_21));
            }
            {
              mercury__integer__HeadVar__5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__5_5, 0) = ((MR_Box) (mercury__integer__Var_32));
              MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__5_5, 1) = ((MR_Box) (mercury__integer__Var_34));
            }
          }
      }
    return mercury__integer__HeadVar__5_5;
  }
}

MR_Word MR_CALL 
mercury__integer__pow_2_f_0(
  MR_Word mercury__integer__A_4,
  MR_Word mercury__integer__N_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__P_6;
    MR_Integer mercury__integer__Sign_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__N_5, (MR_Integer) 0)));
    MR_Word mercury__integer__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__N_5, (MR_Integer) 1)));

    mercury__integer__succeeded = (mercury__integer__Sign_10 < (MR_Integer) 0);
    if (mercury__integer__succeeded)
      {
        MR_Word mercury__integer__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__integer__Var_7 = (MR_Word) ((MR_Box) ((MR_String) "integer.pow: negative exponent"));

        {
          mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_9, ((MR_Box) (mercury__integer__Var_7)));
        }
      }
    else
      {
        mercury__integer__P_6 = mercury__integer__big_pow_2_f_0(mercury__integer__A_4, mercury__integer__N_5);
      }
    return mercury__integer__P_6;
  }
}

MR_Word MR_CALL 
mercury__integer__big_pow_2_f_0(
  MR_Word mercury__integer__A_4,
  MR_Word mercury__integer__N_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Result_6;
    MR_Word mercury__integer__Var_11 = (MR_Word) &mercury__integer_scalar_common_1[9];
    MR_Word mercury__integer__Var_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__N_5, mercury__integer__Var_11);
    }
    if (mercury__integer__succeeded)
      mercury__integer__Result_6 = (MR_Word) &mercury__integer_scalar_common_1[4];
    else
      {
        MR_Word mercury__integer__Var_12 = (MR_Word) &mercury__integer_scalar_common_1[4];

        {
          mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__N_5, mercury__integer__Var_12);
        }
        if (mercury__integer__succeeded)
          mercury__integer__Result_6 = mercury__integer__A_4;
        else
          {
            MR_Word mercury__integer__Var_13 = (MR_Word) &mercury__integer_scalar_common_1[4];

            {
              mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__A_4, mercury__integer__Var_13);
            }
            if (mercury__integer__succeeded)
              mercury__integer__Result_6 = (MR_Word) &mercury__integer_scalar_common_1[4];
            else
              {
                MR_Word mercury__integer__Var_14 = (MR_Word) &mercury__integer_scalar_common_1[9];
                MR_Word mercury__integer__Var_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__A_4, mercury__integer__Var_14);
                }
                if (mercury__integer__succeeded)
                  mercury__integer__Result_6 = mercury__integer__Var_14;
                else
                  {
                    MR_Word mercury__integer__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__N_5, (MR_Integer) 1)));
                    MR_Integer mercury__integer__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__N_5, (MR_Integer) 0)));
                    MR_Integer mercury__integer__Var_8;
                    MR_Word mercury__integer__Var_9;

                    mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__Var_10)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__integer__succeeded)
                      {
                        mercury__integer__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Var_10, (MR_Integer) 0)));
                        mercury__integer__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Var_10, (MR_Integer) 1)));
                        {
                          mercury__integer__Result_6 = mercury__integer__big_pow_sqmul_2_f_0(mercury__integer__A_4, mercury__integer__N_5);
                        }
                      }
                    else
                      {
                        MR_Word mercury__integer__Var_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                        mercury__integer__Result_6 = (MR_Word) &mercury__integer_scalar_common_1[9];
                      }
                  }
              }
          }
      }
    return mercury__integer__Result_6;
  }
}

static MR_Word MR_CALL 
mercury__integer__big_pow_sqmul_2_f_0(
  MR_Word mercury__integer__A_4,
  MR_Word mercury__integer__N_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Result_6;
    MR_Word mercury__integer__Var_16 = (MR_Word) &mercury__integer_scalar_common_1[9];
    MR_Word mercury__integer__Var_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__N_5, mercury__integer__Var_16);
    }
    if (mercury__integer__succeeded)
      mercury__integer__Result_6 = (MR_Word) &mercury__integer_scalar_common_1[4];
    else
      {
        MR_Word mercury__integer__Var_17 = (MR_Word) &mercury__integer_scalar_common_1[4];

        {
          mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__N_5, mercury__integer__Var_17);
        }
        if (mercury__integer__succeeded)
          mercury__integer__Result_6 = mercury__integer__A_4;
        else
          {
            MR_Word mercury__integer__Var_9;
            MR_Word mercury__integer__Var_10 = (MR_Word) &mercury__integer_scalar_common_1[6];
            MR_Word mercury__integer__Var_18;
            MR_Word mercury__integer__Var_36;

            {
              mercury__integer__Var_9 = mercury__integer__big_mod_2_f_0(mercury__integer__N_5, mercury__integer__Var_10);
            }
            mercury__integer__Var_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__integer__Var_18 = (MR_Word) &mercury__integer_scalar_common_1[9];
            {
              mercury__integer__succeeded = mercury__integer____Unify____integer_0_0(mercury__integer__Var_9, mercury__integer__Var_18);
            }
            if (mercury__integer__succeeded)
              {
                MR_Word mercury__integer__HalfResult_7;
                MR_Word mercury__integer__Var_11;
                MR_Word mercury__integer__Var_12 = (MR_Word) &mercury__integer_scalar_common_1[6];
                MR_Word mercury__integer___Rem_46;

                {
                  mercury__integer__big_quot_rem_4_p_0(mercury__integer__N_5, mercury__integer__Var_12, &mercury__integer__Var_11, &mercury__integer___Rem_46);
                }
                {
                  mercury__integer__HalfResult_7 = mercury__integer__big_pow_sqmul_2_f_0(mercury__integer__A_4, mercury__integer__Var_11);
                }
                {
                  mercury__integer__Result_6 = mercury__integer__big_mul_2_f_0(mercury__integer__HalfResult_7, mercury__integer__HalfResult_7);
                }
              }
            else
              {
                MR_Word mercury__integer__SubResult_8;
                MR_Word mercury__integer__Var_14;
                MR_Word mercury__integer__Var_15 = (MR_Word) &mercury__integer_scalar_common_1[4];
                MR_Word mercury__integer__Var_55;
                MR_Integer mercury__integer__S_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_15, (MR_Integer) 0)));
                MR_Word mercury__integer__Digits0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_15, (MR_Integer) 1)));
                MR_Word mercury__integer__Digits_58;
                MR_Integer mercury__integer__Var_59 = ((MR_Integer) 0 - mercury__integer__S_56);

                {
                  mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_57, &mercury__integer__Digits_58);
                }
                {
                  mercury__integer__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_55, 0) = ((MR_Box) (mercury__integer__Var_59));
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_55, 1) = ((MR_Box) (mercury__integer__Digits_58));
                }
                {
                  mercury__integer__Var_14 = mercury__integer__big_plus_2_f_0(mercury__integer__N_5, mercury__integer__Var_55);
                }
                {
                  mercury__integer__SubResult_8 = mercury__integer__big_pow_sqmul_2_f_0(mercury__integer__A_4, mercury__integer__Var_14);
                }
                {
                  mercury__integer__Result_6 = mercury__integer__big_mul_2_f_0(mercury__integer__A_4, mercury__integer__SubResult_8);
                }
              }
          }
      }
    return mercury__integer__Result_6;
  }
}

MR_bool MR_CALL 
mercury__integer____Unify____integer_0_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__CastX_7 = (MR_Integer) mercury__integer__HeadVar__1_1;
    MR_Integer mercury__integer__CastY_8 = (MR_Integer) mercury__integer__HeadVar__2_2;

    mercury__integer__succeeded = (mercury__integer__CastX_7 == mercury__integer__CastY_8);
    if (mercury__integer__succeeded)
      mercury__integer__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__integer__TypeInfo_9_9;
        MR_Integer mercury__integer__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__integer__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__integer__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__integer__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

        mercury__integer__succeeded = (mercury__integer__ArgX1_3 == mercury__integer__ArgY1_4);
        if (mercury__integer__succeeded)
          {
            mercury__integer__TypeInfo_9_9 = (MR_Word) &mercury__integer_scalar_common_1[0];
            {
              mercury__integer__succeeded = mercury__builtin__unify_2_p_0(mercury__integer__TypeInfo_9_9, ((MR_Box) (mercury__integer__ArgX2_5)), ((MR_Box) (mercury__integer__ArgY2_6)));
            }
          }
      }
    return mercury__integer__succeeded;
  }
}

void MR_CALL 
mercury__integer__divide_with_rem_4_p_0(
  MR_Word mercury__integer__X_5,
  MR_Word mercury__integer__Y_6,
  MR_Word * mercury__integer__Quotient_7,
  MR_Word * mercury__integer__Remainder_8)
{
  {
    MR_bool mercury__integer__succeeded;

    {
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_5, mercury__integer__Y_6, mercury__integer__Quotient_7, mercury__integer__Remainder_8);
    }
  }
}

MR_Word MR_CALL 
mercury__integer__rem_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Word mercury__integer__Y_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__3_3;
    MR_Word mercury__integer___Quot_9;

    {
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer___Quot_9, &mercury__integer__HeadVar__3_3);
    }
    return mercury__integer__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__integer__mod_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Word mercury__integer__Y_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__3_3;

    {
      mercury__integer__HeadVar__3_3 = mercury__integer__big_mod_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
    return mercury__integer__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__integer__big_mod_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Word mercury__integer__Y_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Mod_6;
    MR_Word mercury__integer__Rem_8;
    MR_Word mercury__integer___Trunc_7;
    MR_Integer mercury__integer__Var_9;
    MR_Integer mercury__integer__Var_11;
    MR_Integer mercury__integer__Var_12;
    MR_Integer mercury__integer__Sign_13;
    MR_Integer mercury__integer__Sign_15;
    MR_Word mercury__integer__Var_14;
    MR_Word mercury__integer__Var_16;

    {
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer___Trunc_7, &mercury__integer__Rem_8);
    }
    mercury__integer__Sign_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
    mercury__integer__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
    {
      mercury__integer__Var_11 = mercury__integer__signum_1_f_0(mercury__integer__Sign_13);
    }
    mercury__integer__Sign_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Rem_8, (MR_Integer) 0)));
    mercury__integer__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Rem_8, (MR_Integer) 1)));
    {
      mercury__integer__Var_12 = mercury__integer__signum_1_f_0(mercury__integer__Sign_15);
    }
    mercury__integer__Var_9 = (mercury__integer__Var_11 * mercury__integer__Var_12);
    mercury__integer__succeeded = (mercury__integer__Var_9 < (MR_Integer) 0);
    if (mercury__integer__succeeded)
      {
        mercury__integer__Mod_6 = mercury__integer__big_plus_2_f_0(mercury__integer__Rem_8, mercury__integer__Y_5);
      }
    else
      mercury__integer__Mod_6 = mercury__integer__Rem_8;
    return mercury__integer__Mod_6;
  }
}

MR_Word MR_CALL 
mercury__integer__f_47_47_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Word mercury__integer__Y_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__3_3;
    MR_Word mercury__integer___Rem_9;

    {
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer__HeadVar__3_3, &mercury__integer___Rem_9);
    }
    return mercury__integer__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__integer__div_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Word mercury__integer__Y_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__3_3;

    {
      mercury__integer__HeadVar__3_3 = mercury__integer__big_div_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
    return mercury__integer__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__integer__big_div_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Word mercury__integer__Y_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Div_6;
    MR_Word mercury__integer__Trunc_7;
    MR_Word mercury__integer__Rem_8;
    MR_Integer mercury__integer__Var_9;
    MR_Integer mercury__integer__Var_11;
    MR_Integer mercury__integer__Var_12;
    MR_Integer mercury__integer__Sign_14;
    MR_Integer mercury__integer__Sign_16;
    MR_Word mercury__integer__Var_15;
    MR_Word mercury__integer__Var_17;

    {
      mercury__integer__big_quot_rem_4_p_0(mercury__integer__X_4, mercury__integer__Y_5, &mercury__integer__Trunc_7, &mercury__integer__Rem_8);
    }
    mercury__integer__Sign_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
    mercury__integer__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
    {
      mercury__integer__Var_11 = mercury__integer__signum_1_f_0(mercury__integer__Sign_14);
    }
    mercury__integer__Sign_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Rem_8, (MR_Integer) 0)));
    mercury__integer__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Rem_8, (MR_Integer) 1)));
    {
      mercury__integer__Var_12 = mercury__integer__signum_1_f_0(mercury__integer__Sign_16);
    }
    mercury__integer__Var_9 = (mercury__integer__Var_11 * mercury__integer__Var_12);
    mercury__integer__succeeded = (mercury__integer__Var_9 < (MR_Integer) 0);
    if (mercury__integer__succeeded)
      {
        MR_Word mercury__integer__Var_13 = (MR_Word) &mercury__integer_scalar_common_1[4];
        MR_Word mercury__integer__Var_24;
        MR_Integer mercury__integer__S_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_13, (MR_Integer) 0)));
        MR_Word mercury__integer__Digits0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_13, (MR_Integer) 1)));
        MR_Word mercury__integer__Digits_27;
        MR_Integer mercury__integer__Var_28 = ((MR_Integer) 0 - mercury__integer__S_25);

        {
          mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_26, &mercury__integer__Digits_27);
        }
        {
          mercury__integer__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__integer__Var_24, 0) = ((MR_Box) (mercury__integer__Var_28));
          MR_hl_field(MR_mktag(0), mercury__integer__Var_24, 1) = ((MR_Box) (mercury__integer__Digits_27));
        }
        {
          mercury__integer__Div_6 = mercury__integer__big_plus_2_f_0(mercury__integer__Trunc_7, mercury__integer__Var_24);
        }
      }
    else
      mercury__integer__Div_6 = mercury__integer__Trunc_7;
    return mercury__integer__Div_6;
  }
}

void MR_CALL 
mercury__integer__big_quot_rem_4_p_0(
  MR_Word mercury__integer__X_5,
  MR_Word mercury__integer__Y_6,
  MR_Word * mercury__integer__Quot_7,
  MR_Word * mercury__integer__Rem_8)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_6, (MR_Integer) 0)));
    MR_Word mercury__integer__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_6, (MR_Integer) 1)));

    mercury__integer__succeeded = (mercury__integer__Var_21 == (MR_Integer) 0);
    if (mercury__integer__succeeded)
      mercury__integer__succeeded = (mercury__integer__Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (mercury__integer__succeeded)
      {
        MR_Word mercury__integer__TypeCtorInfo_20_20 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__integer__Var_15 = (MR_Word) ((MR_Box) ((MR_String) "integer.big_quot_rem: division by zero"));

        {
          mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_20_20, ((MR_Box) (mercury__integer__Var_15)));
          return;
        }
      }
    else
      {
        MR_Integer mercury__integer__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_5, (MR_Integer) 0)));
        MR_Word mercury__integer__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_5, (MR_Integer) 1)));

        mercury__integer__succeeded = (mercury__integer__Var_23 == (MR_Integer) 0);
        if (mercury__integer__succeeded)
          mercury__integer__succeeded = (mercury__integer__Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mercury__integer__succeeded)
          {
            *mercury__integer__Quot_7 = mercury__integer__X_5;
            *mercury__integer__Rem_8 = mercury__integer__X_5;
          }
        else
          {
            MR_Integer mercury__integer__SignX_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_5, (MR_Integer) 0)));
            MR_Integer mercury__integer__SignY_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_6, (MR_Integer) 0)));
            MR_Word mercury__integer__Quot0_13;
            MR_Word mercury__integer__Rem0_14;
            MR_Word mercury__integer__Var_17;
            MR_Word mercury__integer__Var_18;
            MR_Integer mercury__integer__Var_19;
            MR_Word mercury__integer__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_5, (MR_Integer) 1)));
            MR_Word mercury__integer__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_6, (MR_Integer) 1)));

            {
              mercury__integer__Var_17 = mercury__integer__big_abs_1_f_0(mercury__integer__X_5);
            }
            {
              mercury__integer__Var_18 = mercury__integer__big_abs_1_f_0(mercury__integer__Y_6);
            }
            {
              mercury__integer__quot_rem_4_p_0(mercury__integer__Var_17, mercury__integer__Var_18, &mercury__integer__Quot0_13, &mercury__integer__Rem0_14);
            }
            mercury__integer__Var_19 = (mercury__integer__SignX_9 * mercury__integer__SignY_11);
            {
              *mercury__integer__Quot_7 = mercury__integer__big_sign_2_f_0(mercury__integer__Var_19, mercury__integer__Quot0_13);
            }
            {
              *mercury__integer__Rem_8 = mercury__integer__big_sign_2_f_0(mercury__integer__SignX_9, mercury__integer__Rem0_14);
            }
          }
      }
  }
}

static void MR_CALL 
mercury__integer__quot_rem_4_p_0(
  MR_Word mercury__integer__U_5,
  MR_Word mercury__integer__V_6,
  MR_Word * mercury__integer__Quot_7,
  MR_Word * mercury__integer__Rem_8)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__UI_10;
    MR_Integer mercury__integer__VI_12;
    MR_Word mercury__integer__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_5, (MR_Integer) 1)));
    MR_Word mercury__integer__Var_18;
    MR_Word mercury__integer__Var_19;
    MR_Word mercury__integer__Var_20;
    MR_Integer mercury__integer__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_5, (MR_Integer) 0)));
    MR_Integer mercury__integer__Var_11;

    mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__Var_17)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__integer__succeeded)
      {
        mercury__integer__UI_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Var_17, (MR_Integer) 0)));
        mercury__integer__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Var_17, (MR_Integer) 1)));
        mercury__integer__succeeded = (mercury__integer__Var_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mercury__integer__succeeded)
          {
            mercury__integer__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 0)));
            mercury__integer__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 1)));
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__Var_19)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__integer__succeeded)
              {
                mercury__integer__VI_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Var_19, (MR_Integer) 0)));
                mercury__integer__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Var_19, (MR_Integer) 1)));
                mercury__integer__succeeded = (mercury__integer__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
      }
    if (mercury__integer__succeeded)
      {
        MR_Integer mercury__integer__Var_21;
        MR_Integer mercury__integer__Var_22;

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
	if (SUCCESS_INDICATOR) {
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__integer__succeeded)
          mercury__integer__succeeded = (mercury__integer__VI_12 == (MR_Integer) 0);
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__TypeCtorInfo_9_36 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
            MR_Word mercury__integer__V_7_34 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

            {
              mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_36, ((MR_Box) (mercury__integer__V_7_34)));
              return;
            }
          }
        else
          mercury__integer__Var_21 = (mercury__integer__UI_10 / mercury__integer__VI_12);
        mercury__integer__succeeded = (mercury__integer__Var_21 == (MR_Integer) 0);
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__Var_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            *mercury__integer__Quot_7 = (MR_Word) &mercury__integer_scalar_common_1[9];
          }
        else
          {
            mercury__integer__succeeded = (mercury__integer__Var_21 > (MR_Integer) 0);
            if (mercury__integer__succeeded)
              {
                MR_Word mercury__integer__Var_41;
                MR_Word mercury__integer__Var_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__integer__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_41, 0) = ((MR_Box) (mercury__integer__Var_21));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_41, 1) = ((MR_Box) (mercury__integer__Var_42));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__integer__Quot_7 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__Var_41));
                }
              }
            else
              {
                MR_Word mercury__integer__Var_44;
                MR_Word mercury__integer__Var_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__integer__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_44, 0) = ((MR_Box) (mercury__integer__Var_21));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_44, 1) = ((MR_Box) (mercury__integer__Var_45));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__integer__Quot_7 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) -1));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__Var_44));
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
	if (SUCCESS_INDICATOR) {
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__integer__succeeded)
          mercury__integer__succeeded = (mercury__integer__VI_12 == (MR_Integer) 0);
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__TypeCtorInfo_9_53 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
            MR_Word mercury__integer__V_7_51 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

            {
              mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_53, ((MR_Box) (mercury__integer__V_7_51)));
              return;
            }
          }
        else
          mercury__integer__Var_22 = (mercury__integer__UI_10 % mercury__integer__VI_12);
        mercury__integer__succeeded = (mercury__integer__Var_22 == (MR_Integer) 0);
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__Var_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            *mercury__integer__Rem_8 = (MR_Word) &mercury__integer_scalar_common_1[9];
          }
        else
          {
            mercury__integer__succeeded = (mercury__integer__Var_22 > (MR_Integer) 0);
            if (mercury__integer__succeeded)
              {
                MR_Word mercury__integer__Var_58;
                MR_Word mercury__integer__Var_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__integer__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_58, 0) = ((MR_Box) (mercury__integer__Var_22));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_58, 1) = ((MR_Box) (mercury__integer__Var_59));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__integer__Rem_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__Var_58));
                }
              }
            else
              {
                MR_Word mercury__integer__Var_61;
                MR_Word mercury__integer__Var_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__integer__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_61, 0) = ((MR_Box) (mercury__integer__Var_22));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_61, 1) = ((MR_Box) (mercury__integer__Var_62));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__integer__Rem_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) -1));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__Var_61));
                }
              }
          }
      }
    else
      {
        MR_Integer mercury__integer__V0_13;
        MR_Word mercury__integer__QuotZeros_15;
        MR_Word mercury__integer__Digits_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 1)));
        MR_Integer mercury__integer__Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 0)));

        if ((mercury__integer__Digits_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_first\'/1", (MR_String) "empty list");
              return;
            }
          }
        else
          {
            MR_Word mercury__integer__Var_68;

            mercury__integer__V0_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_67, (MR_Integer) 0)));
            mercury__integer__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_67, (MR_Integer) 1)));
          }
        mercury__integer__succeeded = (mercury__integer__V0_13 < (MR_Integer) 8192);
        if (mercury__integer__succeeded)
          {
            MR_Integer mercury__integer__M_14;
            MR_Word mercury__integer__R_16;
            MR_Integer mercury__integer__Var_25 = (mercury__integer__V0_13 + (MR_Integer) 1);
            MR_Word mercury__integer__Var_27;
            MR_Word mercury__integer__Var_28;
            MR_Word mercury__integer__Var_29;
            MR_Word mercury__integer__Var_73;
            MR_Integer mercury__integer__Len_76;
            MR_Word mercury__integer__Digits0_77;
            MR_Integer mercury__integer__Mod_78;
            MR_Word mercury__integer__Digits_79;
            MR_Integer mercury__integer__Len_85;
            MR_Word mercury__integer__Digits0_86;
            MR_Integer mercury__integer__Mod_87;
            MR_Word mercury__integer__Digits_88;

            {
              mercury__integer__M_14 = mercury__int__div_2_f_0((MR_Integer) 16384, mercury__integer__Var_25);
            }
            mercury__integer__Var_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__integer__Var_27 = (MR_Word) &mercury__integer_scalar_common_1[9];
            mercury__integer__Len_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_5, (MR_Integer) 0)));
            mercury__integer__Digits0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_5, (MR_Integer) 1)));
            {
              mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__M_14, &mercury__integer__Mod_78, mercury__integer__Digits0_77, &mercury__integer__Digits_79);
            }
            mercury__integer__succeeded = (mercury__integer__Mod_78 == (MR_Integer) 0);
            if (mercury__integer__succeeded)
              {
                mercury__integer__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__integer__Var_28, 0) = ((MR_Box) (mercury__integer__Len_76));
                MR_hl_field(MR_mktag(0), mercury__integer__Var_28, 1) = ((MR_Box) (mercury__integer__Digits_79));
              }
            else
              {
                MR_Integer mercury__integer__Var_80 = (mercury__integer__Len_76 + (MR_Integer) 1);
                MR_Word mercury__integer__Var_82;

                {
                  mercury__integer__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_82, 0) = ((MR_Box) (mercury__integer__Mod_78));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_82, 1) = ((MR_Box) (mercury__integer__Digits_79));
                }
                {
                  mercury__integer__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_28, 0) = ((MR_Box) (mercury__integer__Var_80));
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_28, 1) = ((MR_Box) (mercury__integer__Var_82));
                }
              }
            mercury__integer__Len_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 0)));
            mercury__integer__Digits0_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_6, (MR_Integer) 1)));
            {
              mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__M_14, &mercury__integer__Mod_87, mercury__integer__Digits0_86, &mercury__integer__Digits_88);
            }
            mercury__integer__succeeded = (mercury__integer__Mod_87 == (MR_Integer) 0);
            if (mercury__integer__succeeded)
              {
                mercury__integer__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__integer__Var_29, 0) = ((MR_Box) (mercury__integer__Len_85));
                MR_hl_field(MR_mktag(0), mercury__integer__Var_29, 1) = ((MR_Box) (mercury__integer__Digits_88));
              }
            else
              {
                MR_Integer mercury__integer__Var_89 = (mercury__integer__Len_85 + (MR_Integer) 1);
                MR_Word mercury__integer__Var_91;

                {
                  mercury__integer__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_91, 0) = ((MR_Box) (mercury__integer__Mod_87));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_91, 1) = ((MR_Box) (mercury__integer__Digits_88));
                }
                {
                  mercury__integer__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_29, 0) = ((MR_Box) (mercury__integer__Var_89));
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_29, 1) = ((MR_Box) (mercury__integer__Var_91));
                }
              }
            {
              mercury__integer__quot_rem_2_5_p_0(mercury__integer__Var_27, mercury__integer__Var_28, mercury__integer__Var_29, &mercury__integer__QuotZeros_15, &mercury__integer__R_16);
            }
            {
              *mercury__integer__Rem_8 = mercury__integer__div_by_digit_2_f_0(mercury__integer__M_14, mercury__integer__R_16);
            }
          }
        else
          {
            MR_Word mercury__integer__Var_30 = (MR_Word) &mercury__integer_scalar_common_1[9];
            MR_Word mercury__integer__Var_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__integer__quot_rem_2_5_p_0(mercury__integer__Var_30, mercury__integer__U_5, mercury__integer__V_6, &mercury__integer__QuotZeros_15, mercury__integer__Rem_8);
            }
          }
        {
          *mercury__integer__Quot_7 = mercury__integer__decap_1_f_0(mercury__integer__QuotZeros_15);
        }
      }
  }
}

static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_f_0(
  MR_Integer mercury__integer__Digit_1,
  MR_Word mercury__integer__HeadVar__2_2)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__3_3;
    MR_Word mercury__integer__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
    MR_Integer mercury__integer__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));

    if ((mercury__integer__Var_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__integer__Var_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        mercury__integer__HeadVar__3_3 = (MR_Word) &mercury__integer_scalar_common_1[9];
      }
    else
      {
        MR_Integer mercury__integer__X_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Var_12, (MR_Integer) 0)));
        MR_Word mercury__integer__Xs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Var_12, (MR_Integer) 1)));

        {
          mercury__integer__HeadVar__3_3 = mercury__integer__div_by_digit_1_3_f_0(mercury__integer__X_9, mercury__integer__Xs_10, mercury__integer__Digit_1);
        }
      }
    return mercury__integer__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__integer__div_by_digit_1_3_f_0(
  MR_Integer mercury__integer__X_1,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Integer mercury__integer__D_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__integer__succeeded;
        MR_Word mercury__integer__Integer_4;

        if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Integer mercury__integer__Q_8;

            {
              mercury__integer__Q_8 = mercury__int__div_2_f_0(mercury__integer__X_1, mercury__integer__D_3);
            }
            mercury__integer__succeeded = (mercury__integer__Q_8 == (MR_Integer) 0);
            if (mercury__integer__succeeded)
              {
                MR_Word mercury__integer__Var_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                mercury__integer__Integer_4 = (MR_Word) &mercury__integer_scalar_common_1[9];
              }
            else
              {
                MR_Word mercury__integer__Var_10;
                MR_Word mercury__integer__Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__integer__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_10, 0) = ((MR_Box) (mercury__integer__Q_8));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_10, 1) = ((MR_Box) (mercury__integer__Var_11));
                }
                {
                  mercury__integer__Integer_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 0) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 1) = ((MR_Box) (mercury__integer__Var_10));
                }
              }
          }
        else
          {
            MR_Integer mercury__integer__H_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__integer__T_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__integer__Q_17;

            {
              mercury__integer__Q_17 = mercury__int__div_2_f_0(mercury__integer__X_1, mercury__integer__D_3);
            }
            mercury__integer__succeeded = (mercury__integer__Q_17 == (MR_Integer) 0);
            if (mercury__integer__succeeded)
              {
                MR_Integer mercury__integer__Var_20;
                MR_Integer mercury__integer__Var_21;
                MR_Integer mercury__integer__Var_22;

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
	if (SUCCESS_INDICATOR) {
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
                if (mercury__integer__succeeded)
                  mercury__integer__succeeded = (mercury__integer__D_3 == (MR_Integer) 0);
                if (mercury__integer__succeeded)
                  {
                    MR_Word mercury__integer__TypeCtorInfo_9_39 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
                    MR_Word mercury__integer__V_7_37 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

                    {
                      mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_39, ((MR_Box) (mercury__integer__V_7_37)));
                    }
                  }
                else
                  mercury__integer__Var_22 = (mercury__integer__X_1 % mercury__integer__D_3);
                mercury__integer__Var_21 = (mercury__integer__Var_22 * (MR_Integer) 16384);
                mercury__integer__Var_20 = (mercury__integer__Var_21 + mercury__integer__H_13);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__integer__next_value_of_X_1 = mercury__integer__Var_20;
                  MR_Word mercury__integer__next_value_of_HeadVar__2_2 = mercury__integer__T_14;

                  mercury__integer__HeadVar__2_2 = mercury__integer__next_value_of_HeadVar__2_2;
                  mercury__integer__X_1 = mercury__integer__next_value_of_X_1;
                }
                continue;
              }
            else
              {
                MR_Integer mercury__integer__L_18;
                MR_Word mercury__integer__Ds_19;
                MR_Word mercury__integer__Var_24;
                MR_Integer mercury__integer__Var_25;
                MR_Integer mercury__integer__Var_26;
                MR_Integer mercury__integer__Var_27;
                MR_Integer mercury__integer__Var_29;
                MR_Word mercury__integer__Var_31;

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
	if (SUCCESS_INDICATOR) {
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
                if (mercury__integer__succeeded)
                  mercury__integer__succeeded = (mercury__integer__D_3 == (MR_Integer) 0);
                if (mercury__integer__succeeded)
                  {
                    MR_Word mercury__integer__TypeCtorInfo_9_45 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
                    MR_Word mercury__integer__V_7_43 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

                    {
                      mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_45, ((MR_Box) (mercury__integer__V_7_43)));
                    }
                  }
                else
                  mercury__integer__Var_27 = (mercury__integer__X_1 % mercury__integer__D_3);
                mercury__integer__Var_26 = (mercury__integer__Var_27 * (MR_Integer) 16384);
                mercury__integer__Var_25 = (mercury__integer__Var_26 + mercury__integer__H_13);
                {
                  mercury__integer__Var_24 = mercury__integer__div_by_digit_2_3_f_0(mercury__integer__Var_25, mercury__integer__T_14, mercury__integer__D_3);
                }
                mercury__integer__L_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_24, (MR_Integer) 0)));
                mercury__integer__Ds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_24, (MR_Integer) 1)));
                mercury__integer__Var_29 = (mercury__integer__L_18 + (MR_Integer) 1);
                {
                  mercury__integer__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_31, 0) = ((MR_Box) (mercury__integer__Q_17));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_31, 1) = ((MR_Box) (mercury__integer__Ds_19));
                }
                {
                  mercury__integer__Integer_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 0) = ((MR_Box) (mercury__integer__Var_29));
                  MR_hl_field(MR_mktag(0), mercury__integer__Integer_4, 1) = ((MR_Box) (mercury__integer__Var_31));
                }
              }
          }
        return mercury__integer__Integer_4;
      }
      break;
    }
}

static MR_Word MR_CALL 
mercury__integer__div_by_digit_2_3_f_0(
  MR_Integer mercury__integer__X_1,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Integer mercury__integer__D_3)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__4_4;

    if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__integer__Var_8;
        MR_Integer mercury__integer__Var_9;
        MR_Word mercury__integer__Var_10;

        {
          mercury__integer__Var_9 = mercury__int__div_2_f_0(mercury__integer__X_1, mercury__integer__D_3);
        }
        mercury__integer__Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__integer__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__integer__Var_8, 0) = ((MR_Box) (mercury__integer__Var_9));
          MR_hl_field(MR_mktag(1), mercury__integer__Var_8, 1) = ((MR_Box) (mercury__integer__Var_10));
        }
        {
          mercury__integer__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, 1) = ((MR_Box) (mercury__integer__Var_8));
        }
      }
    else
      {
        MR_Integer mercury__integer__H_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__integer__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mercury__integer__Len_15;
        MR_Word mercury__integer__Tail_16;
        MR_Integer mercury__integer__Var_17;
        MR_Word mercury__integer__Var_19;
        MR_Integer mercury__integer__Var_20;
        MR_Word mercury__integer__Var_21;
        MR_Integer mercury__integer__Var_22;
        MR_Integer mercury__integer__Var_23;
        MR_Integer mercury__integer__Var_24;

        {
          mercury__integer__Var_20 = mercury__int__div_2_f_0(mercury__integer__X_1, mercury__integer__D_3);
        }
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
	if (SUCCESS_INDICATOR) {
	}
mercury__integer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__integer__succeeded)
          mercury__integer__succeeded = (mercury__integer__D_3 == (MR_Integer) 0);
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__TypeCtorInfo_9_31 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
            MR_Word mercury__integer__V_7_29 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

            {
              mercury__exception__throw_1_p_0(mercury__integer__TypeCtorInfo_9_31, ((MR_Box) (mercury__integer__V_7_29)));
            }
          }
        else
          mercury__integer__Var_24 = (mercury__integer__X_1 % mercury__integer__D_3);
        mercury__integer__Var_23 = (mercury__integer__Var_24 * (MR_Integer) 16384);
        mercury__integer__Var_22 = (mercury__integer__Var_23 + mercury__integer__H_12);
        {
          mercury__integer__Var_21 = mercury__integer__div_by_digit_2_3_f_0(mercury__integer__Var_22, mercury__integer__T_13, mercury__integer__D_3);
        }
        mercury__integer__Len_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_21, (MR_Integer) 0)));
        mercury__integer__Tail_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_21, (MR_Integer) 1)));
        mercury__integer__Var_17 = (mercury__integer__Len_15 + (MR_Integer) 1);
        {
          mercury__integer__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__integer__Var_19, 0) = ((MR_Box) (mercury__integer__Var_20));
          MR_hl_field(MR_mktag(1), mercury__integer__Var_19, 1) = ((MR_Box) (mercury__integer__Tail_16));
        }
        {
          mercury__integer__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, 0) = ((MR_Box) (mercury__integer__Var_17));
          MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__4_4, 1) = ((MR_Box) (mercury__integer__Var_19));
        }
      }
    return mercury__integer__HeadVar__4_4;
  }
}

static void MR_CALL 
mercury__integer__quot_rem_2_5_p_0(
  MR_Word mercury__integer__Ur_6,
  MR_Word mercury__integer__U_7,
  MR_Word mercury__integer__V_8,
  MR_Word * mercury__integer__Quot_9,
  MR_Word * mercury__integer__Rem_10)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Result_60;

    {
      mercury__integer____Compare____integer_0_0(&mercury__integer__Result_60, mercury__integer__Ur_6, mercury__integer__V_8);
    }
    mercury__integer__succeeded = (mercury__integer__Result_60 == (MR_Integer) 1);
    if (mercury__integer__succeeded)
      {
        MR_Integer mercury__integer__Ua_12;
        MR_Word mercury__integer__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 1)));
        MR_Integer mercury__integer__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 0)));
        MR_Word mercury__integer__Var_13;

        mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__Var_24)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__integer__succeeded)
          {
            mercury__integer__Ua_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Var_24, (MR_Integer) 0)));
            mercury__integer__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Var_24, (MR_Integer) 1)));
            {
              MR_Word mercury__integer__TypeCtorInfo_12_73;
              MR_Word mercury__integer__Quot0_14;
              MR_Word mercury__integer__Var_25;
              MR_Word mercury__integer__Var_26;
              MR_Integer mercury__integer__L_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Ur_6, (MR_Integer) 0)));
              MR_Word mercury__integer__List_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Ur_6, (MR_Integer) 1)));
              MR_Word mercury__integer__NewList_68;
              MR_Integer mercury__integer__Var_69 = (mercury__integer__L_66 + (MR_Integer) 1);
              MR_Word mercury__integer__Var_71;
              MR_Word mercury__integer__Var_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              MR_Integer mercury__integer__Len_75;
              MR_Word mercury__integer__Digits_76;
              MR_Integer mercury__integer__L_85;
              MR_Word mercury__integer__List_86;
              MR_Integer mercury__integer__Var_87;
              MR_Word mercury__integer__Var_89;

              {
                mercury__integer__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__integer__Var_71, 0) = ((MR_Box) (mercury__integer__Ua_12));
                MR_hl_field(MR_mktag(1), mercury__integer__Var_71, 1) = ((MR_Box) (mercury__integer__Var_72));
              }
              mercury__integer__TypeCtorInfo_12_73 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              {
                mercury__list__append_3_p_1(mercury__integer__TypeCtorInfo_12_73, mercury__integer__List_67, mercury__integer__Var_71, &mercury__integer__NewList_68);
              }
              {
                mercury__integer__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__integer__Var_25, 0) = ((MR_Box) (mercury__integer__Var_69));
                MR_hl_field(MR_mktag(0), mercury__integer__Var_25, 1) = ((MR_Box) (mercury__integer__NewList_68));
              }
              mercury__integer__Len_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 0)));
              mercury__integer__Digits_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 1)));
              if ((mercury__integer__Digits_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_tail\'/1", (MR_String) "empty list");
                    return;
                  }
                }
              else
                {
                  MR_Word mercury__integer__T_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_76, (MR_Integer) 1)));
                  MR_Integer mercury__integer__Var_79 = (mercury__integer__Len_75 - (MR_Integer) 1);
                  MR_Integer mercury__integer__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_76, (MR_Integer) 0)));

                  {
                    mercury__integer__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__integer__Var_26, 0) = ((MR_Box) (mercury__integer__Var_79));
                    MR_hl_field(MR_mktag(0), mercury__integer__Var_26, 1) = ((MR_Box) (mercury__integer__T_78));
                  }
                }
              {
                mercury__integer__quot_rem_2_5_p_0(mercury__integer__Var_25, mercury__integer__Var_26, mercury__integer__V_8, &mercury__integer__Quot0_14, mercury__integer__Rem_10);
              }
              mercury__integer__L_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Quot0_14, (MR_Integer) 0)));
              mercury__integer__List_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Quot0_14, (MR_Integer) 1)));
              mercury__integer__Var_87 = (mercury__integer__L_85 + (MR_Integer) 1);
              {
                mercury__integer__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__integer__Var_89, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), mercury__integer__Var_89, 1) = ((MR_Box) (mercury__integer__List_86));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *mercury__integer__Quot_9 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__integer__Var_87));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__Var_89));
              }
            }
          }
        else
          {
            *mercury__integer__Quot_9 = (MR_Word) &mercury__integer_scalar_common_1[10];
            *mercury__integer__Rem_10 = mercury__integer__Ur_6;
          }
      }
    else
      {
        MR_Integer mercury__integer__Qhat_16;
        MR_Word mercury__integer__QhatByV_17;
        MR_Integer mercury__integer__Q_18;
        MR_Word mercury__integer__QByV_19;
        MR_Word mercury__integer__NewUr_21;
        MR_Integer mercury__integer__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Ur_6, (MR_Integer) 0)));
        MR_Integer mercury__integer__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__V_8, (MR_Integer) 0)));
        MR_Word mercury__integer__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Ur_6, (MR_Integer) 1)));
        MR_Word mercury__integer__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__V_8, (MR_Integer) 1)));
        MR_Integer mercury__integer__Ua_52;
        MR_Word mercury__integer__Var_44;
        MR_Integer mercury__integer__Var_22;
        MR_Word mercury__integer__Var_23;

        mercury__integer__succeeded = (mercury__integer__Var_32 > mercury__integer__Var_33);
        if (mercury__integer__succeeded)
          {
            MR_Integer mercury__integer__Var_34;
            MR_Integer mercury__integer__Var_35;
            MR_Integer mercury__integer__Var_36;
            MR_Integer mercury__integer__Var_38;
            MR_Integer mercury__integer__Var_39;

            {
              mercury__integer__Var_36 = mercury__integer__det_first_1_f_0(mercury__integer__Ur_6);
            }
            mercury__integer__Var_35 = (mercury__integer__Var_36 * (MR_Integer) 16384);
            {
              mercury__integer__Var_38 = mercury__integer__det_second_1_f_0(mercury__integer__Ur_6);
            }
            mercury__integer__Var_34 = (mercury__integer__Var_35 + mercury__integer__Var_38);
            {
              mercury__integer__Var_39 = mercury__integer__det_first_1_f_0(mercury__integer__V_8);
            }
            {
              mercury__integer__Qhat_16 = mercury__int__div_2_f_0(mercury__integer__Var_34, mercury__integer__Var_39);
            }
          }
        else
          {
            MR_Integer mercury__integer__Var_40;
            MR_Integer mercury__integer__Var_41;

            {
              mercury__integer__Var_40 = mercury__integer__det_first_1_f_0(mercury__integer__Ur_6);
            }
            {
              mercury__integer__Var_41 = mercury__integer__det_first_1_f_0(mercury__integer__V_8);
            }
            {
              mercury__integer__Qhat_16 = mercury__int__div_2_f_0(mercury__integer__Var_40, mercury__integer__Var_41);
            }
          }
        {
          mercury__integer__QhatByV_17 = mercury__integer__mul_by_digit_2_f_0(mercury__integer__Qhat_16, mercury__integer__V_8);
        }
        {
          mercury__integer__succeeded = mercury__integer__pos_geq_2_p_0(mercury__integer__Ur_6, mercury__integer__QhatByV_17);
        }
        if (mercury__integer__succeeded)
          {
            mercury__integer__Q_18 = mercury__integer__Qhat_16;
            mercury__integer__QByV_19 = mercury__integer__QhatByV_17;
          }
        else
          {
            MR_Word mercury__integer__QhatMinus1ByV_20;

            {
              mercury__integer__QhatMinus1ByV_20 = mercury__integer__pos_minus_2_f_0(mercury__integer__QhatByV_17, mercury__integer__V_8);
            }
            {
              mercury__integer__succeeded = mercury__integer__pos_geq_2_p_0(mercury__integer__Ur_6, mercury__integer__QhatMinus1ByV_20);
            }
            if (mercury__integer__succeeded)
              {
                mercury__integer__Q_18 = (mercury__integer__Qhat_16 - (MR_Integer) 1);
                mercury__integer__QByV_19 = mercury__integer__QhatMinus1ByV_20;
              }
            else
              {
                mercury__integer__Q_18 = (mercury__integer__Qhat_16 - (MR_Integer) 2);
                {
                  mercury__integer__QByV_19 = mercury__integer__pos_minus_2_f_0(mercury__integer__QhatMinus1ByV_20, mercury__integer__V_8);
                }
              }
          }
        {
          mercury__integer__NewUr_21 = mercury__integer__pos_minus_2_f_0(mercury__integer__Ur_6, mercury__integer__QByV_19);
        }
        mercury__integer__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 0)));
        mercury__integer__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__U_7, (MR_Integer) 1)));
        mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__Var_44)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__integer__succeeded)
          {
            mercury__integer__Ua_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Var_44, (MR_Integer) 0)));
            mercury__integer__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Var_44, (MR_Integer) 1)));
            {
              MR_Word mercury__integer__Var_45;
              MR_Word mercury__integer__Var_46;
              MR_Word mercury__integer__Quot0_50;

              {
                mercury__integer__Var_45 = mercury__integer__integer_append_2_f_0(mercury__integer__NewUr_21, mercury__integer__Ua_52);
              }
              {
                mercury__integer__Var_46 = mercury__integer__det_tail_1_f_0(mercury__integer__U_7);
              }
              {
                mercury__integer__quot_rem_2_5_p_0(mercury__integer__Var_45, mercury__integer__Var_46, mercury__integer__V_8, &mercury__integer__Quot0_50, mercury__integer__Rem_10);
              }
              {
                *mercury__integer__Quot_9 = mercury__integer__integer_prepend_2_f_0(mercury__integer__Q_18, mercury__integer__Quot0_50);
              }
            }
          }
        else
          {
            MR_Word mercury__integer__Var_48;
            MR_Word mercury__integer__Var_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__integer__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__integer__Var_48, 0) = ((MR_Box) (mercury__integer__Q_18));
              MR_hl_field(MR_mktag(1), mercury__integer__Var_48, 1) = ((MR_Box) (mercury__integer__Var_49));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *mercury__integer__Quot_9 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__integer__Var_48));
            }
            *mercury__integer__Rem_10 = mercury__integer__NewUr_21;
          }
      }
  }
}

static MR_Word MR_CALL 
mercury__integer__integer_prepend_2_f_0(
  MR_Integer mercury__integer__Digit_4,
  MR_Word mercury__integer__HeadVar__2_2)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__3_3;
    MR_Integer mercury__integer__L_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__integer__List_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
    MR_Integer mercury__integer__Var_7 = (mercury__integer__L_5 + (MR_Integer) 1);
    MR_Word mercury__integer__Var_9;

    {
      mercury__integer__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__integer__Var_9, 0) = ((MR_Box) (mercury__integer__Digit_4));
      MR_hl_field(MR_mktag(1), mercury__integer__Var_9, 1) = ((MR_Box) (mercury__integer__List_6));
    }
    {
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__Var_7));
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__Var_9));
    }
    return mercury__integer__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__integer__integer_append_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Integer mercury__integer__Digit_6)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__3_3;
    MR_Word mercury__integer__TypeCtorInfo_12_12;
    MR_Integer mercury__integer__L_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__integer__List_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__integer__NewList_7;
    MR_Integer mercury__integer__Var_8 = (mercury__integer__L_4 + (MR_Integer) 1);
    MR_Word mercury__integer__Var_10;
    MR_Word mercury__integer__Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__integer__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__integer__Var_10, 0) = ((MR_Box) (mercury__integer__Digit_6));
      MR_hl_field(MR_mktag(1), mercury__integer__Var_10, 1) = ((MR_Box) (mercury__integer__Var_11));
    }
    mercury__integer__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__list__append_3_p_1(mercury__integer__TypeCtorInfo_12_12, mercury__integer__List_5, mercury__integer__Var_10, &mercury__integer__NewList_7);
    }
    {
      mercury__integer__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 0) = ((MR_Box) (mercury__integer__Var_8));
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, 1) = ((MR_Box) (mercury__integer__NewList_7));
    }
    return mercury__integer__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__integer__mul_by_digit_2_f_0(
  MR_Integer mercury__integer__Digit_4,
  MR_Word mercury__integer__HeadVar__2_2)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Out_7;
    MR_Integer mercury__integer__Len_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__integer__Digits0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
    MR_Integer mercury__integer__Mod_8;
    MR_Word mercury__integer__Digits_9;

    {
      mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__Digit_4, &mercury__integer__Mod_8, mercury__integer__Digits0_6, &mercury__integer__Digits_9);
    }
    mercury__integer__succeeded = (mercury__integer__Mod_8 == (MR_Integer) 0);
    if (mercury__integer__succeeded)
      {
        mercury__integer__Out_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__integer__Out_7, 0) = ((MR_Box) (mercury__integer__Len_5));
        MR_hl_field(MR_mktag(0), mercury__integer__Out_7, 1) = ((MR_Box) (mercury__integer__Digits_9));
      }
    else
      {
        MR_Integer mercury__integer__Var_10 = (mercury__integer__Len_5 + (MR_Integer) 1);
        MR_Word mercury__integer__Var_12;

        {
          mercury__integer__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__integer__Var_12, 0) = ((MR_Box) (mercury__integer__Mod_8));
          MR_hl_field(MR_mktag(1), mercury__integer__Var_12, 1) = ((MR_Box) (mercury__integer__Digits_9));
        }
        {
          mercury__integer__Out_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__integer__Out_7, 0) = ((MR_Box) (mercury__integer__Var_10));
          MR_hl_field(MR_mktag(0), mercury__integer__Out_7, 1) = ((MR_Box) (mercury__integer__Var_12));
        }
      }
    return mercury__integer__Out_7;
  }
}

static MR_Word MR_CALL 
mercury__integer__pos_minus_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Out_8;
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer mercury__integer__Mod_9;
    MR_Word mercury__integer__Ds_10;
    MR_Integer mercury__integer__Len_11;
    MR_Word mercury__integer__D1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__integer__D2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__integer__diff_pairs_4_p_0(&mercury__integer__Mod_9, mercury__integer__HeadVar__1_1, mercury__integer__HeadVar__2_2, &mercury__integer__Ds_10);
    }
    mercury__integer__succeeded = (mercury__integer__L1_4 > mercury__integer__L2_6);
    if (mercury__integer__succeeded)
      mercury__integer__Len_11 = mercury__integer__L1_4;
    else
      mercury__integer__Len_11 = mercury__integer__L2_6;
    mercury__integer__succeeded = (mercury__integer__Mod_9 == (MR_Integer) 0);
    if (mercury__integer__succeeded)
      {
        MR_Word mercury__integer__Var_14;

        {
          mercury__integer__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__integer__Var_14, 0) = ((MR_Box) (mercury__integer__Len_11));
          MR_hl_field(MR_mktag(0), mercury__integer__Var_14, 1) = ((MR_Box) (mercury__integer__Ds_10));
        }
        {
          mercury__integer__Out_8 = mercury__integer__decap_1_f_0(mercury__integer__Var_14);
        }
      }
    else
      {
        MR_Integer mercury__integer__Var_15 = (mercury__integer__Len_11 + (MR_Integer) 1);
        MR_Word mercury__integer__Var_17;

        {
          mercury__integer__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__integer__Var_17, 0) = ((MR_Box) (mercury__integer__Mod_9));
          MR_hl_field(MR_mktag(1), mercury__integer__Var_17, 1) = ((MR_Box) (mercury__integer__Ds_10));
        }
        {
          mercury__integer__Out_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__integer__Out_8, 0) = ((MR_Box) (mercury__integer__Var_15));
          MR_hl_field(MR_mktag(0), mercury__integer__Out_8, 1) = ((MR_Box) (mercury__integer__Var_17));
        }
      }
    return mercury__integer__Out_8;
  }
}

static MR_bool MR_CALL 
mercury__integer__pos_geq_2_p_0(
  MR_Word mercury__integer__X_3,
  MR_Word mercury__integer__Y_4)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Result_5;

    {
      mercury__integer____Compare____integer_0_0(&mercury__integer__Result_5, mercury__integer__X_3, mercury__integer__Y_4);
    }
    switch (mercury__integer__Result_5) {
      default:
        mercury__integer__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        mercury__integer__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        mercury__integer__succeeded = MR_TRUE;
        break;
    }
    return mercury__integer__succeeded;
  }
}

static MR_Word MR_CALL 
mercury__integer__det_tail_1_f_0(
  MR_Word mercury__integer__HeadVar__1_1)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__I_5;
    MR_Integer mercury__integer__Len_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__integer__Digits_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

    if ((mercury__integer__Digits_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_tail\'/1", (MR_String) "empty list");
        }
      }
    else
      {
        MR_Word mercury__integer__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 1)));
        MR_Integer mercury__integer__Var_8 = (mercury__integer__Len_3 - (MR_Integer) 1);
        MR_Integer mercury__integer__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 0)));

        {
          mercury__integer__I_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__integer__I_5, 0) = ((MR_Box) (mercury__integer__Var_8));
          MR_hl_field(MR_mktag(0), mercury__integer__I_5, 1) = ((MR_Box) (mercury__integer__T_7));
        }
      }
    return mercury__integer__I_5;
  }
}

static MR_Integer MR_CALL 
mercury__integer__det_second_1_f_0(
  MR_Word mercury__integer__HeadVar__1_1)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__Second_5;
    MR_Word mercury__integer__Digits_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer mercury__integer__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

    if ((mercury__integer__Digits_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_second\'/1", (MR_String) "empty list");
        }
      }
    else
      {
        MR_Word mercury__integer__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 1)));
        MR_Integer mercury__integer__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 0)));

        if ((mercury__integer__Var_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_second\'/1", (MR_String) "short list");
            }
          }
        else
          {
            MR_Word mercury__integer__Var_8;

            mercury__integer__Second_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Var_17, (MR_Integer) 0)));
            mercury__integer__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Var_17, (MR_Integer) 1)));
          }
      }
    return mercury__integer__Second_5;
  }
}

static MR_Integer MR_CALL 
mercury__integer__det_first_1_f_0(
  MR_Word mercury__integer__HeadVar__1_1)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__First_5;
    MR_Word mercury__integer__Digits_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer mercury__integer__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

    if ((mercury__integer__Digits_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.det_first\'/1", (MR_String) "empty list");
        }
      }
    else
      {
        MR_Word mercury__integer__Var_6;

        mercury__integer__First_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 0)));
        mercury__integer__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Digits_4, (MR_Integer) 1)));
      }
    return mercury__integer__First_5;
  }
}

MR_Word MR_CALL 
mercury__integer__f_times_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Word mercury__integer__Y_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__3_3;

    {
      mercury__integer__HeadVar__3_3 = mercury__integer__big_mul_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
    return mercury__integer__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__integer__big_mul_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Word mercury__integer__Y_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Result_6;
    MR_Integer mercury__integer__Sign_7;
    MR_Word mercury__integer__Value_8;
    MR_Integer mercury__integer__Var_9;
    MR_Integer mercury__integer__Var_10;
    MR_Word mercury__integer__Var_11;
    MR_Word mercury__integer__Var_12;
    MR_Integer mercury__integer__Sign_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
    MR_Integer mercury__integer__Sign_15;
    MR_Integer mercury__integer__L1_17;
    MR_Integer mercury__integer__L2_19;
    MR_Word mercury__integer__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));
    MR_Word mercury__integer__Var_16;
    MR_Word mercury__integer__Ds1_18;
    MR_Word mercury__integer__Ds2_20;

    {
      mercury__integer__Var_9 = mercury__integer__signum_1_f_0(mercury__integer__Sign_13);
    }
    mercury__integer__Sign_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
    mercury__integer__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
    {
      mercury__integer__Var_10 = mercury__integer__signum_1_f_0(mercury__integer__Sign_15);
    }
    mercury__integer__Sign_7 = (mercury__integer__Var_9 * mercury__integer__Var_10);
    {
      mercury__integer__Var_11 = mercury__integer__big_abs_1_f_0(mercury__integer__X_4);
    }
    {
      mercury__integer__Var_12 = mercury__integer__big_abs_1_f_0(mercury__integer__Y_5);
    }
    mercury__integer__L1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_11, (MR_Integer) 0)));
    mercury__integer__Ds1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_11, (MR_Integer) 1)));
    mercury__integer__L2_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_12, (MR_Integer) 0)));
    mercury__integer__Ds2_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_12, (MR_Integer) 1)));
    mercury__integer__succeeded = (mercury__integer__L1_17 < mercury__integer__L2_19);
    if (mercury__integer__succeeded)
      {
        mercury__integer__Value_8 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__Var_11, mercury__integer__Var_12);
      }
    else
      {
        mercury__integer__Value_8 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__Var_12, mercury__integer__Var_11);
      }
    {
      mercury__integer__Result_6 = mercury__integer__big_sign_2_f_0(mercury__integer__Sign_7, mercury__integer__Value_8);
    }
    return mercury__integer__Result_6;
  }
}

static MR_Word MR_CALL 
mercury__integer__pos_mul_karatsuba_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Res_8;
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__integer__Ds1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__integer__Ds2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

    mercury__integer__succeeded = (mercury__integer__L1_4 < (MR_Integer) 35);
    if (mercury__integer__succeeded)
      {
        MR_Word mercury__integer__Var_24 = (MR_Word) &mercury__integer_scalar_common_1[9];
        MR_Word mercury__integer__Var_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__integer__Res_8 = mercury__integer__pos_mul_list_3_f_0(mercury__integer__Ds1_5, mercury__integer__Var_24, mercury__integer__HeadVar__2_2);
        }
      }
    else
      {
        MR_Integer mercury__integer__Middle_9;
        MR_Word mercury__integer__Res0_20;
        MR_Word mercury__integer__Res1_21;
        MR_Word mercury__integer__Res2_22;
        MR_Word mercury__integer__Var_38;
        MR_Word mercury__integer__Var_39;
        MR_Integer mercury__integer__Var_40;
        MR_Integer mercury__integer__Var_41;
        MR_Word mercury__integer__Var_44;
        MR_Word mercury__integer__Var_45;
        MR_Word mercury__integer__Var_46;
        MR_Integer mercury__integer__Var_47;

        mercury__integer__succeeded = (mercury__integer__L2_6 < mercury__integer__L1_4);
        if (mercury__integer__succeeded)
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "function \140integer.pos_mul_karatsuba\'/2", (MR_String) "second factor smaller");
            }
          }
        else
          {
            MR_Word mercury__integer__TypeCtorInfo_49_49;
            MR_Integer mercury__integer__HiDigits_10;
            MR_Integer mercury__integer__HiDigitsSmall_11;
            MR_Word mercury__integer__Ds1Upper_12;
            MR_Word mercury__integer__Ds1Lower_13;
            MR_Word mercury__integer__Ds2Upper_14;
            MR_Word mercury__integer__Ds2Lower_15;
            MR_Word mercury__integer__LoDs1_16;
            MR_Word mercury__integer__LoDs2_17;
            MR_Word mercury__integer__HiDs1_18;
            MR_Word mercury__integer__HiDs2_19;
            MR_Integer mercury__integer__Var_31;
            MR_Integer mercury__integer__Var_32;
            MR_Integer mercury__integer__Var_33;

            {
              mercury__integer__Middle_9 = mercury__int__div_2_f_0(mercury__integer__L2_6, (MR_Integer) 2);
            }
            mercury__integer__HiDigits_10 = (mercury__integer__L2_6 - mercury__integer__Middle_9);
            mercury__integer__Var_31 = (mercury__integer__L1_4 - mercury__integer__Middle_9);
            mercury__integer__succeeded = ((MR_Integer) 0 > mercury__integer__Var_31);
            if (mercury__integer__succeeded)
              mercury__integer__HiDigitsSmall_11 = (MR_Integer) 0;
            else
              mercury__integer__HiDigitsSmall_11 = mercury__integer__Var_31;
            mercury__integer__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            {
              mercury__list__split_upto_4_p_0(mercury__integer__TypeCtorInfo_49_49, mercury__integer__HiDigitsSmall_11, mercury__integer__Ds1_5, &mercury__integer__Ds1Upper_12, &mercury__integer__Ds1Lower_13);
            }
            {
              mercury__list__split_upto_4_p_0(mercury__integer__TypeCtorInfo_49_49, mercury__integer__HiDigits_10, mercury__integer__Ds2_7, &mercury__integer__Ds2Upper_14, &mercury__integer__Ds2Lower_15);
            }
            mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__Middle_9);
            if (mercury__integer__succeeded)
              mercury__integer__Var_32 = mercury__integer__L1_4;
            else
              mercury__integer__Var_32 = mercury__integer__Middle_9;
            {
              mercury__integer__LoDs1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__LoDs1_16, 0) = ((MR_Box) (mercury__integer__Var_32));
              MR_hl_field(MR_mktag(0), mercury__integer__LoDs1_16, 1) = ((MR_Box) (mercury__integer__Ds1Lower_13));
            }
            {
              mercury__integer__LoDs2_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__LoDs2_17, 0) = ((MR_Box) (mercury__integer__Middle_9));
              MR_hl_field(MR_mktag(0), mercury__integer__LoDs2_17, 1) = ((MR_Box) (mercury__integer__Ds2Lower_15));
            }
            {
              mercury__integer__HiDs1_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__HiDs1_18, 0) = ((MR_Box) (mercury__integer__HiDigitsSmall_11));
              MR_hl_field(MR_mktag(0), mercury__integer__HiDs1_18, 1) = ((MR_Box) (mercury__integer__Ds1Upper_12));
            }
            {
              mercury__integer__HiDs2_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__HiDs2_19, 0) = ((MR_Box) (mercury__integer__HiDigits_10));
              MR_hl_field(MR_mktag(0), mercury__integer__HiDs2_19, 1) = ((MR_Box) (mercury__integer__Ds2Upper_14));
            }
            mercury__integer__Var_33 = ((MR_Integer) 35 * (MR_Integer) 10);
            mercury__integer__succeeded = (mercury__integer__Middle_9 > mercury__integer__Var_33);
            if (mercury__integer__succeeded)
              {
                MR_Word mercury__integer__Var_34;
                MR_Word mercury__integer__Var_35;
                MR_Integer mercury__integer__L1_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__LoDs1_16, (MR_Integer) 0)));
                MR_Integer mercury__integer__L2_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__LoDs2_17, (MR_Integer) 0)));
                MR_Integer mercury__integer__L1_78;
                MR_Integer mercury__integer__L2_80;
                MR_Integer mercury__integer__L1_86;
                MR_Integer mercury__integer__L2_88;
                MR_Word mercury__integer__Ds1_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__LoDs1_16, (MR_Integer) 1)));
                MR_Word mercury__integer__Ds2_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__LoDs2_17, (MR_Integer) 1)));
                MR_Word mercury__integer__Ds1_79;
                MR_Word mercury__integer__Ds2_81;
                MR_Word mercury__integer__Ds1_87;
                MR_Word mercury__integer__Ds2_89;

                mercury__integer__succeeded = (mercury__integer__L1_66 < mercury__integer__L2_68);
                if (mercury__integer__succeeded)
                  {
                    mercury__integer__Res0_20 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__LoDs1_16, mercury__integer__LoDs2_17);
                  }
                else
                  {
                    mercury__integer__Res0_20 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__LoDs2_17, mercury__integer__LoDs1_16);
                  }
                {
                  mercury__integer__Var_34 = mercury__integer__big_plus_2_f_0(mercury__integer__LoDs1_16, mercury__integer__HiDs1_18);
                }
                {
                  mercury__integer__Var_35 = mercury__integer__big_plus_2_f_0(mercury__integer__LoDs2_17, mercury__integer__HiDs2_19);
                }
                mercury__integer__L1_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_34, (MR_Integer) 0)));
                mercury__integer__Ds1_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_34, (MR_Integer) 1)));
                mercury__integer__L2_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_35, (MR_Integer) 0)));
                mercury__integer__Ds2_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_35, (MR_Integer) 1)));
                mercury__integer__succeeded = (mercury__integer__L1_78 < mercury__integer__L2_80);
                if (mercury__integer__succeeded)
                  {
                    mercury__integer__Res1_21 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__Var_34, mercury__integer__Var_35);
                  }
                else
                  {
                    mercury__integer__Res1_21 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__Var_35, mercury__integer__Var_34);
                  }
                mercury__integer__L1_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HiDs1_18, (MR_Integer) 0)));
                mercury__integer__Ds1_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HiDs1_18, (MR_Integer) 1)));
                mercury__integer__L2_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HiDs2_19, (MR_Integer) 0)));
                mercury__integer__Ds2_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HiDs2_19, (MR_Integer) 1)));
                mercury__integer__succeeded = (mercury__integer__L1_86 < mercury__integer__L2_88);
                if (mercury__integer__succeeded)
                  {
                    mercury__integer__Res2_22 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__HiDs1_18, mercury__integer__HiDs2_19);
                  }
                else
                  {
                    mercury__integer__Res2_22 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__HiDs2_19, mercury__integer__HiDs1_18);
                  }
              }
            else
              {
                MR_Word mercury__integer__Var_36;
                MR_Word mercury__integer__Var_37;

                {
                  mercury__integer__Res0_20 = mercury__integer__pos_mul_2_f_0(mercury__integer__LoDs1_16, mercury__integer__LoDs2_17);
                }
                {
                  mercury__integer__Var_36 = mercury__integer__big_plus_2_f_0(mercury__integer__LoDs1_16, mercury__integer__HiDs1_18);
                }
                {
                  mercury__integer__Var_37 = mercury__integer__big_plus_2_f_0(mercury__integer__LoDs2_17, mercury__integer__HiDs2_19);
                }
                {
                  mercury__integer__Res1_21 = mercury__integer__pos_mul_2_f_0(mercury__integer__Var_36, mercury__integer__Var_37);
                }
                {
                  mercury__integer__Res2_22 = mercury__integer__pos_mul_2_f_0(mercury__integer__HiDs1_18, mercury__integer__HiDs2_19);
                }
              }
          }
        mercury__integer__Var_41 = ((MR_Integer) 2 * mercury__integer__Middle_9);
        mercury__integer__Var_40 = (mercury__integer__Var_41 * (MR_Integer) 14);
        {
          mercury__integer__Var_39 = mercury__integer__big_left_shift_2_f_0(mercury__integer__Res2_22, mercury__integer__Var_40);
        }
        {
          mercury__integer__Var_46 = mercury__integer__f_plus_2_f_0(mercury__integer__Res2_22, mercury__integer__Res0_20);
        }
        {
          mercury__integer__Var_45 = mercury__integer__f_minus_2_f_0(mercury__integer__Res1_21, mercury__integer__Var_46);
        }
        mercury__integer__Var_47 = (mercury__integer__Middle_9 * (MR_Integer) 14);
        {
          mercury__integer__Var_44 = mercury__integer__big_left_shift_2_f_0(mercury__integer__Var_45, mercury__integer__Var_47);
        }
        {
          mercury__integer__Var_38 = mercury__integer__f_plus_2_f_0(mercury__integer__Var_39, mercury__integer__Var_44);
        }
        {
          mercury__integer__Res_8 = mercury__integer__f_plus_2_f_0(mercury__integer__Var_38, mercury__integer__Res0_20);
        }
      }
    return mercury__integer__Res_8;
  }
}

MR_Word MR_CALL 
mercury__integer__pos_mul_2_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__3_3;
    MR_Integer mercury__integer__L1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mercury__integer__L2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__integer__Ds1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__integer__Ds2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));

    mercury__integer__succeeded = (mercury__integer__L1_4 < mercury__integer__L2_6);
    if (mercury__integer__succeeded)
      {
        mercury__integer__HeadVar__3_3 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__HeadVar__1_1, mercury__integer__HeadVar__2_2);
      }
    else
      {
        mercury__integer__HeadVar__3_3 = mercury__integer__pos_mul_karatsuba_2_f_0(mercury__integer__HeadVar__2_2, mercury__integer__HeadVar__1_1);
      }
    return mercury__integer__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__integer__big_left_shift_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Integer mercury__integer__I_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Result_6;
    MR_Integer mercury__integer__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
    MR_Word mercury__integer__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

    mercury__integer__succeeded = (mercury__integer__Var_9 == (MR_Integer) 0);
    if (mercury__integer__succeeded)
      mercury__integer__succeeded = (mercury__integer__Var_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (mercury__integer__succeeded)
      mercury__integer__Result_6 = mercury__integer__X_4;
    else
      {
        MR_Integer mercury__integer__Sign_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
        MR_Word mercury__integer__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

        mercury__integer__succeeded = (mercury__integer__Sign_11 < (MR_Integer) 0);
        if (mercury__integer__succeeded)
          {
            MR_Word mercury__integer__Var_7;
            MR_Integer mercury__integer__Len_20 = ((MR_Integer) 0 - mercury__integer__Sign_11);
            MR_Word mercury__integer__Digits_21;
            MR_Integer mercury__integer__Div_22;
            MR_Integer mercury__integer__Mod_23;
            MR_Integer mercury__integer__NewLen_24;
            MR_Integer mercury__integer__Carry_25;
            MR_Word mercury__integer__NewDigits_26;
            MR_Integer mercury__integer__Var_29;
            MR_Integer mercury__integer__V_6_37;
            MR_Integer mercury__integer__V_7_38;
            MR_Integer mercury__integer__S_39;
            MR_Word mercury__integer__Digits0_40;
            MR_Word mercury__integer__Digits_41;
            MR_Integer mercury__integer__Var_42;

            {
              mercury__integer__neg_list_2_p_0(mercury__integer__Var_12, &mercury__integer__Digits_21);
            }
            {
              mercury__integer__Div_22 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
            }
            {
              mercury__integer__V_7_38 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
            }
            mercury__integer__V_6_37 = (mercury__integer__V_7_38 * (MR_Integer) 14);
            mercury__integer__Mod_23 = (mercury__integer__I_5 - mercury__integer__V_6_37);
            mercury__integer__NewLen_24 = (mercury__integer__Len_20 + mercury__integer__Div_22);
            mercury__integer__Var_29 = ((MR_Integer) 14 - mercury__integer__Mod_23);
            {
              mercury__integer__leftshift_6_p_0(mercury__integer__Mod_23, mercury__integer__Var_29, mercury__integer__NewLen_24, mercury__integer__Digits_21, &mercury__integer__Carry_25, &mercury__integer__NewDigits_26);
            }
            mercury__integer__succeeded = (mercury__integer__Carry_25 == (MR_Integer) 0);
            if (mercury__integer__succeeded)
              {
                mercury__integer__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__integer__Var_7, 0) = ((MR_Box) (mercury__integer__NewLen_24));
                MR_hl_field(MR_mktag(0), mercury__integer__Var_7, 1) = ((MR_Box) (mercury__integer__NewDigits_26));
              }
            else
              {
                MR_Integer mercury__integer__Var_31 = (mercury__integer__NewLen_24 + (MR_Integer) 1);
                MR_Word mercury__integer__Var_33;

                {
                  mercury__integer__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_33, 0) = ((MR_Box) (mercury__integer__Carry_25));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_33, 1) = ((MR_Box) (mercury__integer__NewDigits_26));
                }
                {
                  mercury__integer__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_7, 0) = ((MR_Box) (mercury__integer__Var_31));
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_7, 1) = ((MR_Box) (mercury__integer__Var_33));
                }
              }
            mercury__integer__S_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_7, (MR_Integer) 0)));
            mercury__integer__Digits0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_7, (MR_Integer) 1)));
            mercury__integer__Var_42 = ((MR_Integer) 0 - mercury__integer__S_39);
            {
              mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_40, &mercury__integer__Digits_41);
            }
            {
              mercury__integer__Result_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 0) = ((MR_Box) (mercury__integer__Var_42));
              MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 1) = ((MR_Box) (mercury__integer__Digits_41));
            }
          }
        else
          {
            MR_Integer mercury__integer__Len_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
            MR_Word mercury__integer__Digits_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));
            MR_Integer mercury__integer__Div_47;
            MR_Integer mercury__integer__Mod_48;
            MR_Integer mercury__integer__NewLen_49;
            MR_Integer mercury__integer__Carry_50;
            MR_Word mercury__integer__NewDigits_51;
            MR_Integer mercury__integer__Var_54;
            MR_Integer mercury__integer__V_6_62;
            MR_Integer mercury__integer__V_7_63;

            {
              mercury__integer__Div_47 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
            }
            {
              mercury__integer__V_7_63 = mercury__int__div_2_f_0(mercury__integer__I_5, (MR_Integer) 14);
            }
            mercury__integer__V_6_62 = (mercury__integer__V_7_63 * (MR_Integer) 14);
            mercury__integer__Mod_48 = (mercury__integer__I_5 - mercury__integer__V_6_62);
            mercury__integer__NewLen_49 = (mercury__integer__Len_45 + mercury__integer__Div_47);
            mercury__integer__Var_54 = ((MR_Integer) 14 - mercury__integer__Mod_48);
            {
              mercury__integer__leftshift_6_p_0(mercury__integer__Mod_48, mercury__integer__Var_54, mercury__integer__NewLen_49, mercury__integer__Digits_46, &mercury__integer__Carry_50, &mercury__integer__NewDigits_51);
            }
            mercury__integer__succeeded = (mercury__integer__Carry_50 == (MR_Integer) 0);
            if (mercury__integer__succeeded)
              {
                mercury__integer__Result_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 0) = ((MR_Box) (mercury__integer__NewLen_49));
                MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 1) = ((MR_Box) (mercury__integer__NewDigits_51));
              }
            else
              {
                MR_Integer mercury__integer__Var_56 = (mercury__integer__NewLen_49 + (MR_Integer) 1);
                MR_Word mercury__integer__Var_58;

                {
                  mercury__integer__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_58, 0) = ((MR_Box) (mercury__integer__Carry_50));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_58, 1) = ((MR_Box) (mercury__integer__NewDigits_51));
                }
                {
                  mercury__integer__Result_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 0) = ((MR_Box) (mercury__integer__Var_56));
                  MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 1) = ((MR_Box) (mercury__integer__Var_58));
                }
              }
          }
      }
    return mercury__integer__Result_6;
  }
}

static void MR_CALL 
mercury__integer__leftshift_6_p_0(
  MR_Integer mercury__integer__HeadVar__1_1,
  MR_Integer mercury__integer__HeadVar__2_2,
  MR_Integer mercury__integer__Len_3,
  MR_Word mercury__integer__HeadVar__4_4,
  MR_Integer * mercury__integer__Carry_5,
  MR_Word * mercury__integer__DigitsOut_6)
{
  {
    MR_bool mercury__integer__succeeded;

    if ((mercury__integer__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__integer__Var_12;

        *mercury__integer__Carry_5 = (MR_Integer) 0;
        mercury__integer__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__integer__zeros_3_p_0(mercury__integer__Len_3, mercury__integer__Var_12, mercury__integer__DigitsOut_6);
        }
      }
    else
      {
        MR_Integer mercury__integer__H_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word mercury__integer__T_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__4_4, (MR_Integer) 1)));

        mercury__integer__succeeded = (mercury__integer__Len_3 <= (MR_Integer) 0);
        if (mercury__integer__succeeded)
          {
            *mercury__integer__Carry_5 = (MR_Integer) 0;
            *mercury__integer__DigitsOut_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Integer mercury__integer__TailCarry_20;
            MR_Word mercury__integer__Tail_21;
            MR_Integer mercury__integer__Var_23;
            MR_Integer mercury__integer__Var_24;
            MR_Integer mercury__integer__Var_26;
            MR_Integer mercury__integer__Var_28;
            MR_Integer mercury__integer__Var_29;
            MR_Integer mercury__integer__Var_30;

            {
              mercury__integer__Var_24 = mercury__int__f_60_60_2_f_0((MR_Integer) 16383, mercury__integer__HeadVar__2_2);
            }
            mercury__integer__Var_23 = (mercury__integer__H_16 & mercury__integer__Var_24);
            {
              *mercury__integer__Carry_5 = mercury__int__f_62_62_2_f_0(mercury__integer__Var_23, mercury__integer__HeadVar__2_2);
            }
            mercury__integer__Var_26 = (mercury__integer__Len_3 - (MR_Integer) 1);
            {
              mercury__integer__leftshift_6_p_0(mercury__integer__HeadVar__1_1, mercury__integer__HeadVar__2_2, mercury__integer__Var_26, mercury__integer__T_17, &mercury__integer__TailCarry_20, &mercury__integer__Tail_21);
            }
            {
              mercury__integer__Var_30 = mercury__int__f_60_60_2_f_0(mercury__integer__H_16, mercury__integer__HeadVar__1_1);
            }
            mercury__integer__Var_29 = (mercury__integer__Var_30 & (MR_Integer) 16383);
            mercury__integer__Var_28 = (mercury__integer__TailCarry_20 | mercury__integer__Var_29);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__integer__DigitsOut_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Var_28));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Tail_21));
            }
          }
      }
  }
}

static void MR_CALL 
mercury__integer__zeros_3_p_0(
  MR_Integer mercury__integer__Len_4,
  MR_Word mercury__integer__Digits0_5,
  MR_Word * mercury__integer__Digits_6)
{
  {
    MR_bool mercury__integer__succeeded = (mercury__integer__Len_4 > (MR_Integer) 0);

    if (mercury__integer__succeeded)
      {
        MR_Word mercury__integer__Digits1_7;
        MR_Integer mercury__integer__Var_9 = (mercury__integer__Len_4 - (MR_Integer) 1);

        {
          mercury__integer__zeros_3_p_0(mercury__integer__Var_9, mercury__integer__Digits0_5, &mercury__integer__Digits1_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__integer__Digits_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Digits1_7));
        }
      }
    else
      *mercury__integer__Digits_6 = mercury__integer__Digits0_5;
  }
}

static MR_Word MR_CALL 
mercury__integer__pos_mul_list_3_f_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__Carry_2,
  MR_Word mercury__integer__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__integer__succeeded;
        MR_Word mercury__integer__HeadVar__4_4;

        if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__integer__HeadVar__4_4 = mercury__integer__Carry_2;
        else
          {
            MR_Integer mercury__integer__X_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__integer__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__integer__Var_11;
            MR_Word mercury__integer__Var_12;
            MR_Word mercury__integer__Var_13;
            MR_Integer mercury__integer__Len_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_2, (MR_Integer) 0)));
            MR_Word mercury__integer__Digits_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Carry_2, (MR_Integer) 1)));
            MR_Integer mercury__integer__Len_26;
            MR_Word mercury__integer__Digits0_27;
            MR_Integer mercury__integer__Mod_28;
            MR_Word mercury__integer__Digits_29;
            MR_Integer mercury__integer__L1_34;
            MR_Integer mercury__integer__L2_36;
            MR_Integer mercury__integer__Div_38;
            MR_Word mercury__integer__Ds_39;
            MR_Integer mercury__integer__Len_40;
            MR_Word mercury__integer__D1_35;
            MR_Word mercury__integer__D2_37;

            if ((mercury__integer__Digits_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word mercury__integer__Var_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                mercury__integer__Var_12 = (MR_Word) &mercury__integer_scalar_common_1[9];
              }
            else
              {
                MR_Integer mercury__integer__Var_19 = (mercury__integer__Len_15 + (MR_Integer) 1);
                MR_Word mercury__integer__Var_21;

                {
                  mercury__integer__Var_21 = mercury__integer__mul_base_2_1_f_0(mercury__integer__Digits_16);
                }
                {
                  mercury__integer__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_12, 0) = ((MR_Box) (mercury__integer__Var_19));
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_12, 1) = ((MR_Box) (mercury__integer__Var_21));
                }
              }
            mercury__integer__Len_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
            mercury__integer__Digits0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
            {
              mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__X_7, &mercury__integer__Mod_28, mercury__integer__Digits0_27, &mercury__integer__Digits_29);
            }
            mercury__integer__succeeded = (mercury__integer__Mod_28 == (MR_Integer) 0);
            if (mercury__integer__succeeded)
              {
                mercury__integer__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__integer__Var_13, 0) = ((MR_Box) (mercury__integer__Len_26));
                MR_hl_field(MR_mktag(0), mercury__integer__Var_13, 1) = ((MR_Box) (mercury__integer__Digits_29));
              }
            else
              {
                MR_Integer mercury__integer__Var_30 = (mercury__integer__Len_26 + (MR_Integer) 1);
                MR_Word mercury__integer__Var_32;

                {
                  mercury__integer__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_32, 0) = ((MR_Box) (mercury__integer__Mod_28));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_32, 1) = ((MR_Box) (mercury__integer__Digits_29));
                }
                {
                  mercury__integer__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_13, 0) = ((MR_Box) (mercury__integer__Var_30));
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_13, 1) = ((MR_Box) (mercury__integer__Var_32));
                }
              }
            mercury__integer__L1_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_12, (MR_Integer) 0)));
            mercury__integer__D1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_12, (MR_Integer) 1)));
            mercury__integer__L2_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Var_13, (MR_Integer) 0)));
            mercury__integer__D2_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Var_13, (MR_Integer) 1)));
            {
              mercury__integer__add_pairs_4_p_0(&mercury__integer__Div_38, mercury__integer__Var_12, mercury__integer__Var_13, &mercury__integer__Ds_39);
            }
            mercury__integer__succeeded = (mercury__integer__L1_34 > mercury__integer__L2_36);
            if (mercury__integer__succeeded)
              mercury__integer__Len_40 = mercury__integer__L1_34;
            else
              mercury__integer__Len_40 = mercury__integer__L2_36;
            mercury__integer__succeeded = (mercury__integer__Div_38 == (MR_Integer) 0);
            if (mercury__integer__succeeded)
              {
                mercury__integer__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__integer__Var_11, 0) = ((MR_Box) (mercury__integer__Len_40));
                MR_hl_field(MR_mktag(0), mercury__integer__Var_11, 1) = ((MR_Box) (mercury__integer__Ds_39));
              }
            else
              {
                MR_Integer mercury__integer__Var_43 = (mercury__integer__Len_40 + (MR_Integer) 1);
                MR_Word mercury__integer__Var_45;

                {
                  mercury__integer__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_45, 0) = ((MR_Box) (mercury__integer__Div_38));
                  MR_hl_field(MR_mktag(1), mercury__integer__Var_45, 1) = ((MR_Box) (mercury__integer__Ds_39));
                }
                {
                  mercury__integer__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_11, 0) = ((MR_Box) (mercury__integer__Var_43));
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_11, 1) = ((MR_Box) (mercury__integer__Var_45));
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__integer__next_value_of_HeadVar__1_1 = mercury__integer__Xs_8;
              MR_Word mercury__integer__next_value_of_Carry_2 = mercury__integer__Var_11;

              mercury__integer__Carry_2 = mercury__integer__next_value_of_Carry_2;
              mercury__integer__HeadVar__1_1 = mercury__integer__next_value_of_HeadVar__1_1;
            }
            continue;
          }
        return mercury__integer__HeadVar__4_4;
      }
      break;
    }
}

static void MR_CALL 
mercury__integer__mul_by_digit_2_4_p_0(
  MR_Integer mercury__integer__D_1,
  MR_Integer * mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__HeadVar__3_3,
  MR_Word * mercury__integer__HeadVar__4_4)
{
  {
    MR_bool mercury__integer__succeeded;

    if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__integer__HeadVar__2_2 = (MR_Integer) 0;
        *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Integer mercury__integer__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__integer__Xs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer mercury__integer__Mod_10;
        MR_Word mercury__integer__NewXs_11;
        MR_Integer mercury__integer__DivXs_12;
        MR_Integer mercury__integer__Var_13;
        MR_Integer mercury__integer__Var_14;

        {
          mercury__integer__mul_by_digit_2_4_p_0(mercury__integer__D_1, &mercury__integer__DivXs_12, mercury__integer__Xs_9, &mercury__integer__NewXs_11);
        }
        mercury__integer__Var_14 = (mercury__integer__D_1 * mercury__integer__X_8);
        mercury__integer__Var_13 = (mercury__integer__Var_14 + mercury__integer__DivXs_12);
        *mercury__integer__HeadVar__2_2 = (mercury__integer__Var_13 >> (MR_Integer) 14);
        mercury__integer__Mod_10 = (mercury__integer__Var_13 & (MR_Integer) 16383);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__integer__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__NewXs_11));
        }
      }
  }
}

static MR_Word MR_CALL 
mercury__integer__mul_base_2_1_f_0(
  MR_Word mercury__integer__HeadVar__1_1)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__2_2;

    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__integer__Var_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        mercury__integer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__integer_scalar_common_1[9]);
      }
    else
      {
        MR_Integer mercury__integer__H_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__integer__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__integer__Var_7;

        {
          mercury__integer__Var_7 = mercury__integer__mul_base_2_1_f_0(mercury__integer__T_6);
        }
        {
          mercury__integer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__H_5));
          MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__Var_7));
        }
      }
    return mercury__integer__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__integer__f_minus_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Word mercury__integer__Y_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__3_3;
    MR_Word mercury__integer__Var_6;
    MR_Integer mercury__integer__S_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
    MR_Word mercury__integer__Digits0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
    MR_Word mercury__integer__Digits_9;
    MR_Integer mercury__integer__Var_10 = ((MR_Integer) 0 - mercury__integer__S_7);

    {
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_8, &mercury__integer__Digits_9);
    }
    {
      mercury__integer__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__integer__Var_6, 0) = ((MR_Box) (mercury__integer__Var_10));
      MR_hl_field(MR_mktag(0), mercury__integer__Var_6, 1) = ((MR_Box) (mercury__integer__Digits_9));
    }
    {
      mercury__integer__HeadVar__3_3 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__Var_6);
    }
    return mercury__integer__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__integer__f_plus_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Word mercury__integer__Y_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__3_3;

    {
      mercury__integer__HeadVar__3_3 = mercury__integer__big_plus_2_f_0(mercury__integer__X_4, mercury__integer__Y_5);
    }
    return mercury__integer__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__integer__big_plus_2_f_0(
  MR_Word mercury__integer__X_4,
  MR_Word mercury__integer__Y_5)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Sum_6;
    MR_Integer mercury__integer__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
    MR_Word mercury__integer__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));

    mercury__integer__succeeded = (mercury__integer__Var_15 == (MR_Integer) 0);
    if (mercury__integer__succeeded)
      mercury__integer__succeeded = (mercury__integer__Var_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (mercury__integer__succeeded)
      mercury__integer__Sum_6 = mercury__integer__Y_5;
    else
      {
        MR_Integer mercury__integer__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
        MR_Word mercury__integer__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));

        mercury__integer__succeeded = (mercury__integer__Var_17 == (MR_Integer) 0);
        if (mercury__integer__succeeded)
          mercury__integer__succeeded = (mercury__integer__Var_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mercury__integer__succeeded)
          mercury__integer__Sum_6 = mercury__integer__X_4;
        else
          {
            MR_Word mercury__integer__AbsX_7;
            MR_Word mercury__integer__AbsY_8;
            MR_Integer mercury__integer__SignX_9;
            MR_Integer mercury__integer__SignY_10;
            MR_Integer mercury__integer__Sign_19;
            MR_Integer mercury__integer__Sign_21;
            MR_Word mercury__integer__Var_20;
            MR_Word mercury__integer__Var_22;

            {
              mercury__integer__AbsX_7 = mercury__integer__big_abs_1_f_0(mercury__integer__X_4);
            }
            {
              mercury__integer__AbsY_8 = mercury__integer__big_abs_1_f_0(mercury__integer__Y_5);
            }
            mercury__integer__Sign_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 0)));
            mercury__integer__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_4, (MR_Integer) 1)));
            {
              mercury__integer__SignX_9 = mercury__integer__signum_1_f_0(mercury__integer__Sign_19);
            }
            mercury__integer__Sign_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 0)));
            mercury__integer__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__Y_5, (MR_Integer) 1)));
            {
              mercury__integer__SignY_10 = mercury__integer__signum_1_f_0(mercury__integer__Sign_21);
            }
            mercury__integer__succeeded = (mercury__integer__SignX_9 == mercury__integer__SignY_10);
            if (mercury__integer__succeeded)
              {
                MR_Word mercury__integer__Var_12;
                MR_Integer mercury__integer__L1_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 0)));
                MR_Integer mercury__integer__L2_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 0)));
                MR_Integer mercury__integer__Div_28;
                MR_Word mercury__integer__Ds_29;
                MR_Integer mercury__integer__Len_30;
                MR_Word mercury__integer__D1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 1)));
                MR_Word mercury__integer__D2_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 1)));

                {
                  mercury__integer__add_pairs_4_p_0(&mercury__integer__Div_28, mercury__integer__AbsX_7, mercury__integer__AbsY_8, &mercury__integer__Ds_29);
                }
                mercury__integer__succeeded = (mercury__integer__L1_24 > mercury__integer__L2_26);
                if (mercury__integer__succeeded)
                  mercury__integer__Len_30 = mercury__integer__L1_24;
                else
                  mercury__integer__Len_30 = mercury__integer__L2_26;
                mercury__integer__succeeded = (mercury__integer__Div_28 == (MR_Integer) 0);
                if (mercury__integer__succeeded)
                  {
                    mercury__integer__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__integer__Var_12, 0) = ((MR_Box) (mercury__integer__Len_30));
                    MR_hl_field(MR_mktag(0), mercury__integer__Var_12, 1) = ((MR_Box) (mercury__integer__Ds_29));
                  }
                else
                  {
                    MR_Integer mercury__integer__Var_33 = (mercury__integer__Len_30 + (MR_Integer) 1);
                    MR_Word mercury__integer__Var_35;

                    {
                      mercury__integer__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__integer__Var_35, 0) = ((MR_Box) (mercury__integer__Div_28));
                      MR_hl_field(MR_mktag(1), mercury__integer__Var_35, 1) = ((MR_Box) (mercury__integer__Ds_29));
                    }
                    {
                      mercury__integer__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__integer__Var_12, 0) = ((MR_Box) (mercury__integer__Var_33));
                      MR_hl_field(MR_mktag(0), mercury__integer__Var_12, 1) = ((MR_Box) (mercury__integer__Var_35));
                    }
                  }
                {
                  mercury__integer__Sum_6 = mercury__integer__big_sign_2_f_0(mercury__integer__SignX_9, mercury__integer__Var_12);
                }
              }
            else
              {
                MR_Word mercury__integer__C_11;

                {
                  mercury__integer____Compare____integer_0_0(&mercury__integer__C_11, mercury__integer__AbsX_7, mercury__integer__AbsY_8);
                }
                switch (mercury__integer__C_11) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word mercury__integer__Var_14;
                      MR_Integer mercury__integer__L1_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 0)));
                      MR_Integer mercury__integer__L2_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 0)));
                      MR_Integer mercury__integer__Mod_45;
                      MR_Word mercury__integer__Ds_46;
                      MR_Integer mercury__integer__Len_47;
                      MR_Word mercury__integer__D1_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 1)));
                      MR_Word mercury__integer__D2_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 1)));

                      {
                        mercury__integer__diff_pairs_4_p_0(&mercury__integer__Mod_45, mercury__integer__AbsY_8, mercury__integer__AbsX_7, &mercury__integer__Ds_46);
                      }
                      mercury__integer__succeeded = (mercury__integer__L1_41 > mercury__integer__L2_43);
                      if (mercury__integer__succeeded)
                        mercury__integer__Len_47 = mercury__integer__L1_41;
                      else
                        mercury__integer__Len_47 = mercury__integer__L2_43;
                      mercury__integer__succeeded = (mercury__integer__Mod_45 == (MR_Integer) 0);
                      if (mercury__integer__succeeded)
                        {
                          MR_Word mercury__integer__Var_50;

                          {
                            mercury__integer__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), mercury__integer__Var_50, 0) = ((MR_Box) (mercury__integer__Len_47));
                            MR_hl_field(MR_mktag(0), mercury__integer__Var_50, 1) = ((MR_Box) (mercury__integer__Ds_46));
                          }
                          {
                            mercury__integer__Var_14 = mercury__integer__decap_1_f_0(mercury__integer__Var_50);
                          }
                        }
                      else
                        {
                          MR_Integer mercury__integer__Var_51 = (mercury__integer__Len_47 + (MR_Integer) 1);
                          MR_Word mercury__integer__Var_53;

                          {
                            mercury__integer__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__integer__Var_53, 0) = ((MR_Box) (mercury__integer__Mod_45));
                            MR_hl_field(MR_mktag(1), mercury__integer__Var_53, 1) = ((MR_Box) (mercury__integer__Ds_46));
                          }
                          {
                            mercury__integer__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), mercury__integer__Var_14, 0) = ((MR_Box) (mercury__integer__Var_51));
                            MR_hl_field(MR_mktag(0), mercury__integer__Var_14, 1) = ((MR_Box) (mercury__integer__Var_53));
                          }
                        }
                      {
                        mercury__integer__Sum_6 = mercury__integer__big_sign_2_f_0(mercury__integer__SignY_10, mercury__integer__Var_14);
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word mercury__integer__Var_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                      mercury__integer__Sum_6 = (MR_Word) &mercury__integer_scalar_common_1[9];
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word mercury__integer__Var_13;
                      MR_Integer mercury__integer__L1_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 0)));
                      MR_Integer mercury__integer__L2_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 0)));
                      MR_Integer mercury__integer__Mod_61;
                      MR_Word mercury__integer__Ds_62;
                      MR_Integer mercury__integer__Len_63;
                      MR_Word mercury__integer__D1_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsX_7, (MR_Integer) 1)));
                      MR_Word mercury__integer__D2_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__AbsY_8, (MR_Integer) 1)));

                      {
                        mercury__integer__diff_pairs_4_p_0(&mercury__integer__Mod_61, mercury__integer__AbsX_7, mercury__integer__AbsY_8, &mercury__integer__Ds_62);
                      }
                      mercury__integer__succeeded = (mercury__integer__L1_57 > mercury__integer__L2_59);
                      if (mercury__integer__succeeded)
                        mercury__integer__Len_63 = mercury__integer__L1_57;
                      else
                        mercury__integer__Len_63 = mercury__integer__L2_59;
                      mercury__integer__succeeded = (mercury__integer__Mod_61 == (MR_Integer) 0);
                      if (mercury__integer__succeeded)
                        {
                          MR_Word mercury__integer__Var_66;

                          {
                            mercury__integer__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), mercury__integer__Var_66, 0) = ((MR_Box) (mercury__integer__Len_63));
                            MR_hl_field(MR_mktag(0), mercury__integer__Var_66, 1) = ((MR_Box) (mercury__integer__Ds_62));
                          }
                          {
                            mercury__integer__Var_13 = mercury__integer__decap_1_f_0(mercury__integer__Var_66);
                          }
                        }
                      else
                        {
                          MR_Integer mercury__integer__Var_67 = (mercury__integer__Len_63 + (MR_Integer) 1);
                          MR_Word mercury__integer__Var_69;

                          {
                            mercury__integer__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__integer__Var_69, 0) = ((MR_Box) (mercury__integer__Mod_61));
                            MR_hl_field(MR_mktag(1), mercury__integer__Var_69, 1) = ((MR_Box) (mercury__integer__Ds_62));
                          }
                          {
                            mercury__integer__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), mercury__integer__Var_13, 0) = ((MR_Box) (mercury__integer__Var_67));
                            MR_hl_field(MR_mktag(0), mercury__integer__Var_13, 1) = ((MR_Box) (mercury__integer__Var_69));
                          }
                        }
                      {
                        mercury__integer__Sum_6 = mercury__integer__big_sign_2_f_0(mercury__integer__SignX_9, mercury__integer__Var_13);
                      }
                    }
                    break;
                }
              }
          }
      }
    return mercury__integer__Sum_6;
  }
}

MR_Word MR_CALL 
mercury__integer__big_sign_2_f_0(
  MR_Integer mercury__integer__Sign_4,
  MR_Word mercury__integer__In_5)
{
  {
    MR_bool mercury__integer__succeeded = (mercury__integer__Sign_4 < (MR_Integer) 0);
    MR_Word mercury__integer__Result_6;

    if (mercury__integer__succeeded)
      {
        MR_Integer mercury__integer__S_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__In_5, (MR_Integer) 0)));
        MR_Word mercury__integer__Digits0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__In_5, (MR_Integer) 1)));
        MR_Word mercury__integer__Digits_10;
        MR_Integer mercury__integer__Var_11 = ((MR_Integer) 0 - mercury__integer__S_8);

        {
          mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_9, &mercury__integer__Digits_10);
        }
        {
          mercury__integer__Result_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 0) = ((MR_Box) (mercury__integer__Var_11));
          MR_hl_field(MR_mktag(0), mercury__integer__Result_6, 1) = ((MR_Box) (mercury__integer__Digits_10));
        }
      }
    else
      mercury__integer__Result_6 = mercury__integer__In_5;
    return mercury__integer__Result_6;
  }
}

static void MR_CALL 
mercury__integer__diff_pairs_4_p_0(
  MR_Integer * mercury__integer__Div_5,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__HeadVar__3_3,
  MR_Word * mercury__integer__Ds_10)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__L1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__integer__D1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
    MR_Integer mercury__integer__L2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word mercury__integer__D2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));

    mercury__integer__succeeded = (mercury__integer__L1_6 == mercury__integer__L2_8);
    if (mercury__integer__succeeded)
      {
        mercury__integer__diff_pairs_equal_4_p_0(mercury__integer__Div_5, mercury__integer__D1_7, mercury__integer__D2_9, mercury__integer__Ds_10);
      }
    else
      {
        MR_Integer mercury__integer__H1_11;
        MR_Word mercury__integer__T1_12;

        mercury__integer__succeeded = (mercury__integer__L1_6 > mercury__integer__L2_8);
        if (mercury__integer__succeeded)
          {
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_7)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__integer__succeeded)
              {
                mercury__integer__H1_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 0)));
                mercury__integer__T1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 1)));
              }
          }
        if (mercury__integer__succeeded)
          {
            MR_Integer mercury__integer__Div1_13;
            MR_Word mercury__integer__Ds1_14;
            MR_Integer mercury__integer__Mod_15;
            MR_Word mercury__integer__Var_16;
            MR_Integer mercury__integer__Var_18 = (mercury__integer__L1_6 - (MR_Integer) 1);
            MR_Integer mercury__integer__Var_20;

            {
              mercury__integer__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_16, 0) = ((MR_Box) (mercury__integer__Var_18));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_16, 1) = ((MR_Box) (mercury__integer__T1_12));
            }
            {
              mercury__integer__diff_pairs_4_p_0(&mercury__integer__Div1_13, mercury__integer__Var_16, mercury__integer__HeadVar__3_3, &mercury__integer__Ds1_14);
            }
            mercury__integer__Var_20 = (mercury__integer__H1_11 + mercury__integer__Div1_13);
            *mercury__integer__Div_5 = (mercury__integer__Var_20 >> (MR_Integer) 14);
            mercury__integer__Mod_15 = (mercury__integer__Var_20 & (MR_Integer) 16383);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__integer__Ds_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_15));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_14));
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "predicate \140integer.diff_pairs\'/4", (MR_String) "invalid integer");
              return;
            }
          }
      }
  }
}

static void MR_CALL 
mercury__integer__diff_pairs_equal_4_p_0(
  MR_Integer * mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__HeadVar__3_3,
  MR_Word * mercury__integer__HeadVar__4_4)
{
  {
    MR_bool mercury__integer__succeeded;

    if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
        *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word mercury__integer__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mercury__integer__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));

        if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
            *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Integer mercury__integer__Y_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__integer__Ys_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
            MR_Integer mercury__integer__Mod_13;
            MR_Word mercury__integer__TailDs_14;
            MR_Integer mercury__integer__DivTail_15;
            MR_Integer mercury__integer__Var_16;
            MR_Integer mercury__integer__Var_17;

            {
              mercury__integer__diff_pairs_equal_4_p_0(&mercury__integer__DivTail_15, mercury__integer__Var_18, mercury__integer__Ys_12, &mercury__integer__TailDs_14);
            }
            mercury__integer__Var_17 = (mercury__integer__Var_19 - mercury__integer__Y_11);
            mercury__integer__Var_16 = (mercury__integer__Var_17 + mercury__integer__DivTail_15);
            *mercury__integer__HeadVar__1_1 = (mercury__integer__Var_16 >> (MR_Integer) 14);
            mercury__integer__Mod_13 = (mercury__integer__Var_16 & (MR_Integer) 16383);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__integer__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_13));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__TailDs_14));
            }
          }
      }
  }
}

static void MR_CALL 
mercury__integer__add_pairs_4_p_0(
  MR_Integer * mercury__integer__Div_5,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__HeadVar__3_3,
  MR_Word * mercury__integer__Ds_10)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__L1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__integer__D1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
    MR_Integer mercury__integer__L2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word mercury__integer__D2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));

    mercury__integer__succeeded = (mercury__integer__L1_6 == mercury__integer__L2_8);
    if (mercury__integer__succeeded)
      {
        mercury__integer__add_pairs_equal_4_p_0(mercury__integer__Div_5, mercury__integer__D1_7, mercury__integer__D2_9, mercury__integer__Ds_10);
      }
    else
      {
        MR_Integer mercury__integer__H2_11;
        MR_Word mercury__integer__T2_12;

        mercury__integer__succeeded = (mercury__integer__L1_6 < mercury__integer__L2_8);
        if (mercury__integer__succeeded)
          {
            mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D2_9)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__integer__succeeded)
              {
                mercury__integer__H2_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D2_9, (MR_Integer) 0)));
                mercury__integer__T2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D2_9, (MR_Integer) 1)));
              }
          }
        if (mercury__integer__succeeded)
          {
            MR_Integer mercury__integer__Div1_13;
            MR_Word mercury__integer__Ds1_14;
            MR_Integer mercury__integer__Mod_15;
            MR_Word mercury__integer__Var_19;
            MR_Integer mercury__integer__Var_20 = (mercury__integer__L2_8 - (MR_Integer) 1);
            MR_Integer mercury__integer__Var_22;

            {
              mercury__integer__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__integer__Var_19, 0) = ((MR_Box) (mercury__integer__Var_20));
              MR_hl_field(MR_mktag(0), mercury__integer__Var_19, 1) = ((MR_Box) (mercury__integer__T2_12));
            }
            {
              mercury__integer__add_pairs_4_p_0(&mercury__integer__Div1_13, mercury__integer__HeadVar__2_2, mercury__integer__Var_19, &mercury__integer__Ds1_14);
            }
            mercury__integer__Var_22 = (mercury__integer__H2_11 + mercury__integer__Div1_13);
            *mercury__integer__Div_5 = (mercury__integer__Var_22 >> (MR_Integer) 14);
            mercury__integer__Mod_15 = (mercury__integer__Var_22 & (MR_Integer) 16383);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__integer__Ds_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_15));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_14));
            }
          }
        else
          {
            MR_Integer mercury__integer__H1_16;
            MR_Word mercury__integer__T1_17;

            mercury__integer__succeeded = (mercury__integer__L1_6 > mercury__integer__L2_8);
            if (mercury__integer__succeeded)
              {
                mercury__integer__succeeded = ((MR_tag((MR_Word) mercury__integer__D1_7)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__integer__succeeded)
                  {
                    mercury__integer__H1_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 0)));
                    mercury__integer__T1_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__D1_7, (MR_Integer) 1)));
                  }
              }
            if (mercury__integer__succeeded)
              {
                MR_Word mercury__integer__Var_23;
                MR_Integer mercury__integer__Var_25 = (mercury__integer__L1_6 - (MR_Integer) 1);
                MR_Integer mercury__integer__Var_27;
                MR_Integer mercury__integer__Div1_31;
                MR_Word mercury__integer__Ds1_32;
                MR_Integer mercury__integer__Mod_33;

                {
                  mercury__integer__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_23, 0) = ((MR_Box) (mercury__integer__Var_25));
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_23, 1) = ((MR_Box) (mercury__integer__T1_17));
                }
                {
                  mercury__integer__add_pairs_4_p_0(&mercury__integer__Div1_31, mercury__integer__Var_23, mercury__integer__HeadVar__3_3, &mercury__integer__Ds1_32);
                }
                mercury__integer__Var_27 = (mercury__integer__H1_16 + mercury__integer__Div1_31);
                *mercury__integer__Div_5 = (mercury__integer__Var_27 >> (MR_Integer) 14);
                mercury__integer__Mod_33 = (mercury__integer__Var_27 & (MR_Integer) 16383);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__integer__Ds_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_33));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__Ds1_32));
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "integer", (MR_String) "predicate \140integer.add_pairs\'/4", (MR_String) "invalid integer");
                  return;
                }
              }
          }
      }
  }
}

static void MR_CALL 
mercury__integer__add_pairs_equal_4_p_0(
  MR_Integer * mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__HeadVar__3_3,
  MR_Word * mercury__integer__HeadVar__4_4)
{
  {
    MR_bool mercury__integer__succeeded;

    if ((mercury__integer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
        *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word mercury__integer__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mercury__integer__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));

        if ((mercury__integer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
            *mercury__integer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Integer mercury__integer__Y_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__integer__Ys_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
            MR_Integer mercury__integer__Mod_13;
            MR_Word mercury__integer__TailDs_14;
            MR_Integer mercury__integer__DivTail_15;
            MR_Integer mercury__integer__Var_16;
            MR_Integer mercury__integer__Var_17;

            {
              mercury__integer__add_pairs_equal_4_p_0(&mercury__integer__DivTail_15, mercury__integer__Var_18, mercury__integer__Ys_12, &mercury__integer__TailDs_14);
            }
            mercury__integer__Var_17 = (mercury__integer__Var_19 + mercury__integer__Y_11);
            mercury__integer__Var_16 = (mercury__integer__Var_17 + mercury__integer__DivTail_15);
            *mercury__integer__HeadVar__1_1 = (mercury__integer__Var_16 >> (MR_Integer) 14);
            mercury__integer__Mod_13 = (mercury__integer__Var_16 & (MR_Integer) 16383);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__integer__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Mod_13));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__TailDs_14));
            }
          }
      }
  }
}

static MR_Word MR_CALL 
mercury__integer__decap_1_f_0(
  MR_Word mercury__integer__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__integer__succeeded;
        MR_Word mercury__integer__HeadVar__2_2;
        MR_Word mercury__integer__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mercury__integer__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));

        if ((mercury__integer__Var_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word mercury__integer__Var_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            mercury__integer__HeadVar__2_2 = (MR_Word) &mercury__integer_scalar_common_1[9];
          }
        else
          {
            MR_Integer mercury__integer__H_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__Var_14, (MR_Integer) 0)));
            MR_Word mercury__integer__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__Var_14, (MR_Integer) 1)));

            mercury__integer__succeeded = (mercury__integer__H_6 == (MR_Integer) 0);
            if (mercury__integer__succeeded)
              {
                MR_Word mercury__integer__Var_10;
                MR_Integer mercury__integer__Var_11 = (mercury__integer__Var_15 - (MR_Integer) 1);

                {
                  mercury__integer__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_10, 0) = ((MR_Box) (mercury__integer__Var_11));
                  MR_hl_field(MR_mktag(0), mercury__integer__Var_10, 1) = ((MR_Box) (mercury__integer__T_7));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__integer__next_value_of_HeadVar__1_1 = mercury__integer__Var_10;

                  mercury__integer__HeadVar__1_1 = mercury__integer__next_value_of_HeadVar__1_1;
                }
                continue;
              }
            else
              mercury__integer__HeadVar__2_2 = mercury__integer__HeadVar__1_1;
          }
        return mercury__integer__HeadVar__2_2;
      }
      break;
    }
}

MR_Integer MR_CALL 
mercury__integer__signum_1_f_0(
  MR_Integer mercury__integer__N_3)
{
  {
    MR_bool mercury__integer__succeeded = (mercury__integer__N_3 < (MR_Integer) 0);
    MR_Integer mercury__integer__Sign_4;

    if (mercury__integer__succeeded)
      mercury__integer__Sign_4 = (MR_Integer) -1;
    else
      {
        mercury__integer__succeeded = (mercury__integer__N_3 == (MR_Integer) 0);
        if (mercury__integer__succeeded)
          mercury__integer__Sign_4 = (MR_Integer) 0;
        else
          mercury__integer__Sign_4 = (MR_Integer) 1;
      }
    return mercury__integer__Sign_4;
  }
}

MR_Word MR_CALL 
mercury__integer__f_minus_1_f_0(
  MR_Word mercury__integer__X_3)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__2_2;
    MR_Integer mercury__integer__S_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__X_3, (MR_Integer) 0)));
    MR_Word mercury__integer__Digits0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__X_3, (MR_Integer) 1)));
    MR_Word mercury__integer__Digits_6;
    MR_Integer mercury__integer__Var_7 = ((MR_Integer) 0 - mercury__integer__S_4);

    {
      mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_5, &mercury__integer__Digits_6);
    }
    {
      mercury__integer__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 0) = ((MR_Box) (mercury__integer__Var_7));
      MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, 1) = ((MR_Box) (mercury__integer__Digits_6));
    }
    return mercury__integer__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__integer__f_plus_1_f_0(
  MR_Word mercury__integer__X_3)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__X_2 = mercury__integer__X_3;

    return mercury__integer__X_2;
  }
}

MR_bool MR_CALL 
mercury__integer__is_zero_1_p_0(
  MR_Word mercury__integer__HeadVar__1_1)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__Var_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__integer__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

    mercury__integer__succeeded = (mercury__integer__Var_2 == (MR_Integer) 0);
    if (mercury__integer__succeeded)
      mercury__integer__succeeded = (mercury__integer__Var_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return mercury__integer__succeeded;
  }
}

MR_Word MR_CALL 
mercury__integer__abs_1_f_0(
  MR_Word mercury__integer__N_3)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__2_2;

    {
      mercury__integer__HeadVar__2_2 = mercury__integer__big_abs_1_f_0(mercury__integer__N_3);
    }
    return mercury__integer__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__integer__big_abs_1_f_0(
  MR_Word mercury__integer__HeadVar__1_1)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__Result_5;
    MR_Integer mercury__integer__Sign_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__integer__Ds_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));

    mercury__integer__succeeded = (mercury__integer__Sign_3 < (MR_Integer) 0);
    if (mercury__integer__succeeded)
      {
        MR_Integer mercury__integer__S_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__integer__Digits0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__integer__Digits_10;
        MR_Integer mercury__integer__Var_11 = ((MR_Integer) 0 - mercury__integer__S_8);

        {
          mercury__integer__neg_list_2_p_0(mercury__integer__Digits0_9, &mercury__integer__Digits_10);
        }
        {
          mercury__integer__Result_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__integer__Result_5, 0) = ((MR_Box) (mercury__integer__Var_11));
          MR_hl_field(MR_mktag(0), mercury__integer__Result_5, 1) = ((MR_Box) (mercury__integer__Digits_10));
        }
      }
    else
      mercury__integer__Result_5 = mercury__integer__HeadVar__1_1;
    return mercury__integer__Result_5;
  }
}

void MR_CALL 
mercury__integer__neg_list_2_p_0(
  MR_Word mercury__integer__HeadVar__1_1,
  MR_Word * mercury__integer__HeadVar__2_2)
{
  {
    MR_bool mercury__integer__succeeded;

    if ((mercury__integer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__integer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Integer mercury__integer__H_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__integer__T_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__integer__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__integer__NT_5;
        MR_Integer mercury__integer__Var_6 = ((MR_Integer) 0 - mercury__integer__H_3);

        {
          mercury__integer__neg_list_2_p_0(mercury__integer__T_4, &mercury__integer__NT_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__integer__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__integer__Var_6));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__integer__NT_5));
        }
      }
  }
}

MR_bool MR_CALL 
mercury__integer__f_greater_or_equal_2_p_0(
  MR_Word mercury__integer__X_3,
  MR_Word mercury__integer__Y_4)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__C_5;

    {
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__X_3, mercury__integer__Y_4);
    }
    switch (mercury__integer__C_5) {
      default:
        mercury__integer__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        mercury__integer__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        mercury__integer__succeeded = MR_TRUE;
        break;
    }
    return mercury__integer__succeeded;
  }
}

MR_bool MR_CALL 
mercury__integer__f_less_or_equal_2_p_0(
  MR_Word mercury__integer__X_3,
  MR_Word mercury__integer__Y_4)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__C_5;

    {
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__X_3, mercury__integer__Y_4);
    }
    switch (mercury__integer__C_5) {
      default:
        mercury__integer__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        mercury__integer__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 0:
        mercury__integer__succeeded = MR_TRUE;
        break;
    }
    return mercury__integer__succeeded;
  }
}

MR_bool MR_CALL 
mercury__integer__f_greater_than_2_p_0(
  MR_Word mercury__integer__X_3,
  MR_Word mercury__integer__Y_4)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__C_5;

    {
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__X_3, mercury__integer__Y_4);
    }
    mercury__integer__succeeded = (mercury__integer__C_5 == (MR_Integer) 2);
    return mercury__integer__succeeded;
  }
}

MR_bool MR_CALL 
mercury__integer__f_less_than_2_p_0(
  MR_Word mercury__integer__X_3,
  MR_Word mercury__integer__Y_4)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__C_5;

    {
      mercury__integer____Compare____integer_0_0(&mercury__integer__C_5, mercury__integer__X_3, mercury__integer__Y_4);
    }
    mercury__integer__succeeded = (mercury__integer__C_5 == (MR_Integer) 1);
    return mercury__integer__succeeded;
  }
}

void MR_CALL 
mercury__integer____Compare____integer_0_0(
  MR_Word * mercury__integer__HeadVar__1_1,
  MR_Word mercury__integer__HeadVar__2_2,
  MR_Word mercury__integer__HeadVar__3_3)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Integer mercury__integer__CastX_9 = (MR_Integer) mercury__integer__HeadVar__2_2;
    MR_Integer mercury__integer__CastY_10 = (MR_Integer) mercury__integer__HeadVar__3_3;

    mercury__integer__succeeded = (mercury__integer__CastX_9 == mercury__integer__CastY_10);
    if (mercury__integer__succeeded)
      *mercury__integer__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__integer__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__integer__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__integer__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__integer__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__integer__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__integer__Var_8;

        mercury__integer__succeeded = (mercury__integer__ArgX1_4 < mercury__integer__ArgY1_5);
        if (mercury__integer__succeeded)
          mercury__integer__Var_8 = (MR_Integer) 1;
        else
          {
            mercury__integer__succeeded = (mercury__integer__ArgX1_4 == mercury__integer__ArgY1_5);
            if (mercury__integer__succeeded)
              mercury__integer__Var_8 = (MR_Integer) 0;
            else
              mercury__integer__Var_8 = (MR_Integer) 2;
          }
        mercury__integer__succeeded = (mercury__integer__Var_8 == (MR_Integer) 0);
        mercury__integer__succeeded = !(mercury__integer__succeeded);
        if (mercury__integer__succeeded)
          *mercury__integer__HeadVar__1_1 = mercury__integer__Var_8;
        else
          {
            MR_Word mercury__integer__TypeInfo_12_12 = (MR_Word) &mercury__integer_scalar_common_1[0];

            {
              mercury__builtin__compare_3_p_0(mercury__integer__TypeInfo_12_12, mercury__integer__HeadVar__1_1, ((MR_Box) (mercury__integer__ArgX2_6)), ((MR_Box) (mercury__integer__ArgY2_7)));
            }
          }
      }
  }
}

MR_Word MR_CALL 
mercury__integer__ten_0_f_0(void)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__1_1 = (MR_Word) &mercury__integer_scalar_common_1[8];

    return mercury__integer__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__integer__two_0_f_0(void)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__1_1 = (MR_Word) &mercury__integer_scalar_common_1[6];

    return mercury__integer__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__integer__one_0_f_0(void)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__1_1 = (MR_Word) &mercury__integer_scalar_common_1[4];

    return mercury__integer__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__integer__zero_0_f_0(void)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__1_1 = (MR_Word) &mercury__integer_scalar_common_1[9];
    MR_Word mercury__integer__Var_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__integer__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__integer__negative_one_0_f_0(void)
{
  {
    MR_bool mercury__integer__succeeded;
    MR_Word mercury__integer__HeadVar__1_1 = (MR_Word) &mercury__integer_scalar_common_1[2];

    return mercury__integer__HeadVar__1_1;
  }
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

/* :- end_module integer. */
