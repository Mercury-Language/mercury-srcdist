/*
** Automatically generated from `diet.m'
** by the Mercury compiler,
** version DEV
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




#line 94 "diet.c"
static const MR_DuFunctorDesc mercury__diet__diet__du_functor_desc_diet_1_0;

#line 97 "diet.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__diet____vpti_tuple_2__pseudo_1__pseudo_1;

#line 100 "diet.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__diet__diet__pti_diet_1__pseudo_1;

#line 103 "diet.c"
static const MR_PseudoTypeInfo mercury__diet__diet__field_types_diet_1_1[4];

#line 106 "diet.c"
static const MR_ConstString mercury__diet__diet__field_names_diet_1_1[4];

#line 109 "diet.c"
static const MR_DuFunctorDesc mercury__diet__diet__du_functor_desc_diet_1_1;

#line 112 "diet.c"
static const MR_DuFunctorDescPtr mercury__diet__diet__du_stag_ordered_diet_1_0[1];

#line 115 "diet.c"
static const MR_DuFunctorDescPtr mercury__diet__diet__du_stag_ordered_diet_1_1[1];

#line 118 "diet.c"
static const MR_DuPtagLayout mercury__diet__diet__du_ptag_ordered_diet_1[2];

#line 121 "diet.c"
static const MR_DuFunctorDescPtr mercury__diet__diet__du_name_ordered_diet_1[2];

#line 124 "diet.c"
static const MR_Integer mercury__diet__diet__functor_number_map_diet_1[2];

#line 127 "diet.c"
static const MR_ConstString mercury__diet__diet__type_class_id_var_names_diet_element_1[1];

#line 130 "diet.c"
static const MR_TypeClassMethod mercury__diet__diet__type_class_id_method_ids_diet_element_1[3];

#line 133 "diet.c"
static const MR_TypeClassId mercury__diet__diet__type_class_id_diet_element_1;

#line 136 "diet.c"
static MR_bool MR_CALL 
mercury__diet____Unify____diet_1_0_10001(
#line 139 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 141 "diet.c"
  MR_Box mercury__diet__wrapper_arg_2,
#line 143 "diet.c"
  MR_Box mercury__diet__wrapper_arg_3);

#line 146 "diet.c"
static void MR_CALL 
mercury__diet____Compare____diet_1_0_10001(
#line 149 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 151 "diet.c"
  MR_Box * mercury__diet__wrapper_arg_2,
#line 153 "diet.c"
  MR_Box mercury__diet__wrapper_arg_3,
#line 155 "diet.c"
  MR_Box mercury__diet__wrapper_arg_4);

#line 158 "diet.c"
static MR_bool MR_CALL 
mercury__diet____Unify____interval_1_0_10001(
#line 161 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 163 "diet.c"
  MR_Box mercury__diet__wrapper_arg_2,
#line 165 "diet.c"
  MR_Box mercury__diet__wrapper_arg_3);

#line 168 "diet.c"
static void MR_CALL 
mercury__diet____Compare____interval_1_0_10001(
#line 171 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 173 "diet.c"
  MR_Box * mercury__diet__wrapper_arg_2,
#line 175 "diet.c"
  MR_Box mercury__diet__wrapper_arg_3,
#line 177 "diet.c"
  MR_Box mercury__diet__wrapper_arg_4);

#line 180 "diet.c"
static MR_bool MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__less_than_2_2_p_0_10001(
#line 183 "diet.c"
  MR_Box mercury__diet__closure_arg,
#line 185 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 187 "diet.c"
  MR_Box mercury__diet__wrapper_arg_2);

#line 190 "diet.c"
static MR_Box MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__successor_1_1_f_0_10001(
#line 193 "diet.c"
  MR_Box mercury__diet__closure_arg,
#line 195 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1);

#line 198 "diet.c"
static MR_Box MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__predecessor_1_1_f_0_10001(
#line 201 "diet.c"
  MR_Box mercury__diet__closure_arg,
#line 203 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1);

#line 1717 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_51_95_95_91_49_44_32_51_44_32_53_93_95_48_5_p_0(
#line 1717 "diet.m"
  MR_Word mercury__diet__V_19_19,
#line 1717 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1717 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1717 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1717 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_A_0_10,
#line 1717 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_A_11);

#line 1717 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
#line 1717 "diet.m"
  MR_Word mercury__diet__V_19_19,
#line 1717 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1717 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1717 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1717 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
#line 1717 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_11);

#line 1536 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
#line 1536 "diet.m"
  MR_Word mercury__diet__V_19_19,
#line 1536 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1536 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1536 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1536 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
#line 1536 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11);

#line 1565 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_117_112_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_7_p_0(
#line 1565 "diet.m"
  MR_Word mercury__diet__V_29_29,
#line 1565 "diet.m"
  MR_Word mercury__diet__V_30_30,
#line 1565 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
#line 1565 "diet.m"
  MR_Box mercury__diet__Lo_9,
#line 1565 "diet.m"
  MR_Box mercury__diet__Hi_10,
#line 1565 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_A_0_13,
#line 1565 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_A_14,
#line 1565 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_B_0_15,
#line 1565 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_B_16);

#line 127 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__diet__V_20_20,
#line 127 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 127 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 127 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4);

#line 127 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__diet__V_20_20,
#line 127 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 127 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 127 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4);

#line 261 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(
#line 261 "diet.m"
  MR_Word mercury__diet__V_34_34,
#line 261 "diet.m"
  MR_Word mercury__diet__V_35_35,
#line 261 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
#line 261 "diet.m"
  MR_Word mercury__diet__T_8,
#line 261 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_Acc1_0_16,
#line 261 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_Acc1_17,
#line 261 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_Acc2_0_18,
#line 261 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_Acc2_19);

#line 253 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(
#line 253 "diet.m"
  MR_Word mercury__diet__V_23_23,
#line 253 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 253 "diet.m"
  MR_Word mercury__diet__T_6,
#line 253 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 253 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14);

#line 328 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(
#line 328 "diet.m"
  MR_Word mercury__diet__V_23_23,
#line 328 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 328 "diet.m"
  MR_Word mercury__diet__T_6,
#line 328 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 328 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14);

#line 127 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__diet__V_18_18,
#line 127 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 127 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 127 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4);

#line 328 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(
#line 328 "diet.m"
  MR_Word mercury__diet__V_23_23,
#line 328 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 328 "diet.m"
  MR_Word mercury__diet__T_6,
#line 328 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 328 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_Acc_14);

#line 241 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(
#line 241 "diet.m"
  MR_Word mercury__diet__V_27_27,
#line 241 "diet.m"
  MR_Word mercury__diet__T_6,
#line 241 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 241 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_Acc_14);

#line 127 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__diet__V_22_22,
#line 127 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 127 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 127 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 591 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(
#line 591 "diet.m"
  MR_Word mercury__diet__IsLeft_5,
#line 591 "diet.m"
  MR_Tuple mercury__diet__X_6,
#line 591 "diet.m"
  MR_Word mercury__diet__T0_7);

#line 523 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(
#line 523 "diet.m"
  MR_Tuple mercury__diet__X_5,
#line 523 "diet.m"
  MR_Word mercury__diet__L_6,
#line 523 "diet.m"
  MR_Word mercury__diet__R_7);

#line 519 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(
#line 519 "diet.m"
  MR_Tuple mercury__diet__X_5,
#line 519 "diet.m"
  MR_Word mercury__diet__L_6,
#line 519 "diet.m"
  MR_Word mercury__diet__R_7);

#line 1415 "diet.m"
static void MR_CALL 
mercury__diet__diff_helper_8_p_0(
#line 1415 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_44,
#line 1415 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 1415 "diet.m"
  MR_Word mercury__diet__Right0_11,
#line 1415 "diet.m"
  MR_Word mercury__diet__Left0_12,
#line 1415 "diet.m"
  MR_Word mercury__diet__Head0_13,
#line 1415 "diet.m"
  MR_Word mercury__diet__Stream0_14,
#line 1415 "diet.m"
  MR_Word * mercury__diet__Output_15,
#line 1415 "diet.m"
  MR_Word * mercury__diet__Head_16,
#line 1415 "diet.m"
  MR_Word * mercury__diet__Stream_17);

#line 1385 "diet.m"
static void MR_CALL 
mercury__diet__diff_6_p_0(
#line 1385 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
#line 1385 "diet.m"
  MR_Word mercury__diet__Input_7,
#line 1385 "diet.m"
  MR_Word mercury__diet__Head0_8,
#line 1385 "diet.m"
  MR_Word mercury__diet__Stream0_9,
#line 1385 "diet.m"
  MR_Word * mercury__diet__Output_10,
#line 1385 "diet.m"
  MR_Word * mercury__diet__Head_11,
#line 1385 "diet.m"
  MR_Word * mercury__diet__Stream_12);

#line 1314 "diet.m"
static void MR_CALL 
mercury__diet__inter_help_8_p_0(
#line 1314 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_49,
#line 1314 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 1314 "diet.m"
  MR_Word mercury__diet__Right0_11,
#line 1314 "diet.m"
  MR_Word mercury__diet__Left0_12,
#line 1314 "diet.m"
  MR_Word mercury__diet__Head0_13,
#line 1314 "diet.m"
  MR_Word mercury__diet__Stream0_14,
#line 1314 "diet.m"
  MR_Word * mercury__diet__Result_15,
#line 1314 "diet.m"
  MR_Word * mercury__diet__Head_16,
#line 1314 "diet.m"
  MR_Word * mercury__diet__Stream_17);

#line 1284 "diet.m"
static void MR_CALL 
mercury__diet__inter_2_6_p_0(
#line 1284 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_26,
#line 1284 "diet.m"
  MR_Word mercury__diet__Input_7,
#line 1284 "diet.m"
  MR_Word mercury__diet__Head0_8,
#line 1284 "diet.m"
  MR_Word mercury__diet__Stream0_9,
#line 1284 "diet.m"
  MR_Word * mercury__diet__Result_10,
#line 1284 "diet.m"
  MR_Word * mercury__diet__Head_11,
#line 1284 "diet.m"
  MR_Word * mercury__diet__Stream_12);

#line 1198 "diet.m"
static void MR_CALL 
mercury__diet__union_helper_9_p_0(
#line 1198 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_56,
#line 1198 "diet.m"
  MR_Word mercury__diet__Left0_10,
#line 1198 "diet.m"
  MR_Tuple mercury__diet__HeadVar__2_2,
#line 1198 "diet.m"
  MR_Word mercury__diet__Right0_13,
#line 1198 "diet.m"
  MR_Word mercury__diet__Limit_14,
#line 1198 "diet.m"
  MR_Word mercury__diet__Head0_15,
#line 1198 "diet.m"
  MR_Word mercury__diet__Stream0_16,
#line 1198 "diet.m"
  MR_Word * mercury__diet__Left_17,
#line 1198 "diet.m"
  MR_Word * mercury__diet__Head_18,
#line 1198 "diet.m"
  MR_Word * mercury__diet__Stream_19);

#line 1166 "diet.m"
static void MR_CALL 
mercury__diet__union_2_7_p_0(
#line 1166 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_30,
#line 1166 "diet.m"
  MR_Word mercury__diet__Input_8,
#line 1166 "diet.m"
  MR_Word mercury__diet__Limit_9,
#line 1166 "diet.m"
  MR_Word mercury__diet__Head0_10,
#line 1166 "diet.m"
  MR_Word mercury__diet__Stream0_11,
#line 1166 "diet.m"
  MR_Word * mercury__diet__Left_12,
#line 1166 "diet.m"
  MR_Word * mercury__diet__Head_13,
#line 1166 "diet.m"
  MR_Word * mercury__diet__Stream_14);

#line 1012 "diet.m"
static void MR_CALL 
mercury__diet__find_del_right_4_p_0(
#line 1012 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_18,
#line 1012 "diet.m"
  MR_Box mercury__diet__P0_5,
#line 1012 "diet.m"
  MR_Word mercury__diet__T0_6,
#line 1012 "diet.m"
  MR_Box * mercury__diet__P_7,
#line 1012 "diet.m"
  MR_Word * mercury__diet__T_8);

#line 993 "diet.m"
static void MR_CALL 
mercury__diet__find_del_left_4_p_0(
#line 993 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_18,
#line 993 "diet.m"
  MR_Box mercury__diet__P0_5,
#line 993 "diet.m"
  MR_Word mercury__diet__T0_6,
#line 993 "diet.m"
  MR_Box * mercury__diet__P_7,
#line 993 "diet.m"
  MR_Word * mercury__diet__T_8);

#line 785 "diet.m"
static void MR_CALL 
mercury__diet__subset_2_5_p_0(
#line 785 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_56,
#line 785 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 785 "diet.m"
  MR_Word mercury__diet__R1_8,
#line 785 "diet.m"
  MR_Tuple mercury__diet__HeadVar__3_3,
#line 785 "diet.m"
  MR_Word mercury__diet__R2_11,
#line 785 "diet.m"
  MR_Word * mercury__diet__IsSubset_12);

#line 757 "diet.m"
static void MR_CALL 
mercury__diet__member_in_range_3_p_0(
#line 757 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
#line 757 "diet.m"
  MR_Box mercury__diet__Lo_4,
#line 757 "diet.m"
  MR_Box mercury__diet__Hi_5,
#line 757 "diet.m"
  MR_Box * mercury__diet__Elem_6,
#line 757 "diet.m"
  MR_Cont mercury__diet__cont,
#line 757 "diet.m"
  void * mercury__diet__cont_env_ptr);

#line 653 "diet.m"
static void MR_CALL 
mercury__diet__take_min_iter_3_p_0(
#line 653 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_21,
#line 653 "diet.m"
  MR_Word mercury__diet__T0_4,
#line 653 "diet.m"
  MR_Tuple * mercury__diet__X_5,
#line 653 "diet.m"
  MR_Word * mercury__diet__T_6);

#line 632 "diet.m"
static MR_Word MR_CALL 
mercury__diet__reroot_2_f_0(
#line 632 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_25,
#line 632 "diet.m"
  MR_Word mercury__diet__L_4,
#line 632 "diet.m"
  MR_Word mercury__diet__R_5);

#line 620 "diet.m"
static void MR_CALL 
mercury__diet__take_max_3_p_0(
#line 620 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 620 "diet.m"
  MR_Word mercury__diet__T0_4,
#line 620 "diet.m"
  MR_Tuple * mercury__diet__X_5,
#line 620 "diet.m"
  MR_Word * mercury__diet__T_6);

#line 608 "diet.m"
static void MR_CALL 
mercury__diet__take_min_3_p_0(
#line 608 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 608 "diet.m"
  MR_Word mercury__diet__T0_4,
#line 608 "diet.m"
  MR_Tuple * mercury__diet__X_5,
#line 608 "diet.m"
  MR_Word * mercury__diet__T_6);

#line 569 "diet.m"
static MR_Word MR_CALL 
mercury__diet__join_3_f_0(
#line 569 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
#line 569 "diet.m"
  MR_Tuple mercury__diet__V_5,
#line 569 "diet.m"
  MR_Word mercury__diet__L_6,
#line 569 "diet.m"
  MR_Word mercury__diet__R_7);

#line 486 "diet.m"
static MR_Box MR_CALL 
mercury__diet__max_elem_2_f_0(
#line 486 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_6,
#line 486 "diet.m"
  MR_Box mercury__diet__X_4,
#line 486 "diet.m"
  MR_Box mercury__diet__Y_5);

#line 482 "diet.m"
static MR_Box MR_CALL 
mercury__diet__min_elem_2_f_0(
#line 482 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_6,
#line 482 "diet.m"
  MR_Box mercury__diet__X_4,
#line 482 "diet.m"
  MR_Box mercury__diet__Y_5);


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
#include "version_array.mh"



#line 779 "diet.c"
static const MR_DuFunctorDesc mercury__diet__diet__du_functor_desc_diet_1_0 = {
  (MR_String) "empty",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 794 "diet.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__diet____vpti_tuple_2__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 804 "diet.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__diet__diet__pti_diet_1__pseudo_1 = {
  &mercury__diet__diet__type_ctor_info_diet_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 812 "diet.c"
static const MR_PseudoTypeInfo mercury__diet__diet__field_types_diet_1_1[4] = {
  (MR_PseudoTypeInfo) &mercury__diet____vpti_tuple_2__pseudo_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__diet__diet__pti_diet_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__diet__diet__pti_diet_1__pseudo_1
};

#line 820 "diet.c"
static const MR_ConstString mercury__diet__diet__field_names_diet_1_1[4] = {
  (MR_String) "interval",
  (MR_String) "node_height",
  (MR_String) "left",
  (MR_String) "right"
};

#line 828 "diet.c"
static const MR_DuFunctorDesc mercury__diet__diet__du_functor_desc_diet_1_1 = {
  (MR_String) "node",
  (MR_Integer) 4,
  (MR_Integer) 13,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__diet__diet__field_types_diet_1_1,
  mercury__diet__diet__field_names_diet_1_1,
  NULL,
  NULL
};

#line 843 "diet.c"
static const MR_DuFunctorDescPtr mercury__diet__diet__du_stag_ordered_diet_1_0[1] = {
  &mercury__diet__diet__du_functor_desc_diet_1_0
};

#line 848 "diet.c"
static const MR_DuFunctorDescPtr mercury__diet__diet__du_stag_ordered_diet_1_1[1] = {
  &mercury__diet__diet__du_functor_desc_diet_1_1
};

#line 853 "diet.c"
static const MR_DuPtagLayout mercury__diet__diet__du_ptag_ordered_diet_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__diet__diet__du_stag_ordered_diet_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__diet__diet__du_stag_ordered_diet_1_1
  }
};

#line 867 "diet.c"
static const MR_DuFunctorDescPtr mercury__diet__diet__du_name_ordered_diet_1[2] = {
  &mercury__diet__diet__du_functor_desc_diet_1_0,
  &mercury__diet__diet__du_functor_desc_diet_1_1
};

#line 873 "diet.c"
static const MR_Integer mercury__diet__diet__functor_number_map_diet_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 879 "diet.c"
const MR_TypeCtorInfo_Struct mercury__diet__diet__type_ctor_info_diet_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 896 "diet.c"
const MR_TypeCtorInfo_Struct mercury__diet__diet__type_ctor_info_interval_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
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

#line 913 "diet.c"
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

#line 925 "diet.c"
static const MR_ConstString mercury__diet__diet__type_class_id_var_names_diet_element_1[1] = {
  (MR_String) "T"
};

#line 930 "diet.c"
static const MR_TypeClassMethod mercury__diet__diet__type_class_id_method_ids_diet_element_1[3] = {
  {
    (MR_String) "less_than",
    (MR_Integer) 2,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "successor",
    (MR_Integer) 2,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "predecessor",
    (MR_Integer) 2,
    mercury__private_builtin__MR_FUNCTION
  }
};

#line 949 "diet.c"
static const MR_TypeClassId mercury__diet__diet__type_class_id_diet_element_1 = {
  (MR_String) "diet",
  (MR_String) "diet_element",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 3,
  mercury__diet__diet__type_class_id_var_names_diet_element_1,
  mercury__diet__diet__type_class_id_method_ids_diet_element_1
};

#line 960 "diet.c"
const MR_TypeClassDeclStruct mercury__diet__diet__type_class_decl_diet_element_1 = {
  &mercury__diet__diet__type_class_id_diet_element_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 968 "diet.c"
static MR_bool MR_CALL 
mercury__diet____Unify____diet_1_0_10001(
#line 971 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 973 "diet.c"
  MR_Box mercury__diet__wrapper_arg_2,
#line 975 "diet.c"
  MR_Box mercury__diet__wrapper_arg_3)
#line 977 "diet.c"
{
#line 979 "diet.c"
  {
#line 981 "diet.c"
    MR_bool mercury__diet__succeeded;

#line 984 "diet.c"
    {
#line 986 "diet.c"
      mercury__diet__succeeded = mercury__diet____Unify____diet_1_0(((MR_Word) mercury__diet__wrapper_arg_1), ((MR_Word) mercury__diet__wrapper_arg_2), ((MR_Word) mercury__diet__wrapper_arg_3));
    }
#line 989 "diet.c"
    return mercury__diet__succeeded;
#line 991 "diet.c"
  }
#line 993 "diet.c"
}

#line 996 "diet.c"
static void MR_CALL 
mercury__diet____Compare____diet_1_0_10001(
#line 999 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 1001 "diet.c"
  MR_Box * mercury__diet__wrapper_arg_2,
#line 1003 "diet.c"
  MR_Box mercury__diet__wrapper_arg_3,
#line 1005 "diet.c"
  MR_Box mercury__diet__wrapper_arg_4)
#line 1007 "diet.c"
{
#line 1009 "diet.c"
  {
#line 1011 "diet.c"
    MR_Word mercury__diet__conv0_HeadVar__1_1;

#line 1014 "diet.c"
    {
#line 1016 "diet.c"
      mercury__diet____Compare____diet_1_0(((MR_Word) mercury__diet__wrapper_arg_1), &mercury__diet__conv0_HeadVar__1_1, ((MR_Word) mercury__diet__wrapper_arg_3), ((MR_Word) mercury__diet__wrapper_arg_4));
    }
#line 1019 "diet.c"
    *mercury__diet__wrapper_arg_2 = ((MR_Box) (mercury__diet__conv0_HeadVar__1_1));
#line 1021 "diet.c"
  }
#line 1023 "diet.c"
}

#line 1026 "diet.c"
static MR_bool MR_CALL 
mercury__diet____Unify____interval_1_0_10001(
#line 1029 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 1031 "diet.c"
  MR_Box mercury__diet__wrapper_arg_2,
#line 1033 "diet.c"
  MR_Box mercury__diet__wrapper_arg_3)
#line 1035 "diet.c"
{
#line 1037 "diet.c"
  {
#line 1039 "diet.c"
    MR_bool mercury__diet__succeeded;

#line 1042 "diet.c"
    {
#line 1044 "diet.c"
      mercury__diet__succeeded = mercury__diet____Unify____interval_1_0(((MR_Word) mercury__diet__wrapper_arg_1), ((MR_Tuple) mercury__diet__wrapper_arg_2), ((MR_Tuple) mercury__diet__wrapper_arg_3));
    }
#line 1047 "diet.c"
    return mercury__diet__succeeded;
#line 1049 "diet.c"
  }
#line 1051 "diet.c"
}

#line 1054 "diet.c"
static void MR_CALL 
mercury__diet____Compare____interval_1_0_10001(
#line 1057 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 1059 "diet.c"
  MR_Box * mercury__diet__wrapper_arg_2,
#line 1061 "diet.c"
  MR_Box mercury__diet__wrapper_arg_3,
#line 1063 "diet.c"
  MR_Box mercury__diet__wrapper_arg_4)
#line 1065 "diet.c"
{
#line 1067 "diet.c"
  {
#line 1069 "diet.c"
    MR_Word mercury__diet__conv0_HeadVar__1_1;

#line 1072 "diet.c"
    {
#line 1074 "diet.c"
      mercury__diet____Compare____interval_1_0(((MR_Word) mercury__diet__wrapper_arg_1), &mercury__diet__conv0_HeadVar__1_1, ((MR_Tuple) mercury__diet__wrapper_arg_3), ((MR_Tuple) mercury__diet__wrapper_arg_4));
    }
#line 1077 "diet.c"
    *mercury__diet__wrapper_arg_2 = ((MR_Box) (mercury__diet__conv0_HeadVar__1_1));
#line 1079 "diet.c"
  }
#line 1081 "diet.c"
}

#line 1084 "diet.c"
static MR_bool MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__less_than_2_2_p_0_10001(
#line 1087 "diet.c"
  MR_Box mercury__diet__closure_arg,
#line 1089 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 1091 "diet.c"
  MR_Box mercury__diet__wrapper_arg_2)
#line 1093 "diet.c"
{
#line 1095 "diet.c"
  {
#line 1097 "diet.c"
    MR_bool mercury__diet__succeeded;
#line 1099 "diet.c"
    MR_Box mercury__diet__closure;

#line 1102 "diet.c"
    mercury__diet__closure = mercury__diet__closure_arg;
#line 1104 "diet.c"
    {
#line 1106 "diet.c"
      mercury__diet__succeeded = mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__less_than_2_2_p_0(((MR_Integer) mercury__diet__wrapper_arg_1), ((MR_Integer) mercury__diet__wrapper_arg_2));
    }
#line 1109 "diet.c"
    return mercury__diet__succeeded;
#line 1111 "diet.c"
  }
#line 1113 "diet.c"
}

#line 1116 "diet.c"
static MR_Box MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__successor_1_1_f_0_10001(
#line 1119 "diet.c"
  MR_Box mercury__diet__closure_arg,
#line 1121 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1)
#line 1123 "diet.c"
{
#line 1125 "diet.c"
  {
#line 1127 "diet.c"
    MR_Box mercury__diet__wrapper_arg_2;
#line 1129 "diet.c"
    MR_Box mercury__diet__closure;
#line 1131 "diet.c"
    MR_Integer mercury__diet__conv0_HeadVar__2_2;

#line 1134 "diet.c"
    mercury__diet__closure = mercury__diet__closure_arg;
#line 1136 "diet.c"
    {
#line 1138 "diet.c"
      mercury__diet__conv0_HeadVar__2_2 = mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__successor_1_1_f_0(((MR_Integer) mercury__diet__wrapper_arg_1));
    }
#line 1141 "diet.c"
    mercury__diet__wrapper_arg_2 = ((MR_Box) (mercury__diet__conv0_HeadVar__2_2));
#line 1143 "diet.c"
    return mercury__diet__wrapper_arg_2;
#line 1145 "diet.c"
  }
#line 1147 "diet.c"
}

#line 1150 "diet.c"
static MR_Box MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__predecessor_1_1_f_0_10001(
#line 1153 "diet.c"
  MR_Box mercury__diet__closure_arg,
#line 1155 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1)
#line 1157 "diet.c"
{
#line 1159 "diet.c"
  {
#line 1161 "diet.c"
    MR_Box mercury__diet__wrapper_arg_2;
#line 1163 "diet.c"
    MR_Box mercury__diet__closure;
#line 1165 "diet.c"
    MR_Integer mercury__diet__conv0_HeadVar__2_2;

#line 1168 "diet.c"
    mercury__diet__closure = mercury__diet__closure_arg;
#line 1170 "diet.c"
    {
#line 1172 "diet.c"
      mercury__diet__conv0_HeadVar__2_2 = mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__predecessor_1_1_f_0(((MR_Integer) mercury__diet__wrapper_arg_1));
    }
#line 1175 "diet.c"
    mercury__diet__wrapper_arg_2 = ((MR_Box) (mercury__diet__conv0_HeadVar__2_2));
#line 1177 "diet.c"
    return mercury__diet__wrapper_arg_2;
#line 1179 "diet.c"
  }
#line 1181 "diet.c"
}

#line 1717 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_51_95_95_91_49_44_32_51_44_32_53_93_95_48_5_p_0(
#line 1717 "diet.m"
  MR_Word mercury__diet__V_19_19,
#line 1717 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1717 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1717 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1717 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_A_0_10,
#line 1717 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_A_11)
#line 1717 "diet.m"
{
#line 1728 "diet.m"
  while (MR_TRUE)
#line 1728 "diet.m"
    {
#line 1728 "diet.m"
      /* tailcall optimized into a loop */
#line 1728 "diet.m"
      {
#line 1728 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1728 "diet.m"
        if (mercury__diet__succeeded)
#line 1726 "diet.m"
          {
#line 1726 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_A_12_12;
#line 1726 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 45 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box);

#line 133 "list.opt"
            {
#line 133 "list.opt"
              mercury__diet__STATE_VARIABLE_A_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 133 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__diet__STATE_VARIABLE_A_12_12, 0) = mercury__diet__Hi_8;
#line 133 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__diet__STATE_VARIABLE_A_12_12, 1) = ((MR_Box) (mercury__diet__STATE_VARIABLE_A_0_10));
#line 133 "list.opt"
            }
#line 45 "diet.m"
            mercury__diet__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 45 "diet.m"
            {
#line 45 "diet.m"
              mercury__diet__V_13_13 = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
            }
#line 1727 "diet.m"
            /* direct tailcall eliminated */
#line 1727 "diet.m"
            {
#line 1727 "diet.m"
              MR_Box mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_13_13;
#line 1727 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_12_12;

#line 1727 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1727 "diet.m"
              mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1727 "diet.m"
            }
#line 1727 "diet.m"
            continue;
#line 1726 "diet.m"
          }
#line 1728 "diet.m"
        else
#line 1728 "diet.m"
          *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1728 "diet.m"
      }
#line 1728 "diet.m"
      break;
#line 1728 "diet.m"
    }
#line 1717 "diet.m"
}

#line 1717 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
#line 1717 "diet.m"
  MR_Word mercury__diet__V_19_19,
#line 1717 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1717 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1717 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1717 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
#line 1717 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
#line 1717 "diet.m"
{
#line 1728 "diet.m"
  while (MR_TRUE)
#line 1728 "diet.m"
    {
#line 1728 "diet.m"
      /* tailcall optimized into a loop */
#line 1728 "diet.m"
      {
#line 1728 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1728 "diet.m"
        if (mercury__diet__succeeded)
#line 1726 "diet.m"
          {
#line 1726 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
#line 1726 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1702 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__diet__V_19_19, (MR_Integer) 1)));
#line 45 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1702 "diet.m"
            {
#line 1702 "diet.m"
              mercury__diet__STATE_VARIABLE_A_12_12 = mercury__diet__func_1(((MR_Box) mercury__diet__V_19_19), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10);
            }
#line 45 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 45 "diet.m"
            {
#line 45 "diet.m"
              mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
            }
#line 1727 "diet.m"
            /* direct tailcall eliminated */
#line 1727 "diet.m"
            {
#line 1727 "diet.m"
              MR_Box mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_13_13;
#line 1727 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_12_12;

#line 1727 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1727 "diet.m"
              mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1727 "diet.m"
            }
#line 1727 "diet.m"
            continue;
#line 1726 "diet.m"
          }
#line 1728 "diet.m"
        else
#line 1728 "diet.m"
          *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1728 "diet.m"
      }
#line 1728 "diet.m"
      break;
#line 1728 "diet.m"
    }
#line 1717 "diet.m"
}

#line 1536 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
#line 1536 "diet.m"
  MR_Word mercury__diet__V_19_19,
#line 1536 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1536 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1536 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1536 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
#line 1536 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
#line 1536 "diet.m"
{
#line 1547 "diet.m"
  while (MR_TRUE)
#line 1547 "diet.m"
    {
#line 1547 "diet.m"
      /* tailcall optimized into a loop */
#line 1547 "diet.m"
      {
#line 1547 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1547 "diet.m"
        if (mercury__diet__succeeded)
#line 1545 "diet.m"
          {
#line 1545 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
#line 1545 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1519 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__diet__V_19_19, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1519 "diet.m"
            {
#line 1519 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_12_12 = mercury__diet__func_1(((MR_Box) mercury__diet__V_19_19), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10);
            }
#line 42 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
            {
#line 42 "diet.m"
              mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
            }
#line 1546 "diet.m"
            /* direct tailcall eliminated */
#line 1546 "diet.m"
            {
#line 1546 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_13_13;
#line 1546 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

#line 1546 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1546 "diet.m"
              mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1546 "diet.m"
            }
#line 1546 "diet.m"
            continue;
#line 1545 "diet.m"
          }
#line 1547 "diet.m"
        else
#line 1547 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1547 "diet.m"
      }
#line 1547 "diet.m"
      break;
#line 1547 "diet.m"
    }
#line 1536 "diet.m"
}

#line 1565 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_117_112_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_7_p_0(
#line 1565 "diet.m"
  MR_Word mercury__diet__V_29_29,
#line 1565 "diet.m"
  MR_Word mercury__diet__V_30_30,
#line 1565 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
#line 1565 "diet.m"
  MR_Box mercury__diet__Lo_9,
#line 1565 "diet.m"
  MR_Box mercury__diet__Hi_10,
#line 1565 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_A_0_13,
#line 1565 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_A_14,
#line 1565 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_B_0_15,
#line 1565 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_B_16)
#line 1565 "diet.m"
{
#line 1582 "diet.m"
  while (MR_TRUE)
#line 1582 "diet.m"
    {
#line 1582 "diet.m"
      /* tailcall optimized into a loop */
#line 1582 "diet.m"
      {
#line 1582 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1582 "diet.m"
        if (mercury__diet__succeeded)
#line 1580 "diet.m"
          {
#line 1580 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_A_17_17;
#line 1580 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_B_18_18;
#line 1580 "diet.m"
            MR_Box mercury__diet__V_19_19;
#line 1460 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1460 "diet.m"
            {
#line 1460 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__V_30_30), mercury__diet__Lo_9);
            }
#line 1462 "diet.m"
            if (mercury__diet__succeeded)
#line 1461 "diet.m"
              {
#line 845 "diet.m"
                {
#line 845 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_17_17 = mercury__diet__add_2_f_0(mercury__diet__V_29_29, mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13);
                }
#line 1461 "diet.m"
                mercury__diet__STATE_VARIABLE_B_18_18 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1461 "diet.m"
              }
#line 1462 "diet.m"
            else
#line 1463 "diet.m"
              {
#line 845 "diet.m"
                {
#line 845 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_18_18 = mercury__diet__add_2_f_0(mercury__diet__V_29_29, mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_B_0_15);
                }
#line 1463 "diet.m"
                mercury__diet__STATE_VARIABLE_A_17_17 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1463 "diet.m"
              }
#line 42 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
            {
#line 42 "diet.m"
              mercury__diet__V_19_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
            }
#line 1581 "diet.m"
            /* direct tailcall eliminated */
#line 1581 "diet.m"
            {
#line 1581 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_19_19;
#line 1581 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_17_17;
#line 1581 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_18_18;

#line 1581 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1581 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1581 "diet.m"
              mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1581 "diet.m"
            }
#line 1581 "diet.m"
            continue;
#line 1580 "diet.m"
          }
#line 1582 "diet.m"
        else
#line 1583 "diet.m"
          {
#line 1583 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1583 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1583 "diet.m"
          }
#line 1582 "diet.m"
      }
#line 1582 "diet.m"
      break;
#line 1582 "diet.m"
    }
#line 1565 "diet.m"
}

#line 127 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__diet__V_20_20,
#line 127 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 127 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 127 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4)
#line 127 "list.int"
{
#line 393 "list.opt"
  while (MR_TRUE)
#line 393 "list.opt"
    {
#line 393 "list.opt"
      /* tailcall optimized into a loop */
#line 393 "list.opt"
      {
#line 393 "list.opt"
        MR_bool mercury__diet__succeeded;

#line 393 "list.opt"
        if ((mercury__diet__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "list.opt"
          *mercury__diet__HeadVar__4_4 = mercury__diet__HeadVar__3_3;
#line 393 "list.opt"
        else
#line 395 "list.opt"
          {
#line 395 "list.opt"
            MR_Word mercury__diet__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
#line 395 "list.opt"
            MR_Word mercury__diet__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 395 "list.opt"
            MR_Word mercury__diet__V_15_13;

#line 1149 "diet.m"
            {
#line 1149 "diet.m"
              mercury__diet__V_15_13 = mercury__diet__union_2_f_0(mercury__diet__V_20_20, mercury__diet__V_10_9, mercury__diet__HeadVar__3_3);
            }
#line 397 "list.opt"
            /* direct tailcall eliminated */
#line 397 "list.opt"
            {
#line 397 "list.opt"
              MR_Word mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__V_11_10;
#line 397 "list.opt"
              MR_Word mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__V_15_13;

#line 397 "list.opt"
              mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 397 "list.opt"
              mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 397 "list.opt"
            }
#line 397 "list.opt"
            continue;
#line 395 "list.opt"
          }
#line 393 "list.opt"
      }
#line 393 "list.opt"
      break;
#line 393 "list.opt"
    }
#line 127 "list.int"
}

#line 127 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__diet__V_20_20,
#line 127 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 127 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 127 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4)
#line 127 "list.int"
{
#line 393 "list.opt"
  while (MR_TRUE)
#line 393 "list.opt"
    {
#line 393 "list.opt"
      /* tailcall optimized into a loop */
#line 393 "list.opt"
      {
#line 393 "list.opt"
        MR_bool mercury__diet__succeeded;

#line 393 "list.opt"
        if ((mercury__diet__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "list.opt"
          *mercury__diet__HeadVar__4_4 = mercury__diet__HeadVar__3_3;
#line 393 "list.opt"
        else
#line 395 "list.opt"
          {
#line 395 "list.opt"
            MR_Word mercury__diet__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
#line 395 "list.opt"
            MR_Word mercury__diet__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 395 "list.opt"
            MR_Word mercury__diet__V_15_13;

#line 1268 "diet.m"
            {
#line 1268 "diet.m"
              mercury__diet__V_15_13 = mercury__diet__inter_2_f_0(mercury__diet__V_20_20, mercury__diet__V_10_9, mercury__diet__HeadVar__3_3);
            }
#line 397 "list.opt"
            /* direct tailcall eliminated */
#line 397 "list.opt"
            {
#line 397 "list.opt"
              MR_Word mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__V_11_10;
#line 397 "list.opt"
              MR_Word mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__V_15_13;

#line 397 "list.opt"
              mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 397 "list.opt"
              mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 397 "list.opt"
            }
#line 397 "list.opt"
            continue;
#line 395 "list.opt"
          }
#line 393 "list.opt"
      }
#line 393 "list.opt"
      break;
#line 393 "list.opt"
    }
#line 127 "list.int"
}

#line 261 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(
#line 261 "diet.m"
  MR_Word mercury__diet__V_34_34,
#line 261 "diet.m"
  MR_Word mercury__diet__V_35_35,
#line 261 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
#line 261 "diet.m"
  MR_Word mercury__diet__T_8,
#line 261 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_Acc1_0_16,
#line 261 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_Acc1_17,
#line 261 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_Acc2_0_18,
#line 261 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_Acc2_19)
#line 261 "diet.m"
{
#line 1556 "diet.m"
  while (MR_TRUE)
#line 1556 "diet.m"
    {
#line 1556 "diet.m"
      /* tailcall optimized into a loop */
#line 1556 "diet.m"
      {
#line 1556 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1556 "diet.m"
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1555 "diet.m"
          {
#line 1555 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1555 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1555 "diet.m"
          }
#line 1556 "diet.m"
        else
#line 1557 "diet.m"
          {
#line 1557 "diet.m"
            MR_Box mercury__diet__X_11;
#line 1557 "diet.m"
            MR_Box mercury__diet__Y_12;
#line 1557 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1557 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1557 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1557 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1557 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1557 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1557 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1557 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1557 "diet.m"
            mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0));
#line 1557 "diet.m"
            mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1));
#line 1558 "diet.m"
            {
#line 1558 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(mercury__diet__V_34_34, mercury__diet__V_35_35, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1559 "diet.m"
            {
#line 1559 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_117_112_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_7_p_0(mercury__diet__V_34_34, mercury__diet__V_35_35, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
            }
#line 1560 "diet.m"
            /* direct tailcall eliminated */
#line 1560 "diet.m"
            {
#line 1560 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1560 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1560 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1560 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1560 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1560 "diet.m"
              mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
#line 1560 "diet.m"
            }
#line 1560 "diet.m"
            continue;
#line 1557 "diet.m"
          }
#line 1556 "diet.m"
      }
#line 1556 "diet.m"
      break;
#line 1556 "diet.m"
    }
#line 261 "diet.m"
}

#line 253 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(
#line 253 "diet.m"
  MR_Word mercury__diet__V_23_23,
#line 253 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 253 "diet.m"
  MR_Word mercury__diet__T_6,
#line 253 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 253 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 253 "diet.m"
{
#line 1528 "diet.m"
  while (MR_TRUE)
#line 1528 "diet.m"
    {
#line 1528 "diet.m"
      /* tailcall optimized into a loop */
#line 1528 "diet.m"
      {
#line 1528 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1528 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1527 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1528 "diet.m"
        else
#line 1529 "diet.m"
          {
#line 1529 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1529 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1529 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1529 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1529 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1529 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1529 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1529 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1529 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1529 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1530 "diet.m"
            {
#line 1530 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(mercury__diet__V_23_23, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1531 "diet.m"
            {
#line 1531 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(mercury__diet__V_23_23, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1532 "diet.m"
            /* direct tailcall eliminated */
#line 1532 "diet.m"
            {
#line 1532 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1532 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1532 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1532 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1532 "diet.m"
            }
#line 1532 "diet.m"
            continue;
#line 1529 "diet.m"
          }
#line 1528 "diet.m"
      }
#line 1528 "diet.m"
      break;
#line 1528 "diet.m"
    }
#line 253 "diet.m"
}

#line 328 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(
#line 328 "diet.m"
  MR_Word mercury__diet__V_23_23,
#line 328 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 328 "diet.m"
  MR_Word mercury__diet__T_6,
#line 328 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 328 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 328 "diet.m"
{
#line 1709 "diet.m"
  while (MR_TRUE)
#line 1709 "diet.m"
    {
#line 1709 "diet.m"
      /* tailcall optimized into a loop */
#line 1709 "diet.m"
      {
#line 1709 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1709 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1708 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1709 "diet.m"
        else
#line 1710 "diet.m"
          {
#line 1710 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1710 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1710 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1710 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1710 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1710 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1710 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1710 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1710 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1710 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1711 "diet.m"
            {
#line 1711 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(mercury__diet__V_23_23, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1712 "diet.m"
            {
#line 1712 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(mercury__diet__V_23_23, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1713 "diet.m"
            /* direct tailcall eliminated */
#line 1713 "diet.m"
            {
#line 1713 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1713 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1713 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1713 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1713 "diet.m"
            }
#line 1713 "diet.m"
            continue;
#line 1710 "diet.m"
          }
#line 1709 "diet.m"
      }
#line 1709 "diet.m"
      break;
#line 1709 "diet.m"
    }
#line 328 "diet.m"
}

#line 127 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__diet__V_18_18,
#line 127 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 127 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 127 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4)
#line 127 "list.int"
{
#line 393 "list.opt"
  while (MR_TRUE)
#line 393 "list.opt"
    {
#line 393 "list.opt"
      /* tailcall optimized into a loop */
#line 393 "list.opt"
      {
#line 393 "list.opt"
        MR_bool mercury__diet__succeeded;

#line 393 "list.opt"
        if ((mercury__diet__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "list.opt"
          *mercury__diet__HeadVar__4_4 = mercury__diet__HeadVar__3_3;
#line 393 "list.opt"
        else
#line 395 "list.opt"
          {
#line 395 "list.opt"
            MR_Box mercury__diet__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0));
#line 395 "list.opt"
            MR_Word mercury__diet__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 395 "list.opt"
            MR_Word mercury__diet__V_15_13;

#line 845 "diet.m"
            {
#line 845 "diet.m"
              mercury__diet__V_15_13 = mercury__diet__add_2_f_0(mercury__diet__V_18_18, mercury__diet__V_10_9, mercury__diet__HeadVar__3_3);
            }
#line 397 "list.opt"
            /* direct tailcall eliminated */
#line 397 "list.opt"
            {
#line 397 "list.opt"
              MR_Word mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__V_11_10;
#line 397 "list.opt"
              MR_Word mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__V_15_13;

#line 397 "list.opt"
              mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 397 "list.opt"
              mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 397 "list.opt"
            }
#line 397 "list.opt"
            continue;
#line 395 "list.opt"
          }
#line 393 "list.opt"
      }
#line 393 "list.opt"
      break;
#line 393 "list.opt"
    }
#line 127 "list.int"
}

#line 328 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(
#line 328 "diet.m"
  MR_Word mercury__diet__V_23_23,
#line 328 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 328 "diet.m"
  MR_Word mercury__diet__T_6,
#line 328 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 328 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_Acc_14)
#line 328 "diet.m"
{
#line 1709 "diet.m"
  while (MR_TRUE)
#line 1709 "diet.m"
    {
#line 1709 "diet.m"
      /* tailcall optimized into a loop */
#line 1709 "diet.m"
      {
#line 1709 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1709 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1708 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1709 "diet.m"
        else
#line 1710 "diet.m"
          {
#line 1710 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1710 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1710 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1710 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1710 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1710 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1710 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1710 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1710 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1710 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1711 "diet.m"
            {
#line 1711 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(mercury__diet__V_23_23, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1712 "diet.m"
            {
#line 1712 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_51_95_95_91_49_44_32_51_44_32_53_93_95_48_5_p_0(mercury__diet__V_23_23, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1713 "diet.m"
            /* direct tailcall eliminated */
#line 1713 "diet.m"
            {
#line 1713 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1713 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1713 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1713 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1713 "diet.m"
            }
#line 1713 "diet.m"
            continue;
#line 1710 "diet.m"
          }
#line 1709 "diet.m"
      }
#line 1709 "diet.m"
      break;
#line 1709 "diet.m"
    }
#line 328 "diet.m"
}

#line 241 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(
#line 241 "diet.m"
  MR_Word mercury__diet__V_27_27,
#line 241 "diet.m"
  MR_Word mercury__diet__T_6,
#line 241 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 241 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_Acc_14)
#line 241 "diet.m"
{
#line 1508 "diet.m"
  while (MR_TRUE)
#line 1508 "diet.m"
    {
#line 1508 "diet.m"
      /* tailcall optimized into a loop */
#line 1508 "diet.m"
      {
#line 1508 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1508 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1507 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1508 "diet.m"
        else
#line 1509 "diet.m"
          {
#line 1509 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1509 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1509 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1509 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1509 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1509 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1510 "diet.m"
            {
#line 1510 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(mercury__diet__V_27_27, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1795 "diet.m"
            {
#line 1795 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1795 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__STATE_VARIABLE_Acc_17_17, 0) = ((MR_Box) (mercury__diet__V_15_15));
#line 1795 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__STATE_VARIABLE_Acc_17_17, 1) = ((MR_Box) (mercury__diet__STATE_VARIABLE_Acc_16_16));
#line 1795 "diet.m"
            }
#line 1512 "diet.m"
            /* direct tailcall eliminated */
#line 1512 "diet.m"
            {
#line 1512 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1512 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1512 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1512 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1512 "diet.m"
            }
#line 1512 "diet.m"
            continue;
#line 1509 "diet.m"
          }
#line 1508 "diet.m"
      }
#line 1508 "diet.m"
      break;
#line 1508 "diet.m"
    }
#line 241 "diet.m"
}

#line 127 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__diet__V_22_22,
#line 127 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 127 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 127 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4)
#line 127 "list.int"
{
#line 393 "list.opt"
  while (MR_TRUE)
#line 393 "list.opt"
    {
#line 393 "list.opt"
      /* tailcall optimized into a loop */
#line 393 "list.opt"
      {
#line 393 "list.opt"
        MR_bool mercury__diet__succeeded;

#line 393 "list.opt"
        if ((mercury__diet__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "list.opt"
          *mercury__diet__HeadVar__4_4 = mercury__diet__HeadVar__3_3;
#line 393 "list.opt"
        else
#line 395 "list.opt"
          {
#line 395 "list.opt"
            MR_Tuple mercury__diet__V_10_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
#line 395 "list.opt"
            MR_Word mercury__diet__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 395 "list.opt"
            MR_Word mercury__diet__V_15_13;
#line 395 "list.opt"
            MR_Box mercury__diet__X_25 = (MR_hl_field(MR_mktag(0), mercury__diet__V_10_9, (MR_Integer) 0));
#line 395 "list.opt"
            MR_Box mercury__diet__Y_26 = (MR_hl_field(MR_mktag(0), mercury__diet__V_10_9, (MR_Integer) 1));

#line 961 "diet.m"
            {
#line 961 "diet.m"
              mercury__diet__insert_interval_4_p_0(mercury__diet__V_22_22, mercury__diet__X_25, mercury__diet__Y_26, mercury__diet__HeadVar__3_3, &mercury__diet__V_15_13);
            }
#line 397 "list.opt"
            /* direct tailcall eliminated */
#line 397 "list.opt"
            {
#line 397 "list.opt"
              MR_Word mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__V_11_10;
#line 397 "list.opt"
              MR_Word mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__V_15_13;

#line 397 "list.opt"
              mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 397 "list.opt"
              mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 397 "list.opt"
            }
#line 397 "list.opt"
            continue;
#line 395 "list.opt"
          }
#line 393 "list.opt"
      }
#line 393 "list.opt"
      break;
#line 393 "list.opt"
    }
#line 127 "list.int"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__diet__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 591 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(
#line 591 "diet.m"
  MR_Word mercury__diet__IsLeft_5,
#line 591 "diet.m"
  MR_Tuple mercury__diet__X_6,
#line 591 "diet.m"
  MR_Word mercury__diet__T0_7)
#line 591 "diet.m"
{
#line 597 "diet.m"
  {
#line 597 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 597 "diet.m"
    MR_Word mercury__diet__T_8;

#line 597 "diet.m"
    if ((mercury__diet__T0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 595 "diet.m"
      {
#line 595 "diet.m"
        MR_Word mercury__diet__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "diet.m"
        MR_Word mercury__diet__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 596 "diet.m"
        {
#line 596 "diet.m"
          mercury__diet__T_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 596 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_8, 0) = ((MR_Box) (mercury__diet__X_6));
#line 596 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_8, 1) = ((MR_Box) ((MR_Integer) 1));
#line 596 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_8, 2) = ((MR_Box) (mercury__diet__V_16_16));
#line 596 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_8, 3) = ((MR_Box) (mercury__diet__V_17_17));
#line 596 "diet.m"
        }
#line 595 "diet.m"
      }
#line 597 "diet.m"
    else
#line 598 "diet.m"
      {
#line 598 "diet.m"
        MR_Tuple mercury__diet__VX_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_7, (MR_Integer) 0)));
#line 598 "diet.m"
        MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_7, (MR_Integer) 2)));
#line 598 "diet.m"
        MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_7, (MR_Integer) 3)));
#line 598 "diet.m"
        MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_7, (MR_Integer) 1)));

#line 602 "diet.m"
#line 602 "diet.m"
        switch (mercury__diet__IsLeft_5) {
#line 602 "diet.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 602 "diet.m"
          case (MR_Integer) 0:
#line 603 "diet.m"
            {
#line 603 "diet.m"
              MR_Word mercury__diet__V_13_13;

#line 604 "diet.m"
              {
#line 604 "diet.m"
                mercury__diet__V_13_13 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(mercury__diet__IsLeft_5, mercury__diet__X_6, mercury__diet__R_12);
              }
#line 604 "diet.m"
              {
#line 604 "diet.m"
                mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__VX_9, mercury__diet__L_11, mercury__diet__V_13_13);
              }
#line 603 "diet.m"
            }
#line 602 "diet.m"
            break;
#line 602 "diet.m"
          case (MR_Integer) 1:
#line 600 "diet.m"
            {
#line 600 "diet.m"
              MR_Word mercury__diet__V_14_14;

#line 601 "diet.m"
              {
#line 601 "diet.m"
                mercury__diet__V_14_14 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(mercury__diet__IsLeft_5, mercury__diet__X_6, mercury__diet__L_11);
              }
#line 601 "diet.m"
              {
#line 601 "diet.m"
                mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__VX_9, mercury__diet__V_14_14, mercury__diet__R_12);
              }
#line 600 "diet.m"
            }
#line 602 "diet.m"
            break;
#line 602 "diet.m"
        }
#line 598 "diet.m"
      }
#line 597 "diet.m"
    return mercury__diet__T_8;
#line 597 "diet.m"
  }
#line 591 "diet.m"
}

#line 523 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(
#line 523 "diet.m"
  MR_Tuple mercury__diet__X_5,
#line 523 "diet.m"
  MR_Word mercury__diet__L_6,
#line 523 "diet.m"
  MR_Word mercury__diet__R_7)
#line 523 "diet.m"
{
#line 525 "diet.m"
  {
#line 525 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 525 "diet.m"
    MR_Word mercury__diet__T_8;
#line 525 "diet.m"
    MR_Integer mercury__diet__HL_9;
#line 525 "diet.m"
    MR_Integer mercury__diet__HR_10;
#line 528 "diet.m"
    MR_Integer mercury__diet__V_28_28;

#line 512 "diet.m"
    if ((mercury__diet__L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
      mercury__diet__HL_9 = (MR_Integer) 0;
#line 512 "diet.m"
    else
#line 513 "diet.m"
      {
#line 513 "diet.m"
        MR_Tuple mercury__diet__V_57_57 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 0)));
#line 513 "diet.m"
        MR_Word mercury__diet__V_59_59;
#line 513 "diet.m"
        MR_Word mercury__diet__V_60_60;

#line 513 "diet.m"
        mercury__diet__HL_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 1)));
#line 513 "diet.m"
        mercury__diet__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 2)));
#line 513 "diet.m"
        mercury__diet__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 3)));
#line 513 "diet.m"
      }
#line 512 "diet.m"
    if ((mercury__diet__R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
      mercury__diet__HR_10 = (MR_Integer) 0;
#line 512 "diet.m"
    else
#line 513 "diet.m"
      {
#line 513 "diet.m"
        MR_Tuple mercury__diet__V_61_61 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 0)));
#line 513 "diet.m"
        MR_Word mercury__diet__V_63_63;
#line 513 "diet.m"
        MR_Word mercury__diet__V_64_64;

#line 513 "diet.m"
        mercury__diet__HR_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 1)));
#line 513 "diet.m"
        mercury__diet__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 2)));
#line 513 "diet.m"
        mercury__diet__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 3)));
#line 513 "diet.m"
      }
#line 528 "diet.m"
    mercury__diet__V_28_28 = (mercury__diet__HR_10 + (MR_Integer) 1);
#line 493 "diet.m"
    mercury__diet__succeeded = (mercury__diet__HL_9 > mercury__diet__V_28_28);
#line 546 "diet.m"
    if (mercury__diet__succeeded)
#line 532 "diet.m"
      if ((mercury__diet__L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 530 "diet.m"
        {
#line 531 "diet.m"
          {
#line 531 "diet.m"
            mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.balance\'/3", (MR_String) "L empty");
          }
#line 530 "diet.m"
        }
#line 532 "diet.m"
      else
#line 533 "diet.m"
        {
#line 533 "diet.m"
          MR_Tuple mercury__diet__LVX_11 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 0)));
#line 533 "diet.m"
          MR_Word mercury__diet__LL_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 2)));
#line 533 "diet.m"
          MR_Word mercury__diet__LR_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 3)));
#line 533 "diet.m"
          MR_Integer mercury__diet__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 1)));
#line 534 "diet.m"
          MR_Integer mercury__diet__V_30_30;
#line 534 "diet.m"
          MR_Integer mercury__diet__V_31_31;

#line 512 "diet.m"
          if ((mercury__diet__LL_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
            mercury__diet__V_30_30 = (MR_Integer) 0;
#line 512 "diet.m"
          else
#line 513 "diet.m"
            {
#line 513 "diet.m"
              MR_Tuple mercury__diet__V_67_67 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__LL_13, (MR_Integer) 0)));
#line 513 "diet.m"
              MR_Word mercury__diet__V_69_69;
#line 513 "diet.m"
              MR_Word mercury__diet__V_70_70;

#line 513 "diet.m"
              mercury__diet__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__LL_13, (MR_Integer) 1)));
#line 513 "diet.m"
              mercury__diet__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LL_13, (MR_Integer) 2)));
#line 513 "diet.m"
              mercury__diet__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LL_13, (MR_Integer) 3)));
#line 513 "diet.m"
            }
#line 512 "diet.m"
          if ((mercury__diet__LR_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
            mercury__diet__V_31_31 = (MR_Integer) 0;
#line 512 "diet.m"
          else
#line 513 "diet.m"
            {
#line 513 "diet.m"
              MR_Tuple mercury__diet__V_71_71 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 0)));
#line 513 "diet.m"
              MR_Word mercury__diet__V_73_73;
#line 513 "diet.m"
              MR_Word mercury__diet__V_74_74;

#line 513 "diet.m"
              mercury__diet__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 1)));
#line 513 "diet.m"
              mercury__diet__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 2)));
#line 513 "diet.m"
              mercury__diet__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 3)));
#line 513 "diet.m"
            }
#line 498 "diet.m"
          mercury__diet__succeeded = (mercury__diet__V_30_30 >= mercury__diet__V_31_31);
#line 536 "diet.m"
          if (mercury__diet__succeeded)
#line 535 "diet.m"
            {
#line 535 "diet.m"
              MR_Word mercury__diet__V_32_32;

#line 535 "diet.m"
              {
#line 535 "diet.m"
                mercury__diet__V_32_32 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__X_5, mercury__diet__LR_14, mercury__diet__R_7);
              }
#line 535 "diet.m"
              {
#line 535 "diet.m"
                mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__LVX_11, mercury__diet__LL_13, mercury__diet__V_32_32);
              }
#line 535 "diet.m"
            }
#line 536 "diet.m"
          else
#line 540 "diet.m"
          if ((mercury__diet__LR_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 538 "diet.m"
            {
#line 539 "diet.m"
              {
#line 539 "diet.m"
                mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.balance\'/3", (MR_String) "LR empty");
              }
#line 538 "diet.m"
            }
#line 540 "diet.m"
          else
#line 541 "diet.m"
            {
#line 541 "diet.m"
              MR_Tuple mercury__diet__LRX_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 0)));
#line 541 "diet.m"
              MR_Word mercury__diet__LRL_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 2)));
#line 541 "diet.m"
              MR_Word mercury__diet__LRR_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 3)));
#line 541 "diet.m"
              MR_Word mercury__diet__V_33_33;
#line 541 "diet.m"
              MR_Word mercury__diet__V_34_34;
#line 541 "diet.m"
              MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 1)));

#line 542 "diet.m"
              {
#line 542 "diet.m"
                mercury__diet__V_33_33 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__LVX_11, mercury__diet__LL_13, mercury__diet__LRL_17);
              }
#line 542 "diet.m"
              {
#line 542 "diet.m"
                mercury__diet__V_34_34 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__X_5, mercury__diet__LRR_18, mercury__diet__R_7);
              }
#line 542 "diet.m"
              {
#line 542 "diet.m"
                mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__LRX_15, mercury__diet__V_33_33, mercury__diet__V_34_34);
              }
#line 541 "diet.m"
            }
#line 533 "diet.m"
        }
#line 546 "diet.m"
    else
#line 564 "diet.m"
      {
#line 546 "diet.m"
        MR_Integer mercury__diet__V_41_41 = (mercury__diet__HL_9 + (MR_Integer) 1);

#line 493 "diet.m"
        mercury__diet__succeeded = (mercury__diet__HR_10 > mercury__diet__V_41_41);
#line 564 "diet.m"
        if (mercury__diet__succeeded)
#line 550 "diet.m"
          if ((mercury__diet__R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 548 "diet.m"
            {
#line 549 "diet.m"
              {
#line 549 "diet.m"
                mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.balance\'/3", (MR_String) "R empty");
              }
#line 548 "diet.m"
            }
#line 550 "diet.m"
          else
#line 551 "diet.m"
            {
#line 551 "diet.m"
              MR_Tuple mercury__diet__RVX_19 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 0)));
#line 551 "diet.m"
              MR_Word mercury__diet__RL_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 2)));
#line 551 "diet.m"
              MR_Word mercury__diet__RR_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 3)));
#line 551 "diet.m"
              MR_Integer mercury__diet__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 1)));
#line 552 "diet.m"
              MR_Integer mercury__diet__V_43_43;
#line 552 "diet.m"
              MR_Integer mercury__diet__V_44_44;

#line 512 "diet.m"
              if ((mercury__diet__RR_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
                mercury__diet__V_43_43 = (MR_Integer) 0;
#line 512 "diet.m"
              else
#line 513 "diet.m"
                {
#line 513 "diet.m"
                  MR_Tuple mercury__diet__V_79_79 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__RR_22, (MR_Integer) 0)));
#line 513 "diet.m"
                  MR_Word mercury__diet__V_81_81;
#line 513 "diet.m"
                  MR_Word mercury__diet__V_82_82;

#line 513 "diet.m"
                  mercury__diet__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__RR_22, (MR_Integer) 1)));
#line 513 "diet.m"
                  mercury__diet__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RR_22, (MR_Integer) 2)));
#line 513 "diet.m"
                  mercury__diet__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RR_22, (MR_Integer) 3)));
#line 513 "diet.m"
                }
#line 512 "diet.m"
              if ((mercury__diet__RL_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
                mercury__diet__V_44_44 = (MR_Integer) 0;
#line 512 "diet.m"
              else
#line 513 "diet.m"
                {
#line 513 "diet.m"
                  MR_Tuple mercury__diet__V_83_83 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 0)));
#line 513 "diet.m"
                  MR_Word mercury__diet__V_85_85;
#line 513 "diet.m"
                  MR_Word mercury__diet__V_86_86;

#line 513 "diet.m"
                  mercury__diet__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 1)));
#line 513 "diet.m"
                  mercury__diet__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 2)));
#line 513 "diet.m"
                  mercury__diet__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 3)));
#line 513 "diet.m"
                }
#line 498 "diet.m"
              mercury__diet__succeeded = (mercury__diet__V_43_43 >= mercury__diet__V_44_44);
#line 554 "diet.m"
              if (mercury__diet__succeeded)
#line 553 "diet.m"
                {
#line 553 "diet.m"
                  MR_Word mercury__diet__V_45_45;

#line 553 "diet.m"
                  {
#line 553 "diet.m"
                    mercury__diet__V_45_45 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__X_5, mercury__diet__L_6, mercury__diet__RL_21);
                  }
#line 553 "diet.m"
                  {
#line 553 "diet.m"
                    mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__RVX_19, mercury__diet__V_45_45, mercury__diet__RR_22);
                  }
#line 553 "diet.m"
                }
#line 554 "diet.m"
              else
#line 558 "diet.m"
              if ((mercury__diet__RL_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 556 "diet.m"
                {
#line 557 "diet.m"
                  {
#line 557 "diet.m"
                    mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.balance\'/3", (MR_String) "RL empty");
                  }
#line 556 "diet.m"
                }
#line 558 "diet.m"
              else
#line 559 "diet.m"
                {
#line 559 "diet.m"
                  MR_Tuple mercury__diet__RLX_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 0)));
#line 559 "diet.m"
                  MR_Word mercury__diet__RLL_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 2)));
#line 559 "diet.m"
                  MR_Word mercury__diet__RLR_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 3)));
#line 559 "diet.m"
                  MR_Word mercury__diet__V_46_46;
#line 559 "diet.m"
                  MR_Word mercury__diet__V_47_47;
#line 559 "diet.m"
                  MR_Integer mercury__diet__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 1)));

#line 560 "diet.m"
                  {
#line 560 "diet.m"
                    mercury__diet__V_46_46 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__X_5, mercury__diet__L_6, mercury__diet__RLL_25);
                  }
#line 560 "diet.m"
                  {
#line 560 "diet.m"
                    mercury__diet__V_47_47 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__RVX_19, mercury__diet__RLR_26, mercury__diet__RR_22);
                  }
#line 560 "diet.m"
                  {
#line 560 "diet.m"
                    mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__RLX_23, mercury__diet__V_46_46, mercury__diet__V_47_47);
                  }
#line 559 "diet.m"
                }
#line 551 "diet.m"
            }
#line 564 "diet.m"
        else
#line 565 "diet.m"
          {
#line 565 "diet.m"
            MR_Integer mercury__diet__HT_27;
#line 565 "diet.m"
            MR_Integer mercury__diet__V_55_55;

#line 211 "int.opt"
            mercury__diet__succeeded = (mercury__diet__HL_9 > mercury__diet__HR_10);
#line 214 "int.opt"
            if (mercury__diet__succeeded)
#line 213 "int.opt"
              mercury__diet__V_55_55 = mercury__diet__HL_9;
#line 214 "int.opt"
            else
#line 215 "int.opt"
              mercury__diet__V_55_55 = mercury__diet__HR_10;
#line 565 "diet.m"
            mercury__diet__HT_27 = ((MR_Integer) 1 + mercury__diet__V_55_55);
#line 566 "diet.m"
            {
#line 566 "diet.m"
              mercury__diet__T_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 566 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__T_8, 0) = ((MR_Box) (mercury__diet__X_5));
#line 566 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__T_8, 1) = ((MR_Box) (mercury__diet__HT_27));
#line 566 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__T_8, 2) = ((MR_Box) (mercury__diet__L_6));
#line 566 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__T_8, 3) = ((MR_Box) (mercury__diet__R_7));
#line 566 "diet.m"
            }
#line 565 "diet.m"
          }
#line 564 "diet.m"
      }
#line 525 "diet.m"
    return mercury__diet__T_8;
#line 525 "diet.m"
  }
#line 523 "diet.m"
}

#line 519 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(
#line 519 "diet.m"
  MR_Tuple mercury__diet__X_5,
#line 519 "diet.m"
  MR_Word mercury__diet__L_6,
#line 519 "diet.m"
  MR_Word mercury__diet__R_7)
#line 519 "diet.m"
{
#line 521 "diet.m"
  {
#line 521 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 521 "diet.m"
    MR_Word mercury__diet__HeadVar__4_4;
#line 521 "diet.m"
    MR_Integer mercury__diet__V_8_8;
#line 521 "diet.m"
    MR_Integer mercury__diet__V_13_13;
#line 521 "diet.m"
    MR_Integer mercury__diet__V_14_14;
#line 521 "diet.m"
    MR_Integer mercury__diet__V_15_15;

#line 512 "diet.m"
    if ((mercury__diet__L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
      mercury__diet__V_14_14 = (MR_Integer) 0;
#line 512 "diet.m"
    else
#line 513 "diet.m"
      {
#line 513 "diet.m"
        MR_Tuple mercury__diet__V_16_16 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 0)));
#line 513 "diet.m"
        MR_Word mercury__diet__V_18_18;
#line 513 "diet.m"
        MR_Word mercury__diet__V_19_19;

#line 513 "diet.m"
        mercury__diet__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 1)));
#line 513 "diet.m"
        mercury__diet__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 2)));
#line 513 "diet.m"
        mercury__diet__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 3)));
#line 513 "diet.m"
      }
#line 512 "diet.m"
    if ((mercury__diet__R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
      mercury__diet__V_15_15 = (MR_Integer) 0;
#line 512 "diet.m"
    else
#line 513 "diet.m"
      {
#line 513 "diet.m"
        MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 0)));
#line 513 "diet.m"
        MR_Word mercury__diet__V_22_22;
#line 513 "diet.m"
        MR_Word mercury__diet__V_23_23;

#line 513 "diet.m"
        mercury__diet__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 1)));
#line 513 "diet.m"
        mercury__diet__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 2)));
#line 513 "diet.m"
        mercury__diet__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 3)));
#line 513 "diet.m"
      }
#line 211 "int.opt"
    mercury__diet__succeeded = (mercury__diet__V_14_14 > mercury__diet__V_15_15);
#line 214 "int.opt"
    if (mercury__diet__succeeded)
#line 213 "int.opt"
      mercury__diet__V_13_13 = mercury__diet__V_14_14;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__diet__V_13_13 = mercury__diet__V_15_15;
#line 517 "diet.m"
    mercury__diet__V_8_8 = ((MR_Integer) 1 + mercury__diet__V_13_13);
#line 521 "diet.m"
    {
#line 521 "diet.m"
      mercury__diet__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 521 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__4_4, 0) = ((MR_Box) (mercury__diet__X_5));
#line 521 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__4_4, 1) = ((MR_Box) (mercury__diet__V_8_8));
#line 521 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__4_4, 2) = ((MR_Box) (mercury__diet__L_6));
#line 521 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__4_4, 3) = ((MR_Box) (mercury__diet__R_7));
#line 521 "diet.m"
    }
#line 521 "diet.m"
    return mercury__diet__HeadVar__4_4;
#line 521 "diet.m"
  }
#line 519 "diet.m"
}

#line 450 "diet.m"
MR_Integer MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__predecessor_1_1_f_0(
#line 450 "diet.m"
  MR_Integer mercury__diet__X_3)
#line 450 "diet.m"
{
#line 450 "diet.m"
  {
#line 450 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 450 "diet.m"
    MR_Integer mercury__diet__HeadVar__2_2 = (mercury__diet__X_3 - (MR_Integer) 1);

#line 450 "diet.m"
    return mercury__diet__HeadVar__2_2;
#line 450 "diet.m"
  }
#line 450 "diet.m"
}

#line 449 "diet.m"
MR_Integer MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__successor_1_1_f_0(
#line 449 "diet.m"
  MR_Integer mercury__diet__X_3)
#line 449 "diet.m"
{
#line 449 "diet.m"
  {
#line 449 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 449 "diet.m"
    MR_Integer mercury__diet__HeadVar__2_2 = (mercury__diet__X_3 + (MR_Integer) 1);

#line 449 "diet.m"
    return mercury__diet__HeadVar__2_2;
#line 449 "diet.m"
  }
#line 449 "diet.m"
}

#line 448 "diet.m"
MR_bool MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__less_than_2_2_p_0(
#line 448 "diet.m"
  MR_Integer mercury__diet__X_3,
#line 448 "diet.m"
  MR_Integer mercury__diet__Y_4)
#line 448 "diet.m"
{
#line 448 "diet.m"
  {
#line 448 "diet.m"
    MR_bool mercury__diet__succeeded = (mercury__diet__X_3 < mercury__diet__Y_4);

#line 448 "diet.m"
    return mercury__diet__succeeded;
#line 448 "diet.m"
  }
#line 448 "diet.m"
}

#line 440 "diet.m"
void MR_CALL 
mercury__diet____Compare____interval_1_0(
#line 440 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_6,
#line 440 "diet.m"
  MR_Word * mercury__diet__HeadVar__1_1,
#line 440 "diet.m"
  MR_Tuple mercury__diet__HeadVar__2_2,
#line 440 "diet.m"
  MR_Tuple mercury__diet__HeadVar__3_3)
#line 440 "diet.m"
{
#line 440 "diet.m"
  {
#line 440 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 440 "diet.m"
    MR_Word mercury__diet__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 440 "diet.m"
    MR_Word mercury__diet__TypeInfo_9_9;
#line 440 "diet.m"
    MR_Tuple mercury__diet__Cast_HeadVar1_4 = mercury__diet__HeadVar__2_2;
#line 440 "diet.m"
    MR_Tuple mercury__diet__Cast_HeadVar2_5 = mercury__diet__HeadVar__3_3;

#line 3125 "diet.c"
    {
#line 3127 "diet.c"
      mercury__diet__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3129 "diet.c"
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_9_9, 0) = ((MR_Box) (mercury__diet__TypeCtorInfo_7_7));
#line 3131 "diet.c"
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_9_9, 1) = ((MR_Box) ((MR_Integer) 2));
#line 3133 "diet.c"
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_9_9, 2) = ((MR_Box) (mercury__diet__TypeInfo_for_T_6));
#line 3135 "diet.c"
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_9_9, 3) = ((MR_Box) (mercury__diet__TypeInfo_for_T_6));
#line 3137 "diet.c"
    }
#line 440 "diet.m"
    {
#line 440 "diet.m"
      mercury__builtin__compare_3_p_0(mercury__diet__TypeInfo_9_9, mercury__diet__HeadVar__1_1, ((MR_Box) (mercury__diet__Cast_HeadVar1_4)), ((MR_Box) (mercury__diet__Cast_HeadVar2_5)));
    }
#line 440 "diet.m"
  }
#line 440 "diet.m"
}

#line 440 "diet.m"
MR_bool MR_CALL 
mercury__diet____Unify____interval_1_0(
#line 440 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_5,
#line 440 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 440 "diet.m"
  MR_Tuple mercury__diet__HeadVar__2_2)
#line 440 "diet.m"
{
#line 440 "diet.m"
  {
#line 440 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 440 "diet.m"
    MR_Word mercury__diet__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 440 "diet.m"
    MR_Word mercury__diet__TypeInfo_8_8;
#line 440 "diet.m"
    MR_Tuple mercury__diet__Cast_HeadVar1_3 = mercury__diet__HeadVar__1_1;
#line 440 "diet.m"
    MR_Tuple mercury__diet__Cast_HeadVar2_4 = mercury__diet__HeadVar__2_2;

#line 3173 "diet.c"
    {
#line 3175 "diet.c"
      mercury__diet__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3177 "diet.c"
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_8_8, 0) = ((MR_Box) (mercury__diet__TypeCtorInfo_6_6));
#line 3179 "diet.c"
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_8_8, 1) = ((MR_Box) ((MR_Integer) 2));
#line 3181 "diet.c"
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_8_8, 2) = ((MR_Box) (mercury__diet__TypeInfo_for_T_5));
#line 3183 "diet.c"
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_8_8, 3) = ((MR_Box) (mercury__diet__TypeInfo_for_T_5));
#line 3185 "diet.c"
    }
#line 440 "diet.m"
    {
#line 440 "diet.m"
      mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_8_8, ((MR_Box) (mercury__diet__Cast_HeadVar1_3)), ((MR_Box) (mercury__diet__Cast_HeadVar2_4)));
    }
#line 440 "diet.m"
    return mercury__diet__succeeded;
#line 440 "diet.m"
  }
#line 440 "diet.m"
}

#line 427 "diet.m"
void MR_CALL 
mercury__diet____Compare____diet_1_0(
#line 427 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_25,
#line 427 "diet.m"
  MR_Word * mercury__diet__HeadVar__1_1,
#line 427 "diet.m"
  MR_Word mercury__diet__HeadVar__2_2,
#line 427 "diet.m"
  MR_Word mercury__diet__HeadVar__3_3)
#line 427 "diet.m"
{
#line 427 "diet.m"
  while (MR_TRUE)
#line 427 "diet.m"
    {
#line 427 "diet.m"
      /* tailcall optimized into a loop */
#line 427 "diet.m"
      {
#line 427 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 427 "diet.m"
        MR_Integer mercury__diet__CastX_23 = (MR_Integer) mercury__diet__HeadVar__2_2;
#line 427 "diet.m"
        MR_Integer mercury__diet__CastY_24 = (MR_Integer) mercury__diet__HeadVar__3_3;

#line 427 "diet.m"
        mercury__diet__succeeded = (mercury__diet__CastX_23 == mercury__diet__CastY_24);
#line 427 "diet.m"
        if (mercury__diet__succeeded)
#line 3231 "diet.c"
          *mercury__diet__HeadVar__1_1 = (MR_Integer) 0;
#line 427 "diet.m"
        else
#line 427 "diet.m"
        if ((mercury__diet__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 427 "diet.m"
          if ((mercury__diet__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 427 "diet.m"
            *mercury__diet__HeadVar__1_1 = (MR_Integer) 0;
#line 427 "diet.m"
          else
#line 3243 "diet.c"
            *mercury__diet__HeadVar__1_1 = (MR_Integer) 1;
#line 427 "diet.m"
        else
#line 427 "diet.m"
          {
#line 427 "diet.m"
            MR_Word mercury__diet__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 3)));
#line 427 "diet.m"
            MR_Word mercury__diet__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 2)));
#line 427 "diet.m"
            MR_Integer mercury__diet__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 427 "diet.m"
            MR_Tuple mercury__diet__V_37_37 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));

#line 427 "diet.m"
            if ((mercury__diet__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3260 "diet.c"
              *mercury__diet__HeadVar__1_1 = (MR_Integer) 2;
#line 427 "diet.m"
            else
#line 427 "diet.m"
              {
#line 427 "diet.m"
                MR_Tuple mercury__diet__V_16_16 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__3_3, (MR_Integer) 0)));
#line 427 "diet.m"
                MR_Integer mercury__diet__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__3_3, (MR_Integer) 1)));
#line 427 "diet.m"
                MR_Word mercury__diet__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__3_3, (MR_Integer) 2)));
#line 427 "diet.m"
                MR_Word mercury__diet__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__3_3, (MR_Integer) 3)));
#line 427 "diet.m"
                MR_Word mercury__diet__V_20_20;
#line 427 "diet.m"
                MR_Word mercury__diet__TypeCtorInfo_26_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 427 "diet.m"
                MR_Word mercury__diet__TypeInfo_28_28;

#line 3281 "diet.c"
                {
#line 3283 "diet.c"
                  mercury__diet__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3285 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_28_28, 0) = ((MR_Box) (mercury__diet__TypeCtorInfo_26_26));
#line 3287 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_28_28, 1) = ((MR_Box) ((MR_Integer) 2));
#line 3289 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_28_28, 2) = ((MR_Box) (mercury__diet__TypeInfo_for_T_25));
#line 3291 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_28_28, 3) = ((MR_Box) (mercury__diet__TypeInfo_for_T_25));
#line 3293 "diet.c"
                }
#line 427 "diet.m"
                {
#line 427 "diet.m"
                  mercury__builtin__compare_3_p_0(mercury__diet__TypeInfo_28_28, &mercury__diet__V_20_20, ((MR_Box) (mercury__diet__V_37_37)), ((MR_Box) (mercury__diet__V_16_16)));
                }
#line 3300 "diet.c"
                mercury__diet__succeeded = (mercury__diet__V_20_20 == (MR_Integer) 0);
#line 427 "diet.m"
                mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 427 "diet.m"
                if (mercury__diet__succeeded)
#line 427 "diet.m"
                  *mercury__diet__HeadVar__1_1 = mercury__diet__V_20_20;
#line 427 "diet.m"
                else
#line 427 "diet.m"
                  {
#line 427 "diet.m"
                    MR_Word mercury__diet__V_21_21;

#line 69 "private_builtin.opt"
                    mercury__diet__succeeded = (mercury__diet__V_36_36 < mercury__diet__V_17_17);
#line 72 "private_builtin.opt"
                    if (mercury__diet__succeeded)
#line 71 "private_builtin.opt"
                      mercury__diet__V_21_21 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                    else
#line 77 "private_builtin.opt"
                      {
#line 74 "private_builtin.opt"
                        mercury__diet__succeeded = (mercury__diet__V_36_36 == mercury__diet__V_17_17);
#line 77 "private_builtin.opt"
                        if (mercury__diet__succeeded)
#line 76 "private_builtin.opt"
                          mercury__diet__V_21_21 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                        else
#line 78 "private_builtin.opt"
                          mercury__diet__V_21_21 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
                      }
#line 3337 "diet.c"
                    mercury__diet__succeeded = (mercury__diet__V_21_21 == (MR_Integer) 0);
#line 427 "diet.m"
                    mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 427 "diet.m"
                    if (mercury__diet__succeeded)
#line 427 "diet.m"
                      *mercury__diet__HeadVar__1_1 = mercury__diet__V_21_21;
#line 427 "diet.m"
                    else
#line 427 "diet.m"
                      {
#line 427 "diet.m"
                        MR_Word mercury__diet__V_22_22;

#line 427 "diet.m"
                        {
#line 427 "diet.m"
                          mercury__diet____Compare____diet_1_0(mercury__diet__TypeInfo_for_T_25, &mercury__diet__V_22_22, mercury__diet__V_35_35, mercury__diet__V_18_18);
                        }
#line 3357 "diet.c"
                        mercury__diet__succeeded = (mercury__diet__V_22_22 == (MR_Integer) 0);
#line 427 "diet.m"
                        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 427 "diet.m"
                        if (mercury__diet__succeeded)
#line 427 "diet.m"
                          *mercury__diet__HeadVar__1_1 = mercury__diet__V_22_22;
#line 427 "diet.m"
                        else
#line 427 "diet.m"
                          {
#line 427 "diet.m"
                            /* direct tailcall eliminated */
#line 427 "diet.m"
                            {
#line 427 "diet.m"
                              MR_Word mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__V_34_34;
#line 427 "diet.m"
                              MR_Word mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__V_19_19;

#line 427 "diet.m"
                              mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 427 "diet.m"
                              mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 427 "diet.m"
                            }
#line 427 "diet.m"
                            continue;
#line 427 "diet.m"
                          }
#line 427 "diet.m"
                      }
#line 427 "diet.m"
                  }
#line 427 "diet.m"
              }
#line 427 "diet.m"
          }
#line 427 "diet.m"
      }
#line 427 "diet.m"
      break;
#line 427 "diet.m"
    }
#line 427 "diet.m"
}

#line 427 "diet.m"
MR_bool MR_CALL 
mercury__diet____Unify____diet_1_0(
#line 427 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_15,
#line 427 "diet.m"
  MR_Word mercury__diet__HeadVar__1_1,
#line 427 "diet.m"
  MR_Word mercury__diet__HeadVar__2_2)
#line 427 "diet.m"
{
#line 427 "diet.m"
  while (MR_TRUE)
#line 427 "diet.m"
    {
#line 427 "diet.m"
      /* tailcall optimized into a loop */
#line 427 "diet.m"
      {
#line 427 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 427 "diet.m"
        MR_Integer mercury__diet__CastX_13 = (MR_Integer) mercury__diet__HeadVar__1_1;
#line 427 "diet.m"
        MR_Integer mercury__diet__CastY_14 = (MR_Integer) mercury__diet__HeadVar__2_2;

#line 427 "diet.m"
        mercury__diet__succeeded = (mercury__diet__CastX_13 == mercury__diet__CastY_14);
#line 427 "diet.m"
        if (mercury__diet__succeeded)
#line 427 "diet.m"
          mercury__diet__succeeded = MR_TRUE;
#line 427 "diet.m"
        else
#line 427 "diet.m"
        if ((mercury__diet__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 427 "diet.m"
          {
#line 427 "diet.m"
            MR_Integer mercury__diet__CastX_3 = (MR_Integer) mercury__diet__HeadVar__1_1;
#line 427 "diet.m"
            MR_Integer mercury__diet__CastY_4 = (MR_Integer) mercury__diet__HeadVar__2_2;

#line 427 "diet.m"
            mercury__diet__succeeded = (mercury__diet__CastY_4 == mercury__diet__CastX_3);
#line 427 "diet.m"
          }
#line 427 "diet.m"
        else
#line 427 "diet.m"
          {
#line 427 "diet.m"
            MR_Word mercury__diet__TypeCtorInfo_16_16;
#line 427 "diet.m"
            MR_Word mercury__diet__TypeInfo_18_18;
#line 427 "diet.m"
            MR_Tuple mercury__diet__V_5_5 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 0)));
#line 427 "diet.m"
            MR_Integer mercury__diet__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 1)));
#line 427 "diet.m"
            MR_Word mercury__diet__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 2)));
#line 427 "diet.m"
            MR_Word mercury__diet__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 3)));
#line 427 "diet.m"
            MR_Tuple mercury__diet__V_9_9;
#line 427 "diet.m"
            MR_Integer mercury__diet__V_10_10;
#line 427 "diet.m"
            MR_Word mercury__diet__V_11_11;
#line 427 "diet.m"
            MR_Word mercury__diet__V_12_12;
#line 427 "diet.m"
            MR_Integer mercury__diet__PolyConst2_17;

#line 427 "diet.m"
            mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 427 "diet.m"
            if (mercury__diet__succeeded)
#line 427 "diet.m"
              {
#line 427 "diet.m"
                mercury__diet__V_9_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
#line 427 "diet.m"
                mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 427 "diet.m"
                mercury__diet__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 2)));
#line 427 "diet.m"
                mercury__diet__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 3)));
#line 3493 "diet.c"
                mercury__diet__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 3495 "diet.c"
                mercury__diet__PolyConst2_17 = (MR_Integer) 2;
#line 3497 "diet.c"
                {
#line 3499 "diet.c"
                  mercury__diet__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3501 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_18_18, 0) = ((MR_Box) (mercury__diet__TypeCtorInfo_16_16));
#line 3503 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_18_18, 1) = ((MR_Box) (mercury__diet__PolyConst2_17));
#line 3505 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_18_18, 2) = ((MR_Box) (mercury__diet__TypeInfo_for_T_15));
#line 3507 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_18_18, 3) = ((MR_Box) (mercury__diet__TypeInfo_for_T_15));
#line 3509 "diet.c"
                }
#line 3511 "diet.c"
                {
#line 3513 "diet.c"
                  mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_18_18, ((MR_Box) (mercury__diet__V_5_5)), ((MR_Box) (mercury__diet__V_9_9)));
                }
#line 427 "diet.m"
                if (mercury__diet__succeeded)
#line 427 "diet.m"
                  {
#line 3520 "diet.c"
                    mercury__diet__succeeded = (mercury__diet__V_6_6 == mercury__diet__V_10_10);
#line 427 "diet.m"
                    if (mercury__diet__succeeded)
#line 427 "diet.m"
                      {
#line 3526 "diet.c"
                        {
#line 3528 "diet.c"
                          mercury__diet__succeeded = mercury__diet____Unify____diet_1_0(mercury__diet__TypeInfo_for_T_15, mercury__diet__V_7_7, mercury__diet__V_11_11);
                        }
#line 427 "diet.m"
                        if (mercury__diet__succeeded)
#line 3533 "diet.c"
                          {
#line 3535 "diet.c"
                            /* direct tailcall eliminated */
#line 3537 "diet.c"
                            {
#line 3539 "diet.c"
                              MR_Word mercury__diet__HeadVar__1__tmp_copy_1 = mercury__diet__V_8_8;
#line 3541 "diet.c"
                              MR_Word mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__V_12_12;

#line 3544 "diet.c"
                              mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 3546 "diet.c"
                              mercury__diet__HeadVar__1_1 = mercury__diet__HeadVar__1__tmp_copy_1;
#line 3548 "diet.c"
                            }
#line 3550 "diet.c"
                            continue;
#line 3552 "diet.c"
                          }
#line 427 "diet.m"
                      }
#line 427 "diet.m"
                  }
#line 427 "diet.m"
              }
#line 427 "diet.m"
          }
#line 427 "diet.m"
        return mercury__diet__succeeded;
#line 427 "diet.m"
      }
#line 427 "diet.m"
      break;
#line 427 "diet.m"
    }
#line 427 "diet.m"
}

#line 45 "diet.m"
MR_Box MR_CALL 
mercury__diet__predecessor_1_f_0(
#line 45 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_3,
#line 45 "diet.m"
  MR_Box mercury__diet__HeadVar__1_1)
#line 45 "diet.m"
{
#line 45 "diet.m"
  {
#line 45 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 45 "diet.m"
    MR_Box mercury__diet__HeadVar__2_2;
#line 45 "diet.m"
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_3, (MR_Integer) 0)), (MR_Integer) 7)));

#line 45 "diet.m"
    {
#line 45 "diet.m"
      mercury__diet__HeadVar__2_2 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_3), mercury__diet__HeadVar__1_1);
    }
#line 45 "diet.m"
    return mercury__diet__HeadVar__2_2;
#line 45 "diet.m"
  }
#line 45 "diet.m"
}

#line 42 "diet.m"
MR_Box MR_CALL 
mercury__diet__successor_1_f_0(
#line 42 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_3,
#line 42 "diet.m"
  MR_Box mercury__diet__HeadVar__1_1)
#line 42 "diet.m"
{
#line 42 "diet.m"
  {
#line 42 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 42 "diet.m"
    MR_Box mercury__diet__HeadVar__2_2;
#line 42 "diet.m"
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_3, (MR_Integer) 0)), (MR_Integer) 6)));

#line 42 "diet.m"
    {
#line 42 "diet.m"
      mercury__diet__HeadVar__2_2 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_3), mercury__diet__HeadVar__1_1);
    }
#line 42 "diet.m"
    return mercury__diet__HeadVar__2_2;
#line 42 "diet.m"
  }
#line 42 "diet.m"
}

#line 39 "diet.m"
MR_bool MR_CALL 
mercury__diet__less_than_2_p_0(
#line 39 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_3,
#line 39 "diet.m"
  MR_Box mercury__diet__HeadVar__1_1,
#line 39 "diet.m"
  MR_Box mercury__diet__HeadVar__2_2)
#line 39 "diet.m"
{
#line 39 "diet.m"
  {
#line 39 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_3, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
    {
#line 39 "diet.m"
      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_3), mercury__diet__HeadVar__1_1, mercury__diet__HeadVar__2_2);
    }
#line 39 "diet.m"
    return mercury__diet__succeeded;
#line 39 "diet.m"
  }
#line 39 "diet.m"
}

#line 1792 "diet.m"
void MR_CALL 
mercury__diet__cons_interval_4_p_0(
#line 1792 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_9,
#line 1792 "diet.m"
  MR_Box mercury__diet__X_5,
#line 1792 "diet.m"
  MR_Box mercury__diet__Y_6,
#line 1792 "diet.m"
  MR_Word mercury__diet__L_7,
#line 1792 "diet.m"
  MR_Word * mercury__diet__HeadVar__4_4)
#line 1792 "diet.m"
{
#line 1795 "diet.m"
  {
#line 1795 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1795 "diet.m"
    MR_Tuple mercury__diet__V_8_8;

#line 1795 "diet.m"
    {
#line 1795 "diet.m"
      mercury__diet__V_8_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1795 "diet.m"
      MR_hl_field(MR_mktag(0), mercury__diet__V_8_8, 0) = mercury__diet__X_5;
#line 1795 "diet.m"
      MR_hl_field(MR_mktag(0), mercury__diet__V_8_8, 1) = mercury__diet__Y_6;
#line 1795 "diet.m"
    }
#line 1795 "diet.m"
    {
#line 1795 "diet.m"
      MR_Word base;
#line 1795 "diet.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1795 "diet.m"
      *mercury__diet__HeadVar__4_4 = base;
#line 1795 "diet.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_8_8));
#line 1795 "diet.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__L_7));
#line 1795 "diet.m"
    }
#line 1795 "diet.m"
  }
#line 1792 "diet.m"
}

#line 1744 "diet.m"
MR_bool MR_CALL 
mercury__diet__all_true_interval_3_p_0(
#line 1744 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
#line 1744 "diet.m"
  MR_Word mercury__diet__P_4,
#line 1744 "diet.m"
  MR_Box mercury__diet__Lo_5,
#line 1744 "diet.m"
  MR_Box mercury__diet__Hi_6)
#line 1744 "diet.m"
{
#line 1751 "diet.m"
  while (MR_TRUE)
#line 1751 "diet.m"
    {
#line 1751 "diet.m"
      /* tailcall optimized into a loop */
#line 1751 "diet.m"
      {
#line 1751 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_8, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_8), mercury__diet__Hi_6, mercury__diet__Lo_5);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1751 "diet.m"
        if (mercury__diet__succeeded)
#line 1749 "diet.m"
          {
#line 1749 "diet.m"
            MR_Box mercury__diet__V_7_7;
#line 1749 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__diet__P_4, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1749 "diet.m"
            {
#line 1749 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_4), mercury__diet__Lo_5);
            }
#line 1749 "diet.m"
            if (mercury__diet__succeeded)
#line 1749 "diet.m"
              {
#line 42 "diet.m"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_8, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                {
#line 42 "diet.m"
                  mercury__diet__V_7_7 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_8), mercury__diet__Lo_5);
                }
#line 1750 "diet.m"
                /* direct tailcall eliminated */
#line 1750 "diet.m"
                {
#line 1750 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_5 = mercury__diet__V_7_7;

#line 1750 "diet.m"
                  mercury__diet__Lo_5 = mercury__diet__Lo__tmp_copy_5;
#line 1750 "diet.m"
                }
#line 1750 "diet.m"
                continue;
#line 1749 "diet.m"
              }
#line 1749 "diet.m"
          }
#line 1751 "diet.m"
        else
#line 1752 "diet.m"
          mercury__diet__succeeded = MR_TRUE;
#line 1751 "diet.m"
        return mercury__diet__succeeded;
#line 1751 "diet.m"
      }
#line 1751 "diet.m"
      break;
#line 1751 "diet.m"
    }
#line 1744 "diet.m"
}

#line 1722 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_down_5_p_5(
#line 1722 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_16,
#line 1722 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1722 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1722 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1722 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1722 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
#line 1722 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
#line 1722 "diet.m"
{
#line 1728 "diet.m"
  while (MR_TRUE)
#line 1728 "diet.m"
    {
#line 1728 "diet.m"
      /* tailcall optimized into a loop */
#line 1728 "diet.m"
      {
#line 1728 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1728 "diet.m"
        if (mercury__diet__succeeded)
#line 1726 "diet.m"
          {
#line 1726 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
#line 1726 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1726 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 45 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1726 "diet.m"
            {
#line 1726 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_12_12);
            }
#line 1726 "diet.m"
            if (mercury__diet__succeeded)
#line 1726 "diet.m"
              {
#line 45 "diet.m"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 45 "diet.m"
                {
#line 45 "diet.m"
                  mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
                }
#line 1727 "diet.m"
                /* direct tailcall eliminated */
#line 1727 "diet.m"
                {
#line 1727 "diet.m"
                  MR_Box mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_13_13;
#line 1727 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_12_12;

#line 1727 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1727 "diet.m"
                  mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1727 "diet.m"
                }
#line 1727 "diet.m"
                continue;
#line 1726 "diet.m"
              }
#line 1726 "diet.m"
          }
#line 1728 "diet.m"
        else
#line 1728 "diet.m"
          {
#line 1728 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1728 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1728 "diet.m"
          }
#line 1728 "diet.m"
        return mercury__diet__succeeded;
#line 1728 "diet.m"
      }
#line 1728 "diet.m"
      break;
#line 1728 "diet.m"
    }
#line 1722 "diet.m"
}

#line 1721 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_down_5_p_4(
#line 1721 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_16,
#line 1721 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1721 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1721 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1721 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1721 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
#line 1721 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
#line 1721 "diet.m"
{
#line 1728 "diet.m"
  while (MR_TRUE)
#line 1728 "diet.m"
    {
#line 1728 "diet.m"
      /* tailcall optimized into a loop */
#line 1728 "diet.m"
      {
#line 1728 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1728 "diet.m"
        if (mercury__diet__succeeded)
#line 1726 "diet.m"
          {
#line 1726 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
#line 1726 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1726 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 45 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1726 "diet.m"
            {
#line 1726 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_12_12);
            }
#line 1726 "diet.m"
            if (mercury__diet__succeeded)
#line 1726 "diet.m"
              {
#line 45 "diet.m"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 45 "diet.m"
                {
#line 45 "diet.m"
                  mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
                }
#line 1727 "diet.m"
                /* direct tailcall eliminated */
#line 1727 "diet.m"
                {
#line 1727 "diet.m"
                  MR_Box mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_13_13;
#line 1727 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_12_12;

#line 1727 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1727 "diet.m"
                  mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1727 "diet.m"
                }
#line 1727 "diet.m"
                continue;
#line 1726 "diet.m"
              }
#line 1726 "diet.m"
          }
#line 1728 "diet.m"
        else
#line 1728 "diet.m"
          {
#line 1728 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1728 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1728 "diet.m"
          }
#line 1728 "diet.m"
        return mercury__diet__succeeded;
#line 1728 "diet.m"
      }
#line 1728 "diet.m"
      break;
#line 1728 "diet.m"
    }
#line 1721 "diet.m"
}

#line 1720 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_down_5_p_3(
#line 1720 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_16,
#line 1720 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1720 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1720 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1720 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1720 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
#line 1720 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
#line 1720 "diet.m"
{
#line 1728 "diet.m"
  while (MR_TRUE)
#line 1728 "diet.m"
    {
#line 1728 "diet.m"
      /* tailcall optimized into a loop */
#line 1728 "diet.m"
      {
#line 1728 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1728 "diet.m"
        if (mercury__diet__succeeded)
#line 1726 "diet.m"
          {
#line 1726 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
#line 1726 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1726 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 45 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1726 "diet.m"
            {
#line 1726 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_12_12);
            }
#line 1726 "diet.m"
            if (mercury__diet__succeeded)
#line 1726 "diet.m"
              {
#line 45 "diet.m"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 45 "diet.m"
                {
#line 45 "diet.m"
                  mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
                }
#line 1727 "diet.m"
                /* direct tailcall eliminated */
#line 1727 "diet.m"
                {
#line 1727 "diet.m"
                  MR_Box mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_13_13;
#line 1727 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_12_12;

#line 1727 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1727 "diet.m"
                  mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1727 "diet.m"
                }
#line 1727 "diet.m"
                continue;
#line 1726 "diet.m"
              }
#line 1726 "diet.m"
          }
#line 1728 "diet.m"
        else
#line 1728 "diet.m"
          {
#line 1728 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1728 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1728 "diet.m"
          }
#line 1728 "diet.m"
        return mercury__diet__succeeded;
#line 1728 "diet.m"
      }
#line 1728 "diet.m"
      break;
#line 1728 "diet.m"
    }
#line 1720 "diet.m"
}

#line 1719 "diet.m"
void MR_CALL 
mercury__diet__fold_down_5_p_2(
#line 1719 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_16,
#line 1719 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1719 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1719 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1719 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1719 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
#line 1719 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
#line 1719 "diet.m"
{
#line 1728 "diet.m"
  while (MR_TRUE)
#line 1728 "diet.m"
    {
#line 1728 "diet.m"
      /* tailcall optimized into a loop */
#line 1728 "diet.m"
      {
#line 1728 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1728 "diet.m"
        if (mercury__diet__succeeded)
#line 1726 "diet.m"
          {
#line 1726 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
#line 1726 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1726 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 45 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1726 "diet.m"
            {
#line 1726 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_12_12);
            }
#line 45 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 45 "diet.m"
            {
#line 45 "diet.m"
              mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
            }
#line 1727 "diet.m"
            /* direct tailcall eliminated */
#line 1727 "diet.m"
            {
#line 1727 "diet.m"
              MR_Box mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_13_13;
#line 1727 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_12_12;

#line 1727 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1727 "diet.m"
              mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1727 "diet.m"
            }
#line 1727 "diet.m"
            continue;
#line 1726 "diet.m"
          }
#line 1728 "diet.m"
        else
#line 1728 "diet.m"
          *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1728 "diet.m"
      }
#line 1728 "diet.m"
      break;
#line 1728 "diet.m"
    }
#line 1719 "diet.m"
}

#line 1718 "diet.m"
void MR_CALL 
mercury__diet__fold_down_5_p_1(
#line 1718 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_16,
#line 1718 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1718 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1718 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1718 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1718 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
#line 1718 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
#line 1718 "diet.m"
{
#line 1728 "diet.m"
  while (MR_TRUE)
#line 1728 "diet.m"
    {
#line 1728 "diet.m"
      /* tailcall optimized into a loop */
#line 1728 "diet.m"
      {
#line 1728 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1728 "diet.m"
        if (mercury__diet__succeeded)
#line 1726 "diet.m"
          {
#line 1726 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
#line 1726 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1726 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 45 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1726 "diet.m"
            {
#line 1726 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_12_12);
            }
#line 45 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 45 "diet.m"
            {
#line 45 "diet.m"
              mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
            }
#line 1727 "diet.m"
            /* direct tailcall eliminated */
#line 1727 "diet.m"
            {
#line 1727 "diet.m"
              MR_Box mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_13_13;
#line 1727 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_12_12;

#line 1727 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1727 "diet.m"
              mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1727 "diet.m"
            }
#line 1727 "diet.m"
            continue;
#line 1726 "diet.m"
          }
#line 1728 "diet.m"
        else
#line 1728 "diet.m"
          *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1728 "diet.m"
      }
#line 1728 "diet.m"
      break;
#line 1728 "diet.m"
    }
#line 1718 "diet.m"
}

#line 1717 "diet.m"
void MR_CALL 
mercury__diet__fold_down_5_p_0(
#line 1717 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_16,
#line 1717 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1717 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1717 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1717 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1717 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
#line 1717 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
#line 1717 "diet.m"
{
#line 1728 "diet.m"
  while (MR_TRUE)
#line 1728 "diet.m"
    {
#line 1728 "diet.m"
      /* tailcall optimized into a loop */
#line 1728 "diet.m"
      {
#line 1728 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1728 "diet.m"
        if (mercury__diet__succeeded)
#line 1726 "diet.m"
          {
#line 1726 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
#line 1726 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1726 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 45 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1726 "diet.m"
            {
#line 1726 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_12_12);
            }
#line 45 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 45 "diet.m"
            {
#line 45 "diet.m"
              mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
            }
#line 1727 "diet.m"
            /* direct tailcall eliminated */
#line 1727 "diet.m"
            {
#line 1727 "diet.m"
              MR_Box mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_13_13;
#line 1727 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_12_12;

#line 1727 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1727 "diet.m"
              mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1727 "diet.m"
            }
#line 1727 "diet.m"
            continue;
#line 1726 "diet.m"
          }
#line 1728 "diet.m"
        else
#line 1728 "diet.m"
          *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1728 "diet.m"
      }
#line 1728 "diet.m"
      break;
#line 1728 "diet.m"
    }
#line 1717 "diet.m"
}

#line 1686 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up5_13_p_5(
#line 1686 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 1686 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 1686 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 1686 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 1686 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_48,
#line 1686 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
#line 1686 "diet.m"
  MR_Word mercury__diet__P_14,
#line 1686 "diet.m"
  MR_Box mercury__diet__Lo_15,
#line 1686 "diet.m"
  MR_Box mercury__diet__Hi_16,
#line 1686 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 1686 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 1686 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 1686 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 1686 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 1686 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 1686 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 1686 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
#line 1686 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
#line 1686 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
#line 1686 "diet.m"
{
#line 1694 "diet.m"
  while (MR_TRUE)
#line 1694 "diet.m"
    {
#line 1694 "diet.m"
      /* tailcall optimized into a loop */
#line 1694 "diet.m"
      {
#line 1694 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Hi_16, mercury__diet__Lo_15);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1694 "diet.m"
        if (mercury__diet__succeeded)
#line 1692 "diet.m"
          {
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_32_32;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_33_33;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_34_34;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_35_35;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_36_36;
#line 1692 "diet.m"
            MR_Box mercury__diet__V_37_37;
#line 1692 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1692 "diet.m"
            {
#line 1692 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_14), mercury__diet__Lo_15, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_32_32, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_33_33, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_34_34, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_35_35, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_36_36);
            }
#line 1692 "diet.m"
            if (mercury__diet__succeeded)
#line 1692 "diet.m"
              {
#line 42 "diet.m"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                {
#line 42 "diet.m"
                  mercury__diet__V_37_37 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Lo_15);
                }
#line 1693 "diet.m"
                /* direct tailcall eliminated */
#line 1693 "diet.m"
                {
#line 1693 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_15 = mercury__diet__V_37_37;
#line 1693 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_32_32;
#line 1693 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_33_33;
#line 1693 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_34_34;
#line 1693 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_35_35;
#line 1693 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30 = mercury__diet__STATE_VARIABLE_E_36_36;

#line 1693 "diet.m"
                  mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30;
#line 1693 "diet.m"
                  mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1693 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1693 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1693 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1693 "diet.m"
                  mercury__diet__Lo_15 = mercury__diet__Lo__tmp_copy_15;
#line 1693 "diet.m"
                }
#line 1693 "diet.m"
                continue;
#line 1692 "diet.m"
              }
#line 1692 "diet.m"
          }
#line 1694 "diet.m"
        else
#line 1695 "diet.m"
          {
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1695 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1695 "diet.m"
          }
#line 1694 "diet.m"
        return mercury__diet__succeeded;
#line 1694 "diet.m"
      }
#line 1694 "diet.m"
      break;
#line 1694 "diet.m"
    }
#line 1686 "diet.m"
}

#line 1683 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up5_13_p_4(
#line 1683 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 1683 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 1683 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 1683 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 1683 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_48,
#line 1683 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
#line 1683 "diet.m"
  MR_Word mercury__diet__P_14,
#line 1683 "diet.m"
  MR_Box mercury__diet__Lo_15,
#line 1683 "diet.m"
  MR_Box mercury__diet__Hi_16,
#line 1683 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 1683 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 1683 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 1683 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 1683 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 1683 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 1683 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 1683 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
#line 1683 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
#line 1683 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
#line 1683 "diet.m"
{
#line 1694 "diet.m"
  while (MR_TRUE)
#line 1694 "diet.m"
    {
#line 1694 "diet.m"
      /* tailcall optimized into a loop */
#line 1694 "diet.m"
      {
#line 1694 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Hi_16, mercury__diet__Lo_15);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1694 "diet.m"
        if (mercury__diet__succeeded)
#line 1692 "diet.m"
          {
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_32_32;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_33_33;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_34_34;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_35_35;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_36_36;
#line 1692 "diet.m"
            MR_Box mercury__diet__V_37_37;
#line 1692 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1692 "diet.m"
            {
#line 1692 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_14), mercury__diet__Lo_15, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_32_32, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_33_33, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_34_34, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_35_35, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_36_36);
            }
#line 1692 "diet.m"
            if (mercury__diet__succeeded)
#line 1692 "diet.m"
              {
#line 42 "diet.m"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                {
#line 42 "diet.m"
                  mercury__diet__V_37_37 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Lo_15);
                }
#line 1693 "diet.m"
                /* direct tailcall eliminated */
#line 1693 "diet.m"
                {
#line 1693 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_15 = mercury__diet__V_37_37;
#line 1693 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_32_32;
#line 1693 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_33_33;
#line 1693 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_34_34;
#line 1693 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_35_35;
#line 1693 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30 = mercury__diet__STATE_VARIABLE_E_36_36;

#line 1693 "diet.m"
                  mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30;
#line 1693 "diet.m"
                  mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1693 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1693 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1693 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1693 "diet.m"
                  mercury__diet__Lo_15 = mercury__diet__Lo__tmp_copy_15;
#line 1693 "diet.m"
                }
#line 1693 "diet.m"
                continue;
#line 1692 "diet.m"
              }
#line 1692 "diet.m"
          }
#line 1694 "diet.m"
        else
#line 1695 "diet.m"
          {
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1695 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1695 "diet.m"
          }
#line 1694 "diet.m"
        return mercury__diet__succeeded;
#line 1694 "diet.m"
      }
#line 1694 "diet.m"
      break;
#line 1694 "diet.m"
    }
#line 1683 "diet.m"
}

#line 1680 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up5_13_p_3(
#line 1680 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 1680 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 1680 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 1680 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 1680 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_48,
#line 1680 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
#line 1680 "diet.m"
  MR_Word mercury__diet__P_14,
#line 1680 "diet.m"
  MR_Box mercury__diet__Lo_15,
#line 1680 "diet.m"
  MR_Box mercury__diet__Hi_16,
#line 1680 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 1680 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 1680 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 1680 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 1680 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 1680 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 1680 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 1680 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
#line 1680 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
#line 1680 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
#line 1680 "diet.m"
{
#line 1694 "diet.m"
  while (MR_TRUE)
#line 1694 "diet.m"
    {
#line 1694 "diet.m"
      /* tailcall optimized into a loop */
#line 1694 "diet.m"
      {
#line 1694 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Hi_16, mercury__diet__Lo_15);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1694 "diet.m"
        if (mercury__diet__succeeded)
#line 1692 "diet.m"
          {
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_32_32;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_33_33;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_34_34;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_35_35;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_36_36;
#line 1692 "diet.m"
            MR_Box mercury__diet__V_37_37;
#line 1692 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1692 "diet.m"
            {
#line 1692 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_14), mercury__diet__Lo_15, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_32_32, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_33_33, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_34_34, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_35_35, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_36_36);
            }
#line 1692 "diet.m"
            if (mercury__diet__succeeded)
#line 1692 "diet.m"
              {
#line 42 "diet.m"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                {
#line 42 "diet.m"
                  mercury__diet__V_37_37 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Lo_15);
                }
#line 1693 "diet.m"
                /* direct tailcall eliminated */
#line 1693 "diet.m"
                {
#line 1693 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_15 = mercury__diet__V_37_37;
#line 1693 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_32_32;
#line 1693 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_33_33;
#line 1693 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_34_34;
#line 1693 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_35_35;
#line 1693 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30 = mercury__diet__STATE_VARIABLE_E_36_36;

#line 1693 "diet.m"
                  mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30;
#line 1693 "diet.m"
                  mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1693 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1693 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1693 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1693 "diet.m"
                  mercury__diet__Lo_15 = mercury__diet__Lo__tmp_copy_15;
#line 1693 "diet.m"
                }
#line 1693 "diet.m"
                continue;
#line 1692 "diet.m"
              }
#line 1692 "diet.m"
          }
#line 1694 "diet.m"
        else
#line 1695 "diet.m"
          {
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1695 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1695 "diet.m"
          }
#line 1694 "diet.m"
        return mercury__diet__succeeded;
#line 1694 "diet.m"
      }
#line 1694 "diet.m"
      break;
#line 1694 "diet.m"
    }
#line 1680 "diet.m"
}

#line 1677 "diet.m"
void MR_CALL 
mercury__diet__fold_up5_13_p_2(
#line 1677 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 1677 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 1677 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 1677 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 1677 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_48,
#line 1677 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
#line 1677 "diet.m"
  MR_Word mercury__diet__P_14,
#line 1677 "diet.m"
  MR_Box mercury__diet__Lo_15,
#line 1677 "diet.m"
  MR_Box mercury__diet__Hi_16,
#line 1677 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 1677 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 1677 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 1677 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 1677 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 1677 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 1677 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 1677 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
#line 1677 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
#line 1677 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
#line 1677 "diet.m"
{
#line 1694 "diet.m"
  while (MR_TRUE)
#line 1694 "diet.m"
    {
#line 1694 "diet.m"
      /* tailcall optimized into a loop */
#line 1694 "diet.m"
      {
#line 1694 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Hi_16, mercury__diet__Lo_15);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1694 "diet.m"
        if (mercury__diet__succeeded)
#line 1692 "diet.m"
          {
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_32_32;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_33_33;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_34_34;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_35_35;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_36_36;
#line 1692 "diet.m"
            MR_Box mercury__diet__V_37_37;
#line 1692 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1692 "diet.m"
            {
#line 1692 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_14), mercury__diet__Lo_15, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_32_32, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_33_33, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_34_34, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_35_35, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_36_36);
            }
#line 42 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
            {
#line 42 "diet.m"
              mercury__diet__V_37_37 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Lo_15);
            }
#line 1693 "diet.m"
            /* direct tailcall eliminated */
#line 1693 "diet.m"
            {
#line 1693 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_15 = mercury__diet__V_37_37;
#line 1693 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_32_32;
#line 1693 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_33_33;
#line 1693 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_34_34;
#line 1693 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_35_35;
#line 1693 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30 = mercury__diet__STATE_VARIABLE_E_36_36;

#line 1693 "diet.m"
              mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30;
#line 1693 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1693 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1693 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1693 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1693 "diet.m"
              mercury__diet__Lo_15 = mercury__diet__Lo__tmp_copy_15;
#line 1693 "diet.m"
            }
#line 1693 "diet.m"
            continue;
#line 1692 "diet.m"
          }
#line 1694 "diet.m"
        else
#line 1695 "diet.m"
          {
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1695 "diet.m"
          }
#line 1694 "diet.m"
      }
#line 1694 "diet.m"
      break;
#line 1694 "diet.m"
    }
#line 1677 "diet.m"
}

#line 1674 "diet.m"
void MR_CALL 
mercury__diet__fold_up5_13_p_1(
#line 1674 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 1674 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 1674 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 1674 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 1674 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_48,
#line 1674 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
#line 1674 "diet.m"
  MR_Word mercury__diet__P_14,
#line 1674 "diet.m"
  MR_Box mercury__diet__Lo_15,
#line 1674 "diet.m"
  MR_Box mercury__diet__Hi_16,
#line 1674 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 1674 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 1674 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 1674 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 1674 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 1674 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 1674 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 1674 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
#line 1674 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
#line 1674 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
#line 1674 "diet.m"
{
#line 1694 "diet.m"
  while (MR_TRUE)
#line 1694 "diet.m"
    {
#line 1694 "diet.m"
      /* tailcall optimized into a loop */
#line 1694 "diet.m"
      {
#line 1694 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Hi_16, mercury__diet__Lo_15);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1694 "diet.m"
        if (mercury__diet__succeeded)
#line 1692 "diet.m"
          {
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_32_32;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_33_33;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_34_34;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_35_35;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_36_36;
#line 1692 "diet.m"
            MR_Box mercury__diet__V_37_37;
#line 1692 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1692 "diet.m"
            {
#line 1692 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_14), mercury__diet__Lo_15, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_32_32, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_33_33, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_34_34, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_35_35, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_36_36);
            }
#line 42 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
            {
#line 42 "diet.m"
              mercury__diet__V_37_37 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Lo_15);
            }
#line 1693 "diet.m"
            /* direct tailcall eliminated */
#line 1693 "diet.m"
            {
#line 1693 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_15 = mercury__diet__V_37_37;
#line 1693 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_32_32;
#line 1693 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_33_33;
#line 1693 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_34_34;
#line 1693 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_35_35;
#line 1693 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30 = mercury__diet__STATE_VARIABLE_E_36_36;

#line 1693 "diet.m"
              mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30;
#line 1693 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1693 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1693 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1693 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1693 "diet.m"
              mercury__diet__Lo_15 = mercury__diet__Lo__tmp_copy_15;
#line 1693 "diet.m"
            }
#line 1693 "diet.m"
            continue;
#line 1692 "diet.m"
          }
#line 1694 "diet.m"
        else
#line 1695 "diet.m"
          {
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1695 "diet.m"
          }
#line 1694 "diet.m"
      }
#line 1694 "diet.m"
      break;
#line 1694 "diet.m"
    }
#line 1674 "diet.m"
}

#line 1671 "diet.m"
void MR_CALL 
mercury__diet__fold_up5_13_p_0(
#line 1671 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 1671 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 1671 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 1671 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 1671 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_48,
#line 1671 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
#line 1671 "diet.m"
  MR_Word mercury__diet__P_14,
#line 1671 "diet.m"
  MR_Box mercury__diet__Lo_15,
#line 1671 "diet.m"
  MR_Box mercury__diet__Hi_16,
#line 1671 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 1671 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 1671 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 1671 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 1671 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 1671 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 1671 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 1671 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
#line 1671 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
#line 1671 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
#line 1671 "diet.m"
{
#line 1694 "diet.m"
  while (MR_TRUE)
#line 1694 "diet.m"
    {
#line 1694 "diet.m"
      /* tailcall optimized into a loop */
#line 1694 "diet.m"
      {
#line 1694 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Hi_16, mercury__diet__Lo_15);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1694 "diet.m"
        if (mercury__diet__succeeded)
#line 1692 "diet.m"
          {
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_32_32;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_33_33;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_34_34;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_35_35;
#line 1692 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_36_36;
#line 1692 "diet.m"
            MR_Box mercury__diet__V_37_37;
#line 1692 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1692 "diet.m"
            {
#line 1692 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_14), mercury__diet__Lo_15, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_32_32, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_33_33, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_34_34, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_35_35, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_36_36);
            }
#line 42 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
            {
#line 42 "diet.m"
              mercury__diet__V_37_37 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Lo_15);
            }
#line 1693 "diet.m"
            /* direct tailcall eliminated */
#line 1693 "diet.m"
            {
#line 1693 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_15 = mercury__diet__V_37_37;
#line 1693 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_32_32;
#line 1693 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_33_33;
#line 1693 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_34_34;
#line 1693 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_35_35;
#line 1693 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30 = mercury__diet__STATE_VARIABLE_E_36_36;

#line 1693 "diet.m"
              mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30;
#line 1693 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1693 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1693 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1693 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1693 "diet.m"
              mercury__diet__Lo_15 = mercury__diet__Lo__tmp_copy_15;
#line 1693 "diet.m"
            }
#line 1693 "diet.m"
            continue;
#line 1692 "diet.m"
          }
#line 1694 "diet.m"
        else
#line 1695 "diet.m"
          {
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1695 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1695 "diet.m"
          }
#line 1694 "diet.m"
      }
#line 1694 "diet.m"
      break;
#line 1694 "diet.m"
    }
#line 1671 "diet.m"
}

#line 1645 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up4_11_p_5(
#line 1645 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_37,
#line 1645 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_38,
#line 1645 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_39,
#line 1645 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_40,
#line 1645 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_36,
#line 1645 "diet.m"
  MR_Word mercury__diet__P_12,
#line 1645 "diet.m"
  MR_Box mercury__diet__Lo_13,
#line 1645 "diet.m"
  MR_Box mercury__diet__Hi_14,
#line 1645 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
#line 1645 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
#line 1645 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
#line 1645 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
#line 1645 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
#line 1645 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
#line 1645 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
#line 1645 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
#line 1645 "diet.m"
{
#line 1652 "diet.m"
  while (MR_TRUE)
#line 1652 "diet.m"
    {
#line 1652 "diet.m"
      /* tailcall optimized into a loop */
#line 1652 "diet.m"
      {
#line 1652 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Hi_14, mercury__diet__Lo_13);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1652 "diet.m"
        if (mercury__diet__succeeded)
#line 1650 "diet.m"
          {
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_27_27;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_28_28;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_29_29;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_30_30;
#line 1650 "diet.m"
            MR_Box mercury__diet__V_31_31;
#line 1650 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1650 "diet.m"
            {
#line 1650 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_12), mercury__diet__Lo_13, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_27_27, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_28_28, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_29_29, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_30_30);
            }
#line 1650 "diet.m"
            if (mercury__diet__succeeded)
#line 1650 "diet.m"
              {
#line 42 "diet.m"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                {
#line 42 "diet.m"
                  mercury__diet__V_31_31 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Lo_13);
                }
#line 1651 "diet.m"
                /* direct tailcall eliminated */
#line 1651 "diet.m"
                {
#line 1651 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_13 = mercury__diet__V_31_31;
#line 1651 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_A_27_27;
#line 1651 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_B_28_28;
#line 1651 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_C_29_29;
#line 1651 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_D_30_30;

#line 1651 "diet.m"
                  mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25;
#line 1651 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23;
#line 1651 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21;
#line 1651 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19;
#line 1651 "diet.m"
                  mercury__diet__Lo_13 = mercury__diet__Lo__tmp_copy_13;
#line 1651 "diet.m"
                }
#line 1651 "diet.m"
                continue;
#line 1650 "diet.m"
              }
#line 1650 "diet.m"
          }
#line 1652 "diet.m"
        else
#line 1653 "diet.m"
          {
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
#line 1653 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1653 "diet.m"
          }
#line 1652 "diet.m"
        return mercury__diet__succeeded;
#line 1652 "diet.m"
      }
#line 1652 "diet.m"
      break;
#line 1652 "diet.m"
    }
#line 1645 "diet.m"
}

#line 1643 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up4_11_p_4(
#line 1643 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_37,
#line 1643 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_38,
#line 1643 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_39,
#line 1643 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_40,
#line 1643 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_36,
#line 1643 "diet.m"
  MR_Word mercury__diet__P_12,
#line 1643 "diet.m"
  MR_Box mercury__diet__Lo_13,
#line 1643 "diet.m"
  MR_Box mercury__diet__Hi_14,
#line 1643 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
#line 1643 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
#line 1643 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
#line 1643 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
#line 1643 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
#line 1643 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
#line 1643 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
#line 1643 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
#line 1643 "diet.m"
{
#line 1652 "diet.m"
  while (MR_TRUE)
#line 1652 "diet.m"
    {
#line 1652 "diet.m"
      /* tailcall optimized into a loop */
#line 1652 "diet.m"
      {
#line 1652 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Hi_14, mercury__diet__Lo_13);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1652 "diet.m"
        if (mercury__diet__succeeded)
#line 1650 "diet.m"
          {
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_27_27;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_28_28;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_29_29;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_30_30;
#line 1650 "diet.m"
            MR_Box mercury__diet__V_31_31;
#line 1650 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1650 "diet.m"
            {
#line 1650 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_12), mercury__diet__Lo_13, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_27_27, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_28_28, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_29_29, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_30_30);
            }
#line 1650 "diet.m"
            if (mercury__diet__succeeded)
#line 1650 "diet.m"
              {
#line 42 "diet.m"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                {
#line 42 "diet.m"
                  mercury__diet__V_31_31 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Lo_13);
                }
#line 1651 "diet.m"
                /* direct tailcall eliminated */
#line 1651 "diet.m"
                {
#line 1651 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_13 = mercury__diet__V_31_31;
#line 1651 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_A_27_27;
#line 1651 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_B_28_28;
#line 1651 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_C_29_29;
#line 1651 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_D_30_30;

#line 1651 "diet.m"
                  mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25;
#line 1651 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23;
#line 1651 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21;
#line 1651 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19;
#line 1651 "diet.m"
                  mercury__diet__Lo_13 = mercury__diet__Lo__tmp_copy_13;
#line 1651 "diet.m"
                }
#line 1651 "diet.m"
                continue;
#line 1650 "diet.m"
              }
#line 1650 "diet.m"
          }
#line 1652 "diet.m"
        else
#line 1653 "diet.m"
          {
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
#line 1653 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1653 "diet.m"
          }
#line 1652 "diet.m"
        return mercury__diet__succeeded;
#line 1652 "diet.m"
      }
#line 1652 "diet.m"
      break;
#line 1652 "diet.m"
    }
#line 1643 "diet.m"
}

#line 1641 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up4_11_p_3(
#line 1641 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_37,
#line 1641 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_38,
#line 1641 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_39,
#line 1641 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_40,
#line 1641 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_36,
#line 1641 "diet.m"
  MR_Word mercury__diet__P_12,
#line 1641 "diet.m"
  MR_Box mercury__diet__Lo_13,
#line 1641 "diet.m"
  MR_Box mercury__diet__Hi_14,
#line 1641 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
#line 1641 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
#line 1641 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
#line 1641 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
#line 1641 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
#line 1641 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
#line 1641 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
#line 1641 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
#line 1641 "diet.m"
{
#line 1652 "diet.m"
  while (MR_TRUE)
#line 1652 "diet.m"
    {
#line 1652 "diet.m"
      /* tailcall optimized into a loop */
#line 1652 "diet.m"
      {
#line 1652 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Hi_14, mercury__diet__Lo_13);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1652 "diet.m"
        if (mercury__diet__succeeded)
#line 1650 "diet.m"
          {
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_27_27;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_28_28;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_29_29;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_30_30;
#line 1650 "diet.m"
            MR_Box mercury__diet__V_31_31;
#line 1650 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1650 "diet.m"
            {
#line 1650 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_12), mercury__diet__Lo_13, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_27_27, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_28_28, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_29_29, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_30_30);
            }
#line 1650 "diet.m"
            if (mercury__diet__succeeded)
#line 1650 "diet.m"
              {
#line 42 "diet.m"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                {
#line 42 "diet.m"
                  mercury__diet__V_31_31 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Lo_13);
                }
#line 1651 "diet.m"
                /* direct tailcall eliminated */
#line 1651 "diet.m"
                {
#line 1651 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_13 = mercury__diet__V_31_31;
#line 1651 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_A_27_27;
#line 1651 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_B_28_28;
#line 1651 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_C_29_29;
#line 1651 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_D_30_30;

#line 1651 "diet.m"
                  mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25;
#line 1651 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23;
#line 1651 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21;
#line 1651 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19;
#line 1651 "diet.m"
                  mercury__diet__Lo_13 = mercury__diet__Lo__tmp_copy_13;
#line 1651 "diet.m"
                }
#line 1651 "diet.m"
                continue;
#line 1650 "diet.m"
              }
#line 1650 "diet.m"
          }
#line 1652 "diet.m"
        else
#line 1653 "diet.m"
          {
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
#line 1653 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1653 "diet.m"
          }
#line 1652 "diet.m"
        return mercury__diet__succeeded;
#line 1652 "diet.m"
      }
#line 1652 "diet.m"
      break;
#line 1652 "diet.m"
    }
#line 1641 "diet.m"
}

#line 1639 "diet.m"
void MR_CALL 
mercury__diet__fold_up4_11_p_2(
#line 1639 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_37,
#line 1639 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_38,
#line 1639 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_39,
#line 1639 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_40,
#line 1639 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_36,
#line 1639 "diet.m"
  MR_Word mercury__diet__P_12,
#line 1639 "diet.m"
  MR_Box mercury__diet__Lo_13,
#line 1639 "diet.m"
  MR_Box mercury__diet__Hi_14,
#line 1639 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
#line 1639 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
#line 1639 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
#line 1639 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
#line 1639 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
#line 1639 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
#line 1639 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
#line 1639 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
#line 1639 "diet.m"
{
#line 1652 "diet.m"
  while (MR_TRUE)
#line 1652 "diet.m"
    {
#line 1652 "diet.m"
      /* tailcall optimized into a loop */
#line 1652 "diet.m"
      {
#line 1652 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Hi_14, mercury__diet__Lo_13);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1652 "diet.m"
        if (mercury__diet__succeeded)
#line 1650 "diet.m"
          {
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_27_27;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_28_28;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_29_29;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_30_30;
#line 1650 "diet.m"
            MR_Box mercury__diet__V_31_31;
#line 1650 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1650 "diet.m"
            {
#line 1650 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_12), mercury__diet__Lo_13, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_27_27, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_28_28, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_29_29, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_30_30);
            }
#line 42 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
            {
#line 42 "diet.m"
              mercury__diet__V_31_31 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Lo_13);
            }
#line 1651 "diet.m"
            /* direct tailcall eliminated */
#line 1651 "diet.m"
            {
#line 1651 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_13 = mercury__diet__V_31_31;
#line 1651 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_A_27_27;
#line 1651 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_B_28_28;
#line 1651 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_C_29_29;
#line 1651 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_D_30_30;

#line 1651 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25;
#line 1651 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23;
#line 1651 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21;
#line 1651 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19;
#line 1651 "diet.m"
              mercury__diet__Lo_13 = mercury__diet__Lo__tmp_copy_13;
#line 1651 "diet.m"
            }
#line 1651 "diet.m"
            continue;
#line 1650 "diet.m"
          }
#line 1652 "diet.m"
        else
#line 1653 "diet.m"
          {
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
#line 1653 "diet.m"
          }
#line 1652 "diet.m"
      }
#line 1652 "diet.m"
      break;
#line 1652 "diet.m"
    }
#line 1639 "diet.m"
}

#line 1637 "diet.m"
void MR_CALL 
mercury__diet__fold_up4_11_p_1(
#line 1637 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_37,
#line 1637 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_38,
#line 1637 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_39,
#line 1637 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_40,
#line 1637 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_36,
#line 1637 "diet.m"
  MR_Word mercury__diet__P_12,
#line 1637 "diet.m"
  MR_Box mercury__diet__Lo_13,
#line 1637 "diet.m"
  MR_Box mercury__diet__Hi_14,
#line 1637 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
#line 1637 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
#line 1637 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
#line 1637 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
#line 1637 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
#line 1637 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
#line 1637 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
#line 1637 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
#line 1637 "diet.m"
{
#line 1652 "diet.m"
  while (MR_TRUE)
#line 1652 "diet.m"
    {
#line 1652 "diet.m"
      /* tailcall optimized into a loop */
#line 1652 "diet.m"
      {
#line 1652 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Hi_14, mercury__diet__Lo_13);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1652 "diet.m"
        if (mercury__diet__succeeded)
#line 1650 "diet.m"
          {
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_27_27;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_28_28;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_29_29;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_30_30;
#line 1650 "diet.m"
            MR_Box mercury__diet__V_31_31;
#line 1650 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1650 "diet.m"
            {
#line 1650 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_12), mercury__diet__Lo_13, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_27_27, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_28_28, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_29_29, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_30_30);
            }
#line 42 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
            {
#line 42 "diet.m"
              mercury__diet__V_31_31 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Lo_13);
            }
#line 1651 "diet.m"
            /* direct tailcall eliminated */
#line 1651 "diet.m"
            {
#line 1651 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_13 = mercury__diet__V_31_31;
#line 1651 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_A_27_27;
#line 1651 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_B_28_28;
#line 1651 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_C_29_29;
#line 1651 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_D_30_30;

#line 1651 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25;
#line 1651 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23;
#line 1651 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21;
#line 1651 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19;
#line 1651 "diet.m"
              mercury__diet__Lo_13 = mercury__diet__Lo__tmp_copy_13;
#line 1651 "diet.m"
            }
#line 1651 "diet.m"
            continue;
#line 1650 "diet.m"
          }
#line 1652 "diet.m"
        else
#line 1653 "diet.m"
          {
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
#line 1653 "diet.m"
          }
#line 1652 "diet.m"
      }
#line 1652 "diet.m"
      break;
#line 1652 "diet.m"
    }
#line 1637 "diet.m"
}

#line 1635 "diet.m"
void MR_CALL 
mercury__diet__fold_up4_11_p_0(
#line 1635 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_37,
#line 1635 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_38,
#line 1635 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_39,
#line 1635 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_40,
#line 1635 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_36,
#line 1635 "diet.m"
  MR_Word mercury__diet__P_12,
#line 1635 "diet.m"
  MR_Box mercury__diet__Lo_13,
#line 1635 "diet.m"
  MR_Box mercury__diet__Hi_14,
#line 1635 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
#line 1635 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
#line 1635 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
#line 1635 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
#line 1635 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
#line 1635 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
#line 1635 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
#line 1635 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
#line 1635 "diet.m"
{
#line 1652 "diet.m"
  while (MR_TRUE)
#line 1652 "diet.m"
    {
#line 1652 "diet.m"
      /* tailcall optimized into a loop */
#line 1652 "diet.m"
      {
#line 1652 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Hi_14, mercury__diet__Lo_13);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1652 "diet.m"
        if (mercury__diet__succeeded)
#line 1650 "diet.m"
          {
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_27_27;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_28_28;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_29_29;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_30_30;
#line 1650 "diet.m"
            MR_Box mercury__diet__V_31_31;
#line 1650 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1650 "diet.m"
            {
#line 1650 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_12), mercury__diet__Lo_13, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_27_27, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_28_28, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_29_29, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_30_30);
            }
#line 42 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
            {
#line 42 "diet.m"
              mercury__diet__V_31_31 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Lo_13);
            }
#line 1651 "diet.m"
            /* direct tailcall eliminated */
#line 1651 "diet.m"
            {
#line 1651 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_13 = mercury__diet__V_31_31;
#line 1651 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_A_27_27;
#line 1651 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_B_28_28;
#line 1651 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_C_29_29;
#line 1651 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_D_30_30;

#line 1651 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25;
#line 1651 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23;
#line 1651 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21;
#line 1651 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19;
#line 1651 "diet.m"
              mercury__diet__Lo_13 = mercury__diet__Lo__tmp_copy_13;
#line 1651 "diet.m"
            }
#line 1651 "diet.m"
            continue;
#line 1650 "diet.m"
          }
#line 1652 "diet.m"
        else
#line 1653 "diet.m"
          {
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
#line 1653 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
#line 1653 "diet.m"
          }
#line 1652 "diet.m"
      }
#line 1652 "diet.m"
      break;
#line 1652 "diet.m"
    }
#line 1635 "diet.m"
}

#line 1610 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up3_9_p_5(
#line 1610 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_30,
#line 1610 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_31,
#line 1610 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc3_32,
#line 1610 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
#line 1610 "diet.m"
  MR_Word mercury__diet__P_10,
#line 1610 "diet.m"
  MR_Box mercury__diet__Lo_11,
#line 1610 "diet.m"
  MR_Box mercury__diet__Hi_12,
#line 1610 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
#line 1610 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
#line 1610 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
#line 1610 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
#line 1610 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
#line 1610 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
#line 1610 "diet.m"
{
#line 1617 "diet.m"
  while (MR_TRUE)
#line 1617 "diet.m"
    {
#line 1617 "diet.m"
      /* tailcall optimized into a loop */
#line 1617 "diet.m"
      {
#line 1617 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Hi_12, mercury__diet__Lo_11);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1617 "diet.m"
        if (mercury__diet__succeeded)
#line 1615 "diet.m"
          {
#line 1615 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_22_22;
#line 1615 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_23_23;
#line 1615 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_24_24;
#line 1615 "diet.m"
            MR_Box mercury__diet__V_25_25;
#line 1615 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1615 "diet.m"
            {
#line 1615 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_10), mercury__diet__Lo_11, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_22_22, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_23_23, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_24_24);
            }
#line 1615 "diet.m"
            if (mercury__diet__succeeded)
#line 1615 "diet.m"
              {
#line 42 "diet.m"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                {
#line 42 "diet.m"
                  mercury__diet__V_25_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Lo_11);
                }
#line 1616 "diet.m"
                /* direct tailcall eliminated */
#line 1616 "diet.m"
                {
#line 1616 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_11 = mercury__diet__V_25_25;
#line 1616 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_A_22_22;
#line 1616 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_B_23_23;
#line 1616 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__diet__STATE_VARIABLE_C_24_24;

#line 1616 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20;
#line 1616 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18;
#line 1616 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16;
#line 1616 "diet.m"
                  mercury__diet__Lo_11 = mercury__diet__Lo__tmp_copy_11;
#line 1616 "diet.m"
                }
#line 1616 "diet.m"
                continue;
#line 1615 "diet.m"
              }
#line 1615 "diet.m"
          }
#line 1617 "diet.m"
        else
#line 1618 "diet.m"
          {
#line 1618 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
#line 1618 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
#line 1618 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
#line 1618 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1618 "diet.m"
          }
#line 1617 "diet.m"
        return mercury__diet__succeeded;
#line 1617 "diet.m"
      }
#line 1617 "diet.m"
      break;
#line 1617 "diet.m"
    }
#line 1610 "diet.m"
}

#line 1608 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up3_9_p_4(
#line 1608 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_30,
#line 1608 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_31,
#line 1608 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc3_32,
#line 1608 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
#line 1608 "diet.m"
  MR_Word mercury__diet__P_10,
#line 1608 "diet.m"
  MR_Box mercury__diet__Lo_11,
#line 1608 "diet.m"
  MR_Box mercury__diet__Hi_12,
#line 1608 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
#line 1608 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
#line 1608 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
#line 1608 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
#line 1608 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
#line 1608 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
#line 1608 "diet.m"
{
#line 1617 "diet.m"
  while (MR_TRUE)
#line 1617 "diet.m"
    {
#line 1617 "diet.m"
      /* tailcall optimized into a loop */
#line 1617 "diet.m"
      {
#line 1617 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Hi_12, mercury__diet__Lo_11);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1617 "diet.m"
        if (mercury__diet__succeeded)
#line 1615 "diet.m"
          {
#line 1615 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_22_22;
#line 1615 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_23_23;
#line 1615 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_24_24;
#line 1615 "diet.m"
            MR_Box mercury__diet__V_25_25;
#line 1615 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1615 "diet.m"
            {
#line 1615 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_10), mercury__diet__Lo_11, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_22_22, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_23_23, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_24_24);
            }
#line 1615 "diet.m"
            if (mercury__diet__succeeded)
#line 1615 "diet.m"
              {
#line 42 "diet.m"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                {
#line 42 "diet.m"
                  mercury__diet__V_25_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Lo_11);
                }
#line 1616 "diet.m"
                /* direct tailcall eliminated */
#line 1616 "diet.m"
                {
#line 1616 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_11 = mercury__diet__V_25_25;
#line 1616 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_A_22_22;
#line 1616 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_B_23_23;
#line 1616 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__diet__STATE_VARIABLE_C_24_24;

#line 1616 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20;
#line 1616 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18;
#line 1616 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16;
#line 1616 "diet.m"
                  mercury__diet__Lo_11 = mercury__diet__Lo__tmp_copy_11;
#line 1616 "diet.m"
                }
#line 1616 "diet.m"
                continue;
#line 1615 "diet.m"
              }
#line 1615 "diet.m"
          }
#line 1617 "diet.m"
        else
#line 1618 "diet.m"
          {
#line 1618 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
#line 1618 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
#line 1618 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
#line 1618 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1618 "diet.m"
          }
#line 1617 "diet.m"
        return mercury__diet__succeeded;
#line 1617 "diet.m"
      }
#line 1617 "diet.m"
      break;
#line 1617 "diet.m"
    }
#line 1608 "diet.m"
}

#line 1606 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up3_9_p_3(
#line 1606 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_30,
#line 1606 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_31,
#line 1606 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc3_32,
#line 1606 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
#line 1606 "diet.m"
  MR_Word mercury__diet__P_10,
#line 1606 "diet.m"
  MR_Box mercury__diet__Lo_11,
#line 1606 "diet.m"
  MR_Box mercury__diet__Hi_12,
#line 1606 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
#line 1606 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
#line 1606 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
#line 1606 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
#line 1606 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
#line 1606 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
#line 1606 "diet.m"
{
#line 1617 "diet.m"
  while (MR_TRUE)
#line 1617 "diet.m"
    {
#line 1617 "diet.m"
      /* tailcall optimized into a loop */
#line 1617 "diet.m"
      {
#line 1617 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Hi_12, mercury__diet__Lo_11);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1617 "diet.m"
        if (mercury__diet__succeeded)
#line 1615 "diet.m"
          {
#line 1615 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_22_22;
#line 1615 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_23_23;
#line 1615 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_24_24;
#line 1615 "diet.m"
            MR_Box mercury__diet__V_25_25;
#line 1615 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1615 "diet.m"
            {
#line 1615 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_10), mercury__diet__Lo_11, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_22_22, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_23_23, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_24_24);
            }
#line 1615 "diet.m"
            if (mercury__diet__succeeded)
#line 1615 "diet.m"
              {
#line 42 "diet.m"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                {
#line 42 "diet.m"
                  mercury__diet__V_25_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Lo_11);
                }
#line 1616 "diet.m"
                /* direct tailcall eliminated */
#line 1616 "diet.m"
                {
#line 1616 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_11 = mercury__diet__V_25_25;
#line 1616 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_A_22_22;
#line 1616 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_B_23_23;
#line 1616 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__diet__STATE_VARIABLE_C_24_24;

#line 1616 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20;
#line 1616 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18;
#line 1616 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16;
#line 1616 "diet.m"
                  mercury__diet__Lo_11 = mercury__diet__Lo__tmp_copy_11;
#line 1616 "diet.m"
                }
#line 1616 "diet.m"
                continue;
#line 1615 "diet.m"
              }
#line 1615 "diet.m"
          }
#line 1617 "diet.m"
        else
#line 1618 "diet.m"
          {
#line 1618 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
#line 1618 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
#line 1618 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
#line 1618 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1618 "diet.m"
          }
#line 1617 "diet.m"
        return mercury__diet__succeeded;
#line 1617 "diet.m"
      }
#line 1617 "diet.m"
      break;
#line 1617 "diet.m"
    }
#line 1606 "diet.m"
}

#line 1604 "diet.m"
void MR_CALL 
mercury__diet__fold_up3_9_p_2(
#line 1604 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_30,
#line 1604 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_31,
#line 1604 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc3_32,
#line 1604 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
#line 1604 "diet.m"
  MR_Word mercury__diet__P_10,
#line 1604 "diet.m"
  MR_Box mercury__diet__Lo_11,
#line 1604 "diet.m"
  MR_Box mercury__diet__Hi_12,
#line 1604 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
#line 1604 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
#line 1604 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
#line 1604 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
#line 1604 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
#line 1604 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
#line 1604 "diet.m"
{
#line 1617 "diet.m"
  while (MR_TRUE)
#line 1617 "diet.m"
    {
#line 1617 "diet.m"
      /* tailcall optimized into a loop */
#line 1617 "diet.m"
      {
#line 1617 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Hi_12, mercury__diet__Lo_11);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1617 "diet.m"
        if (mercury__diet__succeeded)
#line 1615 "diet.m"
          {
#line 1615 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_22_22;
#line 1615 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_23_23;
#line 1615 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_24_24;
#line 1615 "diet.m"
            MR_Box mercury__diet__V_25_25;
#line 1615 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1615 "diet.m"
            {
#line 1615 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_10), mercury__diet__Lo_11, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_22_22, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_23_23, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_24_24);
            }
#line 42 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
            {
#line 42 "diet.m"
              mercury__diet__V_25_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Lo_11);
            }
#line 1616 "diet.m"
            /* direct tailcall eliminated */
#line 1616 "diet.m"
            {
#line 1616 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_11 = mercury__diet__V_25_25;
#line 1616 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_A_22_22;
#line 1616 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_B_23_23;
#line 1616 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__diet__STATE_VARIABLE_C_24_24;

#line 1616 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20;
#line 1616 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18;
#line 1616 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16;
#line 1616 "diet.m"
              mercury__diet__Lo_11 = mercury__diet__Lo__tmp_copy_11;
#line 1616 "diet.m"
            }
#line 1616 "diet.m"
            continue;
#line 1615 "diet.m"
          }
#line 1617 "diet.m"
        else
#line 1618 "diet.m"
          {
#line 1618 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
#line 1618 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
#line 1618 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
#line 1618 "diet.m"
          }
#line 1617 "diet.m"
      }
#line 1617 "diet.m"
      break;
#line 1617 "diet.m"
    }
#line 1604 "diet.m"
}

#line 1602 "diet.m"
void MR_CALL 
mercury__diet__fold_up3_9_p_1(
#line 1602 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_30,
#line 1602 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_31,
#line 1602 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc3_32,
#line 1602 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
#line 1602 "diet.m"
  MR_Word mercury__diet__P_10,
#line 1602 "diet.m"
  MR_Box mercury__diet__Lo_11,
#line 1602 "diet.m"
  MR_Box mercury__diet__Hi_12,
#line 1602 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
#line 1602 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
#line 1602 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
#line 1602 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
#line 1602 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
#line 1602 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
#line 1602 "diet.m"
{
#line 1617 "diet.m"
  while (MR_TRUE)
#line 1617 "diet.m"
    {
#line 1617 "diet.m"
      /* tailcall optimized into a loop */
#line 1617 "diet.m"
      {
#line 1617 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Hi_12, mercury__diet__Lo_11);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1617 "diet.m"
        if (mercury__diet__succeeded)
#line 1615 "diet.m"
          {
#line 1615 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_22_22;
#line 1615 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_23_23;
#line 1615 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_24_24;
#line 1615 "diet.m"
            MR_Box mercury__diet__V_25_25;
#line 1615 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1615 "diet.m"
            {
#line 1615 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_10), mercury__diet__Lo_11, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_22_22, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_23_23, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_24_24);
            }
#line 42 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
            {
#line 42 "diet.m"
              mercury__diet__V_25_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Lo_11);
            }
#line 1616 "diet.m"
            /* direct tailcall eliminated */
#line 1616 "diet.m"
            {
#line 1616 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_11 = mercury__diet__V_25_25;
#line 1616 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_A_22_22;
#line 1616 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_B_23_23;
#line 1616 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__diet__STATE_VARIABLE_C_24_24;

#line 1616 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20;
#line 1616 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18;
#line 1616 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16;
#line 1616 "diet.m"
              mercury__diet__Lo_11 = mercury__diet__Lo__tmp_copy_11;
#line 1616 "diet.m"
            }
#line 1616 "diet.m"
            continue;
#line 1615 "diet.m"
          }
#line 1617 "diet.m"
        else
#line 1618 "diet.m"
          {
#line 1618 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
#line 1618 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
#line 1618 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
#line 1618 "diet.m"
          }
#line 1617 "diet.m"
      }
#line 1617 "diet.m"
      break;
#line 1617 "diet.m"
    }
#line 1602 "diet.m"
}

#line 1600 "diet.m"
void MR_CALL 
mercury__diet__fold_up3_9_p_0(
#line 1600 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_30,
#line 1600 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_31,
#line 1600 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc3_32,
#line 1600 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
#line 1600 "diet.m"
  MR_Word mercury__diet__P_10,
#line 1600 "diet.m"
  MR_Box mercury__diet__Lo_11,
#line 1600 "diet.m"
  MR_Box mercury__diet__Hi_12,
#line 1600 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
#line 1600 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
#line 1600 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
#line 1600 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
#line 1600 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
#line 1600 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
#line 1600 "diet.m"
{
#line 1617 "diet.m"
  while (MR_TRUE)
#line 1617 "diet.m"
    {
#line 1617 "diet.m"
      /* tailcall optimized into a loop */
#line 1617 "diet.m"
      {
#line 1617 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Hi_12, mercury__diet__Lo_11);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1617 "diet.m"
        if (mercury__diet__succeeded)
#line 1615 "diet.m"
          {
#line 1615 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_22_22;
#line 1615 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_23_23;
#line 1615 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_24_24;
#line 1615 "diet.m"
            MR_Box mercury__diet__V_25_25;
#line 1615 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1615 "diet.m"
            {
#line 1615 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_10), mercury__diet__Lo_11, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_22_22, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_23_23, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_24_24);
            }
#line 42 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
            {
#line 42 "diet.m"
              mercury__diet__V_25_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Lo_11);
            }
#line 1616 "diet.m"
            /* direct tailcall eliminated */
#line 1616 "diet.m"
            {
#line 1616 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_11 = mercury__diet__V_25_25;
#line 1616 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_A_22_22;
#line 1616 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_B_23_23;
#line 1616 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__diet__STATE_VARIABLE_C_24_24;

#line 1616 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20;
#line 1616 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18;
#line 1616 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16;
#line 1616 "diet.m"
              mercury__diet__Lo_11 = mercury__diet__Lo__tmp_copy_11;
#line 1616 "diet.m"
            }
#line 1616 "diet.m"
            continue;
#line 1615 "diet.m"
          }
#line 1617 "diet.m"
        else
#line 1618 "diet.m"
          {
#line 1618 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
#line 1618 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
#line 1618 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
#line 1618 "diet.m"
          }
#line 1617 "diet.m"
      }
#line 1617 "diet.m"
      break;
#line 1617 "diet.m"
    }
#line 1600 "diet.m"
}

#line 1575 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up2_7_p_5(
#line 1575 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_23,
#line 1575 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_24,
#line 1575 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
#line 1575 "diet.m"
  MR_Word mercury__diet__P_8,
#line 1575 "diet.m"
  MR_Box mercury__diet__Lo_9,
#line 1575 "diet.m"
  MR_Box mercury__diet__Hi_10,
#line 1575 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
#line 1575 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
#line 1575 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
#line 1575 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
#line 1575 "diet.m"
{
#line 1582 "diet.m"
  while (MR_TRUE)
#line 1582 "diet.m"
    {
#line 1582 "diet.m"
      /* tailcall optimized into a loop */
#line 1582 "diet.m"
      {
#line 1582 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1582 "diet.m"
        if (mercury__diet__succeeded)
#line 1580 "diet.m"
          {
#line 1580 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_17_17;
#line 1580 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_18_18;
#line 1580 "diet.m"
            MR_Box mercury__diet__V_19_19;
#line 1580 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1580 "diet.m"
            {
#line 1580 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_8), mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_17_17, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_18_18);
            }
#line 1580 "diet.m"
            if (mercury__diet__succeeded)
#line 1580 "diet.m"
              {
#line 42 "diet.m"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                {
#line 42 "diet.m"
                  mercury__diet__V_19_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
                }
#line 1581 "diet.m"
                /* direct tailcall eliminated */
#line 1581 "diet.m"
                {
#line 1581 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_19_19;
#line 1581 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_17_17;
#line 1581 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_18_18;

#line 1581 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1581 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1581 "diet.m"
                  mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1581 "diet.m"
                }
#line 1581 "diet.m"
                continue;
#line 1580 "diet.m"
              }
#line 1580 "diet.m"
          }
#line 1582 "diet.m"
        else
#line 1583 "diet.m"
          {
#line 1583 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1583 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1583 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1583 "diet.m"
          }
#line 1582 "diet.m"
        return mercury__diet__succeeded;
#line 1582 "diet.m"
      }
#line 1582 "diet.m"
      break;
#line 1582 "diet.m"
    }
#line 1575 "diet.m"
}

#line 1573 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up2_7_p_4(
#line 1573 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_23,
#line 1573 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_24,
#line 1573 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
#line 1573 "diet.m"
  MR_Word mercury__diet__P_8,
#line 1573 "diet.m"
  MR_Box mercury__diet__Lo_9,
#line 1573 "diet.m"
  MR_Box mercury__diet__Hi_10,
#line 1573 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
#line 1573 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
#line 1573 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
#line 1573 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
#line 1573 "diet.m"
{
#line 1582 "diet.m"
  while (MR_TRUE)
#line 1582 "diet.m"
    {
#line 1582 "diet.m"
      /* tailcall optimized into a loop */
#line 1582 "diet.m"
      {
#line 1582 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1582 "diet.m"
        if (mercury__diet__succeeded)
#line 1580 "diet.m"
          {
#line 1580 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_17_17;
#line 1580 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_18_18;
#line 1580 "diet.m"
            MR_Box mercury__diet__V_19_19;
#line 1580 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1580 "diet.m"
            {
#line 1580 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_8), mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_17_17, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_18_18);
            }
#line 1580 "diet.m"
            if (mercury__diet__succeeded)
#line 1580 "diet.m"
              {
#line 42 "diet.m"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                {
#line 42 "diet.m"
                  mercury__diet__V_19_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
                }
#line 1581 "diet.m"
                /* direct tailcall eliminated */
#line 1581 "diet.m"
                {
#line 1581 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_19_19;
#line 1581 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_17_17;
#line 1581 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_18_18;

#line 1581 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1581 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1581 "diet.m"
                  mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1581 "diet.m"
                }
#line 1581 "diet.m"
                continue;
#line 1580 "diet.m"
              }
#line 1580 "diet.m"
          }
#line 1582 "diet.m"
        else
#line 1583 "diet.m"
          {
#line 1583 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1583 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1583 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1583 "diet.m"
          }
#line 1582 "diet.m"
        return mercury__diet__succeeded;
#line 1582 "diet.m"
      }
#line 1582 "diet.m"
      break;
#line 1582 "diet.m"
    }
#line 1573 "diet.m"
}

#line 1571 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up2_7_p_3(
#line 1571 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_23,
#line 1571 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_24,
#line 1571 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
#line 1571 "diet.m"
  MR_Word mercury__diet__P_8,
#line 1571 "diet.m"
  MR_Box mercury__diet__Lo_9,
#line 1571 "diet.m"
  MR_Box mercury__diet__Hi_10,
#line 1571 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
#line 1571 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
#line 1571 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
#line 1571 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
#line 1571 "diet.m"
{
#line 1582 "diet.m"
  while (MR_TRUE)
#line 1582 "diet.m"
    {
#line 1582 "diet.m"
      /* tailcall optimized into a loop */
#line 1582 "diet.m"
      {
#line 1582 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1582 "diet.m"
        if (mercury__diet__succeeded)
#line 1580 "diet.m"
          {
#line 1580 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_17_17;
#line 1580 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_18_18;
#line 1580 "diet.m"
            MR_Box mercury__diet__V_19_19;
#line 1580 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1580 "diet.m"
            {
#line 1580 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_8), mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_17_17, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_18_18);
            }
#line 1580 "diet.m"
            if (mercury__diet__succeeded)
#line 1580 "diet.m"
              {
#line 42 "diet.m"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                {
#line 42 "diet.m"
                  mercury__diet__V_19_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
                }
#line 1581 "diet.m"
                /* direct tailcall eliminated */
#line 1581 "diet.m"
                {
#line 1581 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_19_19;
#line 1581 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_17_17;
#line 1581 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_18_18;

#line 1581 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1581 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1581 "diet.m"
                  mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1581 "diet.m"
                }
#line 1581 "diet.m"
                continue;
#line 1580 "diet.m"
              }
#line 1580 "diet.m"
          }
#line 1582 "diet.m"
        else
#line 1583 "diet.m"
          {
#line 1583 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1583 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1583 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1583 "diet.m"
          }
#line 1582 "diet.m"
        return mercury__diet__succeeded;
#line 1582 "diet.m"
      }
#line 1582 "diet.m"
      break;
#line 1582 "diet.m"
    }
#line 1571 "diet.m"
}

#line 1569 "diet.m"
void MR_CALL 
mercury__diet__fold_up2_7_p_2(
#line 1569 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_23,
#line 1569 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_24,
#line 1569 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
#line 1569 "diet.m"
  MR_Word mercury__diet__P_8,
#line 1569 "diet.m"
  MR_Box mercury__diet__Lo_9,
#line 1569 "diet.m"
  MR_Box mercury__diet__Hi_10,
#line 1569 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
#line 1569 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
#line 1569 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
#line 1569 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
#line 1569 "diet.m"
{
#line 1582 "diet.m"
  while (MR_TRUE)
#line 1582 "diet.m"
    {
#line 1582 "diet.m"
      /* tailcall optimized into a loop */
#line 1582 "diet.m"
      {
#line 1582 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1582 "diet.m"
        if (mercury__diet__succeeded)
#line 1580 "diet.m"
          {
#line 1580 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_17_17;
#line 1580 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_18_18;
#line 1580 "diet.m"
            MR_Box mercury__diet__V_19_19;
#line 1580 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1580 "diet.m"
            {
#line 1580 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_8), mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_17_17, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_18_18);
            }
#line 42 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
            {
#line 42 "diet.m"
              mercury__diet__V_19_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
            }
#line 1581 "diet.m"
            /* direct tailcall eliminated */
#line 1581 "diet.m"
            {
#line 1581 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_19_19;
#line 1581 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_17_17;
#line 1581 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_18_18;

#line 1581 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1581 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1581 "diet.m"
              mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1581 "diet.m"
            }
#line 1581 "diet.m"
            continue;
#line 1580 "diet.m"
          }
#line 1582 "diet.m"
        else
#line 1583 "diet.m"
          {
#line 1583 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1583 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1583 "diet.m"
          }
#line 1582 "diet.m"
      }
#line 1582 "diet.m"
      break;
#line 1582 "diet.m"
    }
#line 1569 "diet.m"
}

#line 1567 "diet.m"
void MR_CALL 
mercury__diet__fold_up2_7_p_1(
#line 1567 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_23,
#line 1567 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_24,
#line 1567 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
#line 1567 "diet.m"
  MR_Word mercury__diet__P_8,
#line 1567 "diet.m"
  MR_Box mercury__diet__Lo_9,
#line 1567 "diet.m"
  MR_Box mercury__diet__Hi_10,
#line 1567 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
#line 1567 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
#line 1567 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
#line 1567 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
#line 1567 "diet.m"
{
#line 1582 "diet.m"
  while (MR_TRUE)
#line 1582 "diet.m"
    {
#line 1582 "diet.m"
      /* tailcall optimized into a loop */
#line 1582 "diet.m"
      {
#line 1582 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1582 "diet.m"
        if (mercury__diet__succeeded)
#line 1580 "diet.m"
          {
#line 1580 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_17_17;
#line 1580 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_18_18;
#line 1580 "diet.m"
            MR_Box mercury__diet__V_19_19;
#line 1580 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1580 "diet.m"
            {
#line 1580 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_8), mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_17_17, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_18_18);
            }
#line 42 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
            {
#line 42 "diet.m"
              mercury__diet__V_19_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
            }
#line 1581 "diet.m"
            /* direct tailcall eliminated */
#line 1581 "diet.m"
            {
#line 1581 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_19_19;
#line 1581 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_17_17;
#line 1581 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_18_18;

#line 1581 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1581 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1581 "diet.m"
              mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1581 "diet.m"
            }
#line 1581 "diet.m"
            continue;
#line 1580 "diet.m"
          }
#line 1582 "diet.m"
        else
#line 1583 "diet.m"
          {
#line 1583 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1583 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1583 "diet.m"
          }
#line 1582 "diet.m"
      }
#line 1582 "diet.m"
      break;
#line 1582 "diet.m"
    }
#line 1567 "diet.m"
}

#line 1565 "diet.m"
void MR_CALL 
mercury__diet__fold_up2_7_p_0(
#line 1565 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_23,
#line 1565 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_24,
#line 1565 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
#line 1565 "diet.m"
  MR_Word mercury__diet__P_8,
#line 1565 "diet.m"
  MR_Box mercury__diet__Lo_9,
#line 1565 "diet.m"
  MR_Box mercury__diet__Hi_10,
#line 1565 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
#line 1565 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
#line 1565 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
#line 1565 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
#line 1565 "diet.m"
{
#line 1582 "diet.m"
  while (MR_TRUE)
#line 1582 "diet.m"
    {
#line 1582 "diet.m"
      /* tailcall optimized into a loop */
#line 1582 "diet.m"
      {
#line 1582 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1582 "diet.m"
        if (mercury__diet__succeeded)
#line 1580 "diet.m"
          {
#line 1580 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_17_17;
#line 1580 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_18_18;
#line 1580 "diet.m"
            MR_Box mercury__diet__V_19_19;
#line 1580 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1580 "diet.m"
            {
#line 1580 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_8), mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_17_17, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_18_18);
            }
#line 42 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
            {
#line 42 "diet.m"
              mercury__diet__V_19_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
            }
#line 1581 "diet.m"
            /* direct tailcall eliminated */
#line 1581 "diet.m"
            {
#line 1581 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_19_19;
#line 1581 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_17_17;
#line 1581 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_18_18;

#line 1581 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1581 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1581 "diet.m"
              mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1581 "diet.m"
            }
#line 1581 "diet.m"
            continue;
#line 1580 "diet.m"
          }
#line 1582 "diet.m"
        else
#line 1583 "diet.m"
          {
#line 1583 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1583 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1583 "diet.m"
          }
#line 1582 "diet.m"
      }
#line 1582 "diet.m"
      break;
#line 1582 "diet.m"
    }
#line 1565 "diet.m"
}

#line 1541 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl_2_5_p_5(
#line 1541 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc_16,
#line 1541 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1541 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1541 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1541 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1541 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
#line 1541 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
#line 1541 "diet.m"
{
#line 1547 "diet.m"
  while (MR_TRUE)
#line 1547 "diet.m"
    {
#line 1547 "diet.m"
      /* tailcall optimized into a loop */
#line 1547 "diet.m"
      {
#line 1547 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1547 "diet.m"
        if (mercury__diet__succeeded)
#line 1545 "diet.m"
          {
#line 1545 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
#line 1545 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1545 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1545 "diet.m"
            {
#line 1545 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_12_12);
            }
#line 1545 "diet.m"
            if (mercury__diet__succeeded)
#line 1545 "diet.m"
              {
#line 42 "diet.m"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                {
#line 42 "diet.m"
                  mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
                }
#line 1546 "diet.m"
                /* direct tailcall eliminated */
#line 1546 "diet.m"
                {
#line 1546 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_13_13;
#line 1546 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

#line 1546 "diet.m"
                  mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1546 "diet.m"
                  mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1546 "diet.m"
                }
#line 1546 "diet.m"
                continue;
#line 1545 "diet.m"
              }
#line 1545 "diet.m"
          }
#line 1547 "diet.m"
        else
#line 1547 "diet.m"
          {
#line 1547 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1547 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1547 "diet.m"
          }
#line 1547 "diet.m"
        return mercury__diet__succeeded;
#line 1547 "diet.m"
      }
#line 1547 "diet.m"
      break;
#line 1547 "diet.m"
    }
#line 1541 "diet.m"
}

#line 1540 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl_2_5_p_4(
#line 1540 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc_16,
#line 1540 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1540 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1540 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1540 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1540 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
#line 1540 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
#line 1540 "diet.m"
{
#line 1547 "diet.m"
  while (MR_TRUE)
#line 1547 "diet.m"
    {
#line 1547 "diet.m"
      /* tailcall optimized into a loop */
#line 1547 "diet.m"
      {
#line 1547 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1547 "diet.m"
        if (mercury__diet__succeeded)
#line 1545 "diet.m"
          {
#line 1545 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
#line 1545 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1545 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1545 "diet.m"
            {
#line 1545 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_12_12);
            }
#line 1545 "diet.m"
            if (mercury__diet__succeeded)
#line 1545 "diet.m"
              {
#line 42 "diet.m"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                {
#line 42 "diet.m"
                  mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
                }
#line 1546 "diet.m"
                /* direct tailcall eliminated */
#line 1546 "diet.m"
                {
#line 1546 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_13_13;
#line 1546 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

#line 1546 "diet.m"
                  mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1546 "diet.m"
                  mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1546 "diet.m"
                }
#line 1546 "diet.m"
                continue;
#line 1545 "diet.m"
              }
#line 1545 "diet.m"
          }
#line 1547 "diet.m"
        else
#line 1547 "diet.m"
          {
#line 1547 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1547 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1547 "diet.m"
          }
#line 1547 "diet.m"
        return mercury__diet__succeeded;
#line 1547 "diet.m"
      }
#line 1547 "diet.m"
      break;
#line 1547 "diet.m"
    }
#line 1540 "diet.m"
}

#line 1539 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl_2_5_p_3(
#line 1539 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc_16,
#line 1539 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1539 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1539 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1539 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1539 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
#line 1539 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
#line 1539 "diet.m"
{
#line 1547 "diet.m"
  while (MR_TRUE)
#line 1547 "diet.m"
    {
#line 1547 "diet.m"
      /* tailcall optimized into a loop */
#line 1547 "diet.m"
      {
#line 1547 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1547 "diet.m"
        if (mercury__diet__succeeded)
#line 1545 "diet.m"
          {
#line 1545 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
#line 1545 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1545 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1545 "diet.m"
            {
#line 1545 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_12_12);
            }
#line 1545 "diet.m"
            if (mercury__diet__succeeded)
#line 1545 "diet.m"
              {
#line 42 "diet.m"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                {
#line 42 "diet.m"
                  mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
                }
#line 1546 "diet.m"
                /* direct tailcall eliminated */
#line 1546 "diet.m"
                {
#line 1546 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_13_13;
#line 1546 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

#line 1546 "diet.m"
                  mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1546 "diet.m"
                  mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1546 "diet.m"
                }
#line 1546 "diet.m"
                continue;
#line 1545 "diet.m"
              }
#line 1545 "diet.m"
          }
#line 1547 "diet.m"
        else
#line 1547 "diet.m"
          {
#line 1547 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1547 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1547 "diet.m"
          }
#line 1547 "diet.m"
        return mercury__diet__succeeded;
#line 1547 "diet.m"
      }
#line 1547 "diet.m"
      break;
#line 1547 "diet.m"
    }
#line 1539 "diet.m"
}

#line 1538 "diet.m"
void MR_CALL 
mercury__diet__foldl_2_5_p_2(
#line 1538 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc_16,
#line 1538 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1538 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1538 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1538 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1538 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
#line 1538 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
#line 1538 "diet.m"
{
#line 1547 "diet.m"
  while (MR_TRUE)
#line 1547 "diet.m"
    {
#line 1547 "diet.m"
      /* tailcall optimized into a loop */
#line 1547 "diet.m"
      {
#line 1547 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1547 "diet.m"
        if (mercury__diet__succeeded)
#line 1545 "diet.m"
          {
#line 1545 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
#line 1545 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1545 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1545 "diet.m"
            {
#line 1545 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_12_12);
            }
#line 42 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
            {
#line 42 "diet.m"
              mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
            }
#line 1546 "diet.m"
            /* direct tailcall eliminated */
#line 1546 "diet.m"
            {
#line 1546 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_13_13;
#line 1546 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

#line 1546 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1546 "diet.m"
              mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1546 "diet.m"
            }
#line 1546 "diet.m"
            continue;
#line 1545 "diet.m"
          }
#line 1547 "diet.m"
        else
#line 1547 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1547 "diet.m"
      }
#line 1547 "diet.m"
      break;
#line 1547 "diet.m"
    }
#line 1538 "diet.m"
}

#line 1537 "diet.m"
void MR_CALL 
mercury__diet__foldl_2_5_p_1(
#line 1537 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc_16,
#line 1537 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1537 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1537 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1537 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1537 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
#line 1537 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
#line 1537 "diet.m"
{
#line 1547 "diet.m"
  while (MR_TRUE)
#line 1547 "diet.m"
    {
#line 1547 "diet.m"
      /* tailcall optimized into a loop */
#line 1547 "diet.m"
      {
#line 1547 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1547 "diet.m"
        if (mercury__diet__succeeded)
#line 1545 "diet.m"
          {
#line 1545 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
#line 1545 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1545 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1545 "diet.m"
            {
#line 1545 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_12_12);
            }
#line 42 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
            {
#line 42 "diet.m"
              mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
            }
#line 1546 "diet.m"
            /* direct tailcall eliminated */
#line 1546 "diet.m"
            {
#line 1546 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_13_13;
#line 1546 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

#line 1546 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1546 "diet.m"
              mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1546 "diet.m"
            }
#line 1546 "diet.m"
            continue;
#line 1545 "diet.m"
          }
#line 1547 "diet.m"
        else
#line 1547 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1547 "diet.m"
      }
#line 1547 "diet.m"
      break;
#line 1547 "diet.m"
    }
#line 1537 "diet.m"
}

#line 1536 "diet.m"
void MR_CALL 
mercury__diet__foldl_2_5_p_0(
#line 1536 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc_16,
#line 1536 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1536 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1536 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1536 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1536 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
#line 1536 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
#line 1536 "diet.m"
{
#line 1547 "diet.m"
  while (MR_TRUE)
#line 1547 "diet.m"
    {
#line 1547 "diet.m"
      /* tailcall optimized into a loop */
#line 1547 "diet.m"
      {
#line 1547 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 480 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1547 "diet.m"
        if (mercury__diet__succeeded)
#line 1545 "diet.m"
          {
#line 1545 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
#line 1545 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1545 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1545 "diet.m"
            {
#line 1545 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_12_12);
            }
#line 42 "diet.m"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
            {
#line 42 "diet.m"
              mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
            }
#line 1546 "diet.m"
            /* direct tailcall eliminated */
#line 1546 "diet.m"
            {
#line 1546 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_13_13;
#line 1546 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

#line 1546 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1546 "diet.m"
              mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1546 "diet.m"
            }
#line 1546 "diet.m"
            continue;
#line 1545 "diet.m"
          }
#line 1547 "diet.m"
        else
#line 1547 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1547 "diet.m"
      }
#line 1547 "diet.m"
      break;
#line 1547 "diet.m"
    }
#line 1536 "diet.m"
}

#line 1477 "diet.m"
void MR_CALL 
mercury__diet__count_3_p_0(
#line 1477 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_20,
#line 1477 "diet.m"
  MR_Word mercury__diet__T_4,
#line 1477 "diet.m"
  MR_Integer mercury__diet__Acc0_5,
#line 1477 "diet.m"
  MR_Integer * mercury__diet__Acc_6)
#line 1477 "diet.m"
{
#line 1481 "diet.m"
  while (MR_TRUE)
#line 1481 "diet.m"
    {
#line 1481 "diet.m"
      /* tailcall optimized into a loop */
#line 1481 "diet.m"
      {
#line 1481 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1481 "diet.m"
        if ((mercury__diet__T_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1482 "diet.m"
          *mercury__diet__Acc_6 = mercury__diet__Acc0_5;
#line 1481 "diet.m"
        else
#line 1484 "diet.m"
          {
#line 1484 "diet.m"
            MR_Box mercury__diet__X_7;
#line 1484 "diet.m"
            MR_Box mercury__diet__Y_8;
#line 1484 "diet.m"
            MR_Word mercury__diet__L_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_4, (MR_Integer) 2)));
#line 1484 "diet.m"
            MR_Word mercury__diet__R_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_4, (MR_Integer) 3)));
#line 1484 "diet.m"
            MR_Integer mercury__diet__Acc1_12;
#line 1484 "diet.m"
            MR_Integer mercury__diet__Acc2_13;
#line 1484 "diet.m"
            MR_Tuple mercury__diet__V_14_14 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_4, (MR_Integer) 0)));
#line 1484 "diet.m"
            MR_Integer mercury__diet__V_15_15;
#line 1484 "diet.m"
            MR_Integer mercury__diet__V_16_16;
#line 1484 "diet.m"
            MR_Integer mercury__diet__V_17_17;
#line 1484 "diet.m"
            MR_Integer mercury__diet__V_18_18;
#line 1484 "diet.m"
            MR_Integer mercury__diet__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_4, (MR_Integer) 1)));
#line 5 "enum.int"
            MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box);
#line 5 "enum.int"
            MR_Box mercury__diet__conv1_V_17_17;
#line 5 "enum.int"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);
#line 5 "enum.int"
            MR_Box mercury__diet__conv3_V_18_18;

#line 1484 "diet.m"
            mercury__diet__X_7 = (MR_hl_field(MR_mktag(0), mercury__diet__V_14_14, (MR_Integer) 0));
#line 1484 "diet.m"
            mercury__diet__Y_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_14_14, (MR_Integer) 1));
#line 5 "enum.int"
            mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5 "enum.int"
            {
#line 5 "enum.int"
              mercury__diet__conv1_V_17_17 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_enum_20), mercury__diet__Y_8);
            }
#line 5 "enum.int"
            mercury__diet__V_17_17 = ((MR_Integer) mercury__diet__conv1_V_17_17);
#line 5 "enum.int"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5 "enum.int"
            {
#line 5 "enum.int"
              mercury__diet__conv3_V_18_18 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_enum_20), mercury__diet__X_7);
            }
#line 5 "enum.int"
            mercury__diet__V_18_18 = ((MR_Integer) mercury__diet__conv3_V_18_18);
#line 1486 "diet.m"
            mercury__diet__V_16_16 = (mercury__diet__V_17_17 - mercury__diet__V_18_18);
#line 1486 "diet.m"
            mercury__diet__V_15_15 = (mercury__diet__Acc0_5 + mercury__diet__V_16_16);
#line 1486 "diet.m"
            mercury__diet__Acc1_12 = (mercury__diet__V_15_15 + (MR_Integer) 1);
#line 1487 "diet.m"
            {
#line 1487 "diet.m"
              mercury__diet__count_3_p_0(mercury__diet__TypeClassInfo_for_enum_20, mercury__diet__L_10, mercury__diet__Acc1_12, &mercury__diet__Acc2_13);
            }
#line 1488 "diet.m"
            /* direct tailcall eliminated */
#line 1488 "diet.m"
            {
#line 1488 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_4 = mercury__diet__R_11;
#line 1488 "diet.m"
              MR_Integer mercury__diet__Acc0__tmp_copy_5 = mercury__diet__Acc2_13;

#line 1488 "diet.m"
              mercury__diet__Acc0_5 = mercury__diet__Acc0__tmp_copy_5;
#line 1488 "diet.m"
              mercury__diet__T_4 = mercury__diet__T__tmp_copy_4;
#line 1488 "diet.m"
            }
#line 1488 "diet.m"
            continue;
#line 1484 "diet.m"
          }
#line 1481 "diet.m"
      }
#line 1481 "diet.m"
      break;
#line 1481 "diet.m"
    }
#line 1477 "diet.m"
}

#line 1457 "diet.m"
void MR_CALL 
mercury__diet__divide_2_6_p_0(
#line 1457 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_17,
#line 1457 "diet.m"
  MR_Word mercury__diet__Pred_7,
#line 1457 "diet.m"
  MR_Box mercury__diet__Elem_8,
#line 1457 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_TrueSet_0_11,
#line 1457 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_TrueSet_12,
#line 1457 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_FalseSet_0_13,
#line 1457 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_FalseSet_14)
#line 1457 "diet.m"
{
#line 1462 "diet.m"
  {
#line 1462 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1460 "diet.m"
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__diet__Pred_7, (MR_Integer) 1)));

#line 1460 "diet.m"
    {
#line 1460 "diet.m"
      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__Pred_7), mercury__diet__Elem_8);
    }
#line 1462 "diet.m"
    if (mercury__diet__succeeded)
#line 1461 "diet.m"
      {
#line 845 "diet.m"
        {
#line 845 "diet.m"
          *mercury__diet__STATE_VARIABLE_TrueSet_12 = mercury__diet__add_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_17, mercury__diet__Elem_8, mercury__diet__STATE_VARIABLE_TrueSet_0_11);
        }
#line 1461 "diet.m"
        *mercury__diet__STATE_VARIABLE_FalseSet_14 = mercury__diet__STATE_VARIABLE_FalseSet_0_13;
#line 1461 "diet.m"
      }
#line 1462 "diet.m"
    else
#line 1463 "diet.m"
      {
#line 845 "diet.m"
        {
#line 845 "diet.m"
          *mercury__diet__STATE_VARIABLE_FalseSet_14 = mercury__diet__add_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_17, mercury__diet__Elem_8, mercury__diet__STATE_VARIABLE_FalseSet_0_13);
        }
#line 1463 "diet.m"
        *mercury__diet__STATE_VARIABLE_TrueSet_12 = mercury__diet__STATE_VARIABLE_TrueSet_0_11;
#line 1463 "diet.m"
      }
#line 1462 "diet.m"
  }
#line 1457 "diet.m"
}

#line 1415 "diet.m"
static void MR_CALL 
mercury__diet__diff_helper_8_p_0(
#line 1415 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_44,
#line 1415 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 1415 "diet.m"
  MR_Word mercury__diet__Right0_11,
#line 1415 "diet.m"
  MR_Word mercury__diet__Left0_12,
#line 1415 "diet.m"
  MR_Word mercury__diet__Head0_13,
#line 1415 "diet.m"
  MR_Word mercury__diet__Stream0_14,
#line 1415 "diet.m"
  MR_Word * mercury__diet__Output_15,
#line 1415 "diet.m"
  MR_Word * mercury__diet__Head_16,
#line 1415 "diet.m"
  MR_Word * mercury__diet__Stream_17)
#line 1415 "diet.m"
{
#line 1420 "diet.m"
  while (MR_TRUE)
#line 1420 "diet.m"
    {
#line 1420 "diet.m"
      /* tailcall optimized into a loop */
#line 1420 "diet.m"
      {
#line 1420 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 1420 "diet.m"
        MR_Box mercury__diet__A_9 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 0));
#line 1420 "diet.m"
        MR_Box mercury__diet__B_10 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 1));

#line 1426 "diet.m"
        if ((mercury__diet__Head0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1422 "diet.m"
          {
#line 1423 "diet.m"
            {
#line 1423 "diet.m"
              *mercury__diet__Output_15 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__HeadVar__1_1, mercury__diet__Left0_12, mercury__diet__Right0_11);
            }
#line 1424 "diet.m"
            *mercury__diet__Head_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1425 "diet.m"
            *mercury__diet__Stream_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1422 "diet.m"
          }
#line 1426 "diet.m"
        else
#line 1427 "diet.m"
          {
#line 1427 "diet.m"
            MR_Box mercury__diet__X_18;
#line 1427 "diet.m"
            MR_Box mercury__diet__Y_19;
#line 1427 "diet.m"
            MR_Tuple mercury__diet__V_24_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_13, (MR_Integer) 0)));
#line 39 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

#line 1427 "diet.m"
            mercury__diet__X_18 = (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 0));
#line 1427 "diet.m"
            mercury__diet__Y_19 = (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 1));
#line 39 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
            {
#line 39 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_44), mercury__diet__Y_19, mercury__diet__A_9);
            }
#line 1432 "diet.m"
            if (mercury__diet__succeeded)
#line 1429 "diet.m"
              {
#line 1429 "diet.m"
                MR_Word mercury__diet__Head1_20;
#line 1429 "diet.m"
                MR_Word mercury__diet__Stream1_21;

#line 671 "diet.m"
                if ((mercury__diet__Stream0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 671 "diet.m"
                  {
#line 672 "diet.m"
                    mercury__diet__Head1_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 673 "diet.m"
                    mercury__diet__Stream1_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 671 "diet.m"
                  }
#line 671 "diet.m"
                else
#line 675 "diet.m"
                  {
#line 675 "diet.m"
                    MR_Tuple mercury__diet__X_54;

#line 676 "diet.m"
                    {
#line 676 "diet.m"
                      mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__Stream0_14, &mercury__diet__X_54, &mercury__diet__Stream1_21);
                    }
#line 677 "diet.m"
                    {
#line 677 "diet.m"
                      mercury__diet__Head1_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 677 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__Head1_20, 0) = ((MR_Box) (mercury__diet__X_54));
#line 677 "diet.m"
                    }
#line 675 "diet.m"
                  }
#line 1430 "diet.m"
                /* direct tailcall eliminated */
#line 1430 "diet.m"
                {
#line 1430 "diet.m"
                  MR_Word mercury__diet__Head0__tmp_copy_13 = mercury__diet__Head1_20;
#line 1430 "diet.m"
                  MR_Word mercury__diet__Stream0__tmp_copy_14 = mercury__diet__Stream1_21;

#line 1430 "diet.m"
                  mercury__diet__Stream0_14 = mercury__diet__Stream0__tmp_copy_14;
#line 1430 "diet.m"
                  mercury__diet__Head0_13 = mercury__diet__Head0__tmp_copy_13;
#line 1430 "diet.m"
                }
#line 1430 "diet.m"
                continue;
#line 1429 "diet.m"
              }
#line 1432 "diet.m"
            else
#line 1435 "diet.m"
              {
#line 39 "diet.m"
                MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
                {
#line 39 "diet.m"
                  mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_44), mercury__diet__B_10, mercury__diet__X_18);
                }
#line 1435 "diet.m"
                if (mercury__diet__succeeded)
#line 1433 "diet.m"
                  {
#line 1433 "diet.m"
                    MR_Word mercury__diet__Right1_22;

#line 1433 "diet.m"
                    {
#line 1433 "diet.m"
                      mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__Right0_11, mercury__diet__Head0_13, mercury__diet__Stream0_14, &mercury__diet__Right1_22, mercury__diet__Head_16, mercury__diet__Stream_17);
                    }
#line 1434 "diet.m"
                    {
#line 1434 "diet.m"
                      *mercury__diet__Output_15 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__HeadVar__1_1, mercury__diet__Left0_12, mercury__diet__Right1_22);
                    }
#line 1433 "diet.m"
                  }
#line 1435 "diet.m"
                else
#line 1439 "diet.m"
                  {
#line 39 "diet.m"
                    MR_bool MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
                    {
#line 39 "diet.m"
                      mercury__diet__succeeded = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_44), mercury__diet__A_9, mercury__diet__X_18);
                    }
#line 1439 "diet.m"
                    if (mercury__diet__succeeded)
#line 1436 "diet.m"
                      {
#line 1436 "diet.m"
                        MR_Word mercury__diet__Left1_23;
#line 1436 "diet.m"
                        MR_Tuple mercury__diet__V_27_27;
#line 1436 "diet.m"
                        MR_Box mercury__diet__V_28_28;
#line 1436 "diet.m"
                        MR_Tuple mercury__diet__V_29_29;
#line 45 "diet.m"
                        MR_Box MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 7)));

#line 45 "diet.m"
                        {
#line 45 "diet.m"
                          mercury__diet__V_28_28 = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_44), mercury__diet__X_18);
                        }
#line 1436 "diet.m"
                        {
#line 1436 "diet.m"
                          mercury__diet__V_27_27 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1436 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, 0) = mercury__diet__A_9;
#line 1436 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, 1) = mercury__diet__V_28_28;
#line 1436 "diet.m"
                        }
#line 1436 "diet.m"
                        {
#line 1436 "diet.m"
                          mercury__diet__Left1_23 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__V_27_27, mercury__diet__Left0_12);
                        }
#line 1437 "diet.m"
                        {
#line 1437 "diet.m"
                          mercury__diet__V_29_29 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1437 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_29_29, 0) = mercury__diet__X_18;
#line 1437 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_29_29, 1) = mercury__diet__B_10;
#line 1437 "diet.m"
                        }
#line 1437 "diet.m"
                        /* direct tailcall eliminated */
#line 1437 "diet.m"
                        {
#line 1437 "diet.m"
                          MR_Tuple mercury__diet__HeadVar__1__tmp_copy_1 = mercury__diet__V_29_29;
#line 1437 "diet.m"
                          MR_Word mercury__diet__Left0__tmp_copy_12 = mercury__diet__Left1_23;

#line 1437 "diet.m"
                          mercury__diet__Left0_12 = mercury__diet__Left0__tmp_copy_12;
#line 1437 "diet.m"
                          mercury__diet__HeadVar__1_1 = mercury__diet__HeadVar__1__tmp_copy_1;
#line 1437 "diet.m"
                        }
#line 1437 "diet.m"
                        continue;
#line 1436 "diet.m"
                      }
#line 1439 "diet.m"
                    else
#line 1443 "diet.m"
                      {
#line 39 "diet.m"
                        MR_bool MR_CALL (* mercury__diet__func_4)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
                        {
#line 39 "diet.m"
                          mercury__diet__succeeded = mercury__diet__func_4(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_44), mercury__diet__Y_19, mercury__diet__B_10);
                        }
#line 1443 "diet.m"
                        if (mercury__diet__succeeded)
#line 1440 "diet.m"
                          {
#line 1440 "diet.m"
                            MR_Tuple mercury__diet__V_30_30;
#line 1440 "diet.m"
                            MR_Box mercury__diet__V_31_31;
#line 1440 "diet.m"
                            MR_Word mercury__diet__Head1_33;
#line 1440 "diet.m"
                            MR_Word mercury__diet__Stream1_34;
#line 42 "diet.m"
                            MR_Box MR_CALL (* mercury__diet__func_5)(MR_Box, MR_Box);

#line 671 "diet.m"
                            if ((mercury__diet__Stream0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 671 "diet.m"
                              {
#line 672 "diet.m"
                                mercury__diet__Head1_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 673 "diet.m"
                                mercury__diet__Stream1_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 671 "diet.m"
                              }
#line 671 "diet.m"
                            else
#line 675 "diet.m"
                              {
#line 675 "diet.m"
                                MR_Tuple mercury__diet__X_68;

#line 676 "diet.m"
                                {
#line 676 "diet.m"
                                  mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__Stream0_14, &mercury__diet__X_68, &mercury__diet__Stream1_34);
                                }
#line 677 "diet.m"
                                {
#line 677 "diet.m"
                                  mercury__diet__Head1_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 677 "diet.m"
                                  MR_hl_field(MR_mktag(1), mercury__diet__Head1_33, 0) = ((MR_Box) (mercury__diet__X_68));
#line 677 "diet.m"
                                }
#line 675 "diet.m"
                              }
#line 42 "diet.m"
                            mercury__diet__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                            {
#line 42 "diet.m"
                              mercury__diet__V_31_31 = mercury__diet__func_5(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_44), mercury__diet__Y_19);
                            }
#line 1441 "diet.m"
                            {
#line 1441 "diet.m"
                              mercury__diet__V_30_30 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1441 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, 0) = mercury__diet__V_31_31;
#line 1441 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, 1) = mercury__diet__B_10;
#line 1441 "diet.m"
                            }
#line 1441 "diet.m"
                            /* direct tailcall eliminated */
#line 1441 "diet.m"
                            {
#line 1441 "diet.m"
                              MR_Tuple mercury__diet__HeadVar__1__tmp_copy_1 = mercury__diet__V_30_30;
#line 1441 "diet.m"
                              MR_Word mercury__diet__Head0__tmp_copy_13 = mercury__diet__Head1_33;
#line 1441 "diet.m"
                              MR_Word mercury__diet__Stream0__tmp_copy_14 = mercury__diet__Stream1_34;

#line 1441 "diet.m"
                              mercury__diet__Stream0_14 = mercury__diet__Stream0__tmp_copy_14;
#line 1441 "diet.m"
                              mercury__diet__Head0_13 = mercury__diet__Head0__tmp_copy_13;
#line 1441 "diet.m"
                              mercury__diet__HeadVar__1_1 = mercury__diet__HeadVar__1__tmp_copy_1;
#line 1441 "diet.m"
                            }
#line 1441 "diet.m"
                            continue;
#line 1440 "diet.m"
                          }
#line 1443 "diet.m"
                        else
#line 1444 "diet.m"
                          {
#line 1444 "diet.m"
                            MR_Word mercury__diet__Right1_35;

#line 1444 "diet.m"
                            {
#line 1444 "diet.m"
                              mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__Right0_11, mercury__diet__Head0_13, mercury__diet__Stream0_14, &mercury__diet__Right1_35, mercury__diet__Head_16, mercury__diet__Stream_17);
                            }
#line 1445 "diet.m"
                            {
#line 1445 "diet.m"
                              *mercury__diet__Output_15 = mercury__diet__reroot_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__Left0_12, mercury__diet__Right1_35);
                            }
#line 1444 "diet.m"
                          }
#line 1443 "diet.m"
                      }
#line 1439 "diet.m"
                  }
#line 1435 "diet.m"
              }
#line 1427 "diet.m"
          }
#line 1420 "diet.m"
      }
#line 1420 "diet.m"
      break;
#line 1420 "diet.m"
    }
#line 1415 "diet.m"
}

#line 1385 "diet.m"
static void MR_CALL 
mercury__diet__diff_6_p_0(
#line 1385 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
#line 1385 "diet.m"
  MR_Word mercury__diet__Input_7,
#line 1385 "diet.m"
  MR_Word mercury__diet__Head0_8,
#line 1385 "diet.m"
  MR_Word mercury__diet__Stream0_9,
#line 1385 "diet.m"
  MR_Word * mercury__diet__Output_10,
#line 1385 "diet.m"
  MR_Word * mercury__diet__Head_11,
#line 1385 "diet.m"
  MR_Word * mercury__diet__Stream_12)
#line 1385 "diet.m"
{
#line 1391 "diet.m"
  {
#line 1391 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1391 "diet.m"
    if ((mercury__diet__Head0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1391 "diet.m"
      {
#line 1392 "diet.m"
        *mercury__diet__Output_10 = mercury__diet__Input_7;
#line 1393 "diet.m"
        *mercury__diet__Head_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1394 "diet.m"
        *mercury__diet__Stream_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1391 "diet.m"
      }
#line 1391 "diet.m"
    else
#line 1391 "diet.m"
      {
#line 1391 "diet.m"
        MR_Tuple mercury__diet__V_28_28 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_8, (MR_Integer) 0)));

#line 1391 "diet.m"
        if ((mercury__diet__Input_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1396 "diet.m"
          {
#line 1398 "diet.m"
            *mercury__diet__Output_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1399 "diet.m"
            *mercury__diet__Head_11 = mercury__diet__Head0_8;
#line 1400 "diet.m"
            *mercury__diet__Stream_12 = mercury__diet__Stream0_9;
#line 1396 "diet.m"
          }
#line 1391 "diet.m"
        else
#line 1402 "diet.m"
          {
#line 1402 "diet.m"
            MR_Box mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, (MR_Integer) 0));
#line 1402 "diet.m"
            MR_Box mercury__diet__A_16;
#line 1402 "diet.m"
            MR_Word mercury__diet__Left0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 2)));
#line 1402 "diet.m"
            MR_Word mercury__diet__Right0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 3)));
#line 1402 "diet.m"
            MR_Word mercury__diet__Left1_21;
#line 1402 "diet.m"
            MR_Word mercury__diet__Head1_22;
#line 1402 "diet.m"
            MR_Word mercury__diet__Stream1_23;
#line 1402 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 0)));
#line 1402 "diet.m"
            MR_Box mercury__diet___Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, (MR_Integer) 1));
#line 1403 "diet.m"
            MR_Integer mercury__diet__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 1)));
#line 1403 "diet.m"
            MR_Box mercury__diet__B_17;
#line 39 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

#line 1403 "diet.m"
            mercury__diet__A_16 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0));
#line 1403 "diet.m"
            mercury__diet__B_17 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1));
#line 39 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
            {
#line 39 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_27), mercury__diet__X_14, mercury__diet__A_16);
            }
#line 1406 "diet.m"
            if (mercury__diet__succeeded)
#line 1405 "diet.m"
              {
#line 1405 "diet.m"
                mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__Left0_19, mercury__diet__Head0_8, mercury__diet__Stream0_9, &mercury__diet__Left1_21, &mercury__diet__Head1_22, &mercury__diet__Stream1_23);
              }
#line 1406 "diet.m"
            else
#line 1407 "diet.m"
              {
#line 1407 "diet.m"
                mercury__diet__Left1_21 = mercury__diet__Left0_19;
#line 1408 "diet.m"
                mercury__diet__Head1_22 = mercury__diet__Head0_8;
#line 1409 "diet.m"
                mercury__diet__Stream1_23 = mercury__diet__Stream0_9;
#line 1407 "diet.m"
              }
#line 1411 "diet.m"
            {
#line 1411 "diet.m"
              mercury__diet__diff_helper_8_p_0(mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__V_25_25, mercury__diet__Right0_20, mercury__diet__Left1_21, mercury__diet__Head1_22, mercury__diet__Stream1_23, mercury__diet__Output_10, mercury__diet__Head_11, mercury__diet__Stream_12);
            }
#line 1402 "diet.m"
          }
#line 1391 "diet.m"
      }
#line 1391 "diet.m"
  }
#line 1385 "diet.m"
}

#line 1314 "diet.m"
static void MR_CALL 
mercury__diet__inter_help_8_p_0(
#line 1314 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_49,
#line 1314 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 1314 "diet.m"
  MR_Word mercury__diet__Right0_11,
#line 1314 "diet.m"
  MR_Word mercury__diet__Left0_12,
#line 1314 "diet.m"
  MR_Word mercury__diet__Head0_13,
#line 1314 "diet.m"
  MR_Word mercury__diet__Stream0_14,
#line 1314 "diet.m"
  MR_Word * mercury__diet__Result_15,
#line 1314 "diet.m"
  MR_Word * mercury__diet__Head_16,
#line 1314 "diet.m"
  MR_Word * mercury__diet__Stream_17)
#line 1314 "diet.m"
{
#line 1319 "diet.m"
  while (MR_TRUE)
#line 1319 "diet.m"
    {
#line 1319 "diet.m"
      /* tailcall optimized into a loop */
#line 1319 "diet.m"
      {
#line 1319 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 1319 "diet.m"
        MR_Box mercury__diet__A_9 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 0));
#line 1319 "diet.m"
        MR_Box mercury__diet__B_10 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 1));

#line 1325 "diet.m"
        if ((mercury__diet__Head0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1321 "diet.m"
          {
#line 1322 "diet.m"
            *mercury__diet__Result_15 = mercury__diet__Left0_12;
#line 1323 "diet.m"
            *mercury__diet__Head_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1324 "diet.m"
            *mercury__diet__Stream_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1321 "diet.m"
          }
#line 1325 "diet.m"
        else
#line 1326 "diet.m"
          {
#line 1326 "diet.m"
            MR_Box mercury__diet__X_18;
#line 1326 "diet.m"
            MR_Box mercury__diet__Y_19;
#line 1326 "diet.m"
            MR_Tuple mercury__diet__V_28_28 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_13, (MR_Integer) 0)));
#line 39 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

#line 1326 "diet.m"
            mercury__diet__X_18 = (MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, (MR_Integer) 0));
#line 1326 "diet.m"
            mercury__diet__Y_19 = (MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, (MR_Integer) 1));
#line 39 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
            {
#line 39 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__Y_19, mercury__diet__A_9);
            }
#line 1339 "diet.m"
            if (mercury__diet__succeeded)
#line 1333 "diet.m"
              if ((mercury__diet__Stream0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1329 "diet.m"
                {
#line 1330 "diet.m"
                  *mercury__diet__Result_15 = mercury__diet__Left0_12;
#line 1331 "diet.m"
                  *mercury__diet__Head_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1332 "diet.m"
                  *mercury__diet__Stream_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1329 "diet.m"
                }
#line 1333 "diet.m"
              else
#line 1334 "diet.m"
                {
#line 1334 "diet.m"
                  MR_Tuple mercury__diet__Head1_24;
#line 1334 "diet.m"
                  MR_Word mercury__diet__Stream1_25;
#line 1334 "diet.m"
                  MR_Word mercury__diet__V_30_30;

#line 1335 "diet.m"
                  {
#line 1335 "diet.m"
                    mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__Stream0_14, &mercury__diet__Head1_24, &mercury__diet__Stream1_25);
                  }
#line 1336 "diet.m"
                  {
#line 1336 "diet.m"
                    mercury__diet__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "diet.m"
                    MR_hl_field(MR_mktag(1), mercury__diet__V_30_30, 0) = ((MR_Box) (mercury__diet__Head1_24));
#line 1336 "diet.m"
                  }
#line 1336 "diet.m"
                  /* direct tailcall eliminated */
#line 1336 "diet.m"
                  {
#line 1336 "diet.m"
                    MR_Word mercury__diet__Head0__tmp_copy_13 = mercury__diet__V_30_30;
#line 1336 "diet.m"
                    MR_Word mercury__diet__Stream0__tmp_copy_14 = mercury__diet__Stream1_25;

#line 1336 "diet.m"
                    mercury__diet__Stream0_14 = mercury__diet__Stream0__tmp_copy_14;
#line 1336 "diet.m"
                    mercury__diet__Head0_13 = mercury__diet__Head0__tmp_copy_13;
#line 1336 "diet.m"
                  }
#line 1336 "diet.m"
                  continue;
#line 1334 "diet.m"
                }
#line 1339 "diet.m"
            else
#line 1344 "diet.m"
              {
#line 39 "diet.m"
                MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
                {
#line 39 "diet.m"
                  mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__B_10, mercury__diet__X_18);
                }
#line 1344 "diet.m"
                if (mercury__diet__succeeded)
#line 1340 "diet.m"
                  {
#line 1340 "diet.m"
                    MR_Word mercury__diet__Right1_26;
#line 635 "diet.m"
                    MR_Integer mercury__diet__V_68_68;
#line 635 "diet.m"
                    MR_Integer mercury__diet__V_69_69;
#line 134 "private_builtin.opt"
                    MR_Word mercury__diet__TypeInfo_27_76;
#line 134 "private_builtin.opt"
                    MR_Word mercury__diet__TypeInfo_28_77;

#line 1340 "diet.m"
                    {
#line 1340 "diet.m"
                      mercury__diet__inter_2_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__Right0_11, mercury__diet__Head0_13, mercury__diet__Stream0_14, &mercury__diet__Right1_26, mercury__diet__Head_16, mercury__diet__Stream_17);
                    }
#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__inter_help_8_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_49 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9275 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_27_76  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 512 "diet.m"
                    if ((mercury__diet__Left0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
                      mercury__diet__V_68_68 = (MR_Integer) 0;
#line 512 "diet.m"
                    else
#line 513 "diet.m"
                      {
#line 513 "diet.m"
                        MR_Tuple mercury__diet__V_78_78 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Left0_12, (MR_Integer) 0)));
#line 513 "diet.m"
                        MR_Word mercury__diet__V_80_80;
#line 513 "diet.m"
                        MR_Word mercury__diet__V_81_81;

#line 513 "diet.m"
                        mercury__diet__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Left0_12, (MR_Integer) 1)));
#line 513 "diet.m"
                        mercury__diet__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Left0_12, (MR_Integer) 2)));
#line 513 "diet.m"
                        mercury__diet__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Left0_12, (MR_Integer) 3)));
#line 513 "diet.m"
                      }
#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__inter_help_8_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_49 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9320 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_28_77  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 512 "diet.m"
                    if ((mercury__diet__Right1_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
                      mercury__diet__V_69_69 = (MR_Integer) 0;
#line 512 "diet.m"
                    else
#line 513 "diet.m"
                      {
#line 513 "diet.m"
                        MR_Tuple mercury__diet__V_82_82 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Right1_26, (MR_Integer) 0)));
#line 513 "diet.m"
                        MR_Word mercury__diet__V_84_84;
#line 513 "diet.m"
                        MR_Word mercury__diet__V_85_85;

#line 513 "diet.m"
                        mercury__diet__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Right1_26, (MR_Integer) 1)));
#line 513 "diet.m"
                        mercury__diet__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Right1_26, (MR_Integer) 2)));
#line 513 "diet.m"
                        mercury__diet__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Right1_26, (MR_Integer) 3)));
#line 513 "diet.m"
                      }
#line 493 "diet.m"
                    mercury__diet__succeeded = (mercury__diet__V_68_68 > mercury__diet__V_69_69);
#line 644 "diet.m"
                    if (mercury__diet__succeeded)
#line 639 "diet.m"
                      if ((mercury__diet__Left0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 637 "diet.m"
                        {
#line 638 "diet.m"
                          {
#line 638 "diet.m"
                            mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.reroot\'/2", (MR_String) "L empty");
#line 638 "diet.m"
                            return;
                          }
#line 637 "diet.m"
                        }
#line 639 "diet.m"
                      else
#line 640 "diet.m"
                        {
#line 640 "diet.m"
                          MR_Tuple mercury__diet__I_61;
#line 640 "diet.m"
                          MR_Word mercury__diet__L1_62;

#line 641 "diet.m"
                          {
#line 641 "diet.m"
                            mercury__diet__take_max_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__Left0_12, &mercury__diet__I_61, &mercury__diet__L1_62);
                          }
#line 642 "diet.m"
                          {
#line 642 "diet.m"
                            *mercury__diet__Result_15 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__I_61, mercury__diet__L1_62, mercury__diet__Right1_26);
                          }
#line 640 "diet.m"
                        }
#line 644 "diet.m"
                    else
#line 647 "diet.m"
                    if ((mercury__diet__Right1_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 646 "diet.m"
                      *mercury__diet__Result_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 647 "diet.m"
                    else
#line 648 "diet.m"
                      {
#line 648 "diet.m"
                        MR_Word mercury__diet__R1_67;
#line 648 "diet.m"
                        MR_Tuple mercury__diet__I_73;

#line 649 "diet.m"
                        {
#line 649 "diet.m"
                          mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__Right1_26, &mercury__diet__I_73, &mercury__diet__R1_67);
                        }
#line 650 "diet.m"
                        {
#line 650 "diet.m"
                          *mercury__diet__Result_15 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__I_73, mercury__diet__Left0_12, mercury__diet__R1_67);
                        }
#line 648 "diet.m"
                      }
#line 1340 "diet.m"
                  }
#line 1344 "diet.m"
                else
#line 1349 "diet.m"
                  {
#line 1344 "diet.m"
                    MR_Box mercury__diet__V_31_31;
#line 39 "diet.m"
                    MR_bool MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
                    MR_bool MR_CALL (* mercury__diet__func_4)(MR_Box, MR_Box, MR_Box);

#line 39 "diet.m"
                    {
#line 39 "diet.m"
                      mercury__diet__succeeded = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__Y_19, mercury__diet__B_10);
                    }
#line 455 "diet.m"
                    if (mercury__diet__succeeded)
#line 45 "diet.m"
                      {
#line 45 "diet.m"
                        MR_Box MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 7)));

#line 45 "diet.m"
                        {
#line 45 "diet.m"
                          mercury__diet__V_31_31 = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__B_10);
                        }
#line 45 "diet.m"
                      }
#line 455 "diet.m"
                    else
#line 456 "diet.m"
                      mercury__diet__V_31_31 = mercury__diet__B_10;
#line 39 "diet.m"
                    mercury__diet__func_4 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
                    {
#line 39 "diet.m"
                      mercury__diet__succeeded = mercury__diet__func_4(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__Y_19, mercury__diet__V_31_31);
                    }
#line 474 "diet.m"
                    mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1349 "diet.m"
                    if (mercury__diet__succeeded)
#line 1345 "diet.m"
                      {
#line 1345 "diet.m"
                        MR_Tuple mercury__diet__V_32_32;
#line 1345 "diet.m"
                        MR_Box mercury__diet__V_33_33;
#line 1345 "diet.m"
                        MR_Box mercury__diet__V_34_34;
#line 1345 "diet.m"
                        MR_Word mercury__diet__Right1_43;
#line 39 "diet.m"
                        MR_bool MR_CALL (* mercury__diet__func_5)(MR_Box, MR_Box, MR_Box);

#line 1345 "diet.m"
                        {
#line 1345 "diet.m"
                          mercury__diet__inter_2_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__Right0_11, mercury__diet__Head0_13, mercury__diet__Stream0_14, &mercury__diet__Right1_43, mercury__diet__Head_16, mercury__diet__Stream_17);
                        }
#line 39 "diet.m"
                        mercury__diet__func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
                        {
#line 39 "diet.m"
                          mercury__diet__succeeded = mercury__diet__func_5(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__A_9, mercury__diet__X_18);
                        }
#line 488 "diet.m"
                        if (mercury__diet__succeeded)
#line 488 "diet.m"
                          mercury__diet__V_33_33 = mercury__diet__X_18;
#line 488 "diet.m"
                        else
#line 488 "diet.m"
                          mercury__diet__V_33_33 = mercury__diet__A_9;
#line 1346 "diet.m"
                        {
#line 1346 "diet.m"
                          mercury__diet__V_34_34 = mercury__diet__min_elem_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__Y_19, mercury__diet__B_10);
                        }
#line 1346 "diet.m"
                        {
#line 1346 "diet.m"
                          mercury__diet__V_32_32 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1346 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_32_32, 0) = mercury__diet__V_33_33;
#line 1346 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_32_32, 1) = mercury__diet__V_34_34;
#line 1346 "diet.m"
                        }
#line 1346 "diet.m"
                        {
#line 1346 "diet.m"
                          *mercury__diet__Result_15 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__V_32_32, mercury__diet__Left0_12, mercury__diet__Right1_43);
                        }
#line 1345 "diet.m"
                      }
#line 1349 "diet.m"
                    else
#line 1350 "diet.m"
                      {
#line 1350 "diet.m"
                        MR_Word mercury__diet__Left1_27;
#line 1350 "diet.m"
                        MR_Tuple mercury__diet__V_35_35;
#line 1350 "diet.m"
                        MR_Box mercury__diet__V_36_36;
#line 1350 "diet.m"
                        MR_Tuple mercury__diet__V_37_37;
#line 1350 "diet.m"
                        MR_Box mercury__diet__V_38_38;
#line 42 "diet.m"
                        MR_Box MR_CALL (* mercury__diet__func_6)(MR_Box, MR_Box);

#line 1350 "diet.m"
                        {
#line 1350 "diet.m"
                          mercury__diet__V_36_36 = mercury__diet__max_elem_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__X_18, mercury__diet__A_9);
                        }
#line 1350 "diet.m"
                        {
#line 1350 "diet.m"
                          mercury__diet__V_35_35 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1350 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, 0) = mercury__diet__V_36_36;
#line 1350 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, 1) = mercury__diet__Y_19;
#line 1350 "diet.m"
                        }
#line 1350 "diet.m"
                        {
#line 1350 "diet.m"
                          mercury__diet__Left1_27 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__V_35_35, mercury__diet__Left0_12);
                        }
#line 42 "diet.m"
                        mercury__diet__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                        {
#line 42 "diet.m"
                          mercury__diet__V_38_38 = mercury__diet__func_6(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__Y_19);
                        }
#line 1351 "diet.m"
                        {
#line 1351 "diet.m"
                          mercury__diet__V_37_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1351 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_37_37, 0) = mercury__diet__V_38_38;
#line 1351 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_37_37, 1) = mercury__diet__B_10;
#line 1351 "diet.m"
                        }
#line 1351 "diet.m"
                        /* direct tailcall eliminated */
#line 1351 "diet.m"
                        {
#line 1351 "diet.m"
                          MR_Tuple mercury__diet__HeadVar__1__tmp_copy_1 = mercury__diet__V_37_37;
#line 1351 "diet.m"
                          MR_Word mercury__diet__Left0__tmp_copy_12 = mercury__diet__Left1_27;

#line 1351 "diet.m"
                          mercury__diet__Left0_12 = mercury__diet__Left0__tmp_copy_12;
#line 1351 "diet.m"
                          mercury__diet__HeadVar__1_1 = mercury__diet__HeadVar__1__tmp_copy_1;
#line 1351 "diet.m"
                        }
#line 1351 "diet.m"
                        continue;
#line 1350 "diet.m"
                      }
#line 1349 "diet.m"
                  }
#line 1344 "diet.m"
              }
#line 1326 "diet.m"
          }
#line 1319 "diet.m"
      }
#line 1319 "diet.m"
      break;
#line 1319 "diet.m"
    }
#line 1314 "diet.m"
}

#line 1284 "diet.m"
static void MR_CALL 
mercury__diet__inter_2_6_p_0(
#line 1284 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_26,
#line 1284 "diet.m"
  MR_Word mercury__diet__Input_7,
#line 1284 "diet.m"
  MR_Word mercury__diet__Head0_8,
#line 1284 "diet.m"
  MR_Word mercury__diet__Stream0_9,
#line 1284 "diet.m"
  MR_Word * mercury__diet__Result_10,
#line 1284 "diet.m"
  MR_Word * mercury__diet__Head_11,
#line 1284 "diet.m"
  MR_Word * mercury__diet__Stream_12)
#line 1284 "diet.m"
{
#line 1289 "diet.m"
  {
#line 1289 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1289 "diet.m"
    if ((mercury__diet__Head0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1289 "diet.m"
      {
#line 1290 "diet.m"
        *mercury__diet__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1291 "diet.m"
        *mercury__diet__Head_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1292 "diet.m"
        *mercury__diet__Stream_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1289 "diet.m"
      }
#line 1289 "diet.m"
    else
#line 1294 "diet.m"
      {
#line 1294 "diet.m"
        MR_Box mercury__diet__X_13;
#line 1294 "diet.m"
        MR_Tuple mercury__diet__V_23_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_8, (MR_Integer) 0)));
#line 1294 "diet.m"
        MR_Box mercury__diet___Y_14;

#line 1294 "diet.m"
        mercury__diet__X_13 = (MR_hl_field(MR_mktag(0), mercury__diet__V_23_23, (MR_Integer) 0));
#line 1294 "diet.m"
        mercury__diet___Y_14 = (MR_hl_field(MR_mktag(0), mercury__diet__V_23_23, (MR_Integer) 1));
#line 1300 "diet.m"
        if ((mercury__diet__Input_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1296 "diet.m"
          {
#line 1297 "diet.m"
            *mercury__diet__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1298 "diet.m"
            *mercury__diet__Head_11 = mercury__diet__Head0_8;
#line 1299 "diet.m"
            *mercury__diet__Stream_12 = mercury__diet__Stream0_9;
#line 1296 "diet.m"
          }
#line 1300 "diet.m"
        else
#line 1301 "diet.m"
          {
#line 1301 "diet.m"
            MR_Box mercury__diet__A_15;
#line 1301 "diet.m"
            MR_Word mercury__diet__Left0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 2)));
#line 1301 "diet.m"
            MR_Word mercury__diet__Right0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 3)));
#line 1301 "diet.m"
            MR_Word mercury__diet__Left1_20;
#line 1301 "diet.m"
            MR_Word mercury__diet__Head1_21;
#line 1301 "diet.m"
            MR_Word mercury__diet__Stream1_22;
#line 1301 "diet.m"
            MR_Tuple mercury__diet__V_24_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 0)));
#line 1301 "diet.m"
            MR_Integer mercury__diet__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 1)));
#line 1301 "diet.m"
            MR_Box mercury__diet__B_16;
#line 39 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

#line 1301 "diet.m"
            mercury__diet__A_15 = (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 0));
#line 1301 "diet.m"
            mercury__diet__B_16 = (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 1));
#line 39 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
            {
#line 39 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__X_13, mercury__diet__A_15);
            }
#line 1304 "diet.m"
            if (mercury__diet__succeeded)
#line 1303 "diet.m"
              {
#line 1303 "diet.m"
                mercury__diet__inter_2_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__Left0_18, mercury__diet__Head0_8, mercury__diet__Stream0_9, &mercury__diet__Left1_20, &mercury__diet__Head1_21, &mercury__diet__Stream1_22);
              }
#line 1304 "diet.m"
            else
#line 1305 "diet.m"
              {
#line 1305 "diet.m"
                mercury__diet__Left1_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1306 "diet.m"
                mercury__diet__Head1_21 = mercury__diet__Head0_8;
#line 1307 "diet.m"
                mercury__diet__Stream1_22 = mercury__diet__Stream0_9;
#line 1305 "diet.m"
              }
#line 1309 "diet.m"
            {
#line 1309 "diet.m"
              mercury__diet__inter_help_8_p_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__V_24_24, mercury__diet__Right0_19, mercury__diet__Left1_20, mercury__diet__Head1_21, mercury__diet__Stream1_22, mercury__diet__Result_10, mercury__diet__Head_11, mercury__diet__Stream_12);
            }
#line 1301 "diet.m"
          }
#line 1294 "diet.m"
      }
#line 1289 "diet.m"
  }
#line 1284 "diet.m"
}

#line 1270 "diet.m"
MR_Word MR_CALL 
mercury__diet__inter_2_f_0(
#line 1270 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_18,
#line 1270 "diet.m"
  MR_Word mercury__diet__Input_4,
#line 1270 "diet.m"
  MR_Word mercury__diet__Stream0_5)
#line 1270 "diet.m"
{
#line 1275 "diet.m"
  while (MR_TRUE)
#line 1275 "diet.m"
    {
#line 1275 "diet.m"
      /* tailcall optimized into a loop */
#line 1275 "diet.m"
      {
#line 1275 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 1275 "diet.m"
        MR_Word mercury__diet__Result_6;
#line 1273 "diet.m"
        MR_Integer mercury__diet__V_15_15;
#line 1273 "diet.m"
        MR_Integer mercury__diet__V_16_16;
#line 134 "private_builtin.opt"
        MR_Word mercury__diet__TypeInfo_20_20;
#line 134 "private_builtin.opt"
        MR_Word mercury__diet__TypeInfo_21_21;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__inter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_18 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9784 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_20_20  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 512 "diet.m"
        if ((mercury__diet__Stream0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
          mercury__diet__V_15_15 = (MR_Integer) 0;
#line 512 "diet.m"
        else
#line 513 "diet.m"
          {
#line 513 "diet.m"
            MR_Tuple mercury__diet__V_22_22 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 0)));
#line 513 "diet.m"
            MR_Word mercury__diet__V_24_24;
#line 513 "diet.m"
            MR_Word mercury__diet__V_25_25;

#line 513 "diet.m"
            mercury__diet__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 1)));
#line 513 "diet.m"
            mercury__diet__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 2)));
#line 513 "diet.m"
            mercury__diet__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 3)));
#line 513 "diet.m"
          }
#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__inter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_18 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9829 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_21_21  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 512 "diet.m"
        if ((mercury__diet__Input_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
          mercury__diet__V_16_16 = (MR_Integer) 0;
#line 512 "diet.m"
        else
#line 513 "diet.m"
          {
#line 513 "diet.m"
            MR_Tuple mercury__diet__V_26_26 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 0)));
#line 513 "diet.m"
            MR_Word mercury__diet__V_28_28;
#line 513 "diet.m"
            MR_Word mercury__diet__V_29_29;

#line 513 "diet.m"
            mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 1)));
#line 513 "diet.m"
            mercury__diet__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 2)));
#line 513 "diet.m"
            mercury__diet__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 3)));
#line 513 "diet.m"
          }
#line 493 "diet.m"
        mercury__diet__succeeded = (mercury__diet__V_15_15 > mercury__diet__V_16_16);
#line 1275 "diet.m"
        if (mercury__diet__succeeded)
#line 1274 "diet.m"
          {
#line 1274 "diet.m"
            /* direct tailcall eliminated */
#line 1274 "diet.m"
            {
#line 1274 "diet.m"
              MR_Word mercury__diet__Input__tmp_copy_4 = mercury__diet__Stream0_5;
#line 1274 "diet.m"
              MR_Word mercury__diet__Stream0__tmp_copy_5 = mercury__diet__Input_4;

#line 1274 "diet.m"
              mercury__diet__Stream0_5 = mercury__diet__Stream0__tmp_copy_5;
#line 1274 "diet.m"
              mercury__diet__Input_4 = mercury__diet__Input__tmp_copy_4;
#line 1274 "diet.m"
            }
#line 1274 "diet.m"
            continue;
#line 1274 "diet.m"
          }
#line 1275 "diet.m"
        else
#line 1278 "diet.m"
        if ((mercury__diet__Stream0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1277 "diet.m"
          mercury__diet__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1278 "diet.m"
        else
#line 1279 "diet.m"
          {
#line 1279 "diet.m"
            MR_Tuple mercury__diet__Head_11;
#line 1279 "diet.m"
            MR_Word mercury__diet__Stream_12;
#line 1279 "diet.m"
            MR_Word mercury__diet__V_17_17;
#line 1281 "diet.m"
            MR_Word mercury__diet__V_13_13;
#line 1281 "diet.m"
            MR_Word mercury__diet__V_14_14;

#line 1280 "diet.m"
            {
#line 1280 "diet.m"
              mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__Stream0_5, &mercury__diet__Head_11, &mercury__diet__Stream_12);
            }
#line 1281 "diet.m"
            {
#line 1281 "diet.m"
              mercury__diet__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__V_17_17, 0) = ((MR_Box) (mercury__diet__Head_11));
#line 1281 "diet.m"
            }
#line 1281 "diet.m"
            {
#line 1281 "diet.m"
              mercury__diet__inter_2_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__Input_4, mercury__diet__V_17_17, mercury__diet__Stream_12, &mercury__diet__Result_6, &mercury__diet__V_13_13, &mercury__diet__V_14_14);
            }
#line 1279 "diet.m"
          }
#line 1275 "diet.m"
        return mercury__diet__Result_6;
#line 1275 "diet.m"
      }
#line 1275 "diet.m"
      break;
#line 1275 "diet.m"
    }
#line 1270 "diet.m"
}

#line 1198 "diet.m"
static void MR_CALL 
mercury__diet__union_helper_9_p_0(
#line 1198 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_56,
#line 1198 "diet.m"
  MR_Word mercury__diet__Left0_10,
#line 1198 "diet.m"
  MR_Tuple mercury__diet__HeadVar__2_2,
#line 1198 "diet.m"
  MR_Word mercury__diet__Right0_13,
#line 1198 "diet.m"
  MR_Word mercury__diet__Limit_14,
#line 1198 "diet.m"
  MR_Word mercury__diet__Head0_15,
#line 1198 "diet.m"
  MR_Word mercury__diet__Stream0_16,
#line 1198 "diet.m"
  MR_Word * mercury__diet__Left_17,
#line 1198 "diet.m"
  MR_Word * mercury__diet__Head_18,
#line 1198 "diet.m"
  MR_Word * mercury__diet__Stream_19)
#line 1198 "diet.m"
{
#line 1203 "diet.m"
  while (MR_TRUE)
#line 1203 "diet.m"
    {
#line 1203 "diet.m"
      /* tailcall optimized into a loop */
#line 1203 "diet.m"
      {
#line 1203 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 1203 "diet.m"
        MR_Box mercury__diet__A_11 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__2_2, (MR_Integer) 0));
#line 1203 "diet.m"
        MR_Box mercury__diet__B_12 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__2_2, (MR_Integer) 1));

#line 1209 "diet.m"
        if ((mercury__diet__Head0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1205 "diet.m"
          {
#line 1206 "diet.m"
            {
#line 1206 "diet.m"
              *mercury__diet__Left_17 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__HeadVar__2_2, mercury__diet__Left0_10, mercury__diet__Right0_13);
            }
#line 1207 "diet.m"
            *mercury__diet__Head_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1208 "diet.m"
            *mercury__diet__Stream_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1205 "diet.m"
          }
#line 1209 "diet.m"
        else
#line 1210 "diet.m"
          {
#line 1210 "diet.m"
            MR_Box mercury__diet__X_20;
#line 1210 "diet.m"
            MR_Box mercury__diet__Y_21;
#line 1210 "diet.m"
            MR_Tuple mercury__diet__V_27_27 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_15, (MR_Integer) 0)));
#line 1212 "diet.m"
            MR_Box mercury__diet__V_28_28;
#line 39 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);
#line 45 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box);
#line 39 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box, MR_Box);

#line 1210 "diet.m"
            mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, (MR_Integer) 0));
#line 1210 "diet.m"
            mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, (MR_Integer) 1));
#line 39 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
            {
#line 39 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__Y_21, mercury__diet__A_11);
            }
#line 1212 "diet.m"
            if (mercury__diet__succeeded)
#line 1212 "diet.m"
              {
#line 45 "diet.m"
                mercury__diet__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 7)));
#line 45 "diet.m"
                {
#line 45 "diet.m"
                  mercury__diet__V_28_28 = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__A_11);
                }
#line 39 "diet.m"
                mercury__diet__func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
                {
#line 39 "diet.m"
                  mercury__diet__succeeded = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__Y_21, mercury__diet__V_28_28);
                }
#line 1212 "diet.m"
              }
#line 1219 "diet.m"
            if (mercury__diet__succeeded)
#line 1215 "diet.m"
              {
#line 1215 "diet.m"
                MR_Word mercury__diet__Left1_22;
#line 1215 "diet.m"
                MR_Word mercury__diet__Head1_23;
#line 1215 "diet.m"
                MR_Word mercury__diet__Stream1_24;

#line 1215 "diet.m"
                {
#line 1215 "diet.m"
                  mercury__diet__Left1_22 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__V_27_27, mercury__diet__Left0_10);
                }
#line 671 "diet.m"
                if ((mercury__diet__Stream0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 671 "diet.m"
                  {
#line 672 "diet.m"
                    mercury__diet__Head1_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 673 "diet.m"
                    mercury__diet__Stream1_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 671 "diet.m"
                  }
#line 671 "diet.m"
                else
#line 675 "diet.m"
                  {
#line 675 "diet.m"
                    MR_Tuple mercury__diet__X_68;

#line 676 "diet.m"
                    {
#line 676 "diet.m"
                      mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__Stream0_16, &mercury__diet__X_68, &mercury__diet__Stream1_24);
                    }
#line 677 "diet.m"
                    {
#line 677 "diet.m"
                      mercury__diet__Head1_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 677 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__Head1_23, 0) = ((MR_Box) (mercury__diet__X_68));
#line 677 "diet.m"
                    }
#line 675 "diet.m"
                  }
#line 1217 "diet.m"
                /* direct tailcall eliminated */
#line 1217 "diet.m"
                {
#line 1217 "diet.m"
                  MR_Word mercury__diet__Left0__tmp_copy_10 = mercury__diet__Left1_22;
#line 1217 "diet.m"
                  MR_Word mercury__diet__Head0__tmp_copy_15 = mercury__diet__Head1_23;
#line 1217 "diet.m"
                  MR_Word mercury__diet__Stream0__tmp_copy_16 = mercury__diet__Stream1_24;

#line 1217 "diet.m"
                  mercury__diet__Stream0_16 = mercury__diet__Stream0__tmp_copy_16;
#line 1217 "diet.m"
                  mercury__diet__Head0_15 = mercury__diet__Head0__tmp_copy_15;
#line 1217 "diet.m"
                  mercury__diet__Left0_10 = mercury__diet__Left0__tmp_copy_10;
#line 1217 "diet.m"
                }
#line 1217 "diet.m"
                continue;
#line 1215 "diet.m"
              }
#line 1219 "diet.m"
            else
#line 1228 "diet.m"
              {
#line 1220 "diet.m"
                MR_Box mercury__diet__V_31_31;
#line 39 "diet.m"
                MR_bool MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 42 "diet.m"
                MR_Box MR_CALL (* mercury__diet__func_4)(MR_Box, MR_Box);
#line 39 "diet.m"
                MR_bool MR_CALL (* mercury__diet__func_5)(MR_Box, MR_Box, MR_Box);

#line 39 "diet.m"
                {
#line 39 "diet.m"
                  mercury__diet__succeeded = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__B_12, mercury__diet__X_20);
                }
#line 1220 "diet.m"
                if (mercury__diet__succeeded)
#line 1220 "diet.m"
                  {
#line 42 "diet.m"
                    mercury__diet__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                    {
#line 42 "diet.m"
                      mercury__diet__V_31_31 = mercury__diet__func_4(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__B_12);
                    }
#line 39 "diet.m"
                    mercury__diet__func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
                    {
#line 39 "diet.m"
                      mercury__diet__succeeded = mercury__diet__func_5(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__V_31_31, mercury__diet__X_20);
                    }
#line 1220 "diet.m"
                  }
#line 1228 "diet.m"
                if (mercury__diet__succeeded)
#line 1224 "diet.m"
                  {
#line 1224 "diet.m"
                    MR_Word mercury__diet__Right1_25;

#line 1223 "diet.m"
                    {
#line 1223 "diet.m"
                      mercury__diet__union_2_7_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__Right0_13, mercury__diet__Limit_14, mercury__diet__Head0_15, mercury__diet__Stream0_16, &mercury__diet__Right1_25, mercury__diet__Head_18, mercury__diet__Stream_19);
                    }
#line 1225 "diet.m"
                    {
#line 1225 "diet.m"
                      *mercury__diet__Left_17 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__HeadVar__2_2, mercury__diet__Left0_10, mercury__diet__Right1_25);
                    }
#line 1224 "diet.m"
                  }
#line 1228 "diet.m"
                else
#line 1234 "diet.m"
                  {
#line 39 "diet.m"
                    MR_bool MR_CALL (* mercury__diet__func_6)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
                    {
#line 39 "diet.m"
                      mercury__diet__succeeded = mercury__diet__func_6(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__B_12, mercury__diet__Y_21);
                    }
#line 474 "diet.m"
                    mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1234 "diet.m"
                    if (mercury__diet__succeeded)
#line 1231 "diet.m"
                      {
#line 1231 "diet.m"
                        MR_Tuple mercury__diet__V_33_33;
#line 1231 "diet.m"
                        MR_Box mercury__diet__V_34_34;
#line 1231 "diet.m"
                        MR_Word mercury__diet__Head1_43;
#line 1231 "diet.m"
                        MR_Word mercury__diet__Stream1_44;
#line 39 "diet.m"
                        MR_bool MR_CALL (* mercury__diet__func_7)(MR_Box, MR_Box, MR_Box);

#line 671 "diet.m"
                        if ((mercury__diet__Stream0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 671 "diet.m"
                          {
#line 672 "diet.m"
                            mercury__diet__Head1_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 673 "diet.m"
                            mercury__diet__Stream1_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 671 "diet.m"
                          }
#line 671 "diet.m"
                        else
#line 675 "diet.m"
                          {
#line 675 "diet.m"
                            MR_Tuple mercury__diet__X_82;

#line 676 "diet.m"
                            {
#line 676 "diet.m"
                              mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__Stream0_16, &mercury__diet__X_82, &mercury__diet__Stream1_44);
                            }
#line 677 "diet.m"
                            {
#line 677 "diet.m"
                              mercury__diet__Head1_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 677 "diet.m"
                              MR_hl_field(MR_mktag(1), mercury__diet__Head1_43, 0) = ((MR_Box) (mercury__diet__X_82));
#line 677 "diet.m"
                            }
#line 675 "diet.m"
                          }
#line 39 "diet.m"
                        mercury__diet__func_7 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
                        {
#line 39 "diet.m"
                          mercury__diet__succeeded = mercury__diet__func_7(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__A_11, mercury__diet__X_20);
                        }
#line 484 "diet.m"
                        if (mercury__diet__succeeded)
#line 484 "diet.m"
                          mercury__diet__V_34_34 = mercury__diet__A_11;
#line 484 "diet.m"
                        else
#line 484 "diet.m"
                          mercury__diet__V_34_34 = mercury__diet__X_20;
#line 1232 "diet.m"
                        {
#line 1232 "diet.m"
                          mercury__diet__V_33_33 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1232 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_33_33, 0) = mercury__diet__V_34_34;
#line 1232 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_33_33, 1) = mercury__diet__B_12;
#line 1232 "diet.m"
                        }
#line 1232 "diet.m"
                        /* direct tailcall eliminated */
#line 1232 "diet.m"
                        {
#line 1232 "diet.m"
                          MR_Tuple mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__V_33_33;
#line 1232 "diet.m"
                          MR_Word mercury__diet__Head0__tmp_copy_15 = mercury__diet__Head1_43;
#line 1232 "diet.m"
                          MR_Word mercury__diet__Stream0__tmp_copy_16 = mercury__diet__Stream1_44;

#line 1232 "diet.m"
                          mercury__diet__Stream0_16 = mercury__diet__Stream0__tmp_copy_16;
#line 1232 "diet.m"
                          mercury__diet__Head0_15 = mercury__diet__Head0__tmp_copy_15;
#line 1232 "diet.m"
                          mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 1232 "diet.m"
                        }
#line 1232 "diet.m"
                        continue;
#line 1231 "diet.m"
                      }
#line 1234 "diet.m"
                    else
#line 1241 "diet.m"
                      {
#line 1235 "diet.m"
                        MR_Box mercury__diet__LimitValue_26;
#line 39 "diet.m"
                        MR_bool MR_CALL (* mercury__diet__func_8)(MR_Box, MR_Box, MR_Box);

#line 1235 "diet.m"
                        mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Limit_14)) == (MR_mktag((MR_Integer) 1)));
#line 1235 "diet.m"
                        if (mercury__diet__succeeded)
#line 1235 "diet.m"
                          {
#line 1235 "diet.m"
                            mercury__diet__LimitValue_26 = (MR_hl_field(MR_mktag(1), mercury__diet__Limit_14, (MR_Integer) 0));
#line 39 "diet.m"
                            mercury__diet__func_8 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
                            {
#line 39 "diet.m"
                              mercury__diet__succeeded = mercury__diet__func_8(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__Y_21, mercury__diet__LimitValue_26);
                            }
#line 474 "diet.m"
                            mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1235 "diet.m"
                          }
#line 1241 "diet.m"
                        if (mercury__diet__succeeded)
#line 1238 "diet.m"
                          {
#line 1238 "diet.m"
                            MR_Tuple mercury__diet__V_35_35;
#line 1238 "diet.m"
                            MR_Box mercury__diet__V_36_36;
#line 39 "diet.m"
                            MR_bool MR_CALL (* mercury__diet__func_9)(MR_Box, MR_Box, MR_Box);

#line 1238 "diet.m"
                            *mercury__diet__Left_17 = mercury__diet__Left0_10;
#line 39 "diet.m"
                            mercury__diet__func_9 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
                            {
#line 39 "diet.m"
                              mercury__diet__succeeded = mercury__diet__func_9(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__A_11, mercury__diet__X_20);
                            }
#line 484 "diet.m"
                            if (mercury__diet__succeeded)
#line 484 "diet.m"
                              mercury__diet__V_36_36 = mercury__diet__A_11;
#line 484 "diet.m"
                            else
#line 484 "diet.m"
                              mercury__diet__V_36_36 = mercury__diet__X_20;
#line 1239 "diet.m"
                            {
#line 1239 "diet.m"
                              mercury__diet__V_35_35 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1239 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, 0) = mercury__diet__V_36_36;
#line 1239 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, 1) = mercury__diet__Y_21;
#line 1239 "diet.m"
                            }
#line 1239 "diet.m"
                            {
#line 1239 "diet.m"
                              MR_Word base;
#line 1239 "diet.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "diet.m"
                              *mercury__diet__Head_18 = base;
#line 1239 "diet.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_35_35));
#line 1239 "diet.m"
                            }
#line 1240 "diet.m"
                            *mercury__diet__Stream_19 = mercury__diet__Stream0_16;
#line 1238 "diet.m"
                          }
#line 1241 "diet.m"
                        else
#line 1243 "diet.m"
                          {
#line 1243 "diet.m"
                            MR_Word mercury__diet__V_37_37;
#line 1243 "diet.m"
                            MR_Tuple mercury__diet__V_38_38;
#line 1243 "diet.m"
                            MR_Box mercury__diet__V_39_39;
#line 1243 "diet.m"
                            MR_Word mercury__diet__Right1_47;
#line 39 "diet.m"
                            MR_bool MR_CALL (* mercury__diet__func_10)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
                            {
#line 39 "diet.m"
                              mercury__diet__succeeded = mercury__diet__func_10(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__A_11, mercury__diet__X_20);
                            }
#line 484 "diet.m"
                            if (mercury__diet__succeeded)
#line 484 "diet.m"
                              mercury__diet__V_39_39 = mercury__diet__A_11;
#line 484 "diet.m"
                            else
#line 484 "diet.m"
                              mercury__diet__V_39_39 = mercury__diet__X_20;
#line 1242 "diet.m"
                            {
#line 1242 "diet.m"
                              mercury__diet__V_38_38 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1242 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_38_38, 0) = mercury__diet__V_39_39;
#line 1242 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_38_38, 1) = mercury__diet__Y_21;
#line 1242 "diet.m"
                            }
#line 1242 "diet.m"
                            {
#line 1242 "diet.m"
                              mercury__diet__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1242 "diet.m"
                              MR_hl_field(MR_mktag(1), mercury__diet__V_37_37, 0) = ((MR_Box) (mercury__diet__V_38_38));
#line 1242 "diet.m"
                            }
#line 1242 "diet.m"
                            {
#line 1242 "diet.m"
                              mercury__diet__union_2_7_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__Right0_13, mercury__diet__Limit_14, mercury__diet__V_37_37, mercury__diet__Stream0_16, &mercury__diet__Right1_47, mercury__diet__Head_18, mercury__diet__Stream_19);
                            }
#line 1244 "diet.m"
                            {
#line 1244 "diet.m"
                              *mercury__diet__Left_17 = mercury__diet__reroot_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__Left0_10, mercury__diet__Right1_47);
                            }
#line 1243 "diet.m"
                          }
#line 1241 "diet.m"
                      }
#line 1234 "diet.m"
                  }
#line 1228 "diet.m"
              }
#line 1210 "diet.m"
          }
#line 1203 "diet.m"
      }
#line 1203 "diet.m"
      break;
#line 1203 "diet.m"
    }
#line 1198 "diet.m"
}

#line 1166 "diet.m"
static void MR_CALL 
mercury__diet__union_2_7_p_0(
#line 1166 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_30,
#line 1166 "diet.m"
  MR_Word mercury__diet__Input_8,
#line 1166 "diet.m"
  MR_Word mercury__diet__Limit_9,
#line 1166 "diet.m"
  MR_Word mercury__diet__Head0_10,
#line 1166 "diet.m"
  MR_Word mercury__diet__Stream0_11,
#line 1166 "diet.m"
  MR_Word * mercury__diet__Left_12,
#line 1166 "diet.m"
  MR_Word * mercury__diet__Head_13,
#line 1166 "diet.m"
  MR_Word * mercury__diet__Stream_14)
#line 1166 "diet.m"
{
#line 1172 "diet.m"
  {
#line 1172 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1172 "diet.m"
    if ((mercury__diet__Head0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1172 "diet.m"
      {
#line 1173 "diet.m"
        *mercury__diet__Left_12 = mercury__diet__Input_8;
#line 1174 "diet.m"
        *mercury__diet__Head_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1175 "diet.m"
        *mercury__diet__Stream_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1172 "diet.m"
      }
#line 1172 "diet.m"
    else
#line 1177 "diet.m"
      {
#line 1177 "diet.m"
        MR_Box mercury__diet__X_15;
#line 1177 "diet.m"
        MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_10, (MR_Integer) 0)));
#line 1177 "diet.m"
        MR_Box mercury__diet___Y_16;

#line 1177 "diet.m"
        mercury__diet__X_15 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0));
#line 1177 "diet.m"
        mercury__diet___Y_16 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1));
#line 1183 "diet.m"
        if ((mercury__diet__Input_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1179 "diet.m"
          {
#line 1180 "diet.m"
            *mercury__diet__Left_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1181 "diet.m"
            *mercury__diet__Head_13 = mercury__diet__Head0_10;
#line 1182 "diet.m"
            *mercury__diet__Stream_14 = mercury__diet__Stream0_11;
#line 1179 "diet.m"
          }
#line 1183 "diet.m"
        else
#line 1184 "diet.m"
          {
#line 1184 "diet.m"
            MR_Box mercury__diet__A_17;
#line 1184 "diet.m"
            MR_Word mercury__diet__Left0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_8, (MR_Integer) 2)));
#line 1184 "diet.m"
            MR_Word mercury__diet__Right0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_8, (MR_Integer) 3)));
#line 1184 "diet.m"
            MR_Word mercury__diet__Left1_22;
#line 1184 "diet.m"
            MR_Word mercury__diet__Head1_23;
#line 1184 "diet.m"
            MR_Word mercury__diet__Stream1_24;
#line 1184 "diet.m"
            MR_Tuple mercury__diet__V_26_26 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Input_8, (MR_Integer) 0)));
#line 1184 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Input_8, (MR_Integer) 1)));
#line 1184 "diet.m"
            MR_Box mercury__diet__B_18;
#line 39 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

#line 1184 "diet.m"
            mercury__diet__A_17 = (MR_hl_field(MR_mktag(0), mercury__diet__V_26_26, (MR_Integer) 0));
#line 1184 "diet.m"
            mercury__diet__B_18 = (MR_hl_field(MR_mktag(0), mercury__diet__V_26_26, (MR_Integer) 1));
#line 39 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
            {
#line 39 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_30), mercury__diet__X_15, mercury__diet__A_17);
            }
#line 1188 "diet.m"
            if (mercury__diet__succeeded)
#line 1186 "diet.m"
              {
#line 1186 "diet.m"
                MR_Word mercury__diet__V_27_27;
#line 1186 "diet.m"
                MR_Box mercury__diet__V_28_28;
#line 45 "diet.m"
                MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 7)));

#line 45 "diet.m"
                {
#line 45 "diet.m"
                  mercury__diet__V_28_28 = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_30), mercury__diet__A_17);
                }
#line 1186 "diet.m"
                {
#line 1186 "diet.m"
                  mercury__diet__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1186 "diet.m"
                  MR_hl_field(MR_mktag(1), mercury__diet__V_27_27, 0) = mercury__diet__V_28_28;
#line 1186 "diet.m"
                }
#line 1186 "diet.m"
                {
#line 1186 "diet.m"
                  mercury__diet__union_2_7_p_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__Left0_20, mercury__diet__V_27_27, mercury__diet__Head0_10, mercury__diet__Stream0_11, &mercury__diet__Left1_22, &mercury__diet__Head1_23, &mercury__diet__Stream1_24);
                }
#line 1186 "diet.m"
              }
#line 1188 "diet.m"
            else
#line 1189 "diet.m"
              {
#line 1189 "diet.m"
                mercury__diet__Left1_22 = mercury__diet__Left0_20;
#line 1190 "diet.m"
                mercury__diet__Head1_23 = mercury__diet__Head0_10;
#line 1191 "diet.m"
                mercury__diet__Stream1_24 = mercury__diet__Stream0_11;
#line 1189 "diet.m"
              }
#line 1193 "diet.m"
            {
#line 1193 "diet.m"
              mercury__diet__union_helper_9_p_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__Left1_22, mercury__diet__V_26_26, mercury__diet__Right0_21, mercury__diet__Limit_9, mercury__diet__Head1_23, mercury__diet__Stream1_24, mercury__diet__Left_12, mercury__diet__Head_13, mercury__diet__Stream_14);
            }
#line 1184 "diet.m"
          }
#line 1177 "diet.m"
      }
#line 1172 "diet.m"
  }
#line 1166 "diet.m"
}

#line 1012 "diet.m"
static void MR_CALL 
mercury__diet__find_del_right_4_p_0(
#line 1012 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_18,
#line 1012 "diet.m"
  MR_Box mercury__diet__P0_5,
#line 1012 "diet.m"
  MR_Word mercury__diet__T0_6,
#line 1012 "diet.m"
  MR_Box * mercury__diet__P_7,
#line 1012 "diet.m"
  MR_Word * mercury__diet__T_8)
#line 1012 "diet.m"
{
#line 1017 "diet.m"
  {
#line 1017 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1017 "diet.m"
    if ((mercury__diet__T0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1017 "diet.m"
      {
#line 1018 "diet.m"
        *mercury__diet__P_7 = mercury__diet__P0_5;
#line 1019 "diet.m"
        *mercury__diet__T_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1017 "diet.m"
      }
#line 1017 "diet.m"
    else
#line 1021 "diet.m"
      {
#line 1021 "diet.m"
        MR_Box mercury__diet__X_9;
#line 1021 "diet.m"
        MR_Box mercury__diet__Y_10;
#line 1021 "diet.m"
        MR_Word mercury__diet__Left0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 2)));
#line 1021 "diet.m"
        MR_Word mercury__diet__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 3)));
#line 1021 "diet.m"
        MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 0)));
#line 1021 "diet.m"
        MR_Integer mercury__diet__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 1)));
#line 1022 "diet.m"
        MR_Box mercury__diet__V_16_16;
#line 45 "diet.m"
        MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box);
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box);

#line 1021 "diet.m"
        mercury__diet__X_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1021 "diet.m"
        mercury__diet__Y_10 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 45 "diet.m"
        mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_18, (MR_Integer) 0)), (MR_Integer) 7)));
#line 45 "diet.m"
        {
#line 45 "diet.m"
          mercury__diet__V_16_16 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_18), mercury__diet__X_9);
        }
#line 39 "diet.m"
        mercury__diet__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_18), mercury__diet__P0_5, mercury__diet__V_16_16);
        }
#line 1025 "diet.m"
        if (mercury__diet__succeeded)
#line 1023 "diet.m"
          {
#line 1023 "diet.m"
            MR_Word mercury__diet__Left1_14;

#line 1023 "diet.m"
            {
#line 1023 "diet.m"
              mercury__diet__find_del_right_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__P0_5, mercury__diet__Left0_12, mercury__diet__P_7, &mercury__diet__Left1_14);
            }
#line 1024 "diet.m"
            {
#line 1024 "diet.m"
              *mercury__diet__T_8 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__V_15_15, mercury__diet__Left1_14, mercury__diet__Right_13);
            }
#line 1023 "diet.m"
          }
#line 1025 "diet.m"
        else
#line 1026 "diet.m"
          {
#line 1026 "diet.m"
            *mercury__diet__P_7 = mercury__diet__Y_10;
#line 1027 "diet.m"
            *mercury__diet__T_8 = mercury__diet__Right_13;
#line 1026 "diet.m"
          }
#line 1021 "diet.m"
      }
#line 1017 "diet.m"
  }
#line 1012 "diet.m"
}

#line 993 "diet.m"
static void MR_CALL 
mercury__diet__find_del_left_4_p_0(
#line 993 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_18,
#line 993 "diet.m"
  MR_Box mercury__diet__P0_5,
#line 993 "diet.m"
  MR_Word mercury__diet__T0_6,
#line 993 "diet.m"
  MR_Box * mercury__diet__P_7,
#line 993 "diet.m"
  MR_Word * mercury__diet__T_8)
#line 993 "diet.m"
{
#line 998 "diet.m"
  {
#line 998 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 998 "diet.m"
    if ((mercury__diet__T0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 998 "diet.m"
      {
#line 999 "diet.m"
        *mercury__diet__P_7 = mercury__diet__P0_5;
#line 1000 "diet.m"
        *mercury__diet__T_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 998 "diet.m"
      }
#line 998 "diet.m"
    else
#line 1002 "diet.m"
      {
#line 1002 "diet.m"
        MR_Box mercury__diet__X_9;
#line 1002 "diet.m"
        MR_Box mercury__diet__Y_10;
#line 1002 "diet.m"
        MR_Word mercury__diet__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 2)));
#line 1002 "diet.m"
        MR_Word mercury__diet__Right0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 3)));
#line 1002 "diet.m"
        MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 0)));
#line 1002 "diet.m"
        MR_Integer mercury__diet__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 1)));
#line 1003 "diet.m"
        MR_Box mercury__diet__V_16_16;
#line 42 "diet.m"
        MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box);
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box);

#line 1002 "diet.m"
        mercury__diet__X_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1002 "diet.m"
        mercury__diet__Y_10 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 42 "diet.m"
        mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_18, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
        {
#line 42 "diet.m"
          mercury__diet__V_16_16 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_18), mercury__diet__Y_10);
        }
#line 39 "diet.m"
        mercury__diet__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_18), mercury__diet__V_16_16, mercury__diet__P0_5);
        }
#line 1006 "diet.m"
        if (mercury__diet__succeeded)
#line 1004 "diet.m"
          {
#line 1004 "diet.m"
            MR_Word mercury__diet__Right1_14;

#line 1004 "diet.m"
            {
#line 1004 "diet.m"
              mercury__diet__find_del_left_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__P0_5, mercury__diet__Right0_13, mercury__diet__P_7, &mercury__diet__Right1_14);
            }
#line 1005 "diet.m"
            {
#line 1005 "diet.m"
              *mercury__diet__T_8 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__V_15_15, mercury__diet__Left_12, mercury__diet__Right1_14);
            }
#line 1004 "diet.m"
          }
#line 1006 "diet.m"
        else
#line 1007 "diet.m"
          {
#line 1007 "diet.m"
            *mercury__diet__P_7 = mercury__diet__X_9;
#line 1008 "diet.m"
            *mercury__diet__T_8 = mercury__diet__Left_12;
#line 1007 "diet.m"
          }
#line 1002 "diet.m"
      }
#line 998 "diet.m"
  }
#line 993 "diet.m"
}

#line 963 "diet.m"
MR_Word MR_CALL 
mercury__diet__do_insert_2_f_0(
#line 963 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_26,
#line 963 "diet.m"
  MR_Tuple mercury__diet__PQ_4,
#line 963 "diet.m"
  MR_Word mercury__diet__T0_5)
#line 963 "diet.m"
{
#line 965 "diet.m"
  {
#line 965 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 965 "diet.m"
    MR_Word mercury__diet__T_6;
#line 965 "diet.m"
    MR_Box mercury__diet__P_7 = (MR_hl_field(MR_mktag(0), mercury__diet__PQ_4, (MR_Integer) 0));
#line 965 "diet.m"
    MR_Box mercury__diet__Q_8 = (MR_hl_field(MR_mktag(0), mercury__diet__PQ_4, (MR_Integer) 1));

#line 970 "diet.m"
    if ((mercury__diet__T0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 968 "diet.m"
      {
#line 968 "diet.m"
        MR_Word mercury__diet__V_31_31;
#line 968 "diet.m"
        MR_Word mercury__diet__V_32_32;
#line 134 "private_builtin.opt"
        MR_Word mercury__diet__TypeInfo_28_28;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__do_insert_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_26 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 10855 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_28_28  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 508 "diet.m"
        mercury__diet__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 508 "diet.m"
        mercury__diet__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 508 "diet.m"
        {
#line 508 "diet.m"
          mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 508 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__PQ_4));
#line 508 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) ((MR_Integer) 1));
#line 508 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__V_31_31));
#line 508 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__V_32_32));
#line 508 "diet.m"
        }
#line 968 "diet.m"
      }
#line 970 "diet.m"
    else
#line 971 "diet.m"
      {
#line 971 "diet.m"
        MR_Box mercury__diet__X0_9;
#line 971 "diet.m"
        MR_Box mercury__diet__Y0_10;
#line 971 "diet.m"
        MR_Word mercury__diet__Left0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 2)));
#line 971 "diet.m"
        MR_Word mercury__diet__Right0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 3)));
#line 971 "diet.m"
        MR_Tuple mercury__diet__V_18_18 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 0)));
#line 971 "diet.m"
        MR_Integer mercury__diet__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 1)));
#line 972 "diet.m"
        MR_Box mercury__diet__V_19_19;
#line 45 "diet.m"
        MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box);
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box);

#line 971 "diet.m"
        mercury__diet__X0_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_18_18, (MR_Integer) 0));
#line 971 "diet.m"
        mercury__diet__Y0_10 = (MR_hl_field(MR_mktag(0), mercury__diet__V_18_18, (MR_Integer) 1));
#line 45 "diet.m"
        mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 7)));
#line 45 "diet.m"
        {
#line 45 "diet.m"
          mercury__diet__V_19_19 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__X0_9);
        }
#line 39 "diet.m"
        mercury__diet__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__Q_8, mercury__diet__V_19_19);
        }
#line 974 "diet.m"
        if (mercury__diet__succeeded)
#line 973 "diet.m"
          {
#line 973 "diet.m"
            MR_Word mercury__diet__V_21_21;

#line 973 "diet.m"
            {
#line 973 "diet.m"
              mercury__diet__V_21_21 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__PQ_4, mercury__diet__Left0_12);
            }
#line 973 "diet.m"
            {
#line 973 "diet.m"
              mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__V_18_18, mercury__diet__V_21_21, mercury__diet__Right0_13);
            }
#line 973 "diet.m"
          }
#line 974 "diet.m"
        else
#line 976 "diet.m"
          {
#line 974 "diet.m"
            MR_Box mercury__diet__V_22_22;
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 6)));
#line 39 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box, MR_Box);

#line 42 "diet.m"
            {
#line 42 "diet.m"
              mercury__diet__V_22_22 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__Y0_10);
            }
#line 39 "diet.m"
            mercury__diet__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
            {
#line 39 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__V_22_22, mercury__diet__P_7);
            }
#line 976 "diet.m"
            if (mercury__diet__succeeded)
#line 975 "diet.m"
              {
#line 975 "diet.m"
                MR_Word mercury__diet__V_24_24;

#line 975 "diet.m"
                {
#line 975 "diet.m"
                  mercury__diet__V_24_24 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__PQ_4, mercury__diet__Right0_13);
                }
#line 975 "diet.m"
                {
#line 975 "diet.m"
                  mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__V_18_18, mercury__diet__Left0_12, mercury__diet__V_24_24);
                }
#line 975 "diet.m"
              }
#line 976 "diet.m"
            else
#line 982 "diet.m"
              {
#line 982 "diet.m"
                MR_Box mercury__diet__X1_14;
#line 982 "diet.m"
                MR_Word mercury__diet__Left1_15;
#line 982 "diet.m"
                MR_Box mercury__diet__Y1_16;
#line 982 "diet.m"
                MR_Word mercury__diet__Right1_17;
#line 982 "diet.m"
                MR_Tuple mercury__diet__V_25_25;
#line 39 "diet.m"
                MR_bool MR_CALL (* mercury__diet__func_4)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
                MR_bool MR_CALL (* mercury__diet__func_5)(MR_Box, MR_Box, MR_Box);

#line 39 "diet.m"
                {
#line 39 "diet.m"
                  mercury__diet__succeeded = mercury__diet__func_4(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__P_7, mercury__diet__X0_9);
                }
#line 474 "diet.m"
                mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 980 "diet.m"
                if (mercury__diet__succeeded)
#line 978 "diet.m"
                  {
#line 978 "diet.m"
                    mercury__diet__X1_14 = mercury__diet__X0_9;
#line 979 "diet.m"
                    mercury__diet__Left1_15 = mercury__diet__Left0_12;
#line 978 "diet.m"
                  }
#line 980 "diet.m"
                else
#line 981 "diet.m"
                  {
#line 981 "diet.m"
                    mercury__diet__find_del_left_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__P_7, mercury__diet__Left0_12, &mercury__diet__X1_14, &mercury__diet__Left1_15);
                  }
#line 39 "diet.m"
                mercury__diet__func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
                {
#line 39 "diet.m"
                  mercury__diet__succeeded = mercury__diet__func_5(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__Y0_10, mercury__diet__Q_8);
                }
#line 480 "diet.m"
                mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 986 "diet.m"
                if (mercury__diet__succeeded)
#line 984 "diet.m"
                  {
#line 984 "diet.m"
                    mercury__diet__Y1_16 = mercury__diet__Y0_10;
#line 985 "diet.m"
                    mercury__diet__Right1_17 = mercury__diet__Right0_13;
#line 984 "diet.m"
                  }
#line 986 "diet.m"
                else
#line 987 "diet.m"
                  {
#line 987 "diet.m"
                    mercury__diet__find_del_right_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__Q_8, mercury__diet__Right0_13, &mercury__diet__Y1_16, &mercury__diet__Right1_17);
                  }
#line 989 "diet.m"
                {
#line 989 "diet.m"
                  mercury__diet__V_25_25 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 989 "diet.m"
                  MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, 0) = mercury__diet__X1_14;
#line 989 "diet.m"
                  MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, 1) = mercury__diet__Y1_16;
#line 989 "diet.m"
                }
#line 989 "diet.m"
                {
#line 989 "diet.m"
                  mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__V_25_25, mercury__diet__Left1_15, mercury__diet__Right1_17);
                }
#line 982 "diet.m"
              }
#line 976 "diet.m"
          }
#line 971 "diet.m"
      }
#line 965 "diet.m"
    return mercury__diet__T_6;
#line 965 "diet.m"
  }
#line 963 "diet.m"
}

#line 957 "diet.m"
void MR_CALL 
mercury__diet__insert_interval_3_p_0(
#line 957 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
#line 957 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 957 "diet.m"
  MR_Word mercury__diet__Set0_6,
#line 957 "diet.m"
  MR_Word * mercury__diet__Set_7)
#line 957 "diet.m"
{
#line 960 "diet.m"
  {
#line 960 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 960 "diet.m"
    MR_Box mercury__diet__X_4 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 0));
#line 960 "diet.m"
    MR_Box mercury__diet__Y_5 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 1));

#line 961 "diet.m"
    {
#line 961 "diet.m"
      mercury__diet__insert_interval_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__X_4, mercury__diet__Y_5, mercury__diet__Set0_6, mercury__diet__Set_7);
    }
#line 960 "diet.m"
  }
#line 957 "diet.m"
}

#line 847 "diet.m"
MR_Word MR_CALL 
mercury__diet__add_2_f_0(
#line 847 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_50,
#line 847 "diet.m"
  MR_Box mercury__diet__P_4,
#line 847 "diet.m"
  MR_Word mercury__diet__T0_5)
#line 847 "diet.m"
{
#line 851 "diet.m"
  {
#line 851 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 851 "diet.m"
    MR_Word mercury__diet__T_6;

#line 851 "diet.m"
    if ((mercury__diet__T0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 851 "diet.m"
      {
#line 851 "diet.m"
        MR_Tuple mercury__diet__V_39_39;
#line 851 "diet.m"
        MR_Word mercury__diet__V_42_42;
#line 851 "diet.m"
        MR_Word mercury__diet__V_43_43;

#line 852 "diet.m"
        {
#line 852 "diet.m"
          mercury__diet__V_39_39 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 852 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_39_39, 0) = mercury__diet__P_4;
#line 852 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_39_39, 1) = mercury__diet__P_4;
#line 852 "diet.m"
        }
#line 852 "diet.m"
        mercury__diet__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 852 "diet.m"
        mercury__diet__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 852 "diet.m"
        {
#line 852 "diet.m"
          mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 852 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__V_39_39));
#line 852 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) ((MR_Integer) 1));
#line 852 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__V_42_42));
#line 852 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__V_43_43));
#line 852 "diet.m"
        }
#line 851 "diet.m"
      }
#line 851 "diet.m"
    else
#line 854 "diet.m"
      {
#line 854 "diet.m"
        MR_Box mercury__diet__X_7;
#line 854 "diet.m"
        MR_Box mercury__diet__Y_8;
#line 854 "diet.m"
        MR_Integer mercury__diet__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 1)));
#line 854 "diet.m"
        MR_Word mercury__diet__Left_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 2)));
#line 854 "diet.m"
        MR_Word mercury__diet__Right_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 3)));
#line 854 "diet.m"
        MR_Tuple mercury__diet__V_24_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 0)));
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

#line 854 "diet.m"
        mercury__diet__X_7 = (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 0));
#line 854 "diet.m"
        mercury__diet__Y_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 1));
#line 39 "diet.m"
        mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__P_4, mercury__diet__X_7);
        }
#line 474 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 874 "diet.m"
        if (mercury__diet__succeeded)
#line 858 "diet.m"
          {
#line 39 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
            {
#line 39 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__Y_8, mercury__diet__P_4);
            }
#line 480 "diet.m"
            mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 858 "diet.m"
            if (mercury__diet__succeeded)
#line 857 "diet.m"
              mercury__diet__T_6 = mercury__diet__T0_5;
#line 858 "diet.m"
            else
#line 860 "diet.m"
              {
#line 858 "diet.m"
                MR_Box mercury__diet__V_25_25;
#line 42 "diet.m"
                MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 6)));
#line 39 "diet.m"
                MR_bool MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box, MR_Box);

#line 42 "diet.m"
                {
#line 42 "diet.m"
                  mercury__diet__V_25_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__Y_8);
                }
#line 39 "diet.m"
                mercury__diet__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
                {
#line 39 "diet.m"
                  mercury__diet__succeeded = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__V_25_25, mercury__diet__P_4);
                }
#line 860 "diet.m"
                if (mercury__diet__succeeded)
#line 859 "diet.m"
                  {
#line 859 "diet.m"
                    MR_Word mercury__diet__V_27_27;

#line 859 "diet.m"
                    {
#line 859 "diet.m"
                      mercury__diet__V_27_27 = mercury__diet__add_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__P_4, mercury__diet__Right_11);
                    }
#line 859 "diet.m"
                    {
#line 859 "diet.m"
                      mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__V_24_24, mercury__diet__Left_10, mercury__diet__V_27_27);
                    }
#line 859 "diet.m"
                  }
#line 860 "diet.m"
                else
#line 864 "diet.m"
                if ((mercury__diet__Right_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 862 "diet.m"
                  {
#line 862 "diet.m"
                    MR_Tuple mercury__diet__V_31_31;

#line 863 "diet.m"
                    {
#line 863 "diet.m"
                      mercury__diet__V_31_31 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 863 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_31_31, 0) = mercury__diet__X_7;
#line 863 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_31_31, 1) = mercury__diet__P_4;
#line 863 "diet.m"
                    }
#line 863 "diet.m"
                    {
#line 863 "diet.m"
                      mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 863 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__V_31_31));
#line 863 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) (mercury__diet__H_9));
#line 863 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 863 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 863 "diet.m"
                    }
#line 862 "diet.m"
                  }
#line 864 "diet.m"
                else
#line 865 "diet.m"
                  {
#line 865 "diet.m"
                    MR_Box mercury__diet__U_16;
#line 865 "diet.m"
                    MR_Box mercury__diet__V_17;
#line 865 "diet.m"
                    MR_Word mercury__diet__R_18;
#line 865 "diet.m"
                    MR_Tuple mercury__diet__V_28_28;
#line 867 "diet.m"
                    MR_Word mercury__diet__TypeInfo_54_54;
#line 867 "diet.m"
                    MR_Box mercury__diet__V_51_51;
#line 45 "diet.m"
                    MR_Box MR_CALL (* mercury__diet__func_4)(MR_Box, MR_Box);

#line 866 "diet.m"
                    {
#line 866 "diet.m"
                      mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__Right_11, &mercury__diet__V_28_28, &mercury__diet__R_18);
                    }
#line 866 "diet.m"
                    mercury__diet__U_16 = (MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, (MR_Integer) 0));
#line 866 "diet.m"
                    mercury__diet__V_17 = (MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, (MR_Integer) 1));
#line 45 "diet.m"
                    mercury__diet__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 7)));
#line 45 "diet.m"
                    {
#line 45 "diet.m"
                      mercury__diet__V_51_51 = mercury__diet__func_4(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__U_16);
                    }
#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__add_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_50 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 11349 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_54_54  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 867 "diet.m"
                    {
#line 867 "diet.m"
                      mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_54_54, mercury__diet__P_4, mercury__diet__V_51_51);
                    }
#line 869 "diet.m"
                    if (mercury__diet__succeeded)
#line 868 "diet.m"
                      {
#line 868 "diet.m"
                        MR_Tuple mercury__diet__V_29_29;

#line 868 "diet.m"
                        {
#line 868 "diet.m"
                          mercury__diet__V_29_29 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 868 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_29_29, 0) = mercury__diet__X_7;
#line 868 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_29_29, 1) = mercury__diet__V_17;
#line 868 "diet.m"
                        }
#line 868 "diet.m"
                        {
#line 868 "diet.m"
                          mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__V_29_29, mercury__diet__Left_10, mercury__diet__R_18);
                        }
#line 868 "diet.m"
                      }
#line 869 "diet.m"
                    else
#line 870 "diet.m"
                      {
#line 870 "diet.m"
                        MR_Tuple mercury__diet__V_30_30;

#line 870 "diet.m"
                        {
#line 870 "diet.m"
                          mercury__diet__V_30_30 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 870 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, 0) = mercury__diet__X_7;
#line 870 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, 1) = mercury__diet__P_4;
#line 870 "diet.m"
                        }
#line 870 "diet.m"
                        {
#line 870 "diet.m"
                          mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 870 "diet.m"
                          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__V_30_30));
#line 870 "diet.m"
                          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) (mercury__diet__H_9));
#line 870 "diet.m"
                          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 870 "diet.m"
                          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 870 "diet.m"
                        }
#line 870 "diet.m"
                      }
#line 865 "diet.m"
                  }
#line 860 "diet.m"
              }
#line 858 "diet.m"
          }
#line 874 "diet.m"
        else
#line 876 "diet.m"
          {
#line 874 "diet.m"
            MR_Box mercury__diet__V_32_32;
#line 45 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_5)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 7)));
#line 39 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_6)(MR_Box, MR_Box, MR_Box);

#line 45 "diet.m"
            {
#line 45 "diet.m"
              mercury__diet__V_32_32 = mercury__diet__func_5(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__X_7);
            }
#line 39 "diet.m"
            mercury__diet__func_6 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
            {
#line 39 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_6(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__P_4, mercury__diet__V_32_32);
            }
#line 876 "diet.m"
            if (mercury__diet__succeeded)
#line 875 "diet.m"
              {
#line 875 "diet.m"
                MR_Word mercury__diet__V_34_34;

#line 875 "diet.m"
                {
#line 875 "diet.m"
                  mercury__diet__V_34_34 = mercury__diet__add_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__P_4, mercury__diet__Left_10);
                }
#line 875 "diet.m"
                {
#line 875 "diet.m"
                  mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__V_24_24, mercury__diet__V_34_34, mercury__diet__Right_11);
                }
#line 875 "diet.m"
              }
#line 876 "diet.m"
            else
#line 880 "diet.m"
            if ((mercury__diet__Left_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 878 "diet.m"
              {
#line 878 "diet.m"
                MR_Tuple mercury__diet__V_38_38;

#line 879 "diet.m"
                {
#line 879 "diet.m"
                  mercury__diet__V_38_38 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 879 "diet.m"
                  MR_hl_field(MR_mktag(0), mercury__diet__V_38_38, 0) = mercury__diet__P_4;
#line 879 "diet.m"
                  MR_hl_field(MR_mktag(0), mercury__diet__V_38_38, 1) = mercury__diet__Y_8;
#line 879 "diet.m"
                }
#line 879 "diet.m"
                {
#line 879 "diet.m"
                  mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 879 "diet.m"
                  MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__V_38_38));
#line 879 "diet.m"
                  MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) (mercury__diet__H_9));
#line 879 "diet.m"
                  MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 879 "diet.m"
                  MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 879 "diet.m"
                }
#line 878 "diet.m"
              }
#line 880 "diet.m"
            else
#line 881 "diet.m"
              {
#line 881 "diet.m"
                MR_Word mercury__diet__L_23;
#line 881 "diet.m"
                MR_Tuple mercury__diet__V_35_35;
#line 881 "diet.m"
                MR_Box mercury__diet__U_44;
#line 881 "diet.m"
                MR_Box mercury__diet__V_45;
#line 883 "diet.m"
                MR_Word mercury__diet__TypeInfo_56_56;
#line 883 "diet.m"
                MR_Box mercury__diet__V_52_52;
#line 42 "diet.m"
                MR_Box MR_CALL (* mercury__diet__func_7)(MR_Box, MR_Box);

#line 882 "diet.m"
                {
#line 882 "diet.m"
                  mercury__diet__take_max_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__Left_10, &mercury__diet__V_35_35, &mercury__diet__L_23);
                }
#line 882 "diet.m"
                mercury__diet__U_44 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0));
#line 882 "diet.m"
                mercury__diet__V_45 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1));
#line 42 "diet.m"
                mercury__diet__func_7 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                {
#line 42 "diet.m"
                  mercury__diet__V_52_52 = mercury__diet__func_7(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__V_45);
                }
#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__add_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_50 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 11551 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_56_56  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 883 "diet.m"
                {
#line 883 "diet.m"
                  mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_56_56, mercury__diet__P_4, mercury__diet__V_52_52);
                }
#line 885 "diet.m"
                if (mercury__diet__succeeded)
#line 884 "diet.m"
                  {
#line 884 "diet.m"
                    MR_Tuple mercury__diet__V_36_36;

#line 884 "diet.m"
                    {
#line 884 "diet.m"
                      mercury__diet__V_36_36 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 884 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_36_36, 0) = mercury__diet__U_44;
#line 884 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_36_36, 1) = mercury__diet__Y_8;
#line 884 "diet.m"
                    }
#line 884 "diet.m"
                    {
#line 884 "diet.m"
                      mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__V_36_36, mercury__diet__L_23, mercury__diet__Right_11);
                    }
#line 884 "diet.m"
                  }
#line 885 "diet.m"
                else
#line 886 "diet.m"
                  {
#line 886 "diet.m"
                    MR_Tuple mercury__diet__V_37_37;

#line 886 "diet.m"
                    {
#line 886 "diet.m"
                      mercury__diet__V_37_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 886 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_37_37, 0) = mercury__diet__P_4;
#line 886 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_37_37, 1) = mercury__diet__Y_8;
#line 886 "diet.m"
                    }
#line 886 "diet.m"
                    {
#line 886 "diet.m"
                      mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 886 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__V_37_37));
#line 886 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) (mercury__diet__H_9));
#line 886 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 886 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 886 "diet.m"
                    }
#line 886 "diet.m"
                  }
#line 881 "diet.m"
              }
#line 876 "diet.m"
          }
#line 854 "diet.m"
      }
#line 851 "diet.m"
    return mercury__diet__T_6;
#line 851 "diet.m"
  }
#line 847 "diet.m"
}

#line 785 "diet.m"
static void MR_CALL 
mercury__diet__subset_2_5_p_0(
#line 785 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_56,
#line 785 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 785 "diet.m"
  MR_Word mercury__diet__R1_8,
#line 785 "diet.m"
  MR_Tuple mercury__diet__HeadVar__3_3,
#line 785 "diet.m"
  MR_Word mercury__diet__R2_11,
#line 785 "diet.m"
  MR_Word * mercury__diet__IsSubset_12)
#line 785 "diet.m"
{
#line 788 "diet.m"
  while (MR_TRUE)
#line 788 "diet.m"
    {
#line 788 "diet.m"
      /* tailcall optimized into a loop */
#line 788 "diet.m"
      {
#line 788 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 788 "diet.m"
        MR_Box mercury__diet__X1_6 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 0));
#line 788 "diet.m"
        MR_Box mercury__diet__Y1_7 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 1));
#line 788 "diet.m"
        MR_Box mercury__diet__X2_9 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__3_3, (MR_Integer) 0));
#line 788 "diet.m"
        MR_Box mercury__diet__Y2_10 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__3_3, (MR_Integer) 1));
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__X1_6, mercury__diet__X2_9);
        }
#line 791 "diet.m"
        if (mercury__diet__succeeded)
#line 790 "diet.m"
          *mercury__diet__IsSubset_12 = (MR_Integer) 0;
#line 791 "diet.m"
        else
#line 800 "diet.m"
          {
#line 39 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
            {
#line 39 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__Y2_10, mercury__diet__X1_6);
            }
#line 800 "diet.m"
            if (mercury__diet__succeeded)
#line 795 "diet.m"
              if ((mercury__diet__R2_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 793 "diet.m"
                *mercury__diet__IsSubset_12 = (MR_Integer) 0;
#line 795 "diet.m"
              else
#line 796 "diet.m"
                {
#line 796 "diet.m"
                  MR_Tuple mercury__diet__Min2_17;
#line 796 "diet.m"
                  MR_Word mercury__diet__MinR2_18;

#line 797 "diet.m"
                  {
#line 797 "diet.m"
                    mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__R2_11, &mercury__diet__Min2_17, &mercury__diet__MinR2_18);
                  }
#line 798 "diet.m"
                  /* direct tailcall eliminated */
#line 798 "diet.m"
                  {
#line 798 "diet.m"
                    MR_Tuple mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__Min2_17;
#line 798 "diet.m"
                    MR_Word mercury__diet__R2__tmp_copy_11 = mercury__diet__MinR2_18;

#line 798 "diet.m"
                    mercury__diet__R2_11 = mercury__diet__R2__tmp_copy_11;
#line 798 "diet.m"
                    mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 798 "diet.m"
                  }
#line 798 "diet.m"
                  continue;
#line 796 "diet.m"
                }
#line 800 "diet.m"
            else
#line 801 "diet.m"
              {
#line 801 "diet.m"
                MR_Word mercury__diet__TypeInfo_58_58;
#line 801 "diet.m"
                MR_Word mercury__diet__Upper_19;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__subset_2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_56 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 11755 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_58_58  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 801 "diet.m"
                {
#line 801 "diet.m"
                  mercury__builtin__compare_3_p_0(mercury__diet__TypeInfo_58_58, &mercury__diet__Upper_19, mercury__diet__Y1_7, mercury__diet__Y2_10);
                }
#line 812 "diet.m"
#line 812 "diet.m"
                switch (mercury__diet__Upper_19) {
#line 812 "diet.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 812 "diet.m"
                  case (MR_Integer) 1:
#line 803 "diet.m"
                    if ((mercury__diet__R1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 805 "diet.m"
                      *mercury__diet__IsSubset_12 = (MR_Integer) 1;
#line 803 "diet.m"
                    else
#line 808 "diet.m"
                      {
#line 808 "diet.m"
                        MR_Tuple mercury__diet__Min1_24;
#line 808 "diet.m"
                        MR_Word mercury__diet__MinR1_25;

#line 809 "diet.m"
                        {
#line 809 "diet.m"
                          mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__R1_8, &mercury__diet__Min1_24, &mercury__diet__MinR1_25);
                        }
#line 810 "diet.m"
                        /* direct tailcall eliminated */
#line 810 "diet.m"
                        {
#line 810 "diet.m"
                          MR_Tuple mercury__diet__HeadVar__1__tmp_copy_1 = mercury__diet__Min1_24;
#line 810 "diet.m"
                          MR_Word mercury__diet__R1__tmp_copy_8 = mercury__diet__MinR1_25;

#line 810 "diet.m"
                          mercury__diet__R1_8 = mercury__diet__R1__tmp_copy_8;
#line 810 "diet.m"
                          mercury__diet__HeadVar__1_1 = mercury__diet__HeadVar__1__tmp_copy_1;
#line 810 "diet.m"
                        }
#line 810 "diet.m"
                        continue;
#line 808 "diet.m"
                      }
#line 812 "diet.m"
                    break;
#line 812 "diet.m"
                  case (MR_Integer) 0:
#line 813 "diet.m"
                    if ((mercury__diet__R1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 815 "diet.m"
                      *mercury__diet__IsSubset_12 = (MR_Integer) 1;
#line 813 "diet.m"
                    else
#line 817 "diet.m"
                    if ((mercury__diet__R2_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 820 "diet.m"
                      *mercury__diet__IsSubset_12 = (MR_Integer) 0;
#line 817 "diet.m"
                    else
#line 822 "diet.m"
                      {
#line 822 "diet.m"
                        MR_Tuple mercury__diet__Min2_40;
#line 822 "diet.m"
                        MR_Word mercury__diet__MinR2_41;
#line 822 "diet.m"
                        MR_Tuple mercury__diet__Min1_42;
#line 822 "diet.m"
                        MR_Word mercury__diet__MinR1_43;

#line 824 "diet.m"
                        {
#line 824 "diet.m"
                          mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__R1_8, &mercury__diet__Min1_42, &mercury__diet__MinR1_43);
                        }
#line 825 "diet.m"
                        {
#line 825 "diet.m"
                          mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__R2_11, &mercury__diet__Min2_40, &mercury__diet__MinR2_41);
                        }
#line 826 "diet.m"
                        /* direct tailcall eliminated */
#line 826 "diet.m"
                        {
#line 826 "diet.m"
                          MR_Tuple mercury__diet__HeadVar__1__tmp_copy_1 = mercury__diet__Min1_42;
#line 826 "diet.m"
                          MR_Word mercury__diet__R1__tmp_copy_8 = mercury__diet__MinR1_43;
#line 826 "diet.m"
                          MR_Tuple mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__Min2_40;
#line 826 "diet.m"
                          MR_Word mercury__diet__R2__tmp_copy_11 = mercury__diet__MinR2_41;

#line 826 "diet.m"
                          mercury__diet__R2_11 = mercury__diet__R2__tmp_copy_11;
#line 826 "diet.m"
                          mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 826 "diet.m"
                          mercury__diet__R1_8 = mercury__diet__R1__tmp_copy_8;
#line 826 "diet.m"
                          mercury__diet__HeadVar__1_1 = mercury__diet__HeadVar__1__tmp_copy_1;
#line 826 "diet.m"
                        }
#line 826 "diet.m"
                        continue;
#line 822 "diet.m"
                      }
#line 812 "diet.m"
                    break;
#line 812 "diet.m"
                  case (MR_Integer) 2:
#line 829 "diet.m"
                    *mercury__diet__IsSubset_12 = (MR_Integer) 0;
#line 812 "diet.m"
                    break;
#line 812 "diet.m"
                }
#line 801 "diet.m"
              }
#line 800 "diet.m"
          }
#line 788 "diet.m"
      }
#line 788 "diet.m"
      break;
#line 788 "diet.m"
    }
#line 785 "diet.m"
}

#line 757 "diet.m"
static void MR_CALL 
mercury__diet__member_in_range_3_p_0(
#line 757 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
#line 757 "diet.m"
  MR_Box mercury__diet__Lo_4,
#line 757 "diet.m"
  MR_Box mercury__diet__Hi_5,
#line 757 "diet.m"
  MR_Box * mercury__diet__Elem_6,
#line 757 "diet.m"
  MR_Cont mercury__diet__cont,
#line 757 "diet.m"
  void * mercury__diet__cont_env_ptr)
#line 757 "diet.m"
{
#line 768 "diet.m"
  while (MR_TRUE)
#line 768 "diet.m"
    {
#line 768 "diet.m"
      /* tailcall optimized into a loop */
#line 768 "diet.m"
      {
#line 768 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_8, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_8), mercury__diet__Lo_4, mercury__diet__Hi_5);
        }
#line 768 "diet.m"
        if (mercury__diet__succeeded)
#line 765 "diet.m"
          {
#line 764 "diet.m"
            *mercury__diet__Elem_6 = mercury__diet__Lo_4;
#line 764 "diet.m"
            {
#line 764 "diet.m"
              mercury__diet__cont(mercury__diet__cont_env_ptr);
            }
#line 766 "diet.m"
            {
#line 766 "diet.m"
              MR_Box mercury__diet__V_7_7;
#line 42 "diet.m"
              MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_8, (MR_Integer) 0)), (MR_Integer) 6)));

#line 42 "diet.m"
              {
#line 42 "diet.m"
                mercury__diet__V_7_7 = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_8), mercury__diet__Lo_4);
              }
#line 766 "diet.m"
              /* direct tailcall eliminated */
#line 766 "diet.m"
              {
#line 766 "diet.m"
                MR_Box mercury__diet__Lo__tmp_copy_4 = mercury__diet__V_7_7;

#line 766 "diet.m"
                mercury__diet__Lo_4 = mercury__diet__Lo__tmp_copy_4;
#line 766 "diet.m"
              }
#line 766 "diet.m"
              continue;
#line 766 "diet.m"
            }
#line 765 "diet.m"
          }
#line 768 "diet.m"
        else
#line 769 "diet.m"
          {
#line 769 "diet.m"
            *mercury__diet__Elem_6 = mercury__diet__Lo_4;
#line 769 "diet.m"
            {
#line 769 "diet.m"
              mercury__diet__cont(mercury__diet__cont_env_ptr);
            }
#line 769 "diet.m"
          }
#line 768 "diet.m"
      }
#line 768 "diet.m"
      break;
#line 768 "diet.m"
    }
#line 757 "diet.m"
}

#line 682 "diet.m"
void MR_CALL 
mercury__diet__unexpected_interval_3_p_0(
#line 682 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_17,
#line 682 "diet.m"
  MR_String mercury__diet__PredName_4,
#line 682 "diet.m"
  MR_Box mercury__diet__X_5,
#line 682 "diet.m"
  MR_Box mercury__diet__Y_6)
#line 682 "diet.m"
{
#line 684 "diet.m"
  {
#line 684 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 684 "diet.m"
    MR_Word mercury__diet__TypeCtorInfo_13_31;
#line 684 "diet.m"
    MR_Word mercury__diet__TypeClassInfo_for_op_table_40;
#line 684 "diet.m"
    MR_Word mercury__diet__TypeCtorInfo_13_56;
#line 684 "diet.m"
    MR_Word mercury__diet__TypeClassInfo_for_op_table_65;
#line 684 "diet.m"
    MR_String mercury__diet__V_8_8;
#line 684 "diet.m"
    MR_String mercury__diet__V_10_10;
#line 684 "diet.m"
    MR_String mercury__diet__V_11_11;
#line 684 "diet.m"
    MR_String mercury__diet__V_12_12;
#line 684 "diet.m"
    MR_String mercury__diet__V_14_14;
#line 684 "diet.m"
    MR_String mercury__diet__V_15_15;
#line 684 "diet.m"
    MR_Word mercury__diet__V_10_28;
#line 684 "diet.m"
    MR_Word mercury__diet__V_9_29;
#line 684 "diet.m"
    MR_Word mercury__diet__V_11_30;
#line 684 "diet.m"
    MR_Integer mercury__diet__V_10_37;
#line 684 "diet.m"
    MR_Integer mercury__diet__V_13_38;
#line 684 "diet.m"
    MR_Word mercury__diet__V_10_53;
#line 684 "diet.m"
    MR_Word mercury__diet__V_9_54;
#line 684 "diet.m"
    MR_Word mercury__diet__V_11_55;
#line 684 "diet.m"
    MR_Integer mercury__diet__V_10_62;
#line 684 "diet.m"
    MR_Integer mercury__diet__V_13_63;
#line 37 "ops.int"
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box);
#line 37 "ops.int"
    MR_Box mercury__diet__conv1_V_13_38;
#line 37 "ops.int"
    MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);
#line 37 "ops.int"
    MR_Box mercury__diet__conv3_V_13_63;

#line 45 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 50 "string.to_string.opt"
    mercury__diet__V_10_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 12065 "diet.c"
    mercury__diet__TypeClassInfo_for_op_table_40 = (MR_Word) &mercury__diet_scalar_common_1[0];
#line 37 "ops.int"
    mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_op_table_40, (MR_Integer) 0)), (MR_Integer) 12)));
#line 37 "ops.int"
    {
#line 37 "ops.int"
      mercury__diet__conv1_V_13_38 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_op_table_40), ((MR_Box) ((MR_Integer) 0)));
    }
#line 37 "ops.int"
    mercury__diet__V_13_38 = ((MR_Integer) mercury__diet__conv1_V_13_38);
#line 56 "string.to_string.opt"
    mercury__diet__V_10_37 = (mercury__diet__V_13_38 + (MR_Integer) 1);
#line 59 "string.to_string.opt"
    {
#line 59 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__diet__TypeInfo_for_T_17, (MR_Integer) 1, mercury__diet__V_10_37, mercury__diet__X_5, mercury__diet__V_10_28, &mercury__diet__V_9_29);
    }
#line 12083 "diet.c"
    mercury__diet__TypeCtorInfo_13_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1046 "list.opt"
    {
#line 1046 "list.opt"
      mercury__list__reverse_2_p_0(mercury__diet__TypeCtorInfo_13_31, mercury__diet__V_9_29, &mercury__diet__V_11_30);
    }
#line 52 "string.to_string.opt"
    {
#line 52 "string.to_string.opt"
      mercury__diet__V_11_11 = mercury__string__append_list_1_f_0(mercury__diet__V_11_30);
    }
#line 45 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 50 "string.to_string.opt"
    mercury__diet__V_10_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 12099 "diet.c"
    mercury__diet__TypeClassInfo_for_op_table_65 = (MR_Word) &mercury__diet_scalar_common_1[0];
#line 37 "ops.int"
    mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_op_table_65, (MR_Integer) 0)), (MR_Integer) 12)));
#line 37 "ops.int"
    {
#line 37 "ops.int"
      mercury__diet__conv3_V_13_63 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_op_table_65), ((MR_Box) ((MR_Integer) 0)));
    }
#line 37 "ops.int"
    mercury__diet__V_13_63 = ((MR_Integer) mercury__diet__conv3_V_13_63);
#line 56 "string.to_string.opt"
    mercury__diet__V_10_62 = (mercury__diet__V_13_63 + (MR_Integer) 1);
#line 59 "string.to_string.opt"
    {
#line 59 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__diet__TypeInfo_for_T_17, (MR_Integer) 1, mercury__diet__V_10_62, mercury__diet__Y_6, mercury__diet__V_10_53, &mercury__diet__V_9_54);
    }
#line 12117 "diet.c"
    mercury__diet__TypeCtorInfo_13_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1046 "list.opt"
    {
#line 1046 "list.opt"
      mercury__list__reverse_2_p_0(mercury__diet__TypeCtorInfo_13_56, mercury__diet__V_9_54, &mercury__diet__V_11_55);
    }
#line 52 "string.to_string.opt"
    {
#line 52 "string.to_string.opt"
      mercury__diet__V_15_15 = mercury__string__append_list_1_f_0(mercury__diet__V_11_55);
    }
#line 157 "string.opt"
    {
#line 157 "string.opt"
      mercury__string__append_3_p_2(mercury__diet__V_15_15, (MR_String) "]", &mercury__diet__V_14_14);
    }
#line 157 "string.opt"
    {
#line 157 "string.opt"
      mercury__string__append_3_p_2((MR_String) ", ", mercury__diet__V_14_14, &mercury__diet__V_12_12);
    }
#line 157 "string.opt"
    {
#line 157 "string.opt"
      mercury__string__append_3_p_2(mercury__diet__V_11_11, mercury__diet__V_12_12, &mercury__diet__V_10_10);
    }
#line 157 "string.opt"
    {
#line 157 "string.opt"
      mercury__string__append_3_p_2((MR_String) "bad interval [", mercury__diet__V_10_10, &mercury__diet__V_8_8);
    }
#line 685 "diet.m"
    {
#line 685 "diet.m"
      mercury__require__unexpected_3_p_0((MR_String) "diet", mercury__diet__PredName_4, mercury__diet__V_8_8);
#line 685 "diet.m"
      return;
    }
#line 684 "diet.m"
  }
#line 682 "diet.m"
}

#line 653 "diet.m"
static void MR_CALL 
mercury__diet__take_min_iter_3_p_0(
#line 653 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_21,
#line 653 "diet.m"
  MR_Word mercury__diet__T0_4,
#line 653 "diet.m"
  MR_Tuple * mercury__diet__X_5,
#line 653 "diet.m"
  MR_Word * mercury__diet__T_6)
#line 653 "diet.m"
{
#line 658 "diet.m"
  while (MR_TRUE)
#line 658 "diet.m"
    {
#line 658 "diet.m"
      /* tailcall optimized into a loop */
#line 658 "diet.m"
      {
#line 658 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 658 "diet.m"
        MR_Word mercury__diet__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 3)));
#line 658 "diet.m"
        MR_Word mercury__diet__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 2)));
#line 658 "diet.m"
        MR_Tuple mercury__diet__V_28_28 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 0)));
#line 658 "diet.m"
        MR_Integer mercury__diet__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 1)));

#line 658 "diet.m"
        if ((mercury__diet__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 658 "diet.m"
          {
#line 658 "diet.m"
            *mercury__diet__X_5 = mercury__diet__V_28_28;
#line 658 "diet.m"
            *mercury__diet__T_6 = mercury__diet__V_25_25;
#line 658 "diet.m"
          }
#line 658 "diet.m"
        else
#line 660 "diet.m"
          {
#line 660 "diet.m"
            MR_Tuple mercury__diet__A_10 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__V_26_26, (MR_Integer) 0)));
#line 660 "diet.m"
            MR_Word mercury__diet__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__V_26_26, (MR_Integer) 2)));
#line 660 "diet.m"
            MR_Word mercury__diet__M_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__V_26_26, (MR_Integer) 3)));
#line 660 "diet.m"
            MR_Word mercury__diet__N0_15;
#line 660 "diet.m"
            MR_Word mercury__diet__N1_16;
#line 660 "diet.m"
            MR_Integer mercury__diet__V_18_18;
#line 660 "diet.m"
            MR_Integer mercury__diet__V_19_19;
#line 660 "diet.m"
            MR_Integer mercury__diet__V_32_32;
#line 660 "diet.m"
            MR_Integer mercury__diet__V_33_33;
#line 660 "diet.m"
            MR_Integer mercury__diet__V_34_34;
#line 660 "diet.m"
            MR_Integer mercury__diet__V_52_52;
#line 660 "diet.m"
            MR_Integer mercury__diet__V_53_53;
#line 660 "diet.m"
            MR_Integer mercury__diet__V_54_54;
#line 660 "diet.m"
            MR_Integer mercury__diet__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__V_26_26, (MR_Integer) 1)));
#line 513 "diet.m"
            MR_Tuple mercury__diet__V_59_59;
#line 513 "diet.m"
            MR_Word mercury__diet__V_61_61;
#line 513 "diet.m"
            MR_Word mercury__diet__V_62_62;

#line 512 "diet.m"
            if ((mercury__diet__M_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
              mercury__diet__V_33_33 = (MR_Integer) 0;
#line 512 "diet.m"
            else
#line 513 "diet.m"
              {
#line 513 "diet.m"
                MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__M_13, (MR_Integer) 0)));
#line 513 "diet.m"
                MR_Word mercury__diet__V_37_37;
#line 513 "diet.m"
                MR_Word mercury__diet__V_38_38;

#line 513 "diet.m"
                mercury__diet__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__M_13, (MR_Integer) 1)));
#line 513 "diet.m"
                mercury__diet__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__M_13, (MR_Integer) 2)));
#line 513 "diet.m"
                mercury__diet__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__M_13, (MR_Integer) 3)));
#line 513 "diet.m"
              }
#line 512 "diet.m"
            if ((mercury__diet__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
              mercury__diet__V_34_34 = (MR_Integer) 0;
#line 512 "diet.m"
            else
#line 513 "diet.m"
              {
#line 513 "diet.m"
                MR_Tuple mercury__diet__V_39_39 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__V_25_25, (MR_Integer) 0)));
#line 513 "diet.m"
                MR_Word mercury__diet__V_41_41;
#line 513 "diet.m"
                MR_Word mercury__diet__V_42_42;

#line 513 "diet.m"
                mercury__diet__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__V_25_25, (MR_Integer) 1)));
#line 513 "diet.m"
                mercury__diet__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__V_25_25, (MR_Integer) 2)));
#line 513 "diet.m"
                mercury__diet__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__V_25_25, (MR_Integer) 3)));
#line 513 "diet.m"
              }
#line 211 "int.opt"
            mercury__diet__succeeded = (mercury__diet__V_33_33 > mercury__diet__V_34_34);
#line 214 "int.opt"
            if (mercury__diet__succeeded)
#line 213 "int.opt"
              mercury__diet__V_32_32 = mercury__diet__V_33_33;
#line 214 "int.opt"
            else
#line 215 "int.opt"
              mercury__diet__V_32_32 = mercury__diet__V_34_34;
#line 517 "diet.m"
            mercury__diet__V_18_18 = ((MR_Integer) 1 + mercury__diet__V_32_32);
#line 661 "diet.m"
            {
#line 661 "diet.m"
              mercury__diet__N0_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 661 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N0_15, 0) = ((MR_Box) (mercury__diet__V_28_28));
#line 661 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N0_15, 1) = ((MR_Box) (mercury__diet__V_18_18));
#line 661 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N0_15, 2) = ((MR_Box) (mercury__diet__M_13));
#line 661 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N0_15, 3) = ((MR_Box) (mercury__diet__V_25_25));
#line 661 "diet.m"
            }
#line 512 "diet.m"
            if ((mercury__diet__L_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
              mercury__diet__V_53_53 = (MR_Integer) 0;
#line 512 "diet.m"
            else
#line 513 "diet.m"
              {
#line 513 "diet.m"
                MR_Tuple mercury__diet__V_55_55 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_12, (MR_Integer) 0)));
#line 513 "diet.m"
                MR_Word mercury__diet__V_57_57;
#line 513 "diet.m"
                MR_Word mercury__diet__V_58_58;

#line 513 "diet.m"
                mercury__diet__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_12, (MR_Integer) 1)));
#line 513 "diet.m"
                mercury__diet__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_12, (MR_Integer) 2)));
#line 513 "diet.m"
                mercury__diet__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_12, (MR_Integer) 3)));
#line 513 "diet.m"
              }
#line 513 "diet.m"
            mercury__diet__V_59_59 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__N0_15, (MR_Integer) 0)));
#line 513 "diet.m"
            mercury__diet__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__N0_15, (MR_Integer) 1)));
#line 513 "diet.m"
            mercury__diet__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__N0_15, (MR_Integer) 2)));
#line 513 "diet.m"
            mercury__diet__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__N0_15, (MR_Integer) 3)));
#line 211 "int.opt"
            mercury__diet__succeeded = (mercury__diet__V_53_53 > mercury__diet__V_54_54);
#line 214 "int.opt"
            if (mercury__diet__succeeded)
#line 213 "int.opt"
              mercury__diet__V_52_52 = mercury__diet__V_53_53;
#line 214 "int.opt"
            else
#line 215 "int.opt"
              mercury__diet__V_52_52 = mercury__diet__V_54_54;
#line 517 "diet.m"
            mercury__diet__V_19_19 = ((MR_Integer) 1 + mercury__diet__V_52_52);
#line 662 "diet.m"
            {
#line 662 "diet.m"
              mercury__diet__N1_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 662 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N1_16, 0) = ((MR_Box) (mercury__diet__A_10));
#line 662 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N1_16, 1) = ((MR_Box) (mercury__diet__V_19_19));
#line 662 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N1_16, 2) = ((MR_Box) (mercury__diet__L_12));
#line 662 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N1_16, 3) = ((MR_Box) (mercury__diet__N0_15));
#line 662 "diet.m"
            }
#line 663 "diet.m"
            /* direct tailcall eliminated */
#line 663 "diet.m"
            {
#line 663 "diet.m"
              MR_Word mercury__diet__T0__tmp_copy_4 = mercury__diet__N1_16;

#line 663 "diet.m"
              mercury__diet__T0_4 = mercury__diet__T0__tmp_copy_4;
#line 663 "diet.m"
            }
#line 663 "diet.m"
            continue;
#line 660 "diet.m"
          }
#line 658 "diet.m"
      }
#line 658 "diet.m"
      break;
#line 658 "diet.m"
    }
#line 653 "diet.m"
}

#line 632 "diet.m"
static MR_Word MR_CALL 
mercury__diet__reroot_2_f_0(
#line 632 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_25,
#line 632 "diet.m"
  MR_Word mercury__diet__L_4,
#line 632 "diet.m"
  MR_Word mercury__diet__R_5)
#line 632 "diet.m"
{
#line 644 "diet.m"
  {
#line 644 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 644 "diet.m"
    MR_Word mercury__diet__T_6;
#line 635 "diet.m"
    MR_Integer mercury__diet__V_18_18;
#line 635 "diet.m"
    MR_Integer mercury__diet__V_19_19;
#line 134 "private_builtin.opt"
    MR_Word mercury__diet__TypeInfo_27_27;
#line 134 "private_builtin.opt"
    MR_Word mercury__diet__TypeInfo_28_28;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__reroot_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_25 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 12436 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_27_27  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 512 "diet.m"
    if ((mercury__diet__L_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
      mercury__diet__V_18_18 = (MR_Integer) 0;
#line 512 "diet.m"
    else
#line 513 "diet.m"
      {
#line 513 "diet.m"
        MR_Tuple mercury__diet__V_29_29 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_4, (MR_Integer) 0)));
#line 513 "diet.m"
        MR_Word mercury__diet__V_31_31;
#line 513 "diet.m"
        MR_Word mercury__diet__V_32_32;

#line 513 "diet.m"
        mercury__diet__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_4, (MR_Integer) 1)));
#line 513 "diet.m"
        mercury__diet__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_4, (MR_Integer) 2)));
#line 513 "diet.m"
        mercury__diet__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_4, (MR_Integer) 3)));
#line 513 "diet.m"
      }
#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__reroot_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_25 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 12481 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_28_28  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 512 "diet.m"
    if ((mercury__diet__R_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
      mercury__diet__V_19_19 = (MR_Integer) 0;
#line 512 "diet.m"
    else
#line 513 "diet.m"
      {
#line 513 "diet.m"
        MR_Tuple mercury__diet__V_33_33 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__R_5, (MR_Integer) 0)));
#line 513 "diet.m"
        MR_Word mercury__diet__V_35_35;
#line 513 "diet.m"
        MR_Word mercury__diet__V_36_36;

#line 513 "diet.m"
        mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__R_5, (MR_Integer) 1)));
#line 513 "diet.m"
        mercury__diet__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_5, (MR_Integer) 2)));
#line 513 "diet.m"
        mercury__diet__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_5, (MR_Integer) 3)));
#line 513 "diet.m"
      }
#line 493 "diet.m"
    mercury__diet__succeeded = (mercury__diet__V_18_18 > mercury__diet__V_19_19);
#line 644 "diet.m"
    if (mercury__diet__succeeded)
#line 639 "diet.m"
      if ((mercury__diet__L_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 637 "diet.m"
        {
#line 638 "diet.m"
          {
#line 638 "diet.m"
            mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.reroot\'/2", (MR_String) "L empty");
          }
#line 637 "diet.m"
        }
#line 639 "diet.m"
      else
#line 640 "diet.m"
        {
#line 640 "diet.m"
          MR_Tuple mercury__diet__I_11;
#line 640 "diet.m"
          MR_Word mercury__diet__L1_12;

#line 641 "diet.m"
          {
#line 641 "diet.m"
            mercury__diet__take_max_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__L_4, &mercury__diet__I_11, &mercury__diet__L1_12);
          }
#line 642 "diet.m"
          {
#line 642 "diet.m"
            mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__I_11, mercury__diet__L1_12, mercury__diet__R_5);
          }
#line 640 "diet.m"
        }
#line 644 "diet.m"
    else
#line 647 "diet.m"
    if ((mercury__diet__R_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 646 "diet.m"
      mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 647 "diet.m"
    else
#line 648 "diet.m"
      {
#line 648 "diet.m"
        MR_Word mercury__diet__R1_17;
#line 648 "diet.m"
        MR_Tuple mercury__diet__I_23;

#line 649 "diet.m"
        {
#line 649 "diet.m"
          mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__R_5, &mercury__diet__I_23, &mercury__diet__R1_17);
        }
#line 650 "diet.m"
        {
#line 650 "diet.m"
          mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__I_23, mercury__diet__L_4, mercury__diet__R1_17);
        }
#line 648 "diet.m"
      }
#line 644 "diet.m"
    return mercury__diet__T_6;
#line 644 "diet.m"
  }
#line 632 "diet.m"
}

#line 620 "diet.m"
static void MR_CALL 
mercury__diet__take_max_3_p_0(
#line 620 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 620 "diet.m"
  MR_Word mercury__diet__T0_4,
#line 620 "diet.m"
  MR_Tuple * mercury__diet__X_5,
#line 620 "diet.m"
  MR_Word * mercury__diet__T_6)
#line 620 "diet.m"
{
#line 625 "diet.m"
  {
#line 625 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 625 "diet.m"
    MR_Word mercury__diet__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 3)));
#line 625 "diet.m"
    MR_Word mercury__diet__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 2)));
#line 625 "diet.m"
    MR_Tuple mercury__diet__V_23_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 0)));
#line 625 "diet.m"
    MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 1)));

#line 625 "diet.m"
    if ((mercury__diet__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 625 "diet.m"
      {
#line 625 "diet.m"
        *mercury__diet__X_5 = mercury__diet__V_23_23;
#line 625 "diet.m"
        *mercury__diet__T_6 = mercury__diet__V_21_21;
#line 625 "diet.m"
      }
#line 625 "diet.m"
    else
#line 627 "diet.m"
      {
#line 627 "diet.m"
        MR_Word mercury__diet__R1_16;

#line 628 "diet.m"
        {
#line 628 "diet.m"
          mercury__diet__take_max_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__V_20_20, mercury__diet__X_5, &mercury__diet__R1_16);
        }
#line 629 "diet.m"
        {
#line 629 "diet.m"
          *mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__V_23_23, mercury__diet__V_21_21, mercury__diet__R1_16);
        }
#line 627 "diet.m"
      }
#line 625 "diet.m"
  }
#line 620 "diet.m"
}

#line 608 "diet.m"
static void MR_CALL 
mercury__diet__take_min_3_p_0(
#line 608 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 608 "diet.m"
  MR_Word mercury__diet__T0_4,
#line 608 "diet.m"
  MR_Tuple * mercury__diet__X_5,
#line 608 "diet.m"
  MR_Word * mercury__diet__T_6)
#line 608 "diet.m"
{
#line 613 "diet.m"
  {
#line 613 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 613 "diet.m"
    MR_Word mercury__diet__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 3)));
#line 613 "diet.m"
    MR_Word mercury__diet__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 2)));
#line 613 "diet.m"
    MR_Tuple mercury__diet__V_23_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 0)));
#line 613 "diet.m"
    MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 1)));

#line 613 "diet.m"
    if ((mercury__diet__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 613 "diet.m"
      {
#line 613 "diet.m"
        *mercury__diet__X_5 = mercury__diet__V_23_23;
#line 613 "diet.m"
        *mercury__diet__T_6 = mercury__diet__V_20_20;
#line 613 "diet.m"
      }
#line 613 "diet.m"
    else
#line 615 "diet.m"
      {
#line 615 "diet.m"
        MR_Word mercury__diet__L1_16;

#line 616 "diet.m"
        {
#line 616 "diet.m"
          mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__V_21_21, mercury__diet__X_5, &mercury__diet__L1_16);
        }
#line 617 "diet.m"
        {
#line 617 "diet.m"
          *mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__V_23_23, mercury__diet__L1_16, mercury__diet__V_20_20);
        }
#line 615 "diet.m"
      }
#line 613 "diet.m"
  }
#line 608 "diet.m"
}

#line 569 "diet.m"
static MR_Word MR_CALL 
mercury__diet__join_3_f_0(
#line 569 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
#line 569 "diet.m"
  MR_Tuple mercury__diet__V_5,
#line 569 "diet.m"
  MR_Word mercury__diet__L_6,
#line 569 "diet.m"
  MR_Word mercury__diet__R_7)
#line 569 "diet.m"
{
#line 573 "diet.m"
  {
#line 573 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 573 "diet.m"
    MR_Word mercury__diet__T_8;

#line 573 "diet.m"
    if ((mercury__diet__L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 573 "diet.m"
      {
#line 574 "diet.m"
        {
#line 574 "diet.m"
          mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0((MR_Integer) 1, mercury__diet__V_5, mercury__diet__R_7);
        }
#line 573 "diet.m"
      }
#line 573 "diet.m"
    else
#line 573 "diet.m"
      {
#line 573 "diet.m"
        MR_Word mercury__diet__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 3)));
#line 573 "diet.m"
        MR_Word mercury__diet__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 2)));
#line 573 "diet.m"
        MR_Integer mercury__diet__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 1)));
#line 573 "diet.m"
        MR_Tuple mercury__diet__V_43_43 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 0)));

#line 573 "diet.m"
        if ((mercury__diet__R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 576 "diet.m"
          {
#line 578 "diet.m"
            {
#line 578 "diet.m"
              mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0((MR_Integer) 0, mercury__diet__V_5, mercury__diet__L_6);
            }
#line 576 "diet.m"
          }
#line 573 "diet.m"
        else
#line 580 "diet.m"
          {
#line 580 "diet.m"
            MR_Tuple mercury__diet__RX_17 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 0)));
#line 580 "diet.m"
            MR_Integer mercury__diet__RH_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 1)));
#line 580 "diet.m"
            MR_Word mercury__diet__RL_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 2)));
#line 580 "diet.m"
            MR_Word mercury__diet__RR_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 3)));
#line 582 "diet.m"
            MR_Integer mercury__diet__V_21_21 = (mercury__diet__RH_18 + (MR_Integer) 1);

#line 493 "diet.m"
            mercury__diet__succeeded = (mercury__diet__V_42_42 > mercury__diet__V_21_21);
#line 584 "diet.m"
            if (mercury__diet__succeeded)
#line 583 "diet.m"
              {
#line 583 "diet.m"
                MR_Word mercury__diet__V_23_23;

#line 583 "diet.m"
                {
#line 583 "diet.m"
                  mercury__diet__V_23_23 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_29, mercury__diet__V_5, mercury__diet__V_40_40, mercury__diet__R_7);
                }
#line 583 "diet.m"
                {
#line 583 "diet.m"
                  mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_43_43, mercury__diet__V_41_41, mercury__diet__V_23_23);
                }
#line 583 "diet.m"
              }
#line 584 "diet.m"
            else
#line 586 "diet.m"
              {
#line 584 "diet.m"
                MR_Integer mercury__diet__V_24_24 = (mercury__diet__V_42_42 + (MR_Integer) 1);

#line 493 "diet.m"
                mercury__diet__succeeded = (mercury__diet__RH_18 > mercury__diet__V_24_24);
#line 586 "diet.m"
                if (mercury__diet__succeeded)
#line 585 "diet.m"
                  {
#line 585 "diet.m"
                    MR_Word mercury__diet__V_26_26;

#line 585 "diet.m"
                    {
#line 585 "diet.m"
                      mercury__diet__V_26_26 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_29, mercury__diet__V_5, mercury__diet__L_6, mercury__diet__RL_19);
                    }
#line 585 "diet.m"
                    {
#line 585 "diet.m"
                      mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__RX_17, mercury__diet__V_26_26, mercury__diet__RR_20);
                    }
#line 585 "diet.m"
                  }
#line 586 "diet.m"
                else
#line 587 "diet.m"
                  {
#line 587 "diet.m"
                    mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_5, mercury__diet__L_6, mercury__diet__R_7);
                  }
#line 586 "diet.m"
              }
#line 580 "diet.m"
          }
#line 573 "diet.m"
      }
#line 573 "diet.m"
    return mercury__diet__T_8;
#line 573 "diet.m"
  }
#line 569 "diet.m"
}

#line 506 "diet.m"
MR_Word MR_CALL 
mercury__diet__singleton_1_f_0(
#line 506 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_7,
#line 506 "diet.m"
  MR_Tuple mercury__diet__Z_3)
#line 506 "diet.m"
{
#line 508 "diet.m"
  {
#line 508 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 508 "diet.m"
    MR_Word mercury__diet__HeadVar__2_2;
#line 508 "diet.m"
    MR_Word mercury__diet__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 508 "diet.m"
    MR_Word mercury__diet__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 508 "diet.m"
    {
#line 508 "diet.m"
      mercury__diet__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 508 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 0) = ((MR_Box) (mercury__diet__Z_3));
#line 508 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 1));
#line 508 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 2) = ((MR_Box) (mercury__diet__V_5_5));
#line 508 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 3) = ((MR_Box) (mercury__diet__V_6_6));
#line 508 "diet.m"
    }
#line 508 "diet.m"
    return mercury__diet__HeadVar__2_2;
#line 508 "diet.m"
  }
#line 506 "diet.m"
}

#line 486 "diet.m"
static MR_Box MR_CALL 
mercury__diet__max_elem_2_f_0(
#line 486 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_6,
#line 486 "diet.m"
  MR_Box mercury__diet__X_4,
#line 486 "diet.m"
  MR_Box mercury__diet__Y_5)
#line 486 "diet.m"
{
#line 488 "diet.m"
  {
#line 488 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 488 "diet.m"
    MR_Box mercury__diet__HeadVar__3_3;
#line 39 "diet.m"
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_6, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
    {
#line 39 "diet.m"
      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_6), mercury__diet__Y_5, mercury__diet__X_4);
    }
#line 488 "diet.m"
    if (mercury__diet__succeeded)
#line 488 "diet.m"
      mercury__diet__HeadVar__3_3 = mercury__diet__X_4;
#line 488 "diet.m"
    else
#line 488 "diet.m"
      mercury__diet__HeadVar__3_3 = mercury__diet__Y_5;
#line 488 "diet.m"
    return mercury__diet__HeadVar__3_3;
#line 488 "diet.m"
  }
#line 486 "diet.m"
}

#line 482 "diet.m"
static MR_Box MR_CALL 
mercury__diet__min_elem_2_f_0(
#line 482 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_6,
#line 482 "diet.m"
  MR_Box mercury__diet__X_4,
#line 482 "diet.m"
  MR_Box mercury__diet__Y_5)
#line 482 "diet.m"
{
#line 484 "diet.m"
  {
#line 484 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 484 "diet.m"
    MR_Box mercury__diet__HeadVar__3_3;
#line 39 "diet.m"
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_6, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
    {
#line 39 "diet.m"
      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_6), mercury__diet__X_4, mercury__diet__Y_5);
    }
#line 484 "diet.m"
    if (mercury__diet__succeeded)
#line 484 "diet.m"
      mercury__diet__HeadVar__3_3 = mercury__diet__X_4;
#line 484 "diet.m"
    else
#line 484 "diet.m"
      mercury__diet__HeadVar__3_3 = mercury__diet__Y_5;
#line 484 "diet.m"
    return mercury__diet__HeadVar__3_3;
#line 484 "diet.m"
  }
#line 482 "diet.m"
}

#line 477 "diet.m"
MR_bool MR_CALL 
mercury__diet__f_less_or_equal_2_p_0(
#line 477 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
#line 477 "diet.m"
  MR_Box mercury__diet__X_3,
#line 477 "diet.m"
  MR_Box mercury__diet__Y_4)
#line 477 "diet.m"
{
#line 480 "diet.m"
  {
#line 480 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_5, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
    {
#line 39 "diet.m"
      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_5), mercury__diet__Y_4, mercury__diet__X_3);
    }
#line 480 "diet.m"
    mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 480 "diet.m"
    return mercury__diet__succeeded;
#line 480 "diet.m"
  }
#line 477 "diet.m"
}

#line 386 "diet.m"
void MR_CALL 
mercury__diet__from_interval_list_2_p_0(
#line 386 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
#line 386 "diet.m"
  MR_Word mercury__diet__List_3,
#line 386 "diet.m"
  MR_Word * mercury__diet__Set_4)
#line 386 "diet.m"
{
#line 1797 "diet.m"
  {
#line 1797 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1797 "diet.m"
    MR_Word mercury__diet__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1798 "diet.m"
    {
#line 1798 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__List_3, mercury__diet__V_6_6, mercury__diet__Set_4);
    }
#line 1797 "diet.m"
  }
#line 386 "diet.m"
}

#line 378 "diet.m"
void MR_CALL 
mercury__diet__to_sorted_interval_list_2_p_0(
#line 378 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
#line 378 "diet.m"
  MR_Word mercury__diet__Set_3,
#line 378 "diet.m"
  MR_Word * mercury__diet__List_4)
#line 378 "diet.m"
{
#line 1789 "diet.m"
  {
#line 1789 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1789 "diet.m"
    MR_Word mercury__diet__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1790 "diet.m"
    {
#line 1790 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__Set_3, mercury__diet__V_6_6, mercury__diet__List_4);
    }
#line 1789 "diet.m"
  }
#line 378 "diet.m"
}

#line 372 "diet.m"
void MR_CALL 
mercury__diet__to_sorted_list_2_p_0(
#line 372 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
#line 372 "diet.m"
  MR_Word mercury__diet__T_3,
#line 372 "diet.m"
  MR_Word * mercury__diet__List_4)
#line 372 "diet.m"
{
#line 1786 "diet.m"
  {
#line 1786 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1786 "diet.m"
    MR_Word mercury__diet__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1787 "diet.m"
    {
#line 1787 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__T_3, mercury__diet__V_6_6, mercury__diet__List_4);
    }
#line 1786 "diet.m"
  }
#line 372 "diet.m"
}

#line 371 "diet.m"
MR_Word MR_CALL 
mercury__diet__to_sorted_list_1_f_0(
#line 371 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
#line 371 "diet.m"
  MR_Word mercury__diet__T_3)
#line 371 "diet.m"
{
#line 1786 "diet.m"
  {
#line 1786 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1786 "diet.m"
    MR_Word mercury__diet__List_4;
#line 1786 "diet.m"
    MR_Word mercury__diet__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1787 "diet.m"
    {
#line 1787 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__T_3, mercury__diet__V_9_9, &mercury__diet__List_4);
    }
#line 1786 "diet.m"
    return mercury__diet__List_4;
#line 1786 "diet.m"
  }
#line 371 "diet.m"
}

#line 365 "diet.m"
void MR_CALL 
mercury__diet__sorted_list_to_set_2_p_0(
#line 365 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
#line 365 "diet.m"
  MR_Word mercury__diet__List_3,
#line 365 "diet.m"
  MR_Word * mercury__diet__Set_4)
#line 365 "diet.m"
{
#line 1781 "diet.m"
  {
#line 1781 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1781 "diet.m"
    {
#line 1781 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__List_3, mercury__diet__Set_4);
    }
#line 1781 "diet.m"
  }
#line 365 "diet.m"
}

#line 364 "diet.m"
MR_Word MR_CALL 
mercury__diet__sorted_list_to_set_1_f_0(
#line 364 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
#line 364 "diet.m"
  MR_Word mercury__diet__List_3)
#line 364 "diet.m"
{
#line 1781 "diet.m"
  {
#line 1781 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1781 "diet.m"
    MR_Word mercury__diet__Set_4;

#line 1781 "diet.m"
    {
#line 1781 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__List_3, &mercury__diet__Set_4);
    }
#line 1781 "diet.m"
    return mercury__diet__Set_4;
#line 1781 "diet.m"
  }
#line 364 "diet.m"
}

#line 359 "diet.m"
void MR_CALL 
mercury__diet__from_list_2_p_0(
#line 359 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
#line 359 "diet.m"
  MR_Word mercury__diet__List_3,
#line 359 "diet.m"
  MR_Word * mercury__diet__Set_4)
#line 359 "diet.m"
{
#line 1775 "diet.m"
  {
#line 1775 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1775 "diet.m"
    {
#line 1775 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__List_3, mercury__diet__Set_4);
    }
#line 1775 "diet.m"
  }
#line 359 "diet.m"
}

#line 358 "diet.m"
MR_Word MR_CALL 
mercury__diet__from_list_1_f_0(
#line 358 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
#line 358 "diet.m"
  MR_Word mercury__diet__List_3)
#line 358 "diet.m"
{
#line 1772 "diet.m"
  {
#line 1772 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1772 "diet.m"
    MR_Word mercury__diet__Set_4;

#line 1772 "diet.m"
    {
#line 1772 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__List_3, &mercury__diet__Set_4);
    }
#line 1772 "diet.m"
    return mercury__diet__Set_4;
#line 1772 "diet.m"
  }
#line 358 "diet.m"
}

#line 356 "diet.m"
void MR_CALL 
mercury__diet__list_to_set_2_p_0(
#line 356 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
#line 356 "diet.m"
  MR_Word mercury__diet__List_3,
#line 356 "diet.m"
  MR_Word * mercury__diet__Set_4)
#line 356 "diet.m"
{
#line 1768 "diet.m"
  {
#line 1768 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1768 "diet.m"
    MR_Word mercury__diet__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1769 "diet.m"
    {
#line 1769 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__List_3, mercury__diet__V_6_6, mercury__diet__Set_4);
    }
#line 1768 "diet.m"
  }
#line 356 "diet.m"
}

#line 355 "diet.m"
MR_Word MR_CALL 
mercury__diet__list_to_set_1_f_0(
#line 355 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
#line 355 "diet.m"
  MR_Word mercury__diet__List_3)
#line 355 "diet.m"
{
#line 1766 "diet.m"
  {
#line 1766 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1766 "diet.m"
    MR_Word mercury__diet__Set_4;

#line 1766 "diet.m"
    {
#line 1766 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__List_3, &mercury__diet__Set_4);
    }
#line 1766 "diet.m"
    return mercury__diet__Set_4;
#line 1766 "diet.m"
  }
#line 355 "diet.m"
}

#line 351 "diet.m"
void MR_CALL 
mercury__diet__filter_4_p_0(
#line 351 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_9,
#line 351 "diet.m"
  MR_Word mercury__diet__Pred_5,
#line 351 "diet.m"
  MR_Word mercury__diet__Set_6,
#line 351 "diet.m"
  MR_Word * mercury__diet__TrueSet_7,
#line 351 "diet.m"
  MR_Word * mercury__diet__FalseSet_8)
#line 351 "diet.m"
{
#line 1761 "diet.m"
  {
#line 1761 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1761 "diet.m"
    {
#line 1761 "diet.m"
      mercury__diet__divide_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_9, mercury__diet__Pred_5, mercury__diet__Set_6, mercury__diet__TrueSet_7, mercury__diet__FalseSet_8);
    }
#line 1761 "diet.m"
  }
#line 351 "diet.m"
}

#line 345 "diet.m"
MR_Word MR_CALL 
mercury__diet__filter_2_f_0(
#line 345 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
#line 345 "diet.m"
  MR_Word mercury__diet__Pred_4,
#line 345 "diet.m"
  MR_Word mercury__diet__Set_5)
#line 345 "diet.m"
{
#line 1758 "diet.m"
  {
#line 1758 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1758 "diet.m"
    MR_Word mercury__diet__TrueSet_6;
#line 1758 "diet.m"
    MR_Word mercury__diet___FalseSet_7;

#line 1758 "diet.m"
    {
#line 1758 "diet.m"
      mercury__diet__divide_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__Pred_4, mercury__diet__Set_5, &mercury__diet__TrueSet_6, &mercury__diet___FalseSet_7);
    }
#line 1758 "diet.m"
    return mercury__diet__TrueSet_6;
#line 1758 "diet.m"
  }
#line 345 "diet.m"
}

#line 338 "diet.m"
MR_bool MR_CALL 
mercury__diet__all_true_2_p_0(
#line 338 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_11,
#line 338 "diet.m"
  MR_Word mercury__diet__P_3,
#line 338 "diet.m"
  MR_Word mercury__diet__Set_4)
#line 338 "diet.m"
{
#line 1736 "diet.m"
  while (MR_TRUE)
#line 1736 "diet.m"
    {
#line 1736 "diet.m"
      /* tailcall optimized into a loop */
#line 1736 "diet.m"
      {
#line 1736 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1736 "diet.m"
        if ((mercury__diet__Set_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1736 "diet.m"
          mercury__diet__succeeded = MR_TRUE;
#line 1736 "diet.m"
        else
#line 1738 "diet.m"
          {
#line 1738 "diet.m"
            MR_Box mercury__diet__X_5;
#line 1738 "diet.m"
            MR_Box mercury__diet__Y_6;
#line 1738 "diet.m"
            MR_Word mercury__diet__L_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_4, (MR_Integer) 2)));
#line 1738 "diet.m"
            MR_Word mercury__diet__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_4, (MR_Integer) 3)));
#line 1738 "diet.m"
            MR_Tuple mercury__diet__V_10_10 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set_4, (MR_Integer) 0)));
#line 1738 "diet.m"
            MR_Integer mercury__diet__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set_4, (MR_Integer) 1)));

#line 1738 "diet.m"
            mercury__diet__X_5 = (MR_hl_field(MR_mktag(0), mercury__diet__V_10_10, (MR_Integer) 0));
#line 1738 "diet.m"
            mercury__diet__Y_6 = (MR_hl_field(MR_mktag(0), mercury__diet__V_10_10, (MR_Integer) 1));
#line 1739 "diet.m"
            {
#line 1739 "diet.m"
              mercury__diet__succeeded = mercury__diet__all_true_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_11, mercury__diet__P_3, mercury__diet__L_8);
            }
#line 1738 "diet.m"
            if (mercury__diet__succeeded)
#line 1738 "diet.m"
              {
#line 1740 "diet.m"
                {
#line 1740 "diet.m"
                  mercury__diet__succeeded = mercury__diet__all_true_interval_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_11, mercury__diet__P_3, mercury__diet__X_5, mercury__diet__Y_6);
                }
#line 1738 "diet.m"
                if (mercury__diet__succeeded)
#line 1741 "diet.m"
                  {
#line 1741 "diet.m"
                    /* direct tailcall eliminated */
#line 1741 "diet.m"
                    {
#line 1741 "diet.m"
                      MR_Word mercury__diet__Set__tmp_copy_4 = mercury__diet__R_9;

#line 1741 "diet.m"
                      mercury__diet__Set_4 = mercury__diet__Set__tmp_copy_4;
#line 1741 "diet.m"
                    }
#line 1741 "diet.m"
                    continue;
#line 1741 "diet.m"
                  }
#line 1738 "diet.m"
              }
#line 1738 "diet.m"
          }
#line 1736 "diet.m"
        return mercury__diet__succeeded;
#line 1736 "diet.m"
      }
#line 1736 "diet.m"
      break;
#line 1736 "diet.m"
    }
#line 338 "diet.m"
}

#line 333 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldr_4_p_5(
#line 333 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 333 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 333 "diet.m"
  MR_Word mercury__diet__P_5,
#line 333 "diet.m"
  MR_Word mercury__diet__T_6,
#line 333 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 333 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 333 "diet.m"
{
#line 1709 "diet.m"
  while (MR_TRUE)
#line 1709 "diet.m"
    {
#line 1709 "diet.m"
      /* tailcall optimized into a loop */
#line 1709 "diet.m"
      {
#line 1709 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1709 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1708 "diet.m"
          {
#line 1708 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1708 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1708 "diet.m"
          }
#line 1709 "diet.m"
        else
#line 1710 "diet.m"
          {
#line 1710 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1710 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1710 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1710 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1710 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1710 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1710 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1710 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1710 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1710 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1711 "diet.m"
            {
#line 1711 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldr_4_p_5(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1710 "diet.m"
            if (mercury__diet__succeeded)
#line 1710 "diet.m"
              {
#line 1712 "diet.m"
                {
#line 1712 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_down_5_p_5(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1710 "diet.m"
                if (mercury__diet__succeeded)
#line 1713 "diet.m"
                  {
#line 1713 "diet.m"
                    /* direct tailcall eliminated */
#line 1713 "diet.m"
                    {
#line 1713 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1713 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1713 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1713 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1713 "diet.m"
                    }
#line 1713 "diet.m"
                    continue;
#line 1713 "diet.m"
                  }
#line 1710 "diet.m"
              }
#line 1710 "diet.m"
          }
#line 1709 "diet.m"
        return mercury__diet__succeeded;
#line 1709 "diet.m"
      }
#line 1709 "diet.m"
      break;
#line 1709 "diet.m"
    }
#line 333 "diet.m"
}

#line 332 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldr_4_p_4(
#line 332 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 332 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 332 "diet.m"
  MR_Word mercury__diet__P_5,
#line 332 "diet.m"
  MR_Word mercury__diet__T_6,
#line 332 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 332 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 332 "diet.m"
{
#line 1709 "diet.m"
  while (MR_TRUE)
#line 1709 "diet.m"
    {
#line 1709 "diet.m"
      /* tailcall optimized into a loop */
#line 1709 "diet.m"
      {
#line 1709 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1709 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1708 "diet.m"
          {
#line 1708 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1708 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1708 "diet.m"
          }
#line 1709 "diet.m"
        else
#line 1710 "diet.m"
          {
#line 1710 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1710 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1710 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1710 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1710 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1710 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1710 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1710 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1710 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1710 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1711 "diet.m"
            {
#line 1711 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldr_4_p_4(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1710 "diet.m"
            if (mercury__diet__succeeded)
#line 1710 "diet.m"
              {
#line 1712 "diet.m"
                {
#line 1712 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_down_5_p_4(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1710 "diet.m"
                if (mercury__diet__succeeded)
#line 1713 "diet.m"
                  {
#line 1713 "diet.m"
                    /* direct tailcall eliminated */
#line 1713 "diet.m"
                    {
#line 1713 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1713 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1713 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1713 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1713 "diet.m"
                    }
#line 1713 "diet.m"
                    continue;
#line 1713 "diet.m"
                  }
#line 1710 "diet.m"
              }
#line 1710 "diet.m"
          }
#line 1709 "diet.m"
        return mercury__diet__succeeded;
#line 1709 "diet.m"
      }
#line 1709 "diet.m"
      break;
#line 1709 "diet.m"
    }
#line 332 "diet.m"
}

#line 331 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldr_4_p_3(
#line 331 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 331 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 331 "diet.m"
  MR_Word mercury__diet__P_5,
#line 331 "diet.m"
  MR_Word mercury__diet__T_6,
#line 331 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 331 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 331 "diet.m"
{
#line 1709 "diet.m"
  while (MR_TRUE)
#line 1709 "diet.m"
    {
#line 1709 "diet.m"
      /* tailcall optimized into a loop */
#line 1709 "diet.m"
      {
#line 1709 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1709 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1708 "diet.m"
          {
#line 1708 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1708 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1708 "diet.m"
          }
#line 1709 "diet.m"
        else
#line 1710 "diet.m"
          {
#line 1710 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1710 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1710 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1710 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1710 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1710 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1710 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1710 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1710 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1710 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1711 "diet.m"
            {
#line 1711 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldr_4_p_3(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1710 "diet.m"
            if (mercury__diet__succeeded)
#line 1710 "diet.m"
              {
#line 1712 "diet.m"
                {
#line 1712 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_down_5_p_3(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1710 "diet.m"
                if (mercury__diet__succeeded)
#line 1713 "diet.m"
                  {
#line 1713 "diet.m"
                    /* direct tailcall eliminated */
#line 1713 "diet.m"
                    {
#line 1713 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1713 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1713 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1713 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1713 "diet.m"
                    }
#line 1713 "diet.m"
                    continue;
#line 1713 "diet.m"
                  }
#line 1710 "diet.m"
              }
#line 1710 "diet.m"
          }
#line 1709 "diet.m"
        return mercury__diet__succeeded;
#line 1709 "diet.m"
      }
#line 1709 "diet.m"
      break;
#line 1709 "diet.m"
    }
#line 331 "diet.m"
}

#line 330 "diet.m"
void MR_CALL 
mercury__diet__foldr_4_p_2(
#line 330 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 330 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 330 "diet.m"
  MR_Word mercury__diet__P_5,
#line 330 "diet.m"
  MR_Word mercury__diet__T_6,
#line 330 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 330 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 330 "diet.m"
{
#line 1709 "diet.m"
  while (MR_TRUE)
#line 1709 "diet.m"
    {
#line 1709 "diet.m"
      /* tailcall optimized into a loop */
#line 1709 "diet.m"
      {
#line 1709 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1709 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1708 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1709 "diet.m"
        else
#line 1710 "diet.m"
          {
#line 1710 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1710 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1710 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1710 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1710 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1710 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1710 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1710 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1710 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1710 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1711 "diet.m"
            {
#line 1711 "diet.m"
              mercury__diet__foldr_4_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1712 "diet.m"
            {
#line 1712 "diet.m"
              mercury__diet__fold_down_5_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1713 "diet.m"
            /* direct tailcall eliminated */
#line 1713 "diet.m"
            {
#line 1713 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1713 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1713 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1713 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1713 "diet.m"
            }
#line 1713 "diet.m"
            continue;
#line 1710 "diet.m"
          }
#line 1709 "diet.m"
      }
#line 1709 "diet.m"
      break;
#line 1709 "diet.m"
    }
#line 330 "diet.m"
}

#line 329 "diet.m"
void MR_CALL 
mercury__diet__foldr_4_p_1(
#line 329 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 329 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 329 "diet.m"
  MR_Word mercury__diet__P_5,
#line 329 "diet.m"
  MR_Word mercury__diet__T_6,
#line 329 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 329 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 329 "diet.m"
{
#line 1709 "diet.m"
  while (MR_TRUE)
#line 1709 "diet.m"
    {
#line 1709 "diet.m"
      /* tailcall optimized into a loop */
#line 1709 "diet.m"
      {
#line 1709 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1709 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1708 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1709 "diet.m"
        else
#line 1710 "diet.m"
          {
#line 1710 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1710 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1710 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1710 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1710 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1710 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1710 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1710 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1710 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1710 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1711 "diet.m"
            {
#line 1711 "diet.m"
              mercury__diet__foldr_4_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1712 "diet.m"
            {
#line 1712 "diet.m"
              mercury__diet__fold_down_5_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1713 "diet.m"
            /* direct tailcall eliminated */
#line 1713 "diet.m"
            {
#line 1713 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1713 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1713 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1713 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1713 "diet.m"
            }
#line 1713 "diet.m"
            continue;
#line 1710 "diet.m"
          }
#line 1709 "diet.m"
      }
#line 1709 "diet.m"
      break;
#line 1709 "diet.m"
    }
#line 329 "diet.m"
}

#line 328 "diet.m"
void MR_CALL 
mercury__diet__foldr_4_p_0(
#line 328 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 328 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 328 "diet.m"
  MR_Word mercury__diet__P_5,
#line 328 "diet.m"
  MR_Word mercury__diet__T_6,
#line 328 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 328 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 328 "diet.m"
{
#line 1709 "diet.m"
  while (MR_TRUE)
#line 1709 "diet.m"
    {
#line 1709 "diet.m"
      /* tailcall optimized into a loop */
#line 1709 "diet.m"
      {
#line 1709 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1709 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1708 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1709 "diet.m"
        else
#line 1710 "diet.m"
          {
#line 1710 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1710 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1710 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1710 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1710 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1710 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1710 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1710 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1710 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1710 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1711 "diet.m"
            {
#line 1711 "diet.m"
              mercury__diet__foldr_4_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1712 "diet.m"
            {
#line 1712 "diet.m"
              mercury__diet__fold_down_5_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1713 "diet.m"
            /* direct tailcall eliminated */
#line 1713 "diet.m"
            {
#line 1713 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1713 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1713 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1713 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1713 "diet.m"
            }
#line 1713 "diet.m"
            continue;
#line 1710 "diet.m"
          }
#line 1709 "diet.m"
      }
#line 1709 "diet.m"
      break;
#line 1709 "diet.m"
    }
#line 328 "diet.m"
}

#line 325 "diet.m"
MR_Box MR_CALL 
mercury__diet__foldr_3_f_0(
#line 325 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 325 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 325 "diet.m"
  MR_Word mercury__diet__F_5,
#line 325 "diet.m"
  MR_Word mercury__diet__Set_6,
#line 325 "diet.m"
  MR_Box mercury__diet__Acc0_7)
#line 325 "diet.m"
{
#line 1704 "diet.m"
  {
#line 1704 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1704 "diet.m"
    MR_Box mercury__diet__Acc_8;

#line 1704 "diet.m"
    {
#line 1704 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(mercury__diet__F_5, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__Set_6, mercury__diet__Acc0_7, &mercury__diet__Acc_8);
    }
#line 1704 "diet.m"
    return mercury__diet__Acc_8;
#line 1704 "diet.m"
  }
#line 325 "diet.m"
}

#line 321 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl5_12_p_5(
#line 321 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_52,
#line 321 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_53,
#line 321 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_54,
#line 321 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_55,
#line 321 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_56,
#line 321 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_51,
#line 321 "diet.m"
  MR_Word mercury__diet__P_13,
#line 321 "diet.m"
  MR_Word mercury__diet__T_14,
#line 321 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_25,
#line 321 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_26,
#line 321 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_27,
#line 321 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_28,
#line 321 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_29,
#line 321 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_30,
#line 321 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_31,
#line 321 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_32,
#line 321 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_33,
#line 321 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_34)
#line 321 "diet.m"
{
#line 1661 "diet.m"
  while (MR_TRUE)
#line 1661 "diet.m"
    {
#line 1661 "diet.m"
      /* tailcall optimized into a loop */
#line 1661 "diet.m"
      {
#line 1661 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1661 "diet.m"
        if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1660 "diet.m"
          {
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
#line 1660 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1660 "diet.m"
          }
#line 1661 "diet.m"
        else
#line 1662 "diet.m"
          {
#line 1662 "diet.m"
            MR_Box mercury__diet__X_20;
#line 1662 "diet.m"
            MR_Box mercury__diet__Y_21;
#line 1662 "diet.m"
            MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
#line 1662 "diet.m"
            MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
#line 1662 "diet.m"
            MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
#line 1662 "diet.m"
            MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

#line 1662 "diet.m"
            mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0));
#line 1662 "diet.m"
            mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1));
#line 1663 "diet.m"
            {
#line 1663 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl5_12_p_5(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
            }
#line 1662 "diet.m"
            if (mercury__diet__succeeded)
#line 1662 "diet.m"
              {
#line 1664 "diet.m"
                {
#line 1664 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up5_13_p_5(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
                }
#line 1662 "diet.m"
                if (mercury__diet__succeeded)
#line 1665 "diet.m"
                  {
#line 1665 "diet.m"
                    /* direct tailcall eliminated */
#line 1665 "diet.m"
                    {
#line 1665 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_14 = mercury__diet__R_24;
#line 1665 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_A_41_41;
#line 1665 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27 = mercury__diet__STATE_VARIABLE_B_42_42;
#line 1665 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29 = mercury__diet__STATE_VARIABLE_C_43_43;
#line 1665 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31 = mercury__diet__STATE_VARIABLE_D_44_44;
#line 1665 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33 = mercury__diet__STATE_VARIABLE_E_45_45;

#line 1665 "diet.m"
                      mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33;
#line 1665 "diet.m"
                      mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31;
#line 1665 "diet.m"
                      mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29;
#line 1665 "diet.m"
                      mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27;
#line 1665 "diet.m"
                      mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25;
#line 1665 "diet.m"
                      mercury__diet__T_14 = mercury__diet__T__tmp_copy_14;
#line 1665 "diet.m"
                    }
#line 1665 "diet.m"
                    continue;
#line 1665 "diet.m"
                  }
#line 1662 "diet.m"
              }
#line 1662 "diet.m"
          }
#line 1661 "diet.m"
        return mercury__diet__succeeded;
#line 1661 "diet.m"
      }
#line 1661 "diet.m"
      break;
#line 1661 "diet.m"
    }
#line 321 "diet.m"
}

#line 318 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl5_12_p_4(
#line 318 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_52,
#line 318 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_53,
#line 318 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_54,
#line 318 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_55,
#line 318 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_56,
#line 318 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_51,
#line 318 "diet.m"
  MR_Word mercury__diet__P_13,
#line 318 "diet.m"
  MR_Word mercury__diet__T_14,
#line 318 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_25,
#line 318 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_26,
#line 318 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_27,
#line 318 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_28,
#line 318 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_29,
#line 318 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_30,
#line 318 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_31,
#line 318 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_32,
#line 318 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_33,
#line 318 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_34)
#line 318 "diet.m"
{
#line 1661 "diet.m"
  while (MR_TRUE)
#line 1661 "diet.m"
    {
#line 1661 "diet.m"
      /* tailcall optimized into a loop */
#line 1661 "diet.m"
      {
#line 1661 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1661 "diet.m"
        if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1660 "diet.m"
          {
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
#line 1660 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1660 "diet.m"
          }
#line 1661 "diet.m"
        else
#line 1662 "diet.m"
          {
#line 1662 "diet.m"
            MR_Box mercury__diet__X_20;
#line 1662 "diet.m"
            MR_Box mercury__diet__Y_21;
#line 1662 "diet.m"
            MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
#line 1662 "diet.m"
            MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
#line 1662 "diet.m"
            MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
#line 1662 "diet.m"
            MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

#line 1662 "diet.m"
            mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0));
#line 1662 "diet.m"
            mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1));
#line 1663 "diet.m"
            {
#line 1663 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl5_12_p_4(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
            }
#line 1662 "diet.m"
            if (mercury__diet__succeeded)
#line 1662 "diet.m"
              {
#line 1664 "diet.m"
                {
#line 1664 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up5_13_p_4(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
                }
#line 1662 "diet.m"
                if (mercury__diet__succeeded)
#line 1665 "diet.m"
                  {
#line 1665 "diet.m"
                    /* direct tailcall eliminated */
#line 1665 "diet.m"
                    {
#line 1665 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_14 = mercury__diet__R_24;
#line 1665 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_A_41_41;
#line 1665 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27 = mercury__diet__STATE_VARIABLE_B_42_42;
#line 1665 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29 = mercury__diet__STATE_VARIABLE_C_43_43;
#line 1665 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31 = mercury__diet__STATE_VARIABLE_D_44_44;
#line 1665 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33 = mercury__diet__STATE_VARIABLE_E_45_45;

#line 1665 "diet.m"
                      mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33;
#line 1665 "diet.m"
                      mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31;
#line 1665 "diet.m"
                      mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29;
#line 1665 "diet.m"
                      mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27;
#line 1665 "diet.m"
                      mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25;
#line 1665 "diet.m"
                      mercury__diet__T_14 = mercury__diet__T__tmp_copy_14;
#line 1665 "diet.m"
                    }
#line 1665 "diet.m"
                    continue;
#line 1665 "diet.m"
                  }
#line 1662 "diet.m"
              }
#line 1662 "diet.m"
          }
#line 1661 "diet.m"
        return mercury__diet__succeeded;
#line 1661 "diet.m"
      }
#line 1661 "diet.m"
      break;
#line 1661 "diet.m"
    }
#line 318 "diet.m"
}

#line 315 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl5_12_p_3(
#line 315 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_52,
#line 315 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_53,
#line 315 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_54,
#line 315 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_55,
#line 315 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_56,
#line 315 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_51,
#line 315 "diet.m"
  MR_Word mercury__diet__P_13,
#line 315 "diet.m"
  MR_Word mercury__diet__T_14,
#line 315 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_25,
#line 315 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_26,
#line 315 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_27,
#line 315 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_28,
#line 315 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_29,
#line 315 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_30,
#line 315 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_31,
#line 315 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_32,
#line 315 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_33,
#line 315 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_34)
#line 315 "diet.m"
{
#line 1661 "diet.m"
  while (MR_TRUE)
#line 1661 "diet.m"
    {
#line 1661 "diet.m"
      /* tailcall optimized into a loop */
#line 1661 "diet.m"
      {
#line 1661 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1661 "diet.m"
        if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1660 "diet.m"
          {
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
#line 1660 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1660 "diet.m"
          }
#line 1661 "diet.m"
        else
#line 1662 "diet.m"
          {
#line 1662 "diet.m"
            MR_Box mercury__diet__X_20;
#line 1662 "diet.m"
            MR_Box mercury__diet__Y_21;
#line 1662 "diet.m"
            MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
#line 1662 "diet.m"
            MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
#line 1662 "diet.m"
            MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
#line 1662 "diet.m"
            MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

#line 1662 "diet.m"
            mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0));
#line 1662 "diet.m"
            mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1));
#line 1663 "diet.m"
            {
#line 1663 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl5_12_p_3(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
            }
#line 1662 "diet.m"
            if (mercury__diet__succeeded)
#line 1662 "diet.m"
              {
#line 1664 "diet.m"
                {
#line 1664 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up5_13_p_3(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
                }
#line 1662 "diet.m"
                if (mercury__diet__succeeded)
#line 1665 "diet.m"
                  {
#line 1665 "diet.m"
                    /* direct tailcall eliminated */
#line 1665 "diet.m"
                    {
#line 1665 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_14 = mercury__diet__R_24;
#line 1665 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_A_41_41;
#line 1665 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27 = mercury__diet__STATE_VARIABLE_B_42_42;
#line 1665 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29 = mercury__diet__STATE_VARIABLE_C_43_43;
#line 1665 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31 = mercury__diet__STATE_VARIABLE_D_44_44;
#line 1665 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33 = mercury__diet__STATE_VARIABLE_E_45_45;

#line 1665 "diet.m"
                      mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33;
#line 1665 "diet.m"
                      mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31;
#line 1665 "diet.m"
                      mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29;
#line 1665 "diet.m"
                      mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27;
#line 1665 "diet.m"
                      mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25;
#line 1665 "diet.m"
                      mercury__diet__T_14 = mercury__diet__T__tmp_copy_14;
#line 1665 "diet.m"
                    }
#line 1665 "diet.m"
                    continue;
#line 1665 "diet.m"
                  }
#line 1662 "diet.m"
              }
#line 1662 "diet.m"
          }
#line 1661 "diet.m"
        return mercury__diet__succeeded;
#line 1661 "diet.m"
      }
#line 1661 "diet.m"
      break;
#line 1661 "diet.m"
    }
#line 315 "diet.m"
}

#line 312 "diet.m"
void MR_CALL 
mercury__diet__foldl5_12_p_2(
#line 312 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_52,
#line 312 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_53,
#line 312 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_54,
#line 312 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_55,
#line 312 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_56,
#line 312 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_51,
#line 312 "diet.m"
  MR_Word mercury__diet__P_13,
#line 312 "diet.m"
  MR_Word mercury__diet__T_14,
#line 312 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_25,
#line 312 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_26,
#line 312 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_27,
#line 312 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_28,
#line 312 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_29,
#line 312 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_30,
#line 312 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_31,
#line 312 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_32,
#line 312 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_33,
#line 312 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_34)
#line 312 "diet.m"
{
#line 1661 "diet.m"
  while (MR_TRUE)
#line 1661 "diet.m"
    {
#line 1661 "diet.m"
      /* tailcall optimized into a loop */
#line 1661 "diet.m"
      {
#line 1661 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1661 "diet.m"
        if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1660 "diet.m"
          {
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
#line 1660 "diet.m"
          }
#line 1661 "diet.m"
        else
#line 1662 "diet.m"
          {
#line 1662 "diet.m"
            MR_Box mercury__diet__X_20;
#line 1662 "diet.m"
            MR_Box mercury__diet__Y_21;
#line 1662 "diet.m"
            MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
#line 1662 "diet.m"
            MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
#line 1662 "diet.m"
            MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
#line 1662 "diet.m"
            MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

#line 1662 "diet.m"
            mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0));
#line 1662 "diet.m"
            mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1));
#line 1663 "diet.m"
            {
#line 1663 "diet.m"
              mercury__diet__foldl5_12_p_2(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
            }
#line 1664 "diet.m"
            {
#line 1664 "diet.m"
              mercury__diet__fold_up5_13_p_2(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
            }
#line 1665 "diet.m"
            /* direct tailcall eliminated */
#line 1665 "diet.m"
            {
#line 1665 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_14 = mercury__diet__R_24;
#line 1665 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_A_41_41;
#line 1665 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27 = mercury__diet__STATE_VARIABLE_B_42_42;
#line 1665 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29 = mercury__diet__STATE_VARIABLE_C_43_43;
#line 1665 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31 = mercury__diet__STATE_VARIABLE_D_44_44;
#line 1665 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33 = mercury__diet__STATE_VARIABLE_E_45_45;

#line 1665 "diet.m"
              mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33;
#line 1665 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31;
#line 1665 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29;
#line 1665 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27;
#line 1665 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25;
#line 1665 "diet.m"
              mercury__diet__T_14 = mercury__diet__T__tmp_copy_14;
#line 1665 "diet.m"
            }
#line 1665 "diet.m"
            continue;
#line 1662 "diet.m"
          }
#line 1661 "diet.m"
      }
#line 1661 "diet.m"
      break;
#line 1661 "diet.m"
    }
#line 312 "diet.m"
}

#line 309 "diet.m"
void MR_CALL 
mercury__diet__foldl5_12_p_1(
#line 309 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_52,
#line 309 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_53,
#line 309 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_54,
#line 309 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_55,
#line 309 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_56,
#line 309 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_51,
#line 309 "diet.m"
  MR_Word mercury__diet__P_13,
#line 309 "diet.m"
  MR_Word mercury__diet__T_14,
#line 309 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_25,
#line 309 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_26,
#line 309 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_27,
#line 309 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_28,
#line 309 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_29,
#line 309 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_30,
#line 309 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_31,
#line 309 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_32,
#line 309 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_33,
#line 309 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_34)
#line 309 "diet.m"
{
#line 1661 "diet.m"
  while (MR_TRUE)
#line 1661 "diet.m"
    {
#line 1661 "diet.m"
      /* tailcall optimized into a loop */
#line 1661 "diet.m"
      {
#line 1661 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1661 "diet.m"
        if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1660 "diet.m"
          {
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
#line 1660 "diet.m"
          }
#line 1661 "diet.m"
        else
#line 1662 "diet.m"
          {
#line 1662 "diet.m"
            MR_Box mercury__diet__X_20;
#line 1662 "diet.m"
            MR_Box mercury__diet__Y_21;
#line 1662 "diet.m"
            MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
#line 1662 "diet.m"
            MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
#line 1662 "diet.m"
            MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
#line 1662 "diet.m"
            MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

#line 1662 "diet.m"
            mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0));
#line 1662 "diet.m"
            mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1));
#line 1663 "diet.m"
            {
#line 1663 "diet.m"
              mercury__diet__foldl5_12_p_1(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
            }
#line 1664 "diet.m"
            {
#line 1664 "diet.m"
              mercury__diet__fold_up5_13_p_1(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
            }
#line 1665 "diet.m"
            /* direct tailcall eliminated */
#line 1665 "diet.m"
            {
#line 1665 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_14 = mercury__diet__R_24;
#line 1665 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_A_41_41;
#line 1665 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27 = mercury__diet__STATE_VARIABLE_B_42_42;
#line 1665 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29 = mercury__diet__STATE_VARIABLE_C_43_43;
#line 1665 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31 = mercury__diet__STATE_VARIABLE_D_44_44;
#line 1665 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33 = mercury__diet__STATE_VARIABLE_E_45_45;

#line 1665 "diet.m"
              mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33;
#line 1665 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31;
#line 1665 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29;
#line 1665 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27;
#line 1665 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25;
#line 1665 "diet.m"
              mercury__diet__T_14 = mercury__diet__T__tmp_copy_14;
#line 1665 "diet.m"
            }
#line 1665 "diet.m"
            continue;
#line 1662 "diet.m"
          }
#line 1661 "diet.m"
      }
#line 1661 "diet.m"
      break;
#line 1661 "diet.m"
    }
#line 309 "diet.m"
}

#line 306 "diet.m"
void MR_CALL 
mercury__diet__foldl5_12_p_0(
#line 306 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_52,
#line 306 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_53,
#line 306 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_54,
#line 306 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_55,
#line 306 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_56,
#line 306 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_51,
#line 306 "diet.m"
  MR_Word mercury__diet__P_13,
#line 306 "diet.m"
  MR_Word mercury__diet__T_14,
#line 306 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_25,
#line 306 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_26,
#line 306 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_27,
#line 306 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_28,
#line 306 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_29,
#line 306 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_30,
#line 306 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_31,
#line 306 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_32,
#line 306 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_33,
#line 306 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_34)
#line 306 "diet.m"
{
#line 1661 "diet.m"
  while (MR_TRUE)
#line 1661 "diet.m"
    {
#line 1661 "diet.m"
      /* tailcall optimized into a loop */
#line 1661 "diet.m"
      {
#line 1661 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1661 "diet.m"
        if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1660 "diet.m"
          {
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
#line 1660 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
#line 1660 "diet.m"
          }
#line 1661 "diet.m"
        else
#line 1662 "diet.m"
          {
#line 1662 "diet.m"
            MR_Box mercury__diet__X_20;
#line 1662 "diet.m"
            MR_Box mercury__diet__Y_21;
#line 1662 "diet.m"
            MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
#line 1662 "diet.m"
            MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
#line 1662 "diet.m"
            MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
#line 1662 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
#line 1662 "diet.m"
            MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

#line 1662 "diet.m"
            mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0));
#line 1662 "diet.m"
            mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1));
#line 1663 "diet.m"
            {
#line 1663 "diet.m"
              mercury__diet__foldl5_12_p_0(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
            }
#line 1664 "diet.m"
            {
#line 1664 "diet.m"
              mercury__diet__fold_up5_13_p_0(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
            }
#line 1665 "diet.m"
            /* direct tailcall eliminated */
#line 1665 "diet.m"
            {
#line 1665 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_14 = mercury__diet__R_24;
#line 1665 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_A_41_41;
#line 1665 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27 = mercury__diet__STATE_VARIABLE_B_42_42;
#line 1665 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29 = mercury__diet__STATE_VARIABLE_C_43_43;
#line 1665 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31 = mercury__diet__STATE_VARIABLE_D_44_44;
#line 1665 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33 = mercury__diet__STATE_VARIABLE_E_45_45;

#line 1665 "diet.m"
              mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33;
#line 1665 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31;
#line 1665 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29;
#line 1665 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27;
#line 1665 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25;
#line 1665 "diet.m"
              mercury__diet__T_14 = mercury__diet__T__tmp_copy_14;
#line 1665 "diet.m"
            }
#line 1665 "diet.m"
            continue;
#line 1662 "diet.m"
          }
#line 1661 "diet.m"
      }
#line 1661 "diet.m"
      break;
#line 1661 "diet.m"
    }
#line 306 "diet.m"
}

#line 301 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl4_10_p_5(
#line 301 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 301 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 301 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 301 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 301 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
#line 301 "diet.m"
  MR_Word mercury__diet__P_11,
#line 301 "diet.m"
  MR_Word mercury__diet__T_12,
#line 301 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 301 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 301 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 301 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 301 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 301 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 301 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 301 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29)
#line 301 "diet.m"
{
#line 1626 "diet.m"
  while (MR_TRUE)
#line 1626 "diet.m"
    {
#line 1626 "diet.m"
      /* tailcall optimized into a loop */
#line 1626 "diet.m"
      {
#line 1626 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1626 "diet.m"
        if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1625 "diet.m"
          {
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1625 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1625 "diet.m"
          }
#line 1626 "diet.m"
        else
#line 1627 "diet.m"
          {
#line 1627 "diet.m"
            MR_Box mercury__diet__X_17;
#line 1627 "diet.m"
            MR_Box mercury__diet__Y_18;
#line 1627 "diet.m"
            MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
#line 1627 "diet.m"
            MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
#line 1627 "diet.m"
            MR_Tuple mercury__diet__V_30_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
#line 1627 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

#line 1627 "diet.m"
            mercury__diet__X_17 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 0));
#line 1627 "diet.m"
            mercury__diet__Y_18 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 1));
#line 1628 "diet.m"
            {
#line 1628 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl4_10_p_5(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
            }
#line 1627 "diet.m"
            if (mercury__diet__succeeded)
#line 1627 "diet.m"
              {
#line 1629 "diet.m"
                {
#line 1629 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up4_11_p_5(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
                }
#line 1627 "diet.m"
                if (mercury__diet__succeeded)
#line 1630 "diet.m"
                  {
#line 1630 "diet.m"
                    /* direct tailcall eliminated */
#line 1630 "diet.m"
                    {
#line 1630 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_12 = mercury__diet__R_21;
#line 1630 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_35_35;
#line 1630 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_36_36;
#line 1630 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_37_37;
#line 1630 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_38_38;

#line 1630 "diet.m"
                      mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1630 "diet.m"
                      mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1630 "diet.m"
                      mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1630 "diet.m"
                      mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1630 "diet.m"
                      mercury__diet__T_12 = mercury__diet__T__tmp_copy_12;
#line 1630 "diet.m"
                    }
#line 1630 "diet.m"
                    continue;
#line 1630 "diet.m"
                  }
#line 1627 "diet.m"
              }
#line 1627 "diet.m"
          }
#line 1626 "diet.m"
        return mercury__diet__succeeded;
#line 1626 "diet.m"
      }
#line 1626 "diet.m"
      break;
#line 1626 "diet.m"
    }
#line 301 "diet.m"
}

#line 299 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl4_10_p_4(
#line 299 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 299 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 299 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 299 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 299 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
#line 299 "diet.m"
  MR_Word mercury__diet__P_11,
#line 299 "diet.m"
  MR_Word mercury__diet__T_12,
#line 299 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 299 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 299 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 299 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 299 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 299 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 299 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 299 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29)
#line 299 "diet.m"
{
#line 1626 "diet.m"
  while (MR_TRUE)
#line 1626 "diet.m"
    {
#line 1626 "diet.m"
      /* tailcall optimized into a loop */
#line 1626 "diet.m"
      {
#line 1626 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1626 "diet.m"
        if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1625 "diet.m"
          {
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1625 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1625 "diet.m"
          }
#line 1626 "diet.m"
        else
#line 1627 "diet.m"
          {
#line 1627 "diet.m"
            MR_Box mercury__diet__X_17;
#line 1627 "diet.m"
            MR_Box mercury__diet__Y_18;
#line 1627 "diet.m"
            MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
#line 1627 "diet.m"
            MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
#line 1627 "diet.m"
            MR_Tuple mercury__diet__V_30_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
#line 1627 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

#line 1627 "diet.m"
            mercury__diet__X_17 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 0));
#line 1627 "diet.m"
            mercury__diet__Y_18 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 1));
#line 1628 "diet.m"
            {
#line 1628 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl4_10_p_4(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
            }
#line 1627 "diet.m"
            if (mercury__diet__succeeded)
#line 1627 "diet.m"
              {
#line 1629 "diet.m"
                {
#line 1629 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up4_11_p_4(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
                }
#line 1627 "diet.m"
                if (mercury__diet__succeeded)
#line 1630 "diet.m"
                  {
#line 1630 "diet.m"
                    /* direct tailcall eliminated */
#line 1630 "diet.m"
                    {
#line 1630 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_12 = mercury__diet__R_21;
#line 1630 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_35_35;
#line 1630 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_36_36;
#line 1630 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_37_37;
#line 1630 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_38_38;

#line 1630 "diet.m"
                      mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1630 "diet.m"
                      mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1630 "diet.m"
                      mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1630 "diet.m"
                      mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1630 "diet.m"
                      mercury__diet__T_12 = mercury__diet__T__tmp_copy_12;
#line 1630 "diet.m"
                    }
#line 1630 "diet.m"
                    continue;
#line 1630 "diet.m"
                  }
#line 1627 "diet.m"
              }
#line 1627 "diet.m"
          }
#line 1626 "diet.m"
        return mercury__diet__succeeded;
#line 1626 "diet.m"
      }
#line 1626 "diet.m"
      break;
#line 1626 "diet.m"
    }
#line 299 "diet.m"
}

#line 297 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl4_10_p_3(
#line 297 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 297 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 297 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 297 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 297 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
#line 297 "diet.m"
  MR_Word mercury__diet__P_11,
#line 297 "diet.m"
  MR_Word mercury__diet__T_12,
#line 297 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 297 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 297 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 297 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 297 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 297 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 297 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 297 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29)
#line 297 "diet.m"
{
#line 1626 "diet.m"
  while (MR_TRUE)
#line 1626 "diet.m"
    {
#line 1626 "diet.m"
      /* tailcall optimized into a loop */
#line 1626 "diet.m"
      {
#line 1626 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1626 "diet.m"
        if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1625 "diet.m"
          {
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1625 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1625 "diet.m"
          }
#line 1626 "diet.m"
        else
#line 1627 "diet.m"
          {
#line 1627 "diet.m"
            MR_Box mercury__diet__X_17;
#line 1627 "diet.m"
            MR_Box mercury__diet__Y_18;
#line 1627 "diet.m"
            MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
#line 1627 "diet.m"
            MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
#line 1627 "diet.m"
            MR_Tuple mercury__diet__V_30_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
#line 1627 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

#line 1627 "diet.m"
            mercury__diet__X_17 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 0));
#line 1627 "diet.m"
            mercury__diet__Y_18 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 1));
#line 1628 "diet.m"
            {
#line 1628 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl4_10_p_3(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
            }
#line 1627 "diet.m"
            if (mercury__diet__succeeded)
#line 1627 "diet.m"
              {
#line 1629 "diet.m"
                {
#line 1629 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up4_11_p_3(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
                }
#line 1627 "diet.m"
                if (mercury__diet__succeeded)
#line 1630 "diet.m"
                  {
#line 1630 "diet.m"
                    /* direct tailcall eliminated */
#line 1630 "diet.m"
                    {
#line 1630 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_12 = mercury__diet__R_21;
#line 1630 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_35_35;
#line 1630 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_36_36;
#line 1630 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_37_37;
#line 1630 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_38_38;

#line 1630 "diet.m"
                      mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1630 "diet.m"
                      mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1630 "diet.m"
                      mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1630 "diet.m"
                      mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1630 "diet.m"
                      mercury__diet__T_12 = mercury__diet__T__tmp_copy_12;
#line 1630 "diet.m"
                    }
#line 1630 "diet.m"
                    continue;
#line 1630 "diet.m"
                  }
#line 1627 "diet.m"
              }
#line 1627 "diet.m"
          }
#line 1626 "diet.m"
        return mercury__diet__succeeded;
#line 1626 "diet.m"
      }
#line 1626 "diet.m"
      break;
#line 1626 "diet.m"
    }
#line 297 "diet.m"
}

#line 295 "diet.m"
void MR_CALL 
mercury__diet__foldl4_10_p_2(
#line 295 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 295 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 295 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 295 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 295 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
#line 295 "diet.m"
  MR_Word mercury__diet__P_11,
#line 295 "diet.m"
  MR_Word mercury__diet__T_12,
#line 295 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 295 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 295 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 295 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 295 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 295 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 295 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 295 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29)
#line 295 "diet.m"
{
#line 1626 "diet.m"
  while (MR_TRUE)
#line 1626 "diet.m"
    {
#line 1626 "diet.m"
      /* tailcall optimized into a loop */
#line 1626 "diet.m"
      {
#line 1626 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1626 "diet.m"
        if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1625 "diet.m"
          {
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1625 "diet.m"
          }
#line 1626 "diet.m"
        else
#line 1627 "diet.m"
          {
#line 1627 "diet.m"
            MR_Box mercury__diet__X_17;
#line 1627 "diet.m"
            MR_Box mercury__diet__Y_18;
#line 1627 "diet.m"
            MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
#line 1627 "diet.m"
            MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
#line 1627 "diet.m"
            MR_Tuple mercury__diet__V_30_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
#line 1627 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

#line 1627 "diet.m"
            mercury__diet__X_17 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 0));
#line 1627 "diet.m"
            mercury__diet__Y_18 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 1));
#line 1628 "diet.m"
            {
#line 1628 "diet.m"
              mercury__diet__foldl4_10_p_2(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
            }
#line 1629 "diet.m"
            {
#line 1629 "diet.m"
              mercury__diet__fold_up4_11_p_2(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
            }
#line 1630 "diet.m"
            /* direct tailcall eliminated */
#line 1630 "diet.m"
            {
#line 1630 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_12 = mercury__diet__R_21;
#line 1630 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_35_35;
#line 1630 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_36_36;
#line 1630 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_37_37;
#line 1630 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_38_38;

#line 1630 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1630 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1630 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1630 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1630 "diet.m"
              mercury__diet__T_12 = mercury__diet__T__tmp_copy_12;
#line 1630 "diet.m"
            }
#line 1630 "diet.m"
            continue;
#line 1627 "diet.m"
          }
#line 1626 "diet.m"
      }
#line 1626 "diet.m"
      break;
#line 1626 "diet.m"
    }
#line 295 "diet.m"
}

#line 293 "diet.m"
void MR_CALL 
mercury__diet__foldl4_10_p_1(
#line 293 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 293 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 293 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 293 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 293 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
#line 293 "diet.m"
  MR_Word mercury__diet__P_11,
#line 293 "diet.m"
  MR_Word mercury__diet__T_12,
#line 293 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 293 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 293 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 293 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 293 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 293 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 293 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 293 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29)
#line 293 "diet.m"
{
#line 1626 "diet.m"
  while (MR_TRUE)
#line 1626 "diet.m"
    {
#line 1626 "diet.m"
      /* tailcall optimized into a loop */
#line 1626 "diet.m"
      {
#line 1626 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1626 "diet.m"
        if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1625 "diet.m"
          {
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1625 "diet.m"
          }
#line 1626 "diet.m"
        else
#line 1627 "diet.m"
          {
#line 1627 "diet.m"
            MR_Box mercury__diet__X_17;
#line 1627 "diet.m"
            MR_Box mercury__diet__Y_18;
#line 1627 "diet.m"
            MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
#line 1627 "diet.m"
            MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
#line 1627 "diet.m"
            MR_Tuple mercury__diet__V_30_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
#line 1627 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

#line 1627 "diet.m"
            mercury__diet__X_17 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 0));
#line 1627 "diet.m"
            mercury__diet__Y_18 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 1));
#line 1628 "diet.m"
            {
#line 1628 "diet.m"
              mercury__diet__foldl4_10_p_1(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
            }
#line 1629 "diet.m"
            {
#line 1629 "diet.m"
              mercury__diet__fold_up4_11_p_1(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
            }
#line 1630 "diet.m"
            /* direct tailcall eliminated */
#line 1630 "diet.m"
            {
#line 1630 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_12 = mercury__diet__R_21;
#line 1630 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_35_35;
#line 1630 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_36_36;
#line 1630 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_37_37;
#line 1630 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_38_38;

#line 1630 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1630 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1630 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1630 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1630 "diet.m"
              mercury__diet__T_12 = mercury__diet__T__tmp_copy_12;
#line 1630 "diet.m"
            }
#line 1630 "diet.m"
            continue;
#line 1627 "diet.m"
          }
#line 1626 "diet.m"
      }
#line 1626 "diet.m"
      break;
#line 1626 "diet.m"
    }
#line 293 "diet.m"
}

#line 291 "diet.m"
void MR_CALL 
mercury__diet__foldl4_10_p_0(
#line 291 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 291 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 291 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 291 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 291 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
#line 291 "diet.m"
  MR_Word mercury__diet__P_11,
#line 291 "diet.m"
  MR_Word mercury__diet__T_12,
#line 291 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 291 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 291 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 291 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 291 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 291 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 291 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 291 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29)
#line 291 "diet.m"
{
#line 1626 "diet.m"
  while (MR_TRUE)
#line 1626 "diet.m"
    {
#line 1626 "diet.m"
      /* tailcall optimized into a loop */
#line 1626 "diet.m"
      {
#line 1626 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1626 "diet.m"
        if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1625 "diet.m"
          {
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1625 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1625 "diet.m"
          }
#line 1626 "diet.m"
        else
#line 1627 "diet.m"
          {
#line 1627 "diet.m"
            MR_Box mercury__diet__X_17;
#line 1627 "diet.m"
            MR_Box mercury__diet__Y_18;
#line 1627 "diet.m"
            MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
#line 1627 "diet.m"
            MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
#line 1627 "diet.m"
            MR_Tuple mercury__diet__V_30_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
#line 1627 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
#line 1627 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

#line 1627 "diet.m"
            mercury__diet__X_17 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 0));
#line 1627 "diet.m"
            mercury__diet__Y_18 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 1));
#line 1628 "diet.m"
            {
#line 1628 "diet.m"
              mercury__diet__foldl4_10_p_0(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
            }
#line 1629 "diet.m"
            {
#line 1629 "diet.m"
              mercury__diet__fold_up4_11_p_0(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
            }
#line 1630 "diet.m"
            /* direct tailcall eliminated */
#line 1630 "diet.m"
            {
#line 1630 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_12 = mercury__diet__R_21;
#line 1630 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_35_35;
#line 1630 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_36_36;
#line 1630 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_37_37;
#line 1630 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_38_38;

#line 1630 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1630 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1630 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1630 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1630 "diet.m"
              mercury__diet__T_12 = mercury__diet__T__tmp_copy_12;
#line 1630 "diet.m"
            }
#line 1630 "diet.m"
            continue;
#line 1627 "diet.m"
          }
#line 1626 "diet.m"
      }
#line 1626 "diet.m"
      break;
#line 1626 "diet.m"
    }
#line 291 "diet.m"
}

#line 286 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl3_8_p_5(
#line 286 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_36,
#line 286 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_37,
#line 286 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_38,
#line 286 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_35,
#line 286 "diet.m"
  MR_Word mercury__diet__P_9,
#line 286 "diet.m"
  MR_Word mercury__diet__T_10,
#line 286 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_19,
#line 286 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_20,
#line 286 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_21,
#line 286 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_22,
#line 286 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc3_0_23,
#line 286 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc3_24)
#line 286 "diet.m"
{
#line 1591 "diet.m"
  while (MR_TRUE)
#line 1591 "diet.m"
    {
#line 1591 "diet.m"
      /* tailcall optimized into a loop */
#line 1591 "diet.m"
      {
#line 1591 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1591 "diet.m"
        if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1590 "diet.m"
          {
#line 1590 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
#line 1590 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
#line 1590 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
#line 1590 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1590 "diet.m"
          }
#line 1591 "diet.m"
        else
#line 1592 "diet.m"
          {
#line 1592 "diet.m"
            MR_Box mercury__diet__X_14;
#line 1592 "diet.m"
            MR_Box mercury__diet__Y_15;
#line 1592 "diet.m"
            MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
#line 1592 "diet.m"
            MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
#line 1592 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
#line 1592 "diet.m"
            MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

#line 1592 "diet.m"
            mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0));
#line 1592 "diet.m"
            mercury__diet__Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1));
#line 1593 "diet.m"
            {
#line 1593 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl3_8_p_5(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
            }
#line 1592 "diet.m"
            if (mercury__diet__succeeded)
#line 1592 "diet.m"
              {
#line 1594 "diet.m"
                {
#line 1594 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up3_9_p_5(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
                }
#line 1592 "diet.m"
                if (mercury__diet__succeeded)
#line 1595 "diet.m"
                  {
#line 1595 "diet.m"
                    /* direct tailcall eliminated */
#line 1595 "diet.m"
                    {
#line 1595 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_10 = mercury__diet__R_18;
#line 1595 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1595 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1595 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

#line 1595 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23;
#line 1595 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21;
#line 1595 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19;
#line 1595 "diet.m"
                      mercury__diet__T_10 = mercury__diet__T__tmp_copy_10;
#line 1595 "diet.m"
                    }
#line 1595 "diet.m"
                    continue;
#line 1595 "diet.m"
                  }
#line 1592 "diet.m"
              }
#line 1592 "diet.m"
          }
#line 1591 "diet.m"
        return mercury__diet__succeeded;
#line 1591 "diet.m"
      }
#line 1591 "diet.m"
      break;
#line 1591 "diet.m"
    }
#line 286 "diet.m"
}

#line 284 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl3_8_p_4(
#line 284 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_36,
#line 284 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_37,
#line 284 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_38,
#line 284 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_35,
#line 284 "diet.m"
  MR_Word mercury__diet__P_9,
#line 284 "diet.m"
  MR_Word mercury__diet__T_10,
#line 284 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_19,
#line 284 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_20,
#line 284 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_21,
#line 284 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_22,
#line 284 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc3_0_23,
#line 284 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc3_24)
#line 284 "diet.m"
{
#line 1591 "diet.m"
  while (MR_TRUE)
#line 1591 "diet.m"
    {
#line 1591 "diet.m"
      /* tailcall optimized into a loop */
#line 1591 "diet.m"
      {
#line 1591 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1591 "diet.m"
        if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1590 "diet.m"
          {
#line 1590 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
#line 1590 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
#line 1590 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
#line 1590 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1590 "diet.m"
          }
#line 1591 "diet.m"
        else
#line 1592 "diet.m"
          {
#line 1592 "diet.m"
            MR_Box mercury__diet__X_14;
#line 1592 "diet.m"
            MR_Box mercury__diet__Y_15;
#line 1592 "diet.m"
            MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
#line 1592 "diet.m"
            MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
#line 1592 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
#line 1592 "diet.m"
            MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

#line 1592 "diet.m"
            mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0));
#line 1592 "diet.m"
            mercury__diet__Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1));
#line 1593 "diet.m"
            {
#line 1593 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl3_8_p_4(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
            }
#line 1592 "diet.m"
            if (mercury__diet__succeeded)
#line 1592 "diet.m"
              {
#line 1594 "diet.m"
                {
#line 1594 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up3_9_p_4(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
                }
#line 1592 "diet.m"
                if (mercury__diet__succeeded)
#line 1595 "diet.m"
                  {
#line 1595 "diet.m"
                    /* direct tailcall eliminated */
#line 1595 "diet.m"
                    {
#line 1595 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_10 = mercury__diet__R_18;
#line 1595 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1595 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1595 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

#line 1595 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23;
#line 1595 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21;
#line 1595 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19;
#line 1595 "diet.m"
                      mercury__diet__T_10 = mercury__diet__T__tmp_copy_10;
#line 1595 "diet.m"
                    }
#line 1595 "diet.m"
                    continue;
#line 1595 "diet.m"
                  }
#line 1592 "diet.m"
              }
#line 1592 "diet.m"
          }
#line 1591 "diet.m"
        return mercury__diet__succeeded;
#line 1591 "diet.m"
      }
#line 1591 "diet.m"
      break;
#line 1591 "diet.m"
    }
#line 284 "diet.m"
}

#line 282 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl3_8_p_3(
#line 282 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_36,
#line 282 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_37,
#line 282 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_38,
#line 282 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_35,
#line 282 "diet.m"
  MR_Word mercury__diet__P_9,
#line 282 "diet.m"
  MR_Word mercury__diet__T_10,
#line 282 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_19,
#line 282 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_20,
#line 282 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_21,
#line 282 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_22,
#line 282 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc3_0_23,
#line 282 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc3_24)
#line 282 "diet.m"
{
#line 1591 "diet.m"
  while (MR_TRUE)
#line 1591 "diet.m"
    {
#line 1591 "diet.m"
      /* tailcall optimized into a loop */
#line 1591 "diet.m"
      {
#line 1591 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1591 "diet.m"
        if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1590 "diet.m"
          {
#line 1590 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
#line 1590 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
#line 1590 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
#line 1590 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1590 "diet.m"
          }
#line 1591 "diet.m"
        else
#line 1592 "diet.m"
          {
#line 1592 "diet.m"
            MR_Box mercury__diet__X_14;
#line 1592 "diet.m"
            MR_Box mercury__diet__Y_15;
#line 1592 "diet.m"
            MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
#line 1592 "diet.m"
            MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
#line 1592 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
#line 1592 "diet.m"
            MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

#line 1592 "diet.m"
            mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0));
#line 1592 "diet.m"
            mercury__diet__Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1));
#line 1593 "diet.m"
            {
#line 1593 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl3_8_p_3(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
            }
#line 1592 "diet.m"
            if (mercury__diet__succeeded)
#line 1592 "diet.m"
              {
#line 1594 "diet.m"
                {
#line 1594 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up3_9_p_3(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
                }
#line 1592 "diet.m"
                if (mercury__diet__succeeded)
#line 1595 "diet.m"
                  {
#line 1595 "diet.m"
                    /* direct tailcall eliminated */
#line 1595 "diet.m"
                    {
#line 1595 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_10 = mercury__diet__R_18;
#line 1595 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1595 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1595 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

#line 1595 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23;
#line 1595 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21;
#line 1595 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19;
#line 1595 "diet.m"
                      mercury__diet__T_10 = mercury__diet__T__tmp_copy_10;
#line 1595 "diet.m"
                    }
#line 1595 "diet.m"
                    continue;
#line 1595 "diet.m"
                  }
#line 1592 "diet.m"
              }
#line 1592 "diet.m"
          }
#line 1591 "diet.m"
        return mercury__diet__succeeded;
#line 1591 "diet.m"
      }
#line 1591 "diet.m"
      break;
#line 1591 "diet.m"
    }
#line 282 "diet.m"
}

#line 280 "diet.m"
void MR_CALL 
mercury__diet__foldl3_8_p_2(
#line 280 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_36,
#line 280 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_37,
#line 280 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_38,
#line 280 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_35,
#line 280 "diet.m"
  MR_Word mercury__diet__P_9,
#line 280 "diet.m"
  MR_Word mercury__diet__T_10,
#line 280 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_19,
#line 280 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_20,
#line 280 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_21,
#line 280 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_22,
#line 280 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc3_0_23,
#line 280 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc3_24)
#line 280 "diet.m"
{
#line 1591 "diet.m"
  while (MR_TRUE)
#line 1591 "diet.m"
    {
#line 1591 "diet.m"
      /* tailcall optimized into a loop */
#line 1591 "diet.m"
      {
#line 1591 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1591 "diet.m"
        if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1590 "diet.m"
          {
#line 1590 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
#line 1590 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
#line 1590 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
#line 1590 "diet.m"
          }
#line 1591 "diet.m"
        else
#line 1592 "diet.m"
          {
#line 1592 "diet.m"
            MR_Box mercury__diet__X_14;
#line 1592 "diet.m"
            MR_Box mercury__diet__Y_15;
#line 1592 "diet.m"
            MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
#line 1592 "diet.m"
            MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
#line 1592 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
#line 1592 "diet.m"
            MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

#line 1592 "diet.m"
            mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0));
#line 1592 "diet.m"
            mercury__diet__Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1));
#line 1593 "diet.m"
            {
#line 1593 "diet.m"
              mercury__diet__foldl3_8_p_2(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
            }
#line 1594 "diet.m"
            {
#line 1594 "diet.m"
              mercury__diet__fold_up3_9_p_2(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
            }
#line 1595 "diet.m"
            /* direct tailcall eliminated */
#line 1595 "diet.m"
            {
#line 1595 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_10 = mercury__diet__R_18;
#line 1595 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1595 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1595 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

#line 1595 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23;
#line 1595 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21;
#line 1595 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19;
#line 1595 "diet.m"
              mercury__diet__T_10 = mercury__diet__T__tmp_copy_10;
#line 1595 "diet.m"
            }
#line 1595 "diet.m"
            continue;
#line 1592 "diet.m"
          }
#line 1591 "diet.m"
      }
#line 1591 "diet.m"
      break;
#line 1591 "diet.m"
    }
#line 280 "diet.m"
}

#line 278 "diet.m"
void MR_CALL 
mercury__diet__foldl3_8_p_1(
#line 278 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_36,
#line 278 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_37,
#line 278 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_38,
#line 278 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_35,
#line 278 "diet.m"
  MR_Word mercury__diet__P_9,
#line 278 "diet.m"
  MR_Word mercury__diet__T_10,
#line 278 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_19,
#line 278 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_20,
#line 278 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_21,
#line 278 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_22,
#line 278 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc3_0_23,
#line 278 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc3_24)
#line 278 "diet.m"
{
#line 1591 "diet.m"
  while (MR_TRUE)
#line 1591 "diet.m"
    {
#line 1591 "diet.m"
      /* tailcall optimized into a loop */
#line 1591 "diet.m"
      {
#line 1591 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1591 "diet.m"
        if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1590 "diet.m"
          {
#line 1590 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
#line 1590 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
#line 1590 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
#line 1590 "diet.m"
          }
#line 1591 "diet.m"
        else
#line 1592 "diet.m"
          {
#line 1592 "diet.m"
            MR_Box mercury__diet__X_14;
#line 1592 "diet.m"
            MR_Box mercury__diet__Y_15;
#line 1592 "diet.m"
            MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
#line 1592 "diet.m"
            MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
#line 1592 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
#line 1592 "diet.m"
            MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

#line 1592 "diet.m"
            mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0));
#line 1592 "diet.m"
            mercury__diet__Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1));
#line 1593 "diet.m"
            {
#line 1593 "diet.m"
              mercury__diet__foldl3_8_p_1(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
            }
#line 1594 "diet.m"
            {
#line 1594 "diet.m"
              mercury__diet__fold_up3_9_p_1(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
            }
#line 1595 "diet.m"
            /* direct tailcall eliminated */
#line 1595 "diet.m"
            {
#line 1595 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_10 = mercury__diet__R_18;
#line 1595 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1595 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1595 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

#line 1595 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23;
#line 1595 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21;
#line 1595 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19;
#line 1595 "diet.m"
              mercury__diet__T_10 = mercury__diet__T__tmp_copy_10;
#line 1595 "diet.m"
            }
#line 1595 "diet.m"
            continue;
#line 1592 "diet.m"
          }
#line 1591 "diet.m"
      }
#line 1591 "diet.m"
      break;
#line 1591 "diet.m"
    }
#line 278 "diet.m"
}

#line 276 "diet.m"
void MR_CALL 
mercury__diet__foldl3_8_p_0(
#line 276 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_36,
#line 276 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_37,
#line 276 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_38,
#line 276 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_35,
#line 276 "diet.m"
  MR_Word mercury__diet__P_9,
#line 276 "diet.m"
  MR_Word mercury__diet__T_10,
#line 276 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_19,
#line 276 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_20,
#line 276 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_21,
#line 276 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_22,
#line 276 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc3_0_23,
#line 276 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc3_24)
#line 276 "diet.m"
{
#line 1591 "diet.m"
  while (MR_TRUE)
#line 1591 "diet.m"
    {
#line 1591 "diet.m"
      /* tailcall optimized into a loop */
#line 1591 "diet.m"
      {
#line 1591 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1591 "diet.m"
        if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1590 "diet.m"
          {
#line 1590 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
#line 1590 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
#line 1590 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
#line 1590 "diet.m"
          }
#line 1591 "diet.m"
        else
#line 1592 "diet.m"
          {
#line 1592 "diet.m"
            MR_Box mercury__diet__X_14;
#line 1592 "diet.m"
            MR_Box mercury__diet__Y_15;
#line 1592 "diet.m"
            MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
#line 1592 "diet.m"
            MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
#line 1592 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1592 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
#line 1592 "diet.m"
            MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

#line 1592 "diet.m"
            mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0));
#line 1592 "diet.m"
            mercury__diet__Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1));
#line 1593 "diet.m"
            {
#line 1593 "diet.m"
              mercury__diet__foldl3_8_p_0(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
            }
#line 1594 "diet.m"
            {
#line 1594 "diet.m"
              mercury__diet__fold_up3_9_p_0(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
            }
#line 1595 "diet.m"
            /* direct tailcall eliminated */
#line 1595 "diet.m"
            {
#line 1595 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_10 = mercury__diet__R_18;
#line 1595 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1595 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1595 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

#line 1595 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23;
#line 1595 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21;
#line 1595 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19;
#line 1595 "diet.m"
              mercury__diet__T_10 = mercury__diet__T__tmp_copy_10;
#line 1595 "diet.m"
            }
#line 1595 "diet.m"
            continue;
#line 1592 "diet.m"
          }
#line 1591 "diet.m"
      }
#line 1591 "diet.m"
      break;
#line 1591 "diet.m"
    }
#line 276 "diet.m"
}

#line 271 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl2_6_p_5(
#line 271 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_28,
#line 271 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_29,
#line 271 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
#line 271 "diet.m"
  MR_Word mercury__diet__P_7,
#line 271 "diet.m"
  MR_Word mercury__diet__T_8,
#line 271 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_16,
#line 271 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_17,
#line 271 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_18,
#line 271 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_19)
#line 271 "diet.m"
{
#line 1556 "diet.m"
  while (MR_TRUE)
#line 1556 "diet.m"
    {
#line 1556 "diet.m"
      /* tailcall optimized into a loop */
#line 1556 "diet.m"
      {
#line 1556 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1556 "diet.m"
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1555 "diet.m"
          {
#line 1555 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1555 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1555 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1555 "diet.m"
          }
#line 1556 "diet.m"
        else
#line 1557 "diet.m"
          {
#line 1557 "diet.m"
            MR_Box mercury__diet__X_11;
#line 1557 "diet.m"
            MR_Box mercury__diet__Y_12;
#line 1557 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1557 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1557 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1557 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1557 "diet.m"
            mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0));
#line 1557 "diet.m"
            mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1));
#line 1558 "diet.m"
            {
#line 1558 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl2_6_p_5(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1557 "diet.m"
            if (mercury__diet__succeeded)
#line 1557 "diet.m"
              {
#line 1559 "diet.m"
                {
#line 1559 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up2_7_p_5(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
                }
#line 1557 "diet.m"
                if (mercury__diet__succeeded)
#line 1560 "diet.m"
                  {
#line 1560 "diet.m"
                    /* direct tailcall eliminated */
#line 1560 "diet.m"
                    {
#line 1560 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1560 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1560 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1560 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1560 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1560 "diet.m"
                      mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
#line 1560 "diet.m"
                    }
#line 1560 "diet.m"
                    continue;
#line 1560 "diet.m"
                  }
#line 1557 "diet.m"
              }
#line 1557 "diet.m"
          }
#line 1556 "diet.m"
        return mercury__diet__succeeded;
#line 1556 "diet.m"
      }
#line 1556 "diet.m"
      break;
#line 1556 "diet.m"
    }
#line 271 "diet.m"
}

#line 269 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl2_6_p_4(
#line 269 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_28,
#line 269 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_29,
#line 269 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
#line 269 "diet.m"
  MR_Word mercury__diet__P_7,
#line 269 "diet.m"
  MR_Word mercury__diet__T_8,
#line 269 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_16,
#line 269 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_17,
#line 269 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_18,
#line 269 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_19)
#line 269 "diet.m"
{
#line 1556 "diet.m"
  while (MR_TRUE)
#line 1556 "diet.m"
    {
#line 1556 "diet.m"
      /* tailcall optimized into a loop */
#line 1556 "diet.m"
      {
#line 1556 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1556 "diet.m"
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1555 "diet.m"
          {
#line 1555 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1555 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1555 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1555 "diet.m"
          }
#line 1556 "diet.m"
        else
#line 1557 "diet.m"
          {
#line 1557 "diet.m"
            MR_Box mercury__diet__X_11;
#line 1557 "diet.m"
            MR_Box mercury__diet__Y_12;
#line 1557 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1557 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1557 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1557 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1557 "diet.m"
            mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0));
#line 1557 "diet.m"
            mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1));
#line 1558 "diet.m"
            {
#line 1558 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl2_6_p_4(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1557 "diet.m"
            if (mercury__diet__succeeded)
#line 1557 "diet.m"
              {
#line 1559 "diet.m"
                {
#line 1559 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up2_7_p_4(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
                }
#line 1557 "diet.m"
                if (mercury__diet__succeeded)
#line 1560 "diet.m"
                  {
#line 1560 "diet.m"
                    /* direct tailcall eliminated */
#line 1560 "diet.m"
                    {
#line 1560 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1560 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1560 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1560 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1560 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1560 "diet.m"
                      mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
#line 1560 "diet.m"
                    }
#line 1560 "diet.m"
                    continue;
#line 1560 "diet.m"
                  }
#line 1557 "diet.m"
              }
#line 1557 "diet.m"
          }
#line 1556 "diet.m"
        return mercury__diet__succeeded;
#line 1556 "diet.m"
      }
#line 1556 "diet.m"
      break;
#line 1556 "diet.m"
    }
#line 269 "diet.m"
}

#line 267 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl2_6_p_3(
#line 267 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_28,
#line 267 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_29,
#line 267 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
#line 267 "diet.m"
  MR_Word mercury__diet__P_7,
#line 267 "diet.m"
  MR_Word mercury__diet__T_8,
#line 267 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_16,
#line 267 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_17,
#line 267 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_18,
#line 267 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_19)
#line 267 "diet.m"
{
#line 1556 "diet.m"
  while (MR_TRUE)
#line 1556 "diet.m"
    {
#line 1556 "diet.m"
      /* tailcall optimized into a loop */
#line 1556 "diet.m"
      {
#line 1556 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1556 "diet.m"
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1555 "diet.m"
          {
#line 1555 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1555 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1555 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1555 "diet.m"
          }
#line 1556 "diet.m"
        else
#line 1557 "diet.m"
          {
#line 1557 "diet.m"
            MR_Box mercury__diet__X_11;
#line 1557 "diet.m"
            MR_Box mercury__diet__Y_12;
#line 1557 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1557 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1557 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1557 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1557 "diet.m"
            mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0));
#line 1557 "diet.m"
            mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1));
#line 1558 "diet.m"
            {
#line 1558 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl2_6_p_3(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1557 "diet.m"
            if (mercury__diet__succeeded)
#line 1557 "diet.m"
              {
#line 1559 "diet.m"
                {
#line 1559 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up2_7_p_3(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
                }
#line 1557 "diet.m"
                if (mercury__diet__succeeded)
#line 1560 "diet.m"
                  {
#line 1560 "diet.m"
                    /* direct tailcall eliminated */
#line 1560 "diet.m"
                    {
#line 1560 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1560 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1560 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1560 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1560 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1560 "diet.m"
                      mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
#line 1560 "diet.m"
                    }
#line 1560 "diet.m"
                    continue;
#line 1560 "diet.m"
                  }
#line 1557 "diet.m"
              }
#line 1557 "diet.m"
          }
#line 1556 "diet.m"
        return mercury__diet__succeeded;
#line 1556 "diet.m"
      }
#line 1556 "diet.m"
      break;
#line 1556 "diet.m"
    }
#line 267 "diet.m"
}

#line 265 "diet.m"
void MR_CALL 
mercury__diet__foldl2_6_p_2(
#line 265 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_28,
#line 265 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_29,
#line 265 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
#line 265 "diet.m"
  MR_Word mercury__diet__P_7,
#line 265 "diet.m"
  MR_Word mercury__diet__T_8,
#line 265 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_16,
#line 265 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_17,
#line 265 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_18,
#line 265 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_19)
#line 265 "diet.m"
{
#line 1556 "diet.m"
  while (MR_TRUE)
#line 1556 "diet.m"
    {
#line 1556 "diet.m"
      /* tailcall optimized into a loop */
#line 1556 "diet.m"
      {
#line 1556 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1556 "diet.m"
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1555 "diet.m"
          {
#line 1555 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1555 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1555 "diet.m"
          }
#line 1556 "diet.m"
        else
#line 1557 "diet.m"
          {
#line 1557 "diet.m"
            MR_Box mercury__diet__X_11;
#line 1557 "diet.m"
            MR_Box mercury__diet__Y_12;
#line 1557 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1557 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1557 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1557 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1557 "diet.m"
            mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0));
#line 1557 "diet.m"
            mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1));
#line 1558 "diet.m"
            {
#line 1558 "diet.m"
              mercury__diet__foldl2_6_p_2(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1559 "diet.m"
            {
#line 1559 "diet.m"
              mercury__diet__fold_up2_7_p_2(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
            }
#line 1560 "diet.m"
            /* direct tailcall eliminated */
#line 1560 "diet.m"
            {
#line 1560 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1560 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1560 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1560 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1560 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1560 "diet.m"
              mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
#line 1560 "diet.m"
            }
#line 1560 "diet.m"
            continue;
#line 1557 "diet.m"
          }
#line 1556 "diet.m"
      }
#line 1556 "diet.m"
      break;
#line 1556 "diet.m"
    }
#line 265 "diet.m"
}

#line 263 "diet.m"
void MR_CALL 
mercury__diet__foldl2_6_p_1(
#line 263 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_28,
#line 263 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_29,
#line 263 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
#line 263 "diet.m"
  MR_Word mercury__diet__P_7,
#line 263 "diet.m"
  MR_Word mercury__diet__T_8,
#line 263 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_16,
#line 263 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_17,
#line 263 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_18,
#line 263 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_19)
#line 263 "diet.m"
{
#line 1556 "diet.m"
  while (MR_TRUE)
#line 1556 "diet.m"
    {
#line 1556 "diet.m"
      /* tailcall optimized into a loop */
#line 1556 "diet.m"
      {
#line 1556 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1556 "diet.m"
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1555 "diet.m"
          {
#line 1555 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1555 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1555 "diet.m"
          }
#line 1556 "diet.m"
        else
#line 1557 "diet.m"
          {
#line 1557 "diet.m"
            MR_Box mercury__diet__X_11;
#line 1557 "diet.m"
            MR_Box mercury__diet__Y_12;
#line 1557 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1557 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1557 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1557 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1557 "diet.m"
            mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0));
#line 1557 "diet.m"
            mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1));
#line 1558 "diet.m"
            {
#line 1558 "diet.m"
              mercury__diet__foldl2_6_p_1(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1559 "diet.m"
            {
#line 1559 "diet.m"
              mercury__diet__fold_up2_7_p_1(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
            }
#line 1560 "diet.m"
            /* direct tailcall eliminated */
#line 1560 "diet.m"
            {
#line 1560 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1560 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1560 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1560 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1560 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1560 "diet.m"
              mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
#line 1560 "diet.m"
            }
#line 1560 "diet.m"
            continue;
#line 1557 "diet.m"
          }
#line 1556 "diet.m"
      }
#line 1556 "diet.m"
      break;
#line 1556 "diet.m"
    }
#line 263 "diet.m"
}

#line 261 "diet.m"
void MR_CALL 
mercury__diet__foldl2_6_p_0(
#line 261 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_28,
#line 261 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_29,
#line 261 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
#line 261 "diet.m"
  MR_Word mercury__diet__P_7,
#line 261 "diet.m"
  MR_Word mercury__diet__T_8,
#line 261 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_16,
#line 261 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_17,
#line 261 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_18,
#line 261 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_19)
#line 261 "diet.m"
{
#line 1556 "diet.m"
  while (MR_TRUE)
#line 1556 "diet.m"
    {
#line 1556 "diet.m"
      /* tailcall optimized into a loop */
#line 1556 "diet.m"
      {
#line 1556 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1556 "diet.m"
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1555 "diet.m"
          {
#line 1555 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1555 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1555 "diet.m"
          }
#line 1556 "diet.m"
        else
#line 1557 "diet.m"
          {
#line 1557 "diet.m"
            MR_Box mercury__diet__X_11;
#line 1557 "diet.m"
            MR_Box mercury__diet__Y_12;
#line 1557 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1557 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1557 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1557 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1557 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1557 "diet.m"
            mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0));
#line 1557 "diet.m"
            mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1));
#line 1558 "diet.m"
            {
#line 1558 "diet.m"
              mercury__diet__foldl2_6_p_0(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1559 "diet.m"
            {
#line 1559 "diet.m"
              mercury__diet__fold_up2_7_p_0(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
            }
#line 1560 "diet.m"
            /* direct tailcall eliminated */
#line 1560 "diet.m"
            {
#line 1560 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1560 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1560 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1560 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1560 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1560 "diet.m"
              mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
#line 1560 "diet.m"
            }
#line 1560 "diet.m"
            continue;
#line 1557 "diet.m"
          }
#line 1556 "diet.m"
      }
#line 1556 "diet.m"
      break;
#line 1556 "diet.m"
    }
#line 261 "diet.m"
}

#line 258 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl_4_p_5(
#line 258 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 258 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 258 "diet.m"
  MR_Word mercury__diet__P_5,
#line 258 "diet.m"
  MR_Word mercury__diet__T_6,
#line 258 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 258 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 258 "diet.m"
{
#line 1528 "diet.m"
  while (MR_TRUE)
#line 1528 "diet.m"
    {
#line 1528 "diet.m"
      /* tailcall optimized into a loop */
#line 1528 "diet.m"
      {
#line 1528 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1528 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1527 "diet.m"
          {
#line 1527 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1527 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1527 "diet.m"
          }
#line 1528 "diet.m"
        else
#line 1529 "diet.m"
          {
#line 1529 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1529 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1529 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1529 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1529 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1529 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1529 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1529 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1529 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1529 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1530 "diet.m"
            {
#line 1530 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl_4_p_5(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1529 "diet.m"
            if (mercury__diet__succeeded)
#line 1529 "diet.m"
              {
#line 1531 "diet.m"
                {
#line 1531 "diet.m"
                  mercury__diet__succeeded = mercury__diet__foldl_2_5_p_5(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1529 "diet.m"
                if (mercury__diet__succeeded)
#line 1532 "diet.m"
                  {
#line 1532 "diet.m"
                    /* direct tailcall eliminated */
#line 1532 "diet.m"
                    {
#line 1532 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1532 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1532 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1532 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1532 "diet.m"
                    }
#line 1532 "diet.m"
                    continue;
#line 1532 "diet.m"
                  }
#line 1529 "diet.m"
              }
#line 1529 "diet.m"
          }
#line 1528 "diet.m"
        return mercury__diet__succeeded;
#line 1528 "diet.m"
      }
#line 1528 "diet.m"
      break;
#line 1528 "diet.m"
    }
#line 258 "diet.m"
}

#line 257 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl_4_p_4(
#line 257 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 257 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 257 "diet.m"
  MR_Word mercury__diet__P_5,
#line 257 "diet.m"
  MR_Word mercury__diet__T_6,
#line 257 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 257 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 257 "diet.m"
{
#line 1528 "diet.m"
  while (MR_TRUE)
#line 1528 "diet.m"
    {
#line 1528 "diet.m"
      /* tailcall optimized into a loop */
#line 1528 "diet.m"
      {
#line 1528 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1528 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1527 "diet.m"
          {
#line 1527 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1527 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1527 "diet.m"
          }
#line 1528 "diet.m"
        else
#line 1529 "diet.m"
          {
#line 1529 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1529 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1529 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1529 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1529 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1529 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1529 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1529 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1529 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1529 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1530 "diet.m"
            {
#line 1530 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl_4_p_4(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1529 "diet.m"
            if (mercury__diet__succeeded)
#line 1529 "diet.m"
              {
#line 1531 "diet.m"
                {
#line 1531 "diet.m"
                  mercury__diet__succeeded = mercury__diet__foldl_2_5_p_4(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1529 "diet.m"
                if (mercury__diet__succeeded)
#line 1532 "diet.m"
                  {
#line 1532 "diet.m"
                    /* direct tailcall eliminated */
#line 1532 "diet.m"
                    {
#line 1532 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1532 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1532 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1532 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1532 "diet.m"
                    }
#line 1532 "diet.m"
                    continue;
#line 1532 "diet.m"
                  }
#line 1529 "diet.m"
              }
#line 1529 "diet.m"
          }
#line 1528 "diet.m"
        return mercury__diet__succeeded;
#line 1528 "diet.m"
      }
#line 1528 "diet.m"
      break;
#line 1528 "diet.m"
    }
#line 257 "diet.m"
}

#line 256 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl_4_p_3(
#line 256 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 256 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 256 "diet.m"
  MR_Word mercury__diet__P_5,
#line 256 "diet.m"
  MR_Word mercury__diet__T_6,
#line 256 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 256 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 256 "diet.m"
{
#line 1528 "diet.m"
  while (MR_TRUE)
#line 1528 "diet.m"
    {
#line 1528 "diet.m"
      /* tailcall optimized into a loop */
#line 1528 "diet.m"
      {
#line 1528 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1528 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1527 "diet.m"
          {
#line 1527 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1527 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1527 "diet.m"
          }
#line 1528 "diet.m"
        else
#line 1529 "diet.m"
          {
#line 1529 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1529 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1529 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1529 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1529 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1529 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1529 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1529 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1529 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1529 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1530 "diet.m"
            {
#line 1530 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl_4_p_3(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1529 "diet.m"
            if (mercury__diet__succeeded)
#line 1529 "diet.m"
              {
#line 1531 "diet.m"
                {
#line 1531 "diet.m"
                  mercury__diet__succeeded = mercury__diet__foldl_2_5_p_3(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1529 "diet.m"
                if (mercury__diet__succeeded)
#line 1532 "diet.m"
                  {
#line 1532 "diet.m"
                    /* direct tailcall eliminated */
#line 1532 "diet.m"
                    {
#line 1532 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1532 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1532 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1532 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1532 "diet.m"
                    }
#line 1532 "diet.m"
                    continue;
#line 1532 "diet.m"
                  }
#line 1529 "diet.m"
              }
#line 1529 "diet.m"
          }
#line 1528 "diet.m"
        return mercury__diet__succeeded;
#line 1528 "diet.m"
      }
#line 1528 "diet.m"
      break;
#line 1528 "diet.m"
    }
#line 256 "diet.m"
}

#line 255 "diet.m"
void MR_CALL 
mercury__diet__foldl_4_p_2(
#line 255 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 255 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 255 "diet.m"
  MR_Word mercury__diet__P_5,
#line 255 "diet.m"
  MR_Word mercury__diet__T_6,
#line 255 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 255 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 255 "diet.m"
{
#line 1528 "diet.m"
  while (MR_TRUE)
#line 1528 "diet.m"
    {
#line 1528 "diet.m"
      /* tailcall optimized into a loop */
#line 1528 "diet.m"
      {
#line 1528 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1528 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1527 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1528 "diet.m"
        else
#line 1529 "diet.m"
          {
#line 1529 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1529 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1529 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1529 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1529 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1529 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1529 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1529 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1529 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1529 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1530 "diet.m"
            {
#line 1530 "diet.m"
              mercury__diet__foldl_4_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1531 "diet.m"
            {
#line 1531 "diet.m"
              mercury__diet__foldl_2_5_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1532 "diet.m"
            /* direct tailcall eliminated */
#line 1532 "diet.m"
            {
#line 1532 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1532 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1532 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1532 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1532 "diet.m"
            }
#line 1532 "diet.m"
            continue;
#line 1529 "diet.m"
          }
#line 1528 "diet.m"
      }
#line 1528 "diet.m"
      break;
#line 1528 "diet.m"
    }
#line 255 "diet.m"
}

#line 254 "diet.m"
void MR_CALL 
mercury__diet__foldl_4_p_1(
#line 254 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 254 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 254 "diet.m"
  MR_Word mercury__diet__P_5,
#line 254 "diet.m"
  MR_Word mercury__diet__T_6,
#line 254 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 254 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 254 "diet.m"
{
#line 1528 "diet.m"
  while (MR_TRUE)
#line 1528 "diet.m"
    {
#line 1528 "diet.m"
      /* tailcall optimized into a loop */
#line 1528 "diet.m"
      {
#line 1528 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1528 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1527 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1528 "diet.m"
        else
#line 1529 "diet.m"
          {
#line 1529 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1529 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1529 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1529 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1529 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1529 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1529 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1529 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1529 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1529 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1530 "diet.m"
            {
#line 1530 "diet.m"
              mercury__diet__foldl_4_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1531 "diet.m"
            {
#line 1531 "diet.m"
              mercury__diet__foldl_2_5_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1532 "diet.m"
            /* direct tailcall eliminated */
#line 1532 "diet.m"
            {
#line 1532 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1532 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1532 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1532 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1532 "diet.m"
            }
#line 1532 "diet.m"
            continue;
#line 1529 "diet.m"
          }
#line 1528 "diet.m"
      }
#line 1528 "diet.m"
      break;
#line 1528 "diet.m"
    }
#line 254 "diet.m"
}

#line 253 "diet.m"
void MR_CALL 
mercury__diet__foldl_4_p_0(
#line 253 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 253 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 253 "diet.m"
  MR_Word mercury__diet__P_5,
#line 253 "diet.m"
  MR_Word mercury__diet__T_6,
#line 253 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 253 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 253 "diet.m"
{
#line 1528 "diet.m"
  while (MR_TRUE)
#line 1528 "diet.m"
    {
#line 1528 "diet.m"
      /* tailcall optimized into a loop */
#line 1528 "diet.m"
      {
#line 1528 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1528 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1527 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1528 "diet.m"
        else
#line 1529 "diet.m"
          {
#line 1529 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1529 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1529 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1529 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1529 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1529 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1529 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1529 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1529 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1529 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1530 "diet.m"
            {
#line 1530 "diet.m"
              mercury__diet__foldl_4_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1531 "diet.m"
            {
#line 1531 "diet.m"
              mercury__diet__foldl_2_5_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1532 "diet.m"
            /* direct tailcall eliminated */
#line 1532 "diet.m"
            {
#line 1532 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1532 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1532 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1532 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1532 "diet.m"
            }
#line 1532 "diet.m"
            continue;
#line 1529 "diet.m"
          }
#line 1528 "diet.m"
      }
#line 1528 "diet.m"
      break;
#line 1528 "diet.m"
    }
#line 253 "diet.m"
}

#line 250 "diet.m"
MR_Box MR_CALL 
mercury__diet__foldl_3_f_0(
#line 250 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 250 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 250 "diet.m"
  MR_Word mercury__diet__F_5,
#line 250 "diet.m"
  MR_Word mercury__diet__Set_6,
#line 250 "diet.m"
  MR_Box mercury__diet__Acc0_7)
#line 250 "diet.m"
{
#line 1521 "diet.m"
  {
#line 1521 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1521 "diet.m"
    MR_Box mercury__diet__Acc_8;

#line 1521 "diet.m"
    {
#line 1521 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(mercury__diet__F_5, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__Set_6, mercury__diet__Acc0_7, &mercury__diet__Acc_8);
    }
#line 1521 "diet.m"
    return mercury__diet__Acc_8;
#line 1521 "diet.m"
  }
#line 250 "diet.m"
}

#line 243 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldr_intervals_4_p_2(
#line 243 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 243 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 243 "diet.m"
  MR_Word mercury__diet__P_5,
#line 243 "diet.m"
  MR_Word mercury__diet__T_6,
#line 243 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 243 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 243 "diet.m"
{
#line 1508 "diet.m"
  while (MR_TRUE)
#line 1508 "diet.m"
    {
#line 1508 "diet.m"
      /* tailcall optimized into a loop */
#line 1508 "diet.m"
      {
#line 1508 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1508 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1507 "diet.m"
          {
#line 1507 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1507 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1507 "diet.m"
          }
#line 1508 "diet.m"
        else
#line 1509 "diet.m"
          {
#line 1509 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1509 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1509 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1509 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1509 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1509 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1509 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1509 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
#line 1511 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1509 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1509 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1510 "diet.m"
            {
#line 1510 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldr_intervals_4_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1509 "diet.m"
            if (mercury__diet__succeeded)
#line 1509 "diet.m"
              {
#line 1511 "diet.m"
                mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
#line 1511 "diet.m"
                {
#line 1511 "diet.m"
                  mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1509 "diet.m"
                if (mercury__diet__succeeded)
#line 1512 "diet.m"
                  {
#line 1512 "diet.m"
                    /* direct tailcall eliminated */
#line 1512 "diet.m"
                    {
#line 1512 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1512 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1512 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1512 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1512 "diet.m"
                    }
#line 1512 "diet.m"
                    continue;
#line 1512 "diet.m"
                  }
#line 1509 "diet.m"
              }
#line 1509 "diet.m"
          }
#line 1508 "diet.m"
        return mercury__diet__succeeded;
#line 1508 "diet.m"
      }
#line 1508 "diet.m"
      break;
#line 1508 "diet.m"
    }
#line 243 "diet.m"
}

#line 242 "diet.m"
void MR_CALL 
mercury__diet__foldr_intervals_4_p_1(
#line 242 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 242 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 242 "diet.m"
  MR_Word mercury__diet__P_5,
#line 242 "diet.m"
  MR_Word mercury__diet__T_6,
#line 242 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 242 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 242 "diet.m"
{
#line 1508 "diet.m"
  while (MR_TRUE)
#line 1508 "diet.m"
    {
#line 1508 "diet.m"
      /* tailcall optimized into a loop */
#line 1508 "diet.m"
      {
#line 1508 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1508 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1507 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1508 "diet.m"
        else
#line 1509 "diet.m"
          {
#line 1509 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1509 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1509 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1509 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1509 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1509 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1509 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1509 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
#line 1511 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1509 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1509 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1510 "diet.m"
            {
#line 1510 "diet.m"
              mercury__diet__foldr_intervals_4_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1511 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
#line 1511 "diet.m"
            {
#line 1511 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1512 "diet.m"
            /* direct tailcall eliminated */
#line 1512 "diet.m"
            {
#line 1512 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1512 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1512 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1512 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1512 "diet.m"
            }
#line 1512 "diet.m"
            continue;
#line 1509 "diet.m"
          }
#line 1508 "diet.m"
      }
#line 1508 "diet.m"
      break;
#line 1508 "diet.m"
    }
#line 242 "diet.m"
}

#line 241 "diet.m"
void MR_CALL 
mercury__diet__foldr_intervals_4_p_0(
#line 241 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 241 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 241 "diet.m"
  MR_Word mercury__diet__P_5,
#line 241 "diet.m"
  MR_Word mercury__diet__T_6,
#line 241 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 241 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 241 "diet.m"
{
#line 1508 "diet.m"
  while (MR_TRUE)
#line 1508 "diet.m"
    {
#line 1508 "diet.m"
      /* tailcall optimized into a loop */
#line 1508 "diet.m"
      {
#line 1508 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1508 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1507 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1508 "diet.m"
        else
#line 1509 "diet.m"
          {
#line 1509 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1509 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1509 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1509 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1509 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1509 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1509 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1509 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
#line 1511 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1509 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1509 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1510 "diet.m"
            {
#line 1510 "diet.m"
              mercury__diet__foldr_intervals_4_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1511 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
#line 1511 "diet.m"
            {
#line 1511 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1512 "diet.m"
            /* direct tailcall eliminated */
#line 1512 "diet.m"
            {
#line 1512 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1512 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1512 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1512 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1512 "diet.m"
            }
#line 1512 "diet.m"
            continue;
#line 1509 "diet.m"
          }
#line 1508 "diet.m"
      }
#line 1508 "diet.m"
      break;
#line 1508 "diet.m"
    }
#line 241 "diet.m"
}

#line 233 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl_intervals_4_p_2(
#line 233 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 233 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 233 "diet.m"
  MR_Word mercury__diet__P_5,
#line 233 "diet.m"
  MR_Word mercury__diet__T_6,
#line 233 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 233 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 233 "diet.m"
{
#line 1496 "diet.m"
  while (MR_TRUE)
#line 1496 "diet.m"
    {
#line 1496 "diet.m"
      /* tailcall optimized into a loop */
#line 1496 "diet.m"
      {
#line 1496 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1496 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1495 "diet.m"
          {
#line 1495 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1495 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1495 "diet.m"
          }
#line 1496 "diet.m"
        else
#line 1497 "diet.m"
          {
#line 1497 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1497 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1497 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1497 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1497 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1497 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
#line 1499 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1497 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1497 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1498 "diet.m"
            {
#line 1498 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl_intervals_4_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1497 "diet.m"
            if (mercury__diet__succeeded)
#line 1497 "diet.m"
              {
#line 1499 "diet.m"
                mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
#line 1499 "diet.m"
                {
#line 1499 "diet.m"
                  mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1497 "diet.m"
                if (mercury__diet__succeeded)
#line 1500 "diet.m"
                  {
#line 1500 "diet.m"
                    /* direct tailcall eliminated */
#line 1500 "diet.m"
                    {
#line 1500 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1500 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1500 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1500 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1500 "diet.m"
                    }
#line 1500 "diet.m"
                    continue;
#line 1500 "diet.m"
                  }
#line 1497 "diet.m"
              }
#line 1497 "diet.m"
          }
#line 1496 "diet.m"
        return mercury__diet__succeeded;
#line 1496 "diet.m"
      }
#line 1496 "diet.m"
      break;
#line 1496 "diet.m"
    }
#line 233 "diet.m"
}

#line 232 "diet.m"
void MR_CALL 
mercury__diet__foldl_intervals_4_p_1(
#line 232 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 232 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 232 "diet.m"
  MR_Word mercury__diet__P_5,
#line 232 "diet.m"
  MR_Word mercury__diet__T_6,
#line 232 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 232 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 232 "diet.m"
{
#line 1496 "diet.m"
  while (MR_TRUE)
#line 1496 "diet.m"
    {
#line 1496 "diet.m"
      /* tailcall optimized into a loop */
#line 1496 "diet.m"
      {
#line 1496 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1496 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1495 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1496 "diet.m"
        else
#line 1497 "diet.m"
          {
#line 1497 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1497 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1497 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1497 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1497 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1497 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
#line 1499 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1497 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1497 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1498 "diet.m"
            {
#line 1498 "diet.m"
              mercury__diet__foldl_intervals_4_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1499 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
#line 1499 "diet.m"
            {
#line 1499 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1500 "diet.m"
            /* direct tailcall eliminated */
#line 1500 "diet.m"
            {
#line 1500 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1500 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1500 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1500 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1500 "diet.m"
            }
#line 1500 "diet.m"
            continue;
#line 1497 "diet.m"
          }
#line 1496 "diet.m"
      }
#line 1496 "diet.m"
      break;
#line 1496 "diet.m"
    }
#line 232 "diet.m"
}

#line 231 "diet.m"
void MR_CALL 
mercury__diet__foldl_intervals_4_p_0(
#line 231 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 231 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 231 "diet.m"
  MR_Word mercury__diet__P_5,
#line 231 "diet.m"
  MR_Word mercury__diet__T_6,
#line 231 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 231 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 231 "diet.m"
{
#line 1496 "diet.m"
  while (MR_TRUE)
#line 1496 "diet.m"
    {
#line 1496 "diet.m"
      /* tailcall optimized into a loop */
#line 1496 "diet.m"
      {
#line 1496 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1496 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1495 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1496 "diet.m"
        else
#line 1497 "diet.m"
          {
#line 1497 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1497 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1497 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1497 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1497 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1497 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
#line 1499 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1497 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1497 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1498 "diet.m"
            {
#line 1498 "diet.m"
              mercury__diet__foldl_intervals_4_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1499 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
#line 1499 "diet.m"
            {
#line 1499 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1500 "diet.m"
            /* direct tailcall eliminated */
#line 1500 "diet.m"
            {
#line 1500 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1500 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1500 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1500 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1500 "diet.m"
            }
#line 1500 "diet.m"
            continue;
#line 1497 "diet.m"
          }
#line 1496 "diet.m"
      }
#line 1496 "diet.m"
      break;
#line 1496 "diet.m"
    }
#line 231 "diet.m"
}

#line 224 "diet.m"
MR_Integer MR_CALL 
mercury__diet__count_1_f_0(
#line 224 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_6,
#line 224 "diet.m"
  MR_Word mercury__diet__T_3)
#line 224 "diet.m"
{
#line 1474 "diet.m"
  {
#line 1474 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1474 "diet.m"
    MR_Integer mercury__diet__Count_4;

#line 1475 "diet.m"
    {
#line 1475 "diet.m"
      mercury__diet__count_3_p_0(mercury__diet__TypeClassInfo_for_enum_6, mercury__diet__T_3, (MR_Integer) 0, &mercury__diet__Count_4);
    }
#line 1474 "diet.m"
    return mercury__diet__Count_4;
#line 1474 "diet.m"
  }
#line 224 "diet.m"
}

#line 219 "diet.m"
void MR_CALL 
mercury__diet__divide_by_set_4_p_0(
#line 219 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_9,
#line 219 "diet.m"
  MR_Word mercury__diet__DivideBySet_5,
#line 219 "diet.m"
  MR_Word mercury__diet__Set_6,
#line 219 "diet.m"
  MR_Word * mercury__diet__InPart_7,
#line 219 "diet.m"
  MR_Word * mercury__diet__OutPart_8)
#line 219 "diet.m"
{
#line 1468 "diet.m"
  {
#line 1468 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1268 "diet.m"
    {
#line 1268 "diet.m"
      *mercury__diet__InPart_7 = mercury__diet__inter_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_9, mercury__diet__Set_6, mercury__diet__DivideBySet_5);
    }
#line 1372 "diet.m"
    if ((mercury__diet__Set_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1372 "diet.m"
      *mercury__diet__OutPart_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1372 "diet.m"
    else
#line 1372 "diet.m"
    if ((mercury__diet__DivideBySet_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1377 "diet.m"
      *mercury__diet__OutPart_8 = mercury__diet__Set_6;
#line 1372 "diet.m"
    else
#line 1379 "diet.m"
      {
#line 1379 "diet.m"
        MR_Tuple mercury__diet__Head_27;
#line 1379 "diet.m"
        MR_Word mercury__diet__Stream_28;
#line 1379 "diet.m"
        MR_Word mercury__diet__V_31_31;
#line 1382 "diet.m"
        MR_Word mercury__diet___RemHead_29;
#line 1382 "diet.m"
        MR_Word mercury__diet___RemStream_30;

#line 1381 "diet.m"
        {
#line 1381 "diet.m"
          mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_9, mercury__diet__DivideBySet_5, &mercury__diet__Head_27, &mercury__diet__Stream_28);
        }
#line 1382 "diet.m"
        {
#line 1382 "diet.m"
          mercury__diet__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1382 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__V_31_31, 0) = ((MR_Box) (mercury__diet__Head_27));
#line 1382 "diet.m"
        }
#line 1382 "diet.m"
        {
#line 1382 "diet.m"
          mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_9, mercury__diet__Set_6, mercury__diet__V_31_31, mercury__diet__Stream_28, mercury__diet__OutPart_8, &mercury__diet___RemHead_29, &mercury__diet___RemStream_30);
        }
#line 1379 "diet.m"
      }
#line 1468 "diet.m"
  }
#line 219 "diet.m"
}

#line 212 "diet.m"
void MR_CALL 
mercury__diet__divide_4_p_0(
#line 212 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_12,
#line 212 "diet.m"
  MR_Word mercury__diet__Pred_5,
#line 212 "diet.m"
  MR_Word mercury__diet__Set_6,
#line 212 "diet.m"
  MR_Word * mercury__diet__TrueSet_7,
#line 212 "diet.m"
  MR_Word * mercury__diet__FalseSet_8)
#line 212 "diet.m"
{
#line 1451 "diet.m"
  {
#line 1451 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1451 "diet.m"
    MR_Word mercury__diet__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1451 "diet.m"
    MR_Word mercury__diet__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1453 "diet.m"
    {
#line 1453 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_12, mercury__diet__Pred_5, mercury__diet__TypeClassInfo_for_diet_element_12, mercury__diet__Set_6, mercury__diet__V_10_10, mercury__diet__TrueSet_7, mercury__diet__V_11_11, mercury__diet__FalseSet_8);
    }
#line 1451 "diet.m"
  }
#line 212 "diet.m"
}

#line 205 "diet.m"
void MR_CALL 
mercury__diet__difference_3_p_0(
#line 205 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_24,
#line 205 "diet.m"
  MR_Word mercury__diet__SetA_4,
#line 205 "diet.m"
  MR_Word mercury__diet__SetB_5,
#line 205 "diet.m"
  MR_Word * mercury__diet__Set_6)
#line 205 "diet.m"
{
#line 1372 "diet.m"
  {
#line 1372 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1372 "diet.m"
    if ((mercury__diet__SetA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1372 "diet.m"
      *mercury__diet__Set_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1372 "diet.m"
    else
#line 1372 "diet.m"
    if ((mercury__diet__SetB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1377 "diet.m"
      *mercury__diet__Set_6 = mercury__diet__SetA_4;
#line 1372 "diet.m"
    else
#line 1379 "diet.m"
      {
#line 1379 "diet.m"
        MR_Tuple mercury__diet__Head_19;
#line 1379 "diet.m"
        MR_Word mercury__diet__Stream_20;
#line 1379 "diet.m"
        MR_Word mercury__diet__V_23_23;
#line 1382 "diet.m"
        MR_Word mercury__diet___RemHead_21;
#line 1382 "diet.m"
        MR_Word mercury__diet___RemStream_22;

#line 1381 "diet.m"
        {
#line 1381 "diet.m"
          mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_24, mercury__diet__SetB_5, &mercury__diet__Head_19, &mercury__diet__Stream_20);
        }
#line 1382 "diet.m"
        {
#line 1382 "diet.m"
          mercury__diet__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1382 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__V_23_23, 0) = ((MR_Box) (mercury__diet__Head_19));
#line 1382 "diet.m"
        }
#line 1382 "diet.m"
        {
#line 1382 "diet.m"
          mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_24, mercury__diet__SetA_4, mercury__diet__V_23_23, mercury__diet__Stream_20, mercury__diet__Set_6, &mercury__diet___RemHead_21, &mercury__diet___RemStream_22);
        }
#line 1379 "diet.m"
      }
#line 1372 "diet.m"
  }
#line 205 "diet.m"
}

#line 204 "diet.m"
MR_Word MR_CALL 
mercury__diet__difference_2_f_0(
#line 204 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
#line 204 "diet.m"
  MR_Word mercury__diet__SetA_4,
#line 204 "diet.m"
  MR_Word mercury__diet__SetB_5)
#line 204 "diet.m"
{
#line 1372 "diet.m"
  {
#line 1372 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1372 "diet.m"
    MR_Word mercury__diet__Set_6;

#line 1372 "diet.m"
    if ((mercury__diet__SetA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1372 "diet.m"
      mercury__diet__Set_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1372 "diet.m"
    else
#line 1372 "diet.m"
    if ((mercury__diet__SetB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1377 "diet.m"
      mercury__diet__Set_6 = mercury__diet__SetA_4;
#line 1372 "diet.m"
    else
#line 1379 "diet.m"
      {
#line 1379 "diet.m"
        MR_Tuple mercury__diet__Head_23;
#line 1379 "diet.m"
        MR_Word mercury__diet__Stream_24;
#line 1379 "diet.m"
        MR_Word mercury__diet__V_27_27;
#line 1382 "diet.m"
        MR_Word mercury__diet___RemHead_25;
#line 1382 "diet.m"
        MR_Word mercury__diet___RemStream_26;

#line 1381 "diet.m"
        {
#line 1381 "diet.m"
          mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__SetB_5, &mercury__diet__Head_23, &mercury__diet__Stream_24);
        }
#line 1382 "diet.m"
        {
#line 1382 "diet.m"
          mercury__diet__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1382 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__V_27_27, 0) = ((MR_Box) (mercury__diet__Head_23));
#line 1382 "diet.m"
        }
#line 1382 "diet.m"
        {
#line 1382 "diet.m"
          mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__SetA_4, mercury__diet__V_27_27, mercury__diet__Stream_24, &mercury__diet__Set_6, &mercury__diet___RemHead_25, &mercury__diet___RemStream_26);
        }
#line 1379 "diet.m"
      }
#line 1372 "diet.m"
    return mercury__diet__Set_6;
#line 1372 "diet.m"
  }
#line 204 "diet.m"
}

#line 198 "diet.m"
void MR_CALL 
mercury__diet__intersect_list_2_p_0(
#line 198 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
#line 198 "diet.m"
  MR_Word mercury__diet__HeadVar__1_1,
#line 198 "diet.m"
  MR_Word * mercury__diet__HeadVar__2_2)
#line 198 "diet.m"
{
#line 1361 "diet.m"
  {
#line 1361 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1361 "diet.m"
    if ((mercury__diet__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 691 "diet.m"
      *mercury__diet__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1361 "diet.m"
    else
#line 1362 "diet.m"
      {
#line 1362 "diet.m"
        MR_Word mercury__diet__Set0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 0)));
#line 1362 "diet.m"
        MR_Word mercury__diet__Sets_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 1)));

#line 1363 "diet.m"
        {
#line 1363 "diet.m"
          mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__Sets_4, mercury__diet__Set0_3, mercury__diet__HeadVar__2_2);
        }
#line 1362 "diet.m"
      }
#line 1361 "diet.m"
  }
#line 198 "diet.m"
}

#line 197 "diet.m"
MR_Word MR_CALL 
mercury__diet__intersect_list_1_f_0(
#line 197 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
#line 197 "diet.m"
  MR_Word mercury__diet__Sets_3)
#line 197 "diet.m"
{
#line 1359 "diet.m"
  {
#line 1359 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1359 "diet.m"
    MR_Word mercury__diet__Set_4;

#line 1359 "diet.m"
    {
#line 1359 "diet.m"
      mercury__diet__intersect_list_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__Sets_3, &mercury__diet__Set_4);
    }
#line 1359 "diet.m"
    return mercury__diet__Set_4;
#line 1359 "diet.m"
  }
#line 197 "diet.m"
}

#line 191 "diet.m"
void MR_CALL 
mercury__diet__intersect_3_p_0(
#line 191 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_6,
#line 191 "diet.m"
  MR_Word mercury__diet__SetA_4,
#line 191 "diet.m"
  MR_Word mercury__diet__SetB_5,
#line 191 "diet.m"
  MR_Word * mercury__diet__HeadVar__3_3)
#line 191 "diet.m"
{
#line 1268 "diet.m"
  {
#line 1268 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1268 "diet.m"
    {
#line 1268 "diet.m"
      *mercury__diet__HeadVar__3_3 = mercury__diet__inter_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_6, mercury__diet__SetA_4, mercury__diet__SetB_5);
    }
#line 1268 "diet.m"
  }
#line 191 "diet.m"
}

#line 190 "diet.m"
MR_Word MR_CALL 
mercury__diet__intersect_2_f_0(
#line 190 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_6,
#line 190 "diet.m"
  MR_Word mercury__diet__SetA_4,
#line 190 "diet.m"
  MR_Word mercury__diet__SetB_5)
#line 190 "diet.m"
{
#line 1266 "diet.m"
  {
#line 1266 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1266 "diet.m"
    MR_Word mercury__diet__HeadVar__3_3;

#line 1266 "diet.m"
    {
#line 1266 "diet.m"
      mercury__diet__HeadVar__3_3 = mercury__diet__inter_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_6, mercury__diet__SetA_4, mercury__diet__SetB_5);
    }
#line 1266 "diet.m"
    return mercury__diet__HeadVar__3_3;
#line 1266 "diet.m"
  }
#line 190 "diet.m"
}

#line 185 "diet.m"
void MR_CALL 
mercury__diet__union_list_2_p_0(
#line 185 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
#line 185 "diet.m"
  MR_Word mercury__diet__Sets_3,
#line 185 "diet.m"
  MR_Word * mercury__diet__Set_4)
#line 185 "diet.m"
{
#line 1257 "diet.m"
  {
#line 1257 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1257 "diet.m"
    if ((mercury__diet__Sets_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1258 "diet.m"
      *mercury__diet__Set_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1257 "diet.m"
    else
#line 1260 "diet.m"
      {
#line 1260 "diet.m"
        MR_Word mercury__diet__SetA_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Sets_3, (MR_Integer) 0)));
#line 1260 "diet.m"
        MR_Word mercury__diet__SetBs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Sets_3, (MR_Integer) 1)));

#line 1261 "diet.m"
        {
#line 1261 "diet.m"
          mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__SetBs_6, mercury__diet__SetA_5, mercury__diet__Set_4);
        }
#line 1260 "diet.m"
      }
#line 1257 "diet.m"
  }
#line 185 "diet.m"
}

#line 184 "diet.m"
MR_Word MR_CALL 
mercury__diet__union_list_1_f_0(
#line 184 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
#line 184 "diet.m"
  MR_Word mercury__diet__Sets_3)
#line 184 "diet.m"
{
#line 1253 "diet.m"
  {
#line 1253 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1253 "diet.m"
    MR_Word mercury__diet__Set_4;

#line 1253 "diet.m"
    {
#line 1253 "diet.m"
      mercury__diet__union_list_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__Sets_3, &mercury__diet__Set_4);
    }
#line 1253 "diet.m"
    return mercury__diet__Set_4;
#line 1253 "diet.m"
  }
#line 184 "diet.m"
}

#line 179 "diet.m"
void MR_CALL 
mercury__diet__union_3_p_0(
#line 179 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_6,
#line 179 "diet.m"
  MR_Word mercury__diet__DietA_4,
#line 179 "diet.m"
  MR_Word mercury__diet__DietB_5,
#line 179 "diet.m"
  MR_Word * mercury__diet__HeadVar__3_3)
#line 179 "diet.m"
{
#line 1149 "diet.m"
  {
#line 1149 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1149 "diet.m"
    {
#line 1149 "diet.m"
      *mercury__diet__HeadVar__3_3 = mercury__diet__union_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_6, mercury__diet__DietA_4, mercury__diet__DietB_5);
    }
#line 1149 "diet.m"
  }
#line 179 "diet.m"
}

#line 178 "diet.m"
MR_Word MR_CALL 
mercury__diet__union_2_f_0(
#line 178 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_16,
#line 178 "diet.m"
  MR_Word mercury__diet__Input_4,
#line 178 "diet.m"
  MR_Word mercury__diet__Stream0_5)
#line 178 "diet.m"
{
#line 1154 "diet.m"
  while (MR_TRUE)
#line 1154 "diet.m"
    {
#line 1154 "diet.m"
      /* tailcall optimized into a loop */
#line 1154 "diet.m"
      {
#line 1154 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 1154 "diet.m"
        MR_Word mercury__diet__Result_6;
#line 1152 "diet.m"
        MR_Integer mercury__diet__V_13_13;
#line 1152 "diet.m"
        MR_Integer mercury__diet__V_14_14;
#line 134 "private_builtin.opt"
        MR_Word mercury__diet__TypeInfo_18_18;
#line 134 "private_builtin.opt"
        MR_Word mercury__diet__TypeInfo_19_19;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__union_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_16 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 19464 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_18_18  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 512 "diet.m"
        if ((mercury__diet__Stream0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
          mercury__diet__V_13_13 = (MR_Integer) 0;
#line 512 "diet.m"
        else
#line 513 "diet.m"
          {
#line 513 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 0)));
#line 513 "diet.m"
            MR_Word mercury__diet__V_22_22;
#line 513 "diet.m"
            MR_Word mercury__diet__V_23_23;

#line 513 "diet.m"
            mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 1)));
#line 513 "diet.m"
            mercury__diet__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 2)));
#line 513 "diet.m"
            mercury__diet__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 3)));
#line 513 "diet.m"
          }
#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__union_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_16 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 19509 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_19_19  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 512 "diet.m"
        if ((mercury__diet__Input_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
          mercury__diet__V_14_14 = (MR_Integer) 0;
#line 512 "diet.m"
        else
#line 513 "diet.m"
          {
#line 513 "diet.m"
            MR_Tuple mercury__diet__V_24_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 0)));
#line 513 "diet.m"
            MR_Word mercury__diet__V_26_26;
#line 513 "diet.m"
            MR_Word mercury__diet__V_27_27;

#line 513 "diet.m"
            mercury__diet__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 1)));
#line 513 "diet.m"
            mercury__diet__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 2)));
#line 513 "diet.m"
            mercury__diet__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 3)));
#line 513 "diet.m"
          }
#line 493 "diet.m"
        mercury__diet__succeeded = (mercury__diet__V_13_13 > mercury__diet__V_14_14);
#line 1154 "diet.m"
        if (mercury__diet__succeeded)
#line 1153 "diet.m"
          {
#line 1153 "diet.m"
            /* direct tailcall eliminated */
#line 1153 "diet.m"
            {
#line 1153 "diet.m"
              MR_Word mercury__diet__Input__tmp_copy_4 = mercury__diet__Stream0_5;
#line 1153 "diet.m"
              MR_Word mercury__diet__Stream0__tmp_copy_5 = mercury__diet__Input_4;

#line 1153 "diet.m"
              mercury__diet__Stream0_5 = mercury__diet__Stream0__tmp_copy_5;
#line 1153 "diet.m"
              mercury__diet__Input_4 = mercury__diet__Input__tmp_copy_4;
#line 1153 "diet.m"
            }
#line 1153 "diet.m"
            continue;
#line 1153 "diet.m"
          }
#line 1154 "diet.m"
        else
#line 1155 "diet.m"
          {
#line 1155 "diet.m"
            MR_Word mercury__diet__Head1_7;
#line 1155 "diet.m"
            MR_Word mercury__diet__Stream1_8;
#line 1155 "diet.m"
            MR_Word mercury__diet__Left2_9;
#line 1155 "diet.m"
            MR_Word mercury__diet__Head2_10;
#line 1155 "diet.m"
            MR_Word mercury__diet__Stream2_11;
#line 1155 "diet.m"
            MR_Word mercury__diet__V_15_15;

#line 671 "diet.m"
            if ((mercury__diet__Stream0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 671 "diet.m"
              {
#line 672 "diet.m"
                mercury__diet__Head1_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 673 "diet.m"
                mercury__diet__Stream1_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 671 "diet.m"
              }
#line 671 "diet.m"
            else
#line 675 "diet.m"
              {
#line 675 "diet.m"
                MR_Tuple mercury__diet__X_37;

#line 676 "diet.m"
                {
#line 676 "diet.m"
                  mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_16, mercury__diet__Stream0_5, &mercury__diet__X_37, &mercury__diet__Stream1_8);
                }
#line 677 "diet.m"
                {
#line 677 "diet.m"
                  mercury__diet__Head1_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 677 "diet.m"
                  MR_hl_field(MR_mktag(1), mercury__diet__Head1_7, 0) = ((MR_Box) (mercury__diet__X_37));
#line 677 "diet.m"
                }
#line 675 "diet.m"
              }
#line 1156 "diet.m"
            mercury__diet__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1156 "diet.m"
            {
#line 1156 "diet.m"
              mercury__diet__union_2_7_p_0(mercury__diet__TypeClassInfo_for_diet_element_16, mercury__diet__Input_4, mercury__diet__V_15_15, mercury__diet__Head1_7, mercury__diet__Stream1_8, &mercury__diet__Left2_9, &mercury__diet__Head2_10, &mercury__diet__Stream2_11);
            }
#line 1160 "diet.m"
            if ((mercury__diet__Head2_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1159 "diet.m"
              mercury__diet__Result_6 = mercury__diet__Left2_9;
#line 1160 "diet.m"
            else
#line 1161 "diet.m"
              {
#line 1161 "diet.m"
                MR_Tuple mercury__diet__I_12 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head2_10, (MR_Integer) 0)));

#line 1162 "diet.m"
                {
#line 1162 "diet.m"
                  mercury__diet__Result_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_16, mercury__diet__I_12, mercury__diet__Left2_9, mercury__diet__Stream2_11);
                }
#line 1161 "diet.m"
              }
#line 1155 "diet.m"
          }
#line 1154 "diet.m"
        return mercury__diet__Result_6;
#line 1154 "diet.m"
      }
#line 1154 "diet.m"
      break;
#line 1154 "diet.m"
    }
#line 178 "diet.m"
}

#line 172 "diet.m"
void MR_CALL 
mercury__diet__split_5_p_0(
#line 172 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_25,
#line 172 "diet.m"
  MR_Box mercury__diet__X_6,
#line 172 "diet.m"
  MR_Word mercury__diet__Set_7,
#line 172 "diet.m"
  MR_Word * mercury__diet__Lesser_8,
#line 172 "diet.m"
  MR_Word * mercury__diet__IsPresent_9,
#line 172 "diet.m"
  MR_Word * mercury__diet__Greater_10)
#line 172 "diet.m"
{
#line 1120 "diet.m"
  {
#line 1120 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1120 "diet.m"
    if ((mercury__diet__Set_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1120 "diet.m"
      {
#line 1121 "diet.m"
        *mercury__diet__IsPresent_9 = (MR_Integer) 0;
#line 1122 "diet.m"
        *mercury__diet__Lesser_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1123 "diet.m"
        *mercury__diet__Greater_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1120 "diet.m"
      }
#line 1120 "diet.m"
    else
#line 1125 "diet.m"
      {
#line 1125 "diet.m"
        MR_Box mercury__diet__A_11;
#line 1125 "diet.m"
        MR_Box mercury__diet__B_12;
#line 1125 "diet.m"
        MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_7, (MR_Integer) 2)));
#line 1125 "diet.m"
        MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_7, (MR_Integer) 3)));
#line 1125 "diet.m"
        MR_Tuple mercury__diet__V_18_18 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set_7, (MR_Integer) 0)));
#line 1125 "diet.m"
        MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set_7, (MR_Integer) 1)));
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

#line 1125 "diet.m"
        mercury__diet__A_11 = (MR_hl_field(MR_mktag(0), mercury__diet__V_18_18, (MR_Integer) 0));
#line 1125 "diet.m"
        mercury__diet__B_12 = (MR_hl_field(MR_mktag(0), mercury__diet__V_18_18, (MR_Integer) 1));
#line 39 "diet.m"
        mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_25, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_25), mercury__diet__X_6, mercury__diet__A_11);
        }
#line 1129 "diet.m"
        if (mercury__diet__succeeded)
#line 1127 "diet.m"
          {
#line 1127 "diet.m"
            MR_Word mercury__diet__RL_16;

#line 1127 "diet.m"
            {
#line 1127 "diet.m"
              mercury__diet__split_5_p_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__X_6, mercury__diet__L_14, mercury__diet__Lesser_8, mercury__diet__IsPresent_9, &mercury__diet__RL_16);
            }
#line 1128 "diet.m"
            {
#line 1128 "diet.m"
              *mercury__diet__Greater_10 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__V_18_18, mercury__diet__RL_16, mercury__diet__R_15);
            }
#line 1127 "diet.m"
          }
#line 1129 "diet.m"
        else
#line 1132 "diet.m"
          {
#line 39 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_25, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
            {
#line 39 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_25), mercury__diet__B_12, mercury__diet__X_6);
            }
#line 1132 "diet.m"
            if (mercury__diet__succeeded)
#line 1130 "diet.m"
              {
#line 1130 "diet.m"
                MR_Word mercury__diet__LR_17;

#line 1130 "diet.m"
                {
#line 1130 "diet.m"
                  mercury__diet__split_5_p_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__X_6, mercury__diet__R_15, &mercury__diet__LR_17, mercury__diet__IsPresent_9, mercury__diet__Greater_10);
                }
#line 1131 "diet.m"
                {
#line 1131 "diet.m"
                  *mercury__diet__Lesser_8 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__V_18_18, mercury__diet__L_14, mercury__diet__LR_17);
                }
#line 1130 "diet.m"
              }
#line 1132 "diet.m"
            else
#line 1133 "diet.m"
              {
#line 1134 "diet.m"
                MR_Word mercury__diet__TypeInfo_27_27;
#line 1139 "diet.m"
                MR_Word mercury__diet__TypeInfo_29_29;

#line 1133 "diet.m"
                *mercury__diet__IsPresent_9 = (MR_Integer) 1;
#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__split_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_25 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 19791 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_27_27  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 1134 "diet.m"
                {
#line 1134 "diet.m"
                  mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_27_27, mercury__diet__X_6, mercury__diet__A_11);
                }
#line 1136 "diet.m"
                if (mercury__diet__succeeded)
#line 1135 "diet.m"
                  *mercury__diet__Lesser_8 = mercury__diet__L_14;
#line 1136 "diet.m"
                else
#line 1137 "diet.m"
                  {
#line 1137 "diet.m"
                    MR_Tuple mercury__diet__V_21_21;
#line 1137 "diet.m"
                    MR_Box mercury__diet__V_22_22;
#line 45 "diet.m"
                    MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_25, (MR_Integer) 0)), (MR_Integer) 7)));

#line 45 "diet.m"
                    {
#line 45 "diet.m"
                      mercury__diet__V_22_22 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_25), mercury__diet__X_6);
                    }
#line 1137 "diet.m"
                    {
#line 1137 "diet.m"
                      mercury__diet__V_21_21 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1137 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_21_21, 0) = mercury__diet__A_11;
#line 1137 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_21_21, 1) = mercury__diet__V_22_22;
#line 1137 "diet.m"
                    }
#line 1137 "diet.m"
                    {
#line 1137 "diet.m"
                      *mercury__diet__Lesser_8 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__V_21_21, mercury__diet__L_14);
                    }
#line 1137 "diet.m"
                  }
#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__split_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_25 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 19855 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_29_29  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 1139 "diet.m"
                {
#line 1139 "diet.m"
                  mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_29_29, mercury__diet__X_6, mercury__diet__B_12);
                }
#line 1141 "diet.m"
                if (mercury__diet__succeeded)
#line 1140 "diet.m"
                  *mercury__diet__Greater_10 = mercury__diet__R_15;
#line 1141 "diet.m"
                else
#line 1142 "diet.m"
                  {
#line 1142 "diet.m"
                    MR_Tuple mercury__diet__V_23_23;
#line 1142 "diet.m"
                    MR_Box mercury__diet__V_24_24;
#line 42 "diet.m"
                    MR_Box MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_25, (MR_Integer) 0)), (MR_Integer) 6)));

#line 42 "diet.m"
                    {
#line 42 "diet.m"
                      mercury__diet__V_24_24 = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_25), mercury__diet__X_6);
                    }
#line 1142 "diet.m"
                    {
#line 1142 "diet.m"
                      mercury__diet__V_23_23 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1142 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_23_23, 0) = mercury__diet__V_24_24;
#line 1142 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_23_23, 1) = mercury__diet__B_12;
#line 1142 "diet.m"
                    }
#line 1142 "diet.m"
                    {
#line 1142 "diet.m"
                      *mercury__diet__Greater_10 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__V_23_23, mercury__diet__R_15);
                    }
#line 1142 "diet.m"
                  }
#line 1133 "diet.m"
              }
#line 1132 "diet.m"
          }
#line 1125 "diet.m"
      }
#line 1120 "diet.m"
  }
#line 172 "diet.m"
}

#line 164 "diet.m"
MR_bool MR_CALL 
mercury__diet__remove_least_3_p_0(
#line 164 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_16,
#line 164 "diet.m"
  MR_Box * mercury__diet__X_4,
#line 164 "diet.m"
  MR_Word mercury__diet__Set0_5,
#line 164 "diet.m"
  MR_Word * mercury__diet__Set_6)
#line 164 "diet.m"
{
#line 19928 "diet.c"
  {
#line 19930 "diet.c"
    MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Set0_5)) == (MR_mktag((MR_Integer) 1)));
#line 19932 "diet.c"
    MR_Box mercury__diet__Y_11;
#line 19934 "diet.c"
    MR_Word mercury__diet__Stream_12;
#line 19936 "diet.c"
    MR_Tuple mercury__diet__V_13_13;
#line 19938 "diet.c"
    MR_Tuple mercury__diet__V_19_19;
#line 19940 "diet.c"
    MR_Integer mercury__diet__V_20_20;
#line 19942 "diet.c"
    MR_Word mercury__diet__V_21_21;
#line 19944 "diet.c"
    MR_Word mercury__diet__V_22_22;
#line 1109 "diet.m"
    MR_Word mercury__diet__TypeInfo_18_18;
#line 1109 "diet.m"
    MR_Integer mercury__diet__TypeInfoIndex_17;

#line 19951 "diet.c"
    if (mercury__diet__succeeded)
#line 19953 "diet.c"
      {
#line 19955 "diet.c"
        mercury__diet__V_19_19 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 0)));
#line 19957 "diet.c"
        mercury__diet__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 1)));
#line 19959 "diet.c"
        mercury__diet__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 2)));
#line 19961 "diet.c"
        mercury__diet__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 3)));
#line 1108 "diet.m"
        {
#line 1108 "diet.m"
          mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_16, mercury__diet__Set0_5, &mercury__diet__V_13_13, &mercury__diet__Stream_12);
        }
#line 1108 "diet.m"
        *mercury__diet__X_4 = (MR_hl_field(MR_mktag(0), mercury__diet__V_13_13, (MR_Integer) 0));
#line 1108 "diet.m"
        mercury__diet__Y_11 = (MR_hl_field(MR_mktag(0), mercury__diet__V_13_13, (MR_Integer) 1));
#line 19972 "diet.c"
        mercury__diet__TypeInfoIndex_17 = (MR_Integer) 1;
#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__remove_least_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_16 ;
	Index =  mercury__diet__TypeInfoIndex_17 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 19989 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_18_18  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 1109 "diet.m"
        {
#line 1109 "diet.m"
          mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_18_18, *mercury__diet__X_4, mercury__diet__Y_11);
        }
#line 1111 "diet.m"
        if (mercury__diet__succeeded)
#line 1110 "diet.m"
          *mercury__diet__Set_6 = mercury__diet__Stream_12;
#line 1111 "diet.m"
        else
#line 1112 "diet.m"
          {
#line 1112 "diet.m"
            MR_Tuple mercury__diet__V_14_14;
#line 1112 "diet.m"
            MR_Box mercury__diet__V_15_15;
#line 42 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_16, (MR_Integer) 0)), (MR_Integer) 6)));

#line 42 "diet.m"
            {
#line 42 "diet.m"
              mercury__diet__V_15_15 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_16), *mercury__diet__X_4);
            }
#line 1112 "diet.m"
            {
#line 1112 "diet.m"
              mercury__diet__V_14_14 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1112 "diet.m"
              MR_hl_field(MR_mktag(0), mercury__diet__V_14_14, 0) = mercury__diet__V_15_15;
#line 1112 "diet.m"
              MR_hl_field(MR_mktag(0), mercury__diet__V_14_14, 1) = mercury__diet__Y_11;
#line 1112 "diet.m"
            }
#line 1112 "diet.m"
            {
#line 1112 "diet.m"
              *mercury__diet__Set_6 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_16, mercury__diet__V_14_14, mercury__diet__Stream_12);
            }
#line 1112 "diet.m"
          }
#line 1111 "diet.m"
        mercury__diet__succeeded = MR_TRUE;
#line 20040 "diet.c"
      }
#line 20042 "diet.c"
    return mercury__diet__succeeded;
#line 20044 "diet.c"
  }
#line 164 "diet.m"
}

#line 157 "diet.m"
MR_bool MR_CALL 
mercury__diet__remove_list_3_p_0(
#line 157 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
#line 157 "diet.m"
  MR_Word mercury__diet__X_4,
#line 157 "diet.m"
  MR_Word mercury__diet__Set0_5,
#line 157 "diet.m"
  MR_Word * mercury__diet__Set_6)
#line 157 "diet.m"
{
#line 1095 "diet.m"
  {
#line 1095 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1095 "diet.m"
    MR_Word mercury__diet__SetX_7;

#line 1096 "diet.m"
    {
#line 1096 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__X_4, &mercury__diet__SetX_7);
    }
#line 776 "diet.m"
    if ((mercury__diet__SetX_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 776 "diet.m"
      mercury__diet__succeeded = MR_TRUE;
#line 776 "diet.m"
    else
#line 778 "diet.m"
      {
#line 778 "diet.m"
        MR_Tuple mercury__diet__XY1_19;
#line 778 "diet.m"
        MR_Word mercury__diet__R1_20;
#line 778 "diet.m"
        MR_Tuple mercury__diet__XY2_21;
#line 778 "diet.m"
        MR_Word mercury__diet__R2_22;
#line 778 "diet.m"
        MR_Word mercury__diet__V_23_23;
#line 778 "diet.m"
        MR_Word mercury__diet__V_24_24;
#line 779 "diet.m"
        MR_Tuple mercury__diet__V_15_15;
#line 779 "diet.m"
        MR_Integer mercury__diet__V_16_16;
#line 779 "diet.m"
        MR_Word mercury__diet__V_17_17;
#line 779 "diet.m"
        MR_Word mercury__diet__V_18_18;

#line 779 "diet.m"
        mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Set0_5)) == (MR_mktag((MR_Integer) 1)));
#line 779 "diet.m"
        if (mercury__diet__succeeded)
#line 779 "diet.m"
          {
#line 779 "diet.m"
            mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 0)));
#line 779 "diet.m"
            mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 1)));
#line 779 "diet.m"
            mercury__diet__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 2)));
#line 779 "diet.m"
            mercury__diet__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 3)));
#line 780 "diet.m"
            {
#line 780 "diet.m"
              mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__SetX_7, &mercury__diet__XY1_19, &mercury__diet__R1_20);
            }
#line 781 "diet.m"
            {
#line 781 "diet.m"
              mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__Set0_5, &mercury__diet__XY2_21, &mercury__diet__R2_22);
            }
#line 782 "diet.m"
            mercury__diet__V_23_23 = (MR_Integer) 1;
#line 782 "diet.m"
            {
#line 782 "diet.m"
              mercury__diet__subset_2_5_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__XY1_19, mercury__diet__R1_20, mercury__diet__XY2_21, mercury__diet__R2_22, &mercury__diet__V_24_24);
            }
#line 782 "diet.m"
            mercury__diet__succeeded = (mercury__diet__V_23_23 == mercury__diet__V_24_24);
#line 779 "diet.m"
          }
#line 778 "diet.m"
      }
#line 1095 "diet.m"
    if (mercury__diet__succeeded)
#line 1095 "diet.m"
      {
#line 1372 "diet.m"
        if ((mercury__diet__Set0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1372 "diet.m"
          *mercury__diet__Set_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1372 "diet.m"
        else
#line 1372 "diet.m"
        if ((mercury__diet__SetX_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1377 "diet.m"
          *mercury__diet__Set_6 = mercury__diet__Set0_5;
#line 1372 "diet.m"
        else
#line 1379 "diet.m"
          {
#line 1379 "diet.m"
            MR_Tuple mercury__diet__Head_40;
#line 1379 "diet.m"
            MR_Word mercury__diet__Stream_41;
#line 1379 "diet.m"
            MR_Word mercury__diet__V_44_44;
#line 1382 "diet.m"
            MR_Word mercury__diet___RemHead_42;
#line 1382 "diet.m"
            MR_Word mercury__diet___RemStream_43;

#line 1381 "diet.m"
            {
#line 1381 "diet.m"
              mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__SetX_7, &mercury__diet__Head_40, &mercury__diet__Stream_41);
            }
#line 1382 "diet.m"
            {
#line 1382 "diet.m"
              mercury__diet__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1382 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__V_44_44, 0) = ((MR_Box) (mercury__diet__Head_40));
#line 1382 "diet.m"
            }
#line 1382 "diet.m"
            {
#line 1382 "diet.m"
              mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__Set0_5, mercury__diet__V_44_44, mercury__diet__Stream_41, mercury__diet__Set_6, &mercury__diet___RemHead_42, &mercury__diet___RemStream_43);
            }
#line 1379 "diet.m"
          }
#line 1372 "diet.m"
        mercury__diet__succeeded = MR_TRUE;
#line 1095 "diet.m"
      }
#line 1095 "diet.m"
    return mercury__diet__succeeded;
#line 1095 "diet.m"
  }
#line 157 "diet.m"
}

#line 150 "diet.m"
MR_bool MR_CALL 
mercury__diet__remove_3_p_0(
#line 150 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_30,
#line 150 "diet.m"
  MR_Box mercury__diet__HeadVar__1_1,
#line 150 "diet.m"
  MR_Word mercury__diet__HeadVar__2_2,
#line 150 "diet.m"
  MR_Word * mercury__diet__HeadVar__3_3)
#line 150 "diet.m"
{
#line 20213 "diet.c"
  {
#line 20215 "diet.c"
    MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 20217 "diet.c"
    MR_Word mercury__diet__TypeInfo_32_32;
#line 20219 "diet.c"
    MR_Box mercury__diet__X_9;
#line 20221 "diet.c"
    MR_Box mercury__diet__Y_10;
#line 20223 "diet.c"
    MR_Integer mercury__diet__H_11;
#line 20225 "diet.c"
    MR_Word mercury__diet__Left_12;
#line 20227 "diet.c"
    MR_Word mercury__diet__Right_13;
#line 20229 "diet.c"
    MR_Word mercury__diet__CZX_14;
#line 20231 "diet.c"
    MR_Integer mercury__diet__PolyConst1_31;
#line 20233 "diet.c"
    MR_Tuple mercury__diet__V_34_34;

#line 20236 "diet.c"
    if (mercury__diet__succeeded)
#line 20238 "diet.c"
      {
#line 20240 "diet.c"
        mercury__diet__V_34_34 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
#line 20242 "diet.c"
        mercury__diet__H_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 20244 "diet.c"
        mercury__diet__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 2)));
#line 20246 "diet.c"
        mercury__diet__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 3)));
#line 1056 "diet.m"
        mercury__diet__X_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_34_34, (MR_Integer) 0));
#line 1056 "diet.m"
        mercury__diet__Y_10 = (MR_hl_field(MR_mktag(0), mercury__diet__V_34_34, (MR_Integer) 1));
#line 20252 "diet.c"
        mercury__diet__PolyConst1_31 = (MR_Integer) 1;
#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_30 ;
	Index =  mercury__diet__PolyConst1_31 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 20269 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_32_32  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 1057 "diet.m"
        {
#line 1057 "diet.m"
          mercury__builtin__compare_3_p_0(mercury__diet__TypeInfo_32_32, &mercury__diet__CZX_14, mercury__diet__HeadVar__1_1, mercury__diet__X_9);
        }
#line 1062 "diet.m"
#line 1062 "diet.m"
        switch (mercury__diet__CZX_14) {
#line 1062 "diet.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1062 "diet.m"
          case (MR_Integer) 1:
#line 1059 "diet.m"
            {
#line 1059 "diet.m"
              MR_Word mercury__diet__L_15;

#line 1060 "diet.m"
              {
#line 1060 "diet.m"
                mercury__diet__succeeded = mercury__diet__remove_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__HeadVar__1_1, mercury__diet__Left_12, &mercury__diet__L_15);
              }
#line 1059 "diet.m"
              if (mercury__diet__succeeded)
#line 1059 "diet.m"
                {
#line 1061 "diet.m"
                  {
#line 1061 "diet.m"
                    *mercury__diet__HeadVar__3_3 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__V_34_34, mercury__diet__L_15, mercury__diet__Right_13);
                  }
#line 1061 "diet.m"
                  mercury__diet__succeeded = MR_TRUE;
#line 1059 "diet.m"
                }
#line 1059 "diet.m"
            }
#line 1062 "diet.m"
            break;
#line 1062 "diet.m"
          case (MR_Integer) 0:
#line 1062 "diet.m"
          case (MR_Integer) 2:
#line 1065 "diet.m"
            {
#line 1065 "diet.m"
              MR_Word mercury__diet__TypeInfo_33_33;
#line 1065 "diet.m"
              MR_Word mercury__diet__CZY_16;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_30 ;
	Index =  mercury__diet__PolyConst1_31 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 20341 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_33_33  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 1066 "diet.m"
              {
#line 1066 "diet.m"
                mercury__builtin__compare_3_p_0(mercury__diet__TypeInfo_33_33, &mercury__diet__CZY_16, mercury__diet__HeadVar__1_1, mercury__diet__Y_10);
              }
#line 1076 "diet.m"
#line 1076 "diet.m"
              switch (mercury__diet__CZY_16) {
#line 1076 "diet.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1076 "diet.m"
                case (MR_Integer) 1:
#line 1081 "diet.m"
                  {
#line 1081 "diet.m"
#line 1081 "diet.m"
                    switch (mercury__diet__CZX_14) {
#line 1081 "diet.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1081 "diet.m"
                      case (MR_Integer) 0:
#line 1079 "diet.m"
                        {
#line 1079 "diet.m"
                          MR_Tuple mercury__diet__V_25_25;
#line 1079 "diet.m"
                          MR_Box mercury__diet__V_26_26;
#line 42 "diet.m"
                          MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 6)));

#line 42 "diet.m"
                          {
#line 42 "diet.m"
                            mercury__diet__V_26_26 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_30), mercury__diet__X_9);
                          }
#line 1080 "diet.m"
                          {
#line 1080 "diet.m"
                            mercury__diet__V_25_25 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1080 "diet.m"
                            MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, 0) = mercury__diet__V_26_26;
#line 1080 "diet.m"
                            MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, 1) = mercury__diet__Y_10;
#line 1080 "diet.m"
                          }
#line 1080 "diet.m"
                          {
#line 1080 "diet.m"
                            MR_Word base;
#line 1080 "diet.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1080 "diet.m"
                            *mercury__diet__HeadVar__3_3 = base;
#line 1080 "diet.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_25_25));
#line 1080 "diet.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_11));
#line 1080 "diet.m"
                            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_12));
#line 1080 "diet.m"
                            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_13));
#line 1080 "diet.m"
                          }
#line 1079 "diet.m"
                        }
#line 1081 "diet.m"
                        break;
#line 1081 "diet.m"
                      case (MR_Integer) 2:
#line 1082 "diet.m"
                        {
#line 1082 "diet.m"
                          MR_Tuple mercury__diet__V_20_20;
#line 1082 "diet.m"
                          MR_Box mercury__diet__V_21_21;
#line 1082 "diet.m"
                          MR_Word mercury__diet__V_22_22;
#line 1082 "diet.m"
                          MR_Tuple mercury__diet__V_23_23;
#line 1082 "diet.m"
                          MR_Box mercury__diet__V_24_24;
#line 42 "diet.m"
                          MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 6)));
#line 45 "diet.m"
                          MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 42 "diet.m"
                          {
#line 42 "diet.m"
                            mercury__diet__V_21_21 = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_30), mercury__diet__HeadVar__1_1);
                          }
#line 1083 "diet.m"
                          {
#line 1083 "diet.m"
                            mercury__diet__V_20_20 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1083 "diet.m"
                            MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, 0) = mercury__diet__V_21_21;
#line 1083 "diet.m"
                            MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, 1) = mercury__diet__Y_10;
#line 1083 "diet.m"
                          }
#line 45 "diet.m"
                          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 7)));
#line 45 "diet.m"
                          {
#line 45 "diet.m"
                            mercury__diet__V_24_24 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_30), mercury__diet__HeadVar__1_1);
                          }
#line 1084 "diet.m"
                          {
#line 1084 "diet.m"
                            mercury__diet__V_23_23 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1084 "diet.m"
                            MR_hl_field(MR_mktag(0), mercury__diet__V_23_23, 0) = mercury__diet__X_9;
#line 1084 "diet.m"
                            MR_hl_field(MR_mktag(0), mercury__diet__V_23_23, 1) = mercury__diet__V_24_24;
#line 1084 "diet.m"
                          }
#line 1084 "diet.m"
                          {
#line 1084 "diet.m"
                            mercury__diet__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "diet.m"
                            MR_hl_field(MR_mktag(1), mercury__diet__V_22_22, 0) = ((MR_Box) (mercury__diet__V_23_23));
#line 1084 "diet.m"
                            MR_hl_field(MR_mktag(1), mercury__diet__V_22_22, 1) = ((MR_Box) (mercury__diet__H_11));
#line 1084 "diet.m"
                            MR_hl_field(MR_mktag(1), mercury__diet__V_22_22, 2) = ((MR_Box) (mercury__diet__Left_12));
#line 1084 "diet.m"
                            MR_hl_field(MR_mktag(1), mercury__diet__V_22_22, 3) = ((MR_Box) (mercury__diet__Right_13));
#line 1084 "diet.m"
                          }
#line 1083 "diet.m"
                          {
#line 1083 "diet.m"
                            *mercury__diet__HeadVar__3_3 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__V_20_20, mercury__diet__V_22_22);
                          }
#line 1082 "diet.m"
                        }
#line 1081 "diet.m"
                        break;
#line 1081 "diet.m"
                    }
#line 1081 "diet.m"
                    mercury__diet__succeeded = MR_TRUE;
#line 1081 "diet.m"
                  }
#line 1076 "diet.m"
                  break;
#line 1076 "diet.m"
                case (MR_Integer) 0:
#line 1072 "diet.m"
                  {
#line 1072 "diet.m"
#line 1072 "diet.m"
                    switch (mercury__diet__CZX_14) {
#line 1072 "diet.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1072 "diet.m"
                      case (MR_Integer) 0:
#line 644 "diet.m"
                        {
#line 635 "diet.m"
                          MR_Integer mercury__diet__V_52_52;
#line 635 "diet.m"
                          MR_Integer mercury__diet__V_53_53;

#line 512 "diet.m"
                          if ((mercury__diet__Left_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
                            mercury__diet__V_52_52 = (MR_Integer) 0;
#line 512 "diet.m"
                          else
#line 513 "diet.m"
                            {
#line 513 "diet.m"
                              MR_Tuple mercury__diet__V_62_62 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Left_12, (MR_Integer) 0)));
#line 513 "diet.m"
                              MR_Word mercury__diet__V_64_64;
#line 513 "diet.m"
                              MR_Word mercury__diet__V_65_65;

#line 513 "diet.m"
                              mercury__diet__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Left_12, (MR_Integer) 1)));
#line 513 "diet.m"
                              mercury__diet__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Left_12, (MR_Integer) 2)));
#line 513 "diet.m"
                              mercury__diet__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Left_12, (MR_Integer) 3)));
#line 513 "diet.m"
                            }
#line 512 "diet.m"
                          if ((mercury__diet__Right_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "diet.m"
                            mercury__diet__V_53_53 = (MR_Integer) 0;
#line 512 "diet.m"
                          else
#line 513 "diet.m"
                            {
#line 513 "diet.m"
                              MR_Tuple mercury__diet__V_66_66 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Right_13, (MR_Integer) 0)));
#line 513 "diet.m"
                              MR_Word mercury__diet__V_68_68;
#line 513 "diet.m"
                              MR_Word mercury__diet__V_69_69;

#line 513 "diet.m"
                              mercury__diet__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Right_13, (MR_Integer) 1)));
#line 513 "diet.m"
                              mercury__diet__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Right_13, (MR_Integer) 2)));
#line 513 "diet.m"
                              mercury__diet__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Right_13, (MR_Integer) 3)));
#line 513 "diet.m"
                            }
#line 493 "diet.m"
                          mercury__diet__succeeded = (mercury__diet__V_52_52 > mercury__diet__V_53_53);
#line 644 "diet.m"
                          if (mercury__diet__succeeded)
#line 639 "diet.m"
                            if ((mercury__diet__Left_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 637 "diet.m"
                              {
#line 638 "diet.m"
                                {
#line 638 "diet.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.reroot\'/2", (MR_String) "L empty");
                                }
#line 637 "diet.m"
                              }
#line 639 "diet.m"
                            else
#line 640 "diet.m"
                              {
#line 640 "diet.m"
                                MR_Tuple mercury__diet__I_45;
#line 640 "diet.m"
                                MR_Word mercury__diet__L1_46;

#line 641 "diet.m"
                                {
#line 641 "diet.m"
                                  mercury__diet__take_max_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__Left_12, &mercury__diet__I_45, &mercury__diet__L1_46);
                                }
#line 642 "diet.m"
                                {
#line 642 "diet.m"
                                  *mercury__diet__HeadVar__3_3 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__I_45, mercury__diet__L1_46, mercury__diet__Right_13);
                                }
#line 640 "diet.m"
                              }
#line 644 "diet.m"
                          else
#line 647 "diet.m"
                          if ((mercury__diet__Right_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 646 "diet.m"
                            *mercury__diet__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 647 "diet.m"
                          else
#line 648 "diet.m"
                            {
#line 648 "diet.m"
                              MR_Word mercury__diet__R1_51;
#line 648 "diet.m"
                              MR_Tuple mercury__diet__I_57;

#line 649 "diet.m"
                              {
#line 649 "diet.m"
                                mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__Right_13, &mercury__diet__I_57, &mercury__diet__R1_51);
                              }
#line 650 "diet.m"
                              {
#line 650 "diet.m"
                                *mercury__diet__HeadVar__3_3 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__I_57, mercury__diet__Left_12, mercury__diet__R1_51);
                              }
#line 648 "diet.m"
                            }
#line 644 "diet.m"
                        }
#line 1072 "diet.m"
                        break;
#line 1072 "diet.m"
                      case (MR_Integer) 2:
#line 1073 "diet.m"
                        {
#line 1073 "diet.m"
                          MR_Tuple mercury__diet__V_27_27;
#line 1073 "diet.m"
                          MR_Box mercury__diet__V_28_28;
#line 45 "diet.m"
                          MR_Box MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 7)));

#line 45 "diet.m"
                          {
#line 45 "diet.m"
                            mercury__diet__V_28_28 = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_30), mercury__diet__Y_10);
                          }
#line 1074 "diet.m"
                          {
#line 1074 "diet.m"
                            mercury__diet__V_27_27 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1074 "diet.m"
                            MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, 0) = mercury__diet__X_9;
#line 1074 "diet.m"
                            MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, 1) = mercury__diet__V_28_28;
#line 1074 "diet.m"
                          }
#line 1074 "diet.m"
                          {
#line 1074 "diet.m"
                            MR_Word base;
#line 1074 "diet.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "diet.m"
                            *mercury__diet__HeadVar__3_3 = base;
#line 1074 "diet.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_27_27));
#line 1074 "diet.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_11));
#line 1074 "diet.m"
                            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_12));
#line 1074 "diet.m"
                            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_13));
#line 1074 "diet.m"
                          }
#line 1073 "diet.m"
                        }
#line 1072 "diet.m"
                        break;
#line 1072 "diet.m"
                    }
#line 1072 "diet.m"
                    mercury__diet__succeeded = MR_TRUE;
#line 1072 "diet.m"
                  }
#line 1076 "diet.m"
                  break;
#line 1076 "diet.m"
                case (MR_Integer) 2:
#line 1087 "diet.m"
                  {
#line 1087 "diet.m"
                    MR_Word mercury__diet__R_17;

#line 1088 "diet.m"
                    {
#line 1088 "diet.m"
                      mercury__diet__succeeded = mercury__diet__remove_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__HeadVar__1_1, mercury__diet__Right_13, &mercury__diet__R_17);
                    }
#line 1087 "diet.m"
                    if (mercury__diet__succeeded)
#line 1087 "diet.m"
                      {
#line 1089 "diet.m"
                        {
#line 1089 "diet.m"
                          *mercury__diet__HeadVar__3_3 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__V_34_34, mercury__diet__Left_12, mercury__diet__R_17);
                        }
#line 1089 "diet.m"
                        mercury__diet__succeeded = MR_TRUE;
#line 1087 "diet.m"
                      }
#line 1087 "diet.m"
                  }
#line 1076 "diet.m"
                  break;
#line 1076 "diet.m"
              }
#line 1065 "diet.m"
            }
#line 1062 "diet.m"
            break;
#line 1062 "diet.m"
        }
#line 20721 "diet.c"
      }
#line 20723 "diet.c"
    return mercury__diet__succeeded;
#line 20725 "diet.c"
  }
#line 150 "diet.m"
}

#line 142 "diet.m"
void MR_CALL 
mercury__diet__delete_list_3_p_0(
#line 142 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
#line 142 "diet.m"
  MR_Word mercury__diet__List_4,
#line 142 "diet.m"
  MR_Word mercury__diet__Set0_5,
#line 142 "diet.m"
  MR_Word * mercury__diet__Set_6)
#line 142 "diet.m"
{
#line 1048 "diet.m"
  {
#line 1048 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1048 "diet.m"
    MR_Word mercury__diet__V_7_7;

#line 1766 "diet.m"
    {
#line 1766 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__List_4, &mercury__diet__V_7_7);
    }
#line 1372 "diet.m"
    if ((mercury__diet__Set0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1372 "diet.m"
      *mercury__diet__Set_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1372 "diet.m"
    else
#line 1372 "diet.m"
    if ((mercury__diet__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1377 "diet.m"
      *mercury__diet__Set_6 = mercury__diet__Set0_5;
#line 1372 "diet.m"
    else
#line 1379 "diet.m"
      {
#line 1379 "diet.m"
        MR_Tuple mercury__diet__Head_26;
#line 1379 "diet.m"
        MR_Word mercury__diet__Stream_27;
#line 1379 "diet.m"
        MR_Word mercury__diet__V_30_30;
#line 1382 "diet.m"
        MR_Word mercury__diet___RemHead_28;
#line 1382 "diet.m"
        MR_Word mercury__diet___RemStream_29;

#line 1381 "diet.m"
        {
#line 1381 "diet.m"
          mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__V_7_7, &mercury__diet__Head_26, &mercury__diet__Stream_27);
        }
#line 1382 "diet.m"
        {
#line 1382 "diet.m"
          mercury__diet__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1382 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__V_30_30, 0) = ((MR_Box) (mercury__diet__Head_26));
#line 1382 "diet.m"
        }
#line 1382 "diet.m"
        {
#line 1382 "diet.m"
          mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__Set0_5, mercury__diet__V_30_30, mercury__diet__Stream_27, mercury__diet__Set_6, &mercury__diet___RemHead_28, &mercury__diet___RemStream_29);
        }
#line 1379 "diet.m"
      }
#line 1048 "diet.m"
  }
#line 142 "diet.m"
}

#line 141 "diet.m"
MR_Word MR_CALL 
mercury__diet__delete_list_2_f_0(
#line 141 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
#line 141 "diet.m"
  MR_Word mercury__diet__Set0_4,
#line 141 "diet.m"
  MR_Word mercury__diet__List_5)
#line 141 "diet.m"
{
#line 1046 "diet.m"
  {
#line 1046 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1046 "diet.m"
    MR_Word mercury__diet__Set_6;

#line 1046 "diet.m"
    {
#line 1046 "diet.m"
      mercury__diet__delete_list_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__List_5, mercury__diet__Set0_4, &mercury__diet__Set_6);
    }
#line 1046 "diet.m"
    return mercury__diet__Set_6;
#line 1046 "diet.m"
  }
#line 141 "diet.m"
}

#line 135 "diet.m"
void MR_CALL 
mercury__diet__delete_3_p_0(
#line 135 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
#line 135 "diet.m"
  MR_Box mercury__diet__Elem_4,
#line 135 "diet.m"
  MR_Word mercury__diet__Set0_5,
#line 135 "diet.m"
  MR_Word * mercury__diet__Set_6)
#line 135 "diet.m"
{
#line 1039 "diet.m"
  {
#line 1039 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1039 "diet.m"
    MR_Word mercury__diet__Set1_7;

#line 1037 "diet.m"
    {
#line 1037 "diet.m"
      mercury__diet__succeeded = mercury__diet__remove_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__Elem_4, mercury__diet__Set0_5, &mercury__diet__Set1_7);
    }
#line 1039 "diet.m"
    if (mercury__diet__succeeded)
#line 1038 "diet.m"
      *mercury__diet__Set_6 = mercury__diet__Set1_7;
#line 1039 "diet.m"
    else
#line 1040 "diet.m"
      *mercury__diet__Set_6 = mercury__diet__Set0_5;
#line 1039 "diet.m"
  }
#line 135 "diet.m"
}

#line 134 "diet.m"
MR_Word MR_CALL 
mercury__diet__delete_2_f_0(
#line 134 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
#line 134 "diet.m"
  MR_Word mercury__diet__Set0_4,
#line 134 "diet.m"
  MR_Box mercury__diet__Elem_5)
#line 134 "diet.m"
{
#line 1039 "diet.m"
  {
#line 1039 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1039 "diet.m"
    MR_Word mercury__diet__Set_6;
#line 1039 "diet.m"
    MR_Word mercury__diet__Set1_11;

#line 1037 "diet.m"
    {
#line 1037 "diet.m"
      mercury__diet__succeeded = mercury__diet__remove_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__Elem_5, mercury__diet__Set0_4, &mercury__diet__Set1_11);
    }
#line 1039 "diet.m"
    if (mercury__diet__succeeded)
#line 1038 "diet.m"
      mercury__diet__Set_6 = mercury__diet__Set1_11;
#line 1039 "diet.m"
    else
#line 1040 "diet.m"
      mercury__diet__Set_6 = mercury__diet__Set0_4;
#line 1039 "diet.m"
    return mercury__diet__Set_6;
#line 1039 "diet.m"
  }
#line 134 "diet.m"
}

#line 126 "diet.m"
void MR_CALL 
mercury__diet__insert_interval_4_p_0(
#line 126 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_11,
#line 126 "diet.m"
  MR_Box mercury__diet__X_5,
#line 126 "diet.m"
  MR_Box mercury__diet__Y_6,
#line 126 "diet.m"
  MR_Word mercury__diet__Set0_7,
#line 126 "diet.m"
  MR_Word * mercury__diet__Set_8)
#line 126 "diet.m"
{
#line 953 "diet.m"
  {
#line 953 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 39 "diet.m"
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_11, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
    {
#line 39 "diet.m"
      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_11), mercury__diet__Y_6, mercury__diet__X_5);
    }
#line 480 "diet.m"
    mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 953 "diet.m"
    if (mercury__diet__succeeded)
#line 952 "diet.m"
      {
#line 952 "diet.m"
        MR_Tuple mercury__diet__V_9_9;

#line 952 "diet.m"
        {
#line 952 "diet.m"
          mercury__diet__V_9_9 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 952 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_9_9, 0) = mercury__diet__X_5;
#line 952 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_9_9, 1) = mercury__diet__Y_6;
#line 952 "diet.m"
        }
#line 952 "diet.m"
        {
#line 952 "diet.m"
          *mercury__diet__Set_8 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_11, mercury__diet__V_9_9, mercury__diet__Set0_7);
        }
#line 952 "diet.m"
      }
#line 953 "diet.m"
    else
#line 954 "diet.m"
      {
#line 954 "diet.m"
        MR_Word mercury__diet__TypeInfo_13_13;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__insert_interval_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_11 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 20988 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_13_13  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 954 "diet.m"
        {
#line 954 "diet.m"
          mercury__diet__unexpected_interval_3_p_0(mercury__diet__TypeInfo_13_13, (MR_String) "predicate \140diet.insert_interval\'/4", mercury__diet__X_5, mercury__diet__Y_6);
#line 954 "diet.m"
          return;
        }
#line 954 "diet.m"
      }
#line 953 "diet.m"
  }
#line 126 "diet.m"
}

#line 119 "diet.m"
void MR_CALL 
mercury__diet__insert_list_3_p_0(
#line 119 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
#line 119 "diet.m"
  MR_Word mercury__diet__Elems_4,
#line 119 "diet.m"
  MR_Word mercury__diet__Set0_5,
#line 119 "diet.m"
  MR_Word * mercury__diet__Set_6)
#line 119 "diet.m"
{
#line 946 "diet.m"
  {
#line 946 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 946 "diet.m"
    {
#line 946 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__Elems_4, mercury__diet__Set0_5, mercury__diet__Set_6);
    }
#line 946 "diet.m"
  }
#line 119 "diet.m"
}

#line 118 "diet.m"
MR_Word MR_CALL 
mercury__diet__insert_list_2_f_0(
#line 118 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
#line 118 "diet.m"
  MR_Word mercury__diet__Set0_4,
#line 118 "diet.m"
  MR_Word mercury__diet__Elems_5)
#line 118 "diet.m"
{
#line 946 "diet.m"
  {
#line 946 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 946 "diet.m"
    MR_Word mercury__diet__Set_6;

#line 946 "diet.m"
    {
#line 946 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__Elems_5, mercury__diet__Set0_4, &mercury__diet__Set_6);
    }
#line 946 "diet.m"
    return mercury__diet__Set_6;
#line 946 "diet.m"
  }
#line 118 "diet.m"
}

#line 112 "diet.m"
MR_bool MR_CALL 
mercury__diet__insert_new_3_p_0(
#line 112 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_52,
#line 112 "diet.m"
  MR_Box mercury__diet__P_4,
#line 112 "diet.m"
  MR_Word mercury__diet__T0_5,
#line 112 "diet.m"
  MR_Word * mercury__diet__T_6)
#line 112 "diet.m"
{
#line 896 "diet.m"
  {
#line 896 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 896 "diet.m"
    if ((mercury__diet__T0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 896 "diet.m"
      {
#line 896 "diet.m"
        MR_Tuple mercury__diet__V_37_37;
#line 896 "diet.m"
        MR_Word mercury__diet__V_40_40;
#line 896 "diet.m"
        MR_Word mercury__diet__V_41_41;

#line 897 "diet.m"
        {
#line 897 "diet.m"
          mercury__diet__V_37_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 897 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_37_37, 0) = mercury__diet__P_4;
#line 897 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_37_37, 1) = mercury__diet__P_4;
#line 897 "diet.m"
        }
#line 897 "diet.m"
        mercury__diet__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 897 "diet.m"
        mercury__diet__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 897 "diet.m"
        {
#line 897 "diet.m"
          MR_Word base;
#line 897 "diet.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 897 "diet.m"
          *mercury__diet__T_6 = base;
#line 897 "diet.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_37_37));
#line 897 "diet.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 897 "diet.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__V_40_40));
#line 897 "diet.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__V_41_41));
#line 897 "diet.m"
        }
#line 896 "diet.m"
        mercury__diet__succeeded = MR_TRUE;
#line 896 "diet.m"
      }
#line 896 "diet.m"
    else
#line 899 "diet.m"
      {
#line 899 "diet.m"
        MR_Box mercury__diet__X_7;
#line 899 "diet.m"
        MR_Box mercury__diet__Y_8;
#line 899 "diet.m"
        MR_Integer mercury__diet__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 1)));
#line 899 "diet.m"
        MR_Word mercury__diet__Left_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 2)));
#line 899 "diet.m"
        MR_Word mercury__diet__Right_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 3)));
#line 899 "diet.m"
        MR_Tuple mercury__diet__V_24_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 0)));
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

#line 899 "diet.m"
        mercury__diet__X_7 = (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 0));
#line 899 "diet.m"
        mercury__diet__Y_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 1));
#line 39 "diet.m"
        mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
        {
#line 39 "diet.m"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__P_4, mercury__diet__X_7);
        }
#line 474 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 921 "diet.m"
        if (mercury__diet__succeeded)
#line 904 "diet.m"
          {
#line 39 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
            {
#line 39 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__Y_8, mercury__diet__P_4);
            }
#line 480 "diet.m"
            mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 904 "diet.m"
            if (mercury__diet__succeeded)
#line 903 "diet.m"
              mercury__diet__succeeded = MR_FALSE;
#line 904 "diet.m"
            else
#line 907 "diet.m"
              {
#line 904 "diet.m"
                MR_Box mercury__diet__V_25_25;
#line 42 "diet.m"
                MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 6)));
#line 39 "diet.m"
                MR_bool MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box, MR_Box);

#line 42 "diet.m"
                {
#line 42 "diet.m"
                  mercury__diet__V_25_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__Y_8);
                }
#line 39 "diet.m"
                mercury__diet__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
                {
#line 39 "diet.m"
                  mercury__diet__succeeded = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__V_25_25, mercury__diet__P_4);
                }
#line 907 "diet.m"
                if (mercury__diet__succeeded)
#line 905 "diet.m"
                  {
#line 905 "diet.m"
                    MR_Word mercury__diet__R_12;

#line 905 "diet.m"
                    {
#line 905 "diet.m"
                      mercury__diet__succeeded = mercury__diet__insert_new_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__P_4, mercury__diet__Right_11, &mercury__diet__R_12);
                    }
#line 905 "diet.m"
                    if (mercury__diet__succeeded)
#line 905 "diet.m"
                      {
#line 906 "diet.m"
                        {
#line 906 "diet.m"
                          *mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__V_24_24, mercury__diet__Left_10, mercury__diet__R_12);
                        }
#line 906 "diet.m"
                        mercury__diet__succeeded = MR_TRUE;
#line 905 "diet.m"
                      }
#line 905 "diet.m"
                  }
#line 907 "diet.m"
                else
#line 911 "diet.m"
                  {
#line 911 "diet.m"
                    if ((mercury__diet__Right_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 909 "diet.m"
                      {
#line 909 "diet.m"
                        MR_Tuple mercury__diet__V_30_30;

#line 910 "diet.m"
                        {
#line 910 "diet.m"
                          mercury__diet__V_30_30 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 910 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, 0) = mercury__diet__X_7;
#line 910 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, 1) = mercury__diet__P_4;
#line 910 "diet.m"
                        }
#line 910 "diet.m"
                        {
#line 910 "diet.m"
                          MR_Word base;
#line 910 "diet.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 910 "diet.m"
                          *mercury__diet__T_6 = base;
#line 910 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_30_30));
#line 910 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_9));
#line 910 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 910 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 910 "diet.m"
                        }
#line 909 "diet.m"
                      }
#line 911 "diet.m"
                    else
#line 912 "diet.m"
                      {
#line 912 "diet.m"
                        MR_Box mercury__diet__U_17;
#line 912 "diet.m"
                        MR_Box mercury__diet__V_18;
#line 912 "diet.m"
                        MR_Tuple mercury__diet__V_27_27;
#line 912 "diet.m"
                        MR_Word mercury__diet__R_42;
#line 914 "diet.m"
                        MR_Word mercury__diet__TypeInfo_56_56;
#line 914 "diet.m"
                        MR_Box mercury__diet__V_53_53;
#line 45 "diet.m"
                        MR_Box MR_CALL (* mercury__diet__func_4)(MR_Box, MR_Box);

#line 913 "diet.m"
                        {
#line 913 "diet.m"
                          mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__Right_11, &mercury__diet__V_27_27, &mercury__diet__R_42);
                        }
#line 913 "diet.m"
                        mercury__diet__U_17 = (MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, (MR_Integer) 0));
#line 913 "diet.m"
                        mercury__diet__V_18 = (MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, (MR_Integer) 1));
#line 45 "diet.m"
                        mercury__diet__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 7)));
#line 45 "diet.m"
                        {
#line 45 "diet.m"
                          mercury__diet__V_53_53 = mercury__diet__func_4(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__U_17);
                        }
#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_52 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 21323 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_56_56  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 914 "diet.m"
                        {
#line 914 "diet.m"
                          mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_56_56, mercury__diet__P_4, mercury__diet__V_53_53);
                        }
#line 916 "diet.m"
                        if (mercury__diet__succeeded)
#line 915 "diet.m"
                          {
#line 915 "diet.m"
                            MR_Tuple mercury__diet__V_28_28;

#line 915 "diet.m"
                            {
#line 915 "diet.m"
                              mercury__diet__V_28_28 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 915 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, 0) = mercury__diet__X_7;
#line 915 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, 1) = mercury__diet__V_18;
#line 915 "diet.m"
                            }
#line 915 "diet.m"
                            {
#line 915 "diet.m"
                              *mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__V_28_28, mercury__diet__Left_10, mercury__diet__R_42);
                            }
#line 915 "diet.m"
                          }
#line 916 "diet.m"
                        else
#line 917 "diet.m"
                          {
#line 917 "diet.m"
                            MR_Tuple mercury__diet__V_29_29;

#line 917 "diet.m"
                            {
#line 917 "diet.m"
                              mercury__diet__V_29_29 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 917 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_29_29, 0) = mercury__diet__X_7;
#line 917 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_29_29, 1) = mercury__diet__P_4;
#line 917 "diet.m"
                            }
#line 917 "diet.m"
                            {
#line 917 "diet.m"
                              MR_Word base;
#line 917 "diet.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 917 "diet.m"
                              *mercury__diet__T_6 = base;
#line 917 "diet.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_29_29));
#line 917 "diet.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_9));
#line 917 "diet.m"
                              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 917 "diet.m"
                              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 917 "diet.m"
                            }
#line 917 "diet.m"
                          }
#line 912 "diet.m"
                      }
#line 911 "diet.m"
                    mercury__diet__succeeded = MR_TRUE;
#line 911 "diet.m"
                  }
#line 907 "diet.m"
              }
#line 904 "diet.m"
          }
#line 921 "diet.m"
        else
#line 924 "diet.m"
          {
#line 921 "diet.m"
            MR_Box mercury__diet__V_31_31;
#line 45 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_5)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 7)));
#line 39 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_6)(MR_Box, MR_Box, MR_Box);

#line 45 "diet.m"
            {
#line 45 "diet.m"
              mercury__diet__V_31_31 = mercury__diet__func_5(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__X_7);
            }
#line 39 "diet.m"
            mercury__diet__func_6 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
            {
#line 39 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_6(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__P_4, mercury__diet__V_31_31);
            }
#line 924 "diet.m"
            if (mercury__diet__succeeded)
#line 922 "diet.m"
              {
#line 922 "diet.m"
                MR_Word mercury__diet__L_19;

#line 922 "diet.m"
                {
#line 922 "diet.m"
                  mercury__diet__succeeded = mercury__diet__insert_new_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__P_4, mercury__diet__Left_10, &mercury__diet__L_19);
                }
#line 922 "diet.m"
                if (mercury__diet__succeeded)
#line 922 "diet.m"
                  {
#line 923 "diet.m"
                    {
#line 923 "diet.m"
                      *mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__V_24_24, mercury__diet__L_19, mercury__diet__Right_11);
                    }
#line 923 "diet.m"
                    mercury__diet__succeeded = MR_TRUE;
#line 922 "diet.m"
                  }
#line 922 "diet.m"
              }
#line 924 "diet.m"
            else
#line 928 "diet.m"
              {
#line 928 "diet.m"
                if ((mercury__diet__Left_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 926 "diet.m"
                  {
#line 926 "diet.m"
                    MR_Tuple mercury__diet__V_36_36;

#line 927 "diet.m"
                    {
#line 927 "diet.m"
                      mercury__diet__V_36_36 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 927 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_36_36, 0) = mercury__diet__P_4;
#line 927 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_36_36, 1) = mercury__diet__Y_8;
#line 927 "diet.m"
                    }
#line 927 "diet.m"
                    {
#line 927 "diet.m"
                      MR_Word base;
#line 927 "diet.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 927 "diet.m"
                      *mercury__diet__T_6 = base;
#line 927 "diet.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_36_36));
#line 927 "diet.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_9));
#line 927 "diet.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 927 "diet.m"
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 927 "diet.m"
                    }
#line 926 "diet.m"
                  }
#line 928 "diet.m"
                else
#line 929 "diet.m"
                  {
#line 929 "diet.m"
                    MR_Tuple mercury__diet__V_33_33;
#line 929 "diet.m"
                    MR_Box mercury__diet__V_45;
#line 929 "diet.m"
                    MR_Word mercury__diet__L_46;
#line 930 "diet.m"
                    MR_Box mercury__diet__U_44;
#line 931 "diet.m"
                    MR_Word mercury__diet__TypeInfo_58_58;
#line 931 "diet.m"
                    MR_Box mercury__diet__V_54_54;
#line 42 "diet.m"
                    MR_Box MR_CALL (* mercury__diet__func_7)(MR_Box, MR_Box);

#line 930 "diet.m"
                    {
#line 930 "diet.m"
                      mercury__diet__take_max_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__Left_10, &mercury__diet__V_33_33, &mercury__diet__L_46);
                    }
#line 930 "diet.m"
                    mercury__diet__U_44 = (MR_hl_field(MR_mktag(0), mercury__diet__V_33_33, (MR_Integer) 0));
#line 930 "diet.m"
                    mercury__diet__V_45 = (MR_hl_field(MR_mktag(0), mercury__diet__V_33_33, (MR_Integer) 1));
#line 42 "diet.m"
                    mercury__diet__func_7 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 6)));
#line 42 "diet.m"
                    {
#line 42 "diet.m"
                      mercury__diet__V_54_54 = mercury__diet__func_7(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__V_45);
                    }
#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_52 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 21547 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_58_58  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 931 "diet.m"
                    {
#line 931 "diet.m"
                      mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_58_58, mercury__diet__P_4, mercury__diet__V_54_54);
                    }
#line 933 "diet.m"
                    if (mercury__diet__succeeded)
#line 932 "diet.m"
                      {
#line 932 "diet.m"
                        *mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__V_33_33, mercury__diet__L_46, mercury__diet__Right_11);
                      }
#line 933 "diet.m"
                    else
#line 934 "diet.m"
                      {
#line 934 "diet.m"
                        MR_Tuple mercury__diet__V_35_35;

#line 934 "diet.m"
                        {
#line 934 "diet.m"
                          mercury__diet__V_35_35 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 934 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, 0) = mercury__diet__P_4;
#line 934 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, 1) = mercury__diet__Y_8;
#line 934 "diet.m"
                        }
#line 934 "diet.m"
                        {
#line 934 "diet.m"
                          MR_Word base;
#line 934 "diet.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 934 "diet.m"
                          *mercury__diet__T_6 = base;
#line 934 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_35_35));
#line 934 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_9));
#line 934 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 934 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 934 "diet.m"
                        }
#line 934 "diet.m"
                      }
#line 929 "diet.m"
                  }
#line 928 "diet.m"
                mercury__diet__succeeded = MR_TRUE;
#line 928 "diet.m"
              }
#line 924 "diet.m"
          }
#line 899 "diet.m"
      }
#line 896 "diet.m"
    return mercury__diet__succeeded;
#line 896 "diet.m"
  }
#line 112 "diet.m"
}

#line 107 "diet.m"
void MR_CALL 
mercury__diet__insert_3_p_0(
#line 107 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
#line 107 "diet.m"
  MR_Box mercury__diet__Elem_4,
#line 107 "diet.m"
  MR_Word mercury__diet__Set0_5,
#line 107 "diet.m"
  MR_Word * mercury__diet__Set_6)
#line 107 "diet.m"
{
#line 845 "diet.m"
  {
#line 845 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 845 "diet.m"
    {
#line 845 "diet.m"
      *mercury__diet__Set_6 = mercury__diet__add_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__Elem_4, mercury__diet__Set0_5);
    }
#line 845 "diet.m"
  }
#line 107 "diet.m"
}

#line 106 "diet.m"
MR_Word MR_CALL 
mercury__diet__insert_2_f_0(
#line 106 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_7,
#line 106 "diet.m"
  MR_Word mercury__diet__Set0_4,
#line 106 "diet.m"
  MR_Box mercury__diet__Elem_5)
#line 106 "diet.m"
{
#line 845 "diet.m"
  {
#line 845 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 845 "diet.m"
    MR_Word mercury__diet__Set_6;

#line 845 "diet.m"
    {
#line 845 "diet.m"
      mercury__diet__Set_6 = mercury__diet__add_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__Elem_5, mercury__diet__Set0_4);
    }
#line 845 "diet.m"
    return mercury__diet__Set_6;
#line 845 "diet.m"
  }
#line 106 "diet.m"
}

#line 101 "diet.m"
MR_bool MR_CALL 
mercury__diet__superset_2_p_0(
#line 101 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
#line 101 "diet.m"
  MR_Word mercury__diet__Superset_3,
#line 101 "diet.m"
  MR_Word mercury__diet__Set_4)
#line 101 "diet.m"
{
#line 776 "diet.m"
  {
#line 776 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 776 "diet.m"
    if ((mercury__diet__Set_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 776 "diet.m"
      mercury__diet__succeeded = MR_TRUE;
#line 776 "diet.m"
    else
#line 778 "diet.m"
      {
#line 778 "diet.m"
        MR_Tuple mercury__diet__XY1_16;
#line 778 "diet.m"
        MR_Word mercury__diet__R1_17;
#line 778 "diet.m"
        MR_Tuple mercury__diet__XY2_18;
#line 778 "diet.m"
        MR_Word mercury__diet__R2_19;
#line 778 "diet.m"
        MR_Word mercury__diet__V_20_20;
#line 778 "diet.m"
        MR_Word mercury__diet__V_21_21;
#line 779 "diet.m"
        MR_Tuple mercury__diet__V_12_12;
#line 779 "diet.m"
        MR_Integer mercury__diet__V_13_13;
#line 779 "diet.m"
        MR_Word mercury__diet__V_14_14;
#line 779 "diet.m"
        MR_Word mercury__diet__V_15_15;

#line 779 "diet.m"
        mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Superset_3)) == (MR_mktag((MR_Integer) 1)));
#line 779 "diet.m"
        if (mercury__diet__succeeded)
#line 779 "diet.m"
          {
#line 779 "diet.m"
            mercury__diet__V_12_12 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Superset_3, (MR_Integer) 0)));
#line 779 "diet.m"
            mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Superset_3, (MR_Integer) 1)));
#line 779 "diet.m"
            mercury__diet__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Superset_3, (MR_Integer) 2)));
#line 779 "diet.m"
            mercury__diet__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Superset_3, (MR_Integer) 3)));
#line 780 "diet.m"
            {
#line 780 "diet.m"
              mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__Set_4, &mercury__diet__XY1_16, &mercury__diet__R1_17);
            }
#line 781 "diet.m"
            {
#line 781 "diet.m"
              mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__Superset_3, &mercury__diet__XY2_18, &mercury__diet__R2_19);
            }
#line 782 "diet.m"
            mercury__diet__V_20_20 = (MR_Integer) 1;
#line 782 "diet.m"
            {
#line 782 "diet.m"
              mercury__diet__subset_2_5_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__XY1_16, mercury__diet__R1_17, mercury__diet__XY2_18, mercury__diet__R2_19, &mercury__diet__V_21_21);
            }
#line 782 "diet.m"
            mercury__diet__succeeded = (mercury__diet__V_20_20 == mercury__diet__V_21_21);
#line 779 "diet.m"
          }
#line 778 "diet.m"
      }
#line 776 "diet.m"
    return mercury__diet__succeeded;
#line 776 "diet.m"
  }
#line 101 "diet.m"
}

#line 97 "diet.m"
MR_bool MR_CALL 
mercury__diet__subset_2_p_0(
#line 97 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_18,
#line 97 "diet.m"
  MR_Word mercury__diet__T1_3,
#line 97 "diet.m"
  MR_Word mercury__diet__T2_4)
#line 97 "diet.m"
{
#line 776 "diet.m"
  {
#line 776 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 776 "diet.m"
    if ((mercury__diet__T1_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 776 "diet.m"
      mercury__diet__succeeded = MR_TRUE;
#line 776 "diet.m"
    else
#line 778 "diet.m"
      {
#line 778 "diet.m"
        MR_Tuple mercury__diet__XY1_13;
#line 778 "diet.m"
        MR_Word mercury__diet__R1_14;
#line 778 "diet.m"
        MR_Tuple mercury__diet__XY2_15;
#line 778 "diet.m"
        MR_Word mercury__diet__R2_16;
#line 778 "diet.m"
        MR_Word mercury__diet__V_17_17;
#line 778 "diet.m"
        MR_Word mercury__diet__V_19_19;
#line 779 "diet.m"
        MR_Tuple mercury__diet__V_9_9;
#line 779 "diet.m"
        MR_Integer mercury__diet__V_10_10;
#line 779 "diet.m"
        MR_Word mercury__diet__V_11_11;
#line 779 "diet.m"
        MR_Word mercury__diet__V_12_12;

#line 779 "diet.m"
        mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__T2_4)) == (MR_mktag((MR_Integer) 1)));
#line 779 "diet.m"
        if (mercury__diet__succeeded)
#line 779 "diet.m"
          {
#line 779 "diet.m"
            mercury__diet__V_9_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 0)));
#line 779 "diet.m"
            mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 1)));
#line 779 "diet.m"
            mercury__diet__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 2)));
#line 779 "diet.m"
            mercury__diet__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 3)));
#line 780 "diet.m"
            {
#line 780 "diet.m"
              mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__T1_3, &mercury__diet__XY1_13, &mercury__diet__R1_14);
            }
#line 781 "diet.m"
            {
#line 781 "diet.m"
              mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__T2_4, &mercury__diet__XY2_15, &mercury__diet__R2_16);
            }
#line 782 "diet.m"
            mercury__diet__V_17_17 = (MR_Integer) 1;
#line 782 "diet.m"
            {
#line 782 "diet.m"
              mercury__diet__subset_2_5_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__XY1_13, mercury__diet__R1_14, mercury__diet__XY2_15, mercury__diet__R2_16, &mercury__diet__V_19_19);
            }
#line 782 "diet.m"
            mercury__diet__succeeded = (mercury__diet__V_17_17 == mercury__diet__V_19_19);
#line 779 "diet.m"
          }
#line 778 "diet.m"
      }
#line 776 "diet.m"
    return mercury__diet__succeeded;
#line 776 "diet.m"
  }
#line 97 "diet.m"
}

#line 93 "diet.m"
void MR_CALL 
mercury__diet__member_2_p_1(
#line 93 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_13,
#line 93 "diet.m"
  MR_Box * mercury__diet__Elem_1,
#line 93 "diet.m"
  MR_Word mercury__diet__Set_2,
#line 93 "diet.m"
  MR_Cont mercury__diet__cont,
#line 93 "diet.m"
  void * mercury__diet__cont_env_ptr)
#line 93 "diet.m"
{
#line 747 "diet.m"
  while (MR_TRUE)
#line 747 "diet.m"
    {
#line 747 "diet.m"
      /* tailcall optimized into a loop */
#line 747 "diet.m"
      {
#line 747 "diet.m"
        MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Set_2)) == (MR_mktag((MR_Integer) 1)));
#line 747 "diet.m"
        MR_Box mercury__diet__X_7;
#line 747 "diet.m"
        MR_Box mercury__diet__Y_8;
#line 747 "diet.m"
        MR_Word mercury__diet__Left_10;
#line 747 "diet.m"
        MR_Word mercury__diet__Right_11;
#line 747 "diet.m"
        MR_Tuple mercury__diet__V_12_12;
#line 748 "diet.m"
        MR_Integer mercury__diet__V_9_9;

#line 748 "diet.m"
        if (mercury__diet__succeeded)
#line 748 "diet.m"
          {
#line 748 "diet.m"
            mercury__diet__V_12_12 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set_2, (MR_Integer) 0)));
#line 748 "diet.m"
            mercury__diet__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set_2, (MR_Integer) 1)));
#line 748 "diet.m"
            mercury__diet__Left_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_2, (MR_Integer) 2)));
#line 748 "diet.m"
            mercury__diet__Right_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_2, (MR_Integer) 3)));
#line 748 "diet.m"
            mercury__diet__X_7 = (MR_hl_field(MR_mktag(0), mercury__diet__V_12_12, (MR_Integer) 0));
#line 748 "diet.m"
            mercury__diet__Y_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_12_12, (MR_Integer) 1));
#line 750 "diet.m"
            {
#line 750 "diet.m"
              mercury__diet__member_2_p_1(mercury__diet__TypeClassInfo_for_diet_element_13, mercury__diet__Elem_1, mercury__diet__Left_10, mercury__diet__cont, mercury__diet__cont_env_ptr);
            }
#line 752 "diet.m"
            {
#line 752 "diet.m"
              mercury__diet__member_in_range_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_13, mercury__diet__X_7, mercury__diet__Y_8, mercury__diet__Elem_1, mercury__diet__cont, mercury__diet__cont_env_ptr);
            }
#line 754 "diet.m"
            {
#line 754 "diet.m"
              /* direct tailcall eliminated */
#line 754 "diet.m"
              {
#line 754 "diet.m"
                MR_Word mercury__diet__Set__tmp_copy_2 = mercury__diet__Right_11;

#line 754 "diet.m"
                mercury__diet__Set_2 = mercury__diet__Set__tmp_copy_2;
#line 754 "diet.m"
              }
#line 754 "diet.m"
              continue;
#line 754 "diet.m"
            }
#line 748 "diet.m"
          }
#line 747 "diet.m"
      }
#line 747 "diet.m"
      break;
#line 747 "diet.m"
    }
#line 93 "diet.m"
}

#line 92 "diet.m"
MR_bool MR_CALL 
mercury__diet__member_2_p_0(
#line 92 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_13,
#line 92 "diet.m"
  MR_Box mercury__diet__Elem_1,
#line 92 "diet.m"
  MR_Word mercury__diet__Set_2)
#line 92 "diet.m"
{
#line 746 "diet.m"
  {
#line 746 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 746 "diet.m"
    {
#line 746 "diet.m"
      mercury__diet__succeeded = mercury__diet__contains_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_13, mercury__diet__Set_2, mercury__diet__Elem_1);
    }
#line 746 "diet.m"
    return mercury__diet__succeeded;
#line 746 "diet.m"
  }
#line 92 "diet.m"
}

#line 87 "diet.m"
MR_bool MR_CALL 
mercury__diet__contains_2_p_0(
#line 87 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_11,
#line 87 "diet.m"
  MR_Word mercury__diet__T_3,
#line 87 "diet.m"
  MR_Box mercury__diet__Z_4)
#line 87 "diet.m"
{
#line 731 "diet.m"
  while (MR_TRUE)
#line 731 "diet.m"
    {
#line 731 "diet.m"
      /* tailcall optimized into a loop */
#line 731 "diet.m"
      {
#line 731 "diet.m"
        MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__T_3)) == (MR_mktag((MR_Integer) 1)));
#line 731 "diet.m"
        MR_Box mercury__diet__X_5;
#line 731 "diet.m"
        MR_Box mercury__diet__Y_6;
#line 731 "diet.m"
        MR_Word mercury__diet__L_8;
#line 731 "diet.m"
        MR_Word mercury__diet__R_9;
#line 731 "diet.m"
        MR_Tuple mercury__diet__V_10_10;
#line 732 "diet.m"
        MR_Integer mercury__diet__V_7_7;
#line 39 "diet.m"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

#line 732 "diet.m"
        if (mercury__diet__succeeded)
#line 732 "diet.m"
          {
#line 732 "diet.m"
            mercury__diet__V_10_10 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_3, (MR_Integer) 0)));
#line 732 "diet.m"
            mercury__diet__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_3, (MR_Integer) 1)));
#line 732 "diet.m"
            mercury__diet__L_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_3, (MR_Integer) 2)));
#line 732 "diet.m"
            mercury__diet__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_3, (MR_Integer) 3)));
#line 732 "diet.m"
            mercury__diet__X_5 = (MR_hl_field(MR_mktag(0), mercury__diet__V_10_10, (MR_Integer) 0));
#line 732 "diet.m"
            mercury__diet__Y_6 = (MR_hl_field(MR_mktag(0), mercury__diet__V_10_10, (MR_Integer) 1));
#line 39 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_11, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "diet.m"
            {
#line 39 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_11), mercury__diet__Z_4, mercury__diet__X_5);
            }
#line 735 "diet.m"
            if (mercury__diet__succeeded)
#line 734 "diet.m"
              {
#line 734 "diet.m"
                /* direct tailcall eliminated */
#line 734 "diet.m"
                {
#line 734 "diet.m"
                  MR_Word mercury__diet__T__tmp_copy_3 = mercury__diet__L_8;

#line 734 "diet.m"
                  mercury__diet__T_3 = mercury__diet__T__tmp_copy_3;
#line 734 "diet.m"
                }
#line 734 "diet.m"
                continue;
#line 734 "diet.m"
              }
#line 735 "diet.m"
            else
#line 737 "diet.m"
              {
#line 39 "diet.m"
                MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_11, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
                {
#line 39 "diet.m"
                  mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_11), mercury__diet__Y_6, mercury__diet__Z_4);
                }
#line 737 "diet.m"
                if (mercury__diet__succeeded)
#line 736 "diet.m"
                  {
#line 736 "diet.m"
                    /* direct tailcall eliminated */
#line 736 "diet.m"
                    {
#line 736 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_3 = mercury__diet__R_9;

#line 736 "diet.m"
                      mercury__diet__T_3 = mercury__diet__T__tmp_copy_3;
#line 736 "diet.m"
                    }
#line 736 "diet.m"
                    continue;
#line 736 "diet.m"
                  }
#line 737 "diet.m"
                else
#line 738 "diet.m"
                  mercury__diet__succeeded = MR_TRUE;
#line 737 "diet.m"
              }
#line 732 "diet.m"
          }
#line 731 "diet.m"
        return mercury__diet__succeeded;
#line 731 "diet.m"
      }
#line 731 "diet.m"
      break;
#line 731 "diet.m"
    }
#line 87 "diet.m"
}

#line 83 "diet.m"
MR_bool MR_CALL 
mercury__diet__is_singleton_2_p_0(
#line 83 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_10,
#line 83 "diet.m"
  MR_Word mercury__diet__Set_3,
#line 83 "diet.m"
  MR_Box * mercury__diet__X_4)
#line 83 "diet.m"
{
#line 726 "diet.m"
  {
#line 726 "diet.m"
    MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Set_3)) == (MR_mktag((MR_Integer) 1)));
#line 726 "diet.m"
    MR_Word mercury__diet__TypeInfo_12_12;
#line 726 "diet.m"
    MR_Tuple mercury__diet__V_6_6;
#line 726 "diet.m"
    MR_Box mercury__diet__V_7_7;
#line 726 "diet.m"
    MR_Word mercury__diet__V_8_8;
#line 726 "diet.m"
    MR_Word mercury__diet__V_9_9;
#line 726 "diet.m"
    MR_Integer mercury__diet__TypeInfoIndex_11;
#line 727 "diet.m"
    MR_Integer mercury__diet__V_5_5;

#line 727 "diet.m"
    if (mercury__diet__succeeded)
#line 727 "diet.m"
      {
#line 727 "diet.m"
        mercury__diet__V_6_6 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set_3, (MR_Integer) 0)));
#line 727 "diet.m"
        mercury__diet__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set_3, (MR_Integer) 1)));
#line 727 "diet.m"
        mercury__diet__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_3, (MR_Integer) 2)));
#line 727 "diet.m"
        mercury__diet__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_3, (MR_Integer) 3)));
#line 727 "diet.m"
        *mercury__diet__X_4 = (MR_hl_field(MR_mktag(0), mercury__diet__V_6_6, (MR_Integer) 0));
#line 727 "diet.m"
        mercury__diet__V_7_7 = (MR_hl_field(MR_mktag(0), mercury__diet__V_6_6, (MR_Integer) 1));
#line 22150 "diet.c"
        mercury__diet__TypeInfoIndex_11 = (MR_Integer) 1;
#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__is_singleton_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_10 ;
	Index =  mercury__diet__TypeInfoIndex_11 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 22167 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_12_12  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 727 "diet.m"
        {
#line 727 "diet.m"
          mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_12_12, mercury__diet__V_7_7, *mercury__diet__X_4);
        }
#line 726 "diet.m"
        if (mercury__diet__succeeded)
#line 726 "diet.m"
          {
#line 727 "diet.m"
            mercury__diet__succeeded = (mercury__diet__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 726 "diet.m"
            if (mercury__diet__succeeded)
#line 727 "diet.m"
              mercury__diet__succeeded = (mercury__diet__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 726 "diet.m"
          }
#line 727 "diet.m"
      }
#line 726 "diet.m"
    return mercury__diet__succeeded;
#line 726 "diet.m"
  }
#line 83 "diet.m"
}

#line 78 "diet.m"
MR_Word MR_CALL 
mercury__diet__make_interval_set_2_f_0(
#line 78 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_9,
#line 78 "diet.m"
  MR_Box mercury__diet__X_4,
#line 78 "diet.m"
  MR_Box mercury__diet__Y_5)
#line 78 "diet.m"
{
#line 722 "diet.m"
  {
#line 722 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 722 "diet.m"
    MR_Word mercury__diet__T_6;
#line 39 "diet.m"
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_9, (MR_Integer) 0)), (MR_Integer) 5)));

#line 39 "diet.m"
    {
#line 39 "diet.m"
      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_9), mercury__diet__Y_5, mercury__diet__X_4);
    }
#line 480 "diet.m"
    mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 722 "diet.m"
    if (mercury__diet__succeeded)
#line 721 "diet.m"
      {
#line 721 "diet.m"
        MR_Tuple mercury__diet__V_7_7;
#line 721 "diet.m"
        MR_Word mercury__diet__V_18_18;
#line 721 "diet.m"
        MR_Word mercury__diet__V_19_19;
#line 134 "private_builtin.opt"
        MR_Word mercury__diet__TypeInfo_11_11;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__make_interval_set_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_9 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 22255 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_11_11  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 721 "diet.m"
        {
#line 721 "diet.m"
          mercury__diet__V_7_7 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 721 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_7_7, 0) = mercury__diet__X_4;
#line 721 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_7_7, 1) = mercury__diet__Y_5;
#line 721 "diet.m"
        }
#line 508 "diet.m"
        mercury__diet__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 508 "diet.m"
        mercury__diet__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 508 "diet.m"
        {
#line 508 "diet.m"
          mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 508 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__V_7_7));
#line 508 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) ((MR_Integer) 1));
#line 508 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__V_18_18));
#line 508 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__V_19_19));
#line 508 "diet.m"
        }
#line 721 "diet.m"
      }
#line 722 "diet.m"
    else
#line 723 "diet.m"
      {
#line 723 "diet.m"
        MR_Word mercury__diet__TypeInfo_13_13;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__make_interval_set_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_9 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 22314 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_13_13  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 723 "diet.m"
        {
#line 723 "diet.m"
          mercury__diet__unexpected_interval_3_p_0(mercury__diet__TypeInfo_13_13, (MR_String) "function \140diet.make_interval_set\'/2", mercury__diet__X_4, mercury__diet__Y_5);
        }
#line 723 "diet.m"
      }
#line 722 "diet.m"
    return mercury__diet__T_6;
#line 722 "diet.m"
  }
#line 78 "diet.m"
}

#line 73 "diet.m"
MR_Word MR_CALL 
mercury__diet__make_singleton_set_1_f_0(
#line 73 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_6,
#line 73 "diet.m"
  MR_Box mercury__diet__X_3)
#line 73 "diet.m"
{
#line 717 "diet.m"
  {
#line 717 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 717 "diet.m"
    MR_Word mercury__diet__HeadVar__2_2;
#line 717 "diet.m"
    MR_Tuple mercury__diet__V_4_4;
#line 717 "diet.m"
    MR_Word mercury__diet__V_11_11;
#line 717 "diet.m"
    MR_Word mercury__diet__V_12_12;
#line 134 "private_builtin.opt"
    MR_Word mercury__diet__TypeInfo_8_8;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__make_singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_6 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 22374 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_8_8  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 717 "diet.m"
    {
#line 717 "diet.m"
      mercury__diet__V_4_4 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 717 "diet.m"
      MR_hl_field(MR_mktag(0), mercury__diet__V_4_4, 0) = mercury__diet__X_3;
#line 717 "diet.m"
      MR_hl_field(MR_mktag(0), mercury__diet__V_4_4, 1) = mercury__diet__X_3;
#line 717 "diet.m"
    }
#line 508 "diet.m"
    mercury__diet__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 508 "diet.m"
    mercury__diet__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 508 "diet.m"
    {
#line 508 "diet.m"
      mercury__diet__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 508 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 0) = ((MR_Box) (mercury__diet__V_4_4));
#line 508 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 1));
#line 508 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 2) = ((MR_Box) (mercury__diet__V_11_11));
#line 508 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 3) = ((MR_Box) (mercury__diet__V_12_12));
#line 508 "diet.m"
    }
#line 717 "diet.m"
    return mercury__diet__HeadVar__2_2;
#line 717 "diet.m"
  }
#line 73 "diet.m"
}

#line 68 "diet.m"
MR_bool MR_CALL 
mercury__diet__equal_2_p_0(
#line 68 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 68 "diet.m"
  MR_Word mercury__diet__T1_3,
#line 68 "diet.m"
  MR_Word mercury__diet__T2_4)
#line 68 "diet.m"
{
#line 705 "diet.m"
  while (MR_TRUE)
#line 705 "diet.m"
    {
#line 705 "diet.m"
      /* tailcall optimized into a loop */
#line 705 "diet.m"
      {
#line 705 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 705 "diet.m"
        if ((mercury__diet__T1_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 706 "diet.m"
          mercury__diet__succeeded = (mercury__diet__T2_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 705 "diet.m"
        else
#line 708 "diet.m"
          {
#line 708 "diet.m"
            MR_Word mercury__diet__TypeInfo_22_22;
#line 708 "diet.m"
            MR_Word mercury__diet__TypeInfo_23_23;
#line 708 "diet.m"
            MR_Word mercury__diet__TypeCtorInfo_24_24;
#line 708 "diet.m"
            MR_Word mercury__diet__TypeInfo_26_26;
#line 708 "diet.m"
            MR_Word mercury__diet__R1_15;
#line 708 "diet.m"
            MR_Word mercury__diet__R2_16;
#line 708 "diet.m"
            MR_Tuple mercury__diet__V_17_17;
#line 708 "diet.m"
            MR_Tuple mercury__diet__V_20_20;
#line 708 "diet.m"
            MR_Integer mercury__diet__PolyConst1_21;
#line 708 "diet.m"
            MR_Integer mercury__diet__PolyConst2_25;
#line 709 "diet.m"
            MR_Tuple mercury__diet__V_9_9;
#line 709 "diet.m"
            MR_Integer mercury__diet__V_10_10;
#line 709 "diet.m"
            MR_Word mercury__diet__V_11_11;
#line 709 "diet.m"
            MR_Word mercury__diet__V_12_12;

#line 709 "diet.m"
            mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__T2_4)) == (MR_mktag((MR_Integer) 1)));
#line 709 "diet.m"
            if (mercury__diet__succeeded)
#line 709 "diet.m"
              {
#line 709 "diet.m"
                mercury__diet__V_9_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 0)));
#line 709 "diet.m"
                mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 1)));
#line 709 "diet.m"
                mercury__diet__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 2)));
#line 709 "diet.m"
                mercury__diet__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 3)));
#line 710 "diet.m"
                {
#line 710 "diet.m"
                  mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__T1_3, &mercury__diet__V_17_17, &mercury__diet__R1_15);
                }
#line 711 "diet.m"
                {
#line 711 "diet.m"
                  mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__T2_4, &mercury__diet__V_20_20, &mercury__diet__R2_16);
                }
#line 22499 "diet.c"
                mercury__diet__TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 22501 "diet.c"
                mercury__diet__PolyConst2_25 = (MR_Integer) 2;
#line 22503 "diet.c"
                mercury__diet__PolyConst1_21 = (MR_Integer) 1;
#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__equal_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_19 ;
	Index =  mercury__diet__PolyConst1_21 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 22520 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_22_22  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__equal_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_19 ;
	Index =  mercury__diet__PolyConst1_21 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 22542 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_23_23  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 22549 "diet.c"
                {
#line 22551 "diet.c"
                  mercury__diet__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 22553 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_26_26, 0) = ((MR_Box) (mercury__diet__TypeCtorInfo_24_24));
#line 22555 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_26_26, 1) = ((MR_Box) (mercury__diet__PolyConst2_25));
#line 22557 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_26_26, 2) = ((MR_Box) (mercury__diet__TypeInfo_22_22));
#line 22559 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_26_26, 3) = ((MR_Box) (mercury__diet__TypeInfo_23_23));
#line 22561 "diet.c"
                }
#line 711 "diet.m"
                {
#line 711 "diet.m"
                  mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_26_26, ((MR_Box) (mercury__diet__V_17_17)), ((MR_Box) (mercury__diet__V_20_20)));
                }
#line 708 "diet.m"
                if (mercury__diet__succeeded)
#line 712 "diet.m"
                  {
#line 712 "diet.m"
                    /* direct tailcall eliminated */
#line 712 "diet.m"
                    {
#line 712 "diet.m"
                      MR_Word mercury__diet__T1__tmp_copy_3 = mercury__diet__R1_15;
#line 712 "diet.m"
                      MR_Word mercury__diet__T2__tmp_copy_4 = mercury__diet__R2_16;

#line 712 "diet.m"
                      mercury__diet__T2_4 = mercury__diet__T2__tmp_copy_4;
#line 712 "diet.m"
                      mercury__diet__T1_3 = mercury__diet__T1__tmp_copy_3;
#line 712 "diet.m"
                    }
#line 712 "diet.m"
                    continue;
#line 712 "diet.m"
                  }
#line 709 "diet.m"
              }
#line 708 "diet.m"
          }
#line 705 "diet.m"
        return mercury__diet__succeeded;
#line 705 "diet.m"
      }
#line 705 "diet.m"
      break;
#line 705 "diet.m"
    }
#line 68 "diet.m"
}

#line 63 "diet.m"
MR_bool MR_CALL 
mercury__diet__is_non_empty_1_p_0(
#line 63 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_6,
#line 63 "diet.m"
  MR_Word mercury__diet__HeadVar__1_1)
#line 63 "diet.m"
{
#line 699 "diet.m"
  {
#line 699 "diet.m"
    MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 699 "diet.m"
    MR_Tuple mercury__diet__V_2_2;
#line 699 "diet.m"
    MR_Integer mercury__diet__V_3_3;
#line 699 "diet.m"
    MR_Word mercury__diet__V_4_4;
#line 699 "diet.m"
    MR_Word mercury__diet__V_5_5;

#line 699 "diet.m"
    if (mercury__diet__succeeded)
#line 699 "diet.m"
      {
#line 699 "diet.m"
        mercury__diet__V_2_2 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 0)));
#line 699 "diet.m"
        mercury__diet__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 1)));
#line 699 "diet.m"
        mercury__diet__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 2)));
#line 699 "diet.m"
        mercury__diet__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 3)));
#line 699 "diet.m"
      }
#line 699 "diet.m"
    return mercury__diet__succeeded;
#line 699 "diet.m"
  }
#line 63 "diet.m"
}

#line 61 "diet.m"
MR_bool MR_CALL 
mercury__diet__is_empty_1_p_0(
#line 61 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_2,
#line 61 "diet.m"
  MR_Word mercury__diet__HeadVar__1_1)
#line 61 "diet.m"
{
#line 697 "diet.m"
  {
#line 697 "diet.m"
    MR_bool mercury__diet__succeeded = (mercury__diet__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 697 "diet.m"
    return mercury__diet__succeeded;
#line 697 "diet.m"
  }
#line 61 "diet.m"
}

#line 59 "diet.m"
void MR_CALL 
mercury__diet__empty_1_p_1(
#line 59 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_2,
#line 59 "diet.m"
  MR_Word * mercury__diet__HeadVar__1_1)
#line 59 "diet.m"
{
#line 691 "diet.m"
  {
#line 691 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 691 "diet.m"
    *mercury__diet__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 691 "diet.m"
  }
#line 59 "diet.m"
}

#line 58 "diet.m"
MR_bool MR_CALL 
mercury__diet__empty_1_p_0(
#line 58 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_2,
#line 58 "diet.m"
  MR_Word mercury__diet__HeadVar__1_1)
#line 58 "diet.m"
{
#line 695 "diet.m"
  {
#line 695 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 695 "diet.m"
    MR_Word mercury__diet__V_3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 695 "diet.m"
    {
#line 695 "diet.m"
      mercury__diet__succeeded = mercury__diet____Unify____diet_1_0(mercury__diet__TypeInfo_for_T_2, mercury__diet__HeadVar__1_1, mercury__diet__V_3_3);
    }
#line 695 "diet.m"
    return mercury__diet__succeeded;
#line 695 "diet.m"
  }
#line 58 "diet.m"
}

#line 55 "diet.m"
void MR_CALL 
mercury__diet__init_1_p_0(
#line 55 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_2,
#line 55 "diet.m"
  MR_Word * mercury__diet__HeadVar__1_1)
#line 55 "diet.m"
{
#line 693 "diet.m"
  {
#line 693 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 693 "diet.m"
    *mercury__diet__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 693 "diet.m"
  }
#line 55 "diet.m"
}

#line 54 "diet.m"
MR_Word MR_CALL 
mercury__diet__init_0_f_0(
#line 54 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_2)
#line 54 "diet.m"
{
#line 691 "diet.m"
  {
#line 691 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 691 "diet.m"
    MR_Word mercury__diet__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 691 "diet.m"
    return mercury__diet__HeadVar__1_1;
#line 691 "diet.m"
  }
#line 54 "diet.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module diet. */
