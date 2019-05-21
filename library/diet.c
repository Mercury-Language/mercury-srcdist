/*
** Automatically generated from `diet.m'
** by the Mercury compiler,
** version 2017-08-21
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


/* :- module diet. */
/* :- implementation. */

/*
INIT mercury__diet__init
ENDINIT
*/

#include "diet.mih"


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
#include "int16.mih"
#include "int32.mih"
#include "int8.mih"
#include "integer.mih"
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
#include "uint16.mih"
#include "uint32.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_DuFunctorDesc mercury__diet__diet__du_functor_desc_diet_1_0;

static const MR_VA_PseudoTypeInfo_Struct2 mercury__diet____vpti_tuple_2__pseudo_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__diet__diet__pti_diet_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__diet__diet__field_types_diet_1_1[4];

static const MR_ConstString mercury__diet__diet__field_names_diet_1_1[4];

static const MR_DuFunctorDesc mercury__diet__diet__du_functor_desc_diet_1_1;

static const MR_DuFunctorDescPtr mercury__diet__diet__du_stag_ordered_diet_1_0[1];

static const MR_DuFunctorDescPtr mercury__diet__diet__du_stag_ordered_diet_1_1[1];

static const MR_DuPtagLayout mercury__diet__diet__du_ptag_ordered_diet_1[2];

static const MR_DuFunctorDescPtr mercury__diet__diet__du_name_ordered_diet_1[2];

static const MR_Integer mercury__diet__diet__functor_number_map_diet_1[2];

static const MR_ConstString mercury__diet__diet__type_class_id_var_names_diet_element_1[1];

static const MR_TypeClassMethod mercury__diet__diet__type_class_id_method_ids_diet_element_1[3];

static const MR_TypeClassId mercury__diet__diet__type_class_id_diet_element_1;

static MR_Integer MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
  MR_Word Var_22,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(
  MR_Word Var_27,
  MR_Word T_6,
  MR_Word STATE_VARIABLE_Acc_0_13,
  MR_Word * STATE_VARIABLE_Acc_14);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(
  MR_Word Var_23,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word T_6,
  MR_Word STATE_VARIABLE_Acc_0_13,
  MR_Word * STATE_VARIABLE_Acc_14);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_51_95_95_91_49_44_32_51_44_32_53_93_95_48_5_p_0(
  MR_Word Var_19,
  MR_Word TypeClassInfo_for_diet_element_15,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Word STATE_VARIABLE_A_0_10,
  MR_Word * STATE_VARIABLE_A_11);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(
  MR_Word Var_23,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
  MR_Word Var_19,
  MR_Word TypeClassInfo_for_diet_element_15,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(
  MR_Word Var_23,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
  MR_Word Var_19,
  MR_Word TypeClassInfo_for_diet_element_15,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word TypeClassInfo_for_diet_element_27,
  MR_Word T_8,
  MR_Word STATE_VARIABLE_Acc1_0_16,
  MR_Word * STATE_VARIABLE_Acc1_17,
  MR_Word STATE_VARIABLE_Acc2_0_18,
  MR_Word * STATE_VARIABLE_Acc2_19);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_117_112_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_7_p_0(
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word TypeClassInfo_for_diet_element_22,
  MR_Box Lo_9,
  MR_Box Hi_10,
  MR_Word STATE_VARIABLE_A_0_13,
  MR_Word * STATE_VARIABLE_A_14,
  MR_Word STATE_VARIABLE_B_0_15,
  MR_Word * STATE_VARIABLE_B_16);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__diet__inter_2_6_p_0(
  MR_Word TypeClassInfo_for_diet_element_26,
  MR_Word Input_7,
  MR_Word Head0_8,
  MR_Word Stream0_9,
  MR_Word * Result_10,
  MR_Word * Head_11,
  MR_Word * Stream_12);

static void MR_CALL 
mercury__diet__inter_help_8_p_0(
  MR_Word TypeClassInfo_for_diet_element_49,
  MR_Tuple HeadVar__1_1,
  MR_Word Right0_11,
  MR_Word Left0_12,
  MR_Word Head0_13,
  MR_Word Stream0_14,
  MR_Word * Result_15,
  MR_Word * Head_16,
  MR_Word * Stream_17);

static MR_Box MR_CALL 
mercury__diet__max_elem_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_6,
  MR_Box X_4,
  MR_Box Y_5);

static MR_Box MR_CALL 
mercury__diet__min_elem_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_6,
  MR_Box X_4,
  MR_Box Y_5);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__diet__union_2_7_p_0(
  MR_Word TypeClassInfo_for_diet_element_30,
  MR_Word Input_8,
  MR_Word Limit_9,
  MR_Word Head0_10,
  MR_Word Stream0_11,
  MR_Word * Left_12,
  MR_Word * Head_13,
  MR_Word * Stream_14);

static void MR_CALL 
mercury__diet__union_helper_9_p_0(
  MR_Word TypeClassInfo_for_diet_element_56,
  MR_Word Left0_10,
  MR_Tuple HeadVar__2_2,
  MR_Word Right0_13,
  MR_Word Limit_14,
  MR_Word Head0_15,
  MR_Word Stream0_16,
  MR_Word * Left_17,
  MR_Word * Head_18,
  MR_Word * Stream_19);

static void MR_CALL 
mercury__diet__diff_6_p_0(
  MR_Word TypeClassInfo_for_diet_element_27,
  MR_Word Input_7,
  MR_Word Head0_8,
  MR_Word Stream0_9,
  MR_Word * Output_10,
  MR_Word * Head_11,
  MR_Word * Stream_12);

static void MR_CALL 
mercury__diet__diff_helper_8_p_0(
  MR_Word TypeClassInfo_for_diet_element_44,
  MR_Tuple HeadVar__1_1,
  MR_Word Right0_11,
  MR_Word Left0_12,
  MR_Word Head0_13,
  MR_Word Stream0_14,
  MR_Word * Output_15,
  MR_Word * Head_16,
  MR_Word * Stream_17);

static MR_Word MR_CALL 
mercury__diet__reroot_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_25,
  MR_Word L_4,
  MR_Word R_5);

static void MR_CALL 
mercury__diet__find_del_right_4_p_0(
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Box P0_5,
  MR_Word T0_6,
  MR_Box * P_7,
  MR_Word * T_8);

static void MR_CALL 
mercury__diet__find_del_left_4_p_0(
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Box P0_5,
  MR_Word T0_6,
  MR_Box * P_7,
  MR_Word * T_8);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__diet__take_max_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word T0_4,
  MR_Tuple * X_5,
  MR_Word * T_6);

static void MR_CALL 
mercury__diet__take_min_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word T0_4,
  MR_Tuple * X_5,
  MR_Word * T_6);

static MR_Word MR_CALL 
mercury__diet__join_3_f_0(
  MR_Word TypeClassInfo_for_diet_element_29,
  MR_Tuple V_5,
  MR_Word L_6,
  MR_Word R_7);

static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(
  MR_Word IsLeft_5,
  MR_Tuple X_6,
  MR_Word T0_7);

static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(
  MR_Tuple X_5,
  MR_Word L_6,
  MR_Word R_7);

static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(
  MR_Tuple X_5,
  MR_Word L_6,
  MR_Word R_7);

static void MR_CALL 
mercury__diet__subset_2_5_p_0(
  MR_Word TypeClassInfo_for_diet_element_56,
  MR_Tuple HeadVar__1_1,
  MR_Word R1_8,
  MR_Tuple HeadVar__3_3,
  MR_Word R2_11,
  MR_Word * IsSubset_12);

static void MR_CALL 
mercury__diet__member_in_range_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_8,
  MR_Box Lo_4,
  MR_Box Hi_5,
  MR_Box * Elem_6,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__diet__take_min_iter_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_21,
  MR_Word T0_4,
  MR_Tuple * X_5,
  MR_Word * T_6);

static MR_bool MR_CALL 
mercury__diet____Unify____diet_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__diet____Compare____diet_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__diet____Unify____interval_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__diet____Compare____interval_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__less_than_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__successor_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__predecessor_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box mercury__diet_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__diet_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__diet_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__diet_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__diet_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
};

static /* final */ const MR_Box mercury__diet_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__diet_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__diet_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__diet_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__diet_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__diet_scalar_common_3[0])),
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
#include "int8.mh"
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
#include "uint16.mh"
#include "uint32.mh"
#include "uint8.mh"
#include "version_array.mh"



static const MR_DuFunctorDesc mercury__diet__diet__du_functor_desc_diet_1_0 = {
  (MR_String) "empty",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__diet____vpti_tuple_2__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__diet__diet__pti_diet_1__pseudo_1 = {
  &mercury__diet__diet__type_ctor_info_diet_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mercury__diet__diet__field_types_diet_1_1[4] = {
  (MR_PseudoTypeInfo) &mercury__diet____vpti_tuple_2__pseudo_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__diet__diet__pti_diet_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__diet__diet__pti_diet_1__pseudo_1
};

static const MR_ConstString mercury__diet__diet__field_names_diet_1_1[4] = {
  (MR_String) "interval",
  (MR_String) "node_height",
  (MR_String) "left",
  (MR_String) "right"
};

static const MR_DuFunctorDesc mercury__diet__diet__du_functor_desc_diet_1_1 = {
  (MR_String) "node",
  (MR_Integer) 4,
  (MR_Integer) 13,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__diet__diet__field_types_diet_1_1,
  mercury__diet__diet__field_names_diet_1_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__diet__diet__du_stag_ordered_diet_1_0[1] = {
  &mercury__diet__diet__du_functor_desc_diet_1_0
};

static const MR_DuFunctorDescPtr mercury__diet__diet__du_stag_ordered_diet_1_1[1] = {
  &mercury__diet__diet__du_functor_desc_diet_1_1
};

static const MR_DuPtagLayout mercury__diet__diet__du_ptag_ordered_diet_1[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mercury__diet__diet__du_stag_ordered_diet_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__diet__diet__du_stag_ordered_diet_1_1
  }
};

static const MR_DuFunctorDescPtr mercury__diet__diet__du_name_ordered_diet_1[2] = {
  &mercury__diet__diet__du_functor_desc_diet_1_0,
  &mercury__diet__diet__du_functor_desc_diet_1_1
};

static const MR_Integer mercury__diet__diet__functor_number_map_diet_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__diet__diet__type_ctor_info_diet_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__diet____Unify____diet_1_0_10001)),
  ((MR_Box) (mercury__diet____Compare____diet_1_0_10001)),
  (MR_String) "diet",
  (MR_String) "diet",
  {     mercury__diet__diet__du_name_ordered_diet_1 },
  {     mercury__diet__diet__du_ptag_ordered_diet_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__diet__diet__functor_number_map_diet_1
};

const MR_TypeCtorInfo_Struct mercury__diet__diet__type_ctor_info_interval_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__diet____Unify____interval_1_0_10001)),
  ((MR_Box) (mercury__diet____Compare____interval_1_0_10001)),
  (MR_String) "diet",
  (MR_String) "interval",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__diet____vpti_tuple_2__pseudo_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_BaseTypeclassInfo base_typeclass_info_diet__diet_element__arity1__int__arity0__[8] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__less_than_2_2_p_0_10001)),
  ((MR_Box) (mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__successor_1_1_f_0_10001)),
  ((MR_Box) (mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__predecessor_1_1_f_0_10001))
};

static const MR_ConstString mercury__diet__diet__type_class_id_var_names_diet_element_1[1] = {
  (MR_String) "T"
};

static const MR_TypeClassMethod mercury__diet__diet__type_class_id_method_ids_diet_element_1[3] = {
  {
    (MR_String) "less_than",
    (MR_Integer) 2,
    MR_PREDICATE
  },
  {
    (MR_String) "successor",
    (MR_Integer) 2,
    MR_FUNCTION
  },
  {
    (MR_String) "predecessor",
    (MR_Integer) 2,
    MR_FUNCTION
  }
};

static const MR_TypeClassId mercury__diet__diet__type_class_id_diet_element_1 = {
  (MR_String) "diet",
  (MR_String) "diet_element",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 3,
  mercury__diet__diet__type_class_id_var_names_diet_element_1,
  mercury__diet__diet__type_class_id_method_ids_diet_element_1
};

const MR_TypeClassDeclStruct mercury__diet__diet__type_class_decl_diet_element_1 = {
  &mercury__diet__diet__type_class_id_diet_element_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static MR_Integer MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

MR_Integer MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__predecessor_1_1_f_0(
  MR_Integer X_3)
{
  {
    MR_Integer HeadVar__2_2 = (X_3 - (MR_Integer) 1);

    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__successor_1_1_f_0(
  MR_Integer X_3)
{
  {
    MR_Integer HeadVar__2_2 = (X_3 + (MR_Integer) 1);

    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__less_than_2_2_p_0(
  MR_Integer X_3,
  MR_Integer Y_4)
{
  {
    MR_bool succeeded = (X_3 < Y_4);

    return succeeded;
  }
}

void MR_CALL 
mercury__diet____Compare____interval_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Tuple HeadVar__2_2,
  MR_Tuple HeadVar__3_3)
{
  {
    MR_Word TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
    MR_Word TypeInfo_9_9;
    MR_Tuple Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Tuple Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 2) = ((MR_Box) (TypeInfo_for_T_6));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 3) = ((MR_Box) (TypeInfo_for_T_6));
    }
    mercury__builtin__compare_3_p_0(TypeInfo_9_9, HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mercury__diet____Unify____interval_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Tuple HeadVar__1_1,
  MR_Tuple HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
    MR_Word TypeInfo_8_8;
    MR_Tuple Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Tuple Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (TypeCtorInfo_6_6));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 2) = ((MR_Box) (TypeInfo_for_T_5));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 3) = ((MR_Box) (TypeInfo_for_T_5));
    }
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_8_8, ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
mercury__diet____Compare____diet_1_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_24 = (MR_Integer) HeadVar__3_3;

    /* setup for tailcalls optimized into a loop */
    succeeded = (CastX_23 == CastY_24);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Tuple Var_37 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Tuple ArgY1_13 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer ArgY2_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ArgY3_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ArgY4_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3)));
        MR_Word Var_20;
        MR_Word TypeCtorInfo_26_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
        MR_Word TypeInfo_28_28;

        {
          TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_28_28, 0) = ((MR_Box) (TypeCtorInfo_26_26));
          MR_hl_field(MR_mktag(0), TypeInfo_28_28, 1) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), TypeInfo_28_28, 2) = ((MR_Box) (TypeInfo_for_T_25));
          MR_hl_field(MR_mktag(0), TypeInfo_28_28, 3) = ((MR_Box) (TypeInfo_for_T_25));
        }
        mercury__builtin__compare_3_p_0(TypeInfo_28_28, &Var_20, ((MR_Box) (Var_37)), ((MR_Box) (ArgY1_13)));
        succeeded = (Var_20 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_20;
        else
        {
          MR_Word Var_21;

          succeeded = (Var_36 < ArgY2_15);
          if (succeeded)
            Var_21 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_36 == ArgY2_15);
            if (succeeded)
              Var_21 = (MR_Integer) 0;
            else
              Var_21 = (MR_Integer) 2;
          }
          succeeded = (Var_21 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_21;
          else
          {
            MR_Word Var_22;

            mercury__diet____Compare____diet_1_0(TypeInfo_for_T_25, &Var_22, Var_35, ArgY3_17);
            succeeded = (Var_22 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_22;
            else
            {
              MR_Word next_value_of_HeadVar__2_2 = Var_34;
              MR_Word next_value_of_HeadVar__3_3 = ArgY4_19;

              /* direct tailcall eliminated */
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              continue;
            }
          }
        }
      }
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__diet__predecessor_1_f_0(
  MR_Word TypeClassInfo_for_diet_element_3,
  MR_Box HeadVar__1_1)
{
  {
    MR_Box HeadVar__2_2;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_3, (MR_Integer) 0)), (MR_Integer) 7)));

    HeadVar__2_2 = func_0(((MR_Box) TypeClassInfo_for_diet_element_3), HeadVar__1_1);
    return HeadVar__2_2;
  }
}

MR_Box MR_CALL 
mercury__diet__successor_1_f_0(
  MR_Word TypeClassInfo_for_diet_element_3,
  MR_Box HeadVar__1_1)
{
  {
    MR_Box HeadVar__2_2;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_3, (MR_Integer) 0)), (MR_Integer) 6)));

    HeadVar__2_2 = func_0(((MR_Box) TypeClassInfo_for_diet_element_3), HeadVar__1_1);
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__diet__less_than_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_3,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_3, (MR_Integer) 0)), (MR_Integer) 5)));

    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_3), HeadVar__1_1, HeadVar__2_2);
    return succeeded;
  }
}

void MR_CALL 
mercury__diet__cons_interval_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box X_5,
  MR_Box Y_6,
  MR_Word L_7,
  MR_Word * HeadVar__4_4)
{
  {
    MR_Tuple Var_8;

    {
      Var_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = X_5;
      MR_hl_field(MR_mktag(0), Var_8, 1) = Y_6;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (L_7));
    }
  }
}

void MR_CALL 
mercury__diet__divide_2_6_p_0(
  MR_Word TypeClassInfo_for_diet_element_17,
  MR_Word Pred_7,
  MR_Box Elem_8,
  MR_Word STATE_VARIABLE_TrueSet_0_11,
  MR_Word * STATE_VARIABLE_TrueSet_12,
  MR_Word STATE_VARIABLE_FalseSet_0_13,
  MR_Word * STATE_VARIABLE_FalseSet_14)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), Pred_7, (MR_Integer) 1)));

    succeeded = func_0(((MR_Box) Pred_7), Elem_8);
    if (succeeded)
    {
      *STATE_VARIABLE_TrueSet_12 = mercury__diet__add_2_f_0(TypeClassInfo_for_diet_element_17, Elem_8, STATE_VARIABLE_TrueSet_0_11);
      *STATE_VARIABLE_FalseSet_14 = STATE_VARIABLE_FalseSet_0_13;
    }
    else
    {
      *STATE_VARIABLE_FalseSet_14 = mercury__diet__add_2_f_0(TypeClassInfo_for_diet_element_17, Elem_8, STATE_VARIABLE_FalseSet_0_13);
      *STATE_VARIABLE_TrueSet_12 = STATE_VARIABLE_TrueSet_0_11;
    }
  }
}

void MR_CALL 
mercury__diet__insert_interval_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_8,
  MR_Tuple HeadVar__1_1,
  MR_Word Set0_6,
  MR_Word * Set_7)
{
  {
    MR_Box X_4 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Box Y_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));

    mercury__diet__insert_interval_4_p_0(TypeClassInfo_for_diet_element_8, X_4, Y_5, Set0_6, Set_7);
  }
}

MR_Word MR_CALL 
mercury__diet__singleton_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Tuple Z_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Z_3));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 2) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 3) = ((MR_Box) (Var_6));
    }
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__diet__f_less_or_equal_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_5,
  MR_Box X_3,
  MR_Box Y_4)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_5, (MR_Integer) 0)), (MR_Integer) 5)));

    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_5), Y_4, X_3);
    succeeded = !(succeeded);
    return succeeded;
  }
}

void MR_CALL 
mercury__diet__from_interval_list_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_7,
  MR_Word List_3,
  MR_Word * Set_4)
{
  {
    MR_Word Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(TypeClassInfo_for_diet_element_7, List_3, Var_6, Set_4);
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
  MR_Word Var_22,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Tuple V_10_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word V_15_13;
      MR_Box X_25 = (MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 0));
      MR_Box Y_26 = (MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 1));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      mercury__diet__insert_interval_4_p_0(Var_22, X_25, Y_26, HeadVar__3_3, &V_15_13);
      /* direct tailcall eliminated */
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_15_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__to_sorted_interval_list_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_7,
  MR_Word Set_3,
  MR_Word * List_4)
{
  {
    MR_Word Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(TypeClassInfo_for_diet_element_7, Set_3, Var_6, List_4);
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(
  MR_Word Var_27,
  MR_Word T_6,
  MR_Word STATE_VARIABLE_Acc_0_13,
  MR_Word * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Word STATE_VARIABLE_Acc_16_16;
      MR_Word STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      MR_Word next_value_of_T_6;
      MR_Word next_value_of_STATE_VARIABLE_Acc_0_13;

      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(Var_27, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      {
        STATE_VARIABLE_Acc_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Acc_17_17, 0) = ((MR_Box) (Var_15));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Acc_17_17, 1) = ((MR_Box) (STATE_VARIABLE_Acc_16_16));
      }
      /* direct tailcall eliminated */
      next_value_of_T_6 = L_11;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__to_sorted_list_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_7,
  MR_Word T_3,
  MR_Word * List_4)
{
  {
    MR_Word Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(TypeClassInfo_for_diet_element_7, TypeClassInfo_for_diet_element_7, T_3, Var_6, List_4);
  }
}

MR_Word MR_CALL 
mercury__diet__to_sorted_list_1_f_0(
  MR_Word TypeClassInfo_for_diet_element_5,
  MR_Word T_3)
{
  {
    MR_Word List_4;
    MR_Word Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(TypeClassInfo_for_diet_element_5, TypeClassInfo_for_diet_element_5, T_3, Var_9, &List_4);
    return List_4;
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(
  MR_Word Var_23,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word T_6,
  MR_Word STATE_VARIABLE_Acc_0_13,
  MR_Word * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Word STATE_VARIABLE_Acc_16_16;
      MR_Word STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      MR_Word next_value_of_T_6;
      MR_Word next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(Var_23, TypeClassInfo_for_diet_element_19, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_51_95_95_91_49_44_32_51_44_32_53_93_95_48_5_p_0(Var_23, TypeClassInfo_for_diet_element_19, X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      next_value_of_T_6 = L_11;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_51_95_95_91_49_44_32_51_44_32_53_93_95_48_5_p_0(
  MR_Word Var_19,
  MR_Word TypeClassInfo_for_diet_element_15,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Word STATE_VARIABLE_A_0_10,
  MR_Word * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_A_12_12;
      MR_Box Var_13;
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
      MR_Box next_value_of_Hi_8;
      MR_Word next_value_of_STATE_VARIABLE_A_0_10;

      {
        STATE_VARIABLE_A_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_A_12_12, 0) = Hi_8;
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_A_12_12, 1) = ((MR_Box) (STATE_VARIABLE_A_0_10));
      }
      func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
      Var_13 = func_1(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8);
      /* direct tailcall eliminated */
      next_value_of_Hi_8 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
      Hi_8 = next_value_of_Hi_8;
      STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
    break;
  }
}

void MR_CALL 
mercury__diet__sorted_list_to_set_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_5,
  MR_Word List_3,
  MR_Word * Set_4)
{
  mercury__diet__list_to_set_2_p_0(TypeClassInfo_for_diet_element_5, List_3, Set_4);
}

MR_Word MR_CALL 
mercury__diet__sorted_list_to_set_1_f_0(
  MR_Word TypeClassInfo_for_diet_element_5,
  MR_Word List_3)
{
  {
    MR_Word Set_4;

    mercury__diet__list_to_set_2_p_0(TypeClassInfo_for_diet_element_5, List_3, &Set_4);
    return Set_4;
  }
}

void MR_CALL 
mercury__diet__from_list_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_5,
  MR_Word List_3,
  MR_Word * Set_4)
{
  mercury__diet__list_to_set_2_p_0(TypeClassInfo_for_diet_element_5, List_3, Set_4);
}

MR_Word MR_CALL 
mercury__diet__from_list_1_f_0(
  MR_Word TypeClassInfo_for_diet_element_5,
  MR_Word List_3)
{
  {
    MR_Word Set_4;

    mercury__diet__list_to_set_2_p_0(TypeClassInfo_for_diet_element_5, List_3, &Set_4);
    return Set_4;
  }
}

MR_Word MR_CALL 
mercury__diet__list_to_set_1_f_0(
  MR_Word TypeClassInfo_for_diet_element_5,
  MR_Word List_3)
{
  {
    MR_Word Set_4;

    mercury__diet__list_to_set_2_p_0(TypeClassInfo_for_diet_element_5, List_3, &Set_4);
    return Set_4;
  }
}

void MR_CALL 
mercury__diet__filter_4_p_0(
  MR_Word TypeClassInfo_for_diet_element_9,
  MR_Word Pred_5,
  MR_Word Set_6,
  MR_Word * TrueSet_7,
  MR_Word * FalseSet_8)
{
  mercury__diet__divide_4_p_0(TypeClassInfo_for_diet_element_9, Pred_5, Set_6, TrueSet_7, FalseSet_8);
}

MR_Word MR_CALL 
mercury__diet__filter_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_8,
  MR_Word Pred_4,
  MR_Word Set_5)
{
  {
    MR_Word TrueSet_6;
    MR_Word _FalseSet_7;

    mercury__diet__divide_4_p_0(TypeClassInfo_for_diet_element_8, Pred_4, Set_5, &TrueSet_6, &_FalseSet_7);
    return TrueSet_6;
  }
}

MR_bool MR_CALL 
mercury__diet__all_true_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_11,
  MR_Word P_3,
  MR_Word Set_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((Set_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
    {
      MR_Box X_5;
      MR_Box Y_6;
      MR_Word L_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Set_4, (MR_Integer) 2)));
      MR_Word R_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Set_4, (MR_Integer) 3)));
      MR_Tuple Var_10 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Set_4, (MR_Integer) 0)));
      MR_Integer Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Set_4, (MR_Integer) 1)));
      MR_Word next_value_of_Set_4;

      X_5 = (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0));
      Y_6 = (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1));
      succeeded = mercury__diet__all_true_2_p_0(TypeClassInfo_for_diet_element_11, P_3, L_8);
      if (succeeded)
      {
        succeeded = mercury__diet__all_true_interval_3_p_0(TypeClassInfo_for_diet_element_11, P_3, X_5, Y_6);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_Set_4 = R_9;
          Set_4 = next_value_of_Set_4;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__all_true_interval_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_8,
  MR_Word P_4,
  MR_Box Lo_5,
  MR_Box Hi_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_8, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_8), Hi_6, Lo_5);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box Var_7;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), P_4, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_5;

      succeeded = func_1(((MR_Box) P_4), Lo_5);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_8, (MR_Integer) 0)), (MR_Integer) 6)));
        Var_7 = func_2(((MR_Box) TypeClassInfo_for_diet_element_8), Lo_5);
        /* direct tailcall eliminated */
        next_value_of_Lo_5 = Var_7;
        Lo_5 = next_value_of_Lo_5;
        continue;
      }
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldr_4_p_5(
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      succeeded = mercury__diet__foldr_4_p_5(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_down_5_p_5(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T_6 = L_11;
          next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
          T_6 = next_value_of_T_6;
          STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_down_5_p_5(
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeClassInfo_for_diet_element_15,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Box Var_13;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      succeeded = func_1(((MR_Box) P_6), Hi_8, STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
        Var_13 = func_2(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8);
        /* direct tailcall eliminated */
        next_value_of_Hi_8 = Var_13;
        next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
        Hi_8 = next_value_of_Hi_8;
        STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldr_4_p_4(
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      succeeded = mercury__diet__foldr_4_p_4(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_down_5_p_4(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T_6 = L_11;
          next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
          T_6 = next_value_of_T_6;
          STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_down_5_p_4(
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeClassInfo_for_diet_element_15,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Box Var_13;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      succeeded = func_1(((MR_Box) P_6), Hi_8, STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
        Var_13 = func_2(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8);
        /* direct tailcall eliminated */
        next_value_of_Hi_8 = Var_13;
        next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
        Hi_8 = next_value_of_Hi_8;
        STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldr_4_p_3(
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      succeeded = mercury__diet__foldr_4_p_3(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_down_5_p_3(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T_6 = L_11;
          next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
          T_6 = next_value_of_T_6;
          STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_down_5_p_3(
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeClassInfo_for_diet_element_15,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Box Var_13;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      succeeded = func_1(((MR_Box) P_6), Hi_8, STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
        Var_13 = func_2(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8);
        /* direct tailcall eliminated */
        next_value_of_Hi_8 = Var_13;
        next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
        Hi_8 = next_value_of_Hi_8;
        STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__diet__foldr_4_p_2(
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      mercury__diet__foldr_4_p_2(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      mercury__diet__fold_down_5_p_2(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      next_value_of_T_6 = L_11;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_down_5_p_2(
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeClassInfo_for_diet_element_15,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Box Var_13;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      func_1(((MR_Box) P_6), Hi_8, STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
      Var_13 = func_2(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8);
      /* direct tailcall eliminated */
      next_value_of_Hi_8 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
      Hi_8 = next_value_of_Hi_8;
      STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
    break;
  }
}

void MR_CALL 
mercury__diet__foldr_4_p_1(
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      mercury__diet__foldr_4_p_1(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      mercury__diet__fold_down_5_p_1(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      next_value_of_T_6 = L_11;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_down_5_p_1(
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeClassInfo_for_diet_element_15,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Box Var_13;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      func_1(((MR_Box) P_6), Hi_8, STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
      Var_13 = func_2(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8);
      /* direct tailcall eliminated */
      next_value_of_Hi_8 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
      Hi_8 = next_value_of_Hi_8;
      STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
    break;
  }
}

void MR_CALL 
mercury__diet__foldr_4_p_0(
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      mercury__diet__foldr_4_p_0(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      mercury__diet__fold_down_5_p_0(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      next_value_of_T_6 = L_11;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_down_5_p_0(
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeClassInfo_for_diet_element_15,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Box Var_13;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      func_1(((MR_Box) P_6), Hi_8, STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
      Var_13 = func_2(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8);
      /* direct tailcall eliminated */
      next_value_of_Hi_8 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
      Hi_8 = next_value_of_Hi_8;
      STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
    break;
  }
}

MR_Box MR_CALL 
mercury__diet__foldr_3_f_0(
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word F_5,
  MR_Word Set_6,
  MR_Box Acc0_7)
{
  {
    MR_Box Acc_8;

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(F_5, TypeClassInfo_for_diet_element_19, Set_6, Acc0_7, &Acc_8);
    return Acc_8;
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(
  MR_Word Var_23,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(Var_23, TypeClassInfo_for_diet_element_19, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(Var_23, TypeClassInfo_for_diet_element_19, X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      next_value_of_T_6 = L_11;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
  MR_Word Var_19,
  MR_Word TypeClassInfo_for_diet_element_15,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Box Var_13;
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      STATE_VARIABLE_A_12_12 = func_1(((MR_Box) Var_19), Hi_8, STATE_VARIABLE_A_0_10);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
      Var_13 = func_2(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8);
      /* direct tailcall eliminated */
      next_value_of_Hi_8 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
      Hi_8 = next_value_of_Hi_8;
      STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl5_12_p_5(
  MR_Word TypeInfo_for_A_52,
  MR_Word TypeInfo_for_B_53,
  MR_Word TypeInfo_for_C_54,
  MR_Word TypeInfo_for_D_55,
  MR_Word TypeInfo_for_E_56,
  MR_Word TypeClassInfo_for_diet_element_51,
  MR_Word P_13,
  MR_Word T_14,
  MR_Box STATE_VARIABLE_A_0_25,
  MR_Box * STATE_VARIABLE_A_26,
  MR_Box STATE_VARIABLE_B_0_27,
  MR_Box * STATE_VARIABLE_B_28,
  MR_Box STATE_VARIABLE_C_0_29,
  MR_Box * STATE_VARIABLE_C_30,
  MR_Box STATE_VARIABLE_D_0_31,
  MR_Box * STATE_VARIABLE_D_32,
  MR_Box STATE_VARIABLE_E_0_33,
  MR_Box * STATE_VARIABLE_E_34)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_A_26 = STATE_VARIABLE_A_0_25;
      *STATE_VARIABLE_B_28 = STATE_VARIABLE_B_0_27;
      *STATE_VARIABLE_C_30 = STATE_VARIABLE_C_0_29;
      *STATE_VARIABLE_D_32 = STATE_VARIABLE_D_0_31;
      *STATE_VARIABLE_E_34 = STATE_VARIABLE_E_0_33;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_20;
      MR_Box Y_21;
      MR_Word L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 2)));
      MR_Word R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 3)));
      MR_Tuple Var_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_A_36_36;
      MR_Box STATE_VARIABLE_B_37_37;
      MR_Box STATE_VARIABLE_C_38_38;
      MR_Box STATE_VARIABLE_D_39_39;
      MR_Box STATE_VARIABLE_E_40_40;
      MR_Box STATE_VARIABLE_A_41_41;
      MR_Box STATE_VARIABLE_B_42_42;
      MR_Box STATE_VARIABLE_C_43_43;
      MR_Box STATE_VARIABLE_D_44_44;
      MR_Box STATE_VARIABLE_E_45_45;
      MR_Integer Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 1)));
      MR_Word next_value_of_T_14;
      MR_Box next_value_of_STATE_VARIABLE_A_0_25;
      MR_Box next_value_of_STATE_VARIABLE_B_0_27;
      MR_Box next_value_of_STATE_VARIABLE_C_0_29;
      MR_Box next_value_of_STATE_VARIABLE_D_0_31;
      MR_Box next_value_of_STATE_VARIABLE_E_0_33;

      X_20 = (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0));
      Y_21 = (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1));
      succeeded = mercury__diet__foldl5_12_p_5(TypeInfo_for_A_52, TypeInfo_for_B_53, TypeInfo_for_C_54, TypeInfo_for_D_55, TypeInfo_for_E_56, TypeClassInfo_for_diet_element_51, P_13, L_23, STATE_VARIABLE_A_0_25, &STATE_VARIABLE_A_36_36, STATE_VARIABLE_B_0_27, &STATE_VARIABLE_B_37_37, STATE_VARIABLE_C_0_29, &STATE_VARIABLE_C_38_38, STATE_VARIABLE_D_0_31, &STATE_VARIABLE_D_39_39, STATE_VARIABLE_E_0_33, &STATE_VARIABLE_E_40_40);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up5_13_p_5(TypeInfo_for_A_52, TypeInfo_for_B_53, TypeInfo_for_C_54, TypeInfo_for_D_55, TypeInfo_for_E_56, TypeClassInfo_for_diet_element_51, P_13, X_20, Y_21, STATE_VARIABLE_A_36_36, &STATE_VARIABLE_A_41_41, STATE_VARIABLE_B_37_37, &STATE_VARIABLE_B_42_42, STATE_VARIABLE_C_38_38, &STATE_VARIABLE_C_43_43, STATE_VARIABLE_D_39_39, &STATE_VARIABLE_D_44_44, STATE_VARIABLE_E_40_40, &STATE_VARIABLE_E_45_45);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T_14 = R_24;
          next_value_of_STATE_VARIABLE_A_0_25 = STATE_VARIABLE_A_41_41;
          next_value_of_STATE_VARIABLE_B_0_27 = STATE_VARIABLE_B_42_42;
          next_value_of_STATE_VARIABLE_C_0_29 = STATE_VARIABLE_C_43_43;
          next_value_of_STATE_VARIABLE_D_0_31 = STATE_VARIABLE_D_44_44;
          next_value_of_STATE_VARIABLE_E_0_33 = STATE_VARIABLE_E_45_45;
          T_14 = next_value_of_T_14;
          STATE_VARIABLE_A_0_25 = next_value_of_STATE_VARIABLE_A_0_25;
          STATE_VARIABLE_B_0_27 = next_value_of_STATE_VARIABLE_B_0_27;
          STATE_VARIABLE_C_0_29 = next_value_of_STATE_VARIABLE_C_0_29;
          STATE_VARIABLE_D_0_31 = next_value_of_STATE_VARIABLE_D_0_31;
          STATE_VARIABLE_E_0_33 = next_value_of_STATE_VARIABLE_E_0_33;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up5_13_p_5(
  MR_Word TypeInfo_for_A_44,
  MR_Word TypeInfo_for_B_45,
  MR_Word TypeInfo_for_C_46,
  MR_Word TypeInfo_for_D_47,
  MR_Word TypeInfo_for_E_48,
  MR_Word TypeClassInfo_for_diet_element_43,
  MR_Word P_14,
  MR_Box Lo_15,
  MR_Box Hi_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_43), Hi_16, Lo_15);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_32_32;
      MR_Box STATE_VARIABLE_B_33_33;
      MR_Box STATE_VARIABLE_C_34_34;
      MR_Box STATE_VARIABLE_D_35_35;
      MR_Box STATE_VARIABLE_E_36_36;
      MR_Box Var_37;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_14, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_15;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;
      MR_Box next_value_of_STATE_VARIABLE_E_0_30;

      succeeded = func_1(((MR_Box) P_14), Lo_15, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_32_32, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_33_33, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_34_34, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_35_35, STATE_VARIABLE_E_0_30, &STATE_VARIABLE_E_36_36);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
        Var_37 = func_2(((MR_Box) TypeClassInfo_for_diet_element_43), Lo_15);
        /* direct tailcall eliminated */
        next_value_of_Lo_15 = Var_37;
        next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_32_32;
        next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_33_33;
        next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_34_34;
        next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_35_35;
        next_value_of_STATE_VARIABLE_E_0_30 = STATE_VARIABLE_E_36_36;
        Lo_15 = next_value_of_Lo_15;
        STATE_VARIABLE_A_0_22 = next_value_of_STATE_VARIABLE_A_0_22;
        STATE_VARIABLE_B_0_24 = next_value_of_STATE_VARIABLE_B_0_24;
        STATE_VARIABLE_C_0_26 = next_value_of_STATE_VARIABLE_C_0_26;
        STATE_VARIABLE_D_0_28 = next_value_of_STATE_VARIABLE_D_0_28;
        STATE_VARIABLE_E_0_30 = next_value_of_STATE_VARIABLE_E_0_30;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_E_31 = STATE_VARIABLE_E_0_30;
      *STATE_VARIABLE_D_29 = STATE_VARIABLE_D_0_28;
      *STATE_VARIABLE_C_27 = STATE_VARIABLE_C_0_26;
      *STATE_VARIABLE_B_25 = STATE_VARIABLE_B_0_24;
      *STATE_VARIABLE_A_23 = STATE_VARIABLE_A_0_22;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl5_12_p_4(
  MR_Word TypeInfo_for_A_52,
  MR_Word TypeInfo_for_B_53,
  MR_Word TypeInfo_for_C_54,
  MR_Word TypeInfo_for_D_55,
  MR_Word TypeInfo_for_E_56,
  MR_Word TypeClassInfo_for_diet_element_51,
  MR_Word P_13,
  MR_Word T_14,
  MR_Box STATE_VARIABLE_A_0_25,
  MR_Box * STATE_VARIABLE_A_26,
  MR_Box STATE_VARIABLE_B_0_27,
  MR_Box * STATE_VARIABLE_B_28,
  MR_Box STATE_VARIABLE_C_0_29,
  MR_Box * STATE_VARIABLE_C_30,
  MR_Box STATE_VARIABLE_D_0_31,
  MR_Box * STATE_VARIABLE_D_32,
  MR_Box STATE_VARIABLE_E_0_33,
  MR_Box * STATE_VARIABLE_E_34)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_A_26 = STATE_VARIABLE_A_0_25;
      *STATE_VARIABLE_B_28 = STATE_VARIABLE_B_0_27;
      *STATE_VARIABLE_C_30 = STATE_VARIABLE_C_0_29;
      *STATE_VARIABLE_D_32 = STATE_VARIABLE_D_0_31;
      *STATE_VARIABLE_E_34 = STATE_VARIABLE_E_0_33;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_20;
      MR_Box Y_21;
      MR_Word L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 2)));
      MR_Word R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 3)));
      MR_Tuple Var_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_A_36_36;
      MR_Box STATE_VARIABLE_B_37_37;
      MR_Box STATE_VARIABLE_C_38_38;
      MR_Box STATE_VARIABLE_D_39_39;
      MR_Box STATE_VARIABLE_E_40_40;
      MR_Box STATE_VARIABLE_A_41_41;
      MR_Box STATE_VARIABLE_B_42_42;
      MR_Box STATE_VARIABLE_C_43_43;
      MR_Box STATE_VARIABLE_D_44_44;
      MR_Box STATE_VARIABLE_E_45_45;
      MR_Integer Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 1)));
      MR_Word next_value_of_T_14;
      MR_Box next_value_of_STATE_VARIABLE_A_0_25;
      MR_Box next_value_of_STATE_VARIABLE_B_0_27;
      MR_Box next_value_of_STATE_VARIABLE_C_0_29;
      MR_Box next_value_of_STATE_VARIABLE_D_0_31;
      MR_Box next_value_of_STATE_VARIABLE_E_0_33;

      X_20 = (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0));
      Y_21 = (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1));
      succeeded = mercury__diet__foldl5_12_p_4(TypeInfo_for_A_52, TypeInfo_for_B_53, TypeInfo_for_C_54, TypeInfo_for_D_55, TypeInfo_for_E_56, TypeClassInfo_for_diet_element_51, P_13, L_23, STATE_VARIABLE_A_0_25, &STATE_VARIABLE_A_36_36, STATE_VARIABLE_B_0_27, &STATE_VARIABLE_B_37_37, STATE_VARIABLE_C_0_29, &STATE_VARIABLE_C_38_38, STATE_VARIABLE_D_0_31, &STATE_VARIABLE_D_39_39, STATE_VARIABLE_E_0_33, &STATE_VARIABLE_E_40_40);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up5_13_p_4(TypeInfo_for_A_52, TypeInfo_for_B_53, TypeInfo_for_C_54, TypeInfo_for_D_55, TypeInfo_for_E_56, TypeClassInfo_for_diet_element_51, P_13, X_20, Y_21, STATE_VARIABLE_A_36_36, &STATE_VARIABLE_A_41_41, STATE_VARIABLE_B_37_37, &STATE_VARIABLE_B_42_42, STATE_VARIABLE_C_38_38, &STATE_VARIABLE_C_43_43, STATE_VARIABLE_D_39_39, &STATE_VARIABLE_D_44_44, STATE_VARIABLE_E_40_40, &STATE_VARIABLE_E_45_45);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T_14 = R_24;
          next_value_of_STATE_VARIABLE_A_0_25 = STATE_VARIABLE_A_41_41;
          next_value_of_STATE_VARIABLE_B_0_27 = STATE_VARIABLE_B_42_42;
          next_value_of_STATE_VARIABLE_C_0_29 = STATE_VARIABLE_C_43_43;
          next_value_of_STATE_VARIABLE_D_0_31 = STATE_VARIABLE_D_44_44;
          next_value_of_STATE_VARIABLE_E_0_33 = STATE_VARIABLE_E_45_45;
          T_14 = next_value_of_T_14;
          STATE_VARIABLE_A_0_25 = next_value_of_STATE_VARIABLE_A_0_25;
          STATE_VARIABLE_B_0_27 = next_value_of_STATE_VARIABLE_B_0_27;
          STATE_VARIABLE_C_0_29 = next_value_of_STATE_VARIABLE_C_0_29;
          STATE_VARIABLE_D_0_31 = next_value_of_STATE_VARIABLE_D_0_31;
          STATE_VARIABLE_E_0_33 = next_value_of_STATE_VARIABLE_E_0_33;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up5_13_p_4(
  MR_Word TypeInfo_for_A_44,
  MR_Word TypeInfo_for_B_45,
  MR_Word TypeInfo_for_C_46,
  MR_Word TypeInfo_for_D_47,
  MR_Word TypeInfo_for_E_48,
  MR_Word TypeClassInfo_for_diet_element_43,
  MR_Word P_14,
  MR_Box Lo_15,
  MR_Box Hi_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_43), Hi_16, Lo_15);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_32_32;
      MR_Box STATE_VARIABLE_B_33_33;
      MR_Box STATE_VARIABLE_C_34_34;
      MR_Box STATE_VARIABLE_D_35_35;
      MR_Box STATE_VARIABLE_E_36_36;
      MR_Box Var_37;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_14, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_15;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;
      MR_Box next_value_of_STATE_VARIABLE_E_0_30;

      succeeded = func_1(((MR_Box) P_14), Lo_15, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_32_32, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_33_33, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_34_34, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_35_35, STATE_VARIABLE_E_0_30, &STATE_VARIABLE_E_36_36);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
        Var_37 = func_2(((MR_Box) TypeClassInfo_for_diet_element_43), Lo_15);
        /* direct tailcall eliminated */
        next_value_of_Lo_15 = Var_37;
        next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_32_32;
        next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_33_33;
        next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_34_34;
        next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_35_35;
        next_value_of_STATE_VARIABLE_E_0_30 = STATE_VARIABLE_E_36_36;
        Lo_15 = next_value_of_Lo_15;
        STATE_VARIABLE_A_0_22 = next_value_of_STATE_VARIABLE_A_0_22;
        STATE_VARIABLE_B_0_24 = next_value_of_STATE_VARIABLE_B_0_24;
        STATE_VARIABLE_C_0_26 = next_value_of_STATE_VARIABLE_C_0_26;
        STATE_VARIABLE_D_0_28 = next_value_of_STATE_VARIABLE_D_0_28;
        STATE_VARIABLE_E_0_30 = next_value_of_STATE_VARIABLE_E_0_30;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_E_31 = STATE_VARIABLE_E_0_30;
      *STATE_VARIABLE_D_29 = STATE_VARIABLE_D_0_28;
      *STATE_VARIABLE_C_27 = STATE_VARIABLE_C_0_26;
      *STATE_VARIABLE_B_25 = STATE_VARIABLE_B_0_24;
      *STATE_VARIABLE_A_23 = STATE_VARIABLE_A_0_22;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl5_12_p_3(
  MR_Word TypeInfo_for_A_52,
  MR_Word TypeInfo_for_B_53,
  MR_Word TypeInfo_for_C_54,
  MR_Word TypeInfo_for_D_55,
  MR_Word TypeInfo_for_E_56,
  MR_Word TypeClassInfo_for_diet_element_51,
  MR_Word P_13,
  MR_Word T_14,
  MR_Box STATE_VARIABLE_A_0_25,
  MR_Box * STATE_VARIABLE_A_26,
  MR_Box STATE_VARIABLE_B_0_27,
  MR_Box * STATE_VARIABLE_B_28,
  MR_Box STATE_VARIABLE_C_0_29,
  MR_Box * STATE_VARIABLE_C_30,
  MR_Box STATE_VARIABLE_D_0_31,
  MR_Box * STATE_VARIABLE_D_32,
  MR_Box STATE_VARIABLE_E_0_33,
  MR_Box * STATE_VARIABLE_E_34)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_A_26 = STATE_VARIABLE_A_0_25;
      *STATE_VARIABLE_B_28 = STATE_VARIABLE_B_0_27;
      *STATE_VARIABLE_C_30 = STATE_VARIABLE_C_0_29;
      *STATE_VARIABLE_D_32 = STATE_VARIABLE_D_0_31;
      *STATE_VARIABLE_E_34 = STATE_VARIABLE_E_0_33;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_20;
      MR_Box Y_21;
      MR_Word L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 2)));
      MR_Word R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 3)));
      MR_Tuple Var_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_A_36_36;
      MR_Box STATE_VARIABLE_B_37_37;
      MR_Box STATE_VARIABLE_C_38_38;
      MR_Box STATE_VARIABLE_D_39_39;
      MR_Box STATE_VARIABLE_E_40_40;
      MR_Box STATE_VARIABLE_A_41_41;
      MR_Box STATE_VARIABLE_B_42_42;
      MR_Box STATE_VARIABLE_C_43_43;
      MR_Box STATE_VARIABLE_D_44_44;
      MR_Box STATE_VARIABLE_E_45_45;
      MR_Integer Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 1)));
      MR_Word next_value_of_T_14;
      MR_Box next_value_of_STATE_VARIABLE_A_0_25;
      MR_Box next_value_of_STATE_VARIABLE_B_0_27;
      MR_Box next_value_of_STATE_VARIABLE_C_0_29;
      MR_Box next_value_of_STATE_VARIABLE_D_0_31;
      MR_Box next_value_of_STATE_VARIABLE_E_0_33;

      X_20 = (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0));
      Y_21 = (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1));
      succeeded = mercury__diet__foldl5_12_p_3(TypeInfo_for_A_52, TypeInfo_for_B_53, TypeInfo_for_C_54, TypeInfo_for_D_55, TypeInfo_for_E_56, TypeClassInfo_for_diet_element_51, P_13, L_23, STATE_VARIABLE_A_0_25, &STATE_VARIABLE_A_36_36, STATE_VARIABLE_B_0_27, &STATE_VARIABLE_B_37_37, STATE_VARIABLE_C_0_29, &STATE_VARIABLE_C_38_38, STATE_VARIABLE_D_0_31, &STATE_VARIABLE_D_39_39, STATE_VARIABLE_E_0_33, &STATE_VARIABLE_E_40_40);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up5_13_p_3(TypeInfo_for_A_52, TypeInfo_for_B_53, TypeInfo_for_C_54, TypeInfo_for_D_55, TypeInfo_for_E_56, TypeClassInfo_for_diet_element_51, P_13, X_20, Y_21, STATE_VARIABLE_A_36_36, &STATE_VARIABLE_A_41_41, STATE_VARIABLE_B_37_37, &STATE_VARIABLE_B_42_42, STATE_VARIABLE_C_38_38, &STATE_VARIABLE_C_43_43, STATE_VARIABLE_D_39_39, &STATE_VARIABLE_D_44_44, STATE_VARIABLE_E_40_40, &STATE_VARIABLE_E_45_45);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T_14 = R_24;
          next_value_of_STATE_VARIABLE_A_0_25 = STATE_VARIABLE_A_41_41;
          next_value_of_STATE_VARIABLE_B_0_27 = STATE_VARIABLE_B_42_42;
          next_value_of_STATE_VARIABLE_C_0_29 = STATE_VARIABLE_C_43_43;
          next_value_of_STATE_VARIABLE_D_0_31 = STATE_VARIABLE_D_44_44;
          next_value_of_STATE_VARIABLE_E_0_33 = STATE_VARIABLE_E_45_45;
          T_14 = next_value_of_T_14;
          STATE_VARIABLE_A_0_25 = next_value_of_STATE_VARIABLE_A_0_25;
          STATE_VARIABLE_B_0_27 = next_value_of_STATE_VARIABLE_B_0_27;
          STATE_VARIABLE_C_0_29 = next_value_of_STATE_VARIABLE_C_0_29;
          STATE_VARIABLE_D_0_31 = next_value_of_STATE_VARIABLE_D_0_31;
          STATE_VARIABLE_E_0_33 = next_value_of_STATE_VARIABLE_E_0_33;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up5_13_p_3(
  MR_Word TypeInfo_for_A_44,
  MR_Word TypeInfo_for_B_45,
  MR_Word TypeInfo_for_C_46,
  MR_Word TypeInfo_for_D_47,
  MR_Word TypeInfo_for_E_48,
  MR_Word TypeClassInfo_for_diet_element_43,
  MR_Word P_14,
  MR_Box Lo_15,
  MR_Box Hi_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_43), Hi_16, Lo_15);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_32_32;
      MR_Box STATE_VARIABLE_B_33_33;
      MR_Box STATE_VARIABLE_C_34_34;
      MR_Box STATE_VARIABLE_D_35_35;
      MR_Box STATE_VARIABLE_E_36_36;
      MR_Box Var_37;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_14, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_15;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;
      MR_Box next_value_of_STATE_VARIABLE_E_0_30;

      succeeded = func_1(((MR_Box) P_14), Lo_15, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_32_32, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_33_33, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_34_34, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_35_35, STATE_VARIABLE_E_0_30, &STATE_VARIABLE_E_36_36);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
        Var_37 = func_2(((MR_Box) TypeClassInfo_for_diet_element_43), Lo_15);
        /* direct tailcall eliminated */
        next_value_of_Lo_15 = Var_37;
        next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_32_32;
        next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_33_33;
        next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_34_34;
        next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_35_35;
        next_value_of_STATE_VARIABLE_E_0_30 = STATE_VARIABLE_E_36_36;
        Lo_15 = next_value_of_Lo_15;
        STATE_VARIABLE_A_0_22 = next_value_of_STATE_VARIABLE_A_0_22;
        STATE_VARIABLE_B_0_24 = next_value_of_STATE_VARIABLE_B_0_24;
        STATE_VARIABLE_C_0_26 = next_value_of_STATE_VARIABLE_C_0_26;
        STATE_VARIABLE_D_0_28 = next_value_of_STATE_VARIABLE_D_0_28;
        STATE_VARIABLE_E_0_30 = next_value_of_STATE_VARIABLE_E_0_30;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_E_31 = STATE_VARIABLE_E_0_30;
      *STATE_VARIABLE_D_29 = STATE_VARIABLE_D_0_28;
      *STATE_VARIABLE_C_27 = STATE_VARIABLE_C_0_26;
      *STATE_VARIABLE_B_25 = STATE_VARIABLE_B_0_24;
      *STATE_VARIABLE_A_23 = STATE_VARIABLE_A_0_22;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__diet__foldl5_12_p_2(
  MR_Word TypeInfo_for_A_52,
  MR_Word TypeInfo_for_B_53,
  MR_Word TypeInfo_for_C_54,
  MR_Word TypeInfo_for_D_55,
  MR_Word TypeInfo_for_E_56,
  MR_Word TypeClassInfo_for_diet_element_51,
  MR_Word P_13,
  MR_Word T_14,
  MR_Box STATE_VARIABLE_A_0_25,
  MR_Box * STATE_VARIABLE_A_26,
  MR_Box STATE_VARIABLE_B_0_27,
  MR_Box * STATE_VARIABLE_B_28,
  MR_Box STATE_VARIABLE_C_0_29,
  MR_Box * STATE_VARIABLE_C_30,
  MR_Box STATE_VARIABLE_D_0_31,
  MR_Box * STATE_VARIABLE_D_32,
  MR_Box STATE_VARIABLE_E_0_33,
  MR_Box * STATE_VARIABLE_E_34)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_A_26 = STATE_VARIABLE_A_0_25;
      *STATE_VARIABLE_B_28 = STATE_VARIABLE_B_0_27;
      *STATE_VARIABLE_C_30 = STATE_VARIABLE_C_0_29;
      *STATE_VARIABLE_D_32 = STATE_VARIABLE_D_0_31;
      *STATE_VARIABLE_E_34 = STATE_VARIABLE_E_0_33;
    }
    else
    {
      MR_Box X_20;
      MR_Box Y_21;
      MR_Word L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 2)));
      MR_Word R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 3)));
      MR_Tuple Var_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_A_36_36;
      MR_Box STATE_VARIABLE_B_37_37;
      MR_Box STATE_VARIABLE_C_38_38;
      MR_Box STATE_VARIABLE_D_39_39;
      MR_Box STATE_VARIABLE_E_40_40;
      MR_Box STATE_VARIABLE_A_41_41;
      MR_Box STATE_VARIABLE_B_42_42;
      MR_Box STATE_VARIABLE_C_43_43;
      MR_Box STATE_VARIABLE_D_44_44;
      MR_Box STATE_VARIABLE_E_45_45;
      MR_Integer Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 1)));
      MR_Word next_value_of_T_14;
      MR_Box next_value_of_STATE_VARIABLE_A_0_25;
      MR_Box next_value_of_STATE_VARIABLE_B_0_27;
      MR_Box next_value_of_STATE_VARIABLE_C_0_29;
      MR_Box next_value_of_STATE_VARIABLE_D_0_31;
      MR_Box next_value_of_STATE_VARIABLE_E_0_33;

      X_20 = (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0));
      Y_21 = (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1));
      mercury__diet__foldl5_12_p_2(TypeInfo_for_A_52, TypeInfo_for_B_53, TypeInfo_for_C_54, TypeInfo_for_D_55, TypeInfo_for_E_56, TypeClassInfo_for_diet_element_51, P_13, L_23, STATE_VARIABLE_A_0_25, &STATE_VARIABLE_A_36_36, STATE_VARIABLE_B_0_27, &STATE_VARIABLE_B_37_37, STATE_VARIABLE_C_0_29, &STATE_VARIABLE_C_38_38, STATE_VARIABLE_D_0_31, &STATE_VARIABLE_D_39_39, STATE_VARIABLE_E_0_33, &STATE_VARIABLE_E_40_40);
      mercury__diet__fold_up5_13_p_2(TypeInfo_for_A_52, TypeInfo_for_B_53, TypeInfo_for_C_54, TypeInfo_for_D_55, TypeInfo_for_E_56, TypeClassInfo_for_diet_element_51, P_13, X_20, Y_21, STATE_VARIABLE_A_36_36, &STATE_VARIABLE_A_41_41, STATE_VARIABLE_B_37_37, &STATE_VARIABLE_B_42_42, STATE_VARIABLE_C_38_38, &STATE_VARIABLE_C_43_43, STATE_VARIABLE_D_39_39, &STATE_VARIABLE_D_44_44, STATE_VARIABLE_E_40_40, &STATE_VARIABLE_E_45_45);
      /* direct tailcall eliminated */
      next_value_of_T_14 = R_24;
      next_value_of_STATE_VARIABLE_A_0_25 = STATE_VARIABLE_A_41_41;
      next_value_of_STATE_VARIABLE_B_0_27 = STATE_VARIABLE_B_42_42;
      next_value_of_STATE_VARIABLE_C_0_29 = STATE_VARIABLE_C_43_43;
      next_value_of_STATE_VARIABLE_D_0_31 = STATE_VARIABLE_D_44_44;
      next_value_of_STATE_VARIABLE_E_0_33 = STATE_VARIABLE_E_45_45;
      T_14 = next_value_of_T_14;
      STATE_VARIABLE_A_0_25 = next_value_of_STATE_VARIABLE_A_0_25;
      STATE_VARIABLE_B_0_27 = next_value_of_STATE_VARIABLE_B_0_27;
      STATE_VARIABLE_C_0_29 = next_value_of_STATE_VARIABLE_C_0_29;
      STATE_VARIABLE_D_0_31 = next_value_of_STATE_VARIABLE_D_0_31;
      STATE_VARIABLE_E_0_33 = next_value_of_STATE_VARIABLE_E_0_33;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up5_13_p_2(
  MR_Word TypeInfo_for_A_44,
  MR_Word TypeInfo_for_B_45,
  MR_Word TypeInfo_for_C_46,
  MR_Word TypeInfo_for_D_47,
  MR_Word TypeInfo_for_E_48,
  MR_Word TypeClassInfo_for_diet_element_43,
  MR_Word P_14,
  MR_Box Lo_15,
  MR_Box Hi_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_43), Hi_16, Lo_15);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_32_32;
      MR_Box STATE_VARIABLE_B_33_33;
      MR_Box STATE_VARIABLE_C_34_34;
      MR_Box STATE_VARIABLE_D_35_35;
      MR_Box STATE_VARIABLE_E_36_36;
      MR_Box Var_37;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_14, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_15;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;
      MR_Box next_value_of_STATE_VARIABLE_E_0_30;

      func_1(((MR_Box) P_14), Lo_15, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_32_32, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_33_33, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_34_34, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_35_35, STATE_VARIABLE_E_0_30, &STATE_VARIABLE_E_36_36);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
      Var_37 = func_2(((MR_Box) TypeClassInfo_for_diet_element_43), Lo_15);
      /* direct tailcall eliminated */
      next_value_of_Lo_15 = Var_37;
      next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_32_32;
      next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_33_33;
      next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_34_34;
      next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_35_35;
      next_value_of_STATE_VARIABLE_E_0_30 = STATE_VARIABLE_E_36_36;
      Lo_15 = next_value_of_Lo_15;
      STATE_VARIABLE_A_0_22 = next_value_of_STATE_VARIABLE_A_0_22;
      STATE_VARIABLE_B_0_24 = next_value_of_STATE_VARIABLE_B_0_24;
      STATE_VARIABLE_C_0_26 = next_value_of_STATE_VARIABLE_C_0_26;
      STATE_VARIABLE_D_0_28 = next_value_of_STATE_VARIABLE_D_0_28;
      STATE_VARIABLE_E_0_30 = next_value_of_STATE_VARIABLE_E_0_30;
      continue;
    }
    else
    {
      *STATE_VARIABLE_E_31 = STATE_VARIABLE_E_0_30;
      *STATE_VARIABLE_D_29 = STATE_VARIABLE_D_0_28;
      *STATE_VARIABLE_C_27 = STATE_VARIABLE_C_0_26;
      *STATE_VARIABLE_B_25 = STATE_VARIABLE_B_0_24;
      *STATE_VARIABLE_A_23 = STATE_VARIABLE_A_0_22;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl5_12_p_1(
  MR_Word TypeInfo_for_A_52,
  MR_Word TypeInfo_for_B_53,
  MR_Word TypeInfo_for_C_54,
  MR_Word TypeInfo_for_D_55,
  MR_Word TypeInfo_for_E_56,
  MR_Word TypeClassInfo_for_diet_element_51,
  MR_Word P_13,
  MR_Word T_14,
  MR_Box STATE_VARIABLE_A_0_25,
  MR_Box * STATE_VARIABLE_A_26,
  MR_Box STATE_VARIABLE_B_0_27,
  MR_Box * STATE_VARIABLE_B_28,
  MR_Box STATE_VARIABLE_C_0_29,
  MR_Box * STATE_VARIABLE_C_30,
  MR_Box STATE_VARIABLE_D_0_31,
  MR_Box * STATE_VARIABLE_D_32,
  MR_Box STATE_VARIABLE_E_0_33,
  MR_Box * STATE_VARIABLE_E_34)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_A_26 = STATE_VARIABLE_A_0_25;
      *STATE_VARIABLE_B_28 = STATE_VARIABLE_B_0_27;
      *STATE_VARIABLE_C_30 = STATE_VARIABLE_C_0_29;
      *STATE_VARIABLE_D_32 = STATE_VARIABLE_D_0_31;
      *STATE_VARIABLE_E_34 = STATE_VARIABLE_E_0_33;
    }
    else
    {
      MR_Box X_20;
      MR_Box Y_21;
      MR_Word L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 2)));
      MR_Word R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 3)));
      MR_Tuple Var_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_A_36_36;
      MR_Box STATE_VARIABLE_B_37_37;
      MR_Box STATE_VARIABLE_C_38_38;
      MR_Box STATE_VARIABLE_D_39_39;
      MR_Box STATE_VARIABLE_E_40_40;
      MR_Box STATE_VARIABLE_A_41_41;
      MR_Box STATE_VARIABLE_B_42_42;
      MR_Box STATE_VARIABLE_C_43_43;
      MR_Box STATE_VARIABLE_D_44_44;
      MR_Box STATE_VARIABLE_E_45_45;
      MR_Integer Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 1)));
      MR_Word next_value_of_T_14;
      MR_Box next_value_of_STATE_VARIABLE_A_0_25;
      MR_Box next_value_of_STATE_VARIABLE_B_0_27;
      MR_Box next_value_of_STATE_VARIABLE_C_0_29;
      MR_Box next_value_of_STATE_VARIABLE_D_0_31;
      MR_Box next_value_of_STATE_VARIABLE_E_0_33;

      X_20 = (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0));
      Y_21 = (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1));
      mercury__diet__foldl5_12_p_1(TypeInfo_for_A_52, TypeInfo_for_B_53, TypeInfo_for_C_54, TypeInfo_for_D_55, TypeInfo_for_E_56, TypeClassInfo_for_diet_element_51, P_13, L_23, STATE_VARIABLE_A_0_25, &STATE_VARIABLE_A_36_36, STATE_VARIABLE_B_0_27, &STATE_VARIABLE_B_37_37, STATE_VARIABLE_C_0_29, &STATE_VARIABLE_C_38_38, STATE_VARIABLE_D_0_31, &STATE_VARIABLE_D_39_39, STATE_VARIABLE_E_0_33, &STATE_VARIABLE_E_40_40);
      mercury__diet__fold_up5_13_p_1(TypeInfo_for_A_52, TypeInfo_for_B_53, TypeInfo_for_C_54, TypeInfo_for_D_55, TypeInfo_for_E_56, TypeClassInfo_for_diet_element_51, P_13, X_20, Y_21, STATE_VARIABLE_A_36_36, &STATE_VARIABLE_A_41_41, STATE_VARIABLE_B_37_37, &STATE_VARIABLE_B_42_42, STATE_VARIABLE_C_38_38, &STATE_VARIABLE_C_43_43, STATE_VARIABLE_D_39_39, &STATE_VARIABLE_D_44_44, STATE_VARIABLE_E_40_40, &STATE_VARIABLE_E_45_45);
      /* direct tailcall eliminated */
      next_value_of_T_14 = R_24;
      next_value_of_STATE_VARIABLE_A_0_25 = STATE_VARIABLE_A_41_41;
      next_value_of_STATE_VARIABLE_B_0_27 = STATE_VARIABLE_B_42_42;
      next_value_of_STATE_VARIABLE_C_0_29 = STATE_VARIABLE_C_43_43;
      next_value_of_STATE_VARIABLE_D_0_31 = STATE_VARIABLE_D_44_44;
      next_value_of_STATE_VARIABLE_E_0_33 = STATE_VARIABLE_E_45_45;
      T_14 = next_value_of_T_14;
      STATE_VARIABLE_A_0_25 = next_value_of_STATE_VARIABLE_A_0_25;
      STATE_VARIABLE_B_0_27 = next_value_of_STATE_VARIABLE_B_0_27;
      STATE_VARIABLE_C_0_29 = next_value_of_STATE_VARIABLE_C_0_29;
      STATE_VARIABLE_D_0_31 = next_value_of_STATE_VARIABLE_D_0_31;
      STATE_VARIABLE_E_0_33 = next_value_of_STATE_VARIABLE_E_0_33;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up5_13_p_1(
  MR_Word TypeInfo_for_A_44,
  MR_Word TypeInfo_for_B_45,
  MR_Word TypeInfo_for_C_46,
  MR_Word TypeInfo_for_D_47,
  MR_Word TypeInfo_for_E_48,
  MR_Word TypeClassInfo_for_diet_element_43,
  MR_Word P_14,
  MR_Box Lo_15,
  MR_Box Hi_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_43), Hi_16, Lo_15);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_32_32;
      MR_Box STATE_VARIABLE_B_33_33;
      MR_Box STATE_VARIABLE_C_34_34;
      MR_Box STATE_VARIABLE_D_35_35;
      MR_Box STATE_VARIABLE_E_36_36;
      MR_Box Var_37;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_14, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_15;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;
      MR_Box next_value_of_STATE_VARIABLE_E_0_30;

      func_1(((MR_Box) P_14), Lo_15, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_32_32, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_33_33, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_34_34, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_35_35, STATE_VARIABLE_E_0_30, &STATE_VARIABLE_E_36_36);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
      Var_37 = func_2(((MR_Box) TypeClassInfo_for_diet_element_43), Lo_15);
      /* direct tailcall eliminated */
      next_value_of_Lo_15 = Var_37;
      next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_32_32;
      next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_33_33;
      next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_34_34;
      next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_35_35;
      next_value_of_STATE_VARIABLE_E_0_30 = STATE_VARIABLE_E_36_36;
      Lo_15 = next_value_of_Lo_15;
      STATE_VARIABLE_A_0_22 = next_value_of_STATE_VARIABLE_A_0_22;
      STATE_VARIABLE_B_0_24 = next_value_of_STATE_VARIABLE_B_0_24;
      STATE_VARIABLE_C_0_26 = next_value_of_STATE_VARIABLE_C_0_26;
      STATE_VARIABLE_D_0_28 = next_value_of_STATE_VARIABLE_D_0_28;
      STATE_VARIABLE_E_0_30 = next_value_of_STATE_VARIABLE_E_0_30;
      continue;
    }
    else
    {
      *STATE_VARIABLE_E_31 = STATE_VARIABLE_E_0_30;
      *STATE_VARIABLE_D_29 = STATE_VARIABLE_D_0_28;
      *STATE_VARIABLE_C_27 = STATE_VARIABLE_C_0_26;
      *STATE_VARIABLE_B_25 = STATE_VARIABLE_B_0_24;
      *STATE_VARIABLE_A_23 = STATE_VARIABLE_A_0_22;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl5_12_p_0(
  MR_Word TypeInfo_for_A_52,
  MR_Word TypeInfo_for_B_53,
  MR_Word TypeInfo_for_C_54,
  MR_Word TypeInfo_for_D_55,
  MR_Word TypeInfo_for_E_56,
  MR_Word TypeClassInfo_for_diet_element_51,
  MR_Word P_13,
  MR_Word T_14,
  MR_Box STATE_VARIABLE_A_0_25,
  MR_Box * STATE_VARIABLE_A_26,
  MR_Box STATE_VARIABLE_B_0_27,
  MR_Box * STATE_VARIABLE_B_28,
  MR_Box STATE_VARIABLE_C_0_29,
  MR_Box * STATE_VARIABLE_C_30,
  MR_Box STATE_VARIABLE_D_0_31,
  MR_Box * STATE_VARIABLE_D_32,
  MR_Box STATE_VARIABLE_E_0_33,
  MR_Box * STATE_VARIABLE_E_34)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_A_26 = STATE_VARIABLE_A_0_25;
      *STATE_VARIABLE_B_28 = STATE_VARIABLE_B_0_27;
      *STATE_VARIABLE_C_30 = STATE_VARIABLE_C_0_29;
      *STATE_VARIABLE_D_32 = STATE_VARIABLE_D_0_31;
      *STATE_VARIABLE_E_34 = STATE_VARIABLE_E_0_33;
    }
    else
    {
      MR_Box X_20;
      MR_Box Y_21;
      MR_Word L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 2)));
      MR_Word R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 3)));
      MR_Tuple Var_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_A_36_36;
      MR_Box STATE_VARIABLE_B_37_37;
      MR_Box STATE_VARIABLE_C_38_38;
      MR_Box STATE_VARIABLE_D_39_39;
      MR_Box STATE_VARIABLE_E_40_40;
      MR_Box STATE_VARIABLE_A_41_41;
      MR_Box STATE_VARIABLE_B_42_42;
      MR_Box STATE_VARIABLE_C_43_43;
      MR_Box STATE_VARIABLE_D_44_44;
      MR_Box STATE_VARIABLE_E_45_45;
      MR_Integer Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_14, (MR_Integer) 1)));
      MR_Word next_value_of_T_14;
      MR_Box next_value_of_STATE_VARIABLE_A_0_25;
      MR_Box next_value_of_STATE_VARIABLE_B_0_27;
      MR_Box next_value_of_STATE_VARIABLE_C_0_29;
      MR_Box next_value_of_STATE_VARIABLE_D_0_31;
      MR_Box next_value_of_STATE_VARIABLE_E_0_33;

      X_20 = (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0));
      Y_21 = (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1));
      mercury__diet__foldl5_12_p_0(TypeInfo_for_A_52, TypeInfo_for_B_53, TypeInfo_for_C_54, TypeInfo_for_D_55, TypeInfo_for_E_56, TypeClassInfo_for_diet_element_51, P_13, L_23, STATE_VARIABLE_A_0_25, &STATE_VARIABLE_A_36_36, STATE_VARIABLE_B_0_27, &STATE_VARIABLE_B_37_37, STATE_VARIABLE_C_0_29, &STATE_VARIABLE_C_38_38, STATE_VARIABLE_D_0_31, &STATE_VARIABLE_D_39_39, STATE_VARIABLE_E_0_33, &STATE_VARIABLE_E_40_40);
      mercury__diet__fold_up5_13_p_0(TypeInfo_for_A_52, TypeInfo_for_B_53, TypeInfo_for_C_54, TypeInfo_for_D_55, TypeInfo_for_E_56, TypeClassInfo_for_diet_element_51, P_13, X_20, Y_21, STATE_VARIABLE_A_36_36, &STATE_VARIABLE_A_41_41, STATE_VARIABLE_B_37_37, &STATE_VARIABLE_B_42_42, STATE_VARIABLE_C_38_38, &STATE_VARIABLE_C_43_43, STATE_VARIABLE_D_39_39, &STATE_VARIABLE_D_44_44, STATE_VARIABLE_E_40_40, &STATE_VARIABLE_E_45_45);
      /* direct tailcall eliminated */
      next_value_of_T_14 = R_24;
      next_value_of_STATE_VARIABLE_A_0_25 = STATE_VARIABLE_A_41_41;
      next_value_of_STATE_VARIABLE_B_0_27 = STATE_VARIABLE_B_42_42;
      next_value_of_STATE_VARIABLE_C_0_29 = STATE_VARIABLE_C_43_43;
      next_value_of_STATE_VARIABLE_D_0_31 = STATE_VARIABLE_D_44_44;
      next_value_of_STATE_VARIABLE_E_0_33 = STATE_VARIABLE_E_45_45;
      T_14 = next_value_of_T_14;
      STATE_VARIABLE_A_0_25 = next_value_of_STATE_VARIABLE_A_0_25;
      STATE_VARIABLE_B_0_27 = next_value_of_STATE_VARIABLE_B_0_27;
      STATE_VARIABLE_C_0_29 = next_value_of_STATE_VARIABLE_C_0_29;
      STATE_VARIABLE_D_0_31 = next_value_of_STATE_VARIABLE_D_0_31;
      STATE_VARIABLE_E_0_33 = next_value_of_STATE_VARIABLE_E_0_33;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up5_13_p_0(
  MR_Word TypeInfo_for_A_44,
  MR_Word TypeInfo_for_B_45,
  MR_Word TypeInfo_for_C_46,
  MR_Word TypeInfo_for_D_47,
  MR_Word TypeInfo_for_E_48,
  MR_Word TypeClassInfo_for_diet_element_43,
  MR_Word P_14,
  MR_Box Lo_15,
  MR_Box Hi_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_43), Hi_16, Lo_15);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_32_32;
      MR_Box STATE_VARIABLE_B_33_33;
      MR_Box STATE_VARIABLE_C_34_34;
      MR_Box STATE_VARIABLE_D_35_35;
      MR_Box STATE_VARIABLE_E_36_36;
      MR_Box Var_37;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_14, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_15;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;
      MR_Box next_value_of_STATE_VARIABLE_E_0_30;

      func_1(((MR_Box) P_14), Lo_15, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_32_32, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_33_33, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_34_34, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_35_35, STATE_VARIABLE_E_0_30, &STATE_VARIABLE_E_36_36);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
      Var_37 = func_2(((MR_Box) TypeClassInfo_for_diet_element_43), Lo_15);
      /* direct tailcall eliminated */
      next_value_of_Lo_15 = Var_37;
      next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_32_32;
      next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_33_33;
      next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_34_34;
      next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_35_35;
      next_value_of_STATE_VARIABLE_E_0_30 = STATE_VARIABLE_E_36_36;
      Lo_15 = next_value_of_Lo_15;
      STATE_VARIABLE_A_0_22 = next_value_of_STATE_VARIABLE_A_0_22;
      STATE_VARIABLE_B_0_24 = next_value_of_STATE_VARIABLE_B_0_24;
      STATE_VARIABLE_C_0_26 = next_value_of_STATE_VARIABLE_C_0_26;
      STATE_VARIABLE_D_0_28 = next_value_of_STATE_VARIABLE_D_0_28;
      STATE_VARIABLE_E_0_30 = next_value_of_STATE_VARIABLE_E_0_30;
      continue;
    }
    else
    {
      *STATE_VARIABLE_E_31 = STATE_VARIABLE_E_0_30;
      *STATE_VARIABLE_D_29 = STATE_VARIABLE_D_0_28;
      *STATE_VARIABLE_C_27 = STATE_VARIABLE_C_0_26;
      *STATE_VARIABLE_B_25 = STATE_VARIABLE_B_0_24;
      *STATE_VARIABLE_A_23 = STATE_VARIABLE_A_0_22;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl4_10_p_5(
  MR_Word TypeInfo_for_A_44,
  MR_Word TypeInfo_for_B_45,
  MR_Word TypeInfo_for_C_46,
  MR_Word TypeInfo_for_D_47,
  MR_Word TypeClassInfo_for_diet_element_43,
  MR_Word P_11,
  MR_Word T_12,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_A_23 = STATE_VARIABLE_A_0_22;
      *STATE_VARIABLE_B_25 = STATE_VARIABLE_B_0_24;
      *STATE_VARIABLE_C_27 = STATE_VARIABLE_C_0_26;
      *STATE_VARIABLE_D_29 = STATE_VARIABLE_D_0_28;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_17;
      MR_Box Y_18;
      MR_Word L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 2)));
      MR_Word R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 3)));
      MR_Tuple Var_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_A_31_31;
      MR_Box STATE_VARIABLE_B_32_32;
      MR_Box STATE_VARIABLE_C_33_33;
      MR_Box STATE_VARIABLE_D_34_34;
      MR_Box STATE_VARIABLE_A_35_35;
      MR_Box STATE_VARIABLE_B_36_36;
      MR_Box STATE_VARIABLE_C_37_37;
      MR_Box STATE_VARIABLE_D_38_38;
      MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 1)));
      MR_Word next_value_of_T_12;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;

      X_17 = (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0));
      Y_18 = (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1));
      succeeded = mercury__diet__foldl4_10_p_5(TypeInfo_for_A_44, TypeInfo_for_B_45, TypeInfo_for_C_46, TypeInfo_for_D_47, TypeClassInfo_for_diet_element_43, P_11, L_20, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_31_31, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_32_32, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_33_33, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_34_34);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up4_11_p_5(TypeInfo_for_A_44, TypeInfo_for_B_45, TypeInfo_for_C_46, TypeInfo_for_D_47, TypeClassInfo_for_diet_element_43, P_11, X_17, Y_18, STATE_VARIABLE_A_31_31, &STATE_VARIABLE_A_35_35, STATE_VARIABLE_B_32_32, &STATE_VARIABLE_B_36_36, STATE_VARIABLE_C_33_33, &STATE_VARIABLE_C_37_37, STATE_VARIABLE_D_34_34, &STATE_VARIABLE_D_38_38);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T_12 = R_21;
          next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_35_35;
          next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_36_36;
          next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_37_37;
          next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_38_38;
          T_12 = next_value_of_T_12;
          STATE_VARIABLE_A_0_22 = next_value_of_STATE_VARIABLE_A_0_22;
          STATE_VARIABLE_B_0_24 = next_value_of_STATE_VARIABLE_B_0_24;
          STATE_VARIABLE_C_0_26 = next_value_of_STATE_VARIABLE_C_0_26;
          STATE_VARIABLE_D_0_28 = next_value_of_STATE_VARIABLE_D_0_28;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up4_11_p_5(
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeClassInfo_for_diet_element_36,
  MR_Word P_12,
  MR_Box Lo_13,
  MR_Box Hi_14,
  MR_Box STATE_VARIABLE_A_0_19,
  MR_Box * STATE_VARIABLE_A_20,
  MR_Box STATE_VARIABLE_B_0_21,
  MR_Box * STATE_VARIABLE_B_22,
  MR_Box STATE_VARIABLE_C_0_23,
  MR_Box * STATE_VARIABLE_C_24,
  MR_Box STATE_VARIABLE_D_0_25,
  MR_Box * STATE_VARIABLE_D_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_36), Hi_14, Lo_13);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_27_27;
      MR_Box STATE_VARIABLE_B_28_28;
      MR_Box STATE_VARIABLE_C_29_29;
      MR_Box STATE_VARIABLE_D_30_30;
      MR_Box Var_31;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_12, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_13;
      MR_Box next_value_of_STATE_VARIABLE_A_0_19;
      MR_Box next_value_of_STATE_VARIABLE_B_0_21;
      MR_Box next_value_of_STATE_VARIABLE_C_0_23;
      MR_Box next_value_of_STATE_VARIABLE_D_0_25;

      succeeded = func_1(((MR_Box) P_12), Lo_13, STATE_VARIABLE_A_0_19, &STATE_VARIABLE_A_27_27, STATE_VARIABLE_B_0_21, &STATE_VARIABLE_B_28_28, STATE_VARIABLE_C_0_23, &STATE_VARIABLE_C_29_29, STATE_VARIABLE_D_0_25, &STATE_VARIABLE_D_30_30);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
        Var_31 = func_2(((MR_Box) TypeClassInfo_for_diet_element_36), Lo_13);
        /* direct tailcall eliminated */
        next_value_of_Lo_13 = Var_31;
        next_value_of_STATE_VARIABLE_A_0_19 = STATE_VARIABLE_A_27_27;
        next_value_of_STATE_VARIABLE_B_0_21 = STATE_VARIABLE_B_28_28;
        next_value_of_STATE_VARIABLE_C_0_23 = STATE_VARIABLE_C_29_29;
        next_value_of_STATE_VARIABLE_D_0_25 = STATE_VARIABLE_D_30_30;
        Lo_13 = next_value_of_Lo_13;
        STATE_VARIABLE_A_0_19 = next_value_of_STATE_VARIABLE_A_0_19;
        STATE_VARIABLE_B_0_21 = next_value_of_STATE_VARIABLE_B_0_21;
        STATE_VARIABLE_C_0_23 = next_value_of_STATE_VARIABLE_C_0_23;
        STATE_VARIABLE_D_0_25 = next_value_of_STATE_VARIABLE_D_0_25;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_D_26 = STATE_VARIABLE_D_0_25;
      *STATE_VARIABLE_C_24 = STATE_VARIABLE_C_0_23;
      *STATE_VARIABLE_B_22 = STATE_VARIABLE_B_0_21;
      *STATE_VARIABLE_A_20 = STATE_VARIABLE_A_0_19;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl4_10_p_4(
  MR_Word TypeInfo_for_A_44,
  MR_Word TypeInfo_for_B_45,
  MR_Word TypeInfo_for_C_46,
  MR_Word TypeInfo_for_D_47,
  MR_Word TypeClassInfo_for_diet_element_43,
  MR_Word P_11,
  MR_Word T_12,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_A_23 = STATE_VARIABLE_A_0_22;
      *STATE_VARIABLE_B_25 = STATE_VARIABLE_B_0_24;
      *STATE_VARIABLE_C_27 = STATE_VARIABLE_C_0_26;
      *STATE_VARIABLE_D_29 = STATE_VARIABLE_D_0_28;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_17;
      MR_Box Y_18;
      MR_Word L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 2)));
      MR_Word R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 3)));
      MR_Tuple Var_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_A_31_31;
      MR_Box STATE_VARIABLE_B_32_32;
      MR_Box STATE_VARIABLE_C_33_33;
      MR_Box STATE_VARIABLE_D_34_34;
      MR_Box STATE_VARIABLE_A_35_35;
      MR_Box STATE_VARIABLE_B_36_36;
      MR_Box STATE_VARIABLE_C_37_37;
      MR_Box STATE_VARIABLE_D_38_38;
      MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 1)));
      MR_Word next_value_of_T_12;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;

      X_17 = (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0));
      Y_18 = (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1));
      succeeded = mercury__diet__foldl4_10_p_4(TypeInfo_for_A_44, TypeInfo_for_B_45, TypeInfo_for_C_46, TypeInfo_for_D_47, TypeClassInfo_for_diet_element_43, P_11, L_20, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_31_31, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_32_32, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_33_33, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_34_34);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up4_11_p_4(TypeInfo_for_A_44, TypeInfo_for_B_45, TypeInfo_for_C_46, TypeInfo_for_D_47, TypeClassInfo_for_diet_element_43, P_11, X_17, Y_18, STATE_VARIABLE_A_31_31, &STATE_VARIABLE_A_35_35, STATE_VARIABLE_B_32_32, &STATE_VARIABLE_B_36_36, STATE_VARIABLE_C_33_33, &STATE_VARIABLE_C_37_37, STATE_VARIABLE_D_34_34, &STATE_VARIABLE_D_38_38);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T_12 = R_21;
          next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_35_35;
          next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_36_36;
          next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_37_37;
          next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_38_38;
          T_12 = next_value_of_T_12;
          STATE_VARIABLE_A_0_22 = next_value_of_STATE_VARIABLE_A_0_22;
          STATE_VARIABLE_B_0_24 = next_value_of_STATE_VARIABLE_B_0_24;
          STATE_VARIABLE_C_0_26 = next_value_of_STATE_VARIABLE_C_0_26;
          STATE_VARIABLE_D_0_28 = next_value_of_STATE_VARIABLE_D_0_28;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up4_11_p_4(
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeClassInfo_for_diet_element_36,
  MR_Word P_12,
  MR_Box Lo_13,
  MR_Box Hi_14,
  MR_Box STATE_VARIABLE_A_0_19,
  MR_Box * STATE_VARIABLE_A_20,
  MR_Box STATE_VARIABLE_B_0_21,
  MR_Box * STATE_VARIABLE_B_22,
  MR_Box STATE_VARIABLE_C_0_23,
  MR_Box * STATE_VARIABLE_C_24,
  MR_Box STATE_VARIABLE_D_0_25,
  MR_Box * STATE_VARIABLE_D_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_36), Hi_14, Lo_13);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_27_27;
      MR_Box STATE_VARIABLE_B_28_28;
      MR_Box STATE_VARIABLE_C_29_29;
      MR_Box STATE_VARIABLE_D_30_30;
      MR_Box Var_31;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_12, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_13;
      MR_Box next_value_of_STATE_VARIABLE_A_0_19;
      MR_Box next_value_of_STATE_VARIABLE_B_0_21;
      MR_Box next_value_of_STATE_VARIABLE_C_0_23;
      MR_Box next_value_of_STATE_VARIABLE_D_0_25;

      succeeded = func_1(((MR_Box) P_12), Lo_13, STATE_VARIABLE_A_0_19, &STATE_VARIABLE_A_27_27, STATE_VARIABLE_B_0_21, &STATE_VARIABLE_B_28_28, STATE_VARIABLE_C_0_23, &STATE_VARIABLE_C_29_29, STATE_VARIABLE_D_0_25, &STATE_VARIABLE_D_30_30);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
        Var_31 = func_2(((MR_Box) TypeClassInfo_for_diet_element_36), Lo_13);
        /* direct tailcall eliminated */
        next_value_of_Lo_13 = Var_31;
        next_value_of_STATE_VARIABLE_A_0_19 = STATE_VARIABLE_A_27_27;
        next_value_of_STATE_VARIABLE_B_0_21 = STATE_VARIABLE_B_28_28;
        next_value_of_STATE_VARIABLE_C_0_23 = STATE_VARIABLE_C_29_29;
        next_value_of_STATE_VARIABLE_D_0_25 = STATE_VARIABLE_D_30_30;
        Lo_13 = next_value_of_Lo_13;
        STATE_VARIABLE_A_0_19 = next_value_of_STATE_VARIABLE_A_0_19;
        STATE_VARIABLE_B_0_21 = next_value_of_STATE_VARIABLE_B_0_21;
        STATE_VARIABLE_C_0_23 = next_value_of_STATE_VARIABLE_C_0_23;
        STATE_VARIABLE_D_0_25 = next_value_of_STATE_VARIABLE_D_0_25;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_D_26 = STATE_VARIABLE_D_0_25;
      *STATE_VARIABLE_C_24 = STATE_VARIABLE_C_0_23;
      *STATE_VARIABLE_B_22 = STATE_VARIABLE_B_0_21;
      *STATE_VARIABLE_A_20 = STATE_VARIABLE_A_0_19;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl4_10_p_3(
  MR_Word TypeInfo_for_A_44,
  MR_Word TypeInfo_for_B_45,
  MR_Word TypeInfo_for_C_46,
  MR_Word TypeInfo_for_D_47,
  MR_Word TypeClassInfo_for_diet_element_43,
  MR_Word P_11,
  MR_Word T_12,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_A_23 = STATE_VARIABLE_A_0_22;
      *STATE_VARIABLE_B_25 = STATE_VARIABLE_B_0_24;
      *STATE_VARIABLE_C_27 = STATE_VARIABLE_C_0_26;
      *STATE_VARIABLE_D_29 = STATE_VARIABLE_D_0_28;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_17;
      MR_Box Y_18;
      MR_Word L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 2)));
      MR_Word R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 3)));
      MR_Tuple Var_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_A_31_31;
      MR_Box STATE_VARIABLE_B_32_32;
      MR_Box STATE_VARIABLE_C_33_33;
      MR_Box STATE_VARIABLE_D_34_34;
      MR_Box STATE_VARIABLE_A_35_35;
      MR_Box STATE_VARIABLE_B_36_36;
      MR_Box STATE_VARIABLE_C_37_37;
      MR_Box STATE_VARIABLE_D_38_38;
      MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 1)));
      MR_Word next_value_of_T_12;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;

      X_17 = (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0));
      Y_18 = (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1));
      succeeded = mercury__diet__foldl4_10_p_3(TypeInfo_for_A_44, TypeInfo_for_B_45, TypeInfo_for_C_46, TypeInfo_for_D_47, TypeClassInfo_for_diet_element_43, P_11, L_20, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_31_31, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_32_32, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_33_33, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_34_34);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up4_11_p_3(TypeInfo_for_A_44, TypeInfo_for_B_45, TypeInfo_for_C_46, TypeInfo_for_D_47, TypeClassInfo_for_diet_element_43, P_11, X_17, Y_18, STATE_VARIABLE_A_31_31, &STATE_VARIABLE_A_35_35, STATE_VARIABLE_B_32_32, &STATE_VARIABLE_B_36_36, STATE_VARIABLE_C_33_33, &STATE_VARIABLE_C_37_37, STATE_VARIABLE_D_34_34, &STATE_VARIABLE_D_38_38);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T_12 = R_21;
          next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_35_35;
          next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_36_36;
          next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_37_37;
          next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_38_38;
          T_12 = next_value_of_T_12;
          STATE_VARIABLE_A_0_22 = next_value_of_STATE_VARIABLE_A_0_22;
          STATE_VARIABLE_B_0_24 = next_value_of_STATE_VARIABLE_B_0_24;
          STATE_VARIABLE_C_0_26 = next_value_of_STATE_VARIABLE_C_0_26;
          STATE_VARIABLE_D_0_28 = next_value_of_STATE_VARIABLE_D_0_28;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up4_11_p_3(
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeClassInfo_for_diet_element_36,
  MR_Word P_12,
  MR_Box Lo_13,
  MR_Box Hi_14,
  MR_Box STATE_VARIABLE_A_0_19,
  MR_Box * STATE_VARIABLE_A_20,
  MR_Box STATE_VARIABLE_B_0_21,
  MR_Box * STATE_VARIABLE_B_22,
  MR_Box STATE_VARIABLE_C_0_23,
  MR_Box * STATE_VARIABLE_C_24,
  MR_Box STATE_VARIABLE_D_0_25,
  MR_Box * STATE_VARIABLE_D_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_36), Hi_14, Lo_13);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_27_27;
      MR_Box STATE_VARIABLE_B_28_28;
      MR_Box STATE_VARIABLE_C_29_29;
      MR_Box STATE_VARIABLE_D_30_30;
      MR_Box Var_31;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_12, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_13;
      MR_Box next_value_of_STATE_VARIABLE_A_0_19;
      MR_Box next_value_of_STATE_VARIABLE_B_0_21;
      MR_Box next_value_of_STATE_VARIABLE_C_0_23;
      MR_Box next_value_of_STATE_VARIABLE_D_0_25;

      succeeded = func_1(((MR_Box) P_12), Lo_13, STATE_VARIABLE_A_0_19, &STATE_VARIABLE_A_27_27, STATE_VARIABLE_B_0_21, &STATE_VARIABLE_B_28_28, STATE_VARIABLE_C_0_23, &STATE_VARIABLE_C_29_29, STATE_VARIABLE_D_0_25, &STATE_VARIABLE_D_30_30);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
        Var_31 = func_2(((MR_Box) TypeClassInfo_for_diet_element_36), Lo_13);
        /* direct tailcall eliminated */
        next_value_of_Lo_13 = Var_31;
        next_value_of_STATE_VARIABLE_A_0_19 = STATE_VARIABLE_A_27_27;
        next_value_of_STATE_VARIABLE_B_0_21 = STATE_VARIABLE_B_28_28;
        next_value_of_STATE_VARIABLE_C_0_23 = STATE_VARIABLE_C_29_29;
        next_value_of_STATE_VARIABLE_D_0_25 = STATE_VARIABLE_D_30_30;
        Lo_13 = next_value_of_Lo_13;
        STATE_VARIABLE_A_0_19 = next_value_of_STATE_VARIABLE_A_0_19;
        STATE_VARIABLE_B_0_21 = next_value_of_STATE_VARIABLE_B_0_21;
        STATE_VARIABLE_C_0_23 = next_value_of_STATE_VARIABLE_C_0_23;
        STATE_VARIABLE_D_0_25 = next_value_of_STATE_VARIABLE_D_0_25;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_D_26 = STATE_VARIABLE_D_0_25;
      *STATE_VARIABLE_C_24 = STATE_VARIABLE_C_0_23;
      *STATE_VARIABLE_B_22 = STATE_VARIABLE_B_0_21;
      *STATE_VARIABLE_A_20 = STATE_VARIABLE_A_0_19;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__diet__foldl4_10_p_2(
  MR_Word TypeInfo_for_A_44,
  MR_Word TypeInfo_for_B_45,
  MR_Word TypeInfo_for_C_46,
  MR_Word TypeInfo_for_D_47,
  MR_Word TypeClassInfo_for_diet_element_43,
  MR_Word P_11,
  MR_Word T_12,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_A_23 = STATE_VARIABLE_A_0_22;
      *STATE_VARIABLE_B_25 = STATE_VARIABLE_B_0_24;
      *STATE_VARIABLE_C_27 = STATE_VARIABLE_C_0_26;
      *STATE_VARIABLE_D_29 = STATE_VARIABLE_D_0_28;
    }
    else
    {
      MR_Box X_17;
      MR_Box Y_18;
      MR_Word L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 2)));
      MR_Word R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 3)));
      MR_Tuple Var_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_A_31_31;
      MR_Box STATE_VARIABLE_B_32_32;
      MR_Box STATE_VARIABLE_C_33_33;
      MR_Box STATE_VARIABLE_D_34_34;
      MR_Box STATE_VARIABLE_A_35_35;
      MR_Box STATE_VARIABLE_B_36_36;
      MR_Box STATE_VARIABLE_C_37_37;
      MR_Box STATE_VARIABLE_D_38_38;
      MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 1)));
      MR_Word next_value_of_T_12;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;

      X_17 = (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0));
      Y_18 = (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1));
      mercury__diet__foldl4_10_p_2(TypeInfo_for_A_44, TypeInfo_for_B_45, TypeInfo_for_C_46, TypeInfo_for_D_47, TypeClassInfo_for_diet_element_43, P_11, L_20, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_31_31, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_32_32, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_33_33, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_34_34);
      mercury__diet__fold_up4_11_p_2(TypeInfo_for_A_44, TypeInfo_for_B_45, TypeInfo_for_C_46, TypeInfo_for_D_47, TypeClassInfo_for_diet_element_43, P_11, X_17, Y_18, STATE_VARIABLE_A_31_31, &STATE_VARIABLE_A_35_35, STATE_VARIABLE_B_32_32, &STATE_VARIABLE_B_36_36, STATE_VARIABLE_C_33_33, &STATE_VARIABLE_C_37_37, STATE_VARIABLE_D_34_34, &STATE_VARIABLE_D_38_38);
      /* direct tailcall eliminated */
      next_value_of_T_12 = R_21;
      next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_35_35;
      next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_36_36;
      next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_37_37;
      next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_38_38;
      T_12 = next_value_of_T_12;
      STATE_VARIABLE_A_0_22 = next_value_of_STATE_VARIABLE_A_0_22;
      STATE_VARIABLE_B_0_24 = next_value_of_STATE_VARIABLE_B_0_24;
      STATE_VARIABLE_C_0_26 = next_value_of_STATE_VARIABLE_C_0_26;
      STATE_VARIABLE_D_0_28 = next_value_of_STATE_VARIABLE_D_0_28;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up4_11_p_2(
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeClassInfo_for_diet_element_36,
  MR_Word P_12,
  MR_Box Lo_13,
  MR_Box Hi_14,
  MR_Box STATE_VARIABLE_A_0_19,
  MR_Box * STATE_VARIABLE_A_20,
  MR_Box STATE_VARIABLE_B_0_21,
  MR_Box * STATE_VARIABLE_B_22,
  MR_Box STATE_VARIABLE_C_0_23,
  MR_Box * STATE_VARIABLE_C_24,
  MR_Box STATE_VARIABLE_D_0_25,
  MR_Box * STATE_VARIABLE_D_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_36), Hi_14, Lo_13);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_27_27;
      MR_Box STATE_VARIABLE_B_28_28;
      MR_Box STATE_VARIABLE_C_29_29;
      MR_Box STATE_VARIABLE_D_30_30;
      MR_Box Var_31;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_12, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_13;
      MR_Box next_value_of_STATE_VARIABLE_A_0_19;
      MR_Box next_value_of_STATE_VARIABLE_B_0_21;
      MR_Box next_value_of_STATE_VARIABLE_C_0_23;
      MR_Box next_value_of_STATE_VARIABLE_D_0_25;

      func_1(((MR_Box) P_12), Lo_13, STATE_VARIABLE_A_0_19, &STATE_VARIABLE_A_27_27, STATE_VARIABLE_B_0_21, &STATE_VARIABLE_B_28_28, STATE_VARIABLE_C_0_23, &STATE_VARIABLE_C_29_29, STATE_VARIABLE_D_0_25, &STATE_VARIABLE_D_30_30);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
      Var_31 = func_2(((MR_Box) TypeClassInfo_for_diet_element_36), Lo_13);
      /* direct tailcall eliminated */
      next_value_of_Lo_13 = Var_31;
      next_value_of_STATE_VARIABLE_A_0_19 = STATE_VARIABLE_A_27_27;
      next_value_of_STATE_VARIABLE_B_0_21 = STATE_VARIABLE_B_28_28;
      next_value_of_STATE_VARIABLE_C_0_23 = STATE_VARIABLE_C_29_29;
      next_value_of_STATE_VARIABLE_D_0_25 = STATE_VARIABLE_D_30_30;
      Lo_13 = next_value_of_Lo_13;
      STATE_VARIABLE_A_0_19 = next_value_of_STATE_VARIABLE_A_0_19;
      STATE_VARIABLE_B_0_21 = next_value_of_STATE_VARIABLE_B_0_21;
      STATE_VARIABLE_C_0_23 = next_value_of_STATE_VARIABLE_C_0_23;
      STATE_VARIABLE_D_0_25 = next_value_of_STATE_VARIABLE_D_0_25;
      continue;
    }
    else
    {
      *STATE_VARIABLE_D_26 = STATE_VARIABLE_D_0_25;
      *STATE_VARIABLE_C_24 = STATE_VARIABLE_C_0_23;
      *STATE_VARIABLE_B_22 = STATE_VARIABLE_B_0_21;
      *STATE_VARIABLE_A_20 = STATE_VARIABLE_A_0_19;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl4_10_p_1(
  MR_Word TypeInfo_for_A_44,
  MR_Word TypeInfo_for_B_45,
  MR_Word TypeInfo_for_C_46,
  MR_Word TypeInfo_for_D_47,
  MR_Word TypeClassInfo_for_diet_element_43,
  MR_Word P_11,
  MR_Word T_12,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_A_23 = STATE_VARIABLE_A_0_22;
      *STATE_VARIABLE_B_25 = STATE_VARIABLE_B_0_24;
      *STATE_VARIABLE_C_27 = STATE_VARIABLE_C_0_26;
      *STATE_VARIABLE_D_29 = STATE_VARIABLE_D_0_28;
    }
    else
    {
      MR_Box X_17;
      MR_Box Y_18;
      MR_Word L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 2)));
      MR_Word R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 3)));
      MR_Tuple Var_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_A_31_31;
      MR_Box STATE_VARIABLE_B_32_32;
      MR_Box STATE_VARIABLE_C_33_33;
      MR_Box STATE_VARIABLE_D_34_34;
      MR_Box STATE_VARIABLE_A_35_35;
      MR_Box STATE_VARIABLE_B_36_36;
      MR_Box STATE_VARIABLE_C_37_37;
      MR_Box STATE_VARIABLE_D_38_38;
      MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 1)));
      MR_Word next_value_of_T_12;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;

      X_17 = (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0));
      Y_18 = (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1));
      mercury__diet__foldl4_10_p_1(TypeInfo_for_A_44, TypeInfo_for_B_45, TypeInfo_for_C_46, TypeInfo_for_D_47, TypeClassInfo_for_diet_element_43, P_11, L_20, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_31_31, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_32_32, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_33_33, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_34_34);
      mercury__diet__fold_up4_11_p_1(TypeInfo_for_A_44, TypeInfo_for_B_45, TypeInfo_for_C_46, TypeInfo_for_D_47, TypeClassInfo_for_diet_element_43, P_11, X_17, Y_18, STATE_VARIABLE_A_31_31, &STATE_VARIABLE_A_35_35, STATE_VARIABLE_B_32_32, &STATE_VARIABLE_B_36_36, STATE_VARIABLE_C_33_33, &STATE_VARIABLE_C_37_37, STATE_VARIABLE_D_34_34, &STATE_VARIABLE_D_38_38);
      /* direct tailcall eliminated */
      next_value_of_T_12 = R_21;
      next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_35_35;
      next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_36_36;
      next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_37_37;
      next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_38_38;
      T_12 = next_value_of_T_12;
      STATE_VARIABLE_A_0_22 = next_value_of_STATE_VARIABLE_A_0_22;
      STATE_VARIABLE_B_0_24 = next_value_of_STATE_VARIABLE_B_0_24;
      STATE_VARIABLE_C_0_26 = next_value_of_STATE_VARIABLE_C_0_26;
      STATE_VARIABLE_D_0_28 = next_value_of_STATE_VARIABLE_D_0_28;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up4_11_p_1(
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeClassInfo_for_diet_element_36,
  MR_Word P_12,
  MR_Box Lo_13,
  MR_Box Hi_14,
  MR_Box STATE_VARIABLE_A_0_19,
  MR_Box * STATE_VARIABLE_A_20,
  MR_Box STATE_VARIABLE_B_0_21,
  MR_Box * STATE_VARIABLE_B_22,
  MR_Box STATE_VARIABLE_C_0_23,
  MR_Box * STATE_VARIABLE_C_24,
  MR_Box STATE_VARIABLE_D_0_25,
  MR_Box * STATE_VARIABLE_D_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_36), Hi_14, Lo_13);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_27_27;
      MR_Box STATE_VARIABLE_B_28_28;
      MR_Box STATE_VARIABLE_C_29_29;
      MR_Box STATE_VARIABLE_D_30_30;
      MR_Box Var_31;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_12, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_13;
      MR_Box next_value_of_STATE_VARIABLE_A_0_19;
      MR_Box next_value_of_STATE_VARIABLE_B_0_21;
      MR_Box next_value_of_STATE_VARIABLE_C_0_23;
      MR_Box next_value_of_STATE_VARIABLE_D_0_25;

      func_1(((MR_Box) P_12), Lo_13, STATE_VARIABLE_A_0_19, &STATE_VARIABLE_A_27_27, STATE_VARIABLE_B_0_21, &STATE_VARIABLE_B_28_28, STATE_VARIABLE_C_0_23, &STATE_VARIABLE_C_29_29, STATE_VARIABLE_D_0_25, &STATE_VARIABLE_D_30_30);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
      Var_31 = func_2(((MR_Box) TypeClassInfo_for_diet_element_36), Lo_13);
      /* direct tailcall eliminated */
      next_value_of_Lo_13 = Var_31;
      next_value_of_STATE_VARIABLE_A_0_19 = STATE_VARIABLE_A_27_27;
      next_value_of_STATE_VARIABLE_B_0_21 = STATE_VARIABLE_B_28_28;
      next_value_of_STATE_VARIABLE_C_0_23 = STATE_VARIABLE_C_29_29;
      next_value_of_STATE_VARIABLE_D_0_25 = STATE_VARIABLE_D_30_30;
      Lo_13 = next_value_of_Lo_13;
      STATE_VARIABLE_A_0_19 = next_value_of_STATE_VARIABLE_A_0_19;
      STATE_VARIABLE_B_0_21 = next_value_of_STATE_VARIABLE_B_0_21;
      STATE_VARIABLE_C_0_23 = next_value_of_STATE_VARIABLE_C_0_23;
      STATE_VARIABLE_D_0_25 = next_value_of_STATE_VARIABLE_D_0_25;
      continue;
    }
    else
    {
      *STATE_VARIABLE_D_26 = STATE_VARIABLE_D_0_25;
      *STATE_VARIABLE_C_24 = STATE_VARIABLE_C_0_23;
      *STATE_VARIABLE_B_22 = STATE_VARIABLE_B_0_21;
      *STATE_VARIABLE_A_20 = STATE_VARIABLE_A_0_19;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl4_10_p_0(
  MR_Word TypeInfo_for_A_44,
  MR_Word TypeInfo_for_B_45,
  MR_Word TypeInfo_for_C_46,
  MR_Word TypeInfo_for_D_47,
  MR_Word TypeClassInfo_for_diet_element_43,
  MR_Word P_11,
  MR_Word T_12,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_A_23 = STATE_VARIABLE_A_0_22;
      *STATE_VARIABLE_B_25 = STATE_VARIABLE_B_0_24;
      *STATE_VARIABLE_C_27 = STATE_VARIABLE_C_0_26;
      *STATE_VARIABLE_D_29 = STATE_VARIABLE_D_0_28;
    }
    else
    {
      MR_Box X_17;
      MR_Box Y_18;
      MR_Word L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 2)));
      MR_Word R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 3)));
      MR_Tuple Var_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_A_31_31;
      MR_Box STATE_VARIABLE_B_32_32;
      MR_Box STATE_VARIABLE_C_33_33;
      MR_Box STATE_VARIABLE_D_34_34;
      MR_Box STATE_VARIABLE_A_35_35;
      MR_Box STATE_VARIABLE_B_36_36;
      MR_Box STATE_VARIABLE_C_37_37;
      MR_Box STATE_VARIABLE_D_38_38;
      MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_12, (MR_Integer) 1)));
      MR_Word next_value_of_T_12;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;

      X_17 = (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0));
      Y_18 = (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1));
      mercury__diet__foldl4_10_p_0(TypeInfo_for_A_44, TypeInfo_for_B_45, TypeInfo_for_C_46, TypeInfo_for_D_47, TypeClassInfo_for_diet_element_43, P_11, L_20, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_31_31, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_32_32, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_33_33, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_34_34);
      mercury__diet__fold_up4_11_p_0(TypeInfo_for_A_44, TypeInfo_for_B_45, TypeInfo_for_C_46, TypeInfo_for_D_47, TypeClassInfo_for_diet_element_43, P_11, X_17, Y_18, STATE_VARIABLE_A_31_31, &STATE_VARIABLE_A_35_35, STATE_VARIABLE_B_32_32, &STATE_VARIABLE_B_36_36, STATE_VARIABLE_C_33_33, &STATE_VARIABLE_C_37_37, STATE_VARIABLE_D_34_34, &STATE_VARIABLE_D_38_38);
      /* direct tailcall eliminated */
      next_value_of_T_12 = R_21;
      next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_35_35;
      next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_36_36;
      next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_37_37;
      next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_38_38;
      T_12 = next_value_of_T_12;
      STATE_VARIABLE_A_0_22 = next_value_of_STATE_VARIABLE_A_0_22;
      STATE_VARIABLE_B_0_24 = next_value_of_STATE_VARIABLE_B_0_24;
      STATE_VARIABLE_C_0_26 = next_value_of_STATE_VARIABLE_C_0_26;
      STATE_VARIABLE_D_0_28 = next_value_of_STATE_VARIABLE_D_0_28;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up4_11_p_0(
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeClassInfo_for_diet_element_36,
  MR_Word P_12,
  MR_Box Lo_13,
  MR_Box Hi_14,
  MR_Box STATE_VARIABLE_A_0_19,
  MR_Box * STATE_VARIABLE_A_20,
  MR_Box STATE_VARIABLE_B_0_21,
  MR_Box * STATE_VARIABLE_B_22,
  MR_Box STATE_VARIABLE_C_0_23,
  MR_Box * STATE_VARIABLE_C_24,
  MR_Box STATE_VARIABLE_D_0_25,
  MR_Box * STATE_VARIABLE_D_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_36), Hi_14, Lo_13);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_27_27;
      MR_Box STATE_VARIABLE_B_28_28;
      MR_Box STATE_VARIABLE_C_29_29;
      MR_Box STATE_VARIABLE_D_30_30;
      MR_Box Var_31;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_12, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_13;
      MR_Box next_value_of_STATE_VARIABLE_A_0_19;
      MR_Box next_value_of_STATE_VARIABLE_B_0_21;
      MR_Box next_value_of_STATE_VARIABLE_C_0_23;
      MR_Box next_value_of_STATE_VARIABLE_D_0_25;

      func_1(((MR_Box) P_12), Lo_13, STATE_VARIABLE_A_0_19, &STATE_VARIABLE_A_27_27, STATE_VARIABLE_B_0_21, &STATE_VARIABLE_B_28_28, STATE_VARIABLE_C_0_23, &STATE_VARIABLE_C_29_29, STATE_VARIABLE_D_0_25, &STATE_VARIABLE_D_30_30);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
      Var_31 = func_2(((MR_Box) TypeClassInfo_for_diet_element_36), Lo_13);
      /* direct tailcall eliminated */
      next_value_of_Lo_13 = Var_31;
      next_value_of_STATE_VARIABLE_A_0_19 = STATE_VARIABLE_A_27_27;
      next_value_of_STATE_VARIABLE_B_0_21 = STATE_VARIABLE_B_28_28;
      next_value_of_STATE_VARIABLE_C_0_23 = STATE_VARIABLE_C_29_29;
      next_value_of_STATE_VARIABLE_D_0_25 = STATE_VARIABLE_D_30_30;
      Lo_13 = next_value_of_Lo_13;
      STATE_VARIABLE_A_0_19 = next_value_of_STATE_VARIABLE_A_0_19;
      STATE_VARIABLE_B_0_21 = next_value_of_STATE_VARIABLE_B_0_21;
      STATE_VARIABLE_C_0_23 = next_value_of_STATE_VARIABLE_C_0_23;
      STATE_VARIABLE_D_0_25 = next_value_of_STATE_VARIABLE_D_0_25;
      continue;
    }
    else
    {
      *STATE_VARIABLE_D_26 = STATE_VARIABLE_D_0_25;
      *STATE_VARIABLE_C_24 = STATE_VARIABLE_C_0_23;
      *STATE_VARIABLE_B_22 = STATE_VARIABLE_B_0_21;
      *STATE_VARIABLE_A_20 = STATE_VARIABLE_A_0_19;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl3_8_p_5(
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeClassInfo_for_diet_element_35,
  MR_Word P_9,
  MR_Word T_10,
  MR_Box STATE_VARIABLE_Acc1_0_19,
  MR_Box * STATE_VARIABLE_Acc1_20,
  MR_Box STATE_VARIABLE_Acc2_0_21,
  MR_Box * STATE_VARIABLE_Acc2_22,
  MR_Box STATE_VARIABLE_Acc3_0_23,
  MR_Box * STATE_VARIABLE_Acc3_24)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_0_19;
      *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_0_21;
      *STATE_VARIABLE_Acc3_24 = STATE_VARIABLE_Acc3_0_23;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_14;
      MR_Box Y_15;
      MR_Word L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 2)));
      MR_Word R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 3)));
      MR_Tuple Var_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc1_26_26;
      MR_Box STATE_VARIABLE_Acc2_27_27;
      MR_Box STATE_VARIABLE_Acc3_28_28;
      MR_Box STATE_VARIABLE_Acc1_29_29;
      MR_Box STATE_VARIABLE_Acc2_30_30;
      MR_Box STATE_VARIABLE_Acc3_31_31;
      MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 1)));
      MR_Word next_value_of_T_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_23;

      X_14 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0));
      Y_15 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1));
      succeeded = mercury__diet__foldl3_8_p_5(TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeClassInfo_for_diet_element_35, P_9, L_17, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_26_26, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_27_27, STATE_VARIABLE_Acc3_0_23, &STATE_VARIABLE_Acc3_28_28);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up3_9_p_5(TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeClassInfo_for_diet_element_35, P_9, X_14, Y_15, STATE_VARIABLE_Acc1_26_26, &STATE_VARIABLE_Acc1_29_29, STATE_VARIABLE_Acc2_27_27, &STATE_VARIABLE_Acc2_30_30, STATE_VARIABLE_Acc3_28_28, &STATE_VARIABLE_Acc3_31_31);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T_10 = R_18;
          next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_29_29;
          next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_30_30;
          next_value_of_STATE_VARIABLE_Acc3_0_23 = STATE_VARIABLE_Acc3_31_31;
          T_10 = next_value_of_T_10;
          STATE_VARIABLE_Acc1_0_19 = next_value_of_STATE_VARIABLE_Acc1_0_19;
          STATE_VARIABLE_Acc2_0_21 = next_value_of_STATE_VARIABLE_Acc2_0_21;
          STATE_VARIABLE_Acc3_0_23 = next_value_of_STATE_VARIABLE_Acc3_0_23;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up3_9_p_5(
  MR_Word TypeInfo_for_Acc1_30,
  MR_Word TypeInfo_for_Acc2_31,
  MR_Word TypeInfo_for_Acc3_32,
  MR_Word TypeClassInfo_for_diet_element_29,
  MR_Word P_10,
  MR_Box Lo_11,
  MR_Box Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_29), Hi_12, Lo_11);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Box Var_25;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      succeeded = func_1(((MR_Box) P_10), Lo_11, STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
        Var_25 = func_2(((MR_Box) TypeClassInfo_for_diet_element_29), Lo_11);
        /* direct tailcall eliminated */
        next_value_of_Lo_11 = Var_25;
        next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
        next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
        next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
        Lo_11 = next_value_of_Lo_11;
        STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
        STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
        STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl3_8_p_4(
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeClassInfo_for_diet_element_35,
  MR_Word P_9,
  MR_Word T_10,
  MR_Box STATE_VARIABLE_Acc1_0_19,
  MR_Box * STATE_VARIABLE_Acc1_20,
  MR_Box STATE_VARIABLE_Acc2_0_21,
  MR_Box * STATE_VARIABLE_Acc2_22,
  MR_Box STATE_VARIABLE_Acc3_0_23,
  MR_Box * STATE_VARIABLE_Acc3_24)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_0_19;
      *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_0_21;
      *STATE_VARIABLE_Acc3_24 = STATE_VARIABLE_Acc3_0_23;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_14;
      MR_Box Y_15;
      MR_Word L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 2)));
      MR_Word R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 3)));
      MR_Tuple Var_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc1_26_26;
      MR_Box STATE_VARIABLE_Acc2_27_27;
      MR_Box STATE_VARIABLE_Acc3_28_28;
      MR_Box STATE_VARIABLE_Acc1_29_29;
      MR_Box STATE_VARIABLE_Acc2_30_30;
      MR_Box STATE_VARIABLE_Acc3_31_31;
      MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 1)));
      MR_Word next_value_of_T_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_23;

      X_14 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0));
      Y_15 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1));
      succeeded = mercury__diet__foldl3_8_p_4(TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeClassInfo_for_diet_element_35, P_9, L_17, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_26_26, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_27_27, STATE_VARIABLE_Acc3_0_23, &STATE_VARIABLE_Acc3_28_28);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up3_9_p_4(TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeClassInfo_for_diet_element_35, P_9, X_14, Y_15, STATE_VARIABLE_Acc1_26_26, &STATE_VARIABLE_Acc1_29_29, STATE_VARIABLE_Acc2_27_27, &STATE_VARIABLE_Acc2_30_30, STATE_VARIABLE_Acc3_28_28, &STATE_VARIABLE_Acc3_31_31);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T_10 = R_18;
          next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_29_29;
          next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_30_30;
          next_value_of_STATE_VARIABLE_Acc3_0_23 = STATE_VARIABLE_Acc3_31_31;
          T_10 = next_value_of_T_10;
          STATE_VARIABLE_Acc1_0_19 = next_value_of_STATE_VARIABLE_Acc1_0_19;
          STATE_VARIABLE_Acc2_0_21 = next_value_of_STATE_VARIABLE_Acc2_0_21;
          STATE_VARIABLE_Acc3_0_23 = next_value_of_STATE_VARIABLE_Acc3_0_23;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up3_9_p_4(
  MR_Word TypeInfo_for_Acc1_30,
  MR_Word TypeInfo_for_Acc2_31,
  MR_Word TypeInfo_for_Acc3_32,
  MR_Word TypeClassInfo_for_diet_element_29,
  MR_Word P_10,
  MR_Box Lo_11,
  MR_Box Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_29), Hi_12, Lo_11);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Box Var_25;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      succeeded = func_1(((MR_Box) P_10), Lo_11, STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
        Var_25 = func_2(((MR_Box) TypeClassInfo_for_diet_element_29), Lo_11);
        /* direct tailcall eliminated */
        next_value_of_Lo_11 = Var_25;
        next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
        next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
        next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
        Lo_11 = next_value_of_Lo_11;
        STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
        STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
        STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl3_8_p_3(
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeClassInfo_for_diet_element_35,
  MR_Word P_9,
  MR_Word T_10,
  MR_Box STATE_VARIABLE_Acc1_0_19,
  MR_Box * STATE_VARIABLE_Acc1_20,
  MR_Box STATE_VARIABLE_Acc2_0_21,
  MR_Box * STATE_VARIABLE_Acc2_22,
  MR_Box STATE_VARIABLE_Acc3_0_23,
  MR_Box * STATE_VARIABLE_Acc3_24)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_0_19;
      *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_0_21;
      *STATE_VARIABLE_Acc3_24 = STATE_VARIABLE_Acc3_0_23;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_14;
      MR_Box Y_15;
      MR_Word L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 2)));
      MR_Word R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 3)));
      MR_Tuple Var_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc1_26_26;
      MR_Box STATE_VARIABLE_Acc2_27_27;
      MR_Box STATE_VARIABLE_Acc3_28_28;
      MR_Box STATE_VARIABLE_Acc1_29_29;
      MR_Box STATE_VARIABLE_Acc2_30_30;
      MR_Box STATE_VARIABLE_Acc3_31_31;
      MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 1)));
      MR_Word next_value_of_T_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_23;

      X_14 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0));
      Y_15 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1));
      succeeded = mercury__diet__foldl3_8_p_3(TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeClassInfo_for_diet_element_35, P_9, L_17, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_26_26, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_27_27, STATE_VARIABLE_Acc3_0_23, &STATE_VARIABLE_Acc3_28_28);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up3_9_p_3(TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeClassInfo_for_diet_element_35, P_9, X_14, Y_15, STATE_VARIABLE_Acc1_26_26, &STATE_VARIABLE_Acc1_29_29, STATE_VARIABLE_Acc2_27_27, &STATE_VARIABLE_Acc2_30_30, STATE_VARIABLE_Acc3_28_28, &STATE_VARIABLE_Acc3_31_31);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T_10 = R_18;
          next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_29_29;
          next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_30_30;
          next_value_of_STATE_VARIABLE_Acc3_0_23 = STATE_VARIABLE_Acc3_31_31;
          T_10 = next_value_of_T_10;
          STATE_VARIABLE_Acc1_0_19 = next_value_of_STATE_VARIABLE_Acc1_0_19;
          STATE_VARIABLE_Acc2_0_21 = next_value_of_STATE_VARIABLE_Acc2_0_21;
          STATE_VARIABLE_Acc3_0_23 = next_value_of_STATE_VARIABLE_Acc3_0_23;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up3_9_p_3(
  MR_Word TypeInfo_for_Acc1_30,
  MR_Word TypeInfo_for_Acc2_31,
  MR_Word TypeInfo_for_Acc3_32,
  MR_Word TypeClassInfo_for_diet_element_29,
  MR_Word P_10,
  MR_Box Lo_11,
  MR_Box Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_29), Hi_12, Lo_11);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Box Var_25;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      succeeded = func_1(((MR_Box) P_10), Lo_11, STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
        Var_25 = func_2(((MR_Box) TypeClassInfo_for_diet_element_29), Lo_11);
        /* direct tailcall eliminated */
        next_value_of_Lo_11 = Var_25;
        next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
        next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
        next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
        Lo_11 = next_value_of_Lo_11;
        STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
        STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
        STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__diet__foldl3_8_p_2(
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeClassInfo_for_diet_element_35,
  MR_Word P_9,
  MR_Word T_10,
  MR_Box STATE_VARIABLE_Acc1_0_19,
  MR_Box * STATE_VARIABLE_Acc1_20,
  MR_Box STATE_VARIABLE_Acc2_0_21,
  MR_Box * STATE_VARIABLE_Acc2_22,
  MR_Box STATE_VARIABLE_Acc3_0_23,
  MR_Box * STATE_VARIABLE_Acc3_24)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_0_19;
      *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_0_21;
      *STATE_VARIABLE_Acc3_24 = STATE_VARIABLE_Acc3_0_23;
    }
    else
    {
      MR_Box X_14;
      MR_Box Y_15;
      MR_Word L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 2)));
      MR_Word R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 3)));
      MR_Tuple Var_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc1_26_26;
      MR_Box STATE_VARIABLE_Acc2_27_27;
      MR_Box STATE_VARIABLE_Acc3_28_28;
      MR_Box STATE_VARIABLE_Acc1_29_29;
      MR_Box STATE_VARIABLE_Acc2_30_30;
      MR_Box STATE_VARIABLE_Acc3_31_31;
      MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 1)));
      MR_Word next_value_of_T_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_23;

      X_14 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0));
      Y_15 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1));
      mercury__diet__foldl3_8_p_2(TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeClassInfo_for_diet_element_35, P_9, L_17, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_26_26, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_27_27, STATE_VARIABLE_Acc3_0_23, &STATE_VARIABLE_Acc3_28_28);
      mercury__diet__fold_up3_9_p_2(TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeClassInfo_for_diet_element_35, P_9, X_14, Y_15, STATE_VARIABLE_Acc1_26_26, &STATE_VARIABLE_Acc1_29_29, STATE_VARIABLE_Acc2_27_27, &STATE_VARIABLE_Acc2_30_30, STATE_VARIABLE_Acc3_28_28, &STATE_VARIABLE_Acc3_31_31);
      /* direct tailcall eliminated */
      next_value_of_T_10 = R_18;
      next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_29_29;
      next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_30_30;
      next_value_of_STATE_VARIABLE_Acc3_0_23 = STATE_VARIABLE_Acc3_31_31;
      T_10 = next_value_of_T_10;
      STATE_VARIABLE_Acc1_0_19 = next_value_of_STATE_VARIABLE_Acc1_0_19;
      STATE_VARIABLE_Acc2_0_21 = next_value_of_STATE_VARIABLE_Acc2_0_21;
      STATE_VARIABLE_Acc3_0_23 = next_value_of_STATE_VARIABLE_Acc3_0_23;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up3_9_p_2(
  MR_Word TypeInfo_for_Acc1_30,
  MR_Word TypeInfo_for_Acc2_31,
  MR_Word TypeInfo_for_Acc3_32,
  MR_Word TypeClassInfo_for_diet_element_29,
  MR_Word P_10,
  MR_Box Lo_11,
  MR_Box Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_29), Hi_12, Lo_11);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Box Var_25;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      func_1(((MR_Box) P_10), Lo_11, STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
      Var_25 = func_2(((MR_Box) TypeClassInfo_for_diet_element_29), Lo_11);
      /* direct tailcall eliminated */
      next_value_of_Lo_11 = Var_25;
      next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
      next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
      next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
      Lo_11 = next_value_of_Lo_11;
      STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
      STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
      STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
      continue;
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl3_8_p_1(
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeClassInfo_for_diet_element_35,
  MR_Word P_9,
  MR_Word T_10,
  MR_Box STATE_VARIABLE_Acc1_0_19,
  MR_Box * STATE_VARIABLE_Acc1_20,
  MR_Box STATE_VARIABLE_Acc2_0_21,
  MR_Box * STATE_VARIABLE_Acc2_22,
  MR_Box STATE_VARIABLE_Acc3_0_23,
  MR_Box * STATE_VARIABLE_Acc3_24)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_0_19;
      *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_0_21;
      *STATE_VARIABLE_Acc3_24 = STATE_VARIABLE_Acc3_0_23;
    }
    else
    {
      MR_Box X_14;
      MR_Box Y_15;
      MR_Word L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 2)));
      MR_Word R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 3)));
      MR_Tuple Var_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc1_26_26;
      MR_Box STATE_VARIABLE_Acc2_27_27;
      MR_Box STATE_VARIABLE_Acc3_28_28;
      MR_Box STATE_VARIABLE_Acc1_29_29;
      MR_Box STATE_VARIABLE_Acc2_30_30;
      MR_Box STATE_VARIABLE_Acc3_31_31;
      MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 1)));
      MR_Word next_value_of_T_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_23;

      X_14 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0));
      Y_15 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1));
      mercury__diet__foldl3_8_p_1(TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeClassInfo_for_diet_element_35, P_9, L_17, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_26_26, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_27_27, STATE_VARIABLE_Acc3_0_23, &STATE_VARIABLE_Acc3_28_28);
      mercury__diet__fold_up3_9_p_1(TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeClassInfo_for_diet_element_35, P_9, X_14, Y_15, STATE_VARIABLE_Acc1_26_26, &STATE_VARIABLE_Acc1_29_29, STATE_VARIABLE_Acc2_27_27, &STATE_VARIABLE_Acc2_30_30, STATE_VARIABLE_Acc3_28_28, &STATE_VARIABLE_Acc3_31_31);
      /* direct tailcall eliminated */
      next_value_of_T_10 = R_18;
      next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_29_29;
      next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_30_30;
      next_value_of_STATE_VARIABLE_Acc3_0_23 = STATE_VARIABLE_Acc3_31_31;
      T_10 = next_value_of_T_10;
      STATE_VARIABLE_Acc1_0_19 = next_value_of_STATE_VARIABLE_Acc1_0_19;
      STATE_VARIABLE_Acc2_0_21 = next_value_of_STATE_VARIABLE_Acc2_0_21;
      STATE_VARIABLE_Acc3_0_23 = next_value_of_STATE_VARIABLE_Acc3_0_23;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up3_9_p_1(
  MR_Word TypeInfo_for_Acc1_30,
  MR_Word TypeInfo_for_Acc2_31,
  MR_Word TypeInfo_for_Acc3_32,
  MR_Word TypeClassInfo_for_diet_element_29,
  MR_Word P_10,
  MR_Box Lo_11,
  MR_Box Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_29), Hi_12, Lo_11);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Box Var_25;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      func_1(((MR_Box) P_10), Lo_11, STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
      Var_25 = func_2(((MR_Box) TypeClassInfo_for_diet_element_29), Lo_11);
      /* direct tailcall eliminated */
      next_value_of_Lo_11 = Var_25;
      next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
      next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
      next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
      Lo_11 = next_value_of_Lo_11;
      STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
      STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
      STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
      continue;
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl3_8_p_0(
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeClassInfo_for_diet_element_35,
  MR_Word P_9,
  MR_Word T_10,
  MR_Box STATE_VARIABLE_Acc1_0_19,
  MR_Box * STATE_VARIABLE_Acc1_20,
  MR_Box STATE_VARIABLE_Acc2_0_21,
  MR_Box * STATE_VARIABLE_Acc2_22,
  MR_Box STATE_VARIABLE_Acc3_0_23,
  MR_Box * STATE_VARIABLE_Acc3_24)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_0_19;
      *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_0_21;
      *STATE_VARIABLE_Acc3_24 = STATE_VARIABLE_Acc3_0_23;
    }
    else
    {
      MR_Box X_14;
      MR_Box Y_15;
      MR_Word L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 2)));
      MR_Word R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 3)));
      MR_Tuple Var_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc1_26_26;
      MR_Box STATE_VARIABLE_Acc2_27_27;
      MR_Box STATE_VARIABLE_Acc3_28_28;
      MR_Box STATE_VARIABLE_Acc1_29_29;
      MR_Box STATE_VARIABLE_Acc2_30_30;
      MR_Box STATE_VARIABLE_Acc3_31_31;
      MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_10, (MR_Integer) 1)));
      MR_Word next_value_of_T_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_23;

      X_14 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0));
      Y_15 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1));
      mercury__diet__foldl3_8_p_0(TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeClassInfo_for_diet_element_35, P_9, L_17, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_26_26, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_27_27, STATE_VARIABLE_Acc3_0_23, &STATE_VARIABLE_Acc3_28_28);
      mercury__diet__fold_up3_9_p_0(TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeClassInfo_for_diet_element_35, P_9, X_14, Y_15, STATE_VARIABLE_Acc1_26_26, &STATE_VARIABLE_Acc1_29_29, STATE_VARIABLE_Acc2_27_27, &STATE_VARIABLE_Acc2_30_30, STATE_VARIABLE_Acc3_28_28, &STATE_VARIABLE_Acc3_31_31);
      /* direct tailcall eliminated */
      next_value_of_T_10 = R_18;
      next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_29_29;
      next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_30_30;
      next_value_of_STATE_VARIABLE_Acc3_0_23 = STATE_VARIABLE_Acc3_31_31;
      T_10 = next_value_of_T_10;
      STATE_VARIABLE_Acc1_0_19 = next_value_of_STATE_VARIABLE_Acc1_0_19;
      STATE_VARIABLE_Acc2_0_21 = next_value_of_STATE_VARIABLE_Acc2_0_21;
      STATE_VARIABLE_Acc3_0_23 = next_value_of_STATE_VARIABLE_Acc3_0_23;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up3_9_p_0(
  MR_Word TypeInfo_for_Acc1_30,
  MR_Word TypeInfo_for_Acc2_31,
  MR_Word TypeInfo_for_Acc3_32,
  MR_Word TypeClassInfo_for_diet_element_29,
  MR_Word P_10,
  MR_Box Lo_11,
  MR_Box Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_29), Hi_12, Lo_11);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Box Var_25;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      func_1(((MR_Box) P_10), Lo_11, STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
      Var_25 = func_2(((MR_Box) TypeClassInfo_for_diet_element_29), Lo_11);
      /* direct tailcall eliminated */
      next_value_of_Lo_11 = Var_25;
      next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
      next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
      next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
      Lo_11 = next_value_of_Lo_11;
      STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
      STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
      STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
      continue;
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl2_6_p_5(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word TypeClassInfo_for_diet_element_27,
  MR_Word P_7,
  MR_Word T_8,
  MR_Box STATE_VARIABLE_Acc1_0_16,
  MR_Box * STATE_VARIABLE_Acc1_17,
  MR_Box STATE_VARIABLE_Acc2_0_18,
  MR_Box * STATE_VARIABLE_Acc2_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc1_17 = STATE_VARIABLE_Acc1_0_16;
      *STATE_VARIABLE_Acc2_19 = STATE_VARIABLE_Acc2_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_11;
      MR_Box Y_12;
      MR_Word L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 2)));
      MR_Word R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 3)));
      MR_Tuple Var_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc1_21_21;
      MR_Box STATE_VARIABLE_Acc2_22_22;
      MR_Box STATE_VARIABLE_Acc1_23_23;
      MR_Box STATE_VARIABLE_Acc2_24_24;
      MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 1)));
      MR_Word next_value_of_T_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_16;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_18;

      X_11 = (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0));
      Y_12 = (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1));
      succeeded = mercury__diet__foldl2_6_p_5(TypeInfo_for_A_28, TypeInfo_for_B_29, TypeClassInfo_for_diet_element_27, P_7, L_14, STATE_VARIABLE_Acc1_0_16, &STATE_VARIABLE_Acc1_21_21, STATE_VARIABLE_Acc2_0_18, &STATE_VARIABLE_Acc2_22_22);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up2_7_p_5(TypeInfo_for_A_28, TypeInfo_for_B_29, TypeClassInfo_for_diet_element_27, P_7, X_11, Y_12, STATE_VARIABLE_Acc1_21_21, &STATE_VARIABLE_Acc1_23_23, STATE_VARIABLE_Acc2_22_22, &STATE_VARIABLE_Acc2_24_24);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T_8 = R_15;
          next_value_of_STATE_VARIABLE_Acc1_0_16 = STATE_VARIABLE_Acc1_23_23;
          next_value_of_STATE_VARIABLE_Acc2_0_18 = STATE_VARIABLE_Acc2_24_24;
          T_8 = next_value_of_T_8;
          STATE_VARIABLE_Acc1_0_16 = next_value_of_STATE_VARIABLE_Acc1_0_16;
          STATE_VARIABLE_Acc2_0_18 = next_value_of_STATE_VARIABLE_Acc2_0_18;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up2_7_p_5(
  MR_Word TypeInfo_for_Acc1_23,
  MR_Word TypeInfo_for_Acc2_24,
  MR_Word TypeClassInfo_for_diet_element_22,
  MR_Word P_8,
  MR_Box Lo_9,
  MR_Box Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_22), Hi_10, Lo_9);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Box Var_19;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      succeeded = func_1(((MR_Box) P_8), Lo_9, STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
        Var_19 = func_2(((MR_Box) TypeClassInfo_for_diet_element_22), Lo_9);
        /* direct tailcall eliminated */
        next_value_of_Lo_9 = Var_19;
        next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
        next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
        Lo_9 = next_value_of_Lo_9;
        STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
        STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl2_6_p_4(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word TypeClassInfo_for_diet_element_27,
  MR_Word P_7,
  MR_Word T_8,
  MR_Box STATE_VARIABLE_Acc1_0_16,
  MR_Box * STATE_VARIABLE_Acc1_17,
  MR_Box STATE_VARIABLE_Acc2_0_18,
  MR_Box * STATE_VARIABLE_Acc2_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc1_17 = STATE_VARIABLE_Acc1_0_16;
      *STATE_VARIABLE_Acc2_19 = STATE_VARIABLE_Acc2_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_11;
      MR_Box Y_12;
      MR_Word L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 2)));
      MR_Word R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 3)));
      MR_Tuple Var_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc1_21_21;
      MR_Box STATE_VARIABLE_Acc2_22_22;
      MR_Box STATE_VARIABLE_Acc1_23_23;
      MR_Box STATE_VARIABLE_Acc2_24_24;
      MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 1)));
      MR_Word next_value_of_T_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_16;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_18;

      X_11 = (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0));
      Y_12 = (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1));
      succeeded = mercury__diet__foldl2_6_p_4(TypeInfo_for_A_28, TypeInfo_for_B_29, TypeClassInfo_for_diet_element_27, P_7, L_14, STATE_VARIABLE_Acc1_0_16, &STATE_VARIABLE_Acc1_21_21, STATE_VARIABLE_Acc2_0_18, &STATE_VARIABLE_Acc2_22_22);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up2_7_p_4(TypeInfo_for_A_28, TypeInfo_for_B_29, TypeClassInfo_for_diet_element_27, P_7, X_11, Y_12, STATE_VARIABLE_Acc1_21_21, &STATE_VARIABLE_Acc1_23_23, STATE_VARIABLE_Acc2_22_22, &STATE_VARIABLE_Acc2_24_24);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T_8 = R_15;
          next_value_of_STATE_VARIABLE_Acc1_0_16 = STATE_VARIABLE_Acc1_23_23;
          next_value_of_STATE_VARIABLE_Acc2_0_18 = STATE_VARIABLE_Acc2_24_24;
          T_8 = next_value_of_T_8;
          STATE_VARIABLE_Acc1_0_16 = next_value_of_STATE_VARIABLE_Acc1_0_16;
          STATE_VARIABLE_Acc2_0_18 = next_value_of_STATE_VARIABLE_Acc2_0_18;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up2_7_p_4(
  MR_Word TypeInfo_for_Acc1_23,
  MR_Word TypeInfo_for_Acc2_24,
  MR_Word TypeClassInfo_for_diet_element_22,
  MR_Word P_8,
  MR_Box Lo_9,
  MR_Box Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_22), Hi_10, Lo_9);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Box Var_19;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      succeeded = func_1(((MR_Box) P_8), Lo_9, STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
        Var_19 = func_2(((MR_Box) TypeClassInfo_for_diet_element_22), Lo_9);
        /* direct tailcall eliminated */
        next_value_of_Lo_9 = Var_19;
        next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
        next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
        Lo_9 = next_value_of_Lo_9;
        STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
        STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl2_6_p_3(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word TypeClassInfo_for_diet_element_27,
  MR_Word P_7,
  MR_Word T_8,
  MR_Box STATE_VARIABLE_Acc1_0_16,
  MR_Box * STATE_VARIABLE_Acc1_17,
  MR_Box STATE_VARIABLE_Acc2_0_18,
  MR_Box * STATE_VARIABLE_Acc2_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc1_17 = STATE_VARIABLE_Acc1_0_16;
      *STATE_VARIABLE_Acc2_19 = STATE_VARIABLE_Acc2_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_11;
      MR_Box Y_12;
      MR_Word L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 2)));
      MR_Word R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 3)));
      MR_Tuple Var_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc1_21_21;
      MR_Box STATE_VARIABLE_Acc2_22_22;
      MR_Box STATE_VARIABLE_Acc1_23_23;
      MR_Box STATE_VARIABLE_Acc2_24_24;
      MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 1)));
      MR_Word next_value_of_T_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_16;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_18;

      X_11 = (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0));
      Y_12 = (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1));
      succeeded = mercury__diet__foldl2_6_p_3(TypeInfo_for_A_28, TypeInfo_for_B_29, TypeClassInfo_for_diet_element_27, P_7, L_14, STATE_VARIABLE_Acc1_0_16, &STATE_VARIABLE_Acc1_21_21, STATE_VARIABLE_Acc2_0_18, &STATE_VARIABLE_Acc2_22_22);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up2_7_p_3(TypeInfo_for_A_28, TypeInfo_for_B_29, TypeClassInfo_for_diet_element_27, P_7, X_11, Y_12, STATE_VARIABLE_Acc1_21_21, &STATE_VARIABLE_Acc1_23_23, STATE_VARIABLE_Acc2_22_22, &STATE_VARIABLE_Acc2_24_24);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T_8 = R_15;
          next_value_of_STATE_VARIABLE_Acc1_0_16 = STATE_VARIABLE_Acc1_23_23;
          next_value_of_STATE_VARIABLE_Acc2_0_18 = STATE_VARIABLE_Acc2_24_24;
          T_8 = next_value_of_T_8;
          STATE_VARIABLE_Acc1_0_16 = next_value_of_STATE_VARIABLE_Acc1_0_16;
          STATE_VARIABLE_Acc2_0_18 = next_value_of_STATE_VARIABLE_Acc2_0_18;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up2_7_p_3(
  MR_Word TypeInfo_for_Acc1_23,
  MR_Word TypeInfo_for_Acc2_24,
  MR_Word TypeClassInfo_for_diet_element_22,
  MR_Word P_8,
  MR_Box Lo_9,
  MR_Box Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_22), Hi_10, Lo_9);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Box Var_19;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      succeeded = func_1(((MR_Box) P_8), Lo_9, STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
        Var_19 = func_2(((MR_Box) TypeClassInfo_for_diet_element_22), Lo_9);
        /* direct tailcall eliminated */
        next_value_of_Lo_9 = Var_19;
        next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
        next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
        Lo_9 = next_value_of_Lo_9;
        STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
        STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__diet__foldl2_6_p_2(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word TypeClassInfo_for_diet_element_27,
  MR_Word P_7,
  MR_Word T_8,
  MR_Box STATE_VARIABLE_Acc1_0_16,
  MR_Box * STATE_VARIABLE_Acc1_17,
  MR_Box STATE_VARIABLE_Acc2_0_18,
  MR_Box * STATE_VARIABLE_Acc2_19)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc1_17 = STATE_VARIABLE_Acc1_0_16;
      *STATE_VARIABLE_Acc2_19 = STATE_VARIABLE_Acc2_0_18;
    }
    else
    {
      MR_Box X_11;
      MR_Box Y_12;
      MR_Word L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 2)));
      MR_Word R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 3)));
      MR_Tuple Var_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc1_21_21;
      MR_Box STATE_VARIABLE_Acc2_22_22;
      MR_Box STATE_VARIABLE_Acc1_23_23;
      MR_Box STATE_VARIABLE_Acc2_24_24;
      MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 1)));
      MR_Word next_value_of_T_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_16;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_18;

      X_11 = (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0));
      Y_12 = (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1));
      mercury__diet__foldl2_6_p_2(TypeInfo_for_A_28, TypeInfo_for_B_29, TypeClassInfo_for_diet_element_27, P_7, L_14, STATE_VARIABLE_Acc1_0_16, &STATE_VARIABLE_Acc1_21_21, STATE_VARIABLE_Acc2_0_18, &STATE_VARIABLE_Acc2_22_22);
      mercury__diet__fold_up2_7_p_2(TypeInfo_for_A_28, TypeInfo_for_B_29, TypeClassInfo_for_diet_element_27, P_7, X_11, Y_12, STATE_VARIABLE_Acc1_21_21, &STATE_VARIABLE_Acc1_23_23, STATE_VARIABLE_Acc2_22_22, &STATE_VARIABLE_Acc2_24_24);
      /* direct tailcall eliminated */
      next_value_of_T_8 = R_15;
      next_value_of_STATE_VARIABLE_Acc1_0_16 = STATE_VARIABLE_Acc1_23_23;
      next_value_of_STATE_VARIABLE_Acc2_0_18 = STATE_VARIABLE_Acc2_24_24;
      T_8 = next_value_of_T_8;
      STATE_VARIABLE_Acc1_0_16 = next_value_of_STATE_VARIABLE_Acc1_0_16;
      STATE_VARIABLE_Acc2_0_18 = next_value_of_STATE_VARIABLE_Acc2_0_18;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up2_7_p_2(
  MR_Word TypeInfo_for_Acc1_23,
  MR_Word TypeInfo_for_Acc2_24,
  MR_Word TypeClassInfo_for_diet_element_22,
  MR_Word P_8,
  MR_Box Lo_9,
  MR_Box Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_22), Hi_10, Lo_9);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Box Var_19;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      func_1(((MR_Box) P_8), Lo_9, STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
      Var_19 = func_2(((MR_Box) TypeClassInfo_for_diet_element_22), Lo_9);
      /* direct tailcall eliminated */
      next_value_of_Lo_9 = Var_19;
      next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
      next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
      Lo_9 = next_value_of_Lo_9;
      STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
      STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
      continue;
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl2_6_p_1(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word TypeClassInfo_for_diet_element_27,
  MR_Word P_7,
  MR_Word T_8,
  MR_Box STATE_VARIABLE_Acc1_0_16,
  MR_Box * STATE_VARIABLE_Acc1_17,
  MR_Box STATE_VARIABLE_Acc2_0_18,
  MR_Box * STATE_VARIABLE_Acc2_19)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc1_17 = STATE_VARIABLE_Acc1_0_16;
      *STATE_VARIABLE_Acc2_19 = STATE_VARIABLE_Acc2_0_18;
    }
    else
    {
      MR_Box X_11;
      MR_Box Y_12;
      MR_Word L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 2)));
      MR_Word R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 3)));
      MR_Tuple Var_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc1_21_21;
      MR_Box STATE_VARIABLE_Acc2_22_22;
      MR_Box STATE_VARIABLE_Acc1_23_23;
      MR_Box STATE_VARIABLE_Acc2_24_24;
      MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 1)));
      MR_Word next_value_of_T_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_16;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_18;

      X_11 = (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0));
      Y_12 = (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1));
      mercury__diet__foldl2_6_p_1(TypeInfo_for_A_28, TypeInfo_for_B_29, TypeClassInfo_for_diet_element_27, P_7, L_14, STATE_VARIABLE_Acc1_0_16, &STATE_VARIABLE_Acc1_21_21, STATE_VARIABLE_Acc2_0_18, &STATE_VARIABLE_Acc2_22_22);
      mercury__diet__fold_up2_7_p_1(TypeInfo_for_A_28, TypeInfo_for_B_29, TypeClassInfo_for_diet_element_27, P_7, X_11, Y_12, STATE_VARIABLE_Acc1_21_21, &STATE_VARIABLE_Acc1_23_23, STATE_VARIABLE_Acc2_22_22, &STATE_VARIABLE_Acc2_24_24);
      /* direct tailcall eliminated */
      next_value_of_T_8 = R_15;
      next_value_of_STATE_VARIABLE_Acc1_0_16 = STATE_VARIABLE_Acc1_23_23;
      next_value_of_STATE_VARIABLE_Acc2_0_18 = STATE_VARIABLE_Acc2_24_24;
      T_8 = next_value_of_T_8;
      STATE_VARIABLE_Acc1_0_16 = next_value_of_STATE_VARIABLE_Acc1_0_16;
      STATE_VARIABLE_Acc2_0_18 = next_value_of_STATE_VARIABLE_Acc2_0_18;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up2_7_p_1(
  MR_Word TypeInfo_for_Acc1_23,
  MR_Word TypeInfo_for_Acc2_24,
  MR_Word TypeClassInfo_for_diet_element_22,
  MR_Word P_8,
  MR_Box Lo_9,
  MR_Box Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_22), Hi_10, Lo_9);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Box Var_19;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      func_1(((MR_Box) P_8), Lo_9, STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
      Var_19 = func_2(((MR_Box) TypeClassInfo_for_diet_element_22), Lo_9);
      /* direct tailcall eliminated */
      next_value_of_Lo_9 = Var_19;
      next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
      next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
      Lo_9 = next_value_of_Lo_9;
      STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
      STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
      continue;
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl2_6_p_0(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word TypeClassInfo_for_diet_element_27,
  MR_Word P_7,
  MR_Word T_8,
  MR_Box STATE_VARIABLE_Acc1_0_16,
  MR_Box * STATE_VARIABLE_Acc1_17,
  MR_Box STATE_VARIABLE_Acc2_0_18,
  MR_Box * STATE_VARIABLE_Acc2_19)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc1_17 = STATE_VARIABLE_Acc1_0_16;
      *STATE_VARIABLE_Acc2_19 = STATE_VARIABLE_Acc2_0_18;
    }
    else
    {
      MR_Box X_11;
      MR_Box Y_12;
      MR_Word L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 2)));
      MR_Word R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 3)));
      MR_Tuple Var_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc1_21_21;
      MR_Box STATE_VARIABLE_Acc2_22_22;
      MR_Box STATE_VARIABLE_Acc1_23_23;
      MR_Box STATE_VARIABLE_Acc2_24_24;
      MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 1)));
      MR_Word next_value_of_T_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_16;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_18;

      X_11 = (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0));
      Y_12 = (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1));
      mercury__diet__foldl2_6_p_0(TypeInfo_for_A_28, TypeInfo_for_B_29, TypeClassInfo_for_diet_element_27, P_7, L_14, STATE_VARIABLE_Acc1_0_16, &STATE_VARIABLE_Acc1_21_21, STATE_VARIABLE_Acc2_0_18, &STATE_VARIABLE_Acc2_22_22);
      mercury__diet__fold_up2_7_p_0(TypeInfo_for_A_28, TypeInfo_for_B_29, TypeClassInfo_for_diet_element_27, P_7, X_11, Y_12, STATE_VARIABLE_Acc1_21_21, &STATE_VARIABLE_Acc1_23_23, STATE_VARIABLE_Acc2_22_22, &STATE_VARIABLE_Acc2_24_24);
      /* direct tailcall eliminated */
      next_value_of_T_8 = R_15;
      next_value_of_STATE_VARIABLE_Acc1_0_16 = STATE_VARIABLE_Acc1_23_23;
      next_value_of_STATE_VARIABLE_Acc2_0_18 = STATE_VARIABLE_Acc2_24_24;
      T_8 = next_value_of_T_8;
      STATE_VARIABLE_Acc1_0_16 = next_value_of_STATE_VARIABLE_Acc1_0_16;
      STATE_VARIABLE_Acc2_0_18 = next_value_of_STATE_VARIABLE_Acc2_0_18;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up2_7_p_0(
  MR_Word TypeInfo_for_Acc1_23,
  MR_Word TypeInfo_for_Acc2_24,
  MR_Word TypeClassInfo_for_diet_element_22,
  MR_Word P_8,
  MR_Box Lo_9,
  MR_Box Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_22), Hi_10, Lo_9);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Box Var_19;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      func_1(((MR_Box) P_8), Lo_9, STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
      Var_19 = func_2(((MR_Box) TypeClassInfo_for_diet_element_22), Lo_9);
      /* direct tailcall eliminated */
      next_value_of_Lo_9 = Var_19;
      next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
      next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
      Lo_9 = next_value_of_Lo_9;
      STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
      STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
      continue;
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl_4_p_5(
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      succeeded = mercury__diet__foldl_4_p_5(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, L_11, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      if (succeeded)
      {
        succeeded = mercury__diet__foldl_2_5_p_5(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T_6 = R_12;
          next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
          T_6 = next_value_of_T_6;
          STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl_2_5_p_5(
  MR_Word TypeInfo_for_Acc_16,
  MR_Word TypeClassInfo_for_diet_element_15,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_12_12;
      MR_Box Var_13;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      succeeded = func_1(((MR_Box) P_6), Lo_7, STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_12_12);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
        Var_13 = func_2(((MR_Box) TypeClassInfo_for_diet_element_15), Lo_7);
        /* direct tailcall eliminated */
        next_value_of_Lo_7 = Var_13;
        next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_12_12;
        Lo_7 = next_value_of_Lo_7;
        STATE_VARIABLE_Acc_0_10 = next_value_of_STATE_VARIABLE_Acc_0_10;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc_11 = STATE_VARIABLE_Acc_0_10;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl_4_p_4(
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      succeeded = mercury__diet__foldl_4_p_4(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, L_11, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      if (succeeded)
      {
        succeeded = mercury__diet__foldl_2_5_p_4(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T_6 = R_12;
          next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
          T_6 = next_value_of_T_6;
          STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl_2_5_p_4(
  MR_Word TypeInfo_for_Acc_16,
  MR_Word TypeClassInfo_for_diet_element_15,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_12_12;
      MR_Box Var_13;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      succeeded = func_1(((MR_Box) P_6), Lo_7, STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_12_12);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
        Var_13 = func_2(((MR_Box) TypeClassInfo_for_diet_element_15), Lo_7);
        /* direct tailcall eliminated */
        next_value_of_Lo_7 = Var_13;
        next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_12_12;
        Lo_7 = next_value_of_Lo_7;
        STATE_VARIABLE_Acc_0_10 = next_value_of_STATE_VARIABLE_Acc_0_10;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc_11 = STATE_VARIABLE_Acc_0_10;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl_4_p_3(
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      succeeded = mercury__diet__foldl_4_p_3(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, L_11, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      if (succeeded)
      {
        succeeded = mercury__diet__foldl_2_5_p_3(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T_6 = R_12;
          next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
          T_6 = next_value_of_T_6;
          STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl_2_5_p_3(
  MR_Word TypeInfo_for_Acc_16,
  MR_Word TypeClassInfo_for_diet_element_15,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_12_12;
      MR_Box Var_13;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      succeeded = func_1(((MR_Box) P_6), Lo_7, STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_12_12);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
        Var_13 = func_2(((MR_Box) TypeClassInfo_for_diet_element_15), Lo_7);
        /* direct tailcall eliminated */
        next_value_of_Lo_7 = Var_13;
        next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_12_12;
        Lo_7 = next_value_of_Lo_7;
        STATE_VARIABLE_Acc_0_10 = next_value_of_STATE_VARIABLE_Acc_0_10;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc_11 = STATE_VARIABLE_Acc_0_10;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__diet__foldl_4_p_2(
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      mercury__diet__foldl_4_p_2(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, L_11, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      mercury__diet__foldl_2_5_p_2(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      next_value_of_T_6 = R_12;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl_2_5_p_2(
  MR_Word TypeInfo_for_Acc_16,
  MR_Word TypeClassInfo_for_diet_element_15,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_12_12;
      MR_Box Var_13;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      func_1(((MR_Box) P_6), Lo_7, STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_12_12);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
      Var_13 = func_2(((MR_Box) TypeClassInfo_for_diet_element_15), Lo_7);
      /* direct tailcall eliminated */
      next_value_of_Lo_7 = Var_13;
      next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_12_12;
      Lo_7 = next_value_of_Lo_7;
      STATE_VARIABLE_Acc_0_10 = next_value_of_STATE_VARIABLE_Acc_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_11 = STATE_VARIABLE_Acc_0_10;
    break;
  }
}

void MR_CALL 
mercury__diet__foldl_4_p_1(
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      mercury__diet__foldl_4_p_1(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, L_11, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      mercury__diet__foldl_2_5_p_1(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      next_value_of_T_6 = R_12;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl_2_5_p_1(
  MR_Word TypeInfo_for_Acc_16,
  MR_Word TypeClassInfo_for_diet_element_15,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_12_12;
      MR_Box Var_13;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      func_1(((MR_Box) P_6), Lo_7, STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_12_12);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
      Var_13 = func_2(((MR_Box) TypeClassInfo_for_diet_element_15), Lo_7);
      /* direct tailcall eliminated */
      next_value_of_Lo_7 = Var_13;
      next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_12_12;
      Lo_7 = next_value_of_Lo_7;
      STATE_VARIABLE_Acc_0_10 = next_value_of_STATE_VARIABLE_Acc_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_11 = STATE_VARIABLE_Acc_0_10;
    break;
  }
}

void MR_CALL 
mercury__diet__foldl_4_p_0(
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      mercury__diet__foldl_4_p_0(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, L_11, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      mercury__diet__foldl_2_5_p_0(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      next_value_of_T_6 = R_12;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl_2_5_p_0(
  MR_Word TypeInfo_for_Acc_16,
  MR_Word TypeClassInfo_for_diet_element_15,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_12_12;
      MR_Box Var_13;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      func_1(((MR_Box) P_6), Lo_7, STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_12_12);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
      Var_13 = func_2(((MR_Box) TypeClassInfo_for_diet_element_15), Lo_7);
      /* direct tailcall eliminated */
      next_value_of_Lo_7 = Var_13;
      next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_12_12;
      Lo_7 = next_value_of_Lo_7;
      STATE_VARIABLE_Acc_0_10 = next_value_of_STATE_VARIABLE_Acc_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_11 = STATE_VARIABLE_Acc_0_10;
    break;
  }
}

MR_Box MR_CALL 
mercury__diet__foldl_3_f_0(
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word F_5,
  MR_Word Set_6,
  MR_Box Acc0_7)
{
  {
    MR_Box Acc_8;

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(F_5, TypeClassInfo_for_diet_element_19, Set_6, Acc0_7, &Acc_8);
    return Acc_8;
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(
  MR_Word Var_23,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(Var_23, TypeClassInfo_for_diet_element_19, L_11, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(Var_23, TypeClassInfo_for_diet_element_19, X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      next_value_of_T_6 = R_12;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
  MR_Word Var_19,
  MR_Word TypeClassInfo_for_diet_element_15,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_15), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_12_12;
      MR_Box Var_13;
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      STATE_VARIABLE_Acc_12_12 = func_1(((MR_Box) Var_19), Lo_7, STATE_VARIABLE_Acc_0_10);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
      Var_13 = func_2(((MR_Box) TypeClassInfo_for_diet_element_15), Lo_7);
      /* direct tailcall eliminated */
      next_value_of_Lo_7 = Var_13;
      next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_12_12;
      Lo_7 = next_value_of_Lo_7;
      STATE_VARIABLE_Acc_0_10 = next_value_of_STATE_VARIABLE_Acc_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_11 = STATE_VARIABLE_Acc_0_10;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldr_intervals_4_p_2(
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      succeeded = mercury__diet__foldr_intervals_4_p_2(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      if (succeeded)
      {
        func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1)));
        succeeded = func_0(((MR_Box) P_5), X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T_6 = L_11;
          next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
          T_6 = next_value_of_T_6;
          STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__diet__foldr_intervals_4_p_1(
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      mercury__diet__foldr_intervals_4_p_1(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1)));
      func_0(((MR_Box) P_5), X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      next_value_of_T_6 = L_11;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldr_intervals_4_p_0(
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      mercury__diet__foldr_intervals_4_p_0(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1)));
      func_0(((MR_Box) P_5), X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      next_value_of_T_6 = L_11;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl_intervals_4_p_2(
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      succeeded = mercury__diet__foldl_intervals_4_p_2(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, L_11, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      if (succeeded)
      {
        func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1)));
        succeeded = func_0(((MR_Box) P_5), X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T_6 = R_12;
          next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
          T_6 = next_value_of_T_6;
          STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__diet__foldl_intervals_4_p_1(
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      mercury__diet__foldl_intervals_4_p_1(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, L_11, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1)));
      func_0(((MR_Box) P_5), X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      next_value_of_T_6 = R_12;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl_intervals_4_p_0(
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1)));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      mercury__diet__foldl_intervals_4_p_0(TypeInfo_for_A_20, TypeClassInfo_for_diet_element_19, P_5, L_11, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_16_16);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1)));
      func_0(((MR_Box) P_5), X_8, Y_9, STATE_VARIABLE_Acc_16_16, &STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      next_value_of_T_6 = R_12;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_17_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

MR_Integer MR_CALL 
mercury__diet__count_1_f_0(
  MR_Word TypeClassInfo_for_enum_6,
  MR_Word T_3)
{
  {
    MR_Integer Count_4;

    mercury__diet__count_3_p_0(TypeClassInfo_for_enum_6, T_3, (MR_Integer) 0, &Count_4);
    return Count_4;
  }
}

void MR_CALL 
mercury__diet__count_3_p_0(
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word T_4,
  MR_Integer Acc0_5,
  MR_Integer * Acc_6)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *Acc_6 = Acc0_5;
    else
    {
      MR_Box X_7;
      MR_Box Y_8;
      MR_Word L_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_4, (MR_Integer) 2)));
      MR_Word R_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_4, (MR_Integer) 3)));
      MR_Integer Acc1_12;
      MR_Integer Acc2_13;
      MR_Tuple Var_14 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_4, (MR_Integer) 0)));
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Integer Var_17;
      MR_Integer Var_18;
      MR_Integer Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_4, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Box conv1_Var_17;
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box conv3_Var_18;
      MR_Word next_value_of_T_4;
      MR_Integer next_value_of_Acc0_5;

      X_7 = (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0));
      Y_8 = (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1));
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_20, (MR_Integer) 0)), (MR_Integer) 5)));
      conv1_Var_17 = func_0(((MR_Box) TypeClassInfo_for_enum_20), Y_8);
      Var_17 = ((MR_Integer) conv1_Var_17);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_20, (MR_Integer) 0)), (MR_Integer) 5)));
      conv3_Var_18 = func_2(((MR_Box) TypeClassInfo_for_enum_20), X_7);
      Var_18 = ((MR_Integer) conv3_Var_18);
      Var_16 = (Var_17 - Var_18);
      Var_15 = (Acc0_5 + Var_16);
      Acc1_12 = (Var_15 + (MR_Integer) 1);
      mercury__diet__count_3_p_0(TypeClassInfo_for_enum_20, L_10, Acc1_12, &Acc2_13);
      /* direct tailcall eliminated */
      next_value_of_T_4 = R_11;
      next_value_of_Acc0_5 = Acc2_13;
      T_4 = next_value_of_T_4;
      Acc0_5 = next_value_of_Acc0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__divide_by_set_4_p_0(
  MR_Word TypeClassInfo_for_diet_element_9,
  MR_Word DivideBySet_5,
  MR_Word Set_6,
  MR_Word * InPart_7,
  MR_Word * OutPart_8)
{
  {
    *InPart_7 = mercury__diet__inter_2_f_0(TypeClassInfo_for_diet_element_9, Set_6, DivideBySet_5);
    if ((Set_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *OutPart_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    if ((DivideBySet_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *OutPart_8 = Set_6;
    else
    {
      MR_Tuple Head_27;
      MR_Word Stream_28;
      MR_Word Var_31;
      MR_Word _RemHead_29;
      MR_Word _RemStream_30;

      mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_9, DivideBySet_5, &Head_27, &Stream_28);
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Head_27));
      }
      mercury__diet__diff_6_p_0(TypeClassInfo_for_diet_element_9, Set_6, Var_31, Stream_28, OutPart_8, &_RemHead_29, &_RemStream_30);
    }
  }
}

void MR_CALL 
mercury__diet__divide_4_p_0(
  MR_Word TypeClassInfo_for_diet_element_12,
  MR_Word Pred_5,
  MR_Word Set_6,
  MR_Word * TrueSet_7,
  MR_Word * FalseSet_8)
{
  {
    MR_Word Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(TypeClassInfo_for_diet_element_12, Pred_5, TypeClassInfo_for_diet_element_12, Set_6, Var_10, TrueSet_7, Var_11, FalseSet_8);
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word TypeClassInfo_for_diet_element_27,
  MR_Word T_8,
  MR_Word STATE_VARIABLE_Acc1_0_16,
  MR_Word * STATE_VARIABLE_Acc1_17,
  MR_Word STATE_VARIABLE_Acc2_0_18,
  MR_Word * STATE_VARIABLE_Acc2_19)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Acc1_17 = STATE_VARIABLE_Acc1_0_16;
      *STATE_VARIABLE_Acc2_19 = STATE_VARIABLE_Acc2_0_18;
    }
    else
    {
      MR_Box X_11;
      MR_Box Y_12;
      MR_Word L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 2)));
      MR_Word R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 3)));
      MR_Tuple Var_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 0)));
      MR_Word STATE_VARIABLE_Acc1_21_21;
      MR_Word STATE_VARIABLE_Acc2_22_22;
      MR_Word STATE_VARIABLE_Acc1_23_23;
      MR_Word STATE_VARIABLE_Acc2_24_24;
      MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 1)));
      MR_Word next_value_of_T_8;
      MR_Word next_value_of_STATE_VARIABLE_Acc1_0_16;
      MR_Word next_value_of_STATE_VARIABLE_Acc2_0_18;

      X_11 = (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0));
      Y_12 = (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1));
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(Var_34, Var_35, TypeClassInfo_for_diet_element_27, L_14, STATE_VARIABLE_Acc1_0_16, &STATE_VARIABLE_Acc1_21_21, STATE_VARIABLE_Acc2_0_18, &STATE_VARIABLE_Acc2_22_22);
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_117_112_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_7_p_0(Var_34, Var_35, TypeClassInfo_for_diet_element_27, X_11, Y_12, STATE_VARIABLE_Acc1_21_21, &STATE_VARIABLE_Acc1_23_23, STATE_VARIABLE_Acc2_22_22, &STATE_VARIABLE_Acc2_24_24);
      /* direct tailcall eliminated */
      next_value_of_T_8 = R_15;
      next_value_of_STATE_VARIABLE_Acc1_0_16 = STATE_VARIABLE_Acc1_23_23;
      next_value_of_STATE_VARIABLE_Acc2_0_18 = STATE_VARIABLE_Acc2_24_24;
      T_8 = next_value_of_T_8;
      STATE_VARIABLE_Acc1_0_16 = next_value_of_STATE_VARIABLE_Acc1_0_16;
      STATE_VARIABLE_Acc2_0_18 = next_value_of_STATE_VARIABLE_Acc2_0_18;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_117_112_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_7_p_0(
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word TypeClassInfo_for_diet_element_22,
  MR_Box Lo_9,
  MR_Box Hi_10,
  MR_Word STATE_VARIABLE_A_0_13,
  MR_Word * STATE_VARIABLE_A_14,
  MR_Word STATE_VARIABLE_B_0_15,
  MR_Word * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_22), Hi_10, Lo_9);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_A_17_17;
      MR_Word STATE_VARIABLE_B_18_18;
      MR_Box Var_19;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1)));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_9;
      MR_Word next_value_of_STATE_VARIABLE_A_0_13;
      MR_Word next_value_of_STATE_VARIABLE_B_0_15;

      succeeded = func_1(((MR_Box) Var_30), Lo_9);
      if (succeeded)
      {
        STATE_VARIABLE_A_17_17 = mercury__diet__add_2_f_0(Var_29, Lo_9, STATE_VARIABLE_A_0_13);
        STATE_VARIABLE_B_18_18 = STATE_VARIABLE_B_0_15;
      }
      else
      {
        STATE_VARIABLE_B_18_18 = mercury__diet__add_2_f_0(Var_29, Lo_9, STATE_VARIABLE_B_0_15);
        STATE_VARIABLE_A_17_17 = STATE_VARIABLE_A_0_13;
      }
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
      Var_19 = func_2(((MR_Box) TypeClassInfo_for_diet_element_22), Lo_9);
      /* direct tailcall eliminated */
      next_value_of_Lo_9 = Var_19;
      next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
      next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
      Lo_9 = next_value_of_Lo_9;
      STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
      STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
      continue;
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__difference_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_24,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  if ((SetA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *Set_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  if ((SetB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *Set_6 = SetA_4;
  else
  {
    MR_Tuple Head_19;
    MR_Word Stream_20;
    MR_Word Var_23;
    MR_Word _RemHead_21;
    MR_Word _RemStream_22;

    mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_24, SetB_5, &Head_19, &Stream_20);
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Head_19));
    }
    mercury__diet__diff_6_p_0(TypeClassInfo_for_diet_element_24, SetA_4, Var_23, Stream_20, Set_6, &_RemHead_21, &_RemStream_22);
  }
}

MR_Word MR_CALL 
mercury__diet__difference_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_7,
  MR_Word SetA_4,
  MR_Word SetB_5)
{
  {
    MR_Word Set_6;

    if ((SetA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      Set_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    if ((SetB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      Set_6 = SetA_4;
    else
    {
      MR_Tuple Head_23;
      MR_Word Stream_24;
      MR_Word Var_27;
      MR_Word _RemHead_25;
      MR_Word _RemStream_26;

      mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_7, SetB_5, &Head_23, &Stream_24);
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Head_23));
      }
      mercury__diet__diff_6_p_0(TypeClassInfo_for_diet_element_7, SetA_4, Var_27, Stream_24, &Set_6, &_RemHead_25, &_RemStream_26);
    }
    return Set_6;
  }
}

MR_Word MR_CALL 
mercury__diet__intersect_list_1_f_0(
  MR_Word TypeClassInfo_for_diet_element_5,
  MR_Word Sets_3)
{
  {
    MR_Word Set_4;

    mercury__diet__intersect_list_2_p_0(TypeClassInfo_for_diet_element_5, Sets_3, &Set_4);
    return Set_4;
  }
}

void MR_CALL 
mercury__diet__intersect_list_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_7,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Set0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Sets_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(TypeClassInfo_for_diet_element_7, Sets_4, Set0_3, HeadVar__2_2);
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word V_15_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      V_15_13 = mercury__diet__inter_2_f_0(Var_20, V_10_9, HeadVar__3_3);
      /* direct tailcall eliminated */
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_15_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__intersect_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_6,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__diet__inter_2_f_0(TypeClassInfo_for_diet_element_6, SetA_4, SetB_5);
}

MR_Word MR_CALL 
mercury__diet__intersect_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_6,
  MR_Word SetA_4,
  MR_Word SetB_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__diet__inter_2_f_0(TypeClassInfo_for_diet_element_6, SetA_4, SetB_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__diet__inter_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word Input_4,
  MR_Word Stream0_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Result_6;
    MR_Integer Var_15;
    MR_Integer Var_16;
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;

    /* setup for tailcalls optimized into a loop */
{
#define MR_PROC_LABEL mercury__diet__inter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_18 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_20_20  = TypeInfo;
}
    if ((Stream0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      Var_15 = (MR_Integer) 0;
    else
    {
      MR_Tuple Var_22 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Stream0_5, (MR_Integer) 0)));
      MR_Word Var_24;
      MR_Word Var_25;

      Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Stream0_5, (MR_Integer) 1)));
      Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stream0_5, (MR_Integer) 2)));
      Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stream0_5, (MR_Integer) 3)));
    }
{
#define MR_PROC_LABEL mercury__diet__inter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_18 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_21_21  = TypeInfo;
}
    if ((Input_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      Var_16 = (MR_Integer) 0;
    else
    {
      MR_Tuple Var_26 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Input_4, (MR_Integer) 0)));
      MR_Word Var_28;
      MR_Word Var_29;

      Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Input_4, (MR_Integer) 1)));
      Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), Input_4, (MR_Integer) 2)));
      Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Input_4, (MR_Integer) 3)));
    }
    succeeded = (Var_15 > Var_16);
    if (succeeded)
    {
      MR_Word next_value_of_Input_4 = Stream0_5;
      MR_Word next_value_of_Stream0_5 = Input_4;

      /* direct tailcall eliminated */
      Input_4 = next_value_of_Input_4;
      Stream0_5 = next_value_of_Stream0_5;
      continue;
    }
    else
    if ((Stream0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Tuple Head_11;
      MR_Word Stream_12;
      MR_Word Var_17;
      MR_Word Var_13;
      MR_Word Var_14;

      mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_18, Stream0_5, &Head_11, &Stream_12);
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Head_11));
      }
      mercury__diet__inter_2_6_p_0(TypeClassInfo_for_diet_element_18, Input_4, Var_17, Stream_12, &Result_6, &Var_13, &Var_14);
    }
    return Result_6;
    break;
  }
}

static void MR_CALL 
mercury__diet__inter_2_6_p_0(
  MR_Word TypeClassInfo_for_diet_element_26,
  MR_Word Input_7,
  MR_Word Head0_8,
  MR_Word Stream0_9,
  MR_Word * Result_10,
  MR_Word * Head_11,
  MR_Word * Stream_12)
{
  {
    MR_bool succeeded;

    if ((Head0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Head_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Stream_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Box X_13;
      MR_Tuple Var_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Head0_8, (MR_Integer) 0)));
      MR_Box _Y_14;

      X_13 = (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0));
      _Y_14 = (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 1));
      if ((Input_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *Head_11 = Head0_8;
        *Stream_12 = Stream0_9;
      }
      else
      {
        MR_Box A_15;
        MR_Word Left0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Input_7, (MR_Integer) 2)));
        MR_Word Right0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Input_7, (MR_Integer) 3)));
        MR_Word Left1_20;
        MR_Word Head1_21;
        MR_Word Stream1_22;
        MR_Tuple Var_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Input_7, (MR_Integer) 0)));
        MR_Integer Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Input_7, (MR_Integer) 1)));
        MR_Box B_16;
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

        A_15 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0));
        B_16 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1));
        func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 5)));
        succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_26), X_13, A_15);
        if (succeeded)
          mercury__diet__inter_2_6_p_0(TypeClassInfo_for_diet_element_26, Left0_18, Head0_8, Stream0_9, &Left1_20, &Head1_21, &Stream1_22);
        else
        {
          Left1_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          Head1_21 = Head0_8;
          Stream1_22 = Stream0_9;
        }
        mercury__diet__inter_help_8_p_0(TypeClassInfo_for_diet_element_26, Var_24, Right0_19, Left1_20, Head1_21, Stream1_22, Result_10, Head_11, Stream_12);
      }
    }
  }
}

static void MR_CALL 
mercury__diet__inter_help_8_p_0(
  MR_Word TypeClassInfo_for_diet_element_49,
  MR_Tuple HeadVar__1_1,
  MR_Word Right0_11,
  MR_Word Left0_12,
  MR_Word Head0_13,
  MR_Word Stream0_14,
  MR_Word * Result_15,
  MR_Word * Head_16,
  MR_Word * Stream_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box A_9 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Box B_10 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));

    /* setup for tailcalls optimized into a loop */
    if ((Head0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Result_15 = Left0_12;
      *Head_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Stream_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Box X_18;
      MR_Box Y_19;
      MR_Tuple Var_28 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Head0_13, (MR_Integer) 0)));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

      X_18 = (MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0));
      Y_19 = (MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 1));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 5)));
      succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_49), Y_19, A_9);
      if (succeeded)
        if ((Stream0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *Result_15 = Left0_12;
          *Head_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *Stream_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        else
        {
          MR_Tuple Head1_24;
          MR_Word Stream1_25;
          MR_Word Var_30;
          MR_Word next_value_of_Head0_13;
          MR_Word next_value_of_Stream0_14;

          mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_49, Stream0_14, &Head1_24, &Stream1_25);
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Head1_24));
          }
          /* direct tailcall eliminated */
          next_value_of_Head0_13 = Var_30;
          next_value_of_Stream0_14 = Stream1_25;
          Head0_13 = next_value_of_Head0_13;
          Stream0_14 = next_value_of_Stream0_14;
          continue;
        }
      else
      {
        MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 5)));

        succeeded = func_1(((MR_Box) TypeClassInfo_for_diet_element_49), B_10, X_18);
        if (succeeded)
        {
          MR_Word Right1_26;
          MR_Integer Var_68;
          MR_Integer Var_69;
          MR_Word TypeInfo_27_76;
          MR_Word TypeInfo_28_77;

          mercury__diet__inter_2_6_p_0(TypeClassInfo_for_diet_element_49, Right0_11, Head0_13, Stream0_14, &Right1_26, Head_16, Stream_17);
{
#define MR_PROC_LABEL mercury__diet__inter_help_8_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_49 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_27_76  = TypeInfo;
}
          if ((Left0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            Var_68 = (MR_Integer) 0;
          else
          {
            MR_Tuple Var_78 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Left0_12, (MR_Integer) 0)));
            MR_Word Var_80;
            MR_Word Var_81;

            Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Left0_12, (MR_Integer) 1)));
            Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Left0_12, (MR_Integer) 2)));
            Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), Left0_12, (MR_Integer) 3)));
          }
{
#define MR_PROC_LABEL mercury__diet__inter_help_8_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_49 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_28_77  = TypeInfo;
}
          if ((Right1_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            Var_69 = (MR_Integer) 0;
          else
          {
            MR_Tuple Var_82 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Right1_26, (MR_Integer) 0)));
            MR_Word Var_84;
            MR_Word Var_85;

            Var_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Right1_26, (MR_Integer) 1)));
            Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), Right1_26, (MR_Integer) 2)));
            Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), Right1_26, (MR_Integer) 3)));
          }
          succeeded = (Var_68 > Var_69);
          if (succeeded)
            if ((Left0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.reroot\'/2", (MR_String) "L empty");
                return;
              }
            }
            else
            {
              MR_Tuple I_61;
              MR_Word L1_62;

              mercury__diet__take_max_3_p_0(TypeClassInfo_for_diet_element_49, Left0_12, &I_61, &L1_62);
              *Result_15 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_49, I_61, L1_62, Right1_26);
            }
          else
          if ((Right1_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *Result_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
          {
            MR_Word R1_67;
            MR_Tuple I_73;

            mercury__diet__take_min_3_p_0(TypeClassInfo_for_diet_element_49, Right1_26, &I_73, &R1_67);
            *Result_15 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_49, I_73, Left0_12, R1_67);
          }
        }
        else
        {
          MR_Box Var_31;
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 5)));
          MR_bool MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);

          succeeded = func_2(((MR_Box) TypeClassInfo_for_diet_element_49), Y_19, B_10);
          if (succeeded)
          {
            MR_Box MR_CALL (* func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 7)));

            Var_31 = func_3(((MR_Box) TypeClassInfo_for_diet_element_49), B_10);
          }
          else
            Var_31 = B_10;
          func_4 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 5)));
          succeeded = func_4(((MR_Box) TypeClassInfo_for_diet_element_49), Y_19, Var_31);
          succeeded = !(succeeded);
          if (succeeded)
          {
            MR_Tuple Var_32;
            MR_Box Var_33;
            MR_Box Var_34;
            MR_Word Right1_43;
            MR_bool MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box);

            mercury__diet__inter_2_6_p_0(TypeClassInfo_for_diet_element_49, Right0_11, Head0_13, Stream0_14, &Right1_43, Head_16, Stream_17);
            func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 5)));
            succeeded = func_5(((MR_Box) TypeClassInfo_for_diet_element_49), A_9, X_18);
            if (succeeded)
              Var_33 = X_18;
            else
              Var_33 = A_9;
            Var_34 = mercury__diet__min_elem_2_f_0(TypeClassInfo_for_diet_element_49, Y_19, B_10);
            {
              Var_32 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_32, 0) = Var_33;
              MR_hl_field(MR_mktag(0), Var_32, 1) = Var_34;
            }
            *Result_15 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_49, Var_32, Left0_12, Right1_43);
          }
          else
          {
            MR_Word Left1_27;
            MR_Tuple Var_35;
            MR_Box Var_36;
            MR_Tuple Var_37;
            MR_Box Var_38;
            MR_Box MR_CALL (* func_6)(MR_Box, MR_Box);
            MR_Tuple next_value_of_HeadVar__1_1;
            MR_Word next_value_of_Left0_12;

            Var_36 = mercury__diet__max_elem_2_f_0(TypeClassInfo_for_diet_element_49, X_18, A_9);
            {
              Var_35 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_35, 0) = Var_36;
              MR_hl_field(MR_mktag(0), Var_35, 1) = Y_19;
            }
            Left1_27 = mercury__diet__do_insert_2_f_0(TypeClassInfo_for_diet_element_49, Var_35, Left0_12);
            func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 6)));
            Var_38 = func_6(((MR_Box) TypeClassInfo_for_diet_element_49), Y_19);
            {
              Var_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_37, 0) = Var_38;
              MR_hl_field(MR_mktag(0), Var_37, 1) = B_10;
            }
            /* direct tailcall eliminated */
            next_value_of_HeadVar__1_1 = Var_37;
            next_value_of_Left0_12 = Left1_27;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            Left0_12 = next_value_of_Left0_12;
            continue;
          }
        }
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
mercury__diet__max_elem_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_6,
  MR_Box X_4,
  MR_Box Y_5)
{
  {
    MR_bool succeeded;
    MR_Box HeadVar__3_3;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_6, (MR_Integer) 0)), (MR_Integer) 5)));

    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_6), Y_5, X_4);
    if (succeeded)
      HeadVar__3_3 = X_4;
    else
      HeadVar__3_3 = Y_5;
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mercury__diet__min_elem_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_6,
  MR_Box X_4,
  MR_Box Y_5)
{
  {
    MR_bool succeeded;
    MR_Box HeadVar__3_3;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_6, (MR_Integer) 0)), (MR_Integer) 5)));

    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_6), X_4, Y_5);
    if (succeeded)
      HeadVar__3_3 = X_4;
    else
      HeadVar__3_3 = Y_5;
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__diet__union_list_1_f_0(
  MR_Word TypeClassInfo_for_diet_element_5,
  MR_Word Sets_3)
{
  {
    MR_Word Set_4;

    mercury__diet__union_list_2_p_0(TypeClassInfo_for_diet_element_5, Sets_3, &Set_4);
    return Set_4;
  }
}

void MR_CALL 
mercury__diet__union_list_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_8,
  MR_Word Sets_3,
  MR_Word * Set_4)
{
  if ((Sets_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *Set_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word SetA_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), Sets_3, (MR_Integer) 0)));
    MR_Word SetBs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Sets_3, (MR_Integer) 1)));

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(TypeClassInfo_for_diet_element_8, SetBs_6, SetA_5, Set_4);
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word V_15_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      mercury__diet__union_3_p_0(Var_20, V_10_9, HeadVar__3_3, &V_15_13);
      /* direct tailcall eliminated */
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_15_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__diet__union_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_7,
  MR_Word DietA_4,
  MR_Word DietB_5)
{
  {
    MR_Word DietAB_6;

    mercury__diet__union_3_p_0(TypeClassInfo_for_diet_element_7, DietA_4, DietB_5, &DietAB_6);
    return DietAB_6;
  }
}

void MR_CALL 
mercury__diet__union_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_16,
  MR_Word Input_4,
  MR_Word Stream0_5,
  MR_Word * Result_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_13;
    MR_Integer Var_14;
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;

    /* setup for tailcalls optimized into a loop */
{
#define MR_PROC_LABEL mercury__diet__union_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_16 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_18_18  = TypeInfo;
}
    if ((Stream0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      Var_13 = (MR_Integer) 0;
    else
    {
      MR_Tuple Var_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Stream0_5, (MR_Integer) 0)));
      MR_Word Var_22;
      MR_Word Var_23;

      Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Stream0_5, (MR_Integer) 1)));
      Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stream0_5, (MR_Integer) 2)));
      Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stream0_5, (MR_Integer) 3)));
    }
{
#define MR_PROC_LABEL mercury__diet__union_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_16 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_19_19  = TypeInfo;
}
    if ((Input_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      Var_14 = (MR_Integer) 0;
    else
    {
      MR_Tuple Var_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Input_4, (MR_Integer) 0)));
      MR_Word Var_26;
      MR_Word Var_27;

      Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Input_4, (MR_Integer) 1)));
      Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Input_4, (MR_Integer) 2)));
      Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Input_4, (MR_Integer) 3)));
    }
    succeeded = (Var_13 > Var_14);
    if (succeeded)
    {
      MR_Word next_value_of_Input_4 = Stream0_5;
      MR_Word next_value_of_Stream0_5 = Input_4;

      /* direct tailcall eliminated */
      Input_4 = next_value_of_Input_4;
      Stream0_5 = next_value_of_Stream0_5;
      continue;
    }
    else
    {
      MR_Word Head1_7;
      MR_Word Stream1_8;
      MR_Word Left2_9;
      MR_Word Head2_10;
      MR_Word Stream2_11;
      MR_Word Var_15;

      if ((Stream0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        Head1_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        Stream1_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        MR_Tuple X_40;

        mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_16, Stream0_5, &X_40, &Stream1_8);
        {
          Head1_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Head1_7, 0) = ((MR_Box) (X_40));
        }
      }
      Var_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      mercury__diet__union_2_7_p_0(TypeClassInfo_for_diet_element_16, Input_4, Var_15, Head1_7, Stream1_8, &Left2_9, &Head2_10, &Stream2_11);
      if ((Head2_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *Result_6 = Left2_9;
      else
      {
        MR_Tuple I_12 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Head2_10, (MR_Integer) 0)));

        *Result_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_16, I_12, Left2_9, Stream2_11);
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__diet__union_2_7_p_0(
  MR_Word TypeClassInfo_for_diet_element_30,
  MR_Word Input_8,
  MR_Word Limit_9,
  MR_Word Head0_10,
  MR_Word Stream0_11,
  MR_Word * Left_12,
  MR_Word * Head_13,
  MR_Word * Stream_14)
{
  {
    MR_bool succeeded;

    if ((Head0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Left_12 = Input_8;
      *Head_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Stream_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Box X_15;
      MR_Tuple Var_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Head0_10, (MR_Integer) 0)));
      MR_Box _Y_16;

      X_15 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0));
      _Y_16 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1));
      if ((Input_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *Left_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *Head_13 = Head0_10;
        *Stream_14 = Stream0_11;
      }
      else
      {
        MR_Box A_17;
        MR_Word Left0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Input_8, (MR_Integer) 2)));
        MR_Word Right0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Input_8, (MR_Integer) 3)));
        MR_Word Left1_22;
        MR_Word Head1_23;
        MR_Word Stream1_24;
        MR_Tuple Var_26 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Input_8, (MR_Integer) 0)));
        MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Input_8, (MR_Integer) 1)));
        MR_Box B_18;
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

        A_17 = (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0));
        B_18 = (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 1));
        func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 5)));
        succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_30), X_15, A_17);
        if (succeeded)
        {
          MR_Word Var_27;
          MR_Box Var_28;
          MR_Box MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 7)));

          Var_28 = func_1(((MR_Box) TypeClassInfo_for_diet_element_30), A_17);
          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = Var_28;
          }
          mercury__diet__union_2_7_p_0(TypeClassInfo_for_diet_element_30, Left0_20, Var_27, Head0_10, Stream0_11, &Left1_22, &Head1_23, &Stream1_24);
        }
        else
        {
          Left1_22 = Left0_20;
          Head1_23 = Head0_10;
          Stream1_24 = Stream0_11;
        }
        mercury__diet__union_helper_9_p_0(TypeClassInfo_for_diet_element_30, Left1_22, Var_26, Right0_21, Limit_9, Head1_23, Stream1_24, Left_12, Head_13, Stream_14);
      }
    }
  }
}

static void MR_CALL 
mercury__diet__union_helper_9_p_0(
  MR_Word TypeClassInfo_for_diet_element_56,
  MR_Word Left0_10,
  MR_Tuple HeadVar__2_2,
  MR_Word Right0_13,
  MR_Word Limit_14,
  MR_Word Head0_15,
  MR_Word Stream0_16,
  MR_Word * Left_17,
  MR_Word * Head_18,
  MR_Word * Stream_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box A_11 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
    MR_Box B_12 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));

    /* setup for tailcalls optimized into a loop */
    if ((Head0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Left_17 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_56, HeadVar__2_2, Left0_10, Right0_13);
      *Head_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Stream_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Box X_20;
      MR_Box Y_21;
      MR_Tuple Var_27 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Head0_15, (MR_Integer) 0)));
      MR_Box Var_28;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
      MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);

      X_20 = (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0));
      Y_21 = (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 1));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
      succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_56), Y_21, A_11);
      if (succeeded)
      {
        func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 7)));
        Var_28 = func_1(((MR_Box) TypeClassInfo_for_diet_element_56), A_11);
        func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
        succeeded = func_2(((MR_Box) TypeClassInfo_for_diet_element_56), Y_21, Var_28);
      }
      if (succeeded)
      {
        MR_Word Left1_22;
        MR_Word Head1_23;
        MR_Word Stream1_24;
        MR_Word next_value_of_Left0_10;
        MR_Word next_value_of_Head0_15;
        MR_Word next_value_of_Stream0_16;

        Left1_22 = mercury__diet__do_insert_2_f_0(TypeClassInfo_for_diet_element_56, Var_27, Left0_10);
        if ((Stream0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          Head1_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          Stream1_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        else
        {
          MR_Tuple X_68;

          mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_56, Stream0_16, &X_68, &Stream1_24);
          {
            Head1_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Head1_23, 0) = ((MR_Box) (X_68));
          }
        }
        /* direct tailcall eliminated */
        next_value_of_Left0_10 = Left1_22;
        next_value_of_Head0_15 = Head1_23;
        next_value_of_Stream0_16 = Stream1_24;
        Left0_10 = next_value_of_Left0_10;
        Head0_15 = next_value_of_Head0_15;
        Stream0_16 = next_value_of_Stream0_16;
        continue;
      }
      else
      {
        MR_Box Var_31;
        MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
        MR_bool MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box);

        succeeded = func_3(((MR_Box) TypeClassInfo_for_diet_element_56), B_12, X_20);
        if (succeeded)
        {
          func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 6)));
          Var_31 = func_4(((MR_Box) TypeClassInfo_for_diet_element_56), B_12);
          func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
          succeeded = func_5(((MR_Box) TypeClassInfo_for_diet_element_56), Var_31, X_20);
        }
        if (succeeded)
        {
          MR_Word Right1_25;

          mercury__diet__union_2_7_p_0(TypeClassInfo_for_diet_element_56, Right0_13, Limit_14, Head0_15, Stream0_16, &Right1_25, Head_18, Stream_19);
          *Left_17 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_56, HeadVar__2_2, Left0_10, Right1_25);
        }
        else
        {
          MR_bool MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));

          succeeded = func_6(((MR_Box) TypeClassInfo_for_diet_element_56), B_12, Y_21);
          succeeded = !(succeeded);
          if (succeeded)
          {
            MR_Tuple Var_33;
            MR_Box Var_34;
            MR_Word Head1_43;
            MR_Word Stream1_44;
            MR_bool MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box);
            MR_Tuple next_value_of_HeadVar__2_2;
            MR_Word next_value_of_Head0_15;
            MR_Word next_value_of_Stream0_16;

            if ((Stream0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              Head1_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              Stream1_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            else
            {
              MR_Tuple X_82;

              mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_56, Stream0_16, &X_82, &Stream1_44);
              {
                Head1_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Head1_43, 0) = ((MR_Box) (X_82));
              }
            }
            func_7 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
            succeeded = func_7(((MR_Box) TypeClassInfo_for_diet_element_56), A_11, X_20);
            if (succeeded)
              Var_34 = A_11;
            else
              Var_34 = X_20;
            {
              Var_33 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_33, 0) = Var_34;
              MR_hl_field(MR_mktag(0), Var_33, 1) = B_12;
            }
            /* direct tailcall eliminated */
            next_value_of_HeadVar__2_2 = Var_33;
            next_value_of_Head0_15 = Head1_43;
            next_value_of_Stream0_16 = Stream1_44;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Head0_15 = next_value_of_Head0_15;
            Stream0_16 = next_value_of_Stream0_16;
            continue;
          }
          else
          {
            MR_Box LimitValue_26;
            MR_bool MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box);

            succeeded = ((MR_tag((MR_Word) Limit_14)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              LimitValue_26 = (MR_hl_field(MR_mktag(1), Limit_14, (MR_Integer) 0));
              func_8 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
              succeeded = func_8(((MR_Box) TypeClassInfo_for_diet_element_56), Y_21, LimitValue_26);
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              MR_Tuple Var_35;
              MR_Box Var_36;
              MR_bool MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box);

              *Left_17 = Left0_10;
              func_9 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
              succeeded = func_9(((MR_Box) TypeClassInfo_for_diet_element_56), A_11, X_20);
              if (succeeded)
                Var_36 = A_11;
              else
                Var_36 = X_20;
              {
                Var_35 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_35, 0) = Var_36;
                MR_hl_field(MR_mktag(0), Var_35, 1) = Y_21;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *Head_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_35));
              }
              *Stream_19 = Stream0_16;
            }
            else
            {
              MR_Word Var_37;
              MR_Tuple Var_38;
              MR_Box Var_39;
              MR_Word Right1_47;
              MR_bool MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));

              succeeded = func_10(((MR_Box) TypeClassInfo_for_diet_element_56), A_11, X_20);
              if (succeeded)
                Var_39 = A_11;
              else
                Var_39 = X_20;
              {
                Var_38 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_38, 0) = Var_39;
                MR_hl_field(MR_mktag(0), Var_38, 1) = Y_21;
              }
              {
                Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
              }
              mercury__diet__union_2_7_p_0(TypeClassInfo_for_diet_element_56, Right0_13, Limit_14, Var_37, Stream0_16, &Right1_47, Head_18, Stream_19);
              *Left_17 = mercury__diet__reroot_2_f_0(TypeClassInfo_for_diet_element_56, Left0_10, Right1_47);
            }
          }
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__diet__split_5_p_0(
  MR_Word TypeClassInfo_for_diet_element_25,
  MR_Box X_6,
  MR_Word Set_7,
  MR_Word * Lesser_8,
  MR_Word * IsPresent_9,
  MR_Word * Greater_10)
{
  {
    MR_bool succeeded;

    if ((Set_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *IsPresent_9 = (MR_Integer) 0;
      *Lesser_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Greater_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Box A_11;
      MR_Box B_12;
      MR_Word L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Set_7, (MR_Integer) 2)));
      MR_Word R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Set_7, (MR_Integer) 3)));
      MR_Tuple Var_18 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Set_7, (MR_Integer) 0)));
      MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Set_7, (MR_Integer) 1)));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

      A_11 = (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0));
      B_12 = (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_25, (MR_Integer) 0)), (MR_Integer) 5)));
      succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_25), X_6, A_11);
      if (succeeded)
      {
        MR_Word RL_16;

        mercury__diet__split_5_p_0(TypeClassInfo_for_diet_element_25, X_6, L_14, Lesser_8, IsPresent_9, &RL_16);
        *Greater_10 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_25, Var_18, RL_16, R_15);
      }
      else
      {
        MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_25, (MR_Integer) 0)), (MR_Integer) 5)));

        succeeded = func_1(((MR_Box) TypeClassInfo_for_diet_element_25), B_12, X_6);
        if (succeeded)
        {
          MR_Word LR_17;

          mercury__diet__split_5_p_0(TypeClassInfo_for_diet_element_25, X_6, R_15, &LR_17, IsPresent_9, Greater_10);
          *Lesser_8 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_25, Var_18, L_14, LR_17);
        }
        else
        {
          MR_Word TypeInfo_27_27;
          MR_Word TypeInfo_29_29;

          *IsPresent_9 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__diet__split_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_25 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_27_27  = TypeInfo;
}
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, X_6, A_11);
          if (succeeded)
            *Lesser_8 = L_14;
          else
          {
            MR_Tuple Var_21;
            MR_Box Var_22;
            MR_Box MR_CALL (* func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_25, (MR_Integer) 0)), (MR_Integer) 7)));

            Var_22 = func_2(((MR_Box) TypeClassInfo_for_diet_element_25), X_6);
            {
              Var_21 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_21, 0) = A_11;
              MR_hl_field(MR_mktag(0), Var_21, 1) = Var_22;
            }
            *Lesser_8 = mercury__diet__do_insert_2_f_0(TypeClassInfo_for_diet_element_25, Var_21, L_14);
          }
{
#define MR_PROC_LABEL mercury__diet__split_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_25 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_29_29  = TypeInfo;
}
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, X_6, B_12);
          if (succeeded)
            *Greater_10 = R_15;
          else
          {
            MR_Tuple Var_23;
            MR_Box Var_24;
            MR_Box MR_CALL (* func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_25, (MR_Integer) 0)), (MR_Integer) 6)));

            Var_24 = func_3(((MR_Box) TypeClassInfo_for_diet_element_25), X_6);
            {
              Var_23 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_23, 0) = Var_24;
              MR_hl_field(MR_mktag(0), Var_23, 1) = B_12;
            }
            *Greater_10 = mercury__diet__do_insert_2_f_0(TypeClassInfo_for_diet_element_25, Var_23, R_15);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__diet__remove_least_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_16,
  MR_Box * X_4,
  MR_Word Set0_5,
  MR_Word * Set_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Set0_5)) == (MR_mktag((MR_Integer) 1)));
    MR_Box Y_11;
    MR_Word Stream_12;
    MR_Tuple Var_13;
    MR_Tuple Var_19;
    MR_Integer Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word TypeInfo_18_18;
    MR_Integer TypeInfoIndex_17;

    if (succeeded)
    {
      Var_19 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Set0_5, (MR_Integer) 0)));
      Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Set0_5, (MR_Integer) 1)));
      Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Set0_5, (MR_Integer) 2)));
      Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Set0_5, (MR_Integer) 3)));
      mercury__diet__take_min_3_p_0(TypeClassInfo_for_diet_element_16, Set0_5, &Var_13, &Stream_12);
      *X_4 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0));
      Y_11 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1));
      TypeInfoIndex_17 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__diet__remove_least_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_16 ;
	Index =  TypeInfoIndex_17 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_18_18  = TypeInfo;
}
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, *X_4, Y_11);
      if (succeeded)
        *Set_6 = Stream_12;
      else
      {
        MR_Tuple Var_14;
        MR_Box Var_15;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_16, (MR_Integer) 0)), (MR_Integer) 6)));

        Var_15 = func_0(((MR_Box) TypeClassInfo_for_diet_element_16), *X_4);
        {
          Var_14 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_14, 0) = Var_15;
          MR_hl_field(MR_mktag(0), Var_14, 1) = Y_11;
        }
        *Set_6 = mercury__diet__do_insert_2_f_0(TypeClassInfo_for_diet_element_16, Var_14, Stream_12);
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__diet__remove_list_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_8,
  MR_Word X_4,
  MR_Word Set0_5,
  MR_Word * Set_6)
{
  {
    MR_bool succeeded;
    MR_Word SetX_7;

    mercury__diet__list_to_set_2_p_0(TypeClassInfo_for_diet_element_8, X_4, &SetX_7);
    if ((SetX_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
    {
      MR_Tuple XY1_19;
      MR_Word R1_20;
      MR_Tuple XY2_21;
      MR_Word R2_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Tuple Var_15;
      MR_Integer Var_16;
      MR_Word Var_17;
      MR_Word Var_18;

      succeeded = ((MR_tag((MR_Word) Set0_5)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Set0_5, (MR_Integer) 0)));
        Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Set0_5, (MR_Integer) 1)));
        Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Set0_5, (MR_Integer) 2)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Set0_5, (MR_Integer) 3)));
        mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_8, SetX_7, &XY1_19, &R1_20);
        mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_8, Set0_5, &XY2_21, &R2_22);
        Var_23 = (MR_Integer) 1;
        mercury__diet__subset_2_5_p_0(TypeClassInfo_for_diet_element_8, XY1_19, R1_20, XY2_21, R2_22, &Var_24);
        succeeded = (Var_23 == Var_24);
      }
    }
    if (succeeded)
    {
      if ((Set0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *Set_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      if ((SetX_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *Set_6 = Set0_5;
      else
      {
        MR_Tuple Head_40;
        MR_Word Stream_41;
        MR_Word Var_44;
        MR_Word _RemHead_42;
        MR_Word _RemStream_43;

        mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_8, SetX_7, &Head_40, &Stream_41);
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Head_40));
        }
        mercury__diet__diff_6_p_0(TypeClassInfo_for_diet_element_8, Set0_5, Var_44, Stream_41, Set_6, &_RemHead_42, &_RemStream_43);
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__diet__delete_list_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_7,
  MR_Word Set0_4,
  MR_Word List_5)
{
  {
    MR_Word Set_6;

    mercury__diet__delete_list_3_p_0(TypeClassInfo_for_diet_element_7, List_5, Set0_4, &Set_6);
    return Set_6;
  }
}

void MR_CALL 
mercury__diet__delete_list_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_8,
  MR_Word List_4,
  MR_Word Set0_5,
  MR_Word * Set_6)
{
  {
    MR_Word Var_7;

    mercury__diet__list_to_set_2_p_0(TypeClassInfo_for_diet_element_8, List_4, &Var_7);
    if ((Set0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *Set_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    if ((Var_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *Set_6 = Set0_5;
    else
    {
      MR_Tuple Head_26;
      MR_Word Stream_27;
      MR_Word Var_30;
      MR_Word _RemHead_28;
      MR_Word _RemStream_29;

      mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_8, Var_7, &Head_26, &Stream_27);
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Head_26));
      }
      mercury__diet__diff_6_p_0(TypeClassInfo_for_diet_element_8, Set0_5, Var_30, Stream_27, Set_6, &_RemHead_28, &_RemStream_29);
    }
  }
}

static void MR_CALL 
mercury__diet__diff_6_p_0(
  MR_Word TypeClassInfo_for_diet_element_27,
  MR_Word Input_7,
  MR_Word Head0_8,
  MR_Word Stream0_9,
  MR_Word * Output_10,
  MR_Word * Head_11,
  MR_Word * Stream_12)
{
  {
    MR_bool succeeded;

    if ((Head0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Output_10 = Input_7;
      *Head_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Stream_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Tuple Var_28 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Head0_8, (MR_Integer) 0)));

      if ((Input_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *Output_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *Head_11 = Head0_8;
        *Stream_12 = Stream0_9;
      }
      else
      {
        MR_Box X_14 = (MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0));
        MR_Box A_16;
        MR_Word Left0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Input_7, (MR_Integer) 2)));
        MR_Word Right0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Input_7, (MR_Integer) 3)));
        MR_Word Left1_21;
        MR_Word Head1_22;
        MR_Word Stream1_23;
        MR_Tuple Var_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Input_7, (MR_Integer) 0)));
        MR_Box _Y_15 = (MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 1));
        MR_Integer Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Input_7, (MR_Integer) 1)));
        MR_Box B_17;
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

        A_16 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0));
        B_17 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1));
        func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_27, (MR_Integer) 0)), (MR_Integer) 5)));
        succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_27), X_14, A_16);
        if (succeeded)
          mercury__diet__diff_6_p_0(TypeClassInfo_for_diet_element_27, Left0_19, Head0_8, Stream0_9, &Left1_21, &Head1_22, &Stream1_23);
        else
        {
          Left1_21 = Left0_19;
          Head1_22 = Head0_8;
          Stream1_23 = Stream0_9;
        }
        mercury__diet__diff_helper_8_p_0(TypeClassInfo_for_diet_element_27, Var_25, Right0_20, Left1_21, Head1_22, Stream1_23, Output_10, Head_11, Stream_12);
      }
    }
  }
}

static void MR_CALL 
mercury__diet__diff_helper_8_p_0(
  MR_Word TypeClassInfo_for_diet_element_44,
  MR_Tuple HeadVar__1_1,
  MR_Word Right0_11,
  MR_Word Left0_12,
  MR_Word Head0_13,
  MR_Word Stream0_14,
  MR_Word * Output_15,
  MR_Word * Head_16,
  MR_Word * Stream_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box A_9 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Box B_10 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));

    /* setup for tailcalls optimized into a loop */
    if ((Head0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Output_15 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_44, HeadVar__1_1, Left0_12, Right0_11);
      *Head_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Stream_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Box X_18;
      MR_Box Y_19;
      MR_Tuple Var_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Head0_13, (MR_Integer) 0)));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

      X_18 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0));
      Y_19 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 5)));
      succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_44), Y_19, A_9);
      if (succeeded)
      {
        MR_Word Head1_20;
        MR_Word Stream1_21;
        MR_Word next_value_of_Head0_13;
        MR_Word next_value_of_Stream0_14;

        if ((Stream0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          Head1_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          Stream1_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        else
        {
          MR_Tuple X_54;

          mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_44, Stream0_14, &X_54, &Stream1_21);
          {
            Head1_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Head1_20, 0) = ((MR_Box) (X_54));
          }
        }
        /* direct tailcall eliminated */
        next_value_of_Head0_13 = Head1_20;
        next_value_of_Stream0_14 = Stream1_21;
        Head0_13 = next_value_of_Head0_13;
        Stream0_14 = next_value_of_Stream0_14;
        continue;
      }
      else
      {
        MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 5)));

        succeeded = func_1(((MR_Box) TypeClassInfo_for_diet_element_44), B_10, X_18);
        if (succeeded)
        {
          MR_Word Right1_22;

          mercury__diet__diff_6_p_0(TypeClassInfo_for_diet_element_44, Right0_11, Head0_13, Stream0_14, &Right1_22, Head_16, Stream_17);
          *Output_15 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_44, HeadVar__1_1, Left0_12, Right1_22);
        }
        else
        {
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 5)));

          succeeded = func_2(((MR_Box) TypeClassInfo_for_diet_element_44), A_9, X_18);
          if (succeeded)
          {
            MR_Word Left1_23;
            MR_Tuple Var_27;
            MR_Box Var_28;
            MR_Tuple Var_29;
            MR_Box MR_CALL (* func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 7)));
            MR_Tuple next_value_of_HeadVar__1_1;
            MR_Word next_value_of_Left0_12;

            Var_28 = func_3(((MR_Box) TypeClassInfo_for_diet_element_44), X_18);
            {
              Var_27 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_27, 0) = A_9;
              MR_hl_field(MR_mktag(0), Var_27, 1) = Var_28;
            }
            Left1_23 = mercury__diet__do_insert_2_f_0(TypeClassInfo_for_diet_element_44, Var_27, Left0_12);
            {
              Var_29 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_29, 0) = X_18;
              MR_hl_field(MR_mktag(0), Var_29, 1) = B_10;
            }
            /* direct tailcall eliminated */
            next_value_of_HeadVar__1_1 = Var_29;
            next_value_of_Left0_12 = Left1_23;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            Left0_12 = next_value_of_Left0_12;
            continue;
          }
          else
          {
            MR_bool MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 5)));

            succeeded = func_4(((MR_Box) TypeClassInfo_for_diet_element_44), Y_19, B_10);
            if (succeeded)
            {
              MR_Tuple Var_30;
              MR_Box Var_31;
              MR_Word Head1_33;
              MR_Word Stream1_34;
              MR_Box MR_CALL (* func_5)(MR_Box, MR_Box);
              MR_Tuple next_value_of_HeadVar__1_1;
              MR_Word next_value_of_Head0_13;
              MR_Word next_value_of_Stream0_14;

              if ((Stream0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                Head1_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                Stream1_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Tuple X_68;

                mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_44, Stream0_14, &X_68, &Stream1_34);
                {
                  Head1_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Head1_33, 0) = ((MR_Box) (X_68));
                }
              }
              func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 6)));
              Var_31 = func_5(((MR_Box) TypeClassInfo_for_diet_element_44), Y_19);
              {
                Var_30 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_30, 0) = Var_31;
                MR_hl_field(MR_mktag(0), Var_30, 1) = B_10;
              }
              /* direct tailcall eliminated */
              next_value_of_HeadVar__1_1 = Var_30;
              next_value_of_Head0_13 = Head1_33;
              next_value_of_Stream0_14 = Stream1_34;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              Head0_13 = next_value_of_Head0_13;
              Stream0_14 = next_value_of_Stream0_14;
              continue;
            }
            else
            {
              MR_Word Right1_35;

              mercury__diet__diff_6_p_0(TypeClassInfo_for_diet_element_44, Right0_11, Head0_13, Stream0_14, &Right1_35, Head_16, Stream_17);
              *Output_15 = mercury__diet__reroot_2_f_0(TypeClassInfo_for_diet_element_44, Left0_12, Right1_35);
            }
          }
        }
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__diet__reroot_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_25,
  MR_Word L_4,
  MR_Word R_5)
{
  {
    MR_bool succeeded;
    MR_Word T_6;
    MR_Integer Var_18;
    MR_Integer Var_19;
    MR_Word TypeInfo_27_27;
    MR_Word TypeInfo_28_28;

{
#define MR_PROC_LABEL mercury__diet__reroot_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_25 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_27_27  = TypeInfo;
}
    if ((L_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      Var_18 = (MR_Integer) 0;
    else
    {
      MR_Tuple Var_29 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), L_4, (MR_Integer) 0)));
      MR_Word Var_31;
      MR_Word Var_32;

      Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), L_4, (MR_Integer) 1)));
      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), L_4, (MR_Integer) 2)));
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), L_4, (MR_Integer) 3)));
    }
{
#define MR_PROC_LABEL mercury__diet__reroot_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_25 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_28_28  = TypeInfo;
}
    if ((R_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      Var_19 = (MR_Integer) 0;
    else
    {
      MR_Tuple Var_33 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), R_5, (MR_Integer) 0)));
      MR_Word Var_35;
      MR_Word Var_36;

      Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), R_5, (MR_Integer) 1)));
      Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_5, (MR_Integer) 2)));
      Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_5, (MR_Integer) 3)));
    }
    succeeded = (Var_18 > Var_19);
    if (succeeded)
      if ((L_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.reroot\'/2", (MR_String) "L empty");
      }
      else
      {
        MR_Tuple I_11;
        MR_Word L1_12;

        mercury__diet__take_max_3_p_0(TypeClassInfo_for_diet_element_25, L_4, &I_11, &L1_12);
        T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_25, I_11, L1_12, R_5);
      }
    else
    if ((R_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      T_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word R1_17;
      MR_Tuple I_23;

      mercury__diet__take_min_3_p_0(TypeClassInfo_for_diet_element_25, R_5, &I_23, &R1_17);
      T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_25, I_23, L_4, R1_17);
    }
    return T_6;
  }
}

void MR_CALL 
mercury__diet__list_to_set_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_7,
  MR_Word List_3,
  MR_Word * Set_4)
{
  {
    MR_Word Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(TypeClassInfo_for_diet_element_7, List_3, Var_6, Set_4);
  }
}

void MR_CALL 
mercury__diet__delete_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_8,
  MR_Box Elem_4,
  MR_Word Set0_5,
  MR_Word * Set_6)
{
  {
    MR_bool succeeded;
    MR_Word Set1_7;

    succeeded = mercury__diet__remove_3_p_0(TypeClassInfo_for_diet_element_8, Elem_4, Set0_5, &Set1_7);
    if (succeeded)
      *Set_6 = Set1_7;
    else
      *Set_6 = Set0_5;
  }
}

MR_Word MR_CALL 
mercury__diet__delete_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_7,
  MR_Word Set0_4,
  MR_Box Elem_5)
{
  {
    MR_bool succeeded;
    MR_Word Set_6;
    MR_Word Set1_11;

    succeeded = mercury__diet__remove_3_p_0(TypeClassInfo_for_diet_element_7, Elem_5, Set0_4, &Set1_11);
    if (succeeded)
      Set_6 = Set1_11;
    else
      Set_6 = Set0_4;
    return Set_6;
  }
}

MR_bool MR_CALL 
mercury__diet__remove_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_30,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Word TypeInfo_32_32;
    MR_Box X_9;
    MR_Box Y_10;
    MR_Integer H_11;
    MR_Word Left_12;
    MR_Word Right_13;
    MR_Word CZX_14;
    MR_Integer PolyConst1_31;
    MR_Tuple Var_34;

    if (succeeded)
    {
      Var_34 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      H_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
      Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
      X_9 = (MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0));
      Y_10 = (MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 1));
      PolyConst1_31 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__diet__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_30 ;
	Index =  PolyConst1_31 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_32_32  = TypeInfo;
}
      mercury__builtin__compare_3_p_0(TypeInfo_32_32, &CZX_14, HeadVar__1_1, X_9);
      switch (CZX_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word L_15;

            succeeded = mercury__diet__remove_3_p_0(TypeClassInfo_for_diet_element_30, HeadVar__1_1, Left_12, &L_15);
            if (succeeded)
            {
              *HeadVar__3_3 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_30, Var_34, L_15, Right_13);
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_33_33;
            MR_Word CZY_16;

{
#define MR_PROC_LABEL mercury__diet__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_30 ;
	Index =  PolyConst1_31 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_33_33  = TypeInfo;
}
            mercury__builtin__compare_3_p_0(TypeInfo_33_33, &CZY_16, HeadVar__1_1, Y_10);
            switch (CZY_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  switch (CZX_14) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Tuple Var_25;
                        MR_Box Var_26;
                        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 6)));

                        Var_26 = func_0(((MR_Box) TypeClassInfo_for_diet_element_30), X_9);
                        {
                          Var_25 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_25, 0) = Var_26;
                          MR_hl_field(MR_mktag(0), Var_25, 1) = Y_10;
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          *HeadVar__3_3 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (H_11));
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Left_12));
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Right_13));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Tuple Var_20;
                        MR_Box Var_21;
                        MR_Word Var_22;
                        MR_Tuple Var_23;
                        MR_Box Var_24;
                        MR_Box MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 6)));
                        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);

                        Var_21 = func_1(((MR_Box) TypeClassInfo_for_diet_element_30), HeadVar__1_1);
                        {
                          Var_20 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_20, 0) = Var_21;
                          MR_hl_field(MR_mktag(0), Var_20, 1) = Y_10;
                        }
                        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 7)));
                        Var_24 = func_2(((MR_Box) TypeClassInfo_for_diet_element_30), HeadVar__1_1);
                        {
                          Var_23 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_23, 0) = X_9;
                          MR_hl_field(MR_mktag(0), Var_23, 1) = Var_24;
                        }
                        {
                          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
                          MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (H_11));
                          MR_hl_field(MR_mktag(1), Var_22, 2) = ((MR_Box) (Left_12));
                          MR_hl_field(MR_mktag(1), Var_22, 3) = ((MR_Box) (Right_13));
                        }
                        *HeadVar__3_3 = mercury__diet__do_insert_2_f_0(TypeClassInfo_for_diet_element_30, Var_20, Var_22);
                      }
                      break;
                  }
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 0:
                {
                  switch (CZX_14) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer Var_52;
                        MR_Integer Var_53;

                        if ((Left_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          Var_52 = (MR_Integer) 0;
                        else
                        {
                          MR_Tuple Var_62 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Left_12, (MR_Integer) 0)));
                          MR_Word Var_64;
                          MR_Word Var_65;

                          Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Left_12, (MR_Integer) 1)));
                          Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Left_12, (MR_Integer) 2)));
                          Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), Left_12, (MR_Integer) 3)));
                        }
                        if ((Right_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          Var_53 = (MR_Integer) 0;
                        else
                        {
                          MR_Tuple Var_66 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Right_13, (MR_Integer) 0)));
                          MR_Word Var_68;
                          MR_Word Var_69;

                          Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Right_13, (MR_Integer) 1)));
                          Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), Right_13, (MR_Integer) 2)));
                          Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), Right_13, (MR_Integer) 3)));
                        }
                        succeeded = (Var_52 > Var_53);
                        if (succeeded)
                          if ((Left_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.reroot\'/2", (MR_String) "L empty");
                          }
                          else
                          {
                            MR_Tuple I_45;
                            MR_Word L1_46;

                            mercury__diet__take_max_3_p_0(TypeClassInfo_for_diet_element_30, Left_12, &I_45, &L1_46);
                            *HeadVar__3_3 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_30, I_45, L1_46, Right_13);
                          }
                        else
                        if ((Right_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        else
                        {
                          MR_Word R1_51;
                          MR_Tuple I_57;

                          mercury__diet__take_min_3_p_0(TypeClassInfo_for_diet_element_30, Right_13, &I_57, &R1_51);
                          *HeadVar__3_3 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_30, I_57, Left_12, R1_51);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Tuple Var_27;
                        MR_Box Var_28;
                        MR_Box MR_CALL (* func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 7)));

                        Var_28 = func_3(((MR_Box) TypeClassInfo_for_diet_element_30), Y_10);
                        {
                          Var_27 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_27, 0) = X_9;
                          MR_hl_field(MR_mktag(0), Var_27, 1) = Var_28;
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          *HeadVar__3_3 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_27));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (H_11));
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Left_12));
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Right_13));
                        }
                      }
                      break;
                  }
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word R_17;

                  succeeded = mercury__diet__remove_3_p_0(TypeClassInfo_for_diet_element_30, HeadVar__1_1, Right_13, &R_17);
                  if (succeeded)
                  {
                    *HeadVar__3_3 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_30, Var_34, Left_12, R_17);
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
          }
          break;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__diet__insert_interval_4_p_0(
  MR_Word TypeClassInfo_for_diet_element_11,
  MR_Box X_5,
  MR_Box Y_6,
  MR_Word Set0_7,
  MR_Word * Set_8)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_11, (MR_Integer) 0)), (MR_Integer) 5)));

    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_11), Y_6, X_5);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Tuple Var_9;

      {
        Var_9 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_9, 0) = X_5;
        MR_hl_field(MR_mktag(0), Var_9, 1) = Y_6;
      }
      *Set_8 = mercury__diet__do_insert_2_f_0(TypeClassInfo_for_diet_element_11, Var_9, Set0_7);
    }
    else
    {
      MR_Word TypeInfo_13_13;

{
#define MR_PROC_LABEL mercury__diet__insert_interval_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_11 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_13_13  = TypeInfo;
}
      {
        mercury__diet__unexpected_interval_3_p_0(TypeInfo_13_13, (MR_String) "predicate \140diet.insert_interval\'/4", X_5, Y_6);
        return;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__diet__do_insert_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_26,
  MR_Tuple PQ_4,
  MR_Word T0_5)
{
  {
    MR_bool succeeded;
    MR_Word T_6;
    MR_Box P_7 = (MR_hl_field(MR_mktag(0), PQ_4, (MR_Integer) 0));
    MR_Box Q_8 = (MR_hl_field(MR_mktag(0), PQ_4, (MR_Integer) 1));

    if ((T0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word TypeInfo_28_28;

{
#define MR_PROC_LABEL mercury__diet__do_insert_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_26 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_28_28  = TypeInfo;
}
      Var_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), T_6, 0) = ((MR_Box) (PQ_4));
        MR_hl_field(MR_mktag(1), T_6, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), T_6, 2) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), T_6, 3) = ((MR_Box) (Var_32));
      }
    }
    else
    {
      MR_Box X0_9;
      MR_Box Y0_10;
      MR_Word Left0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T0_5, (MR_Integer) 2)));
      MR_Word Right0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), T0_5, (MR_Integer) 3)));
      MR_Tuple Var_18 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T0_5, (MR_Integer) 0)));
      MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T0_5, (MR_Integer) 1)));
      MR_Box Var_19;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box);

      X0_9 = (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0));
      Y0_10 = (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1));
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 7)));
      Var_19 = func_0(((MR_Box) TypeClassInfo_for_diet_element_26), X0_9);
      func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 5)));
      succeeded = func_1(((MR_Box) TypeClassInfo_for_diet_element_26), Q_8, Var_19);
      if (succeeded)
      {
        MR_Word Var_21;

        Var_21 = mercury__diet__do_insert_2_f_0(TypeClassInfo_for_diet_element_26, PQ_4, Left0_12);
        T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_26, Var_18, Var_21, Right0_13);
      }
      else
      {
        MR_Box Var_22;
        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 6)));
        MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box);

        Var_22 = func_2(((MR_Box) TypeClassInfo_for_diet_element_26), Y0_10);
        func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 5)));
        succeeded = func_3(((MR_Box) TypeClassInfo_for_diet_element_26), Var_22, P_7);
        if (succeeded)
        {
          MR_Word Var_24;

          Var_24 = mercury__diet__do_insert_2_f_0(TypeClassInfo_for_diet_element_26, PQ_4, Right0_13);
          T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_26, Var_18, Left0_12, Var_24);
        }
        else
        {
          MR_Box X1_14;
          MR_Word Left1_15;
          MR_Box Y1_16;
          MR_Word Right1_17;
          MR_Tuple Var_25;
          MR_bool MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 5)));
          MR_bool MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box);

          succeeded = func_4(((MR_Box) TypeClassInfo_for_diet_element_26), P_7, X0_9);
          succeeded = !(succeeded);
          if (succeeded)
          {
            X1_14 = X0_9;
            Left1_15 = Left0_12;
          }
          else
            mercury__diet__find_del_left_4_p_0(TypeClassInfo_for_diet_element_26, P_7, Left0_12, &X1_14, &Left1_15);
          func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 5)));
          succeeded = func_5(((MR_Box) TypeClassInfo_for_diet_element_26), Y0_10, Q_8);
          succeeded = !(succeeded);
          if (succeeded)
          {
            Y1_16 = Y0_10;
            Right1_17 = Right0_13;
          }
          else
            mercury__diet__find_del_right_4_p_0(TypeClassInfo_for_diet_element_26, Q_8, Right0_13, &Y1_16, &Right1_17);
          {
            Var_25 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_25, 0) = X1_14;
            MR_hl_field(MR_mktag(0), Var_25, 1) = Y1_16;
          }
          T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_26, Var_25, Left1_15, Right1_17);
        }
      }
    }
    return T_6;
  }
}

static void MR_CALL 
mercury__diet__find_del_right_4_p_0(
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Box P0_5,
  MR_Word T0_6,
  MR_Box * P_7,
  MR_Word * T_8)
{
  {
    MR_bool succeeded;

    if ((T0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *P_7 = P0_5;
      *T_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Box X_9;
      MR_Box Y_10;
      MR_Word Left0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T0_6, (MR_Integer) 2)));
      MR_Word Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), T0_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T0_6, (MR_Integer) 0)));
      MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T0_6, (MR_Integer) 1)));
      MR_Box Var_16;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box);

      X_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_10 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_18, (MR_Integer) 0)), (MR_Integer) 7)));
      Var_16 = func_0(((MR_Box) TypeClassInfo_for_diet_element_18), X_9);
      func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_18, (MR_Integer) 0)), (MR_Integer) 5)));
      succeeded = func_1(((MR_Box) TypeClassInfo_for_diet_element_18), P0_5, Var_16);
      if (succeeded)
      {
        MR_Word Left1_14;

        mercury__diet__find_del_right_4_p_0(TypeClassInfo_for_diet_element_18, P0_5, Left0_12, P_7, &Left1_14);
        *T_8 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_18, Var_15, Left1_14, Right_13);
      }
      else
      {
        *P_7 = Y_10;
        *T_8 = Right_13;
      }
    }
  }
}

static void MR_CALL 
mercury__diet__find_del_left_4_p_0(
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Box P0_5,
  MR_Word T0_6,
  MR_Box * P_7,
  MR_Word * T_8)
{
  {
    MR_bool succeeded;

    if ((T0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *P_7 = P0_5;
      *T_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Box X_9;
      MR_Box Y_10;
      MR_Word Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T0_6, (MR_Integer) 2)));
      MR_Word Right0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), T0_6, (MR_Integer) 3)));
      MR_Tuple Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T0_6, (MR_Integer) 0)));
      MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T0_6, (MR_Integer) 1)));
      MR_Box Var_16;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box);

      X_9 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
      Y_10 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1));
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_18, (MR_Integer) 0)), (MR_Integer) 6)));
      Var_16 = func_0(((MR_Box) TypeClassInfo_for_diet_element_18), Y_10);
      func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_18, (MR_Integer) 0)), (MR_Integer) 5)));
      succeeded = func_1(((MR_Box) TypeClassInfo_for_diet_element_18), Var_16, P0_5);
      if (succeeded)
      {
        MR_Word Right1_14;

        mercury__diet__find_del_left_4_p_0(TypeClassInfo_for_diet_element_18, P0_5, Right0_13, P_7, &Right1_14);
        *T_8 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_18, Var_15, Left_12, Right1_14);
      }
      else
      {
        *P_7 = X_9;
        *T_8 = Left_12;
      }
    }
  }
}

void MR_CALL 
mercury__diet__insert_list_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_8,
  MR_Word Elems_4,
  MR_Word Set0_5,
  MR_Word * Set_6)
{
  mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(TypeClassInfo_for_diet_element_8, Elems_4, Set0_5, Set_6);
}

MR_Word MR_CALL 
mercury__diet__insert_list_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_7,
  MR_Word Set0_4,
  MR_Word Elems_5)
{
  {
    MR_Word Set_6;

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(TypeClassInfo_for_diet_element_7, Elems_5, Set0_4, &Set_6);
    return Set_6;
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Box V_10_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word V_15_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      V_15_13 = mercury__diet__add_2_f_0(Var_18, V_10_9, HeadVar__3_3);
      /* direct tailcall eliminated */
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_15_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__insert_new_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_52,
  MR_Box P_4,
  MR_Word T0_5,
  MR_Word * T_6)
{
  {
    MR_bool succeeded;

    if ((T0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Tuple Var_37;
      MR_Word Var_40;
      MR_Word Var_41;

      {
        Var_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = P_4;
        MR_hl_field(MR_mktag(0), Var_37, 1) = P_4;
      }
      Var_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      Var_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        *T_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Var_41));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_7;
      MR_Box Y_8;
      MR_Integer H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T0_5, (MR_Integer) 1)));
      MR_Word Left_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), T0_5, (MR_Integer) 2)));
      MR_Word Right_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T0_5, (MR_Integer) 3)));
      MR_Tuple Var_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T0_5, (MR_Integer) 0)));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

      X_7 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0));
      Y_8 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 5)));
      succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_52), P_4, X_7);
      succeeded = !(succeeded);
      if (succeeded)
      {
        MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 5)));

        succeeded = func_1(((MR_Box) TypeClassInfo_for_diet_element_52), Y_8, P_4);
        succeeded = !(succeeded);
        if (succeeded)
          succeeded = MR_FALSE;
        else
        {
          MR_Box Var_25;
          MR_Box MR_CALL (* func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 6)));
          MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box);

          Var_25 = func_2(((MR_Box) TypeClassInfo_for_diet_element_52), Y_8);
          func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 5)));
          succeeded = func_3(((MR_Box) TypeClassInfo_for_diet_element_52), Var_25, P_4);
          if (succeeded)
          {
            MR_Word R_12;

            succeeded = mercury__diet__insert_new_3_p_0(TypeClassInfo_for_diet_element_52, P_4, Right_11, &R_12);
            if (succeeded)
            {
              *T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_52, Var_24, Left_10, R_12);
              succeeded = MR_TRUE;
            }
          }
          else
          {
            if ((Right_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Tuple Var_30;

              {
                Var_30 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_30, 0) = X_7;
                MR_hl_field(MR_mktag(0), Var_30, 1) = P_4;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *T_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_30));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (H_9));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Left_10));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Right_11));
              }
            }
            else
            {
              MR_Box U_17;
              MR_Box V_18;
              MR_Tuple Var_27;
              MR_Word R_42;
              MR_Word TypeInfo_56_56;
              MR_Box Var_53;
              MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);

              mercury__diet__take_min_3_p_0(TypeClassInfo_for_diet_element_52, Right_11, &Var_27, &R_42);
              U_17 = (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0));
              V_18 = (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 1));
              func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 7)));
              Var_53 = func_4(((MR_Box) TypeClassInfo_for_diet_element_52), U_17);
{
#define MR_PROC_LABEL mercury__diet__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_52 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_56_56  = TypeInfo;
}
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_56_56, P_4, Var_53);
              if (succeeded)
              {
                MR_Tuple Var_28;

                {
                  Var_28 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_28, 0) = X_7;
                  MR_hl_field(MR_mktag(0), Var_28, 1) = V_18;
                }
                *T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_52, Var_28, Left_10, R_42);
              }
              else
              {
                MR_Tuple Var_29;

                {
                  Var_29 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_29, 0) = X_7;
                  MR_hl_field(MR_mktag(0), Var_29, 1) = P_4;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *T_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_29));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (H_9));
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Left_10));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Right_11));
                }
              }
            }
            succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        MR_Box Var_31;
        MR_Box MR_CALL (* func_5)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 7)));
        MR_bool MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);

        Var_31 = func_5(((MR_Box) TypeClassInfo_for_diet_element_52), X_7);
        func_6 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 5)));
        succeeded = func_6(((MR_Box) TypeClassInfo_for_diet_element_52), P_4, Var_31);
        if (succeeded)
        {
          MR_Word L_19;

          succeeded = mercury__diet__insert_new_3_p_0(TypeClassInfo_for_diet_element_52, P_4, Left_10, &L_19);
          if (succeeded)
          {
            *T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_52, Var_24, L_19, Right_11);
            succeeded = MR_TRUE;
          }
        }
        else
        {
          if ((Left_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Tuple Var_36;

            {
              Var_36 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_36, 0) = P_4;
              MR_hl_field(MR_mktag(0), Var_36, 1) = Y_8;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              *T_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_36));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (H_9));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Left_10));
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Right_11));
            }
          }
          else
          {
            MR_Tuple Var_33;
            MR_Box V_45;
            MR_Word L_46;
            MR_Box U_44;
            MR_Word TypeInfo_58_58;
            MR_Box Var_54;
            MR_Box MR_CALL (* func_7)(MR_Box, MR_Box);

            mercury__diet__take_max_3_p_0(TypeClassInfo_for_diet_element_52, Left_10, &Var_33, &L_46);
            U_44 = (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0));
            V_45 = (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 1));
            func_7 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 6)));
            Var_54 = func_7(((MR_Box) TypeClassInfo_for_diet_element_52), V_45);
{
#define MR_PROC_LABEL mercury__diet__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_52 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_58_58  = TypeInfo;
}
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_58_58, P_4, Var_54);
            if (succeeded)
              *T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_52, Var_33, L_46, Right_11);
            else
            {
              MR_Tuple Var_35;

              {
                Var_35 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_35, 0) = P_4;
                MR_hl_field(MR_mktag(0), Var_35, 1) = Y_8;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *T_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_35));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (H_9));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Left_10));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Right_11));
              }
            }
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__diet__insert_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_7,
  MR_Box Elem_4,
  MR_Word Set0_5,
  MR_Word * Set_6)
{
  *Set_6 = mercury__diet__add_2_f_0(TypeClassInfo_for_diet_element_7, Elem_4, Set0_5);
}

MR_Word MR_CALL 
mercury__diet__insert_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_7,
  MR_Word Set0_4,
  MR_Box Elem_5)
{
  {
    MR_Word Set_6;

    Set_6 = mercury__diet__add_2_f_0(TypeClassInfo_for_diet_element_7, Elem_5, Set0_4);
    return Set_6;
  }
}

MR_Word MR_CALL 
mercury__diet__add_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_50,
  MR_Box P_4,
  MR_Word T0_5)
{
  {
    MR_bool succeeded;
    MR_Word T_6;

    if ((T0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Tuple Var_39;
      MR_Word Var_42;
      MR_Word Var_43;

      {
        Var_39 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = P_4;
        MR_hl_field(MR_mktag(0), Var_39, 1) = P_4;
      }
      Var_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      Var_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), T_6, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), T_6, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), T_6, 2) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), T_6, 3) = ((MR_Box) (Var_43));
      }
    }
    else
    {
      MR_Box X_7;
      MR_Box Y_8;
      MR_Integer H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T0_5, (MR_Integer) 1)));
      MR_Word Left_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), T0_5, (MR_Integer) 2)));
      MR_Word Right_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T0_5, (MR_Integer) 3)));
      MR_Tuple Var_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T0_5, (MR_Integer) 0)));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

      X_7 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0));
      Y_8 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 5)));
      succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_50), P_4, X_7);
      succeeded = !(succeeded);
      if (succeeded)
      {
        MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 5)));

        succeeded = func_1(((MR_Box) TypeClassInfo_for_diet_element_50), Y_8, P_4);
        succeeded = !(succeeded);
        if (succeeded)
          T_6 = T0_5;
        else
        {
          MR_Box Var_25;
          MR_Box MR_CALL (* func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 6)));
          MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box);

          Var_25 = func_2(((MR_Box) TypeClassInfo_for_diet_element_50), Y_8);
          func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 5)));
          succeeded = func_3(((MR_Box) TypeClassInfo_for_diet_element_50), Var_25, P_4);
          if (succeeded)
          {
            MR_Word Var_27;

            Var_27 = mercury__diet__add_2_f_0(TypeClassInfo_for_diet_element_50, P_4, Right_11);
            T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_50, Var_24, Left_10, Var_27);
          }
          else
          if ((Right_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Tuple Var_31;

            {
              Var_31 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_31, 0) = X_7;
              MR_hl_field(MR_mktag(0), Var_31, 1) = P_4;
            }
            {
              T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), T_6, 0) = ((MR_Box) (Var_31));
              MR_hl_field(MR_mktag(1), T_6, 1) = ((MR_Box) (H_9));
              MR_hl_field(MR_mktag(1), T_6, 2) = ((MR_Box) (Left_10));
              MR_hl_field(MR_mktag(1), T_6, 3) = ((MR_Box) (Right_11));
            }
          }
          else
          {
            MR_Box U_16;
            MR_Box V_17;
            MR_Word R_18;
            MR_Tuple Var_28;
            MR_Word TypeInfo_54_54;
            MR_Box Var_51;
            MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);

            mercury__diet__take_min_3_p_0(TypeClassInfo_for_diet_element_50, Right_11, &Var_28, &R_18);
            U_16 = (MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0));
            V_17 = (MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 1));
            func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 7)));
            Var_51 = func_4(((MR_Box) TypeClassInfo_for_diet_element_50), U_16);
{
#define MR_PROC_LABEL mercury__diet__add_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_50 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_54_54  = TypeInfo;
}
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_54_54, P_4, Var_51);
            if (succeeded)
            {
              MR_Tuple Var_29;

              {
                Var_29 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_29, 0) = X_7;
                MR_hl_field(MR_mktag(0), Var_29, 1) = V_17;
              }
              T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_50, Var_29, Left_10, R_18);
            }
            else
            {
              MR_Tuple Var_30;

              {
                Var_30 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_30, 0) = X_7;
                MR_hl_field(MR_mktag(0), Var_30, 1) = P_4;
              }
              {
                T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), T_6, 0) = ((MR_Box) (Var_30));
                MR_hl_field(MR_mktag(1), T_6, 1) = ((MR_Box) (H_9));
                MR_hl_field(MR_mktag(1), T_6, 2) = ((MR_Box) (Left_10));
                MR_hl_field(MR_mktag(1), T_6, 3) = ((MR_Box) (Right_11));
              }
            }
          }
        }
      }
      else
      {
        MR_Box Var_32;
        MR_Box MR_CALL (* func_5)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 7)));
        MR_bool MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);

        Var_32 = func_5(((MR_Box) TypeClassInfo_for_diet_element_50), X_7);
        func_6 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 5)));
        succeeded = func_6(((MR_Box) TypeClassInfo_for_diet_element_50), P_4, Var_32);
        if (succeeded)
        {
          MR_Word Var_34;

          Var_34 = mercury__diet__add_2_f_0(TypeClassInfo_for_diet_element_50, P_4, Left_10);
          T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_50, Var_24, Var_34, Right_11);
        }
        else
        if ((Left_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Tuple Var_38;

          {
            Var_38 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_38, 0) = P_4;
            MR_hl_field(MR_mktag(0), Var_38, 1) = Y_8;
          }
          {
            T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), T_6, 0) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(1), T_6, 1) = ((MR_Box) (H_9));
            MR_hl_field(MR_mktag(1), T_6, 2) = ((MR_Box) (Left_10));
            MR_hl_field(MR_mktag(1), T_6, 3) = ((MR_Box) (Right_11));
          }
        }
        else
        {
          MR_Word L_23;
          MR_Tuple Var_35;
          MR_Box U_44;
          MR_Box V_45;
          MR_Word TypeInfo_56_56;
          MR_Box Var_52;
          MR_Box MR_CALL (* func_7)(MR_Box, MR_Box);

          mercury__diet__take_max_3_p_0(TypeClassInfo_for_diet_element_50, Left_10, &Var_35, &L_23);
          U_44 = (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0));
          V_45 = (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1));
          func_7 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 6)));
          Var_52 = func_7(((MR_Box) TypeClassInfo_for_diet_element_50), V_45);
{
#define MR_PROC_LABEL mercury__diet__add_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_50 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_56_56  = TypeInfo;
}
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_56_56, P_4, Var_52);
          if (succeeded)
          {
            MR_Tuple Var_36;

            {
              Var_36 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_36, 0) = U_44;
              MR_hl_field(MR_mktag(0), Var_36, 1) = Y_8;
            }
            T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_50, Var_36, L_23, Right_11);
          }
          else
          {
            MR_Tuple Var_37;

            {
              Var_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_37, 0) = P_4;
              MR_hl_field(MR_mktag(0), Var_37, 1) = Y_8;
            }
            {
              T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), T_6, 0) = ((MR_Box) (Var_37));
              MR_hl_field(MR_mktag(1), T_6, 1) = ((MR_Box) (H_9));
              MR_hl_field(MR_mktag(1), T_6, 2) = ((MR_Box) (Left_10));
              MR_hl_field(MR_mktag(1), T_6, 3) = ((MR_Box) (Right_11));
            }
          }
        }
      }
    }
    return T_6;
  }
}

static void MR_CALL 
mercury__diet__take_max_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word T0_4,
  MR_Tuple * X_5,
  MR_Word * T_6)
{
  {
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), T0_4, (MR_Integer) 3)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), T0_4, (MR_Integer) 2)));
    MR_Tuple Var_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T0_4, (MR_Integer) 0)));
    MR_Integer Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T0_4, (MR_Integer) 1)));

    if ((Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *X_5 = Var_23;
      *T_6 = Var_21;
    }
    else
    {
      MR_Word R1_16;

      mercury__diet__take_max_3_p_0(TypeClassInfo_for_diet_element_19, Var_20, X_5, &R1_16);
      *T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_19, Var_23, Var_21, R1_16);
    }
  }
}

static void MR_CALL 
mercury__diet__take_min_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word T0_4,
  MR_Tuple * X_5,
  MR_Word * T_6)
{
  {
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), T0_4, (MR_Integer) 3)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), T0_4, (MR_Integer) 2)));
    MR_Tuple Var_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T0_4, (MR_Integer) 0)));
    MR_Integer Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T0_4, (MR_Integer) 1)));

    if ((Var_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *X_5 = Var_23;
      *T_6 = Var_20;
    }
    else
    {
      MR_Word L1_16;

      mercury__diet__take_min_3_p_0(TypeClassInfo_for_diet_element_19, Var_21, X_5, &L1_16);
      *T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_19, Var_23, L1_16, Var_20);
    }
  }
}

static MR_Word MR_CALL 
mercury__diet__join_3_f_0(
  MR_Word TypeClassInfo_for_diet_element_29,
  MR_Tuple V_5,
  MR_Word L_6,
  MR_Word R_7)
{
  {
    MR_bool succeeded;
    MR_Word T_8;

    if ((L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0((MR_Integer) 1, V_5, R_7);
    }
    else
    {
      MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), L_6, (MR_Integer) 3)));
      MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), L_6, (MR_Integer) 2)));
      MR_Integer Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), L_6, (MR_Integer) 1)));
      MR_Tuple Var_43 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), L_6, (MR_Integer) 0)));

      if ((R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0((MR_Integer) 0, V_5, L_6);
      }
      else
      {
        MR_Tuple RX_17 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), R_7, (MR_Integer) 0)));
        MR_Integer RH_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), R_7, (MR_Integer) 1)));
        MR_Word RL_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_7, (MR_Integer) 2)));
        MR_Word RR_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_7, (MR_Integer) 3)));
        MR_Integer Var_21 = (RH_18 + (MR_Integer) 1);

        succeeded = (Var_42 > Var_21);
        if (succeeded)
        {
          MR_Word Var_23;

          Var_23 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_29, V_5, Var_40, R_7);
          T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(Var_43, Var_41, Var_23);
        }
        else
        {
          MR_Integer Var_24 = (Var_42 + (MR_Integer) 1);

          succeeded = (RH_18 > Var_24);
          if (succeeded)
          {
            MR_Word Var_26;

            Var_26 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_29, V_5, L_6, RL_19);
            T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(RX_17, Var_26, RR_20);
          }
          else
            T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(V_5, L_6, R_7);
        }
      }
    }
    return T_8;
  }
}

static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(
  MR_Word IsLeft_5,
  MR_Tuple X_6,
  MR_Word T0_7)
{
  {
    MR_Word T_8;

    if ((T0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Var_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      MR_Word Var_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

      {
        T_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), T_8, 0) = ((MR_Box) (X_6));
        MR_hl_field(MR_mktag(1), T_8, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), T_8, 2) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(1), T_8, 3) = ((MR_Box) (Var_17));
      }
    }
    else
    {
      MR_Tuple VX_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T0_7, (MR_Integer) 0)));
      MR_Word L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T0_7, (MR_Integer) 2)));
      MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T0_7, (MR_Integer) 3)));
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T0_7, (MR_Integer) 1)));

      switch (IsLeft_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_13;

            Var_13 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(IsLeft_5, X_6, R_12);
            T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(VX_9, L_11, Var_13);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_14;

            Var_14 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(IsLeft_5, X_6, L_11);
            T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(VX_9, Var_14, R_12);
          }
          break;
      }
    }
    return T_8;
  }
}

static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(
  MR_Tuple X_5,
  MR_Word L_6,
  MR_Word R_7)
{
  {
    MR_bool succeeded;
    MR_Word T_8;
    MR_Integer HL_9;
    MR_Integer HR_10;
    MR_Integer Var_28;

    if ((L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HL_9 = (MR_Integer) 0;
    else
    {
      MR_Tuple Var_57 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), L_6, (MR_Integer) 0)));
      MR_Word Var_59;
      MR_Word Var_60;

      HL_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), L_6, (MR_Integer) 1)));
      Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), L_6, (MR_Integer) 2)));
      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), L_6, (MR_Integer) 3)));
    }
    if ((R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HR_10 = (MR_Integer) 0;
    else
    {
      MR_Tuple Var_61 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), R_7, (MR_Integer) 0)));
      MR_Word Var_63;
      MR_Word Var_64;

      HR_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), R_7, (MR_Integer) 1)));
      Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_7, (MR_Integer) 2)));
      Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_7, (MR_Integer) 3)));
    }
    Var_28 = (HR_10 + (MR_Integer) 1);
    succeeded = (HL_9 > Var_28);
    if (succeeded)
      if ((L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.balance\'/3", (MR_String) "L empty");
      }
      else
      {
        MR_Tuple LVX_11 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), L_6, (MR_Integer) 0)));
        MR_Word LL_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), L_6, (MR_Integer) 2)));
        MR_Word LR_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), L_6, (MR_Integer) 3)));
        MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), L_6, (MR_Integer) 1)));
        MR_Integer Var_30;
        MR_Integer Var_31;

        if ((LL_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          Var_30 = (MR_Integer) 0;
        else
        {
          MR_Tuple Var_67 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), LL_13, (MR_Integer) 0)));
          MR_Word Var_69;
          MR_Word Var_70;

          Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), LL_13, (MR_Integer) 1)));
          Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), LL_13, (MR_Integer) 2)));
          Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), LL_13, (MR_Integer) 3)));
        }
        if ((LR_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          Var_31 = (MR_Integer) 0;
        else
        {
          MR_Tuple Var_71 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), LR_14, (MR_Integer) 0)));
          MR_Word Var_73;
          MR_Word Var_74;

          Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), LR_14, (MR_Integer) 1)));
          Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), LR_14, (MR_Integer) 2)));
          Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), LR_14, (MR_Integer) 3)));
        }
        succeeded = (Var_30 >= Var_31);
        if (succeeded)
        {
          MR_Word Var_32;

          Var_32 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(X_5, LR_14, R_7);
          T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(LVX_11, LL_13, Var_32);
        }
        else
        if ((LR_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.balance\'/3", (MR_String) "LR empty");
        }
        else
        {
          MR_Tuple LRX_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), LR_14, (MR_Integer) 0)));
          MR_Word LRL_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), LR_14, (MR_Integer) 2)));
          MR_Word LRR_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), LR_14, (MR_Integer) 3)));
          MR_Word Var_33;
          MR_Word Var_34;
          MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), LR_14, (MR_Integer) 1)));

          Var_33 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(LVX_11, LL_13, LRL_17);
          Var_34 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(X_5, LRR_18, R_7);
          T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(LRX_15, Var_33, Var_34);
        }
      }
    else
    {
      MR_Integer Var_41 = (HL_9 + (MR_Integer) 1);

      succeeded = (HR_10 > Var_41);
      if (succeeded)
        if ((R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.balance\'/3", (MR_String) "R empty");
        }
        else
        {
          MR_Tuple RVX_19 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), R_7, (MR_Integer) 0)));
          MR_Word RL_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_7, (MR_Integer) 2)));
          MR_Word RR_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_7, (MR_Integer) 3)));
          MR_Integer Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), R_7, (MR_Integer) 1)));
          MR_Integer Var_43;
          MR_Integer Var_44;

          if ((RR_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            Var_43 = (MR_Integer) 0;
          else
          {
            MR_Tuple Var_79 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), RR_22, (MR_Integer) 0)));
            MR_Word Var_81;
            MR_Word Var_82;

            Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), RR_22, (MR_Integer) 1)));
            Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), RR_22, (MR_Integer) 2)));
            Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), RR_22, (MR_Integer) 3)));
          }
          if ((RL_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            Var_44 = (MR_Integer) 0;
          else
          {
            MR_Tuple Var_83 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), RL_21, (MR_Integer) 0)));
            MR_Word Var_85;
            MR_Word Var_86;

            Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), RL_21, (MR_Integer) 1)));
            Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), RL_21, (MR_Integer) 2)));
            Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), RL_21, (MR_Integer) 3)));
          }
          succeeded = (Var_43 >= Var_44);
          if (succeeded)
          {
            MR_Word Var_45;

            Var_45 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(X_5, L_6, RL_21);
            T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(RVX_19, Var_45, RR_22);
          }
          else
          if ((RL_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.balance\'/3", (MR_String) "RL empty");
          }
          else
          {
            MR_Tuple RLX_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), RL_21, (MR_Integer) 0)));
            MR_Word RLL_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), RL_21, (MR_Integer) 2)));
            MR_Word RLR_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), RL_21, (MR_Integer) 3)));
            MR_Word Var_46;
            MR_Word Var_47;
            MR_Integer Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), RL_21, (MR_Integer) 1)));

            Var_46 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(X_5, L_6, RLL_25);
            Var_47 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(RVX_19, RLR_26, RR_22);
            T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(RLX_23, Var_46, Var_47);
          }
        }
      else
      {
        MR_Integer HT_27;
        MR_Integer Var_55;

        succeeded = (HL_9 > HR_10);
        if (succeeded)
          Var_55 = HL_9;
        else
          Var_55 = HR_10;
        HT_27 = ((MR_Integer) 1 + Var_55);
        {
          T_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), T_8, 0) = ((MR_Box) (X_5));
          MR_hl_field(MR_mktag(1), T_8, 1) = ((MR_Box) (HT_27));
          MR_hl_field(MR_mktag(1), T_8, 2) = ((MR_Box) (L_6));
          MR_hl_field(MR_mktag(1), T_8, 3) = ((MR_Box) (R_7));
        }
      }
    }
    return T_8;
  }
}

static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(
  MR_Tuple X_5,
  MR_Word L_6,
  MR_Word R_7)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__4_4;
    MR_Integer Var_8;
    MR_Integer Var_13;
    MR_Integer Var_14;
    MR_Integer Var_15;

    if ((L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      Var_14 = (MR_Integer) 0;
    else
    {
      MR_Tuple Var_16 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), L_6, (MR_Integer) 0)));
      MR_Word Var_18;
      MR_Word Var_19;

      Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), L_6, (MR_Integer) 1)));
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), L_6, (MR_Integer) 2)));
      Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), L_6, (MR_Integer) 3)));
    }
    if ((R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      Var_15 = (MR_Integer) 0;
    else
    {
      MR_Tuple Var_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), R_7, (MR_Integer) 0)));
      MR_Word Var_22;
      MR_Word Var_23;

      Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), R_7, (MR_Integer) 1)));
      Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_7, (MR_Integer) 2)));
      Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_7, (MR_Integer) 3)));
    }
    succeeded = (Var_14 > Var_15);
    if (succeeded)
      Var_13 = Var_14;
    else
      Var_13 = Var_15;
    Var_8 = ((MR_Integer) 1 + Var_13);
    {
      HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = ((MR_Box) (X_5));
      MR_hl_field(MR_mktag(1), HeadVar__4_4, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), HeadVar__4_4, 2) = ((MR_Box) (L_6));
      MR_hl_field(MR_mktag(1), HeadVar__4_4, 3) = ((MR_Box) (R_7));
    }
    return HeadVar__4_4;
  }
}

MR_bool MR_CALL 
mercury__diet__superset_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_5,
  MR_Word Superset_3,
  MR_Word Set_4)
{
  {
    MR_bool succeeded;

    if ((Set_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
    {
      MR_Tuple XY1_16;
      MR_Word R1_17;
      MR_Tuple XY2_18;
      MR_Word R2_19;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Tuple Var_12;
      MR_Integer Var_13;
      MR_Word Var_14;
      MR_Word Var_15;

      succeeded = ((MR_tag((MR_Word) Superset_3)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_12 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Superset_3, (MR_Integer) 0)));
        Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Superset_3, (MR_Integer) 1)));
        Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Superset_3, (MR_Integer) 2)));
        Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Superset_3, (MR_Integer) 3)));
        mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_5, Set_4, &XY1_16, &R1_17);
        mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_5, Superset_3, &XY2_18, &R2_19);
        Var_20 = (MR_Integer) 1;
        mercury__diet__subset_2_5_p_0(TypeClassInfo_for_diet_element_5, XY1_16, R1_17, XY2_18, R2_19, &Var_21);
        succeeded = (Var_20 == Var_21);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__diet__subset_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word T1_3,
  MR_Word T2_4)
{
  {
    MR_bool succeeded;

    if ((T1_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
    {
      MR_Tuple XY1_13;
      MR_Word R1_14;
      MR_Tuple XY2_15;
      MR_Word R2_16;
      MR_Word Var_17;
      MR_Word Var_19;
      MR_Tuple Var_9;
      MR_Integer Var_10;
      MR_Word Var_11;
      MR_Word Var_12;

      succeeded = ((MR_tag((MR_Word) T2_4)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T2_4, (MR_Integer) 0)));
        Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T2_4, (MR_Integer) 1)));
        Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T2_4, (MR_Integer) 2)));
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T2_4, (MR_Integer) 3)));
        mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_18, T1_3, &XY1_13, &R1_14);
        mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_18, T2_4, &XY2_15, &R2_16);
        Var_17 = (MR_Integer) 1;
        mercury__diet__subset_2_5_p_0(TypeClassInfo_for_diet_element_18, XY1_13, R1_14, XY2_15, R2_16, &Var_19);
        succeeded = (Var_17 == Var_19);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mercury__diet__subset_2_5_p_0(
  MR_Word TypeClassInfo_for_diet_element_56,
  MR_Tuple HeadVar__1_1,
  MR_Word R1_8,
  MR_Tuple HeadVar__3_3,
  MR_Word R2_11,
  MR_Word * IsSubset_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box X1_6 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Box Y1_7 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
    MR_Box X2_9 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
    MR_Box Y2_10 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));

    /* setup for tailcalls optimized into a loop */
    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_56), X1_6, X2_9);
    if (succeeded)
      *IsSubset_12 = (MR_Integer) 0;
    else
    {
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));

      succeeded = func_1(((MR_Box) TypeClassInfo_for_diet_element_56), Y2_10, X1_6);
      if (succeeded)
        if ((R2_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *IsSubset_12 = (MR_Integer) 0;
        else
        {
          MR_Tuple Min2_17;
          MR_Word MinR2_18;
          MR_Tuple next_value_of_HeadVar__3_3;
          MR_Word next_value_of_R2_11;

          mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_56, R2_11, &Min2_17, &MinR2_18);
          /* direct tailcall eliminated */
          next_value_of_HeadVar__3_3 = Min2_17;
          next_value_of_R2_11 = MinR2_18;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          R2_11 = next_value_of_R2_11;
          continue;
        }
      else
      {
        MR_Word TypeInfo_58_58;
        MR_Word Upper_19;

{
#define MR_PROC_LABEL mercury__diet__subset_2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_56 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_58_58  = TypeInfo;
}
        mercury__builtin__compare_3_p_0(TypeInfo_58_58, &Upper_19, Y1_7, Y2_10);
        switch (Upper_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            if ((R1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *IsSubset_12 = (MR_Integer) 1;
            else
            {
              MR_Tuple Min1_24;
              MR_Word MinR1_25;
              MR_Tuple next_value_of_HeadVar__1_1;
              MR_Word next_value_of_R1_8;

              mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_56, R1_8, &Min1_24, &MinR1_25);
              /* direct tailcall eliminated */
              next_value_of_HeadVar__1_1 = Min1_24;
              next_value_of_R1_8 = MinR1_25;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              R1_8 = next_value_of_R1_8;
              continue;
            }
            break;
          case (MR_Integer) 0:
            if ((R1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *IsSubset_12 = (MR_Integer) 1;
            else
            if ((R2_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *IsSubset_12 = (MR_Integer) 0;
            else
            {
              MR_Tuple Min2_40;
              MR_Word MinR2_41;
              MR_Tuple Min1_42;
              MR_Word MinR1_43;
              MR_Tuple next_value_of_HeadVar__1_1;
              MR_Word next_value_of_R1_8;
              MR_Tuple next_value_of_HeadVar__3_3;
              MR_Word next_value_of_R2_11;

              mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_56, R1_8, &Min1_42, &MinR1_43);
              mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_56, R2_11, &Min2_40, &MinR2_41);
              /* direct tailcall eliminated */
              next_value_of_HeadVar__1_1 = Min1_42;
              next_value_of_R1_8 = MinR1_43;
              next_value_of_HeadVar__3_3 = Min2_40;
              next_value_of_R2_11 = MinR2_41;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              R1_8 = next_value_of_R1_8;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              R2_11 = next_value_of_R2_11;
              continue;
            }
            break;
          case (MR_Integer) 2:
            *IsSubset_12 = (MR_Integer) 0;
            break;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__diet__member_2_p_1(
  MR_Word TypeClassInfo_for_diet_element_13,
  MR_Box * Elem_1,
  MR_Word Set_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Set_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Box X_7;
    MR_Box Y_8;
    MR_Word Left_10;
    MR_Word Right_11;
    MR_Tuple Var_12;
    MR_Integer Var_9;

    if (succeeded)
    {
      Var_12 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Set_2, (MR_Integer) 0)));
      Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Set_2, (MR_Integer) 1)));
      Left_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Set_2, (MR_Integer) 2)));
      Right_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Set_2, (MR_Integer) 3)));
      X_7 = (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0));
      Y_8 = (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1));
      mercury__diet__member_2_p_1(TypeClassInfo_for_diet_element_13, Elem_1, Left_10, cont, cont_env_ptr);
      mercury__diet__member_in_range_3_p_0(TypeClassInfo_for_diet_element_13, X_7, Y_8, Elem_1, cont, cont_env_ptr);
      mercury__diet__member_2_p_1(TypeClassInfo_for_diet_element_13, Elem_1, Right_11, cont, cont_env_ptr);
    }
  }
}

static void MR_CALL 
mercury__diet__member_in_range_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_8,
  MR_Box Lo_4,
  MR_Box Hi_5,
  MR_Box * Elem_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_8, (MR_Integer) 0)), (MR_Integer) 5)));

    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_8), Lo_4, Hi_5);
    if (succeeded)
    {
      *Elem_6 = Lo_4;
      cont(cont_env_ptr);
      {
        MR_Box Var_7;
        MR_Box MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_8, (MR_Integer) 0)), (MR_Integer) 6)));

        Var_7 = func_1(((MR_Box) TypeClassInfo_for_diet_element_8), Lo_4);
        mercury__diet__member_in_range_3_p_0(TypeClassInfo_for_diet_element_8, Var_7, Hi_5, Elem_6, cont, cont_env_ptr);
      }
    }
    else
    {
      *Elem_6 = Lo_4;
      cont(cont_env_ptr);
    }
  }
}

MR_bool MR_CALL 
mercury__diet__member_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_13,
  MR_Box Elem_1,
  MR_Word Set_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__diet__contains_2_p_0(TypeClassInfo_for_diet_element_13, Set_2, Elem_1);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__diet__contains_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_11,
  MR_Word T_3,
  MR_Box Z_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) T_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Box X_5;
    MR_Box Y_6;
    MR_Word L_8;
    MR_Word R_9;
    MR_Tuple Var_10;
    MR_Integer Var_7;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      Var_10 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T_3, (MR_Integer) 0)));
      Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T_3, (MR_Integer) 1)));
      L_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_3, (MR_Integer) 2)));
      R_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), T_3, (MR_Integer) 3)));
      X_5 = (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0));
      Y_6 = (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_11, (MR_Integer) 0)), (MR_Integer) 5)));
      succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_11), Z_4, X_5);
      if (succeeded)
      {
        MR_Word next_value_of_T_3 = L_8;

        /* direct tailcall eliminated */
        T_3 = next_value_of_T_3;
        continue;
      }
      else
      {
        MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_11, (MR_Integer) 0)), (MR_Integer) 5)));

        succeeded = func_1(((MR_Box) TypeClassInfo_for_diet_element_11), Y_6, Z_4);
        if (succeeded)
        {
          MR_Word next_value_of_T_3 = R_9;

          /* direct tailcall eliminated */
          T_3 = next_value_of_T_3;
          continue;
        }
        else
          succeeded = MR_TRUE;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__is_singleton_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_10,
  MR_Word Set_3,
  MR_Box * X_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Set_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Word TypeInfo_12_12;
    MR_Tuple Var_6;
    MR_Box Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Integer TypeInfoIndex_11;
    MR_Integer Var_5;

    if (succeeded)
    {
      Var_6 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Set_3, (MR_Integer) 0)));
      Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Set_3, (MR_Integer) 1)));
      Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Set_3, (MR_Integer) 2)));
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Set_3, (MR_Integer) 3)));
      *X_4 = (MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 0));
      Var_7 = (MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 1));
      TypeInfoIndex_11 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__diet__is_singleton_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_10 ;
	Index =  TypeInfoIndex_11 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_12_12  = TypeInfo;
}
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, Var_7, *X_4);
      if (succeeded)
      {
        succeeded = (Var_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
          succeeded = (Var_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__diet__make_interval_set_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_9,
  MR_Box X_4,
  MR_Box Y_5)
{
  {
    MR_bool succeeded;
    MR_Word T_6;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_diet_element_9, (MR_Integer) 0)), (MR_Integer) 5)));

    succeeded = func_0(((MR_Box) TypeClassInfo_for_diet_element_9), Y_5, X_4);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Tuple Var_7;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word TypeInfo_11_11;

{
#define MR_PROC_LABEL mercury__diet__make_interval_set_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_9 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_11_11  = TypeInfo;
}
      {
        Var_7 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_7, 0) = X_4;
        MR_hl_field(MR_mktag(0), Var_7, 1) = Y_5;
      }
      Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      Var_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), T_6, 0) = ((MR_Box) (Var_7));
        MR_hl_field(MR_mktag(1), T_6, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), T_6, 2) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(1), T_6, 3) = ((MR_Box) (Var_19));
      }
    }
    else
    {
      MR_Word TypeInfo_13_13;

{
#define MR_PROC_LABEL mercury__diet__make_interval_set_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_9 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_13_13  = TypeInfo;
}
      mercury__diet__unexpected_interval_3_p_0(TypeInfo_13_13, (MR_String) "function \140diet.make_interval_set\'/2", X_4, Y_5);
    }
    return T_6;
  }
}

void MR_CALL 
mercury__diet__unexpected_interval_3_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_String PredName_4,
  MR_Box X_5,
  MR_Box Y_6)
{
  {
    MR_Word TypeCtorInfo_13_31;
    MR_Word TypeClassInfo_for_op_table_40;
    MR_Word TypeCtorInfo_13_56;
    MR_Word TypeClassInfo_for_op_table_65;
    MR_String Var_8;
    MR_String Var_10;
    MR_String Var_11;
    MR_String Var_12;
    MR_String Var_14;
    MR_String Var_15;
    MR_Word V_10_28;
    MR_Word V_9_29;
    MR_Word V_11_30;
    MR_Integer V_10_37;
    MR_Integer V_13_38;
    MR_Word V_10_53;
    MR_Word V_9_54;
    MR_Word V_11_55;
    MR_Integer V_10_62;
    MR_Integer V_13_63;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_V_13_38;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
    MR_Box conv3_V_13_63;

    V_10_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    TypeClassInfo_for_op_table_40 = (MR_Word) &mercury__diet_scalar_common_1[0];
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_40, (MR_Integer) 0)), (MR_Integer) 12)));
    conv1_V_13_38 = func_0(((MR_Box) TypeClassInfo_for_op_table_40), ((MR_Box) ((MR_Integer) 0)));
    V_13_38 = ((MR_Integer) conv1_V_13_38);
    V_10_37 = (V_13_38 + (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_T_17, (MR_Integer) 1, V_10_37, X_5, V_10_28, &V_9_29);
    TypeCtorInfo_13_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__reverse_2_p_0(TypeCtorInfo_13_31, V_9_29, &V_11_30);
    Var_11 = mercury__string__append_list_1_f_0(V_11_30);
    V_10_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    TypeClassInfo_for_op_table_65 = (MR_Word) &mercury__diet_scalar_common_1[0];
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_65, (MR_Integer) 0)), (MR_Integer) 12)));
    conv3_V_13_63 = func_2(((MR_Box) TypeClassInfo_for_op_table_65), ((MR_Box) ((MR_Integer) 0)));
    V_13_63 = ((MR_Integer) conv3_V_13_63);
    V_10_62 = (V_13_63 + (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_T_17, (MR_Integer) 1, V_10_62, Y_6, V_10_53, &V_9_54);
    TypeCtorInfo_13_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__reverse_2_p_0(TypeCtorInfo_13_56, V_9_54, &V_11_55);
    Var_15 = mercury__string__append_list_1_f_0(V_11_55);
    mercury__string__append_3_p_2(Var_15, (MR_String) "]", &Var_14);
    mercury__string__append_3_p_2((MR_String) ", ", Var_14, &Var_12);
    mercury__string__append_3_p_2(Var_11, Var_12, &Var_10);
    mercury__string__append_3_p_2((MR_String) "bad interval [", Var_10, &Var_8);
    {
      mercury__require__unexpected_3_p_0((MR_String) "diet", PredName_4, Var_8);
      return;
    }
  }
}

MR_Word MR_CALL 
mercury__diet__make_singleton_set_1_f_0(
  MR_Word TypeClassInfo_for_diet_element_6,
  MR_Box X_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Tuple Var_4;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word TypeInfo_8_8;

{
#define MR_PROC_LABEL mercury__diet__make_singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_6 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_8_8  = TypeInfo;
}
    {
      Var_4 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_4, 0) = X_3;
      MR_hl_field(MR_mktag(0), Var_4, 1) = X_3;
    }
    Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 3) = ((MR_Box) (Var_12));
    }
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__diet__equal_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word T1_3,
  MR_Word T2_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((T1_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = (T2_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    else
    {
      MR_Word TypeInfo_22_22;
      MR_Word TypeInfo_23_23;
      MR_Word TypeCtorInfo_24_24;
      MR_Word TypeInfo_26_26;
      MR_Word R1_15;
      MR_Word R2_16;
      MR_Tuple Var_17;
      MR_Tuple Var_20;
      MR_Integer PolyConst1_21;
      MR_Integer PolyConst2_25;
      MR_Tuple Var_9;
      MR_Integer Var_10;
      MR_Word Var_11;
      MR_Word Var_12;
      MR_Word next_value_of_T1_3;
      MR_Word next_value_of_T2_4;

      succeeded = ((MR_tag((MR_Word) T2_4)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T2_4, (MR_Integer) 0)));
        Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T2_4, (MR_Integer) 1)));
        Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), T2_4, (MR_Integer) 2)));
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), T2_4, (MR_Integer) 3)));
        mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_19, T1_3, &Var_17, &R1_15);
        mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_19, T2_4, &Var_20, &R2_16);
        TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
        PolyConst2_25 = (MR_Integer) 2;
        PolyConst1_21 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__diet__equal_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_19 ;
	Index =  PolyConst1_21 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_22_22  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__diet__equal_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_diet_element_19 ;
	Index =  PolyConst1_21 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_23_23  = TypeInfo;
}
        {
          TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_26_26, 0) = ((MR_Box) (TypeCtorInfo_24_24));
          MR_hl_field(MR_mktag(0), TypeInfo_26_26, 1) = ((MR_Box) (PolyConst2_25));
          MR_hl_field(MR_mktag(0), TypeInfo_26_26, 2) = ((MR_Box) (TypeInfo_22_22));
          MR_hl_field(MR_mktag(0), TypeInfo_26_26, 3) = ((MR_Box) (TypeInfo_23_23));
        }
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (Var_17)), ((MR_Box) (Var_20)));
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_T1_3 = R1_15;
          next_value_of_T2_4 = R2_16;
          T1_3 = next_value_of_T1_3;
          T2_4 = next_value_of_T2_4;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
mercury__diet__take_min_iter_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_21,
  MR_Word T0_4,
  MR_Tuple * X_5,
  MR_Word * T_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), T0_4, (MR_Integer) 3)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), T0_4, (MR_Integer) 2)));
    MR_Tuple Var_28 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), T0_4, (MR_Integer) 0)));
    MR_Integer Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), T0_4, (MR_Integer) 1)));

    /* setup for tailcalls optimized into a loop */
    if ((Var_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *X_5 = Var_28;
      *T_6 = Var_25;
    }
    else
    {
      MR_Tuple A_10 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0)));
      MR_Word L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 2)));
      MR_Word M_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 3)));
      MR_Word N0_15;
      MR_Word N1_16;
      MR_Integer Var_18;
      MR_Integer Var_19;
      MR_Integer Var_32;
      MR_Integer Var_33;
      MR_Integer Var_34;
      MR_Integer Var_52;
      MR_Integer Var_53;
      MR_Integer Var_54;
      MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1)));
      MR_Tuple Var_59;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word next_value_of_T0_4;

      if ((M_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        Var_33 = (MR_Integer) 0;
      else
      {
        MR_Tuple Var_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), M_13, (MR_Integer) 0)));
        MR_Word Var_37;
        MR_Word Var_38;

        Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), M_13, (MR_Integer) 1)));
        Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), M_13, (MR_Integer) 2)));
        Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), M_13, (MR_Integer) 3)));
      }
      if ((Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        Var_34 = (MR_Integer) 0;
      else
      {
        MR_Tuple Var_39 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0)));
        MR_Word Var_41;
        MR_Word Var_42;

        Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1)));
        Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 2)));
        Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 3)));
      }
      succeeded = (Var_33 > Var_34);
      if (succeeded)
        Var_32 = Var_33;
      else
        Var_32 = Var_34;
      Var_18 = ((MR_Integer) 1 + Var_32);
      {
        N0_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), N0_15, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), N0_15, 1) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(1), N0_15, 2) = ((MR_Box) (M_13));
        MR_hl_field(MR_mktag(1), N0_15, 3) = ((MR_Box) (Var_25));
      }
      if ((L_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        Var_53 = (MR_Integer) 0;
      else
      {
        MR_Tuple Var_55 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), L_12, (MR_Integer) 0)));
        MR_Word Var_57;
        MR_Word Var_58;

        Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), L_12, (MR_Integer) 1)));
        Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), L_12, (MR_Integer) 2)));
        Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), L_12, (MR_Integer) 3)));
      }
      Var_59 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), N0_15, (MR_Integer) 0)));
      Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(1), N0_15, (MR_Integer) 1)));
      Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), N0_15, (MR_Integer) 2)));
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), N0_15, (MR_Integer) 3)));
      succeeded = (Var_53 > Var_54);
      if (succeeded)
        Var_52 = Var_53;
      else
        Var_52 = Var_54;
      Var_19 = ((MR_Integer) 1 + Var_52);
      {
        N1_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), N1_16, 0) = ((MR_Box) (A_10));
        MR_hl_field(MR_mktag(1), N1_16, 1) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(1), N1_16, 2) = ((MR_Box) (L_12));
        MR_hl_field(MR_mktag(1), N1_16, 3) = ((MR_Box) (N0_15));
      }
      /* direct tailcall eliminated */
      next_value_of_T0_4 = N1_16;
      T0_4 = next_value_of_T0_4;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__is_non_empty_1_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Tuple Var_2;
    MR_Integer Var_3;
    MR_Word Var_4;
    MR_Word Var_5;

    if (succeeded)
    {
      Var_2 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__diet__is_empty_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = (HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    return succeeded;
  }
}

void MR_CALL 
mercury__diet__empty_1_p_1(
  MR_Word TypeInfo_for_T_2,
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
}

MR_bool MR_CALL 
mercury__diet__empty_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Var_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    succeeded = mercury__diet____Unify____diet_1_0(TypeInfo_for_T_2, HeadVar__1_1, Var_3);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__diet____Unify____diet_1_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    /* setup for tailcalls optimized into a loop */
    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word TypeCtorInfo_16_16;
      MR_Word TypeInfo_18_18;
      MR_Tuple ArgX1_5 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Tuple ArgY1_6;
      MR_Integer ArgX2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_10;
      MR_Word ArgX4_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_12;
      MR_Integer PolyConst2_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        ArgY3_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
        ArgY4_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
        TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
        PolyConst2_17 = (MR_Integer) 2;
        {
          TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (TypeCtorInfo_16_16));
          MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (PolyConst2_17));
          MR_hl_field(MR_mktag(0), TypeInfo_18_18, 2) = ((MR_Box) (TypeInfo_for_T_15));
          MR_hl_field(MR_mktag(0), TypeInfo_18_18, 3) = ((MR_Box) (TypeInfo_for_T_15));
        }
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
        if (succeeded)
        {
          succeeded = (ArgX2_7 == ArgY2_8);
          if (succeeded)
          {
            succeeded = mercury__diet____Unify____diet_1_0(TypeInfo_for_T_15, ArgX3_9, ArgY3_10);
            if (succeeded)
            {
              /* direct tailcall eliminated */
              next_value_of_HeadVar__1_1 = ArgX4_11;
              next_value_of_HeadVar__2_2 = ArgY4_12;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__diet__init_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
}

MR_Word MR_CALL 
mercury__diet__init_0_f_0(
  MR_Word TypeInfo_for_T_2)
{
  {
    MR_Word HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
mercury__diet____Unify____diet_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__diet____Unify____diet_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__diet____Compare____diet_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__diet____Compare____diet_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__diet____Unify____interval_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__diet____Unify____interval_1_0(((MR_Word) wrapper_arg_1), ((MR_Tuple) wrapper_arg_2), ((MR_Tuple) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__diet____Compare____interval_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__diet____Compare____interval_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Tuple) wrapper_arg_3), ((MR_Tuple) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__less_than_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__less_than_2_2_p_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static MR_Box MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__successor_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__successor_1_1_f_0(((MR_Integer) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__predecessor_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__predecessor_1_1_f_0(((MR_Integer) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void mercury__diet__init(void)
{
}

void mercury__diet__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__diet__diet__type_ctor_info_diet_1);
	MR_register_type_ctor_info(&mercury__diet__diet__type_ctor_info_interval_1);
}

void mercury__diet__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__diet__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module diet. */
