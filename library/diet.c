/*
** Automatically generated from `diet.m'
** by the Mercury compiler,
** version rotd-2026-01-01
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


// :- module diet.
// :- implementation.

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
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "fat_sparse_bitset.mih"
#include "fatter_sparse_bitset.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
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
#include "tree_bitset.mih"
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
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
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

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(
  MR_Word Var_22,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
  MR_Word Var_18,
  MR_Word TypeClassInfo_for_diet_element_14,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(
  MR_Word Var_22,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
  MR_Word Var_18,
  MR_Word TypeClassInfo_for_diet_element_14,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(
  MR_Word Var_26,
  MR_Word T_6,
  MR_Word STATE_VARIABLE_Acc_0_13,
  MR_Word * STATE_VARIABLE_Acc_14);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(
  MR_Word Var_22,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word T_6,
  MR_Word STATE_VARIABLE_Acc_0_13,
  MR_Word * STATE_VARIABLE_Acc_14);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_48_95_95_91_49_44_32_51_44_32_53_93_95_48_5_p_0(
  MR_Word Var_18,
  MR_Word TypeClassInfo_for_diet_element_14,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Word STATE_VARIABLE_A_0_10,
  MR_Word * STATE_VARIABLE_A_11);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
  MR_Word Var_22,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(
  MR_Word Var_32,
  MR_Word Var_33,
  MR_Word TypeClassInfo_for_diet_element_25,
  MR_Word T_8,
  MR_Word STATE_VARIABLE_Acc1_0_16,
  MR_Word * STATE_VARIABLE_Acc1_17,
  MR_Word STATE_VARIABLE_Acc2_0_18,
  MR_Word * STATE_VARIABLE_Acc2_19);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_117_112_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_7_p_0(
  MR_Word Var_27,
  MR_Word Var_28,
  MR_Word TypeClassInfo_for_diet_element_20,
  MR_Box Lo_9,
  MR_Box Hi_10,
  MR_Word STATE_VARIABLE_A_0_13,
  MR_Word * STATE_VARIABLE_A_14,
  MR_Word STATE_VARIABLE_B_0_15,
  MR_Word * STATE_VARIABLE_B_16);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
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
  MR_Word TypeClassInfo_for_diet_element_44,
  MR_Tuple HeadVar__1_1,
  MR_Word Right0_11,
  MR_Word Left0_12,
  MR_Word Head0_13,
  MR_Word Stream0_14,
  MR_Word * Result_15,
  MR_Word * Head_16,
  MR_Word * Stream_17);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
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
  MR_Word TypeClassInfo_for_diet_element_48,
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
mercury__diet__subset_2_5_p_0(
  MR_Word TypeClassInfo_for_diet_element_44,
  MR_Tuple HeadVar__1_1,
  MR_Word R1_8,
  MR_Tuple HeadVar__3_3,
  MR_Word R2_11,
  MR_Word * IsSubset_12);

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
  MR_Word TypeClassInfo_for_diet_element_36,
  MR_Tuple HeadVar__1_1,
  MR_Word Right0_11,
  MR_Word Left0_12,
  MR_Word Head0_13,
  MR_Word Stream0_14,
  MR_Word * Output_15,
  MR_Word * Head_16,
  MR_Word * Stream_17);

static void MR_CALL 
mercury__diet__take_min_iter_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_21,
  MR_Word T0_4,
  MR_Tuple * X_5,
  MR_Word * T_6);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

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
mercury__diet__member_in_range_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_8,
  MR_Box Lo_4,
  MR_Box Hi_5,
  MR_Box * Elem_6,
  MR_Cont cont,
  void * cont_env_ptr);

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

static /* final */ const MR_Box mercury__diet_scalar_common_4[1][5];




static /* final */ const MR_Box mercury__diet_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
};

static /* final */ const MR_Box mercury__diet_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__diet_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__diet_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__diet_scalar_common_4[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__diet_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
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
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"


static const MR_DuFunctorDesc mercury__diet__diet__du_functor_desc_diet_1_0 = {
  (MR_String) "empty",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__diet____vpti_tuple_2__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__diet__diet__pti_diet_1__pseudo_1 = {
  &mercury__diet__diet__type_ctor_info_diet_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo mercury__diet__diet__field_types_diet_1_1[4] = {
  (MR_PseudoTypeInfo) (&mercury__diet____vpti_tuple_2__pseudo_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__diet__diet__pti_diet_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__diet__diet__pti_diet_1__pseudo_1)
};

static const MR_ConstString mercury__diet__diet__field_names_diet_1_1[4] = {
  (MR_String) "interval",
  (MR_String) "node_height",
  (MR_String) "left",
  (MR_String) "right"
};

static const MR_DuFunctorDesc mercury__diet__diet__du_functor_desc_diet_1_1 = {
  (MR_String) "node",
  INT16_C(4),
  UINT16_C(13),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__diet__diet__field_types_diet_1_1,
  mercury__diet__diet__field_names_diet_1_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__diet__diet__du_stag_ordered_diet_1_0[1] = { &mercury__diet__diet__du_functor_desc_diet_1_0 };

static const MR_DuFunctorDescPtr mercury__diet__diet__du_stag_ordered_diet_1_1[1] = { &mercury__diet__diet__du_functor_desc_diet_1_1 };

static const MR_DuPtagLayout mercury__diet__diet__du_ptag_ordered_diet_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__diet__diet__du_stag_ordered_diet_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__diet__diet__du_stag_ordered_diet_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__diet____Unify____diet_1_0_10001)),
  ((MR_Box) (mercury__diet____Compare____diet_1_0_10001)),
  (MR_String) "diet",
  (MR_String) "diet",
  { mercury__diet__diet__du_name_ordered_diet_1 },
  { mercury__diet__diet__du_ptag_ordered_diet_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__diet__diet__functor_number_map_diet_1,

};

const MR_TypeCtorInfo_Struct mercury__diet__diet__type_ctor_info_interval_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__diet____Unify____interval_1_0_10001)),
  ((MR_Box) (mercury__diet____Compare____interval_1_0_10001)),
  (MR_String) "diet",
  (MR_String) "interval",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__diet____vpti_tuple_2__pseudo_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_BaseTypeclassInfo base_typeclass_info_diet__diet_element__arity1__int__arity0__[8] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) (mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__less_than_2_2_p_0_10001)),
  ((MR_Box) (mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__successor_1_1_f_0_10001)),
  ((MR_Box) (mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__predecessor_1_1_f_0_10001))
};

static const MR_ConstString mercury__diet__diet__type_class_id_var_names_diet_element_1[1] = { (MR_String) "T" };

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

MR_Integer MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__predecessor_1_1_f_0(
  MR_Integer X_3)
{
  MR_Integer HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) X_3 - (MR_Unsigned) 1);

  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__successor_1_1_f_0(
  MR_Integer X_3)
{
  MR_Integer HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) X_3 + (MR_Unsigned) 1);

  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__less_than_2_2_p_0(
  MR_Integer X_3,
  MR_Integer Y_4)
{
  MR_bool succeeded = (X_3 < Y_4);

  return succeeded;
}

void MR_CALL 
mercury__diet____Compare____interval_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Tuple HeadVar__2_2,
  MR_Tuple HeadVar__3_3)
{
  MR_Word TypeInfo_8_8;
  MR_Tuple Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Tuple Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, TypeInfo_8_8, 2) = ((MR_Box) (TypeInfo_for_T_6));
    MR_hl_field(0, TypeInfo_8_8, 3) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__builtin__compare_3_p_0(TypeInfo_8_8, HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__diet____Unify____interval_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Tuple HeadVar__1_1,
  MR_Tuple HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Tuple Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Tuple Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_7_7, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
    MR_hl_field(0, TypeInfo_7_7, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, TypeInfo_7_7, 2) = ((MR_Box) (TypeInfo_for_T_5));
    MR_hl_field(0, TypeInfo_7_7, 3) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_7_7, ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mercury__diet____Compare____diet_1_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Tuple ArgX1_4 = ((MR_Tuple) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Tuple ArgY1_5 = ((MR_Tuple) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 3))));
      MR_Word SubResult1_6;
      MR_Word TypeInfo_19_19;

      {
        TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
        MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, TypeInfo_19_19, 2) = ((MR_Box) (TypeInfo_for_T_17));
        MR_hl_field(0, TypeInfo_19_19, 3) = ((MR_Box) (TypeInfo_for_T_17));
      }
      mercury__builtin__compare_3_p_0(TypeInfo_19_19, &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_7 == ArgY2_8);
          if (succeeded)
            SubResult2_9 = (MR_Integer) 0;
          else
            SubResult2_9 = (MR_Integer) 2;
        }
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__diet____Compare____diet_1_0(TypeInfo_for_T_17, &SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word next_value_of_HeadVar__2_2 = ArgX4_13;
            MR_Word next_value_of_HeadVar__3_3 = ArgY4_14;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
        }
      }
    }
    break;
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
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_12 == CastX_11);
    }
    else
    {
      MR_Word TypeCtorInfo_16_16;
      MR_Word TypeInfo_17_17;
      MR_Tuple ArgX1_3 = ((MR_Tuple) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Tuple ArgY1_4;
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer ArgY2_6;
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Word ArgY3_8;
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 3))));
      MR_Word ArgY4_10;
      MR_Integer PolyConst2_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Tuple) ((MR_hl_field(1, HeadVar__2_2, 0))));
        ArgY2_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
        ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
        ArgY4_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
        TypeCtorInfo_16_16 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_tuple_0);
        PolyConst2_18 = (MR_Integer) 2;
        {
          TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (TypeCtorInfo_16_16));
          MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (PolyConst2_18));
          MR_hl_field(0, TypeInfo_17_17, 2) = ((MR_Box) (TypeInfo_for_T_15));
          MR_hl_field(0, TypeInfo_17_17, 3) = ((MR_Box) (TypeInfo_for_T_15));
        }
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
        if (succeeded)
        {
          succeeded = (ArgX2_5 == ArgY2_6);
          if (succeeded)
          {
            succeeded = mercury__diet____Unify____diet_1_0(TypeInfo_for_T_15, ArgX3_7, ArgY3_8);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = ArgX4_9;
              next_value_of_HeadVar__2_2 = ArgY4_10;
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

MR_Box MR_CALL 
mercury__diet__predecessor_1_f_0(
  MR_Word TypeClassInfo_for_diet_element_3,
  MR_Box HeadVar__1_1)
{
  MR_Box HeadVar__2_2;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_3, 0)), 7))));

  HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_diet_element_3)), HeadVar__1_1);
  return HeadVar__2_2;
}

MR_Box MR_CALL 
mercury__diet__successor_1_f_0(
  MR_Word TypeClassInfo_for_diet_element_3,
  MR_Box HeadVar__1_1)
{
  MR_Box HeadVar__2_2;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_3, 0)), 6))));

  HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_diet_element_3)), HeadVar__1_1);
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__diet__less_than_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_3,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_3, 0)), 5))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_3)), HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

void MR_CALL 
mercury__diet__cons_interval_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box X_5,
  MR_Box Y_6,
  MR_Word L_7,
  MR_Word * HeadVar__4_4)
{
  MR_Tuple Var_8;

  {
    Var_8 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = X_5;
    MR_hl_field(0, Var_8, 1) = Y_6;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__4_4 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, base, 1) = ((MR_Box) (L_7));
  }
}

void MR_CALL 
mercury__diet__divide_2_6_p_0(
  MR_Word TypeClassInfo_for_diet_element_15,
  MR_Word Pred_7,
  MR_Box Elem_8,
  MR_Word STATE_VARIABLE_TrueSet_0_11,
  MR_Word * STATE_VARIABLE_TrueSet_12,
  MR_Word STATE_VARIABLE_FalseSet_0_13,
  MR_Word * STATE_VARIABLE_FalseSet_14)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, Pred_7, 1))));

  succeeded = func_0(((MR_Box) (Pred_7)), Elem_8);
  if (succeeded)
  {
    *STATE_VARIABLE_TrueSet_12 = mercury__diet__add_2_f_0(TypeClassInfo_for_diet_element_15, Elem_8, STATE_VARIABLE_TrueSet_0_11);
    *STATE_VARIABLE_FalseSet_14 = STATE_VARIABLE_FalseSet_0_13;
  }
  else
  {
    *STATE_VARIABLE_FalseSet_14 = mercury__diet__add_2_f_0(TypeClassInfo_for_diet_element_15, Elem_8, STATE_VARIABLE_FalseSet_0_13);
    *STATE_VARIABLE_TrueSet_12 = STATE_VARIABLE_TrueSet_0_11;
  }
}

void MR_CALL 
mercury__diet__insert_interval_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_8,
  MR_Tuple HeadVar__1_1,
  MR_Word Set0_6,
  MR_Word * Set_7)
{
  MR_Box X_4 = (MR_hl_field(0, HeadVar__1_1, 0));
  MR_Box Y_5 = (MR_hl_field(0, HeadVar__1_1, 1));

  mercury__diet__insert_interval_4_p_0(TypeClassInfo_for_diet_element_8, X_4, Y_5, Set0_6, Set_7);
}

MR_Word MR_CALL 
mercury__diet__singleton_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Tuple Z_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Z_3));
    MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(1, HeadVar__2_2, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, HeadVar__2_2, 3) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__diet__f_less_or_equal_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_5,
  MR_Box X_3,
  MR_Box Y_4)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_5, 0)), 5))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_5)), Y_4, X_3);
  succeeded = !(succeeded);
  return succeeded;
}

MR_bool MR_CALL 
mercury__diet__foldr_4_p_5(
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Box STATE_VARIABLE_Acc_1_16;
      MR_Box STATE_VARIABLE_Acc_2_17;
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      succeeded = mercury__diet__foldr_4_p_5(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_down_5_p_5(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_T_6 = L_11;
          next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
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
  MR_Word TypeInfo_for_A_15,
  MR_Word TypeClassInfo_for_diet_element_14,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_12;
      MR_Box Var_13;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_6, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      succeeded = func_1(((MR_Box) (P_6)), Hi_8, STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_1_12);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 7))));
        Var_13 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8);
        // direct tailcall eliminated
        ;
        next_value_of_Hi_8 = Var_13;
        next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_1_12;
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
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Box STATE_VARIABLE_Acc_1_16;
      MR_Box STATE_VARIABLE_Acc_2_17;
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      succeeded = mercury__diet__foldr_4_p_4(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_down_5_p_4(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_T_6 = L_11;
          next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
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
  MR_Word TypeInfo_for_A_15,
  MR_Word TypeClassInfo_for_diet_element_14,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_12;
      MR_Box Var_13;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_6, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      succeeded = func_1(((MR_Box) (P_6)), Hi_8, STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_1_12);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 7))));
        Var_13 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8);
        // direct tailcall eliminated
        ;
        next_value_of_Hi_8 = Var_13;
        next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_1_12;
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
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Box STATE_VARIABLE_Acc_1_16;
      MR_Box STATE_VARIABLE_Acc_2_17;
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      succeeded = mercury__diet__foldr_4_p_3(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_down_5_p_3(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_T_6 = L_11;
          next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
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
  MR_Word TypeInfo_for_A_15,
  MR_Word TypeClassInfo_for_diet_element_14,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_12;
      MR_Box Var_13;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_6, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      succeeded = func_1(((MR_Box) (P_6)), Hi_8, STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_1_12);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 7))));
        Var_13 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8);
        // direct tailcall eliminated
        ;
        next_value_of_Hi_8 = Var_13;
        next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_1_12;
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
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Box STATE_VARIABLE_Acc_1_16;
      MR_Box STATE_VARIABLE_Acc_2_17;
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      mercury__diet__foldr_4_p_2(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      mercury__diet__fold_down_5_p_2(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
      // direct tailcall eliminated
      ;
      next_value_of_T_6 = L_11;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_down_5_p_2(
  MR_Word TypeInfo_for_A_15,
  MR_Word TypeClassInfo_for_diet_element_14,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_12;
      MR_Box Var_13;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_6, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      func_1(((MR_Box) (P_6)), Hi_8, STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_1_12);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 7))));
      Var_13 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8);
      // direct tailcall eliminated
      ;
      next_value_of_Hi_8 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_1_12;
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
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Box STATE_VARIABLE_Acc_1_16;
      MR_Box STATE_VARIABLE_Acc_2_17;
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      mercury__diet__foldr_4_p_1(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      mercury__diet__fold_down_5_p_1(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
      // direct tailcall eliminated
      ;
      next_value_of_T_6 = L_11;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_down_5_p_1(
  MR_Word TypeInfo_for_A_15,
  MR_Word TypeClassInfo_for_diet_element_14,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_12;
      MR_Box Var_13;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_6, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      func_1(((MR_Box) (P_6)), Hi_8, STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_1_12);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 7))));
      Var_13 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8);
      // direct tailcall eliminated
      ;
      next_value_of_Hi_8 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_1_12;
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
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Box STATE_VARIABLE_Acc_1_16;
      MR_Box STATE_VARIABLE_Acc_2_17;
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      mercury__diet__foldr_4_p_0(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      mercury__diet__fold_down_5_p_0(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
      // direct tailcall eliminated
      ;
      next_value_of_T_6 = L_11;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_down_5_p_0(
  MR_Word TypeInfo_for_A_15,
  MR_Word TypeClassInfo_for_diet_element_14,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_12;
      MR_Box Var_13;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_6, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      func_1(((MR_Box) (P_6)), Hi_8, STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_1_12);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 7))));
      Var_13 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8);
      // direct tailcall eliminated
      ;
      next_value_of_Hi_8 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_1_12;
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
  MR_Box Acc_8;

  mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(F_5, TypeClassInfo_for_diet_element_19, Set_6, Acc0_7, &Acc_8);
  return Acc_8;
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(
  MR_Word Var_22,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Box STATE_VARIABLE_Acc_1_16;
      MR_Box STATE_VARIABLE_Acc_2_17;
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(Var_22, TypeClassInfo_for_diet_element_18, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(Var_22, TypeClassInfo_for_diet_element_18, X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
      // direct tailcall eliminated
      ;
      next_value_of_T_6 = L_11;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
  MR_Word Var_18,
  MR_Word TypeClassInfo_for_diet_element_14,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_12;
      MR_Box Var_13;
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_18, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      STATE_VARIABLE_A_1_12 = func_1(((MR_Box) (Var_18)), Hi_8, STATE_VARIABLE_A_0_10);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 7))));
      Var_13 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8);
      // direct tailcall eliminated
      ;
      next_value_of_Hi_8 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_1_12;
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
  MR_Word TypeInfo_for_A_47,
  MR_Word TypeInfo_for_B_48,
  MR_Word TypeInfo_for_C_49,
  MR_Word TypeInfo_for_D_50,
  MR_Word TypeInfo_for_E_51,
  MR_Word TypeClassInfo_for_diet_element_46,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T_14 == (MR_Word) ((MR_Unsigned) 0U)))
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
      MR_Word L_23 = ((MR_Word) ((MR_hl_field(1, T_14, 2))));
      MR_Word R_24 = ((MR_Word) ((MR_hl_field(1, T_14, 3))));
      MR_Tuple Var_35 = ((MR_Tuple) ((MR_hl_field(1, T_14, 0))));
      MR_Box STATE_VARIABLE_A_1_36;
      MR_Box STATE_VARIABLE_B_1_37;
      MR_Box STATE_VARIABLE_C_1_38;
      MR_Box STATE_VARIABLE_D_1_39;
      MR_Box STATE_VARIABLE_E_1_40;
      MR_Box STATE_VARIABLE_A_2_41;
      MR_Box STATE_VARIABLE_B_2_42;
      MR_Box STATE_VARIABLE_C_2_43;
      MR_Box STATE_VARIABLE_D_2_44;
      MR_Box STATE_VARIABLE_E_2_45;
      MR_Word next_value_of_T_14;
      MR_Box next_value_of_STATE_VARIABLE_A_0_25;
      MR_Box next_value_of_STATE_VARIABLE_B_0_27;
      MR_Box next_value_of_STATE_VARIABLE_C_0_29;
      MR_Box next_value_of_STATE_VARIABLE_D_0_31;
      MR_Box next_value_of_STATE_VARIABLE_E_0_33;

      X_20 = (MR_hl_field(0, Var_35, 0));
      Y_21 = (MR_hl_field(0, Var_35, 1));
      succeeded = mercury__diet__foldl5_12_p_5(TypeInfo_for_A_47, TypeInfo_for_B_48, TypeInfo_for_C_49, TypeInfo_for_D_50, TypeInfo_for_E_51, TypeClassInfo_for_diet_element_46, P_13, L_23, STATE_VARIABLE_A_0_25, &STATE_VARIABLE_A_1_36, STATE_VARIABLE_B_0_27, &STATE_VARIABLE_B_1_37, STATE_VARIABLE_C_0_29, &STATE_VARIABLE_C_1_38, STATE_VARIABLE_D_0_31, &STATE_VARIABLE_D_1_39, STATE_VARIABLE_E_0_33, &STATE_VARIABLE_E_1_40);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up5_13_p_5(TypeInfo_for_A_47, TypeInfo_for_B_48, TypeInfo_for_C_49, TypeInfo_for_D_50, TypeInfo_for_E_51, TypeClassInfo_for_diet_element_46, P_13, X_20, Y_21, STATE_VARIABLE_A_1_36, &STATE_VARIABLE_A_2_41, STATE_VARIABLE_B_1_37, &STATE_VARIABLE_B_2_42, STATE_VARIABLE_C_1_38, &STATE_VARIABLE_C_2_43, STATE_VARIABLE_D_1_39, &STATE_VARIABLE_D_2_44, STATE_VARIABLE_E_1_40, &STATE_VARIABLE_E_2_45);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_T_14 = R_24;
          next_value_of_STATE_VARIABLE_A_0_25 = STATE_VARIABLE_A_2_41;
          next_value_of_STATE_VARIABLE_B_0_27 = STATE_VARIABLE_B_2_42;
          next_value_of_STATE_VARIABLE_C_0_29 = STATE_VARIABLE_C_2_43;
          next_value_of_STATE_VARIABLE_D_0_31 = STATE_VARIABLE_D_2_44;
          next_value_of_STATE_VARIABLE_E_0_33 = STATE_VARIABLE_E_2_45;
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
  MR_Word TypeInfo_for_A_39,
  MR_Word TypeInfo_for_B_40,
  MR_Word TypeInfo_for_C_41,
  MR_Word TypeInfo_for_D_42,
  MR_Word TypeInfo_for_E_43,
  MR_Word TypeClassInfo_for_diet_element_38,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_38, 0)), 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_38)), Hi_16, Lo_15);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_32;
      MR_Box STATE_VARIABLE_B_1_33;
      MR_Box STATE_VARIABLE_C_1_34;
      MR_Box STATE_VARIABLE_D_1_35;
      MR_Box STATE_VARIABLE_E_1_36;
      MR_Box Var_37;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_14, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_15;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;
      MR_Box next_value_of_STATE_VARIABLE_E_0_30;

      succeeded = func_1(((MR_Box) (P_14)), Lo_15, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_1_32, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_1_33, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_1_34, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_1_35, STATE_VARIABLE_E_0_30, &STATE_VARIABLE_E_1_36);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_38, 0)), 6))));
        Var_37 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_38)), Lo_15);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_15 = Var_37;
        next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_1_32;
        next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_1_33;
        next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_1_34;
        next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_1_35;
        next_value_of_STATE_VARIABLE_E_0_30 = STATE_VARIABLE_E_1_36;
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
  MR_Word TypeInfo_for_A_47,
  MR_Word TypeInfo_for_B_48,
  MR_Word TypeInfo_for_C_49,
  MR_Word TypeInfo_for_D_50,
  MR_Word TypeInfo_for_E_51,
  MR_Word TypeClassInfo_for_diet_element_46,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T_14 == (MR_Word) ((MR_Unsigned) 0U)))
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
      MR_Word L_23 = ((MR_Word) ((MR_hl_field(1, T_14, 2))));
      MR_Word R_24 = ((MR_Word) ((MR_hl_field(1, T_14, 3))));
      MR_Tuple Var_35 = ((MR_Tuple) ((MR_hl_field(1, T_14, 0))));
      MR_Box STATE_VARIABLE_A_1_36;
      MR_Box STATE_VARIABLE_B_1_37;
      MR_Box STATE_VARIABLE_C_1_38;
      MR_Box STATE_VARIABLE_D_1_39;
      MR_Box STATE_VARIABLE_E_1_40;
      MR_Box STATE_VARIABLE_A_2_41;
      MR_Box STATE_VARIABLE_B_2_42;
      MR_Box STATE_VARIABLE_C_2_43;
      MR_Box STATE_VARIABLE_D_2_44;
      MR_Box STATE_VARIABLE_E_2_45;
      MR_Word next_value_of_T_14;
      MR_Box next_value_of_STATE_VARIABLE_A_0_25;
      MR_Box next_value_of_STATE_VARIABLE_B_0_27;
      MR_Box next_value_of_STATE_VARIABLE_C_0_29;
      MR_Box next_value_of_STATE_VARIABLE_D_0_31;
      MR_Box next_value_of_STATE_VARIABLE_E_0_33;

      X_20 = (MR_hl_field(0, Var_35, 0));
      Y_21 = (MR_hl_field(0, Var_35, 1));
      succeeded = mercury__diet__foldl5_12_p_4(TypeInfo_for_A_47, TypeInfo_for_B_48, TypeInfo_for_C_49, TypeInfo_for_D_50, TypeInfo_for_E_51, TypeClassInfo_for_diet_element_46, P_13, L_23, STATE_VARIABLE_A_0_25, &STATE_VARIABLE_A_1_36, STATE_VARIABLE_B_0_27, &STATE_VARIABLE_B_1_37, STATE_VARIABLE_C_0_29, &STATE_VARIABLE_C_1_38, STATE_VARIABLE_D_0_31, &STATE_VARIABLE_D_1_39, STATE_VARIABLE_E_0_33, &STATE_VARIABLE_E_1_40);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up5_13_p_4(TypeInfo_for_A_47, TypeInfo_for_B_48, TypeInfo_for_C_49, TypeInfo_for_D_50, TypeInfo_for_E_51, TypeClassInfo_for_diet_element_46, P_13, X_20, Y_21, STATE_VARIABLE_A_1_36, &STATE_VARIABLE_A_2_41, STATE_VARIABLE_B_1_37, &STATE_VARIABLE_B_2_42, STATE_VARIABLE_C_1_38, &STATE_VARIABLE_C_2_43, STATE_VARIABLE_D_1_39, &STATE_VARIABLE_D_2_44, STATE_VARIABLE_E_1_40, &STATE_VARIABLE_E_2_45);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_T_14 = R_24;
          next_value_of_STATE_VARIABLE_A_0_25 = STATE_VARIABLE_A_2_41;
          next_value_of_STATE_VARIABLE_B_0_27 = STATE_VARIABLE_B_2_42;
          next_value_of_STATE_VARIABLE_C_0_29 = STATE_VARIABLE_C_2_43;
          next_value_of_STATE_VARIABLE_D_0_31 = STATE_VARIABLE_D_2_44;
          next_value_of_STATE_VARIABLE_E_0_33 = STATE_VARIABLE_E_2_45;
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
  MR_Word TypeInfo_for_A_39,
  MR_Word TypeInfo_for_B_40,
  MR_Word TypeInfo_for_C_41,
  MR_Word TypeInfo_for_D_42,
  MR_Word TypeInfo_for_E_43,
  MR_Word TypeClassInfo_for_diet_element_38,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_38, 0)), 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_38)), Hi_16, Lo_15);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_32;
      MR_Box STATE_VARIABLE_B_1_33;
      MR_Box STATE_VARIABLE_C_1_34;
      MR_Box STATE_VARIABLE_D_1_35;
      MR_Box STATE_VARIABLE_E_1_36;
      MR_Box Var_37;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_14, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_15;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;
      MR_Box next_value_of_STATE_VARIABLE_E_0_30;

      succeeded = func_1(((MR_Box) (P_14)), Lo_15, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_1_32, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_1_33, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_1_34, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_1_35, STATE_VARIABLE_E_0_30, &STATE_VARIABLE_E_1_36);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_38, 0)), 6))));
        Var_37 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_38)), Lo_15);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_15 = Var_37;
        next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_1_32;
        next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_1_33;
        next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_1_34;
        next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_1_35;
        next_value_of_STATE_VARIABLE_E_0_30 = STATE_VARIABLE_E_1_36;
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
  MR_Word TypeInfo_for_A_47,
  MR_Word TypeInfo_for_B_48,
  MR_Word TypeInfo_for_C_49,
  MR_Word TypeInfo_for_D_50,
  MR_Word TypeInfo_for_E_51,
  MR_Word TypeClassInfo_for_diet_element_46,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T_14 == (MR_Word) ((MR_Unsigned) 0U)))
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
      MR_Word L_23 = ((MR_Word) ((MR_hl_field(1, T_14, 2))));
      MR_Word R_24 = ((MR_Word) ((MR_hl_field(1, T_14, 3))));
      MR_Tuple Var_35 = ((MR_Tuple) ((MR_hl_field(1, T_14, 0))));
      MR_Box STATE_VARIABLE_A_1_36;
      MR_Box STATE_VARIABLE_B_1_37;
      MR_Box STATE_VARIABLE_C_1_38;
      MR_Box STATE_VARIABLE_D_1_39;
      MR_Box STATE_VARIABLE_E_1_40;
      MR_Box STATE_VARIABLE_A_2_41;
      MR_Box STATE_VARIABLE_B_2_42;
      MR_Box STATE_VARIABLE_C_2_43;
      MR_Box STATE_VARIABLE_D_2_44;
      MR_Box STATE_VARIABLE_E_2_45;
      MR_Word next_value_of_T_14;
      MR_Box next_value_of_STATE_VARIABLE_A_0_25;
      MR_Box next_value_of_STATE_VARIABLE_B_0_27;
      MR_Box next_value_of_STATE_VARIABLE_C_0_29;
      MR_Box next_value_of_STATE_VARIABLE_D_0_31;
      MR_Box next_value_of_STATE_VARIABLE_E_0_33;

      X_20 = (MR_hl_field(0, Var_35, 0));
      Y_21 = (MR_hl_field(0, Var_35, 1));
      succeeded = mercury__diet__foldl5_12_p_3(TypeInfo_for_A_47, TypeInfo_for_B_48, TypeInfo_for_C_49, TypeInfo_for_D_50, TypeInfo_for_E_51, TypeClassInfo_for_diet_element_46, P_13, L_23, STATE_VARIABLE_A_0_25, &STATE_VARIABLE_A_1_36, STATE_VARIABLE_B_0_27, &STATE_VARIABLE_B_1_37, STATE_VARIABLE_C_0_29, &STATE_VARIABLE_C_1_38, STATE_VARIABLE_D_0_31, &STATE_VARIABLE_D_1_39, STATE_VARIABLE_E_0_33, &STATE_VARIABLE_E_1_40);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up5_13_p_3(TypeInfo_for_A_47, TypeInfo_for_B_48, TypeInfo_for_C_49, TypeInfo_for_D_50, TypeInfo_for_E_51, TypeClassInfo_for_diet_element_46, P_13, X_20, Y_21, STATE_VARIABLE_A_1_36, &STATE_VARIABLE_A_2_41, STATE_VARIABLE_B_1_37, &STATE_VARIABLE_B_2_42, STATE_VARIABLE_C_1_38, &STATE_VARIABLE_C_2_43, STATE_VARIABLE_D_1_39, &STATE_VARIABLE_D_2_44, STATE_VARIABLE_E_1_40, &STATE_VARIABLE_E_2_45);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_T_14 = R_24;
          next_value_of_STATE_VARIABLE_A_0_25 = STATE_VARIABLE_A_2_41;
          next_value_of_STATE_VARIABLE_B_0_27 = STATE_VARIABLE_B_2_42;
          next_value_of_STATE_VARIABLE_C_0_29 = STATE_VARIABLE_C_2_43;
          next_value_of_STATE_VARIABLE_D_0_31 = STATE_VARIABLE_D_2_44;
          next_value_of_STATE_VARIABLE_E_0_33 = STATE_VARIABLE_E_2_45;
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
  MR_Word TypeInfo_for_A_39,
  MR_Word TypeInfo_for_B_40,
  MR_Word TypeInfo_for_C_41,
  MR_Word TypeInfo_for_D_42,
  MR_Word TypeInfo_for_E_43,
  MR_Word TypeClassInfo_for_diet_element_38,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_38, 0)), 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_38)), Hi_16, Lo_15);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_32;
      MR_Box STATE_VARIABLE_B_1_33;
      MR_Box STATE_VARIABLE_C_1_34;
      MR_Box STATE_VARIABLE_D_1_35;
      MR_Box STATE_VARIABLE_E_1_36;
      MR_Box Var_37;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_14, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_15;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;
      MR_Box next_value_of_STATE_VARIABLE_E_0_30;

      succeeded = func_1(((MR_Box) (P_14)), Lo_15, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_1_32, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_1_33, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_1_34, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_1_35, STATE_VARIABLE_E_0_30, &STATE_VARIABLE_E_1_36);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_38, 0)), 6))));
        Var_37 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_38)), Lo_15);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_15 = Var_37;
        next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_1_32;
        next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_1_33;
        next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_1_34;
        next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_1_35;
        next_value_of_STATE_VARIABLE_E_0_30 = STATE_VARIABLE_E_1_36;
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
  MR_Word TypeInfo_for_A_47,
  MR_Word TypeInfo_for_B_48,
  MR_Word TypeInfo_for_C_49,
  MR_Word TypeInfo_for_D_50,
  MR_Word TypeInfo_for_E_51,
  MR_Word TypeClassInfo_for_diet_element_46,
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
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_14 == (MR_Word) ((MR_Unsigned) 0U)))
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
      MR_Word L_23 = ((MR_Word) ((MR_hl_field(1, T_14, 2))));
      MR_Word R_24 = ((MR_Word) ((MR_hl_field(1, T_14, 3))));
      MR_Tuple Var_35 = ((MR_Tuple) ((MR_hl_field(1, T_14, 0))));
      MR_Box STATE_VARIABLE_A_1_36;
      MR_Box STATE_VARIABLE_B_1_37;
      MR_Box STATE_VARIABLE_C_1_38;
      MR_Box STATE_VARIABLE_D_1_39;
      MR_Box STATE_VARIABLE_E_1_40;
      MR_Box STATE_VARIABLE_A_2_41;
      MR_Box STATE_VARIABLE_B_2_42;
      MR_Box STATE_VARIABLE_C_2_43;
      MR_Box STATE_VARIABLE_D_2_44;
      MR_Box STATE_VARIABLE_E_2_45;
      MR_Word next_value_of_T_14;
      MR_Box next_value_of_STATE_VARIABLE_A_0_25;
      MR_Box next_value_of_STATE_VARIABLE_B_0_27;
      MR_Box next_value_of_STATE_VARIABLE_C_0_29;
      MR_Box next_value_of_STATE_VARIABLE_D_0_31;
      MR_Box next_value_of_STATE_VARIABLE_E_0_33;

      X_20 = (MR_hl_field(0, Var_35, 0));
      Y_21 = (MR_hl_field(0, Var_35, 1));
      mercury__diet__foldl5_12_p_2(TypeInfo_for_A_47, TypeInfo_for_B_48, TypeInfo_for_C_49, TypeInfo_for_D_50, TypeInfo_for_E_51, TypeClassInfo_for_diet_element_46, P_13, L_23, STATE_VARIABLE_A_0_25, &STATE_VARIABLE_A_1_36, STATE_VARIABLE_B_0_27, &STATE_VARIABLE_B_1_37, STATE_VARIABLE_C_0_29, &STATE_VARIABLE_C_1_38, STATE_VARIABLE_D_0_31, &STATE_VARIABLE_D_1_39, STATE_VARIABLE_E_0_33, &STATE_VARIABLE_E_1_40);
      mercury__diet__fold_up5_13_p_2(TypeInfo_for_A_47, TypeInfo_for_B_48, TypeInfo_for_C_49, TypeInfo_for_D_50, TypeInfo_for_E_51, TypeClassInfo_for_diet_element_46, P_13, X_20, Y_21, STATE_VARIABLE_A_1_36, &STATE_VARIABLE_A_2_41, STATE_VARIABLE_B_1_37, &STATE_VARIABLE_B_2_42, STATE_VARIABLE_C_1_38, &STATE_VARIABLE_C_2_43, STATE_VARIABLE_D_1_39, &STATE_VARIABLE_D_2_44, STATE_VARIABLE_E_1_40, &STATE_VARIABLE_E_2_45);
      // direct tailcall eliminated
      ;
      next_value_of_T_14 = R_24;
      next_value_of_STATE_VARIABLE_A_0_25 = STATE_VARIABLE_A_2_41;
      next_value_of_STATE_VARIABLE_B_0_27 = STATE_VARIABLE_B_2_42;
      next_value_of_STATE_VARIABLE_C_0_29 = STATE_VARIABLE_C_2_43;
      next_value_of_STATE_VARIABLE_D_0_31 = STATE_VARIABLE_D_2_44;
      next_value_of_STATE_VARIABLE_E_0_33 = STATE_VARIABLE_E_2_45;
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
  MR_Word TypeInfo_for_A_39,
  MR_Word TypeInfo_for_B_40,
  MR_Word TypeInfo_for_C_41,
  MR_Word TypeInfo_for_D_42,
  MR_Word TypeInfo_for_E_43,
  MR_Word TypeClassInfo_for_diet_element_38,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_38, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_38)), Hi_16, Lo_15);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_32;
      MR_Box STATE_VARIABLE_B_1_33;
      MR_Box STATE_VARIABLE_C_1_34;
      MR_Box STATE_VARIABLE_D_1_35;
      MR_Box STATE_VARIABLE_E_1_36;
      MR_Box Var_37;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_14, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_15;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;
      MR_Box next_value_of_STATE_VARIABLE_E_0_30;

      func_1(((MR_Box) (P_14)), Lo_15, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_1_32, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_1_33, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_1_34, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_1_35, STATE_VARIABLE_E_0_30, &STATE_VARIABLE_E_1_36);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_38, 0)), 6))));
      Var_37 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_38)), Lo_15);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_15 = Var_37;
      next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_1_32;
      next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_1_33;
      next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_1_34;
      next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_1_35;
      next_value_of_STATE_VARIABLE_E_0_30 = STATE_VARIABLE_E_1_36;
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
  MR_Word TypeInfo_for_A_47,
  MR_Word TypeInfo_for_B_48,
  MR_Word TypeInfo_for_C_49,
  MR_Word TypeInfo_for_D_50,
  MR_Word TypeInfo_for_E_51,
  MR_Word TypeClassInfo_for_diet_element_46,
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
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_14 == (MR_Word) ((MR_Unsigned) 0U)))
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
      MR_Word L_23 = ((MR_Word) ((MR_hl_field(1, T_14, 2))));
      MR_Word R_24 = ((MR_Word) ((MR_hl_field(1, T_14, 3))));
      MR_Tuple Var_35 = ((MR_Tuple) ((MR_hl_field(1, T_14, 0))));
      MR_Box STATE_VARIABLE_A_1_36;
      MR_Box STATE_VARIABLE_B_1_37;
      MR_Box STATE_VARIABLE_C_1_38;
      MR_Box STATE_VARIABLE_D_1_39;
      MR_Box STATE_VARIABLE_E_1_40;
      MR_Box STATE_VARIABLE_A_2_41;
      MR_Box STATE_VARIABLE_B_2_42;
      MR_Box STATE_VARIABLE_C_2_43;
      MR_Box STATE_VARIABLE_D_2_44;
      MR_Box STATE_VARIABLE_E_2_45;
      MR_Word next_value_of_T_14;
      MR_Box next_value_of_STATE_VARIABLE_A_0_25;
      MR_Box next_value_of_STATE_VARIABLE_B_0_27;
      MR_Box next_value_of_STATE_VARIABLE_C_0_29;
      MR_Box next_value_of_STATE_VARIABLE_D_0_31;
      MR_Box next_value_of_STATE_VARIABLE_E_0_33;

      X_20 = (MR_hl_field(0, Var_35, 0));
      Y_21 = (MR_hl_field(0, Var_35, 1));
      mercury__diet__foldl5_12_p_1(TypeInfo_for_A_47, TypeInfo_for_B_48, TypeInfo_for_C_49, TypeInfo_for_D_50, TypeInfo_for_E_51, TypeClassInfo_for_diet_element_46, P_13, L_23, STATE_VARIABLE_A_0_25, &STATE_VARIABLE_A_1_36, STATE_VARIABLE_B_0_27, &STATE_VARIABLE_B_1_37, STATE_VARIABLE_C_0_29, &STATE_VARIABLE_C_1_38, STATE_VARIABLE_D_0_31, &STATE_VARIABLE_D_1_39, STATE_VARIABLE_E_0_33, &STATE_VARIABLE_E_1_40);
      mercury__diet__fold_up5_13_p_1(TypeInfo_for_A_47, TypeInfo_for_B_48, TypeInfo_for_C_49, TypeInfo_for_D_50, TypeInfo_for_E_51, TypeClassInfo_for_diet_element_46, P_13, X_20, Y_21, STATE_VARIABLE_A_1_36, &STATE_VARIABLE_A_2_41, STATE_VARIABLE_B_1_37, &STATE_VARIABLE_B_2_42, STATE_VARIABLE_C_1_38, &STATE_VARIABLE_C_2_43, STATE_VARIABLE_D_1_39, &STATE_VARIABLE_D_2_44, STATE_VARIABLE_E_1_40, &STATE_VARIABLE_E_2_45);
      // direct tailcall eliminated
      ;
      next_value_of_T_14 = R_24;
      next_value_of_STATE_VARIABLE_A_0_25 = STATE_VARIABLE_A_2_41;
      next_value_of_STATE_VARIABLE_B_0_27 = STATE_VARIABLE_B_2_42;
      next_value_of_STATE_VARIABLE_C_0_29 = STATE_VARIABLE_C_2_43;
      next_value_of_STATE_VARIABLE_D_0_31 = STATE_VARIABLE_D_2_44;
      next_value_of_STATE_VARIABLE_E_0_33 = STATE_VARIABLE_E_2_45;
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
  MR_Word TypeInfo_for_A_39,
  MR_Word TypeInfo_for_B_40,
  MR_Word TypeInfo_for_C_41,
  MR_Word TypeInfo_for_D_42,
  MR_Word TypeInfo_for_E_43,
  MR_Word TypeClassInfo_for_diet_element_38,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_38, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_38)), Hi_16, Lo_15);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_32;
      MR_Box STATE_VARIABLE_B_1_33;
      MR_Box STATE_VARIABLE_C_1_34;
      MR_Box STATE_VARIABLE_D_1_35;
      MR_Box STATE_VARIABLE_E_1_36;
      MR_Box Var_37;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_14, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_15;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;
      MR_Box next_value_of_STATE_VARIABLE_E_0_30;

      func_1(((MR_Box) (P_14)), Lo_15, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_1_32, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_1_33, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_1_34, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_1_35, STATE_VARIABLE_E_0_30, &STATE_VARIABLE_E_1_36);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_38, 0)), 6))));
      Var_37 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_38)), Lo_15);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_15 = Var_37;
      next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_1_32;
      next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_1_33;
      next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_1_34;
      next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_1_35;
      next_value_of_STATE_VARIABLE_E_0_30 = STATE_VARIABLE_E_1_36;
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
  MR_Word TypeInfo_for_A_47,
  MR_Word TypeInfo_for_B_48,
  MR_Word TypeInfo_for_C_49,
  MR_Word TypeInfo_for_D_50,
  MR_Word TypeInfo_for_E_51,
  MR_Word TypeClassInfo_for_diet_element_46,
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
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_14 == (MR_Word) ((MR_Unsigned) 0U)))
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
      MR_Word L_23 = ((MR_Word) ((MR_hl_field(1, T_14, 2))));
      MR_Word R_24 = ((MR_Word) ((MR_hl_field(1, T_14, 3))));
      MR_Tuple Var_35 = ((MR_Tuple) ((MR_hl_field(1, T_14, 0))));
      MR_Box STATE_VARIABLE_A_1_36;
      MR_Box STATE_VARIABLE_B_1_37;
      MR_Box STATE_VARIABLE_C_1_38;
      MR_Box STATE_VARIABLE_D_1_39;
      MR_Box STATE_VARIABLE_E_1_40;
      MR_Box STATE_VARIABLE_A_2_41;
      MR_Box STATE_VARIABLE_B_2_42;
      MR_Box STATE_VARIABLE_C_2_43;
      MR_Box STATE_VARIABLE_D_2_44;
      MR_Box STATE_VARIABLE_E_2_45;
      MR_Word next_value_of_T_14;
      MR_Box next_value_of_STATE_VARIABLE_A_0_25;
      MR_Box next_value_of_STATE_VARIABLE_B_0_27;
      MR_Box next_value_of_STATE_VARIABLE_C_0_29;
      MR_Box next_value_of_STATE_VARIABLE_D_0_31;
      MR_Box next_value_of_STATE_VARIABLE_E_0_33;

      X_20 = (MR_hl_field(0, Var_35, 0));
      Y_21 = (MR_hl_field(0, Var_35, 1));
      mercury__diet__foldl5_12_p_0(TypeInfo_for_A_47, TypeInfo_for_B_48, TypeInfo_for_C_49, TypeInfo_for_D_50, TypeInfo_for_E_51, TypeClassInfo_for_diet_element_46, P_13, L_23, STATE_VARIABLE_A_0_25, &STATE_VARIABLE_A_1_36, STATE_VARIABLE_B_0_27, &STATE_VARIABLE_B_1_37, STATE_VARIABLE_C_0_29, &STATE_VARIABLE_C_1_38, STATE_VARIABLE_D_0_31, &STATE_VARIABLE_D_1_39, STATE_VARIABLE_E_0_33, &STATE_VARIABLE_E_1_40);
      mercury__diet__fold_up5_13_p_0(TypeInfo_for_A_47, TypeInfo_for_B_48, TypeInfo_for_C_49, TypeInfo_for_D_50, TypeInfo_for_E_51, TypeClassInfo_for_diet_element_46, P_13, X_20, Y_21, STATE_VARIABLE_A_1_36, &STATE_VARIABLE_A_2_41, STATE_VARIABLE_B_1_37, &STATE_VARIABLE_B_2_42, STATE_VARIABLE_C_1_38, &STATE_VARIABLE_C_2_43, STATE_VARIABLE_D_1_39, &STATE_VARIABLE_D_2_44, STATE_VARIABLE_E_1_40, &STATE_VARIABLE_E_2_45);
      // direct tailcall eliminated
      ;
      next_value_of_T_14 = R_24;
      next_value_of_STATE_VARIABLE_A_0_25 = STATE_VARIABLE_A_2_41;
      next_value_of_STATE_VARIABLE_B_0_27 = STATE_VARIABLE_B_2_42;
      next_value_of_STATE_VARIABLE_C_0_29 = STATE_VARIABLE_C_2_43;
      next_value_of_STATE_VARIABLE_D_0_31 = STATE_VARIABLE_D_2_44;
      next_value_of_STATE_VARIABLE_E_0_33 = STATE_VARIABLE_E_2_45;
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
  MR_Word TypeInfo_for_A_39,
  MR_Word TypeInfo_for_B_40,
  MR_Word TypeInfo_for_C_41,
  MR_Word TypeInfo_for_D_42,
  MR_Word TypeInfo_for_E_43,
  MR_Word TypeClassInfo_for_diet_element_38,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_38, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_38)), Hi_16, Lo_15);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_32;
      MR_Box STATE_VARIABLE_B_1_33;
      MR_Box STATE_VARIABLE_C_1_34;
      MR_Box STATE_VARIABLE_D_1_35;
      MR_Box STATE_VARIABLE_E_1_36;
      MR_Box Var_37;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_14, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_15;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;
      MR_Box next_value_of_STATE_VARIABLE_E_0_30;

      func_1(((MR_Box) (P_14)), Lo_15, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_1_32, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_1_33, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_1_34, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_1_35, STATE_VARIABLE_E_0_30, &STATE_VARIABLE_E_1_36);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_38, 0)), 6))));
      Var_37 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_38)), Lo_15);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_15 = Var_37;
      next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_1_32;
      next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_1_33;
      next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_1_34;
      next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_1_35;
      next_value_of_STATE_VARIABLE_E_0_30 = STATE_VARIABLE_E_1_36;
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
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_D_43,
  MR_Word TypeClassInfo_for_diet_element_39,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T_12 == (MR_Word) ((MR_Unsigned) 0U)))
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
      MR_Word L_20 = ((MR_Word) ((MR_hl_field(1, T_12, 2))));
      MR_Word R_21 = ((MR_Word) ((MR_hl_field(1, T_12, 3))));
      MR_Tuple Var_30 = ((MR_Tuple) ((MR_hl_field(1, T_12, 0))));
      MR_Box STATE_VARIABLE_A_1_31;
      MR_Box STATE_VARIABLE_B_1_32;
      MR_Box STATE_VARIABLE_C_1_33;
      MR_Box STATE_VARIABLE_D_1_34;
      MR_Box STATE_VARIABLE_A_2_35;
      MR_Box STATE_VARIABLE_B_2_36;
      MR_Box STATE_VARIABLE_C_2_37;
      MR_Box STATE_VARIABLE_D_2_38;
      MR_Word next_value_of_T_12;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;

      X_17 = (MR_hl_field(0, Var_30, 0));
      Y_18 = (MR_hl_field(0, Var_30, 1));
      succeeded = mercury__diet__foldl4_10_p_5(TypeInfo_for_A_40, TypeInfo_for_B_41, TypeInfo_for_C_42, TypeInfo_for_D_43, TypeClassInfo_for_diet_element_39, P_11, L_20, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_1_31, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_1_32, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_1_33, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_1_34);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up4_11_p_5(TypeInfo_for_A_40, TypeInfo_for_B_41, TypeInfo_for_C_42, TypeInfo_for_D_43, TypeClassInfo_for_diet_element_39, P_11, X_17, Y_18, STATE_VARIABLE_A_1_31, &STATE_VARIABLE_A_2_35, STATE_VARIABLE_B_1_32, &STATE_VARIABLE_B_2_36, STATE_VARIABLE_C_1_33, &STATE_VARIABLE_C_2_37, STATE_VARIABLE_D_1_34, &STATE_VARIABLE_D_2_38);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_T_12 = R_21;
          next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_2_35;
          next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_2_36;
          next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_2_37;
          next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_2_38;
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
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word TypeInfo_for_D_36,
  MR_Word TypeClassInfo_for_diet_element_32,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_32, 0)), 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_32)), Hi_14, Lo_13);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_27;
      MR_Box STATE_VARIABLE_B_1_28;
      MR_Box STATE_VARIABLE_C_1_29;
      MR_Box STATE_VARIABLE_D_1_30;
      MR_Box Var_31;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_12, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_13;
      MR_Box next_value_of_STATE_VARIABLE_A_0_19;
      MR_Box next_value_of_STATE_VARIABLE_B_0_21;
      MR_Box next_value_of_STATE_VARIABLE_C_0_23;
      MR_Box next_value_of_STATE_VARIABLE_D_0_25;

      succeeded = func_1(((MR_Box) (P_12)), Lo_13, STATE_VARIABLE_A_0_19, &STATE_VARIABLE_A_1_27, STATE_VARIABLE_B_0_21, &STATE_VARIABLE_B_1_28, STATE_VARIABLE_C_0_23, &STATE_VARIABLE_C_1_29, STATE_VARIABLE_D_0_25, &STATE_VARIABLE_D_1_30);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_32, 0)), 6))));
        Var_31 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_32)), Lo_13);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_13 = Var_31;
        next_value_of_STATE_VARIABLE_A_0_19 = STATE_VARIABLE_A_1_27;
        next_value_of_STATE_VARIABLE_B_0_21 = STATE_VARIABLE_B_1_28;
        next_value_of_STATE_VARIABLE_C_0_23 = STATE_VARIABLE_C_1_29;
        next_value_of_STATE_VARIABLE_D_0_25 = STATE_VARIABLE_D_1_30;
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
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_D_43,
  MR_Word TypeClassInfo_for_diet_element_39,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T_12 == (MR_Word) ((MR_Unsigned) 0U)))
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
      MR_Word L_20 = ((MR_Word) ((MR_hl_field(1, T_12, 2))));
      MR_Word R_21 = ((MR_Word) ((MR_hl_field(1, T_12, 3))));
      MR_Tuple Var_30 = ((MR_Tuple) ((MR_hl_field(1, T_12, 0))));
      MR_Box STATE_VARIABLE_A_1_31;
      MR_Box STATE_VARIABLE_B_1_32;
      MR_Box STATE_VARIABLE_C_1_33;
      MR_Box STATE_VARIABLE_D_1_34;
      MR_Box STATE_VARIABLE_A_2_35;
      MR_Box STATE_VARIABLE_B_2_36;
      MR_Box STATE_VARIABLE_C_2_37;
      MR_Box STATE_VARIABLE_D_2_38;
      MR_Word next_value_of_T_12;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;

      X_17 = (MR_hl_field(0, Var_30, 0));
      Y_18 = (MR_hl_field(0, Var_30, 1));
      succeeded = mercury__diet__foldl4_10_p_4(TypeInfo_for_A_40, TypeInfo_for_B_41, TypeInfo_for_C_42, TypeInfo_for_D_43, TypeClassInfo_for_diet_element_39, P_11, L_20, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_1_31, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_1_32, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_1_33, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_1_34);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up4_11_p_4(TypeInfo_for_A_40, TypeInfo_for_B_41, TypeInfo_for_C_42, TypeInfo_for_D_43, TypeClassInfo_for_diet_element_39, P_11, X_17, Y_18, STATE_VARIABLE_A_1_31, &STATE_VARIABLE_A_2_35, STATE_VARIABLE_B_1_32, &STATE_VARIABLE_B_2_36, STATE_VARIABLE_C_1_33, &STATE_VARIABLE_C_2_37, STATE_VARIABLE_D_1_34, &STATE_VARIABLE_D_2_38);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_T_12 = R_21;
          next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_2_35;
          next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_2_36;
          next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_2_37;
          next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_2_38;
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
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word TypeInfo_for_D_36,
  MR_Word TypeClassInfo_for_diet_element_32,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_32, 0)), 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_32)), Hi_14, Lo_13);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_27;
      MR_Box STATE_VARIABLE_B_1_28;
      MR_Box STATE_VARIABLE_C_1_29;
      MR_Box STATE_VARIABLE_D_1_30;
      MR_Box Var_31;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_12, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_13;
      MR_Box next_value_of_STATE_VARIABLE_A_0_19;
      MR_Box next_value_of_STATE_VARIABLE_B_0_21;
      MR_Box next_value_of_STATE_VARIABLE_C_0_23;
      MR_Box next_value_of_STATE_VARIABLE_D_0_25;

      succeeded = func_1(((MR_Box) (P_12)), Lo_13, STATE_VARIABLE_A_0_19, &STATE_VARIABLE_A_1_27, STATE_VARIABLE_B_0_21, &STATE_VARIABLE_B_1_28, STATE_VARIABLE_C_0_23, &STATE_VARIABLE_C_1_29, STATE_VARIABLE_D_0_25, &STATE_VARIABLE_D_1_30);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_32, 0)), 6))));
        Var_31 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_32)), Lo_13);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_13 = Var_31;
        next_value_of_STATE_VARIABLE_A_0_19 = STATE_VARIABLE_A_1_27;
        next_value_of_STATE_VARIABLE_B_0_21 = STATE_VARIABLE_B_1_28;
        next_value_of_STATE_VARIABLE_C_0_23 = STATE_VARIABLE_C_1_29;
        next_value_of_STATE_VARIABLE_D_0_25 = STATE_VARIABLE_D_1_30;
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
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_D_43,
  MR_Word TypeClassInfo_for_diet_element_39,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T_12 == (MR_Word) ((MR_Unsigned) 0U)))
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
      MR_Word L_20 = ((MR_Word) ((MR_hl_field(1, T_12, 2))));
      MR_Word R_21 = ((MR_Word) ((MR_hl_field(1, T_12, 3))));
      MR_Tuple Var_30 = ((MR_Tuple) ((MR_hl_field(1, T_12, 0))));
      MR_Box STATE_VARIABLE_A_1_31;
      MR_Box STATE_VARIABLE_B_1_32;
      MR_Box STATE_VARIABLE_C_1_33;
      MR_Box STATE_VARIABLE_D_1_34;
      MR_Box STATE_VARIABLE_A_2_35;
      MR_Box STATE_VARIABLE_B_2_36;
      MR_Box STATE_VARIABLE_C_2_37;
      MR_Box STATE_VARIABLE_D_2_38;
      MR_Word next_value_of_T_12;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;

      X_17 = (MR_hl_field(0, Var_30, 0));
      Y_18 = (MR_hl_field(0, Var_30, 1));
      succeeded = mercury__diet__foldl4_10_p_3(TypeInfo_for_A_40, TypeInfo_for_B_41, TypeInfo_for_C_42, TypeInfo_for_D_43, TypeClassInfo_for_diet_element_39, P_11, L_20, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_1_31, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_1_32, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_1_33, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_1_34);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up4_11_p_3(TypeInfo_for_A_40, TypeInfo_for_B_41, TypeInfo_for_C_42, TypeInfo_for_D_43, TypeClassInfo_for_diet_element_39, P_11, X_17, Y_18, STATE_VARIABLE_A_1_31, &STATE_VARIABLE_A_2_35, STATE_VARIABLE_B_1_32, &STATE_VARIABLE_B_2_36, STATE_VARIABLE_C_1_33, &STATE_VARIABLE_C_2_37, STATE_VARIABLE_D_1_34, &STATE_VARIABLE_D_2_38);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_T_12 = R_21;
          next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_2_35;
          next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_2_36;
          next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_2_37;
          next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_2_38;
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
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word TypeInfo_for_D_36,
  MR_Word TypeClassInfo_for_diet_element_32,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_32, 0)), 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_32)), Hi_14, Lo_13);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_27;
      MR_Box STATE_VARIABLE_B_1_28;
      MR_Box STATE_VARIABLE_C_1_29;
      MR_Box STATE_VARIABLE_D_1_30;
      MR_Box Var_31;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_12, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_13;
      MR_Box next_value_of_STATE_VARIABLE_A_0_19;
      MR_Box next_value_of_STATE_VARIABLE_B_0_21;
      MR_Box next_value_of_STATE_VARIABLE_C_0_23;
      MR_Box next_value_of_STATE_VARIABLE_D_0_25;

      succeeded = func_1(((MR_Box) (P_12)), Lo_13, STATE_VARIABLE_A_0_19, &STATE_VARIABLE_A_1_27, STATE_VARIABLE_B_0_21, &STATE_VARIABLE_B_1_28, STATE_VARIABLE_C_0_23, &STATE_VARIABLE_C_1_29, STATE_VARIABLE_D_0_25, &STATE_VARIABLE_D_1_30);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_32, 0)), 6))));
        Var_31 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_32)), Lo_13);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_13 = Var_31;
        next_value_of_STATE_VARIABLE_A_0_19 = STATE_VARIABLE_A_1_27;
        next_value_of_STATE_VARIABLE_B_0_21 = STATE_VARIABLE_B_1_28;
        next_value_of_STATE_VARIABLE_C_0_23 = STATE_VARIABLE_C_1_29;
        next_value_of_STATE_VARIABLE_D_0_25 = STATE_VARIABLE_D_1_30;
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
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_D_43,
  MR_Word TypeClassInfo_for_diet_element_39,
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
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_12 == (MR_Word) ((MR_Unsigned) 0U)))
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
      MR_Word L_20 = ((MR_Word) ((MR_hl_field(1, T_12, 2))));
      MR_Word R_21 = ((MR_Word) ((MR_hl_field(1, T_12, 3))));
      MR_Tuple Var_30 = ((MR_Tuple) ((MR_hl_field(1, T_12, 0))));
      MR_Box STATE_VARIABLE_A_1_31;
      MR_Box STATE_VARIABLE_B_1_32;
      MR_Box STATE_VARIABLE_C_1_33;
      MR_Box STATE_VARIABLE_D_1_34;
      MR_Box STATE_VARIABLE_A_2_35;
      MR_Box STATE_VARIABLE_B_2_36;
      MR_Box STATE_VARIABLE_C_2_37;
      MR_Box STATE_VARIABLE_D_2_38;
      MR_Word next_value_of_T_12;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;

      X_17 = (MR_hl_field(0, Var_30, 0));
      Y_18 = (MR_hl_field(0, Var_30, 1));
      mercury__diet__foldl4_10_p_2(TypeInfo_for_A_40, TypeInfo_for_B_41, TypeInfo_for_C_42, TypeInfo_for_D_43, TypeClassInfo_for_diet_element_39, P_11, L_20, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_1_31, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_1_32, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_1_33, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_1_34);
      mercury__diet__fold_up4_11_p_2(TypeInfo_for_A_40, TypeInfo_for_B_41, TypeInfo_for_C_42, TypeInfo_for_D_43, TypeClassInfo_for_diet_element_39, P_11, X_17, Y_18, STATE_VARIABLE_A_1_31, &STATE_VARIABLE_A_2_35, STATE_VARIABLE_B_1_32, &STATE_VARIABLE_B_2_36, STATE_VARIABLE_C_1_33, &STATE_VARIABLE_C_2_37, STATE_VARIABLE_D_1_34, &STATE_VARIABLE_D_2_38);
      // direct tailcall eliminated
      ;
      next_value_of_T_12 = R_21;
      next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_2_35;
      next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_2_36;
      next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_2_37;
      next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_2_38;
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
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word TypeInfo_for_D_36,
  MR_Word TypeClassInfo_for_diet_element_32,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_32, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_32)), Hi_14, Lo_13);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_27;
      MR_Box STATE_VARIABLE_B_1_28;
      MR_Box STATE_VARIABLE_C_1_29;
      MR_Box STATE_VARIABLE_D_1_30;
      MR_Box Var_31;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_12, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_13;
      MR_Box next_value_of_STATE_VARIABLE_A_0_19;
      MR_Box next_value_of_STATE_VARIABLE_B_0_21;
      MR_Box next_value_of_STATE_VARIABLE_C_0_23;
      MR_Box next_value_of_STATE_VARIABLE_D_0_25;

      func_1(((MR_Box) (P_12)), Lo_13, STATE_VARIABLE_A_0_19, &STATE_VARIABLE_A_1_27, STATE_VARIABLE_B_0_21, &STATE_VARIABLE_B_1_28, STATE_VARIABLE_C_0_23, &STATE_VARIABLE_C_1_29, STATE_VARIABLE_D_0_25, &STATE_VARIABLE_D_1_30);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_32, 0)), 6))));
      Var_31 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_32)), Lo_13);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_13 = Var_31;
      next_value_of_STATE_VARIABLE_A_0_19 = STATE_VARIABLE_A_1_27;
      next_value_of_STATE_VARIABLE_B_0_21 = STATE_VARIABLE_B_1_28;
      next_value_of_STATE_VARIABLE_C_0_23 = STATE_VARIABLE_C_1_29;
      next_value_of_STATE_VARIABLE_D_0_25 = STATE_VARIABLE_D_1_30;
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
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_D_43,
  MR_Word TypeClassInfo_for_diet_element_39,
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
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_12 == (MR_Word) ((MR_Unsigned) 0U)))
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
      MR_Word L_20 = ((MR_Word) ((MR_hl_field(1, T_12, 2))));
      MR_Word R_21 = ((MR_Word) ((MR_hl_field(1, T_12, 3))));
      MR_Tuple Var_30 = ((MR_Tuple) ((MR_hl_field(1, T_12, 0))));
      MR_Box STATE_VARIABLE_A_1_31;
      MR_Box STATE_VARIABLE_B_1_32;
      MR_Box STATE_VARIABLE_C_1_33;
      MR_Box STATE_VARIABLE_D_1_34;
      MR_Box STATE_VARIABLE_A_2_35;
      MR_Box STATE_VARIABLE_B_2_36;
      MR_Box STATE_VARIABLE_C_2_37;
      MR_Box STATE_VARIABLE_D_2_38;
      MR_Word next_value_of_T_12;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;

      X_17 = (MR_hl_field(0, Var_30, 0));
      Y_18 = (MR_hl_field(0, Var_30, 1));
      mercury__diet__foldl4_10_p_1(TypeInfo_for_A_40, TypeInfo_for_B_41, TypeInfo_for_C_42, TypeInfo_for_D_43, TypeClassInfo_for_diet_element_39, P_11, L_20, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_1_31, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_1_32, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_1_33, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_1_34);
      mercury__diet__fold_up4_11_p_1(TypeInfo_for_A_40, TypeInfo_for_B_41, TypeInfo_for_C_42, TypeInfo_for_D_43, TypeClassInfo_for_diet_element_39, P_11, X_17, Y_18, STATE_VARIABLE_A_1_31, &STATE_VARIABLE_A_2_35, STATE_VARIABLE_B_1_32, &STATE_VARIABLE_B_2_36, STATE_VARIABLE_C_1_33, &STATE_VARIABLE_C_2_37, STATE_VARIABLE_D_1_34, &STATE_VARIABLE_D_2_38);
      // direct tailcall eliminated
      ;
      next_value_of_T_12 = R_21;
      next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_2_35;
      next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_2_36;
      next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_2_37;
      next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_2_38;
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
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word TypeInfo_for_D_36,
  MR_Word TypeClassInfo_for_diet_element_32,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_32, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_32)), Hi_14, Lo_13);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_27;
      MR_Box STATE_VARIABLE_B_1_28;
      MR_Box STATE_VARIABLE_C_1_29;
      MR_Box STATE_VARIABLE_D_1_30;
      MR_Box Var_31;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_12, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_13;
      MR_Box next_value_of_STATE_VARIABLE_A_0_19;
      MR_Box next_value_of_STATE_VARIABLE_B_0_21;
      MR_Box next_value_of_STATE_VARIABLE_C_0_23;
      MR_Box next_value_of_STATE_VARIABLE_D_0_25;

      func_1(((MR_Box) (P_12)), Lo_13, STATE_VARIABLE_A_0_19, &STATE_VARIABLE_A_1_27, STATE_VARIABLE_B_0_21, &STATE_VARIABLE_B_1_28, STATE_VARIABLE_C_0_23, &STATE_VARIABLE_C_1_29, STATE_VARIABLE_D_0_25, &STATE_VARIABLE_D_1_30);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_32, 0)), 6))));
      Var_31 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_32)), Lo_13);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_13 = Var_31;
      next_value_of_STATE_VARIABLE_A_0_19 = STATE_VARIABLE_A_1_27;
      next_value_of_STATE_VARIABLE_B_0_21 = STATE_VARIABLE_B_1_28;
      next_value_of_STATE_VARIABLE_C_0_23 = STATE_VARIABLE_C_1_29;
      next_value_of_STATE_VARIABLE_D_0_25 = STATE_VARIABLE_D_1_30;
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
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_D_43,
  MR_Word TypeClassInfo_for_diet_element_39,
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
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_12 == (MR_Word) ((MR_Unsigned) 0U)))
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
      MR_Word L_20 = ((MR_Word) ((MR_hl_field(1, T_12, 2))));
      MR_Word R_21 = ((MR_Word) ((MR_hl_field(1, T_12, 3))));
      MR_Tuple Var_30 = ((MR_Tuple) ((MR_hl_field(1, T_12, 0))));
      MR_Box STATE_VARIABLE_A_1_31;
      MR_Box STATE_VARIABLE_B_1_32;
      MR_Box STATE_VARIABLE_C_1_33;
      MR_Box STATE_VARIABLE_D_1_34;
      MR_Box STATE_VARIABLE_A_2_35;
      MR_Box STATE_VARIABLE_B_2_36;
      MR_Box STATE_VARIABLE_C_2_37;
      MR_Box STATE_VARIABLE_D_2_38;
      MR_Word next_value_of_T_12;
      MR_Box next_value_of_STATE_VARIABLE_A_0_22;
      MR_Box next_value_of_STATE_VARIABLE_B_0_24;
      MR_Box next_value_of_STATE_VARIABLE_C_0_26;
      MR_Box next_value_of_STATE_VARIABLE_D_0_28;

      X_17 = (MR_hl_field(0, Var_30, 0));
      Y_18 = (MR_hl_field(0, Var_30, 1));
      mercury__diet__foldl4_10_p_0(TypeInfo_for_A_40, TypeInfo_for_B_41, TypeInfo_for_C_42, TypeInfo_for_D_43, TypeClassInfo_for_diet_element_39, P_11, L_20, STATE_VARIABLE_A_0_22, &STATE_VARIABLE_A_1_31, STATE_VARIABLE_B_0_24, &STATE_VARIABLE_B_1_32, STATE_VARIABLE_C_0_26, &STATE_VARIABLE_C_1_33, STATE_VARIABLE_D_0_28, &STATE_VARIABLE_D_1_34);
      mercury__diet__fold_up4_11_p_0(TypeInfo_for_A_40, TypeInfo_for_B_41, TypeInfo_for_C_42, TypeInfo_for_D_43, TypeClassInfo_for_diet_element_39, P_11, X_17, Y_18, STATE_VARIABLE_A_1_31, &STATE_VARIABLE_A_2_35, STATE_VARIABLE_B_1_32, &STATE_VARIABLE_B_2_36, STATE_VARIABLE_C_1_33, &STATE_VARIABLE_C_2_37, STATE_VARIABLE_D_1_34, &STATE_VARIABLE_D_2_38);
      // direct tailcall eliminated
      ;
      next_value_of_T_12 = R_21;
      next_value_of_STATE_VARIABLE_A_0_22 = STATE_VARIABLE_A_2_35;
      next_value_of_STATE_VARIABLE_B_0_24 = STATE_VARIABLE_B_2_36;
      next_value_of_STATE_VARIABLE_C_0_26 = STATE_VARIABLE_C_2_37;
      next_value_of_STATE_VARIABLE_D_0_28 = STATE_VARIABLE_D_2_38;
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
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word TypeInfo_for_D_36,
  MR_Word TypeClassInfo_for_diet_element_32,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_32, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_32)), Hi_14, Lo_13);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_27;
      MR_Box STATE_VARIABLE_B_1_28;
      MR_Box STATE_VARIABLE_C_1_29;
      MR_Box STATE_VARIABLE_D_1_30;
      MR_Box Var_31;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_12, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_13;
      MR_Box next_value_of_STATE_VARIABLE_A_0_19;
      MR_Box next_value_of_STATE_VARIABLE_B_0_21;
      MR_Box next_value_of_STATE_VARIABLE_C_0_23;
      MR_Box next_value_of_STATE_VARIABLE_D_0_25;

      func_1(((MR_Box) (P_12)), Lo_13, STATE_VARIABLE_A_0_19, &STATE_VARIABLE_A_1_27, STATE_VARIABLE_B_0_21, &STATE_VARIABLE_B_1_28, STATE_VARIABLE_C_0_23, &STATE_VARIABLE_C_1_29, STATE_VARIABLE_D_0_25, &STATE_VARIABLE_D_1_30);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_32, 0)), 6))));
      Var_31 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_32)), Lo_13);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_13 = Var_31;
      next_value_of_STATE_VARIABLE_A_0_19 = STATE_VARIABLE_A_1_27;
      next_value_of_STATE_VARIABLE_B_0_21 = STATE_VARIABLE_B_1_28;
      next_value_of_STATE_VARIABLE_C_0_23 = STATE_VARIABLE_C_1_29;
      next_value_of_STATE_VARIABLE_D_0_25 = STATE_VARIABLE_D_1_30;
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
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word TypeClassInfo_for_diet_element_32,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T_10 == (MR_Word) ((MR_Unsigned) 0U)))
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
      MR_Word L_17 = ((MR_Word) ((MR_hl_field(1, T_10, 2))));
      MR_Word R_18 = ((MR_Word) ((MR_hl_field(1, T_10, 3))));
      MR_Tuple Var_25 = ((MR_Tuple) ((MR_hl_field(1, T_10, 0))));
      MR_Box STATE_VARIABLE_Acc1_1_26;
      MR_Box STATE_VARIABLE_Acc2_1_27;
      MR_Box STATE_VARIABLE_Acc3_1_28;
      MR_Box STATE_VARIABLE_Acc1_2_29;
      MR_Box STATE_VARIABLE_Acc2_2_30;
      MR_Box STATE_VARIABLE_Acc3_2_31;
      MR_Word next_value_of_T_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_23;

      X_14 = (MR_hl_field(0, Var_25, 0));
      Y_15 = (MR_hl_field(0, Var_25, 1));
      succeeded = mercury__diet__foldl3_8_p_5(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, TypeClassInfo_for_diet_element_32, P_9, L_17, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_1_26, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_1_27, STATE_VARIABLE_Acc3_0_23, &STATE_VARIABLE_Acc3_1_28);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up3_9_p_5(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, TypeClassInfo_for_diet_element_32, P_9, X_14, Y_15, STATE_VARIABLE_Acc1_1_26, &STATE_VARIABLE_Acc1_2_29, STATE_VARIABLE_Acc2_1_27, &STATE_VARIABLE_Acc2_2_30, STATE_VARIABLE_Acc3_1_28, &STATE_VARIABLE_Acc3_2_31);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_T_10 = R_18;
          next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_2_29;
          next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_2_30;
          next_value_of_STATE_VARIABLE_Acc3_0_23 = STATE_VARIABLE_Acc3_2_31;
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
  MR_Word TypeInfo_for_Acc1_27,
  MR_Word TypeInfo_for_Acc2_28,
  MR_Word TypeInfo_for_Acc3_29,
  MR_Word TypeClassInfo_for_diet_element_26,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_26, 0)), 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_26)), Hi_12, Lo_11);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_22;
      MR_Box STATE_VARIABLE_B_1_23;
      MR_Box STATE_VARIABLE_C_1_24;
      MR_Box Var_25;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_10, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      succeeded = func_1(((MR_Box) (P_10)), Lo_11, STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_1_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_1_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_1_24);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_26, 0)), 6))));
        Var_25 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_26)), Lo_11);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_11 = Var_25;
        next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_1_22;
        next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_1_23;
        next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_1_24;
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
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word TypeClassInfo_for_diet_element_32,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T_10 == (MR_Word) ((MR_Unsigned) 0U)))
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
      MR_Word L_17 = ((MR_Word) ((MR_hl_field(1, T_10, 2))));
      MR_Word R_18 = ((MR_Word) ((MR_hl_field(1, T_10, 3))));
      MR_Tuple Var_25 = ((MR_Tuple) ((MR_hl_field(1, T_10, 0))));
      MR_Box STATE_VARIABLE_Acc1_1_26;
      MR_Box STATE_VARIABLE_Acc2_1_27;
      MR_Box STATE_VARIABLE_Acc3_1_28;
      MR_Box STATE_VARIABLE_Acc1_2_29;
      MR_Box STATE_VARIABLE_Acc2_2_30;
      MR_Box STATE_VARIABLE_Acc3_2_31;
      MR_Word next_value_of_T_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_23;

      X_14 = (MR_hl_field(0, Var_25, 0));
      Y_15 = (MR_hl_field(0, Var_25, 1));
      succeeded = mercury__diet__foldl3_8_p_4(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, TypeClassInfo_for_diet_element_32, P_9, L_17, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_1_26, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_1_27, STATE_VARIABLE_Acc3_0_23, &STATE_VARIABLE_Acc3_1_28);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up3_9_p_4(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, TypeClassInfo_for_diet_element_32, P_9, X_14, Y_15, STATE_VARIABLE_Acc1_1_26, &STATE_VARIABLE_Acc1_2_29, STATE_VARIABLE_Acc2_1_27, &STATE_VARIABLE_Acc2_2_30, STATE_VARIABLE_Acc3_1_28, &STATE_VARIABLE_Acc3_2_31);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_T_10 = R_18;
          next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_2_29;
          next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_2_30;
          next_value_of_STATE_VARIABLE_Acc3_0_23 = STATE_VARIABLE_Acc3_2_31;
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
  MR_Word TypeInfo_for_Acc1_27,
  MR_Word TypeInfo_for_Acc2_28,
  MR_Word TypeInfo_for_Acc3_29,
  MR_Word TypeClassInfo_for_diet_element_26,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_26, 0)), 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_26)), Hi_12, Lo_11);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_22;
      MR_Box STATE_VARIABLE_B_1_23;
      MR_Box STATE_VARIABLE_C_1_24;
      MR_Box Var_25;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_10, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      succeeded = func_1(((MR_Box) (P_10)), Lo_11, STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_1_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_1_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_1_24);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_26, 0)), 6))));
        Var_25 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_26)), Lo_11);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_11 = Var_25;
        next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_1_22;
        next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_1_23;
        next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_1_24;
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
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word TypeClassInfo_for_diet_element_32,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T_10 == (MR_Word) ((MR_Unsigned) 0U)))
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
      MR_Word L_17 = ((MR_Word) ((MR_hl_field(1, T_10, 2))));
      MR_Word R_18 = ((MR_Word) ((MR_hl_field(1, T_10, 3))));
      MR_Tuple Var_25 = ((MR_Tuple) ((MR_hl_field(1, T_10, 0))));
      MR_Box STATE_VARIABLE_Acc1_1_26;
      MR_Box STATE_VARIABLE_Acc2_1_27;
      MR_Box STATE_VARIABLE_Acc3_1_28;
      MR_Box STATE_VARIABLE_Acc1_2_29;
      MR_Box STATE_VARIABLE_Acc2_2_30;
      MR_Box STATE_VARIABLE_Acc3_2_31;
      MR_Word next_value_of_T_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_23;

      X_14 = (MR_hl_field(0, Var_25, 0));
      Y_15 = (MR_hl_field(0, Var_25, 1));
      succeeded = mercury__diet__foldl3_8_p_3(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, TypeClassInfo_for_diet_element_32, P_9, L_17, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_1_26, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_1_27, STATE_VARIABLE_Acc3_0_23, &STATE_VARIABLE_Acc3_1_28);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up3_9_p_3(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, TypeClassInfo_for_diet_element_32, P_9, X_14, Y_15, STATE_VARIABLE_Acc1_1_26, &STATE_VARIABLE_Acc1_2_29, STATE_VARIABLE_Acc2_1_27, &STATE_VARIABLE_Acc2_2_30, STATE_VARIABLE_Acc3_1_28, &STATE_VARIABLE_Acc3_2_31);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_T_10 = R_18;
          next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_2_29;
          next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_2_30;
          next_value_of_STATE_VARIABLE_Acc3_0_23 = STATE_VARIABLE_Acc3_2_31;
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
  MR_Word TypeInfo_for_Acc1_27,
  MR_Word TypeInfo_for_Acc2_28,
  MR_Word TypeInfo_for_Acc3_29,
  MR_Word TypeClassInfo_for_diet_element_26,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_26, 0)), 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_26)), Hi_12, Lo_11);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_22;
      MR_Box STATE_VARIABLE_B_1_23;
      MR_Box STATE_VARIABLE_C_1_24;
      MR_Box Var_25;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_10, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      succeeded = func_1(((MR_Box) (P_10)), Lo_11, STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_1_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_1_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_1_24);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_26, 0)), 6))));
        Var_25 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_26)), Lo_11);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_11 = Var_25;
        next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_1_22;
        next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_1_23;
        next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_1_24;
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
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word TypeClassInfo_for_diet_element_32,
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
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_0_19;
      *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_0_21;
      *STATE_VARIABLE_Acc3_24 = STATE_VARIABLE_Acc3_0_23;
    }
    else
    {
      MR_Box X_14;
      MR_Box Y_15;
      MR_Word L_17 = ((MR_Word) ((MR_hl_field(1, T_10, 2))));
      MR_Word R_18 = ((MR_Word) ((MR_hl_field(1, T_10, 3))));
      MR_Tuple Var_25 = ((MR_Tuple) ((MR_hl_field(1, T_10, 0))));
      MR_Box STATE_VARIABLE_Acc1_1_26;
      MR_Box STATE_VARIABLE_Acc2_1_27;
      MR_Box STATE_VARIABLE_Acc3_1_28;
      MR_Box STATE_VARIABLE_Acc1_2_29;
      MR_Box STATE_VARIABLE_Acc2_2_30;
      MR_Box STATE_VARIABLE_Acc3_2_31;
      MR_Word next_value_of_T_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_23;

      X_14 = (MR_hl_field(0, Var_25, 0));
      Y_15 = (MR_hl_field(0, Var_25, 1));
      mercury__diet__foldl3_8_p_2(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, TypeClassInfo_for_diet_element_32, P_9, L_17, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_1_26, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_1_27, STATE_VARIABLE_Acc3_0_23, &STATE_VARIABLE_Acc3_1_28);
      mercury__diet__fold_up3_9_p_2(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, TypeClassInfo_for_diet_element_32, P_9, X_14, Y_15, STATE_VARIABLE_Acc1_1_26, &STATE_VARIABLE_Acc1_2_29, STATE_VARIABLE_Acc2_1_27, &STATE_VARIABLE_Acc2_2_30, STATE_VARIABLE_Acc3_1_28, &STATE_VARIABLE_Acc3_2_31);
      // direct tailcall eliminated
      ;
      next_value_of_T_10 = R_18;
      next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_2_29;
      next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_2_30;
      next_value_of_STATE_VARIABLE_Acc3_0_23 = STATE_VARIABLE_Acc3_2_31;
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
  MR_Word TypeInfo_for_Acc1_27,
  MR_Word TypeInfo_for_Acc2_28,
  MR_Word TypeInfo_for_Acc3_29,
  MR_Word TypeClassInfo_for_diet_element_26,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_26, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_26)), Hi_12, Lo_11);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_22;
      MR_Box STATE_VARIABLE_B_1_23;
      MR_Box STATE_VARIABLE_C_1_24;
      MR_Box Var_25;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_10, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      func_1(((MR_Box) (P_10)), Lo_11, STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_1_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_1_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_1_24);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_26, 0)), 6))));
      Var_25 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_26)), Lo_11);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_11 = Var_25;
      next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_1_22;
      next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_1_23;
      next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_1_24;
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
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word TypeClassInfo_for_diet_element_32,
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
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_0_19;
      *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_0_21;
      *STATE_VARIABLE_Acc3_24 = STATE_VARIABLE_Acc3_0_23;
    }
    else
    {
      MR_Box X_14;
      MR_Box Y_15;
      MR_Word L_17 = ((MR_Word) ((MR_hl_field(1, T_10, 2))));
      MR_Word R_18 = ((MR_Word) ((MR_hl_field(1, T_10, 3))));
      MR_Tuple Var_25 = ((MR_Tuple) ((MR_hl_field(1, T_10, 0))));
      MR_Box STATE_VARIABLE_Acc1_1_26;
      MR_Box STATE_VARIABLE_Acc2_1_27;
      MR_Box STATE_VARIABLE_Acc3_1_28;
      MR_Box STATE_VARIABLE_Acc1_2_29;
      MR_Box STATE_VARIABLE_Acc2_2_30;
      MR_Box STATE_VARIABLE_Acc3_2_31;
      MR_Word next_value_of_T_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_23;

      X_14 = (MR_hl_field(0, Var_25, 0));
      Y_15 = (MR_hl_field(0, Var_25, 1));
      mercury__diet__foldl3_8_p_1(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, TypeClassInfo_for_diet_element_32, P_9, L_17, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_1_26, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_1_27, STATE_VARIABLE_Acc3_0_23, &STATE_VARIABLE_Acc3_1_28);
      mercury__diet__fold_up3_9_p_1(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, TypeClassInfo_for_diet_element_32, P_9, X_14, Y_15, STATE_VARIABLE_Acc1_1_26, &STATE_VARIABLE_Acc1_2_29, STATE_VARIABLE_Acc2_1_27, &STATE_VARIABLE_Acc2_2_30, STATE_VARIABLE_Acc3_1_28, &STATE_VARIABLE_Acc3_2_31);
      // direct tailcall eliminated
      ;
      next_value_of_T_10 = R_18;
      next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_2_29;
      next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_2_30;
      next_value_of_STATE_VARIABLE_Acc3_0_23 = STATE_VARIABLE_Acc3_2_31;
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
  MR_Word TypeInfo_for_Acc1_27,
  MR_Word TypeInfo_for_Acc2_28,
  MR_Word TypeInfo_for_Acc3_29,
  MR_Word TypeClassInfo_for_diet_element_26,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_26, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_26)), Hi_12, Lo_11);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_22;
      MR_Box STATE_VARIABLE_B_1_23;
      MR_Box STATE_VARIABLE_C_1_24;
      MR_Box Var_25;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_10, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      func_1(((MR_Box) (P_10)), Lo_11, STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_1_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_1_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_1_24);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_26, 0)), 6))));
      Var_25 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_26)), Lo_11);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_11 = Var_25;
      next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_1_22;
      next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_1_23;
      next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_1_24;
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
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word TypeClassInfo_for_diet_element_32,
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
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_0_19;
      *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_0_21;
      *STATE_VARIABLE_Acc3_24 = STATE_VARIABLE_Acc3_0_23;
    }
    else
    {
      MR_Box X_14;
      MR_Box Y_15;
      MR_Word L_17 = ((MR_Word) ((MR_hl_field(1, T_10, 2))));
      MR_Word R_18 = ((MR_Word) ((MR_hl_field(1, T_10, 3))));
      MR_Tuple Var_25 = ((MR_Tuple) ((MR_hl_field(1, T_10, 0))));
      MR_Box STATE_VARIABLE_Acc1_1_26;
      MR_Box STATE_VARIABLE_Acc2_1_27;
      MR_Box STATE_VARIABLE_Acc3_1_28;
      MR_Box STATE_VARIABLE_Acc1_2_29;
      MR_Box STATE_VARIABLE_Acc2_2_30;
      MR_Box STATE_VARIABLE_Acc3_2_31;
      MR_Word next_value_of_T_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_23;

      X_14 = (MR_hl_field(0, Var_25, 0));
      Y_15 = (MR_hl_field(0, Var_25, 1));
      mercury__diet__foldl3_8_p_0(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, TypeClassInfo_for_diet_element_32, P_9, L_17, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_1_26, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_1_27, STATE_VARIABLE_Acc3_0_23, &STATE_VARIABLE_Acc3_1_28);
      mercury__diet__fold_up3_9_p_0(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, TypeClassInfo_for_diet_element_32, P_9, X_14, Y_15, STATE_VARIABLE_Acc1_1_26, &STATE_VARIABLE_Acc1_2_29, STATE_VARIABLE_Acc2_1_27, &STATE_VARIABLE_Acc2_2_30, STATE_VARIABLE_Acc3_1_28, &STATE_VARIABLE_Acc3_2_31);
      // direct tailcall eliminated
      ;
      next_value_of_T_10 = R_18;
      next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_2_29;
      next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_2_30;
      next_value_of_STATE_VARIABLE_Acc3_0_23 = STATE_VARIABLE_Acc3_2_31;
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
  MR_Word TypeInfo_for_Acc1_27,
  MR_Word TypeInfo_for_Acc2_28,
  MR_Word TypeInfo_for_Acc3_29,
  MR_Word TypeClassInfo_for_diet_element_26,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_26, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_26)), Hi_12, Lo_11);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_22;
      MR_Box STATE_VARIABLE_B_1_23;
      MR_Box STATE_VARIABLE_C_1_24;
      MR_Box Var_25;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_10, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      func_1(((MR_Box) (P_10)), Lo_11, STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_1_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_1_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_1_24);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_26, 0)), 6))));
      Var_25 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_26)), Lo_11);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_11 = Var_25;
      next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_1_22;
      next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_1_23;
      next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_1_24;
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
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeClassInfo_for_diet_element_25,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_17 = STATE_VARIABLE_Acc1_0_16;
      *STATE_VARIABLE_Acc2_19 = STATE_VARIABLE_Acc2_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_11;
      MR_Box Y_12;
      MR_Word L_14 = ((MR_Word) ((MR_hl_field(1, T_8, 2))));
      MR_Word R_15 = ((MR_Word) ((MR_hl_field(1, T_8, 3))));
      MR_Tuple Var_20 = ((MR_Tuple) ((MR_hl_field(1, T_8, 0))));
      MR_Box STATE_VARIABLE_Acc1_1_21;
      MR_Box STATE_VARIABLE_Acc2_1_22;
      MR_Box STATE_VARIABLE_Acc1_2_23;
      MR_Box STATE_VARIABLE_Acc2_2_24;
      MR_Word next_value_of_T_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_16;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_18;

      X_11 = (MR_hl_field(0, Var_20, 0));
      Y_12 = (MR_hl_field(0, Var_20, 1));
      succeeded = mercury__diet__foldl2_6_p_5(TypeInfo_for_A_26, TypeInfo_for_B_27, TypeClassInfo_for_diet_element_25, P_7, L_14, STATE_VARIABLE_Acc1_0_16, &STATE_VARIABLE_Acc1_1_21, STATE_VARIABLE_Acc2_0_18, &STATE_VARIABLE_Acc2_1_22);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up2_7_p_5(TypeInfo_for_A_26, TypeInfo_for_B_27, TypeClassInfo_for_diet_element_25, P_7, X_11, Y_12, STATE_VARIABLE_Acc1_1_21, &STATE_VARIABLE_Acc1_2_23, STATE_VARIABLE_Acc2_1_22, &STATE_VARIABLE_Acc2_2_24);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_T_8 = R_15;
          next_value_of_STATE_VARIABLE_Acc1_0_16 = STATE_VARIABLE_Acc1_2_23;
          next_value_of_STATE_VARIABLE_Acc2_0_18 = STATE_VARIABLE_Acc2_2_24;
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
  MR_Word TypeInfo_for_Acc1_21,
  MR_Word TypeInfo_for_Acc2_22,
  MR_Word TypeClassInfo_for_diet_element_20,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_20, 0)), 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_20)), Hi_10, Lo_9);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_17;
      MR_Box STATE_VARIABLE_B_1_18;
      MR_Box Var_19;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_8, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      succeeded = func_1(((MR_Box) (P_8)), Lo_9, STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_1_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_1_18);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_20, 0)), 6))));
        Var_19 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_20)), Lo_9);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_9 = Var_19;
        next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_1_17;
        next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_1_18;
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
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeClassInfo_for_diet_element_25,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_17 = STATE_VARIABLE_Acc1_0_16;
      *STATE_VARIABLE_Acc2_19 = STATE_VARIABLE_Acc2_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_11;
      MR_Box Y_12;
      MR_Word L_14 = ((MR_Word) ((MR_hl_field(1, T_8, 2))));
      MR_Word R_15 = ((MR_Word) ((MR_hl_field(1, T_8, 3))));
      MR_Tuple Var_20 = ((MR_Tuple) ((MR_hl_field(1, T_8, 0))));
      MR_Box STATE_VARIABLE_Acc1_1_21;
      MR_Box STATE_VARIABLE_Acc2_1_22;
      MR_Box STATE_VARIABLE_Acc1_2_23;
      MR_Box STATE_VARIABLE_Acc2_2_24;
      MR_Word next_value_of_T_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_16;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_18;

      X_11 = (MR_hl_field(0, Var_20, 0));
      Y_12 = (MR_hl_field(0, Var_20, 1));
      succeeded = mercury__diet__foldl2_6_p_4(TypeInfo_for_A_26, TypeInfo_for_B_27, TypeClassInfo_for_diet_element_25, P_7, L_14, STATE_VARIABLE_Acc1_0_16, &STATE_VARIABLE_Acc1_1_21, STATE_VARIABLE_Acc2_0_18, &STATE_VARIABLE_Acc2_1_22);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up2_7_p_4(TypeInfo_for_A_26, TypeInfo_for_B_27, TypeClassInfo_for_diet_element_25, P_7, X_11, Y_12, STATE_VARIABLE_Acc1_1_21, &STATE_VARIABLE_Acc1_2_23, STATE_VARIABLE_Acc2_1_22, &STATE_VARIABLE_Acc2_2_24);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_T_8 = R_15;
          next_value_of_STATE_VARIABLE_Acc1_0_16 = STATE_VARIABLE_Acc1_2_23;
          next_value_of_STATE_VARIABLE_Acc2_0_18 = STATE_VARIABLE_Acc2_2_24;
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
  MR_Word TypeInfo_for_Acc1_21,
  MR_Word TypeInfo_for_Acc2_22,
  MR_Word TypeClassInfo_for_diet_element_20,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_20, 0)), 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_20)), Hi_10, Lo_9);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_17;
      MR_Box STATE_VARIABLE_B_1_18;
      MR_Box Var_19;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_8, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      succeeded = func_1(((MR_Box) (P_8)), Lo_9, STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_1_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_1_18);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_20, 0)), 6))));
        Var_19 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_20)), Lo_9);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_9 = Var_19;
        next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_1_17;
        next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_1_18;
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
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeClassInfo_for_diet_element_25,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_17 = STATE_VARIABLE_Acc1_0_16;
      *STATE_VARIABLE_Acc2_19 = STATE_VARIABLE_Acc2_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_11;
      MR_Box Y_12;
      MR_Word L_14 = ((MR_Word) ((MR_hl_field(1, T_8, 2))));
      MR_Word R_15 = ((MR_Word) ((MR_hl_field(1, T_8, 3))));
      MR_Tuple Var_20 = ((MR_Tuple) ((MR_hl_field(1, T_8, 0))));
      MR_Box STATE_VARIABLE_Acc1_1_21;
      MR_Box STATE_VARIABLE_Acc2_1_22;
      MR_Box STATE_VARIABLE_Acc1_2_23;
      MR_Box STATE_VARIABLE_Acc2_2_24;
      MR_Word next_value_of_T_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_16;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_18;

      X_11 = (MR_hl_field(0, Var_20, 0));
      Y_12 = (MR_hl_field(0, Var_20, 1));
      succeeded = mercury__diet__foldl2_6_p_3(TypeInfo_for_A_26, TypeInfo_for_B_27, TypeClassInfo_for_diet_element_25, P_7, L_14, STATE_VARIABLE_Acc1_0_16, &STATE_VARIABLE_Acc1_1_21, STATE_VARIABLE_Acc2_0_18, &STATE_VARIABLE_Acc2_1_22);
      if (succeeded)
      {
        succeeded = mercury__diet__fold_up2_7_p_3(TypeInfo_for_A_26, TypeInfo_for_B_27, TypeClassInfo_for_diet_element_25, P_7, X_11, Y_12, STATE_VARIABLE_Acc1_1_21, &STATE_VARIABLE_Acc1_2_23, STATE_VARIABLE_Acc2_1_22, &STATE_VARIABLE_Acc2_2_24);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_T_8 = R_15;
          next_value_of_STATE_VARIABLE_Acc1_0_16 = STATE_VARIABLE_Acc1_2_23;
          next_value_of_STATE_VARIABLE_Acc2_0_18 = STATE_VARIABLE_Acc2_2_24;
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
  MR_Word TypeInfo_for_Acc1_21,
  MR_Word TypeInfo_for_Acc2_22,
  MR_Word TypeClassInfo_for_diet_element_20,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_20, 0)), 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_20)), Hi_10, Lo_9);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_17;
      MR_Box STATE_VARIABLE_B_1_18;
      MR_Box Var_19;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_8, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      succeeded = func_1(((MR_Box) (P_8)), Lo_9, STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_1_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_1_18);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_20, 0)), 6))));
        Var_19 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_20)), Lo_9);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_9 = Var_19;
        next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_1_17;
        next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_1_18;
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
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeClassInfo_for_diet_element_25,
  MR_Word P_7,
  MR_Word T_8,
  MR_Box STATE_VARIABLE_Acc1_0_16,
  MR_Box * STATE_VARIABLE_Acc1_17,
  MR_Box STATE_VARIABLE_Acc2_0_18,
  MR_Box * STATE_VARIABLE_Acc2_19)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_17 = STATE_VARIABLE_Acc1_0_16;
      *STATE_VARIABLE_Acc2_19 = STATE_VARIABLE_Acc2_0_18;
    }
    else
    {
      MR_Box X_11;
      MR_Box Y_12;
      MR_Word L_14 = ((MR_Word) ((MR_hl_field(1, T_8, 2))));
      MR_Word R_15 = ((MR_Word) ((MR_hl_field(1, T_8, 3))));
      MR_Tuple Var_20 = ((MR_Tuple) ((MR_hl_field(1, T_8, 0))));
      MR_Box STATE_VARIABLE_Acc1_1_21;
      MR_Box STATE_VARIABLE_Acc2_1_22;
      MR_Box STATE_VARIABLE_Acc1_2_23;
      MR_Box STATE_VARIABLE_Acc2_2_24;
      MR_Word next_value_of_T_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_16;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_18;

      X_11 = (MR_hl_field(0, Var_20, 0));
      Y_12 = (MR_hl_field(0, Var_20, 1));
      mercury__diet__foldl2_6_p_2(TypeInfo_for_A_26, TypeInfo_for_B_27, TypeClassInfo_for_diet_element_25, P_7, L_14, STATE_VARIABLE_Acc1_0_16, &STATE_VARIABLE_Acc1_1_21, STATE_VARIABLE_Acc2_0_18, &STATE_VARIABLE_Acc2_1_22);
      mercury__diet__fold_up2_7_p_2(TypeInfo_for_A_26, TypeInfo_for_B_27, TypeClassInfo_for_diet_element_25, P_7, X_11, Y_12, STATE_VARIABLE_Acc1_1_21, &STATE_VARIABLE_Acc1_2_23, STATE_VARIABLE_Acc2_1_22, &STATE_VARIABLE_Acc2_2_24);
      // direct tailcall eliminated
      ;
      next_value_of_T_8 = R_15;
      next_value_of_STATE_VARIABLE_Acc1_0_16 = STATE_VARIABLE_Acc1_2_23;
      next_value_of_STATE_VARIABLE_Acc2_0_18 = STATE_VARIABLE_Acc2_2_24;
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
  MR_Word TypeInfo_for_Acc1_21,
  MR_Word TypeInfo_for_Acc2_22,
  MR_Word TypeClassInfo_for_diet_element_20,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_20, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_20)), Hi_10, Lo_9);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_17;
      MR_Box STATE_VARIABLE_B_1_18;
      MR_Box Var_19;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_8, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      func_1(((MR_Box) (P_8)), Lo_9, STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_1_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_1_18);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_20, 0)), 6))));
      Var_19 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_20)), Lo_9);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_9 = Var_19;
      next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_1_17;
      next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_1_18;
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
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeClassInfo_for_diet_element_25,
  MR_Word P_7,
  MR_Word T_8,
  MR_Box STATE_VARIABLE_Acc1_0_16,
  MR_Box * STATE_VARIABLE_Acc1_17,
  MR_Box STATE_VARIABLE_Acc2_0_18,
  MR_Box * STATE_VARIABLE_Acc2_19)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_17 = STATE_VARIABLE_Acc1_0_16;
      *STATE_VARIABLE_Acc2_19 = STATE_VARIABLE_Acc2_0_18;
    }
    else
    {
      MR_Box X_11;
      MR_Box Y_12;
      MR_Word L_14 = ((MR_Word) ((MR_hl_field(1, T_8, 2))));
      MR_Word R_15 = ((MR_Word) ((MR_hl_field(1, T_8, 3))));
      MR_Tuple Var_20 = ((MR_Tuple) ((MR_hl_field(1, T_8, 0))));
      MR_Box STATE_VARIABLE_Acc1_1_21;
      MR_Box STATE_VARIABLE_Acc2_1_22;
      MR_Box STATE_VARIABLE_Acc1_2_23;
      MR_Box STATE_VARIABLE_Acc2_2_24;
      MR_Word next_value_of_T_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_16;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_18;

      X_11 = (MR_hl_field(0, Var_20, 0));
      Y_12 = (MR_hl_field(0, Var_20, 1));
      mercury__diet__foldl2_6_p_1(TypeInfo_for_A_26, TypeInfo_for_B_27, TypeClassInfo_for_diet_element_25, P_7, L_14, STATE_VARIABLE_Acc1_0_16, &STATE_VARIABLE_Acc1_1_21, STATE_VARIABLE_Acc2_0_18, &STATE_VARIABLE_Acc2_1_22);
      mercury__diet__fold_up2_7_p_1(TypeInfo_for_A_26, TypeInfo_for_B_27, TypeClassInfo_for_diet_element_25, P_7, X_11, Y_12, STATE_VARIABLE_Acc1_1_21, &STATE_VARIABLE_Acc1_2_23, STATE_VARIABLE_Acc2_1_22, &STATE_VARIABLE_Acc2_2_24);
      // direct tailcall eliminated
      ;
      next_value_of_T_8 = R_15;
      next_value_of_STATE_VARIABLE_Acc1_0_16 = STATE_VARIABLE_Acc1_2_23;
      next_value_of_STATE_VARIABLE_Acc2_0_18 = STATE_VARIABLE_Acc2_2_24;
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
  MR_Word TypeInfo_for_Acc1_21,
  MR_Word TypeInfo_for_Acc2_22,
  MR_Word TypeClassInfo_for_diet_element_20,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_20, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_20)), Hi_10, Lo_9);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_17;
      MR_Box STATE_VARIABLE_B_1_18;
      MR_Box Var_19;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_8, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      func_1(((MR_Box) (P_8)), Lo_9, STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_1_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_1_18);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_20, 0)), 6))));
      Var_19 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_20)), Lo_9);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_9 = Var_19;
      next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_1_17;
      next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_1_18;
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
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeClassInfo_for_diet_element_25,
  MR_Word P_7,
  MR_Word T_8,
  MR_Box STATE_VARIABLE_Acc1_0_16,
  MR_Box * STATE_VARIABLE_Acc1_17,
  MR_Box STATE_VARIABLE_Acc2_0_18,
  MR_Box * STATE_VARIABLE_Acc2_19)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_17 = STATE_VARIABLE_Acc1_0_16;
      *STATE_VARIABLE_Acc2_19 = STATE_VARIABLE_Acc2_0_18;
    }
    else
    {
      MR_Box X_11;
      MR_Box Y_12;
      MR_Word L_14 = ((MR_Word) ((MR_hl_field(1, T_8, 2))));
      MR_Word R_15 = ((MR_Word) ((MR_hl_field(1, T_8, 3))));
      MR_Tuple Var_20 = ((MR_Tuple) ((MR_hl_field(1, T_8, 0))));
      MR_Box STATE_VARIABLE_Acc1_1_21;
      MR_Box STATE_VARIABLE_Acc2_1_22;
      MR_Box STATE_VARIABLE_Acc1_2_23;
      MR_Box STATE_VARIABLE_Acc2_2_24;
      MR_Word next_value_of_T_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_16;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_18;

      X_11 = (MR_hl_field(0, Var_20, 0));
      Y_12 = (MR_hl_field(0, Var_20, 1));
      mercury__diet__foldl2_6_p_0(TypeInfo_for_A_26, TypeInfo_for_B_27, TypeClassInfo_for_diet_element_25, P_7, L_14, STATE_VARIABLE_Acc1_0_16, &STATE_VARIABLE_Acc1_1_21, STATE_VARIABLE_Acc2_0_18, &STATE_VARIABLE_Acc2_1_22);
      mercury__diet__fold_up2_7_p_0(TypeInfo_for_A_26, TypeInfo_for_B_27, TypeClassInfo_for_diet_element_25, P_7, X_11, Y_12, STATE_VARIABLE_Acc1_1_21, &STATE_VARIABLE_Acc1_2_23, STATE_VARIABLE_Acc2_1_22, &STATE_VARIABLE_Acc2_2_24);
      // direct tailcall eliminated
      ;
      next_value_of_T_8 = R_15;
      next_value_of_STATE_VARIABLE_Acc1_0_16 = STATE_VARIABLE_Acc1_2_23;
      next_value_of_STATE_VARIABLE_Acc2_0_18 = STATE_VARIABLE_Acc2_2_24;
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
  MR_Word TypeInfo_for_Acc1_21,
  MR_Word TypeInfo_for_Acc2_22,
  MR_Word TypeClassInfo_for_diet_element_20,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_20, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_20)), Hi_10, Lo_9);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_1_17;
      MR_Box STATE_VARIABLE_B_1_18;
      MR_Box Var_19;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_8, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      func_1(((MR_Box) (P_8)), Lo_9, STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_1_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_1_18);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_20, 0)), 6))));
      Var_19 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_20)), Lo_9);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_9 = Var_19;
      next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_1_17;
      next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_1_18;
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
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Box STATE_VARIABLE_Acc_1_16;
      MR_Box STATE_VARIABLE_Acc_2_17;
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      succeeded = mercury__diet__foldl_4_p_5(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, L_11, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      if (succeeded)
      {
        succeeded = mercury__diet__foldl_2_5_p_5(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_T_6 = R_12;
          next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
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
  MR_Word TypeInfo_for_Acc_15,
  MR_Word TypeClassInfo_for_diet_element_14,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_1_12;
      MR_Box Var_13;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_6, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      succeeded = func_1(((MR_Box) (P_6)), Lo_7, STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_1_12);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 6))));
        Var_13 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_14)), Lo_7);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_7 = Var_13;
        next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_1_12;
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
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Box STATE_VARIABLE_Acc_1_16;
      MR_Box STATE_VARIABLE_Acc_2_17;
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      succeeded = mercury__diet__foldl_4_p_4(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, L_11, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      if (succeeded)
      {
        succeeded = mercury__diet__foldl_2_5_p_4(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_T_6 = R_12;
          next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
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
  MR_Word TypeInfo_for_Acc_15,
  MR_Word TypeClassInfo_for_diet_element_14,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_1_12;
      MR_Box Var_13;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_6, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      succeeded = func_1(((MR_Box) (P_6)), Lo_7, STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_1_12);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 6))));
        Var_13 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_14)), Lo_7);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_7 = Var_13;
        next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_1_12;
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
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Box STATE_VARIABLE_Acc_1_16;
      MR_Box STATE_VARIABLE_Acc_2_17;
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      succeeded = mercury__diet__foldl_4_p_3(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, L_11, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      if (succeeded)
      {
        succeeded = mercury__diet__foldl_2_5_p_3(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_T_6 = R_12;
          next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
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
  MR_Word TypeInfo_for_Acc_15,
  MR_Word TypeClassInfo_for_diet_element_14,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_1_12;
      MR_Box Var_13;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_6, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      succeeded = func_1(((MR_Box) (P_6)), Lo_7, STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_1_12);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 6))));
        Var_13 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_14)), Lo_7);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_7 = Var_13;
        next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_1_12;
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
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Box STATE_VARIABLE_Acc_1_16;
      MR_Box STATE_VARIABLE_Acc_2_17;
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      mercury__diet__foldl_4_p_2(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, L_11, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      mercury__diet__foldl_2_5_p_2(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
      // direct tailcall eliminated
      ;
      next_value_of_T_6 = R_12;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl_2_5_p_2(
  MR_Word TypeInfo_for_Acc_15,
  MR_Word TypeClassInfo_for_diet_element_14,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_1_12;
      MR_Box Var_13;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_6, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      func_1(((MR_Box) (P_6)), Lo_7, STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_1_12);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 6))));
      Var_13 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_14)), Lo_7);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_7 = Var_13;
      next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_1_12;
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
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Box STATE_VARIABLE_Acc_1_16;
      MR_Box STATE_VARIABLE_Acc_2_17;
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      mercury__diet__foldl_4_p_1(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, L_11, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      mercury__diet__foldl_2_5_p_1(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
      // direct tailcall eliminated
      ;
      next_value_of_T_6 = R_12;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl_2_5_p_1(
  MR_Word TypeInfo_for_Acc_15,
  MR_Word TypeClassInfo_for_diet_element_14,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_1_12;
      MR_Box Var_13;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_6, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      func_1(((MR_Box) (P_6)), Lo_7, STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_1_12);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 6))));
      Var_13 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_14)), Lo_7);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_7 = Var_13;
      next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_1_12;
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
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Box STATE_VARIABLE_Acc_1_16;
      MR_Box STATE_VARIABLE_Acc_2_17;
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      mercury__diet__foldl_4_p_0(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, L_11, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      mercury__diet__foldl_2_5_p_0(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
      // direct tailcall eliminated
      ;
      next_value_of_T_6 = R_12;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl_2_5_p_0(
  MR_Word TypeInfo_for_Acc_15,
  MR_Word TypeClassInfo_for_diet_element_14,
  MR_Word P_6,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_1_12;
      MR_Box Var_13;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_6, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      func_1(((MR_Box) (P_6)), Lo_7, STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_1_12);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 6))));
      Var_13 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_14)), Lo_7);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_7 = Var_13;
      next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_1_12;
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
  MR_Box Acc_8;

  mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(F_5, TypeClassInfo_for_diet_element_19, Set_6, Acc0_7, &Acc_8);
  return Acc_8;
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(
  MR_Word Var_22,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Box STATE_VARIABLE_Acc_1_16;
      MR_Box STATE_VARIABLE_Acc_2_17;
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(Var_22, TypeClassInfo_for_diet_element_18, L_11, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(Var_22, TypeClassInfo_for_diet_element_18, X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
      // direct tailcall eliminated
      ;
      next_value_of_T_6 = R_12;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
  MR_Word Var_18,
  MR_Word TypeClassInfo_for_diet_element_14,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_1_12;
      MR_Box Var_13;
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_18, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      STATE_VARIABLE_Acc_1_12 = func_1(((MR_Box) (Var_18)), Lo_7, STATE_VARIABLE_Acc_0_10);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 6))));
      Var_13 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_14)), Lo_7);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_7 = Var_13;
      next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_1_12;
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
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Box STATE_VARIABLE_Acc_1_16;
      MR_Box STATE_VARIABLE_Acc_2_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      succeeded = mercury__diet__foldr_intervals_4_p_2(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      if (succeeded)
      {
        func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, 1))));
        succeeded = func_0(((MR_Box) (P_5)), X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_T_6 = L_11;
          next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
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
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Box STATE_VARIABLE_Acc_1_16;
      MR_Box STATE_VARIABLE_Acc_2_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      mercury__diet__foldr_intervals_4_p_1(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, 1))));
      func_0(((MR_Box) (P_5)), X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
      // direct tailcall eliminated
      ;
      next_value_of_T_6 = L_11;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldr_intervals_4_p_0(
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Box STATE_VARIABLE_Acc_1_16;
      MR_Box STATE_VARIABLE_Acc_2_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      mercury__diet__foldr_intervals_4_p_0(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, 1))));
      func_0(((MR_Box) (P_5)), X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
      // direct tailcall eliminated
      ;
      next_value_of_T_6 = L_11;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl_intervals_4_p_2(
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Box STATE_VARIABLE_Acc_1_16;
      MR_Box STATE_VARIABLE_Acc_2_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      succeeded = mercury__diet__foldl_intervals_4_p_2(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, L_11, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      if (succeeded)
      {
        func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, 1))));
        succeeded = func_0(((MR_Box) (P_5)), X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_T_6 = R_12;
          next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
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
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Box STATE_VARIABLE_Acc_1_16;
      MR_Box STATE_VARIABLE_Acc_2_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      mercury__diet__foldl_intervals_4_p_1(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, L_11, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, 1))));
      func_0(((MR_Box) (P_5)), X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
      // direct tailcall eliminated
      ;
      next_value_of_T_6 = R_12;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl_intervals_4_p_0(
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word P_5,
  MR_Word T_6,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Box STATE_VARIABLE_Acc_1_16;
      MR_Box STATE_VARIABLE_Acc_2_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_T_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      mercury__diet__foldl_intervals_4_p_0(TypeInfo_for_A_19, TypeClassInfo_for_diet_element_18, P_5, L_11, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, 1))));
      func_0(((MR_Box) (P_5)), X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
      // direct tailcall eliminated
      ;
      next_value_of_T_6 = R_12;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
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
  MR_Word TrueSet_6;
  MR_Word _FalseSet_7;

  mercury__diet__divide_4_p_0(TypeClassInfo_for_diet_element_8, Pred_4, Set_5, &TrueSet_6, &_FalseSet_7);
  return TrueSet_6;
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

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((Set_4 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Box X_5;
      MR_Box Y_6;
      MR_Word L_8 = ((MR_Word) ((MR_hl_field(1, Set_4, 2))));
      MR_Word R_9 = ((MR_Word) ((MR_hl_field(1, Set_4, 3))));
      MR_Tuple Var_10 = ((MR_Tuple) ((MR_hl_field(1, Set_4, 0))));
      MR_Word next_value_of_Set_4;

      X_5 = (MR_hl_field(0, Var_10, 0));
      Y_6 = (MR_hl_field(0, Var_10, 1));
      succeeded = mercury__diet__all_true_2_p_0(TypeClassInfo_for_diet_element_11, P_3, L_8);
      if (succeeded)
      {
        succeeded = mercury__diet__all_true_interval_3_p_0(TypeClassInfo_for_diet_element_11, P_3, X_5, Y_6);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_8, 0)), 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_8)), Hi_6, Lo_5);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Box Var_7;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, P_4, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_5;

      succeeded = func_1(((MR_Box) (P_4)), Lo_5);
      if (succeeded)
      {
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_8, 0)), 6))));
        Var_7 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_8)), Lo_5);
        // direct tailcall eliminated
        ;
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

MR_Integer MR_CALL 
mercury__diet__count_1_f_0(
  MR_Word TypeClassInfo_for_enum_6,
  MR_Word T_3)
{
  MR_Integer Count_4;

  mercury__diet__count_3_p_0(TypeClassInfo_for_enum_6, T_3, (MR_Integer) 0, &Count_4);
  return Count_4;
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
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *Acc_6 = Acc0_5;
    else
    {
      MR_Box X_7;
      MR_Box Y_8;
      MR_Word L_10 = ((MR_Word) ((MR_hl_field(1, T_4, 2))));
      MR_Word R_11 = ((MR_Word) ((MR_hl_field(1, T_4, 3))));
      MR_Integer Acc1_12;
      MR_Integer Acc2_13;
      MR_Tuple Var_14 = ((MR_Tuple) ((MR_hl_field(1, T_4, 0))));
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Integer Var_17;
      MR_Integer Var_18;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Box conv1_Var_17;
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box conv3_Var_18;
      MR_Word next_value_of_T_4;
      MR_Integer next_value_of_Acc0_5;

      X_7 = (MR_hl_field(0, Var_14, 0));
      Y_8 = (MR_hl_field(0, Var_14, 1));
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_enum_20, 0)), 5))));
      conv1_Var_17 = func_0(((MR_Box) (TypeClassInfo_for_enum_20)), Y_8);
      Var_17 = ((MR_Integer) (conv1_Var_17));
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_enum_20, 0)), 5))));
      conv3_Var_18 = func_2(((MR_Box) (TypeClassInfo_for_enum_20)), X_7);
      Var_18 = ((MR_Integer) (conv3_Var_18));
      Var_16 = (MR_Integer) ((MR_Unsigned) Var_17 - (MR_Unsigned) Var_18);
      Var_15 = (MR_Integer) ((MR_Unsigned) Acc0_5 + (MR_Unsigned) Var_16);
      Acc1_12 = (MR_Integer) ((MR_Unsigned) Var_15 + (MR_Unsigned) 1);
      mercury__diet__count_3_p_0(TypeClassInfo_for_enum_20, L_10, Acc1_12, &Acc2_13);
      // direct tailcall eliminated
      ;
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
mercury__diet__to_sorted_interval_list_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_7,
  MR_Word Set_3,
  MR_Word * List_4)
{
  mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(TypeClassInfo_for_diet_element_7, Set_3, (MR_Word) ((MR_Unsigned) 0U), List_4);
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(
  MR_Word Var_26,
  MR_Word T_6,
  MR_Word STATE_VARIABLE_Acc_0_13,
  MR_Word * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Word STATE_VARIABLE_Acc_1_16;
      MR_Word STATE_VARIABLE_Acc_2_17;
      MR_Word next_value_of_T_6;
      MR_Word next_value_of_STATE_VARIABLE_Acc_0_13;

      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(Var_26, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      {
        STATE_VARIABLE_Acc_2_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Acc_2_17, 0) = ((MR_Box) (Var_15));
        MR_hl_field(1, STATE_VARIABLE_Acc_2_17, 1) = ((MR_Box) (STATE_VARIABLE_Acc_1_16));
      }
      // direct tailcall eliminated
      ;
      next_value_of_T_6 = L_11;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
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
  mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(TypeClassInfo_for_diet_element_7, TypeClassInfo_for_diet_element_7, T_3, (MR_Word) ((MR_Unsigned) 0U), List_4);
}

MR_Word MR_CALL 
mercury__diet__to_sorted_list_1_f_0(
  MR_Word TypeClassInfo_for_diet_element_5,
  MR_Word T_3)
{
  MR_Word List_4;

  mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(TypeClassInfo_for_diet_element_5, TypeClassInfo_for_diet_element_5, T_3, (MR_Word) ((MR_Unsigned) 0U), &List_4);
  return List_4;
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(
  MR_Word Var_22,
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word T_6,
  MR_Word STATE_VARIABLE_Acc_0_13,
  MR_Word * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box X_8;
      MR_Box Y_9;
      MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T_6, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T_6, 3))));
      MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T_6, 0))));
      MR_Word STATE_VARIABLE_Acc_1_16;
      MR_Word STATE_VARIABLE_Acc_2_17;
      MR_Word next_value_of_T_6;
      MR_Word next_value_of_STATE_VARIABLE_Acc_0_13;

      X_8 = (MR_hl_field(0, Var_15, 0));
      Y_9 = (MR_hl_field(0, Var_15, 1));
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(Var_22, TypeClassInfo_for_diet_element_18, R_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_1_16);
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_48_95_95_91_49_44_32_51_44_32_53_93_95_48_5_p_0(Var_22, TypeClassInfo_for_diet_element_18, X_8, Y_9, STATE_VARIABLE_Acc_1_16, &STATE_VARIABLE_Acc_2_17);
      // direct tailcall eliminated
      ;
      next_value_of_T_6 = L_11;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_2_17;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_48_95_95_91_49_44_32_51_44_32_53_93_95_48_5_p_0(
  MR_Word Var_18,
  MR_Word TypeClassInfo_for_diet_element_14,
  MR_Box Lo_7,
  MR_Box Hi_8,
  MR_Word STATE_VARIABLE_A_0_10,
  MR_Word * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8, Lo_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_A_1_12;
      MR_Box Var_13;
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
      MR_Box next_value_of_Hi_8;
      MR_Word next_value_of_STATE_VARIABLE_A_0_10;

      {
        STATE_VARIABLE_A_1_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_A_1_12, 0) = Hi_8;
        MR_hl_field(1, STATE_VARIABLE_A_1_12, 1) = ((MR_Box) (STATE_VARIABLE_A_0_10));
      }
      func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_14, 0)), 7))));
      Var_13 = func_1(((MR_Box) (TypeClassInfo_for_diet_element_14)), Hi_8);
      // direct tailcall eliminated
      ;
      next_value_of_Hi_8 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_1_12;
      Hi_8 = next_value_of_Hi_8;
      STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
    break;
  }
}

MR_Word MR_CALL 
mercury__diet__from_sorted_list_1_f_0(
  MR_Word TypeClassInfo_for_diet_element_5,
  MR_Word SortedList_3)
{
  MR_Word Set_4;

  mercury__diet__list_to_set_2_p_0(TypeClassInfo_for_diet_element_5, SortedList_3, &Set_4);
  return Set_4;
}

void MR_CALL 
mercury__diet__sorted_list_to_set_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_5,
  MR_Word SortedList_3,
  MR_Word * Set_4)
{
  mercury__diet__list_to_set_2_p_0(TypeClassInfo_for_diet_element_5, SortedList_3, Set_4);
}

MR_Word MR_CALL 
mercury__diet__sorted_list_to_set_1_f_0(
  MR_Word TypeClassInfo_for_diet_element_5,
  MR_Word SortedList_3)
{
  MR_Word Set_4;

  mercury__diet__list_to_set_2_p_0(TypeClassInfo_for_diet_element_5, SortedList_3, &Set_4);
  return Set_4;
}

void MR_CALL 
mercury__diet__from_interval_list_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_7,
  MR_Word List_3,
  MR_Word * Set_4)
{
  mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(TypeClassInfo_for_diet_element_7, List_3, (MR_Word) ((MR_Unsigned) 0U), Set_4);
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
  MR_Word Var_22,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Tuple Var_9 = ((MR_Tuple) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_13;
      MR_Box X_23 = (MR_hl_field(0, Var_9, 0));
      MR_Box Y_24 = (MR_hl_field(0, Var_9, 1));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      mercury__diet__insert_interval_4_p_0(Var_22, X_23, Y_24, HeadVar__3_3, &Var_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
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
  MR_Word Set_4;

  mercury__diet__list_to_set_2_p_0(TypeClassInfo_for_diet_element_5, List_3, &Set_4);
  return Set_4;
}

MR_Word MR_CALL 
mercury__diet__list_to_set_1_f_0(
  MR_Word TypeClassInfo_for_diet_element_5,
  MR_Word List_3)
{
  MR_Word Set_4;

  mercury__diet__list_to_set_2_p_0(TypeClassInfo_for_diet_element_5, List_3, &Set_4);
  return Set_4;
}

void MR_CALL 
mercury__diet__divide_by_set_4_p_0(
  MR_Word TypeClassInfo_for_diet_element_9,
  MR_Word DivideBySet_5,
  MR_Word Set_6,
  MR_Word * InPart_7,
  MR_Word * OutPart_8)
{
  *InPart_7 = mercury__diet__inter_2_f_0(TypeClassInfo_for_diet_element_9, Set_6, DivideBySet_5);
  if ((Set_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *OutPart_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  if ((DivideBySet_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *OutPart_8 = Set_6;
  else
  {
    MR_Tuple Head_22;
    MR_Word Stream_23;
    MR_Word Var_26;
    MR_Word _RemHead_24;
    MR_Word _RemStream_25;

    mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_9, DivideBySet_5, &Head_22, &Stream_23);
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (Head_22));
    }
    mercury__diet__diff_6_p_0(TypeClassInfo_for_diet_element_9, Set_6, Var_26, Stream_23, OutPart_8, &_RemHead_24, &_RemStream_25);
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
  mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(TypeClassInfo_for_diet_element_12, Pred_5, TypeClassInfo_for_diet_element_12, Set_6, (MR_Word) ((MR_Unsigned) 0U), TrueSet_7, (MR_Word) ((MR_Unsigned) 0U), FalseSet_8);
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(
  MR_Word Var_32,
  MR_Word Var_33,
  MR_Word TypeClassInfo_for_diet_element_25,
  MR_Word T_8,
  MR_Word STATE_VARIABLE_Acc1_0_16,
  MR_Word * STATE_VARIABLE_Acc1_17,
  MR_Word STATE_VARIABLE_Acc2_0_18,
  MR_Word * STATE_VARIABLE_Acc2_19)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((T_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_17 = STATE_VARIABLE_Acc1_0_16;
      *STATE_VARIABLE_Acc2_19 = STATE_VARIABLE_Acc2_0_18;
    }
    else
    {
      MR_Box X_11;
      MR_Box Y_12;
      MR_Word L_14 = ((MR_Word) ((MR_hl_field(1, T_8, 2))));
      MR_Word R_15 = ((MR_Word) ((MR_hl_field(1, T_8, 3))));
      MR_Tuple Var_20 = ((MR_Tuple) ((MR_hl_field(1, T_8, 0))));
      MR_Word STATE_VARIABLE_Acc1_1_21;
      MR_Word STATE_VARIABLE_Acc2_1_22;
      MR_Word STATE_VARIABLE_Acc1_2_23;
      MR_Word STATE_VARIABLE_Acc2_2_24;
      MR_Word next_value_of_T_8;
      MR_Word next_value_of_STATE_VARIABLE_Acc1_0_16;
      MR_Word next_value_of_STATE_VARIABLE_Acc2_0_18;

      X_11 = (MR_hl_field(0, Var_20, 0));
      Y_12 = (MR_hl_field(0, Var_20, 1));
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(Var_32, Var_33, TypeClassInfo_for_diet_element_25, L_14, STATE_VARIABLE_Acc1_0_16, &STATE_VARIABLE_Acc1_1_21, STATE_VARIABLE_Acc2_0_18, &STATE_VARIABLE_Acc2_1_22);
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_117_112_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_7_p_0(Var_32, Var_33, TypeClassInfo_for_diet_element_25, X_11, Y_12, STATE_VARIABLE_Acc1_1_21, &STATE_VARIABLE_Acc1_2_23, STATE_VARIABLE_Acc2_1_22, &STATE_VARIABLE_Acc2_2_24);
      // direct tailcall eliminated
      ;
      next_value_of_T_8 = R_15;
      next_value_of_STATE_VARIABLE_Acc1_0_16 = STATE_VARIABLE_Acc1_2_23;
      next_value_of_STATE_VARIABLE_Acc2_0_18 = STATE_VARIABLE_Acc2_2_24;
      T_8 = next_value_of_T_8;
      STATE_VARIABLE_Acc1_0_16 = next_value_of_STATE_VARIABLE_Acc1_0_16;
      STATE_VARIABLE_Acc2_0_18 = next_value_of_STATE_VARIABLE_Acc2_0_18;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_117_112_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_7_p_0(
  MR_Word Var_27,
  MR_Word Var_28,
  MR_Word TypeClassInfo_for_diet_element_20,
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
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_20, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_20)), Hi_10, Lo_9);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_A_1_17;
      MR_Word STATE_VARIABLE_B_1_18;
      MR_Box Var_19;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, Var_28, 1))));
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box next_value_of_Lo_9;
      MR_Word next_value_of_STATE_VARIABLE_A_0_13;
      MR_Word next_value_of_STATE_VARIABLE_B_0_15;

      succeeded = func_1(((MR_Box) (Var_28)), Lo_9);
      if (succeeded)
      {
        STATE_VARIABLE_A_1_17 = mercury__diet__add_2_f_0(Var_27, Lo_9, STATE_VARIABLE_A_0_13);
        STATE_VARIABLE_B_1_18 = STATE_VARIABLE_B_0_15;
      }
      else
      {
        STATE_VARIABLE_B_1_18 = mercury__diet__add_2_f_0(Var_27, Lo_9, STATE_VARIABLE_B_0_15);
        STATE_VARIABLE_A_1_17 = STATE_VARIABLE_A_0_13;
      }
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_20, 0)), 6))));
      Var_19 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_20)), Lo_9);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_9 = Var_19;
      next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_1_17;
      next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_1_18;
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
mercury__diet__split_5_p_0(
  MR_Word TypeClassInfo_for_diet_element_25,
  MR_Box X_6,
  MR_Word Set_7,
  MR_Word * Lesser_8,
  MR_Word * IsPresent_9,
  MR_Word * Greater_10)
{
  MR_bool succeeded;

  if ((Set_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *IsPresent_9 = (MR_Integer) 0;
    *Lesser_8 = (MR_Word) ((MR_Unsigned) 0U);
    *Greater_10 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Box A_11;
    MR_Box B_12;
    MR_Word L_14 = ((MR_Word) ((MR_hl_field(1, Set_7, 2))));
    MR_Word R_15 = ((MR_Word) ((MR_hl_field(1, Set_7, 3))));
    MR_Tuple Var_18 = ((MR_Tuple) ((MR_hl_field(1, Set_7, 0))));
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

    A_11 = (MR_hl_field(0, Var_18, 0));
    B_12 = (MR_hl_field(0, Var_18, 1));
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_25, 0)), 5))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_25)), X_6, A_11);
    if (succeeded)
    {
      MR_Word RL_16;

      mercury__diet__split_5_p_0(TypeClassInfo_for_diet_element_25, X_6, L_14, Lesser_8, IsPresent_9, &RL_16);
      *Greater_10 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_25, Var_18, RL_16, R_15);
    }
    else
    {
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_25, 0)), 5))));

      succeeded = func_1(((MR_Box) (TypeClassInfo_for_diet_element_25)), B_12, X_6);
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

	TypeClassInfo = TypeClassInfo_for_diet_element_25 ;
	Index = (MR_Integer) 1 ;
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
          MR_Box MR_CALL (* func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_25, 0)), 7))));

          Var_22 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_25)), X_6);
          {
            Var_21 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_21, 0) = A_11;
            MR_hl_field(0, Var_21, 1) = Var_22;
          }
          *Lesser_8 = mercury__diet__do_insert_2_f_0(TypeClassInfo_for_diet_element_25, Var_21, L_14);
        }
{
#define MR_PROC_LABEL mercury__diet__split_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_diet_element_25 ;
	Index = (MR_Integer) 1 ;
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
          MR_Box MR_CALL (* func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_25, 0)), 6))));

          Var_24 = func_3(((MR_Box) (TypeClassInfo_for_diet_element_25)), X_6);
          {
            Var_23 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_23, 0) = Var_24;
            MR_hl_field(0, Var_23, 1) = B_12;
          }
          *Greater_10 = mercury__diet__do_insert_2_f_0(TypeClassInfo_for_diet_element_25, Var_23, R_15);
        }
      }
    }
  }
}

void MR_CALL 
mercury__diet__difference_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_24,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  if ((SetA_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *Set_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  if ((SetB_5 == (MR_Word) ((MR_Unsigned) 0U)))
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
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Head_19));
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
  MR_Word Set_6;

  if ((SetA_4 == (MR_Word) ((MR_Unsigned) 0U)))
    Set_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  if ((SetB_5 == (MR_Word) ((MR_Unsigned) 0U)))
    Set_6 = SetA_4;
  else
  {
    MR_Tuple Head_20;
    MR_Word Stream_21;
    MR_Word Var_24;
    MR_Word _RemHead_22;
    MR_Word _RemStream_23;

    mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_7, SetB_5, &Head_20, &Stream_21);
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (Head_20));
    }
    mercury__diet__diff_6_p_0(TypeClassInfo_for_diet_element_7, SetA_4, Var_24, Stream_21, &Set_6, &_RemHead_22, &_RemStream_23);
  }
  return Set_6;
}

MR_Word MR_CALL 
mercury__diet__intersect_list_1_f_0(
  MR_Word TypeClassInfo_for_diet_element_5,
  MR_Word Sets_3)
{
  MR_Word Set_4;

  mercury__diet__intersect_list_2_p_0(TypeClassInfo_for_diet_element_5, Sets_3, &Set_4);
  return Set_4;
}

void MR_CALL 
mercury__diet__intersect_list_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_7,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Set0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Sets_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(TypeClassInfo_for_diet_element_7, Sets_4, Set0_3, HeadVar__2_2);
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      Var_13 = mercury__diet__inter_2_f_0(Var_20, Var_9, HeadVar__3_3);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_13;
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
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__diet__inter_2_f_0(TypeClassInfo_for_diet_element_6, SetA_4, SetB_5);
  return HeadVar__3_3;
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

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Stream0_5 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_15 = (MR_Integer) 0;
    else
      Var_15 = ((MR_Integer) ((MR_hl_field(1, Stream0_5, 1))));
    if ((Input_4 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_16 = (MR_Integer) 0;
    else
      Var_16 = ((MR_Integer) ((MR_hl_field(1, Input_4, 1))));
    succeeded = (Var_15 > Var_16);
    if (succeeded)
    {
      MR_Word next_value_of_Input_4 = Stream0_5;
      MR_Word next_value_of_Stream0_5 = Input_4;

      // direct tailcall eliminated
      ;
      Input_4 = next_value_of_Input_4;
      Stream0_5 = next_value_of_Stream0_5;
      continue;
    }
    else
    if ((Stream0_5 == (MR_Word) ((MR_Unsigned) 0U)))
      Result_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Tuple Head_11;
      MR_Word Stream_12;
      MR_Word Var_17;
      MR_Word Var_13;
      MR_Word Var_14;

      mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_18, Stream0_5, &Head_11, &Stream_12);
      {
        Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_17, 0) = ((MR_Box) (Head_11));
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
  MR_bool succeeded;

  if ((Head0_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Result_10 = (MR_Word) ((MR_Unsigned) 0U);
    *Head_11 = (MR_Word) ((MR_Unsigned) 0U);
    *Stream_12 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Box X_13;
    MR_Tuple Var_23 = ((MR_Tuple) ((MR_hl_field(1, Head0_8, 0))));

    X_13 = (MR_hl_field(0, Var_23, 0));
    if ((Input_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Result_10 = (MR_Word) ((MR_Unsigned) 0U);
      *Head_11 = Head0_8;
      *Stream_12 = Stream0_9;
    }
    else
    {
      MR_Box A_15;
      MR_Word Left0_18 = ((MR_Word) ((MR_hl_field(1, Input_7, 2))));
      MR_Word Right0_19 = ((MR_Word) ((MR_hl_field(1, Input_7, 3))));
      MR_Word Left1_20;
      MR_Word Head1_21;
      MR_Word Stream1_22;
      MR_Tuple Var_24 = ((MR_Tuple) ((MR_hl_field(1, Input_7, 0))));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

      A_15 = (MR_hl_field(0, Var_24, 0));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_26, 0)), 5))));
      succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_26)), X_13, A_15);
      if (succeeded)
        mercury__diet__inter_2_6_p_0(TypeClassInfo_for_diet_element_26, Left0_18, Head0_8, Stream0_9, &Left1_20, &Head1_21, &Stream1_22);
      else
      {
        Left1_20 = (MR_Word) ((MR_Unsigned) 0U);
        Head1_21 = Head0_8;
        Stream1_22 = Stream0_9;
      }
      mercury__diet__inter_help_8_p_0(TypeClassInfo_for_diet_element_26, Var_24, Right0_19, Left1_20, Head1_21, Stream1_22, Result_10, Head_11, Stream_12);
    }
  }
}

static void MR_CALL 
mercury__diet__inter_help_8_p_0(
  MR_Word TypeClassInfo_for_diet_element_44,
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
    MR_Box A_9 = (MR_hl_field(0, HeadVar__1_1, 0));
    MR_Box B_10 = (MR_hl_field(0, HeadVar__1_1, 1));

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Head0_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Result_15 = Left0_12;
      *Head_16 = (MR_Word) ((MR_Unsigned) 0U);
      *Stream_17 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Box X_18;
      MR_Box Y_19;
      MR_Tuple Var_28 = ((MR_Tuple) ((MR_hl_field(1, Head0_13, 0))));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

      X_18 = (MR_hl_field(0, Var_28, 0));
      Y_19 = (MR_hl_field(0, Var_28, 1));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_44, 0)), 5))));
      succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_44)), Y_19, A_9);
      if (succeeded)
        if ((Stream0_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *Result_15 = Left0_12;
          *Head_16 = (MR_Word) ((MR_Unsigned) 0U);
          *Stream_17 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Tuple Head1_24;
          MR_Word Stream1_25;
          MR_Word Var_30;
          MR_Word next_value_of_Head0_13;
          MR_Word next_value_of_Stream0_14;

          mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_44, Stream0_14, &Head1_24, &Stream1_25);
          {
            Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_30, 0) = ((MR_Box) (Head1_24));
          }
          // direct tailcall eliminated
          ;
          next_value_of_Head0_13 = Var_30;
          next_value_of_Stream0_14 = Stream1_25;
          Head0_13 = next_value_of_Head0_13;
          Stream0_14 = next_value_of_Stream0_14;
          continue;
        }
      else
      {
        MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_44, 0)), 5))));

        succeeded = func_1(((MR_Box) (TypeClassInfo_for_diet_element_44)), B_10, X_18);
        if (succeeded)
        {
          MR_Word Right1_26;
          MR_Integer Var_56;
          MR_Integer Var_57;

          mercury__diet__inter_2_6_p_0(TypeClassInfo_for_diet_element_44, Right0_11, Head0_13, Stream0_14, &Right1_26, Head_16, Stream_17);
          if ((Left0_12 == (MR_Word) ((MR_Unsigned) 0U)))
            Var_56 = (MR_Integer) 0;
          else
            Var_56 = ((MR_Integer) ((MR_hl_field(1, Left0_12, 1))));
          if ((Right1_26 == (MR_Word) ((MR_Unsigned) 0U)))
            Var_57 = (MR_Integer) 0;
          else
            Var_57 = ((MR_Integer) ((MR_hl_field(1, Right1_26, 1))));
          succeeded = (Var_56 > Var_57);
          if (succeeded)
            if ((Left0_12 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "function \140diet.reroot\'/2", (MR_String) "L empty");
                return;
              }
            else
            {
              MR_Tuple I_49;
              MR_Word L1_50;

              mercury__diet__take_max_3_p_0(TypeClassInfo_for_diet_element_44, Left0_12, &I_49, &L1_50);
              *Result_15 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_44, I_49, L1_50, Right1_26);
            }
          else
          if ((Right1_26 == (MR_Word) ((MR_Unsigned) 0U)))
            *Result_15 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word R1_55;
            MR_Tuple I_60;

            mercury__diet__take_min_3_p_0(TypeClassInfo_for_diet_element_44, Right1_26, &I_60, &R1_55);
            *Result_15 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_44, I_60, Left0_12, R1_55);
          }
        }
        else
        {
          MR_Box Var_31;
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_44, 0)), 5))));
          MR_bool MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);

          succeeded = func_2(((MR_Box) (TypeClassInfo_for_diet_element_44)), Y_19, B_10);
          if (succeeded)
          {
            MR_Box MR_CALL (* func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_44, 0)), 7))));

            Var_31 = func_3(((MR_Box) (TypeClassInfo_for_diet_element_44)), B_10);
          }
          else
            Var_31 = B_10;
          func_4 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_44, 0)), 5))));
          succeeded = func_4(((MR_Box) (TypeClassInfo_for_diet_element_44)), Y_19, Var_31);
          succeeded = !(succeeded);
          if (succeeded)
          {
            MR_Tuple Var_32;
            MR_Box Var_33;
            MR_Box Var_34;
            MR_Word Right1_43;
            MR_bool MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box);
            MR_bool MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);

            mercury__diet__inter_2_6_p_0(TypeClassInfo_for_diet_element_44, Right0_11, Head0_13, Stream0_14, &Right1_43, Head_16, Stream_17);
            func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_44, 0)), 5))));
            succeeded = func_5(((MR_Box) (TypeClassInfo_for_diet_element_44)), A_9, X_18);
            if (succeeded)
              Var_33 = X_18;
            else
              Var_33 = A_9;
            func_6 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_44, 0)), 5))));
            succeeded = func_6(((MR_Box) (TypeClassInfo_for_diet_element_44)), Y_19, B_10);
            if (succeeded)
              Var_34 = Y_19;
            else
              Var_34 = B_10;
            {
              Var_32 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_32, 0) = Var_33;
              MR_hl_field(0, Var_32, 1) = Var_34;
            }
            *Result_15 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_44, Var_32, Left0_12, Right1_43);
          }
          else
          {
            MR_Word Left1_27;
            MR_Tuple Var_35;
            MR_Box Var_36;
            MR_Tuple Var_37;
            MR_Box Var_38;
            MR_bool MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_44, 0)), 5))));
            MR_Box MR_CALL (* func_8)(MR_Box, MR_Box);
            MR_Tuple next_value_of_HeadVar__1_1;
            MR_Word next_value_of_Left0_12;

            succeeded = func_7(((MR_Box) (TypeClassInfo_for_diet_element_44)), A_9, X_18);
            if (succeeded)
              Var_36 = X_18;
            else
              Var_36 = A_9;
            {
              Var_35 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_35, 0) = Var_36;
              MR_hl_field(0, Var_35, 1) = Y_19;
            }
            Left1_27 = mercury__diet__do_insert_2_f_0(TypeClassInfo_for_diet_element_44, Var_35, Left0_12);
            func_8 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_44, 0)), 6))));
            Var_38 = func_8(((MR_Box) (TypeClassInfo_for_diet_element_44)), Y_19);
            {
              Var_37 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_37, 0) = Var_38;
              MR_hl_field(0, Var_37, 1) = B_10;
            }
            // direct tailcall eliminated
            ;
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

MR_Word MR_CALL 
mercury__diet__union_list_1_f_0(
  MR_Word TypeClassInfo_for_diet_element_5,
  MR_Word Sets_3)
{
  MR_Word Set_4;

  mercury__diet__union_list_2_p_0(TypeClassInfo_for_diet_element_5, Sets_3, &Set_4);
  return Set_4;
}

void MR_CALL 
mercury__diet__union_list_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_8,
  MR_Word Sets_3,
  MR_Word * Set_4)
{
  if ((Sets_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *Set_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word SetA_5 = ((MR_Word) ((MR_hl_field(1, Sets_3, 0))));
    MR_Word SetBs_6 = ((MR_Word) ((MR_hl_field(1, Sets_3, 1))));

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(TypeClassInfo_for_diet_element_8, SetBs_6, SetA_5, Set_4);
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
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      mercury__diet__union_3_p_0(Var_20, Var_9, HeadVar__3_3, &Var_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_13;
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
  MR_Word DietAB_6;

  mercury__diet__union_3_p_0(TypeClassInfo_for_diet_element_7, DietA_4, DietB_5, &DietAB_6);
  return DietAB_6;
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

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Stream0_5 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_13 = (MR_Integer) 0;
    else
      Var_13 = ((MR_Integer) ((MR_hl_field(1, Stream0_5, 1))));
    if ((Input_4 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_14 = (MR_Integer) 0;
    else
      Var_14 = ((MR_Integer) ((MR_hl_field(1, Input_4, 1))));
    succeeded = (Var_13 > Var_14);
    if (succeeded)
    {
      MR_Word next_value_of_Input_4 = Stream0_5;
      MR_Word next_value_of_Stream0_5 = Input_4;

      // direct tailcall eliminated
      ;
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

      if ((Stream0_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Head1_7 = (MR_Word) ((MR_Unsigned) 0U);
        Stream1_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Tuple X_32;

        mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_16, Stream0_5, &X_32, &Stream1_8);
        {
          Head1_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Head1_7, 0) = ((MR_Box) (X_32));
        }
      }
      mercury__diet__union_2_7_p_0(TypeClassInfo_for_diet_element_16, Input_4, (MR_Word) ((MR_Unsigned) 0U), Head1_7, Stream1_8, &Left2_9, &Head2_10, &Stream2_11);
      if ((Head2_10 == (MR_Word) ((MR_Unsigned) 0U)))
        *Result_6 = Left2_9;
      else
      {
        MR_Tuple I_12 = ((MR_Tuple) ((MR_hl_field(1, Head2_10, 0))));

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
  MR_bool succeeded;

  if ((Head0_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Left_12 = Input_8;
    *Head_13 = (MR_Word) ((MR_Unsigned) 0U);
    *Stream_14 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Box X_15;
    MR_Tuple Var_25 = ((MR_Tuple) ((MR_hl_field(1, Head0_10, 0))));

    X_15 = (MR_hl_field(0, Var_25, 0));
    if ((Input_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Left_12 = (MR_Word) ((MR_Unsigned) 0U);
      *Head_13 = Head0_10;
      *Stream_14 = Stream0_11;
    }
    else
    {
      MR_Box A_17;
      MR_Word Left0_20 = ((MR_Word) ((MR_hl_field(1, Input_8, 2))));
      MR_Word Right0_21 = ((MR_Word) ((MR_hl_field(1, Input_8, 3))));
      MR_Word Left1_22;
      MR_Word Head1_23;
      MR_Word Stream1_24;
      MR_Tuple Var_26 = ((MR_Tuple) ((MR_hl_field(1, Input_8, 0))));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

      A_17 = (MR_hl_field(0, Var_26, 0));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_30, 0)), 5))));
      succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_30)), X_15, A_17);
      if (succeeded)
      {
        MR_Word Var_27;
        MR_Box Var_28;
        MR_Box MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_30, 0)), 7))));

        Var_28 = func_1(((MR_Box) (TypeClassInfo_for_diet_element_30)), A_17);
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = Var_28;
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

static void MR_CALL 
mercury__diet__union_helper_9_p_0(
  MR_Word TypeClassInfo_for_diet_element_48,
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
    MR_Box A_11 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Box B_12 = (MR_hl_field(0, HeadVar__2_2, 1));

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Head0_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Left_17 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_48, HeadVar__2_2, Left0_10, Right0_13);
      *Head_18 = (MR_Word) ((MR_Unsigned) 0U);
      *Stream_19 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Box X_20;
      MR_Box Y_21;
      MR_Tuple Var_28 = ((MR_Tuple) ((MR_hl_field(1, Head0_15, 0))));
      MR_Box Var_29;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
      MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);

      X_20 = (MR_hl_field(0, Var_28, 0));
      Y_21 = (MR_hl_field(0, Var_28, 1));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_48, 0)), 5))));
      succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_48)), Y_21, A_11);
      if (succeeded)
      {
        func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_48, 0)), 7))));
        Var_29 = func_1(((MR_Box) (TypeClassInfo_for_diet_element_48)), A_11);
        func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_48, 0)), 5))));
        succeeded = func_2(((MR_Box) (TypeClassInfo_for_diet_element_48)), Y_21, Var_29);
      }
      if (succeeded)
      {
        MR_Word Left1_22;
        MR_Word Head1_23;
        MR_Word Stream1_24;
        MR_Word next_value_of_Left0_10;
        MR_Word next_value_of_Head0_15;
        MR_Word next_value_of_Stream0_16;

        Left1_22 = mercury__diet__do_insert_2_f_0(TypeClassInfo_for_diet_element_48, Var_28, Left0_10);
        if ((Stream0_16 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Head1_23 = (MR_Word) ((MR_Unsigned) 0U);
          Stream1_24 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Tuple X_53;

          mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_48, Stream0_16, &X_53, &Stream1_24);
          {
            Head1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Head1_23, 0) = ((MR_Box) (X_53));
          }
        }
        // direct tailcall eliminated
        ;
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
        MR_Box Var_32;
        MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_48, 0)), 5))));
        MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
        MR_bool MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box);

        succeeded = func_3(((MR_Box) (TypeClassInfo_for_diet_element_48)), B_12, X_20);
        if (succeeded)
        {
          func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_48, 0)), 6))));
          Var_32 = func_4(((MR_Box) (TypeClassInfo_for_diet_element_48)), B_12);
          func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_48, 0)), 5))));
          succeeded = func_5(((MR_Box) (TypeClassInfo_for_diet_element_48)), Var_32, X_20);
        }
        if (succeeded)
        {
          MR_Word Right1_25;

          mercury__diet__union_2_7_p_0(TypeClassInfo_for_diet_element_48, Right0_13, Limit_14, Head0_15, Stream0_16, &Right1_25, Head_18, Stream_19);
          *Left_17 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_48, HeadVar__2_2, Left0_10, Right1_25);
        }
        else
        {
          MR_bool MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_48, 0)), 5))));

          succeeded = func_6(((MR_Box) (TypeClassInfo_for_diet_element_48)), B_12, Y_21);
          succeeded = !(succeeded);
          if (succeeded)
          {
            MR_Tuple Var_34;
            MR_Box Var_35;
            MR_Word Head1_43;
            MR_Word Stream1_44;
            MR_bool MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box);
            MR_Tuple next_value_of_HeadVar__2_2;
            MR_Word next_value_of_Head0_15;
            MR_Word next_value_of_Stream0_16;

            if ((Stream0_16 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Head1_43 = (MR_Word) ((MR_Unsigned) 0U);
              Stream1_44 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_Tuple X_58;

              mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_48, Stream0_16, &X_58, &Stream1_44);
              {
                Head1_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Head1_43, 0) = ((MR_Box) (X_58));
              }
            }
            func_7 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_48, 0)), 5))));
            succeeded = func_7(((MR_Box) (TypeClassInfo_for_diet_element_48)), A_11, X_20);
            if (succeeded)
              Var_35 = A_11;
            else
              Var_35 = X_20;
            {
              Var_34 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_34, 0) = Var_35;
              MR_hl_field(0, Var_34, 1) = B_12;
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = Var_34;
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

            succeeded = (Limit_14 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              LimitValue_26 = (MR_hl_field(1, Limit_14, 0));
              func_8 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_48, 0)), 5))));
              succeeded = func_8(((MR_Box) (TypeClassInfo_for_diet_element_48)), Y_21, LimitValue_26);
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              MR_Tuple Var_36;
              MR_Box Var_37;
              MR_bool MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box);

              *Left_17 = Left0_10;
              func_9 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_48, 0)), 5))));
              succeeded = func_9(((MR_Box) (TypeClassInfo_for_diet_element_48)), A_11, X_20);
              if (succeeded)
                Var_37 = A_11;
              else
                Var_37 = X_20;
              {
                Var_36 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_36, 0) = Var_37;
                MR_hl_field(0, Var_36, 1) = Y_21;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Head_18 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_36));
              }
              *Stream_19 = Stream0_16;
            }
            else
            {
              MR_Word Var_38;
              MR_Tuple Var_39;
              MR_Box Var_40;
              MR_Word Right1_47;
              MR_bool MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_48, 0)), 5))));
              MR_Integer Var_70;
              MR_Integer Var_71;

              succeeded = func_10(((MR_Box) (TypeClassInfo_for_diet_element_48)), A_11, X_20);
              if (succeeded)
                Var_40 = A_11;
              else
                Var_40 = X_20;
              {
                Var_39 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_39, 0) = Var_40;
                MR_hl_field(0, Var_39, 1) = Y_21;
              }
              {
                Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
              }
              mercury__diet__union_2_7_p_0(TypeClassInfo_for_diet_element_48, Right0_13, Limit_14, Var_38, Stream0_16, &Right1_47, Head_18, Stream_19);
              if ((Left0_10 == (MR_Word) ((MR_Unsigned) 0U)))
                Var_70 = (MR_Integer) 0;
              else
                Var_70 = ((MR_Integer) ((MR_hl_field(1, Left0_10, 1))));
              if ((Right1_47 == (MR_Word) ((MR_Unsigned) 0U)))
                Var_71 = (MR_Integer) 0;
              else
                Var_71 = ((MR_Integer) ((MR_hl_field(1, Right1_47, 1))));
              succeeded = (Var_70 > Var_71);
              if (succeeded)
                if ((Left0_10 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "function \140diet.reroot\'/2", (MR_String) "L empty");
                    return;
                  }
                else
                {
                  MR_Tuple I_63;
                  MR_Word L1_64;

                  mercury__diet__take_max_3_p_0(TypeClassInfo_for_diet_element_48, Left0_10, &I_63, &L1_64);
                  *Left_17 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_48, I_63, L1_64, Right1_47);
                }
              else
              if ((Right1_47 == (MR_Word) ((MR_Unsigned) 0U)))
                *Left_17 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word R1_69;
                MR_Tuple I_74;

                mercury__diet__take_min_3_p_0(TypeClassInfo_for_diet_element_48, Right1_47, &I_74, &R1_69);
                *Left_17 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_48, I_74, Left0_10, R1_69);
              }
            }
          }
        }
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__superset_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_5,
  MR_Word Superset_3,
  MR_Word Set_4)
{
  MR_bool succeeded;

  if ((Set_4 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  {
    MR_Tuple XY1_14;
    MR_Word R1_15;
    MR_Tuple XY2_16;
    MR_Word R2_17;
    MR_Word Var_18;
    MR_Word Var_19;

    succeeded = (Superset_3 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_5, Set_4, &XY1_14, &R1_15);
      mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_5, Superset_3, &XY2_16, &R2_17);
      Var_18 = (MR_Integer) 1;
      mercury__diet__subset_2_5_p_0(TypeClassInfo_for_diet_element_5, XY1_14, R1_15, XY2_16, R2_17, &Var_19);
      succeeded = (Var_18 == Var_19);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__diet__subset_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Word T1_3,
  MR_Word T2_4)
{
  MR_bool succeeded;

  if ((T1_3 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  {
    MR_Tuple XY1_13;
    MR_Word R1_14;
    MR_Tuple XY2_15;
    MR_Word R2_16;
    MR_Word Var_17;
    MR_Word Var_19;

    succeeded = (T2_4 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_18, T1_3, &XY1_13, &R1_14);
      mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_18, T2_4, &XY2_15, &R2_16);
      Var_17 = (MR_Integer) 1;
      mercury__diet__subset_2_5_p_0(TypeClassInfo_for_diet_element_18, XY1_13, R1_14, XY2_15, R2_16, &Var_19);
      succeeded = (Var_17 == Var_19);
    }
  }
  return succeeded;
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

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((T1_3 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (T2_4 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Word TypeInfo_22_22;
      MR_Word TypeInfo_23_23;
      MR_Word TypeCtorInfo_24_24;
      MR_Word TypeInfo_25_25;
      MR_Word R1_15;
      MR_Word R2_16;
      MR_Tuple Var_17;
      MR_Tuple Var_20;
      MR_Integer PolyConst1_21;
      MR_Integer PolyConst2_26;
      MR_Word next_value_of_T1_3;
      MR_Word next_value_of_T2_4;

      succeeded = (T2_4 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_19, T1_3, &Var_17, &R1_15);
        mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_19, T2_4, &Var_20, &R2_16);
        TypeCtorInfo_24_24 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_tuple_0);
        PolyConst2_26 = (MR_Integer) 2;
        PolyConst1_21 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__diet__equal_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_diet_element_19 ;
	Index = PolyConst1_21 ;
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

	TypeClassInfo = TypeClassInfo_for_diet_element_19 ;
	Index = PolyConst1_21 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_23_23  = TypeInfo;
}
        {
          TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (TypeCtorInfo_24_24));
          MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (PolyConst2_26));
          MR_hl_field(0, TypeInfo_25_25, 2) = ((MR_Box) (TypeInfo_22_22));
          MR_hl_field(0, TypeInfo_25_25, 3) = ((MR_Box) (TypeInfo_23_23));
        }
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (Var_17)), ((MR_Box) (Var_20)));
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
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

MR_bool MR_CALL 
mercury__diet__remove_least_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_16,
  MR_Box * X_4,
  MR_Word Set0_5,
  MR_Word * Set_6)
{
  MR_bool succeeded = (Set0_5 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Box Y_11;
  MR_Word Stream_12;
  MR_Tuple Var_13;
  MR_Word TypeInfo_18_18;
  MR_Integer TypeInfoIndex_17;

  if (succeeded)
  {
    mercury__diet__take_min_3_p_0(TypeClassInfo_for_diet_element_16, Set0_5, &Var_13, &Stream_12);
    *X_4 = (MR_hl_field(0, Var_13, 0));
    Y_11 = (MR_hl_field(0, Var_13, 1));
    TypeInfoIndex_17 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__diet__remove_least_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_diet_element_16 ;
	Index = TypeInfoIndex_17 ;
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
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_16, 0)), 6))));

      Var_15 = func_0(((MR_Box) (TypeClassInfo_for_diet_element_16)), *X_4);
      {
        Var_14 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_14, 0) = Var_15;
        MR_hl_field(0, Var_14, 1) = Y_11;
      }
      *Set_6 = mercury__diet__do_insert_2_f_0(TypeClassInfo_for_diet_element_16, Var_14, Stream_12);
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__diet__remove_list_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_8,
  MR_Word X_4,
  MR_Word Set0_5,
  MR_Word * Set_6)
{
  MR_bool succeeded;
  MR_Word SetX_7;

  mercury__diet__list_to_set_2_p_0(TypeClassInfo_for_diet_element_8, X_4, &SetX_7);
  if ((SetX_7 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  {
    MR_Tuple XY1_17;
    MR_Word R1_18;
    MR_Tuple XY2_19;
    MR_Word R2_20;
    MR_Word Var_21;
    MR_Word Var_22;

    succeeded = (Set0_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_8, SetX_7, &XY1_17, &R1_18);
      mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_8, Set0_5, &XY2_19, &R2_20);
      Var_21 = (MR_Integer) 1;
      mercury__diet__subset_2_5_p_0(TypeClassInfo_for_diet_element_8, XY1_17, R1_18, XY2_19, R2_20, &Var_22);
      succeeded = (Var_21 == Var_22);
    }
  }
  if (succeeded)
  {
    if ((Set0_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *Set_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    if ((SetX_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *Set_6 = Set0_5;
    else
    {
      MR_Tuple Head_35;
      MR_Word Stream_36;
      MR_Word Var_39;
      MR_Word _RemHead_37;
      MR_Word _RemStream_38;

      mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_8, SetX_7, &Head_35, &Stream_36);
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (Head_35));
      }
      mercury__diet__diff_6_p_0(TypeClassInfo_for_diet_element_8, Set0_5, Var_39, Stream_36, Set_6, &_RemHead_37, &_RemStream_38);
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mercury__diet__subset_2_5_p_0(
  MR_Word TypeClassInfo_for_diet_element_44,
  MR_Tuple HeadVar__1_1,
  MR_Word R1_8,
  MR_Tuple HeadVar__3_3,
  MR_Word R2_11,
  MR_Word * IsSubset_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box X1_6 = (MR_hl_field(0, HeadVar__1_1, 0));
    MR_Box Y1_7 = (MR_hl_field(0, HeadVar__1_1, 1));
    MR_Box X2_9 = (MR_hl_field(0, HeadVar__3_3, 0));
    MR_Box Y2_10 = (MR_hl_field(0, HeadVar__3_3, 1));
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_44, 0)), 5))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_44)), X1_6, X2_9);
    if (succeeded)
      *IsSubset_12 = (MR_Integer) 0;
    else
    {
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_44, 0)), 5))));

      succeeded = func_1(((MR_Box) (TypeClassInfo_for_diet_element_44)), Y2_10, X1_6);
      if (succeeded)
        if ((R2_11 == (MR_Word) ((MR_Unsigned) 0U)))
          *IsSubset_12 = (MR_Integer) 0;
        else
        {
          MR_Tuple Min2_17;
          MR_Word MinR2_18;
          MR_Tuple next_value_of_HeadVar__3_3;
          MR_Word next_value_of_R2_11;

          mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_44, R2_11, &Min2_17, &MinR2_18);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = Min2_17;
          next_value_of_R2_11 = MinR2_18;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          R2_11 = next_value_of_R2_11;
          continue;
        }
      else
      {
        MR_Word TypeInfo_46_46;
        MR_Word Upper_19;

{
#define MR_PROC_LABEL mercury__diet__subset_2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_diet_element_44 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_46_46  = TypeInfo;
}
        mercury__builtin__compare_3_p_0(TypeInfo_46_46, &Upper_19, Y1_7, Y2_10);
        switch (Upper_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            if ((R1_8 == (MR_Word) ((MR_Unsigned) 0U)))
              *IsSubset_12 = (MR_Integer) 1;
            else
            {
              MR_Tuple Min1_24;
              MR_Word MinR1_25;
              MR_Tuple next_value_of_HeadVar__1_1;
              MR_Word next_value_of_R1_8;

              mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_44, R1_8, &Min1_24, &MinR1_25);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Min1_24;
              next_value_of_R1_8 = MinR1_25;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              R1_8 = next_value_of_R1_8;
              continue;
            }
            break;
          case (MR_Integer) 0:
            if ((R1_8 == (MR_Word) ((MR_Unsigned) 0U)))
              *IsSubset_12 = (MR_Integer) 1;
            else
            if ((R2_11 == (MR_Word) ((MR_Unsigned) 0U)))
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

              mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_44, R1_8, &Min1_42, &MinR1_43);
              mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_44, R2_11, &Min2_40, &MinR2_41);
              // direct tailcall eliminated
              ;
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

MR_Word MR_CALL 
mercury__diet__delete_list_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_7,
  MR_Word Set0_4,
  MR_Word List_5)
{
  MR_Word Set_6;

  mercury__diet__delete_list_3_p_0(TypeClassInfo_for_diet_element_7, List_5, Set0_4, &Set_6);
  return Set_6;
}

void MR_CALL 
mercury__diet__delete_list_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_8,
  MR_Word List_4,
  MR_Word Set0_5,
  MR_Word * Set_6)
{
  MR_Word Var_7;

  mercury__diet__list_to_set_2_p_0(TypeClassInfo_for_diet_element_8, List_4, &Var_7);
  if ((Set0_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *Set_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  if ((Var_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *Set_6 = Set0_5;
  else
  {
    MR_Tuple Head_21;
    MR_Word Stream_22;
    MR_Word Var_25;
    MR_Word _RemHead_23;
    MR_Word _RemStream_24;

    mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_8, Var_7, &Head_21, &Stream_22);
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (Head_21));
    }
    mercury__diet__diff_6_p_0(TypeClassInfo_for_diet_element_8, Set0_5, Var_25, Stream_22, Set_6, &_RemHead_23, &_RemStream_24);
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
  MR_bool succeeded;

  if ((Head0_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Output_10 = Input_7;
    *Head_11 = (MR_Word) ((MR_Unsigned) 0U);
    *Stream_12 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Tuple Var_28 = ((MR_Tuple) ((MR_hl_field(1, Head0_8, 0))));

    if ((Input_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Output_10 = (MR_Word) ((MR_Unsigned) 0U);
      *Head_11 = Head0_8;
      *Stream_12 = Stream0_9;
    }
    else
    {
      MR_Box X_14 = (MR_hl_field(0, Var_28, 0));
      MR_Box A_16;
      MR_Word Left0_19 = ((MR_Word) ((MR_hl_field(1, Input_7, 2))));
      MR_Word Right0_20 = ((MR_Word) ((MR_hl_field(1, Input_7, 3))));
      MR_Word Left1_21;
      MR_Word Head1_22;
      MR_Word Stream1_23;
      MR_Tuple Var_25 = ((MR_Tuple) ((MR_hl_field(1, Input_7, 0))));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

      A_16 = (MR_hl_field(0, Var_25, 0));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_27, 0)), 5))));
      succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_27)), X_14, A_16);
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

static void MR_CALL 
mercury__diet__diff_helper_8_p_0(
  MR_Word TypeClassInfo_for_diet_element_36,
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
    MR_Box A_9 = (MR_hl_field(0, HeadVar__1_1, 0));
    MR_Box B_10 = (MR_hl_field(0, HeadVar__1_1, 1));

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Head0_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Output_15 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_36, HeadVar__1_1, Left0_12, Right0_11);
      *Head_16 = (MR_Word) ((MR_Unsigned) 0U);
      *Stream_17 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Box X_18;
      MR_Box Y_19;
      MR_Tuple Var_25 = ((MR_Tuple) ((MR_hl_field(1, Head0_13, 0))));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

      X_18 = (MR_hl_field(0, Var_25, 0));
      Y_19 = (MR_hl_field(0, Var_25, 1));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_36, 0)), 5))));
      succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_36)), Y_19, A_9);
      if (succeeded)
      {
        MR_Word Head1_20;
        MR_Word Stream1_21;
        MR_Word next_value_of_Head0_13;
        MR_Word next_value_of_Stream0_14;

        if ((Stream0_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Head1_20 = (MR_Word) ((MR_Unsigned) 0U);
          Stream1_21 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Tuple X_41;

          mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_36, Stream0_14, &X_41, &Stream1_21);
          {
            Head1_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Head1_20, 0) = ((MR_Box) (X_41));
          }
        }
        // direct tailcall eliminated
        ;
        next_value_of_Head0_13 = Head1_20;
        next_value_of_Stream0_14 = Stream1_21;
        Head0_13 = next_value_of_Head0_13;
        Stream0_14 = next_value_of_Stream0_14;
        continue;
      }
      else
      {
        MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_36, 0)), 5))));

        succeeded = func_1(((MR_Box) (TypeClassInfo_for_diet_element_36)), B_10, X_18);
        if (succeeded)
        {
          MR_Word Right1_22;

          mercury__diet__diff_6_p_0(TypeClassInfo_for_diet_element_36, Right0_11, Head0_13, Stream0_14, &Right1_22, Head_16, Stream_17);
          *Output_15 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_36, HeadVar__1_1, Left0_12, Right1_22);
        }
        else
        {
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_36, 0)), 5))));

          succeeded = func_2(((MR_Box) (TypeClassInfo_for_diet_element_36)), A_9, X_18);
          if (succeeded)
          {
            MR_Word Left1_23;
            MR_Tuple Var_28;
            MR_Box Var_29;
            MR_Tuple Var_30;
            MR_Box MR_CALL (* func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_36, 0)), 7))));
            MR_Tuple next_value_of_HeadVar__1_1;
            MR_Word next_value_of_Left0_12;

            Var_29 = func_3(((MR_Box) (TypeClassInfo_for_diet_element_36)), X_18);
            {
              Var_28 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_28, 0) = A_9;
              MR_hl_field(0, Var_28, 1) = Var_29;
            }
            Left1_23 = mercury__diet__do_insert_2_f_0(TypeClassInfo_for_diet_element_36, Var_28, Left0_12);
            {
              Var_30 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_30, 0) = X_18;
              MR_hl_field(0, Var_30, 1) = B_10;
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Var_30;
            next_value_of_Left0_12 = Left1_23;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            Left0_12 = next_value_of_Left0_12;
            continue;
          }
          else
          {
            MR_bool MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_36, 0)), 5))));

            succeeded = func_4(((MR_Box) (TypeClassInfo_for_diet_element_36)), Y_19, B_10);
            if (succeeded)
            {
              MR_Tuple Var_31;
              MR_Box Var_32;
              MR_Word Head1_33;
              MR_Word Stream1_34;
              MR_Box MR_CALL (* func_5)(MR_Box, MR_Box);
              MR_Tuple next_value_of_HeadVar__1_1;
              MR_Word next_value_of_Head0_13;
              MR_Word next_value_of_Stream0_14;

              if ((Stream0_14 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                Head1_33 = (MR_Word) ((MR_Unsigned) 0U);
                Stream1_34 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Tuple X_46;

                mercury__diet__take_min_iter_3_p_0(TypeClassInfo_for_diet_element_36, Stream0_14, &X_46, &Stream1_34);
                {
                  Head1_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Head1_33, 0) = ((MR_Box) (X_46));
                }
              }
              func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_36, 0)), 6))));
              Var_32 = func_5(((MR_Box) (TypeClassInfo_for_diet_element_36)), Y_19);
              {
                Var_31 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_31, 0) = Var_32;
                MR_hl_field(0, Var_31, 1) = B_10;
              }
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Var_31;
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
              MR_Integer Var_58;
              MR_Integer Var_59;

              mercury__diet__diff_6_p_0(TypeClassInfo_for_diet_element_36, Right0_11, Head0_13, Stream0_14, &Right1_35, Head_16, Stream_17);
              if ((Left0_12 == (MR_Word) ((MR_Unsigned) 0U)))
                Var_58 = (MR_Integer) 0;
              else
                Var_58 = ((MR_Integer) ((MR_hl_field(1, Left0_12, 1))));
              if ((Right1_35 == (MR_Word) ((MR_Unsigned) 0U)))
                Var_59 = (MR_Integer) 0;
              else
                Var_59 = ((MR_Integer) ((MR_hl_field(1, Right1_35, 1))));
              succeeded = (Var_58 > Var_59);
              if (succeeded)
                if ((Left0_12 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "function \140diet.reroot\'/2", (MR_String) "L empty");
                    return;
                  }
                else
                {
                  MR_Tuple I_51;
                  MR_Word L1_52;

                  mercury__diet__take_max_3_p_0(TypeClassInfo_for_diet_element_36, Left0_12, &I_51, &L1_52);
                  *Output_15 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_36, I_51, L1_52, Right1_35);
                }
              else
              if ((Right1_35 == (MR_Word) ((MR_Unsigned) 0U)))
                *Output_15 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word R1_57;
                MR_Tuple I_62;

                mercury__diet__take_min_3_p_0(TypeClassInfo_for_diet_element_36, Right1_35, &I_62, &R1_57);
                *Output_15 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_36, I_62, Left0_12, R1_57);
              }
            }
          }
        }
      }
    }
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
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, T0_4, 3))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, T0_4, 2))));
    MR_Tuple Var_28 = ((MR_Tuple) ((MR_hl_field(1, T0_4, 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Var_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *X_5 = Var_28;
      *T_6 = Var_25;
    }
    else
    {
      MR_Tuple A_10 = ((MR_Tuple) ((MR_hl_field(1, Var_26, 0))));
      MR_Word L_12 = ((MR_Word) ((MR_hl_field(1, Var_26, 2))));
      MR_Word M_13 = ((MR_Word) ((MR_hl_field(1, Var_26, 3))));
      MR_Word N0_15;
      MR_Word N1_16;
      MR_Integer Var_19;
      MR_Integer Var_20;
      MR_Integer Var_30;
      MR_Integer Var_31;
      MR_Integer Var_32;
      MR_Integer Var_42;
      MR_Integer Var_43;
      MR_Word next_value_of_T0_4;

      if ((M_13 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_31 = (MR_Integer) 0;
      else
        Var_31 = ((MR_Integer) ((MR_hl_field(1, M_13, 1))));
      if ((Var_25 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_32 = (MR_Integer) 0;
      else
        Var_32 = ((MR_Integer) ((MR_hl_field(1, Var_25, 1))));
      succeeded = (Var_31 > Var_32);
      if (succeeded)
        Var_30 = Var_31;
      else
        Var_30 = Var_32;
      Var_19 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_30);
      {
        N0_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, N0_15, 0) = ((MR_Box) (Var_28));
        MR_hl_field(1, N0_15, 1) = ((MR_Box) (Var_19));
        MR_hl_field(1, N0_15, 2) = ((MR_Box) (M_13));
        MR_hl_field(1, N0_15, 3) = ((MR_Box) (Var_25));
      }
      if ((L_12 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_43 = (MR_Integer) 0;
      else
        Var_43 = ((MR_Integer) ((MR_hl_field(1, L_12, 1))));
      succeeded = (Var_43 > Var_19);
      if (succeeded)
        Var_42 = Var_43;
      else
        Var_42 = Var_19;
      Var_20 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_42);
      {
        N1_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, N1_16, 0) = ((MR_Box) (A_10));
        MR_hl_field(1, N1_16, 1) = ((MR_Box) (Var_20));
        MR_hl_field(1, N1_16, 2) = ((MR_Box) (L_12));
        MR_hl_field(1, N1_16, 3) = ((MR_Box) (N0_15));
      }
      // direct tailcall eliminated
      ;
      next_value_of_T0_4 = N1_16;
      T0_4 = next_value_of_T0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__list_to_set_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_7,
  MR_Word List_3,
  MR_Word * Set_4)
{
  mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(TypeClassInfo_for_diet_element_7, List_3, (MR_Word) ((MR_Unsigned) 0U), Set_4);
}

void MR_CALL 
mercury__diet__delete_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_8,
  MR_Box Elem_4,
  MR_Word Set0_5,
  MR_Word * Set_6)
{
  MR_bool succeeded;
  MR_Word Set1_7;

  succeeded = mercury__diet__remove_3_p_0(TypeClassInfo_for_diet_element_8, Elem_4, Set0_5, &Set1_7);
  if (succeeded)
    *Set_6 = Set1_7;
  else
    *Set_6 = Set0_5;
}

MR_Word MR_CALL 
mercury__diet__delete_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_7,
  MR_Word Set0_4,
  MR_Box Elem_5)
{
  MR_bool succeeded;
  MR_Word Set_6;
  MR_Word Set1_8;

  succeeded = mercury__diet__remove_3_p_0(TypeClassInfo_for_diet_element_7, Elem_5, Set0_4, &Set1_8);
  if (succeeded)
    Set_6 = Set1_8;
  else
    Set_6 = Set0_4;
  return Set_6;
}

MR_bool MR_CALL 
mercury__diet__remove_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_30,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
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
    Var_34 = ((MR_Tuple) ((MR_hl_field(1, HeadVar__2_2, 0))));
    H_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
    Left_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
    Right_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
    X_9 = (MR_hl_field(0, Var_34, 0));
    Y_10 = (MR_hl_field(0, Var_34, 1));
    PolyConst1_31 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__diet__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_diet_element_30 ;
	Index = PolyConst1_31 ;
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
        {
          MR_Word TypeInfo_33_33;
          MR_Word CZY_16;

{
#define MR_PROC_LABEL mercury__diet__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_diet_element_30 ;
	Index = PolyConst1_31 ;
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
                MR_Tuple Var_22;
                MR_Box Var_23;
                MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_30, 0)), 6))));

                Var_23 = func_0(((MR_Box) (TypeClassInfo_for_diet_element_30)), X_9);
                {
                  Var_22 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_22, 0) = Var_23;
                  MR_hl_field(0, Var_22, 1) = Y_10;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_22));
                  MR_hl_field(1, base, 1) = ((MR_Box) (H_11));
                  MR_hl_field(1, base, 2) = ((MR_Box) (Left_12));
                  MR_hl_field(1, base, 3) = ((MR_Box) (Right_13));
                }
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Integer Var_54;
                MR_Integer Var_55;

                if ((Left_12 == (MR_Word) ((MR_Unsigned) 0U)))
                  Var_54 = (MR_Integer) 0;
                else
                  Var_54 = ((MR_Integer) ((MR_hl_field(1, Left_12, 1))));
                if ((Right_13 == (MR_Word) ((MR_Unsigned) 0U)))
                  Var_55 = (MR_Integer) 0;
                else
                  Var_55 = ((MR_Integer) ((MR_hl_field(1, Right_13, 1))));
                succeeded = (Var_54 > Var_55);
                if (succeeded)
                  if ((Left_12 == (MR_Word) ((MR_Unsigned) 0U)))
                    mercury__require__unexpected_2_p_0((MR_String) "function \140diet.reroot\'/2", (MR_String) "L empty");
                  else
                  {
                    MR_Tuple I_47;
                    MR_Word L1_48;

                    mercury__diet__take_max_3_p_0(TypeClassInfo_for_diet_element_30, Left_12, &I_47, &L1_48);
                    *HeadVar__3_3 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_30, I_47, L1_48, Right_13);
                  }
                else
                if ((Right_13 == (MR_Word) ((MR_Unsigned) 0U)))
                  *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
                else
                {
                  MR_Word R1_53;
                  MR_Tuple I_58;

                  mercury__diet__take_min_3_p_0(TypeClassInfo_for_diet_element_30, Right_13, &I_58, &R1_53);
                  *HeadVar__3_3 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_30, I_58, Left_12, R1_53);
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
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_33_42;
          MR_Word CZY_40;

{
#define MR_PROC_LABEL mercury__diet__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_diet_element_30 ;
	Index = PolyConst1_31 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_33_42  = TypeInfo;
}
          mercury__builtin__compare_3_p_0(TypeInfo_33_42, &CZY_40, HeadVar__1_1, Y_10);
          switch (CZY_40) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Tuple Var_24;
                MR_Box Var_25;
                MR_Word Var_26;
                MR_Tuple Var_27;
                MR_Box Var_28;
                MR_Box MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_30, 0)), 6))));
                MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);

                Var_25 = func_1(((MR_Box) (TypeClassInfo_for_diet_element_30)), HeadVar__1_1);
                {
                  Var_24 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_24, 0) = Var_25;
                  MR_hl_field(0, Var_24, 1) = Y_10;
                }
                func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_30, 0)), 7))));
                Var_28 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_30)), HeadVar__1_1);
                {
                  Var_27 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_27, 0) = X_9;
                  MR_hl_field(0, Var_27, 1) = Var_28;
                }
                {
                  Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
                  MR_hl_field(1, Var_26, 1) = ((MR_Box) (H_11));
                  MR_hl_field(1, Var_26, 2) = ((MR_Box) (Left_12));
                  MR_hl_field(1, Var_26, 3) = ((MR_Box) (Right_13));
                }
                *HeadVar__3_3 = mercury__diet__do_insert_2_f_0(TypeClassInfo_for_diet_element_30, Var_24, Var_26);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Tuple Var_20;
                MR_Box Var_21;
                MR_Box MR_CALL (* func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_30, 0)), 7))));

                Var_21 = func_3(((MR_Box) (TypeClassInfo_for_diet_element_30)), Y_10);
                {
                  Var_20 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_20, 0) = X_9;
                  MR_hl_field(0, Var_20, 1) = Var_21;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
                  MR_hl_field(1, base, 1) = ((MR_Box) (H_11));
                  MR_hl_field(1, base, 2) = ((MR_Box) (Left_12));
                  MR_hl_field(1, base, 3) = ((MR_Box) (Right_13));
                }
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word R_38;

                succeeded = mercury__diet__remove_3_p_0(TypeClassInfo_for_diet_element_30, HeadVar__1_1, Right_13, &R_38);
                if (succeeded)
                {
                  *HeadVar__3_3 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_30, Var_34, Left_12, R_38);
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

void MR_CALL 
mercury__diet__insert_list_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_8,
  MR_Word Elems_4,
  MR_Word Set0_5,
  MR_Word * Set_6)
{
  mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(TypeClassInfo_for_diet_element_8, Elems_4, Set0_5, Set_6);
}

MR_Word MR_CALL 
mercury__diet__insert_list_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_7,
  MR_Word Set0_4,
  MR_Word Elems_5)
{
  MR_Word Set_6;

  mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(TypeClassInfo_for_diet_element_7, Elems_5, Set0_4, &Set_6);
  return Set_6;
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Box Var_9 = (MR_hl_field(1, HeadVar__2_2, 0));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      Var_13 = mercury__diet__add_2_f_0(Var_18, Var_9, HeadVar__3_3);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__insert_new_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_47,
  MR_Box P_4,
  MR_Word T0_5,
  MR_Word * T_6)
{
  MR_bool succeeded;

  if ((T0_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Tuple Var_24;

    {
      Var_24 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = P_4;
      MR_hl_field(0, Var_24, 1) = P_4;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *T_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Box X_7;
    MR_Box Y_8;
    MR_Integer H_9 = ((MR_Integer) ((MR_hl_field(1, T0_5, 1))));
    MR_Word Left_10 = ((MR_Word) ((MR_hl_field(1, T0_5, 2))));
    MR_Word Right_11 = ((MR_Word) ((MR_hl_field(1, T0_5, 3))));
    MR_Tuple Var_29 = ((MR_Tuple) ((MR_hl_field(1, T0_5, 0))));
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

    X_7 = (MR_hl_field(0, Var_29, 0));
    Y_8 = (MR_hl_field(0, Var_29, 1));
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_47, 0)), 5))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_47)), P_4, X_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_47, 0)), 5))));

      succeeded = func_1(((MR_Box) (TypeClassInfo_for_diet_element_47)), Y_8, P_4);
      succeeded = !(succeeded);
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
        MR_Box Var_30;
        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_47, 0)), 6))));
        MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box);

        Var_30 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_47)), Y_8);
        func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_47, 0)), 5))));
        succeeded = func_3(((MR_Box) (TypeClassInfo_for_diet_element_47)), Var_30, P_4);
        if (succeeded)
        {
          MR_Word R_12;

          succeeded = mercury__diet__insert_new_3_p_0(TypeClassInfo_for_diet_element_47, P_4, Right_11, &R_12);
          if (succeeded)
          {
            *T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_47, Var_29, Left_10, R_12);
            succeeded = MR_TRUE;
          }
        }
        else
        {
          if ((Right_11 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Tuple Var_32;

            {
              Var_32 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_32, 0) = X_7;
              MR_hl_field(0, Var_32, 1) = P_4;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *T_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_32));
              MR_hl_field(1, base, 1) = ((MR_Box) (H_9));
              MR_hl_field(1, base, 2) = ((MR_Box) (Left_10));
              MR_hl_field(1, base, 3) = ((MR_Box) (Right_11));
            }
          }
          else
          {
            MR_Box U_17;
            MR_Box V_18;
            MR_Tuple Var_33;
            MR_Word R_42;
            MR_Word TypeInfo_51_51;
            MR_Box Var_48;
            MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);

            mercury__diet__take_min_3_p_0(TypeClassInfo_for_diet_element_47, Right_11, &Var_33, &R_42);
            U_17 = (MR_hl_field(0, Var_33, 0));
            V_18 = (MR_hl_field(0, Var_33, 1));
            func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_47, 0)), 7))));
            Var_48 = func_4(((MR_Box) (TypeClassInfo_for_diet_element_47)), U_17);
{
#define MR_PROC_LABEL mercury__diet__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_diet_element_47 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_51_51  = TypeInfo;
}
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_51_51, P_4, Var_48);
            if (succeeded)
            {
              MR_Tuple Var_34;

              {
                Var_34 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_34, 0) = X_7;
                MR_hl_field(0, Var_34, 1) = V_18;
              }
              *T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_47, Var_34, Left_10, R_42);
            }
            else
            {
              MR_Tuple Var_35;

              {
                Var_35 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_35, 0) = X_7;
                MR_hl_field(0, Var_35, 1) = P_4;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *T_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_35));
                MR_hl_field(1, base, 1) = ((MR_Box) (H_9));
                MR_hl_field(1, base, 2) = ((MR_Box) (Left_10));
                MR_hl_field(1, base, 3) = ((MR_Box) (Right_11));
              }
            }
          }
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Box Var_36;
      MR_Box MR_CALL (* func_5)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_47, 0)), 7))));
      MR_bool MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);

      Var_36 = func_5(((MR_Box) (TypeClassInfo_for_diet_element_47)), X_7);
      func_6 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_47, 0)), 5))));
      succeeded = func_6(((MR_Box) (TypeClassInfo_for_diet_element_47)), P_4, Var_36);
      if (succeeded)
      {
        MR_Word L_19;

        succeeded = mercury__diet__insert_new_3_p_0(TypeClassInfo_for_diet_element_47, P_4, Left_10, &L_19);
        if (succeeded)
        {
          *T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_47, Var_29, L_19, Right_11);
          succeeded = MR_TRUE;
        }
      }
      else
      {
        if ((Left_10 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Tuple Var_38;

          {
            Var_38 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_38, 0) = P_4;
            MR_hl_field(0, Var_38, 1) = Y_8;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *T_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_38));
            MR_hl_field(1, base, 1) = ((MR_Box) (H_9));
            MR_hl_field(1, base, 2) = ((MR_Box) (Left_10));
            MR_hl_field(1, base, 3) = ((MR_Box) (Right_11));
          }
        }
        else
        {
          MR_Tuple Var_39;
          MR_Box V_45;
          MR_Word L_46;
          MR_Word TypeInfo_53_53;
          MR_Box Var_49;
          MR_Box MR_CALL (* func_7)(MR_Box, MR_Box);

          mercury__diet__take_max_3_p_0(TypeClassInfo_for_diet_element_47, Left_10, &Var_39, &L_46);
          V_45 = (MR_hl_field(0, Var_39, 1));
          func_7 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_47, 0)), 6))));
          Var_49 = func_7(((MR_Box) (TypeClassInfo_for_diet_element_47)), V_45);
{
#define MR_PROC_LABEL mercury__diet__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_diet_element_47 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_53_53  = TypeInfo;
}
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_53_53, P_4, Var_49);
          if (succeeded)
            *T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_47, Var_39, L_46, Right_11);
          else
          {
            MR_Tuple Var_41;

            {
              Var_41 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_41, 0) = P_4;
              MR_hl_field(0, Var_41, 1) = Y_8;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *T_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_41));
              MR_hl_field(1, base, 1) = ((MR_Box) (H_9));
              MR_hl_field(1, base, 2) = ((MR_Box) (Left_10));
              MR_hl_field(1, base, 3) = ((MR_Box) (Right_11));
            }
          }
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__diet__insert_interval_4_p_0(
  MR_Word TypeClassInfo_for_diet_element_11,
  MR_Box X_5,
  MR_Box Y_6,
  MR_Word Set0_7,
  MR_Word * Set_8)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_11, 0)), 5))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_11)), Y_6, X_5);
  succeeded = !(succeeded);
  if (succeeded)
  {
    MR_Tuple Var_9;

    {
      Var_9 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_9, 0) = X_5;
      MR_hl_field(0, Var_9, 1) = Y_6;
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

	TypeClassInfo = TypeClassInfo_for_diet_element_11 ;
	Index = (MR_Integer) 1 ;
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

MR_Word MR_CALL 
mercury__diet__do_insert_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_26,
  MR_Tuple PQ_4,
  MR_Word T0_5)
{
  MR_bool succeeded;
  MR_Word T_6;
  MR_Box P_7 = (MR_hl_field(0, PQ_4, 0));
  MR_Box Q_8 = (MR_hl_field(0, PQ_4, 1));

  if ((T0_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      T_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, T_6, 0) = ((MR_Box) (PQ_4));
      MR_hl_field(1, T_6, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, T_6, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, T_6, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  else
  {
    MR_Box X0_9;
    MR_Box Y0_10;
    MR_Word Left0_12 = ((MR_Word) ((MR_hl_field(1, T0_5, 2))));
    MR_Word Right0_13 = ((MR_Word) ((MR_hl_field(1, T0_5, 3))));
    MR_Tuple Var_18 = ((MR_Tuple) ((MR_hl_field(1, T0_5, 0))));
    MR_Box Var_19;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box);

    X0_9 = (MR_hl_field(0, Var_18, 0));
    Y0_10 = (MR_hl_field(0, Var_18, 1));
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_26, 0)), 7))));
    Var_19 = func_0(((MR_Box) (TypeClassInfo_for_diet_element_26)), X0_9);
    func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_26, 0)), 5))));
    succeeded = func_1(((MR_Box) (TypeClassInfo_for_diet_element_26)), Q_8, Var_19);
    if (succeeded)
    {
      MR_Word Var_21;

      Var_21 = mercury__diet__do_insert_2_f_0(TypeClassInfo_for_diet_element_26, PQ_4, Left0_12);
      T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_26, Var_18, Var_21, Right0_13);
    }
    else
    {
      MR_Box Var_22;
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_26, 0)), 6))));
      MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box);

      Var_22 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_26)), Y0_10);
      func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_26, 0)), 5))));
      succeeded = func_3(((MR_Box) (TypeClassInfo_for_diet_element_26)), Var_22, P_7);
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
        MR_bool MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_26, 0)), 5))));
        MR_bool MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box);

        succeeded = func_4(((MR_Box) (TypeClassInfo_for_diet_element_26)), P_7, X0_9);
        succeeded = !(succeeded);
        if (succeeded)
        {
          X1_14 = X0_9;
          Left1_15 = Left0_12;
        }
        else
          mercury__diet__find_del_left_4_p_0(TypeClassInfo_for_diet_element_26, P_7, Left0_12, &X1_14, &Left1_15);
        func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_26, 0)), 5))));
        succeeded = func_5(((MR_Box) (TypeClassInfo_for_diet_element_26)), Y0_10, Q_8);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Y1_16 = Y0_10;
          Right1_17 = Right0_13;
        }
        else
          mercury__diet__find_del_right_4_p_0(TypeClassInfo_for_diet_element_26, Q_8, Right0_13, &Y1_16, &Right1_17);
        {
          Var_25 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_25, 0) = X1_14;
          MR_hl_field(0, Var_25, 1) = Y1_16;
        }
        T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_26, Var_25, Left1_15, Right1_17);
      }
    }
  }
  return T_6;
}

static void MR_CALL 
mercury__diet__find_del_right_4_p_0(
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Box P0_5,
  MR_Word T0_6,
  MR_Box * P_7,
  MR_Word * T_8)
{
  MR_bool succeeded;

  if ((T0_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *P_7 = P0_5;
    *T_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Box X_9;
    MR_Box Y_10;
    MR_Word Left0_12 = ((MR_Word) ((MR_hl_field(1, T0_6, 2))));
    MR_Word Right_13 = ((MR_Word) ((MR_hl_field(1, T0_6, 3))));
    MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T0_6, 0))));
    MR_Box Var_16;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box);

    X_9 = (MR_hl_field(0, Var_15, 0));
    Y_10 = (MR_hl_field(0, Var_15, 1));
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_18, 0)), 7))));
    Var_16 = func_0(((MR_Box) (TypeClassInfo_for_diet_element_18)), X_9);
    func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_18, 0)), 5))));
    succeeded = func_1(((MR_Box) (TypeClassInfo_for_diet_element_18)), P0_5, Var_16);
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

static void MR_CALL 
mercury__diet__find_del_left_4_p_0(
  MR_Word TypeClassInfo_for_diet_element_18,
  MR_Box P0_5,
  MR_Word T0_6,
  MR_Box * P_7,
  MR_Word * T_8)
{
  MR_bool succeeded;

  if ((T0_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *P_7 = P0_5;
    *T_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Box X_9;
    MR_Box Y_10;
    MR_Word Left_12 = ((MR_Word) ((MR_hl_field(1, T0_6, 2))));
    MR_Word Right0_13 = ((MR_Word) ((MR_hl_field(1, T0_6, 3))));
    MR_Tuple Var_15 = ((MR_Tuple) ((MR_hl_field(1, T0_6, 0))));
    MR_Box Var_16;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box);

    X_9 = (MR_hl_field(0, Var_15, 0));
    Y_10 = (MR_hl_field(0, Var_15, 1));
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_18, 0)), 6))));
    Var_16 = func_0(((MR_Box) (TypeClassInfo_for_diet_element_18)), Y_10);
    func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_18, 0)), 5))));
    succeeded = func_1(((MR_Box) (TypeClassInfo_for_diet_element_18)), Var_16, P0_5);
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
  MR_Word Set_6;

  Set_6 = mercury__diet__add_2_f_0(TypeClassInfo_for_diet_element_7, Elem_5, Set0_4);
  return Set_6;
}

MR_Word MR_CALL 
mercury__diet__add_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_46,
  MR_Box P_4,
  MR_Word T0_5)
{
  MR_bool succeeded;
  MR_Word T_6;

  if ((T0_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Tuple Var_24;

    {
      Var_24 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = P_4;
      MR_hl_field(0, Var_24, 1) = P_4;
    }
    {
      T_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, T_6, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, T_6, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, T_6, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, T_6, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Box X_7;
    MR_Box Y_8;
    MR_Integer H_9 = ((MR_Integer) ((MR_hl_field(1, T0_5, 1))));
    MR_Word Left_10 = ((MR_Word) ((MR_hl_field(1, T0_5, 2))));
    MR_Word Right_11 = ((MR_Word) ((MR_hl_field(1, T0_5, 3))));
    MR_Tuple Var_29 = ((MR_Tuple) ((MR_hl_field(1, T0_5, 0))));
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

    X_7 = (MR_hl_field(0, Var_29, 0));
    Y_8 = (MR_hl_field(0, Var_29, 1));
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_46, 0)), 5))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_46)), P_4, X_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_46, 0)), 5))));

      succeeded = func_1(((MR_Box) (TypeClassInfo_for_diet_element_46)), Y_8, P_4);
      succeeded = !(succeeded);
      if (succeeded)
        T_6 = T0_5;
      else
      {
        MR_Box Var_30;
        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_46, 0)), 6))));
        MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box);

        Var_30 = func_2(((MR_Box) (TypeClassInfo_for_diet_element_46)), Y_8);
        func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_46, 0)), 5))));
        succeeded = func_3(((MR_Box) (TypeClassInfo_for_diet_element_46)), Var_30, P_4);
        if (succeeded)
        {
          MR_Word Var_32;

          Var_32 = mercury__diet__add_2_f_0(TypeClassInfo_for_diet_element_46, P_4, Right_11);
          T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_46, Var_29, Left_10, Var_32);
        }
        else
        if ((Right_11 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Tuple Var_33;

          {
            Var_33 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_33, 0) = X_7;
            MR_hl_field(0, Var_33, 1) = P_4;
          }
          {
            T_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, T_6, 0) = ((MR_Box) (Var_33));
            MR_hl_field(1, T_6, 1) = ((MR_Box) (H_9));
            MR_hl_field(1, T_6, 2) = ((MR_Box) (Left_10));
            MR_hl_field(1, T_6, 3) = ((MR_Box) (Right_11));
          }
        }
        else
        {
          MR_Box U_16;
          MR_Box V_17;
          MR_Word R_18;
          MR_Tuple Var_34;
          MR_Word TypeInfo_50_50;
          MR_Box Var_47;
          MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);

          mercury__diet__take_min_3_p_0(TypeClassInfo_for_diet_element_46, Right_11, &Var_34, &R_18);
          U_16 = (MR_hl_field(0, Var_34, 0));
          V_17 = (MR_hl_field(0, Var_34, 1));
          func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_46, 0)), 7))));
          Var_47 = func_4(((MR_Box) (TypeClassInfo_for_diet_element_46)), U_16);
{
#define MR_PROC_LABEL mercury__diet__add_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_diet_element_46 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_50_50  = TypeInfo;
}
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_50_50, P_4, Var_47);
          if (succeeded)
          {
            MR_Tuple Var_35;

            {
              Var_35 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_35, 0) = X_7;
              MR_hl_field(0, Var_35, 1) = V_17;
            }
            T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_46, Var_35, Left_10, R_18);
          }
          else
          {
            MR_Tuple Var_36;

            {
              Var_36 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_36, 0) = X_7;
              MR_hl_field(0, Var_36, 1) = P_4;
            }
            {
              T_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, T_6, 0) = ((MR_Box) (Var_36));
              MR_hl_field(1, T_6, 1) = ((MR_Box) (H_9));
              MR_hl_field(1, T_6, 2) = ((MR_Box) (Left_10));
              MR_hl_field(1, T_6, 3) = ((MR_Box) (Right_11));
            }
          }
        }
      }
    }
    else
    {
      MR_Box Var_37;
      MR_Box MR_CALL (* func_5)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_46, 0)), 7))));
      MR_bool MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);

      Var_37 = func_5(((MR_Box) (TypeClassInfo_for_diet_element_46)), X_7);
      func_6 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_46, 0)), 5))));
      succeeded = func_6(((MR_Box) (TypeClassInfo_for_diet_element_46)), P_4, Var_37);
      if (succeeded)
      {
        MR_Word Var_39;

        Var_39 = mercury__diet__add_2_f_0(TypeClassInfo_for_diet_element_46, P_4, Left_10);
        T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_46, Var_29, Var_39, Right_11);
      }
      else
      if ((Left_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Tuple Var_40;

        {
          Var_40 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_40, 0) = P_4;
          MR_hl_field(0, Var_40, 1) = Y_8;
        }
        {
          T_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, T_6, 0) = ((MR_Box) (Var_40));
          MR_hl_field(1, T_6, 1) = ((MR_Box) (H_9));
          MR_hl_field(1, T_6, 2) = ((MR_Box) (Left_10));
          MR_hl_field(1, T_6, 3) = ((MR_Box) (Right_11));
        }
      }
      else
      {
        MR_Word L_23;
        MR_Tuple Var_41;
        MR_Box U_44;
        MR_Box V_45;
        MR_Word TypeInfo_52_52;
        MR_Box Var_48;
        MR_Box MR_CALL (* func_7)(MR_Box, MR_Box);

        mercury__diet__take_max_3_p_0(TypeClassInfo_for_diet_element_46, Left_10, &Var_41, &L_23);
        U_44 = (MR_hl_field(0, Var_41, 0));
        V_45 = (MR_hl_field(0, Var_41, 1));
        func_7 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_46, 0)), 6))));
        Var_48 = func_7(((MR_Box) (TypeClassInfo_for_diet_element_46)), V_45);
{
#define MR_PROC_LABEL mercury__diet__add_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_diet_element_46 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_52_52  = TypeInfo;
}
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_52_52, P_4, Var_48);
        if (succeeded)
        {
          MR_Tuple Var_42;

          {
            Var_42 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_42, 0) = U_44;
            MR_hl_field(0, Var_42, 1) = Y_8;
          }
          T_6 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_46, Var_42, L_23, Right_11);
        }
        else
        {
          MR_Tuple Var_43;

          {
            Var_43 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_43, 0) = P_4;
            MR_hl_field(0, Var_43, 1) = Y_8;
          }
          {
            T_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, T_6, 0) = ((MR_Box) (Var_43));
            MR_hl_field(1, T_6, 1) = ((MR_Box) (H_9));
            MR_hl_field(1, T_6, 2) = ((MR_Box) (Left_10));
            MR_hl_field(1, T_6, 3) = ((MR_Box) (Right_11));
          }
        }
      }
    }
  }
  return T_6;
}

static void MR_CALL 
mercury__diet__take_max_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word T0_4,
  MR_Tuple * X_5,
  MR_Word * T_6)
{
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, T0_4, 3))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, T0_4, 2))));
  MR_Tuple Var_23 = ((MR_Tuple) ((MR_hl_field(1, T0_4, 0))));

  if ((Var_20 == (MR_Word) ((MR_Unsigned) 0U)))
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

static void MR_CALL 
mercury__diet__take_min_3_p_0(
  MR_Word TypeClassInfo_for_diet_element_19,
  MR_Word T0_4,
  MR_Tuple * X_5,
  MR_Word * T_6)
{
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, T0_4, 3))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, T0_4, 2))));
  MR_Tuple Var_23 = ((MR_Tuple) ((MR_hl_field(1, T0_4, 0))));

  if ((Var_21 == (MR_Word) ((MR_Unsigned) 0U)))
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

static MR_Word MR_CALL 
mercury__diet__join_3_f_0(
  MR_Word TypeClassInfo_for_diet_element_29,
  MR_Tuple V_5,
  MR_Word L_6,
  MR_Word R_7)
{
  MR_bool succeeded;
  MR_Word T_8;

  if ((L_6 == (MR_Word) ((MR_Unsigned) 0U)))
    T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0((MR_Integer) 1, V_5, R_7);
  else
  {
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, L_6, 3))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(1, L_6, 2))));
    MR_Integer Var_42 = ((MR_Integer) ((MR_hl_field(1, L_6, 1))));
    MR_Tuple Var_43 = ((MR_Tuple) ((MR_hl_field(1, L_6, 0))));

    if ((R_7 == (MR_Word) ((MR_Unsigned) 0U)))
      T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0((MR_Integer) 0, V_5, L_6);
    else
    {
      MR_Tuple RX_17 = ((MR_Tuple) ((MR_hl_field(1, R_7, 0))));
      MR_Integer RH_18 = ((MR_Integer) ((MR_hl_field(1, R_7, 1))));
      MR_Word RL_19 = ((MR_Word) ((MR_hl_field(1, R_7, 2))));
      MR_Word RR_20 = ((MR_Word) ((MR_hl_field(1, R_7, 3))));
      MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) RH_18 + (MR_Unsigned) 1);

      succeeded = (Var_42 > Var_23);
      if (succeeded)
      {
        MR_Word Var_25;

        Var_25 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_29, V_5, Var_40, R_7);
        T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(Var_43, Var_41, Var_25);
      }
      else
      {
        MR_Integer Var_26 = (MR_Integer) ((MR_Unsigned) Var_42 + (MR_Unsigned) 1);

        succeeded = (RH_18 > Var_26);
        if (succeeded)
        {
          MR_Word Var_28;

          Var_28 = mercury__diet__join_3_f_0(TypeClassInfo_for_diet_element_29, V_5, L_6, RL_19);
          T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(RX_17, Var_28, RR_20);
        }
        else
          T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(V_5, L_6, R_7);
      }
    }
  }
  return T_8;
}

static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(
  MR_Word IsLeft_5,
  MR_Tuple X_6,
  MR_Word T0_7)
{
  MR_Word T_8;

  if ((T0_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      T_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, T_8, 0) = ((MR_Box) (X_6));
      MR_hl_field(1, T_8, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, T_8, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, T_8, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  else
  {
    MR_Tuple VX_9 = ((MR_Tuple) ((MR_hl_field(1, T0_7, 0))));
    MR_Word L_11 = ((MR_Word) ((MR_hl_field(1, T0_7, 2))));
    MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, T0_7, 3))));

    switch (IsLeft_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_17;

          Var_17 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(IsLeft_5, X_6, R_12);
          T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(VX_9, L_11, Var_17);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_16;

          Var_16 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(IsLeft_5, X_6, L_11);
          T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(VX_9, Var_16, R_12);
        }
        break;
    }
  }
  return T_8;
}

static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(
  MR_Tuple X_5,
  MR_Word L_6,
  MR_Word R_7)
{
  MR_bool succeeded;
  MR_Word T_8;
  MR_Integer HL_9;
  MR_Integer HR_10;
  MR_Integer Var_28;

  if ((L_6 == (MR_Word) ((MR_Unsigned) 0U)))
    HL_9 = (MR_Integer) 0;
  else
    HL_9 = ((MR_Integer) ((MR_hl_field(1, L_6, 1))));
  if ((R_7 == (MR_Word) ((MR_Unsigned) 0U)))
    HR_10 = (MR_Integer) 0;
  else
    HR_10 = ((MR_Integer) ((MR_hl_field(1, R_7, 1))));
  Var_28 = (MR_Integer) ((MR_Unsigned) HR_10 + (MR_Unsigned) 1);
  succeeded = (HL_9 > Var_28);
  if (succeeded)
    if ((L_6 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_2_p_0((MR_String) "function \140diet.balance\'/3", (MR_String) "L empty");
    else
    {
      MR_Tuple LVX_11 = ((MR_Tuple) ((MR_hl_field(1, L_6, 0))));
      MR_Word LL_13 = ((MR_Word) ((MR_hl_field(1, L_6, 2))));
      MR_Word LR_14 = ((MR_Word) ((MR_hl_field(1, L_6, 3))));
      MR_Integer Var_32;
      MR_Integer Var_33;

      if ((LL_13 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_32 = (MR_Integer) 0;
      else
        Var_32 = ((MR_Integer) ((MR_hl_field(1, LL_13, 1))));
      if ((LR_14 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_33 = (MR_Integer) 0;
      else
        Var_33 = ((MR_Integer) ((MR_hl_field(1, LR_14, 1))));
      succeeded = (Var_32 >= Var_33);
      if (succeeded)
      {
        MR_Word Var_34;

        Var_34 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(X_5, LR_14, R_7);
        T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(LVX_11, LL_13, Var_34);
      }
      else
      if ((LR_14 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__require__unexpected_2_p_0((MR_String) "function \140diet.balance\'/3", (MR_String) "LR empty");
      else
      {
        MR_Tuple LRX_15 = ((MR_Tuple) ((MR_hl_field(1, LR_14, 0))));
        MR_Word LRL_17 = ((MR_Word) ((MR_hl_field(1, LR_14, 2))));
        MR_Word LRR_18 = ((MR_Word) ((MR_hl_field(1, LR_14, 3))));
        MR_Word Var_37;
        MR_Word Var_38;

        Var_37 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(LVX_11, LL_13, LRL_17);
        Var_38 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(X_5, LRR_18, R_7);
        T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(LRX_15, Var_37, Var_38);
      }
    }
  else
  {
    MR_Integer Var_39 = (MR_Integer) ((MR_Unsigned) HL_9 + (MR_Unsigned) 1);

    succeeded = (HR_10 > Var_39);
    if (succeeded)
      if ((R_7 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__require__unexpected_2_p_0((MR_String) "function \140diet.balance\'/3", (MR_String) "R empty");
      else
      {
        MR_Tuple RVX_19 = ((MR_Tuple) ((MR_hl_field(1, R_7, 0))));
        MR_Word RL_21 = ((MR_Word) ((MR_hl_field(1, R_7, 2))));
        MR_Word RR_22 = ((MR_Word) ((MR_hl_field(1, R_7, 3))));
        MR_Integer Var_43;
        MR_Integer Var_44;

        if ((RR_22 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_43 = (MR_Integer) 0;
        else
          Var_43 = ((MR_Integer) ((MR_hl_field(1, RR_22, 1))));
        if ((RL_21 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_44 = (MR_Integer) 0;
        else
          Var_44 = ((MR_Integer) ((MR_hl_field(1, RL_21, 1))));
        succeeded = (Var_43 >= Var_44);
        if (succeeded)
        {
          MR_Word Var_45;

          Var_45 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(X_5, L_6, RL_21);
          T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(RVX_19, Var_45, RR_22);
        }
        else
        if ((RL_21 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__require__unexpected_2_p_0((MR_String) "function \140diet.balance\'/3", (MR_String) "RL empty");
        else
        {
          MR_Tuple RLX_23 = ((MR_Tuple) ((MR_hl_field(1, RL_21, 0))));
          MR_Word RLL_25 = ((MR_Word) ((MR_hl_field(1, RL_21, 2))));
          MR_Word RLR_26 = ((MR_Word) ((MR_hl_field(1, RL_21, 3))));
          MR_Word Var_48;
          MR_Word Var_49;

          Var_48 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(X_5, L_6, RLL_25);
          Var_49 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(RVX_19, RLR_26, RR_22);
          T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(RLX_23, Var_48, Var_49);
        }
      }
    else
    {
      MR_Integer HT_27;
      MR_Integer Var_51;

      succeeded = (HL_9 > HR_10);
      if (succeeded)
        Var_51 = HL_9;
      else
        Var_51 = HR_10;
      HT_27 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_51);
      {
        T_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, T_8, 0) = ((MR_Box) (X_5));
        MR_hl_field(1, T_8, 1) = ((MR_Box) (HT_27));
        MR_hl_field(1, T_8, 2) = ((MR_Box) (L_6));
        MR_hl_field(1, T_8, 3) = ((MR_Box) (R_7));
      }
    }
  }
  return T_8;
}

static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(
  MR_Tuple X_5,
  MR_Word L_6,
  MR_Word R_7)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;
  MR_Integer Var_8;
  MR_Integer Var_11;
  MR_Integer Var_12;
  MR_Integer Var_13;

  if ((L_6 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_12 = (MR_Integer) 0;
  else
    Var_12 = ((MR_Integer) ((MR_hl_field(1, L_6, 1))));
  if ((R_7 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_13 = (MR_Integer) 0;
  else
    Var_13 = ((MR_Integer) ((MR_hl_field(1, R_7, 1))));
  succeeded = (Var_12 > Var_13);
  if (succeeded)
    Var_11 = Var_12;
  else
    Var_11 = Var_13;
  Var_8 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_11);
  {
    HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (X_5));
    MR_hl_field(1, HeadVar__4_4, 1) = ((MR_Box) (Var_8));
    MR_hl_field(1, HeadVar__4_4, 2) = ((MR_Box) (L_6));
    MR_hl_field(1, HeadVar__4_4, 3) = ((MR_Box) (R_7));
  }
  return HeadVar__4_4;
}

void MR_CALL 
mercury__diet__nondet_member_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_5,
  MR_Word Set_3,
  MR_Box * Elem_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  mercury__diet__member_2_p_1(TypeClassInfo_for_diet_element_5, Elem_4, Set_3, cont, cont_env_ptr);
}

void MR_CALL 
mercury__diet__member_2_p_1(
  MR_Word TypeClassInfo_for_diet_element_13,
  MR_Box * Elem_1,
  MR_Word Set_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Set_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box X_7;
    MR_Box Y_8;
    MR_Word Left_10;
    MR_Word Right_11;
    MR_Tuple Var_12;

    // setup for model_non tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_12 = ((MR_Tuple) ((MR_hl_field(1, Set_2, 0))));
      Left_10 = ((MR_Word) ((MR_hl_field(1, Set_2, 2))));
      Right_11 = ((MR_Word) ((MR_hl_field(1, Set_2, 3))));
      X_7 = (MR_hl_field(0, Var_12, 0));
      Y_8 = (MR_hl_field(0, Var_12, 1));
      mercury__diet__member_2_p_1(TypeClassInfo_for_diet_element_13, Elem_1, Left_10, cont, cont_env_ptr);
      mercury__diet__member_in_range_3_p_0(TypeClassInfo_for_diet_element_13, X_7, Y_8, Elem_1, cont, cont_env_ptr);
      {
        MR_Word next_value_of_Set_2 = Right_11;

        // direct tailcall eliminated
        ;
        Set_2 = next_value_of_Set_2;
        continue;
      }
    }
    break;
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
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_8, 0)), 5))));

    // setup for model_non tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_8)), Lo_4, Hi_5);
    if (succeeded)
    {
      *Elem_6 = Lo_4;
      cont(cont_env_ptr);
      {
        MR_Box Var_7;
        MR_Box MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_8, 0)), 6))));
        MR_Box next_value_of_Lo_4;

        Var_7 = func_1(((MR_Box) (TypeClassInfo_for_diet_element_8)), Lo_4);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_4 = Var_7;
        Lo_4 = next_value_of_Lo_4;
        continue;
      }
    }
    else
    {
      *Elem_6 = Lo_4;
      cont(cont_env_ptr);
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__member_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_13,
  MR_Box Elem_1,
  MR_Word Set_2)
{
  MR_bool succeeded;

  succeeded = mercury__diet__contains_2_p_0(TypeClassInfo_for_diet_element_13, Set_2, Elem_1);
  return succeeded;
}

MR_bool MR_CALL 
mercury__diet__contains_2_p_0(
  MR_Word TypeClassInfo_for_diet_element_11,
  MR_Word T_3,
  MR_Box Z_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (T_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box X_5;
    MR_Box Y_6;
    MR_Word L_8;
    MR_Word R_9;
    MR_Tuple Var_10;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_10 = ((MR_Tuple) ((MR_hl_field(1, T_3, 0))));
      L_8 = ((MR_Word) ((MR_hl_field(1, T_3, 2))));
      R_9 = ((MR_Word) ((MR_hl_field(1, T_3, 3))));
      X_5 = (MR_hl_field(0, Var_10, 0));
      Y_6 = (MR_hl_field(0, Var_10, 1));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_11, 0)), 5))));
      succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_11)), Z_4, X_5);
      if (succeeded)
      {
        MR_Word next_value_of_T_3 = L_8;

        // direct tailcall eliminated
        ;
        T_3 = next_value_of_T_3;
        continue;
      }
      else
      {
        MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_11, 0)), 5))));

        succeeded = func_1(((MR_Box) (TypeClassInfo_for_diet_element_11)), Y_6, Z_4);
        if (succeeded)
        {
          MR_Word next_value_of_T_3 = R_9;

          // direct tailcall eliminated
          ;
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
  MR_bool succeeded = (Set_3 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word TypeInfo_12_12;
  MR_Tuple Var_6;
  MR_Box Var_7;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Integer TypeInfoIndex_11;

  if (succeeded)
  {
    Var_6 = ((MR_Tuple) ((MR_hl_field(1, Set_3, 0))));
    Var_8 = ((MR_Word) ((MR_hl_field(1, Set_3, 2))));
    Var_9 = ((MR_Word) ((MR_hl_field(1, Set_3, 3))));
    *X_4 = (MR_hl_field(0, Var_6, 0));
    Var_7 = (MR_hl_field(0, Var_6, 1));
    TypeInfoIndex_11 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__diet__is_singleton_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_diet_element_10 ;
	Index = TypeInfoIndex_11 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_12_12  = TypeInfo;
}
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, Var_7, *X_4);
    if (succeeded)
    {
      succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__diet__is_non_empty_1_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));

  return succeeded;
}

MR_bool MR_CALL 
mercury__diet__is_empty_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = (HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U));

  return succeeded;
}

MR_Word MR_CALL 
mercury__diet__make_interval_set_2_f_0(
  MR_Word TypeClassInfo_for_diet_element_9,
  MR_Box X_4,
  MR_Box Y_5)
{
  MR_bool succeeded;
  MR_Word T_6;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_diet_element_9, 0)), 5))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_diet_element_9)), Y_5, X_4);
  succeeded = !(succeeded);
  if (succeeded)
  {
    MR_Tuple Var_7;

    {
      Var_7 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_7, 0) = X_4;
      MR_hl_field(0, Var_7, 1) = Y_5;
    }
    {
      T_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, T_6, 0) = ((MR_Box) (Var_7));
      MR_hl_field(1, T_6, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, T_6, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, T_6, 3) = ((MR_Box) ((MR_Unsigned) 0U));
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

	TypeClassInfo = TypeClassInfo_for_diet_element_9 ;
	Index = (MR_Integer) 1 ;
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

void MR_CALL 
mercury__diet__unexpected_interval_3_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_String PredName_4,
  MR_Box X_5,
  MR_Box Y_6)
{
  MR_String Var_8;
  MR_String Var_10;
  MR_String Var_11;
  MR_String Var_12;
  MR_String Var_14;
  MR_String Var_15;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_24;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_24;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_32;

  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__diet_scalar_common_1[0]), 0)), 12))));
  conv1_Var_24 = func_0(((MR_Box) ((MR_Word) (&mercury__diet_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_24 = ((MR_Word) (conv1_Var_24));
  mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_T_17, (MR_Integer) 1, Var_24, X_5, (MR_Word) ((MR_Unsigned) 0U), &Var_21);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, &Var_22);
  Var_11 = mercury__string__append_list_1_f_0(Var_22);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__diet_scalar_common_1[0]), 0)), 12))));
  conv3_Var_32 = func_2(((MR_Box) ((MR_Word) (&mercury__diet_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_32 = ((MR_Word) (conv3_Var_32));
  mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_T_17, (MR_Integer) 1, Var_32, Y_6, (MR_Word) ((MR_Unsigned) 0U), &Var_29);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_29, &Var_30);
  Var_15 = mercury__string__append_list_1_f_0(Var_30);
  mercury__string__append_3_p_2(Var_15, (MR_String) "]", &Var_14);
  mercury__string__append_3_p_2((MR_String) ", ", Var_14, &Var_12);
  mercury__string__append_3_p_2(Var_11, Var_12, &Var_10);
  mercury__string__append_3_p_2((MR_String) "bad interval [", Var_10, &Var_8);
  {
    mercury__require__unexpected_3_p_0((MR_String) "diet", PredName_4, Var_8);
    return;
  }
}

MR_Word MR_CALL 
mercury__diet__make_singleton_set_1_f_0(
  MR_Word TypeClassInfo_for_diet_element_6,
  MR_Box X_3)
{
  MR_Word HeadVar__2_2;
  MR_Tuple Var_4;

  {
    Var_4 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_4, 0) = X_3;
    MR_hl_field(0, Var_4, 1) = X_3;
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(1, HeadVar__2_2, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, HeadVar__2_2, 3) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__2_2;
}

void MR_CALL 
mercury__diet__init_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) ((MR_Unsigned) 0U);
}

MR_Word MR_CALL 
mercury__diet__init_0_f_0(
  MR_Word TypeInfo_for_T_2)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
mercury__diet____Unify____diet_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__diet____Unify____diet_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__diet____Compare____diet_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__diet____Compare____diet_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__diet____Unify____interval_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__diet____Unify____interval_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Tuple) (wrapper_arg_2)), ((MR_Tuple) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__diet____Compare____interval_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__diet____Compare____interval_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Tuple) (wrapper_arg_3)), ((MR_Tuple) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__less_than_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__less_than_2_2_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static MR_Box MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__successor_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__successor_1_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__predecessor_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__predecessor_1_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
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

// :- end_module diet.
