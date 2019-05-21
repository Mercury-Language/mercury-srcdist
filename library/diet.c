/*
** Automatically generated from `diet.m'
** by the Mercury compiler,
** version rotd-2017-08-07
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
  MR_Word mercury__diet__Var_22,
  MR_Word mercury__diet__HeadVar__2_2,
  MR_Word mercury__diet__HeadVar__3_3,
  MR_Word * mercury__diet__HeadVar__4_4);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(
  MR_Word mercury__diet__Var_27,
  MR_Word mercury__diet__T_6,
  MR_Word mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Word * mercury__diet__STATE_VARIABLE_Acc_14);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(
  MR_Word mercury__diet__Var_23,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__T_6,
  MR_Word mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Word * mercury__diet__STATE_VARIABLE_Acc_14);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_51_95_95_91_49_44_32_51_44_32_53_93_95_48_5_p_0(
  MR_Word mercury__diet__Var_19,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
  MR_Box mercury__diet__Lo_7,
  MR_Box mercury__diet__Hi_8,
  MR_Word mercury__diet__STATE_VARIABLE_A_0_10,
  MR_Word * mercury__diet__STATE_VARIABLE_A_11);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(
  MR_Word mercury__diet__Var_23,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
  MR_Word mercury__diet__Var_19,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
  MR_Box mercury__diet__Lo_7,
  MR_Box mercury__diet__Hi_8,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__diet__STATE_VARIABLE_A_11);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(
  MR_Word mercury__diet__Var_23,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
  MR_Word mercury__diet__Var_19,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
  MR_Box mercury__diet__Lo_7,
  MR_Box mercury__diet__Hi_8,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(
  MR_Word mercury__diet__Var_34,
  MR_Word mercury__diet__Var_35,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
  MR_Word mercury__diet__T_8,
  MR_Word mercury__diet__STATE_VARIABLE_Acc1_0_16,
  MR_Word * mercury__diet__STATE_VARIABLE_Acc1_17,
  MR_Word mercury__diet__STATE_VARIABLE_Acc2_0_18,
  MR_Word * mercury__diet__STATE_VARIABLE_Acc2_19);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_117_112_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_7_p_0(
  MR_Word mercury__diet__Var_29,
  MR_Word mercury__diet__Var_30,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
  MR_Box mercury__diet__Lo_9,
  MR_Box mercury__diet__Hi_10,
  MR_Word mercury__diet__STATE_VARIABLE_A_0_13,
  MR_Word * mercury__diet__STATE_VARIABLE_A_14,
  MR_Word mercury__diet__STATE_VARIABLE_B_0_15,
  MR_Word * mercury__diet__STATE_VARIABLE_B_16);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word mercury__diet__Var_20,
  MR_Word mercury__diet__HeadVar__2_2,
  MR_Word mercury__diet__HeadVar__3_3,
  MR_Word * mercury__diet__HeadVar__4_4);

static void MR_CALL 
mercury__diet__inter_help_8_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_49,
  MR_Tuple mercury__diet__HeadVar__1_1,
  MR_Word mercury__diet__Right0_11,
  MR_Word mercury__diet__Left0_12,
  MR_Word mercury__diet__Head0_13,
  MR_Word mercury__diet__Stream0_14,
  MR_Word * mercury__diet__Result_15,
  MR_Word * mercury__diet__Head_16,
  MR_Word * mercury__diet__Stream_17);

static void MR_CALL 
mercury__diet__inter_2_6_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_26,
  MR_Word mercury__diet__Input_7,
  MR_Word mercury__diet__Head0_8,
  MR_Word mercury__diet__Stream0_9,
  MR_Word * mercury__diet__Result_10,
  MR_Word * mercury__diet__Head_11,
  MR_Word * mercury__diet__Stream_12);

static MR_Box MR_CALL 
mercury__diet__max_elem_2_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_6,
  MR_Box mercury__diet__X_4,
  MR_Box mercury__diet__Y_5);

static MR_Box MR_CALL 
mercury__diet__min_elem_2_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_6,
  MR_Box mercury__diet__X_4,
  MR_Box mercury__diet__Y_5);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word mercury__diet__Var_20,
  MR_Word mercury__diet__HeadVar__2_2,
  MR_Word mercury__diet__HeadVar__3_3,
  MR_Word * mercury__diet__HeadVar__4_4);

static void MR_CALL 
mercury__diet__union_helper_9_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_56,
  MR_Word mercury__diet__Left0_10,
  MR_Tuple mercury__diet__HeadVar__2_2,
  MR_Word mercury__diet__Right0_13,
  MR_Word mercury__diet__Limit_14,
  MR_Word mercury__diet__Head0_15,
  MR_Word mercury__diet__Stream0_16,
  MR_Word * mercury__diet__Left_17,
  MR_Word * mercury__diet__Head_18,
  MR_Word * mercury__diet__Stream_19);

static void MR_CALL 
mercury__diet__union_2_7_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_30,
  MR_Word mercury__diet__Input_8,
  MR_Word mercury__diet__Limit_9,
  MR_Word mercury__diet__Head0_10,
  MR_Word mercury__diet__Stream0_11,
  MR_Word * mercury__diet__Left_12,
  MR_Word * mercury__diet__Head_13,
  MR_Word * mercury__diet__Stream_14);

static void MR_CALL 
mercury__diet__diff_helper_8_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_44,
  MR_Tuple mercury__diet__HeadVar__1_1,
  MR_Word mercury__diet__Right0_11,
  MR_Word mercury__diet__Left0_12,
  MR_Word mercury__diet__Head0_13,
  MR_Word mercury__diet__Stream0_14,
  MR_Word * mercury__diet__Output_15,
  MR_Word * mercury__diet__Head_16,
  MR_Word * mercury__diet__Stream_17);

static void MR_CALL 
mercury__diet__diff_6_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
  MR_Word mercury__diet__Input_7,
  MR_Word mercury__diet__Head0_8,
  MR_Word mercury__diet__Stream0_9,
  MR_Word * mercury__diet__Output_10,
  MR_Word * mercury__diet__Head_11,
  MR_Word * mercury__diet__Stream_12);

static MR_Word MR_CALL 
mercury__diet__reroot_2_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_25,
  MR_Word mercury__diet__L_4,
  MR_Word mercury__diet__R_5);

static void MR_CALL 
mercury__diet__find_del_right_4_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_18,
  MR_Box mercury__diet__P0_5,
  MR_Word mercury__diet__T0_6,
  MR_Box * mercury__diet__P_7,
  MR_Word * mercury__diet__T_8);

static void MR_CALL 
mercury__diet__find_del_left_4_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_18,
  MR_Box mercury__diet__P0_5,
  MR_Word mercury__diet__T0_6,
  MR_Box * mercury__diet__P_7,
  MR_Word * mercury__diet__T_8);

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(
  MR_Word mercury__diet__Var_18,
  MR_Word mercury__diet__HeadVar__2_2,
  MR_Word mercury__diet__HeadVar__3_3,
  MR_Word * mercury__diet__HeadVar__4_4);

static void MR_CALL 
mercury__diet__take_max_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__T0_4,
  MR_Tuple * mercury__diet__X_5,
  MR_Word * mercury__diet__T_6);

static void MR_CALL 
mercury__diet__take_min_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__T0_4,
  MR_Tuple * mercury__diet__X_5,
  MR_Word * mercury__diet__T_6);

static MR_Word MR_CALL 
mercury__diet__join_3_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
  MR_Tuple mercury__diet__V_5,
  MR_Word mercury__diet__L_6,
  MR_Word mercury__diet__R_7);

static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(
  MR_Word mercury__diet__IsLeft_5,
  MR_Tuple mercury__diet__X_6,
  MR_Word mercury__diet__T0_7);

static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(
  MR_Tuple mercury__diet__X_5,
  MR_Word mercury__diet__L_6,
  MR_Word mercury__diet__R_7);

static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(
  MR_Tuple mercury__diet__X_5,
  MR_Word mercury__diet__L_6,
  MR_Word mercury__diet__R_7);

static void MR_CALL 
mercury__diet__subset_2_5_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_56,
  MR_Tuple mercury__diet__HeadVar__1_1,
  MR_Word mercury__diet__R1_8,
  MR_Tuple mercury__diet__HeadVar__3_3,
  MR_Word mercury__diet__R2_11,
  MR_Word * mercury__diet__IsSubset_12);

static void MR_CALL 
mercury__diet__member_in_range_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
  MR_Box mercury__diet__Lo_4,
  MR_Box mercury__diet__Hi_5,
  MR_Box * mercury__diet__Elem_6,
  MR_Cont mercury__diet__cont,
  void * mercury__diet__cont_env_ptr);

static void MR_CALL 
mercury__diet__take_min_iter_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_21,
  MR_Word mercury__diet__T0_4,
  MR_Tuple * mercury__diet__X_5,
  MR_Word * mercury__diet__T_6);

static MR_bool MR_CALL 
mercury__diet____Unify____diet_1_0_10001(
  MR_Box mercury__diet__wrapper_arg_1,
  MR_Box mercury__diet__wrapper_arg_2,
  MR_Box mercury__diet__wrapper_arg_3);

static void MR_CALL 
mercury__diet____Compare____diet_1_0_10001(
  MR_Box mercury__diet__wrapper_arg_1,
  MR_Box * mercury__diet__wrapper_arg_2,
  MR_Box mercury__diet__wrapper_arg_3,
  MR_Box mercury__diet__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__diet____Unify____interval_1_0_10001(
  MR_Box mercury__diet__wrapper_arg_1,
  MR_Box mercury__diet__wrapper_arg_2,
  MR_Box mercury__diet__wrapper_arg_3);

static void MR_CALL 
mercury__diet____Compare____interval_1_0_10001(
  MR_Box mercury__diet__wrapper_arg_1,
  MR_Box * mercury__diet__wrapper_arg_2,
  MR_Box mercury__diet__wrapper_arg_3,
  MR_Box mercury__diet__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__less_than_2_2_p_0_10001(
  MR_Box mercury__diet__closure_arg,
  MR_Box mercury__diet__wrapper_arg_1,
  MR_Box mercury__diet__wrapper_arg_2);

static MR_Box MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__successor_1_1_f_0_10001(
  MR_Box mercury__diet__closure_arg,
  MR_Box mercury__diet__wrapper_arg_1);

static MR_Box MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__predecessor_1_1_f_0_10001(
  MR_Box mercury__diet__closure_arg,
  MR_Box mercury__diet__wrapper_arg_1);


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
  MR_Integer mercury__diet__X_3)
{
  {
    MR_Integer mercury__diet__HeadVar__2_2 = (mercury__diet__X_3 - (MR_Integer) 1);

    return mercury__diet__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__successor_1_1_f_0(
  MR_Integer mercury__diet__X_3)
{
  {
    MR_Integer mercury__diet__HeadVar__2_2 = (mercury__diet__X_3 + (MR_Integer) 1);

    return mercury__diet__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__less_than_2_2_p_0(
  MR_Integer mercury__diet__X_3,
  MR_Integer mercury__diet__Y_4)
{
  {
    MR_bool mercury__diet__succeeded = (mercury__diet__X_3 < mercury__diet__Y_4);

    return mercury__diet__succeeded;
  }
}

void MR_CALL 
mercury__diet____Compare____interval_1_0(
  MR_Word mercury__diet__TypeInfo_for_T_6,
  MR_Word * mercury__diet__HeadVar__1_1,
  MR_Tuple mercury__diet__HeadVar__2_2,
  MR_Tuple mercury__diet__HeadVar__3_3)
{
  {
    MR_Word mercury__diet__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
    MR_Word mercury__diet__TypeInfo_9_9;
    MR_Tuple mercury__diet__Cast_HeadVar1_4 = mercury__diet__HeadVar__2_2;
    MR_Tuple mercury__diet__Cast_HeadVar2_5 = mercury__diet__HeadVar__3_3;

    {
      mercury__diet__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_9_9, 0) = ((MR_Box) (mercury__diet__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_9_9, 1) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_9_9, 2) = ((MR_Box) (mercury__diet__TypeInfo_for_T_6));
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_9_9, 3) = ((MR_Box) (mercury__diet__TypeInfo_for_T_6));
    }
    mercury__builtin__compare_3_p_0(mercury__diet__TypeInfo_9_9, mercury__diet__HeadVar__1_1, ((MR_Box) (mercury__diet__Cast_HeadVar1_4)), ((MR_Box) (mercury__diet__Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mercury__diet____Unify____interval_1_0(
  MR_Word mercury__diet__TypeInfo_for_T_5,
  MR_Tuple mercury__diet__HeadVar__1_1,
  MR_Tuple mercury__diet__HeadVar__2_2)
{
  {
    MR_bool mercury__diet__succeeded;
    MR_Word mercury__diet__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
    MR_Word mercury__diet__TypeInfo_8_8;
    MR_Tuple mercury__diet__Cast_HeadVar1_3 = mercury__diet__HeadVar__1_1;
    MR_Tuple mercury__diet__Cast_HeadVar2_4 = mercury__diet__HeadVar__2_2;

    {
      mercury__diet__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_8_8, 0) = ((MR_Box) (mercury__diet__TypeCtorInfo_6_6));
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_8_8, 1) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_8_8, 2) = ((MR_Box) (mercury__diet__TypeInfo_for_T_5));
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_8_8, 3) = ((MR_Box) (mercury__diet__TypeInfo_for_T_5));
    }
    mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_8_8, ((MR_Box) (mercury__diet__Cast_HeadVar1_3)), ((MR_Box) (mercury__diet__Cast_HeadVar2_4)));
    return mercury__diet__succeeded;
  }
}

void MR_CALL 
mercury__diet____Compare____diet_1_0(
  MR_Word mercury__diet__TypeInfo_for_T_25,
  MR_Word * mercury__diet__HeadVar__1_1,
  MR_Word mercury__diet__HeadVar__2_2,
  MR_Word mercury__diet__HeadVar__3_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_Integer mercury__diet__CastX_23 = (MR_Integer) mercury__diet__HeadVar__2_2;
      MR_Integer mercury__diet__CastY_24 = (MR_Integer) mercury__diet__HeadVar__3_3;

      mercury__diet__succeeded = (mercury__diet__CastX_23 == mercury__diet__CastY_24);
      if (mercury__diet__succeeded)
        *mercury__diet__HeadVar__1_1 = (MR_Integer) 0;
      else
      if ((mercury__diet__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        if ((mercury__diet__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__diet__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__diet__HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word mercury__diet__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mercury__diet__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mercury__diet__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
        MR_Tuple mercury__diet__Var_37 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));

        if ((mercury__diet__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__diet__HeadVar__1_1 = (MR_Integer) 2;
        else
        {
          MR_Tuple mercury__diet__ArgY1_13 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__3_3, (MR_Integer) 0)));
          MR_Integer mercury__diet__ArgY2_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__3_3, (MR_Integer) 1)));
          MR_Word mercury__diet__ArgY3_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__3_3, (MR_Integer) 2)));
          MR_Word mercury__diet__ArgY4_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__3_3, (MR_Integer) 3)));
          MR_Word mercury__diet__Var_20;
          MR_Word mercury__diet__TypeCtorInfo_26_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
          MR_Word mercury__diet__TypeInfo_28_28;

          {
            mercury__diet__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_28_28, 0) = ((MR_Box) (mercury__diet__TypeCtorInfo_26_26));
            MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_28_28, 1) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_28_28, 2) = ((MR_Box) (mercury__diet__TypeInfo_for_T_25));
            MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_28_28, 3) = ((MR_Box) (mercury__diet__TypeInfo_for_T_25));
          }
          mercury__builtin__compare_3_p_0(mercury__diet__TypeInfo_28_28, &mercury__diet__Var_20, ((MR_Box) (mercury__diet__Var_37)), ((MR_Box) (mercury__diet__ArgY1_13)));
          mercury__diet__succeeded = (mercury__diet__Var_20 == (MR_Integer) 0);
          mercury__diet__succeeded = !(mercury__diet__succeeded);
          if (mercury__diet__succeeded)
            *mercury__diet__HeadVar__1_1 = mercury__diet__Var_20;
          else
          {
            MR_Word mercury__diet__Var_21;

            mercury__diet__succeeded = (mercury__diet__Var_36 < mercury__diet__ArgY2_15);
            if (mercury__diet__succeeded)
              mercury__diet__Var_21 = (MR_Integer) 1;
            else
            {
              mercury__diet__succeeded = (mercury__diet__Var_36 == mercury__diet__ArgY2_15);
              if (mercury__diet__succeeded)
                mercury__diet__Var_21 = (MR_Integer) 0;
              else
                mercury__diet__Var_21 = (MR_Integer) 2;
            }
            mercury__diet__succeeded = (mercury__diet__Var_21 == (MR_Integer) 0);
            mercury__diet__succeeded = !(mercury__diet__succeeded);
            if (mercury__diet__succeeded)
              *mercury__diet__HeadVar__1_1 = mercury__diet__Var_21;
            else
            {
              MR_Word mercury__diet__Var_22;

              mercury__diet____Compare____diet_1_0(mercury__diet__TypeInfo_for_T_25, &mercury__diet__Var_22, mercury__diet__Var_35, mercury__diet__ArgY3_17);
              mercury__diet__succeeded = (mercury__diet__Var_22 == (MR_Integer) 0);
              mercury__diet__succeeded = !(mercury__diet__succeeded);
              if (mercury__diet__succeeded)
                *mercury__diet__HeadVar__1_1 = mercury__diet__Var_22;
              else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__diet__next_value_of_HeadVar__2_2 = mercury__diet__Var_34;
                  MR_Word mercury__diet__next_value_of_HeadVar__3_3 = mercury__diet__ArgY4_19;

                  mercury__diet__HeadVar__2_2 = mercury__diet__next_value_of_HeadVar__2_2;
                  mercury__diet__HeadVar__3_3 = mercury__diet__next_value_of_HeadVar__3_3;
                }
                continue;
              }
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
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_3,
  MR_Box mercury__diet__HeadVar__1_1)
{
  {
    MR_Box mercury__diet__HeadVar__2_2;
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_3, (MR_Integer) 0)), (MR_Integer) 7)));

    mercury__diet__HeadVar__2_2 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_3), mercury__diet__HeadVar__1_1);
    return mercury__diet__HeadVar__2_2;
  }
}

MR_Box MR_CALL 
mercury__diet__successor_1_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_3,
  MR_Box mercury__diet__HeadVar__1_1)
{
  {
    MR_Box mercury__diet__HeadVar__2_2;
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_3, (MR_Integer) 0)), (MR_Integer) 6)));

    mercury__diet__HeadVar__2_2 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_3), mercury__diet__HeadVar__1_1);
    return mercury__diet__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__diet__less_than_2_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_3,
  MR_Box mercury__diet__HeadVar__1_1,
  MR_Box mercury__diet__HeadVar__2_2)
{
  {
    MR_bool mercury__diet__succeeded;
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_3, (MR_Integer) 0)), (MR_Integer) 5)));

    mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_3), mercury__diet__HeadVar__1_1, mercury__diet__HeadVar__2_2);
    return mercury__diet__succeeded;
  }
}

void MR_CALL 
mercury__diet__cons_interval_4_p_0(
  MR_Word mercury__diet__TypeInfo_for_T_9,
  MR_Box mercury__diet__X_5,
  MR_Box mercury__diet__Y_6,
  MR_Word mercury__diet__L_7,
  MR_Word * mercury__diet__HeadVar__4_4)
{
  {
    MR_Tuple mercury__diet__Var_8;

    {
      mercury__diet__Var_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__diet__Var_8, 0) = mercury__diet__X_5;
      MR_hl_field(MR_mktag(0), mercury__diet__Var_8, 1) = mercury__diet__Y_6;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *mercury__diet__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__Var_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__L_7));
    }
  }
}

void MR_CALL 
mercury__diet__divide_2_6_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_17,
  MR_Word mercury__diet__Pred_7,
  MR_Box mercury__diet__Elem_8,
  MR_Word mercury__diet__STATE_VARIABLE_TrueSet_0_11,
  MR_Word * mercury__diet__STATE_VARIABLE_TrueSet_12,
  MR_Word mercury__diet__STATE_VARIABLE_FalseSet_0_13,
  MR_Word * mercury__diet__STATE_VARIABLE_FalseSet_14)
{
  {
    MR_bool mercury__diet__succeeded;
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__diet__Pred_7, (MR_Integer) 1)));

    mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__Pred_7), mercury__diet__Elem_8);
    if (mercury__diet__succeeded)
    {
      *mercury__diet__STATE_VARIABLE_TrueSet_12 = mercury__diet__add_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_17, mercury__diet__Elem_8, mercury__diet__STATE_VARIABLE_TrueSet_0_11);
      *mercury__diet__STATE_VARIABLE_FalseSet_14 = mercury__diet__STATE_VARIABLE_FalseSet_0_13;
    }
    else
    {
      *mercury__diet__STATE_VARIABLE_FalseSet_14 = mercury__diet__add_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_17, mercury__diet__Elem_8, mercury__diet__STATE_VARIABLE_FalseSet_0_13);
      *mercury__diet__STATE_VARIABLE_TrueSet_12 = mercury__diet__STATE_VARIABLE_TrueSet_0_11;
    }
  }
}

void MR_CALL 
mercury__diet__insert_interval_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
  MR_Tuple mercury__diet__HeadVar__1_1,
  MR_Word mercury__diet__Set0_6,
  MR_Word * mercury__diet__Set_7)
{
  {
    MR_Box mercury__diet__X_4 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 0));
    MR_Box mercury__diet__Y_5 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 1));

    mercury__diet__insert_interval_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__X_4, mercury__diet__Y_5, mercury__diet__Set0_6, mercury__diet__Set_7);
  }
}

MR_Word MR_CALL 
mercury__diet__singleton_1_f_0(
  MR_Word mercury__diet__TypeInfo_for_T_7,
  MR_Tuple mercury__diet__Z_3)
{
  {
    MR_Word mercury__diet__HeadVar__2_2;
    MR_Word mercury__diet__Var_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__diet__Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__diet__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 0) = ((MR_Box) (mercury__diet__Z_3));
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 2) = ((MR_Box) (mercury__diet__Var_5));
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 3) = ((MR_Box) (mercury__diet__Var_6));
    }
    return mercury__diet__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__diet__f_less_or_equal_2_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
  MR_Box mercury__diet__X_3,
  MR_Box mercury__diet__Y_4)
{
  {
    MR_bool mercury__diet__succeeded;
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_5, (MR_Integer) 0)), (MR_Integer) 5)));

    mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_5), mercury__diet__Y_4, mercury__diet__X_3);
    mercury__diet__succeeded = !(mercury__diet__succeeded);
    return mercury__diet__succeeded;
  }
}

void MR_CALL 
mercury__diet__from_interval_list_2_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
  MR_Word mercury__diet__List_3,
  MR_Word * mercury__diet__Set_4)
{
  {
    MR_Word mercury__diet__Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__List_3, mercury__diet__Var_6, mercury__diet__Set_4);
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
  MR_Word mercury__diet__Var_22,
  MR_Word mercury__diet__HeadVar__2_2,
  MR_Word mercury__diet__HeadVar__3_3,
  MR_Word * mercury__diet__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__HeadVar__4_4 = mercury__diet__HeadVar__3_3;
    else
    {
      MR_Tuple mercury__diet__V_10_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__diet__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__diet__V_15_13;
      MR_Box mercury__diet__X_25 = (MR_hl_field(MR_mktag(0), mercury__diet__V_10_9, (MR_Integer) 0));
      MR_Box mercury__diet__Y_26 = (MR_hl_field(MR_mktag(0), mercury__diet__V_10_9, (MR_Integer) 1));

      mercury__diet__insert_interval_4_p_0(mercury__diet__Var_22, mercury__diet__X_25, mercury__diet__Y_26, mercury__diet__HeadVar__3_3, &mercury__diet__V_15_13);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_HeadVar__2_2 = mercury__diet__V_11_10;
        MR_Word mercury__diet__next_value_of_HeadVar__3_3 = mercury__diet__V_15_13;

        mercury__diet__HeadVar__2_2 = mercury__diet__next_value_of_HeadVar__2_2;
        mercury__diet__HeadVar__3_3 = mercury__diet__next_value_of_HeadVar__3_3;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__to_sorted_interval_list_2_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
  MR_Word mercury__diet__Set_3,
  MR_Word * mercury__diet__List_4)
{
  {
    MR_Word mercury__diet__Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__Set_3, mercury__diet__Var_6, mercury__diet__List_4);
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(
  MR_Word mercury__diet__Var_27,
  MR_Word mercury__diet__T_6,
  MR_Word mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Word * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
      MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
      MR_Word mercury__diet__STATE_VARIABLE_Acc_16_16;
      MR_Word mercury__diet__STATE_VARIABLE_Acc_17_17;
      MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(mercury__diet__Var_27, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
      {
        mercury__diet__STATE_VARIABLE_Acc_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__diet__STATE_VARIABLE_Acc_17_17, 0) = ((MR_Box) (mercury__diet__Var_15));
        MR_hl_field(MR_mktag(1), mercury__diet__STATE_VARIABLE_Acc_17_17, 1) = ((MR_Box) (mercury__diet__STATE_VARIABLE_Acc_16_16));
      }
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__L_11;
        MR_Word mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

        mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
        mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__to_sorted_list_2_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
  MR_Word mercury__diet__T_3,
  MR_Word * mercury__diet__List_4)
{
  {
    MR_Word mercury__diet__Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__T_3, mercury__diet__Var_6, mercury__diet__List_4);
  }
}

MR_Word MR_CALL 
mercury__diet__to_sorted_list_1_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
  MR_Word mercury__diet__T_3)
{
  {
    MR_Word mercury__diet__List_4;
    MR_Word mercury__diet__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__T_3, mercury__diet__Var_9, &mercury__diet__List_4);
    return mercury__diet__List_4;
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(
  MR_Word mercury__diet__Var_23,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__T_6,
  MR_Word mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Word * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box mercury__diet__X_8;
      MR_Box mercury__diet__Y_9;
      MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
      MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
      MR_Word mercury__diet__STATE_VARIABLE_Acc_16_16;
      MR_Word mercury__diet__STATE_VARIABLE_Acc_17_17;
      MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

      mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
      mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(mercury__diet__Var_23, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_51_95_95_91_49_44_32_51_44_32_53_93_95_48_5_p_0(mercury__diet__Var_23, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__L_11;
        MR_Word mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

        mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
        mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_51_95_95_91_49_44_32_51_44_32_53_93_95_48_5_p_0(
  MR_Word mercury__diet__Var_19,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
  MR_Box mercury__diet__Lo_7,
  MR_Box mercury__diet__Hi_8,
  MR_Word mercury__diet__STATE_VARIABLE_A_0_10,
  MR_Word * mercury__diet__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Word mercury__diet__STATE_VARIABLE_A_12_12;
        MR_Box mercury__diet__Var_13;
        MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box);

        {
          mercury__diet__STATE_VARIABLE_A_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__diet__STATE_VARIABLE_A_12_12, 0) = mercury__diet__Hi_8;
          MR_hl_field(MR_mktag(1), mercury__diet__STATE_VARIABLE_A_12_12, 1) = ((MR_Box) (mercury__diet__STATE_VARIABLE_A_0_10));
        }
        mercury__diet__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
        mercury__diet__Var_13 = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Hi_8 = mercury__diet__Var_13;
          MR_Word mercury__diet__next_value_of_STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_12_12;

          mercury__diet__Hi_8 = mercury__diet__next_value_of_Hi_8;
          mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_10;
        }
        continue;
      }
      else
        *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__sorted_list_to_set_2_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
  MR_Word mercury__diet__List_3,
  MR_Word * mercury__diet__Set_4)
{
  mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__List_3, mercury__diet__Set_4);
}

MR_Word MR_CALL 
mercury__diet__sorted_list_to_set_1_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
  MR_Word mercury__diet__List_3)
{
  {
    MR_Word mercury__diet__Set_4;

    mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__List_3, &mercury__diet__Set_4);
    return mercury__diet__Set_4;
  }
}

void MR_CALL 
mercury__diet__from_list_2_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
  MR_Word mercury__diet__List_3,
  MR_Word * mercury__diet__Set_4)
{
  mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__List_3, mercury__diet__Set_4);
}

MR_Word MR_CALL 
mercury__diet__from_list_1_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
  MR_Word mercury__diet__List_3)
{
  {
    MR_Word mercury__diet__Set_4;

    mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__List_3, &mercury__diet__Set_4);
    return mercury__diet__Set_4;
  }
}

MR_Word MR_CALL 
mercury__diet__list_to_set_1_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
  MR_Word mercury__diet__List_3)
{
  {
    MR_Word mercury__diet__Set_4;

    mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__List_3, &mercury__diet__Set_4);
    return mercury__diet__Set_4;
  }
}

void MR_CALL 
mercury__diet__filter_4_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_9,
  MR_Word mercury__diet__Pred_5,
  MR_Word mercury__diet__Set_6,
  MR_Word * mercury__diet__TrueSet_7,
  MR_Word * mercury__diet__FalseSet_8)
{
  mercury__diet__divide_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_9, mercury__diet__Pred_5, mercury__diet__Set_6, mercury__diet__TrueSet_7, mercury__diet__FalseSet_8);
}

MR_Word MR_CALL 
mercury__diet__filter_2_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
  MR_Word mercury__diet__Pred_4,
  MR_Word mercury__diet__Set_5)
{
  {
    MR_Word mercury__diet__TrueSet_6;
    MR_Word mercury__diet___FalseSet_7;

    mercury__diet__divide_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__Pred_4, mercury__diet__Set_5, &mercury__diet__TrueSet_6, &mercury__diet___FalseSet_7);
    return mercury__diet__TrueSet_6;
  }
}

MR_bool MR_CALL 
mercury__diet__all_true_2_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_11,
  MR_Word mercury__diet__P_3,
  MR_Word mercury__diet__Set_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__Set_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        mercury__diet__succeeded = MR_TRUE;
      else
      {
        MR_Box mercury__diet__X_5;
        MR_Box mercury__diet__Y_6;
        MR_Word mercury__diet__L_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_4, (MR_Integer) 2)));
        MR_Word mercury__diet__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_4, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_10 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set_4, (MR_Integer) 0)));
        MR_Integer mercury__diet__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set_4, (MR_Integer) 1)));

        mercury__diet__X_5 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_10, (MR_Integer) 0));
        mercury__diet__Y_6 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_10, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__all_true_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_11, mercury__diet__P_3, mercury__diet__L_8);
        if (mercury__diet__succeeded)
        {
          mercury__diet__succeeded = mercury__diet__all_true_interval_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_11, mercury__diet__P_3, mercury__diet__X_5, mercury__diet__Y_6);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_Set_4 = mercury__diet__R_9;

              mercury__diet__Set_4 = mercury__diet__next_value_of_Set_4;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__all_true_interval_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
  MR_Word mercury__diet__P_4,
  MR_Box mercury__diet__Lo_5,
  MR_Box mercury__diet__Hi_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_8, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_8), mercury__diet__Hi_6, mercury__diet__Lo_5);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__Var_7;
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__diet__P_4, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_4), mercury__diet__Lo_5);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_8, (MR_Integer) 0)), (MR_Integer) 6)));
          mercury__diet__Var_7 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_8), mercury__diet__Lo_5);
          /* direct tailcall eliminated */
          {
            MR_Box mercury__diet__next_value_of_Lo_5 = mercury__diet__Var_7;

            mercury__diet__Lo_5 = mercury__diet__next_value_of_Lo_5;
          }
          continue;
        }
      }
      else
        mercury__diet__succeeded = MR_TRUE;
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldr_4_p_5(
  MR_Word mercury__diet__TypeInfo_for_A_20,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__P_5,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
        mercury__diet__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__diet__X_8;
        MR_Box mercury__diet__Y_9;
        MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
        MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
        MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
        MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
        MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

        mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
        mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__foldr_4_p_5(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
        if (mercury__diet__succeeded)
        {
          mercury__diet__succeeded = mercury__diet__fold_down_5_p_5(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__L_11;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

              mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_down_5_p_5(
  MR_Word mercury__diet__TypeInfo_for_A_16,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
  MR_Word mercury__diet__P_6,
  MR_Box mercury__diet__Lo_7,
  MR_Box mercury__diet__Hi_8,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
        MR_Box mercury__diet__Var_13;
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_12_12);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
          mercury__diet__Var_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
          /* direct tailcall eliminated */
          {
            MR_Box mercury__diet__next_value_of_Hi_8 = mercury__diet__Var_13;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_12_12;

            mercury__diet__Hi_8 = mercury__diet__next_value_of_Hi_8;
            mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_10;
          }
          continue;
        }
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
        mercury__diet__succeeded = MR_TRUE;
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldr_4_p_4(
  MR_Word mercury__diet__TypeInfo_for_A_20,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__P_5,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
        mercury__diet__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__diet__X_8;
        MR_Box mercury__diet__Y_9;
        MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
        MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
        MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
        MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
        MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

        mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
        mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__foldr_4_p_4(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
        if (mercury__diet__succeeded)
        {
          mercury__diet__succeeded = mercury__diet__fold_down_5_p_4(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__L_11;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

              mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_down_5_p_4(
  MR_Word mercury__diet__TypeInfo_for_A_16,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
  MR_Word mercury__diet__P_6,
  MR_Box mercury__diet__Lo_7,
  MR_Box mercury__diet__Hi_8,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
        MR_Box mercury__diet__Var_13;
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_12_12);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
          mercury__diet__Var_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
          /* direct tailcall eliminated */
          {
            MR_Box mercury__diet__next_value_of_Hi_8 = mercury__diet__Var_13;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_12_12;

            mercury__diet__Hi_8 = mercury__diet__next_value_of_Hi_8;
            mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_10;
          }
          continue;
        }
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
        mercury__diet__succeeded = MR_TRUE;
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldr_4_p_3(
  MR_Word mercury__diet__TypeInfo_for_A_20,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__P_5,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
        mercury__diet__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__diet__X_8;
        MR_Box mercury__diet__Y_9;
        MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
        MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
        MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
        MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
        MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

        mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
        mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__foldr_4_p_3(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
        if (mercury__diet__succeeded)
        {
          mercury__diet__succeeded = mercury__diet__fold_down_5_p_3(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__L_11;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

              mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_down_5_p_3(
  MR_Word mercury__diet__TypeInfo_for_A_16,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
  MR_Word mercury__diet__P_6,
  MR_Box mercury__diet__Lo_7,
  MR_Box mercury__diet__Hi_8,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
        MR_Box mercury__diet__Var_13;
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_12_12);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
          mercury__diet__Var_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
          /* direct tailcall eliminated */
          {
            MR_Box mercury__diet__next_value_of_Hi_8 = mercury__diet__Var_13;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_12_12;

            mercury__diet__Hi_8 = mercury__diet__next_value_of_Hi_8;
            mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_10;
          }
          continue;
        }
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
        mercury__diet__succeeded = MR_TRUE;
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldr_4_p_2(
  MR_Word mercury__diet__TypeInfo_for_A_20,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__P_5,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box mercury__diet__X_8;
      MR_Box mercury__diet__Y_9;
      MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
      MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
      MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
      MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

      mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
      mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
      mercury__diet__foldr_4_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
      mercury__diet__fold_down_5_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__L_11;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

        mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
        mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_down_5_p_2(
  MR_Word mercury__diet__TypeInfo_for_A_16,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
  MR_Word mercury__diet__P_6,
  MR_Box mercury__diet__Lo_7,
  MR_Box mercury__diet__Hi_8,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
        MR_Box mercury__diet__Var_13;
        void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_12_12);
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
        mercury__diet__Var_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Hi_8 = mercury__diet__Var_13;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_12_12;

          mercury__diet__Hi_8 = mercury__diet__next_value_of_Hi_8;
          mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_10;
        }
        continue;
      }
      else
        *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldr_4_p_1(
  MR_Word mercury__diet__TypeInfo_for_A_20,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__P_5,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box mercury__diet__X_8;
      MR_Box mercury__diet__Y_9;
      MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
      MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
      MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
      MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

      mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
      mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
      mercury__diet__foldr_4_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
      mercury__diet__fold_down_5_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__L_11;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

        mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
        mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_down_5_p_1(
  MR_Word mercury__diet__TypeInfo_for_A_16,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
  MR_Word mercury__diet__P_6,
  MR_Box mercury__diet__Lo_7,
  MR_Box mercury__diet__Hi_8,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
        MR_Box mercury__diet__Var_13;
        void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_12_12);
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
        mercury__diet__Var_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Hi_8 = mercury__diet__Var_13;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_12_12;

          mercury__diet__Hi_8 = mercury__diet__next_value_of_Hi_8;
          mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_10;
        }
        continue;
      }
      else
        *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldr_4_p_0(
  MR_Word mercury__diet__TypeInfo_for_A_20,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__P_5,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box mercury__diet__X_8;
      MR_Box mercury__diet__Y_9;
      MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
      MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
      MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
      MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

      mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
      mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
      mercury__diet__foldr_4_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
      mercury__diet__fold_down_5_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__L_11;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

        mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
        mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_down_5_p_0(
  MR_Word mercury__diet__TypeInfo_for_A_16,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
  MR_Word mercury__diet__P_6,
  MR_Box mercury__diet__Lo_7,
  MR_Box mercury__diet__Hi_8,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
        MR_Box mercury__diet__Var_13;
        void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_12_12);
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
        mercury__diet__Var_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Hi_8 = mercury__diet__Var_13;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_12_12;

          mercury__diet__Hi_8 = mercury__diet__next_value_of_Hi_8;
          mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_10;
        }
        continue;
      }
      else
        *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__diet__foldr_3_f_0(
  MR_Word mercury__diet__TypeInfo_for_A_20,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__F_5,
  MR_Word mercury__diet__Set_6,
  MR_Box mercury__diet__Acc0_7)
{
  {
    MR_Box mercury__diet__Acc_8;

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(mercury__diet__F_5, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__Set_6, mercury__diet__Acc0_7, &mercury__diet__Acc_8);
    return mercury__diet__Acc_8;
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(
  MR_Word mercury__diet__Var_23,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box mercury__diet__X_8;
      MR_Box mercury__diet__Y_9;
      MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
      MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
      MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
      MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

      mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
      mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(mercury__diet__Var_23, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(mercury__diet__Var_23, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__L_11;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

        mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
        mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
  MR_Word mercury__diet__Var_19,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
  MR_Box mercury__diet__Lo_7,
  MR_Box mercury__diet__Hi_8,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
        MR_Box mercury__diet__Var_13;
        MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__diet__Var_19, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__STATE_VARIABLE_A_12_12 = mercury__diet__func_1(((MR_Box) mercury__diet__Var_19), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10);
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
        mercury__diet__Var_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Hi_8 = mercury__diet__Var_13;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_12_12;

          mercury__diet__Hi_8 = mercury__diet__next_value_of_Hi_8;
          mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_10;
        }
        continue;
      }
      else
        *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl5_12_p_5(
  MR_Word mercury__diet__TypeInfo_for_A_52,
  MR_Word mercury__diet__TypeInfo_for_B_53,
  MR_Word mercury__diet__TypeInfo_for_C_54,
  MR_Word mercury__diet__TypeInfo_for_D_55,
  MR_Word mercury__diet__TypeInfo_for_E_56,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_51,
  MR_Word mercury__diet__P_13,
  MR_Word mercury__diet__T_14,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_25,
  MR_Box * mercury__diet__STATE_VARIABLE_A_26,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_27,
  MR_Box * mercury__diet__STATE_VARIABLE_B_28,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_29,
  MR_Box * mercury__diet__STATE_VARIABLE_C_30,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_31,
  MR_Box * mercury__diet__STATE_VARIABLE_D_32,
  MR_Box mercury__diet__STATE_VARIABLE_E_0_33,
  MR_Box * mercury__diet__STATE_VARIABLE_E_34)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
        *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
        *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
        *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
        *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
        mercury__diet__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__diet__X_20;
        MR_Box mercury__diet__Y_21;
        MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
        MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
        MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
        MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
        MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
        MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
        MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
        MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
        MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
        MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
        MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
        MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
        MR_Integer mercury__diet__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

        mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_35, (MR_Integer) 0));
        mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_35, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__foldl5_12_p_5(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
        if (mercury__diet__succeeded)
        {
          mercury__diet__succeeded = mercury__diet__fold_up5_13_p_5(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_14 = mercury__diet__R_24;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_41_41;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_42_42;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_43_43;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_44_44;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_45_45;

              mercury__diet__T_14 = mercury__diet__next_value_of_T_14;
              mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_25;
              mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_27;
              mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_29;
              mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_31;
              mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__next_value_of_STATE_VARIABLE_E_0_33;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up5_13_p_5(
  MR_Word mercury__diet__TypeInfo_for_A_44,
  MR_Word mercury__diet__TypeInfo_for_B_45,
  MR_Word mercury__diet__TypeInfo_for_C_46,
  MR_Word mercury__diet__TypeInfo_for_D_47,
  MR_Word mercury__diet__TypeInfo_for_E_48,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
  MR_Word mercury__diet__P_14,
  MR_Box mercury__diet__Lo_15,
  MR_Box mercury__diet__Hi_16,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Hi_16, mercury__diet__Lo_15);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_32_32;
        MR_Box mercury__diet__STATE_VARIABLE_B_33_33;
        MR_Box mercury__diet__STATE_VARIABLE_C_34_34;
        MR_Box mercury__diet__STATE_VARIABLE_D_35_35;
        MR_Box mercury__diet__STATE_VARIABLE_E_36_36;
        MR_Box mercury__diet__Var_37;
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_14), mercury__diet__Lo_15, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_32_32, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_33_33, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_34_34, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_35_35, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_36_36);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
          mercury__diet__Var_37 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Lo_15);
          /* direct tailcall eliminated */
          {
            MR_Box mercury__diet__next_value_of_Lo_15 = mercury__diet__Var_37;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_32_32;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_33_33;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_34_34;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_35_35;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_36_36;

            mercury__diet__Lo_15 = mercury__diet__next_value_of_Lo_15;
            mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_22;
            mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_24;
            mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_26;
            mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_28;
            mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__next_value_of_STATE_VARIABLE_E_0_30;
          }
          continue;
        }
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
        *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
        *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
        *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
        *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
        mercury__diet__succeeded = MR_TRUE;
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl5_12_p_4(
  MR_Word mercury__diet__TypeInfo_for_A_52,
  MR_Word mercury__diet__TypeInfo_for_B_53,
  MR_Word mercury__diet__TypeInfo_for_C_54,
  MR_Word mercury__diet__TypeInfo_for_D_55,
  MR_Word mercury__diet__TypeInfo_for_E_56,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_51,
  MR_Word mercury__diet__P_13,
  MR_Word mercury__diet__T_14,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_25,
  MR_Box * mercury__diet__STATE_VARIABLE_A_26,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_27,
  MR_Box * mercury__diet__STATE_VARIABLE_B_28,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_29,
  MR_Box * mercury__diet__STATE_VARIABLE_C_30,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_31,
  MR_Box * mercury__diet__STATE_VARIABLE_D_32,
  MR_Box mercury__diet__STATE_VARIABLE_E_0_33,
  MR_Box * mercury__diet__STATE_VARIABLE_E_34)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
        *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
        *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
        *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
        *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
        mercury__diet__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__diet__X_20;
        MR_Box mercury__diet__Y_21;
        MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
        MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
        MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
        MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
        MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
        MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
        MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
        MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
        MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
        MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
        MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
        MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
        MR_Integer mercury__diet__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

        mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_35, (MR_Integer) 0));
        mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_35, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__foldl5_12_p_4(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
        if (mercury__diet__succeeded)
        {
          mercury__diet__succeeded = mercury__diet__fold_up5_13_p_4(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_14 = mercury__diet__R_24;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_41_41;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_42_42;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_43_43;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_44_44;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_45_45;

              mercury__diet__T_14 = mercury__diet__next_value_of_T_14;
              mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_25;
              mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_27;
              mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_29;
              mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_31;
              mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__next_value_of_STATE_VARIABLE_E_0_33;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up5_13_p_4(
  MR_Word mercury__diet__TypeInfo_for_A_44,
  MR_Word mercury__diet__TypeInfo_for_B_45,
  MR_Word mercury__diet__TypeInfo_for_C_46,
  MR_Word mercury__diet__TypeInfo_for_D_47,
  MR_Word mercury__diet__TypeInfo_for_E_48,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
  MR_Word mercury__diet__P_14,
  MR_Box mercury__diet__Lo_15,
  MR_Box mercury__diet__Hi_16,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Hi_16, mercury__diet__Lo_15);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_32_32;
        MR_Box mercury__diet__STATE_VARIABLE_B_33_33;
        MR_Box mercury__diet__STATE_VARIABLE_C_34_34;
        MR_Box mercury__diet__STATE_VARIABLE_D_35_35;
        MR_Box mercury__diet__STATE_VARIABLE_E_36_36;
        MR_Box mercury__diet__Var_37;
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_14), mercury__diet__Lo_15, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_32_32, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_33_33, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_34_34, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_35_35, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_36_36);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
          mercury__diet__Var_37 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Lo_15);
          /* direct tailcall eliminated */
          {
            MR_Box mercury__diet__next_value_of_Lo_15 = mercury__diet__Var_37;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_32_32;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_33_33;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_34_34;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_35_35;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_36_36;

            mercury__diet__Lo_15 = mercury__diet__next_value_of_Lo_15;
            mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_22;
            mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_24;
            mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_26;
            mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_28;
            mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__next_value_of_STATE_VARIABLE_E_0_30;
          }
          continue;
        }
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
        *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
        *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
        *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
        *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
        mercury__diet__succeeded = MR_TRUE;
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl5_12_p_3(
  MR_Word mercury__diet__TypeInfo_for_A_52,
  MR_Word mercury__diet__TypeInfo_for_B_53,
  MR_Word mercury__diet__TypeInfo_for_C_54,
  MR_Word mercury__diet__TypeInfo_for_D_55,
  MR_Word mercury__diet__TypeInfo_for_E_56,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_51,
  MR_Word mercury__diet__P_13,
  MR_Word mercury__diet__T_14,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_25,
  MR_Box * mercury__diet__STATE_VARIABLE_A_26,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_27,
  MR_Box * mercury__diet__STATE_VARIABLE_B_28,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_29,
  MR_Box * mercury__diet__STATE_VARIABLE_C_30,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_31,
  MR_Box * mercury__diet__STATE_VARIABLE_D_32,
  MR_Box mercury__diet__STATE_VARIABLE_E_0_33,
  MR_Box * mercury__diet__STATE_VARIABLE_E_34)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
        *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
        *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
        *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
        *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
        mercury__diet__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__diet__X_20;
        MR_Box mercury__diet__Y_21;
        MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
        MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
        MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
        MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
        MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
        MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
        MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
        MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
        MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
        MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
        MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
        MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
        MR_Integer mercury__diet__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

        mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_35, (MR_Integer) 0));
        mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_35, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__foldl5_12_p_3(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
        if (mercury__diet__succeeded)
        {
          mercury__diet__succeeded = mercury__diet__fold_up5_13_p_3(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_14 = mercury__diet__R_24;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_41_41;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_42_42;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_43_43;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_44_44;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_45_45;

              mercury__diet__T_14 = mercury__diet__next_value_of_T_14;
              mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_25;
              mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_27;
              mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_29;
              mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_31;
              mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__next_value_of_STATE_VARIABLE_E_0_33;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up5_13_p_3(
  MR_Word mercury__diet__TypeInfo_for_A_44,
  MR_Word mercury__diet__TypeInfo_for_B_45,
  MR_Word mercury__diet__TypeInfo_for_C_46,
  MR_Word mercury__diet__TypeInfo_for_D_47,
  MR_Word mercury__diet__TypeInfo_for_E_48,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
  MR_Word mercury__diet__P_14,
  MR_Box mercury__diet__Lo_15,
  MR_Box mercury__diet__Hi_16,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Hi_16, mercury__diet__Lo_15);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_32_32;
        MR_Box mercury__diet__STATE_VARIABLE_B_33_33;
        MR_Box mercury__diet__STATE_VARIABLE_C_34_34;
        MR_Box mercury__diet__STATE_VARIABLE_D_35_35;
        MR_Box mercury__diet__STATE_VARIABLE_E_36_36;
        MR_Box mercury__diet__Var_37;
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_14), mercury__diet__Lo_15, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_32_32, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_33_33, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_34_34, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_35_35, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_36_36);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
          mercury__diet__Var_37 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Lo_15);
          /* direct tailcall eliminated */
          {
            MR_Box mercury__diet__next_value_of_Lo_15 = mercury__diet__Var_37;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_32_32;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_33_33;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_34_34;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_35_35;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_36_36;

            mercury__diet__Lo_15 = mercury__diet__next_value_of_Lo_15;
            mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_22;
            mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_24;
            mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_26;
            mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_28;
            mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__next_value_of_STATE_VARIABLE_E_0_30;
          }
          continue;
        }
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
        *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
        *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
        *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
        *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
        mercury__diet__succeeded = MR_TRUE;
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl5_12_p_2(
  MR_Word mercury__diet__TypeInfo_for_A_52,
  MR_Word mercury__diet__TypeInfo_for_B_53,
  MR_Word mercury__diet__TypeInfo_for_C_54,
  MR_Word mercury__diet__TypeInfo_for_D_55,
  MR_Word mercury__diet__TypeInfo_for_E_56,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_51,
  MR_Word mercury__diet__P_13,
  MR_Word mercury__diet__T_14,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_25,
  MR_Box * mercury__diet__STATE_VARIABLE_A_26,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_27,
  MR_Box * mercury__diet__STATE_VARIABLE_B_28,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_29,
  MR_Box * mercury__diet__STATE_VARIABLE_C_30,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_31,
  MR_Box * mercury__diet__STATE_VARIABLE_D_32,
  MR_Box mercury__diet__STATE_VARIABLE_E_0_33,
  MR_Box * mercury__diet__STATE_VARIABLE_E_34)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
      *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
      *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
      *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
      *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
    }
    else
    {
      MR_Box mercury__diet__X_20;
      MR_Box mercury__diet__Y_21;
      MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
      MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
      MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
      MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
      MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
      MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
      MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
      MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
      MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
      MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
      MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
      MR_Integer mercury__diet__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

      mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_35, (MR_Integer) 0));
      mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_35, (MR_Integer) 1));
      mercury__diet__foldl5_12_p_2(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
      mercury__diet__fold_up5_13_p_2(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_14 = mercury__diet__R_24;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_41_41;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_42_42;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_43_43;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_44_44;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_45_45;

        mercury__diet__T_14 = mercury__diet__next_value_of_T_14;
        mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_25;
        mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_27;
        mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_29;
        mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_31;
        mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__next_value_of_STATE_VARIABLE_E_0_33;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up5_13_p_2(
  MR_Word mercury__diet__TypeInfo_for_A_44,
  MR_Word mercury__diet__TypeInfo_for_B_45,
  MR_Word mercury__diet__TypeInfo_for_C_46,
  MR_Word mercury__diet__TypeInfo_for_D_47,
  MR_Word mercury__diet__TypeInfo_for_E_48,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
  MR_Word mercury__diet__P_14,
  MR_Box mercury__diet__Lo_15,
  MR_Box mercury__diet__Hi_16,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Hi_16, mercury__diet__Lo_15);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_32_32;
        MR_Box mercury__diet__STATE_VARIABLE_B_33_33;
        MR_Box mercury__diet__STATE_VARIABLE_C_34_34;
        MR_Box mercury__diet__STATE_VARIABLE_D_35_35;
        MR_Box mercury__diet__STATE_VARIABLE_E_36_36;
        MR_Box mercury__diet__Var_37;
        void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__func_1(((MR_Box) mercury__diet__P_14), mercury__diet__Lo_15, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_32_32, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_33_33, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_34_34, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_35_35, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_36_36);
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
        mercury__diet__Var_37 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Lo_15);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Lo_15 = mercury__diet__Var_37;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_32_32;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_33_33;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_34_34;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_35_35;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_36_36;

          mercury__diet__Lo_15 = mercury__diet__next_value_of_Lo_15;
          mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_22;
          mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_24;
          mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_26;
          mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_28;
          mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__next_value_of_STATE_VARIABLE_E_0_30;
        }
        continue;
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
        *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
        *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
        *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
        *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl5_12_p_1(
  MR_Word mercury__diet__TypeInfo_for_A_52,
  MR_Word mercury__diet__TypeInfo_for_B_53,
  MR_Word mercury__diet__TypeInfo_for_C_54,
  MR_Word mercury__diet__TypeInfo_for_D_55,
  MR_Word mercury__diet__TypeInfo_for_E_56,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_51,
  MR_Word mercury__diet__P_13,
  MR_Word mercury__diet__T_14,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_25,
  MR_Box * mercury__diet__STATE_VARIABLE_A_26,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_27,
  MR_Box * mercury__diet__STATE_VARIABLE_B_28,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_29,
  MR_Box * mercury__diet__STATE_VARIABLE_C_30,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_31,
  MR_Box * mercury__diet__STATE_VARIABLE_D_32,
  MR_Box mercury__diet__STATE_VARIABLE_E_0_33,
  MR_Box * mercury__diet__STATE_VARIABLE_E_34)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
      *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
      *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
      *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
      *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
    }
    else
    {
      MR_Box mercury__diet__X_20;
      MR_Box mercury__diet__Y_21;
      MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
      MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
      MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
      MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
      MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
      MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
      MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
      MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
      MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
      MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
      MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
      MR_Integer mercury__diet__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

      mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_35, (MR_Integer) 0));
      mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_35, (MR_Integer) 1));
      mercury__diet__foldl5_12_p_1(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
      mercury__diet__fold_up5_13_p_1(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_14 = mercury__diet__R_24;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_41_41;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_42_42;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_43_43;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_44_44;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_45_45;

        mercury__diet__T_14 = mercury__diet__next_value_of_T_14;
        mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_25;
        mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_27;
        mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_29;
        mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_31;
        mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__next_value_of_STATE_VARIABLE_E_0_33;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up5_13_p_1(
  MR_Word mercury__diet__TypeInfo_for_A_44,
  MR_Word mercury__diet__TypeInfo_for_B_45,
  MR_Word mercury__diet__TypeInfo_for_C_46,
  MR_Word mercury__diet__TypeInfo_for_D_47,
  MR_Word mercury__diet__TypeInfo_for_E_48,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
  MR_Word mercury__diet__P_14,
  MR_Box mercury__diet__Lo_15,
  MR_Box mercury__diet__Hi_16,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Hi_16, mercury__diet__Lo_15);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_32_32;
        MR_Box mercury__diet__STATE_VARIABLE_B_33_33;
        MR_Box mercury__diet__STATE_VARIABLE_C_34_34;
        MR_Box mercury__diet__STATE_VARIABLE_D_35_35;
        MR_Box mercury__diet__STATE_VARIABLE_E_36_36;
        MR_Box mercury__diet__Var_37;
        void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__func_1(((MR_Box) mercury__diet__P_14), mercury__diet__Lo_15, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_32_32, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_33_33, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_34_34, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_35_35, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_36_36);
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
        mercury__diet__Var_37 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Lo_15);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Lo_15 = mercury__diet__Var_37;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_32_32;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_33_33;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_34_34;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_35_35;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_36_36;

          mercury__diet__Lo_15 = mercury__diet__next_value_of_Lo_15;
          mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_22;
          mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_24;
          mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_26;
          mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_28;
          mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__next_value_of_STATE_VARIABLE_E_0_30;
        }
        continue;
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
        *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
        *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
        *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
        *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl5_12_p_0(
  MR_Word mercury__diet__TypeInfo_for_A_52,
  MR_Word mercury__diet__TypeInfo_for_B_53,
  MR_Word mercury__diet__TypeInfo_for_C_54,
  MR_Word mercury__diet__TypeInfo_for_D_55,
  MR_Word mercury__diet__TypeInfo_for_E_56,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_51,
  MR_Word mercury__diet__P_13,
  MR_Word mercury__diet__T_14,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_25,
  MR_Box * mercury__diet__STATE_VARIABLE_A_26,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_27,
  MR_Box * mercury__diet__STATE_VARIABLE_B_28,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_29,
  MR_Box * mercury__diet__STATE_VARIABLE_C_30,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_31,
  MR_Box * mercury__diet__STATE_VARIABLE_D_32,
  MR_Box mercury__diet__STATE_VARIABLE_E_0_33,
  MR_Box * mercury__diet__STATE_VARIABLE_E_34)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
      *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
      *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
      *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
      *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
    }
    else
    {
      MR_Box mercury__diet__X_20;
      MR_Box mercury__diet__Y_21;
      MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
      MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
      MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
      MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
      MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
      MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
      MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
      MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
      MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
      MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
      MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
      MR_Integer mercury__diet__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

      mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_35, (MR_Integer) 0));
      mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_35, (MR_Integer) 1));
      mercury__diet__foldl5_12_p_0(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
      mercury__diet__fold_up5_13_p_0(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_14 = mercury__diet__R_24;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_41_41;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_42_42;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_43_43;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_44_44;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_45_45;

        mercury__diet__T_14 = mercury__diet__next_value_of_T_14;
        mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_25;
        mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_27;
        mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_29;
        mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_31;
        mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__next_value_of_STATE_VARIABLE_E_0_33;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up5_13_p_0(
  MR_Word mercury__diet__TypeInfo_for_A_44,
  MR_Word mercury__diet__TypeInfo_for_B_45,
  MR_Word mercury__diet__TypeInfo_for_C_46,
  MR_Word mercury__diet__TypeInfo_for_D_47,
  MR_Word mercury__diet__TypeInfo_for_E_48,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
  MR_Word mercury__diet__P_14,
  MR_Box mercury__diet__Lo_15,
  MR_Box mercury__diet__Hi_16,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Hi_16, mercury__diet__Lo_15);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_32_32;
        MR_Box mercury__diet__STATE_VARIABLE_B_33_33;
        MR_Box mercury__diet__STATE_VARIABLE_C_34_34;
        MR_Box mercury__diet__STATE_VARIABLE_D_35_35;
        MR_Box mercury__diet__STATE_VARIABLE_E_36_36;
        MR_Box mercury__diet__Var_37;
        void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__func_1(((MR_Box) mercury__diet__P_14), mercury__diet__Lo_15, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_32_32, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_33_33, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_34_34, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_35_35, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_36_36);
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
        mercury__diet__Var_37 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Lo_15);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Lo_15 = mercury__diet__Var_37;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_32_32;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_33_33;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_34_34;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_35_35;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_36_36;

          mercury__diet__Lo_15 = mercury__diet__next_value_of_Lo_15;
          mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_22;
          mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_24;
          mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_26;
          mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_28;
          mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__next_value_of_STATE_VARIABLE_E_0_30;
        }
        continue;
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
        *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
        *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
        *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
        *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl4_10_p_5(
  MR_Word mercury__diet__TypeInfo_for_A_44,
  MR_Word mercury__diet__TypeInfo_for_B_45,
  MR_Word mercury__diet__TypeInfo_for_C_46,
  MR_Word mercury__diet__TypeInfo_for_D_47,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
  MR_Word mercury__diet__P_11,
  MR_Word mercury__diet__T_12,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__diet__STATE_VARIABLE_D_29)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
        *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
        *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
        *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
        mercury__diet__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__diet__X_17;
        MR_Box mercury__diet__Y_18;
        MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
        MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
        MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
        MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
        MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
        MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
        MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
        MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
        MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
        MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
        MR_Integer mercury__diet__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

        mercury__diet__X_17 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_30, (MR_Integer) 0));
        mercury__diet__Y_18 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_30, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__foldl4_10_p_5(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
        if (mercury__diet__succeeded)
        {
          mercury__diet__succeeded = mercury__diet__fold_up4_11_p_5(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_12 = mercury__diet__R_21;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_35_35;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_36_36;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_37_37;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_38_38;

              mercury__diet__T_12 = mercury__diet__next_value_of_T_12;
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_22;
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_24;
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_26;
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_28;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up4_11_p_5(
  MR_Word mercury__diet__TypeInfo_for_A_37,
  MR_Word mercury__diet__TypeInfo_for_B_38,
  MR_Word mercury__diet__TypeInfo_for_C_39,
  MR_Word mercury__diet__TypeInfo_for_D_40,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_36,
  MR_Word mercury__diet__P_12,
  MR_Box mercury__diet__Lo_13,
  MR_Box mercury__diet__Hi_14,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Hi_14, mercury__diet__Lo_13);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_27_27;
        MR_Box mercury__diet__STATE_VARIABLE_B_28_28;
        MR_Box mercury__diet__STATE_VARIABLE_C_29_29;
        MR_Box mercury__diet__STATE_VARIABLE_D_30_30;
        MR_Box mercury__diet__Var_31;
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_12), mercury__diet__Lo_13, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_27_27, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_28_28, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_29_29, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_30_30);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
          mercury__diet__Var_31 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Lo_13);
          /* direct tailcall eliminated */
          {
            MR_Box mercury__diet__next_value_of_Lo_13 = mercury__diet__Var_31;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_27_27;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_28_28;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_29_29;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_30_30;

            mercury__diet__Lo_13 = mercury__diet__next_value_of_Lo_13;
            mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_19;
            mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_21;
            mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_23;
            mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_25;
          }
          continue;
        }
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
        *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
        *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
        *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
        mercury__diet__succeeded = MR_TRUE;
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl4_10_p_4(
  MR_Word mercury__diet__TypeInfo_for_A_44,
  MR_Word mercury__diet__TypeInfo_for_B_45,
  MR_Word mercury__diet__TypeInfo_for_C_46,
  MR_Word mercury__diet__TypeInfo_for_D_47,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
  MR_Word mercury__diet__P_11,
  MR_Word mercury__diet__T_12,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__diet__STATE_VARIABLE_D_29)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
        *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
        *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
        *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
        mercury__diet__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__diet__X_17;
        MR_Box mercury__diet__Y_18;
        MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
        MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
        MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
        MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
        MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
        MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
        MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
        MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
        MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
        MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
        MR_Integer mercury__diet__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

        mercury__diet__X_17 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_30, (MR_Integer) 0));
        mercury__diet__Y_18 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_30, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__foldl4_10_p_4(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
        if (mercury__diet__succeeded)
        {
          mercury__diet__succeeded = mercury__diet__fold_up4_11_p_4(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_12 = mercury__diet__R_21;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_35_35;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_36_36;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_37_37;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_38_38;

              mercury__diet__T_12 = mercury__diet__next_value_of_T_12;
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_22;
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_24;
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_26;
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_28;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up4_11_p_4(
  MR_Word mercury__diet__TypeInfo_for_A_37,
  MR_Word mercury__diet__TypeInfo_for_B_38,
  MR_Word mercury__diet__TypeInfo_for_C_39,
  MR_Word mercury__diet__TypeInfo_for_D_40,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_36,
  MR_Word mercury__diet__P_12,
  MR_Box mercury__diet__Lo_13,
  MR_Box mercury__diet__Hi_14,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Hi_14, mercury__diet__Lo_13);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_27_27;
        MR_Box mercury__diet__STATE_VARIABLE_B_28_28;
        MR_Box mercury__diet__STATE_VARIABLE_C_29_29;
        MR_Box mercury__diet__STATE_VARIABLE_D_30_30;
        MR_Box mercury__diet__Var_31;
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_12), mercury__diet__Lo_13, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_27_27, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_28_28, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_29_29, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_30_30);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
          mercury__diet__Var_31 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Lo_13);
          /* direct tailcall eliminated */
          {
            MR_Box mercury__diet__next_value_of_Lo_13 = mercury__diet__Var_31;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_27_27;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_28_28;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_29_29;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_30_30;

            mercury__diet__Lo_13 = mercury__diet__next_value_of_Lo_13;
            mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_19;
            mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_21;
            mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_23;
            mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_25;
          }
          continue;
        }
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
        *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
        *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
        *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
        mercury__diet__succeeded = MR_TRUE;
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl4_10_p_3(
  MR_Word mercury__diet__TypeInfo_for_A_44,
  MR_Word mercury__diet__TypeInfo_for_B_45,
  MR_Word mercury__diet__TypeInfo_for_C_46,
  MR_Word mercury__diet__TypeInfo_for_D_47,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
  MR_Word mercury__diet__P_11,
  MR_Word mercury__diet__T_12,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__diet__STATE_VARIABLE_D_29)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
        *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
        *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
        *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
        mercury__diet__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__diet__X_17;
        MR_Box mercury__diet__Y_18;
        MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
        MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
        MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
        MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
        MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
        MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
        MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
        MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
        MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
        MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
        MR_Integer mercury__diet__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

        mercury__diet__X_17 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_30, (MR_Integer) 0));
        mercury__diet__Y_18 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_30, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__foldl4_10_p_3(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
        if (mercury__diet__succeeded)
        {
          mercury__diet__succeeded = mercury__diet__fold_up4_11_p_3(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_12 = mercury__diet__R_21;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_35_35;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_36_36;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_37_37;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_38_38;

              mercury__diet__T_12 = mercury__diet__next_value_of_T_12;
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_22;
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_24;
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_26;
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_28;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up4_11_p_3(
  MR_Word mercury__diet__TypeInfo_for_A_37,
  MR_Word mercury__diet__TypeInfo_for_B_38,
  MR_Word mercury__diet__TypeInfo_for_C_39,
  MR_Word mercury__diet__TypeInfo_for_D_40,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_36,
  MR_Word mercury__diet__P_12,
  MR_Box mercury__diet__Lo_13,
  MR_Box mercury__diet__Hi_14,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Hi_14, mercury__diet__Lo_13);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_27_27;
        MR_Box mercury__diet__STATE_VARIABLE_B_28_28;
        MR_Box mercury__diet__STATE_VARIABLE_C_29_29;
        MR_Box mercury__diet__STATE_VARIABLE_D_30_30;
        MR_Box mercury__diet__Var_31;
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_12), mercury__diet__Lo_13, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_27_27, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_28_28, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_29_29, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_30_30);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
          mercury__diet__Var_31 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Lo_13);
          /* direct tailcall eliminated */
          {
            MR_Box mercury__diet__next_value_of_Lo_13 = mercury__diet__Var_31;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_27_27;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_28_28;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_29_29;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_30_30;

            mercury__diet__Lo_13 = mercury__diet__next_value_of_Lo_13;
            mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_19;
            mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_21;
            mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_23;
            mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_25;
          }
          continue;
        }
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
        *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
        *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
        *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
        mercury__diet__succeeded = MR_TRUE;
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl4_10_p_2(
  MR_Word mercury__diet__TypeInfo_for_A_44,
  MR_Word mercury__diet__TypeInfo_for_B_45,
  MR_Word mercury__diet__TypeInfo_for_C_46,
  MR_Word mercury__diet__TypeInfo_for_D_47,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
  MR_Word mercury__diet__P_11,
  MR_Word mercury__diet__T_12,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__diet__STATE_VARIABLE_D_29)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
      *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
      *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
      *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
    }
    else
    {
      MR_Box mercury__diet__X_17;
      MR_Box mercury__diet__Y_18;
      MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
      MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
      MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
      MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
      MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
      MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
      MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
      MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
      MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
      MR_Integer mercury__diet__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

      mercury__diet__X_17 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_30, (MR_Integer) 0));
      mercury__diet__Y_18 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_30, (MR_Integer) 1));
      mercury__diet__foldl4_10_p_2(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
      mercury__diet__fold_up4_11_p_2(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_12 = mercury__diet__R_21;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_35_35;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_36_36;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_37_37;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_38_38;

        mercury__diet__T_12 = mercury__diet__next_value_of_T_12;
        mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_22;
        mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_24;
        mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_26;
        mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_28;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up4_11_p_2(
  MR_Word mercury__diet__TypeInfo_for_A_37,
  MR_Word mercury__diet__TypeInfo_for_B_38,
  MR_Word mercury__diet__TypeInfo_for_C_39,
  MR_Word mercury__diet__TypeInfo_for_D_40,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_36,
  MR_Word mercury__diet__P_12,
  MR_Box mercury__diet__Lo_13,
  MR_Box mercury__diet__Hi_14,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Hi_14, mercury__diet__Lo_13);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_27_27;
        MR_Box mercury__diet__STATE_VARIABLE_B_28_28;
        MR_Box mercury__diet__STATE_VARIABLE_C_29_29;
        MR_Box mercury__diet__STATE_VARIABLE_D_30_30;
        MR_Box mercury__diet__Var_31;
        void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__func_1(((MR_Box) mercury__diet__P_12), mercury__diet__Lo_13, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_27_27, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_28_28, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_29_29, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_30_30);
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
        mercury__diet__Var_31 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Lo_13);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Lo_13 = mercury__diet__Var_31;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_27_27;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_28_28;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_29_29;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_30_30;

          mercury__diet__Lo_13 = mercury__diet__next_value_of_Lo_13;
          mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_19;
          mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_21;
          mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_23;
          mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_25;
        }
        continue;
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
        *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
        *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
        *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl4_10_p_1(
  MR_Word mercury__diet__TypeInfo_for_A_44,
  MR_Word mercury__diet__TypeInfo_for_B_45,
  MR_Word mercury__diet__TypeInfo_for_C_46,
  MR_Word mercury__diet__TypeInfo_for_D_47,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
  MR_Word mercury__diet__P_11,
  MR_Word mercury__diet__T_12,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__diet__STATE_VARIABLE_D_29)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
      *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
      *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
      *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
    }
    else
    {
      MR_Box mercury__diet__X_17;
      MR_Box mercury__diet__Y_18;
      MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
      MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
      MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
      MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
      MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
      MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
      MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
      MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
      MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
      MR_Integer mercury__diet__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

      mercury__diet__X_17 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_30, (MR_Integer) 0));
      mercury__diet__Y_18 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_30, (MR_Integer) 1));
      mercury__diet__foldl4_10_p_1(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
      mercury__diet__fold_up4_11_p_1(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_12 = mercury__diet__R_21;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_35_35;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_36_36;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_37_37;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_38_38;

        mercury__diet__T_12 = mercury__diet__next_value_of_T_12;
        mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_22;
        mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_24;
        mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_26;
        mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_28;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up4_11_p_1(
  MR_Word mercury__diet__TypeInfo_for_A_37,
  MR_Word mercury__diet__TypeInfo_for_B_38,
  MR_Word mercury__diet__TypeInfo_for_C_39,
  MR_Word mercury__diet__TypeInfo_for_D_40,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_36,
  MR_Word mercury__diet__P_12,
  MR_Box mercury__diet__Lo_13,
  MR_Box mercury__diet__Hi_14,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Hi_14, mercury__diet__Lo_13);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_27_27;
        MR_Box mercury__diet__STATE_VARIABLE_B_28_28;
        MR_Box mercury__diet__STATE_VARIABLE_C_29_29;
        MR_Box mercury__diet__STATE_VARIABLE_D_30_30;
        MR_Box mercury__diet__Var_31;
        void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__func_1(((MR_Box) mercury__diet__P_12), mercury__diet__Lo_13, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_27_27, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_28_28, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_29_29, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_30_30);
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
        mercury__diet__Var_31 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Lo_13);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Lo_13 = mercury__diet__Var_31;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_27_27;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_28_28;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_29_29;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_30_30;

          mercury__diet__Lo_13 = mercury__diet__next_value_of_Lo_13;
          mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_19;
          mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_21;
          mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_23;
          mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_25;
        }
        continue;
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
        *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
        *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
        *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl4_10_p_0(
  MR_Word mercury__diet__TypeInfo_for_A_44,
  MR_Word mercury__diet__TypeInfo_for_B_45,
  MR_Word mercury__diet__TypeInfo_for_C_46,
  MR_Word mercury__diet__TypeInfo_for_D_47,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
  MR_Word mercury__diet__P_11,
  MR_Word mercury__diet__T_12,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__diet__STATE_VARIABLE_D_29)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
      *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
      *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
      *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
    }
    else
    {
      MR_Box mercury__diet__X_17;
      MR_Box mercury__diet__Y_18;
      MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
      MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
      MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
      MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
      MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
      MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
      MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
      MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
      MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
      MR_Integer mercury__diet__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

      mercury__diet__X_17 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_30, (MR_Integer) 0));
      mercury__diet__Y_18 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_30, (MR_Integer) 1));
      mercury__diet__foldl4_10_p_0(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
      mercury__diet__fold_up4_11_p_0(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_12 = mercury__diet__R_21;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_35_35;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_36_36;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_37_37;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_38_38;

        mercury__diet__T_12 = mercury__diet__next_value_of_T_12;
        mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_22;
        mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_24;
        mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_26;
        mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_28;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up4_11_p_0(
  MR_Word mercury__diet__TypeInfo_for_A_37,
  MR_Word mercury__diet__TypeInfo_for_B_38,
  MR_Word mercury__diet__TypeInfo_for_C_39,
  MR_Word mercury__diet__TypeInfo_for_D_40,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_36,
  MR_Word mercury__diet__P_12,
  MR_Box mercury__diet__Lo_13,
  MR_Box mercury__diet__Hi_14,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Hi_14, mercury__diet__Lo_13);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_27_27;
        MR_Box mercury__diet__STATE_VARIABLE_B_28_28;
        MR_Box mercury__diet__STATE_VARIABLE_C_29_29;
        MR_Box mercury__diet__STATE_VARIABLE_D_30_30;
        MR_Box mercury__diet__Var_31;
        void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__func_1(((MR_Box) mercury__diet__P_12), mercury__diet__Lo_13, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_27_27, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_28_28, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_29_29, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_30_30);
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
        mercury__diet__Var_31 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Lo_13);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Lo_13 = mercury__diet__Var_31;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_27_27;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_28_28;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_29_29;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_30_30;

          mercury__diet__Lo_13 = mercury__diet__next_value_of_Lo_13;
          mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_19;
          mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_21;
          mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_23;
          mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__next_value_of_STATE_VARIABLE_D_0_25;
        }
        continue;
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
        *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
        *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
        *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl3_8_p_5(
  MR_Word mercury__diet__TypeInfo_for_A_36,
  MR_Word mercury__diet__TypeInfo_for_B_37,
  MR_Word mercury__diet__TypeInfo_for_C_38,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_35,
  MR_Word mercury__diet__P_9,
  MR_Word mercury__diet__T_10,
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_19,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_20,
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_21,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_22,
  MR_Box mercury__diet__STATE_VARIABLE_Acc3_0_23,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc3_24)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
        *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
        *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
        mercury__diet__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__diet__X_14;
        MR_Box mercury__diet__Y_15;
        MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
        MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
        MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
        MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
        MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
        MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
        MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
        MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
        MR_Integer mercury__diet__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

        mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_25, (MR_Integer) 0));
        mercury__diet__Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_25, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__foldl3_8_p_5(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
        if (mercury__diet__succeeded)
        {
          mercury__diet__succeeded = mercury__diet__fold_up3_9_p_5(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_10 = mercury__diet__R_18;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

              mercury__diet__T_10 = mercury__diet__next_value_of_T_10;
              mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_19;
              mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_21;
              mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__next_value_of_STATE_VARIABLE_Acc3_0_23;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up3_9_p_5(
  MR_Word mercury__diet__TypeInfo_for_Acc1_30,
  MR_Word mercury__diet__TypeInfo_for_Acc2_31,
  MR_Word mercury__diet__TypeInfo_for_Acc3_32,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
  MR_Word mercury__diet__P_10,
  MR_Box mercury__diet__Lo_11,
  MR_Box mercury__diet__Hi_12,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Hi_12, mercury__diet__Lo_11);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_22_22;
        MR_Box mercury__diet__STATE_VARIABLE_B_23_23;
        MR_Box mercury__diet__STATE_VARIABLE_C_24_24;
        MR_Box mercury__diet__Var_25;
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_10), mercury__diet__Lo_11, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_22_22, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_23_23, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_24_24);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
          mercury__diet__Var_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Lo_11);
          /* direct tailcall eliminated */
          {
            MR_Box mercury__diet__next_value_of_Lo_11 = mercury__diet__Var_25;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_22_22;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_23_23;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_24_24;

            mercury__diet__Lo_11 = mercury__diet__next_value_of_Lo_11;
            mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_16;
            mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_18;
            mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_20;
          }
          continue;
        }
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
        *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
        *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
        mercury__diet__succeeded = MR_TRUE;
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl3_8_p_4(
  MR_Word mercury__diet__TypeInfo_for_A_36,
  MR_Word mercury__diet__TypeInfo_for_B_37,
  MR_Word mercury__diet__TypeInfo_for_C_38,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_35,
  MR_Word mercury__diet__P_9,
  MR_Word mercury__diet__T_10,
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_19,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_20,
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_21,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_22,
  MR_Box mercury__diet__STATE_VARIABLE_Acc3_0_23,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc3_24)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
        *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
        *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
        mercury__diet__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__diet__X_14;
        MR_Box mercury__diet__Y_15;
        MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
        MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
        MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
        MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
        MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
        MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
        MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
        MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
        MR_Integer mercury__diet__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

        mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_25, (MR_Integer) 0));
        mercury__diet__Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_25, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__foldl3_8_p_4(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
        if (mercury__diet__succeeded)
        {
          mercury__diet__succeeded = mercury__diet__fold_up3_9_p_4(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_10 = mercury__diet__R_18;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

              mercury__diet__T_10 = mercury__diet__next_value_of_T_10;
              mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_19;
              mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_21;
              mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__next_value_of_STATE_VARIABLE_Acc3_0_23;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up3_9_p_4(
  MR_Word mercury__diet__TypeInfo_for_Acc1_30,
  MR_Word mercury__diet__TypeInfo_for_Acc2_31,
  MR_Word mercury__diet__TypeInfo_for_Acc3_32,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
  MR_Word mercury__diet__P_10,
  MR_Box mercury__diet__Lo_11,
  MR_Box mercury__diet__Hi_12,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Hi_12, mercury__diet__Lo_11);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_22_22;
        MR_Box mercury__diet__STATE_VARIABLE_B_23_23;
        MR_Box mercury__diet__STATE_VARIABLE_C_24_24;
        MR_Box mercury__diet__Var_25;
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_10), mercury__diet__Lo_11, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_22_22, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_23_23, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_24_24);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
          mercury__diet__Var_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Lo_11);
          /* direct tailcall eliminated */
          {
            MR_Box mercury__diet__next_value_of_Lo_11 = mercury__diet__Var_25;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_22_22;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_23_23;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_24_24;

            mercury__diet__Lo_11 = mercury__diet__next_value_of_Lo_11;
            mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_16;
            mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_18;
            mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_20;
          }
          continue;
        }
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
        *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
        *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
        mercury__diet__succeeded = MR_TRUE;
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl3_8_p_3(
  MR_Word mercury__diet__TypeInfo_for_A_36,
  MR_Word mercury__diet__TypeInfo_for_B_37,
  MR_Word mercury__diet__TypeInfo_for_C_38,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_35,
  MR_Word mercury__diet__P_9,
  MR_Word mercury__diet__T_10,
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_19,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_20,
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_21,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_22,
  MR_Box mercury__diet__STATE_VARIABLE_Acc3_0_23,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc3_24)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
        *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
        *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
        mercury__diet__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__diet__X_14;
        MR_Box mercury__diet__Y_15;
        MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
        MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
        MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
        MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
        MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
        MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
        MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
        MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
        MR_Integer mercury__diet__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

        mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_25, (MR_Integer) 0));
        mercury__diet__Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_25, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__foldl3_8_p_3(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
        if (mercury__diet__succeeded)
        {
          mercury__diet__succeeded = mercury__diet__fold_up3_9_p_3(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_10 = mercury__diet__R_18;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

              mercury__diet__T_10 = mercury__diet__next_value_of_T_10;
              mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_19;
              mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_21;
              mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__next_value_of_STATE_VARIABLE_Acc3_0_23;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up3_9_p_3(
  MR_Word mercury__diet__TypeInfo_for_Acc1_30,
  MR_Word mercury__diet__TypeInfo_for_Acc2_31,
  MR_Word mercury__diet__TypeInfo_for_Acc3_32,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
  MR_Word mercury__diet__P_10,
  MR_Box mercury__diet__Lo_11,
  MR_Box mercury__diet__Hi_12,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Hi_12, mercury__diet__Lo_11);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_22_22;
        MR_Box mercury__diet__STATE_VARIABLE_B_23_23;
        MR_Box mercury__diet__STATE_VARIABLE_C_24_24;
        MR_Box mercury__diet__Var_25;
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_10), mercury__diet__Lo_11, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_22_22, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_23_23, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_24_24);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
          mercury__diet__Var_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Lo_11);
          /* direct tailcall eliminated */
          {
            MR_Box mercury__diet__next_value_of_Lo_11 = mercury__diet__Var_25;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_22_22;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_23_23;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_24_24;

            mercury__diet__Lo_11 = mercury__diet__next_value_of_Lo_11;
            mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_16;
            mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_18;
            mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_20;
          }
          continue;
        }
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
        *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
        *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
        mercury__diet__succeeded = MR_TRUE;
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl3_8_p_2(
  MR_Word mercury__diet__TypeInfo_for_A_36,
  MR_Word mercury__diet__TypeInfo_for_B_37,
  MR_Word mercury__diet__TypeInfo_for_C_38,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_35,
  MR_Word mercury__diet__P_9,
  MR_Word mercury__diet__T_10,
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_19,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_20,
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_21,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_22,
  MR_Box mercury__diet__STATE_VARIABLE_Acc3_0_23,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc3_24)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
      *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
      *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
    }
    else
    {
      MR_Box mercury__diet__X_14;
      MR_Box mercury__diet__Y_15;
      MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
      MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
      MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
      MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
      MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
      MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
      MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
      MR_Integer mercury__diet__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

      mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_25, (MR_Integer) 0));
      mercury__diet__Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_25, (MR_Integer) 1));
      mercury__diet__foldl3_8_p_2(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
      mercury__diet__fold_up3_9_p_2(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_10 = mercury__diet__R_18;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

        mercury__diet__T_10 = mercury__diet__next_value_of_T_10;
        mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_19;
        mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_21;
        mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__next_value_of_STATE_VARIABLE_Acc3_0_23;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up3_9_p_2(
  MR_Word mercury__diet__TypeInfo_for_Acc1_30,
  MR_Word mercury__diet__TypeInfo_for_Acc2_31,
  MR_Word mercury__diet__TypeInfo_for_Acc3_32,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
  MR_Word mercury__diet__P_10,
  MR_Box mercury__diet__Lo_11,
  MR_Box mercury__diet__Hi_12,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Hi_12, mercury__diet__Lo_11);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_22_22;
        MR_Box mercury__diet__STATE_VARIABLE_B_23_23;
        MR_Box mercury__diet__STATE_VARIABLE_C_24_24;
        MR_Box mercury__diet__Var_25;
        void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__func_1(((MR_Box) mercury__diet__P_10), mercury__diet__Lo_11, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_22_22, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_23_23, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_24_24);
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
        mercury__diet__Var_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Lo_11);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Lo_11 = mercury__diet__Var_25;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_22_22;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_23_23;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_24_24;

          mercury__diet__Lo_11 = mercury__diet__next_value_of_Lo_11;
          mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_16;
          mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_18;
          mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_20;
        }
        continue;
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
        *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
        *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl3_8_p_1(
  MR_Word mercury__diet__TypeInfo_for_A_36,
  MR_Word mercury__diet__TypeInfo_for_B_37,
  MR_Word mercury__diet__TypeInfo_for_C_38,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_35,
  MR_Word mercury__diet__P_9,
  MR_Word mercury__diet__T_10,
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_19,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_20,
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_21,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_22,
  MR_Box mercury__diet__STATE_VARIABLE_Acc3_0_23,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc3_24)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
      *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
      *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
    }
    else
    {
      MR_Box mercury__diet__X_14;
      MR_Box mercury__diet__Y_15;
      MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
      MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
      MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
      MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
      MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
      MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
      MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
      MR_Integer mercury__diet__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

      mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_25, (MR_Integer) 0));
      mercury__diet__Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_25, (MR_Integer) 1));
      mercury__diet__foldl3_8_p_1(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
      mercury__diet__fold_up3_9_p_1(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_10 = mercury__diet__R_18;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

        mercury__diet__T_10 = mercury__diet__next_value_of_T_10;
        mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_19;
        mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_21;
        mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__next_value_of_STATE_VARIABLE_Acc3_0_23;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up3_9_p_1(
  MR_Word mercury__diet__TypeInfo_for_Acc1_30,
  MR_Word mercury__diet__TypeInfo_for_Acc2_31,
  MR_Word mercury__diet__TypeInfo_for_Acc3_32,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
  MR_Word mercury__diet__P_10,
  MR_Box mercury__diet__Lo_11,
  MR_Box mercury__diet__Hi_12,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Hi_12, mercury__diet__Lo_11);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_22_22;
        MR_Box mercury__diet__STATE_VARIABLE_B_23_23;
        MR_Box mercury__diet__STATE_VARIABLE_C_24_24;
        MR_Box mercury__diet__Var_25;
        void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__func_1(((MR_Box) mercury__diet__P_10), mercury__diet__Lo_11, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_22_22, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_23_23, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_24_24);
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
        mercury__diet__Var_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Lo_11);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Lo_11 = mercury__diet__Var_25;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_22_22;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_23_23;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_24_24;

          mercury__diet__Lo_11 = mercury__diet__next_value_of_Lo_11;
          mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_16;
          mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_18;
          mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_20;
        }
        continue;
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
        *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
        *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl3_8_p_0(
  MR_Word mercury__diet__TypeInfo_for_A_36,
  MR_Word mercury__diet__TypeInfo_for_B_37,
  MR_Word mercury__diet__TypeInfo_for_C_38,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_35,
  MR_Word mercury__diet__P_9,
  MR_Word mercury__diet__T_10,
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_19,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_20,
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_21,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_22,
  MR_Box mercury__diet__STATE_VARIABLE_Acc3_0_23,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc3_24)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
      *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
      *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
    }
    else
    {
      MR_Box mercury__diet__X_14;
      MR_Box mercury__diet__Y_15;
      MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
      MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
      MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
      MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
      MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
      MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
      MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
      MR_Integer mercury__diet__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

      mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_25, (MR_Integer) 0));
      mercury__diet__Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_25, (MR_Integer) 1));
      mercury__diet__foldl3_8_p_0(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
      mercury__diet__fold_up3_9_p_0(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_10 = mercury__diet__R_18;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

        mercury__diet__T_10 = mercury__diet__next_value_of_T_10;
        mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_19;
        mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_21;
        mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__next_value_of_STATE_VARIABLE_Acc3_0_23;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up3_9_p_0(
  MR_Word mercury__diet__TypeInfo_for_Acc1_30,
  MR_Word mercury__diet__TypeInfo_for_Acc2_31,
  MR_Word mercury__diet__TypeInfo_for_Acc3_32,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
  MR_Word mercury__diet__P_10,
  MR_Box mercury__diet__Lo_11,
  MR_Box mercury__diet__Hi_12,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Hi_12, mercury__diet__Lo_11);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_22_22;
        MR_Box mercury__diet__STATE_VARIABLE_B_23_23;
        MR_Box mercury__diet__STATE_VARIABLE_C_24_24;
        MR_Box mercury__diet__Var_25;
        void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__func_1(((MR_Box) mercury__diet__P_10), mercury__diet__Lo_11, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_22_22, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_23_23, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_24_24);
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
        mercury__diet__Var_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Lo_11);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Lo_11 = mercury__diet__Var_25;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_22_22;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_23_23;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_24_24;

          mercury__diet__Lo_11 = mercury__diet__next_value_of_Lo_11;
          mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_16;
          mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_18;
          mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__next_value_of_STATE_VARIABLE_C_0_20;
        }
        continue;
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
        *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
        *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl2_6_p_5(
  MR_Word mercury__diet__TypeInfo_for_A_28,
  MR_Word mercury__diet__TypeInfo_for_B_29,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
  MR_Word mercury__diet__P_7,
  MR_Word mercury__diet__T_8,
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_16,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_17,
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_18,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
        *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
        mercury__diet__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__diet__X_11;
        MR_Box mercury__diet__Y_12;
        MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
        MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
        MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
        MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
        MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
        MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
        MR_Integer mercury__diet__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

        mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_20, (MR_Integer) 0));
        mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_20, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__foldl2_6_p_5(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
        if (mercury__diet__succeeded)
        {
          mercury__diet__succeeded = mercury__diet__fold_up2_7_p_5(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_8 = mercury__diet__R_15;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

              mercury__diet__T_8 = mercury__diet__next_value_of_T_8;
              mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_16;
              mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_18;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up2_7_p_5(
  MR_Word mercury__diet__TypeInfo_for_Acc1_23,
  MR_Word mercury__diet__TypeInfo_for_Acc2_24,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
  MR_Word mercury__diet__P_8,
  MR_Box mercury__diet__Lo_9,
  MR_Box mercury__diet__Hi_10,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_17_17;
        MR_Box mercury__diet__STATE_VARIABLE_B_18_18;
        MR_Box mercury__diet__Var_19;
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_8), mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_17_17, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_18_18);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
          mercury__diet__Var_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
          /* direct tailcall eliminated */
          {
            MR_Box mercury__diet__next_value_of_Lo_9 = mercury__diet__Var_19;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_17_17;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_18_18;

            mercury__diet__Lo_9 = mercury__diet__next_value_of_Lo_9;
            mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_13;
            mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_15;
          }
          continue;
        }
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
        *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
        mercury__diet__succeeded = MR_TRUE;
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl2_6_p_4(
  MR_Word mercury__diet__TypeInfo_for_A_28,
  MR_Word mercury__diet__TypeInfo_for_B_29,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
  MR_Word mercury__diet__P_7,
  MR_Word mercury__diet__T_8,
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_16,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_17,
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_18,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
        *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
        mercury__diet__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__diet__X_11;
        MR_Box mercury__diet__Y_12;
        MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
        MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
        MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
        MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
        MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
        MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
        MR_Integer mercury__diet__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

        mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_20, (MR_Integer) 0));
        mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_20, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__foldl2_6_p_4(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
        if (mercury__diet__succeeded)
        {
          mercury__diet__succeeded = mercury__diet__fold_up2_7_p_4(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_8 = mercury__diet__R_15;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

              mercury__diet__T_8 = mercury__diet__next_value_of_T_8;
              mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_16;
              mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_18;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up2_7_p_4(
  MR_Word mercury__diet__TypeInfo_for_Acc1_23,
  MR_Word mercury__diet__TypeInfo_for_Acc2_24,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
  MR_Word mercury__diet__P_8,
  MR_Box mercury__diet__Lo_9,
  MR_Box mercury__diet__Hi_10,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_17_17;
        MR_Box mercury__diet__STATE_VARIABLE_B_18_18;
        MR_Box mercury__diet__Var_19;
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_8), mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_17_17, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_18_18);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
          mercury__diet__Var_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
          /* direct tailcall eliminated */
          {
            MR_Box mercury__diet__next_value_of_Lo_9 = mercury__diet__Var_19;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_17_17;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_18_18;

            mercury__diet__Lo_9 = mercury__diet__next_value_of_Lo_9;
            mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_13;
            mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_15;
          }
          continue;
        }
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
        *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
        mercury__diet__succeeded = MR_TRUE;
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl2_6_p_3(
  MR_Word mercury__diet__TypeInfo_for_A_28,
  MR_Word mercury__diet__TypeInfo_for_B_29,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
  MR_Word mercury__diet__P_7,
  MR_Word mercury__diet__T_8,
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_16,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_17,
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_18,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
        *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
        mercury__diet__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__diet__X_11;
        MR_Box mercury__diet__Y_12;
        MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
        MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
        MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
        MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
        MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
        MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
        MR_Integer mercury__diet__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

        mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_20, (MR_Integer) 0));
        mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_20, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__foldl2_6_p_3(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
        if (mercury__diet__succeeded)
        {
          mercury__diet__succeeded = mercury__diet__fold_up2_7_p_3(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_8 = mercury__diet__R_15;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

              mercury__diet__T_8 = mercury__diet__next_value_of_T_8;
              mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_16;
              mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_18;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__fold_up2_7_p_3(
  MR_Word mercury__diet__TypeInfo_for_Acc1_23,
  MR_Word mercury__diet__TypeInfo_for_Acc2_24,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
  MR_Word mercury__diet__P_8,
  MR_Box mercury__diet__Lo_9,
  MR_Box mercury__diet__Hi_10,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_17_17;
        MR_Box mercury__diet__STATE_VARIABLE_B_18_18;
        MR_Box mercury__diet__Var_19;
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_8), mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_17_17, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_18_18);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
          mercury__diet__Var_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
          /* direct tailcall eliminated */
          {
            MR_Box mercury__diet__next_value_of_Lo_9 = mercury__diet__Var_19;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_17_17;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_18_18;

            mercury__diet__Lo_9 = mercury__diet__next_value_of_Lo_9;
            mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_13;
            mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_15;
          }
          continue;
        }
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
        *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
        mercury__diet__succeeded = MR_TRUE;
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl2_6_p_2(
  MR_Word mercury__diet__TypeInfo_for_A_28,
  MR_Word mercury__diet__TypeInfo_for_B_29,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
  MR_Word mercury__diet__P_7,
  MR_Word mercury__diet__T_8,
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_16,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_17,
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_18,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
      *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
    }
    else
    {
      MR_Box mercury__diet__X_11;
      MR_Box mercury__diet__Y_12;
      MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
      MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
      MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
      MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
      MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
      MR_Integer mercury__diet__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

      mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_20, (MR_Integer) 0));
      mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_20, (MR_Integer) 1));
      mercury__diet__foldl2_6_p_2(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
      mercury__diet__fold_up2_7_p_2(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_8 = mercury__diet__R_15;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

        mercury__diet__T_8 = mercury__diet__next_value_of_T_8;
        mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_16;
        mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_18;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up2_7_p_2(
  MR_Word mercury__diet__TypeInfo_for_Acc1_23,
  MR_Word mercury__diet__TypeInfo_for_Acc2_24,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
  MR_Word mercury__diet__P_8,
  MR_Box mercury__diet__Lo_9,
  MR_Box mercury__diet__Hi_10,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_17_17;
        MR_Box mercury__diet__STATE_VARIABLE_B_18_18;
        MR_Box mercury__diet__Var_19;
        void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__func_1(((MR_Box) mercury__diet__P_8), mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_17_17, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_18_18);
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
        mercury__diet__Var_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Lo_9 = mercury__diet__Var_19;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_17_17;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_18_18;

          mercury__diet__Lo_9 = mercury__diet__next_value_of_Lo_9;
          mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_13;
          mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_15;
        }
        continue;
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
        *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl2_6_p_1(
  MR_Word mercury__diet__TypeInfo_for_A_28,
  MR_Word mercury__diet__TypeInfo_for_B_29,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
  MR_Word mercury__diet__P_7,
  MR_Word mercury__diet__T_8,
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_16,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_17,
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_18,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
      *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
    }
    else
    {
      MR_Box mercury__diet__X_11;
      MR_Box mercury__diet__Y_12;
      MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
      MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
      MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
      MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
      MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
      MR_Integer mercury__diet__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

      mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_20, (MR_Integer) 0));
      mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_20, (MR_Integer) 1));
      mercury__diet__foldl2_6_p_1(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
      mercury__diet__fold_up2_7_p_1(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_8 = mercury__diet__R_15;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

        mercury__diet__T_8 = mercury__diet__next_value_of_T_8;
        mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_16;
        mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_18;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up2_7_p_1(
  MR_Word mercury__diet__TypeInfo_for_Acc1_23,
  MR_Word mercury__diet__TypeInfo_for_Acc2_24,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
  MR_Word mercury__diet__P_8,
  MR_Box mercury__diet__Lo_9,
  MR_Box mercury__diet__Hi_10,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_17_17;
        MR_Box mercury__diet__STATE_VARIABLE_B_18_18;
        MR_Box mercury__diet__Var_19;
        void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__func_1(((MR_Box) mercury__diet__P_8), mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_17_17, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_18_18);
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
        mercury__diet__Var_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Lo_9 = mercury__diet__Var_19;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_17_17;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_18_18;

          mercury__diet__Lo_9 = mercury__diet__next_value_of_Lo_9;
          mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_13;
          mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_15;
        }
        continue;
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
        *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl2_6_p_0(
  MR_Word mercury__diet__TypeInfo_for_A_28,
  MR_Word mercury__diet__TypeInfo_for_B_29,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
  MR_Word mercury__diet__P_7,
  MR_Word mercury__diet__T_8,
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_16,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_17,
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_18,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
      *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
    }
    else
    {
      MR_Box mercury__diet__X_11;
      MR_Box mercury__diet__Y_12;
      MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
      MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
      MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
      MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
      MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
      MR_Integer mercury__diet__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

      mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_20, (MR_Integer) 0));
      mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_20, (MR_Integer) 1));
      mercury__diet__foldl2_6_p_0(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
      mercury__diet__fold_up2_7_p_0(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_8 = mercury__diet__R_15;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

        mercury__diet__T_8 = mercury__diet__next_value_of_T_8;
        mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_16;
        mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_18;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__fold_up2_7_p_0(
  MR_Word mercury__diet__TypeInfo_for_Acc1_23,
  MR_Word mercury__diet__TypeInfo_for_Acc2_24,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
  MR_Word mercury__diet__P_8,
  MR_Box mercury__diet__Lo_9,
  MR_Box mercury__diet__Hi_10,
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_A_17_17;
        MR_Box mercury__diet__STATE_VARIABLE_B_18_18;
        MR_Box mercury__diet__Var_19;
        void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__func_1(((MR_Box) mercury__diet__P_8), mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_17_17, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_18_18);
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
        mercury__diet__Var_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Lo_9 = mercury__diet__Var_19;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_17_17;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_18_18;

          mercury__diet__Lo_9 = mercury__diet__next_value_of_Lo_9;
          mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_13;
          mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_15;
        }
        continue;
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
        *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl_4_p_5(
  MR_Word mercury__diet__TypeInfo_for_A_20,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__P_5,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
        mercury__diet__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__diet__X_8;
        MR_Box mercury__diet__Y_9;
        MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
        MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
        MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
        MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
        MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

        mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
        mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__foldl_4_p_5(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
        if (mercury__diet__succeeded)
        {
          mercury__diet__succeeded = mercury__diet__foldl_2_5_p_5(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__R_12;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

              mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl_2_5_p_5(
  MR_Word mercury__diet__TypeInfo_for_Acc_16,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
  MR_Word mercury__diet__P_6,
  MR_Box mercury__diet__Lo_7,
  MR_Box mercury__diet__Hi_8,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
        MR_Box mercury__diet__Var_13;
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_12_12);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
          mercury__diet__Var_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
          /* direct tailcall eliminated */
          {
            MR_Box mercury__diet__next_value_of_Lo_7 = mercury__diet__Var_13;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

            mercury__diet__Lo_7 = mercury__diet__next_value_of_Lo_7;
            mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_10;
          }
          continue;
        }
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
        mercury__diet__succeeded = MR_TRUE;
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl_4_p_4(
  MR_Word mercury__diet__TypeInfo_for_A_20,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__P_5,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
        mercury__diet__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__diet__X_8;
        MR_Box mercury__diet__Y_9;
        MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
        MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
        MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
        MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
        MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

        mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
        mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__foldl_4_p_4(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
        if (mercury__diet__succeeded)
        {
          mercury__diet__succeeded = mercury__diet__foldl_2_5_p_4(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__R_12;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

              mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl_2_5_p_4(
  MR_Word mercury__diet__TypeInfo_for_Acc_16,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
  MR_Word mercury__diet__P_6,
  MR_Box mercury__diet__Lo_7,
  MR_Box mercury__diet__Hi_8,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
        MR_Box mercury__diet__Var_13;
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_12_12);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
          mercury__diet__Var_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
          /* direct tailcall eliminated */
          {
            MR_Box mercury__diet__next_value_of_Lo_7 = mercury__diet__Var_13;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

            mercury__diet__Lo_7 = mercury__diet__next_value_of_Lo_7;
            mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_10;
          }
          continue;
        }
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
        mercury__diet__succeeded = MR_TRUE;
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl_4_p_3(
  MR_Word mercury__diet__TypeInfo_for_A_20,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__P_5,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
        mercury__diet__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__diet__X_8;
        MR_Box mercury__diet__Y_9;
        MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
        MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
        MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
        MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
        MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

        mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
        mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__foldl_4_p_3(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
        if (mercury__diet__succeeded)
        {
          mercury__diet__succeeded = mercury__diet__foldl_2_5_p_3(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__R_12;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

              mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl_2_5_p_3(
  MR_Word mercury__diet__TypeInfo_for_Acc_16,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
  MR_Word mercury__diet__P_6,
  MR_Box mercury__diet__Lo_7,
  MR_Box mercury__diet__Hi_8,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
        MR_Box mercury__diet__Var_13;
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_12_12);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
          mercury__diet__Var_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
          /* direct tailcall eliminated */
          {
            MR_Box mercury__diet__next_value_of_Lo_7 = mercury__diet__Var_13;
            MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

            mercury__diet__Lo_7 = mercury__diet__next_value_of_Lo_7;
            mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_10;
          }
          continue;
        }
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
        mercury__diet__succeeded = MR_TRUE;
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl_4_p_2(
  MR_Word mercury__diet__TypeInfo_for_A_20,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__P_5,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box mercury__diet__X_8;
      MR_Box mercury__diet__Y_9;
      MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
      MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
      MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
      MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

      mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
      mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
      mercury__diet__foldl_4_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
      mercury__diet__foldl_2_5_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__R_12;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

        mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
        mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl_2_5_p_2(
  MR_Word mercury__diet__TypeInfo_for_Acc_16,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
  MR_Word mercury__diet__P_6,
  MR_Box mercury__diet__Lo_7,
  MR_Box mercury__diet__Hi_8,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
        MR_Box mercury__diet__Var_13;
        void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_12_12);
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
        mercury__diet__Var_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Lo_7 = mercury__diet__Var_13;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

          mercury__diet__Lo_7 = mercury__diet__next_value_of_Lo_7;
          mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_10;
        }
        continue;
      }
      else
        *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl_4_p_1(
  MR_Word mercury__diet__TypeInfo_for_A_20,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__P_5,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box mercury__diet__X_8;
      MR_Box mercury__diet__Y_9;
      MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
      MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
      MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
      MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

      mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
      mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
      mercury__diet__foldl_4_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
      mercury__diet__foldl_2_5_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__R_12;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

        mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
        mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl_2_5_p_1(
  MR_Word mercury__diet__TypeInfo_for_Acc_16,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
  MR_Word mercury__diet__P_6,
  MR_Box mercury__diet__Lo_7,
  MR_Box mercury__diet__Hi_8,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
        MR_Box mercury__diet__Var_13;
        void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_12_12);
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
        mercury__diet__Var_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Lo_7 = mercury__diet__Var_13;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

          mercury__diet__Lo_7 = mercury__diet__next_value_of_Lo_7;
          mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_10;
        }
        continue;
      }
      else
        *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl_4_p_0(
  MR_Word mercury__diet__TypeInfo_for_A_20,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__P_5,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box mercury__diet__X_8;
      MR_Box mercury__diet__Y_9;
      MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
      MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
      MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
      MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

      mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
      mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
      mercury__diet__foldl_4_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
      mercury__diet__foldl_2_5_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__R_12;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

        mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
        mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl_2_5_p_0(
  MR_Word mercury__diet__TypeInfo_for_Acc_16,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
  MR_Word mercury__diet__P_6,
  MR_Box mercury__diet__Lo_7,
  MR_Box mercury__diet__Hi_8,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
        MR_Box mercury__diet__Var_13;
        void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_12_12);
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
        mercury__diet__Var_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Lo_7 = mercury__diet__Var_13;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

          mercury__diet__Lo_7 = mercury__diet__next_value_of_Lo_7;
          mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_10;
        }
        continue;
      }
      else
        *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__diet__foldl_3_f_0(
  MR_Word mercury__diet__TypeInfo_for_A_20,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__F_5,
  MR_Word mercury__diet__Set_6,
  MR_Box mercury__diet__Acc0_7)
{
  {
    MR_Box mercury__diet__Acc_8;

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(mercury__diet__F_5, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__Set_6, mercury__diet__Acc0_7, &mercury__diet__Acc_8);
    return mercury__diet__Acc_8;
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(
  MR_Word mercury__diet__Var_23,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box mercury__diet__X_8;
      MR_Box mercury__diet__Y_9;
      MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
      MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
      MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
      MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

      mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
      mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(mercury__diet__Var_23, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(mercury__diet__Var_23, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__R_12;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

        mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
        mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
  MR_Word mercury__diet__Var_19,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
  MR_Box mercury__diet__Lo_7,
  MR_Box mercury__diet__Hi_8,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
        MR_Box mercury__diet__Var_13;
        MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__diet__Var_19, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__STATE_VARIABLE_Acc_12_12 = mercury__diet__func_1(((MR_Box) mercury__diet__Var_19), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10);
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
        mercury__diet__Var_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Lo_7 = mercury__diet__Var_13;
          MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

          mercury__diet__Lo_7 = mercury__diet__next_value_of_Lo_7;
          mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_10;
        }
        continue;
      }
      else
        *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldr_intervals_4_p_2(
  MR_Word mercury__diet__TypeInfo_for_A_20,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__P_5,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
        mercury__diet__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__diet__X_8;
        MR_Box mercury__diet__Y_9;
        MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
        MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
        MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
        MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
        MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
        mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__foldr_intervals_4_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__L_11;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

              mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldr_intervals_4_p_1(
  MR_Word mercury__diet__TypeInfo_for_A_20,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__P_5,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box mercury__diet__X_8;
      MR_Box mercury__diet__Y_9;
      MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
      MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
      MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
      MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
      void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
      mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
      mercury__diet__foldr_intervals_4_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
      mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
      mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__L_11;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

        mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
        mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldr_intervals_4_p_0(
  MR_Word mercury__diet__TypeInfo_for_A_20,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__P_5,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box mercury__diet__X_8;
      MR_Box mercury__diet__Y_9;
      MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
      MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
      MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
      MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
      void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
      mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
      mercury__diet__foldr_intervals_4_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
      mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
      mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__L_11;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

        mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
        mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
      }
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__foldl_intervals_4_p_2(
  MR_Word mercury__diet__TypeInfo_for_A_20,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__P_5,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
        mercury__diet__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__diet__X_8;
        MR_Box mercury__diet__Y_9;
        MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
        MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
        MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
        MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
        MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
        MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
        mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
        mercury__diet__succeeded = mercury__diet__foldl_intervals_4_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__R_12;
              MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

              mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl_intervals_4_p_1(
  MR_Word mercury__diet__TypeInfo_for_A_20,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__P_5,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box mercury__diet__X_8;
      MR_Box mercury__diet__Y_9;
      MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
      MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
      MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
      MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
      void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
      mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
      mercury__diet__foldl_intervals_4_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
      mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
      mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__R_12;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

        mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
        mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__foldl_intervals_4_p_0(
  MR_Word mercury__diet__TypeInfo_for_A_20,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__P_5,
  MR_Word mercury__diet__T_6,
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
    else
    {
      MR_Box mercury__diet__X_8;
      MR_Box mercury__diet__Y_9;
      MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
      MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
      MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
      MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
      MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
      void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
      mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
      mercury__diet__foldl_intervals_4_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
      mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
      mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_6 = mercury__diet__R_12;
        MR_Box mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

        mercury__diet__T_6 = mercury__diet__next_value_of_T_6;
        mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_Acc_0_13;
      }
      continue;
    }
    break;
  }
}

MR_Integer MR_CALL 
mercury__diet__count_1_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_enum_6,
  MR_Word mercury__diet__T_3)
{
  {
    MR_Integer mercury__diet__Count_4;

    mercury__diet__count_3_p_0(mercury__diet__TypeClassInfo_for_enum_6, mercury__diet__T_3, (MR_Integer) 0, &mercury__diet__Count_4);
    return mercury__diet__Count_4;
  }
}

void MR_CALL 
mercury__diet__count_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_enum_20,
  MR_Word mercury__diet__T_4,
  MR_Integer mercury__diet__Acc0_5,
  MR_Integer * mercury__diet__Acc_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__Acc_6 = mercury__diet__Acc0_5;
    else
    {
      MR_Box mercury__diet__X_7;
      MR_Box mercury__diet__Y_8;
      MR_Word mercury__diet__L_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_4, (MR_Integer) 2)));
      MR_Word mercury__diet__R_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_4, (MR_Integer) 3)));
      MR_Integer mercury__diet__Acc1_12;
      MR_Integer mercury__diet__Acc2_13;
      MR_Tuple mercury__diet__Var_14 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_4, (MR_Integer) 0)));
      MR_Integer mercury__diet__Var_15;
      MR_Integer mercury__diet__Var_16;
      MR_Integer mercury__diet__Var_17;
      MR_Integer mercury__diet__Var_18;
      MR_Integer mercury__diet__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_4, (MR_Integer) 1)));
      MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box);
      MR_Box mercury__diet__conv1_Var_17;
      MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);
      MR_Box mercury__diet__conv3_Var_18;

      mercury__diet__X_7 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_14, (MR_Integer) 0));
      mercury__diet__Y_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_14, (MR_Integer) 1));
      mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_20, (MR_Integer) 0)), (MR_Integer) 5)));
      mercury__diet__conv1_Var_17 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_enum_20), mercury__diet__Y_8);
      mercury__diet__Var_17 = ((MR_Integer) mercury__diet__conv1_Var_17);
      mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_20, (MR_Integer) 0)), (MR_Integer) 5)));
      mercury__diet__conv3_Var_18 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_enum_20), mercury__diet__X_7);
      mercury__diet__Var_18 = ((MR_Integer) mercury__diet__conv3_Var_18);
      mercury__diet__Var_16 = (mercury__diet__Var_17 - mercury__diet__Var_18);
      mercury__diet__Var_15 = (mercury__diet__Acc0_5 + mercury__diet__Var_16);
      mercury__diet__Acc1_12 = (mercury__diet__Var_15 + (MR_Integer) 1);
      mercury__diet__count_3_p_0(mercury__diet__TypeClassInfo_for_enum_20, mercury__diet__L_10, mercury__diet__Acc1_12, &mercury__diet__Acc2_13);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_4 = mercury__diet__R_11;
        MR_Integer mercury__diet__next_value_of_Acc0_5 = mercury__diet__Acc2_13;

        mercury__diet__T_4 = mercury__diet__next_value_of_T_4;
        mercury__diet__Acc0_5 = mercury__diet__next_value_of_Acc0_5;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__divide_by_set_4_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_9,
  MR_Word mercury__diet__DivideBySet_5,
  MR_Word mercury__diet__Set_6,
  MR_Word * mercury__diet__InPart_7,
  MR_Word * mercury__diet__OutPart_8)
{
  {
    *mercury__diet__InPart_7 = mercury__diet__inter_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_9, mercury__diet__Set_6, mercury__diet__DivideBySet_5);
    if ((mercury__diet__Set_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__OutPart_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    if ((mercury__diet__DivideBySet_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__OutPart_8 = mercury__diet__Set_6;
    else
    {
      MR_Tuple mercury__diet__Head_27;
      MR_Word mercury__diet__Stream_28;
      MR_Word mercury__diet__Var_31;
      MR_Word mercury__diet___RemHead_29;
      MR_Word mercury__diet___RemStream_30;

      mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_9, mercury__diet__DivideBySet_5, &mercury__diet__Head_27, &mercury__diet__Stream_28);
      {
        mercury__diet__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__diet__Var_31, 0) = ((MR_Box) (mercury__diet__Head_27));
      }
      mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_9, mercury__diet__Set_6, mercury__diet__Var_31, mercury__diet__Stream_28, mercury__diet__OutPart_8, &mercury__diet___RemHead_29, &mercury__diet___RemStream_30);
    }
  }
}

void MR_CALL 
mercury__diet__divide_4_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_12,
  MR_Word mercury__diet__Pred_5,
  MR_Word mercury__diet__Set_6,
  MR_Word * mercury__diet__TrueSet_7,
  MR_Word * mercury__diet__FalseSet_8)
{
  {
    MR_Word mercury__diet__Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__diet__Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_12, mercury__diet__Pred_5, mercury__diet__TypeClassInfo_for_diet_element_12, mercury__diet__Set_6, mercury__diet__Var_10, mercury__diet__TrueSet_7, mercury__diet__Var_11, mercury__diet__FalseSet_8);
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(
  MR_Word mercury__diet__Var_34,
  MR_Word mercury__diet__Var_35,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
  MR_Word mercury__diet__T_8,
  MR_Word mercury__diet__STATE_VARIABLE_Acc1_0_16,
  MR_Word * mercury__diet__STATE_VARIABLE_Acc1_17,
  MR_Word mercury__diet__STATE_VARIABLE_Acc2_0_18,
  MR_Word * mercury__diet__STATE_VARIABLE_Acc2_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
      *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
    }
    else
    {
      MR_Box mercury__diet__X_11;
      MR_Box mercury__diet__Y_12;
      MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
      MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
      MR_Word mercury__diet__STATE_VARIABLE_Acc1_21_21;
      MR_Word mercury__diet__STATE_VARIABLE_Acc2_22_22;
      MR_Word mercury__diet__STATE_VARIABLE_Acc1_23_23;
      MR_Word mercury__diet__STATE_VARIABLE_Acc2_24_24;
      MR_Integer mercury__diet__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

      mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_20, (MR_Integer) 0));
      mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_20, (MR_Integer) 1));
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(mercury__diet__Var_34, mercury__diet__Var_35, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_117_112_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_7_p_0(mercury__diet__Var_34, mercury__diet__Var_35, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_T_8 = mercury__diet__R_15;
        MR_Word mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
        MR_Word mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

        mercury__diet__T_8 = mercury__diet__next_value_of_T_8;
        mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__next_value_of_STATE_VARIABLE_Acc1_0_16;
        mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__next_value_of_STATE_VARIABLE_Acc2_0_18;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_117_112_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_7_p_0(
  MR_Word mercury__diet__Var_29,
  MR_Word mercury__diet__Var_30,
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
  MR_Box mercury__diet__Lo_9,
  MR_Box mercury__diet__Hi_10,
  MR_Word mercury__diet__STATE_VARIABLE_A_0_13,
  MR_Word * mercury__diet__STATE_VARIABLE_A_14,
  MR_Word mercury__diet__STATE_VARIABLE_B_0_15,
  MR_Word * mercury__diet__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_Word mercury__diet__STATE_VARIABLE_A_17_17;
        MR_Word mercury__diet__STATE_VARIABLE_B_18_18;
        MR_Box mercury__diet__Var_19;
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__diet__Var_30, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__Var_30), mercury__diet__Lo_9);
        if (mercury__diet__succeeded)
        {
          mercury__diet__STATE_VARIABLE_A_17_17 = mercury__diet__add_2_f_0(mercury__diet__Var_29, mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13);
          mercury__diet__STATE_VARIABLE_B_18_18 = mercury__diet__STATE_VARIABLE_B_0_15;
        }
        else
        {
          mercury__diet__STATE_VARIABLE_B_18_18 = mercury__diet__add_2_f_0(mercury__diet__Var_29, mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_B_0_15);
          mercury__diet__STATE_VARIABLE_A_17_17 = mercury__diet__STATE_VARIABLE_A_0_13;
        }
        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
        mercury__diet__Var_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__diet__next_value_of_Lo_9 = mercury__diet__Var_19;
          MR_Word mercury__diet__next_value_of_STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_17_17;
          MR_Word mercury__diet__next_value_of_STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_18_18;

          mercury__diet__Lo_9 = mercury__diet__next_value_of_Lo_9;
          mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__next_value_of_STATE_VARIABLE_A_0_13;
          mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__next_value_of_STATE_VARIABLE_B_0_15;
        }
        continue;
      }
      else
      {
        *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
        *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__diet__difference_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_24,
  MR_Word mercury__diet__SetA_4,
  MR_Word mercury__diet__SetB_5,
  MR_Word * mercury__diet__Set_6)
{
  if ((mercury__diet__SetA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *mercury__diet__Set_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  if ((mercury__diet__SetB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *mercury__diet__Set_6 = mercury__diet__SetA_4;
  else
  {
    MR_Tuple mercury__diet__Head_19;
    MR_Word mercury__diet__Stream_20;
    MR_Word mercury__diet__Var_23;
    MR_Word mercury__diet___RemHead_21;
    MR_Word mercury__diet___RemStream_22;

    mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_24, mercury__diet__SetB_5, &mercury__diet__Head_19, &mercury__diet__Stream_20);
    {
      mercury__diet__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__diet__Var_23, 0) = ((MR_Box) (mercury__diet__Head_19));
    }
    mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_24, mercury__diet__SetA_4, mercury__diet__Var_23, mercury__diet__Stream_20, mercury__diet__Set_6, &mercury__diet___RemHead_21, &mercury__diet___RemStream_22);
  }
}

MR_Word MR_CALL 
mercury__diet__difference_2_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
  MR_Word mercury__diet__SetA_4,
  MR_Word mercury__diet__SetB_5)
{
  {
    MR_Word mercury__diet__Set_6;

    if ((mercury__diet__SetA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__diet__Set_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    if ((mercury__diet__SetB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__diet__Set_6 = mercury__diet__SetA_4;
    else
    {
      MR_Tuple mercury__diet__Head_23;
      MR_Word mercury__diet__Stream_24;
      MR_Word mercury__diet__Var_27;
      MR_Word mercury__diet___RemHead_25;
      MR_Word mercury__diet___RemStream_26;

      mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__SetB_5, &mercury__diet__Head_23, &mercury__diet__Stream_24);
      {
        mercury__diet__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__diet__Var_27, 0) = ((MR_Box) (mercury__diet__Head_23));
      }
      mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__SetA_4, mercury__diet__Var_27, mercury__diet__Stream_24, &mercury__diet__Set_6, &mercury__diet___RemHead_25, &mercury__diet___RemStream_26);
    }
    return mercury__diet__Set_6;
  }
}

MR_Word MR_CALL 
mercury__diet__intersect_list_1_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
  MR_Word mercury__diet__Sets_3)
{
  {
    MR_Word mercury__diet__Set_4;

    mercury__diet__intersect_list_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__Sets_3, &mercury__diet__Set_4);
    return mercury__diet__Set_4;
  }
}

void MR_CALL 
mercury__diet__intersect_list_2_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
  MR_Word mercury__diet__HeadVar__1_1,
  MR_Word * mercury__diet__HeadVar__2_2)
{
  if ((mercury__diet__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *mercury__diet__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word mercury__diet__Set0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__diet__Sets_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 1)));

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__Sets_4, mercury__diet__Set0_3, mercury__diet__HeadVar__2_2);
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word mercury__diet__Var_20,
  MR_Word mercury__diet__HeadVar__2_2,
  MR_Word mercury__diet__HeadVar__3_3,
  MR_Word * mercury__diet__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__HeadVar__4_4 = mercury__diet__HeadVar__3_3;
    else
    {
      MR_Word mercury__diet__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__diet__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__diet__V_15_13;

      mercury__diet__V_15_13 = mercury__diet__inter_2_f_0(mercury__diet__Var_20, mercury__diet__V_10_9, mercury__diet__HeadVar__3_3);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_HeadVar__2_2 = mercury__diet__V_11_10;
        MR_Word mercury__diet__next_value_of_HeadVar__3_3 = mercury__diet__V_15_13;

        mercury__diet__HeadVar__2_2 = mercury__diet__next_value_of_HeadVar__2_2;
        mercury__diet__HeadVar__3_3 = mercury__diet__next_value_of_HeadVar__3_3;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__intersect_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_6,
  MR_Word mercury__diet__SetA_4,
  MR_Word mercury__diet__SetB_5,
  MR_Word * mercury__diet__HeadVar__3_3)
{
  *mercury__diet__HeadVar__3_3 = mercury__diet__inter_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_6, mercury__diet__SetA_4, mercury__diet__SetB_5);
}

MR_Word MR_CALL 
mercury__diet__intersect_2_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_6,
  MR_Word mercury__diet__SetA_4,
  MR_Word mercury__diet__SetB_5)
{
  {
    MR_Word mercury__diet__HeadVar__3_3;

    mercury__diet__HeadVar__3_3 = mercury__diet__inter_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_6, mercury__diet__SetA_4, mercury__diet__SetB_5);
    return mercury__diet__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__diet__inter_2_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_18,
  MR_Word mercury__diet__Input_4,
  MR_Word mercury__diet__Stream0_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_Word mercury__diet__Result_6;
      MR_Integer mercury__diet__Var_15;
      MR_Integer mercury__diet__Var_16;
      MR_Word mercury__diet__TypeInfo_20_20;
      MR_Word mercury__diet__TypeInfo_21_21;

{
#define MR_PROC_LABEL mercury__diet__inter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_18 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_20_20  = TypeInfo;
}
      if ((mercury__diet__Stream0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        mercury__diet__Var_15 = (MR_Integer) 0;
      else
      {
        MR_Tuple mercury__diet__Var_22 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 0)));
        MR_Word mercury__diet__Var_24;
        MR_Word mercury__diet__Var_25;

        mercury__diet__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 1)));
        mercury__diet__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 2)));
        mercury__diet__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 3)));
      }
{
#define MR_PROC_LABEL mercury__diet__inter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_18 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_21_21  = TypeInfo;
}
      if ((mercury__diet__Input_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        mercury__diet__Var_16 = (MR_Integer) 0;
      else
      {
        MR_Tuple mercury__diet__Var_26 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 0)));
        MR_Word mercury__diet__Var_28;
        MR_Word mercury__diet__Var_29;

        mercury__diet__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 1)));
        mercury__diet__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 2)));
        mercury__diet__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 3)));
      }
      mercury__diet__succeeded = (mercury__diet__Var_15 > mercury__diet__Var_16);
      if (mercury__diet__succeeded)
      {
        /* direct tailcall eliminated */
        {
          MR_Word mercury__diet__next_value_of_Input_4 = mercury__diet__Stream0_5;
          MR_Word mercury__diet__next_value_of_Stream0_5 = mercury__diet__Input_4;

          mercury__diet__Input_4 = mercury__diet__next_value_of_Input_4;
          mercury__diet__Stream0_5 = mercury__diet__next_value_of_Stream0_5;
        }
        continue;
      }
      else
      if ((mercury__diet__Stream0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        mercury__diet__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Tuple mercury__diet__Head_11;
        MR_Word mercury__diet__Stream_12;
        MR_Word mercury__diet__Var_17;
        MR_Word mercury__diet__Var_13;
        MR_Word mercury__diet__Var_14;

        mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__Stream0_5, &mercury__diet__Head_11, &mercury__diet__Stream_12);
        {
          mercury__diet__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__diet__Var_17, 0) = ((MR_Box) (mercury__diet__Head_11));
        }
        mercury__diet__inter_2_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__Input_4, mercury__diet__Var_17, mercury__diet__Stream_12, &mercury__diet__Result_6, &mercury__diet__Var_13, &mercury__diet__Var_14);
      }
      return mercury__diet__Result_6;
    }
    break;
  }
}

static void MR_CALL 
mercury__diet__inter_help_8_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_49,
  MR_Tuple mercury__diet__HeadVar__1_1,
  MR_Word mercury__diet__Right0_11,
  MR_Word mercury__diet__Left0_12,
  MR_Word mercury__diet__Head0_13,
  MR_Word mercury__diet__Stream0_14,
  MR_Word * mercury__diet__Result_15,
  MR_Word * mercury__diet__Head_16,
  MR_Word * mercury__diet__Stream_17)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_Box mercury__diet__A_9 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 0));
      MR_Box mercury__diet__B_10 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 1));

      if ((mercury__diet__Head0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__Result_15 = mercury__diet__Left0_12;
        *mercury__diet__Head_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__diet__Stream_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        MR_Box mercury__diet__X_18;
        MR_Box mercury__diet__Y_19;
        MR_Tuple mercury__diet__Var_28 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_13, (MR_Integer) 0)));
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

        mercury__diet__X_18 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_28, (MR_Integer) 0));
        mercury__diet__Y_19 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_28, (MR_Integer) 1));
        mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 5)));
        mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__Y_19, mercury__diet__A_9);
        if (mercury__diet__succeeded)
          if ((mercury__diet__Stream0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__diet__Result_15 = mercury__diet__Left0_12;
            *mercury__diet__Head_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *mercury__diet__Stream_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          else
          {
            MR_Tuple mercury__diet__Head1_24;
            MR_Word mercury__diet__Stream1_25;
            MR_Word mercury__diet__Var_30;

            mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__Stream0_14, &mercury__diet__Head1_24, &mercury__diet__Stream1_25);
            {
              mercury__diet__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__diet__Var_30, 0) = ((MR_Box) (mercury__diet__Head1_24));
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_Head0_13 = mercury__diet__Var_30;
              MR_Word mercury__diet__next_value_of_Stream0_14 = mercury__diet__Stream1_25;

              mercury__diet__Head0_13 = mercury__diet__next_value_of_Head0_13;
              mercury__diet__Stream0_14 = mercury__diet__next_value_of_Stream0_14;
            }
            continue;
          }
        else
        {
          MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 5)));

          mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__B_10, mercury__diet__X_18);
          if (mercury__diet__succeeded)
          {
            MR_Word mercury__diet__Right1_26;
            MR_Integer mercury__diet__Var_68;
            MR_Integer mercury__diet__Var_69;
            MR_Word mercury__diet__TypeInfo_27_76;
            MR_Word mercury__diet__TypeInfo_28_77;

            mercury__diet__inter_2_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__Right0_11, mercury__diet__Head0_13, mercury__diet__Stream0_14, &mercury__diet__Right1_26, mercury__diet__Head_16, mercury__diet__Stream_17);
{
#define MR_PROC_LABEL mercury__diet__inter_help_8_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_49 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_27_76  = TypeInfo;
}
            if ((mercury__diet__Left0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__diet__Var_68 = (MR_Integer) 0;
            else
            {
              MR_Tuple mercury__diet__Var_78 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Left0_12, (MR_Integer) 0)));
              MR_Word mercury__diet__Var_80;
              MR_Word mercury__diet__Var_81;

              mercury__diet__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Left0_12, (MR_Integer) 1)));
              mercury__diet__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Left0_12, (MR_Integer) 2)));
              mercury__diet__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Left0_12, (MR_Integer) 3)));
            }
{
#define MR_PROC_LABEL mercury__diet__inter_help_8_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_49 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_28_77  = TypeInfo;
}
            if ((mercury__diet__Right1_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__diet__Var_69 = (MR_Integer) 0;
            else
            {
              MR_Tuple mercury__diet__Var_82 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Right1_26, (MR_Integer) 0)));
              MR_Word mercury__diet__Var_84;
              MR_Word mercury__diet__Var_85;

              mercury__diet__Var_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Right1_26, (MR_Integer) 1)));
              mercury__diet__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Right1_26, (MR_Integer) 2)));
              mercury__diet__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Right1_26, (MR_Integer) 3)));
            }
            mercury__diet__succeeded = (mercury__diet__Var_68 > mercury__diet__Var_69);
            if (mercury__diet__succeeded)
              if ((mercury__diet__Left0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.reroot\'/2", (MR_String) "L empty");
                  return;
                }
              }
              else
              {
                MR_Tuple mercury__diet__I_61;
                MR_Word mercury__diet__L1_62;

                mercury__diet__take_max_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__Left0_12, &mercury__diet__I_61, &mercury__diet__L1_62);
                *mercury__diet__Result_15 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__I_61, mercury__diet__L1_62, mercury__diet__Right1_26);
              }
            else
            if ((mercury__diet__Right1_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *mercury__diet__Result_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
            {
              MR_Word mercury__diet__R1_67;
              MR_Tuple mercury__diet__I_73;

              mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__Right1_26, &mercury__diet__I_73, &mercury__diet__R1_67);
              *mercury__diet__Result_15 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__I_73, mercury__diet__Left0_12, mercury__diet__R1_67);
            }
          }
          else
          {
            MR_Box mercury__diet__Var_31;
            MR_bool MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 5)));
            MR_bool MR_CALL (* mercury__diet__func_4)(MR_Box, MR_Box, MR_Box);

            mercury__diet__succeeded = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__Y_19, mercury__diet__B_10);
            if (mercury__diet__succeeded)
            {
              MR_Box MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 7)));

              mercury__diet__Var_31 = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__B_10);
            }
            else
              mercury__diet__Var_31 = mercury__diet__B_10;
            mercury__diet__func_4 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 5)));
            mercury__diet__succeeded = mercury__diet__func_4(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__Y_19, mercury__diet__Var_31);
            mercury__diet__succeeded = !(mercury__diet__succeeded);
            if (mercury__diet__succeeded)
            {
              MR_Tuple mercury__diet__Var_32;
              MR_Box mercury__diet__Var_33;
              MR_Box mercury__diet__Var_34;
              MR_Word mercury__diet__Right1_43;
              MR_bool MR_CALL (* mercury__diet__func_5)(MR_Box, MR_Box, MR_Box);

              mercury__diet__inter_2_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__Right0_11, mercury__diet__Head0_13, mercury__diet__Stream0_14, &mercury__diet__Right1_43, mercury__diet__Head_16, mercury__diet__Stream_17);
              mercury__diet__func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 5)));
              mercury__diet__succeeded = mercury__diet__func_5(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__A_9, mercury__diet__X_18);
              if (mercury__diet__succeeded)
                mercury__diet__Var_33 = mercury__diet__X_18;
              else
                mercury__diet__Var_33 = mercury__diet__A_9;
              mercury__diet__Var_34 = mercury__diet__min_elem_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__Y_19, mercury__diet__B_10);
              {
                mercury__diet__Var_32 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__diet__Var_32, 0) = mercury__diet__Var_33;
                MR_hl_field(MR_mktag(0), mercury__diet__Var_32, 1) = mercury__diet__Var_34;
              }
              *mercury__diet__Result_15 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__Var_32, mercury__diet__Left0_12, mercury__diet__Right1_43);
            }
            else
            {
              MR_Word mercury__diet__Left1_27;
              MR_Tuple mercury__diet__Var_35;
              MR_Box mercury__diet__Var_36;
              MR_Tuple mercury__diet__Var_37;
              MR_Box mercury__diet__Var_38;
              MR_Box MR_CALL (* mercury__diet__func_6)(MR_Box, MR_Box);

              mercury__diet__Var_36 = mercury__diet__max_elem_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__X_18, mercury__diet__A_9);
              {
                mercury__diet__Var_35 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__diet__Var_35, 0) = mercury__diet__Var_36;
                MR_hl_field(MR_mktag(0), mercury__diet__Var_35, 1) = mercury__diet__Y_19;
              }
              mercury__diet__Left1_27 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__Var_35, mercury__diet__Left0_12);
              mercury__diet__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 6)));
              mercury__diet__Var_38 = mercury__diet__func_6(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__Y_19);
              {
                mercury__diet__Var_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__diet__Var_37, 0) = mercury__diet__Var_38;
                MR_hl_field(MR_mktag(0), mercury__diet__Var_37, 1) = mercury__diet__B_10;
              }
              /* direct tailcall eliminated */
              {
                MR_Tuple mercury__diet__next_value_of_HeadVar__1_1 = mercury__diet__Var_37;
                MR_Word mercury__diet__next_value_of_Left0_12 = mercury__diet__Left1_27;

                mercury__diet__HeadVar__1_1 = mercury__diet__next_value_of_HeadVar__1_1;
                mercury__diet__Left0_12 = mercury__diet__next_value_of_Left0_12;
              }
              continue;
            }
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__diet__inter_2_6_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_26,
  MR_Word mercury__diet__Input_7,
  MR_Word mercury__diet__Head0_8,
  MR_Word mercury__diet__Stream0_9,
  MR_Word * mercury__diet__Result_10,
  MR_Word * mercury__diet__Head_11,
  MR_Word * mercury__diet__Stream_12)
{
  {
    MR_bool mercury__diet__succeeded;

    if ((mercury__diet__Head0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *mercury__diet__Head_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *mercury__diet__Stream_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Box mercury__diet__X_13;
      MR_Tuple mercury__diet__Var_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_8, (MR_Integer) 0)));
      MR_Box mercury__diet___Y_14;

      mercury__diet__X_13 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_23, (MR_Integer) 0));
      mercury__diet___Y_14 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_23, (MR_Integer) 1));
      if ((mercury__diet__Input_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__diet__Head_11 = mercury__diet__Head0_8;
        *mercury__diet__Stream_12 = mercury__diet__Stream0_9;
      }
      else
      {
        MR_Box mercury__diet__A_15;
        MR_Word mercury__diet__Left0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 2)));
        MR_Word mercury__diet__Right0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 3)));
        MR_Word mercury__diet__Left1_20;
        MR_Word mercury__diet__Head1_21;
        MR_Word mercury__diet__Stream1_22;
        MR_Tuple mercury__diet__Var_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 0)));
        MR_Integer mercury__diet__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 1)));
        MR_Box mercury__diet__B_16;
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

        mercury__diet__A_15 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_24, (MR_Integer) 0));
        mercury__diet__B_16 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_24, (MR_Integer) 1));
        mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 5)));
        mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__X_13, mercury__diet__A_15);
        if (mercury__diet__succeeded)
          mercury__diet__inter_2_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__Left0_18, mercury__diet__Head0_8, mercury__diet__Stream0_9, &mercury__diet__Left1_20, &mercury__diet__Head1_21, &mercury__diet__Stream1_22);
        else
        {
          mercury__diet__Left1_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          mercury__diet__Head1_21 = mercury__diet__Head0_8;
          mercury__diet__Stream1_22 = mercury__diet__Stream0_9;
        }
        mercury__diet__inter_help_8_p_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__Var_24, mercury__diet__Right0_19, mercury__diet__Left1_20, mercury__diet__Head1_21, mercury__diet__Stream1_22, mercury__diet__Result_10, mercury__diet__Head_11, mercury__diet__Stream_12);
      }
    }
  }
}

static MR_Box MR_CALL 
mercury__diet__max_elem_2_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_6,
  MR_Box mercury__diet__X_4,
  MR_Box mercury__diet__Y_5)
{
  {
    MR_bool mercury__diet__succeeded;
    MR_Box mercury__diet__HeadVar__3_3;
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_6, (MR_Integer) 0)), (MR_Integer) 5)));

    mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_6), mercury__diet__Y_5, mercury__diet__X_4);
    if (mercury__diet__succeeded)
      mercury__diet__HeadVar__3_3 = mercury__diet__X_4;
    else
      mercury__diet__HeadVar__3_3 = mercury__diet__Y_5;
    return mercury__diet__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mercury__diet__min_elem_2_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_6,
  MR_Box mercury__diet__X_4,
  MR_Box mercury__diet__Y_5)
{
  {
    MR_bool mercury__diet__succeeded;
    MR_Box mercury__diet__HeadVar__3_3;
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_6, (MR_Integer) 0)), (MR_Integer) 5)));

    mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_6), mercury__diet__X_4, mercury__diet__Y_5);
    if (mercury__diet__succeeded)
      mercury__diet__HeadVar__3_3 = mercury__diet__X_4;
    else
      mercury__diet__HeadVar__3_3 = mercury__diet__Y_5;
    return mercury__diet__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__diet__union_list_1_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
  MR_Word mercury__diet__Sets_3)
{
  {
    MR_Word mercury__diet__Set_4;

    mercury__diet__union_list_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__Sets_3, &mercury__diet__Set_4);
    return mercury__diet__Set_4;
  }
}

void MR_CALL 
mercury__diet__union_list_2_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
  MR_Word mercury__diet__Sets_3,
  MR_Word * mercury__diet__Set_4)
{
  if ((mercury__diet__Sets_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *mercury__diet__Set_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word mercury__diet__SetA_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Sets_3, (MR_Integer) 0)));
    MR_Word mercury__diet__SetBs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Sets_3, (MR_Integer) 1)));

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__SetBs_6, mercury__diet__SetA_5, mercury__diet__Set_4);
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word mercury__diet__Var_20,
  MR_Word mercury__diet__HeadVar__2_2,
  MR_Word mercury__diet__HeadVar__3_3,
  MR_Word * mercury__diet__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__HeadVar__4_4 = mercury__diet__HeadVar__3_3;
    else
    {
      MR_Word mercury__diet__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__diet__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__diet__V_15_13;

      mercury__diet__union_3_p_0(mercury__diet__Var_20, mercury__diet__V_10_9, mercury__diet__HeadVar__3_3, &mercury__diet__V_15_13);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_HeadVar__2_2 = mercury__diet__V_11_10;
        MR_Word mercury__diet__next_value_of_HeadVar__3_3 = mercury__diet__V_15_13;

        mercury__diet__HeadVar__2_2 = mercury__diet__next_value_of_HeadVar__2_2;
        mercury__diet__HeadVar__3_3 = mercury__diet__next_value_of_HeadVar__3_3;
      }
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__diet__union_2_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
  MR_Word mercury__diet__DietA_4,
  MR_Word mercury__diet__DietB_5)
{
  {
    MR_Word mercury__diet__DietAB_6;

    mercury__diet__union_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__DietA_4, mercury__diet__DietB_5, &mercury__diet__DietAB_6);
    return mercury__diet__DietAB_6;
  }
}

void MR_CALL 
mercury__diet__union_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_16,
  MR_Word mercury__diet__Input_4,
  MR_Word mercury__diet__Stream0_5,
  MR_Word * mercury__diet__Result_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_Integer mercury__diet__Var_13;
      MR_Integer mercury__diet__Var_14;
      MR_Word mercury__diet__TypeInfo_18_18;
      MR_Word mercury__diet__TypeInfo_19_19;

{
#define MR_PROC_LABEL mercury__diet__union_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_16 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_18_18  = TypeInfo;
}
      if ((mercury__diet__Stream0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        mercury__diet__Var_13 = (MR_Integer) 0;
      else
      {
        MR_Tuple mercury__diet__Var_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 0)));
        MR_Word mercury__diet__Var_22;
        MR_Word mercury__diet__Var_23;

        mercury__diet__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 1)));
        mercury__diet__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 2)));
        mercury__diet__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 3)));
      }
{
#define MR_PROC_LABEL mercury__diet__union_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_16 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_19_19  = TypeInfo;
}
      if ((mercury__diet__Input_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        mercury__diet__Var_14 = (MR_Integer) 0;
      else
      {
        MR_Tuple mercury__diet__Var_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 0)));
        MR_Word mercury__diet__Var_26;
        MR_Word mercury__diet__Var_27;

        mercury__diet__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 1)));
        mercury__diet__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 2)));
        mercury__diet__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 3)));
      }
      mercury__diet__succeeded = (mercury__diet__Var_13 > mercury__diet__Var_14);
      if (mercury__diet__succeeded)
      {
        /* direct tailcall eliminated */
        {
          MR_Word mercury__diet__next_value_of_Input_4 = mercury__diet__Stream0_5;
          MR_Word mercury__diet__next_value_of_Stream0_5 = mercury__diet__Input_4;

          mercury__diet__Input_4 = mercury__diet__next_value_of_Input_4;
          mercury__diet__Stream0_5 = mercury__diet__next_value_of_Stream0_5;
        }
        continue;
      }
      else
      {
        MR_Word mercury__diet__Head1_7;
        MR_Word mercury__diet__Stream1_8;
        MR_Word mercury__diet__Left2_9;
        MR_Word mercury__diet__Head2_10;
        MR_Word mercury__diet__Stream2_11;
        MR_Word mercury__diet__Var_15;

        if ((mercury__diet__Stream0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          mercury__diet__Head1_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          mercury__diet__Stream1_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        else
        {
          MR_Tuple mercury__diet__X_40;

          mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_16, mercury__diet__Stream0_5, &mercury__diet__X_40, &mercury__diet__Stream1_8);
          {
            mercury__diet__Head1_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__diet__Head1_7, 0) = ((MR_Box) (mercury__diet__X_40));
          }
        }
        mercury__diet__Var_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__diet__union_2_7_p_0(mercury__diet__TypeClassInfo_for_diet_element_16, mercury__diet__Input_4, mercury__diet__Var_15, mercury__diet__Head1_7, mercury__diet__Stream1_8, &mercury__diet__Left2_9, &mercury__diet__Head2_10, &mercury__diet__Stream2_11);
        if ((mercury__diet__Head2_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__diet__Result_6 = mercury__diet__Left2_9;
        else
        {
          MR_Tuple mercury__diet__I_12 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head2_10, (MR_Integer) 0)));

          *mercury__diet__Result_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_16, mercury__diet__I_12, mercury__diet__Left2_9, mercury__diet__Stream2_11);
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__diet__union_helper_9_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_56,
  MR_Word mercury__diet__Left0_10,
  MR_Tuple mercury__diet__HeadVar__2_2,
  MR_Word mercury__diet__Right0_13,
  MR_Word mercury__diet__Limit_14,
  MR_Word mercury__diet__Head0_15,
  MR_Word mercury__diet__Stream0_16,
  MR_Word * mercury__diet__Left_17,
  MR_Word * mercury__diet__Head_18,
  MR_Word * mercury__diet__Stream_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_Box mercury__diet__A_11 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__2_2, (MR_Integer) 0));
      MR_Box mercury__diet__B_12 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__2_2, (MR_Integer) 1));

      if ((mercury__diet__Head0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__Left_17 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__HeadVar__2_2, mercury__diet__Left0_10, mercury__diet__Right0_13);
        *mercury__diet__Head_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__diet__Stream_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        MR_Box mercury__diet__X_20;
        MR_Box mercury__diet__Y_21;
        MR_Tuple mercury__diet__Var_27 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_15, (MR_Integer) 0)));
        MR_Box mercury__diet__Var_28;
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);
        MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box);
        MR_bool MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box, MR_Box);

        mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_27, (MR_Integer) 0));
        mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_27, (MR_Integer) 1));
        mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
        mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__Y_21, mercury__diet__A_11);
        if (mercury__diet__succeeded)
        {
          mercury__diet__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 7)));
          mercury__diet__Var_28 = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__A_11);
          mercury__diet__func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
          mercury__diet__succeeded = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__Y_21, mercury__diet__Var_28);
        }
        if (mercury__diet__succeeded)
        {
          MR_Word mercury__diet__Left1_22;
          MR_Word mercury__diet__Head1_23;
          MR_Word mercury__diet__Stream1_24;

          mercury__diet__Left1_22 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__Var_27, mercury__diet__Left0_10);
          if ((mercury__diet__Stream0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mercury__diet__Head1_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__diet__Stream1_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          else
          {
            MR_Tuple mercury__diet__X_68;

            mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__Stream0_16, &mercury__diet__X_68, &mercury__diet__Stream1_24);
            {
              mercury__diet__Head1_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__diet__Head1_23, 0) = ((MR_Box) (mercury__diet__X_68));
            }
          }
          /* direct tailcall eliminated */
          {
            MR_Word mercury__diet__next_value_of_Left0_10 = mercury__diet__Left1_22;
            MR_Word mercury__diet__next_value_of_Head0_15 = mercury__diet__Head1_23;
            MR_Word mercury__diet__next_value_of_Stream0_16 = mercury__diet__Stream1_24;

            mercury__diet__Left0_10 = mercury__diet__next_value_of_Left0_10;
            mercury__diet__Head0_15 = mercury__diet__next_value_of_Head0_15;
            mercury__diet__Stream0_16 = mercury__diet__next_value_of_Stream0_16;
          }
          continue;
        }
        else
        {
          MR_Box mercury__diet__Var_31;
          MR_bool MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
          MR_Box MR_CALL (* mercury__diet__func_4)(MR_Box, MR_Box);
          MR_bool MR_CALL (* mercury__diet__func_5)(MR_Box, MR_Box, MR_Box);

          mercury__diet__succeeded = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__B_12, mercury__diet__X_20);
          if (mercury__diet__succeeded)
          {
            mercury__diet__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 6)));
            mercury__diet__Var_31 = mercury__diet__func_4(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__B_12);
            mercury__diet__func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
            mercury__diet__succeeded = mercury__diet__func_5(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__Var_31, mercury__diet__X_20);
          }
          if (mercury__diet__succeeded)
          {
            MR_Word mercury__diet__Right1_25;

            mercury__diet__union_2_7_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__Right0_13, mercury__diet__Limit_14, mercury__diet__Head0_15, mercury__diet__Stream0_16, &mercury__diet__Right1_25, mercury__diet__Head_18, mercury__diet__Stream_19);
            *mercury__diet__Left_17 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__HeadVar__2_2, mercury__diet__Left0_10, mercury__diet__Right1_25);
          }
          else
          {
            MR_bool MR_CALL (* mercury__diet__func_6)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));

            mercury__diet__succeeded = mercury__diet__func_6(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__B_12, mercury__diet__Y_21);
            mercury__diet__succeeded = !(mercury__diet__succeeded);
            if (mercury__diet__succeeded)
            {
              MR_Tuple mercury__diet__Var_33;
              MR_Box mercury__diet__Var_34;
              MR_Word mercury__diet__Head1_43;
              MR_Word mercury__diet__Stream1_44;
              MR_bool MR_CALL (* mercury__diet__func_7)(MR_Box, MR_Box, MR_Box);

              if ((mercury__diet__Stream0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                mercury__diet__Head1_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__diet__Stream1_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Tuple mercury__diet__X_82;

                mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__Stream0_16, &mercury__diet__X_82, &mercury__diet__Stream1_44);
                {
                  mercury__diet__Head1_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__diet__Head1_43, 0) = ((MR_Box) (mercury__diet__X_82));
                }
              }
              mercury__diet__func_7 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
              mercury__diet__succeeded = mercury__diet__func_7(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__A_11, mercury__diet__X_20);
              if (mercury__diet__succeeded)
                mercury__diet__Var_34 = mercury__diet__A_11;
              else
                mercury__diet__Var_34 = mercury__diet__X_20;
              {
                mercury__diet__Var_33 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__diet__Var_33, 0) = mercury__diet__Var_34;
                MR_hl_field(MR_mktag(0), mercury__diet__Var_33, 1) = mercury__diet__B_12;
              }
              /* direct tailcall eliminated */
              {
                MR_Tuple mercury__diet__next_value_of_HeadVar__2_2 = mercury__diet__Var_33;
                MR_Word mercury__diet__next_value_of_Head0_15 = mercury__diet__Head1_43;
                MR_Word mercury__diet__next_value_of_Stream0_16 = mercury__diet__Stream1_44;

                mercury__diet__HeadVar__2_2 = mercury__diet__next_value_of_HeadVar__2_2;
                mercury__diet__Head0_15 = mercury__diet__next_value_of_Head0_15;
                mercury__diet__Stream0_16 = mercury__diet__next_value_of_Stream0_16;
              }
              continue;
            }
            else
            {
              MR_Box mercury__diet__LimitValue_26;
              MR_bool MR_CALL (* mercury__diet__func_8)(MR_Box, MR_Box, MR_Box);

              mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Limit_14)) == (MR_mktag((MR_Integer) 1)));
              if (mercury__diet__succeeded)
              {
                mercury__diet__LimitValue_26 = (MR_hl_field(MR_mktag(1), mercury__diet__Limit_14, (MR_Integer) 0));
                mercury__diet__func_8 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
                mercury__diet__succeeded = mercury__diet__func_8(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__Y_21, mercury__diet__LimitValue_26);
                mercury__diet__succeeded = !(mercury__diet__succeeded);
              }
              if (mercury__diet__succeeded)
              {
                MR_Tuple mercury__diet__Var_35;
                MR_Box mercury__diet__Var_36;
                MR_bool MR_CALL (* mercury__diet__func_9)(MR_Box, MR_Box, MR_Box);

                *mercury__diet__Left_17 = mercury__diet__Left0_10;
                mercury__diet__func_9 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
                mercury__diet__succeeded = mercury__diet__func_9(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__A_11, mercury__diet__X_20);
                if (mercury__diet__succeeded)
                  mercury__diet__Var_36 = mercury__diet__A_11;
                else
                  mercury__diet__Var_36 = mercury__diet__X_20;
                {
                  mercury__diet__Var_35 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__diet__Var_35, 0) = mercury__diet__Var_36;
                  MR_hl_field(MR_mktag(0), mercury__diet__Var_35, 1) = mercury__diet__Y_21;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__diet__Head_18 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__Var_35));
                }
                *mercury__diet__Stream_19 = mercury__diet__Stream0_16;
              }
              else
              {
                MR_Word mercury__diet__Var_37;
                MR_Tuple mercury__diet__Var_38;
                MR_Box mercury__diet__Var_39;
                MR_Word mercury__diet__Right1_47;
                MR_bool MR_CALL (* mercury__diet__func_10)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));

                mercury__diet__succeeded = mercury__diet__func_10(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__A_11, mercury__diet__X_20);
                if (mercury__diet__succeeded)
                  mercury__diet__Var_39 = mercury__diet__A_11;
                else
                  mercury__diet__Var_39 = mercury__diet__X_20;
                {
                  mercury__diet__Var_38 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__diet__Var_38, 0) = mercury__diet__Var_39;
                  MR_hl_field(MR_mktag(0), mercury__diet__Var_38, 1) = mercury__diet__Y_21;
                }
                {
                  mercury__diet__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__diet__Var_37, 0) = ((MR_Box) (mercury__diet__Var_38));
                }
                mercury__diet__union_2_7_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__Right0_13, mercury__diet__Limit_14, mercury__diet__Var_37, mercury__diet__Stream0_16, &mercury__diet__Right1_47, mercury__diet__Head_18, mercury__diet__Stream_19);
                *mercury__diet__Left_17 = mercury__diet__reroot_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__Left0_10, mercury__diet__Right1_47);
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
mercury__diet__union_2_7_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_30,
  MR_Word mercury__diet__Input_8,
  MR_Word mercury__diet__Limit_9,
  MR_Word mercury__diet__Head0_10,
  MR_Word mercury__diet__Stream0_11,
  MR_Word * mercury__diet__Left_12,
  MR_Word * mercury__diet__Head_13,
  MR_Word * mercury__diet__Stream_14)
{
  {
    MR_bool mercury__diet__succeeded;

    if ((mercury__diet__Head0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__Left_12 = mercury__diet__Input_8;
      *mercury__diet__Head_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *mercury__diet__Stream_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Box mercury__diet__X_15;
      MR_Tuple mercury__diet__Var_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_10, (MR_Integer) 0)));
      MR_Box mercury__diet___Y_16;

      mercury__diet__X_15 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_25, (MR_Integer) 0));
      mercury__diet___Y_16 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_25, (MR_Integer) 1));
      if ((mercury__diet__Input_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__Left_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__diet__Head_13 = mercury__diet__Head0_10;
        *mercury__diet__Stream_14 = mercury__diet__Stream0_11;
      }
      else
      {
        MR_Box mercury__diet__A_17;
        MR_Word mercury__diet__Left0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_8, (MR_Integer) 2)));
        MR_Word mercury__diet__Right0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_8, (MR_Integer) 3)));
        MR_Word mercury__diet__Left1_22;
        MR_Word mercury__diet__Head1_23;
        MR_Word mercury__diet__Stream1_24;
        MR_Tuple mercury__diet__Var_26 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Input_8, (MR_Integer) 0)));
        MR_Integer mercury__diet__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Input_8, (MR_Integer) 1)));
        MR_Box mercury__diet__B_18;
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

        mercury__diet__A_17 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_26, (MR_Integer) 0));
        mercury__diet__B_18 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_26, (MR_Integer) 1));
        mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 5)));
        mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_30), mercury__diet__X_15, mercury__diet__A_17);
        if (mercury__diet__succeeded)
        {
          MR_Word mercury__diet__Var_27;
          MR_Box mercury__diet__Var_28;
          MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 7)));

          mercury__diet__Var_28 = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_30), mercury__diet__A_17);
          {
            mercury__diet__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__diet__Var_27, 0) = mercury__diet__Var_28;
          }
          mercury__diet__union_2_7_p_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__Left0_20, mercury__diet__Var_27, mercury__diet__Head0_10, mercury__diet__Stream0_11, &mercury__diet__Left1_22, &mercury__diet__Head1_23, &mercury__diet__Stream1_24);
        }
        else
        {
          mercury__diet__Left1_22 = mercury__diet__Left0_20;
          mercury__diet__Head1_23 = mercury__diet__Head0_10;
          mercury__diet__Stream1_24 = mercury__diet__Stream0_11;
        }
        mercury__diet__union_helper_9_p_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__Left1_22, mercury__diet__Var_26, mercury__diet__Right0_21, mercury__diet__Limit_9, mercury__diet__Head1_23, mercury__diet__Stream1_24, mercury__diet__Left_12, mercury__diet__Head_13, mercury__diet__Stream_14);
      }
    }
  }
}

void MR_CALL 
mercury__diet__split_5_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_25,
  MR_Box mercury__diet__X_6,
  MR_Word mercury__diet__Set_7,
  MR_Word * mercury__diet__Lesser_8,
  MR_Word * mercury__diet__IsPresent_9,
  MR_Word * mercury__diet__Greater_10)
{
  {
    MR_bool mercury__diet__succeeded;

    if ((mercury__diet__Set_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__IsPresent_9 = (MR_Integer) 0;
      *mercury__diet__Lesser_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *mercury__diet__Greater_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Box mercury__diet__A_11;
      MR_Box mercury__diet__B_12;
      MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_7, (MR_Integer) 2)));
      MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_7, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_18 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set_7, (MR_Integer) 0)));
      MR_Integer mercury__diet__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set_7, (MR_Integer) 1)));
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

      mercury__diet__A_11 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_18, (MR_Integer) 0));
      mercury__diet__B_12 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_18, (MR_Integer) 1));
      mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_25, (MR_Integer) 0)), (MR_Integer) 5)));
      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_25), mercury__diet__X_6, mercury__diet__A_11);
      if (mercury__diet__succeeded)
      {
        MR_Word mercury__diet__RL_16;

        mercury__diet__split_5_p_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__X_6, mercury__diet__L_14, mercury__diet__Lesser_8, mercury__diet__IsPresent_9, &mercury__diet__RL_16);
        *mercury__diet__Greater_10 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__Var_18, mercury__diet__RL_16, mercury__diet__R_15);
      }
      else
      {
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_25, (MR_Integer) 0)), (MR_Integer) 5)));

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_25), mercury__diet__B_12, mercury__diet__X_6);
        if (mercury__diet__succeeded)
        {
          MR_Word mercury__diet__LR_17;

          mercury__diet__split_5_p_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__X_6, mercury__diet__R_15, &mercury__diet__LR_17, mercury__diet__IsPresent_9, mercury__diet__Greater_10);
          *mercury__diet__Lesser_8 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__Var_18, mercury__diet__L_14, mercury__diet__LR_17);
        }
        else
        {
          MR_Word mercury__diet__TypeInfo_27_27;
          MR_Word mercury__diet__TypeInfo_29_29;

          *mercury__diet__IsPresent_9 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__diet__split_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_25 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_27_27  = TypeInfo;
}
          mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_27_27, mercury__diet__X_6, mercury__diet__A_11);
          if (mercury__diet__succeeded)
            *mercury__diet__Lesser_8 = mercury__diet__L_14;
          else
          {
            MR_Tuple mercury__diet__Var_21;
            MR_Box mercury__diet__Var_22;
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_25, (MR_Integer) 0)), (MR_Integer) 7)));

            mercury__diet__Var_22 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_25), mercury__diet__X_6);
            {
              mercury__diet__Var_21 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__diet__Var_21, 0) = mercury__diet__A_11;
              MR_hl_field(MR_mktag(0), mercury__diet__Var_21, 1) = mercury__diet__Var_22;
            }
            *mercury__diet__Lesser_8 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__Var_21, mercury__diet__L_14);
          }
{
#define MR_PROC_LABEL mercury__diet__split_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_25 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_29_29  = TypeInfo;
}
          mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_29_29, mercury__diet__X_6, mercury__diet__B_12);
          if (mercury__diet__succeeded)
            *mercury__diet__Greater_10 = mercury__diet__R_15;
          else
          {
            MR_Tuple mercury__diet__Var_23;
            MR_Box mercury__diet__Var_24;
            MR_Box MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_25, (MR_Integer) 0)), (MR_Integer) 6)));

            mercury__diet__Var_24 = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_25), mercury__diet__X_6);
            {
              mercury__diet__Var_23 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__diet__Var_23, 0) = mercury__diet__Var_24;
              MR_hl_field(MR_mktag(0), mercury__diet__Var_23, 1) = mercury__diet__B_12;
            }
            *mercury__diet__Greater_10 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__Var_23, mercury__diet__R_15);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__diet__remove_least_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_16,
  MR_Box * mercury__diet__X_4,
  MR_Word mercury__diet__Set0_5,
  MR_Word * mercury__diet__Set_6)
{
  {
    MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Set0_5)) == (MR_mktag((MR_Integer) 1)));
    MR_Box mercury__diet__Y_11;
    MR_Word mercury__diet__Stream_12;
    MR_Tuple mercury__diet__Var_13;
    MR_Tuple mercury__diet__Var_19;
    MR_Integer mercury__diet__Var_20;
    MR_Word mercury__diet__Var_21;
    MR_Word mercury__diet__Var_22;
    MR_Word mercury__diet__TypeInfo_18_18;
    MR_Integer mercury__diet__TypeInfoIndex_17;

    if (mercury__diet__succeeded)
    {
      mercury__diet__Var_19 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 0)));
      mercury__diet__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 1)));
      mercury__diet__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 2)));
      mercury__diet__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 3)));
      mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_16, mercury__diet__Set0_5, &mercury__diet__Var_13, &mercury__diet__Stream_12);
      *mercury__diet__X_4 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_13, (MR_Integer) 0));
      mercury__diet__Y_11 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_13, (MR_Integer) 1));
      mercury__diet__TypeInfoIndex_17 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__diet__remove_least_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_16 ;
	Index =  mercury__diet__TypeInfoIndex_17 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_18_18  = TypeInfo;
}
      mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_18_18, *mercury__diet__X_4, mercury__diet__Y_11);
      if (mercury__diet__succeeded)
        *mercury__diet__Set_6 = mercury__diet__Stream_12;
      else
      {
        MR_Tuple mercury__diet__Var_14;
        MR_Box mercury__diet__Var_15;
        MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_16, (MR_Integer) 0)), (MR_Integer) 6)));

        mercury__diet__Var_15 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_16), *mercury__diet__X_4);
        {
          mercury__diet__Var_14 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__diet__Var_14, 0) = mercury__diet__Var_15;
          MR_hl_field(MR_mktag(0), mercury__diet__Var_14, 1) = mercury__diet__Y_11;
        }
        *mercury__diet__Set_6 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_16, mercury__diet__Var_14, mercury__diet__Stream_12);
      }
      mercury__diet__succeeded = MR_TRUE;
    }
    return mercury__diet__succeeded;
  }
}

MR_bool MR_CALL 
mercury__diet__remove_list_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
  MR_Word mercury__diet__X_4,
  MR_Word mercury__diet__Set0_5,
  MR_Word * mercury__diet__Set_6)
{
  {
    MR_bool mercury__diet__succeeded;
    MR_Word mercury__diet__SetX_7;

    mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__X_4, &mercury__diet__SetX_7);
    if ((mercury__diet__SetX_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__diet__succeeded = MR_TRUE;
    else
    {
      MR_Tuple mercury__diet__XY1_19;
      MR_Word mercury__diet__R1_20;
      MR_Tuple mercury__diet__XY2_21;
      MR_Word mercury__diet__R2_22;
      MR_Word mercury__diet__Var_23;
      MR_Word mercury__diet__Var_24;
      MR_Tuple mercury__diet__Var_15;
      MR_Integer mercury__diet__Var_16;
      MR_Word mercury__diet__Var_17;
      MR_Word mercury__diet__Var_18;

      mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Set0_5)) == (MR_mktag((MR_Integer) 1)));
      if (mercury__diet__succeeded)
      {
        mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 0)));
        mercury__diet__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 1)));
        mercury__diet__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 2)));
        mercury__diet__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 3)));
        mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__SetX_7, &mercury__diet__XY1_19, &mercury__diet__R1_20);
        mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__Set0_5, &mercury__diet__XY2_21, &mercury__diet__R2_22);
        mercury__diet__Var_23 = (MR_Integer) 1;
        mercury__diet__subset_2_5_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__XY1_19, mercury__diet__R1_20, mercury__diet__XY2_21, mercury__diet__R2_22, &mercury__diet__Var_24);
        mercury__diet__succeeded = (mercury__diet__Var_23 == mercury__diet__Var_24);
      }
    }
    if (mercury__diet__succeeded)
    {
      if ((mercury__diet__Set0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__diet__Set_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      if ((mercury__diet__SetX_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__diet__Set_6 = mercury__diet__Set0_5;
      else
      {
        MR_Tuple mercury__diet__Head_40;
        MR_Word mercury__diet__Stream_41;
        MR_Word mercury__diet__Var_44;
        MR_Word mercury__diet___RemHead_42;
        MR_Word mercury__diet___RemStream_43;

        mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__SetX_7, &mercury__diet__Head_40, &mercury__diet__Stream_41);
        {
          mercury__diet__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__diet__Var_44, 0) = ((MR_Box) (mercury__diet__Head_40));
        }
        mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__Set0_5, mercury__diet__Var_44, mercury__diet__Stream_41, mercury__diet__Set_6, &mercury__diet___RemHead_42, &mercury__diet___RemStream_43);
      }
      mercury__diet__succeeded = MR_TRUE;
    }
    return mercury__diet__succeeded;
  }
}

MR_Word MR_CALL 
mercury__diet__delete_list_2_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
  MR_Word mercury__diet__Set0_4,
  MR_Word mercury__diet__List_5)
{
  {
    MR_Word mercury__diet__Set_6;

    mercury__diet__delete_list_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__List_5, mercury__diet__Set0_4, &mercury__diet__Set_6);
    return mercury__diet__Set_6;
  }
}

void MR_CALL 
mercury__diet__delete_list_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
  MR_Word mercury__diet__List_4,
  MR_Word mercury__diet__Set0_5,
  MR_Word * mercury__diet__Set_6)
{
  {
    MR_Word mercury__diet__Var_7;

    mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__List_4, &mercury__diet__Var_7);
    if ((mercury__diet__Set0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__Set_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    if ((mercury__diet__Var_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__Set_6 = mercury__diet__Set0_5;
    else
    {
      MR_Tuple mercury__diet__Head_26;
      MR_Word mercury__diet__Stream_27;
      MR_Word mercury__diet__Var_30;
      MR_Word mercury__diet___RemHead_28;
      MR_Word mercury__diet___RemStream_29;

      mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__Var_7, &mercury__diet__Head_26, &mercury__diet__Stream_27);
      {
        mercury__diet__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__diet__Var_30, 0) = ((MR_Box) (mercury__diet__Head_26));
      }
      mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__Set0_5, mercury__diet__Var_30, mercury__diet__Stream_27, mercury__diet__Set_6, &mercury__diet___RemHead_28, &mercury__diet___RemStream_29);
    }
  }
}

static void MR_CALL 
mercury__diet__diff_helper_8_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_44,
  MR_Tuple mercury__diet__HeadVar__1_1,
  MR_Word mercury__diet__Right0_11,
  MR_Word mercury__diet__Left0_12,
  MR_Word mercury__diet__Head0_13,
  MR_Word mercury__diet__Stream0_14,
  MR_Word * mercury__diet__Output_15,
  MR_Word * mercury__diet__Head_16,
  MR_Word * mercury__diet__Stream_17)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_Box mercury__diet__A_9 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 0));
      MR_Box mercury__diet__B_10 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 1));

      if ((mercury__diet__Head0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__Output_15 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__HeadVar__1_1, mercury__diet__Left0_12, mercury__diet__Right0_11);
        *mercury__diet__Head_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__diet__Stream_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        MR_Box mercury__diet__X_18;
        MR_Box mercury__diet__Y_19;
        MR_Tuple mercury__diet__Var_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_13, (MR_Integer) 0)));
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

        mercury__diet__X_18 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_24, (MR_Integer) 0));
        mercury__diet__Y_19 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_24, (MR_Integer) 1));
        mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 5)));
        mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_44), mercury__diet__Y_19, mercury__diet__A_9);
        if (mercury__diet__succeeded)
        {
          MR_Word mercury__diet__Head1_20;
          MR_Word mercury__diet__Stream1_21;

          if ((mercury__diet__Stream0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mercury__diet__Head1_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__diet__Stream1_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          else
          {
            MR_Tuple mercury__diet__X_54;

            mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__Stream0_14, &mercury__diet__X_54, &mercury__diet__Stream1_21);
            {
              mercury__diet__Head1_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__diet__Head1_20, 0) = ((MR_Box) (mercury__diet__X_54));
            }
          }
          /* direct tailcall eliminated */
          {
            MR_Word mercury__diet__next_value_of_Head0_13 = mercury__diet__Head1_20;
            MR_Word mercury__diet__next_value_of_Stream0_14 = mercury__diet__Stream1_21;

            mercury__diet__Head0_13 = mercury__diet__next_value_of_Head0_13;
            mercury__diet__Stream0_14 = mercury__diet__next_value_of_Stream0_14;
          }
          continue;
        }
        else
        {
          MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 5)));

          mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_44), mercury__diet__B_10, mercury__diet__X_18);
          if (mercury__diet__succeeded)
          {
            MR_Word mercury__diet__Right1_22;

            mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__Right0_11, mercury__diet__Head0_13, mercury__diet__Stream0_14, &mercury__diet__Right1_22, mercury__diet__Head_16, mercury__diet__Stream_17);
            *mercury__diet__Output_15 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__HeadVar__1_1, mercury__diet__Left0_12, mercury__diet__Right1_22);
          }
          else
          {
            MR_bool MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 5)));

            mercury__diet__succeeded = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_44), mercury__diet__A_9, mercury__diet__X_18);
            if (mercury__diet__succeeded)
            {
              MR_Word mercury__diet__Left1_23;
              MR_Tuple mercury__diet__Var_27;
              MR_Box mercury__diet__Var_28;
              MR_Tuple mercury__diet__Var_29;
              MR_Box MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 7)));

              mercury__diet__Var_28 = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_44), mercury__diet__X_18);
              {
                mercury__diet__Var_27 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__diet__Var_27, 0) = mercury__diet__A_9;
                MR_hl_field(MR_mktag(0), mercury__diet__Var_27, 1) = mercury__diet__Var_28;
              }
              mercury__diet__Left1_23 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__Var_27, mercury__diet__Left0_12);
              {
                mercury__diet__Var_29 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__diet__Var_29, 0) = mercury__diet__X_18;
                MR_hl_field(MR_mktag(0), mercury__diet__Var_29, 1) = mercury__diet__B_10;
              }
              /* direct tailcall eliminated */
              {
                MR_Tuple mercury__diet__next_value_of_HeadVar__1_1 = mercury__diet__Var_29;
                MR_Word mercury__diet__next_value_of_Left0_12 = mercury__diet__Left1_23;

                mercury__diet__HeadVar__1_1 = mercury__diet__next_value_of_HeadVar__1_1;
                mercury__diet__Left0_12 = mercury__diet__next_value_of_Left0_12;
              }
              continue;
            }
            else
            {
              MR_bool MR_CALL (* mercury__diet__func_4)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 5)));

              mercury__diet__succeeded = mercury__diet__func_4(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_44), mercury__diet__Y_19, mercury__diet__B_10);
              if (mercury__diet__succeeded)
              {
                MR_Tuple mercury__diet__Var_30;
                MR_Box mercury__diet__Var_31;
                MR_Word mercury__diet__Head1_33;
                MR_Word mercury__diet__Stream1_34;
                MR_Box MR_CALL (* mercury__diet__func_5)(MR_Box, MR_Box);

                if ((mercury__diet__Stream0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  mercury__diet__Head1_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  mercury__diet__Stream1_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                else
                {
                  MR_Tuple mercury__diet__X_68;

                  mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__Stream0_14, &mercury__diet__X_68, &mercury__diet__Stream1_34);
                  {
                    mercury__diet__Head1_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__diet__Head1_33, 0) = ((MR_Box) (mercury__diet__X_68));
                  }
                }
                mercury__diet__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 6)));
                mercury__diet__Var_31 = mercury__diet__func_5(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_44), mercury__diet__Y_19);
                {
                  mercury__diet__Var_30 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__diet__Var_30, 0) = mercury__diet__Var_31;
                  MR_hl_field(MR_mktag(0), mercury__diet__Var_30, 1) = mercury__diet__B_10;
                }
                /* direct tailcall eliminated */
                {
                  MR_Tuple mercury__diet__next_value_of_HeadVar__1_1 = mercury__diet__Var_30;
                  MR_Word mercury__diet__next_value_of_Head0_13 = mercury__diet__Head1_33;
                  MR_Word mercury__diet__next_value_of_Stream0_14 = mercury__diet__Stream1_34;

                  mercury__diet__HeadVar__1_1 = mercury__diet__next_value_of_HeadVar__1_1;
                  mercury__diet__Head0_13 = mercury__diet__next_value_of_Head0_13;
                  mercury__diet__Stream0_14 = mercury__diet__next_value_of_Stream0_14;
                }
                continue;
              }
              else
              {
                MR_Word mercury__diet__Right1_35;

                mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__Right0_11, mercury__diet__Head0_13, mercury__diet__Stream0_14, &mercury__diet__Right1_35, mercury__diet__Head_16, mercury__diet__Stream_17);
                *mercury__diet__Output_15 = mercury__diet__reroot_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__Left0_12, mercury__diet__Right1_35);
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
mercury__diet__diff_6_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
  MR_Word mercury__diet__Input_7,
  MR_Word mercury__diet__Head0_8,
  MR_Word mercury__diet__Stream0_9,
  MR_Word * mercury__diet__Output_10,
  MR_Word * mercury__diet__Head_11,
  MR_Word * mercury__diet__Stream_12)
{
  {
    MR_bool mercury__diet__succeeded;

    if ((mercury__diet__Head0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__Output_10 = mercury__diet__Input_7;
      *mercury__diet__Head_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *mercury__diet__Stream_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Tuple mercury__diet__Var_28 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_8, (MR_Integer) 0)));

      if ((mercury__diet__Input_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__Output_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__diet__Head_11 = mercury__diet__Head0_8;
        *mercury__diet__Stream_12 = mercury__diet__Stream0_9;
      }
      else
      {
        MR_Box mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_28, (MR_Integer) 0));
        MR_Box mercury__diet__A_16;
        MR_Word mercury__diet__Left0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 2)));
        MR_Word mercury__diet__Right0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 3)));
        MR_Word mercury__diet__Left1_21;
        MR_Word mercury__diet__Head1_22;
        MR_Word mercury__diet__Stream1_23;
        MR_Tuple mercury__diet__Var_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 0)));
        MR_Box mercury__diet___Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_28, (MR_Integer) 1));
        MR_Integer mercury__diet__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 1)));
        MR_Box mercury__diet__B_17;
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

        mercury__diet__A_16 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_25, (MR_Integer) 0));
        mercury__diet__B_17 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_25, (MR_Integer) 1));
        mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_27, (MR_Integer) 0)), (MR_Integer) 5)));
        mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_27), mercury__diet__X_14, mercury__diet__A_16);
        if (mercury__diet__succeeded)
          mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__Left0_19, mercury__diet__Head0_8, mercury__diet__Stream0_9, &mercury__diet__Left1_21, &mercury__diet__Head1_22, &mercury__diet__Stream1_23);
        else
        {
          mercury__diet__Left1_21 = mercury__diet__Left0_19;
          mercury__diet__Head1_22 = mercury__diet__Head0_8;
          mercury__diet__Stream1_23 = mercury__diet__Stream0_9;
        }
        mercury__diet__diff_helper_8_p_0(mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__Var_25, mercury__diet__Right0_20, mercury__diet__Left1_21, mercury__diet__Head1_22, mercury__diet__Stream1_23, mercury__diet__Output_10, mercury__diet__Head_11, mercury__diet__Stream_12);
      }
    }
  }
}

static MR_Word MR_CALL 
mercury__diet__reroot_2_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_25,
  MR_Word mercury__diet__L_4,
  MR_Word mercury__diet__R_5)
{
  {
    MR_bool mercury__diet__succeeded;
    MR_Word mercury__diet__T_6;
    MR_Integer mercury__diet__Var_18;
    MR_Integer mercury__diet__Var_19;
    MR_Word mercury__diet__TypeInfo_27_27;
    MR_Word mercury__diet__TypeInfo_28_28;

{
#define MR_PROC_LABEL mercury__diet__reroot_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_25 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_27_27  = TypeInfo;
}
    if ((mercury__diet__L_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__diet__Var_18 = (MR_Integer) 0;
    else
    {
      MR_Tuple mercury__diet__Var_29 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_4, (MR_Integer) 0)));
      MR_Word mercury__diet__Var_31;
      MR_Word mercury__diet__Var_32;

      mercury__diet__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_4, (MR_Integer) 1)));
      mercury__diet__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_4, (MR_Integer) 2)));
      mercury__diet__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_4, (MR_Integer) 3)));
    }
{
#define MR_PROC_LABEL mercury__diet__reroot_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_25 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_28_28  = TypeInfo;
}
    if ((mercury__diet__R_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__diet__Var_19 = (MR_Integer) 0;
    else
    {
      MR_Tuple mercury__diet__Var_33 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__R_5, (MR_Integer) 0)));
      MR_Word mercury__diet__Var_35;
      MR_Word mercury__diet__Var_36;

      mercury__diet__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__R_5, (MR_Integer) 1)));
      mercury__diet__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_5, (MR_Integer) 2)));
      mercury__diet__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_5, (MR_Integer) 3)));
    }
    mercury__diet__succeeded = (mercury__diet__Var_18 > mercury__diet__Var_19);
    if (mercury__diet__succeeded)
      if ((mercury__diet__L_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.reroot\'/2", (MR_String) "L empty");
      }
      else
      {
        MR_Tuple mercury__diet__I_11;
        MR_Word mercury__diet__L1_12;

        mercury__diet__take_max_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__L_4, &mercury__diet__I_11, &mercury__diet__L1_12);
        mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__I_11, mercury__diet__L1_12, mercury__diet__R_5);
      }
    else
    if ((mercury__diet__R_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word mercury__diet__R1_17;
      MR_Tuple mercury__diet__I_23;

      mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__R_5, &mercury__diet__I_23, &mercury__diet__R1_17);
      mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__I_23, mercury__diet__L_4, mercury__diet__R1_17);
    }
    return mercury__diet__T_6;
  }
}

void MR_CALL 
mercury__diet__list_to_set_2_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
  MR_Word mercury__diet__List_3,
  MR_Word * mercury__diet__Set_4)
{
  {
    MR_Word mercury__diet__Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__List_3, mercury__diet__Var_6, mercury__diet__Set_4);
  }
}

void MR_CALL 
mercury__diet__delete_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
  MR_Box mercury__diet__Elem_4,
  MR_Word mercury__diet__Set0_5,
  MR_Word * mercury__diet__Set_6)
{
  {
    MR_bool mercury__diet__succeeded;
    MR_Word mercury__diet__Set1_7;

    mercury__diet__succeeded = mercury__diet__remove_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__Elem_4, mercury__diet__Set0_5, &mercury__diet__Set1_7);
    if (mercury__diet__succeeded)
      *mercury__diet__Set_6 = mercury__diet__Set1_7;
    else
      *mercury__diet__Set_6 = mercury__diet__Set0_5;
  }
}

MR_Word MR_CALL 
mercury__diet__delete_2_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
  MR_Word mercury__diet__Set0_4,
  MR_Box mercury__diet__Elem_5)
{
  {
    MR_bool mercury__diet__succeeded;
    MR_Word mercury__diet__Set_6;
    MR_Word mercury__diet__Set1_11;

    mercury__diet__succeeded = mercury__diet__remove_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__Elem_5, mercury__diet__Set0_4, &mercury__diet__Set1_11);
    if (mercury__diet__succeeded)
      mercury__diet__Set_6 = mercury__diet__Set1_11;
    else
      mercury__diet__Set_6 = mercury__diet__Set0_4;
    return mercury__diet__Set_6;
  }
}

MR_bool MR_CALL 
mercury__diet__remove_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_30,
  MR_Box mercury__diet__HeadVar__1_1,
  MR_Word mercury__diet__HeadVar__2_2,
  MR_Word * mercury__diet__HeadVar__3_3)
{
  {
    MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__diet__TypeInfo_32_32;
    MR_Box mercury__diet__X_9;
    MR_Box mercury__diet__Y_10;
    MR_Integer mercury__diet__H_11;
    MR_Word mercury__diet__Left_12;
    MR_Word mercury__diet__Right_13;
    MR_Word mercury__diet__CZX_14;
    MR_Integer mercury__diet__PolyConst1_31;
    MR_Tuple mercury__diet__Var_34;

    if (mercury__diet__succeeded)
    {
      mercury__diet__Var_34 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
      mercury__diet__H_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
      mercury__diet__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 2)));
      mercury__diet__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 3)));
      mercury__diet__X_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_34, (MR_Integer) 0));
      mercury__diet__Y_10 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_34, (MR_Integer) 1));
      mercury__diet__PolyConst1_31 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__diet__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_30 ;
	Index =  mercury__diet__PolyConst1_31 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_32_32  = TypeInfo;
}
      mercury__builtin__compare_3_p_0(mercury__diet__TypeInfo_32_32, &mercury__diet__CZX_14, mercury__diet__HeadVar__1_1, mercury__diet__X_9);
      switch (mercury__diet__CZX_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word mercury__diet__L_15;

            mercury__diet__succeeded = mercury__diet__remove_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__HeadVar__1_1, mercury__diet__Left_12, &mercury__diet__L_15);
            if (mercury__diet__succeeded)
            {
              *mercury__diet__HeadVar__3_3 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__Var_34, mercury__diet__L_15, mercury__diet__Right_13);
              mercury__diet__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          {
            MR_Word mercury__diet__TypeInfo_33_33;
            MR_Word mercury__diet__CZY_16;

{
#define MR_PROC_LABEL mercury__diet__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_30 ;
	Index =  mercury__diet__PolyConst1_31 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_33_33  = TypeInfo;
}
            mercury__builtin__compare_3_p_0(mercury__diet__TypeInfo_33_33, &mercury__diet__CZY_16, mercury__diet__HeadVar__1_1, mercury__diet__Y_10);
            switch (mercury__diet__CZY_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  switch (mercury__diet__CZX_14) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Tuple mercury__diet__Var_25;
                        MR_Box mercury__diet__Var_26;
                        MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 6)));

                        mercury__diet__Var_26 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_30), mercury__diet__X_9);
                        {
                          mercury__diet__Var_25 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mercury__diet__Var_25, 0) = mercury__diet__Var_26;
                          MR_hl_field(MR_mktag(0), mercury__diet__Var_25, 1) = mercury__diet__Y_10;
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__diet__HeadVar__3_3 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__Var_25));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_11));
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_12));
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_13));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Tuple mercury__diet__Var_20;
                        MR_Box mercury__diet__Var_21;
                        MR_Word mercury__diet__Var_22;
                        MR_Tuple mercury__diet__Var_23;
                        MR_Box mercury__diet__Var_24;
                        MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 6)));
                        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

                        mercury__diet__Var_21 = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_30), mercury__diet__HeadVar__1_1);
                        {
                          mercury__diet__Var_20 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mercury__diet__Var_20, 0) = mercury__diet__Var_21;
                          MR_hl_field(MR_mktag(0), mercury__diet__Var_20, 1) = mercury__diet__Y_10;
                        }
                        mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 7)));
                        mercury__diet__Var_24 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_30), mercury__diet__HeadVar__1_1);
                        {
                          mercury__diet__Var_23 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mercury__diet__Var_23, 0) = mercury__diet__X_9;
                          MR_hl_field(MR_mktag(0), mercury__diet__Var_23, 1) = mercury__diet__Var_24;
                        }
                        {
                          mercury__diet__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__diet__Var_22, 0) = ((MR_Box) (mercury__diet__Var_23));
                          MR_hl_field(MR_mktag(1), mercury__diet__Var_22, 1) = ((MR_Box) (mercury__diet__H_11));
                          MR_hl_field(MR_mktag(1), mercury__diet__Var_22, 2) = ((MR_Box) (mercury__diet__Left_12));
                          MR_hl_field(MR_mktag(1), mercury__diet__Var_22, 3) = ((MR_Box) (mercury__diet__Right_13));
                        }
                        *mercury__diet__HeadVar__3_3 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__Var_20, mercury__diet__Var_22);
                      }
                      break;
                  }
                  mercury__diet__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 0:
                {
                  switch (mercury__diet__CZX_14) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer mercury__diet__Var_52;
                        MR_Integer mercury__diet__Var_53;

                        if ((mercury__diet__Left_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          mercury__diet__Var_52 = (MR_Integer) 0;
                        else
                        {
                          MR_Tuple mercury__diet__Var_62 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Left_12, (MR_Integer) 0)));
                          MR_Word mercury__diet__Var_64;
                          MR_Word mercury__diet__Var_65;

                          mercury__diet__Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Left_12, (MR_Integer) 1)));
                          mercury__diet__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Left_12, (MR_Integer) 2)));
                          mercury__diet__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Left_12, (MR_Integer) 3)));
                        }
                        if ((mercury__diet__Right_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          mercury__diet__Var_53 = (MR_Integer) 0;
                        else
                        {
                          MR_Tuple mercury__diet__Var_66 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Right_13, (MR_Integer) 0)));
                          MR_Word mercury__diet__Var_68;
                          MR_Word mercury__diet__Var_69;

                          mercury__diet__Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Right_13, (MR_Integer) 1)));
                          mercury__diet__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Right_13, (MR_Integer) 2)));
                          mercury__diet__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Right_13, (MR_Integer) 3)));
                        }
                        mercury__diet__succeeded = (mercury__diet__Var_52 > mercury__diet__Var_53);
                        if (mercury__diet__succeeded)
                          if ((mercury__diet__Left_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.reroot\'/2", (MR_String) "L empty");
                          }
                          else
                          {
                            MR_Tuple mercury__diet__I_45;
                            MR_Word mercury__diet__L1_46;

                            mercury__diet__take_max_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__Left_12, &mercury__diet__I_45, &mercury__diet__L1_46);
                            *mercury__diet__HeadVar__3_3 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__I_45, mercury__diet__L1_46, mercury__diet__Right_13);
                          }
                        else
                        if ((mercury__diet__Right_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          *mercury__diet__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        else
                        {
                          MR_Word mercury__diet__R1_51;
                          MR_Tuple mercury__diet__I_57;

                          mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__Right_13, &mercury__diet__I_57, &mercury__diet__R1_51);
                          *mercury__diet__HeadVar__3_3 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__I_57, mercury__diet__Left_12, mercury__diet__R1_51);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Tuple mercury__diet__Var_27;
                        MR_Box mercury__diet__Var_28;
                        MR_Box MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 7)));

                        mercury__diet__Var_28 = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_30), mercury__diet__Y_10);
                        {
                          mercury__diet__Var_27 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mercury__diet__Var_27, 0) = mercury__diet__X_9;
                          MR_hl_field(MR_mktag(0), mercury__diet__Var_27, 1) = mercury__diet__Var_28;
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__diet__HeadVar__3_3 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__Var_27));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_11));
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_12));
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_13));
                        }
                      }
                      break;
                  }
                  mercury__diet__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__diet__R_17;

                  mercury__diet__succeeded = mercury__diet__remove_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__HeadVar__1_1, mercury__diet__Right_13, &mercury__diet__R_17);
                  if (mercury__diet__succeeded)
                  {
                    *mercury__diet__HeadVar__3_3 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__Var_34, mercury__diet__Left_12, mercury__diet__R_17);
                    mercury__diet__succeeded = MR_TRUE;
                  }
                }
                break;
            }
          }
          break;
      }
    }
    return mercury__diet__succeeded;
  }
}

void MR_CALL 
mercury__diet__insert_interval_4_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_11,
  MR_Box mercury__diet__X_5,
  MR_Box mercury__diet__Y_6,
  MR_Word mercury__diet__Set0_7,
  MR_Word * mercury__diet__Set_8)
{
  {
    MR_bool mercury__diet__succeeded;
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_11, (MR_Integer) 0)), (MR_Integer) 5)));

    mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_11), mercury__diet__Y_6, mercury__diet__X_5);
    mercury__diet__succeeded = !(mercury__diet__succeeded);
    if (mercury__diet__succeeded)
    {
      MR_Tuple mercury__diet__Var_9;

      {
        mercury__diet__Var_9 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__diet__Var_9, 0) = mercury__diet__X_5;
        MR_hl_field(MR_mktag(0), mercury__diet__Var_9, 1) = mercury__diet__Y_6;
      }
      *mercury__diet__Set_8 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_11, mercury__diet__Var_9, mercury__diet__Set0_7);
    }
    else
    {
      MR_Word mercury__diet__TypeInfo_13_13;

{
#define MR_PROC_LABEL mercury__diet__insert_interval_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_11 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_13_13  = TypeInfo;
}
      {
        mercury__diet__unexpected_interval_3_p_0(mercury__diet__TypeInfo_13_13, (MR_String) "predicate \140diet.insert_interval\'/4", mercury__diet__X_5, mercury__diet__Y_6);
        return;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__diet__do_insert_2_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_26,
  MR_Tuple mercury__diet__PQ_4,
  MR_Word mercury__diet__T0_5)
{
  {
    MR_bool mercury__diet__succeeded;
    MR_Word mercury__diet__T_6;
    MR_Box mercury__diet__P_7 = (MR_hl_field(MR_mktag(0), mercury__diet__PQ_4, (MR_Integer) 0));
    MR_Box mercury__diet__Q_8 = (MR_hl_field(MR_mktag(0), mercury__diet__PQ_4, (MR_Integer) 1));

    if ((mercury__diet__T0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word mercury__diet__Var_31;
      MR_Word mercury__diet__Var_32;
      MR_Word mercury__diet__TypeInfo_28_28;

{
#define MR_PROC_LABEL mercury__diet__do_insert_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_26 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_28_28  = TypeInfo;
}
      mercury__diet__Var_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      mercury__diet__Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__PQ_4));
        MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__Var_31));
        MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__Var_32));
      }
    }
    else
    {
      MR_Box mercury__diet__X0_9;
      MR_Box mercury__diet__Y0_10;
      MR_Word mercury__diet__Left0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 2)));
      MR_Word mercury__diet__Right0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_18 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 0)));
      MR_Integer mercury__diet__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 1)));
      MR_Box mercury__diet__Var_19;
      MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box);
      MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box);

      mercury__diet__X0_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_18, (MR_Integer) 0));
      mercury__diet__Y0_10 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_18, (MR_Integer) 1));
      mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 7)));
      mercury__diet__Var_19 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__X0_9);
      mercury__diet__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 5)));
      mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__Q_8, mercury__diet__Var_19);
      if (mercury__diet__succeeded)
      {
        MR_Word mercury__diet__Var_21;

        mercury__diet__Var_21 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__PQ_4, mercury__diet__Left0_12);
        mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__Var_18, mercury__diet__Var_21, mercury__diet__Right0_13);
      }
      else
      {
        MR_Box mercury__diet__Var_22;
        MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 6)));
        MR_bool MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box, MR_Box);

        mercury__diet__Var_22 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__Y0_10);
        mercury__diet__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 5)));
        mercury__diet__succeeded = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__Var_22, mercury__diet__P_7);
        if (mercury__diet__succeeded)
        {
          MR_Word mercury__diet__Var_24;

          mercury__diet__Var_24 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__PQ_4, mercury__diet__Right0_13);
          mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__Var_18, mercury__diet__Left0_12, mercury__diet__Var_24);
        }
        else
        {
          MR_Box mercury__diet__X1_14;
          MR_Word mercury__diet__Left1_15;
          MR_Box mercury__diet__Y1_16;
          MR_Word mercury__diet__Right1_17;
          MR_Tuple mercury__diet__Var_25;
          MR_bool MR_CALL (* mercury__diet__func_4)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 5)));
          MR_bool MR_CALL (* mercury__diet__func_5)(MR_Box, MR_Box, MR_Box);

          mercury__diet__succeeded = mercury__diet__func_4(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__P_7, mercury__diet__X0_9);
          mercury__diet__succeeded = !(mercury__diet__succeeded);
          if (mercury__diet__succeeded)
          {
            mercury__diet__X1_14 = mercury__diet__X0_9;
            mercury__diet__Left1_15 = mercury__diet__Left0_12;
          }
          else
            mercury__diet__find_del_left_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__P_7, mercury__diet__Left0_12, &mercury__diet__X1_14, &mercury__diet__Left1_15);
          mercury__diet__func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 5)));
          mercury__diet__succeeded = mercury__diet__func_5(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__Y0_10, mercury__diet__Q_8);
          mercury__diet__succeeded = !(mercury__diet__succeeded);
          if (mercury__diet__succeeded)
          {
            mercury__diet__Y1_16 = mercury__diet__Y0_10;
            mercury__diet__Right1_17 = mercury__diet__Right0_13;
          }
          else
            mercury__diet__find_del_right_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__Q_8, mercury__diet__Right0_13, &mercury__diet__Y1_16, &mercury__diet__Right1_17);
          {
            mercury__diet__Var_25 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__diet__Var_25, 0) = mercury__diet__X1_14;
            MR_hl_field(MR_mktag(0), mercury__diet__Var_25, 1) = mercury__diet__Y1_16;
          }
          mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__Var_25, mercury__diet__Left1_15, mercury__diet__Right1_17);
        }
      }
    }
    return mercury__diet__T_6;
  }
}

static void MR_CALL 
mercury__diet__find_del_right_4_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_18,
  MR_Box mercury__diet__P0_5,
  MR_Word mercury__diet__T0_6,
  MR_Box * mercury__diet__P_7,
  MR_Word * mercury__diet__T_8)
{
  {
    MR_bool mercury__diet__succeeded;

    if ((mercury__diet__T0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__P_7 = mercury__diet__P0_5;
      *mercury__diet__T_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Box mercury__diet__X_9;
      MR_Box mercury__diet__Y_10;
      MR_Word mercury__diet__Left0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 2)));
      MR_Word mercury__diet__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 0)));
      MR_Integer mercury__diet__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 1)));
      MR_Box mercury__diet__Var_16;
      MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box);
      MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box);

      mercury__diet__X_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
      mercury__diet__Y_10 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
      mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_18, (MR_Integer) 0)), (MR_Integer) 7)));
      mercury__diet__Var_16 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_18), mercury__diet__X_9);
      mercury__diet__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_18, (MR_Integer) 0)), (MR_Integer) 5)));
      mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_18), mercury__diet__P0_5, mercury__diet__Var_16);
      if (mercury__diet__succeeded)
      {
        MR_Word mercury__diet__Left1_14;

        mercury__diet__find_del_right_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__P0_5, mercury__diet__Left0_12, mercury__diet__P_7, &mercury__diet__Left1_14);
        *mercury__diet__T_8 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__Var_15, mercury__diet__Left1_14, mercury__diet__Right_13);
      }
      else
      {
        *mercury__diet__P_7 = mercury__diet__Y_10;
        *mercury__diet__T_8 = mercury__diet__Right_13;
      }
    }
  }
}

static void MR_CALL 
mercury__diet__find_del_left_4_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_18,
  MR_Box mercury__diet__P0_5,
  MR_Word mercury__diet__T0_6,
  MR_Box * mercury__diet__P_7,
  MR_Word * mercury__diet__T_8)
{
  {
    MR_bool mercury__diet__succeeded;

    if ((mercury__diet__T0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__P_7 = mercury__diet__P0_5;
      *mercury__diet__T_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Box mercury__diet__X_9;
      MR_Box mercury__diet__Y_10;
      MR_Word mercury__diet__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 2)));
      MR_Word mercury__diet__Right0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 0)));
      MR_Integer mercury__diet__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 1)));
      MR_Box mercury__diet__Var_16;
      MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box);
      MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box);

      mercury__diet__X_9 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 0));
      mercury__diet__Y_10 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_15, (MR_Integer) 1));
      mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_18, (MR_Integer) 0)), (MR_Integer) 6)));
      mercury__diet__Var_16 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_18), mercury__diet__Y_10);
      mercury__diet__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_18, (MR_Integer) 0)), (MR_Integer) 5)));
      mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_18), mercury__diet__Var_16, mercury__diet__P0_5);
      if (mercury__diet__succeeded)
      {
        MR_Word mercury__diet__Right1_14;

        mercury__diet__find_del_left_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__P0_5, mercury__diet__Right0_13, mercury__diet__P_7, &mercury__diet__Right1_14);
        *mercury__diet__T_8 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__Var_15, mercury__diet__Left_12, mercury__diet__Right1_14);
      }
      else
      {
        *mercury__diet__P_7 = mercury__diet__X_9;
        *mercury__diet__T_8 = mercury__diet__Left_12;
      }
    }
  }
}

void MR_CALL 
mercury__diet__insert_list_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
  MR_Word mercury__diet__Elems_4,
  MR_Word mercury__diet__Set0_5,
  MR_Word * mercury__diet__Set_6)
{
  mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__Elems_4, mercury__diet__Set0_5, mercury__diet__Set_6);
}

MR_Word MR_CALL 
mercury__diet__insert_list_2_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
  MR_Word mercury__diet__Set0_4,
  MR_Word mercury__diet__Elems_5)
{
  {
    MR_Word mercury__diet__Set_6;

    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__Elems_5, mercury__diet__Set0_4, &mercury__diet__Set_6);
    return mercury__diet__Set_6;
  }
}

static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(
  MR_Word mercury__diet__Var_18,
  MR_Word mercury__diet__HeadVar__2_2,
  MR_Word mercury__diet__HeadVar__3_3,
  MR_Word * mercury__diet__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__diet__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__diet__HeadVar__4_4 = mercury__diet__HeadVar__3_3;
    else
    {
      MR_Box mercury__diet__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0));
      MR_Word mercury__diet__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__diet__V_15_13;

      mercury__diet__V_15_13 = mercury__diet__add_2_f_0(mercury__diet__Var_18, mercury__diet__V_10_9, mercury__diet__HeadVar__3_3);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__diet__next_value_of_HeadVar__2_2 = mercury__diet__V_11_10;
        MR_Word mercury__diet__next_value_of_HeadVar__3_3 = mercury__diet__V_15_13;

        mercury__diet__HeadVar__2_2 = mercury__diet__next_value_of_HeadVar__2_2;
        mercury__diet__HeadVar__3_3 = mercury__diet__next_value_of_HeadVar__3_3;
      }
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__insert_new_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_52,
  MR_Box mercury__diet__P_4,
  MR_Word mercury__diet__T0_5,
  MR_Word * mercury__diet__T_6)
{
  {
    MR_bool mercury__diet__succeeded;

    if ((mercury__diet__T0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Tuple mercury__diet__Var_37;
      MR_Word mercury__diet__Var_40;
      MR_Word mercury__diet__Var_41;

      {
        mercury__diet__Var_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__diet__Var_37, 0) = mercury__diet__P_4;
        MR_hl_field(MR_mktag(0), mercury__diet__Var_37, 1) = mercury__diet__P_4;
      }
      mercury__diet__Var_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      mercury__diet__Var_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        *mercury__diet__T_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__Var_37));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Var_40));
        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Var_41));
      }
      mercury__diet__succeeded = MR_TRUE;
    }
    else
    {
      MR_Box mercury__diet__X_7;
      MR_Box mercury__diet__Y_8;
      MR_Integer mercury__diet__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 1)));
      MR_Word mercury__diet__Left_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 2)));
      MR_Word mercury__diet__Right_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 0)));
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

      mercury__diet__X_7 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_24, (MR_Integer) 0));
      mercury__diet__Y_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_24, (MR_Integer) 1));
      mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 5)));
      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__P_4, mercury__diet__X_7);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 5)));

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__Y_8, mercury__diet__P_4);
        mercury__diet__succeeded = !(mercury__diet__succeeded);
        if (mercury__diet__succeeded)
          mercury__diet__succeeded = MR_FALSE;
        else
        {
          MR_Box mercury__diet__Var_25;
          MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 6)));
          MR_bool MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box, MR_Box);

          mercury__diet__Var_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__Y_8);
          mercury__diet__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 5)));
          mercury__diet__succeeded = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__Var_25, mercury__diet__P_4);
          if (mercury__diet__succeeded)
          {
            MR_Word mercury__diet__R_12;

            mercury__diet__succeeded = mercury__diet__insert_new_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__P_4, mercury__diet__Right_11, &mercury__diet__R_12);
            if (mercury__diet__succeeded)
            {
              *mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__Var_24, mercury__diet__Left_10, mercury__diet__R_12);
              mercury__diet__succeeded = MR_TRUE;
            }
          }
          else
          {
            if ((mercury__diet__Right_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Tuple mercury__diet__Var_30;

              {
                mercury__diet__Var_30 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__diet__Var_30, 0) = mercury__diet__X_7;
                MR_hl_field(MR_mktag(0), mercury__diet__Var_30, 1) = mercury__diet__P_4;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *mercury__diet__T_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__Var_30));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_9));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_10));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_11));
              }
            }
            else
            {
              MR_Box mercury__diet__U_17;
              MR_Box mercury__diet__V_18;
              MR_Tuple mercury__diet__Var_27;
              MR_Word mercury__diet__R_42;
              MR_Word mercury__diet__TypeInfo_56_56;
              MR_Box mercury__diet__Var_53;
              MR_Box MR_CALL (* mercury__diet__func_4)(MR_Box, MR_Box);

              mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__Right_11, &mercury__diet__Var_27, &mercury__diet__R_42);
              mercury__diet__U_17 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_27, (MR_Integer) 0));
              mercury__diet__V_18 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_27, (MR_Integer) 1));
              mercury__diet__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 7)));
              mercury__diet__Var_53 = mercury__diet__func_4(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__U_17);
{
#define MR_PROC_LABEL mercury__diet__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_52 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_56_56  = TypeInfo;
}
              mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_56_56, mercury__diet__P_4, mercury__diet__Var_53);
              if (mercury__diet__succeeded)
              {
                MR_Tuple mercury__diet__Var_28;

                {
                  mercury__diet__Var_28 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__diet__Var_28, 0) = mercury__diet__X_7;
                  MR_hl_field(MR_mktag(0), mercury__diet__Var_28, 1) = mercury__diet__V_18;
                }
                *mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__Var_28, mercury__diet__Left_10, mercury__diet__R_42);
              }
              else
              {
                MR_Tuple mercury__diet__Var_29;

                {
                  mercury__diet__Var_29 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__diet__Var_29, 0) = mercury__diet__X_7;
                  MR_hl_field(MR_mktag(0), mercury__diet__Var_29, 1) = mercury__diet__P_4;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__diet__T_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__Var_29));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_9));
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_10));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_11));
                }
              }
            }
            mercury__diet__succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        MR_Box mercury__diet__Var_31;
        MR_Box MR_CALL (* mercury__diet__func_5)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 7)));
        MR_bool MR_CALL (* mercury__diet__func_6)(MR_Box, MR_Box, MR_Box);

        mercury__diet__Var_31 = mercury__diet__func_5(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__X_7);
        mercury__diet__func_6 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 5)));
        mercury__diet__succeeded = mercury__diet__func_6(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__P_4, mercury__diet__Var_31);
        if (mercury__diet__succeeded)
        {
          MR_Word mercury__diet__L_19;

          mercury__diet__succeeded = mercury__diet__insert_new_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__P_4, mercury__diet__Left_10, &mercury__diet__L_19);
          if (mercury__diet__succeeded)
          {
            *mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__Var_24, mercury__diet__L_19, mercury__diet__Right_11);
            mercury__diet__succeeded = MR_TRUE;
          }
        }
        else
        {
          if ((mercury__diet__Left_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Tuple mercury__diet__Var_36;

            {
              mercury__diet__Var_36 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__diet__Var_36, 0) = mercury__diet__P_4;
              MR_hl_field(MR_mktag(0), mercury__diet__Var_36, 1) = mercury__diet__Y_8;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              *mercury__diet__T_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__Var_36));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_9));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_10));
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_11));
            }
          }
          else
          {
            MR_Tuple mercury__diet__Var_33;
            MR_Box mercury__diet__V_45;
            MR_Word mercury__diet__L_46;
            MR_Box mercury__diet__U_44;
            MR_Word mercury__diet__TypeInfo_58_58;
            MR_Box mercury__diet__Var_54;
            MR_Box MR_CALL (* mercury__diet__func_7)(MR_Box, MR_Box);

            mercury__diet__take_max_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__Left_10, &mercury__diet__Var_33, &mercury__diet__L_46);
            mercury__diet__U_44 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_33, (MR_Integer) 0));
            mercury__diet__V_45 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_33, (MR_Integer) 1));
            mercury__diet__func_7 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 6)));
            mercury__diet__Var_54 = mercury__diet__func_7(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__V_45);
{
#define MR_PROC_LABEL mercury__diet__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_52 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_58_58  = TypeInfo;
}
            mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_58_58, mercury__diet__P_4, mercury__diet__Var_54);
            if (mercury__diet__succeeded)
              *mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__Var_33, mercury__diet__L_46, mercury__diet__Right_11);
            else
            {
              MR_Tuple mercury__diet__Var_35;

              {
                mercury__diet__Var_35 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__diet__Var_35, 0) = mercury__diet__P_4;
                MR_hl_field(MR_mktag(0), mercury__diet__Var_35, 1) = mercury__diet__Y_8;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *mercury__diet__T_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__Var_35));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_9));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_10));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_11));
              }
            }
          }
          mercury__diet__succeeded = MR_TRUE;
        }
      }
    }
    return mercury__diet__succeeded;
  }
}

void MR_CALL 
mercury__diet__insert_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
  MR_Box mercury__diet__Elem_4,
  MR_Word mercury__diet__Set0_5,
  MR_Word * mercury__diet__Set_6)
{
  *mercury__diet__Set_6 = mercury__diet__add_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__Elem_4, mercury__diet__Set0_5);
}

MR_Word MR_CALL 
mercury__diet__insert_2_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
  MR_Word mercury__diet__Set0_4,
  MR_Box mercury__diet__Elem_5)
{
  {
    MR_Word mercury__diet__Set_6;

    mercury__diet__Set_6 = mercury__diet__add_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__Elem_5, mercury__diet__Set0_4);
    return mercury__diet__Set_6;
  }
}

MR_Word MR_CALL 
mercury__diet__add_2_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_50,
  MR_Box mercury__diet__P_4,
  MR_Word mercury__diet__T0_5)
{
  {
    MR_bool mercury__diet__succeeded;
    MR_Word mercury__diet__T_6;

    if ((mercury__diet__T0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Tuple mercury__diet__Var_39;
      MR_Word mercury__diet__Var_42;
      MR_Word mercury__diet__Var_43;

      {
        mercury__diet__Var_39 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__diet__Var_39, 0) = mercury__diet__P_4;
        MR_hl_field(MR_mktag(0), mercury__diet__Var_39, 1) = mercury__diet__P_4;
      }
      mercury__diet__Var_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      mercury__diet__Var_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__Var_39));
        MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__Var_42));
        MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__Var_43));
      }
    }
    else
    {
      MR_Box mercury__diet__X_7;
      MR_Box mercury__diet__Y_8;
      MR_Integer mercury__diet__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 1)));
      MR_Word mercury__diet__Left_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 2)));
      MR_Word mercury__diet__Right_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 3)));
      MR_Tuple mercury__diet__Var_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 0)));
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

      mercury__diet__X_7 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_24, (MR_Integer) 0));
      mercury__diet__Y_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_24, (MR_Integer) 1));
      mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 5)));
      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__P_4, mercury__diet__X_7);
      mercury__diet__succeeded = !(mercury__diet__succeeded);
      if (mercury__diet__succeeded)
      {
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 5)));

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__Y_8, mercury__diet__P_4);
        mercury__diet__succeeded = !(mercury__diet__succeeded);
        if (mercury__diet__succeeded)
          mercury__diet__T_6 = mercury__diet__T0_5;
        else
        {
          MR_Box mercury__diet__Var_25;
          MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 6)));
          MR_bool MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box, MR_Box);

          mercury__diet__Var_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__Y_8);
          mercury__diet__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 5)));
          mercury__diet__succeeded = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__Var_25, mercury__diet__P_4);
          if (mercury__diet__succeeded)
          {
            MR_Word mercury__diet__Var_27;

            mercury__diet__Var_27 = mercury__diet__add_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__P_4, mercury__diet__Right_11);
            mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__Var_24, mercury__diet__Left_10, mercury__diet__Var_27);
          }
          else
          if ((mercury__diet__Right_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Tuple mercury__diet__Var_31;

            {
              mercury__diet__Var_31 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__diet__Var_31, 0) = mercury__diet__X_7;
              MR_hl_field(MR_mktag(0), mercury__diet__Var_31, 1) = mercury__diet__P_4;
            }
            {
              mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__Var_31));
              MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) (mercury__diet__H_9));
              MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__Left_10));
              MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__Right_11));
            }
          }
          else
          {
            MR_Box mercury__diet__U_16;
            MR_Box mercury__diet__V_17;
            MR_Word mercury__diet__R_18;
            MR_Tuple mercury__diet__Var_28;
            MR_Word mercury__diet__TypeInfo_54_54;
            MR_Box mercury__diet__Var_51;
            MR_Box MR_CALL (* mercury__diet__func_4)(MR_Box, MR_Box);

            mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__Right_11, &mercury__diet__Var_28, &mercury__diet__R_18);
            mercury__diet__U_16 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_28, (MR_Integer) 0));
            mercury__diet__V_17 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_28, (MR_Integer) 1));
            mercury__diet__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 7)));
            mercury__diet__Var_51 = mercury__diet__func_4(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__U_16);
{
#define MR_PROC_LABEL mercury__diet__add_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_50 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_54_54  = TypeInfo;
}
            mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_54_54, mercury__diet__P_4, mercury__diet__Var_51);
            if (mercury__diet__succeeded)
            {
              MR_Tuple mercury__diet__Var_29;

              {
                mercury__diet__Var_29 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__diet__Var_29, 0) = mercury__diet__X_7;
                MR_hl_field(MR_mktag(0), mercury__diet__Var_29, 1) = mercury__diet__V_17;
              }
              mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__Var_29, mercury__diet__Left_10, mercury__diet__R_18);
            }
            else
            {
              MR_Tuple mercury__diet__Var_30;

              {
                mercury__diet__Var_30 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__diet__Var_30, 0) = mercury__diet__X_7;
                MR_hl_field(MR_mktag(0), mercury__diet__Var_30, 1) = mercury__diet__P_4;
              }
              {
                mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__Var_30));
                MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) (mercury__diet__H_9));
                MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__Left_10));
                MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__Right_11));
              }
            }
          }
        }
      }
      else
      {
        MR_Box mercury__diet__Var_32;
        MR_Box MR_CALL (* mercury__diet__func_5)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 7)));
        MR_bool MR_CALL (* mercury__diet__func_6)(MR_Box, MR_Box, MR_Box);

        mercury__diet__Var_32 = mercury__diet__func_5(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__X_7);
        mercury__diet__func_6 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 5)));
        mercury__diet__succeeded = mercury__diet__func_6(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__P_4, mercury__diet__Var_32);
        if (mercury__diet__succeeded)
        {
          MR_Word mercury__diet__Var_34;

          mercury__diet__Var_34 = mercury__diet__add_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__P_4, mercury__diet__Left_10);
          mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__Var_24, mercury__diet__Var_34, mercury__diet__Right_11);
        }
        else
        if ((mercury__diet__Left_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Tuple mercury__diet__Var_38;

          {
            mercury__diet__Var_38 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__diet__Var_38, 0) = mercury__diet__P_4;
            MR_hl_field(MR_mktag(0), mercury__diet__Var_38, 1) = mercury__diet__Y_8;
          }
          {
            mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__Var_38));
            MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) (mercury__diet__H_9));
            MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__Left_10));
            MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__Right_11));
          }
        }
        else
        {
          MR_Word mercury__diet__L_23;
          MR_Tuple mercury__diet__Var_35;
          MR_Box mercury__diet__U_44;
          MR_Box mercury__diet__V_45;
          MR_Word mercury__diet__TypeInfo_56_56;
          MR_Box mercury__diet__Var_52;
          MR_Box MR_CALL (* mercury__diet__func_7)(MR_Box, MR_Box);

          mercury__diet__take_max_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__Left_10, &mercury__diet__Var_35, &mercury__diet__L_23);
          mercury__diet__U_44 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_35, (MR_Integer) 0));
          mercury__diet__V_45 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_35, (MR_Integer) 1));
          mercury__diet__func_7 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 6)));
          mercury__diet__Var_52 = mercury__diet__func_7(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__V_45);
{
#define MR_PROC_LABEL mercury__diet__add_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_50 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_56_56  = TypeInfo;
}
          mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_56_56, mercury__diet__P_4, mercury__diet__Var_52);
          if (mercury__diet__succeeded)
          {
            MR_Tuple mercury__diet__Var_36;

            {
              mercury__diet__Var_36 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__diet__Var_36, 0) = mercury__diet__U_44;
              MR_hl_field(MR_mktag(0), mercury__diet__Var_36, 1) = mercury__diet__Y_8;
            }
            mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__Var_36, mercury__diet__L_23, mercury__diet__Right_11);
          }
          else
          {
            MR_Tuple mercury__diet__Var_37;

            {
              mercury__diet__Var_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__diet__Var_37, 0) = mercury__diet__P_4;
              MR_hl_field(MR_mktag(0), mercury__diet__Var_37, 1) = mercury__diet__Y_8;
            }
            {
              mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__Var_37));
              MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) (mercury__diet__H_9));
              MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__Left_10));
              MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__Right_11));
            }
          }
        }
      }
    }
    return mercury__diet__T_6;
  }
}

static void MR_CALL 
mercury__diet__take_max_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__T0_4,
  MR_Tuple * mercury__diet__X_5,
  MR_Word * mercury__diet__T_6)
{
  {
    MR_Word mercury__diet__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 3)));
    MR_Word mercury__diet__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 2)));
    MR_Tuple mercury__diet__Var_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 0)));
    MR_Integer mercury__diet__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 1)));

    if ((mercury__diet__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__X_5 = mercury__diet__Var_23;
      *mercury__diet__T_6 = mercury__diet__Var_21;
    }
    else
    {
      MR_Word mercury__diet__R1_16;

      mercury__diet__take_max_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__Var_20, mercury__diet__X_5, &mercury__diet__R1_16);
      *mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__Var_23, mercury__diet__Var_21, mercury__diet__R1_16);
    }
  }
}

static void MR_CALL 
mercury__diet__take_min_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__T0_4,
  MR_Tuple * mercury__diet__X_5,
  MR_Word * mercury__diet__T_6)
{
  {
    MR_Word mercury__diet__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 3)));
    MR_Word mercury__diet__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 2)));
    MR_Tuple mercury__diet__Var_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 0)));
    MR_Integer mercury__diet__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 1)));

    if ((mercury__diet__Var_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__diet__X_5 = mercury__diet__Var_23;
      *mercury__diet__T_6 = mercury__diet__Var_20;
    }
    else
    {
      MR_Word mercury__diet__L1_16;

      mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__Var_21, mercury__diet__X_5, &mercury__diet__L1_16);
      *mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__Var_23, mercury__diet__L1_16, mercury__diet__Var_20);
    }
  }
}

static MR_Word MR_CALL 
mercury__diet__join_3_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
  MR_Tuple mercury__diet__V_5,
  MR_Word mercury__diet__L_6,
  MR_Word mercury__diet__R_7)
{
  {
    MR_bool mercury__diet__succeeded;
    MR_Word mercury__diet__T_8;

    if ((mercury__diet__L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0((MR_Integer) 1, mercury__diet__V_5, mercury__diet__R_7);
    }
    else
    {
      MR_Word mercury__diet__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 3)));
      MR_Word mercury__diet__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 2)));
      MR_Integer mercury__diet__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 1)));
      MR_Tuple mercury__diet__Var_43 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 0)));

      if ((mercury__diet__R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0((MR_Integer) 0, mercury__diet__V_5, mercury__diet__L_6);
      }
      else
      {
        MR_Tuple mercury__diet__RX_17 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 0)));
        MR_Integer mercury__diet__RH_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 1)));
        MR_Word mercury__diet__RL_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 2)));
        MR_Word mercury__diet__RR_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 3)));
        MR_Integer mercury__diet__Var_21 = (mercury__diet__RH_18 + (MR_Integer) 1);

        mercury__diet__succeeded = (mercury__diet__Var_42 > mercury__diet__Var_21);
        if (mercury__diet__succeeded)
        {
          MR_Word mercury__diet__Var_23;

          mercury__diet__Var_23 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_29, mercury__diet__V_5, mercury__diet__Var_40, mercury__diet__R_7);
          mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__Var_43, mercury__diet__Var_41, mercury__diet__Var_23);
        }
        else
        {
          MR_Integer mercury__diet__Var_24 = (mercury__diet__Var_42 + (MR_Integer) 1);

          mercury__diet__succeeded = (mercury__diet__RH_18 > mercury__diet__Var_24);
          if (mercury__diet__succeeded)
          {
            MR_Word mercury__diet__Var_26;

            mercury__diet__Var_26 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_29, mercury__diet__V_5, mercury__diet__L_6, mercury__diet__RL_19);
            mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__RX_17, mercury__diet__Var_26, mercury__diet__RR_20);
          }
          else
            mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_5, mercury__diet__L_6, mercury__diet__R_7);
        }
      }
    }
    return mercury__diet__T_8;
  }
}

static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(
  MR_Word mercury__diet__IsLeft_5,
  MR_Tuple mercury__diet__X_6,
  MR_Word mercury__diet__T0_7)
{
  {
    MR_Word mercury__diet__T_8;

    if ((mercury__diet__T0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word mercury__diet__Var_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      MR_Word mercury__diet__Var_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

      {
        mercury__diet__T_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__diet__T_8, 0) = ((MR_Box) (mercury__diet__X_6));
        MR_hl_field(MR_mktag(1), mercury__diet__T_8, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), mercury__diet__T_8, 2) = ((MR_Box) (mercury__diet__Var_16));
        MR_hl_field(MR_mktag(1), mercury__diet__T_8, 3) = ((MR_Box) (mercury__diet__Var_17));
      }
    }
    else
    {
      MR_Tuple mercury__diet__VX_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_7, (MR_Integer) 0)));
      MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_7, (MR_Integer) 2)));
      MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_7, (MR_Integer) 3)));
      MR_Integer mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_7, (MR_Integer) 1)));

      switch (mercury__diet__IsLeft_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mercury__diet__Var_13;

            mercury__diet__Var_13 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(mercury__diet__IsLeft_5, mercury__diet__X_6, mercury__diet__R_12);
            mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__VX_9, mercury__diet__L_11, mercury__diet__Var_13);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__diet__Var_14;

            mercury__diet__Var_14 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(mercury__diet__IsLeft_5, mercury__diet__X_6, mercury__diet__L_11);
            mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__VX_9, mercury__diet__Var_14, mercury__diet__R_12);
          }
          break;
      }
    }
    return mercury__diet__T_8;
  }
}

static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(
  MR_Tuple mercury__diet__X_5,
  MR_Word mercury__diet__L_6,
  MR_Word mercury__diet__R_7)
{
  {
    MR_bool mercury__diet__succeeded;
    MR_Word mercury__diet__T_8;
    MR_Integer mercury__diet__HL_9;
    MR_Integer mercury__diet__HR_10;
    MR_Integer mercury__diet__Var_28;

    if ((mercury__diet__L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__diet__HL_9 = (MR_Integer) 0;
    else
    {
      MR_Tuple mercury__diet__Var_57 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 0)));
      MR_Word mercury__diet__Var_59;
      MR_Word mercury__diet__Var_60;

      mercury__diet__HL_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 1)));
      mercury__diet__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 2)));
      mercury__diet__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 3)));
    }
    if ((mercury__diet__R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__diet__HR_10 = (MR_Integer) 0;
    else
    {
      MR_Tuple mercury__diet__Var_61 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 0)));
      MR_Word mercury__diet__Var_63;
      MR_Word mercury__diet__Var_64;

      mercury__diet__HR_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 1)));
      mercury__diet__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 2)));
      mercury__diet__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 3)));
    }
    mercury__diet__Var_28 = (mercury__diet__HR_10 + (MR_Integer) 1);
    mercury__diet__succeeded = (mercury__diet__HL_9 > mercury__diet__Var_28);
    if (mercury__diet__succeeded)
      if ((mercury__diet__L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.balance\'/3", (MR_String) "L empty");
      }
      else
      {
        MR_Tuple mercury__diet__LVX_11 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 0)));
        MR_Word mercury__diet__LL_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 2)));
        MR_Word mercury__diet__LR_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 3)));
        MR_Integer mercury__diet__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 1)));
        MR_Integer mercury__diet__Var_30;
        MR_Integer mercury__diet__Var_31;

        if ((mercury__diet__LL_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__diet__Var_30 = (MR_Integer) 0;
        else
        {
          MR_Tuple mercury__diet__Var_67 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__LL_13, (MR_Integer) 0)));
          MR_Word mercury__diet__Var_69;
          MR_Word mercury__diet__Var_70;

          mercury__diet__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__LL_13, (MR_Integer) 1)));
          mercury__diet__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LL_13, (MR_Integer) 2)));
          mercury__diet__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LL_13, (MR_Integer) 3)));
        }
        if ((mercury__diet__LR_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__diet__Var_31 = (MR_Integer) 0;
        else
        {
          MR_Tuple mercury__diet__Var_71 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 0)));
          MR_Word mercury__diet__Var_73;
          MR_Word mercury__diet__Var_74;

          mercury__diet__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 1)));
          mercury__diet__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 2)));
          mercury__diet__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 3)));
        }
        mercury__diet__succeeded = (mercury__diet__Var_30 >= mercury__diet__Var_31);
        if (mercury__diet__succeeded)
        {
          MR_Word mercury__diet__Var_32;

          mercury__diet__Var_32 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__X_5, mercury__diet__LR_14, mercury__diet__R_7);
          mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__LVX_11, mercury__diet__LL_13, mercury__diet__Var_32);
        }
        else
        if ((mercury__diet__LR_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.balance\'/3", (MR_String) "LR empty");
        }
        else
        {
          MR_Tuple mercury__diet__LRX_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 0)));
          MR_Word mercury__diet__LRL_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 2)));
          MR_Word mercury__diet__LRR_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 3)));
          MR_Word mercury__diet__Var_33;
          MR_Word mercury__diet__Var_34;
          MR_Integer mercury__diet__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 1)));

          mercury__diet__Var_33 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__LVX_11, mercury__diet__LL_13, mercury__diet__LRL_17);
          mercury__diet__Var_34 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__X_5, mercury__diet__LRR_18, mercury__diet__R_7);
          mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__LRX_15, mercury__diet__Var_33, mercury__diet__Var_34);
        }
      }
    else
    {
      MR_Integer mercury__diet__Var_41 = (mercury__diet__HL_9 + (MR_Integer) 1);

      mercury__diet__succeeded = (mercury__diet__HR_10 > mercury__diet__Var_41);
      if (mercury__diet__succeeded)
        if ((mercury__diet__R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.balance\'/3", (MR_String) "R empty");
        }
        else
        {
          MR_Tuple mercury__diet__RVX_19 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 0)));
          MR_Word mercury__diet__RL_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 2)));
          MR_Word mercury__diet__RR_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 3)));
          MR_Integer mercury__diet__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 1)));
          MR_Integer mercury__diet__Var_43;
          MR_Integer mercury__diet__Var_44;

          if ((mercury__diet__RR_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            mercury__diet__Var_43 = (MR_Integer) 0;
          else
          {
            MR_Tuple mercury__diet__Var_79 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__RR_22, (MR_Integer) 0)));
            MR_Word mercury__diet__Var_81;
            MR_Word mercury__diet__Var_82;

            mercury__diet__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__RR_22, (MR_Integer) 1)));
            mercury__diet__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RR_22, (MR_Integer) 2)));
            mercury__diet__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RR_22, (MR_Integer) 3)));
          }
          if ((mercury__diet__RL_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            mercury__diet__Var_44 = (MR_Integer) 0;
          else
          {
            MR_Tuple mercury__diet__Var_83 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 0)));
            MR_Word mercury__diet__Var_85;
            MR_Word mercury__diet__Var_86;

            mercury__diet__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 1)));
            mercury__diet__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 2)));
            mercury__diet__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 3)));
          }
          mercury__diet__succeeded = (mercury__diet__Var_43 >= mercury__diet__Var_44);
          if (mercury__diet__succeeded)
          {
            MR_Word mercury__diet__Var_45;

            mercury__diet__Var_45 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__X_5, mercury__diet__L_6, mercury__diet__RL_21);
            mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__RVX_19, mercury__diet__Var_45, mercury__diet__RR_22);
          }
          else
          if ((mercury__diet__RL_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.balance\'/3", (MR_String) "RL empty");
          }
          else
          {
            MR_Tuple mercury__diet__RLX_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 0)));
            MR_Word mercury__diet__RLL_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 2)));
            MR_Word mercury__diet__RLR_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 3)));
            MR_Word mercury__diet__Var_46;
            MR_Word mercury__diet__Var_47;
            MR_Integer mercury__diet__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 1)));

            mercury__diet__Var_46 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__X_5, mercury__diet__L_6, mercury__diet__RLL_25);
            mercury__diet__Var_47 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__RVX_19, mercury__diet__RLR_26, mercury__diet__RR_22);
            mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__RLX_23, mercury__diet__Var_46, mercury__diet__Var_47);
          }
        }
      else
      {
        MR_Integer mercury__diet__HT_27;
        MR_Integer mercury__diet__Var_55;

        mercury__diet__succeeded = (mercury__diet__HL_9 > mercury__diet__HR_10);
        if (mercury__diet__succeeded)
          mercury__diet__Var_55 = mercury__diet__HL_9;
        else
          mercury__diet__Var_55 = mercury__diet__HR_10;
        mercury__diet__HT_27 = ((MR_Integer) 1 + mercury__diet__Var_55);
        {
          mercury__diet__T_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__diet__T_8, 0) = ((MR_Box) (mercury__diet__X_5));
          MR_hl_field(MR_mktag(1), mercury__diet__T_8, 1) = ((MR_Box) (mercury__diet__HT_27));
          MR_hl_field(MR_mktag(1), mercury__diet__T_8, 2) = ((MR_Box) (mercury__diet__L_6));
          MR_hl_field(MR_mktag(1), mercury__diet__T_8, 3) = ((MR_Box) (mercury__diet__R_7));
        }
      }
    }
    return mercury__diet__T_8;
  }
}

static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(
  MR_Tuple mercury__diet__X_5,
  MR_Word mercury__diet__L_6,
  MR_Word mercury__diet__R_7)
{
  {
    MR_bool mercury__diet__succeeded;
    MR_Word mercury__diet__HeadVar__4_4;
    MR_Integer mercury__diet__Var_8;
    MR_Integer mercury__diet__Var_13;
    MR_Integer mercury__diet__Var_14;
    MR_Integer mercury__diet__Var_15;

    if ((mercury__diet__L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__diet__Var_14 = (MR_Integer) 0;
    else
    {
      MR_Tuple mercury__diet__Var_16 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 0)));
      MR_Word mercury__diet__Var_18;
      MR_Word mercury__diet__Var_19;

      mercury__diet__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 1)));
      mercury__diet__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 2)));
      mercury__diet__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 3)));
    }
    if ((mercury__diet__R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__diet__Var_15 = (MR_Integer) 0;
    else
    {
      MR_Tuple mercury__diet__Var_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 0)));
      MR_Word mercury__diet__Var_22;
      MR_Word mercury__diet__Var_23;

      mercury__diet__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 1)));
      mercury__diet__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 2)));
      mercury__diet__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 3)));
    }
    mercury__diet__succeeded = (mercury__diet__Var_14 > mercury__diet__Var_15);
    if (mercury__diet__succeeded)
      mercury__diet__Var_13 = mercury__diet__Var_14;
    else
      mercury__diet__Var_13 = mercury__diet__Var_15;
    mercury__diet__Var_8 = ((MR_Integer) 1 + mercury__diet__Var_13);
    {
      mercury__diet__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__4_4, 0) = ((MR_Box) (mercury__diet__X_5));
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__4_4, 1) = ((MR_Box) (mercury__diet__Var_8));
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__4_4, 2) = ((MR_Box) (mercury__diet__L_6));
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__4_4, 3) = ((MR_Box) (mercury__diet__R_7));
    }
    return mercury__diet__HeadVar__4_4;
  }
}

MR_bool MR_CALL 
mercury__diet__superset_2_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
  MR_Word mercury__diet__Superset_3,
  MR_Word mercury__diet__Set_4)
{
  {
    MR_bool mercury__diet__succeeded;

    if ((mercury__diet__Set_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__diet__succeeded = MR_TRUE;
    else
    {
      MR_Tuple mercury__diet__XY1_16;
      MR_Word mercury__diet__R1_17;
      MR_Tuple mercury__diet__XY2_18;
      MR_Word mercury__diet__R2_19;
      MR_Word mercury__diet__Var_20;
      MR_Word mercury__diet__Var_21;
      MR_Tuple mercury__diet__Var_12;
      MR_Integer mercury__diet__Var_13;
      MR_Word mercury__diet__Var_14;
      MR_Word mercury__diet__Var_15;

      mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Superset_3)) == (MR_mktag((MR_Integer) 1)));
      if (mercury__diet__succeeded)
      {
        mercury__diet__Var_12 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Superset_3, (MR_Integer) 0)));
        mercury__diet__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Superset_3, (MR_Integer) 1)));
        mercury__diet__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Superset_3, (MR_Integer) 2)));
        mercury__diet__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Superset_3, (MR_Integer) 3)));
        mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__Set_4, &mercury__diet__XY1_16, &mercury__diet__R1_17);
        mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__Superset_3, &mercury__diet__XY2_18, &mercury__diet__R2_19);
        mercury__diet__Var_20 = (MR_Integer) 1;
        mercury__diet__subset_2_5_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__XY1_16, mercury__diet__R1_17, mercury__diet__XY2_18, mercury__diet__R2_19, &mercury__diet__Var_21);
        mercury__diet__succeeded = (mercury__diet__Var_20 == mercury__diet__Var_21);
      }
    }
    return mercury__diet__succeeded;
  }
}

MR_bool MR_CALL 
mercury__diet__subset_2_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_18,
  MR_Word mercury__diet__T1_3,
  MR_Word mercury__diet__T2_4)
{
  {
    MR_bool mercury__diet__succeeded;

    if ((mercury__diet__T1_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__diet__succeeded = MR_TRUE;
    else
    {
      MR_Tuple mercury__diet__XY1_13;
      MR_Word mercury__diet__R1_14;
      MR_Tuple mercury__diet__XY2_15;
      MR_Word mercury__diet__R2_16;
      MR_Word mercury__diet__Var_17;
      MR_Word mercury__diet__Var_19;
      MR_Tuple mercury__diet__Var_9;
      MR_Integer mercury__diet__Var_10;
      MR_Word mercury__diet__Var_11;
      MR_Word mercury__diet__Var_12;

      mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__T2_4)) == (MR_mktag((MR_Integer) 1)));
      if (mercury__diet__succeeded)
      {
        mercury__diet__Var_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 0)));
        mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 1)));
        mercury__diet__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 2)));
        mercury__diet__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 3)));
        mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__T1_3, &mercury__diet__XY1_13, &mercury__diet__R1_14);
        mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__T2_4, &mercury__diet__XY2_15, &mercury__diet__R2_16);
        mercury__diet__Var_17 = (MR_Integer) 1;
        mercury__diet__subset_2_5_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__XY1_13, mercury__diet__R1_14, mercury__diet__XY2_15, mercury__diet__R2_16, &mercury__diet__Var_19);
        mercury__diet__succeeded = (mercury__diet__Var_17 == mercury__diet__Var_19);
      }
    }
    return mercury__diet__succeeded;
  }
}

static void MR_CALL 
mercury__diet__subset_2_5_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_56,
  MR_Tuple mercury__diet__HeadVar__1_1,
  MR_Word mercury__diet__R1_8,
  MR_Tuple mercury__diet__HeadVar__3_3,
  MR_Word mercury__diet__R2_11,
  MR_Word * mercury__diet__IsSubset_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_Box mercury__diet__X1_6 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 0));
      MR_Box mercury__diet__Y1_7 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 1));
      MR_Box mercury__diet__X2_9 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__3_3, (MR_Integer) 0));
      MR_Box mercury__diet__Y2_10 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__3_3, (MR_Integer) 1));
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__X1_6, mercury__diet__X2_9);
      if (mercury__diet__succeeded)
        *mercury__diet__IsSubset_12 = (MR_Integer) 0;
      else
      {
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));

        mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__Y2_10, mercury__diet__X1_6);
        if (mercury__diet__succeeded)
          if ((mercury__diet__R2_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mercury__diet__IsSubset_12 = (MR_Integer) 0;
          else
          {
            MR_Tuple mercury__diet__Min2_17;
            MR_Word mercury__diet__MinR2_18;

            mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__R2_11, &mercury__diet__Min2_17, &mercury__diet__MinR2_18);
            /* direct tailcall eliminated */
            {
              MR_Tuple mercury__diet__next_value_of_HeadVar__3_3 = mercury__diet__Min2_17;
              MR_Word mercury__diet__next_value_of_R2_11 = mercury__diet__MinR2_18;

              mercury__diet__HeadVar__3_3 = mercury__diet__next_value_of_HeadVar__3_3;
              mercury__diet__R2_11 = mercury__diet__next_value_of_R2_11;
            }
            continue;
          }
        else
        {
          MR_Word mercury__diet__TypeInfo_58_58;
          MR_Word mercury__diet__Upper_19;

{
#define MR_PROC_LABEL mercury__diet__subset_2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_56 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_58_58  = TypeInfo;
}
          mercury__builtin__compare_3_p_0(mercury__diet__TypeInfo_58_58, &mercury__diet__Upper_19, mercury__diet__Y1_7, mercury__diet__Y2_10);
          switch (mercury__diet__Upper_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              if ((mercury__diet__R1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__diet__IsSubset_12 = (MR_Integer) 1;
              else
              {
                MR_Tuple mercury__diet__Min1_24;
                MR_Word mercury__diet__MinR1_25;

                mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__R1_8, &mercury__diet__Min1_24, &mercury__diet__MinR1_25);
                /* direct tailcall eliminated */
                {
                  MR_Tuple mercury__diet__next_value_of_HeadVar__1_1 = mercury__diet__Min1_24;
                  MR_Word mercury__diet__next_value_of_R1_8 = mercury__diet__MinR1_25;

                  mercury__diet__HeadVar__1_1 = mercury__diet__next_value_of_HeadVar__1_1;
                  mercury__diet__R1_8 = mercury__diet__next_value_of_R1_8;
                }
                continue;
              }
              break;
            case (MR_Integer) 0:
              if ((mercury__diet__R1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__diet__IsSubset_12 = (MR_Integer) 1;
              else
              if ((mercury__diet__R2_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__diet__IsSubset_12 = (MR_Integer) 0;
              else
              {
                MR_Tuple mercury__diet__Min2_40;
                MR_Word mercury__diet__MinR2_41;
                MR_Tuple mercury__diet__Min1_42;
                MR_Word mercury__diet__MinR1_43;

                mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__R1_8, &mercury__diet__Min1_42, &mercury__diet__MinR1_43);
                mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__R2_11, &mercury__diet__Min2_40, &mercury__diet__MinR2_41);
                /* direct tailcall eliminated */
                {
                  MR_Tuple mercury__diet__next_value_of_HeadVar__1_1 = mercury__diet__Min1_42;
                  MR_Word mercury__diet__next_value_of_R1_8 = mercury__diet__MinR1_43;
                  MR_Tuple mercury__diet__next_value_of_HeadVar__3_3 = mercury__diet__Min2_40;
                  MR_Word mercury__diet__next_value_of_R2_11 = mercury__diet__MinR2_41;

                  mercury__diet__HeadVar__1_1 = mercury__diet__next_value_of_HeadVar__1_1;
                  mercury__diet__R1_8 = mercury__diet__next_value_of_R1_8;
                  mercury__diet__HeadVar__3_3 = mercury__diet__next_value_of_HeadVar__3_3;
                  mercury__diet__R2_11 = mercury__diet__next_value_of_R2_11;
                }
                continue;
              }
              break;
            case (MR_Integer) 2:
              *mercury__diet__IsSubset_12 = (MR_Integer) 0;
              break;
          }
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__diet__member_2_p_1(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_13,
  MR_Box * mercury__diet__Elem_1,
  MR_Word mercury__diet__Set_2,
  MR_Cont mercury__diet__cont,
  void * mercury__diet__cont_env_ptr)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Set_2)) == (MR_mktag((MR_Integer) 1)));
      MR_Box mercury__diet__X_7;
      MR_Box mercury__diet__Y_8;
      MR_Word mercury__diet__Left_10;
      MR_Word mercury__diet__Right_11;
      MR_Tuple mercury__diet__Var_12;
      MR_Integer mercury__diet__Var_9;

      if (mercury__diet__succeeded)
      {
        mercury__diet__Var_12 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set_2, (MR_Integer) 0)));
        mercury__diet__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set_2, (MR_Integer) 1)));
        mercury__diet__Left_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_2, (MR_Integer) 2)));
        mercury__diet__Right_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_2, (MR_Integer) 3)));
        mercury__diet__X_7 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_12, (MR_Integer) 0));
        mercury__diet__Y_8 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_12, (MR_Integer) 1));
        mercury__diet__member_2_p_1(mercury__diet__TypeClassInfo_for_diet_element_13, mercury__diet__Elem_1, mercury__diet__Left_10, mercury__diet__cont, mercury__diet__cont_env_ptr);
        mercury__diet__member_in_range_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_13, mercury__diet__X_7, mercury__diet__Y_8, mercury__diet__Elem_1, mercury__diet__cont, mercury__diet__cont_env_ptr);
        /* direct tailcall eliminated */
        {
          MR_Word mercury__diet__next_value_of_Set_2 = mercury__diet__Right_11;

          mercury__diet__Set_2 = mercury__diet__next_value_of_Set_2;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__diet__member_in_range_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
  MR_Box mercury__diet__Lo_4,
  MR_Box mercury__diet__Hi_5,
  MR_Box * mercury__diet__Elem_6,
  MR_Cont mercury__diet__cont,
  void * mercury__diet__cont_env_ptr)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_8, (MR_Integer) 0)), (MR_Integer) 5)));

      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_8), mercury__diet__Lo_4, mercury__diet__Hi_5);
      if (mercury__diet__succeeded)
      {
        *mercury__diet__Elem_6 = mercury__diet__Lo_4;
        mercury__diet__cont(mercury__diet__cont_env_ptr);
        {
          MR_Box mercury__diet__Var_7;
          MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_8, (MR_Integer) 0)), (MR_Integer) 6)));

          mercury__diet__Var_7 = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_8), mercury__diet__Lo_4);
          /* direct tailcall eliminated */
          {
            MR_Box mercury__diet__next_value_of_Lo_4 = mercury__diet__Var_7;

            mercury__diet__Lo_4 = mercury__diet__next_value_of_Lo_4;
          }
          continue;
        }
      }
      else
      {
        *mercury__diet__Elem_6 = mercury__diet__Lo_4;
        mercury__diet__cont(mercury__diet__cont_env_ptr);
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__member_2_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_13,
  MR_Box mercury__diet__Elem_1,
  MR_Word mercury__diet__Set_2)
{
  {
    MR_bool mercury__diet__succeeded;

    mercury__diet__succeeded = mercury__diet__contains_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_13, mercury__diet__Set_2, mercury__diet__Elem_1);
    return mercury__diet__succeeded;
  }
}

MR_bool MR_CALL 
mercury__diet__contains_2_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_11,
  MR_Word mercury__diet__T_3,
  MR_Box mercury__diet__Z_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__T_3)) == (MR_mktag((MR_Integer) 1)));
      MR_Box mercury__diet__X_5;
      MR_Box mercury__diet__Y_6;
      MR_Word mercury__diet__L_8;
      MR_Word mercury__diet__R_9;
      MR_Tuple mercury__diet__Var_10;
      MR_Integer mercury__diet__Var_7;
      MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

      if (mercury__diet__succeeded)
      {
        mercury__diet__Var_10 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_3, (MR_Integer) 0)));
        mercury__diet__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_3, (MR_Integer) 1)));
        mercury__diet__L_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_3, (MR_Integer) 2)));
        mercury__diet__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_3, (MR_Integer) 3)));
        mercury__diet__X_5 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_10, (MR_Integer) 0));
        mercury__diet__Y_6 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_10, (MR_Integer) 1));
        mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_11, (MR_Integer) 0)), (MR_Integer) 5)));
        mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_11), mercury__diet__Z_4, mercury__diet__X_5);
        if (mercury__diet__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Word mercury__diet__next_value_of_T_3 = mercury__diet__L_8;

            mercury__diet__T_3 = mercury__diet__next_value_of_T_3;
          }
          continue;
        }
        else
        {
          MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_11, (MR_Integer) 0)), (MR_Integer) 5)));

          mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_11), mercury__diet__Y_6, mercury__diet__Z_4);
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T_3 = mercury__diet__R_9;

              mercury__diet__T_3 = mercury__diet__next_value_of_T_3;
            }
            continue;
          }
          else
            mercury__diet__succeeded = MR_TRUE;
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__is_singleton_2_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_10,
  MR_Word mercury__diet__Set_3,
  MR_Box * mercury__diet__X_4)
{
  {
    MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Set_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__diet__TypeInfo_12_12;
    MR_Tuple mercury__diet__Var_6;
    MR_Box mercury__diet__Var_7;
    MR_Word mercury__diet__Var_8;
    MR_Word mercury__diet__Var_9;
    MR_Integer mercury__diet__TypeInfoIndex_11;
    MR_Integer mercury__diet__Var_5;

    if (mercury__diet__succeeded)
    {
      mercury__diet__Var_6 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set_3, (MR_Integer) 0)));
      mercury__diet__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set_3, (MR_Integer) 1)));
      mercury__diet__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_3, (MR_Integer) 2)));
      mercury__diet__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_3, (MR_Integer) 3)));
      *mercury__diet__X_4 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_6, (MR_Integer) 0));
      mercury__diet__Var_7 = (MR_hl_field(MR_mktag(0), mercury__diet__Var_6, (MR_Integer) 1));
      mercury__diet__TypeInfoIndex_11 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__diet__is_singleton_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_10 ;
	Index =  mercury__diet__TypeInfoIndex_11 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_12_12  = TypeInfo;
}
      mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_12_12, mercury__diet__Var_7, *mercury__diet__X_4);
      if (mercury__diet__succeeded)
      {
        mercury__diet__succeeded = (mercury__diet__Var_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mercury__diet__succeeded)
          mercury__diet__succeeded = (mercury__diet__Var_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    return mercury__diet__succeeded;
  }
}

MR_Word MR_CALL 
mercury__diet__make_interval_set_2_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_9,
  MR_Box mercury__diet__X_4,
  MR_Box mercury__diet__Y_5)
{
  {
    MR_bool mercury__diet__succeeded;
    MR_Word mercury__diet__T_6;
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_9, (MR_Integer) 0)), (MR_Integer) 5)));

    mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_9), mercury__diet__Y_5, mercury__diet__X_4);
    mercury__diet__succeeded = !(mercury__diet__succeeded);
    if (mercury__diet__succeeded)
    {
      MR_Tuple mercury__diet__Var_7;
      MR_Word mercury__diet__Var_18;
      MR_Word mercury__diet__Var_19;
      MR_Word mercury__diet__TypeInfo_11_11;

{
#define MR_PROC_LABEL mercury__diet__make_interval_set_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_9 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_11_11  = TypeInfo;
}
      {
        mercury__diet__Var_7 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__diet__Var_7, 0) = mercury__diet__X_4;
        MR_hl_field(MR_mktag(0), mercury__diet__Var_7, 1) = mercury__diet__Y_5;
      }
      mercury__diet__Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      mercury__diet__Var_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__Var_7));
        MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__Var_18));
        MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__Var_19));
      }
    }
    else
    {
      MR_Word mercury__diet__TypeInfo_13_13;

{
#define MR_PROC_LABEL mercury__diet__make_interval_set_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_9 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_13_13  = TypeInfo;
}
      mercury__diet__unexpected_interval_3_p_0(mercury__diet__TypeInfo_13_13, (MR_String) "function \140diet.make_interval_set\'/2", mercury__diet__X_4, mercury__diet__Y_5);
    }
    return mercury__diet__T_6;
  }
}

void MR_CALL 
mercury__diet__unexpected_interval_3_p_0(
  MR_Word mercury__diet__TypeInfo_for_T_17,
  MR_String mercury__diet__PredName_4,
  MR_Box mercury__diet__X_5,
  MR_Box mercury__diet__Y_6)
{
  {
    MR_Word mercury__diet__TypeCtorInfo_13_31;
    MR_Word mercury__diet__TypeClassInfo_for_op_table_40;
    MR_Word mercury__diet__TypeCtorInfo_13_56;
    MR_Word mercury__diet__TypeClassInfo_for_op_table_65;
    MR_String mercury__diet__Var_8;
    MR_String mercury__diet__Var_10;
    MR_String mercury__diet__Var_11;
    MR_String mercury__diet__Var_12;
    MR_String mercury__diet__Var_14;
    MR_String mercury__diet__Var_15;
    MR_Word mercury__diet__V_10_28;
    MR_Word mercury__diet__V_9_29;
    MR_Word mercury__diet__V_11_30;
    MR_Integer mercury__diet__V_10_37;
    MR_Integer mercury__diet__V_13_38;
    MR_Word mercury__diet__V_10_53;
    MR_Word mercury__diet__V_9_54;
    MR_Word mercury__diet__V_11_55;
    MR_Integer mercury__diet__V_10_62;
    MR_Integer mercury__diet__V_13_63;
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box);
    MR_Box mercury__diet__conv1_V_13_38;
    MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);
    MR_Box mercury__diet__conv3_V_13_63;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__diet__V_10_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__diet__TypeClassInfo_for_op_table_40 = (MR_Word) &mercury__diet_scalar_common_1[0];
    mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_op_table_40, (MR_Integer) 0)), (MR_Integer) 12)));
    mercury__diet__conv1_V_13_38 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_op_table_40), ((MR_Box) ((MR_Integer) 0)));
    mercury__diet__V_13_38 = ((MR_Integer) mercury__diet__conv1_V_13_38);
    mercury__diet__V_10_37 = (mercury__diet__V_13_38 + (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__diet__TypeInfo_for_T_17, (MR_Integer) 1, mercury__diet__V_10_37, mercury__diet__X_5, mercury__diet__V_10_28, &mercury__diet__V_9_29);
    mercury__diet__TypeCtorInfo_13_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__reverse_2_p_0(mercury__diet__TypeCtorInfo_13_31, mercury__diet__V_9_29, &mercury__diet__V_11_30);
    mercury__diet__Var_11 = mercury__string__append_list_1_f_0(mercury__diet__V_11_30);
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__diet__V_10_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__diet__TypeClassInfo_for_op_table_65 = (MR_Word) &mercury__diet_scalar_common_1[0];
    mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_op_table_65, (MR_Integer) 0)), (MR_Integer) 12)));
    mercury__diet__conv3_V_13_63 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_op_table_65), ((MR_Box) ((MR_Integer) 0)));
    mercury__diet__V_13_63 = ((MR_Integer) mercury__diet__conv3_V_13_63);
    mercury__diet__V_10_62 = (mercury__diet__V_13_63 + (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__diet__TypeInfo_for_T_17, (MR_Integer) 1, mercury__diet__V_10_62, mercury__diet__Y_6, mercury__diet__V_10_53, &mercury__diet__V_9_54);
    mercury__diet__TypeCtorInfo_13_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__reverse_2_p_0(mercury__diet__TypeCtorInfo_13_56, mercury__diet__V_9_54, &mercury__diet__V_11_55);
    mercury__diet__Var_15 = mercury__string__append_list_1_f_0(mercury__diet__V_11_55);
    mercury__string__append_3_p_2(mercury__diet__Var_15, (MR_String) "]", &mercury__diet__Var_14);
    mercury__string__append_3_p_2((MR_String) ", ", mercury__diet__Var_14, &mercury__diet__Var_12);
    mercury__string__append_3_p_2(mercury__diet__Var_11, mercury__diet__Var_12, &mercury__diet__Var_10);
    mercury__string__append_3_p_2((MR_String) "bad interval [", mercury__diet__Var_10, &mercury__diet__Var_8);
    {
      mercury__require__unexpected_3_p_0((MR_String) "diet", mercury__diet__PredName_4, mercury__diet__Var_8);
      return;
    }
  }
}

MR_Word MR_CALL 
mercury__diet__make_singleton_set_1_f_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_6,
  MR_Box mercury__diet__X_3)
{
  {
    MR_Word mercury__diet__HeadVar__2_2;
    MR_Tuple mercury__diet__Var_4;
    MR_Word mercury__diet__Var_11;
    MR_Word mercury__diet__Var_12;
    MR_Word mercury__diet__TypeInfo_8_8;

{
#define MR_PROC_LABEL mercury__diet__make_singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_6 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_8_8  = TypeInfo;
}
    {
      mercury__diet__Var_4 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__diet__Var_4, 0) = mercury__diet__X_3;
      MR_hl_field(MR_mktag(0), mercury__diet__Var_4, 1) = mercury__diet__X_3;
    }
    mercury__diet__Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__diet__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__diet__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 0) = ((MR_Box) (mercury__diet__Var_4));
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 2) = ((MR_Box) (mercury__diet__Var_11));
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 3) = ((MR_Box) (mercury__diet__Var_12));
    }
    return mercury__diet__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__diet__equal_2_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
  MR_Word mercury__diet__T1_3,
  MR_Word mercury__diet__T2_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;

      if ((mercury__diet__T1_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        mercury__diet__succeeded = (mercury__diet__T2_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      else
      {
        MR_Word mercury__diet__TypeInfo_22_22;
        MR_Word mercury__diet__TypeInfo_23_23;
        MR_Word mercury__diet__TypeCtorInfo_24_24;
        MR_Word mercury__diet__TypeInfo_26_26;
        MR_Word mercury__diet__R1_15;
        MR_Word mercury__diet__R2_16;
        MR_Tuple mercury__diet__Var_17;
        MR_Tuple mercury__diet__Var_20;
        MR_Integer mercury__diet__PolyConst1_21;
        MR_Integer mercury__diet__PolyConst2_25;
        MR_Tuple mercury__diet__Var_9;
        MR_Integer mercury__diet__Var_10;
        MR_Word mercury__diet__Var_11;
        MR_Word mercury__diet__Var_12;

        mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__T2_4)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__diet__succeeded)
        {
          mercury__diet__Var_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 0)));
          mercury__diet__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 1)));
          mercury__diet__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 2)));
          mercury__diet__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 3)));
          mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__T1_3, &mercury__diet__Var_17, &mercury__diet__R1_15);
          mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__T2_4, &mercury__diet__Var_20, &mercury__diet__R2_16);
          mercury__diet__TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
          mercury__diet__PolyConst2_25 = (MR_Integer) 2;
          mercury__diet__PolyConst1_21 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__diet__equal_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_19 ;
	Index =  mercury__diet__PolyConst1_21 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_22_22  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__diet__equal_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_19 ;
	Index =  mercury__diet__PolyConst1_21 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_23_23  = TypeInfo;
}
          {
            mercury__diet__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_26_26, 0) = ((MR_Box) (mercury__diet__TypeCtorInfo_24_24));
            MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_26_26, 1) = ((MR_Box) (mercury__diet__PolyConst2_25));
            MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_26_26, 2) = ((MR_Box) (mercury__diet__TypeInfo_22_22));
            MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_26_26, 3) = ((MR_Box) (mercury__diet__TypeInfo_23_23));
          }
          mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_26_26, ((MR_Box) (mercury__diet__Var_17)), ((MR_Box) (mercury__diet__Var_20)));
          if (mercury__diet__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__diet__next_value_of_T1_3 = mercury__diet__R1_15;
              MR_Word mercury__diet__next_value_of_T2_4 = mercury__diet__R2_16;

              mercury__diet__T1_3 = mercury__diet__next_value_of_T1_3;
              mercury__diet__T2_4 = mercury__diet__next_value_of_T2_4;
            }
            continue;
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

static void MR_CALL 
mercury__diet__take_min_iter_3_p_0(
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_21,
  MR_Word mercury__diet__T0_4,
  MR_Tuple * mercury__diet__X_5,
  MR_Word * mercury__diet__T_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_Word mercury__diet__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 3)));
      MR_Word mercury__diet__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 2)));
      MR_Tuple mercury__diet__Var_28 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 0)));
      MR_Integer mercury__diet__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 1)));

      if ((mercury__diet__Var_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__diet__X_5 = mercury__diet__Var_28;
        *mercury__diet__T_6 = mercury__diet__Var_25;
      }
      else
      {
        MR_Tuple mercury__diet__A_10 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Var_26, (MR_Integer) 0)));
        MR_Word mercury__diet__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Var_26, (MR_Integer) 2)));
        MR_Word mercury__diet__M_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Var_26, (MR_Integer) 3)));
        MR_Word mercury__diet__N0_15;
        MR_Word mercury__diet__N1_16;
        MR_Integer mercury__diet__Var_18;
        MR_Integer mercury__diet__Var_19;
        MR_Integer mercury__diet__Var_32;
        MR_Integer mercury__diet__Var_33;
        MR_Integer mercury__diet__Var_34;
        MR_Integer mercury__diet__Var_52;
        MR_Integer mercury__diet__Var_53;
        MR_Integer mercury__diet__Var_54;
        MR_Integer mercury__diet__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Var_26, (MR_Integer) 1)));
        MR_Tuple mercury__diet__Var_59;
        MR_Word mercury__diet__Var_61;
        MR_Word mercury__diet__Var_62;

        if ((mercury__diet__M_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__diet__Var_33 = (MR_Integer) 0;
        else
        {
          MR_Tuple mercury__diet__Var_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__M_13, (MR_Integer) 0)));
          MR_Word mercury__diet__Var_37;
          MR_Word mercury__diet__Var_38;

          mercury__diet__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__M_13, (MR_Integer) 1)));
          mercury__diet__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__M_13, (MR_Integer) 2)));
          mercury__diet__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__M_13, (MR_Integer) 3)));
        }
        if ((mercury__diet__Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__diet__Var_34 = (MR_Integer) 0;
        else
        {
          MR_Tuple mercury__diet__Var_39 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Var_25, (MR_Integer) 0)));
          MR_Word mercury__diet__Var_41;
          MR_Word mercury__diet__Var_42;

          mercury__diet__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Var_25, (MR_Integer) 1)));
          mercury__diet__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Var_25, (MR_Integer) 2)));
          mercury__diet__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Var_25, (MR_Integer) 3)));
        }
        mercury__diet__succeeded = (mercury__diet__Var_33 > mercury__diet__Var_34);
        if (mercury__diet__succeeded)
          mercury__diet__Var_32 = mercury__diet__Var_33;
        else
          mercury__diet__Var_32 = mercury__diet__Var_34;
        mercury__diet__Var_18 = ((MR_Integer) 1 + mercury__diet__Var_32);
        {
          mercury__diet__N0_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__diet__N0_15, 0) = ((MR_Box) (mercury__diet__Var_28));
          MR_hl_field(MR_mktag(1), mercury__diet__N0_15, 1) = ((MR_Box) (mercury__diet__Var_18));
          MR_hl_field(MR_mktag(1), mercury__diet__N0_15, 2) = ((MR_Box) (mercury__diet__M_13));
          MR_hl_field(MR_mktag(1), mercury__diet__N0_15, 3) = ((MR_Box) (mercury__diet__Var_25));
        }
        if ((mercury__diet__L_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__diet__Var_53 = (MR_Integer) 0;
        else
        {
          MR_Tuple mercury__diet__Var_55 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_12, (MR_Integer) 0)));
          MR_Word mercury__diet__Var_57;
          MR_Word mercury__diet__Var_58;

          mercury__diet__Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_12, (MR_Integer) 1)));
          mercury__diet__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_12, (MR_Integer) 2)));
          mercury__diet__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_12, (MR_Integer) 3)));
        }
        mercury__diet__Var_59 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__N0_15, (MR_Integer) 0)));
        mercury__diet__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__N0_15, (MR_Integer) 1)));
        mercury__diet__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__N0_15, (MR_Integer) 2)));
        mercury__diet__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__N0_15, (MR_Integer) 3)));
        mercury__diet__succeeded = (mercury__diet__Var_53 > mercury__diet__Var_54);
        if (mercury__diet__succeeded)
          mercury__diet__Var_52 = mercury__diet__Var_53;
        else
          mercury__diet__Var_52 = mercury__diet__Var_54;
        mercury__diet__Var_19 = ((MR_Integer) 1 + mercury__diet__Var_52);
        {
          mercury__diet__N1_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__diet__N1_16, 0) = ((MR_Box) (mercury__diet__A_10));
          MR_hl_field(MR_mktag(1), mercury__diet__N1_16, 1) = ((MR_Box) (mercury__diet__Var_19));
          MR_hl_field(MR_mktag(1), mercury__diet__N1_16, 2) = ((MR_Box) (mercury__diet__L_12));
          MR_hl_field(MR_mktag(1), mercury__diet__N1_16, 3) = ((MR_Box) (mercury__diet__N0_15));
        }
        /* direct tailcall eliminated */
        {
          MR_Word mercury__diet__next_value_of_T0_4 = mercury__diet__N1_16;

          mercury__diet__T0_4 = mercury__diet__next_value_of_T0_4;
        }
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__diet__is_non_empty_1_p_0(
  MR_Word mercury__diet__TypeInfo_for_T_6,
  MR_Word mercury__diet__HeadVar__1_1)
{
  {
    MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Tuple mercury__diet__Var_2;
    MR_Integer mercury__diet__Var_3;
    MR_Word mercury__diet__Var_4;
    MR_Word mercury__diet__Var_5;

    if (mercury__diet__succeeded)
    {
      mercury__diet__Var_2 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 0)));
      mercury__diet__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 1)));
      mercury__diet__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 2)));
      mercury__diet__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 3)));
    }
    return mercury__diet__succeeded;
  }
}

MR_bool MR_CALL 
mercury__diet__is_empty_1_p_0(
  MR_Word mercury__diet__TypeInfo_for_T_2,
  MR_Word mercury__diet__HeadVar__1_1)
{
  {
    MR_bool mercury__diet__succeeded = (mercury__diet__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    return mercury__diet__succeeded;
  }
}

void MR_CALL 
mercury__diet__empty_1_p_1(
  MR_Word mercury__diet__TypeInfo_for_T_2,
  MR_Word * mercury__diet__HeadVar__1_1)
{
  *mercury__diet__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
}

MR_bool MR_CALL 
mercury__diet__empty_1_p_0(
  MR_Word mercury__diet__TypeInfo_for_T_2,
  MR_Word mercury__diet__HeadVar__1_1)
{
  {
    MR_bool mercury__diet__succeeded;
    MR_Word mercury__diet__Var_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__diet__succeeded = mercury__diet____Unify____diet_1_0(mercury__diet__TypeInfo_for_T_2, mercury__diet__HeadVar__1_1, mercury__diet__Var_3);
    return mercury__diet__succeeded;
  }
}

MR_bool MR_CALL 
mercury__diet____Unify____diet_1_0(
  MR_Word mercury__diet__TypeInfo_for_T_15,
  MR_Word mercury__diet__HeadVar__1_1,
  MR_Word mercury__diet__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__diet__succeeded;
      MR_Integer mercury__diet__CastX_13 = (MR_Integer) mercury__diet__HeadVar__1_1;
      MR_Integer mercury__diet__CastY_14 = (MR_Integer) mercury__diet__HeadVar__2_2;

      mercury__diet__succeeded = (mercury__diet__CastX_13 == mercury__diet__CastY_14);
      if (mercury__diet__succeeded)
        mercury__diet__succeeded = MR_TRUE;
      else
      if ((mercury__diet__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mercury__diet__CastX_3 = (MR_Integer) mercury__diet__HeadVar__1_1;
        MR_Integer mercury__diet__CastY_4 = (MR_Integer) mercury__diet__HeadVar__2_2;

        mercury__diet__succeeded = (mercury__diet__CastY_4 == mercury__diet__CastX_3);
      }
      else
      {
        MR_Word mercury__diet__TypeCtorInfo_16_16;
        MR_Word mercury__diet__TypeInfo_18_18;
        MR_Tuple mercury__diet__ArgX1_5 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 0)));
        MR_Tuple mercury__diet__ArgY1_6;
        MR_Integer mercury__diet__ArgX2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mercury__diet__ArgY2_8;
        MR_Word mercury__diet__ArgX3_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__diet__ArgY3_10;
        MR_Word mercury__diet__ArgX4_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mercury__diet__ArgY4_12;
        MR_Integer mercury__diet__PolyConst2_17;

        mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__diet__succeeded)
        {
          mercury__diet__ArgY1_6 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
          mercury__diet__ArgY2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
          mercury__diet__ArgY3_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 2)));
          mercury__diet__ArgY4_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 3)));
          mercury__diet__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
          mercury__diet__PolyConst2_17 = (MR_Integer) 2;
          {
            mercury__diet__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_18_18, 0) = ((MR_Box) (mercury__diet__TypeCtorInfo_16_16));
            MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_18_18, 1) = ((MR_Box) (mercury__diet__PolyConst2_17));
            MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_18_18, 2) = ((MR_Box) (mercury__diet__TypeInfo_for_T_15));
            MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_18_18, 3) = ((MR_Box) (mercury__diet__TypeInfo_for_T_15));
          }
          mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_18_18, ((MR_Box) (mercury__diet__ArgX1_5)), ((MR_Box) (mercury__diet__ArgY1_6)));
          if (mercury__diet__succeeded)
          {
            mercury__diet__succeeded = (mercury__diet__ArgX2_7 == mercury__diet__ArgY2_8);
            if (mercury__diet__succeeded)
            {
              mercury__diet__succeeded = mercury__diet____Unify____diet_1_0(mercury__diet__TypeInfo_for_T_15, mercury__diet__ArgX3_9, mercury__diet__ArgY3_10);
              if (mercury__diet__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__diet__next_value_of_HeadVar__1_1 = mercury__diet__ArgX4_11;
                  MR_Word mercury__diet__next_value_of_HeadVar__2_2 = mercury__diet__ArgY4_12;

                  mercury__diet__HeadVar__1_1 = mercury__diet__next_value_of_HeadVar__1_1;
                  mercury__diet__HeadVar__2_2 = mercury__diet__next_value_of_HeadVar__2_2;
                }
                continue;
              }
            }
          }
        }
      }
      return mercury__diet__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__diet__init_1_p_0(
  MR_Word mercury__diet__TypeInfo_for_T_2,
  MR_Word * mercury__diet__HeadVar__1_1)
{
  *mercury__diet__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
}

MR_Word MR_CALL 
mercury__diet__init_0_f_0(
  MR_Word mercury__diet__TypeInfo_for_T_2)
{
  {
    MR_Word mercury__diet__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__diet__HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
mercury__diet____Unify____diet_1_0_10001(
  MR_Box mercury__diet__wrapper_arg_1,
  MR_Box mercury__diet__wrapper_arg_2,
  MR_Box mercury__diet__wrapper_arg_3)
{
  {
    MR_bool mercury__diet__succeeded;

    mercury__diet__succeeded = mercury__diet____Unify____diet_1_0(((MR_Word) mercury__diet__wrapper_arg_1), ((MR_Word) mercury__diet__wrapper_arg_2), ((MR_Word) mercury__diet__wrapper_arg_3));
    return mercury__diet__succeeded;
  }
}

static void MR_CALL 
mercury__diet____Compare____diet_1_0_10001(
  MR_Box mercury__diet__wrapper_arg_1,
  MR_Box * mercury__diet__wrapper_arg_2,
  MR_Box mercury__diet__wrapper_arg_3,
  MR_Box mercury__diet__wrapper_arg_4)
{
  {
    MR_Word mercury__diet__conv0_HeadVar__1_1;

    mercury__diet____Compare____diet_1_0(((MR_Word) mercury__diet__wrapper_arg_1), &mercury__diet__conv0_HeadVar__1_1, ((MR_Word) mercury__diet__wrapper_arg_3), ((MR_Word) mercury__diet__wrapper_arg_4));
    *mercury__diet__wrapper_arg_2 = ((MR_Box) (mercury__diet__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__diet____Unify____interval_1_0_10001(
  MR_Box mercury__diet__wrapper_arg_1,
  MR_Box mercury__diet__wrapper_arg_2,
  MR_Box mercury__diet__wrapper_arg_3)
{
  {
    MR_bool mercury__diet__succeeded;

    mercury__diet__succeeded = mercury__diet____Unify____interval_1_0(((MR_Word) mercury__diet__wrapper_arg_1), ((MR_Tuple) mercury__diet__wrapper_arg_2), ((MR_Tuple) mercury__diet__wrapper_arg_3));
    return mercury__diet__succeeded;
  }
}

static void MR_CALL 
mercury__diet____Compare____interval_1_0_10001(
  MR_Box mercury__diet__wrapper_arg_1,
  MR_Box * mercury__diet__wrapper_arg_2,
  MR_Box mercury__diet__wrapper_arg_3,
  MR_Box mercury__diet__wrapper_arg_4)
{
  {
    MR_Word mercury__diet__conv0_HeadVar__1_1;

    mercury__diet____Compare____interval_1_0(((MR_Word) mercury__diet__wrapper_arg_1), &mercury__diet__conv0_HeadVar__1_1, ((MR_Tuple) mercury__diet__wrapper_arg_3), ((MR_Tuple) mercury__diet__wrapper_arg_4));
    *mercury__diet__wrapper_arg_2 = ((MR_Box) (mercury__diet__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__less_than_2_2_p_0_10001(
  MR_Box mercury__diet__closure_arg,
  MR_Box mercury__diet__wrapper_arg_1,
  MR_Box mercury__diet__wrapper_arg_2)
{
  {
    MR_bool mercury__diet__succeeded;
    MR_Box mercury__diet__closure = mercury__diet__closure_arg;

    mercury__diet__succeeded = mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__less_than_2_2_p_0(((MR_Integer) mercury__diet__wrapper_arg_1), ((MR_Integer) mercury__diet__wrapper_arg_2));
    return mercury__diet__succeeded;
  }
}

static MR_Box MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__successor_1_1_f_0_10001(
  MR_Box mercury__diet__closure_arg,
  MR_Box mercury__diet__wrapper_arg_1)
{
  {
    MR_Box mercury__diet__wrapper_arg_2;
    MR_Box mercury__diet__closure = mercury__diet__closure_arg;
    MR_Integer mercury__diet__conv0_HeadVar__2_2;

    mercury__diet__conv0_HeadVar__2_2 = mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__successor_1_1_f_0(((MR_Integer) mercury__diet__wrapper_arg_1));
    mercury__diet__wrapper_arg_2 = ((MR_Box) (mercury__diet__conv0_HeadVar__2_2));
    return mercury__diet__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__predecessor_1_1_f_0_10001(
  MR_Box mercury__diet__closure_arg,
  MR_Box mercury__diet__wrapper_arg_1)
{
  {
    MR_Box mercury__diet__wrapper_arg_2;
    MR_Box mercury__diet__closure = mercury__diet__closure_arg;
    MR_Integer mercury__diet__conv0_HeadVar__2_2;

    mercury__diet__conv0_HeadVar__2_2 = mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__predecessor_1_1_f_0(((MR_Integer) mercury__diet__wrapper_arg_1));
    mercury__diet__wrapper_arg_2 = ((MR_Box) (mercury__diet__conv0_HeadVar__2_2));
    return mercury__diet__wrapper_arg_2;
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
