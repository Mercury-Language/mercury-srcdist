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

#line 1718 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_51_95_95_91_49_44_32_51_44_32_53_93_95_48_5_p_0(
#line 1718 "diet.m"
  MR_Word mercury__diet__V_19_19,
#line 1718 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1718 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1718 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1718 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_A_0_10,
#line 1718 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_A_11);

#line 1718 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
#line 1718 "diet.m"
  MR_Word mercury__diet__V_19_19,
#line 1718 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1718 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1718 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1718 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
#line 1718 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_11);

#line 1537 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
#line 1537 "diet.m"
  MR_Word mercury__diet__V_19_19,
#line 1537 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1537 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1537 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1537 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
#line 1537 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11);

#line 1566 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_117_112_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_7_p_0(
#line 1566 "diet.m"
  MR_Word mercury__diet__V_29_29,
#line 1566 "diet.m"
  MR_Word mercury__diet__V_30_30,
#line 1566 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
#line 1566 "diet.m"
  MR_Box mercury__diet__Lo_9,
#line 1566 "diet.m"
  MR_Box mercury__diet__Hi_10,
#line 1566 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_A_0_13,
#line 1566 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_A_14,
#line 1566 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_B_0_15,
#line 1566 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_B_16);

#line 126 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 126 "list.int"
  MR_Word mercury__diet__V_20_20,
#line 126 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 126 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 126 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4);

#line 126 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 126 "list.int"
  MR_Word mercury__diet__V_20_20,
#line 126 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 126 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 126 "list.int"
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

#line 126 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(
#line 126 "list.int"
  MR_Word mercury__diet__V_18_18,
#line 126 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 126 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 126 "list.int"
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

#line 126 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
#line 126 "list.int"
  MR_Word mercury__diet__V_22_22,
#line 126 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 126 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 126 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4);

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 592 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(
#line 592 "diet.m"
  MR_Word mercury__diet__IsLeft_5,
#line 592 "diet.m"
  MR_Tuple mercury__diet__X_6,
#line 592 "diet.m"
  MR_Word mercury__diet__T0_7);

#line 524 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(
#line 524 "diet.m"
  MR_Tuple mercury__diet__X_5,
#line 524 "diet.m"
  MR_Word mercury__diet__L_6,
#line 524 "diet.m"
  MR_Word mercury__diet__R_7);

#line 520 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(
#line 520 "diet.m"
  MR_Tuple mercury__diet__X_5,
#line 520 "diet.m"
  MR_Word mercury__diet__L_6,
#line 520 "diet.m"
  MR_Word mercury__diet__R_7);

#line 1416 "diet.m"
static void MR_CALL 
mercury__diet__diff_helper_8_p_0(
#line 1416 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_44,
#line 1416 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 1416 "diet.m"
  MR_Word mercury__diet__Right0_11,
#line 1416 "diet.m"
  MR_Word mercury__diet__Left0_12,
#line 1416 "diet.m"
  MR_Word mercury__diet__Head0_13,
#line 1416 "diet.m"
  MR_Word mercury__diet__Stream0_14,
#line 1416 "diet.m"
  MR_Word * mercury__diet__Output_15,
#line 1416 "diet.m"
  MR_Word * mercury__diet__Head_16,
#line 1416 "diet.m"
  MR_Word * mercury__diet__Stream_17);

#line 1386 "diet.m"
static void MR_CALL 
mercury__diet__diff_6_p_0(
#line 1386 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
#line 1386 "diet.m"
  MR_Word mercury__diet__Input_7,
#line 1386 "diet.m"
  MR_Word mercury__diet__Head0_8,
#line 1386 "diet.m"
  MR_Word mercury__diet__Stream0_9,
#line 1386 "diet.m"
  MR_Word * mercury__diet__Output_10,
#line 1386 "diet.m"
  MR_Word * mercury__diet__Head_11,
#line 1386 "diet.m"
  MR_Word * mercury__diet__Stream_12);

#line 1315 "diet.m"
static void MR_CALL 
mercury__diet__inter_help_8_p_0(
#line 1315 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_49,
#line 1315 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 1315 "diet.m"
  MR_Word mercury__diet__Right0_11,
#line 1315 "diet.m"
  MR_Word mercury__diet__Left0_12,
#line 1315 "diet.m"
  MR_Word mercury__diet__Head0_13,
#line 1315 "diet.m"
  MR_Word mercury__diet__Stream0_14,
#line 1315 "diet.m"
  MR_Word * mercury__diet__Result_15,
#line 1315 "diet.m"
  MR_Word * mercury__diet__Head_16,
#line 1315 "diet.m"
  MR_Word * mercury__diet__Stream_17);

#line 1285 "diet.m"
static void MR_CALL 
mercury__diet__inter_2_6_p_0(
#line 1285 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_26,
#line 1285 "diet.m"
  MR_Word mercury__diet__Input_7,
#line 1285 "diet.m"
  MR_Word mercury__diet__Head0_8,
#line 1285 "diet.m"
  MR_Word mercury__diet__Stream0_9,
#line 1285 "diet.m"
  MR_Word * mercury__diet__Result_10,
#line 1285 "diet.m"
  MR_Word * mercury__diet__Head_11,
#line 1285 "diet.m"
  MR_Word * mercury__diet__Stream_12);

#line 1199 "diet.m"
static void MR_CALL 
mercury__diet__union_helper_9_p_0(
#line 1199 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_56,
#line 1199 "diet.m"
  MR_Word mercury__diet__Left0_10,
#line 1199 "diet.m"
  MR_Tuple mercury__diet__HeadVar__2_2,
#line 1199 "diet.m"
  MR_Word mercury__diet__Right0_13,
#line 1199 "diet.m"
  MR_Word mercury__diet__Limit_14,
#line 1199 "diet.m"
  MR_Word mercury__diet__Head0_15,
#line 1199 "diet.m"
  MR_Word mercury__diet__Stream0_16,
#line 1199 "diet.m"
  MR_Word * mercury__diet__Left_17,
#line 1199 "diet.m"
  MR_Word * mercury__diet__Head_18,
#line 1199 "diet.m"
  MR_Word * mercury__diet__Stream_19);

#line 1167 "diet.m"
static void MR_CALL 
mercury__diet__union_2_7_p_0(
#line 1167 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_30,
#line 1167 "diet.m"
  MR_Word mercury__diet__Input_8,
#line 1167 "diet.m"
  MR_Word mercury__diet__Limit_9,
#line 1167 "diet.m"
  MR_Word mercury__diet__Head0_10,
#line 1167 "diet.m"
  MR_Word mercury__diet__Stream0_11,
#line 1167 "diet.m"
  MR_Word * mercury__diet__Left_12,
#line 1167 "diet.m"
  MR_Word * mercury__diet__Head_13,
#line 1167 "diet.m"
  MR_Word * mercury__diet__Stream_14);

#line 1013 "diet.m"
static void MR_CALL 
mercury__diet__find_del_right_4_p_0(
#line 1013 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_18,
#line 1013 "diet.m"
  MR_Box mercury__diet__P0_5,
#line 1013 "diet.m"
  MR_Word mercury__diet__T0_6,
#line 1013 "diet.m"
  MR_Box * mercury__diet__P_7,
#line 1013 "diet.m"
  MR_Word * mercury__diet__T_8);

#line 994 "diet.m"
static void MR_CALL 
mercury__diet__find_del_left_4_p_0(
#line 994 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_18,
#line 994 "diet.m"
  MR_Box mercury__diet__P0_5,
#line 994 "diet.m"
  MR_Word mercury__diet__T0_6,
#line 994 "diet.m"
  MR_Box * mercury__diet__P_7,
#line 994 "diet.m"
  MR_Word * mercury__diet__T_8);

#line 786 "diet.m"
static void MR_CALL 
mercury__diet__subset_2_5_p_0(
#line 786 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_56,
#line 786 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 786 "diet.m"
  MR_Word mercury__diet__R1_8,
#line 786 "diet.m"
  MR_Tuple mercury__diet__HeadVar__3_3,
#line 786 "diet.m"
  MR_Word mercury__diet__R2_11,
#line 786 "diet.m"
  MR_Word * mercury__diet__IsSubset_12);

#line 758 "diet.m"
static void MR_CALL 
mercury__diet__member_in_range_3_p_0(
#line 758 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
#line 758 "diet.m"
  MR_Box mercury__diet__Lo_4,
#line 758 "diet.m"
  MR_Box mercury__diet__Hi_5,
#line 758 "diet.m"
  MR_Box * mercury__diet__Elem_6,
#line 758 "diet.m"
  MR_Cont mercury__diet__cont,
#line 758 "diet.m"
  void * mercury__diet__cont_env_ptr);

#line 654 "diet.m"
static void MR_CALL 
mercury__diet__take_min_iter_3_p_0(
#line 654 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_21,
#line 654 "diet.m"
  MR_Word mercury__diet__T0_4,
#line 654 "diet.m"
  MR_Tuple * mercury__diet__X_5,
#line 654 "diet.m"
  MR_Word * mercury__diet__T_6);

#line 633 "diet.m"
static MR_Word MR_CALL 
mercury__diet__reroot_2_f_0(
#line 633 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_25,
#line 633 "diet.m"
  MR_Word mercury__diet__L_4,
#line 633 "diet.m"
  MR_Word mercury__diet__R_5);

#line 621 "diet.m"
static void MR_CALL 
mercury__diet__take_max_3_p_0(
#line 621 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 621 "diet.m"
  MR_Word mercury__diet__T0_4,
#line 621 "diet.m"
  MR_Tuple * mercury__diet__X_5,
#line 621 "diet.m"
  MR_Word * mercury__diet__T_6);

#line 609 "diet.m"
static void MR_CALL 
mercury__diet__take_min_3_p_0(
#line 609 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 609 "diet.m"
  MR_Word mercury__diet__T0_4,
#line 609 "diet.m"
  MR_Tuple * mercury__diet__X_5,
#line 609 "diet.m"
  MR_Word * mercury__diet__T_6);

#line 570 "diet.m"
static MR_Word MR_CALL 
mercury__diet__join_3_f_0(
#line 570 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
#line 570 "diet.m"
  MR_Tuple mercury__diet__V_5,
#line 570 "diet.m"
  MR_Word mercury__diet__L_6,
#line 570 "diet.m"
  MR_Word mercury__diet__R_7);

#line 487 "diet.m"
static MR_Box MR_CALL 
mercury__diet__max_elem_2_f_0(
#line 487 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_6,
#line 487 "diet.m"
  MR_Box mercury__diet__X_4,
#line 487 "diet.m"
  MR_Box mercury__diet__Y_5);

#line 483 "diet.m"
static MR_Box MR_CALL 
mercury__diet__min_elem_2_f_0(
#line 483 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_6,
#line 483 "diet.m"
  MR_Box mercury__diet__X_4,
#line 483 "diet.m"
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "version_array.mh"
#include "builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "char.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "time.mh"
#include "array.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "store.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "math.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "version_array.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 877 "diet.c"
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

#line 892 "diet.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__diet____vpti_tuple_2__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 902 "diet.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__diet__diet__pti_diet_1__pseudo_1 = {
  &mercury__diet__diet__type_ctor_info_diet_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 910 "diet.c"
static const MR_PseudoTypeInfo mercury__diet__diet__field_types_diet_1_1[4] = {
  (MR_PseudoTypeInfo) &mercury__diet____vpti_tuple_2__pseudo_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__diet__diet__pti_diet_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__diet__diet__pti_diet_1__pseudo_1
};

#line 918 "diet.c"
static const MR_ConstString mercury__diet__diet__field_names_diet_1_1[4] = {
  (MR_String) "interval",
  (MR_String) "node_height",
  (MR_String) "left",
  (MR_String) "right"
};

#line 926 "diet.c"
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

#line 941 "diet.c"
static const MR_DuFunctorDescPtr mercury__diet__diet__du_stag_ordered_diet_1_0[1] = {
  &mercury__diet__diet__du_functor_desc_diet_1_0
};

#line 946 "diet.c"
static const MR_DuFunctorDescPtr mercury__diet__diet__du_stag_ordered_diet_1_1[1] = {
  &mercury__diet__diet__du_functor_desc_diet_1_1
};

#line 951 "diet.c"
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

#line 965 "diet.c"
static const MR_DuFunctorDescPtr mercury__diet__diet__du_name_ordered_diet_1[2] = {
  &mercury__diet__diet__du_functor_desc_diet_1_0,
  &mercury__diet__diet__du_functor_desc_diet_1_1
};

#line 971 "diet.c"
static const MR_Integer mercury__diet__diet__functor_number_map_diet_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 977 "diet.c"
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

#line 994 "diet.c"
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

#line 1011 "diet.c"
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

#line 1023 "diet.c"
static const MR_ConstString mercury__diet__diet__type_class_id_var_names_diet_element_1[1] = {
  (MR_String) "T"
};

#line 1028 "diet.c"
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

#line 1047 "diet.c"
static const MR_TypeClassId mercury__diet__diet__type_class_id_diet_element_1 = {
  (MR_String) "diet",
  (MR_String) "diet_element",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 3,
  mercury__diet__diet__type_class_id_var_names_diet_element_1,
  mercury__diet__diet__type_class_id_method_ids_diet_element_1
};

#line 1058 "diet.c"
const MR_TypeClassDeclStruct mercury__diet__diet__type_class_decl_diet_element_1 = {
  &mercury__diet__diet__type_class_id_diet_element_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1066 "diet.c"
static MR_bool MR_CALL 
mercury__diet____Unify____diet_1_0_10001(
#line 1069 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 1071 "diet.c"
  MR_Box mercury__diet__wrapper_arg_2,
#line 1073 "diet.c"
  MR_Box mercury__diet__wrapper_arg_3)
#line 1075 "diet.c"
{
#line 1077 "diet.c"
  {
#line 1079 "diet.c"
    MR_bool mercury__diet__succeeded;

#line 1082 "diet.c"
    {
#line 1084 "diet.c"
      mercury__diet__succeeded = mercury__diet____Unify____diet_1_0(((MR_Word) mercury__diet__wrapper_arg_1), ((MR_Word) mercury__diet__wrapper_arg_2), ((MR_Word) mercury__diet__wrapper_arg_3));
    }
#line 1087 "diet.c"
    return mercury__diet__succeeded;
#line 1089 "diet.c"
  }
#line 1091 "diet.c"
}

#line 1094 "diet.c"
static void MR_CALL 
mercury__diet____Compare____diet_1_0_10001(
#line 1097 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 1099 "diet.c"
  MR_Box * mercury__diet__wrapper_arg_2,
#line 1101 "diet.c"
  MR_Box mercury__diet__wrapper_arg_3,
#line 1103 "diet.c"
  MR_Box mercury__diet__wrapper_arg_4)
#line 1105 "diet.c"
{
#line 1107 "diet.c"
  {
#line 1109 "diet.c"
    MR_Word mercury__diet__conv0_HeadVar__1_1;

#line 1112 "diet.c"
    {
#line 1114 "diet.c"
      mercury__diet____Compare____diet_1_0(((MR_Word) mercury__diet__wrapper_arg_1), &mercury__diet__conv0_HeadVar__1_1, ((MR_Word) mercury__diet__wrapper_arg_3), ((MR_Word) mercury__diet__wrapper_arg_4));
    }
#line 1117 "diet.c"
    *mercury__diet__wrapper_arg_2 = ((MR_Box) (mercury__diet__conv0_HeadVar__1_1));
#line 1119 "diet.c"
  }
#line 1121 "diet.c"
}

#line 1124 "diet.c"
static MR_bool MR_CALL 
mercury__diet____Unify____interval_1_0_10001(
#line 1127 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 1129 "diet.c"
  MR_Box mercury__diet__wrapper_arg_2,
#line 1131 "diet.c"
  MR_Box mercury__diet__wrapper_arg_3)
#line 1133 "diet.c"
{
#line 1135 "diet.c"
  {
#line 1137 "diet.c"
    MR_bool mercury__diet__succeeded;

#line 1140 "diet.c"
    {
#line 1142 "diet.c"
      mercury__diet__succeeded = mercury__diet____Unify____interval_1_0(((MR_Word) mercury__diet__wrapper_arg_1), ((MR_Tuple) mercury__diet__wrapper_arg_2), ((MR_Tuple) mercury__diet__wrapper_arg_3));
    }
#line 1145 "diet.c"
    return mercury__diet__succeeded;
#line 1147 "diet.c"
  }
#line 1149 "diet.c"
}

#line 1152 "diet.c"
static void MR_CALL 
mercury__diet____Compare____interval_1_0_10001(
#line 1155 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 1157 "diet.c"
  MR_Box * mercury__diet__wrapper_arg_2,
#line 1159 "diet.c"
  MR_Box mercury__diet__wrapper_arg_3,
#line 1161 "diet.c"
  MR_Box mercury__diet__wrapper_arg_4)
#line 1163 "diet.c"
{
#line 1165 "diet.c"
  {
#line 1167 "diet.c"
    MR_Word mercury__diet__conv0_HeadVar__1_1;

#line 1170 "diet.c"
    {
#line 1172 "diet.c"
      mercury__diet____Compare____interval_1_0(((MR_Word) mercury__diet__wrapper_arg_1), &mercury__diet__conv0_HeadVar__1_1, ((MR_Tuple) mercury__diet__wrapper_arg_3), ((MR_Tuple) mercury__diet__wrapper_arg_4));
    }
#line 1175 "diet.c"
    *mercury__diet__wrapper_arg_2 = ((MR_Box) (mercury__diet__conv0_HeadVar__1_1));
#line 1177 "diet.c"
  }
#line 1179 "diet.c"
}

#line 1182 "diet.c"
static MR_bool MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__less_than_2_2_p_0_10001(
#line 1185 "diet.c"
  MR_Box mercury__diet__closure_arg,
#line 1187 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 1189 "diet.c"
  MR_Box mercury__diet__wrapper_arg_2)
#line 1191 "diet.c"
{
#line 1193 "diet.c"
  {
#line 1195 "diet.c"
    MR_bool mercury__diet__succeeded;
#line 1197 "diet.c"
    MR_Box mercury__diet__closure;

#line 1200 "diet.c"
    mercury__diet__closure = mercury__diet__closure_arg;
#line 1202 "diet.c"
    {
#line 1204 "diet.c"
      mercury__diet__succeeded = mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__less_than_2_2_p_0(((MR_Integer) mercury__diet__wrapper_arg_1), ((MR_Integer) mercury__diet__wrapper_arg_2));
    }
#line 1207 "diet.c"
    return mercury__diet__succeeded;
#line 1209 "diet.c"
  }
#line 1211 "diet.c"
}

#line 1214 "diet.c"
static MR_Box MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__successor_1_1_f_0_10001(
#line 1217 "diet.c"
  MR_Box mercury__diet__closure_arg,
#line 1219 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1)
#line 1221 "diet.c"
{
#line 1223 "diet.c"
  {
#line 1225 "diet.c"
    MR_Box mercury__diet__wrapper_arg_2;
#line 1227 "diet.c"
    MR_Box mercury__diet__closure;
#line 1229 "diet.c"
    MR_Integer mercury__diet__conv0_HeadVar__2_2;

#line 1232 "diet.c"
    mercury__diet__closure = mercury__diet__closure_arg;
#line 1234 "diet.c"
    {
#line 1236 "diet.c"
      mercury__diet__conv0_HeadVar__2_2 = mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__successor_1_1_f_0(((MR_Integer) mercury__diet__wrapper_arg_1));
    }
#line 1239 "diet.c"
    mercury__diet__wrapper_arg_2 = ((MR_Box) (mercury__diet__conv0_HeadVar__2_2));
#line 1241 "diet.c"
    return mercury__diet__wrapper_arg_2;
#line 1243 "diet.c"
  }
#line 1245 "diet.c"
}

#line 1248 "diet.c"
static MR_Box MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__predecessor_1_1_f_0_10001(
#line 1251 "diet.c"
  MR_Box mercury__diet__closure_arg,
#line 1253 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1)
#line 1255 "diet.c"
{
#line 1257 "diet.c"
  {
#line 1259 "diet.c"
    MR_Box mercury__diet__wrapper_arg_2;
#line 1261 "diet.c"
    MR_Box mercury__diet__closure;
#line 1263 "diet.c"
    MR_Integer mercury__diet__conv0_HeadVar__2_2;

#line 1266 "diet.c"
    mercury__diet__closure = mercury__diet__closure_arg;
#line 1268 "diet.c"
    {
#line 1270 "diet.c"
      mercury__diet__conv0_HeadVar__2_2 = mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__predecessor_1_1_f_0(((MR_Integer) mercury__diet__wrapper_arg_1));
    }
#line 1273 "diet.c"
    mercury__diet__wrapper_arg_2 = ((MR_Box) (mercury__diet__conv0_HeadVar__2_2));
#line 1275 "diet.c"
    return mercury__diet__wrapper_arg_2;
#line 1277 "diet.c"
  }
#line 1279 "diet.c"
}

#line 1718 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_51_95_95_91_49_44_32_51_44_32_53_93_95_48_5_p_0(
#line 1718 "diet.m"
  MR_Word mercury__diet__V_19_19,
#line 1718 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1718 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1718 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1718 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_A_0_10,
#line 1718 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_A_11)
#line 1718 "diet.m"
{
#line 1729 "diet.m"
  while (MR_TRUE)
#line 1729 "diet.m"
    {
#line 1729 "diet.m"
      /* tailcall optimized into a loop */
#line 1729 "diet.m"
      {
#line 1729 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 1309 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 1312 "diet.c"
        {
#line 1314 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1729 "diet.m"
        if (mercury__diet__succeeded)
#line 1727 "diet.m"
          {
#line 1727 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_A_12_12;
#line 1727 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1327 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box);

#line 55 "list.opt"
            {
#line 55 "list.opt"
              mercury__diet__STATE_VARIABLE_A_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 55 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__diet__STATE_VARIABLE_A_12_12, 0) = mercury__diet__Hi_8;
#line 55 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__diet__STATE_VARIABLE_A_12_12, 1) = ((MR_Box) (mercury__diet__STATE_VARIABLE_A_0_10));
#line 55 "list.opt"
            }
#line 1340 "diet.c"
            mercury__diet__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 1342 "diet.c"
            {
#line 1344 "diet.c"
              mercury__diet__V_13_13 = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
            }
#line 1728 "diet.m"
            /* direct tailcall eliminated */
#line 1728 "diet.m"
            {
#line 1728 "diet.m"
              MR_Box mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_13_13;
#line 1728 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_12_12;

#line 1728 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1728 "diet.m"
              mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1728 "diet.m"
            }
#line 1728 "diet.m"
            continue;
#line 1727 "diet.m"
          }
#line 1729 "diet.m"
        else
#line 1729 "diet.m"
          *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1729 "diet.m"
      }
#line 1729 "diet.m"
      break;
#line 1729 "diet.m"
    }
#line 1718 "diet.m"
}

#line 1718 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
#line 1718 "diet.m"
  MR_Word mercury__diet__V_19_19,
#line 1718 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
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
#line 1729 "diet.m"
  while (MR_TRUE)
#line 1729 "diet.m"
    {
#line 1729 "diet.m"
      /* tailcall optimized into a loop */
#line 1729 "diet.m"
      {
#line 1729 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 1406 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 1409 "diet.c"
        {
#line 1411 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1729 "diet.m"
        if (mercury__diet__succeeded)
#line 1727 "diet.m"
          {
#line 1727 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
#line 1727 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1703 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__diet__V_19_19, (MR_Integer) 1)));
#line 1426 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1703 "diet.m"
            {
#line 1703 "diet.m"
              mercury__diet__STATE_VARIABLE_A_12_12 = mercury__diet__func_1(((MR_Box) mercury__diet__V_19_19), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10);
            }
#line 1434 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 1436 "diet.c"
            {
#line 1438 "diet.c"
              mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
            }
#line 1728 "diet.m"
            /* direct tailcall eliminated */
#line 1728 "diet.m"
            {
#line 1728 "diet.m"
              MR_Box mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_13_13;
#line 1728 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_12_12;

#line 1728 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1728 "diet.m"
              mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1728 "diet.m"
            }
#line 1728 "diet.m"
            continue;
#line 1727 "diet.m"
          }
#line 1729 "diet.m"
        else
#line 1729 "diet.m"
          *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1729 "diet.m"
      }
#line 1729 "diet.m"
      break;
#line 1729 "diet.m"
    }
#line 1718 "diet.m"
}

#line 1537 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
#line 1537 "diet.m"
  MR_Word mercury__diet__V_19_19,
#line 1537 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
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
#line 1548 "diet.m"
  while (MR_TRUE)
#line 1548 "diet.m"
    {
#line 1548 "diet.m"
      /* tailcall optimized into a loop */
#line 1548 "diet.m"
      {
#line 1548 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 1500 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 1503 "diet.c"
        {
#line 1505 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1548 "diet.m"
        if (mercury__diet__succeeded)
#line 1546 "diet.m"
          {
#line 1546 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
#line 1546 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1520 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__diet__V_19_19, (MR_Integer) 1)));
#line 1520 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1520 "diet.m"
            {
#line 1520 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_12_12 = mercury__diet__func_1(((MR_Box) mercury__diet__V_19_19), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10);
            }
#line 1528 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
#line 1530 "diet.c"
            {
#line 1532 "diet.c"
              mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
            }
#line 1547 "diet.m"
            /* direct tailcall eliminated */
#line 1547 "diet.m"
            {
#line 1547 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_13_13;
#line 1547 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

#line 1547 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1547 "diet.m"
              mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1547 "diet.m"
            }
#line 1547 "diet.m"
            continue;
#line 1546 "diet.m"
          }
#line 1548 "diet.m"
        else
#line 1548 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1548 "diet.m"
      }
#line 1548 "diet.m"
      break;
#line 1548 "diet.m"
    }
#line 1537 "diet.m"
}

#line 1566 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_117_112_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_7_p_0(
#line 1566 "diet.m"
  MR_Word mercury__diet__V_29_29,
#line 1566 "diet.m"
  MR_Word mercury__diet__V_30_30,
#line 1566 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
#line 1566 "diet.m"
  MR_Box mercury__diet__Lo_9,
#line 1566 "diet.m"
  MR_Box mercury__diet__Hi_10,
#line 1566 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_A_0_13,
#line 1566 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_A_14,
#line 1566 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_B_0_15,
#line 1566 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_B_16)
#line 1566 "diet.m"
{
#line 1583 "diet.m"
  while (MR_TRUE)
#line 1583 "diet.m"
    {
#line 1583 "diet.m"
      /* tailcall optimized into a loop */
#line 1583 "diet.m"
      {
#line 1583 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 1600 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

#line 1603 "diet.c"
        {
#line 1605 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1583 "diet.m"
        if (mercury__diet__succeeded)
#line 1581 "diet.m"
          {
#line 1581 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_A_17_17;
#line 1581 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_B_18_18;
#line 1581 "diet.m"
            MR_Box mercury__diet__V_19_19;
#line 1461 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 1)));
#line 1622 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1461 "diet.m"
            {
#line 1461 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__V_30_30), mercury__diet__Lo_9);
            }
#line 1463 "diet.m"
            if (mercury__diet__succeeded)
#line 1462 "diet.m"
              {
#line 846 "diet.m"
                {
#line 846 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_17_17 = mercury__diet__add_2_f_0(mercury__diet__V_29_29, mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13);
                }
#line 1462 "diet.m"
                mercury__diet__STATE_VARIABLE_B_18_18 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1462 "diet.m"
              }
#line 1463 "diet.m"
            else
#line 1464 "diet.m"
              {
#line 846 "diet.m"
                {
#line 846 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_18_18 = mercury__diet__add_2_f_0(mercury__diet__V_29_29, mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_B_0_15);
                }
#line 1464 "diet.m"
                mercury__diet__STATE_VARIABLE_A_17_17 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1464 "diet.m"
              }
#line 1656 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
#line 1658 "diet.c"
            {
#line 1660 "diet.c"
              mercury__diet__V_19_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
            }
#line 1582 "diet.m"
            /* direct tailcall eliminated */
#line 1582 "diet.m"
            {
#line 1582 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_19_19;
#line 1582 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_17_17;
#line 1582 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_18_18;

#line 1582 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1582 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1582 "diet.m"
              mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1582 "diet.m"
            }
#line 1582 "diet.m"
            continue;
#line 1581 "diet.m"
          }
#line 1583 "diet.m"
        else
#line 1584 "diet.m"
          {
#line 1584 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1584 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1584 "diet.m"
          }
#line 1583 "diet.m"
      }
#line 1583 "diet.m"
      break;
#line 1583 "diet.m"
    }
#line 1566 "diet.m"
}

#line 126 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 126 "list.int"
  MR_Word mercury__diet__V_20_20,
#line 126 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 126 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 126 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4)
#line 126 "list.int"
{
#line 395 "list.opt"
  while (MR_TRUE)
#line 395 "list.opt"
    {
#line 395 "list.opt"
      /* tailcall optimized into a loop */
#line 395 "list.opt"
      {
#line 395 "list.opt"
        MR_bool mercury__diet__succeeded;

#line 395 "list.opt"
        if ((mercury__diet__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "list.opt"
          *mercury__diet__HeadVar__4_4 = mercury__diet__HeadVar__3_3;
#line 395 "list.opt"
        else
#line 397 "list.opt"
          {
#line 397 "list.opt"
            MR_Word mercury__diet__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
#line 397 "list.opt"
            MR_Word mercury__diet__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 397 "list.opt"
            MR_Word mercury__diet__STATE_VARIABLE_A_15_15_13;

#line 1150 "diet.m"
            {
#line 1150 "diet.m"
              mercury__diet__STATE_VARIABLE_A_15_15_13 = mercury__diet__union_2_f_0(mercury__diet__V_20_20, mercury__diet__H_10_9, mercury__diet__HeadVar__3_3);
            }
#line 399 "list.opt"
            /* direct tailcall eliminated */
#line 399 "list.opt"
            {
#line 399 "list.opt"
              MR_Word mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__T_11_10;
#line 399 "list.opt"
              MR_Word mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__STATE_VARIABLE_A_15_15_13;

#line 399 "list.opt"
              mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 399 "list.opt"
              mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 399 "list.opt"
            }
#line 399 "list.opt"
            continue;
#line 397 "list.opt"
          }
#line 395 "list.opt"
      }
#line 395 "list.opt"
      break;
#line 395 "list.opt"
    }
#line 126 "list.int"
}

#line 126 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 126 "list.int"
  MR_Word mercury__diet__V_20_20,
#line 126 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 126 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 126 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4)
#line 126 "list.int"
{
#line 395 "list.opt"
  while (MR_TRUE)
#line 395 "list.opt"
    {
#line 395 "list.opt"
      /* tailcall optimized into a loop */
#line 395 "list.opt"
      {
#line 395 "list.opt"
        MR_bool mercury__diet__succeeded;

#line 395 "list.opt"
        if ((mercury__diet__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "list.opt"
          *mercury__diet__HeadVar__4_4 = mercury__diet__HeadVar__3_3;
#line 395 "list.opt"
        else
#line 397 "list.opt"
          {
#line 397 "list.opt"
            MR_Word mercury__diet__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
#line 397 "list.opt"
            MR_Word mercury__diet__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 397 "list.opt"
            MR_Word mercury__diet__STATE_VARIABLE_A_15_15_13;

#line 1269 "diet.m"
            {
#line 1269 "diet.m"
              mercury__diet__STATE_VARIABLE_A_15_15_13 = mercury__diet__inter_2_f_0(mercury__diet__V_20_20, mercury__diet__H_10_9, mercury__diet__HeadVar__3_3);
            }
#line 399 "list.opt"
            /* direct tailcall eliminated */
#line 399 "list.opt"
            {
#line 399 "list.opt"
              MR_Word mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__T_11_10;
#line 399 "list.opt"
              MR_Word mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__STATE_VARIABLE_A_15_15_13;

#line 399 "list.opt"
              mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 399 "list.opt"
              mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 399 "list.opt"
            }
#line 399 "list.opt"
            continue;
#line 397 "list.opt"
          }
#line 395 "list.opt"
      }
#line 395 "list.opt"
      break;
#line 395 "list.opt"
    }
#line 126 "list.int"
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
#line 1557 "diet.m"
  while (MR_TRUE)
#line 1557 "diet.m"
    {
#line 1557 "diet.m"
      /* tailcall optimized into a loop */
#line 1557 "diet.m"
      {
#line 1557 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1557 "diet.m"
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1556 "diet.m"
          {
#line 1556 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1556 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1556 "diet.m"
          }
#line 1557 "diet.m"
        else
#line 1558 "diet.m"
          {
#line 1558 "diet.m"
            MR_Box mercury__diet__X_11;
#line 1558 "diet.m"
            MR_Box mercury__diet__Y_12;
#line 1558 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1558 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1558 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1558 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1558 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1558 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1558 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1558 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1558 "diet.m"
            mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0));
#line 1558 "diet.m"
            mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1));
#line 1559 "diet.m"
            {
#line 1559 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(mercury__diet__V_34_34, mercury__diet__V_35_35, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1560 "diet.m"
            {
#line 1560 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_117_112_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_7_p_0(mercury__diet__V_34_34, mercury__diet__V_35_35, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
            }
#line 1561 "diet.m"
            /* direct tailcall eliminated */
#line 1561 "diet.m"
            {
#line 1561 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1561 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1561 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1561 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1561 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1561 "diet.m"
              mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
#line 1561 "diet.m"
            }
#line 1561 "diet.m"
            continue;
#line 1558 "diet.m"
          }
#line 1557 "diet.m"
      }
#line 1557 "diet.m"
      break;
#line 1557 "diet.m"
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
#line 1529 "diet.m"
  while (MR_TRUE)
#line 1529 "diet.m"
    {
#line 1529 "diet.m"
      /* tailcall optimized into a loop */
#line 1529 "diet.m"
      {
#line 1529 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1529 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1528 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1529 "diet.m"
        else
#line 1530 "diet.m"
          {
#line 1530 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1530 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1530 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1530 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1530 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1530 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1530 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1530 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1530 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1530 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1531 "diet.m"
            {
#line 1531 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(mercury__diet__V_23_23, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1532 "diet.m"
            {
#line 1532 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(mercury__diet__V_23_23, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1533 "diet.m"
            /* direct tailcall eliminated */
#line 1533 "diet.m"
            {
#line 1533 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1533 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1533 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1533 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1533 "diet.m"
            }
#line 1533 "diet.m"
            continue;
#line 1530 "diet.m"
          }
#line 1529 "diet.m"
      }
#line 1529 "diet.m"
      break;
#line 1529 "diet.m"
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
#line 1710 "diet.m"
  while (MR_TRUE)
#line 1710 "diet.m"
    {
#line 1710 "diet.m"
      /* tailcall optimized into a loop */
#line 1710 "diet.m"
      {
#line 1710 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1710 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1709 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1710 "diet.m"
        else
#line 1711 "diet.m"
          {
#line 1711 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1711 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1711 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1711 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1711 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1711 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1711 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1711 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1711 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1711 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1712 "diet.m"
            {
#line 1712 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(mercury__diet__V_23_23, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1713 "diet.m"
            {
#line 1713 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(mercury__diet__V_23_23, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1714 "diet.m"
            /* direct tailcall eliminated */
#line 1714 "diet.m"
            {
#line 1714 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1714 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1714 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1714 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1714 "diet.m"
            }
#line 1714 "diet.m"
            continue;
#line 1711 "diet.m"
          }
#line 1710 "diet.m"
      }
#line 1710 "diet.m"
      break;
#line 1710 "diet.m"
    }
#line 328 "diet.m"
}

#line 126 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(
#line 126 "list.int"
  MR_Word mercury__diet__V_18_18,
#line 126 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 126 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 126 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4)
#line 126 "list.int"
{
#line 395 "list.opt"
  while (MR_TRUE)
#line 395 "list.opt"
    {
#line 395 "list.opt"
      /* tailcall optimized into a loop */
#line 395 "list.opt"
      {
#line 395 "list.opt"
        MR_bool mercury__diet__succeeded;

#line 395 "list.opt"
        if ((mercury__diet__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "list.opt"
          *mercury__diet__HeadVar__4_4 = mercury__diet__HeadVar__3_3;
#line 395 "list.opt"
        else
#line 397 "list.opt"
          {
#line 397 "list.opt"
            MR_Box mercury__diet__H_10_9 = (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0));
#line 397 "list.opt"
            MR_Word mercury__diet__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 397 "list.opt"
            MR_Word mercury__diet__STATE_VARIABLE_A_15_15_13;

#line 846 "diet.m"
            {
#line 846 "diet.m"
              mercury__diet__STATE_VARIABLE_A_15_15_13 = mercury__diet__add_2_f_0(mercury__diet__V_18_18, mercury__diet__H_10_9, mercury__diet__HeadVar__3_3);
            }
#line 399 "list.opt"
            /* direct tailcall eliminated */
#line 399 "list.opt"
            {
#line 399 "list.opt"
              MR_Word mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__T_11_10;
#line 399 "list.opt"
              MR_Word mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__STATE_VARIABLE_A_15_15_13;

#line 399 "list.opt"
              mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 399 "list.opt"
              mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 399 "list.opt"
            }
#line 399 "list.opt"
            continue;
#line 397 "list.opt"
          }
#line 395 "list.opt"
      }
#line 395 "list.opt"
      break;
#line 395 "list.opt"
    }
#line 126 "list.int"
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
#line 1710 "diet.m"
  while (MR_TRUE)
#line 1710 "diet.m"
    {
#line 1710 "diet.m"
      /* tailcall optimized into a loop */
#line 1710 "diet.m"
      {
#line 1710 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1710 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1709 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1710 "diet.m"
        else
#line 1711 "diet.m"
          {
#line 1711 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1711 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1711 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1711 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1711 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1711 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1711 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1711 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1711 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1711 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1712 "diet.m"
            {
#line 1712 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(mercury__diet__V_23_23, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1713 "diet.m"
            {
#line 1713 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_51_95_95_91_49_44_32_51_44_32_53_93_95_48_5_p_0(mercury__diet__V_23_23, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1714 "diet.m"
            /* direct tailcall eliminated */
#line 1714 "diet.m"
            {
#line 1714 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1714 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1714 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1714 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1714 "diet.m"
            }
#line 1714 "diet.m"
            continue;
#line 1711 "diet.m"
          }
#line 1710 "diet.m"
      }
#line 1710 "diet.m"
      break;
#line 1710 "diet.m"
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
#line 1509 "diet.m"
  while (MR_TRUE)
#line 1509 "diet.m"
    {
#line 1509 "diet.m"
      /* tailcall optimized into a loop */
#line 1509 "diet.m"
      {
#line 1509 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1509 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1508 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1509 "diet.m"
        else
#line 1510 "diet.m"
          {
#line 1510 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1510 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1510 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1510 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1510 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1510 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1511 "diet.m"
            {
#line 1511 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(mercury__diet__V_27_27, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1796 "diet.m"
            {
#line 1796 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1796 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__STATE_VARIABLE_Acc_17_17, 0) = ((MR_Box) (mercury__diet__V_15_15));
#line 1796 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__STATE_VARIABLE_Acc_17_17, 1) = ((MR_Box) (mercury__diet__STATE_VARIABLE_Acc_16_16));
#line 1796 "diet.m"
            }
#line 1513 "diet.m"
            /* direct tailcall eliminated */
#line 1513 "diet.m"
            {
#line 1513 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1513 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1513 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1513 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1513 "diet.m"
            }
#line 1513 "diet.m"
            continue;
#line 1510 "diet.m"
          }
#line 1509 "diet.m"
      }
#line 1509 "diet.m"
      break;
#line 1509 "diet.m"
    }
#line 241 "diet.m"
}

#line 126 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
#line 126 "list.int"
  MR_Word mercury__diet__V_22_22,
#line 126 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 126 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 126 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4)
#line 126 "list.int"
{
#line 395 "list.opt"
  while (MR_TRUE)
#line 395 "list.opt"
    {
#line 395 "list.opt"
      /* tailcall optimized into a loop */
#line 395 "list.opt"
      {
#line 395 "list.opt"
        MR_bool mercury__diet__succeeded;

#line 395 "list.opt"
        if ((mercury__diet__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "list.opt"
          *mercury__diet__HeadVar__4_4 = mercury__diet__HeadVar__3_3;
#line 395 "list.opt"
        else
#line 397 "list.opt"
          {
#line 397 "list.opt"
            MR_Tuple mercury__diet__H_10_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
#line 397 "list.opt"
            MR_Word mercury__diet__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 397 "list.opt"
            MR_Word mercury__diet__STATE_VARIABLE_A_15_15_13;
#line 397 "list.opt"
            MR_Box mercury__diet__X_25 = (MR_hl_field(MR_mktag(0), mercury__diet__H_10_9, (MR_Integer) 0));
#line 397 "list.opt"
            MR_Box mercury__diet__Y_26 = (MR_hl_field(MR_mktag(0), mercury__diet__H_10_9, (MR_Integer) 1));

#line 962 "diet.m"
            {
#line 962 "diet.m"
              mercury__diet__insert_interval_4_p_0(mercury__diet__V_22_22, mercury__diet__X_25, mercury__diet__Y_26, mercury__diet__HeadVar__3_3, &mercury__diet__STATE_VARIABLE_A_15_15_13);
            }
#line 399 "list.opt"
            /* direct tailcall eliminated */
#line 399 "list.opt"
            {
#line 399 "list.opt"
              MR_Word mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__T_11_10;
#line 399 "list.opt"
              MR_Word mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__STATE_VARIABLE_A_15_15_13;

#line 399 "list.opt"
              mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 399 "list.opt"
              mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 399 "list.opt"
            }
#line 399 "list.opt"
            continue;
#line 397 "list.opt"
          }
#line 395 "list.opt"
      }
#line 395 "list.opt"
      break;
#line 395 "list.opt"
    }
#line 126 "list.int"
}

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 16 "ops.opt"
{
#line 41 "ops.opt"
  {
#line 41 "ops.opt"
    MR_bool mercury__diet__succeeded;

#line 41 "ops.opt"
    return (MR_Integer) 1200;
#line 41 "ops.opt"
  }
#line 16 "ops.opt"
}

#line 592 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(
#line 592 "diet.m"
  MR_Word mercury__diet__IsLeft_5,
#line 592 "diet.m"
  MR_Tuple mercury__diet__X_6,
#line 592 "diet.m"
  MR_Word mercury__diet__T0_7)
#line 592 "diet.m"
{
#line 598 "diet.m"
  {
#line 598 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 598 "diet.m"
    MR_Word mercury__diet__T_8;

#line 598 "diet.m"
    if ((mercury__diet__T0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 596 "diet.m"
      {
#line 596 "diet.m"
        MR_Word mercury__diet__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 596 "diet.m"
        MR_Word mercury__diet__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 597 "diet.m"
        {
#line 597 "diet.m"
          mercury__diet__T_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 597 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_8, 0) = ((MR_Box) (mercury__diet__X_6));
#line 597 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_8, 1) = ((MR_Box) ((MR_Integer) 1));
#line 597 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_8, 2) = ((MR_Box) (mercury__diet__V_16_16));
#line 597 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_8, 3) = ((MR_Box) (mercury__diet__V_17_17));
#line 597 "diet.m"
        }
#line 596 "diet.m"
      }
#line 598 "diet.m"
    else
#line 599 "diet.m"
      {
#line 599 "diet.m"
        MR_Tuple mercury__diet__VX_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_7, (MR_Integer) 0)));
#line 599 "diet.m"
        MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_7, (MR_Integer) 2)));
#line 599 "diet.m"
        MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_7, (MR_Integer) 3)));
#line 599 "diet.m"
        MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_7, (MR_Integer) 1)));

#line 603 "diet.m"
#line 603 "diet.m"
        switch (mercury__diet__IsLeft_5) {
#line 603 "diet.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 603 "diet.m"
          case (MR_Integer) 0:
#line 604 "diet.m"
            {
#line 604 "diet.m"
              MR_Word mercury__diet__V_13_13;

#line 605 "diet.m"
              {
#line 605 "diet.m"
                mercury__diet__V_13_13 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(mercury__diet__IsLeft_5, mercury__diet__X_6, mercury__diet__R_12);
              }
#line 605 "diet.m"
              {
#line 605 "diet.m"
                return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__VX_9, mercury__diet__L_11, mercury__diet__V_13_13);
              }
#line 604 "diet.m"
            }
#line 603 "diet.m"
            break;
#line 603 "diet.m"
          case (MR_Integer) 1:
#line 601 "diet.m"
            {
#line 601 "diet.m"
              MR_Word mercury__diet__V_14_14;

#line 602 "diet.m"
              {
#line 602 "diet.m"
                mercury__diet__V_14_14 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(mercury__diet__IsLeft_5, mercury__diet__X_6, mercury__diet__L_11);
              }
#line 602 "diet.m"
              {
#line 602 "diet.m"
                return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__VX_9, mercury__diet__V_14_14, mercury__diet__R_12);
              }
#line 601 "diet.m"
            }
#line 603 "diet.m"
            break;
#line 603 "diet.m"
        }
#line 599 "diet.m"
      }
#line 598 "diet.m"
    return mercury__diet__T_8;
#line 598 "diet.m"
  }
#line 592 "diet.m"
}

#line 524 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(
#line 524 "diet.m"
  MR_Tuple mercury__diet__X_5,
#line 524 "diet.m"
  MR_Word mercury__diet__L_6,
#line 524 "diet.m"
  MR_Word mercury__diet__R_7)
#line 524 "diet.m"
{
#line 526 "diet.m"
  {
#line 526 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 526 "diet.m"
    MR_Word mercury__diet__T_8;
#line 526 "diet.m"
    MR_Integer mercury__diet__HL_9;
#line 526 "diet.m"
    MR_Integer mercury__diet__HR_10;
#line 529 "diet.m"
    MR_Integer mercury__diet__V_28_28;

#line 513 "diet.m"
    if ((mercury__diet__L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
      mercury__diet__HL_9 = (MR_Integer) 0;
#line 513 "diet.m"
    else
#line 514 "diet.m"
      {
#line 514 "diet.m"
        MR_Tuple mercury__diet__V_57_57 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 0)));
#line 514 "diet.m"
        MR_Word mercury__diet__V_59_59;
#line 514 "diet.m"
        MR_Word mercury__diet__V_60_60;

#line 514 "diet.m"
        mercury__diet__HL_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 1)));
#line 514 "diet.m"
        mercury__diet__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 2)));
#line 514 "diet.m"
        mercury__diet__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 3)));
#line 514 "diet.m"
      }
#line 513 "diet.m"
    if ((mercury__diet__R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
      mercury__diet__HR_10 = (MR_Integer) 0;
#line 513 "diet.m"
    else
#line 514 "diet.m"
      {
#line 514 "diet.m"
        MR_Tuple mercury__diet__V_61_61 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 0)));
#line 514 "diet.m"
        MR_Word mercury__diet__V_63_63;
#line 514 "diet.m"
        MR_Word mercury__diet__V_64_64;

#line 514 "diet.m"
        mercury__diet__HR_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 1)));
#line 514 "diet.m"
        mercury__diet__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 2)));
#line 514 "diet.m"
        mercury__diet__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 3)));
#line 514 "diet.m"
      }
#line 529 "diet.m"
    mercury__diet__V_28_28 = (mercury__diet__HR_10 + (MR_Integer) 1);
#line 494 "diet.m"
    mercury__diet__succeeded = (mercury__diet__HL_9 > mercury__diet__V_28_28);
#line 547 "diet.m"
    if (mercury__diet__succeeded)
#line 533 "diet.m"
      if ((mercury__diet__L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 531 "diet.m"
        {
#line 532 "diet.m"
          {
#line 532 "diet.m"
            mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.balance\'/3", (MR_String) "L empty");
          }
#line 531 "diet.m"
        }
#line 533 "diet.m"
      else
#line 534 "diet.m"
        {
#line 534 "diet.m"
          MR_Tuple mercury__diet__LVX_11 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 0)));
#line 534 "diet.m"
          MR_Word mercury__diet__LL_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 2)));
#line 534 "diet.m"
          MR_Word mercury__diet__LR_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 3)));
#line 534 "diet.m"
          MR_Integer mercury__diet__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 1)));
#line 535 "diet.m"
          MR_Integer mercury__diet__V_30_30;
#line 535 "diet.m"
          MR_Integer mercury__diet__V_31_31;

#line 513 "diet.m"
          if ((mercury__diet__LL_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
            mercury__diet__V_30_30 = (MR_Integer) 0;
#line 513 "diet.m"
          else
#line 514 "diet.m"
            {
#line 514 "diet.m"
              MR_Tuple mercury__diet__V_67_67 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__LL_13, (MR_Integer) 0)));
#line 514 "diet.m"
              MR_Word mercury__diet__V_69_69;
#line 514 "diet.m"
              MR_Word mercury__diet__V_70_70;

#line 514 "diet.m"
              mercury__diet__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__LL_13, (MR_Integer) 1)));
#line 514 "diet.m"
              mercury__diet__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LL_13, (MR_Integer) 2)));
#line 514 "diet.m"
              mercury__diet__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LL_13, (MR_Integer) 3)));
#line 514 "diet.m"
            }
#line 513 "diet.m"
          if ((mercury__diet__LR_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
            mercury__diet__V_31_31 = (MR_Integer) 0;
#line 513 "diet.m"
          else
#line 514 "diet.m"
            {
#line 514 "diet.m"
              MR_Tuple mercury__diet__V_71_71 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 0)));
#line 514 "diet.m"
              MR_Word mercury__diet__V_73_73;
#line 514 "diet.m"
              MR_Word mercury__diet__V_74_74;

#line 514 "diet.m"
              mercury__diet__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 1)));
#line 514 "diet.m"
              mercury__diet__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 2)));
#line 514 "diet.m"
              mercury__diet__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 3)));
#line 514 "diet.m"
            }
#line 499 "diet.m"
          mercury__diet__succeeded = (mercury__diet__V_30_30 >= mercury__diet__V_31_31);
#line 537 "diet.m"
          if (mercury__diet__succeeded)
#line 536 "diet.m"
            {
#line 536 "diet.m"
              MR_Word mercury__diet__V_32_32;

#line 536 "diet.m"
              {
#line 536 "diet.m"
                mercury__diet__V_32_32 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__X_5, mercury__diet__LR_14, mercury__diet__R_7);
              }
#line 536 "diet.m"
              {
#line 536 "diet.m"
                return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__LVX_11, mercury__diet__LL_13, mercury__diet__V_32_32);
              }
#line 536 "diet.m"
            }
#line 537 "diet.m"
          else
#line 541 "diet.m"
          if ((mercury__diet__LR_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 539 "diet.m"
            {
#line 540 "diet.m"
              {
#line 540 "diet.m"
                mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.balance\'/3", (MR_String) "LR empty");
              }
#line 539 "diet.m"
            }
#line 541 "diet.m"
          else
#line 542 "diet.m"
            {
#line 542 "diet.m"
              MR_Tuple mercury__diet__LRX_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 0)));
#line 542 "diet.m"
              MR_Word mercury__diet__LRL_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 2)));
#line 542 "diet.m"
              MR_Word mercury__diet__LRR_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 3)));
#line 542 "diet.m"
              MR_Word mercury__diet__V_33_33;
#line 542 "diet.m"
              MR_Word mercury__diet__V_34_34;
#line 542 "diet.m"
              MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 1)));

#line 543 "diet.m"
              {
#line 543 "diet.m"
                mercury__diet__V_33_33 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__LVX_11, mercury__diet__LL_13, mercury__diet__LRL_17);
              }
#line 543 "diet.m"
              {
#line 543 "diet.m"
                mercury__diet__V_34_34 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__X_5, mercury__diet__LRR_18, mercury__diet__R_7);
              }
#line 543 "diet.m"
              {
#line 543 "diet.m"
                return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__LRX_15, mercury__diet__V_33_33, mercury__diet__V_34_34);
              }
#line 542 "diet.m"
            }
#line 534 "diet.m"
        }
#line 547 "diet.m"
    else
#line 565 "diet.m"
      {
#line 547 "diet.m"
        MR_Integer mercury__diet__V_41_41 = (mercury__diet__HL_9 + (MR_Integer) 1);

#line 494 "diet.m"
        mercury__diet__succeeded = (mercury__diet__HR_10 > mercury__diet__V_41_41);
#line 565 "diet.m"
        if (mercury__diet__succeeded)
#line 551 "diet.m"
          if ((mercury__diet__R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 549 "diet.m"
            {
#line 550 "diet.m"
              {
#line 550 "diet.m"
                mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.balance\'/3", (MR_String) "R empty");
              }
#line 549 "diet.m"
            }
#line 551 "diet.m"
          else
#line 552 "diet.m"
            {
#line 552 "diet.m"
              MR_Tuple mercury__diet__RVX_19 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 0)));
#line 552 "diet.m"
              MR_Word mercury__diet__RL_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 2)));
#line 552 "diet.m"
              MR_Word mercury__diet__RR_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 3)));
#line 552 "diet.m"
              MR_Integer mercury__diet__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 1)));
#line 553 "diet.m"
              MR_Integer mercury__diet__V_43_43;
#line 553 "diet.m"
              MR_Integer mercury__diet__V_44_44;

#line 513 "diet.m"
              if ((mercury__diet__RR_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
                mercury__diet__V_43_43 = (MR_Integer) 0;
#line 513 "diet.m"
              else
#line 514 "diet.m"
                {
#line 514 "diet.m"
                  MR_Tuple mercury__diet__V_79_79 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__RR_22, (MR_Integer) 0)));
#line 514 "diet.m"
                  MR_Word mercury__diet__V_81_81;
#line 514 "diet.m"
                  MR_Word mercury__diet__V_82_82;

#line 514 "diet.m"
                  mercury__diet__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__RR_22, (MR_Integer) 1)));
#line 514 "diet.m"
                  mercury__diet__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RR_22, (MR_Integer) 2)));
#line 514 "diet.m"
                  mercury__diet__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RR_22, (MR_Integer) 3)));
#line 514 "diet.m"
                }
#line 513 "diet.m"
              if ((mercury__diet__RL_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
                mercury__diet__V_44_44 = (MR_Integer) 0;
#line 513 "diet.m"
              else
#line 514 "diet.m"
                {
#line 514 "diet.m"
                  MR_Tuple mercury__diet__V_83_83 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 0)));
#line 514 "diet.m"
                  MR_Word mercury__diet__V_85_85;
#line 514 "diet.m"
                  MR_Word mercury__diet__V_86_86;

#line 514 "diet.m"
                  mercury__diet__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 1)));
#line 514 "diet.m"
                  mercury__diet__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 2)));
#line 514 "diet.m"
                  mercury__diet__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 3)));
#line 514 "diet.m"
                }
#line 499 "diet.m"
              mercury__diet__succeeded = (mercury__diet__V_43_43 >= mercury__diet__V_44_44);
#line 555 "diet.m"
              if (mercury__diet__succeeded)
#line 554 "diet.m"
                {
#line 554 "diet.m"
                  MR_Word mercury__diet__V_45_45;

#line 554 "diet.m"
                  {
#line 554 "diet.m"
                    mercury__diet__V_45_45 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__X_5, mercury__diet__L_6, mercury__diet__RL_21);
                  }
#line 554 "diet.m"
                  {
#line 554 "diet.m"
                    return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__RVX_19, mercury__diet__V_45_45, mercury__diet__RR_22);
                  }
#line 554 "diet.m"
                }
#line 555 "diet.m"
              else
#line 559 "diet.m"
              if ((mercury__diet__RL_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "diet.m"
                {
#line 558 "diet.m"
                  {
#line 558 "diet.m"
                    mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.balance\'/3", (MR_String) "RL empty");
                  }
#line 557 "diet.m"
                }
#line 559 "diet.m"
              else
#line 560 "diet.m"
                {
#line 560 "diet.m"
                  MR_Tuple mercury__diet__RLX_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 0)));
#line 560 "diet.m"
                  MR_Word mercury__diet__RLL_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 2)));
#line 560 "diet.m"
                  MR_Word mercury__diet__RLR_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 3)));
#line 560 "diet.m"
                  MR_Word mercury__diet__V_46_46;
#line 560 "diet.m"
                  MR_Word mercury__diet__V_47_47;
#line 560 "diet.m"
                  MR_Integer mercury__diet__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 1)));

#line 561 "diet.m"
                  {
#line 561 "diet.m"
                    mercury__diet__V_46_46 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__X_5, mercury__diet__L_6, mercury__diet__RLL_25);
                  }
#line 561 "diet.m"
                  {
#line 561 "diet.m"
                    mercury__diet__V_47_47 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__RVX_19, mercury__diet__RLR_26, mercury__diet__RR_22);
                  }
#line 561 "diet.m"
                  {
#line 561 "diet.m"
                    return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__RLX_23, mercury__diet__V_46_46, mercury__diet__V_47_47);
                  }
#line 560 "diet.m"
                }
#line 552 "diet.m"
            }
#line 565 "diet.m"
        else
#line 566 "diet.m"
          {
#line 566 "diet.m"
            MR_Integer mercury__diet__HT_27;
#line 566 "diet.m"
            MR_Integer mercury__diet__V_55_55;

#line 36 "int.opt"
            mercury__diet__succeeded = (mercury__diet__HL_9 > mercury__diet__HR_10);
#line 39 "int.opt"
            if (mercury__diet__succeeded)
#line 38 "int.opt"
              mercury__diet__V_55_55 = mercury__diet__HL_9;
#line 39 "int.opt"
            else
#line 40 "int.opt"
              mercury__diet__V_55_55 = mercury__diet__HR_10;
#line 566 "diet.m"
            mercury__diet__HT_27 = ((MR_Integer) 1 + mercury__diet__V_55_55);
#line 567 "diet.m"
            {
#line 567 "diet.m"
              mercury__diet__T_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 567 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__T_8, 0) = ((MR_Box) (mercury__diet__X_5));
#line 567 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__T_8, 1) = ((MR_Box) (mercury__diet__HT_27));
#line 567 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__T_8, 2) = ((MR_Box) (mercury__diet__L_6));
#line 567 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__T_8, 3) = ((MR_Box) (mercury__diet__R_7));
#line 567 "diet.m"
            }
#line 566 "diet.m"
          }
#line 565 "diet.m"
      }
#line 526 "diet.m"
    return mercury__diet__T_8;
#line 526 "diet.m"
  }
#line 524 "diet.m"
}

#line 520 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(
#line 520 "diet.m"
  MR_Tuple mercury__diet__X_5,
#line 520 "diet.m"
  MR_Word mercury__diet__L_6,
#line 520 "diet.m"
  MR_Word mercury__diet__R_7)
#line 520 "diet.m"
{
#line 522 "diet.m"
  {
#line 522 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 522 "diet.m"
    MR_Word mercury__diet__HeadVar__4_4;
#line 522 "diet.m"
    MR_Integer mercury__diet__V_8_8;
#line 522 "diet.m"
    MR_Integer mercury__diet__V_13_13;
#line 522 "diet.m"
    MR_Integer mercury__diet__V_14_14;
#line 522 "diet.m"
    MR_Integer mercury__diet__V_15_15;

#line 513 "diet.m"
    if ((mercury__diet__L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
      mercury__diet__V_14_14 = (MR_Integer) 0;
#line 513 "diet.m"
    else
#line 514 "diet.m"
      {
#line 514 "diet.m"
        MR_Tuple mercury__diet__V_16_16 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 0)));
#line 514 "diet.m"
        MR_Word mercury__diet__V_18_18;
#line 514 "diet.m"
        MR_Word mercury__diet__V_19_19;

#line 514 "diet.m"
        mercury__diet__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 1)));
#line 514 "diet.m"
        mercury__diet__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 2)));
#line 514 "diet.m"
        mercury__diet__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 3)));
#line 514 "diet.m"
      }
#line 513 "diet.m"
    if ((mercury__diet__R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
      mercury__diet__V_15_15 = (MR_Integer) 0;
#line 513 "diet.m"
    else
#line 514 "diet.m"
      {
#line 514 "diet.m"
        MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 0)));
#line 514 "diet.m"
        MR_Word mercury__diet__V_22_22;
#line 514 "diet.m"
        MR_Word mercury__diet__V_23_23;

#line 514 "diet.m"
        mercury__diet__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 1)));
#line 514 "diet.m"
        mercury__diet__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 2)));
#line 514 "diet.m"
        mercury__diet__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 3)));
#line 514 "diet.m"
      }
#line 36 "int.opt"
    mercury__diet__succeeded = (mercury__diet__V_14_14 > mercury__diet__V_15_15);
#line 39 "int.opt"
    if (mercury__diet__succeeded)
#line 38 "int.opt"
      mercury__diet__V_13_13 = mercury__diet__V_14_14;
#line 39 "int.opt"
    else
#line 40 "int.opt"
      mercury__diet__V_13_13 = mercury__diet__V_15_15;
#line 518 "diet.m"
    mercury__diet__V_8_8 = ((MR_Integer) 1 + mercury__diet__V_13_13);
#line 522 "diet.m"
    {
#line 522 "diet.m"
      mercury__diet__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 522 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__4_4, 0) = ((MR_Box) (mercury__diet__X_5));
#line 522 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__4_4, 1) = ((MR_Box) (mercury__diet__V_8_8));
#line 522 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__4_4, 2) = ((MR_Box) (mercury__diet__L_6));
#line 522 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__4_4, 3) = ((MR_Box) (mercury__diet__R_7));
#line 522 "diet.m"
    }
#line 522 "diet.m"
    return mercury__diet__HeadVar__4_4;
#line 522 "diet.m"
  }
#line 520 "diet.m"
}

#line 451 "diet.m"
MR_Integer MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__predecessor_1_1_f_0(
#line 451 "diet.m"
  MR_Integer mercury__diet__X_3)
#line 451 "diet.m"
{
#line 451 "diet.m"
  {
#line 451 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 451 "diet.m"
    MR_Integer mercury__diet__HeadVar__2_2 = (mercury__diet__X_3 - (MR_Integer) 1);

#line 451 "diet.m"
    return mercury__diet__HeadVar__2_2;
#line 451 "diet.m"
  }
#line 451 "diet.m"
}

#line 450 "diet.m"
MR_Integer MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__successor_1_1_f_0(
#line 450 "diet.m"
  MR_Integer mercury__diet__X_3)
#line 450 "diet.m"
{
#line 450 "diet.m"
  {
#line 450 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 450 "diet.m"
    MR_Integer mercury__diet__HeadVar__2_2 = (mercury__diet__X_3 + (MR_Integer) 1);

#line 450 "diet.m"
    return mercury__diet__HeadVar__2_2;
#line 450 "diet.m"
  }
#line 450 "diet.m"
}

#line 449 "diet.m"
MR_bool MR_CALL 
mercury__diet__ClassMethod_for_diet__diet_element____int__arity0______diet__less_than_2_2_p_0(
#line 449 "diet.m"
  MR_Integer mercury__diet__X_3,
#line 449 "diet.m"
  MR_Integer mercury__diet__Y_4)
#line 449 "diet.m"
{
#line 449 "diet.m"
  {
#line 449 "diet.m"
    MR_bool mercury__diet__succeeded = (mercury__diet__X_3 < mercury__diet__Y_4);

#line 449 "diet.m"
    return mercury__diet__succeeded;
#line 449 "diet.m"
  }
#line 449 "diet.m"
}

#line 441 "diet.m"
void MR_CALL 
mercury__diet____Compare____interval_1_0(
#line 441 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_6,
#line 441 "diet.m"
  MR_Word * mercury__diet__HeadVar__1_1,
#line 441 "diet.m"
  MR_Tuple mercury__diet__HeadVar__2_2,
#line 441 "diet.m"
  MR_Tuple mercury__diet__HeadVar__3_3)
#line 441 "diet.m"
{
#line 441 "diet.m"
  {
#line 441 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 441 "diet.m"
    MR_Word mercury__diet__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 441 "diet.m"
    MR_Word mercury__diet__TypeInfo_9_9;
#line 441 "diet.m"
    MR_Tuple mercury__diet__Cast_HeadVar1_4 = mercury__diet__HeadVar__2_2;
#line 441 "diet.m"
    MR_Tuple mercury__diet__Cast_HeadVar2_5 = mercury__diet__HeadVar__3_3;

#line 3223 "diet.c"
    {
#line 3225 "diet.c"
      mercury__diet__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3227 "diet.c"
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_9_9, 0) = ((MR_Box) (mercury__diet__TypeCtorInfo_7_7));
#line 3229 "diet.c"
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_9_9, 1) = ((MR_Box) ((MR_Integer) 2));
#line 3231 "diet.c"
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_9_9, 2) = ((MR_Box) (mercury__diet__TypeInfo_for_T_6));
#line 3233 "diet.c"
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_9_9, 3) = ((MR_Box) (mercury__diet__TypeInfo_for_T_6));
#line 3235 "diet.c"
    }
#line 441 "diet.m"
    {
#line 441 "diet.m"
      mercury__builtin__compare_3_p_0(mercury__diet__TypeInfo_9_9, mercury__diet__HeadVar__1_1, ((MR_Box) (mercury__diet__Cast_HeadVar1_4)), ((MR_Box) (mercury__diet__Cast_HeadVar2_5)));
#line 441 "diet.m"
      return;
    }
#line 441 "diet.m"
  }
#line 441 "diet.m"
}

#line 441 "diet.m"
MR_bool MR_CALL 
mercury__diet____Unify____interval_1_0(
#line 441 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_5,
#line 441 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 441 "diet.m"
  MR_Tuple mercury__diet__HeadVar__2_2)
#line 441 "diet.m"
{
#line 441 "diet.m"
  {
#line 441 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 441 "diet.m"
    MR_Word mercury__diet__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 441 "diet.m"
    MR_Word mercury__diet__TypeInfo_8_8;
#line 441 "diet.m"
    MR_Tuple mercury__diet__Cast_HeadVar1_3 = mercury__diet__HeadVar__1_1;
#line 441 "diet.m"
    MR_Tuple mercury__diet__Cast_HeadVar2_4 = mercury__diet__HeadVar__2_2;

#line 3273 "diet.c"
    {
#line 3275 "diet.c"
      mercury__diet__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3277 "diet.c"
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_8_8, 0) = ((MR_Box) (mercury__diet__TypeCtorInfo_6_6));
#line 3279 "diet.c"
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_8_8, 1) = ((MR_Box) ((MR_Integer) 2));
#line 3281 "diet.c"
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_8_8, 2) = ((MR_Box) (mercury__diet__TypeInfo_for_T_5));
#line 3283 "diet.c"
      MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_8_8, 3) = ((MR_Box) (mercury__diet__TypeInfo_for_T_5));
#line 3285 "diet.c"
    }
#line 441 "diet.m"
    {
#line 441 "diet.m"
      return mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_8_8, ((MR_Box) (mercury__diet__Cast_HeadVar1_3)), ((MR_Box) (mercury__diet__Cast_HeadVar2_4)));
    }
#line 441 "diet.m"
    return mercury__diet__succeeded;
#line 441 "diet.m"
  }
#line 441 "diet.m"
}

#line 428 "diet.m"
void MR_CALL 
mercury__diet____Compare____diet_1_0(
#line 428 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_25,
#line 428 "diet.m"
  MR_Word * mercury__diet__HeadVar__1_1,
#line 428 "diet.m"
  MR_Word mercury__diet__HeadVar__2_2,
#line 428 "diet.m"
  MR_Word mercury__diet__HeadVar__3_3)
#line 428 "diet.m"
{
#line 428 "diet.m"
  while (MR_TRUE)
#line 428 "diet.m"
    {
#line 428 "diet.m"
      /* tailcall optimized into a loop */
#line 428 "diet.m"
      {
#line 428 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 428 "diet.m"
        MR_Integer mercury__diet__CastX_23 = (MR_Integer) mercury__diet__HeadVar__2_2;
#line 428 "diet.m"
        MR_Integer mercury__diet__CastY_24 = (MR_Integer) mercury__diet__HeadVar__3_3;

#line 428 "diet.m"
        mercury__diet__succeeded = (mercury__diet__CastX_23 == mercury__diet__CastY_24);
#line 428 "diet.m"
        if (mercury__diet__succeeded)
#line 3331 "diet.c"
          *mercury__diet__HeadVar__1_1 = (MR_Integer) 0;
#line 428 "diet.m"
        else
#line 428 "diet.m"
        if ((mercury__diet__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "diet.m"
          if ((mercury__diet__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "diet.m"
            *mercury__diet__HeadVar__1_1 = (MR_Integer) 0;
#line 428 "diet.m"
          else
#line 3343 "diet.c"
            *mercury__diet__HeadVar__1_1 = (MR_Integer) 1;
#line 428 "diet.m"
        else
#line 428 "diet.m"
          {
#line 428 "diet.m"
            MR_Word mercury__diet__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 3)));
#line 428 "diet.m"
            MR_Word mercury__diet__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 2)));
#line 428 "diet.m"
            MR_Integer mercury__diet__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 428 "diet.m"
            MR_Tuple mercury__diet__V_37_37 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));

#line 428 "diet.m"
            if ((mercury__diet__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3360 "diet.c"
              *mercury__diet__HeadVar__1_1 = (MR_Integer) 2;
#line 428 "diet.m"
            else
#line 428 "diet.m"
              {
#line 428 "diet.m"
                MR_Tuple mercury__diet__V_16_16 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__3_3, (MR_Integer) 0)));
#line 428 "diet.m"
                MR_Integer mercury__diet__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__3_3, (MR_Integer) 1)));
#line 428 "diet.m"
                MR_Word mercury__diet__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__3_3, (MR_Integer) 2)));
#line 428 "diet.m"
                MR_Word mercury__diet__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__3_3, (MR_Integer) 3)));
#line 428 "diet.m"
                MR_Word mercury__diet__V_20_20;
#line 428 "diet.m"
                MR_Word mercury__diet__TypeCtorInfo_26_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 428 "diet.m"
                MR_Word mercury__diet__TypeInfo_28_28;

#line 3381 "diet.c"
                {
#line 3383 "diet.c"
                  mercury__diet__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3385 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_28_28, 0) = ((MR_Box) (mercury__diet__TypeCtorInfo_26_26));
#line 3387 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_28_28, 1) = ((MR_Box) ((MR_Integer) 2));
#line 3389 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_28_28, 2) = ((MR_Box) (mercury__diet__TypeInfo_for_T_25));
#line 3391 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_28_28, 3) = ((MR_Box) (mercury__diet__TypeInfo_for_T_25));
#line 3393 "diet.c"
                }
#line 428 "diet.m"
                {
#line 428 "diet.m"
                  mercury__builtin__compare_3_p_0(mercury__diet__TypeInfo_28_28, &mercury__diet__V_20_20, ((MR_Box) (mercury__diet__V_37_37)), ((MR_Box) (mercury__diet__V_16_16)));
                }
#line 3400 "diet.c"
                mercury__diet__succeeded = (mercury__diet__V_20_20 == (MR_Integer) 0);
#line 428 "diet.m"
                mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 428 "diet.m"
                if (mercury__diet__succeeded)
#line 428 "diet.m"
                  *mercury__diet__HeadVar__1_1 = mercury__diet__V_20_20;
#line 428 "diet.m"
                else
#line 428 "diet.m"
                  {
#line 428 "diet.m"
                    MR_Word mercury__diet__V_21_21;

#line 35 "private_builtin.opt"
                    mercury__diet__succeeded = (mercury__diet__V_36_36 < mercury__diet__V_17_17);
#line 38 "private_builtin.opt"
                    if (mercury__diet__succeeded)
#line 37 "private_builtin.opt"
                      mercury__diet__V_21_21 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
                    else
#line 43 "private_builtin.opt"
                      {
#line 40 "private_builtin.opt"
                        mercury__diet__succeeded = (mercury__diet__V_36_36 == mercury__diet__V_17_17);
#line 43 "private_builtin.opt"
                        if (mercury__diet__succeeded)
#line 42 "private_builtin.opt"
                          mercury__diet__V_21_21 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
                        else
#line 44 "private_builtin.opt"
                          mercury__diet__V_21_21 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
                      }
#line 3437 "diet.c"
                    mercury__diet__succeeded = (mercury__diet__V_21_21 == (MR_Integer) 0);
#line 428 "diet.m"
                    mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 428 "diet.m"
                    if (mercury__diet__succeeded)
#line 428 "diet.m"
                      *mercury__diet__HeadVar__1_1 = mercury__diet__V_21_21;
#line 428 "diet.m"
                    else
#line 428 "diet.m"
                      {
#line 428 "diet.m"
                        MR_Word mercury__diet__V_22_22;

#line 428 "diet.m"
                        {
#line 428 "diet.m"
                          mercury__diet____Compare____diet_1_0(mercury__diet__TypeInfo_for_T_25, &mercury__diet__V_22_22, mercury__diet__V_35_35, mercury__diet__V_18_18);
                        }
#line 3457 "diet.c"
                        mercury__diet__succeeded = (mercury__diet__V_22_22 == (MR_Integer) 0);
#line 428 "diet.m"
                        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 428 "diet.m"
                        if (mercury__diet__succeeded)
#line 428 "diet.m"
                          *mercury__diet__HeadVar__1_1 = mercury__diet__V_22_22;
#line 428 "diet.m"
                        else
#line 428 "diet.m"
                          {
#line 428 "diet.m"
                            /* direct tailcall eliminated */
#line 428 "diet.m"
                            {
#line 428 "diet.m"
                              MR_Word mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__V_34_34;
#line 428 "diet.m"
                              MR_Word mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__V_19_19;

#line 428 "diet.m"
                              mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 428 "diet.m"
                              mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 428 "diet.m"
                            }
#line 428 "diet.m"
                            continue;
#line 428 "diet.m"
                          }
#line 428 "diet.m"
                      }
#line 428 "diet.m"
                  }
#line 428 "diet.m"
              }
#line 428 "diet.m"
          }
#line 428 "diet.m"
      }
#line 428 "diet.m"
      break;
#line 428 "diet.m"
    }
#line 428 "diet.m"
}

#line 428 "diet.m"
MR_bool MR_CALL 
mercury__diet____Unify____diet_1_0(
#line 428 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_15,
#line 428 "diet.m"
  MR_Word mercury__diet__HeadVar__1_1,
#line 428 "diet.m"
  MR_Word mercury__diet__HeadVar__2_2)
#line 428 "diet.m"
{
#line 428 "diet.m"
  while (MR_TRUE)
#line 428 "diet.m"
    {
#line 428 "diet.m"
      /* tailcall optimized into a loop */
#line 428 "diet.m"
      {
#line 428 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 428 "diet.m"
        MR_Integer mercury__diet__CastX_13 = (MR_Integer) mercury__diet__HeadVar__1_1;
#line 428 "diet.m"
        MR_Integer mercury__diet__CastY_14 = (MR_Integer) mercury__diet__HeadVar__2_2;

#line 428 "diet.m"
        mercury__diet__succeeded = (mercury__diet__CastX_13 == mercury__diet__CastY_14);
#line 428 "diet.m"
        if (mercury__diet__succeeded)
#line 428 "diet.m"
          mercury__diet__succeeded = MR_TRUE;
#line 428 "diet.m"
        else
#line 428 "diet.m"
        if ((mercury__diet__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "diet.m"
          {
#line 428 "diet.m"
            MR_Integer mercury__diet__CastX_3 = (MR_Integer) mercury__diet__HeadVar__1_1;
#line 428 "diet.m"
            MR_Integer mercury__diet__CastY_4 = (MR_Integer) mercury__diet__HeadVar__2_2;

#line 428 "diet.m"
            mercury__diet__succeeded = (mercury__diet__CastY_4 == mercury__diet__CastX_3);
#line 428 "diet.m"
          }
#line 428 "diet.m"
        else
#line 428 "diet.m"
          {
#line 428 "diet.m"
            MR_Word mercury__diet__TypeCtorInfo_16_16;
#line 428 "diet.m"
            MR_Word mercury__diet__TypeInfo_18_18;
#line 428 "diet.m"
            MR_Tuple mercury__diet__V_5_5 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 0)));
#line 428 "diet.m"
            MR_Integer mercury__diet__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 1)));
#line 428 "diet.m"
            MR_Word mercury__diet__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 2)));
#line 428 "diet.m"
            MR_Word mercury__diet__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 3)));
#line 428 "diet.m"
            MR_Tuple mercury__diet__V_9_9;
#line 428 "diet.m"
            MR_Integer mercury__diet__V_10_10;
#line 428 "diet.m"
            MR_Word mercury__diet__V_11_11;
#line 428 "diet.m"
            MR_Word mercury__diet__V_12_12;
#line 428 "diet.m"
            MR_Integer mercury__diet__PolyConst2_17;

#line 428 "diet.m"
            mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 428 "diet.m"
            if (mercury__diet__succeeded)
#line 428 "diet.m"
              {
#line 428 "diet.m"
                mercury__diet__V_9_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
#line 428 "diet.m"
                mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 428 "diet.m"
                mercury__diet__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 2)));
#line 428 "diet.m"
                mercury__diet__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 3)));
#line 3593 "diet.c"
                mercury__diet__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 3595 "diet.c"
                mercury__diet__PolyConst2_17 = (MR_Integer) 2;
#line 3597 "diet.c"
                {
#line 3599 "diet.c"
                  mercury__diet__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3601 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_18_18, 0) = ((MR_Box) (mercury__diet__TypeCtorInfo_16_16));
#line 3603 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_18_18, 1) = ((MR_Box) (mercury__diet__PolyConst2_17));
#line 3605 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_18_18, 2) = ((MR_Box) (mercury__diet__TypeInfo_for_T_15));
#line 3607 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_18_18, 3) = ((MR_Box) (mercury__diet__TypeInfo_for_T_15));
#line 3609 "diet.c"
                }
#line 3611 "diet.c"
                {
#line 3613 "diet.c"
                  mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_18_18, ((MR_Box) (mercury__diet__V_5_5)), ((MR_Box) (mercury__diet__V_9_9)));
                }
#line 428 "diet.m"
                if (mercury__diet__succeeded)
#line 428 "diet.m"
                  {
#line 3620 "diet.c"
                    mercury__diet__succeeded = (mercury__diet__V_6_6 == mercury__diet__V_10_10);
#line 428 "diet.m"
                    if (mercury__diet__succeeded)
#line 428 "diet.m"
                      {
#line 3626 "diet.c"
                        {
#line 3628 "diet.c"
                          mercury__diet__succeeded = mercury__diet____Unify____diet_1_0(mercury__diet__TypeInfo_for_T_15, mercury__diet__V_7_7, mercury__diet__V_11_11);
                        }
#line 428 "diet.m"
                        if (mercury__diet__succeeded)
#line 3633 "diet.c"
                          {
#line 3635 "diet.c"
                            /* direct tailcall eliminated */
#line 3637 "diet.c"
                            {
#line 3639 "diet.c"
                              MR_Word mercury__diet__HeadVar__1__tmp_copy_1 = mercury__diet__V_8_8;
#line 3641 "diet.c"
                              MR_Word mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__V_12_12;

#line 3644 "diet.c"
                              mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 3646 "diet.c"
                              mercury__diet__HeadVar__1_1 = mercury__diet__HeadVar__1__tmp_copy_1;
#line 3648 "diet.c"
                            }
#line 3650 "diet.c"
                            continue;
#line 3652 "diet.c"
                          }
#line 428 "diet.m"
                      }
#line 428 "diet.m"
                  }
#line 428 "diet.m"
              }
#line 428 "diet.m"
          }
#line 428 "diet.m"
        return mercury__diet__succeeded;
#line 428 "diet.m"
      }
#line 428 "diet.m"
      break;
#line 428 "diet.m"
    }
#line 428 "diet.m"
}

#line 1793 "diet.m"
void MR_CALL 
mercury__diet__cons_interval_4_p_0(
#line 1793 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_9,
#line 1793 "diet.m"
  MR_Box mercury__diet__X_5,
#line 1793 "diet.m"
  MR_Box mercury__diet__Y_6,
#line 1793 "diet.m"
  MR_Word mercury__diet__L_7,
#line 1793 "diet.m"
  MR_Word * mercury__diet__HeadVar__4_4)
#line 1793 "diet.m"
{
#line 1796 "diet.m"
  {
#line 1796 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1796 "diet.m"
    MR_Tuple mercury__diet__V_8_8;

#line 1796 "diet.m"
    {
#line 1796 "diet.m"
      mercury__diet__V_8_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1796 "diet.m"
      MR_hl_field(MR_mktag(0), mercury__diet__V_8_8, 0) = mercury__diet__X_5;
#line 1796 "diet.m"
      MR_hl_field(MR_mktag(0), mercury__diet__V_8_8, 1) = mercury__diet__Y_6;
#line 1796 "diet.m"
    }
#line 1796 "diet.m"
    {
#line 1796 "diet.m"
      MR_Word base;
#line 1796 "diet.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1796 "diet.m"
      *mercury__diet__HeadVar__4_4 = base;
#line 1796 "diet.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_8_8));
#line 1796 "diet.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__L_7));
#line 1796 "diet.m"
    }
#line 1796 "diet.m"
  }
#line 1793 "diet.m"
}

#line 1745 "diet.m"
MR_bool MR_CALL 
mercury__diet__all_true_interval_3_p_0(
#line 1745 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
#line 1745 "diet.m"
  MR_Word mercury__diet__P_4,
#line 1745 "diet.m"
  MR_Box mercury__diet__Lo_5,
#line 1745 "diet.m"
  MR_Box mercury__diet__Hi_6)
#line 1745 "diet.m"
{
#line 1752 "diet.m"
  while (MR_TRUE)
#line 1752 "diet.m"
    {
#line 1752 "diet.m"
      /* tailcall optimized into a loop */
#line 1752 "diet.m"
      {
#line 1752 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 3747 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_8, (MR_Integer) 0)), (MR_Integer) 5)));

#line 3750 "diet.c"
        {
#line 3752 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_8), mercury__diet__Hi_6, mercury__diet__Lo_5);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1752 "diet.m"
        if (mercury__diet__succeeded)
#line 1750 "diet.m"
          {
#line 1750 "diet.m"
            MR_Box mercury__diet__V_7_7;
#line 1750 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__diet__P_4, (MR_Integer) 1)));
#line 3765 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1750 "diet.m"
            {
#line 1750 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_4), mercury__diet__Lo_5);
            }
#line 1750 "diet.m"
            if (mercury__diet__succeeded)
#line 1750 "diet.m"
              {
#line 3777 "diet.c"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_8, (MR_Integer) 0)), (MR_Integer) 6)));
#line 3779 "diet.c"
                {
#line 3781 "diet.c"
                  mercury__diet__V_7_7 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_8), mercury__diet__Lo_5);
                }
#line 1751 "diet.m"
                /* direct tailcall eliminated */
#line 1751 "diet.m"
                {
#line 1751 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_5 = mercury__diet__V_7_7;

#line 1751 "diet.m"
                  mercury__diet__Lo_5 = mercury__diet__Lo__tmp_copy_5;
#line 1751 "diet.m"
                }
#line 1751 "diet.m"
                continue;
#line 1750 "diet.m"
              }
#line 1750 "diet.m"
          }
#line 1752 "diet.m"
        else
#line 1753 "diet.m"
          mercury__diet__succeeded = MR_TRUE;
#line 1752 "diet.m"
        return mercury__diet__succeeded;
#line 1752 "diet.m"
      }
#line 1752 "diet.m"
      break;
#line 1752 "diet.m"
    }
#line 1745 "diet.m"
}

#line 1723 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_down_5_p_5(
#line 1723 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_16,
#line 1723 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1723 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1723 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1723 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1723 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
#line 1723 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
#line 1723 "diet.m"
{
#line 1729 "diet.m"
  while (MR_TRUE)
#line 1729 "diet.m"
    {
#line 1729 "diet.m"
      /* tailcall optimized into a loop */
#line 1729 "diet.m"
      {
#line 1729 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 3845 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 3848 "diet.c"
        {
#line 3850 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1729 "diet.m"
        if (mercury__diet__succeeded)
#line 1727 "diet.m"
          {
#line 1727 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
#line 1727 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1727 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 3865 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1727 "diet.m"
            {
#line 1727 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_12_12);
            }
#line 1727 "diet.m"
            if (mercury__diet__succeeded)
#line 1727 "diet.m"
              {
#line 3877 "diet.c"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 3879 "diet.c"
                {
#line 3881 "diet.c"
                  mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
                }
#line 1728 "diet.m"
                /* direct tailcall eliminated */
#line 1728 "diet.m"
                {
#line 1728 "diet.m"
                  MR_Box mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_13_13;
#line 1728 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_12_12;

#line 1728 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1728 "diet.m"
                  mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1728 "diet.m"
                }
#line 1728 "diet.m"
                continue;
#line 1727 "diet.m"
              }
#line 1727 "diet.m"
          }
#line 1729 "diet.m"
        else
#line 1729 "diet.m"
          {
#line 1729 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1729 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1729 "diet.m"
          }
#line 1729 "diet.m"
        return mercury__diet__succeeded;
#line 1729 "diet.m"
      }
#line 1729 "diet.m"
      break;
#line 1729 "diet.m"
    }
#line 1723 "diet.m"
}

#line 1722 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_down_5_p_4(
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
#line 1729 "diet.m"
  while (MR_TRUE)
#line 1729 "diet.m"
    {
#line 1729 "diet.m"
      /* tailcall optimized into a loop */
#line 1729 "diet.m"
      {
#line 1729 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 3955 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 3958 "diet.c"
        {
#line 3960 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1729 "diet.m"
        if (mercury__diet__succeeded)
#line 1727 "diet.m"
          {
#line 1727 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
#line 1727 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1727 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 3975 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1727 "diet.m"
            {
#line 1727 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_12_12);
            }
#line 1727 "diet.m"
            if (mercury__diet__succeeded)
#line 1727 "diet.m"
              {
#line 3987 "diet.c"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 3989 "diet.c"
                {
#line 3991 "diet.c"
                  mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
                }
#line 1728 "diet.m"
                /* direct tailcall eliminated */
#line 1728 "diet.m"
                {
#line 1728 "diet.m"
                  MR_Box mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_13_13;
#line 1728 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_12_12;

#line 1728 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1728 "diet.m"
                  mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1728 "diet.m"
                }
#line 1728 "diet.m"
                continue;
#line 1727 "diet.m"
              }
#line 1727 "diet.m"
          }
#line 1729 "diet.m"
        else
#line 1729 "diet.m"
          {
#line 1729 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1729 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1729 "diet.m"
          }
#line 1729 "diet.m"
        return mercury__diet__succeeded;
#line 1729 "diet.m"
      }
#line 1729 "diet.m"
      break;
#line 1729 "diet.m"
    }
#line 1722 "diet.m"
}

#line 1721 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_down_5_p_3(
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
#line 1729 "diet.m"
  while (MR_TRUE)
#line 1729 "diet.m"
    {
#line 1729 "diet.m"
      /* tailcall optimized into a loop */
#line 1729 "diet.m"
      {
#line 1729 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 4065 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4068 "diet.c"
        {
#line 4070 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1729 "diet.m"
        if (mercury__diet__succeeded)
#line 1727 "diet.m"
          {
#line 1727 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
#line 1727 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1727 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 4085 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1727 "diet.m"
            {
#line 1727 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_12_12);
            }
#line 1727 "diet.m"
            if (mercury__diet__succeeded)
#line 1727 "diet.m"
              {
#line 4097 "diet.c"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 4099 "diet.c"
                {
#line 4101 "diet.c"
                  mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
                }
#line 1728 "diet.m"
                /* direct tailcall eliminated */
#line 1728 "diet.m"
                {
#line 1728 "diet.m"
                  MR_Box mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_13_13;
#line 1728 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_12_12;

#line 1728 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1728 "diet.m"
                  mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1728 "diet.m"
                }
#line 1728 "diet.m"
                continue;
#line 1727 "diet.m"
              }
#line 1727 "diet.m"
          }
#line 1729 "diet.m"
        else
#line 1729 "diet.m"
          {
#line 1729 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1729 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1729 "diet.m"
          }
#line 1729 "diet.m"
        return mercury__diet__succeeded;
#line 1729 "diet.m"
      }
#line 1729 "diet.m"
      break;
#line 1729 "diet.m"
    }
#line 1721 "diet.m"
}

#line 1720 "diet.m"
void MR_CALL 
mercury__diet__fold_down_5_p_2(
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
#line 1729 "diet.m"
  while (MR_TRUE)
#line 1729 "diet.m"
    {
#line 1729 "diet.m"
      /* tailcall optimized into a loop */
#line 1729 "diet.m"
      {
#line 1729 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 4175 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4178 "diet.c"
        {
#line 4180 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1729 "diet.m"
        if (mercury__diet__succeeded)
#line 1727 "diet.m"
          {
#line 1727 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
#line 1727 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1727 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 4195 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1727 "diet.m"
            {
#line 1727 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_12_12);
            }
#line 4203 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 4205 "diet.c"
            {
#line 4207 "diet.c"
              mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
            }
#line 1728 "diet.m"
            /* direct tailcall eliminated */
#line 1728 "diet.m"
            {
#line 1728 "diet.m"
              MR_Box mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_13_13;
#line 1728 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_12_12;

#line 1728 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1728 "diet.m"
              mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1728 "diet.m"
            }
#line 1728 "diet.m"
            continue;
#line 1727 "diet.m"
          }
#line 1729 "diet.m"
        else
#line 1729 "diet.m"
          *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1729 "diet.m"
      }
#line 1729 "diet.m"
      break;
#line 1729 "diet.m"
    }
#line 1720 "diet.m"
}

#line 1719 "diet.m"
void MR_CALL 
mercury__diet__fold_down_5_p_1(
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
#line 1729 "diet.m"
  while (MR_TRUE)
#line 1729 "diet.m"
    {
#line 1729 "diet.m"
      /* tailcall optimized into a loop */
#line 1729 "diet.m"
      {
#line 1729 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 4271 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4274 "diet.c"
        {
#line 4276 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1729 "diet.m"
        if (mercury__diet__succeeded)
#line 1727 "diet.m"
          {
#line 1727 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
#line 1727 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1727 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 4291 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1727 "diet.m"
            {
#line 1727 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_12_12);
            }
#line 4299 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 4301 "diet.c"
            {
#line 4303 "diet.c"
              mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
            }
#line 1728 "diet.m"
            /* direct tailcall eliminated */
#line 1728 "diet.m"
            {
#line 1728 "diet.m"
              MR_Box mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_13_13;
#line 1728 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_12_12;

#line 1728 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1728 "diet.m"
              mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1728 "diet.m"
            }
#line 1728 "diet.m"
            continue;
#line 1727 "diet.m"
          }
#line 1729 "diet.m"
        else
#line 1729 "diet.m"
          *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1729 "diet.m"
      }
#line 1729 "diet.m"
      break;
#line 1729 "diet.m"
    }
#line 1719 "diet.m"
}

#line 1718 "diet.m"
void MR_CALL 
mercury__diet__fold_down_5_p_0(
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
#line 1729 "diet.m"
  while (MR_TRUE)
#line 1729 "diet.m"
    {
#line 1729 "diet.m"
      /* tailcall optimized into a loop */
#line 1729 "diet.m"
      {
#line 1729 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 4367 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4370 "diet.c"
        {
#line 4372 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1729 "diet.m"
        if (mercury__diet__succeeded)
#line 1727 "diet.m"
          {
#line 1727 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_12_12;
#line 1727 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1727 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 4387 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1727 "diet.m"
            {
#line 1727 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Hi_8, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_12_12);
            }
#line 4395 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 4397 "diet.c"
            {
#line 4399 "diet.c"
              mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8);
            }
#line 1728 "diet.m"
            /* direct tailcall eliminated */
#line 1728 "diet.m"
            {
#line 1728 "diet.m"
              MR_Box mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_13_13;
#line 1728 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_12_12;

#line 1728 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1728 "diet.m"
              mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1728 "diet.m"
            }
#line 1728 "diet.m"
            continue;
#line 1727 "diet.m"
          }
#line 1729 "diet.m"
        else
#line 1729 "diet.m"
          *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1729 "diet.m"
      }
#line 1729 "diet.m"
      break;
#line 1729 "diet.m"
    }
#line 1718 "diet.m"
}

#line 1687 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up5_13_p_5(
#line 1687 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 1687 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 1687 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 1687 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 1687 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_48,
#line 1687 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
#line 1687 "diet.m"
  MR_Word mercury__diet__P_14,
#line 1687 "diet.m"
  MR_Box mercury__diet__Lo_15,
#line 1687 "diet.m"
  MR_Box mercury__diet__Hi_16,
#line 1687 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 1687 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 1687 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 1687 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 1687 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 1687 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 1687 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 1687 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
#line 1687 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
#line 1687 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
#line 1687 "diet.m"
{
#line 1695 "diet.m"
  while (MR_TRUE)
#line 1695 "diet.m"
    {
#line 1695 "diet.m"
      /* tailcall optimized into a loop */
#line 1695 "diet.m"
      {
#line 1695 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 4487 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4490 "diet.c"
        {
#line 4492 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Hi_16, mercury__diet__Lo_15);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1695 "diet.m"
        if (mercury__diet__succeeded)
#line 1693 "diet.m"
          {
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_32_32;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_33_33;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_34_34;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_35_35;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_36_36;
#line 1693 "diet.m"
            MR_Box mercury__diet__V_37_37;
#line 1693 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
#line 4515 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1693 "diet.m"
            {
#line 1693 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_14), mercury__diet__Lo_15, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_32_32, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_33_33, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_34_34, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_35_35, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_36_36);
            }
#line 1693 "diet.m"
            if (mercury__diet__succeeded)
#line 1693 "diet.m"
              {
#line 4527 "diet.c"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
#line 4529 "diet.c"
                {
#line 4531 "diet.c"
                  mercury__diet__V_37_37 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Lo_15);
                }
#line 1694 "diet.m"
                /* direct tailcall eliminated */
#line 1694 "diet.m"
                {
#line 1694 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_15 = mercury__diet__V_37_37;
#line 1694 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_32_32;
#line 1694 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_33_33;
#line 1694 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_34_34;
#line 1694 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_35_35;
#line 1694 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30 = mercury__diet__STATE_VARIABLE_E_36_36;

#line 1694 "diet.m"
                  mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30;
#line 1694 "diet.m"
                  mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1694 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1694 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1694 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1694 "diet.m"
                  mercury__diet__Lo_15 = mercury__diet__Lo__tmp_copy_15;
#line 1694 "diet.m"
                }
#line 1694 "diet.m"
                continue;
#line 1693 "diet.m"
              }
#line 1693 "diet.m"
          }
#line 1695 "diet.m"
        else
#line 1696 "diet.m"
          {
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1696 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1696 "diet.m"
          }
#line 1695 "diet.m"
        return mercury__diet__succeeded;
#line 1695 "diet.m"
      }
#line 1695 "diet.m"
      break;
#line 1695 "diet.m"
    }
#line 1687 "diet.m"
}

#line 1684 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up5_13_p_4(
#line 1684 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 1684 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 1684 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 1684 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 1684 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_48,
#line 1684 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
#line 1684 "diet.m"
  MR_Word mercury__diet__P_14,
#line 1684 "diet.m"
  MR_Box mercury__diet__Lo_15,
#line 1684 "diet.m"
  MR_Box mercury__diet__Hi_16,
#line 1684 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 1684 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 1684 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 1684 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 1684 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 1684 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 1684 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 1684 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
#line 1684 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
#line 1684 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
#line 1684 "diet.m"
{
#line 1695 "diet.m"
  while (MR_TRUE)
#line 1695 "diet.m"
    {
#line 1695 "diet.m"
      /* tailcall optimized into a loop */
#line 1695 "diet.m"
      {
#line 1695 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 4653 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4656 "diet.c"
        {
#line 4658 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Hi_16, mercury__diet__Lo_15);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1695 "diet.m"
        if (mercury__diet__succeeded)
#line 1693 "diet.m"
          {
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_32_32;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_33_33;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_34_34;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_35_35;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_36_36;
#line 1693 "diet.m"
            MR_Box mercury__diet__V_37_37;
#line 1693 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
#line 4681 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1693 "diet.m"
            {
#line 1693 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_14), mercury__diet__Lo_15, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_32_32, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_33_33, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_34_34, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_35_35, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_36_36);
            }
#line 1693 "diet.m"
            if (mercury__diet__succeeded)
#line 1693 "diet.m"
              {
#line 4693 "diet.c"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
#line 4695 "diet.c"
                {
#line 4697 "diet.c"
                  mercury__diet__V_37_37 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Lo_15);
                }
#line 1694 "diet.m"
                /* direct tailcall eliminated */
#line 1694 "diet.m"
                {
#line 1694 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_15 = mercury__diet__V_37_37;
#line 1694 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_32_32;
#line 1694 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_33_33;
#line 1694 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_34_34;
#line 1694 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_35_35;
#line 1694 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30 = mercury__diet__STATE_VARIABLE_E_36_36;

#line 1694 "diet.m"
                  mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30;
#line 1694 "diet.m"
                  mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1694 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1694 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1694 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1694 "diet.m"
                  mercury__diet__Lo_15 = mercury__diet__Lo__tmp_copy_15;
#line 1694 "diet.m"
                }
#line 1694 "diet.m"
                continue;
#line 1693 "diet.m"
              }
#line 1693 "diet.m"
          }
#line 1695 "diet.m"
        else
#line 1696 "diet.m"
          {
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1696 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1696 "diet.m"
          }
#line 1695 "diet.m"
        return mercury__diet__succeeded;
#line 1695 "diet.m"
      }
#line 1695 "diet.m"
      break;
#line 1695 "diet.m"
    }
#line 1684 "diet.m"
}

#line 1681 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up5_13_p_3(
#line 1681 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 1681 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 1681 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 1681 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 1681 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_48,
#line 1681 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
#line 1681 "diet.m"
  MR_Word mercury__diet__P_14,
#line 1681 "diet.m"
  MR_Box mercury__diet__Lo_15,
#line 1681 "diet.m"
  MR_Box mercury__diet__Hi_16,
#line 1681 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 1681 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 1681 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 1681 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 1681 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 1681 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 1681 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 1681 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
#line 1681 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
#line 1681 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
#line 1681 "diet.m"
{
#line 1695 "diet.m"
  while (MR_TRUE)
#line 1695 "diet.m"
    {
#line 1695 "diet.m"
      /* tailcall optimized into a loop */
#line 1695 "diet.m"
      {
#line 1695 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 4819 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4822 "diet.c"
        {
#line 4824 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Hi_16, mercury__diet__Lo_15);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1695 "diet.m"
        if (mercury__diet__succeeded)
#line 1693 "diet.m"
          {
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_32_32;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_33_33;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_34_34;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_35_35;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_36_36;
#line 1693 "diet.m"
            MR_Box mercury__diet__V_37_37;
#line 1693 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
#line 4847 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1693 "diet.m"
            {
#line 1693 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_14), mercury__diet__Lo_15, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_32_32, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_33_33, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_34_34, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_35_35, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_36_36);
            }
#line 1693 "diet.m"
            if (mercury__diet__succeeded)
#line 1693 "diet.m"
              {
#line 4859 "diet.c"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
#line 4861 "diet.c"
                {
#line 4863 "diet.c"
                  mercury__diet__V_37_37 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Lo_15);
                }
#line 1694 "diet.m"
                /* direct tailcall eliminated */
#line 1694 "diet.m"
                {
#line 1694 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_15 = mercury__diet__V_37_37;
#line 1694 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_32_32;
#line 1694 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_33_33;
#line 1694 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_34_34;
#line 1694 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_35_35;
#line 1694 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30 = mercury__diet__STATE_VARIABLE_E_36_36;

#line 1694 "diet.m"
                  mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30;
#line 1694 "diet.m"
                  mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1694 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1694 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1694 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1694 "diet.m"
                  mercury__diet__Lo_15 = mercury__diet__Lo__tmp_copy_15;
#line 1694 "diet.m"
                }
#line 1694 "diet.m"
                continue;
#line 1693 "diet.m"
              }
#line 1693 "diet.m"
          }
#line 1695 "diet.m"
        else
#line 1696 "diet.m"
          {
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1696 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1696 "diet.m"
          }
#line 1695 "diet.m"
        return mercury__diet__succeeded;
#line 1695 "diet.m"
      }
#line 1695 "diet.m"
      break;
#line 1695 "diet.m"
    }
#line 1681 "diet.m"
}

#line 1678 "diet.m"
void MR_CALL 
mercury__diet__fold_up5_13_p_2(
#line 1678 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 1678 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 1678 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 1678 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 1678 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_48,
#line 1678 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
#line 1678 "diet.m"
  MR_Word mercury__diet__P_14,
#line 1678 "diet.m"
  MR_Box mercury__diet__Lo_15,
#line 1678 "diet.m"
  MR_Box mercury__diet__Hi_16,
#line 1678 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 1678 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 1678 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 1678 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 1678 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 1678 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 1678 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 1678 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
#line 1678 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
#line 1678 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
#line 1678 "diet.m"
{
#line 1695 "diet.m"
  while (MR_TRUE)
#line 1695 "diet.m"
    {
#line 1695 "diet.m"
      /* tailcall optimized into a loop */
#line 1695 "diet.m"
      {
#line 1695 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 4985 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4988 "diet.c"
        {
#line 4990 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Hi_16, mercury__diet__Lo_15);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1695 "diet.m"
        if (mercury__diet__succeeded)
#line 1693 "diet.m"
          {
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_32_32;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_33_33;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_34_34;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_35_35;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_36_36;
#line 1693 "diet.m"
            MR_Box mercury__diet__V_37_37;
#line 1693 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
#line 5013 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1693 "diet.m"
            {
#line 1693 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_14), mercury__diet__Lo_15, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_32_32, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_33_33, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_34_34, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_35_35, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_36_36);
            }
#line 5021 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5023 "diet.c"
            {
#line 5025 "diet.c"
              mercury__diet__V_37_37 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Lo_15);
            }
#line 1694 "diet.m"
            /* direct tailcall eliminated */
#line 1694 "diet.m"
            {
#line 1694 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_15 = mercury__diet__V_37_37;
#line 1694 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_32_32;
#line 1694 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_33_33;
#line 1694 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_34_34;
#line 1694 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_35_35;
#line 1694 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30 = mercury__diet__STATE_VARIABLE_E_36_36;

#line 1694 "diet.m"
              mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30;
#line 1694 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1694 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1694 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1694 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1694 "diet.m"
              mercury__diet__Lo_15 = mercury__diet__Lo__tmp_copy_15;
#line 1694 "diet.m"
            }
#line 1694 "diet.m"
            continue;
#line 1693 "diet.m"
          }
#line 1695 "diet.m"
        else
#line 1696 "diet.m"
          {
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1696 "diet.m"
          }
#line 1695 "diet.m"
      }
#line 1695 "diet.m"
      break;
#line 1695 "diet.m"
    }
#line 1678 "diet.m"
}

#line 1675 "diet.m"
void MR_CALL 
mercury__diet__fold_up5_13_p_1(
#line 1675 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 1675 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 1675 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 1675 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 1675 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_48,
#line 1675 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
#line 1675 "diet.m"
  MR_Word mercury__diet__P_14,
#line 1675 "diet.m"
  MR_Box mercury__diet__Lo_15,
#line 1675 "diet.m"
  MR_Box mercury__diet__Hi_16,
#line 1675 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 1675 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 1675 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 1675 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 1675 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 1675 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 1675 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 1675 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
#line 1675 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
#line 1675 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
#line 1675 "diet.m"
{
#line 1695 "diet.m"
  while (MR_TRUE)
#line 1695 "diet.m"
    {
#line 1695 "diet.m"
      /* tailcall optimized into a loop */
#line 1695 "diet.m"
      {
#line 1695 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 5141 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5144 "diet.c"
        {
#line 5146 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Hi_16, mercury__diet__Lo_15);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1695 "diet.m"
        if (mercury__diet__succeeded)
#line 1693 "diet.m"
          {
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_32_32;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_33_33;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_34_34;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_35_35;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_36_36;
#line 1693 "diet.m"
            MR_Box mercury__diet__V_37_37;
#line 1693 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
#line 5169 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1693 "diet.m"
            {
#line 1693 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_14), mercury__diet__Lo_15, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_32_32, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_33_33, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_34_34, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_35_35, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_36_36);
            }
#line 5177 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5179 "diet.c"
            {
#line 5181 "diet.c"
              mercury__diet__V_37_37 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Lo_15);
            }
#line 1694 "diet.m"
            /* direct tailcall eliminated */
#line 1694 "diet.m"
            {
#line 1694 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_15 = mercury__diet__V_37_37;
#line 1694 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_32_32;
#line 1694 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_33_33;
#line 1694 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_34_34;
#line 1694 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_35_35;
#line 1694 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30 = mercury__diet__STATE_VARIABLE_E_36_36;

#line 1694 "diet.m"
              mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30;
#line 1694 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1694 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1694 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1694 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1694 "diet.m"
              mercury__diet__Lo_15 = mercury__diet__Lo__tmp_copy_15;
#line 1694 "diet.m"
            }
#line 1694 "diet.m"
            continue;
#line 1693 "diet.m"
          }
#line 1695 "diet.m"
        else
#line 1696 "diet.m"
          {
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1696 "diet.m"
          }
#line 1695 "diet.m"
      }
#line 1695 "diet.m"
      break;
#line 1695 "diet.m"
    }
#line 1675 "diet.m"
}

#line 1672 "diet.m"
void MR_CALL 
mercury__diet__fold_up5_13_p_0(
#line 1672 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 1672 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 1672 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 1672 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 1672 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_48,
#line 1672 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_43,
#line 1672 "diet.m"
  MR_Word mercury__diet__P_14,
#line 1672 "diet.m"
  MR_Box mercury__diet__Lo_15,
#line 1672 "diet.m"
  MR_Box mercury__diet__Hi_16,
#line 1672 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 1672 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 1672 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 1672 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 1672 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 1672 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 1672 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 1672 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
#line 1672 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
#line 1672 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
#line 1672 "diet.m"
{
#line 1695 "diet.m"
  while (MR_TRUE)
#line 1695 "diet.m"
    {
#line 1695 "diet.m"
      /* tailcall optimized into a loop */
#line 1695 "diet.m"
      {
#line 1695 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 5297 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5300 "diet.c"
        {
#line 5302 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Hi_16, mercury__diet__Lo_15);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1695 "diet.m"
        if (mercury__diet__succeeded)
#line 1693 "diet.m"
          {
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_32_32;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_33_33;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_34_34;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_35_35;
#line 1693 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_36_36;
#line 1693 "diet.m"
            MR_Box mercury__diet__V_37_37;
#line 1693 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
#line 5325 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1693 "diet.m"
            {
#line 1693 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_14), mercury__diet__Lo_15, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_32_32, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_33_33, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_34_34, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_35_35, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_36_36);
            }
#line 5333 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_43, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5335 "diet.c"
            {
#line 5337 "diet.c"
              mercury__diet__V_37_37 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_43), mercury__diet__Lo_15);
            }
#line 1694 "diet.m"
            /* direct tailcall eliminated */
#line 1694 "diet.m"
            {
#line 1694 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_15 = mercury__diet__V_37_37;
#line 1694 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_32_32;
#line 1694 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_33_33;
#line 1694 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_34_34;
#line 1694 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_35_35;
#line 1694 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30 = mercury__diet__STATE_VARIABLE_E_36_36;

#line 1694 "diet.m"
              mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30;
#line 1694 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1694 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1694 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1694 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1694 "diet.m"
              mercury__diet__Lo_15 = mercury__diet__Lo__tmp_copy_15;
#line 1694 "diet.m"
            }
#line 1694 "diet.m"
            continue;
#line 1693 "diet.m"
          }
#line 1695 "diet.m"
        else
#line 1696 "diet.m"
          {
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1696 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1696 "diet.m"
          }
#line 1695 "diet.m"
      }
#line 1695 "diet.m"
      break;
#line 1695 "diet.m"
    }
#line 1672 "diet.m"
}

#line 1646 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up4_11_p_5(
#line 1646 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_37,
#line 1646 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_38,
#line 1646 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_39,
#line 1646 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_40,
#line 1646 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_36,
#line 1646 "diet.m"
  MR_Word mercury__diet__P_12,
#line 1646 "diet.m"
  MR_Box mercury__diet__Lo_13,
#line 1646 "diet.m"
  MR_Box mercury__diet__Hi_14,
#line 1646 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
#line 1646 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
#line 1646 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
#line 1646 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
#line 1646 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
#line 1646 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
#line 1646 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
#line 1646 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
#line 1646 "diet.m"
{
#line 1653 "diet.m"
  while (MR_TRUE)
#line 1653 "diet.m"
    {
#line 1653 "diet.m"
      /* tailcall optimized into a loop */
#line 1653 "diet.m"
      {
#line 1653 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 5447 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5450 "diet.c"
        {
#line 5452 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Hi_14, mercury__diet__Lo_13);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1653 "diet.m"
        if (mercury__diet__succeeded)
#line 1651 "diet.m"
          {
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_27_27;
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_28_28;
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_29_29;
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_30_30;
#line 1651 "diet.m"
            MR_Box mercury__diet__V_31_31;
#line 1651 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
#line 5473 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1651 "diet.m"
            {
#line 1651 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_12), mercury__diet__Lo_13, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_27_27, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_28_28, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_29_29, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_30_30);
            }
#line 1651 "diet.m"
            if (mercury__diet__succeeded)
#line 1651 "diet.m"
              {
#line 5485 "diet.c"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5487 "diet.c"
                {
#line 5489 "diet.c"
                  mercury__diet__V_31_31 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Lo_13);
                }
#line 1652 "diet.m"
                /* direct tailcall eliminated */
#line 1652 "diet.m"
                {
#line 1652 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_13 = mercury__diet__V_31_31;
#line 1652 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_A_27_27;
#line 1652 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_B_28_28;
#line 1652 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_C_29_29;
#line 1652 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_D_30_30;

#line 1652 "diet.m"
                  mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25;
#line 1652 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23;
#line 1652 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21;
#line 1652 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19;
#line 1652 "diet.m"
                  mercury__diet__Lo_13 = mercury__diet__Lo__tmp_copy_13;
#line 1652 "diet.m"
                }
#line 1652 "diet.m"
                continue;
#line 1651 "diet.m"
              }
#line 1651 "diet.m"
          }
#line 1653 "diet.m"
        else
#line 1654 "diet.m"
          {
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
#line 1654 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1654 "diet.m"
          }
#line 1653 "diet.m"
        return mercury__diet__succeeded;
#line 1653 "diet.m"
      }
#line 1653 "diet.m"
      break;
#line 1653 "diet.m"
    }
#line 1646 "diet.m"
}

#line 1644 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up4_11_p_4(
#line 1644 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_37,
#line 1644 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_38,
#line 1644 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_39,
#line 1644 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_40,
#line 1644 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_36,
#line 1644 "diet.m"
  MR_Word mercury__diet__P_12,
#line 1644 "diet.m"
  MR_Box mercury__diet__Lo_13,
#line 1644 "diet.m"
  MR_Box mercury__diet__Hi_14,
#line 1644 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
#line 1644 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
#line 1644 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
#line 1644 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
#line 1644 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
#line 1644 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
#line 1644 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
#line 1644 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
#line 1644 "diet.m"
{
#line 1653 "diet.m"
  while (MR_TRUE)
#line 1653 "diet.m"
    {
#line 1653 "diet.m"
      /* tailcall optimized into a loop */
#line 1653 "diet.m"
      {
#line 1653 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 5599 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5602 "diet.c"
        {
#line 5604 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Hi_14, mercury__diet__Lo_13);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1653 "diet.m"
        if (mercury__diet__succeeded)
#line 1651 "diet.m"
          {
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_27_27;
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_28_28;
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_29_29;
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_30_30;
#line 1651 "diet.m"
            MR_Box mercury__diet__V_31_31;
#line 1651 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
#line 5625 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1651 "diet.m"
            {
#line 1651 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_12), mercury__diet__Lo_13, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_27_27, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_28_28, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_29_29, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_30_30);
            }
#line 1651 "diet.m"
            if (mercury__diet__succeeded)
#line 1651 "diet.m"
              {
#line 5637 "diet.c"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5639 "diet.c"
                {
#line 5641 "diet.c"
                  mercury__diet__V_31_31 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Lo_13);
                }
#line 1652 "diet.m"
                /* direct tailcall eliminated */
#line 1652 "diet.m"
                {
#line 1652 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_13 = mercury__diet__V_31_31;
#line 1652 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_A_27_27;
#line 1652 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_B_28_28;
#line 1652 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_C_29_29;
#line 1652 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_D_30_30;

#line 1652 "diet.m"
                  mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25;
#line 1652 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23;
#line 1652 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21;
#line 1652 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19;
#line 1652 "diet.m"
                  mercury__diet__Lo_13 = mercury__diet__Lo__tmp_copy_13;
#line 1652 "diet.m"
                }
#line 1652 "diet.m"
                continue;
#line 1651 "diet.m"
              }
#line 1651 "diet.m"
          }
#line 1653 "diet.m"
        else
#line 1654 "diet.m"
          {
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
#line 1654 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1654 "diet.m"
          }
#line 1653 "diet.m"
        return mercury__diet__succeeded;
#line 1653 "diet.m"
      }
#line 1653 "diet.m"
      break;
#line 1653 "diet.m"
    }
#line 1644 "diet.m"
}

#line 1642 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up4_11_p_3(
#line 1642 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_37,
#line 1642 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_38,
#line 1642 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_39,
#line 1642 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_40,
#line 1642 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_36,
#line 1642 "diet.m"
  MR_Word mercury__diet__P_12,
#line 1642 "diet.m"
  MR_Box mercury__diet__Lo_13,
#line 1642 "diet.m"
  MR_Box mercury__diet__Hi_14,
#line 1642 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
#line 1642 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
#line 1642 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
#line 1642 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
#line 1642 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
#line 1642 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
#line 1642 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
#line 1642 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
#line 1642 "diet.m"
{
#line 1653 "diet.m"
  while (MR_TRUE)
#line 1653 "diet.m"
    {
#line 1653 "diet.m"
      /* tailcall optimized into a loop */
#line 1653 "diet.m"
      {
#line 1653 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 5751 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5754 "diet.c"
        {
#line 5756 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Hi_14, mercury__diet__Lo_13);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1653 "diet.m"
        if (mercury__diet__succeeded)
#line 1651 "diet.m"
          {
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_27_27;
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_28_28;
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_29_29;
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_30_30;
#line 1651 "diet.m"
            MR_Box mercury__diet__V_31_31;
#line 1651 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
#line 5777 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1651 "diet.m"
            {
#line 1651 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_12), mercury__diet__Lo_13, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_27_27, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_28_28, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_29_29, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_30_30);
            }
#line 1651 "diet.m"
            if (mercury__diet__succeeded)
#line 1651 "diet.m"
              {
#line 5789 "diet.c"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5791 "diet.c"
                {
#line 5793 "diet.c"
                  mercury__diet__V_31_31 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Lo_13);
                }
#line 1652 "diet.m"
                /* direct tailcall eliminated */
#line 1652 "diet.m"
                {
#line 1652 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_13 = mercury__diet__V_31_31;
#line 1652 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_A_27_27;
#line 1652 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_B_28_28;
#line 1652 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_C_29_29;
#line 1652 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_D_30_30;

#line 1652 "diet.m"
                  mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25;
#line 1652 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23;
#line 1652 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21;
#line 1652 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19;
#line 1652 "diet.m"
                  mercury__diet__Lo_13 = mercury__diet__Lo__tmp_copy_13;
#line 1652 "diet.m"
                }
#line 1652 "diet.m"
                continue;
#line 1651 "diet.m"
              }
#line 1651 "diet.m"
          }
#line 1653 "diet.m"
        else
#line 1654 "diet.m"
          {
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
#line 1654 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1654 "diet.m"
          }
#line 1653 "diet.m"
        return mercury__diet__succeeded;
#line 1653 "diet.m"
      }
#line 1653 "diet.m"
      break;
#line 1653 "diet.m"
    }
#line 1642 "diet.m"
}

#line 1640 "diet.m"
void MR_CALL 
mercury__diet__fold_up4_11_p_2(
#line 1640 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_37,
#line 1640 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_38,
#line 1640 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_39,
#line 1640 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_40,
#line 1640 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_36,
#line 1640 "diet.m"
  MR_Word mercury__diet__P_12,
#line 1640 "diet.m"
  MR_Box mercury__diet__Lo_13,
#line 1640 "diet.m"
  MR_Box mercury__diet__Hi_14,
#line 1640 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
#line 1640 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
#line 1640 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
#line 1640 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
#line 1640 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
#line 1640 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
#line 1640 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
#line 1640 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
#line 1640 "diet.m"
{
#line 1653 "diet.m"
  while (MR_TRUE)
#line 1653 "diet.m"
    {
#line 1653 "diet.m"
      /* tailcall optimized into a loop */
#line 1653 "diet.m"
      {
#line 1653 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 5903 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5906 "diet.c"
        {
#line 5908 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Hi_14, mercury__diet__Lo_13);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1653 "diet.m"
        if (mercury__diet__succeeded)
#line 1651 "diet.m"
          {
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_27_27;
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_28_28;
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_29_29;
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_30_30;
#line 1651 "diet.m"
            MR_Box mercury__diet__V_31_31;
#line 1651 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
#line 5929 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1651 "diet.m"
            {
#line 1651 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_12), mercury__diet__Lo_13, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_27_27, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_28_28, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_29_29, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_30_30);
            }
#line 5937 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5939 "diet.c"
            {
#line 5941 "diet.c"
              mercury__diet__V_31_31 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Lo_13);
            }
#line 1652 "diet.m"
            /* direct tailcall eliminated */
#line 1652 "diet.m"
            {
#line 1652 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_13 = mercury__diet__V_31_31;
#line 1652 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_A_27_27;
#line 1652 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_B_28_28;
#line 1652 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_C_29_29;
#line 1652 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_D_30_30;

#line 1652 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25;
#line 1652 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23;
#line 1652 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21;
#line 1652 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19;
#line 1652 "diet.m"
              mercury__diet__Lo_13 = mercury__diet__Lo__tmp_copy_13;
#line 1652 "diet.m"
            }
#line 1652 "diet.m"
            continue;
#line 1651 "diet.m"
          }
#line 1653 "diet.m"
        else
#line 1654 "diet.m"
          {
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
#line 1654 "diet.m"
          }
#line 1653 "diet.m"
      }
#line 1653 "diet.m"
      break;
#line 1653 "diet.m"
    }
#line 1640 "diet.m"
}

#line 1638 "diet.m"
void MR_CALL 
mercury__diet__fold_up4_11_p_1(
#line 1638 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_37,
#line 1638 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_38,
#line 1638 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_39,
#line 1638 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_40,
#line 1638 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_36,
#line 1638 "diet.m"
  MR_Word mercury__diet__P_12,
#line 1638 "diet.m"
  MR_Box mercury__diet__Lo_13,
#line 1638 "diet.m"
  MR_Box mercury__diet__Hi_14,
#line 1638 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
#line 1638 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
#line 1638 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
#line 1638 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
#line 1638 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
#line 1638 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
#line 1638 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
#line 1638 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
#line 1638 "diet.m"
{
#line 1653 "diet.m"
  while (MR_TRUE)
#line 1653 "diet.m"
    {
#line 1653 "diet.m"
      /* tailcall optimized into a loop */
#line 1653 "diet.m"
      {
#line 1653 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 6045 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

#line 6048 "diet.c"
        {
#line 6050 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Hi_14, mercury__diet__Lo_13);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1653 "diet.m"
        if (mercury__diet__succeeded)
#line 1651 "diet.m"
          {
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_27_27;
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_28_28;
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_29_29;
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_30_30;
#line 1651 "diet.m"
            MR_Box mercury__diet__V_31_31;
#line 1651 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
#line 6071 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1651 "diet.m"
            {
#line 1651 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_12), mercury__diet__Lo_13, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_27_27, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_28_28, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_29_29, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_30_30);
            }
#line 6079 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
#line 6081 "diet.c"
            {
#line 6083 "diet.c"
              mercury__diet__V_31_31 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Lo_13);
            }
#line 1652 "diet.m"
            /* direct tailcall eliminated */
#line 1652 "diet.m"
            {
#line 1652 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_13 = mercury__diet__V_31_31;
#line 1652 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_A_27_27;
#line 1652 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_B_28_28;
#line 1652 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_C_29_29;
#line 1652 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_D_30_30;

#line 1652 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25;
#line 1652 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23;
#line 1652 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21;
#line 1652 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19;
#line 1652 "diet.m"
              mercury__diet__Lo_13 = mercury__diet__Lo__tmp_copy_13;
#line 1652 "diet.m"
            }
#line 1652 "diet.m"
            continue;
#line 1651 "diet.m"
          }
#line 1653 "diet.m"
        else
#line 1654 "diet.m"
          {
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
#line 1654 "diet.m"
          }
#line 1653 "diet.m"
      }
#line 1653 "diet.m"
      break;
#line 1653 "diet.m"
    }
#line 1638 "diet.m"
}

#line 1636 "diet.m"
void MR_CALL 
mercury__diet__fold_up4_11_p_0(
#line 1636 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_37,
#line 1636 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_38,
#line 1636 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_39,
#line 1636 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_40,
#line 1636 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_36,
#line 1636 "diet.m"
  MR_Word mercury__diet__P_12,
#line 1636 "diet.m"
  MR_Box mercury__diet__Lo_13,
#line 1636 "diet.m"
  MR_Box mercury__diet__Hi_14,
#line 1636 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
#line 1636 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
#line 1636 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
#line 1636 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
#line 1636 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
#line 1636 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
#line 1636 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
#line 1636 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
#line 1636 "diet.m"
{
#line 1653 "diet.m"
  while (MR_TRUE)
#line 1653 "diet.m"
    {
#line 1653 "diet.m"
      /* tailcall optimized into a loop */
#line 1653 "diet.m"
      {
#line 1653 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 6187 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 5)));

#line 6190 "diet.c"
        {
#line 6192 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Hi_14, mercury__diet__Lo_13);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1653 "diet.m"
        if (mercury__diet__succeeded)
#line 1651 "diet.m"
          {
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_27_27;
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_28_28;
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_29_29;
#line 1651 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_30_30;
#line 1651 "diet.m"
            MR_Box mercury__diet__V_31_31;
#line 1651 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
#line 6213 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1651 "diet.m"
            {
#line 1651 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_12), mercury__diet__Lo_13, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_27_27, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_28_28, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_29_29, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_30_30);
            }
#line 6221 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_36, (MR_Integer) 0)), (MR_Integer) 6)));
#line 6223 "diet.c"
            {
#line 6225 "diet.c"
              mercury__diet__V_31_31 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_36), mercury__diet__Lo_13);
            }
#line 1652 "diet.m"
            /* direct tailcall eliminated */
#line 1652 "diet.m"
            {
#line 1652 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_13 = mercury__diet__V_31_31;
#line 1652 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_A_27_27;
#line 1652 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_B_28_28;
#line 1652 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_C_29_29;
#line 1652 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_D_30_30;

#line 1652 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25;
#line 1652 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23;
#line 1652 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21;
#line 1652 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19;
#line 1652 "diet.m"
              mercury__diet__Lo_13 = mercury__diet__Lo__tmp_copy_13;
#line 1652 "diet.m"
            }
#line 1652 "diet.m"
            continue;
#line 1651 "diet.m"
          }
#line 1653 "diet.m"
        else
#line 1654 "diet.m"
          {
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
#line 1654 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
#line 1654 "diet.m"
          }
#line 1653 "diet.m"
      }
#line 1653 "diet.m"
      break;
#line 1653 "diet.m"
    }
#line 1636 "diet.m"
}

#line 1611 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up3_9_p_5(
#line 1611 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_30,
#line 1611 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_31,
#line 1611 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc3_32,
#line 1611 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
#line 1611 "diet.m"
  MR_Word mercury__diet__P_10,
#line 1611 "diet.m"
  MR_Box mercury__diet__Lo_11,
#line 1611 "diet.m"
  MR_Box mercury__diet__Hi_12,
#line 1611 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
#line 1611 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
#line 1611 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
#line 1611 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
#line 1611 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
#line 1611 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
#line 1611 "diet.m"
{
#line 1618 "diet.m"
  while (MR_TRUE)
#line 1618 "diet.m"
    {
#line 1618 "diet.m"
      /* tailcall optimized into a loop */
#line 1618 "diet.m"
      {
#line 1618 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 6323 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

#line 6326 "diet.c"
        {
#line 6328 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Hi_12, mercury__diet__Lo_11);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1618 "diet.m"
        if (mercury__diet__succeeded)
#line 1616 "diet.m"
          {
#line 1616 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_22_22;
#line 1616 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_23_23;
#line 1616 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_24_24;
#line 1616 "diet.m"
            MR_Box mercury__diet__V_25_25;
#line 1616 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
#line 6347 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1616 "diet.m"
            {
#line 1616 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_10), mercury__diet__Lo_11, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_22_22, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_23_23, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_24_24);
            }
#line 1616 "diet.m"
            if (mercury__diet__succeeded)
#line 1616 "diet.m"
              {
#line 6359 "diet.c"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 6361 "diet.c"
                {
#line 6363 "diet.c"
                  mercury__diet__V_25_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Lo_11);
                }
#line 1617 "diet.m"
                /* direct tailcall eliminated */
#line 1617 "diet.m"
                {
#line 1617 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_11 = mercury__diet__V_25_25;
#line 1617 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_A_22_22;
#line 1617 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_B_23_23;
#line 1617 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__diet__STATE_VARIABLE_C_24_24;

#line 1617 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20;
#line 1617 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18;
#line 1617 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16;
#line 1617 "diet.m"
                  mercury__diet__Lo_11 = mercury__diet__Lo__tmp_copy_11;
#line 1617 "diet.m"
                }
#line 1617 "diet.m"
                continue;
#line 1616 "diet.m"
              }
#line 1616 "diet.m"
          }
#line 1618 "diet.m"
        else
#line 1619 "diet.m"
          {
#line 1619 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
#line 1619 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
#line 1619 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
#line 1619 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1619 "diet.m"
          }
#line 1618 "diet.m"
        return mercury__diet__succeeded;
#line 1618 "diet.m"
      }
#line 1618 "diet.m"
      break;
#line 1618 "diet.m"
    }
#line 1611 "diet.m"
}

#line 1609 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up3_9_p_4(
#line 1609 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_30,
#line 1609 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_31,
#line 1609 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc3_32,
#line 1609 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
#line 1609 "diet.m"
  MR_Word mercury__diet__P_10,
#line 1609 "diet.m"
  MR_Box mercury__diet__Lo_11,
#line 1609 "diet.m"
  MR_Box mercury__diet__Hi_12,
#line 1609 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
#line 1609 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
#line 1609 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
#line 1609 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
#line 1609 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
#line 1609 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
#line 1609 "diet.m"
{
#line 1618 "diet.m"
  while (MR_TRUE)
#line 1618 "diet.m"
    {
#line 1618 "diet.m"
      /* tailcall optimized into a loop */
#line 1618 "diet.m"
      {
#line 1618 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 6461 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

#line 6464 "diet.c"
        {
#line 6466 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Hi_12, mercury__diet__Lo_11);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1618 "diet.m"
        if (mercury__diet__succeeded)
#line 1616 "diet.m"
          {
#line 1616 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_22_22;
#line 1616 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_23_23;
#line 1616 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_24_24;
#line 1616 "diet.m"
            MR_Box mercury__diet__V_25_25;
#line 1616 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
#line 6485 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1616 "diet.m"
            {
#line 1616 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_10), mercury__diet__Lo_11, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_22_22, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_23_23, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_24_24);
            }
#line 1616 "diet.m"
            if (mercury__diet__succeeded)
#line 1616 "diet.m"
              {
#line 6497 "diet.c"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 6499 "diet.c"
                {
#line 6501 "diet.c"
                  mercury__diet__V_25_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Lo_11);
                }
#line 1617 "diet.m"
                /* direct tailcall eliminated */
#line 1617 "diet.m"
                {
#line 1617 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_11 = mercury__diet__V_25_25;
#line 1617 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_A_22_22;
#line 1617 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_B_23_23;
#line 1617 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__diet__STATE_VARIABLE_C_24_24;

#line 1617 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20;
#line 1617 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18;
#line 1617 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16;
#line 1617 "diet.m"
                  mercury__diet__Lo_11 = mercury__diet__Lo__tmp_copy_11;
#line 1617 "diet.m"
                }
#line 1617 "diet.m"
                continue;
#line 1616 "diet.m"
              }
#line 1616 "diet.m"
          }
#line 1618 "diet.m"
        else
#line 1619 "diet.m"
          {
#line 1619 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
#line 1619 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
#line 1619 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
#line 1619 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1619 "diet.m"
          }
#line 1618 "diet.m"
        return mercury__diet__succeeded;
#line 1618 "diet.m"
      }
#line 1618 "diet.m"
      break;
#line 1618 "diet.m"
    }
#line 1609 "diet.m"
}

#line 1607 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up3_9_p_3(
#line 1607 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_30,
#line 1607 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_31,
#line 1607 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc3_32,
#line 1607 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
#line 1607 "diet.m"
  MR_Word mercury__diet__P_10,
#line 1607 "diet.m"
  MR_Box mercury__diet__Lo_11,
#line 1607 "diet.m"
  MR_Box mercury__diet__Hi_12,
#line 1607 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
#line 1607 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
#line 1607 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
#line 1607 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
#line 1607 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
#line 1607 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
#line 1607 "diet.m"
{
#line 1618 "diet.m"
  while (MR_TRUE)
#line 1618 "diet.m"
    {
#line 1618 "diet.m"
      /* tailcall optimized into a loop */
#line 1618 "diet.m"
      {
#line 1618 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 6599 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

#line 6602 "diet.c"
        {
#line 6604 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Hi_12, mercury__diet__Lo_11);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1618 "diet.m"
        if (mercury__diet__succeeded)
#line 1616 "diet.m"
          {
#line 1616 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_22_22;
#line 1616 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_23_23;
#line 1616 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_24_24;
#line 1616 "diet.m"
            MR_Box mercury__diet__V_25_25;
#line 1616 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
#line 6623 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1616 "diet.m"
            {
#line 1616 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_10), mercury__diet__Lo_11, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_22_22, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_23_23, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_24_24);
            }
#line 1616 "diet.m"
            if (mercury__diet__succeeded)
#line 1616 "diet.m"
              {
#line 6635 "diet.c"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 6637 "diet.c"
                {
#line 6639 "diet.c"
                  mercury__diet__V_25_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Lo_11);
                }
#line 1617 "diet.m"
                /* direct tailcall eliminated */
#line 1617 "diet.m"
                {
#line 1617 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_11 = mercury__diet__V_25_25;
#line 1617 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_A_22_22;
#line 1617 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_B_23_23;
#line 1617 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__diet__STATE_VARIABLE_C_24_24;

#line 1617 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20;
#line 1617 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18;
#line 1617 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16;
#line 1617 "diet.m"
                  mercury__diet__Lo_11 = mercury__diet__Lo__tmp_copy_11;
#line 1617 "diet.m"
                }
#line 1617 "diet.m"
                continue;
#line 1616 "diet.m"
              }
#line 1616 "diet.m"
          }
#line 1618 "diet.m"
        else
#line 1619 "diet.m"
          {
#line 1619 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
#line 1619 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
#line 1619 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
#line 1619 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1619 "diet.m"
          }
#line 1618 "diet.m"
        return mercury__diet__succeeded;
#line 1618 "diet.m"
      }
#line 1618 "diet.m"
      break;
#line 1618 "diet.m"
    }
#line 1607 "diet.m"
}

#line 1605 "diet.m"
void MR_CALL 
mercury__diet__fold_up3_9_p_2(
#line 1605 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_30,
#line 1605 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_31,
#line 1605 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc3_32,
#line 1605 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
#line 1605 "diet.m"
  MR_Word mercury__diet__P_10,
#line 1605 "diet.m"
  MR_Box mercury__diet__Lo_11,
#line 1605 "diet.m"
  MR_Box mercury__diet__Hi_12,
#line 1605 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
#line 1605 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
#line 1605 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
#line 1605 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
#line 1605 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
#line 1605 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
#line 1605 "diet.m"
{
#line 1618 "diet.m"
  while (MR_TRUE)
#line 1618 "diet.m"
    {
#line 1618 "diet.m"
      /* tailcall optimized into a loop */
#line 1618 "diet.m"
      {
#line 1618 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 6737 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

#line 6740 "diet.c"
        {
#line 6742 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Hi_12, mercury__diet__Lo_11);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1618 "diet.m"
        if (mercury__diet__succeeded)
#line 1616 "diet.m"
          {
#line 1616 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_22_22;
#line 1616 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_23_23;
#line 1616 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_24_24;
#line 1616 "diet.m"
            MR_Box mercury__diet__V_25_25;
#line 1616 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
#line 6761 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1616 "diet.m"
            {
#line 1616 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_10), mercury__diet__Lo_11, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_22_22, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_23_23, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_24_24);
            }
#line 6769 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 6771 "diet.c"
            {
#line 6773 "diet.c"
              mercury__diet__V_25_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Lo_11);
            }
#line 1617 "diet.m"
            /* direct tailcall eliminated */
#line 1617 "diet.m"
            {
#line 1617 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_11 = mercury__diet__V_25_25;
#line 1617 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_A_22_22;
#line 1617 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_B_23_23;
#line 1617 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__diet__STATE_VARIABLE_C_24_24;

#line 1617 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20;
#line 1617 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18;
#line 1617 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16;
#line 1617 "diet.m"
              mercury__diet__Lo_11 = mercury__diet__Lo__tmp_copy_11;
#line 1617 "diet.m"
            }
#line 1617 "diet.m"
            continue;
#line 1616 "diet.m"
          }
#line 1618 "diet.m"
        else
#line 1619 "diet.m"
          {
#line 1619 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
#line 1619 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
#line 1619 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
#line 1619 "diet.m"
          }
#line 1618 "diet.m"
      }
#line 1618 "diet.m"
      break;
#line 1618 "diet.m"
    }
#line 1605 "diet.m"
}

#line 1603 "diet.m"
void MR_CALL 
mercury__diet__fold_up3_9_p_1(
#line 1603 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_30,
#line 1603 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_31,
#line 1603 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc3_32,
#line 1603 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
#line 1603 "diet.m"
  MR_Word mercury__diet__P_10,
#line 1603 "diet.m"
  MR_Box mercury__diet__Lo_11,
#line 1603 "diet.m"
  MR_Box mercury__diet__Hi_12,
#line 1603 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
#line 1603 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
#line 1603 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
#line 1603 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
#line 1603 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
#line 1603 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
#line 1603 "diet.m"
{
#line 1618 "diet.m"
  while (MR_TRUE)
#line 1618 "diet.m"
    {
#line 1618 "diet.m"
      /* tailcall optimized into a loop */
#line 1618 "diet.m"
      {
#line 1618 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 6865 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

#line 6868 "diet.c"
        {
#line 6870 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Hi_12, mercury__diet__Lo_11);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1618 "diet.m"
        if (mercury__diet__succeeded)
#line 1616 "diet.m"
          {
#line 1616 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_22_22;
#line 1616 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_23_23;
#line 1616 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_24_24;
#line 1616 "diet.m"
            MR_Box mercury__diet__V_25_25;
#line 1616 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
#line 6889 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1616 "diet.m"
            {
#line 1616 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_10), mercury__diet__Lo_11, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_22_22, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_23_23, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_24_24);
            }
#line 6897 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 6899 "diet.c"
            {
#line 6901 "diet.c"
              mercury__diet__V_25_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Lo_11);
            }
#line 1617 "diet.m"
            /* direct tailcall eliminated */
#line 1617 "diet.m"
            {
#line 1617 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_11 = mercury__diet__V_25_25;
#line 1617 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_A_22_22;
#line 1617 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_B_23_23;
#line 1617 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__diet__STATE_VARIABLE_C_24_24;

#line 1617 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20;
#line 1617 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18;
#line 1617 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16;
#line 1617 "diet.m"
              mercury__diet__Lo_11 = mercury__diet__Lo__tmp_copy_11;
#line 1617 "diet.m"
            }
#line 1617 "diet.m"
            continue;
#line 1616 "diet.m"
          }
#line 1618 "diet.m"
        else
#line 1619 "diet.m"
          {
#line 1619 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
#line 1619 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
#line 1619 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
#line 1619 "diet.m"
          }
#line 1618 "diet.m"
      }
#line 1618 "diet.m"
      break;
#line 1618 "diet.m"
    }
#line 1603 "diet.m"
}

#line 1601 "diet.m"
void MR_CALL 
mercury__diet__fold_up3_9_p_0(
#line 1601 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_30,
#line 1601 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_31,
#line 1601 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc3_32,
#line 1601 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
#line 1601 "diet.m"
  MR_Word mercury__diet__P_10,
#line 1601 "diet.m"
  MR_Box mercury__diet__Lo_11,
#line 1601 "diet.m"
  MR_Box mercury__diet__Hi_12,
#line 1601 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
#line 1601 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
#line 1601 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
#line 1601 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
#line 1601 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
#line 1601 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
#line 1601 "diet.m"
{
#line 1618 "diet.m"
  while (MR_TRUE)
#line 1618 "diet.m"
    {
#line 1618 "diet.m"
      /* tailcall optimized into a loop */
#line 1618 "diet.m"
      {
#line 1618 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 6993 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 5)));

#line 6996 "diet.c"
        {
#line 6998 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Hi_12, mercury__diet__Lo_11);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1618 "diet.m"
        if (mercury__diet__succeeded)
#line 1616 "diet.m"
          {
#line 1616 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_22_22;
#line 1616 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_23_23;
#line 1616 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_24_24;
#line 1616 "diet.m"
            MR_Box mercury__diet__V_25_25;
#line 1616 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
#line 7017 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1616 "diet.m"
            {
#line 1616 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_10), mercury__diet__Lo_11, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_22_22, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_23_23, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_24_24);
            }
#line 7025 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 7027 "diet.c"
            {
#line 7029 "diet.c"
              mercury__diet__V_25_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_29), mercury__diet__Lo_11);
            }
#line 1617 "diet.m"
            /* direct tailcall eliminated */
#line 1617 "diet.m"
            {
#line 1617 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_11 = mercury__diet__V_25_25;
#line 1617 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_A_22_22;
#line 1617 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_B_23_23;
#line 1617 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__diet__STATE_VARIABLE_C_24_24;

#line 1617 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20;
#line 1617 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18;
#line 1617 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16;
#line 1617 "diet.m"
              mercury__diet__Lo_11 = mercury__diet__Lo__tmp_copy_11;
#line 1617 "diet.m"
            }
#line 1617 "diet.m"
            continue;
#line 1616 "diet.m"
          }
#line 1618 "diet.m"
        else
#line 1619 "diet.m"
          {
#line 1619 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
#line 1619 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
#line 1619 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
#line 1619 "diet.m"
          }
#line 1618 "diet.m"
      }
#line 1618 "diet.m"
      break;
#line 1618 "diet.m"
    }
#line 1601 "diet.m"
}

#line 1576 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up2_7_p_5(
#line 1576 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_23,
#line 1576 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_24,
#line 1576 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
#line 1576 "diet.m"
  MR_Word mercury__diet__P_8,
#line 1576 "diet.m"
  MR_Box mercury__diet__Lo_9,
#line 1576 "diet.m"
  MR_Box mercury__diet__Hi_10,
#line 1576 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
#line 1576 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
#line 1576 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
#line 1576 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
#line 1576 "diet.m"
{
#line 1583 "diet.m"
  while (MR_TRUE)
#line 1583 "diet.m"
    {
#line 1583 "diet.m"
      /* tailcall optimized into a loop */
#line 1583 "diet.m"
      {
#line 1583 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 7115 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

#line 7118 "diet.c"
        {
#line 7120 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1583 "diet.m"
        if (mercury__diet__succeeded)
#line 1581 "diet.m"
          {
#line 1581 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_17_17;
#line 1581 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_18_18;
#line 1581 "diet.m"
            MR_Box mercury__diet__V_19_19;
#line 1581 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
#line 7137 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1581 "diet.m"
            {
#line 1581 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_8), mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_17_17, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_18_18);
            }
#line 1581 "diet.m"
            if (mercury__diet__succeeded)
#line 1581 "diet.m"
              {
#line 7149 "diet.c"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
#line 7151 "diet.c"
                {
#line 7153 "diet.c"
                  mercury__diet__V_19_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
                }
#line 1582 "diet.m"
                /* direct tailcall eliminated */
#line 1582 "diet.m"
                {
#line 1582 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_19_19;
#line 1582 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_17_17;
#line 1582 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_18_18;

#line 1582 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1582 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1582 "diet.m"
                  mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1582 "diet.m"
                }
#line 1582 "diet.m"
                continue;
#line 1581 "diet.m"
              }
#line 1581 "diet.m"
          }
#line 1583 "diet.m"
        else
#line 1584 "diet.m"
          {
#line 1584 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1584 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1584 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1584 "diet.m"
          }
#line 1583 "diet.m"
        return mercury__diet__succeeded;
#line 1583 "diet.m"
      }
#line 1583 "diet.m"
      break;
#line 1583 "diet.m"
    }
#line 1576 "diet.m"
}

#line 1574 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up2_7_p_4(
#line 1574 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_23,
#line 1574 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_24,
#line 1574 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
#line 1574 "diet.m"
  MR_Word mercury__diet__P_8,
#line 1574 "diet.m"
  MR_Box mercury__diet__Lo_9,
#line 1574 "diet.m"
  MR_Box mercury__diet__Hi_10,
#line 1574 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
#line 1574 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
#line 1574 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
#line 1574 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
#line 1574 "diet.m"
{
#line 1583 "diet.m"
  while (MR_TRUE)
#line 1583 "diet.m"
    {
#line 1583 "diet.m"
      /* tailcall optimized into a loop */
#line 1583 "diet.m"
      {
#line 1583 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 7239 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

#line 7242 "diet.c"
        {
#line 7244 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1583 "diet.m"
        if (mercury__diet__succeeded)
#line 1581 "diet.m"
          {
#line 1581 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_17_17;
#line 1581 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_18_18;
#line 1581 "diet.m"
            MR_Box mercury__diet__V_19_19;
#line 1581 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
#line 7261 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1581 "diet.m"
            {
#line 1581 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_8), mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_17_17, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_18_18);
            }
#line 1581 "diet.m"
            if (mercury__diet__succeeded)
#line 1581 "diet.m"
              {
#line 7273 "diet.c"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
#line 7275 "diet.c"
                {
#line 7277 "diet.c"
                  mercury__diet__V_19_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
                }
#line 1582 "diet.m"
                /* direct tailcall eliminated */
#line 1582 "diet.m"
                {
#line 1582 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_19_19;
#line 1582 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_17_17;
#line 1582 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_18_18;

#line 1582 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1582 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1582 "diet.m"
                  mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1582 "diet.m"
                }
#line 1582 "diet.m"
                continue;
#line 1581 "diet.m"
              }
#line 1581 "diet.m"
          }
#line 1583 "diet.m"
        else
#line 1584 "diet.m"
          {
#line 1584 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1584 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1584 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1584 "diet.m"
          }
#line 1583 "diet.m"
        return mercury__diet__succeeded;
#line 1583 "diet.m"
      }
#line 1583 "diet.m"
      break;
#line 1583 "diet.m"
    }
#line 1574 "diet.m"
}

#line 1572 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up2_7_p_3(
#line 1572 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_23,
#line 1572 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_24,
#line 1572 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
#line 1572 "diet.m"
  MR_Word mercury__diet__P_8,
#line 1572 "diet.m"
  MR_Box mercury__diet__Lo_9,
#line 1572 "diet.m"
  MR_Box mercury__diet__Hi_10,
#line 1572 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
#line 1572 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
#line 1572 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
#line 1572 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
#line 1572 "diet.m"
{
#line 1583 "diet.m"
  while (MR_TRUE)
#line 1583 "diet.m"
    {
#line 1583 "diet.m"
      /* tailcall optimized into a loop */
#line 1583 "diet.m"
      {
#line 1583 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 7363 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

#line 7366 "diet.c"
        {
#line 7368 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1583 "diet.m"
        if (mercury__diet__succeeded)
#line 1581 "diet.m"
          {
#line 1581 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_17_17;
#line 1581 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_18_18;
#line 1581 "diet.m"
            MR_Box mercury__diet__V_19_19;
#line 1581 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
#line 7385 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1581 "diet.m"
            {
#line 1581 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_8), mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_17_17, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_18_18);
            }
#line 1581 "diet.m"
            if (mercury__diet__succeeded)
#line 1581 "diet.m"
              {
#line 7397 "diet.c"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
#line 7399 "diet.c"
                {
#line 7401 "diet.c"
                  mercury__diet__V_19_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
                }
#line 1582 "diet.m"
                /* direct tailcall eliminated */
#line 1582 "diet.m"
                {
#line 1582 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_19_19;
#line 1582 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_17_17;
#line 1582 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_18_18;

#line 1582 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1582 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1582 "diet.m"
                  mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1582 "diet.m"
                }
#line 1582 "diet.m"
                continue;
#line 1581 "diet.m"
              }
#line 1581 "diet.m"
          }
#line 1583 "diet.m"
        else
#line 1584 "diet.m"
          {
#line 1584 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1584 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1584 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1584 "diet.m"
          }
#line 1583 "diet.m"
        return mercury__diet__succeeded;
#line 1583 "diet.m"
      }
#line 1583 "diet.m"
      break;
#line 1583 "diet.m"
    }
#line 1572 "diet.m"
}

#line 1570 "diet.m"
void MR_CALL 
mercury__diet__fold_up2_7_p_2(
#line 1570 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_23,
#line 1570 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_24,
#line 1570 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
#line 1570 "diet.m"
  MR_Word mercury__diet__P_8,
#line 1570 "diet.m"
  MR_Box mercury__diet__Lo_9,
#line 1570 "diet.m"
  MR_Box mercury__diet__Hi_10,
#line 1570 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
#line 1570 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
#line 1570 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
#line 1570 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
#line 1570 "diet.m"
{
#line 1583 "diet.m"
  while (MR_TRUE)
#line 1583 "diet.m"
    {
#line 1583 "diet.m"
      /* tailcall optimized into a loop */
#line 1583 "diet.m"
      {
#line 1583 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 7487 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

#line 7490 "diet.c"
        {
#line 7492 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1583 "diet.m"
        if (mercury__diet__succeeded)
#line 1581 "diet.m"
          {
#line 1581 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_17_17;
#line 1581 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_18_18;
#line 1581 "diet.m"
            MR_Box mercury__diet__V_19_19;
#line 1581 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
#line 7509 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1581 "diet.m"
            {
#line 1581 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_8), mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_17_17, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_18_18);
            }
#line 7517 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
#line 7519 "diet.c"
            {
#line 7521 "diet.c"
              mercury__diet__V_19_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
            }
#line 1582 "diet.m"
            /* direct tailcall eliminated */
#line 1582 "diet.m"
            {
#line 1582 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_19_19;
#line 1582 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_17_17;
#line 1582 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_18_18;

#line 1582 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1582 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1582 "diet.m"
              mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1582 "diet.m"
            }
#line 1582 "diet.m"
            continue;
#line 1581 "diet.m"
          }
#line 1583 "diet.m"
        else
#line 1584 "diet.m"
          {
#line 1584 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1584 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1584 "diet.m"
          }
#line 1583 "diet.m"
      }
#line 1583 "diet.m"
      break;
#line 1583 "diet.m"
    }
#line 1570 "diet.m"
}

#line 1568 "diet.m"
void MR_CALL 
mercury__diet__fold_up2_7_p_1(
#line 1568 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_23,
#line 1568 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_24,
#line 1568 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
#line 1568 "diet.m"
  MR_Word mercury__diet__P_8,
#line 1568 "diet.m"
  MR_Box mercury__diet__Lo_9,
#line 1568 "diet.m"
  MR_Box mercury__diet__Hi_10,
#line 1568 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
#line 1568 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
#line 1568 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
#line 1568 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
#line 1568 "diet.m"
{
#line 1583 "diet.m"
  while (MR_TRUE)
#line 1583 "diet.m"
    {
#line 1583 "diet.m"
      /* tailcall optimized into a loop */
#line 1583 "diet.m"
      {
#line 1583 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 7601 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

#line 7604 "diet.c"
        {
#line 7606 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1583 "diet.m"
        if (mercury__diet__succeeded)
#line 1581 "diet.m"
          {
#line 1581 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_17_17;
#line 1581 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_18_18;
#line 1581 "diet.m"
            MR_Box mercury__diet__V_19_19;
#line 1581 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
#line 7623 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1581 "diet.m"
            {
#line 1581 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_8), mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_17_17, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_18_18);
            }
#line 7631 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
#line 7633 "diet.c"
            {
#line 7635 "diet.c"
              mercury__diet__V_19_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
            }
#line 1582 "diet.m"
            /* direct tailcall eliminated */
#line 1582 "diet.m"
            {
#line 1582 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_19_19;
#line 1582 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_17_17;
#line 1582 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_18_18;

#line 1582 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1582 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1582 "diet.m"
              mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1582 "diet.m"
            }
#line 1582 "diet.m"
            continue;
#line 1581 "diet.m"
          }
#line 1583 "diet.m"
        else
#line 1584 "diet.m"
          {
#line 1584 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1584 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1584 "diet.m"
          }
#line 1583 "diet.m"
      }
#line 1583 "diet.m"
      break;
#line 1583 "diet.m"
    }
#line 1568 "diet.m"
}

#line 1566 "diet.m"
void MR_CALL 
mercury__diet__fold_up2_7_p_0(
#line 1566 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_23,
#line 1566 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_24,
#line 1566 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_22,
#line 1566 "diet.m"
  MR_Word mercury__diet__P_8,
#line 1566 "diet.m"
  MR_Box mercury__diet__Lo_9,
#line 1566 "diet.m"
  MR_Box mercury__diet__Hi_10,
#line 1566 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
#line 1566 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
#line 1566 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
#line 1566 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
#line 1566 "diet.m"
{
#line 1583 "diet.m"
  while (MR_TRUE)
#line 1583 "diet.m"
    {
#line 1583 "diet.m"
      /* tailcall optimized into a loop */
#line 1583 "diet.m"
      {
#line 1583 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 7715 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 5)));

#line 7718 "diet.c"
        {
#line 7720 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Hi_10, mercury__diet__Lo_9);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1583 "diet.m"
        if (mercury__diet__succeeded)
#line 1581 "diet.m"
          {
#line 1581 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_17_17;
#line 1581 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_18_18;
#line 1581 "diet.m"
            MR_Box mercury__diet__V_19_19;
#line 1581 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
#line 7737 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1581 "diet.m"
            {
#line 1581 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_8), mercury__diet__Lo_9, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_17_17, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_18_18);
            }
#line 7745 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_22, (MR_Integer) 0)), (MR_Integer) 6)));
#line 7747 "diet.c"
            {
#line 7749 "diet.c"
              mercury__diet__V_19_19 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_22), mercury__diet__Lo_9);
            }
#line 1582 "diet.m"
            /* direct tailcall eliminated */
#line 1582 "diet.m"
            {
#line 1582 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_19_19;
#line 1582 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_17_17;
#line 1582 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_18_18;

#line 1582 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1582 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1582 "diet.m"
              mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1582 "diet.m"
            }
#line 1582 "diet.m"
            continue;
#line 1581 "diet.m"
          }
#line 1583 "diet.m"
        else
#line 1584 "diet.m"
          {
#line 1584 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1584 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1584 "diet.m"
          }
#line 1583 "diet.m"
      }
#line 1583 "diet.m"
      break;
#line 1583 "diet.m"
    }
#line 1566 "diet.m"
}

#line 1542 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl_2_5_p_5(
#line 1542 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc_16,
#line 1542 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_15,
#line 1542 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1542 "diet.m"
  MR_Box mercury__diet__Lo_7,
#line 1542 "diet.m"
  MR_Box mercury__diet__Hi_8,
#line 1542 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
#line 1542 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
#line 1542 "diet.m"
{
#line 1548 "diet.m"
  while (MR_TRUE)
#line 1548 "diet.m"
    {
#line 1548 "diet.m"
      /* tailcall optimized into a loop */
#line 1548 "diet.m"
      {
#line 1548 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 7823 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 7826 "diet.c"
        {
#line 7828 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1548 "diet.m"
        if (mercury__diet__succeeded)
#line 1546 "diet.m"
          {
#line 1546 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
#line 1546 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1546 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 7843 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1546 "diet.m"
            {
#line 1546 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_12_12);
            }
#line 1546 "diet.m"
            if (mercury__diet__succeeded)
#line 1546 "diet.m"
              {
#line 7855 "diet.c"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
#line 7857 "diet.c"
                {
#line 7859 "diet.c"
                  mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
                }
#line 1547 "diet.m"
                /* direct tailcall eliminated */
#line 1547 "diet.m"
                {
#line 1547 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_13_13;
#line 1547 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

#line 1547 "diet.m"
                  mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1547 "diet.m"
                  mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1547 "diet.m"
                }
#line 1547 "diet.m"
                continue;
#line 1546 "diet.m"
              }
#line 1546 "diet.m"
          }
#line 1548 "diet.m"
        else
#line 1548 "diet.m"
          {
#line 1548 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1548 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1548 "diet.m"
          }
#line 1548 "diet.m"
        return mercury__diet__succeeded;
#line 1548 "diet.m"
      }
#line 1548 "diet.m"
      break;
#line 1548 "diet.m"
    }
#line 1542 "diet.m"
}

#line 1541 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl_2_5_p_4(
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
#line 1548 "diet.m"
  while (MR_TRUE)
#line 1548 "diet.m"
    {
#line 1548 "diet.m"
      /* tailcall optimized into a loop */
#line 1548 "diet.m"
      {
#line 1548 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 7933 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 7936 "diet.c"
        {
#line 7938 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1548 "diet.m"
        if (mercury__diet__succeeded)
#line 1546 "diet.m"
          {
#line 1546 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
#line 1546 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1546 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 7953 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1546 "diet.m"
            {
#line 1546 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_12_12);
            }
#line 1546 "diet.m"
            if (mercury__diet__succeeded)
#line 1546 "diet.m"
              {
#line 7965 "diet.c"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
#line 7967 "diet.c"
                {
#line 7969 "diet.c"
                  mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
                }
#line 1547 "diet.m"
                /* direct tailcall eliminated */
#line 1547 "diet.m"
                {
#line 1547 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_13_13;
#line 1547 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

#line 1547 "diet.m"
                  mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1547 "diet.m"
                  mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1547 "diet.m"
                }
#line 1547 "diet.m"
                continue;
#line 1546 "diet.m"
              }
#line 1546 "diet.m"
          }
#line 1548 "diet.m"
        else
#line 1548 "diet.m"
          {
#line 1548 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1548 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1548 "diet.m"
          }
#line 1548 "diet.m"
        return mercury__diet__succeeded;
#line 1548 "diet.m"
      }
#line 1548 "diet.m"
      break;
#line 1548 "diet.m"
    }
#line 1541 "diet.m"
}

#line 1540 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl_2_5_p_3(
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
#line 1548 "diet.m"
  while (MR_TRUE)
#line 1548 "diet.m"
    {
#line 1548 "diet.m"
      /* tailcall optimized into a loop */
#line 1548 "diet.m"
      {
#line 1548 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 8043 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 8046 "diet.c"
        {
#line 8048 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1548 "diet.m"
        if (mercury__diet__succeeded)
#line 1546 "diet.m"
          {
#line 1546 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
#line 1546 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1546 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 8063 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1546 "diet.m"
            {
#line 1546 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_12_12);
            }
#line 1546 "diet.m"
            if (mercury__diet__succeeded)
#line 1546 "diet.m"
              {
#line 8075 "diet.c"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
#line 8077 "diet.c"
                {
#line 8079 "diet.c"
                  mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
                }
#line 1547 "diet.m"
                /* direct tailcall eliminated */
#line 1547 "diet.m"
                {
#line 1547 "diet.m"
                  MR_Box mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_13_13;
#line 1547 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

#line 1547 "diet.m"
                  mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1547 "diet.m"
                  mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1547 "diet.m"
                }
#line 1547 "diet.m"
                continue;
#line 1546 "diet.m"
              }
#line 1546 "diet.m"
          }
#line 1548 "diet.m"
        else
#line 1548 "diet.m"
          {
#line 1548 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1548 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1548 "diet.m"
          }
#line 1548 "diet.m"
        return mercury__diet__succeeded;
#line 1548 "diet.m"
      }
#line 1548 "diet.m"
      break;
#line 1548 "diet.m"
    }
#line 1540 "diet.m"
}

#line 1539 "diet.m"
void MR_CALL 
mercury__diet__foldl_2_5_p_2(
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
#line 1548 "diet.m"
  while (MR_TRUE)
#line 1548 "diet.m"
    {
#line 1548 "diet.m"
      /* tailcall optimized into a loop */
#line 1548 "diet.m"
      {
#line 1548 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 8153 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 8156 "diet.c"
        {
#line 8158 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1548 "diet.m"
        if (mercury__diet__succeeded)
#line 1546 "diet.m"
          {
#line 1546 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
#line 1546 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1546 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 8173 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1546 "diet.m"
            {
#line 1546 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_12_12);
            }
#line 8181 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
#line 8183 "diet.c"
            {
#line 8185 "diet.c"
              mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
            }
#line 1547 "diet.m"
            /* direct tailcall eliminated */
#line 1547 "diet.m"
            {
#line 1547 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_13_13;
#line 1547 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

#line 1547 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1547 "diet.m"
              mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1547 "diet.m"
            }
#line 1547 "diet.m"
            continue;
#line 1546 "diet.m"
          }
#line 1548 "diet.m"
        else
#line 1548 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1548 "diet.m"
      }
#line 1548 "diet.m"
      break;
#line 1548 "diet.m"
    }
#line 1539 "diet.m"
}

#line 1538 "diet.m"
void MR_CALL 
mercury__diet__foldl_2_5_p_1(
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
#line 1548 "diet.m"
  while (MR_TRUE)
#line 1548 "diet.m"
    {
#line 1548 "diet.m"
      /* tailcall optimized into a loop */
#line 1548 "diet.m"
      {
#line 1548 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 8249 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 8252 "diet.c"
        {
#line 8254 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1548 "diet.m"
        if (mercury__diet__succeeded)
#line 1546 "diet.m"
          {
#line 1546 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
#line 1546 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1546 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 8269 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1546 "diet.m"
            {
#line 1546 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_12_12);
            }
#line 8277 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
#line 8279 "diet.c"
            {
#line 8281 "diet.c"
              mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
            }
#line 1547 "diet.m"
            /* direct tailcall eliminated */
#line 1547 "diet.m"
            {
#line 1547 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_13_13;
#line 1547 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

#line 1547 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1547 "diet.m"
              mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1547 "diet.m"
            }
#line 1547 "diet.m"
            continue;
#line 1546 "diet.m"
          }
#line 1548 "diet.m"
        else
#line 1548 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1548 "diet.m"
      }
#line 1548 "diet.m"
      break;
#line 1548 "diet.m"
    }
#line 1538 "diet.m"
}

#line 1537 "diet.m"
void MR_CALL 
mercury__diet__foldl_2_5_p_0(
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
#line 1548 "diet.m"
  while (MR_TRUE)
#line 1548 "diet.m"
    {
#line 1548 "diet.m"
      /* tailcall optimized into a loop */
#line 1548 "diet.m"
      {
#line 1548 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 8345 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 8348 "diet.c"
        {
#line 8350 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Hi_8, mercury__diet__Lo_7);
        }
#line 481 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1548 "diet.m"
        if (mercury__diet__succeeded)
#line 1546 "diet.m"
          {
#line 1546 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_12_12;
#line 1546 "diet.m"
            MR_Box mercury__diet__V_13_13;
#line 1546 "diet.m"
            void MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 8365 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 1546 "diet.m"
            {
#line 1546 "diet.m"
              mercury__diet__func_1(((MR_Box) mercury__diet__P_6), mercury__diet__Lo_7, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_12_12);
            }
#line 8373 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_15, (MR_Integer) 0)), (MR_Integer) 6)));
#line 8375 "diet.c"
            {
#line 8377 "diet.c"
              mercury__diet__V_13_13 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_15), mercury__diet__Lo_7);
            }
#line 1547 "diet.m"
            /* direct tailcall eliminated */
#line 1547 "diet.m"
            {
#line 1547 "diet.m"
              MR_Box mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_13_13;
#line 1547 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_12_12;

#line 1547 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1547 "diet.m"
              mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1547 "diet.m"
            }
#line 1547 "diet.m"
            continue;
#line 1546 "diet.m"
          }
#line 1548 "diet.m"
        else
#line 1548 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1548 "diet.m"
      }
#line 1548 "diet.m"
      break;
#line 1548 "diet.m"
    }
#line 1537 "diet.m"
}

#line 1478 "diet.m"
void MR_CALL 
mercury__diet__count_3_p_0(
#line 1478 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_20,
#line 1478 "diet.m"
  MR_Word mercury__diet__T_4,
#line 1478 "diet.m"
  MR_Integer mercury__diet__Acc0_5,
#line 1478 "diet.m"
  MR_Integer * mercury__diet__Acc_6)
#line 1478 "diet.m"
{
#line 1482 "diet.m"
  while (MR_TRUE)
#line 1482 "diet.m"
    {
#line 1482 "diet.m"
      /* tailcall optimized into a loop */
#line 1482 "diet.m"
      {
#line 1482 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1482 "diet.m"
        if ((mercury__diet__T_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1483 "diet.m"
          *mercury__diet__Acc_6 = mercury__diet__Acc0_5;
#line 1482 "diet.m"
        else
#line 1485 "diet.m"
          {
#line 1485 "diet.m"
            MR_Box mercury__diet__X_7;
#line 1485 "diet.m"
            MR_Box mercury__diet__Y_8;
#line 1485 "diet.m"
            MR_Word mercury__diet__L_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_4, (MR_Integer) 2)));
#line 1485 "diet.m"
            MR_Word mercury__diet__R_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_4, (MR_Integer) 3)));
#line 1485 "diet.m"
            MR_Integer mercury__diet__Acc1_12;
#line 1485 "diet.m"
            MR_Integer mercury__diet__Acc2_13;
#line 1485 "diet.m"
            MR_Tuple mercury__diet__V_14_14 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_4, (MR_Integer) 0)));
#line 1485 "diet.m"
            MR_Integer mercury__diet__V_15_15;
#line 1485 "diet.m"
            MR_Integer mercury__diet__V_16_16;
#line 1485 "diet.m"
            MR_Integer mercury__diet__V_17_17;
#line 1485 "diet.m"
            MR_Integer mercury__diet__V_18_18;
#line 1485 "diet.m"
            MR_Integer mercury__diet__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_4, (MR_Integer) 1)));
#line 8468 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box);
#line 8470 "diet.c"
            MR_Box mercury__diet__conv1_V_17_17;
#line 8472 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);
#line 8474 "diet.c"
            MR_Box mercury__diet__conv3_V_18_18;

#line 1485 "diet.m"
            mercury__diet__X_7 = (MR_hl_field(MR_mktag(0), mercury__diet__V_14_14, (MR_Integer) 0));
#line 1485 "diet.m"
            mercury__diet__Y_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_14_14, (MR_Integer) 1));
#line 8481 "diet.c"
            mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8483 "diet.c"
            {
#line 8485 "diet.c"
              mercury__diet__conv1_V_17_17 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_enum_20), mercury__diet__Y_8);
            }
#line 8488 "diet.c"
            mercury__diet__V_17_17 = ((MR_Integer) mercury__diet__conv1_V_17_17);
#line 8490 "diet.c"
            mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8492 "diet.c"
            {
#line 8494 "diet.c"
              mercury__diet__conv3_V_18_18 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_enum_20), mercury__diet__X_7);
            }
#line 8497 "diet.c"
            mercury__diet__V_18_18 = ((MR_Integer) mercury__diet__conv3_V_18_18);
#line 1487 "diet.m"
            mercury__diet__V_16_16 = (mercury__diet__V_17_17 - mercury__diet__V_18_18);
#line 1487 "diet.m"
            mercury__diet__V_15_15 = (mercury__diet__Acc0_5 + mercury__diet__V_16_16);
#line 1487 "diet.m"
            mercury__diet__Acc1_12 = (mercury__diet__V_15_15 + (MR_Integer) 1);
#line 1488 "diet.m"
            {
#line 1488 "diet.m"
              mercury__diet__count_3_p_0(mercury__diet__TypeClassInfo_for_enum_20, mercury__diet__L_10, mercury__diet__Acc1_12, &mercury__diet__Acc2_13);
            }
#line 1489 "diet.m"
            /* direct tailcall eliminated */
#line 1489 "diet.m"
            {
#line 1489 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_4 = mercury__diet__R_11;
#line 1489 "diet.m"
              MR_Integer mercury__diet__Acc0__tmp_copy_5 = mercury__diet__Acc2_13;

#line 1489 "diet.m"
              mercury__diet__Acc0_5 = mercury__diet__Acc0__tmp_copy_5;
#line 1489 "diet.m"
              mercury__diet__T_4 = mercury__diet__T__tmp_copy_4;
#line 1489 "diet.m"
            }
#line 1489 "diet.m"
            continue;
#line 1485 "diet.m"
          }
#line 1482 "diet.m"
      }
#line 1482 "diet.m"
      break;
#line 1482 "diet.m"
    }
#line 1478 "diet.m"
}

#line 1458 "diet.m"
void MR_CALL 
mercury__diet__divide_2_6_p_0(
#line 1458 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_17,
#line 1458 "diet.m"
  MR_Word mercury__diet__Pred_7,
#line 1458 "diet.m"
  MR_Box mercury__diet__Elem_8,
#line 1458 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_TrueSet_0_11,
#line 1458 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_TrueSet_12,
#line 1458 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_FalseSet_0_13,
#line 1458 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_FalseSet_14)
#line 1458 "diet.m"
{
#line 1463 "diet.m"
  {
#line 1463 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1461 "diet.m"
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__diet__Pred_7, (MR_Integer) 1)));

#line 1461 "diet.m"
    {
#line 1461 "diet.m"
      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__Pred_7), mercury__diet__Elem_8);
    }
#line 1463 "diet.m"
    if (mercury__diet__succeeded)
#line 1462 "diet.m"
      {
#line 846 "diet.m"
        {
#line 846 "diet.m"
          *mercury__diet__STATE_VARIABLE_TrueSet_12 = mercury__diet__add_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_17, mercury__diet__Elem_8, mercury__diet__STATE_VARIABLE_TrueSet_0_11);
        }
#line 1462 "diet.m"
        *mercury__diet__STATE_VARIABLE_FalseSet_14 = mercury__diet__STATE_VARIABLE_FalseSet_0_13;
#line 1462 "diet.m"
      }
#line 1463 "diet.m"
    else
#line 1464 "diet.m"
      {
#line 846 "diet.m"
        {
#line 846 "diet.m"
          *mercury__diet__STATE_VARIABLE_FalseSet_14 = mercury__diet__add_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_17, mercury__diet__Elem_8, mercury__diet__STATE_VARIABLE_FalseSet_0_13);
        }
#line 1464 "diet.m"
        *mercury__diet__STATE_VARIABLE_TrueSet_12 = mercury__diet__STATE_VARIABLE_TrueSet_0_11;
#line 1464 "diet.m"
      }
#line 1463 "diet.m"
  }
#line 1458 "diet.m"
}

#line 1416 "diet.m"
static void MR_CALL 
mercury__diet__diff_helper_8_p_0(
#line 1416 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_44,
#line 1416 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 1416 "diet.m"
  MR_Word mercury__diet__Right0_11,
#line 1416 "diet.m"
  MR_Word mercury__diet__Left0_12,
#line 1416 "diet.m"
  MR_Word mercury__diet__Head0_13,
#line 1416 "diet.m"
  MR_Word mercury__diet__Stream0_14,
#line 1416 "diet.m"
  MR_Word * mercury__diet__Output_15,
#line 1416 "diet.m"
  MR_Word * mercury__diet__Head_16,
#line 1416 "diet.m"
  MR_Word * mercury__diet__Stream_17)
#line 1416 "diet.m"
{
#line 1421 "diet.m"
  while (MR_TRUE)
#line 1421 "diet.m"
    {
#line 1421 "diet.m"
      /* tailcall optimized into a loop */
#line 1421 "diet.m"
      {
#line 1421 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 1421 "diet.m"
        MR_Box mercury__diet__A_9 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 0));
#line 1421 "diet.m"
        MR_Box mercury__diet__B_10 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 1));

#line 1427 "diet.m"
        if ((mercury__diet__Head0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1423 "diet.m"
          {
#line 1424 "diet.m"
            {
#line 1424 "diet.m"
              *mercury__diet__Output_15 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__HeadVar__1_1, mercury__diet__Left0_12, mercury__diet__Right0_11);
            }
#line 1425 "diet.m"
            *mercury__diet__Head_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1426 "diet.m"
            *mercury__diet__Stream_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1423 "diet.m"
          }
#line 1427 "diet.m"
        else
#line 1428 "diet.m"
          {
#line 1428 "diet.m"
            MR_Box mercury__diet__X_18;
#line 1428 "diet.m"
            MR_Box mercury__diet__Y_19;
#line 1428 "diet.m"
            MR_Tuple mercury__diet__V_24_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_13, (MR_Integer) 0)));
#line 8663 "diet.c"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

#line 1428 "diet.m"
            mercury__diet__X_18 = (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 0));
#line 1428 "diet.m"
            mercury__diet__Y_19 = (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 1));
#line 8670 "diet.c"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8672 "diet.c"
            {
#line 8674 "diet.c"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_44), mercury__diet__Y_19, mercury__diet__A_9);
            }
#line 1433 "diet.m"
            if (mercury__diet__succeeded)
#line 1430 "diet.m"
              {
#line 1430 "diet.m"
                MR_Word mercury__diet__Head1_20;
#line 1430 "diet.m"
                MR_Word mercury__diet__Stream1_21;

#line 672 "diet.m"
                if ((mercury__diet__Stream0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "diet.m"
                  {
#line 673 "diet.m"
                    mercury__diet__Head1_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 674 "diet.m"
                    mercury__diet__Stream1_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 672 "diet.m"
                  }
#line 672 "diet.m"
                else
#line 676 "diet.m"
                  {
#line 676 "diet.m"
                    MR_Tuple mercury__diet__X_54;

#line 677 "diet.m"
                    {
#line 677 "diet.m"
                      mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__Stream0_14, &mercury__diet__X_54, &mercury__diet__Stream1_21);
                    }
#line 678 "diet.m"
                    {
#line 678 "diet.m"
                      mercury__diet__Head1_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 678 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__Head1_20, 0) = ((MR_Box) (mercury__diet__X_54));
#line 678 "diet.m"
                    }
#line 676 "diet.m"
                  }
#line 1431 "diet.m"
                /* direct tailcall eliminated */
#line 1431 "diet.m"
                {
#line 1431 "diet.m"
                  MR_Word mercury__diet__Head0__tmp_copy_13 = mercury__diet__Head1_20;
#line 1431 "diet.m"
                  MR_Word mercury__diet__Stream0__tmp_copy_14 = mercury__diet__Stream1_21;

#line 1431 "diet.m"
                  mercury__diet__Stream0_14 = mercury__diet__Stream0__tmp_copy_14;
#line 1431 "diet.m"
                  mercury__diet__Head0_13 = mercury__diet__Head0__tmp_copy_13;
#line 1431 "diet.m"
                }
#line 1431 "diet.m"
                continue;
#line 1430 "diet.m"
              }
#line 1433 "diet.m"
            else
#line 1436 "diet.m"
              {
#line 8741 "diet.c"
                MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 8744 "diet.c"
                {
#line 8746 "diet.c"
                  mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_44), mercury__diet__B_10, mercury__diet__X_18);
                }
#line 1436 "diet.m"
                if (mercury__diet__succeeded)
#line 1434 "diet.m"
                  {
#line 1434 "diet.m"
                    MR_Word mercury__diet__Right1_22;

#line 1434 "diet.m"
                    {
#line 1434 "diet.m"
                      mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__Right0_11, mercury__diet__Head0_13, mercury__diet__Stream0_14, &mercury__diet__Right1_22, mercury__diet__Head_16, mercury__diet__Stream_17);
                    }
#line 1435 "diet.m"
                    {
#line 1435 "diet.m"
                      *mercury__diet__Output_15 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__HeadVar__1_1, mercury__diet__Left0_12, mercury__diet__Right1_22);
                    }
#line 1434 "diet.m"
                  }
#line 1436 "diet.m"
                else
#line 1440 "diet.m"
                  {
#line 8772 "diet.c"
                    MR_bool MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 8775 "diet.c"
                    {
#line 8777 "diet.c"
                      mercury__diet__succeeded = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_44), mercury__diet__A_9, mercury__diet__X_18);
                    }
#line 1440 "diet.m"
                    if (mercury__diet__succeeded)
#line 1437 "diet.m"
                      {
#line 1437 "diet.m"
                        MR_Word mercury__diet__Left1_23;
#line 1437 "diet.m"
                        MR_Tuple mercury__diet__V_27_27;
#line 1437 "diet.m"
                        MR_Box mercury__diet__V_28_28;
#line 1437 "diet.m"
                        MR_Tuple mercury__diet__V_29_29;
#line 8792 "diet.c"
                        MR_Box MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 7)));

#line 8795 "diet.c"
                        {
#line 8797 "diet.c"
                          mercury__diet__V_28_28 = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_44), mercury__diet__X_18);
                        }
#line 1437 "diet.m"
                        {
#line 1437 "diet.m"
                          mercury__diet__V_27_27 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1437 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, 0) = mercury__diet__A_9;
#line 1437 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, 1) = mercury__diet__V_28_28;
#line 1437 "diet.m"
                        }
#line 1437 "diet.m"
                        {
#line 1437 "diet.m"
                          mercury__diet__Left1_23 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__V_27_27, mercury__diet__Left0_12);
                        }
#line 1438 "diet.m"
                        {
#line 1438 "diet.m"
                          mercury__diet__V_29_29 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1438 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_29_29, 0) = mercury__diet__X_18;
#line 1438 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_29_29, 1) = mercury__diet__B_10;
#line 1438 "diet.m"
                        }
#line 1438 "diet.m"
                        /* direct tailcall eliminated */
#line 1438 "diet.m"
                        {
#line 1438 "diet.m"
                          MR_Tuple mercury__diet__HeadVar__1__tmp_copy_1 = mercury__diet__V_29_29;
#line 1438 "diet.m"
                          MR_Word mercury__diet__Left0__tmp_copy_12 = mercury__diet__Left1_23;

#line 1438 "diet.m"
                          mercury__diet__Left0_12 = mercury__diet__Left0__tmp_copy_12;
#line 1438 "diet.m"
                          mercury__diet__HeadVar__1_1 = mercury__diet__HeadVar__1__tmp_copy_1;
#line 1438 "diet.m"
                        }
#line 1438 "diet.m"
                        continue;
#line 1437 "diet.m"
                      }
#line 1440 "diet.m"
                    else
#line 1444 "diet.m"
                      {
#line 8848 "diet.c"
                        MR_bool MR_CALL (* mercury__diet__func_4)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 8851 "diet.c"
                        {
#line 8853 "diet.c"
                          mercury__diet__succeeded = mercury__diet__func_4(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_44), mercury__diet__Y_19, mercury__diet__B_10);
                        }
#line 1444 "diet.m"
                        if (mercury__diet__succeeded)
#line 1441 "diet.m"
                          {
#line 1441 "diet.m"
                            MR_Tuple mercury__diet__V_30_30;
#line 1441 "diet.m"
                            MR_Box mercury__diet__V_31_31;
#line 1441 "diet.m"
                            MR_Word mercury__diet__Head1_33;
#line 1441 "diet.m"
                            MR_Word mercury__diet__Stream1_34;
#line 8868 "diet.c"
                            MR_Box MR_CALL (* mercury__diet__func_5)(MR_Box, MR_Box);

#line 672 "diet.m"
                            if ((mercury__diet__Stream0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "diet.m"
                              {
#line 673 "diet.m"
                                mercury__diet__Head1_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 674 "diet.m"
                                mercury__diet__Stream1_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 672 "diet.m"
                              }
#line 672 "diet.m"
                            else
#line 676 "diet.m"
                              {
#line 676 "diet.m"
                                MR_Tuple mercury__diet__X_68;

#line 677 "diet.m"
                                {
#line 677 "diet.m"
                                  mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__Stream0_14, &mercury__diet__X_68, &mercury__diet__Stream1_34);
                                }
#line 678 "diet.m"
                                {
#line 678 "diet.m"
                                  mercury__diet__Head1_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 678 "diet.m"
                                  MR_hl_field(MR_mktag(1), mercury__diet__Head1_33, 0) = ((MR_Box) (mercury__diet__X_68));
#line 678 "diet.m"
                                }
#line 676 "diet.m"
                              }
#line 8903 "diet.c"
                            mercury__diet__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_44, (MR_Integer) 0)), (MR_Integer) 6)));
#line 8905 "diet.c"
                            {
#line 8907 "diet.c"
                              mercury__diet__V_31_31 = mercury__diet__func_5(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_44), mercury__diet__Y_19);
                            }
#line 1442 "diet.m"
                            {
#line 1442 "diet.m"
                              mercury__diet__V_30_30 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1442 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, 0) = mercury__diet__V_31_31;
#line 1442 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, 1) = mercury__diet__B_10;
#line 1442 "diet.m"
                            }
#line 1442 "diet.m"
                            /* direct tailcall eliminated */
#line 1442 "diet.m"
                            {
#line 1442 "diet.m"
                              MR_Tuple mercury__diet__HeadVar__1__tmp_copy_1 = mercury__diet__V_30_30;
#line 1442 "diet.m"
                              MR_Word mercury__diet__Head0__tmp_copy_13 = mercury__diet__Head1_33;
#line 1442 "diet.m"
                              MR_Word mercury__diet__Stream0__tmp_copy_14 = mercury__diet__Stream1_34;

#line 1442 "diet.m"
                              mercury__diet__Stream0_14 = mercury__diet__Stream0__tmp_copy_14;
#line 1442 "diet.m"
                              mercury__diet__Head0_13 = mercury__diet__Head0__tmp_copy_13;
#line 1442 "diet.m"
                              mercury__diet__HeadVar__1_1 = mercury__diet__HeadVar__1__tmp_copy_1;
#line 1442 "diet.m"
                            }
#line 1442 "diet.m"
                            continue;
#line 1441 "diet.m"
                          }
#line 1444 "diet.m"
                        else
#line 1445 "diet.m"
                          {
#line 1445 "diet.m"
                            MR_Word mercury__diet__Right1_35;

#line 1445 "diet.m"
                            {
#line 1445 "diet.m"
                              mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__Right0_11, mercury__diet__Head0_13, mercury__diet__Stream0_14, &mercury__diet__Right1_35, mercury__diet__Head_16, mercury__diet__Stream_17);
                            }
#line 1446 "diet.m"
                            {
#line 1446 "diet.m"
                              *mercury__diet__Output_15 = mercury__diet__reroot_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_44, mercury__diet__Left0_12, mercury__diet__Right1_35);
                            }
#line 1445 "diet.m"
                          }
#line 1444 "diet.m"
                      }
#line 1440 "diet.m"
                  }
#line 1436 "diet.m"
              }
#line 1428 "diet.m"
          }
#line 1421 "diet.m"
      }
#line 1421 "diet.m"
      break;
#line 1421 "diet.m"
    }
#line 1416 "diet.m"
}

#line 1386 "diet.m"
static void MR_CALL 
mercury__diet__diff_6_p_0(
#line 1386 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_27,
#line 1386 "diet.m"
  MR_Word mercury__diet__Input_7,
#line 1386 "diet.m"
  MR_Word mercury__diet__Head0_8,
#line 1386 "diet.m"
  MR_Word mercury__diet__Stream0_9,
#line 1386 "diet.m"
  MR_Word * mercury__diet__Output_10,
#line 1386 "diet.m"
  MR_Word * mercury__diet__Head_11,
#line 1386 "diet.m"
  MR_Word * mercury__diet__Stream_12)
#line 1386 "diet.m"
{
#line 1392 "diet.m"
  {
#line 1392 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1392 "diet.m"
    if ((mercury__diet__Head0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1392 "diet.m"
      {
#line 1393 "diet.m"
        *mercury__diet__Output_10 = mercury__diet__Input_7;
#line 1394 "diet.m"
        *mercury__diet__Head_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1395 "diet.m"
        *mercury__diet__Stream_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1392 "diet.m"
      }
#line 1392 "diet.m"
    else
#line 1392 "diet.m"
      {
#line 1392 "diet.m"
        MR_Tuple mercury__diet__V_28_28 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_8, (MR_Integer) 0)));

#line 1392 "diet.m"
        if ((mercury__diet__Input_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1397 "diet.m"
          {
#line 1399 "diet.m"
            *mercury__diet__Output_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1400 "diet.m"
            *mercury__diet__Head_11 = mercury__diet__Head0_8;
#line 1401 "diet.m"
            *mercury__diet__Stream_12 = mercury__diet__Stream0_9;
#line 1397 "diet.m"
          }
#line 1392 "diet.m"
        else
#line 1403 "diet.m"
          {
#line 1403 "diet.m"
            MR_Box mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, (MR_Integer) 0));
#line 1403 "diet.m"
            MR_Box mercury__diet__A_16;
#line 1403 "diet.m"
            MR_Word mercury__diet__Left0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 2)));
#line 1403 "diet.m"
            MR_Word mercury__diet__Right0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 3)));
#line 1403 "diet.m"
            MR_Word mercury__diet__Left1_21;
#line 1403 "diet.m"
            MR_Word mercury__diet__Head1_22;
#line 1403 "diet.m"
            MR_Word mercury__diet__Stream1_23;
#line 1403 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 0)));
#line 1403 "diet.m"
            MR_Box mercury__diet___Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, (MR_Integer) 1));
#line 1404 "diet.m"
            MR_Integer mercury__diet__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 1)));
#line 1404 "diet.m"
            MR_Box mercury__diet__B_17;
#line 9060 "diet.c"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

#line 1404 "diet.m"
            mercury__diet__A_16 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0));
#line 1404 "diet.m"
            mercury__diet__B_17 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1));
#line 9067 "diet.c"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9069 "diet.c"
            {
#line 9071 "diet.c"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_27), mercury__diet__X_14, mercury__diet__A_16);
            }
#line 1407 "diet.m"
            if (mercury__diet__succeeded)
#line 1406 "diet.m"
              {
#line 1406 "diet.m"
                mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__Left0_19, mercury__diet__Head0_8, mercury__diet__Stream0_9, &mercury__diet__Left1_21, &mercury__diet__Head1_22, &mercury__diet__Stream1_23);
              }
#line 1407 "diet.m"
            else
#line 1408 "diet.m"
              {
#line 1408 "diet.m"
                mercury__diet__Left1_21 = mercury__diet__Left0_19;
#line 1409 "diet.m"
                mercury__diet__Head1_22 = mercury__diet__Head0_8;
#line 1410 "diet.m"
                mercury__diet__Stream1_23 = mercury__diet__Stream0_9;
#line 1408 "diet.m"
              }
#line 1412 "diet.m"
            {
#line 1412 "diet.m"
              mercury__diet__diff_helper_8_p_0(mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__V_25_25, mercury__diet__Right0_20, mercury__diet__Left1_21, mercury__diet__Head1_22, mercury__diet__Stream1_23, mercury__diet__Output_10, mercury__diet__Head_11, mercury__diet__Stream_12);
#line 1412 "diet.m"
              return;
            }
#line 1403 "diet.m"
          }
#line 1392 "diet.m"
      }
#line 1392 "diet.m"
  }
#line 1386 "diet.m"
}

#line 1315 "diet.m"
static void MR_CALL 
mercury__diet__inter_help_8_p_0(
#line 1315 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_49,
#line 1315 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 1315 "diet.m"
  MR_Word mercury__diet__Right0_11,
#line 1315 "diet.m"
  MR_Word mercury__diet__Left0_12,
#line 1315 "diet.m"
  MR_Word mercury__diet__Head0_13,
#line 1315 "diet.m"
  MR_Word mercury__diet__Stream0_14,
#line 1315 "diet.m"
  MR_Word * mercury__diet__Result_15,
#line 1315 "diet.m"
  MR_Word * mercury__diet__Head_16,
#line 1315 "diet.m"
  MR_Word * mercury__diet__Stream_17)
#line 1315 "diet.m"
{
#line 1320 "diet.m"
  while (MR_TRUE)
#line 1320 "diet.m"
    {
#line 1320 "diet.m"
      /* tailcall optimized into a loop */
#line 1320 "diet.m"
      {
#line 1320 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 1320 "diet.m"
        MR_Box mercury__diet__A_9 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 0));
#line 1320 "diet.m"
        MR_Box mercury__diet__B_10 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 1));

#line 1326 "diet.m"
        if ((mercury__diet__Head0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1322 "diet.m"
          {
#line 1323 "diet.m"
            *mercury__diet__Result_15 = mercury__diet__Left0_12;
#line 1324 "diet.m"
            *mercury__diet__Head_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1325 "diet.m"
            *mercury__diet__Stream_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1322 "diet.m"
          }
#line 1326 "diet.m"
        else
#line 1327 "diet.m"
          {
#line 1327 "diet.m"
            MR_Box mercury__diet__X_18;
#line 1327 "diet.m"
            MR_Box mercury__diet__Y_19;
#line 1327 "diet.m"
            MR_Tuple mercury__diet__V_28_28 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_13, (MR_Integer) 0)));
#line 9169 "diet.c"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

#line 1327 "diet.m"
            mercury__diet__X_18 = (MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, (MR_Integer) 0));
#line 1327 "diet.m"
            mercury__diet__Y_19 = (MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, (MR_Integer) 1));
#line 9176 "diet.c"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9178 "diet.c"
            {
#line 9180 "diet.c"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__Y_19, mercury__diet__A_9);
            }
#line 1340 "diet.m"
            if (mercury__diet__succeeded)
#line 1334 "diet.m"
              if ((mercury__diet__Stream0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1330 "diet.m"
                {
#line 1331 "diet.m"
                  *mercury__diet__Result_15 = mercury__diet__Left0_12;
#line 1332 "diet.m"
                  *mercury__diet__Head_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1333 "diet.m"
                  *mercury__diet__Stream_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1330 "diet.m"
                }
#line 1334 "diet.m"
              else
#line 1335 "diet.m"
                {
#line 1335 "diet.m"
                  MR_Tuple mercury__diet__Head1_24;
#line 1335 "diet.m"
                  MR_Word mercury__diet__Stream1_25;
#line 1335 "diet.m"
                  MR_Word mercury__diet__V_30_30;

#line 1336 "diet.m"
                  {
#line 1336 "diet.m"
                    mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__Stream0_14, &mercury__diet__Head1_24, &mercury__diet__Stream1_25);
                  }
#line 1337 "diet.m"
                  {
#line 1337 "diet.m"
                    mercury__diet__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1337 "diet.m"
                    MR_hl_field(MR_mktag(1), mercury__diet__V_30_30, 0) = ((MR_Box) (mercury__diet__Head1_24));
#line 1337 "diet.m"
                  }
#line 1337 "diet.m"
                  /* direct tailcall eliminated */
#line 1337 "diet.m"
                  {
#line 1337 "diet.m"
                    MR_Word mercury__diet__Head0__tmp_copy_13 = mercury__diet__V_30_30;
#line 1337 "diet.m"
                    MR_Word mercury__diet__Stream0__tmp_copy_14 = mercury__diet__Stream1_25;

#line 1337 "diet.m"
                    mercury__diet__Stream0_14 = mercury__diet__Stream0__tmp_copy_14;
#line 1337 "diet.m"
                    mercury__diet__Head0_13 = mercury__diet__Head0__tmp_copy_13;
#line 1337 "diet.m"
                  }
#line 1337 "diet.m"
                  continue;
#line 1335 "diet.m"
                }
#line 1340 "diet.m"
            else
#line 1345 "diet.m"
              {
#line 9244 "diet.c"
                MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9247 "diet.c"
                {
#line 9249 "diet.c"
                  mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__B_10, mercury__diet__X_18);
                }
#line 1345 "diet.m"
                if (mercury__diet__succeeded)
#line 1341 "diet.m"
                  {
#line 1341 "diet.m"
                    MR_Word mercury__diet__Right1_26;
#line 636 "diet.m"
                    MR_Integer mercury__diet__V_68_68;
#line 636 "diet.m"
                    MR_Integer mercury__diet__V_69_69;
#line 102 "private_builtin.opt"
                    MR_Word mercury__diet__TypeInfo_27_76;
#line 102 "private_builtin.opt"
                    MR_Word mercury__diet__TypeInfo_28_77;

#line 1341 "diet.m"
                    {
#line 1341 "diet.m"
                      mercury__diet__inter_2_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__Right0_11, mercury__diet__Head0_13, mercury__diet__Stream0_14, &mercury__diet__Right1_26, mercury__diet__Head_16, mercury__diet__Stream_17);
                    }
#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__inter_help_8_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_49 ;
	Index =  (MR_Integer) 1 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9287 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_27_76  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 513 "diet.m"
                    if ((mercury__diet__Left0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
                      mercury__diet__V_68_68 = (MR_Integer) 0;
#line 513 "diet.m"
                    else
#line 514 "diet.m"
                      {
#line 514 "diet.m"
                        MR_Tuple mercury__diet__V_78_78 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Left0_12, (MR_Integer) 0)));
#line 514 "diet.m"
                        MR_Word mercury__diet__V_80_80;
#line 514 "diet.m"
                        MR_Word mercury__diet__V_81_81;

#line 514 "diet.m"
                        mercury__diet__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Left0_12, (MR_Integer) 1)));
#line 514 "diet.m"
                        mercury__diet__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Left0_12, (MR_Integer) 2)));
#line 514 "diet.m"
                        mercury__diet__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Left0_12, (MR_Integer) 3)));
#line 514 "diet.m"
                      }
#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__inter_help_8_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_49 ;
	Index =  (MR_Integer) 1 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9332 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_28_77  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 513 "diet.m"
                    if ((mercury__diet__Right1_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
                      mercury__diet__V_69_69 = (MR_Integer) 0;
#line 513 "diet.m"
                    else
#line 514 "diet.m"
                      {
#line 514 "diet.m"
                        MR_Tuple mercury__diet__V_82_82 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Right1_26, (MR_Integer) 0)));
#line 514 "diet.m"
                        MR_Word mercury__diet__V_84_84;
#line 514 "diet.m"
                        MR_Word mercury__diet__V_85_85;

#line 514 "diet.m"
                        mercury__diet__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Right1_26, (MR_Integer) 1)));
#line 514 "diet.m"
                        mercury__diet__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Right1_26, (MR_Integer) 2)));
#line 514 "diet.m"
                        mercury__diet__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Right1_26, (MR_Integer) 3)));
#line 514 "diet.m"
                      }
#line 494 "diet.m"
                    mercury__diet__succeeded = (mercury__diet__V_68_68 > mercury__diet__V_69_69);
#line 645 "diet.m"
                    if (mercury__diet__succeeded)
#line 640 "diet.m"
                      if ((mercury__diet__Left0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 638 "diet.m"
                        {
#line 639 "diet.m"
                          {
#line 639 "diet.m"
                            mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.reroot\'/2", (MR_String) "L empty");
#line 639 "diet.m"
                            return;
                          }
#line 638 "diet.m"
                        }
#line 640 "diet.m"
                      else
#line 641 "diet.m"
                        {
#line 641 "diet.m"
                          MR_Tuple mercury__diet__I_61;
#line 641 "diet.m"
                          MR_Word mercury__diet__L1_62;

#line 642 "diet.m"
                          {
#line 642 "diet.m"
                            mercury__diet__take_max_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__Left0_12, &mercury__diet__I_61, &mercury__diet__L1_62);
                          }
#line 643 "diet.m"
                          {
#line 643 "diet.m"
                            *mercury__diet__Result_15 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__I_61, mercury__diet__L1_62, mercury__diet__Right1_26);
                          }
#line 641 "diet.m"
                        }
#line 645 "diet.m"
                    else
#line 648 "diet.m"
                    if ((mercury__diet__Right1_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "diet.m"
                      *mercury__diet__Result_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 648 "diet.m"
                    else
#line 649 "diet.m"
                      {
#line 649 "diet.m"
                        MR_Word mercury__diet__R1_67;
#line 649 "diet.m"
                        MR_Tuple mercury__diet__I_73;

#line 650 "diet.m"
                        {
#line 650 "diet.m"
                          mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__Right1_26, &mercury__diet__I_73, &mercury__diet__R1_67);
                        }
#line 651 "diet.m"
                        {
#line 651 "diet.m"
                          *mercury__diet__Result_15 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__I_73, mercury__diet__Left0_12, mercury__diet__R1_67);
                        }
#line 649 "diet.m"
                      }
#line 1341 "diet.m"
                  }
#line 1345 "diet.m"
                else
#line 1350 "diet.m"
                  {
#line 1345 "diet.m"
                    MR_Box mercury__diet__V_31_31;
#line 9435 "diet.c"
                    MR_bool MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9437 "diet.c"
                    MR_bool MR_CALL (* mercury__diet__func_4)(MR_Box, MR_Box, MR_Box);

#line 9440 "diet.c"
                    {
#line 9442 "diet.c"
                      mercury__diet__succeeded = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__Y_19, mercury__diet__B_10);
                    }
#line 456 "diet.m"
                    if (mercury__diet__succeeded)
#line 9447 "diet.c"
                      {
#line 9449 "diet.c"
                        MR_Box MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 7)));

#line 9452 "diet.c"
                        {
#line 9454 "diet.c"
                          mercury__diet__V_31_31 = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__B_10);
                        }
#line 9457 "diet.c"
                      }
#line 456 "diet.m"
                    else
#line 457 "diet.m"
                      mercury__diet__V_31_31 = mercury__diet__B_10;
#line 9463 "diet.c"
                    mercury__diet__func_4 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9465 "diet.c"
                    {
#line 9467 "diet.c"
                      mercury__diet__succeeded = mercury__diet__func_4(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__Y_19, mercury__diet__V_31_31);
                    }
#line 475 "diet.m"
                    mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1350 "diet.m"
                    if (mercury__diet__succeeded)
#line 1346 "diet.m"
                      {
#line 1346 "diet.m"
                        MR_Tuple mercury__diet__V_32_32;
#line 1346 "diet.m"
                        MR_Box mercury__diet__V_33_33;
#line 1346 "diet.m"
                        MR_Box mercury__diet__V_34_34;
#line 1346 "diet.m"
                        MR_Word mercury__diet__Right1_43;
#line 9484 "diet.c"
                        MR_bool MR_CALL (* mercury__diet__func_5)(MR_Box, MR_Box, MR_Box);

#line 1346 "diet.m"
                        {
#line 1346 "diet.m"
                          mercury__diet__inter_2_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__Right0_11, mercury__diet__Head0_13, mercury__diet__Stream0_14, &mercury__diet__Right1_43, mercury__diet__Head_16, mercury__diet__Stream_17);
                        }
#line 9492 "diet.c"
                        mercury__diet__func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9494 "diet.c"
                        {
#line 9496 "diet.c"
                          mercury__diet__succeeded = mercury__diet__func_5(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__A_9, mercury__diet__X_18);
                        }
#line 489 "diet.m"
                        if (mercury__diet__succeeded)
#line 489 "diet.m"
                          mercury__diet__V_33_33 = mercury__diet__X_18;
#line 489 "diet.m"
                        else
#line 489 "diet.m"
                          mercury__diet__V_33_33 = mercury__diet__A_9;
#line 1347 "diet.m"
                        {
#line 1347 "diet.m"
                          mercury__diet__V_34_34 = mercury__diet__min_elem_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__Y_19, mercury__diet__B_10);
                        }
#line 1347 "diet.m"
                        {
#line 1347 "diet.m"
                          mercury__diet__V_32_32 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1347 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_32_32, 0) = mercury__diet__V_33_33;
#line 1347 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_32_32, 1) = mercury__diet__V_34_34;
#line 1347 "diet.m"
                        }
#line 1347 "diet.m"
                        {
#line 1347 "diet.m"
                          *mercury__diet__Result_15 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__V_32_32, mercury__diet__Left0_12, mercury__diet__Right1_43);
                        }
#line 1346 "diet.m"
                      }
#line 1350 "diet.m"
                    else
#line 1351 "diet.m"
                      {
#line 1351 "diet.m"
                        MR_Word mercury__diet__Left1_27;
#line 1351 "diet.m"
                        MR_Tuple mercury__diet__V_35_35;
#line 1351 "diet.m"
                        MR_Box mercury__diet__V_36_36;
#line 1351 "diet.m"
                        MR_Tuple mercury__diet__V_37_37;
#line 1351 "diet.m"
                        MR_Box mercury__diet__V_38_38;
#line 9543 "diet.c"
                        MR_Box MR_CALL (* mercury__diet__func_6)(MR_Box, MR_Box);

#line 1351 "diet.m"
                        {
#line 1351 "diet.m"
                          mercury__diet__V_36_36 = mercury__diet__max_elem_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__X_18, mercury__diet__A_9);
                        }
#line 1351 "diet.m"
                        {
#line 1351 "diet.m"
                          mercury__diet__V_35_35 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1351 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, 0) = mercury__diet__V_36_36;
#line 1351 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, 1) = mercury__diet__Y_19;
#line 1351 "diet.m"
                        }
#line 1351 "diet.m"
                        {
#line 1351 "diet.m"
                          mercury__diet__Left1_27 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_49, mercury__diet__V_35_35, mercury__diet__Left0_12);
                        }
#line 9566 "diet.c"
                        mercury__diet__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_49, (MR_Integer) 0)), (MR_Integer) 6)));
#line 9568 "diet.c"
                        {
#line 9570 "diet.c"
                          mercury__diet__V_38_38 = mercury__diet__func_6(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_49), mercury__diet__Y_19);
                        }
#line 1352 "diet.m"
                        {
#line 1352 "diet.m"
                          mercury__diet__V_37_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1352 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_37_37, 0) = mercury__diet__V_38_38;
#line 1352 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_37_37, 1) = mercury__diet__B_10;
#line 1352 "diet.m"
                        }
#line 1352 "diet.m"
                        /* direct tailcall eliminated */
#line 1352 "diet.m"
                        {
#line 1352 "diet.m"
                          MR_Tuple mercury__diet__HeadVar__1__tmp_copy_1 = mercury__diet__V_37_37;
#line 1352 "diet.m"
                          MR_Word mercury__diet__Left0__tmp_copy_12 = mercury__diet__Left1_27;

#line 1352 "diet.m"
                          mercury__diet__Left0_12 = mercury__diet__Left0__tmp_copy_12;
#line 1352 "diet.m"
                          mercury__diet__HeadVar__1_1 = mercury__diet__HeadVar__1__tmp_copy_1;
#line 1352 "diet.m"
                        }
#line 1352 "diet.m"
                        continue;
#line 1351 "diet.m"
                      }
#line 1350 "diet.m"
                  }
#line 1345 "diet.m"
              }
#line 1327 "diet.m"
          }
#line 1320 "diet.m"
      }
#line 1320 "diet.m"
      break;
#line 1320 "diet.m"
    }
#line 1315 "diet.m"
}

#line 1285 "diet.m"
static void MR_CALL 
mercury__diet__inter_2_6_p_0(
#line 1285 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_26,
#line 1285 "diet.m"
  MR_Word mercury__diet__Input_7,
#line 1285 "diet.m"
  MR_Word mercury__diet__Head0_8,
#line 1285 "diet.m"
  MR_Word mercury__diet__Stream0_9,
#line 1285 "diet.m"
  MR_Word * mercury__diet__Result_10,
#line 1285 "diet.m"
  MR_Word * mercury__diet__Head_11,
#line 1285 "diet.m"
  MR_Word * mercury__diet__Stream_12)
#line 1285 "diet.m"
{
#line 1290 "diet.m"
  {
#line 1290 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1290 "diet.m"
    if ((mercury__diet__Head0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1290 "diet.m"
      {
#line 1291 "diet.m"
        *mercury__diet__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1292 "diet.m"
        *mercury__diet__Head_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1293 "diet.m"
        *mercury__diet__Stream_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1290 "diet.m"
      }
#line 1290 "diet.m"
    else
#line 1295 "diet.m"
      {
#line 1295 "diet.m"
        MR_Box mercury__diet__X_13;
#line 1295 "diet.m"
        MR_Tuple mercury__diet__V_23_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_8, (MR_Integer) 0)));
#line 1295 "diet.m"
        MR_Box mercury__diet___Y_14;

#line 1295 "diet.m"
        mercury__diet__X_13 = (MR_hl_field(MR_mktag(0), mercury__diet__V_23_23, (MR_Integer) 0));
#line 1295 "diet.m"
        mercury__diet___Y_14 = (MR_hl_field(MR_mktag(0), mercury__diet__V_23_23, (MR_Integer) 1));
#line 1301 "diet.m"
        if ((mercury__diet__Input_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1297 "diet.m"
          {
#line 1298 "diet.m"
            *mercury__diet__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1299 "diet.m"
            *mercury__diet__Head_11 = mercury__diet__Head0_8;
#line 1300 "diet.m"
            *mercury__diet__Stream_12 = mercury__diet__Stream0_9;
#line 1297 "diet.m"
          }
#line 1301 "diet.m"
        else
#line 1302 "diet.m"
          {
#line 1302 "diet.m"
            MR_Box mercury__diet__A_15;
#line 1302 "diet.m"
            MR_Word mercury__diet__Left0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 2)));
#line 1302 "diet.m"
            MR_Word mercury__diet__Right0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 3)));
#line 1302 "diet.m"
            MR_Word mercury__diet__Left1_20;
#line 1302 "diet.m"
            MR_Word mercury__diet__Head1_21;
#line 1302 "diet.m"
            MR_Word mercury__diet__Stream1_22;
#line 1302 "diet.m"
            MR_Tuple mercury__diet__V_24_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 0)));
#line 1302 "diet.m"
            MR_Integer mercury__diet__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 1)));
#line 1302 "diet.m"
            MR_Box mercury__diet__B_16;
#line 9702 "diet.c"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

#line 1302 "diet.m"
            mercury__diet__A_15 = (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 0));
#line 1302 "diet.m"
            mercury__diet__B_16 = (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 1));
#line 9709 "diet.c"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9711 "diet.c"
            {
#line 9713 "diet.c"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__X_13, mercury__diet__A_15);
            }
#line 1305 "diet.m"
            if (mercury__diet__succeeded)
#line 1304 "diet.m"
              {
#line 1304 "diet.m"
                mercury__diet__inter_2_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__Left0_18, mercury__diet__Head0_8, mercury__diet__Stream0_9, &mercury__diet__Left1_20, &mercury__diet__Head1_21, &mercury__diet__Stream1_22);
              }
#line 1305 "diet.m"
            else
#line 1306 "diet.m"
              {
#line 1306 "diet.m"
                mercury__diet__Left1_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1307 "diet.m"
                mercury__diet__Head1_21 = mercury__diet__Head0_8;
#line 1308 "diet.m"
                mercury__diet__Stream1_22 = mercury__diet__Stream0_9;
#line 1306 "diet.m"
              }
#line 1310 "diet.m"
            {
#line 1310 "diet.m"
              mercury__diet__inter_help_8_p_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__V_24_24, mercury__diet__Right0_19, mercury__diet__Left1_20, mercury__diet__Head1_21, mercury__diet__Stream1_22, mercury__diet__Result_10, mercury__diet__Head_11, mercury__diet__Stream_12);
#line 1310 "diet.m"
              return;
            }
#line 1302 "diet.m"
          }
#line 1295 "diet.m"
      }
#line 1290 "diet.m"
  }
#line 1285 "diet.m"
}

#line 1271 "diet.m"
MR_Word MR_CALL 
mercury__diet__inter_2_f_0(
#line 1271 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_18,
#line 1271 "diet.m"
  MR_Word mercury__diet__Input_4,
#line 1271 "diet.m"
  MR_Word mercury__diet__Stream0_5)
#line 1271 "diet.m"
{
#line 1276 "diet.m"
  while (MR_TRUE)
#line 1276 "diet.m"
    {
#line 1276 "diet.m"
      /* tailcall optimized into a loop */
#line 1276 "diet.m"
      {
#line 1276 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 1276 "diet.m"
        MR_Word mercury__diet__Result_6;
#line 1274 "diet.m"
        MR_Integer mercury__diet__V_15_15;
#line 1274 "diet.m"
        MR_Integer mercury__diet__V_16_16;
#line 102 "private_builtin.opt"
        MR_Word mercury__diet__TypeInfo_20_20;
#line 102 "private_builtin.opt"
        MR_Word mercury__diet__TypeInfo_21_21;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__inter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_18 ;
	Index =  (MR_Integer) 1 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9798 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_20_20  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 513 "diet.m"
        if ((mercury__diet__Stream0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
          mercury__diet__V_15_15 = (MR_Integer) 0;
#line 513 "diet.m"
        else
#line 514 "diet.m"
          {
#line 514 "diet.m"
            MR_Tuple mercury__diet__V_22_22 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 0)));
#line 514 "diet.m"
            MR_Word mercury__diet__V_24_24;
#line 514 "diet.m"
            MR_Word mercury__diet__V_25_25;

#line 514 "diet.m"
            mercury__diet__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 1)));
#line 514 "diet.m"
            mercury__diet__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 2)));
#line 514 "diet.m"
            mercury__diet__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 3)));
#line 514 "diet.m"
          }
#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__inter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_18 ;
	Index =  (MR_Integer) 1 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9843 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_21_21  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 513 "diet.m"
        if ((mercury__diet__Input_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
          mercury__diet__V_16_16 = (MR_Integer) 0;
#line 513 "diet.m"
        else
#line 514 "diet.m"
          {
#line 514 "diet.m"
            MR_Tuple mercury__diet__V_26_26 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 0)));
#line 514 "diet.m"
            MR_Word mercury__diet__V_28_28;
#line 514 "diet.m"
            MR_Word mercury__diet__V_29_29;

#line 514 "diet.m"
            mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 1)));
#line 514 "diet.m"
            mercury__diet__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 2)));
#line 514 "diet.m"
            mercury__diet__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 3)));
#line 514 "diet.m"
          }
#line 494 "diet.m"
        mercury__diet__succeeded = (mercury__diet__V_15_15 > mercury__diet__V_16_16);
#line 1276 "diet.m"
        if (mercury__diet__succeeded)
#line 1275 "diet.m"
          {
#line 1275 "diet.m"
            /* direct tailcall eliminated */
#line 1275 "diet.m"
            {
#line 1275 "diet.m"
              MR_Word mercury__diet__Input__tmp_copy_4 = mercury__diet__Stream0_5;
#line 1275 "diet.m"
              MR_Word mercury__diet__Stream0__tmp_copy_5 = mercury__diet__Input_4;

#line 1275 "diet.m"
              mercury__diet__Stream0_5 = mercury__diet__Stream0__tmp_copy_5;
#line 1275 "diet.m"
              mercury__diet__Input_4 = mercury__diet__Input__tmp_copy_4;
#line 1275 "diet.m"
            }
#line 1275 "diet.m"
            continue;
#line 1275 "diet.m"
          }
#line 1276 "diet.m"
        else
#line 1279 "diet.m"
        if ((mercury__diet__Stream0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1278 "diet.m"
          mercury__diet__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1279 "diet.m"
        else
#line 1280 "diet.m"
          {
#line 1280 "diet.m"
            MR_Tuple mercury__diet__Head_11;
#line 1280 "diet.m"
            MR_Word mercury__diet__Stream_12;
#line 1280 "diet.m"
            MR_Word mercury__diet__V_17_17;
#line 1282 "diet.m"
            MR_Word mercury__diet__V_13_13;
#line 1282 "diet.m"
            MR_Word mercury__diet__V_14_14;

#line 1281 "diet.m"
            {
#line 1281 "diet.m"
              mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__Stream0_5, &mercury__diet__Head_11, &mercury__diet__Stream_12);
            }
#line 1282 "diet.m"
            {
#line 1282 "diet.m"
              mercury__diet__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1282 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__V_17_17, 0) = ((MR_Box) (mercury__diet__Head_11));
#line 1282 "diet.m"
            }
#line 1282 "diet.m"
            {
#line 1282 "diet.m"
              mercury__diet__inter_2_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__Input_4, mercury__diet__V_17_17, mercury__diet__Stream_12, &mercury__diet__Result_6, &mercury__diet__V_13_13, &mercury__diet__V_14_14);
            }
#line 1280 "diet.m"
          }
#line 1276 "diet.m"
        return mercury__diet__Result_6;
#line 1276 "diet.m"
      }
#line 1276 "diet.m"
      break;
#line 1276 "diet.m"
    }
#line 1271 "diet.m"
}

#line 1199 "diet.m"
static void MR_CALL 
mercury__diet__union_helper_9_p_0(
#line 1199 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_56,
#line 1199 "diet.m"
  MR_Word mercury__diet__Left0_10,
#line 1199 "diet.m"
  MR_Tuple mercury__diet__HeadVar__2_2,
#line 1199 "diet.m"
  MR_Word mercury__diet__Right0_13,
#line 1199 "diet.m"
  MR_Word mercury__diet__Limit_14,
#line 1199 "diet.m"
  MR_Word mercury__diet__Head0_15,
#line 1199 "diet.m"
  MR_Word mercury__diet__Stream0_16,
#line 1199 "diet.m"
  MR_Word * mercury__diet__Left_17,
#line 1199 "diet.m"
  MR_Word * mercury__diet__Head_18,
#line 1199 "diet.m"
  MR_Word * mercury__diet__Stream_19)
#line 1199 "diet.m"
{
#line 1204 "diet.m"
  while (MR_TRUE)
#line 1204 "diet.m"
    {
#line 1204 "diet.m"
      /* tailcall optimized into a loop */
#line 1204 "diet.m"
      {
#line 1204 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 1204 "diet.m"
        MR_Box mercury__diet__A_11 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__2_2, (MR_Integer) 0));
#line 1204 "diet.m"
        MR_Box mercury__diet__B_12 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__2_2, (MR_Integer) 1));

#line 1210 "diet.m"
        if ((mercury__diet__Head0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1206 "diet.m"
          {
#line 1207 "diet.m"
            {
#line 1207 "diet.m"
              *mercury__diet__Left_17 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__HeadVar__2_2, mercury__diet__Left0_10, mercury__diet__Right0_13);
            }
#line 1208 "diet.m"
            *mercury__diet__Head_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1209 "diet.m"
            *mercury__diet__Stream_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1206 "diet.m"
          }
#line 1210 "diet.m"
        else
#line 1211 "diet.m"
          {
#line 1211 "diet.m"
            MR_Box mercury__diet__X_20;
#line 1211 "diet.m"
            MR_Box mercury__diet__Y_21;
#line 1211 "diet.m"
            MR_Tuple mercury__diet__V_27_27 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_15, (MR_Integer) 0)));
#line 1213 "diet.m"
            MR_Box mercury__diet__V_28_28;
#line 10017 "diet.c"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);
#line 10019 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box);
#line 10021 "diet.c"
            MR_bool MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box, MR_Box);

#line 1211 "diet.m"
            mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, (MR_Integer) 0));
#line 1211 "diet.m"
            mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, (MR_Integer) 1));
#line 10028 "diet.c"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10030 "diet.c"
            {
#line 10032 "diet.c"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__Y_21, mercury__diet__A_11);
            }
#line 1213 "diet.m"
            if (mercury__diet__succeeded)
#line 1213 "diet.m"
              {
#line 10039 "diet.c"
                mercury__diet__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 7)));
#line 10041 "diet.c"
                {
#line 10043 "diet.c"
                  mercury__diet__V_28_28 = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__A_11);
                }
#line 10046 "diet.c"
                mercury__diet__func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10048 "diet.c"
                {
#line 10050 "diet.c"
                  mercury__diet__succeeded = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__Y_21, mercury__diet__V_28_28);
                }
#line 1213 "diet.m"
              }
#line 1220 "diet.m"
            if (mercury__diet__succeeded)
#line 1216 "diet.m"
              {
#line 1216 "diet.m"
                MR_Word mercury__diet__Left1_22;
#line 1216 "diet.m"
                MR_Word mercury__diet__Head1_23;
#line 1216 "diet.m"
                MR_Word mercury__diet__Stream1_24;

#line 1216 "diet.m"
                {
#line 1216 "diet.m"
                  mercury__diet__Left1_22 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__V_27_27, mercury__diet__Left0_10);
                }
#line 672 "diet.m"
                if ((mercury__diet__Stream0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "diet.m"
                  {
#line 673 "diet.m"
                    mercury__diet__Head1_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 674 "diet.m"
                    mercury__diet__Stream1_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 672 "diet.m"
                  }
#line 672 "diet.m"
                else
#line 676 "diet.m"
                  {
#line 676 "diet.m"
                    MR_Tuple mercury__diet__X_68;

#line 677 "diet.m"
                    {
#line 677 "diet.m"
                      mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__Stream0_16, &mercury__diet__X_68, &mercury__diet__Stream1_24);
                    }
#line 678 "diet.m"
                    {
#line 678 "diet.m"
                      mercury__diet__Head1_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 678 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__Head1_23, 0) = ((MR_Box) (mercury__diet__X_68));
#line 678 "diet.m"
                    }
#line 676 "diet.m"
                  }
#line 1218 "diet.m"
                /* direct tailcall eliminated */
#line 1218 "diet.m"
                {
#line 1218 "diet.m"
                  MR_Word mercury__diet__Left0__tmp_copy_10 = mercury__diet__Left1_22;
#line 1218 "diet.m"
                  MR_Word mercury__diet__Head0__tmp_copy_15 = mercury__diet__Head1_23;
#line 1218 "diet.m"
                  MR_Word mercury__diet__Stream0__tmp_copy_16 = mercury__diet__Stream1_24;

#line 1218 "diet.m"
                  mercury__diet__Stream0_16 = mercury__diet__Stream0__tmp_copy_16;
#line 1218 "diet.m"
                  mercury__diet__Head0_15 = mercury__diet__Head0__tmp_copy_15;
#line 1218 "diet.m"
                  mercury__diet__Left0_10 = mercury__diet__Left0__tmp_copy_10;
#line 1218 "diet.m"
                }
#line 1218 "diet.m"
                continue;
#line 1216 "diet.m"
              }
#line 1220 "diet.m"
            else
#line 1229 "diet.m"
              {
#line 1221 "diet.m"
                MR_Box mercury__diet__V_31_31;
#line 10132 "diet.c"
                MR_bool MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10134 "diet.c"
                MR_Box MR_CALL (* mercury__diet__func_4)(MR_Box, MR_Box);
#line 10136 "diet.c"
                MR_bool MR_CALL (* mercury__diet__func_5)(MR_Box, MR_Box, MR_Box);

#line 10139 "diet.c"
                {
#line 10141 "diet.c"
                  mercury__diet__succeeded = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__B_12, mercury__diet__X_20);
                }
#line 1221 "diet.m"
                if (mercury__diet__succeeded)
#line 1221 "diet.m"
                  {
#line 10148 "diet.c"
                    mercury__diet__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 6)));
#line 10150 "diet.c"
                    {
#line 10152 "diet.c"
                      mercury__diet__V_31_31 = mercury__diet__func_4(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__B_12);
                    }
#line 10155 "diet.c"
                    mercury__diet__func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10157 "diet.c"
                    {
#line 10159 "diet.c"
                      mercury__diet__succeeded = mercury__diet__func_5(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__V_31_31, mercury__diet__X_20);
                    }
#line 1221 "diet.m"
                  }
#line 1229 "diet.m"
                if (mercury__diet__succeeded)
#line 1225 "diet.m"
                  {
#line 1225 "diet.m"
                    MR_Word mercury__diet__Right1_25;

#line 1224 "diet.m"
                    {
#line 1224 "diet.m"
                      mercury__diet__union_2_7_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__Right0_13, mercury__diet__Limit_14, mercury__diet__Head0_15, mercury__diet__Stream0_16, &mercury__diet__Right1_25, mercury__diet__Head_18, mercury__diet__Stream_19);
                    }
#line 1226 "diet.m"
                    {
#line 1226 "diet.m"
                      *mercury__diet__Left_17 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__HeadVar__2_2, mercury__diet__Left0_10, mercury__diet__Right1_25);
                    }
#line 1225 "diet.m"
                  }
#line 1229 "diet.m"
                else
#line 1235 "diet.m"
                  {
#line 10187 "diet.c"
                    MR_bool MR_CALL (* mercury__diet__func_6)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10190 "diet.c"
                    {
#line 10192 "diet.c"
                      mercury__diet__succeeded = mercury__diet__func_6(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__B_12, mercury__diet__Y_21);
                    }
#line 475 "diet.m"
                    mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1235 "diet.m"
                    if (mercury__diet__succeeded)
#line 1232 "diet.m"
                      {
#line 1232 "diet.m"
                        MR_Tuple mercury__diet__V_33_33;
#line 1232 "diet.m"
                        MR_Box mercury__diet__V_34_34;
#line 1232 "diet.m"
                        MR_Word mercury__diet__Head1_43;
#line 1232 "diet.m"
                        MR_Word mercury__diet__Stream1_44;
#line 10209 "diet.c"
                        MR_bool MR_CALL (* mercury__diet__func_7)(MR_Box, MR_Box, MR_Box);

#line 672 "diet.m"
                        if ((mercury__diet__Stream0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "diet.m"
                          {
#line 673 "diet.m"
                            mercury__diet__Head1_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 674 "diet.m"
                            mercury__diet__Stream1_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 672 "diet.m"
                          }
#line 672 "diet.m"
                        else
#line 676 "diet.m"
                          {
#line 676 "diet.m"
                            MR_Tuple mercury__diet__X_82;

#line 677 "diet.m"
                            {
#line 677 "diet.m"
                              mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__Stream0_16, &mercury__diet__X_82, &mercury__diet__Stream1_44);
                            }
#line 678 "diet.m"
                            {
#line 678 "diet.m"
                              mercury__diet__Head1_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 678 "diet.m"
                              MR_hl_field(MR_mktag(1), mercury__diet__Head1_43, 0) = ((MR_Box) (mercury__diet__X_82));
#line 678 "diet.m"
                            }
#line 676 "diet.m"
                          }
#line 10244 "diet.c"
                        mercury__diet__func_7 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10246 "diet.c"
                        {
#line 10248 "diet.c"
                          mercury__diet__succeeded = mercury__diet__func_7(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__A_11, mercury__diet__X_20);
                        }
#line 485 "diet.m"
                        if (mercury__diet__succeeded)
#line 485 "diet.m"
                          mercury__diet__V_34_34 = mercury__diet__A_11;
#line 485 "diet.m"
                        else
#line 485 "diet.m"
                          mercury__diet__V_34_34 = mercury__diet__X_20;
#line 1233 "diet.m"
                        {
#line 1233 "diet.m"
                          mercury__diet__V_33_33 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1233 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_33_33, 0) = mercury__diet__V_34_34;
#line 1233 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_33_33, 1) = mercury__diet__B_12;
#line 1233 "diet.m"
                        }
#line 1233 "diet.m"
                        /* direct tailcall eliminated */
#line 1233 "diet.m"
                        {
#line 1233 "diet.m"
                          MR_Tuple mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__V_33_33;
#line 1233 "diet.m"
                          MR_Word mercury__diet__Head0__tmp_copy_15 = mercury__diet__Head1_43;
#line 1233 "diet.m"
                          MR_Word mercury__diet__Stream0__tmp_copy_16 = mercury__diet__Stream1_44;

#line 1233 "diet.m"
                          mercury__diet__Stream0_16 = mercury__diet__Stream0__tmp_copy_16;
#line 1233 "diet.m"
                          mercury__diet__Head0_15 = mercury__diet__Head0__tmp_copy_15;
#line 1233 "diet.m"
                          mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 1233 "diet.m"
                        }
#line 1233 "diet.m"
                        continue;
#line 1232 "diet.m"
                      }
#line 1235 "diet.m"
                    else
#line 1242 "diet.m"
                      {
#line 1236 "diet.m"
                        MR_Box mercury__diet__LimitValue_26;
#line 10298 "diet.c"
                        MR_bool MR_CALL (* mercury__diet__func_8)(MR_Box, MR_Box, MR_Box);

#line 1236 "diet.m"
                        mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Limit_14)) == (MR_mktag((MR_Integer) 1)));
#line 1236 "diet.m"
                        if (mercury__diet__succeeded)
#line 1236 "diet.m"
                          {
#line 1236 "diet.m"
                            mercury__diet__LimitValue_26 = (MR_hl_field(MR_mktag(1), mercury__diet__Limit_14, (MR_Integer) 0));
#line 10309 "diet.c"
                            mercury__diet__func_8 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10311 "diet.c"
                            {
#line 10313 "diet.c"
                              mercury__diet__succeeded = mercury__diet__func_8(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__Y_21, mercury__diet__LimitValue_26);
                            }
#line 475 "diet.m"
                            mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 1236 "diet.m"
                          }
#line 1242 "diet.m"
                        if (mercury__diet__succeeded)
#line 1239 "diet.m"
                          {
#line 1239 "diet.m"
                            MR_Tuple mercury__diet__V_35_35;
#line 1239 "diet.m"
                            MR_Box mercury__diet__V_36_36;
#line 10328 "diet.c"
                            MR_bool MR_CALL (* mercury__diet__func_9)(MR_Box, MR_Box, MR_Box);

#line 1239 "diet.m"
                            *mercury__diet__Left_17 = mercury__diet__Left0_10;
#line 10333 "diet.c"
                            mercury__diet__func_9 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10335 "diet.c"
                            {
#line 10337 "diet.c"
                              mercury__diet__succeeded = mercury__diet__func_9(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__A_11, mercury__diet__X_20);
                            }
#line 485 "diet.m"
                            if (mercury__diet__succeeded)
#line 485 "diet.m"
                              mercury__diet__V_36_36 = mercury__diet__A_11;
#line 485 "diet.m"
                            else
#line 485 "diet.m"
                              mercury__diet__V_36_36 = mercury__diet__X_20;
#line 1240 "diet.m"
                            {
#line 1240 "diet.m"
                              mercury__diet__V_35_35 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1240 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, 0) = mercury__diet__V_36_36;
#line 1240 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, 1) = mercury__diet__Y_21;
#line 1240 "diet.m"
                            }
#line 1240 "diet.m"
                            {
#line 1240 "diet.m"
                              MR_Word base;
#line 1240 "diet.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "diet.m"
                              *mercury__diet__Head_18 = base;
#line 1240 "diet.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_35_35));
#line 1240 "diet.m"
                            }
#line 1241 "diet.m"
                            *mercury__diet__Stream_19 = mercury__diet__Stream0_16;
#line 1239 "diet.m"
                          }
#line 1242 "diet.m"
                        else
#line 1244 "diet.m"
                          {
#line 1244 "diet.m"
                            MR_Word mercury__diet__V_37_37;
#line 1244 "diet.m"
                            MR_Tuple mercury__diet__V_38_38;
#line 1244 "diet.m"
                            MR_Box mercury__diet__V_39_39;
#line 1244 "diet.m"
                            MR_Word mercury__diet__Right1_47;
#line 10386 "diet.c"
                            MR_bool MR_CALL (* mercury__diet__func_10)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10389 "diet.c"
                            {
#line 10391 "diet.c"
                              mercury__diet__succeeded = mercury__diet__func_10(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__A_11, mercury__diet__X_20);
                            }
#line 485 "diet.m"
                            if (mercury__diet__succeeded)
#line 485 "diet.m"
                              mercury__diet__V_39_39 = mercury__diet__A_11;
#line 485 "diet.m"
                            else
#line 485 "diet.m"
                              mercury__diet__V_39_39 = mercury__diet__X_20;
#line 1243 "diet.m"
                            {
#line 1243 "diet.m"
                              mercury__diet__V_38_38 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1243 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_38_38, 0) = mercury__diet__V_39_39;
#line 1243 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_38_38, 1) = mercury__diet__Y_21;
#line 1243 "diet.m"
                            }
#line 1243 "diet.m"
                            {
#line 1243 "diet.m"
                              mercury__diet__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1243 "diet.m"
                              MR_hl_field(MR_mktag(1), mercury__diet__V_37_37, 0) = ((MR_Box) (mercury__diet__V_38_38));
#line 1243 "diet.m"
                            }
#line 1243 "diet.m"
                            {
#line 1243 "diet.m"
                              mercury__diet__union_2_7_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__Right0_13, mercury__diet__Limit_14, mercury__diet__V_37_37, mercury__diet__Stream0_16, &mercury__diet__Right1_47, mercury__diet__Head_18, mercury__diet__Stream_19);
                            }
#line 1245 "diet.m"
                            {
#line 1245 "diet.m"
                              *mercury__diet__Left_17 = mercury__diet__reroot_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__Left0_10, mercury__diet__Right1_47);
                            }
#line 1244 "diet.m"
                          }
#line 1242 "diet.m"
                      }
#line 1235 "diet.m"
                  }
#line 1229 "diet.m"
              }
#line 1211 "diet.m"
          }
#line 1204 "diet.m"
      }
#line 1204 "diet.m"
      break;
#line 1204 "diet.m"
    }
#line 1199 "diet.m"
}

#line 1167 "diet.m"
static void MR_CALL 
mercury__diet__union_2_7_p_0(
#line 1167 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_30,
#line 1167 "diet.m"
  MR_Word mercury__diet__Input_8,
#line 1167 "diet.m"
  MR_Word mercury__diet__Limit_9,
#line 1167 "diet.m"
  MR_Word mercury__diet__Head0_10,
#line 1167 "diet.m"
  MR_Word mercury__diet__Stream0_11,
#line 1167 "diet.m"
  MR_Word * mercury__diet__Left_12,
#line 1167 "diet.m"
  MR_Word * mercury__diet__Head_13,
#line 1167 "diet.m"
  MR_Word * mercury__diet__Stream_14)
#line 1167 "diet.m"
{
#line 1173 "diet.m"
  {
#line 1173 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1173 "diet.m"
    if ((mercury__diet__Head0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1173 "diet.m"
      {
#line 1174 "diet.m"
        *mercury__diet__Left_12 = mercury__diet__Input_8;
#line 1175 "diet.m"
        *mercury__diet__Head_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1176 "diet.m"
        *mercury__diet__Stream_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1173 "diet.m"
      }
#line 1173 "diet.m"
    else
#line 1178 "diet.m"
      {
#line 1178 "diet.m"
        MR_Box mercury__diet__X_15;
#line 1178 "diet.m"
        MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_10, (MR_Integer) 0)));
#line 1178 "diet.m"
        MR_Box mercury__diet___Y_16;

#line 1178 "diet.m"
        mercury__diet__X_15 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0));
#line 1178 "diet.m"
        mercury__diet___Y_16 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1));
#line 1184 "diet.m"
        if ((mercury__diet__Input_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1180 "diet.m"
          {
#line 1181 "diet.m"
            *mercury__diet__Left_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1182 "diet.m"
            *mercury__diet__Head_13 = mercury__diet__Head0_10;
#line 1183 "diet.m"
            *mercury__diet__Stream_14 = mercury__diet__Stream0_11;
#line 1180 "diet.m"
          }
#line 1184 "diet.m"
        else
#line 1185 "diet.m"
          {
#line 1185 "diet.m"
            MR_Box mercury__diet__A_17;
#line 1185 "diet.m"
            MR_Word mercury__diet__Left0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_8, (MR_Integer) 2)));
#line 1185 "diet.m"
            MR_Word mercury__diet__Right0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_8, (MR_Integer) 3)));
#line 1185 "diet.m"
            MR_Word mercury__diet__Left1_22;
#line 1185 "diet.m"
            MR_Word mercury__diet__Head1_23;
#line 1185 "diet.m"
            MR_Word mercury__diet__Stream1_24;
#line 1185 "diet.m"
            MR_Tuple mercury__diet__V_26_26 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Input_8, (MR_Integer) 0)));
#line 1185 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Input_8, (MR_Integer) 1)));
#line 1185 "diet.m"
            MR_Box mercury__diet__B_18;
#line 10536 "diet.c"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

#line 1185 "diet.m"
            mercury__diet__A_17 = (MR_hl_field(MR_mktag(0), mercury__diet__V_26_26, (MR_Integer) 0));
#line 1185 "diet.m"
            mercury__diet__B_18 = (MR_hl_field(MR_mktag(0), mercury__diet__V_26_26, (MR_Integer) 1));
#line 10543 "diet.c"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10545 "diet.c"
            {
#line 10547 "diet.c"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_30), mercury__diet__X_15, mercury__diet__A_17);
            }
#line 1189 "diet.m"
            if (mercury__diet__succeeded)
#line 1187 "diet.m"
              {
#line 1187 "diet.m"
                MR_Word mercury__diet__V_27_27;
#line 1187 "diet.m"
                MR_Box mercury__diet__V_28_28;
#line 10558 "diet.c"
                MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 7)));

#line 10561 "diet.c"
                {
#line 10563 "diet.c"
                  mercury__diet__V_28_28 = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_30), mercury__diet__A_17);
                }
#line 1187 "diet.m"
                {
#line 1187 "diet.m"
                  mercury__diet__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "diet.m"
                  MR_hl_field(MR_mktag(1), mercury__diet__V_27_27, 0) = mercury__diet__V_28_28;
#line 1187 "diet.m"
                }
#line 1187 "diet.m"
                {
#line 1187 "diet.m"
                  mercury__diet__union_2_7_p_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__Left0_20, mercury__diet__V_27_27, mercury__diet__Head0_10, mercury__diet__Stream0_11, &mercury__diet__Left1_22, &mercury__diet__Head1_23, &mercury__diet__Stream1_24);
                }
#line 1187 "diet.m"
              }
#line 1189 "diet.m"
            else
#line 1190 "diet.m"
              {
#line 1190 "diet.m"
                mercury__diet__Left1_22 = mercury__diet__Left0_20;
#line 1191 "diet.m"
                mercury__diet__Head1_23 = mercury__diet__Head0_10;
#line 1192 "diet.m"
                mercury__diet__Stream1_24 = mercury__diet__Stream0_11;
#line 1190 "diet.m"
              }
#line 1194 "diet.m"
            {
#line 1194 "diet.m"
              mercury__diet__union_helper_9_p_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__Left1_22, mercury__diet__V_26_26, mercury__diet__Right0_21, mercury__diet__Limit_9, mercury__diet__Head1_23, mercury__diet__Stream1_24, mercury__diet__Left_12, mercury__diet__Head_13, mercury__diet__Stream_14);
#line 1194 "diet.m"
              return;
            }
#line 1185 "diet.m"
          }
#line 1178 "diet.m"
      }
#line 1173 "diet.m"
  }
#line 1167 "diet.m"
}

#line 1013 "diet.m"
static void MR_CALL 
mercury__diet__find_del_right_4_p_0(
#line 1013 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_18,
#line 1013 "diet.m"
  MR_Box mercury__diet__P0_5,
#line 1013 "diet.m"
  MR_Word mercury__diet__T0_6,
#line 1013 "diet.m"
  MR_Box * mercury__diet__P_7,
#line 1013 "diet.m"
  MR_Word * mercury__diet__T_8)
#line 1013 "diet.m"
{
#line 1018 "diet.m"
  {
#line 1018 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1018 "diet.m"
    if ((mercury__diet__T0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1018 "diet.m"
      {
#line 1019 "diet.m"
        *mercury__diet__P_7 = mercury__diet__P0_5;
#line 1020 "diet.m"
        *mercury__diet__T_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1018 "diet.m"
      }
#line 1018 "diet.m"
    else
#line 1022 "diet.m"
      {
#line 1022 "diet.m"
        MR_Box mercury__diet__X_9;
#line 1022 "diet.m"
        MR_Box mercury__diet__Y_10;
#line 1022 "diet.m"
        MR_Word mercury__diet__Left0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 2)));
#line 1022 "diet.m"
        MR_Word mercury__diet__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 3)));
#line 1022 "diet.m"
        MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 0)));
#line 1022 "diet.m"
        MR_Integer mercury__diet__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 1)));
#line 1023 "diet.m"
        MR_Box mercury__diet__V_16_16;
#line 10657 "diet.c"
        MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box);
#line 10659 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box);

#line 1022 "diet.m"
        mercury__diet__X_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1022 "diet.m"
        mercury__diet__Y_10 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 10666 "diet.c"
        mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_18, (MR_Integer) 0)), (MR_Integer) 7)));
#line 10668 "diet.c"
        {
#line 10670 "diet.c"
          mercury__diet__V_16_16 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_18), mercury__diet__X_9);
        }
#line 10673 "diet.c"
        mercury__diet__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10675 "diet.c"
        {
#line 10677 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_18), mercury__diet__P0_5, mercury__diet__V_16_16);
        }
#line 1026 "diet.m"
        if (mercury__diet__succeeded)
#line 1024 "diet.m"
          {
#line 1024 "diet.m"
            MR_Word mercury__diet__Left1_14;

#line 1024 "diet.m"
            {
#line 1024 "diet.m"
              mercury__diet__find_del_right_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__P0_5, mercury__diet__Left0_12, mercury__diet__P_7, &mercury__diet__Left1_14);
            }
#line 1025 "diet.m"
            {
#line 1025 "diet.m"
              *mercury__diet__T_8 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__V_15_15, mercury__diet__Left1_14, mercury__diet__Right_13);
            }
#line 1024 "diet.m"
          }
#line 1026 "diet.m"
        else
#line 1027 "diet.m"
          {
#line 1027 "diet.m"
            *mercury__diet__P_7 = mercury__diet__Y_10;
#line 1028 "diet.m"
            *mercury__diet__T_8 = mercury__diet__Right_13;
#line 1027 "diet.m"
          }
#line 1022 "diet.m"
      }
#line 1018 "diet.m"
  }
#line 1013 "diet.m"
}

#line 994 "diet.m"
static void MR_CALL 
mercury__diet__find_del_left_4_p_0(
#line 994 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_18,
#line 994 "diet.m"
  MR_Box mercury__diet__P0_5,
#line 994 "diet.m"
  MR_Word mercury__diet__T0_6,
#line 994 "diet.m"
  MR_Box * mercury__diet__P_7,
#line 994 "diet.m"
  MR_Word * mercury__diet__T_8)
#line 994 "diet.m"
{
#line 999 "diet.m"
  {
#line 999 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 999 "diet.m"
    if ((mercury__diet__T0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 999 "diet.m"
      {
#line 1000 "diet.m"
        *mercury__diet__P_7 = mercury__diet__P0_5;
#line 1001 "diet.m"
        *mercury__diet__T_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 999 "diet.m"
      }
#line 999 "diet.m"
    else
#line 1003 "diet.m"
      {
#line 1003 "diet.m"
        MR_Box mercury__diet__X_9;
#line 1003 "diet.m"
        MR_Box mercury__diet__Y_10;
#line 1003 "diet.m"
        MR_Word mercury__diet__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 2)));
#line 1003 "diet.m"
        MR_Word mercury__diet__Right0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 3)));
#line 1003 "diet.m"
        MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 0)));
#line 1003 "diet.m"
        MR_Integer mercury__diet__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 1)));
#line 1004 "diet.m"
        MR_Box mercury__diet__V_16_16;
#line 10764 "diet.c"
        MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box);
#line 10766 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box);

#line 1003 "diet.m"
        mercury__diet__X_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1003 "diet.m"
        mercury__diet__Y_10 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 10773 "diet.c"
        mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_18, (MR_Integer) 0)), (MR_Integer) 6)));
#line 10775 "diet.c"
        {
#line 10777 "diet.c"
          mercury__diet__V_16_16 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_18), mercury__diet__Y_10);
        }
#line 10780 "diet.c"
        mercury__diet__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10782 "diet.c"
        {
#line 10784 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_18), mercury__diet__V_16_16, mercury__diet__P0_5);
        }
#line 1007 "diet.m"
        if (mercury__diet__succeeded)
#line 1005 "diet.m"
          {
#line 1005 "diet.m"
            MR_Word mercury__diet__Right1_14;

#line 1005 "diet.m"
            {
#line 1005 "diet.m"
              mercury__diet__find_del_left_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__P0_5, mercury__diet__Right0_13, mercury__diet__P_7, &mercury__diet__Right1_14);
            }
#line 1006 "diet.m"
            {
#line 1006 "diet.m"
              *mercury__diet__T_8 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__V_15_15, mercury__diet__Left_12, mercury__diet__Right1_14);
            }
#line 1005 "diet.m"
          }
#line 1007 "diet.m"
        else
#line 1008 "diet.m"
          {
#line 1008 "diet.m"
            *mercury__diet__P_7 = mercury__diet__X_9;
#line 1009 "diet.m"
            *mercury__diet__T_8 = mercury__diet__Left_12;
#line 1008 "diet.m"
          }
#line 1003 "diet.m"
      }
#line 999 "diet.m"
  }
#line 994 "diet.m"
}

#line 964 "diet.m"
MR_Word MR_CALL 
mercury__diet__do_insert_2_f_0(
#line 964 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_26,
#line 964 "diet.m"
  MR_Tuple mercury__diet__PQ_4,
#line 964 "diet.m"
  MR_Word mercury__diet__T0_5)
#line 964 "diet.m"
{
#line 966 "diet.m"
  {
#line 966 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 966 "diet.m"
    MR_Word mercury__diet__T_6;
#line 966 "diet.m"
    MR_Box mercury__diet__P_7 = (MR_hl_field(MR_mktag(0), mercury__diet__PQ_4, (MR_Integer) 0));
#line 966 "diet.m"
    MR_Box mercury__diet__Q_8 = (MR_hl_field(MR_mktag(0), mercury__diet__PQ_4, (MR_Integer) 1));

#line 971 "diet.m"
    if ((mercury__diet__T0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 969 "diet.m"
      {
#line 969 "diet.m"
        MR_Word mercury__diet__V_31_31;
#line 969 "diet.m"
        MR_Word mercury__diet__V_32_32;
#line 102 "private_builtin.opt"
        MR_Word mercury__diet__TypeInfo_28_28;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__do_insert_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_26 ;
	Index =  (MR_Integer) 1 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 10871 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_28_28  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 509 "diet.m"
        mercury__diet__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 509 "diet.m"
        mercury__diet__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 509 "diet.m"
        {
#line 509 "diet.m"
          mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 509 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__PQ_4));
#line 509 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) ((MR_Integer) 1));
#line 509 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__V_31_31));
#line 509 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__V_32_32));
#line 509 "diet.m"
        }
#line 969 "diet.m"
      }
#line 971 "diet.m"
    else
#line 972 "diet.m"
      {
#line 972 "diet.m"
        MR_Box mercury__diet__X0_9;
#line 972 "diet.m"
        MR_Box mercury__diet__Y0_10;
#line 972 "diet.m"
        MR_Word mercury__diet__Left0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 2)));
#line 972 "diet.m"
        MR_Word mercury__diet__Right0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 3)));
#line 972 "diet.m"
        MR_Tuple mercury__diet__V_18_18 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 0)));
#line 972 "diet.m"
        MR_Integer mercury__diet__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 1)));
#line 973 "diet.m"
        MR_Box mercury__diet__V_19_19;
#line 10916 "diet.c"
        MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box);
#line 10918 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box);

#line 972 "diet.m"
        mercury__diet__X0_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_18_18, (MR_Integer) 0));
#line 972 "diet.m"
        mercury__diet__Y0_10 = (MR_hl_field(MR_mktag(0), mercury__diet__V_18_18, (MR_Integer) 1));
#line 10925 "diet.c"
        mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 7)));
#line 10927 "diet.c"
        {
#line 10929 "diet.c"
          mercury__diet__V_19_19 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__X0_9);
        }
#line 10932 "diet.c"
        mercury__diet__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10934 "diet.c"
        {
#line 10936 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__Q_8, mercury__diet__V_19_19);
        }
#line 975 "diet.m"
        if (mercury__diet__succeeded)
#line 974 "diet.m"
          {
#line 974 "diet.m"
            MR_Word mercury__diet__V_21_21;

#line 974 "diet.m"
            {
#line 974 "diet.m"
              mercury__diet__V_21_21 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__PQ_4, mercury__diet__Left0_12);
            }
#line 974 "diet.m"
            {
#line 974 "diet.m"
              return mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__V_18_18, mercury__diet__V_21_21, mercury__diet__Right0_13);
            }
#line 974 "diet.m"
          }
#line 975 "diet.m"
        else
#line 977 "diet.m"
          {
#line 975 "diet.m"
            MR_Box mercury__diet__V_22_22;
#line 10964 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 6)));
#line 10966 "diet.c"
            MR_bool MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box, MR_Box);

#line 10969 "diet.c"
            {
#line 10971 "diet.c"
              mercury__diet__V_22_22 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__Y0_10);
            }
#line 10974 "diet.c"
            mercury__diet__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10976 "diet.c"
            {
#line 10978 "diet.c"
              mercury__diet__succeeded = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__V_22_22, mercury__diet__P_7);
            }
#line 977 "diet.m"
            if (mercury__diet__succeeded)
#line 976 "diet.m"
              {
#line 976 "diet.m"
                MR_Word mercury__diet__V_24_24;

#line 976 "diet.m"
                {
#line 976 "diet.m"
                  mercury__diet__V_24_24 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__PQ_4, mercury__diet__Right0_13);
                }
#line 976 "diet.m"
                {
#line 976 "diet.m"
                  return mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__V_18_18, mercury__diet__Left0_12, mercury__diet__V_24_24);
                }
#line 976 "diet.m"
              }
#line 977 "diet.m"
            else
#line 983 "diet.m"
              {
#line 983 "diet.m"
                MR_Box mercury__diet__X1_14;
#line 983 "diet.m"
                MR_Word mercury__diet__Left1_15;
#line 983 "diet.m"
                MR_Box mercury__diet__Y1_16;
#line 983 "diet.m"
                MR_Word mercury__diet__Right1_17;
#line 983 "diet.m"
                MR_Tuple mercury__diet__V_25_25;
#line 11014 "diet.c"
                MR_bool MR_CALL (* mercury__diet__func_4)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11016 "diet.c"
                MR_bool MR_CALL (* mercury__diet__func_5)(MR_Box, MR_Box, MR_Box);

#line 11019 "diet.c"
                {
#line 11021 "diet.c"
                  mercury__diet__succeeded = mercury__diet__func_4(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__P_7, mercury__diet__X0_9);
                }
#line 475 "diet.m"
                mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 981 "diet.m"
                if (mercury__diet__succeeded)
#line 979 "diet.m"
                  {
#line 979 "diet.m"
                    mercury__diet__X1_14 = mercury__diet__X0_9;
#line 980 "diet.m"
                    mercury__diet__Left1_15 = mercury__diet__Left0_12;
#line 979 "diet.m"
                  }
#line 981 "diet.m"
                else
#line 982 "diet.m"
                  {
#line 982 "diet.m"
                    mercury__diet__find_del_left_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__P_7, mercury__diet__Left0_12, &mercury__diet__X1_14, &mercury__diet__Left1_15);
                  }
#line 11043 "diet.c"
                mercury__diet__func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_26, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11045 "diet.c"
                {
#line 11047 "diet.c"
                  mercury__diet__succeeded = mercury__diet__func_5(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_26), mercury__diet__Y0_10, mercury__diet__Q_8);
                }
#line 481 "diet.m"
                mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 987 "diet.m"
                if (mercury__diet__succeeded)
#line 985 "diet.m"
                  {
#line 985 "diet.m"
                    mercury__diet__Y1_16 = mercury__diet__Y0_10;
#line 986 "diet.m"
                    mercury__diet__Right1_17 = mercury__diet__Right0_13;
#line 985 "diet.m"
                  }
#line 987 "diet.m"
                else
#line 988 "diet.m"
                  {
#line 988 "diet.m"
                    mercury__diet__find_del_right_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__Q_8, mercury__diet__Right0_13, &mercury__diet__Y1_16, &mercury__diet__Right1_17);
                  }
#line 990 "diet.m"
                {
#line 990 "diet.m"
                  mercury__diet__V_25_25 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 990 "diet.m"
                  MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, 0) = mercury__diet__X1_14;
#line 990 "diet.m"
                  MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, 1) = mercury__diet__Y1_16;
#line 990 "diet.m"
                }
#line 990 "diet.m"
                {
#line 990 "diet.m"
                  return mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_26, mercury__diet__V_25_25, mercury__diet__Left1_15, mercury__diet__Right1_17);
                }
#line 983 "diet.m"
              }
#line 977 "diet.m"
          }
#line 972 "diet.m"
      }
#line 966 "diet.m"
    return mercury__diet__T_6;
#line 966 "diet.m"
  }
#line 964 "diet.m"
}

#line 958 "diet.m"
void MR_CALL 
mercury__diet__insert_interval_3_p_0(
#line 958 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
#line 958 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 958 "diet.m"
  MR_Word mercury__diet__Set0_6,
#line 958 "diet.m"
  MR_Word * mercury__diet__Set_7)
#line 958 "diet.m"
{
#line 961 "diet.m"
  {
#line 961 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 961 "diet.m"
    MR_Box mercury__diet__X_4 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 0));
#line 961 "diet.m"
    MR_Box mercury__diet__Y_5 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 1));

#line 962 "diet.m"
    {
#line 962 "diet.m"
      mercury__diet__insert_interval_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__X_4, mercury__diet__Y_5, mercury__diet__Set0_6, mercury__diet__Set_7);
#line 962 "diet.m"
      return;
    }
#line 961 "diet.m"
  }
#line 958 "diet.m"
}

#line 848 "diet.m"
MR_Word MR_CALL 
mercury__diet__add_2_f_0(
#line 848 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_50,
#line 848 "diet.m"
  MR_Box mercury__diet__P_4,
#line 848 "diet.m"
  MR_Word mercury__diet__T0_5)
#line 848 "diet.m"
{
#line 852 "diet.m"
  {
#line 852 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 852 "diet.m"
    MR_Word mercury__diet__T_6;

#line 852 "diet.m"
    if ((mercury__diet__T0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 852 "diet.m"
      {
#line 852 "diet.m"
        MR_Tuple mercury__diet__V_39_39;
#line 852 "diet.m"
        MR_Word mercury__diet__V_42_42;
#line 852 "diet.m"
        MR_Word mercury__diet__V_43_43;

#line 853 "diet.m"
        {
#line 853 "diet.m"
          mercury__diet__V_39_39 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 853 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_39_39, 0) = mercury__diet__P_4;
#line 853 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_39_39, 1) = mercury__diet__P_4;
#line 853 "diet.m"
        }
#line 853 "diet.m"
        mercury__diet__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 853 "diet.m"
        mercury__diet__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 853 "diet.m"
        {
#line 853 "diet.m"
          mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 853 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__V_39_39));
#line 853 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) ((MR_Integer) 1));
#line 853 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__V_42_42));
#line 853 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__V_43_43));
#line 853 "diet.m"
        }
#line 852 "diet.m"
      }
#line 852 "diet.m"
    else
#line 855 "diet.m"
      {
#line 855 "diet.m"
        MR_Box mercury__diet__X_7;
#line 855 "diet.m"
        MR_Box mercury__diet__Y_8;
#line 855 "diet.m"
        MR_Integer mercury__diet__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 1)));
#line 855 "diet.m"
        MR_Word mercury__diet__Left_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 2)));
#line 855 "diet.m"
        MR_Word mercury__diet__Right_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 3)));
#line 855 "diet.m"
        MR_Tuple mercury__diet__V_24_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 0)));
#line 11206 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

#line 855 "diet.m"
        mercury__diet__X_7 = (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 0));
#line 855 "diet.m"
        mercury__diet__Y_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 1));
#line 11213 "diet.c"
        mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11215 "diet.c"
        {
#line 11217 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__P_4, mercury__diet__X_7);
        }
#line 475 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 875 "diet.m"
        if (mercury__diet__succeeded)
#line 859 "diet.m"
          {
#line 11226 "diet.c"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 5)));

#line 11229 "diet.c"
            {
#line 11231 "diet.c"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__Y_8, mercury__diet__P_4);
            }
#line 481 "diet.m"
            mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 859 "diet.m"
            if (mercury__diet__succeeded)
#line 858 "diet.m"
              mercury__diet__T_6 = mercury__diet__T0_5;
#line 859 "diet.m"
            else
#line 861 "diet.m"
              {
#line 859 "diet.m"
                MR_Box mercury__diet__V_25_25;
#line 11246 "diet.c"
                MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 6)));
#line 11248 "diet.c"
                MR_bool MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box, MR_Box);

#line 11251 "diet.c"
                {
#line 11253 "diet.c"
                  mercury__diet__V_25_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__Y_8);
                }
#line 11256 "diet.c"
                mercury__diet__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11258 "diet.c"
                {
#line 11260 "diet.c"
                  mercury__diet__succeeded = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__V_25_25, mercury__diet__P_4);
                }
#line 861 "diet.m"
                if (mercury__diet__succeeded)
#line 860 "diet.m"
                  {
#line 860 "diet.m"
                    MR_Word mercury__diet__V_27_27;

#line 860 "diet.m"
                    {
#line 860 "diet.m"
                      mercury__diet__V_27_27 = mercury__diet__add_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__P_4, mercury__diet__Right_11);
                    }
#line 860 "diet.m"
                    {
#line 860 "diet.m"
                      return mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__V_24_24, mercury__diet__Left_10, mercury__diet__V_27_27);
                    }
#line 860 "diet.m"
                  }
#line 861 "diet.m"
                else
#line 865 "diet.m"
                if ((mercury__diet__Right_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 863 "diet.m"
                  {
#line 863 "diet.m"
                    MR_Tuple mercury__diet__V_31_31;

#line 864 "diet.m"
                    {
#line 864 "diet.m"
                      mercury__diet__V_31_31 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 864 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_31_31, 0) = mercury__diet__X_7;
#line 864 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_31_31, 1) = mercury__diet__P_4;
#line 864 "diet.m"
                    }
#line 864 "diet.m"
                    {
#line 864 "diet.m"
                      mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 864 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__V_31_31));
#line 864 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) (mercury__diet__H_9));
#line 864 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 864 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 864 "diet.m"
                    }
#line 863 "diet.m"
                  }
#line 865 "diet.m"
                else
#line 866 "diet.m"
                  {
#line 866 "diet.m"
                    MR_Box mercury__diet__U_16;
#line 866 "diet.m"
                    MR_Box mercury__diet__V_17;
#line 866 "diet.m"
                    MR_Word mercury__diet__R_18;
#line 866 "diet.m"
                    MR_Tuple mercury__diet__V_28_28;
#line 868 "diet.m"
                    MR_Word mercury__diet__TypeInfo_54_54;
#line 868 "diet.m"
                    MR_Box mercury__diet__V_51_51;
#line 11333 "diet.c"
                    MR_Box MR_CALL (* mercury__diet__func_4)(MR_Box, MR_Box);

#line 867 "diet.m"
                    {
#line 867 "diet.m"
                      mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__Right_11, &mercury__diet__V_28_28, &mercury__diet__R_18);
                    }
#line 867 "diet.m"
                    mercury__diet__U_16 = (MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, (MR_Integer) 0));
#line 867 "diet.m"
                    mercury__diet__V_17 = (MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, (MR_Integer) 1));
#line 11345 "diet.c"
                    mercury__diet__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 7)));
#line 11347 "diet.c"
                    {
#line 11349 "diet.c"
                      mercury__diet__V_51_51 = mercury__diet__func_4(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__U_16);
                    }
#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__add_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_50 ;
	Index =  (MR_Integer) 1 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 11367 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_54_54  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 868 "diet.m"
                    {
#line 868 "diet.m"
                      mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_54_54, mercury__diet__P_4, mercury__diet__V_51_51);
                    }
#line 870 "diet.m"
                    if (mercury__diet__succeeded)
#line 869 "diet.m"
                      {
#line 869 "diet.m"
                        MR_Tuple mercury__diet__V_29_29;

#line 869 "diet.m"
                        {
#line 869 "diet.m"
                          mercury__diet__V_29_29 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 869 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_29_29, 0) = mercury__diet__X_7;
#line 869 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_29_29, 1) = mercury__diet__V_17;
#line 869 "diet.m"
                        }
#line 869 "diet.m"
                        {
#line 869 "diet.m"
                          return mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__V_29_29, mercury__diet__Left_10, mercury__diet__R_18);
                        }
#line 869 "diet.m"
                      }
#line 870 "diet.m"
                    else
#line 871 "diet.m"
                      {
#line 871 "diet.m"
                        MR_Tuple mercury__diet__V_30_30;

#line 871 "diet.m"
                        {
#line 871 "diet.m"
                          mercury__diet__V_30_30 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 871 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, 0) = mercury__diet__X_7;
#line 871 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, 1) = mercury__diet__P_4;
#line 871 "diet.m"
                        }
#line 871 "diet.m"
                        {
#line 871 "diet.m"
                          mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 871 "diet.m"
                          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__V_30_30));
#line 871 "diet.m"
                          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) (mercury__diet__H_9));
#line 871 "diet.m"
                          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 871 "diet.m"
                          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 871 "diet.m"
                        }
#line 871 "diet.m"
                      }
#line 866 "diet.m"
                  }
#line 861 "diet.m"
              }
#line 859 "diet.m"
          }
#line 875 "diet.m"
        else
#line 877 "diet.m"
          {
#line 875 "diet.m"
            MR_Box mercury__diet__V_32_32;
#line 11448 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_5)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 7)));
#line 11450 "diet.c"
            MR_bool MR_CALL (* mercury__diet__func_6)(MR_Box, MR_Box, MR_Box);

#line 11453 "diet.c"
            {
#line 11455 "diet.c"
              mercury__diet__V_32_32 = mercury__diet__func_5(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__X_7);
            }
#line 11458 "diet.c"
            mercury__diet__func_6 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11460 "diet.c"
            {
#line 11462 "diet.c"
              mercury__diet__succeeded = mercury__diet__func_6(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__P_4, mercury__diet__V_32_32);
            }
#line 877 "diet.m"
            if (mercury__diet__succeeded)
#line 876 "diet.m"
              {
#line 876 "diet.m"
                MR_Word mercury__diet__V_34_34;

#line 876 "diet.m"
                {
#line 876 "diet.m"
                  mercury__diet__V_34_34 = mercury__diet__add_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__P_4, mercury__diet__Left_10);
                }
#line 876 "diet.m"
                {
#line 876 "diet.m"
                  return mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__V_24_24, mercury__diet__V_34_34, mercury__diet__Right_11);
                }
#line 876 "diet.m"
              }
#line 877 "diet.m"
            else
#line 881 "diet.m"
            if ((mercury__diet__Left_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 879 "diet.m"
              {
#line 879 "diet.m"
                MR_Tuple mercury__diet__V_38_38;

#line 880 "diet.m"
                {
#line 880 "diet.m"
                  mercury__diet__V_38_38 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 880 "diet.m"
                  MR_hl_field(MR_mktag(0), mercury__diet__V_38_38, 0) = mercury__diet__P_4;
#line 880 "diet.m"
                  MR_hl_field(MR_mktag(0), mercury__diet__V_38_38, 1) = mercury__diet__Y_8;
#line 880 "diet.m"
                }
#line 880 "diet.m"
                {
#line 880 "diet.m"
                  mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 880 "diet.m"
                  MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__V_38_38));
#line 880 "diet.m"
                  MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) (mercury__diet__H_9));
#line 880 "diet.m"
                  MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 880 "diet.m"
                  MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 880 "diet.m"
                }
#line 879 "diet.m"
              }
#line 881 "diet.m"
            else
#line 882 "diet.m"
              {
#line 882 "diet.m"
                MR_Word mercury__diet__L_23;
#line 882 "diet.m"
                MR_Tuple mercury__diet__V_35_35;
#line 882 "diet.m"
                MR_Box mercury__diet__U_44;
#line 882 "diet.m"
                MR_Box mercury__diet__V_45;
#line 884 "diet.m"
                MR_Word mercury__diet__TypeInfo_56_56;
#line 884 "diet.m"
                MR_Box mercury__diet__V_52_52;
#line 11535 "diet.c"
                MR_Box MR_CALL (* mercury__diet__func_7)(MR_Box, MR_Box);

#line 883 "diet.m"
                {
#line 883 "diet.m"
                  mercury__diet__take_max_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__Left_10, &mercury__diet__V_35_35, &mercury__diet__L_23);
                }
#line 883 "diet.m"
                mercury__diet__U_44 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0));
#line 883 "diet.m"
                mercury__diet__V_45 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1));
#line 11547 "diet.c"
                mercury__diet__func_7 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_50, (MR_Integer) 0)), (MR_Integer) 6)));
#line 11549 "diet.c"
                {
#line 11551 "diet.c"
                  mercury__diet__V_52_52 = mercury__diet__func_7(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_50), mercury__diet__V_45);
                }
#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__add_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_50 ;
	Index =  (MR_Integer) 1 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 11569 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_56_56  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 884 "diet.m"
                {
#line 884 "diet.m"
                  mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_56_56, mercury__diet__P_4, mercury__diet__V_52_52);
                }
#line 886 "diet.m"
                if (mercury__diet__succeeded)
#line 885 "diet.m"
                  {
#line 885 "diet.m"
                    MR_Tuple mercury__diet__V_36_36;

#line 885 "diet.m"
                    {
#line 885 "diet.m"
                      mercury__diet__V_36_36 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 885 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_36_36, 0) = mercury__diet__U_44;
#line 885 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_36_36, 1) = mercury__diet__Y_8;
#line 885 "diet.m"
                    }
#line 885 "diet.m"
                    {
#line 885 "diet.m"
                      return mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_50, mercury__diet__V_36_36, mercury__diet__L_23, mercury__diet__Right_11);
                    }
#line 885 "diet.m"
                  }
#line 886 "diet.m"
                else
#line 887 "diet.m"
                  {
#line 887 "diet.m"
                    MR_Tuple mercury__diet__V_37_37;

#line 887 "diet.m"
                    {
#line 887 "diet.m"
                      mercury__diet__V_37_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 887 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_37_37, 0) = mercury__diet__P_4;
#line 887 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_37_37, 1) = mercury__diet__Y_8;
#line 887 "diet.m"
                    }
#line 887 "diet.m"
                    {
#line 887 "diet.m"
                      mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 887 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__V_37_37));
#line 887 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) (mercury__diet__H_9));
#line 887 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 887 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 887 "diet.m"
                    }
#line 887 "diet.m"
                  }
#line 882 "diet.m"
              }
#line 877 "diet.m"
          }
#line 855 "diet.m"
      }
#line 852 "diet.m"
    return mercury__diet__T_6;
#line 852 "diet.m"
  }
#line 848 "diet.m"
}

#line 786 "diet.m"
static void MR_CALL 
mercury__diet__subset_2_5_p_0(
#line 786 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_56,
#line 786 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 786 "diet.m"
  MR_Word mercury__diet__R1_8,
#line 786 "diet.m"
  MR_Tuple mercury__diet__HeadVar__3_3,
#line 786 "diet.m"
  MR_Word mercury__diet__R2_11,
#line 786 "diet.m"
  MR_Word * mercury__diet__IsSubset_12)
#line 786 "diet.m"
{
#line 789 "diet.m"
  while (MR_TRUE)
#line 789 "diet.m"
    {
#line 789 "diet.m"
      /* tailcall optimized into a loop */
#line 789 "diet.m"
      {
#line 789 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 789 "diet.m"
        MR_Box mercury__diet__X1_6 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 0));
#line 789 "diet.m"
        MR_Box mercury__diet__Y1_7 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 1));
#line 789 "diet.m"
        MR_Box mercury__diet__X2_9 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__3_3, (MR_Integer) 0));
#line 789 "diet.m"
        MR_Box mercury__diet__Y2_10 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__3_3, (MR_Integer) 1));
#line 11686 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));

#line 11689 "diet.c"
        {
#line 11691 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__X1_6, mercury__diet__X2_9);
        }
#line 792 "diet.m"
        if (mercury__diet__succeeded)
#line 791 "diet.m"
          *mercury__diet__IsSubset_12 = (MR_Integer) 0;
#line 792 "diet.m"
        else
#line 801 "diet.m"
          {
#line 11702 "diet.c"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_56, (MR_Integer) 0)), (MR_Integer) 5)));

#line 11705 "diet.c"
            {
#line 11707 "diet.c"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_56), mercury__diet__Y2_10, mercury__diet__X1_6);
            }
#line 801 "diet.m"
            if (mercury__diet__succeeded)
#line 796 "diet.m"
              if ((mercury__diet__R2_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 794 "diet.m"
                *mercury__diet__IsSubset_12 = (MR_Integer) 0;
#line 796 "diet.m"
              else
#line 797 "diet.m"
                {
#line 797 "diet.m"
                  MR_Tuple mercury__diet__Min2_17;
#line 797 "diet.m"
                  MR_Word mercury__diet__MinR2_18;

#line 798 "diet.m"
                  {
#line 798 "diet.m"
                    mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__R2_11, &mercury__diet__Min2_17, &mercury__diet__MinR2_18);
                  }
#line 799 "diet.m"
                  /* direct tailcall eliminated */
#line 799 "diet.m"
                  {
#line 799 "diet.m"
                    MR_Tuple mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__Min2_17;
#line 799 "diet.m"
                    MR_Word mercury__diet__R2__tmp_copy_11 = mercury__diet__MinR2_18;

#line 799 "diet.m"
                    mercury__diet__R2_11 = mercury__diet__R2__tmp_copy_11;
#line 799 "diet.m"
                    mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 799 "diet.m"
                  }
#line 799 "diet.m"
                  continue;
#line 797 "diet.m"
                }
#line 801 "diet.m"
            else
#line 802 "diet.m"
              {
#line 802 "diet.m"
                MR_Word mercury__diet__TypeInfo_58_58;
#line 802 "diet.m"
                MR_Word mercury__diet__Upper_19;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__subset_2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_56 ;
	Index =  (MR_Integer) 1 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 11773 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_58_58  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 802 "diet.m"
                {
#line 802 "diet.m"
                  mercury__builtin__compare_3_p_0(mercury__diet__TypeInfo_58_58, &mercury__diet__Upper_19, mercury__diet__Y1_7, mercury__diet__Y2_10);
                }
#line 813 "diet.m"
#line 813 "diet.m"
                switch (mercury__diet__Upper_19) {
#line 813 "diet.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 813 "diet.m"
                  case (MR_Integer) 1:
#line 804 "diet.m"
                    if ((mercury__diet__R1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 806 "diet.m"
                      *mercury__diet__IsSubset_12 = (MR_Integer) 1;
#line 804 "diet.m"
                    else
#line 809 "diet.m"
                      {
#line 809 "diet.m"
                        MR_Tuple mercury__diet__Min1_24;
#line 809 "diet.m"
                        MR_Word mercury__diet__MinR1_25;

#line 810 "diet.m"
                        {
#line 810 "diet.m"
                          mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__R1_8, &mercury__diet__Min1_24, &mercury__diet__MinR1_25);
                        }
#line 811 "diet.m"
                        /* direct tailcall eliminated */
#line 811 "diet.m"
                        {
#line 811 "diet.m"
                          MR_Tuple mercury__diet__HeadVar__1__tmp_copy_1 = mercury__diet__Min1_24;
#line 811 "diet.m"
                          MR_Word mercury__diet__R1__tmp_copy_8 = mercury__diet__MinR1_25;

#line 811 "diet.m"
                          mercury__diet__R1_8 = mercury__diet__R1__tmp_copy_8;
#line 811 "diet.m"
                          mercury__diet__HeadVar__1_1 = mercury__diet__HeadVar__1__tmp_copy_1;
#line 811 "diet.m"
                        }
#line 811 "diet.m"
                        continue;
#line 809 "diet.m"
                      }
#line 813 "diet.m"
                    break;
#line 813 "diet.m"
                  case (MR_Integer) 0:
#line 814 "diet.m"
                    if ((mercury__diet__R1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 816 "diet.m"
                      *mercury__diet__IsSubset_12 = (MR_Integer) 1;
#line 814 "diet.m"
                    else
#line 818 "diet.m"
                    if ((mercury__diet__R2_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 821 "diet.m"
                      *mercury__diet__IsSubset_12 = (MR_Integer) 0;
#line 818 "diet.m"
                    else
#line 823 "diet.m"
                      {
#line 823 "diet.m"
                        MR_Tuple mercury__diet__Min2_40;
#line 823 "diet.m"
                        MR_Word mercury__diet__MinR2_41;
#line 823 "diet.m"
                        MR_Tuple mercury__diet__Min1_42;
#line 823 "diet.m"
                        MR_Word mercury__diet__MinR1_43;

#line 825 "diet.m"
                        {
#line 825 "diet.m"
                          mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__R1_8, &mercury__diet__Min1_42, &mercury__diet__MinR1_43);
                        }
#line 826 "diet.m"
                        {
#line 826 "diet.m"
                          mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_56, mercury__diet__R2_11, &mercury__diet__Min2_40, &mercury__diet__MinR2_41);
                        }
#line 827 "diet.m"
                        /* direct tailcall eliminated */
#line 827 "diet.m"
                        {
#line 827 "diet.m"
                          MR_Tuple mercury__diet__HeadVar__1__tmp_copy_1 = mercury__diet__Min1_42;
#line 827 "diet.m"
                          MR_Word mercury__diet__R1__tmp_copy_8 = mercury__diet__MinR1_43;
#line 827 "diet.m"
                          MR_Tuple mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__Min2_40;
#line 827 "diet.m"
                          MR_Word mercury__diet__R2__tmp_copy_11 = mercury__diet__MinR2_41;

#line 827 "diet.m"
                          mercury__diet__R2_11 = mercury__diet__R2__tmp_copy_11;
#line 827 "diet.m"
                          mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 827 "diet.m"
                          mercury__diet__R1_8 = mercury__diet__R1__tmp_copy_8;
#line 827 "diet.m"
                          mercury__diet__HeadVar__1_1 = mercury__diet__HeadVar__1__tmp_copy_1;
#line 827 "diet.m"
                        }
#line 827 "diet.m"
                        continue;
#line 823 "diet.m"
                      }
#line 813 "diet.m"
                    break;
#line 813 "diet.m"
                  case (MR_Integer) 2:
#line 830 "diet.m"
                    *mercury__diet__IsSubset_12 = (MR_Integer) 0;
#line 813 "diet.m"
                    break;
#line 813 "diet.m"
                }
#line 802 "diet.m"
              }
#line 801 "diet.m"
          }
#line 789 "diet.m"
      }
#line 789 "diet.m"
      break;
#line 789 "diet.m"
    }
#line 786 "diet.m"
}

#line 758 "diet.m"
static void MR_CALL 
mercury__diet__member_in_range_3_p_0(
#line 758 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_8,
#line 758 "diet.m"
  MR_Box mercury__diet__Lo_4,
#line 758 "diet.m"
  MR_Box mercury__diet__Hi_5,
#line 758 "diet.m"
  MR_Box * mercury__diet__Elem_6,
#line 758 "diet.m"
  MR_Cont mercury__diet__cont,
#line 758 "diet.m"
  void * mercury__diet__cont_env_ptr)
#line 758 "diet.m"
{
#line 769 "diet.m"
  while (MR_TRUE)
#line 769 "diet.m"
    {
#line 769 "diet.m"
      /* tailcall optimized into a loop */
#line 769 "diet.m"
      {
#line 769 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 11943 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_8, (MR_Integer) 0)), (MR_Integer) 5)));

#line 11946 "diet.c"
        {
#line 11948 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_8), mercury__diet__Lo_4, mercury__diet__Hi_5);
        }
#line 769 "diet.m"
        if (mercury__diet__succeeded)
#line 766 "diet.m"
          {
#line 765 "diet.m"
            *mercury__diet__Elem_6 = mercury__diet__Lo_4;
#line 765 "diet.m"
            {
#line 765 "diet.m"
              mercury__diet__cont(mercury__diet__cont_env_ptr);
            }
#line 767 "diet.m"
            {
#line 767 "diet.m"
              MR_Box mercury__diet__V_7_7;
#line 11966 "diet.c"
              MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_8, (MR_Integer) 0)), (MR_Integer) 6)));

#line 11969 "diet.c"
              {
#line 11971 "diet.c"
                mercury__diet__V_7_7 = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_8), mercury__diet__Lo_4);
              }
#line 767 "diet.m"
              /* direct tailcall eliminated */
#line 767 "diet.m"
              {
#line 767 "diet.m"
                MR_Box mercury__diet__Lo__tmp_copy_4 = mercury__diet__V_7_7;

#line 767 "diet.m"
                mercury__diet__Lo_4 = mercury__diet__Lo__tmp_copy_4;
#line 767 "diet.m"
              }
#line 767 "diet.m"
              continue;
#line 767 "diet.m"
            }
#line 766 "diet.m"
          }
#line 769 "diet.m"
        else
#line 770 "diet.m"
          {
#line 770 "diet.m"
            *mercury__diet__Elem_6 = mercury__diet__Lo_4;
#line 770 "diet.m"
            {
#line 770 "diet.m"
              mercury__diet__cont(mercury__diet__cont_env_ptr);
#line 770 "diet.m"
              return;
            }
#line 770 "diet.m"
          }
#line 769 "diet.m"
      }
#line 769 "diet.m"
      break;
#line 769 "diet.m"
    }
#line 758 "diet.m"
}

#line 683 "diet.m"
void MR_CALL 
mercury__diet__unexpected_interval_3_p_0(
#line 683 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_17,
#line 683 "diet.m"
  MR_String mercury__diet__PredName_4,
#line 683 "diet.m"
  MR_Box mercury__diet__X_5,
#line 683 "diet.m"
  MR_Box mercury__diet__Y_6)
#line 683 "diet.m"
{
#line 685 "diet.m"
  {
#line 685 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 685 "diet.m"
    MR_Word mercury__diet__TypeCtorInfo_13_31;
#line 685 "diet.m"
    MR_Word mercury__diet__TypeClassInfo_for_op_table_40;
#line 685 "diet.m"
    MR_Word mercury__diet__TypeCtorInfo_13_56;
#line 685 "diet.m"
    MR_Word mercury__diet__TypeClassInfo_for_op_table_65;
#line 685 "diet.m"
    MR_String mercury__diet__V_8_8;
#line 685 "diet.m"
    MR_String mercury__diet__V_10_10;
#line 685 "diet.m"
    MR_String mercury__diet__V_11_11;
#line 685 "diet.m"
    MR_String mercury__diet__V_12_12;
#line 685 "diet.m"
    MR_String mercury__diet__V_14_14;
#line 685 "diet.m"
    MR_String mercury__diet__V_15_15;
#line 685 "diet.m"
    MR_Word mercury__diet__V_10_28;
#line 685 "diet.m"
    MR_Word mercury__diet__RevStrings_9_29;
#line 685 "diet.m"
    MR_Word mercury__diet__V_11_30;
#line 685 "diet.m"
    MR_Integer mercury__diet__Priority_10_37;
#line 685 "diet.m"
    MR_Integer mercury__diet__V_13_38;
#line 685 "diet.m"
    MR_Word mercury__diet__V_10_53;
#line 685 "diet.m"
    MR_Word mercury__diet__RevStrings_9_54;
#line 685 "diet.m"
    MR_Word mercury__diet__V_11_55;
#line 685 "diet.m"
    MR_Integer mercury__diet__Priority_10_62;
#line 685 "diet.m"
    MR_Integer mercury__diet__V_13_63;
#line 12072 "diet.c"
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box);
#line 12074 "diet.c"
    MR_Box mercury__diet__conv1_V_13_38;
#line 12076 "diet.c"
    MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);
#line 12078 "diet.c"
    MR_Box mercury__diet__conv3_V_13_63;

#line 35 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 48 "string.to_string.opt"
    mercury__diet__V_10_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 12085 "diet.c"
    mercury__diet__TypeClassInfo_for_op_table_40 = (MR_Word) &mercury__diet_scalar_common_1[0];
#line 12087 "diet.c"
    mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_op_table_40, (MR_Integer) 0)), (MR_Integer) 12)));
#line 12089 "diet.c"
    {
#line 12091 "diet.c"
      mercury__diet__conv1_V_13_38 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_op_table_40), ((MR_Box) ((MR_Integer) 0)));
    }
#line 12094 "diet.c"
    mercury__diet__V_13_38 = ((MR_Integer) mercury__diet__conv1_V_13_38);
#line 53 "string.to_string.opt"
    mercury__diet__Priority_10_37 = (mercury__diet__V_13_38 + (MR_Integer) 1);
#line 56 "string.to_string.opt"
    {
#line 56 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__diet__TypeInfo_for_T_17, (MR_Integer) 1, mercury__diet__Priority_10_37, mercury__diet__X_5, mercury__diet__V_10_28, &mercury__diet__RevStrings_9_29);
    }
#line 12103 "diet.c"
    mercury__diet__TypeCtorInfo_13_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 133 "list.opt"
    {
#line 133 "list.opt"
      mercury__list__reverse_2_p_0(mercury__diet__TypeCtorInfo_13_31, mercury__diet__RevStrings_9_29, &mercury__diet__V_11_30);
    }
#line 50 "string.to_string.opt"
    {
#line 50 "string.to_string.opt"
      mercury__diet__V_11_11 = mercury__string__append_list_1_f_0(mercury__diet__V_11_30);
    }
#line 35 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 48 "string.to_string.opt"
    mercury__diet__V_10_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 12119 "diet.c"
    mercury__diet__TypeClassInfo_for_op_table_65 = (MR_Word) &mercury__diet_scalar_common_1[0];
#line 12121 "diet.c"
    mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_op_table_65, (MR_Integer) 0)), (MR_Integer) 12)));
#line 12123 "diet.c"
    {
#line 12125 "diet.c"
      mercury__diet__conv3_V_13_63 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_op_table_65), ((MR_Box) ((MR_Integer) 0)));
    }
#line 12128 "diet.c"
    mercury__diet__V_13_63 = ((MR_Integer) mercury__diet__conv3_V_13_63);
#line 53 "string.to_string.opt"
    mercury__diet__Priority_10_62 = (mercury__diet__V_13_63 + (MR_Integer) 1);
#line 56 "string.to_string.opt"
    {
#line 56 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__diet__TypeInfo_for_T_17, (MR_Integer) 1, mercury__diet__Priority_10_62, mercury__diet__Y_6, mercury__diet__V_10_53, &mercury__diet__RevStrings_9_54);
    }
#line 12137 "diet.c"
    mercury__diet__TypeCtorInfo_13_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 133 "list.opt"
    {
#line 133 "list.opt"
      mercury__list__reverse_2_p_0(mercury__diet__TypeCtorInfo_13_56, mercury__diet__RevStrings_9_54, &mercury__diet__V_11_55);
    }
#line 50 "string.to_string.opt"
    {
#line 50 "string.to_string.opt"
      mercury__diet__V_15_15 = mercury__string__append_list_1_f_0(mercury__diet__V_11_55);
    }
#line 411 "string.opt"
    {
#line 411 "string.opt"
      mercury__string__append_3_p_2(mercury__diet__V_15_15, (MR_String) "]", &mercury__diet__V_14_14);
    }
#line 411 "string.opt"
    {
#line 411 "string.opt"
      mercury__string__append_3_p_2((MR_String) ", ", mercury__diet__V_14_14, &mercury__diet__V_12_12);
    }
#line 411 "string.opt"
    {
#line 411 "string.opt"
      mercury__string__append_3_p_2(mercury__diet__V_11_11, mercury__diet__V_12_12, &mercury__diet__V_10_10);
    }
#line 411 "string.opt"
    {
#line 411 "string.opt"
      mercury__string__append_3_p_2((MR_String) "bad interval [", mercury__diet__V_10_10, &mercury__diet__V_8_8);
    }
#line 686 "diet.m"
    {
#line 686 "diet.m"
      mercury__require__unexpected_3_p_0((MR_String) "diet", mercury__diet__PredName_4, mercury__diet__V_8_8);
#line 686 "diet.m"
      return;
    }
#line 685 "diet.m"
  }
#line 683 "diet.m"
}

#line 654 "diet.m"
static void MR_CALL 
mercury__diet__take_min_iter_3_p_0(
#line 654 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_21,
#line 654 "diet.m"
  MR_Word mercury__diet__T0_4,
#line 654 "diet.m"
  MR_Tuple * mercury__diet__X_5,
#line 654 "diet.m"
  MR_Word * mercury__diet__T_6)
#line 654 "diet.m"
{
#line 659 "diet.m"
  while (MR_TRUE)
#line 659 "diet.m"
    {
#line 659 "diet.m"
      /* tailcall optimized into a loop */
#line 659 "diet.m"
      {
#line 659 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 659 "diet.m"
        MR_Word mercury__diet__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 3)));
#line 659 "diet.m"
        MR_Word mercury__diet__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 2)));
#line 659 "diet.m"
        MR_Tuple mercury__diet__V_28_28 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 0)));
#line 659 "diet.m"
        MR_Integer mercury__diet__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 1)));

#line 659 "diet.m"
        if ((mercury__diet__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 659 "diet.m"
          {
#line 659 "diet.m"
            *mercury__diet__X_5 = mercury__diet__V_28_28;
#line 659 "diet.m"
            *mercury__diet__T_6 = mercury__diet__V_25_25;
#line 659 "diet.m"
          }
#line 659 "diet.m"
        else
#line 661 "diet.m"
          {
#line 661 "diet.m"
            MR_Tuple mercury__diet__A_10 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__V_26_26, (MR_Integer) 0)));
#line 661 "diet.m"
            MR_Word mercury__diet__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__V_26_26, (MR_Integer) 2)));
#line 661 "diet.m"
            MR_Word mercury__diet__M_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__V_26_26, (MR_Integer) 3)));
#line 661 "diet.m"
            MR_Word mercury__diet__N0_15;
#line 661 "diet.m"
            MR_Word mercury__diet__N1_16;
#line 661 "diet.m"
            MR_Integer mercury__diet__V_18_18;
#line 661 "diet.m"
            MR_Integer mercury__diet__V_19_19;
#line 661 "diet.m"
            MR_Integer mercury__diet__V_32_32;
#line 661 "diet.m"
            MR_Integer mercury__diet__V_33_33;
#line 661 "diet.m"
            MR_Integer mercury__diet__V_34_34;
#line 661 "diet.m"
            MR_Integer mercury__diet__V_52_52;
#line 661 "diet.m"
            MR_Integer mercury__diet__V_53_53;
#line 661 "diet.m"
            MR_Integer mercury__diet__V_54_54;
#line 661 "diet.m"
            MR_Integer mercury__diet__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__V_26_26, (MR_Integer) 1)));
#line 514 "diet.m"
            MR_Tuple mercury__diet__V_59_59;
#line 514 "diet.m"
            MR_Word mercury__diet__V_61_61;
#line 514 "diet.m"
            MR_Word mercury__diet__V_62_62;

#line 513 "diet.m"
            if ((mercury__diet__M_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
              mercury__diet__V_33_33 = (MR_Integer) 0;
#line 513 "diet.m"
            else
#line 514 "diet.m"
              {
#line 514 "diet.m"
                MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__M_13, (MR_Integer) 0)));
#line 514 "diet.m"
                MR_Word mercury__diet__V_37_37;
#line 514 "diet.m"
                MR_Word mercury__diet__V_38_38;

#line 514 "diet.m"
                mercury__diet__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__M_13, (MR_Integer) 1)));
#line 514 "diet.m"
                mercury__diet__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__M_13, (MR_Integer) 2)));
#line 514 "diet.m"
                mercury__diet__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__M_13, (MR_Integer) 3)));
#line 514 "diet.m"
              }
#line 513 "diet.m"
            if ((mercury__diet__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
              mercury__diet__V_34_34 = (MR_Integer) 0;
#line 513 "diet.m"
            else
#line 514 "diet.m"
              {
#line 514 "diet.m"
                MR_Tuple mercury__diet__V_39_39 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__V_25_25, (MR_Integer) 0)));
#line 514 "diet.m"
                MR_Word mercury__diet__V_41_41;
#line 514 "diet.m"
                MR_Word mercury__diet__V_42_42;

#line 514 "diet.m"
                mercury__diet__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__V_25_25, (MR_Integer) 1)));
#line 514 "diet.m"
                mercury__diet__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__V_25_25, (MR_Integer) 2)));
#line 514 "diet.m"
                mercury__diet__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__V_25_25, (MR_Integer) 3)));
#line 514 "diet.m"
              }
#line 36 "int.opt"
            mercury__diet__succeeded = (mercury__diet__V_33_33 > mercury__diet__V_34_34);
#line 39 "int.opt"
            if (mercury__diet__succeeded)
#line 38 "int.opt"
              mercury__diet__V_32_32 = mercury__diet__V_33_33;
#line 39 "int.opt"
            else
#line 40 "int.opt"
              mercury__diet__V_32_32 = mercury__diet__V_34_34;
#line 518 "diet.m"
            mercury__diet__V_18_18 = ((MR_Integer) 1 + mercury__diet__V_32_32);
#line 662 "diet.m"
            {
#line 662 "diet.m"
              mercury__diet__N0_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 662 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N0_15, 0) = ((MR_Box) (mercury__diet__V_28_28));
#line 662 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N0_15, 1) = ((MR_Box) (mercury__diet__V_18_18));
#line 662 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N0_15, 2) = ((MR_Box) (mercury__diet__M_13));
#line 662 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N0_15, 3) = ((MR_Box) (mercury__diet__V_25_25));
#line 662 "diet.m"
            }
#line 513 "diet.m"
            if ((mercury__diet__L_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
              mercury__diet__V_53_53 = (MR_Integer) 0;
#line 513 "diet.m"
            else
#line 514 "diet.m"
              {
#line 514 "diet.m"
                MR_Tuple mercury__diet__V_55_55 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_12, (MR_Integer) 0)));
#line 514 "diet.m"
                MR_Word mercury__diet__V_57_57;
#line 514 "diet.m"
                MR_Word mercury__diet__V_58_58;

#line 514 "diet.m"
                mercury__diet__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_12, (MR_Integer) 1)));
#line 514 "diet.m"
                mercury__diet__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_12, (MR_Integer) 2)));
#line 514 "diet.m"
                mercury__diet__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_12, (MR_Integer) 3)));
#line 514 "diet.m"
              }
#line 514 "diet.m"
            mercury__diet__V_59_59 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__N0_15, (MR_Integer) 0)));
#line 514 "diet.m"
            mercury__diet__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__N0_15, (MR_Integer) 1)));
#line 514 "diet.m"
            mercury__diet__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__N0_15, (MR_Integer) 2)));
#line 514 "diet.m"
            mercury__diet__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__N0_15, (MR_Integer) 3)));
#line 36 "int.opt"
            mercury__diet__succeeded = (mercury__diet__V_53_53 > mercury__diet__V_54_54);
#line 39 "int.opt"
            if (mercury__diet__succeeded)
#line 38 "int.opt"
              mercury__diet__V_52_52 = mercury__diet__V_53_53;
#line 39 "int.opt"
            else
#line 40 "int.opt"
              mercury__diet__V_52_52 = mercury__diet__V_54_54;
#line 518 "diet.m"
            mercury__diet__V_19_19 = ((MR_Integer) 1 + mercury__diet__V_52_52);
#line 663 "diet.m"
            {
#line 663 "diet.m"
              mercury__diet__N1_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 663 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N1_16, 0) = ((MR_Box) (mercury__diet__A_10));
#line 663 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N1_16, 1) = ((MR_Box) (mercury__diet__V_19_19));
#line 663 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N1_16, 2) = ((MR_Box) (mercury__diet__L_12));
#line 663 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N1_16, 3) = ((MR_Box) (mercury__diet__N0_15));
#line 663 "diet.m"
            }
#line 664 "diet.m"
            /* direct tailcall eliminated */
#line 664 "diet.m"
            {
#line 664 "diet.m"
              MR_Word mercury__diet__T0__tmp_copy_4 = mercury__diet__N1_16;

#line 664 "diet.m"
              mercury__diet__T0_4 = mercury__diet__T0__tmp_copy_4;
#line 664 "diet.m"
            }
#line 664 "diet.m"
            continue;
#line 661 "diet.m"
          }
#line 659 "diet.m"
      }
#line 659 "diet.m"
      break;
#line 659 "diet.m"
    }
#line 654 "diet.m"
}

#line 633 "diet.m"
static MR_Word MR_CALL 
mercury__diet__reroot_2_f_0(
#line 633 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_25,
#line 633 "diet.m"
  MR_Word mercury__diet__L_4,
#line 633 "diet.m"
  MR_Word mercury__diet__R_5)
#line 633 "diet.m"
{
#line 645 "diet.m"
  {
#line 645 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 645 "diet.m"
    MR_Word mercury__diet__T_6;
#line 636 "diet.m"
    MR_Integer mercury__diet__V_18_18;
#line 636 "diet.m"
    MR_Integer mercury__diet__V_19_19;
#line 102 "private_builtin.opt"
    MR_Word mercury__diet__TypeInfo_27_27;
#line 102 "private_builtin.opt"
    MR_Word mercury__diet__TypeInfo_28_28;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__reroot_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_25 ;
	Index =  (MR_Integer) 1 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 12456 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_27_27  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 513 "diet.m"
    if ((mercury__diet__L_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
      mercury__diet__V_18_18 = (MR_Integer) 0;
#line 513 "diet.m"
    else
#line 514 "diet.m"
      {
#line 514 "diet.m"
        MR_Tuple mercury__diet__V_29_29 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_4, (MR_Integer) 0)));
#line 514 "diet.m"
        MR_Word mercury__diet__V_31_31;
#line 514 "diet.m"
        MR_Word mercury__diet__V_32_32;

#line 514 "diet.m"
        mercury__diet__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_4, (MR_Integer) 1)));
#line 514 "diet.m"
        mercury__diet__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_4, (MR_Integer) 2)));
#line 514 "diet.m"
        mercury__diet__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_4, (MR_Integer) 3)));
#line 514 "diet.m"
      }
#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__reroot_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_25 ;
	Index =  (MR_Integer) 1 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 12501 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_28_28  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 513 "diet.m"
    if ((mercury__diet__R_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
      mercury__diet__V_19_19 = (MR_Integer) 0;
#line 513 "diet.m"
    else
#line 514 "diet.m"
      {
#line 514 "diet.m"
        MR_Tuple mercury__diet__V_33_33 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__R_5, (MR_Integer) 0)));
#line 514 "diet.m"
        MR_Word mercury__diet__V_35_35;
#line 514 "diet.m"
        MR_Word mercury__diet__V_36_36;

#line 514 "diet.m"
        mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__R_5, (MR_Integer) 1)));
#line 514 "diet.m"
        mercury__diet__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_5, (MR_Integer) 2)));
#line 514 "diet.m"
        mercury__diet__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_5, (MR_Integer) 3)));
#line 514 "diet.m"
      }
#line 494 "diet.m"
    mercury__diet__succeeded = (mercury__diet__V_18_18 > mercury__diet__V_19_19);
#line 645 "diet.m"
    if (mercury__diet__succeeded)
#line 640 "diet.m"
      if ((mercury__diet__L_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 638 "diet.m"
        {
#line 639 "diet.m"
          {
#line 639 "diet.m"
            mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.reroot\'/2", (MR_String) "L empty");
          }
#line 638 "diet.m"
        }
#line 640 "diet.m"
      else
#line 641 "diet.m"
        {
#line 641 "diet.m"
          MR_Tuple mercury__diet__I_11;
#line 641 "diet.m"
          MR_Word mercury__diet__L1_12;

#line 642 "diet.m"
          {
#line 642 "diet.m"
            mercury__diet__take_max_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__L_4, &mercury__diet__I_11, &mercury__diet__L1_12);
          }
#line 643 "diet.m"
          {
#line 643 "diet.m"
            return mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__I_11, mercury__diet__L1_12, mercury__diet__R_5);
          }
#line 641 "diet.m"
        }
#line 645 "diet.m"
    else
#line 648 "diet.m"
    if ((mercury__diet__R_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "diet.m"
      mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 648 "diet.m"
    else
#line 649 "diet.m"
      {
#line 649 "diet.m"
        MR_Word mercury__diet__R1_17;
#line 649 "diet.m"
        MR_Tuple mercury__diet__I_23;

#line 650 "diet.m"
        {
#line 650 "diet.m"
          mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__R_5, &mercury__diet__I_23, &mercury__diet__R1_17);
        }
#line 651 "diet.m"
        {
#line 651 "diet.m"
          return mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__I_23, mercury__diet__L_4, mercury__diet__R1_17);
        }
#line 649 "diet.m"
      }
#line 645 "diet.m"
    return mercury__diet__T_6;
#line 645 "diet.m"
  }
#line 633 "diet.m"
}

#line 621 "diet.m"
static void MR_CALL 
mercury__diet__take_max_3_p_0(
#line 621 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 621 "diet.m"
  MR_Word mercury__diet__T0_4,
#line 621 "diet.m"
  MR_Tuple * mercury__diet__X_5,
#line 621 "diet.m"
  MR_Word * mercury__diet__T_6)
#line 621 "diet.m"
{
#line 626 "diet.m"
  {
#line 626 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 626 "diet.m"
    MR_Word mercury__diet__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 3)));
#line 626 "diet.m"
    MR_Word mercury__diet__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 2)));
#line 626 "diet.m"
    MR_Tuple mercury__diet__V_23_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 0)));
#line 626 "diet.m"
    MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 1)));

#line 626 "diet.m"
    if ((mercury__diet__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 626 "diet.m"
      {
#line 626 "diet.m"
        *mercury__diet__X_5 = mercury__diet__V_23_23;
#line 626 "diet.m"
        *mercury__diet__T_6 = mercury__diet__V_21_21;
#line 626 "diet.m"
      }
#line 626 "diet.m"
    else
#line 628 "diet.m"
      {
#line 628 "diet.m"
        MR_Word mercury__diet__R1_16;

#line 629 "diet.m"
        {
#line 629 "diet.m"
          mercury__diet__take_max_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__V_20_20, mercury__diet__X_5, &mercury__diet__R1_16);
        }
#line 630 "diet.m"
        {
#line 630 "diet.m"
          *mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__V_23_23, mercury__diet__V_21_21, mercury__diet__R1_16);
        }
#line 628 "diet.m"
      }
#line 626 "diet.m"
  }
#line 621 "diet.m"
}

#line 609 "diet.m"
static void MR_CALL 
mercury__diet__take_min_3_p_0(
#line 609 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_19,
#line 609 "diet.m"
  MR_Word mercury__diet__T0_4,
#line 609 "diet.m"
  MR_Tuple * mercury__diet__X_5,
#line 609 "diet.m"
  MR_Word * mercury__diet__T_6)
#line 609 "diet.m"
{
#line 614 "diet.m"
  {
#line 614 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 614 "diet.m"
    MR_Word mercury__diet__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 3)));
#line 614 "diet.m"
    MR_Word mercury__diet__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 2)));
#line 614 "diet.m"
    MR_Tuple mercury__diet__V_23_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 0)));
#line 614 "diet.m"
    MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 1)));

#line 614 "diet.m"
    if ((mercury__diet__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 614 "diet.m"
      {
#line 614 "diet.m"
        *mercury__diet__X_5 = mercury__diet__V_23_23;
#line 614 "diet.m"
        *mercury__diet__T_6 = mercury__diet__V_20_20;
#line 614 "diet.m"
      }
#line 614 "diet.m"
    else
#line 616 "diet.m"
      {
#line 616 "diet.m"
        MR_Word mercury__diet__L1_16;

#line 617 "diet.m"
        {
#line 617 "diet.m"
          mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__V_21_21, mercury__diet__X_5, &mercury__diet__L1_16);
        }
#line 618 "diet.m"
        {
#line 618 "diet.m"
          *mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__V_23_23, mercury__diet__L1_16, mercury__diet__V_20_20);
        }
#line 616 "diet.m"
      }
#line 614 "diet.m"
  }
#line 609 "diet.m"
}

#line 570 "diet.m"
static MR_Word MR_CALL 
mercury__diet__join_3_f_0(
#line 570 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_29,
#line 570 "diet.m"
  MR_Tuple mercury__diet__V_5,
#line 570 "diet.m"
  MR_Word mercury__diet__L_6,
#line 570 "diet.m"
  MR_Word mercury__diet__R_7)
#line 570 "diet.m"
{
#line 574 "diet.m"
  {
#line 574 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 574 "diet.m"
    MR_Word mercury__diet__T_8;

#line 574 "diet.m"
    if ((mercury__diet__L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 574 "diet.m"
      {
#line 575 "diet.m"
        {
#line 575 "diet.m"
          return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0((MR_Integer) 1, mercury__diet__V_5, mercury__diet__R_7);
        }
#line 574 "diet.m"
      }
#line 574 "diet.m"
    else
#line 574 "diet.m"
      {
#line 574 "diet.m"
        MR_Word mercury__diet__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 3)));
#line 574 "diet.m"
        MR_Word mercury__diet__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 2)));
#line 574 "diet.m"
        MR_Integer mercury__diet__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 1)));
#line 574 "diet.m"
        MR_Tuple mercury__diet__V_43_43 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 0)));

#line 574 "diet.m"
        if ((mercury__diet__R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 577 "diet.m"
          {
#line 579 "diet.m"
            {
#line 579 "diet.m"
              return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0((MR_Integer) 0, mercury__diet__V_5, mercury__diet__L_6);
            }
#line 577 "diet.m"
          }
#line 574 "diet.m"
        else
#line 581 "diet.m"
          {
#line 581 "diet.m"
            MR_Tuple mercury__diet__RX_17 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 0)));
#line 581 "diet.m"
            MR_Integer mercury__diet__RH_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 1)));
#line 581 "diet.m"
            MR_Word mercury__diet__RL_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 2)));
#line 581 "diet.m"
            MR_Word mercury__diet__RR_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 3)));
#line 583 "diet.m"
            MR_Integer mercury__diet__V_21_21 = (mercury__diet__RH_18 + (MR_Integer) 1);

#line 494 "diet.m"
            mercury__diet__succeeded = (mercury__diet__V_42_42 > mercury__diet__V_21_21);
#line 585 "diet.m"
            if (mercury__diet__succeeded)
#line 584 "diet.m"
              {
#line 584 "diet.m"
                MR_Word mercury__diet__V_23_23;

#line 584 "diet.m"
                {
#line 584 "diet.m"
                  mercury__diet__V_23_23 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_29, mercury__diet__V_5, mercury__diet__V_40_40, mercury__diet__R_7);
                }
#line 584 "diet.m"
                {
#line 584 "diet.m"
                  return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_43_43, mercury__diet__V_41_41, mercury__diet__V_23_23);
                }
#line 584 "diet.m"
              }
#line 585 "diet.m"
            else
#line 587 "diet.m"
              {
#line 585 "diet.m"
                MR_Integer mercury__diet__V_24_24 = (mercury__diet__V_42_42 + (MR_Integer) 1);

#line 494 "diet.m"
                mercury__diet__succeeded = (mercury__diet__RH_18 > mercury__diet__V_24_24);
#line 587 "diet.m"
                if (mercury__diet__succeeded)
#line 586 "diet.m"
                  {
#line 586 "diet.m"
                    MR_Word mercury__diet__V_26_26;

#line 586 "diet.m"
                    {
#line 586 "diet.m"
                      mercury__diet__V_26_26 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_29, mercury__diet__V_5, mercury__diet__L_6, mercury__diet__RL_19);
                    }
#line 586 "diet.m"
                    {
#line 586 "diet.m"
                      return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__RX_17, mercury__diet__V_26_26, mercury__diet__RR_20);
                    }
#line 586 "diet.m"
                  }
#line 587 "diet.m"
                else
#line 588 "diet.m"
                  {
#line 588 "diet.m"
                    return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_5, mercury__diet__L_6, mercury__diet__R_7);
                  }
#line 587 "diet.m"
              }
#line 581 "diet.m"
          }
#line 574 "diet.m"
      }
#line 574 "diet.m"
    return mercury__diet__T_8;
#line 574 "diet.m"
  }
#line 570 "diet.m"
}

#line 507 "diet.m"
MR_Word MR_CALL 
mercury__diet__singleton_1_f_0(
#line 507 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_7,
#line 507 "diet.m"
  MR_Tuple mercury__diet__Z_3)
#line 507 "diet.m"
{
#line 509 "diet.m"
  {
#line 509 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 509 "diet.m"
    MR_Word mercury__diet__HeadVar__2_2;
#line 509 "diet.m"
    MR_Word mercury__diet__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 509 "diet.m"
    MR_Word mercury__diet__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 509 "diet.m"
    {
#line 509 "diet.m"
      mercury__diet__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 509 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 0) = ((MR_Box) (mercury__diet__Z_3));
#line 509 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 1));
#line 509 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 2) = ((MR_Box) (mercury__diet__V_5_5));
#line 509 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 3) = ((MR_Box) (mercury__diet__V_6_6));
#line 509 "diet.m"
    }
#line 509 "diet.m"
    return mercury__diet__HeadVar__2_2;
#line 509 "diet.m"
  }
#line 507 "diet.m"
}

#line 487 "diet.m"
static MR_Box MR_CALL 
mercury__diet__max_elem_2_f_0(
#line 487 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_6,
#line 487 "diet.m"
  MR_Box mercury__diet__X_4,
#line 487 "diet.m"
  MR_Box mercury__diet__Y_5)
#line 487 "diet.m"
{
#line 489 "diet.m"
  {
#line 489 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 489 "diet.m"
    MR_Box mercury__diet__HeadVar__3_3;
#line 12918 "diet.c"
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_6, (MR_Integer) 0)), (MR_Integer) 5)));

#line 12921 "diet.c"
    {
#line 12923 "diet.c"
      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_6), mercury__diet__Y_5, mercury__diet__X_4);
    }
#line 489 "diet.m"
    if (mercury__diet__succeeded)
#line 489 "diet.m"
      mercury__diet__HeadVar__3_3 = mercury__diet__X_4;
#line 489 "diet.m"
    else
#line 489 "diet.m"
      mercury__diet__HeadVar__3_3 = mercury__diet__Y_5;
#line 489 "diet.m"
    return mercury__diet__HeadVar__3_3;
#line 489 "diet.m"
  }
#line 487 "diet.m"
}

#line 483 "diet.m"
static MR_Box MR_CALL 
mercury__diet__min_elem_2_f_0(
#line 483 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_6,
#line 483 "diet.m"
  MR_Box mercury__diet__X_4,
#line 483 "diet.m"
  MR_Box mercury__diet__Y_5)
#line 483 "diet.m"
{
#line 485 "diet.m"
  {
#line 485 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 485 "diet.m"
    MR_Box mercury__diet__HeadVar__3_3;
#line 12958 "diet.c"
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_6, (MR_Integer) 0)), (MR_Integer) 5)));

#line 12961 "diet.c"
    {
#line 12963 "diet.c"
      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_6), mercury__diet__X_4, mercury__diet__Y_5);
    }
#line 485 "diet.m"
    if (mercury__diet__succeeded)
#line 485 "diet.m"
      mercury__diet__HeadVar__3_3 = mercury__diet__X_4;
#line 485 "diet.m"
    else
#line 485 "diet.m"
      mercury__diet__HeadVar__3_3 = mercury__diet__Y_5;
#line 485 "diet.m"
    return mercury__diet__HeadVar__3_3;
#line 485 "diet.m"
  }
#line 483 "diet.m"
}

#line 478 "diet.m"
MR_bool MR_CALL 
mercury__diet__f_less_or_equal_2_p_0(
#line 478 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_diet_element_5,
#line 478 "diet.m"
  MR_Box mercury__diet__X_3,
#line 478 "diet.m"
  MR_Box mercury__diet__Y_4)
#line 478 "diet.m"
{
#line 481 "diet.m"
  {
#line 481 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 12996 "diet.c"
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_5, (MR_Integer) 0)), (MR_Integer) 5)));

#line 12999 "diet.c"
    {
#line 13001 "diet.c"
      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_5), mercury__diet__Y_4, mercury__diet__X_3);
    }
#line 481 "diet.m"
    mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 481 "diet.m"
    return mercury__diet__succeeded;
#line 481 "diet.m"
  }
#line 478 "diet.m"
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
#line 1798 "diet.m"
  {
#line 1798 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1798 "diet.m"
    MR_Word mercury__diet__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1799 "diet.m"
    {
#line 1799 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__List_3, mercury__diet__V_6_6, mercury__diet__Set_4);
#line 1799 "diet.m"
      return;
    }
#line 1798 "diet.m"
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
#line 1790 "diet.m"
  {
#line 1790 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1790 "diet.m"
    MR_Word mercury__diet__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1791 "diet.m"
    {
#line 1791 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__Set_3, mercury__diet__V_6_6, mercury__diet__List_4);
#line 1791 "diet.m"
      return;
    }
#line 1790 "diet.m"
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
#line 1787 "diet.m"
  {
#line 1787 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1787 "diet.m"
    MR_Word mercury__diet__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1788 "diet.m"
    {
#line 1788 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__T_3, mercury__diet__V_6_6, mercury__diet__List_4);
#line 1788 "diet.m"
      return;
    }
#line 1787 "diet.m"
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
#line 1787 "diet.m"
  {
#line 1787 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1787 "diet.m"
    MR_Word mercury__diet__List_4;
#line 1787 "diet.m"
    MR_Word mercury__diet__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1788 "diet.m"
    {
#line 1788 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__T_3, mercury__diet__V_9_9, &mercury__diet__List_4);
    }
#line 1787 "diet.m"
    return mercury__diet__List_4;
#line 1787 "diet.m"
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
#line 1782 "diet.m"
  {
#line 1782 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1782 "diet.m"
    {
#line 1782 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__List_3, mercury__diet__Set_4);
#line 1782 "diet.m"
      return;
    }
#line 1782 "diet.m"
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
#line 1782 "diet.m"
  {
#line 1782 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1782 "diet.m"
    MR_Word mercury__diet__Set_4;

#line 1782 "diet.m"
    {
#line 1782 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__List_3, &mercury__diet__Set_4);
    }
#line 1782 "diet.m"
    return mercury__diet__Set_4;
#line 1782 "diet.m"
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
#line 1776 "diet.m"
  {
#line 1776 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1776 "diet.m"
    {
#line 1776 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__List_3, mercury__diet__Set_4);
#line 1776 "diet.m"
      return;
    }
#line 1776 "diet.m"
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
#line 1773 "diet.m"
  {
#line 1773 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1773 "diet.m"
    MR_Word mercury__diet__Set_4;

#line 1773 "diet.m"
    {
#line 1773 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__List_3, &mercury__diet__Set_4);
    }
#line 1773 "diet.m"
    return mercury__diet__Set_4;
#line 1773 "diet.m"
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
#line 1769 "diet.m"
  {
#line 1769 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1769 "diet.m"
    MR_Word mercury__diet__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1770 "diet.m"
    {
#line 1770 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__List_3, mercury__diet__V_6_6, mercury__diet__Set_4);
#line 1770 "diet.m"
      return;
    }
#line 1769 "diet.m"
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
#line 1767 "diet.m"
  {
#line 1767 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1767 "diet.m"
    MR_Word mercury__diet__Set_4;

#line 1767 "diet.m"
    {
#line 1767 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__List_3, &mercury__diet__Set_4);
    }
#line 1767 "diet.m"
    return mercury__diet__Set_4;
#line 1767 "diet.m"
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
#line 1762 "diet.m"
  {
#line 1762 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1762 "diet.m"
    {
#line 1762 "diet.m"
      mercury__diet__divide_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_9, mercury__diet__Pred_5, mercury__diet__Set_6, mercury__diet__TrueSet_7, mercury__diet__FalseSet_8);
#line 1762 "diet.m"
      return;
    }
#line 1762 "diet.m"
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
#line 1759 "diet.m"
  {
#line 1759 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1759 "diet.m"
    MR_Word mercury__diet__TrueSet_6;
#line 1759 "diet.m"
    MR_Word mercury__diet___FalseSet_7;

#line 1759 "diet.m"
    {
#line 1759 "diet.m"
      mercury__diet__divide_4_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__Pred_4, mercury__diet__Set_5, &mercury__diet__TrueSet_6, &mercury__diet___FalseSet_7);
    }
#line 1759 "diet.m"
    return mercury__diet__TrueSet_6;
#line 1759 "diet.m"
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
#line 1737 "diet.m"
  while (MR_TRUE)
#line 1737 "diet.m"
    {
#line 1737 "diet.m"
      /* tailcall optimized into a loop */
#line 1737 "diet.m"
      {
#line 1737 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1737 "diet.m"
        if ((mercury__diet__Set_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1737 "diet.m"
          mercury__diet__succeeded = MR_TRUE;
#line 1737 "diet.m"
        else
#line 1739 "diet.m"
          {
#line 1739 "diet.m"
            MR_Box mercury__diet__X_5;
#line 1739 "diet.m"
            MR_Box mercury__diet__Y_6;
#line 1739 "diet.m"
            MR_Word mercury__diet__L_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_4, (MR_Integer) 2)));
#line 1739 "diet.m"
            MR_Word mercury__diet__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_4, (MR_Integer) 3)));
#line 1739 "diet.m"
            MR_Tuple mercury__diet__V_10_10 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set_4, (MR_Integer) 0)));
#line 1739 "diet.m"
            MR_Integer mercury__diet__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set_4, (MR_Integer) 1)));

#line 1739 "diet.m"
            mercury__diet__X_5 = (MR_hl_field(MR_mktag(0), mercury__diet__V_10_10, (MR_Integer) 0));
#line 1739 "diet.m"
            mercury__diet__Y_6 = (MR_hl_field(MR_mktag(0), mercury__diet__V_10_10, (MR_Integer) 1));
#line 1740 "diet.m"
            {
#line 1740 "diet.m"
              mercury__diet__succeeded = mercury__diet__all_true_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_11, mercury__diet__P_3, mercury__diet__L_8);
            }
#line 1739 "diet.m"
            if (mercury__diet__succeeded)
#line 1739 "diet.m"
              {
#line 1741 "diet.m"
                {
#line 1741 "diet.m"
                  mercury__diet__succeeded = mercury__diet__all_true_interval_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_11, mercury__diet__P_3, mercury__diet__X_5, mercury__diet__Y_6);
                }
#line 1739 "diet.m"
                if (mercury__diet__succeeded)
#line 1742 "diet.m"
                  {
#line 1742 "diet.m"
                    /* direct tailcall eliminated */
#line 1742 "diet.m"
                    {
#line 1742 "diet.m"
                      MR_Word mercury__diet__Set__tmp_copy_4 = mercury__diet__R_9;

#line 1742 "diet.m"
                      mercury__diet__Set_4 = mercury__diet__Set__tmp_copy_4;
#line 1742 "diet.m"
                    }
#line 1742 "diet.m"
                    continue;
#line 1742 "diet.m"
                  }
#line 1739 "diet.m"
              }
#line 1739 "diet.m"
          }
#line 1737 "diet.m"
        return mercury__diet__succeeded;
#line 1737 "diet.m"
      }
#line 1737 "diet.m"
      break;
#line 1737 "diet.m"
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
#line 1710 "diet.m"
  while (MR_TRUE)
#line 1710 "diet.m"
    {
#line 1710 "diet.m"
      /* tailcall optimized into a loop */
#line 1710 "diet.m"
      {
#line 1710 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1710 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1709 "diet.m"
          {
#line 1709 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1709 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1709 "diet.m"
          }
#line 1710 "diet.m"
        else
#line 1711 "diet.m"
          {
#line 1711 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1711 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1711 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1711 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1711 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1711 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1711 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1711 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1711 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1711 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1712 "diet.m"
            {
#line 1712 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldr_4_p_5(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1711 "diet.m"
            if (mercury__diet__succeeded)
#line 1711 "diet.m"
              {
#line 1713 "diet.m"
                {
#line 1713 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_down_5_p_5(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1711 "diet.m"
                if (mercury__diet__succeeded)
#line 1714 "diet.m"
                  {
#line 1714 "diet.m"
                    /* direct tailcall eliminated */
#line 1714 "diet.m"
                    {
#line 1714 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1714 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1714 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1714 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1714 "diet.m"
                    }
#line 1714 "diet.m"
                    continue;
#line 1714 "diet.m"
                  }
#line 1711 "diet.m"
              }
#line 1711 "diet.m"
          }
#line 1710 "diet.m"
        return mercury__diet__succeeded;
#line 1710 "diet.m"
      }
#line 1710 "diet.m"
      break;
#line 1710 "diet.m"
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
#line 1710 "diet.m"
  while (MR_TRUE)
#line 1710 "diet.m"
    {
#line 1710 "diet.m"
      /* tailcall optimized into a loop */
#line 1710 "diet.m"
      {
#line 1710 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1710 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1709 "diet.m"
          {
#line 1709 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1709 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1709 "diet.m"
          }
#line 1710 "diet.m"
        else
#line 1711 "diet.m"
          {
#line 1711 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1711 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1711 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1711 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1711 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1711 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1711 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1711 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1711 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1711 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1712 "diet.m"
            {
#line 1712 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldr_4_p_4(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1711 "diet.m"
            if (mercury__diet__succeeded)
#line 1711 "diet.m"
              {
#line 1713 "diet.m"
                {
#line 1713 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_down_5_p_4(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1711 "diet.m"
                if (mercury__diet__succeeded)
#line 1714 "diet.m"
                  {
#line 1714 "diet.m"
                    /* direct tailcall eliminated */
#line 1714 "diet.m"
                    {
#line 1714 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1714 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1714 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1714 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1714 "diet.m"
                    }
#line 1714 "diet.m"
                    continue;
#line 1714 "diet.m"
                  }
#line 1711 "diet.m"
              }
#line 1711 "diet.m"
          }
#line 1710 "diet.m"
        return mercury__diet__succeeded;
#line 1710 "diet.m"
      }
#line 1710 "diet.m"
      break;
#line 1710 "diet.m"
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
#line 1710 "diet.m"
  while (MR_TRUE)
#line 1710 "diet.m"
    {
#line 1710 "diet.m"
      /* tailcall optimized into a loop */
#line 1710 "diet.m"
      {
#line 1710 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1710 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1709 "diet.m"
          {
#line 1709 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1709 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1709 "diet.m"
          }
#line 1710 "diet.m"
        else
#line 1711 "diet.m"
          {
#line 1711 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1711 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1711 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1711 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1711 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1711 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1711 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1711 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1711 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1711 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1712 "diet.m"
            {
#line 1712 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldr_4_p_3(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1711 "diet.m"
            if (mercury__diet__succeeded)
#line 1711 "diet.m"
              {
#line 1713 "diet.m"
                {
#line 1713 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_down_5_p_3(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1711 "diet.m"
                if (mercury__diet__succeeded)
#line 1714 "diet.m"
                  {
#line 1714 "diet.m"
                    /* direct tailcall eliminated */
#line 1714 "diet.m"
                    {
#line 1714 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1714 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1714 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1714 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1714 "diet.m"
                    }
#line 1714 "diet.m"
                    continue;
#line 1714 "diet.m"
                  }
#line 1711 "diet.m"
              }
#line 1711 "diet.m"
          }
#line 1710 "diet.m"
        return mercury__diet__succeeded;
#line 1710 "diet.m"
      }
#line 1710 "diet.m"
      break;
#line 1710 "diet.m"
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
#line 1710 "diet.m"
  while (MR_TRUE)
#line 1710 "diet.m"
    {
#line 1710 "diet.m"
      /* tailcall optimized into a loop */
#line 1710 "diet.m"
      {
#line 1710 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1710 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1709 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1710 "diet.m"
        else
#line 1711 "diet.m"
          {
#line 1711 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1711 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1711 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1711 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1711 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1711 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1711 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1711 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1711 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1711 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1712 "diet.m"
            {
#line 1712 "diet.m"
              mercury__diet__foldr_4_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1713 "diet.m"
            {
#line 1713 "diet.m"
              mercury__diet__fold_down_5_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1714 "diet.m"
            /* direct tailcall eliminated */
#line 1714 "diet.m"
            {
#line 1714 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1714 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1714 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1714 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1714 "diet.m"
            }
#line 1714 "diet.m"
            continue;
#line 1711 "diet.m"
          }
#line 1710 "diet.m"
      }
#line 1710 "diet.m"
      break;
#line 1710 "diet.m"
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
#line 1710 "diet.m"
  while (MR_TRUE)
#line 1710 "diet.m"
    {
#line 1710 "diet.m"
      /* tailcall optimized into a loop */
#line 1710 "diet.m"
      {
#line 1710 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1710 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1709 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1710 "diet.m"
        else
#line 1711 "diet.m"
          {
#line 1711 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1711 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1711 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1711 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1711 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1711 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1711 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1711 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1711 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1711 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1712 "diet.m"
            {
#line 1712 "diet.m"
              mercury__diet__foldr_4_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1713 "diet.m"
            {
#line 1713 "diet.m"
              mercury__diet__fold_down_5_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1714 "diet.m"
            /* direct tailcall eliminated */
#line 1714 "diet.m"
            {
#line 1714 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1714 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1714 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1714 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1714 "diet.m"
            }
#line 1714 "diet.m"
            continue;
#line 1711 "diet.m"
          }
#line 1710 "diet.m"
      }
#line 1710 "diet.m"
      break;
#line 1710 "diet.m"
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
#line 1710 "diet.m"
  while (MR_TRUE)
#line 1710 "diet.m"
    {
#line 1710 "diet.m"
      /* tailcall optimized into a loop */
#line 1710 "diet.m"
      {
#line 1710 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1710 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1709 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1710 "diet.m"
        else
#line 1711 "diet.m"
          {
#line 1711 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1711 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1711 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1711 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1711 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1711 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1711 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1711 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1711 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1711 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1712 "diet.m"
            {
#line 1712 "diet.m"
              mercury__diet__foldr_4_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1713 "diet.m"
            {
#line 1713 "diet.m"
              mercury__diet__fold_down_5_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1714 "diet.m"
            /* direct tailcall eliminated */
#line 1714 "diet.m"
            {
#line 1714 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1714 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1714 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1714 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1714 "diet.m"
            }
#line 1714 "diet.m"
            continue;
#line 1711 "diet.m"
          }
#line 1710 "diet.m"
      }
#line 1710 "diet.m"
      break;
#line 1710 "diet.m"
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
#line 1705 "diet.m"
  {
#line 1705 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1705 "diet.m"
    MR_Box mercury__diet__Acc_8;

#line 1705 "diet.m"
    {
#line 1705 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(mercury__diet__F_5, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__Set_6, mercury__diet__Acc0_7, &mercury__diet__Acc_8);
    }
#line 1705 "diet.m"
    return mercury__diet__Acc_8;
#line 1705 "diet.m"
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
#line 1662 "diet.m"
  while (MR_TRUE)
#line 1662 "diet.m"
    {
#line 1662 "diet.m"
      /* tailcall optimized into a loop */
#line 1662 "diet.m"
      {
#line 1662 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1662 "diet.m"
        if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1661 "diet.m"
          {
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
#line 1661 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1661 "diet.m"
          }
#line 1662 "diet.m"
        else
#line 1663 "diet.m"
          {
#line 1663 "diet.m"
            MR_Box mercury__diet__X_20;
#line 1663 "diet.m"
            MR_Box mercury__diet__Y_21;
#line 1663 "diet.m"
            MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
#line 1663 "diet.m"
            MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
#line 1663 "diet.m"
            MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
#line 1663 "diet.m"
            MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

#line 1663 "diet.m"
            mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0));
#line 1663 "diet.m"
            mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1));
#line 1664 "diet.m"
            {
#line 1664 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl5_12_p_5(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
            }
#line 1663 "diet.m"
            if (mercury__diet__succeeded)
#line 1663 "diet.m"
              {
#line 1665 "diet.m"
                {
#line 1665 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up5_13_p_5(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
                }
#line 1663 "diet.m"
                if (mercury__diet__succeeded)
#line 1666 "diet.m"
                  {
#line 1666 "diet.m"
                    /* direct tailcall eliminated */
#line 1666 "diet.m"
                    {
#line 1666 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_14 = mercury__diet__R_24;
#line 1666 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_A_41_41;
#line 1666 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27 = mercury__diet__STATE_VARIABLE_B_42_42;
#line 1666 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29 = mercury__diet__STATE_VARIABLE_C_43_43;
#line 1666 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31 = mercury__diet__STATE_VARIABLE_D_44_44;
#line 1666 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33 = mercury__diet__STATE_VARIABLE_E_45_45;

#line 1666 "diet.m"
                      mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33;
#line 1666 "diet.m"
                      mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31;
#line 1666 "diet.m"
                      mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29;
#line 1666 "diet.m"
                      mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27;
#line 1666 "diet.m"
                      mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25;
#line 1666 "diet.m"
                      mercury__diet__T_14 = mercury__diet__T__tmp_copy_14;
#line 1666 "diet.m"
                    }
#line 1666 "diet.m"
                    continue;
#line 1666 "diet.m"
                  }
#line 1663 "diet.m"
              }
#line 1663 "diet.m"
          }
#line 1662 "diet.m"
        return mercury__diet__succeeded;
#line 1662 "diet.m"
      }
#line 1662 "diet.m"
      break;
#line 1662 "diet.m"
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
#line 1662 "diet.m"
  while (MR_TRUE)
#line 1662 "diet.m"
    {
#line 1662 "diet.m"
      /* tailcall optimized into a loop */
#line 1662 "diet.m"
      {
#line 1662 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1662 "diet.m"
        if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1661 "diet.m"
          {
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
#line 1661 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1661 "diet.m"
          }
#line 1662 "diet.m"
        else
#line 1663 "diet.m"
          {
#line 1663 "diet.m"
            MR_Box mercury__diet__X_20;
#line 1663 "diet.m"
            MR_Box mercury__diet__Y_21;
#line 1663 "diet.m"
            MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
#line 1663 "diet.m"
            MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
#line 1663 "diet.m"
            MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
#line 1663 "diet.m"
            MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

#line 1663 "diet.m"
            mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0));
#line 1663 "diet.m"
            mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1));
#line 1664 "diet.m"
            {
#line 1664 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl5_12_p_4(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
            }
#line 1663 "diet.m"
            if (mercury__diet__succeeded)
#line 1663 "diet.m"
              {
#line 1665 "diet.m"
                {
#line 1665 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up5_13_p_4(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
                }
#line 1663 "diet.m"
                if (mercury__diet__succeeded)
#line 1666 "diet.m"
                  {
#line 1666 "diet.m"
                    /* direct tailcall eliminated */
#line 1666 "diet.m"
                    {
#line 1666 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_14 = mercury__diet__R_24;
#line 1666 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_A_41_41;
#line 1666 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27 = mercury__diet__STATE_VARIABLE_B_42_42;
#line 1666 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29 = mercury__diet__STATE_VARIABLE_C_43_43;
#line 1666 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31 = mercury__diet__STATE_VARIABLE_D_44_44;
#line 1666 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33 = mercury__diet__STATE_VARIABLE_E_45_45;

#line 1666 "diet.m"
                      mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33;
#line 1666 "diet.m"
                      mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31;
#line 1666 "diet.m"
                      mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29;
#line 1666 "diet.m"
                      mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27;
#line 1666 "diet.m"
                      mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25;
#line 1666 "diet.m"
                      mercury__diet__T_14 = mercury__diet__T__tmp_copy_14;
#line 1666 "diet.m"
                    }
#line 1666 "diet.m"
                    continue;
#line 1666 "diet.m"
                  }
#line 1663 "diet.m"
              }
#line 1663 "diet.m"
          }
#line 1662 "diet.m"
        return mercury__diet__succeeded;
#line 1662 "diet.m"
      }
#line 1662 "diet.m"
      break;
#line 1662 "diet.m"
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
#line 1662 "diet.m"
  while (MR_TRUE)
#line 1662 "diet.m"
    {
#line 1662 "diet.m"
      /* tailcall optimized into a loop */
#line 1662 "diet.m"
      {
#line 1662 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1662 "diet.m"
        if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1661 "diet.m"
          {
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
#line 1661 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1661 "diet.m"
          }
#line 1662 "diet.m"
        else
#line 1663 "diet.m"
          {
#line 1663 "diet.m"
            MR_Box mercury__diet__X_20;
#line 1663 "diet.m"
            MR_Box mercury__diet__Y_21;
#line 1663 "diet.m"
            MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
#line 1663 "diet.m"
            MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
#line 1663 "diet.m"
            MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
#line 1663 "diet.m"
            MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

#line 1663 "diet.m"
            mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0));
#line 1663 "diet.m"
            mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1));
#line 1664 "diet.m"
            {
#line 1664 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl5_12_p_3(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
            }
#line 1663 "diet.m"
            if (mercury__diet__succeeded)
#line 1663 "diet.m"
              {
#line 1665 "diet.m"
                {
#line 1665 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up5_13_p_3(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
                }
#line 1663 "diet.m"
                if (mercury__diet__succeeded)
#line 1666 "diet.m"
                  {
#line 1666 "diet.m"
                    /* direct tailcall eliminated */
#line 1666 "diet.m"
                    {
#line 1666 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_14 = mercury__diet__R_24;
#line 1666 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_A_41_41;
#line 1666 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27 = mercury__diet__STATE_VARIABLE_B_42_42;
#line 1666 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29 = mercury__diet__STATE_VARIABLE_C_43_43;
#line 1666 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31 = mercury__diet__STATE_VARIABLE_D_44_44;
#line 1666 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33 = mercury__diet__STATE_VARIABLE_E_45_45;

#line 1666 "diet.m"
                      mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33;
#line 1666 "diet.m"
                      mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31;
#line 1666 "diet.m"
                      mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29;
#line 1666 "diet.m"
                      mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27;
#line 1666 "diet.m"
                      mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25;
#line 1666 "diet.m"
                      mercury__diet__T_14 = mercury__diet__T__tmp_copy_14;
#line 1666 "diet.m"
                    }
#line 1666 "diet.m"
                    continue;
#line 1666 "diet.m"
                  }
#line 1663 "diet.m"
              }
#line 1663 "diet.m"
          }
#line 1662 "diet.m"
        return mercury__diet__succeeded;
#line 1662 "diet.m"
      }
#line 1662 "diet.m"
      break;
#line 1662 "diet.m"
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
#line 1662 "diet.m"
  while (MR_TRUE)
#line 1662 "diet.m"
    {
#line 1662 "diet.m"
      /* tailcall optimized into a loop */
#line 1662 "diet.m"
      {
#line 1662 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1662 "diet.m"
        if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1661 "diet.m"
          {
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
#line 1661 "diet.m"
          }
#line 1662 "diet.m"
        else
#line 1663 "diet.m"
          {
#line 1663 "diet.m"
            MR_Box mercury__diet__X_20;
#line 1663 "diet.m"
            MR_Box mercury__diet__Y_21;
#line 1663 "diet.m"
            MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
#line 1663 "diet.m"
            MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
#line 1663 "diet.m"
            MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
#line 1663 "diet.m"
            MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

#line 1663 "diet.m"
            mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0));
#line 1663 "diet.m"
            mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1));
#line 1664 "diet.m"
            {
#line 1664 "diet.m"
              mercury__diet__foldl5_12_p_2(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
            }
#line 1665 "diet.m"
            {
#line 1665 "diet.m"
              mercury__diet__fold_up5_13_p_2(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
            }
#line 1666 "diet.m"
            /* direct tailcall eliminated */
#line 1666 "diet.m"
            {
#line 1666 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_14 = mercury__diet__R_24;
#line 1666 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_A_41_41;
#line 1666 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27 = mercury__diet__STATE_VARIABLE_B_42_42;
#line 1666 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29 = mercury__diet__STATE_VARIABLE_C_43_43;
#line 1666 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31 = mercury__diet__STATE_VARIABLE_D_44_44;
#line 1666 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33 = mercury__diet__STATE_VARIABLE_E_45_45;

#line 1666 "diet.m"
              mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33;
#line 1666 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31;
#line 1666 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29;
#line 1666 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27;
#line 1666 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25;
#line 1666 "diet.m"
              mercury__diet__T_14 = mercury__diet__T__tmp_copy_14;
#line 1666 "diet.m"
            }
#line 1666 "diet.m"
            continue;
#line 1663 "diet.m"
          }
#line 1662 "diet.m"
      }
#line 1662 "diet.m"
      break;
#line 1662 "diet.m"
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
#line 1662 "diet.m"
  while (MR_TRUE)
#line 1662 "diet.m"
    {
#line 1662 "diet.m"
      /* tailcall optimized into a loop */
#line 1662 "diet.m"
      {
#line 1662 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1662 "diet.m"
        if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1661 "diet.m"
          {
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
#line 1661 "diet.m"
          }
#line 1662 "diet.m"
        else
#line 1663 "diet.m"
          {
#line 1663 "diet.m"
            MR_Box mercury__diet__X_20;
#line 1663 "diet.m"
            MR_Box mercury__diet__Y_21;
#line 1663 "diet.m"
            MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
#line 1663 "diet.m"
            MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
#line 1663 "diet.m"
            MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
#line 1663 "diet.m"
            MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

#line 1663 "diet.m"
            mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0));
#line 1663 "diet.m"
            mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1));
#line 1664 "diet.m"
            {
#line 1664 "diet.m"
              mercury__diet__foldl5_12_p_1(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
            }
#line 1665 "diet.m"
            {
#line 1665 "diet.m"
              mercury__diet__fold_up5_13_p_1(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
            }
#line 1666 "diet.m"
            /* direct tailcall eliminated */
#line 1666 "diet.m"
            {
#line 1666 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_14 = mercury__diet__R_24;
#line 1666 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_A_41_41;
#line 1666 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27 = mercury__diet__STATE_VARIABLE_B_42_42;
#line 1666 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29 = mercury__diet__STATE_VARIABLE_C_43_43;
#line 1666 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31 = mercury__diet__STATE_VARIABLE_D_44_44;
#line 1666 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33 = mercury__diet__STATE_VARIABLE_E_45_45;

#line 1666 "diet.m"
              mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33;
#line 1666 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31;
#line 1666 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29;
#line 1666 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27;
#line 1666 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25;
#line 1666 "diet.m"
              mercury__diet__T_14 = mercury__diet__T__tmp_copy_14;
#line 1666 "diet.m"
            }
#line 1666 "diet.m"
            continue;
#line 1663 "diet.m"
          }
#line 1662 "diet.m"
      }
#line 1662 "diet.m"
      break;
#line 1662 "diet.m"
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
#line 1662 "diet.m"
  while (MR_TRUE)
#line 1662 "diet.m"
    {
#line 1662 "diet.m"
      /* tailcall optimized into a loop */
#line 1662 "diet.m"
      {
#line 1662 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1662 "diet.m"
        if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1661 "diet.m"
          {
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
#line 1661 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
#line 1661 "diet.m"
          }
#line 1662 "diet.m"
        else
#line 1663 "diet.m"
          {
#line 1663 "diet.m"
            MR_Box mercury__diet__X_20;
#line 1663 "diet.m"
            MR_Box mercury__diet__Y_21;
#line 1663 "diet.m"
            MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
#line 1663 "diet.m"
            MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
#line 1663 "diet.m"
            MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
#line 1663 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
#line 1663 "diet.m"
            MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

#line 1663 "diet.m"
            mercury__diet__X_20 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0));
#line 1663 "diet.m"
            mercury__diet__Y_21 = (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1));
#line 1664 "diet.m"
            {
#line 1664 "diet.m"
              mercury__diet__foldl5_12_p_0(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
            }
#line 1665 "diet.m"
            {
#line 1665 "diet.m"
              mercury__diet__fold_up5_13_p_0(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_diet_element_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
            }
#line 1666 "diet.m"
            /* direct tailcall eliminated */
#line 1666 "diet.m"
            {
#line 1666 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_14 = mercury__diet__R_24;
#line 1666 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_A_41_41;
#line 1666 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27 = mercury__diet__STATE_VARIABLE_B_42_42;
#line 1666 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29 = mercury__diet__STATE_VARIABLE_C_43_43;
#line 1666 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31 = mercury__diet__STATE_VARIABLE_D_44_44;
#line 1666 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33 = mercury__diet__STATE_VARIABLE_E_45_45;

#line 1666 "diet.m"
              mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33;
#line 1666 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31;
#line 1666 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29;
#line 1666 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27;
#line 1666 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25;
#line 1666 "diet.m"
              mercury__diet__T_14 = mercury__diet__T__tmp_copy_14;
#line 1666 "diet.m"
            }
#line 1666 "diet.m"
            continue;
#line 1663 "diet.m"
          }
#line 1662 "diet.m"
      }
#line 1662 "diet.m"
      break;
#line 1662 "diet.m"
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
#line 1627 "diet.m"
  while (MR_TRUE)
#line 1627 "diet.m"
    {
#line 1627 "diet.m"
      /* tailcall optimized into a loop */
#line 1627 "diet.m"
      {
#line 1627 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1627 "diet.m"
        if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1626 "diet.m"
          {
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1626 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1626 "diet.m"
          }
#line 1627 "diet.m"
        else
#line 1628 "diet.m"
          {
#line 1628 "diet.m"
            MR_Box mercury__diet__X_17;
#line 1628 "diet.m"
            MR_Box mercury__diet__Y_18;
#line 1628 "diet.m"
            MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
#line 1628 "diet.m"
            MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
#line 1628 "diet.m"
            MR_Tuple mercury__diet__V_30_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
#line 1628 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

#line 1628 "diet.m"
            mercury__diet__X_17 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 0));
#line 1628 "diet.m"
            mercury__diet__Y_18 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 1));
#line 1629 "diet.m"
            {
#line 1629 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl4_10_p_5(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
            }
#line 1628 "diet.m"
            if (mercury__diet__succeeded)
#line 1628 "diet.m"
              {
#line 1630 "diet.m"
                {
#line 1630 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up4_11_p_5(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
                }
#line 1628 "diet.m"
                if (mercury__diet__succeeded)
#line 1631 "diet.m"
                  {
#line 1631 "diet.m"
                    /* direct tailcall eliminated */
#line 1631 "diet.m"
                    {
#line 1631 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_12 = mercury__diet__R_21;
#line 1631 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_35_35;
#line 1631 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_36_36;
#line 1631 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_37_37;
#line 1631 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_38_38;

#line 1631 "diet.m"
                      mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1631 "diet.m"
                      mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1631 "diet.m"
                      mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1631 "diet.m"
                      mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1631 "diet.m"
                      mercury__diet__T_12 = mercury__diet__T__tmp_copy_12;
#line 1631 "diet.m"
                    }
#line 1631 "diet.m"
                    continue;
#line 1631 "diet.m"
                  }
#line 1628 "diet.m"
              }
#line 1628 "diet.m"
          }
#line 1627 "diet.m"
        return mercury__diet__succeeded;
#line 1627 "diet.m"
      }
#line 1627 "diet.m"
      break;
#line 1627 "diet.m"
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
#line 1627 "diet.m"
  while (MR_TRUE)
#line 1627 "diet.m"
    {
#line 1627 "diet.m"
      /* tailcall optimized into a loop */
#line 1627 "diet.m"
      {
#line 1627 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1627 "diet.m"
        if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1626 "diet.m"
          {
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1626 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1626 "diet.m"
          }
#line 1627 "diet.m"
        else
#line 1628 "diet.m"
          {
#line 1628 "diet.m"
            MR_Box mercury__diet__X_17;
#line 1628 "diet.m"
            MR_Box mercury__diet__Y_18;
#line 1628 "diet.m"
            MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
#line 1628 "diet.m"
            MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
#line 1628 "diet.m"
            MR_Tuple mercury__diet__V_30_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
#line 1628 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

#line 1628 "diet.m"
            mercury__diet__X_17 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 0));
#line 1628 "diet.m"
            mercury__diet__Y_18 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 1));
#line 1629 "diet.m"
            {
#line 1629 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl4_10_p_4(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
            }
#line 1628 "diet.m"
            if (mercury__diet__succeeded)
#line 1628 "diet.m"
              {
#line 1630 "diet.m"
                {
#line 1630 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up4_11_p_4(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
                }
#line 1628 "diet.m"
                if (mercury__diet__succeeded)
#line 1631 "diet.m"
                  {
#line 1631 "diet.m"
                    /* direct tailcall eliminated */
#line 1631 "diet.m"
                    {
#line 1631 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_12 = mercury__diet__R_21;
#line 1631 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_35_35;
#line 1631 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_36_36;
#line 1631 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_37_37;
#line 1631 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_38_38;

#line 1631 "diet.m"
                      mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1631 "diet.m"
                      mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1631 "diet.m"
                      mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1631 "diet.m"
                      mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1631 "diet.m"
                      mercury__diet__T_12 = mercury__diet__T__tmp_copy_12;
#line 1631 "diet.m"
                    }
#line 1631 "diet.m"
                    continue;
#line 1631 "diet.m"
                  }
#line 1628 "diet.m"
              }
#line 1628 "diet.m"
          }
#line 1627 "diet.m"
        return mercury__diet__succeeded;
#line 1627 "diet.m"
      }
#line 1627 "diet.m"
      break;
#line 1627 "diet.m"
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
#line 1627 "diet.m"
  while (MR_TRUE)
#line 1627 "diet.m"
    {
#line 1627 "diet.m"
      /* tailcall optimized into a loop */
#line 1627 "diet.m"
      {
#line 1627 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1627 "diet.m"
        if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1626 "diet.m"
          {
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1626 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1626 "diet.m"
          }
#line 1627 "diet.m"
        else
#line 1628 "diet.m"
          {
#line 1628 "diet.m"
            MR_Box mercury__diet__X_17;
#line 1628 "diet.m"
            MR_Box mercury__diet__Y_18;
#line 1628 "diet.m"
            MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
#line 1628 "diet.m"
            MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
#line 1628 "diet.m"
            MR_Tuple mercury__diet__V_30_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
#line 1628 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

#line 1628 "diet.m"
            mercury__diet__X_17 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 0));
#line 1628 "diet.m"
            mercury__diet__Y_18 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 1));
#line 1629 "diet.m"
            {
#line 1629 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl4_10_p_3(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
            }
#line 1628 "diet.m"
            if (mercury__diet__succeeded)
#line 1628 "diet.m"
              {
#line 1630 "diet.m"
                {
#line 1630 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up4_11_p_3(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
                }
#line 1628 "diet.m"
                if (mercury__diet__succeeded)
#line 1631 "diet.m"
                  {
#line 1631 "diet.m"
                    /* direct tailcall eliminated */
#line 1631 "diet.m"
                    {
#line 1631 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_12 = mercury__diet__R_21;
#line 1631 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_35_35;
#line 1631 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_36_36;
#line 1631 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_37_37;
#line 1631 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_38_38;

#line 1631 "diet.m"
                      mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1631 "diet.m"
                      mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1631 "diet.m"
                      mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1631 "diet.m"
                      mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1631 "diet.m"
                      mercury__diet__T_12 = mercury__diet__T__tmp_copy_12;
#line 1631 "diet.m"
                    }
#line 1631 "diet.m"
                    continue;
#line 1631 "diet.m"
                  }
#line 1628 "diet.m"
              }
#line 1628 "diet.m"
          }
#line 1627 "diet.m"
        return mercury__diet__succeeded;
#line 1627 "diet.m"
      }
#line 1627 "diet.m"
      break;
#line 1627 "diet.m"
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
#line 1627 "diet.m"
  while (MR_TRUE)
#line 1627 "diet.m"
    {
#line 1627 "diet.m"
      /* tailcall optimized into a loop */
#line 1627 "diet.m"
      {
#line 1627 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1627 "diet.m"
        if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1626 "diet.m"
          {
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1626 "diet.m"
          }
#line 1627 "diet.m"
        else
#line 1628 "diet.m"
          {
#line 1628 "diet.m"
            MR_Box mercury__diet__X_17;
#line 1628 "diet.m"
            MR_Box mercury__diet__Y_18;
#line 1628 "diet.m"
            MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
#line 1628 "diet.m"
            MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
#line 1628 "diet.m"
            MR_Tuple mercury__diet__V_30_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
#line 1628 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

#line 1628 "diet.m"
            mercury__diet__X_17 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 0));
#line 1628 "diet.m"
            mercury__diet__Y_18 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 1));
#line 1629 "diet.m"
            {
#line 1629 "diet.m"
              mercury__diet__foldl4_10_p_2(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
            }
#line 1630 "diet.m"
            {
#line 1630 "diet.m"
              mercury__diet__fold_up4_11_p_2(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
            }
#line 1631 "diet.m"
            /* direct tailcall eliminated */
#line 1631 "diet.m"
            {
#line 1631 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_12 = mercury__diet__R_21;
#line 1631 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_35_35;
#line 1631 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_36_36;
#line 1631 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_37_37;
#line 1631 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_38_38;

#line 1631 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1631 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1631 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1631 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1631 "diet.m"
              mercury__diet__T_12 = mercury__diet__T__tmp_copy_12;
#line 1631 "diet.m"
            }
#line 1631 "diet.m"
            continue;
#line 1628 "diet.m"
          }
#line 1627 "diet.m"
      }
#line 1627 "diet.m"
      break;
#line 1627 "diet.m"
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
#line 1627 "diet.m"
  while (MR_TRUE)
#line 1627 "diet.m"
    {
#line 1627 "diet.m"
      /* tailcall optimized into a loop */
#line 1627 "diet.m"
      {
#line 1627 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1627 "diet.m"
        if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1626 "diet.m"
          {
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1626 "diet.m"
          }
#line 1627 "diet.m"
        else
#line 1628 "diet.m"
          {
#line 1628 "diet.m"
            MR_Box mercury__diet__X_17;
#line 1628 "diet.m"
            MR_Box mercury__diet__Y_18;
#line 1628 "diet.m"
            MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
#line 1628 "diet.m"
            MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
#line 1628 "diet.m"
            MR_Tuple mercury__diet__V_30_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
#line 1628 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

#line 1628 "diet.m"
            mercury__diet__X_17 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 0));
#line 1628 "diet.m"
            mercury__diet__Y_18 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 1));
#line 1629 "diet.m"
            {
#line 1629 "diet.m"
              mercury__diet__foldl4_10_p_1(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
            }
#line 1630 "diet.m"
            {
#line 1630 "diet.m"
              mercury__diet__fold_up4_11_p_1(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
            }
#line 1631 "diet.m"
            /* direct tailcall eliminated */
#line 1631 "diet.m"
            {
#line 1631 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_12 = mercury__diet__R_21;
#line 1631 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_35_35;
#line 1631 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_36_36;
#line 1631 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_37_37;
#line 1631 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_38_38;

#line 1631 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1631 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1631 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1631 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1631 "diet.m"
              mercury__diet__T_12 = mercury__diet__T__tmp_copy_12;
#line 1631 "diet.m"
            }
#line 1631 "diet.m"
            continue;
#line 1628 "diet.m"
          }
#line 1627 "diet.m"
      }
#line 1627 "diet.m"
      break;
#line 1627 "diet.m"
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
#line 1627 "diet.m"
  while (MR_TRUE)
#line 1627 "diet.m"
    {
#line 1627 "diet.m"
      /* tailcall optimized into a loop */
#line 1627 "diet.m"
      {
#line 1627 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1627 "diet.m"
        if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1626 "diet.m"
          {
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1626 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1626 "diet.m"
          }
#line 1627 "diet.m"
        else
#line 1628 "diet.m"
          {
#line 1628 "diet.m"
            MR_Box mercury__diet__X_17;
#line 1628 "diet.m"
            MR_Box mercury__diet__Y_18;
#line 1628 "diet.m"
            MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
#line 1628 "diet.m"
            MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
#line 1628 "diet.m"
            MR_Tuple mercury__diet__V_30_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
#line 1628 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
#line 1628 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

#line 1628 "diet.m"
            mercury__diet__X_17 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 0));
#line 1628 "diet.m"
            mercury__diet__Y_18 = (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 1));
#line 1629 "diet.m"
            {
#line 1629 "diet.m"
              mercury__diet__foldl4_10_p_0(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
            }
#line 1630 "diet.m"
            {
#line 1630 "diet.m"
              mercury__diet__fold_up4_11_p_0(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_diet_element_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
            }
#line 1631 "diet.m"
            /* direct tailcall eliminated */
#line 1631 "diet.m"
            {
#line 1631 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_12 = mercury__diet__R_21;
#line 1631 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_35_35;
#line 1631 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_36_36;
#line 1631 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_37_37;
#line 1631 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_38_38;

#line 1631 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1631 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1631 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1631 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1631 "diet.m"
              mercury__diet__T_12 = mercury__diet__T__tmp_copy_12;
#line 1631 "diet.m"
            }
#line 1631 "diet.m"
            continue;
#line 1628 "diet.m"
          }
#line 1627 "diet.m"
      }
#line 1627 "diet.m"
      break;
#line 1627 "diet.m"
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
#line 1592 "diet.m"
  while (MR_TRUE)
#line 1592 "diet.m"
    {
#line 1592 "diet.m"
      /* tailcall optimized into a loop */
#line 1592 "diet.m"
      {
#line 1592 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1592 "diet.m"
        if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1591 "diet.m"
          {
#line 1591 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
#line 1591 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
#line 1591 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
#line 1591 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1591 "diet.m"
          }
#line 1592 "diet.m"
        else
#line 1593 "diet.m"
          {
#line 1593 "diet.m"
            MR_Box mercury__diet__X_14;
#line 1593 "diet.m"
            MR_Box mercury__diet__Y_15;
#line 1593 "diet.m"
            MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
#line 1593 "diet.m"
            MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
#line 1593 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
#line 1593 "diet.m"
            MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

#line 1593 "diet.m"
            mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0));
#line 1593 "diet.m"
            mercury__diet__Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1));
#line 1594 "diet.m"
            {
#line 1594 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl3_8_p_5(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
            }
#line 1593 "diet.m"
            if (mercury__diet__succeeded)
#line 1593 "diet.m"
              {
#line 1595 "diet.m"
                {
#line 1595 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up3_9_p_5(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
                }
#line 1593 "diet.m"
                if (mercury__diet__succeeded)
#line 1596 "diet.m"
                  {
#line 1596 "diet.m"
                    /* direct tailcall eliminated */
#line 1596 "diet.m"
                    {
#line 1596 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_10 = mercury__diet__R_18;
#line 1596 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1596 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1596 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

#line 1596 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23;
#line 1596 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21;
#line 1596 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19;
#line 1596 "diet.m"
                      mercury__diet__T_10 = mercury__diet__T__tmp_copy_10;
#line 1596 "diet.m"
                    }
#line 1596 "diet.m"
                    continue;
#line 1596 "diet.m"
                  }
#line 1593 "diet.m"
              }
#line 1593 "diet.m"
          }
#line 1592 "diet.m"
        return mercury__diet__succeeded;
#line 1592 "diet.m"
      }
#line 1592 "diet.m"
      break;
#line 1592 "diet.m"
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
#line 1592 "diet.m"
  while (MR_TRUE)
#line 1592 "diet.m"
    {
#line 1592 "diet.m"
      /* tailcall optimized into a loop */
#line 1592 "diet.m"
      {
#line 1592 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1592 "diet.m"
        if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1591 "diet.m"
          {
#line 1591 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
#line 1591 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
#line 1591 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
#line 1591 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1591 "diet.m"
          }
#line 1592 "diet.m"
        else
#line 1593 "diet.m"
          {
#line 1593 "diet.m"
            MR_Box mercury__diet__X_14;
#line 1593 "diet.m"
            MR_Box mercury__diet__Y_15;
#line 1593 "diet.m"
            MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
#line 1593 "diet.m"
            MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
#line 1593 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
#line 1593 "diet.m"
            MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

#line 1593 "diet.m"
            mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0));
#line 1593 "diet.m"
            mercury__diet__Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1));
#line 1594 "diet.m"
            {
#line 1594 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl3_8_p_4(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
            }
#line 1593 "diet.m"
            if (mercury__diet__succeeded)
#line 1593 "diet.m"
              {
#line 1595 "diet.m"
                {
#line 1595 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up3_9_p_4(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
                }
#line 1593 "diet.m"
                if (mercury__diet__succeeded)
#line 1596 "diet.m"
                  {
#line 1596 "diet.m"
                    /* direct tailcall eliminated */
#line 1596 "diet.m"
                    {
#line 1596 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_10 = mercury__diet__R_18;
#line 1596 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1596 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1596 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

#line 1596 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23;
#line 1596 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21;
#line 1596 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19;
#line 1596 "diet.m"
                      mercury__diet__T_10 = mercury__diet__T__tmp_copy_10;
#line 1596 "diet.m"
                    }
#line 1596 "diet.m"
                    continue;
#line 1596 "diet.m"
                  }
#line 1593 "diet.m"
              }
#line 1593 "diet.m"
          }
#line 1592 "diet.m"
        return mercury__diet__succeeded;
#line 1592 "diet.m"
      }
#line 1592 "diet.m"
      break;
#line 1592 "diet.m"
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
#line 1592 "diet.m"
  while (MR_TRUE)
#line 1592 "diet.m"
    {
#line 1592 "diet.m"
      /* tailcall optimized into a loop */
#line 1592 "diet.m"
      {
#line 1592 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1592 "diet.m"
        if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1591 "diet.m"
          {
#line 1591 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
#line 1591 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
#line 1591 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
#line 1591 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1591 "diet.m"
          }
#line 1592 "diet.m"
        else
#line 1593 "diet.m"
          {
#line 1593 "diet.m"
            MR_Box mercury__diet__X_14;
#line 1593 "diet.m"
            MR_Box mercury__diet__Y_15;
#line 1593 "diet.m"
            MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
#line 1593 "diet.m"
            MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
#line 1593 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
#line 1593 "diet.m"
            MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

#line 1593 "diet.m"
            mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0));
#line 1593 "diet.m"
            mercury__diet__Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1));
#line 1594 "diet.m"
            {
#line 1594 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl3_8_p_3(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
            }
#line 1593 "diet.m"
            if (mercury__diet__succeeded)
#line 1593 "diet.m"
              {
#line 1595 "diet.m"
                {
#line 1595 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up3_9_p_3(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
                }
#line 1593 "diet.m"
                if (mercury__diet__succeeded)
#line 1596 "diet.m"
                  {
#line 1596 "diet.m"
                    /* direct tailcall eliminated */
#line 1596 "diet.m"
                    {
#line 1596 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_10 = mercury__diet__R_18;
#line 1596 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1596 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1596 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

#line 1596 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23;
#line 1596 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21;
#line 1596 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19;
#line 1596 "diet.m"
                      mercury__diet__T_10 = mercury__diet__T__tmp_copy_10;
#line 1596 "diet.m"
                    }
#line 1596 "diet.m"
                    continue;
#line 1596 "diet.m"
                  }
#line 1593 "diet.m"
              }
#line 1593 "diet.m"
          }
#line 1592 "diet.m"
        return mercury__diet__succeeded;
#line 1592 "diet.m"
      }
#line 1592 "diet.m"
      break;
#line 1592 "diet.m"
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
#line 1592 "diet.m"
  while (MR_TRUE)
#line 1592 "diet.m"
    {
#line 1592 "diet.m"
      /* tailcall optimized into a loop */
#line 1592 "diet.m"
      {
#line 1592 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1592 "diet.m"
        if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1591 "diet.m"
          {
#line 1591 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
#line 1591 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
#line 1591 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
#line 1591 "diet.m"
          }
#line 1592 "diet.m"
        else
#line 1593 "diet.m"
          {
#line 1593 "diet.m"
            MR_Box mercury__diet__X_14;
#line 1593 "diet.m"
            MR_Box mercury__diet__Y_15;
#line 1593 "diet.m"
            MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
#line 1593 "diet.m"
            MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
#line 1593 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
#line 1593 "diet.m"
            MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

#line 1593 "diet.m"
            mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0));
#line 1593 "diet.m"
            mercury__diet__Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1));
#line 1594 "diet.m"
            {
#line 1594 "diet.m"
              mercury__diet__foldl3_8_p_2(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
            }
#line 1595 "diet.m"
            {
#line 1595 "diet.m"
              mercury__diet__fold_up3_9_p_2(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
            }
#line 1596 "diet.m"
            /* direct tailcall eliminated */
#line 1596 "diet.m"
            {
#line 1596 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_10 = mercury__diet__R_18;
#line 1596 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1596 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1596 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

#line 1596 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23;
#line 1596 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21;
#line 1596 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19;
#line 1596 "diet.m"
              mercury__diet__T_10 = mercury__diet__T__tmp_copy_10;
#line 1596 "diet.m"
            }
#line 1596 "diet.m"
            continue;
#line 1593 "diet.m"
          }
#line 1592 "diet.m"
      }
#line 1592 "diet.m"
      break;
#line 1592 "diet.m"
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
#line 1592 "diet.m"
  while (MR_TRUE)
#line 1592 "diet.m"
    {
#line 1592 "diet.m"
      /* tailcall optimized into a loop */
#line 1592 "diet.m"
      {
#line 1592 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1592 "diet.m"
        if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1591 "diet.m"
          {
#line 1591 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
#line 1591 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
#line 1591 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
#line 1591 "diet.m"
          }
#line 1592 "diet.m"
        else
#line 1593 "diet.m"
          {
#line 1593 "diet.m"
            MR_Box mercury__diet__X_14;
#line 1593 "diet.m"
            MR_Box mercury__diet__Y_15;
#line 1593 "diet.m"
            MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
#line 1593 "diet.m"
            MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
#line 1593 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
#line 1593 "diet.m"
            MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

#line 1593 "diet.m"
            mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0));
#line 1593 "diet.m"
            mercury__diet__Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1));
#line 1594 "diet.m"
            {
#line 1594 "diet.m"
              mercury__diet__foldl3_8_p_1(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
            }
#line 1595 "diet.m"
            {
#line 1595 "diet.m"
              mercury__diet__fold_up3_9_p_1(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
            }
#line 1596 "diet.m"
            /* direct tailcall eliminated */
#line 1596 "diet.m"
            {
#line 1596 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_10 = mercury__diet__R_18;
#line 1596 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1596 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1596 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

#line 1596 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23;
#line 1596 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21;
#line 1596 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19;
#line 1596 "diet.m"
              mercury__diet__T_10 = mercury__diet__T__tmp_copy_10;
#line 1596 "diet.m"
            }
#line 1596 "diet.m"
            continue;
#line 1593 "diet.m"
          }
#line 1592 "diet.m"
      }
#line 1592 "diet.m"
      break;
#line 1592 "diet.m"
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
#line 1592 "diet.m"
  while (MR_TRUE)
#line 1592 "diet.m"
    {
#line 1592 "diet.m"
      /* tailcall optimized into a loop */
#line 1592 "diet.m"
      {
#line 1592 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1592 "diet.m"
        if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1591 "diet.m"
          {
#line 1591 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
#line 1591 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
#line 1591 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
#line 1591 "diet.m"
          }
#line 1592 "diet.m"
        else
#line 1593 "diet.m"
          {
#line 1593 "diet.m"
            MR_Box mercury__diet__X_14;
#line 1593 "diet.m"
            MR_Box mercury__diet__Y_15;
#line 1593 "diet.m"
            MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
#line 1593 "diet.m"
            MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
#line 1593 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1593 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
#line 1593 "diet.m"
            MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

#line 1593 "diet.m"
            mercury__diet__X_14 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0));
#line 1593 "diet.m"
            mercury__diet__Y_15 = (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1));
#line 1594 "diet.m"
            {
#line 1594 "diet.m"
              mercury__diet__foldl3_8_p_0(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
            }
#line 1595 "diet.m"
            {
#line 1595 "diet.m"
              mercury__diet__fold_up3_9_p_0(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_diet_element_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
            }
#line 1596 "diet.m"
            /* direct tailcall eliminated */
#line 1596 "diet.m"
            {
#line 1596 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_10 = mercury__diet__R_18;
#line 1596 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1596 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1596 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

#line 1596 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23;
#line 1596 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21;
#line 1596 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19;
#line 1596 "diet.m"
              mercury__diet__T_10 = mercury__diet__T__tmp_copy_10;
#line 1596 "diet.m"
            }
#line 1596 "diet.m"
            continue;
#line 1593 "diet.m"
          }
#line 1592 "diet.m"
      }
#line 1592 "diet.m"
      break;
#line 1592 "diet.m"
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
#line 1557 "diet.m"
  while (MR_TRUE)
#line 1557 "diet.m"
    {
#line 1557 "diet.m"
      /* tailcall optimized into a loop */
#line 1557 "diet.m"
      {
#line 1557 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1557 "diet.m"
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1556 "diet.m"
          {
#line 1556 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1556 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1556 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1556 "diet.m"
          }
#line 1557 "diet.m"
        else
#line 1558 "diet.m"
          {
#line 1558 "diet.m"
            MR_Box mercury__diet__X_11;
#line 1558 "diet.m"
            MR_Box mercury__diet__Y_12;
#line 1558 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1558 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1558 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1558 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1558 "diet.m"
            mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0));
#line 1558 "diet.m"
            mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1));
#line 1559 "diet.m"
            {
#line 1559 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl2_6_p_5(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1558 "diet.m"
            if (mercury__diet__succeeded)
#line 1558 "diet.m"
              {
#line 1560 "diet.m"
                {
#line 1560 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up2_7_p_5(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
                }
#line 1558 "diet.m"
                if (mercury__diet__succeeded)
#line 1561 "diet.m"
                  {
#line 1561 "diet.m"
                    /* direct tailcall eliminated */
#line 1561 "diet.m"
                    {
#line 1561 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1561 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1561 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1561 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1561 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1561 "diet.m"
                      mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
#line 1561 "diet.m"
                    }
#line 1561 "diet.m"
                    continue;
#line 1561 "diet.m"
                  }
#line 1558 "diet.m"
              }
#line 1558 "diet.m"
          }
#line 1557 "diet.m"
        return mercury__diet__succeeded;
#line 1557 "diet.m"
      }
#line 1557 "diet.m"
      break;
#line 1557 "diet.m"
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
#line 1557 "diet.m"
  while (MR_TRUE)
#line 1557 "diet.m"
    {
#line 1557 "diet.m"
      /* tailcall optimized into a loop */
#line 1557 "diet.m"
      {
#line 1557 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1557 "diet.m"
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1556 "diet.m"
          {
#line 1556 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1556 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1556 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1556 "diet.m"
          }
#line 1557 "diet.m"
        else
#line 1558 "diet.m"
          {
#line 1558 "diet.m"
            MR_Box mercury__diet__X_11;
#line 1558 "diet.m"
            MR_Box mercury__diet__Y_12;
#line 1558 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1558 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1558 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1558 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1558 "diet.m"
            mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0));
#line 1558 "diet.m"
            mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1));
#line 1559 "diet.m"
            {
#line 1559 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl2_6_p_4(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1558 "diet.m"
            if (mercury__diet__succeeded)
#line 1558 "diet.m"
              {
#line 1560 "diet.m"
                {
#line 1560 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up2_7_p_4(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
                }
#line 1558 "diet.m"
                if (mercury__diet__succeeded)
#line 1561 "diet.m"
                  {
#line 1561 "diet.m"
                    /* direct tailcall eliminated */
#line 1561 "diet.m"
                    {
#line 1561 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1561 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1561 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1561 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1561 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1561 "diet.m"
                      mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
#line 1561 "diet.m"
                    }
#line 1561 "diet.m"
                    continue;
#line 1561 "diet.m"
                  }
#line 1558 "diet.m"
              }
#line 1558 "diet.m"
          }
#line 1557 "diet.m"
        return mercury__diet__succeeded;
#line 1557 "diet.m"
      }
#line 1557 "diet.m"
      break;
#line 1557 "diet.m"
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
#line 1557 "diet.m"
  while (MR_TRUE)
#line 1557 "diet.m"
    {
#line 1557 "diet.m"
      /* tailcall optimized into a loop */
#line 1557 "diet.m"
      {
#line 1557 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1557 "diet.m"
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1556 "diet.m"
          {
#line 1556 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1556 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1556 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1556 "diet.m"
          }
#line 1557 "diet.m"
        else
#line 1558 "diet.m"
          {
#line 1558 "diet.m"
            MR_Box mercury__diet__X_11;
#line 1558 "diet.m"
            MR_Box mercury__diet__Y_12;
#line 1558 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1558 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1558 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1558 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1558 "diet.m"
            mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0));
#line 1558 "diet.m"
            mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1));
#line 1559 "diet.m"
            {
#line 1559 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl2_6_p_3(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1558 "diet.m"
            if (mercury__diet__succeeded)
#line 1558 "diet.m"
              {
#line 1560 "diet.m"
                {
#line 1560 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up2_7_p_3(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
                }
#line 1558 "diet.m"
                if (mercury__diet__succeeded)
#line 1561 "diet.m"
                  {
#line 1561 "diet.m"
                    /* direct tailcall eliminated */
#line 1561 "diet.m"
                    {
#line 1561 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1561 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1561 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1561 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1561 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1561 "diet.m"
                      mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
#line 1561 "diet.m"
                    }
#line 1561 "diet.m"
                    continue;
#line 1561 "diet.m"
                  }
#line 1558 "diet.m"
              }
#line 1558 "diet.m"
          }
#line 1557 "diet.m"
        return mercury__diet__succeeded;
#line 1557 "diet.m"
      }
#line 1557 "diet.m"
      break;
#line 1557 "diet.m"
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
#line 1557 "diet.m"
  while (MR_TRUE)
#line 1557 "diet.m"
    {
#line 1557 "diet.m"
      /* tailcall optimized into a loop */
#line 1557 "diet.m"
      {
#line 1557 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1557 "diet.m"
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1556 "diet.m"
          {
#line 1556 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1556 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1556 "diet.m"
          }
#line 1557 "diet.m"
        else
#line 1558 "diet.m"
          {
#line 1558 "diet.m"
            MR_Box mercury__diet__X_11;
#line 1558 "diet.m"
            MR_Box mercury__diet__Y_12;
#line 1558 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1558 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1558 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1558 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1558 "diet.m"
            mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0));
#line 1558 "diet.m"
            mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1));
#line 1559 "diet.m"
            {
#line 1559 "diet.m"
              mercury__diet__foldl2_6_p_2(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1560 "diet.m"
            {
#line 1560 "diet.m"
              mercury__diet__fold_up2_7_p_2(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
            }
#line 1561 "diet.m"
            /* direct tailcall eliminated */
#line 1561 "diet.m"
            {
#line 1561 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1561 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1561 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1561 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1561 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1561 "diet.m"
              mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
#line 1561 "diet.m"
            }
#line 1561 "diet.m"
            continue;
#line 1558 "diet.m"
          }
#line 1557 "diet.m"
      }
#line 1557 "diet.m"
      break;
#line 1557 "diet.m"
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
#line 1557 "diet.m"
  while (MR_TRUE)
#line 1557 "diet.m"
    {
#line 1557 "diet.m"
      /* tailcall optimized into a loop */
#line 1557 "diet.m"
      {
#line 1557 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1557 "diet.m"
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1556 "diet.m"
          {
#line 1556 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1556 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1556 "diet.m"
          }
#line 1557 "diet.m"
        else
#line 1558 "diet.m"
          {
#line 1558 "diet.m"
            MR_Box mercury__diet__X_11;
#line 1558 "diet.m"
            MR_Box mercury__diet__Y_12;
#line 1558 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1558 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1558 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1558 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1558 "diet.m"
            mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0));
#line 1558 "diet.m"
            mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1));
#line 1559 "diet.m"
            {
#line 1559 "diet.m"
              mercury__diet__foldl2_6_p_1(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1560 "diet.m"
            {
#line 1560 "diet.m"
              mercury__diet__fold_up2_7_p_1(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
            }
#line 1561 "diet.m"
            /* direct tailcall eliminated */
#line 1561 "diet.m"
            {
#line 1561 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1561 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1561 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1561 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1561 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1561 "diet.m"
              mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
#line 1561 "diet.m"
            }
#line 1561 "diet.m"
            continue;
#line 1558 "diet.m"
          }
#line 1557 "diet.m"
      }
#line 1557 "diet.m"
      break;
#line 1557 "diet.m"
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
#line 1557 "diet.m"
  while (MR_TRUE)
#line 1557 "diet.m"
    {
#line 1557 "diet.m"
      /* tailcall optimized into a loop */
#line 1557 "diet.m"
      {
#line 1557 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1557 "diet.m"
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1556 "diet.m"
          {
#line 1556 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1556 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1556 "diet.m"
          }
#line 1557 "diet.m"
        else
#line 1558 "diet.m"
          {
#line 1558 "diet.m"
            MR_Box mercury__diet__X_11;
#line 1558 "diet.m"
            MR_Box mercury__diet__Y_12;
#line 1558 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1558 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1558 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1558 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1558 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1558 "diet.m"
            mercury__diet__X_11 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0));
#line 1558 "diet.m"
            mercury__diet__Y_12 = (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1));
#line 1559 "diet.m"
            {
#line 1559 "diet.m"
              mercury__diet__foldl2_6_p_0(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1560 "diet.m"
            {
#line 1560 "diet.m"
              mercury__diet__fold_up2_7_p_0(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_diet_element_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
            }
#line 1561 "diet.m"
            /* direct tailcall eliminated */
#line 1561 "diet.m"
            {
#line 1561 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1561 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1561 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1561 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1561 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1561 "diet.m"
              mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
#line 1561 "diet.m"
            }
#line 1561 "diet.m"
            continue;
#line 1558 "diet.m"
          }
#line 1557 "diet.m"
      }
#line 1557 "diet.m"
      break;
#line 1557 "diet.m"
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
#line 1529 "diet.m"
  while (MR_TRUE)
#line 1529 "diet.m"
    {
#line 1529 "diet.m"
      /* tailcall optimized into a loop */
#line 1529 "diet.m"
      {
#line 1529 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1529 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1528 "diet.m"
          {
#line 1528 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1528 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1528 "diet.m"
          }
#line 1529 "diet.m"
        else
#line 1530 "diet.m"
          {
#line 1530 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1530 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1530 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1530 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1530 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1530 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1530 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1530 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1530 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1530 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1531 "diet.m"
            {
#line 1531 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl_4_p_5(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1530 "diet.m"
            if (mercury__diet__succeeded)
#line 1530 "diet.m"
              {
#line 1532 "diet.m"
                {
#line 1532 "diet.m"
                  mercury__diet__succeeded = mercury__diet__foldl_2_5_p_5(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1530 "diet.m"
                if (mercury__diet__succeeded)
#line 1533 "diet.m"
                  {
#line 1533 "diet.m"
                    /* direct tailcall eliminated */
#line 1533 "diet.m"
                    {
#line 1533 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1533 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1533 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1533 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1533 "diet.m"
                    }
#line 1533 "diet.m"
                    continue;
#line 1533 "diet.m"
                  }
#line 1530 "diet.m"
              }
#line 1530 "diet.m"
          }
#line 1529 "diet.m"
        return mercury__diet__succeeded;
#line 1529 "diet.m"
      }
#line 1529 "diet.m"
      break;
#line 1529 "diet.m"
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
#line 1529 "diet.m"
  while (MR_TRUE)
#line 1529 "diet.m"
    {
#line 1529 "diet.m"
      /* tailcall optimized into a loop */
#line 1529 "diet.m"
      {
#line 1529 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1529 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1528 "diet.m"
          {
#line 1528 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1528 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1528 "diet.m"
          }
#line 1529 "diet.m"
        else
#line 1530 "diet.m"
          {
#line 1530 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1530 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1530 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1530 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1530 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1530 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1530 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1530 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1530 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1530 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1531 "diet.m"
            {
#line 1531 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl_4_p_4(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1530 "diet.m"
            if (mercury__diet__succeeded)
#line 1530 "diet.m"
              {
#line 1532 "diet.m"
                {
#line 1532 "diet.m"
                  mercury__diet__succeeded = mercury__diet__foldl_2_5_p_4(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1530 "diet.m"
                if (mercury__diet__succeeded)
#line 1533 "diet.m"
                  {
#line 1533 "diet.m"
                    /* direct tailcall eliminated */
#line 1533 "diet.m"
                    {
#line 1533 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1533 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1533 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1533 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1533 "diet.m"
                    }
#line 1533 "diet.m"
                    continue;
#line 1533 "diet.m"
                  }
#line 1530 "diet.m"
              }
#line 1530 "diet.m"
          }
#line 1529 "diet.m"
        return mercury__diet__succeeded;
#line 1529 "diet.m"
      }
#line 1529 "diet.m"
      break;
#line 1529 "diet.m"
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
#line 1529 "diet.m"
  while (MR_TRUE)
#line 1529 "diet.m"
    {
#line 1529 "diet.m"
      /* tailcall optimized into a loop */
#line 1529 "diet.m"
      {
#line 1529 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1529 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1528 "diet.m"
          {
#line 1528 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1528 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1528 "diet.m"
          }
#line 1529 "diet.m"
        else
#line 1530 "diet.m"
          {
#line 1530 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1530 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1530 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1530 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1530 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1530 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1530 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1530 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1530 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1530 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1531 "diet.m"
            {
#line 1531 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl_4_p_3(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1530 "diet.m"
            if (mercury__diet__succeeded)
#line 1530 "diet.m"
              {
#line 1532 "diet.m"
                {
#line 1532 "diet.m"
                  mercury__diet__succeeded = mercury__diet__foldl_2_5_p_3(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1530 "diet.m"
                if (mercury__diet__succeeded)
#line 1533 "diet.m"
                  {
#line 1533 "diet.m"
                    /* direct tailcall eliminated */
#line 1533 "diet.m"
                    {
#line 1533 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1533 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1533 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1533 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1533 "diet.m"
                    }
#line 1533 "diet.m"
                    continue;
#line 1533 "diet.m"
                  }
#line 1530 "diet.m"
              }
#line 1530 "diet.m"
          }
#line 1529 "diet.m"
        return mercury__diet__succeeded;
#line 1529 "diet.m"
      }
#line 1529 "diet.m"
      break;
#line 1529 "diet.m"
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
#line 1529 "diet.m"
  while (MR_TRUE)
#line 1529 "diet.m"
    {
#line 1529 "diet.m"
      /* tailcall optimized into a loop */
#line 1529 "diet.m"
      {
#line 1529 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1529 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1528 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1529 "diet.m"
        else
#line 1530 "diet.m"
          {
#line 1530 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1530 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1530 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1530 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1530 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1530 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1530 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1530 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1530 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1530 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1531 "diet.m"
            {
#line 1531 "diet.m"
              mercury__diet__foldl_4_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1532 "diet.m"
            {
#line 1532 "diet.m"
              mercury__diet__foldl_2_5_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1533 "diet.m"
            /* direct tailcall eliminated */
#line 1533 "diet.m"
            {
#line 1533 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1533 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1533 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1533 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1533 "diet.m"
            }
#line 1533 "diet.m"
            continue;
#line 1530 "diet.m"
          }
#line 1529 "diet.m"
      }
#line 1529 "diet.m"
      break;
#line 1529 "diet.m"
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
#line 1529 "diet.m"
  while (MR_TRUE)
#line 1529 "diet.m"
    {
#line 1529 "diet.m"
      /* tailcall optimized into a loop */
#line 1529 "diet.m"
      {
#line 1529 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1529 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1528 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1529 "diet.m"
        else
#line 1530 "diet.m"
          {
#line 1530 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1530 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1530 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1530 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1530 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1530 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1530 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1530 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1530 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1530 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1531 "diet.m"
            {
#line 1531 "diet.m"
              mercury__diet__foldl_4_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1532 "diet.m"
            {
#line 1532 "diet.m"
              mercury__diet__foldl_2_5_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1533 "diet.m"
            /* direct tailcall eliminated */
#line 1533 "diet.m"
            {
#line 1533 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1533 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1533 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1533 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1533 "diet.m"
            }
#line 1533 "diet.m"
            continue;
#line 1530 "diet.m"
          }
#line 1529 "diet.m"
      }
#line 1529 "diet.m"
      break;
#line 1529 "diet.m"
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
#line 1529 "diet.m"
  while (MR_TRUE)
#line 1529 "diet.m"
    {
#line 1529 "diet.m"
      /* tailcall optimized into a loop */
#line 1529 "diet.m"
      {
#line 1529 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1529 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1528 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1529 "diet.m"
        else
#line 1530 "diet.m"
          {
#line 1530 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1530 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1530 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1530 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1530 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1530 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1530 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1530 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1530 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1530 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1531 "diet.m"
            {
#line 1531 "diet.m"
              mercury__diet__foldl_4_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1532 "diet.m"
            {
#line 1532 "diet.m"
              mercury__diet__foldl_2_5_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1533 "diet.m"
            /* direct tailcall eliminated */
#line 1533 "diet.m"
            {
#line 1533 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1533 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1533 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1533 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1533 "diet.m"
            }
#line 1533 "diet.m"
            continue;
#line 1530 "diet.m"
          }
#line 1529 "diet.m"
      }
#line 1529 "diet.m"
      break;
#line 1529 "diet.m"
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
#line 1522 "diet.m"
  {
#line 1522 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1522 "diet.m"
    MR_Box mercury__diet__Acc_8;

#line 1522 "diet.m"
    {
#line 1522 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(mercury__diet__F_5, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__Set_6, mercury__diet__Acc0_7, &mercury__diet__Acc_8);
    }
#line 1522 "diet.m"
    return mercury__diet__Acc_8;
#line 1522 "diet.m"
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
#line 1509 "diet.m"
  while (MR_TRUE)
#line 1509 "diet.m"
    {
#line 1509 "diet.m"
      /* tailcall optimized into a loop */
#line 1509 "diet.m"
      {
#line 1509 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1509 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1508 "diet.m"
          {
#line 1508 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1508 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1508 "diet.m"
          }
#line 1509 "diet.m"
        else
#line 1510 "diet.m"
          {
#line 1510 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1510 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1510 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1510 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1510 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1510 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1510 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1510 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
#line 1512 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1510 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1510 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1511 "diet.m"
            {
#line 1511 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldr_intervals_4_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1510 "diet.m"
            if (mercury__diet__succeeded)
#line 1510 "diet.m"
              {
#line 1512 "diet.m"
                mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
#line 1512 "diet.m"
                {
#line 1512 "diet.m"
                  mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1510 "diet.m"
                if (mercury__diet__succeeded)
#line 1513 "diet.m"
                  {
#line 1513 "diet.m"
                    /* direct tailcall eliminated */
#line 1513 "diet.m"
                    {
#line 1513 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1513 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1513 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1513 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1513 "diet.m"
                    }
#line 1513 "diet.m"
                    continue;
#line 1513 "diet.m"
                  }
#line 1510 "diet.m"
              }
#line 1510 "diet.m"
          }
#line 1509 "diet.m"
        return mercury__diet__succeeded;
#line 1509 "diet.m"
      }
#line 1509 "diet.m"
      break;
#line 1509 "diet.m"
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
#line 1509 "diet.m"
  while (MR_TRUE)
#line 1509 "diet.m"
    {
#line 1509 "diet.m"
      /* tailcall optimized into a loop */
#line 1509 "diet.m"
      {
#line 1509 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1509 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1508 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1509 "diet.m"
        else
#line 1510 "diet.m"
          {
#line 1510 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1510 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1510 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1510 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1510 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1510 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1510 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1510 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
#line 1512 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1510 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1510 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1511 "diet.m"
            {
#line 1511 "diet.m"
              mercury__diet__foldr_intervals_4_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1512 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
#line 1512 "diet.m"
            {
#line 1512 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1513 "diet.m"
            /* direct tailcall eliminated */
#line 1513 "diet.m"
            {
#line 1513 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1513 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1513 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1513 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1513 "diet.m"
            }
#line 1513 "diet.m"
            continue;
#line 1510 "diet.m"
          }
#line 1509 "diet.m"
      }
#line 1509 "diet.m"
      break;
#line 1509 "diet.m"
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
#line 1509 "diet.m"
  while (MR_TRUE)
#line 1509 "diet.m"
    {
#line 1509 "diet.m"
      /* tailcall optimized into a loop */
#line 1509 "diet.m"
      {
#line 1509 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1509 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1508 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1509 "diet.m"
        else
#line 1510 "diet.m"
          {
#line 1510 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1510 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1510 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1510 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1510 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1510 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1510 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1510 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
#line 1512 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1510 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1510 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1511 "diet.m"
            {
#line 1511 "diet.m"
              mercury__diet__foldr_intervals_4_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1512 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
#line 1512 "diet.m"
            {
#line 1512 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1513 "diet.m"
            /* direct tailcall eliminated */
#line 1513 "diet.m"
            {
#line 1513 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1513 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1513 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1513 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1513 "diet.m"
            }
#line 1513 "diet.m"
            continue;
#line 1510 "diet.m"
          }
#line 1509 "diet.m"
      }
#line 1509 "diet.m"
      break;
#line 1509 "diet.m"
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
#line 1497 "diet.m"
  while (MR_TRUE)
#line 1497 "diet.m"
    {
#line 1497 "diet.m"
      /* tailcall optimized into a loop */
#line 1497 "diet.m"
      {
#line 1497 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1497 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1496 "diet.m"
          {
#line 1496 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1496 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1496 "diet.m"
          }
#line 1497 "diet.m"
        else
#line 1498 "diet.m"
          {
#line 1498 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1498 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1498 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1498 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1498 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1498 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1498 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1498 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
#line 1500 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1498 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1498 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1499 "diet.m"
            {
#line 1499 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl_intervals_4_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1498 "diet.m"
            if (mercury__diet__succeeded)
#line 1498 "diet.m"
              {
#line 1500 "diet.m"
                mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
#line 1500 "diet.m"
                {
#line 1500 "diet.m"
                  mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1498 "diet.m"
                if (mercury__diet__succeeded)
#line 1501 "diet.m"
                  {
#line 1501 "diet.m"
                    /* direct tailcall eliminated */
#line 1501 "diet.m"
                    {
#line 1501 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1501 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1501 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1501 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1501 "diet.m"
                    }
#line 1501 "diet.m"
                    continue;
#line 1501 "diet.m"
                  }
#line 1498 "diet.m"
              }
#line 1498 "diet.m"
          }
#line 1497 "diet.m"
        return mercury__diet__succeeded;
#line 1497 "diet.m"
      }
#line 1497 "diet.m"
      break;
#line 1497 "diet.m"
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
#line 1497 "diet.m"
  while (MR_TRUE)
#line 1497 "diet.m"
    {
#line 1497 "diet.m"
      /* tailcall optimized into a loop */
#line 1497 "diet.m"
      {
#line 1497 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1497 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1496 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1497 "diet.m"
        else
#line 1498 "diet.m"
          {
#line 1498 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1498 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1498 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1498 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1498 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1498 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1498 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1498 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
#line 1500 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1498 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1498 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1499 "diet.m"
            {
#line 1499 "diet.m"
              mercury__diet__foldl_intervals_4_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1500 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
#line 1500 "diet.m"
            {
#line 1500 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1501 "diet.m"
            /* direct tailcall eliminated */
#line 1501 "diet.m"
            {
#line 1501 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1501 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1501 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1501 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1501 "diet.m"
            }
#line 1501 "diet.m"
            continue;
#line 1498 "diet.m"
          }
#line 1497 "diet.m"
      }
#line 1497 "diet.m"
      break;
#line 1497 "diet.m"
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
#line 1497 "diet.m"
  while (MR_TRUE)
#line 1497 "diet.m"
    {
#line 1497 "diet.m"
      /* tailcall optimized into a loop */
#line 1497 "diet.m"
      {
#line 1497 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1497 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1496 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1497 "diet.m"
        else
#line 1498 "diet.m"
          {
#line 1498 "diet.m"
            MR_Box mercury__diet__X_8;
#line 1498 "diet.m"
            MR_Box mercury__diet__Y_9;
#line 1498 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1498 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1498 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1498 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1498 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1498 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
#line 1500 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1498 "diet.m"
            mercury__diet__X_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0));
#line 1498 "diet.m"
            mercury__diet__Y_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1));
#line 1499 "diet.m"
            {
#line 1499 "diet.m"
              mercury__diet__foldl_intervals_4_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1500 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
#line 1500 "diet.m"
            {
#line 1500 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1501 "diet.m"
            /* direct tailcall eliminated */
#line 1501 "diet.m"
            {
#line 1501 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1501 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1501 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1501 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1501 "diet.m"
            }
#line 1501 "diet.m"
            continue;
#line 1498 "diet.m"
          }
#line 1497 "diet.m"
      }
#line 1497 "diet.m"
      break;
#line 1497 "diet.m"
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
#line 1475 "diet.m"
  {
#line 1475 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1475 "diet.m"
    MR_Integer mercury__diet__Count_4;

#line 1476 "diet.m"
    {
#line 1476 "diet.m"
      mercury__diet__count_3_p_0(mercury__diet__TypeClassInfo_for_enum_6, mercury__diet__T_3, (MR_Integer) 0, &mercury__diet__Count_4);
    }
#line 1475 "diet.m"
    return mercury__diet__Count_4;
#line 1475 "diet.m"
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
#line 1469 "diet.m"
  {
#line 1469 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1269 "diet.m"
    {
#line 1269 "diet.m"
      *mercury__diet__InPart_7 = mercury__diet__inter_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_9, mercury__diet__Set_6, mercury__diet__DivideBySet_5);
    }
#line 1373 "diet.m"
    if ((mercury__diet__Set_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1373 "diet.m"
      *mercury__diet__OutPart_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1373 "diet.m"
    else
#line 1373 "diet.m"
    if ((mercury__diet__DivideBySet_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1378 "diet.m"
      *mercury__diet__OutPart_8 = mercury__diet__Set_6;
#line 1373 "diet.m"
    else
#line 1380 "diet.m"
      {
#line 1380 "diet.m"
        MR_Tuple mercury__diet__Head_27;
#line 1380 "diet.m"
        MR_Word mercury__diet__Stream_28;
#line 1380 "diet.m"
        MR_Word mercury__diet__V_31_31;
#line 1383 "diet.m"
        MR_Word mercury__diet___RemHead_29;
#line 1383 "diet.m"
        MR_Word mercury__diet___RemStream_30;

#line 1382 "diet.m"
        {
#line 1382 "diet.m"
          mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_9, mercury__diet__DivideBySet_5, &mercury__diet__Head_27, &mercury__diet__Stream_28);
        }
#line 1383 "diet.m"
        {
#line 1383 "diet.m"
          mercury__diet__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1383 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__V_31_31, 0) = ((MR_Box) (mercury__diet__Head_27));
#line 1383 "diet.m"
        }
#line 1383 "diet.m"
        {
#line 1383 "diet.m"
          mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_9, mercury__diet__Set_6, mercury__diet__V_31_31, mercury__diet__Stream_28, mercury__diet__OutPart_8, &mercury__diet___RemHead_29, &mercury__diet___RemStream_30);
        }
#line 1380 "diet.m"
      }
#line 1469 "diet.m"
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
#line 1452 "diet.m"
  {
#line 1452 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1452 "diet.m"
    MR_Word mercury__diet__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1452 "diet.m"
    MR_Word mercury__diet__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1454 "diet.m"
    {
#line 1454 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_12, mercury__diet__Pred_5, mercury__diet__TypeClassInfo_for_diet_element_12, mercury__diet__Set_6, mercury__diet__V_10_10, mercury__diet__TrueSet_7, mercury__diet__V_11_11, mercury__diet__FalseSet_8);
#line 1454 "diet.m"
      return;
    }
#line 1452 "diet.m"
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
#line 1373 "diet.m"
  {
#line 1373 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1373 "diet.m"
    if ((mercury__diet__SetA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1373 "diet.m"
      *mercury__diet__Set_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1373 "diet.m"
    else
#line 1373 "diet.m"
    if ((mercury__diet__SetB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1378 "diet.m"
      *mercury__diet__Set_6 = mercury__diet__SetA_4;
#line 1373 "diet.m"
    else
#line 1380 "diet.m"
      {
#line 1380 "diet.m"
        MR_Tuple mercury__diet__Head_19;
#line 1380 "diet.m"
        MR_Word mercury__diet__Stream_20;
#line 1380 "diet.m"
        MR_Word mercury__diet__V_23_23;
#line 1383 "diet.m"
        MR_Word mercury__diet___RemHead_21;
#line 1383 "diet.m"
        MR_Word mercury__diet___RemStream_22;

#line 1382 "diet.m"
        {
#line 1382 "diet.m"
          mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_24, mercury__diet__SetB_5, &mercury__diet__Head_19, &mercury__diet__Stream_20);
        }
#line 1383 "diet.m"
        {
#line 1383 "diet.m"
          mercury__diet__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1383 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__V_23_23, 0) = ((MR_Box) (mercury__diet__Head_19));
#line 1383 "diet.m"
        }
#line 1383 "diet.m"
        {
#line 1383 "diet.m"
          mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_24, mercury__diet__SetA_4, mercury__diet__V_23_23, mercury__diet__Stream_20, mercury__diet__Set_6, &mercury__diet___RemHead_21, &mercury__diet___RemStream_22);
        }
#line 1380 "diet.m"
      }
#line 1373 "diet.m"
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
#line 1373 "diet.m"
  {
#line 1373 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1373 "diet.m"
    MR_Word mercury__diet__Set_6;

#line 1373 "diet.m"
    if ((mercury__diet__SetA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1373 "diet.m"
      mercury__diet__Set_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1373 "diet.m"
    else
#line 1373 "diet.m"
    if ((mercury__diet__SetB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1378 "diet.m"
      mercury__diet__Set_6 = mercury__diet__SetA_4;
#line 1373 "diet.m"
    else
#line 1380 "diet.m"
      {
#line 1380 "diet.m"
        MR_Tuple mercury__diet__Head_23;
#line 1380 "diet.m"
        MR_Word mercury__diet__Stream_24;
#line 1380 "diet.m"
        MR_Word mercury__diet__V_27_27;
#line 1383 "diet.m"
        MR_Word mercury__diet___RemHead_25;
#line 1383 "diet.m"
        MR_Word mercury__diet___RemStream_26;

#line 1382 "diet.m"
        {
#line 1382 "diet.m"
          mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__SetB_5, &mercury__diet__Head_23, &mercury__diet__Stream_24);
        }
#line 1383 "diet.m"
        {
#line 1383 "diet.m"
          mercury__diet__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1383 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__V_27_27, 0) = ((MR_Box) (mercury__diet__Head_23));
#line 1383 "diet.m"
        }
#line 1383 "diet.m"
        {
#line 1383 "diet.m"
          mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__SetA_4, mercury__diet__V_27_27, mercury__diet__Stream_24, &mercury__diet__Set_6, &mercury__diet___RemHead_25, &mercury__diet___RemStream_26);
        }
#line 1380 "diet.m"
      }
#line 1373 "diet.m"
    return mercury__diet__Set_6;
#line 1373 "diet.m"
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
#line 1362 "diet.m"
  {
#line 1362 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1362 "diet.m"
    if ((mercury__diet__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 692 "diet.m"
      *mercury__diet__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1362 "diet.m"
    else
#line 1363 "diet.m"
      {
#line 1363 "diet.m"
        MR_Word mercury__diet__Set0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 0)));
#line 1363 "diet.m"
        MR_Word mercury__diet__Sets_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 1)));

#line 1364 "diet.m"
        {
#line 1364 "diet.m"
          mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__Sets_4, mercury__diet__Set0_3, mercury__diet__HeadVar__2_2);
#line 1364 "diet.m"
          return;
        }
#line 1363 "diet.m"
      }
#line 1362 "diet.m"
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
#line 1360 "diet.m"
  {
#line 1360 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1360 "diet.m"
    MR_Word mercury__diet__Set_4;

#line 1360 "diet.m"
    {
#line 1360 "diet.m"
      mercury__diet__intersect_list_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__Sets_3, &mercury__diet__Set_4);
    }
#line 1360 "diet.m"
    return mercury__diet__Set_4;
#line 1360 "diet.m"
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
#line 1269 "diet.m"
  {
#line 1269 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1269 "diet.m"
    {
#line 1269 "diet.m"
      *mercury__diet__HeadVar__3_3 = mercury__diet__inter_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_6, mercury__diet__SetA_4, mercury__diet__SetB_5);
    }
#line 1269 "diet.m"
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
#line 1267 "diet.m"
  {
#line 1267 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1267 "diet.m"
    MR_Word mercury__diet__HeadVar__3_3;

#line 1267 "diet.m"
    {
#line 1267 "diet.m"
      return mercury__diet__HeadVar__3_3 = mercury__diet__inter_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_6, mercury__diet__SetA_4, mercury__diet__SetB_5);
    }
#line 1267 "diet.m"
    return mercury__diet__HeadVar__3_3;
#line 1267 "diet.m"
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
#line 1258 "diet.m"
  {
#line 1258 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1258 "diet.m"
    if ((mercury__diet__Sets_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1259 "diet.m"
      *mercury__diet__Set_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1258 "diet.m"
    else
#line 1261 "diet.m"
      {
#line 1261 "diet.m"
        MR_Word mercury__diet__SetA_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Sets_3, (MR_Integer) 0)));
#line 1261 "diet.m"
        MR_Word mercury__diet__SetBs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Sets_3, (MR_Integer) 1)));

#line 1262 "diet.m"
        {
#line 1262 "diet.m"
          mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__SetBs_6, mercury__diet__SetA_5, mercury__diet__Set_4);
#line 1262 "diet.m"
          return;
        }
#line 1261 "diet.m"
      }
#line 1258 "diet.m"
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
#line 1254 "diet.m"
  {
#line 1254 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1254 "diet.m"
    MR_Word mercury__diet__Set_4;

#line 1254 "diet.m"
    {
#line 1254 "diet.m"
      mercury__diet__union_list_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__Sets_3, &mercury__diet__Set_4);
    }
#line 1254 "diet.m"
    return mercury__diet__Set_4;
#line 1254 "diet.m"
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
#line 1150 "diet.m"
  {
#line 1150 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1150 "diet.m"
    {
#line 1150 "diet.m"
      *mercury__diet__HeadVar__3_3 = mercury__diet__union_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_6, mercury__diet__DietA_4, mercury__diet__DietB_5);
    }
#line 1150 "diet.m"
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
#line 1155 "diet.m"
  while (MR_TRUE)
#line 1155 "diet.m"
    {
#line 1155 "diet.m"
      /* tailcall optimized into a loop */
#line 1155 "diet.m"
      {
#line 1155 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 1155 "diet.m"
        MR_Word mercury__diet__Result_6;
#line 1153 "diet.m"
        MR_Integer mercury__diet__V_13_13;
#line 1153 "diet.m"
        MR_Integer mercury__diet__V_14_14;
#line 102 "private_builtin.opt"
        MR_Word mercury__diet__TypeInfo_18_18;
#line 102 "private_builtin.opt"
        MR_Word mercury__diet__TypeInfo_19_19;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__union_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_16 ;
	Index =  (MR_Integer) 1 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 19504 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_18_18  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 513 "diet.m"
        if ((mercury__diet__Stream0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
          mercury__diet__V_13_13 = (MR_Integer) 0;
#line 513 "diet.m"
        else
#line 514 "diet.m"
          {
#line 514 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 0)));
#line 514 "diet.m"
            MR_Word mercury__diet__V_22_22;
#line 514 "diet.m"
            MR_Word mercury__diet__V_23_23;

#line 514 "diet.m"
            mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 1)));
#line 514 "diet.m"
            mercury__diet__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 2)));
#line 514 "diet.m"
            mercury__diet__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 3)));
#line 514 "diet.m"
          }
#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__union_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_16 ;
	Index =  (MR_Integer) 1 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 19549 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_19_19  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 513 "diet.m"
        if ((mercury__diet__Input_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
          mercury__diet__V_14_14 = (MR_Integer) 0;
#line 513 "diet.m"
        else
#line 514 "diet.m"
          {
#line 514 "diet.m"
            MR_Tuple mercury__diet__V_24_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 0)));
#line 514 "diet.m"
            MR_Word mercury__diet__V_26_26;
#line 514 "diet.m"
            MR_Word mercury__diet__V_27_27;

#line 514 "diet.m"
            mercury__diet__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 1)));
#line 514 "diet.m"
            mercury__diet__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 2)));
#line 514 "diet.m"
            mercury__diet__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 3)));
#line 514 "diet.m"
          }
#line 494 "diet.m"
        mercury__diet__succeeded = (mercury__diet__V_13_13 > mercury__diet__V_14_14);
#line 1155 "diet.m"
        if (mercury__diet__succeeded)
#line 1154 "diet.m"
          {
#line 1154 "diet.m"
            /* direct tailcall eliminated */
#line 1154 "diet.m"
            {
#line 1154 "diet.m"
              MR_Word mercury__diet__Input__tmp_copy_4 = mercury__diet__Stream0_5;
#line 1154 "diet.m"
              MR_Word mercury__diet__Stream0__tmp_copy_5 = mercury__diet__Input_4;

#line 1154 "diet.m"
              mercury__diet__Stream0_5 = mercury__diet__Stream0__tmp_copy_5;
#line 1154 "diet.m"
              mercury__diet__Input_4 = mercury__diet__Input__tmp_copy_4;
#line 1154 "diet.m"
            }
#line 1154 "diet.m"
            continue;
#line 1154 "diet.m"
          }
#line 1155 "diet.m"
        else
#line 1156 "diet.m"
          {
#line 1156 "diet.m"
            MR_Word mercury__diet__Head1_7;
#line 1156 "diet.m"
            MR_Word mercury__diet__Stream1_8;
#line 1156 "diet.m"
            MR_Word mercury__diet__Left2_9;
#line 1156 "diet.m"
            MR_Word mercury__diet__Head2_10;
#line 1156 "diet.m"
            MR_Word mercury__diet__Stream2_11;
#line 1156 "diet.m"
            MR_Word mercury__diet__V_15_15;

#line 672 "diet.m"
            if ((mercury__diet__Stream0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "diet.m"
              {
#line 673 "diet.m"
                mercury__diet__Head1_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 674 "diet.m"
                mercury__diet__Stream1_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 672 "diet.m"
              }
#line 672 "diet.m"
            else
#line 676 "diet.m"
              {
#line 676 "diet.m"
                MR_Tuple mercury__diet__X_37;

#line 677 "diet.m"
                {
#line 677 "diet.m"
                  mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_16, mercury__diet__Stream0_5, &mercury__diet__X_37, &mercury__diet__Stream1_8);
                }
#line 678 "diet.m"
                {
#line 678 "diet.m"
                  mercury__diet__Head1_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 678 "diet.m"
                  MR_hl_field(MR_mktag(1), mercury__diet__Head1_7, 0) = ((MR_Box) (mercury__diet__X_37));
#line 678 "diet.m"
                }
#line 676 "diet.m"
              }
#line 1157 "diet.m"
            mercury__diet__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1157 "diet.m"
            {
#line 1157 "diet.m"
              mercury__diet__union_2_7_p_0(mercury__diet__TypeClassInfo_for_diet_element_16, mercury__diet__Input_4, mercury__diet__V_15_15, mercury__diet__Head1_7, mercury__diet__Stream1_8, &mercury__diet__Left2_9, &mercury__diet__Head2_10, &mercury__diet__Stream2_11);
            }
#line 1161 "diet.m"
            if ((mercury__diet__Head2_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1160 "diet.m"
              mercury__diet__Result_6 = mercury__diet__Left2_9;
#line 1161 "diet.m"
            else
#line 1162 "diet.m"
              {
#line 1162 "diet.m"
                MR_Tuple mercury__diet__I_12 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head2_10, (MR_Integer) 0)));

#line 1163 "diet.m"
                {
#line 1163 "diet.m"
                  return mercury__diet__Result_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_16, mercury__diet__I_12, mercury__diet__Left2_9, mercury__diet__Stream2_11);
                }
#line 1162 "diet.m"
              }
#line 1156 "diet.m"
          }
#line 1155 "diet.m"
        return mercury__diet__Result_6;
#line 1155 "diet.m"
      }
#line 1155 "diet.m"
      break;
#line 1155 "diet.m"
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
#line 1121 "diet.m"
  {
#line 1121 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1121 "diet.m"
    if ((mercury__diet__Set_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1121 "diet.m"
      {
#line 1122 "diet.m"
        *mercury__diet__IsPresent_9 = (MR_Integer) 0;
#line 1123 "diet.m"
        *mercury__diet__Lesser_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1124 "diet.m"
        *mercury__diet__Greater_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1121 "diet.m"
      }
#line 1121 "diet.m"
    else
#line 1126 "diet.m"
      {
#line 1126 "diet.m"
        MR_Box mercury__diet__A_11;
#line 1126 "diet.m"
        MR_Box mercury__diet__B_12;
#line 1126 "diet.m"
        MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_7, (MR_Integer) 2)));
#line 1126 "diet.m"
        MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_7, (MR_Integer) 3)));
#line 1126 "diet.m"
        MR_Tuple mercury__diet__V_18_18 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set_7, (MR_Integer) 0)));
#line 1126 "diet.m"
        MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set_7, (MR_Integer) 1)));
#line 19741 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

#line 1126 "diet.m"
        mercury__diet__A_11 = (MR_hl_field(MR_mktag(0), mercury__diet__V_18_18, (MR_Integer) 0));
#line 1126 "diet.m"
        mercury__diet__B_12 = (MR_hl_field(MR_mktag(0), mercury__diet__V_18_18, (MR_Integer) 1));
#line 19748 "diet.c"
        mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_25, (MR_Integer) 0)), (MR_Integer) 5)));
#line 19750 "diet.c"
        {
#line 19752 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_25), mercury__diet__X_6, mercury__diet__A_11);
        }
#line 1130 "diet.m"
        if (mercury__diet__succeeded)
#line 1128 "diet.m"
          {
#line 1128 "diet.m"
            MR_Word mercury__diet__RL_16;

#line 1128 "diet.m"
            {
#line 1128 "diet.m"
              mercury__diet__split_5_p_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__X_6, mercury__diet__L_14, mercury__diet__Lesser_8, mercury__diet__IsPresent_9, &mercury__diet__RL_16);
            }
#line 1129 "diet.m"
            {
#line 1129 "diet.m"
              *mercury__diet__Greater_10 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__V_18_18, mercury__diet__RL_16, mercury__diet__R_15);
            }
#line 1128 "diet.m"
          }
#line 1130 "diet.m"
        else
#line 1133 "diet.m"
          {
#line 19778 "diet.c"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_25, (MR_Integer) 0)), (MR_Integer) 5)));

#line 19781 "diet.c"
            {
#line 19783 "diet.c"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_25), mercury__diet__B_12, mercury__diet__X_6);
            }
#line 1133 "diet.m"
            if (mercury__diet__succeeded)
#line 1131 "diet.m"
              {
#line 1131 "diet.m"
                MR_Word mercury__diet__LR_17;

#line 1131 "diet.m"
                {
#line 1131 "diet.m"
                  mercury__diet__split_5_p_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__X_6, mercury__diet__R_15, &mercury__diet__LR_17, mercury__diet__IsPresent_9, mercury__diet__Greater_10);
                }
#line 1132 "diet.m"
                {
#line 1132 "diet.m"
                  *mercury__diet__Lesser_8 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__V_18_18, mercury__diet__L_14, mercury__diet__LR_17);
                }
#line 1131 "diet.m"
              }
#line 1133 "diet.m"
            else
#line 1134 "diet.m"
              {
#line 1135 "diet.m"
                MR_Word mercury__diet__TypeInfo_27_27;
#line 1140 "diet.m"
                MR_Word mercury__diet__TypeInfo_29_29;

#line 1134 "diet.m"
                *mercury__diet__IsPresent_9 = (MR_Integer) 1;
#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__split_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_25 ;
	Index =  (MR_Integer) 1 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 19831 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_27_27  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 1135 "diet.m"
                {
#line 1135 "diet.m"
                  mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_27_27, mercury__diet__X_6, mercury__diet__A_11);
                }
#line 1137 "diet.m"
                if (mercury__diet__succeeded)
#line 1136 "diet.m"
                  *mercury__diet__Lesser_8 = mercury__diet__L_14;
#line 1137 "diet.m"
                else
#line 1138 "diet.m"
                  {
#line 1138 "diet.m"
                    MR_Tuple mercury__diet__V_21_21;
#line 1138 "diet.m"
                    MR_Box mercury__diet__V_22_22;
#line 19855 "diet.c"
                    MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_25, (MR_Integer) 0)), (MR_Integer) 7)));

#line 19858 "diet.c"
                    {
#line 19860 "diet.c"
                      mercury__diet__V_22_22 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_25), mercury__diet__X_6);
                    }
#line 1138 "diet.m"
                    {
#line 1138 "diet.m"
                      mercury__diet__V_21_21 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1138 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_21_21, 0) = mercury__diet__A_11;
#line 1138 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_21_21, 1) = mercury__diet__V_22_22;
#line 1138 "diet.m"
                    }
#line 1138 "diet.m"
                    {
#line 1138 "diet.m"
                      *mercury__diet__Lesser_8 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__V_21_21, mercury__diet__L_14);
                    }
#line 1138 "diet.m"
                  }
#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__split_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_25 ;
	Index =  (MR_Integer) 1 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 19895 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_29_29  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 1140 "diet.m"
                {
#line 1140 "diet.m"
                  mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_29_29, mercury__diet__X_6, mercury__diet__B_12);
                }
#line 1142 "diet.m"
                if (mercury__diet__succeeded)
#line 1141 "diet.m"
                  *mercury__diet__Greater_10 = mercury__diet__R_15;
#line 1142 "diet.m"
                else
#line 1143 "diet.m"
                  {
#line 1143 "diet.m"
                    MR_Tuple mercury__diet__V_23_23;
#line 1143 "diet.m"
                    MR_Box mercury__diet__V_24_24;
#line 19919 "diet.c"
                    MR_Box MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_25, (MR_Integer) 0)), (MR_Integer) 6)));

#line 19922 "diet.c"
                    {
#line 19924 "diet.c"
                      mercury__diet__V_24_24 = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_25), mercury__diet__X_6);
                    }
#line 1143 "diet.m"
                    {
#line 1143 "diet.m"
                      mercury__diet__V_23_23 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1143 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_23_23, 0) = mercury__diet__V_24_24;
#line 1143 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_23_23, 1) = mercury__diet__B_12;
#line 1143 "diet.m"
                    }
#line 1143 "diet.m"
                    {
#line 1143 "diet.m"
                      *mercury__diet__Greater_10 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_25, mercury__diet__V_23_23, mercury__diet__R_15);
                    }
#line 1143 "diet.m"
                  }
#line 1134 "diet.m"
              }
#line 1133 "diet.m"
          }
#line 1126 "diet.m"
      }
#line 1121 "diet.m"
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
#line 19968 "diet.c"
  {
#line 19970 "diet.c"
    MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Set0_5)) == (MR_mktag((MR_Integer) 1)));
#line 19972 "diet.c"
    MR_Box mercury__diet__Y_11;
#line 19974 "diet.c"
    MR_Word mercury__diet__Stream_12;
#line 19976 "diet.c"
    MR_Tuple mercury__diet__V_13_13;
#line 19978 "diet.c"
    MR_Tuple mercury__diet__V_19_19;
#line 19980 "diet.c"
    MR_Integer mercury__diet__V_20_20;
#line 19982 "diet.c"
    MR_Word mercury__diet__V_21_21;
#line 19984 "diet.c"
    MR_Word mercury__diet__V_22_22;
#line 1110 "diet.m"
    MR_Word mercury__diet__TypeInfo_18_18;
#line 1110 "diet.m"
    MR_Integer mercury__diet__TypeInfoIndex_17;

#line 19991 "diet.c"
    if (mercury__diet__succeeded)
#line 19993 "diet.c"
      {
#line 19995 "diet.c"
        mercury__diet__V_19_19 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 0)));
#line 19997 "diet.c"
        mercury__diet__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 1)));
#line 19999 "diet.c"
        mercury__diet__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 2)));
#line 20001 "diet.c"
        mercury__diet__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 3)));
#line 1109 "diet.m"
        {
#line 1109 "diet.m"
          mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_16, mercury__diet__Set0_5, &mercury__diet__V_13_13, &mercury__diet__Stream_12);
        }
#line 1109 "diet.m"
        *mercury__diet__X_4 = (MR_hl_field(MR_mktag(0), mercury__diet__V_13_13, (MR_Integer) 0));
#line 1109 "diet.m"
        mercury__diet__Y_11 = (MR_hl_field(MR_mktag(0), mercury__diet__V_13_13, (MR_Integer) 1));
#line 20012 "diet.c"
        mercury__diet__TypeInfoIndex_17 = (MR_Integer) 1;
#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__remove_least_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_16 ;
	Index =  mercury__diet__TypeInfoIndex_17 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 20029 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_18_18  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 1110 "diet.m"
        {
#line 1110 "diet.m"
          mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_18_18, *mercury__diet__X_4, mercury__diet__Y_11);
        }
#line 1112 "diet.m"
        if (mercury__diet__succeeded)
#line 1111 "diet.m"
          *mercury__diet__Set_6 = mercury__diet__Stream_12;
#line 1112 "diet.m"
        else
#line 1113 "diet.m"
          {
#line 1113 "diet.m"
            MR_Tuple mercury__diet__V_14_14;
#line 1113 "diet.m"
            MR_Box mercury__diet__V_15_15;
#line 20053 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_16, (MR_Integer) 0)), (MR_Integer) 6)));

#line 20056 "diet.c"
            {
#line 20058 "diet.c"
              mercury__diet__V_15_15 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_16), *mercury__diet__X_4);
            }
#line 1113 "diet.m"
            {
#line 1113 "diet.m"
              mercury__diet__V_14_14 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1113 "diet.m"
              MR_hl_field(MR_mktag(0), mercury__diet__V_14_14, 0) = mercury__diet__V_15_15;
#line 1113 "diet.m"
              MR_hl_field(MR_mktag(0), mercury__diet__V_14_14, 1) = mercury__diet__Y_11;
#line 1113 "diet.m"
            }
#line 1113 "diet.m"
            {
#line 1113 "diet.m"
              *mercury__diet__Set_6 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_16, mercury__diet__V_14_14, mercury__diet__Stream_12);
            }
#line 1113 "diet.m"
          }
#line 1112 "diet.m"
        mercury__diet__succeeded = MR_TRUE;
#line 20080 "diet.c"
      }
#line 20082 "diet.c"
    return mercury__diet__succeeded;
#line 20084 "diet.c"
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
#line 1096 "diet.m"
  {
#line 1096 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1096 "diet.m"
    MR_Word mercury__diet__SetX_7;

#line 1097 "diet.m"
    {
#line 1097 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__X_4, &mercury__diet__SetX_7);
    }
#line 777 "diet.m"
    if ((mercury__diet__SetX_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 777 "diet.m"
      mercury__diet__succeeded = MR_TRUE;
#line 777 "diet.m"
    else
#line 779 "diet.m"
      {
#line 779 "diet.m"
        MR_Tuple mercury__diet__XY1_19;
#line 779 "diet.m"
        MR_Word mercury__diet__R1_20;
#line 779 "diet.m"
        MR_Tuple mercury__diet__XY2_21;
#line 779 "diet.m"
        MR_Word mercury__diet__R2_22;
#line 779 "diet.m"
        MR_Word mercury__diet__V_23_23;
#line 779 "diet.m"
        MR_Word mercury__diet__V_24_24;
#line 780 "diet.m"
        MR_Tuple mercury__diet__V_15_15;
#line 780 "diet.m"
        MR_Integer mercury__diet__V_16_16;
#line 780 "diet.m"
        MR_Word mercury__diet__V_17_17;
#line 780 "diet.m"
        MR_Word mercury__diet__V_18_18;

#line 780 "diet.m"
        mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Set0_5)) == (MR_mktag((MR_Integer) 1)));
#line 780 "diet.m"
        if (mercury__diet__succeeded)
#line 780 "diet.m"
          {
#line 780 "diet.m"
            mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 0)));
#line 780 "diet.m"
            mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 1)));
#line 780 "diet.m"
            mercury__diet__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 2)));
#line 780 "diet.m"
            mercury__diet__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 3)));
#line 781 "diet.m"
            {
#line 781 "diet.m"
              mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__SetX_7, &mercury__diet__XY1_19, &mercury__diet__R1_20);
            }
#line 782 "diet.m"
            {
#line 782 "diet.m"
              mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__Set0_5, &mercury__diet__XY2_21, &mercury__diet__R2_22);
            }
#line 783 "diet.m"
            mercury__diet__V_23_23 = (MR_Integer) 1;
#line 783 "diet.m"
            {
#line 783 "diet.m"
              mercury__diet__subset_2_5_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__XY1_19, mercury__diet__R1_20, mercury__diet__XY2_21, mercury__diet__R2_22, &mercury__diet__V_24_24);
            }
#line 783 "diet.m"
            mercury__diet__succeeded = (mercury__diet__V_23_23 == mercury__diet__V_24_24);
#line 780 "diet.m"
          }
#line 779 "diet.m"
      }
#line 1096 "diet.m"
    if (mercury__diet__succeeded)
#line 1096 "diet.m"
      {
#line 1373 "diet.m"
        if ((mercury__diet__Set0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1373 "diet.m"
          *mercury__diet__Set_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1373 "diet.m"
        else
#line 1373 "diet.m"
        if ((mercury__diet__SetX_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1378 "diet.m"
          *mercury__diet__Set_6 = mercury__diet__Set0_5;
#line 1373 "diet.m"
        else
#line 1380 "diet.m"
          {
#line 1380 "diet.m"
            MR_Tuple mercury__diet__Head_40;
#line 1380 "diet.m"
            MR_Word mercury__diet__Stream_41;
#line 1380 "diet.m"
            MR_Word mercury__diet__V_44_44;
#line 1383 "diet.m"
            MR_Word mercury__diet___RemHead_42;
#line 1383 "diet.m"
            MR_Word mercury__diet___RemStream_43;

#line 1382 "diet.m"
            {
#line 1382 "diet.m"
              mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__SetX_7, &mercury__diet__Head_40, &mercury__diet__Stream_41);
            }
#line 1383 "diet.m"
            {
#line 1383 "diet.m"
              mercury__diet__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1383 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__V_44_44, 0) = ((MR_Box) (mercury__diet__Head_40));
#line 1383 "diet.m"
            }
#line 1383 "diet.m"
            {
#line 1383 "diet.m"
              mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__Set0_5, mercury__diet__V_44_44, mercury__diet__Stream_41, mercury__diet__Set_6, &mercury__diet___RemHead_42, &mercury__diet___RemStream_43);
            }
#line 1380 "diet.m"
          }
#line 1373 "diet.m"
        mercury__diet__succeeded = MR_TRUE;
#line 1096 "diet.m"
      }
#line 1096 "diet.m"
    return mercury__diet__succeeded;
#line 1096 "diet.m"
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
#line 20253 "diet.c"
  {
#line 20255 "diet.c"
    MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 20257 "diet.c"
    MR_Word mercury__diet__TypeInfo_32_32;
#line 20259 "diet.c"
    MR_Box mercury__diet__X_9;
#line 20261 "diet.c"
    MR_Box mercury__diet__Y_10;
#line 20263 "diet.c"
    MR_Integer mercury__diet__H_11;
#line 20265 "diet.c"
    MR_Word mercury__diet__Left_12;
#line 20267 "diet.c"
    MR_Word mercury__diet__Right_13;
#line 20269 "diet.c"
    MR_Word mercury__diet__CZX_14;
#line 20271 "diet.c"
    MR_Integer mercury__diet__PolyConst1_31;
#line 20273 "diet.c"
    MR_Tuple mercury__diet__V_34_34;

#line 20276 "diet.c"
    if (mercury__diet__succeeded)
#line 20278 "diet.c"
      {
#line 20280 "diet.c"
        mercury__diet__V_34_34 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
#line 20282 "diet.c"
        mercury__diet__H_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 20284 "diet.c"
        mercury__diet__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 2)));
#line 20286 "diet.c"
        mercury__diet__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 3)));
#line 1057 "diet.m"
        mercury__diet__X_9 = (MR_hl_field(MR_mktag(0), mercury__diet__V_34_34, (MR_Integer) 0));
#line 1057 "diet.m"
        mercury__diet__Y_10 = (MR_hl_field(MR_mktag(0), mercury__diet__V_34_34, (MR_Integer) 1));
#line 20292 "diet.c"
        mercury__diet__PolyConst1_31 = (MR_Integer) 1;
#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_30 ;
	Index =  mercury__diet__PolyConst1_31 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 20309 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_32_32  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 1058 "diet.m"
        {
#line 1058 "diet.m"
          mercury__builtin__compare_3_p_0(mercury__diet__TypeInfo_32_32, &mercury__diet__CZX_14, mercury__diet__HeadVar__1_1, mercury__diet__X_9);
        }
#line 1063 "diet.m"
#line 1063 "diet.m"
        switch (mercury__diet__CZX_14) {
#line 1063 "diet.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1063 "diet.m"
          case (MR_Integer) 1:
#line 1060 "diet.m"
            {
#line 1060 "diet.m"
              MR_Word mercury__diet__L_15;

#line 1061 "diet.m"
              {
#line 1061 "diet.m"
                mercury__diet__succeeded = mercury__diet__remove_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__HeadVar__1_1, mercury__diet__Left_12, &mercury__diet__L_15);
              }
#line 1060 "diet.m"
              if (mercury__diet__succeeded)
#line 1060 "diet.m"
                {
#line 1062 "diet.m"
                  {
#line 1062 "diet.m"
                    *mercury__diet__HeadVar__3_3 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__V_34_34, mercury__diet__L_15, mercury__diet__Right_13);
                  }
#line 1062 "diet.m"
                  mercury__diet__succeeded = MR_TRUE;
#line 1060 "diet.m"
                }
#line 1060 "diet.m"
            }
#line 1063 "diet.m"
            break;
#line 1063 "diet.m"
          case (MR_Integer) 0:
#line 1063 "diet.m"
          case (MR_Integer) 2:
#line 1066 "diet.m"
            {
#line 1066 "diet.m"
              MR_Word mercury__diet__TypeInfo_33_33;
#line 1066 "diet.m"
              MR_Word mercury__diet__CZY_16;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_30 ;
	Index =  mercury__diet__PolyConst1_31 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 20381 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_33_33  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 1067 "diet.m"
              {
#line 1067 "diet.m"
                mercury__builtin__compare_3_p_0(mercury__diet__TypeInfo_33_33, &mercury__diet__CZY_16, mercury__diet__HeadVar__1_1, mercury__diet__Y_10);
              }
#line 1077 "diet.m"
#line 1077 "diet.m"
              switch (mercury__diet__CZY_16) {
#line 1077 "diet.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1077 "diet.m"
                case (MR_Integer) 1:
#line 1082 "diet.m"
                  {
#line 1082 "diet.m"
#line 1082 "diet.m"
                    switch (mercury__diet__CZX_14) {
#line 1082 "diet.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1082 "diet.m"
                      case (MR_Integer) 0:
#line 1080 "diet.m"
                        {
#line 1080 "diet.m"
                          MR_Tuple mercury__diet__V_25_25;
#line 1080 "diet.m"
                          MR_Box mercury__diet__V_26_26;
#line 20415 "diet.c"
                          MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 6)));

#line 20418 "diet.c"
                          {
#line 20420 "diet.c"
                            mercury__diet__V_26_26 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_30), mercury__diet__X_9);
                          }
#line 1081 "diet.m"
                          {
#line 1081 "diet.m"
                            mercury__diet__V_25_25 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1081 "diet.m"
                            MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, 0) = mercury__diet__V_26_26;
#line 1081 "diet.m"
                            MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, 1) = mercury__diet__Y_10;
#line 1081 "diet.m"
                          }
#line 1081 "diet.m"
                          {
#line 1081 "diet.m"
                            MR_Word base;
#line 1081 "diet.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "diet.m"
                            *mercury__diet__HeadVar__3_3 = base;
#line 1081 "diet.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_25_25));
#line 1081 "diet.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_11));
#line 1081 "diet.m"
                            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_12));
#line 1081 "diet.m"
                            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_13));
#line 1081 "diet.m"
                          }
#line 1080 "diet.m"
                        }
#line 1082 "diet.m"
                        break;
#line 1082 "diet.m"
                      case (MR_Integer) 2:
#line 1083 "diet.m"
                        {
#line 1083 "diet.m"
                          MR_Tuple mercury__diet__V_20_20;
#line 1083 "diet.m"
                          MR_Box mercury__diet__V_21_21;
#line 1083 "diet.m"
                          MR_Word mercury__diet__V_22_22;
#line 1083 "diet.m"
                          MR_Tuple mercury__diet__V_23_23;
#line 1083 "diet.m"
                          MR_Box mercury__diet__V_24_24;
#line 20469 "diet.c"
                          MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 6)));
#line 20471 "diet.c"
                          MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);

#line 20474 "diet.c"
                          {
#line 20476 "diet.c"
                            mercury__diet__V_21_21 = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_30), mercury__diet__HeadVar__1_1);
                          }
#line 1084 "diet.m"
                          {
#line 1084 "diet.m"
                            mercury__diet__V_20_20 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1084 "diet.m"
                            MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, 0) = mercury__diet__V_21_21;
#line 1084 "diet.m"
                            MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, 1) = mercury__diet__Y_10;
#line 1084 "diet.m"
                          }
#line 20489 "diet.c"
                          mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 7)));
#line 20491 "diet.c"
                          {
#line 20493 "diet.c"
                            mercury__diet__V_24_24 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_30), mercury__diet__HeadVar__1_1);
                          }
#line 1085 "diet.m"
                          {
#line 1085 "diet.m"
                            mercury__diet__V_23_23 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1085 "diet.m"
                            MR_hl_field(MR_mktag(0), mercury__diet__V_23_23, 0) = mercury__diet__X_9;
#line 1085 "diet.m"
                            MR_hl_field(MR_mktag(0), mercury__diet__V_23_23, 1) = mercury__diet__V_24_24;
#line 1085 "diet.m"
                          }
#line 1085 "diet.m"
                          {
#line 1085 "diet.m"
                            mercury__diet__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "diet.m"
                            MR_hl_field(MR_mktag(1), mercury__diet__V_22_22, 0) = ((MR_Box) (mercury__diet__V_23_23));
#line 1085 "diet.m"
                            MR_hl_field(MR_mktag(1), mercury__diet__V_22_22, 1) = ((MR_Box) (mercury__diet__H_11));
#line 1085 "diet.m"
                            MR_hl_field(MR_mktag(1), mercury__diet__V_22_22, 2) = ((MR_Box) (mercury__diet__Left_12));
#line 1085 "diet.m"
                            MR_hl_field(MR_mktag(1), mercury__diet__V_22_22, 3) = ((MR_Box) (mercury__diet__Right_13));
#line 1085 "diet.m"
                          }
#line 1084 "diet.m"
                          {
#line 1084 "diet.m"
                            *mercury__diet__HeadVar__3_3 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__V_20_20, mercury__diet__V_22_22);
                          }
#line 1083 "diet.m"
                        }
#line 1082 "diet.m"
                        break;
#line 1082 "diet.m"
                    }
#line 1082 "diet.m"
                    mercury__diet__succeeded = MR_TRUE;
#line 1082 "diet.m"
                  }
#line 1077 "diet.m"
                  break;
#line 1077 "diet.m"
                case (MR_Integer) 0:
#line 1073 "diet.m"
                  {
#line 1073 "diet.m"
#line 1073 "diet.m"
                    switch (mercury__diet__CZX_14) {
#line 1073 "diet.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1073 "diet.m"
                      case (MR_Integer) 0:
#line 645 "diet.m"
                        {
#line 636 "diet.m"
                          MR_Integer mercury__diet__V_52_52;
#line 636 "diet.m"
                          MR_Integer mercury__diet__V_53_53;

#line 513 "diet.m"
                          if ((mercury__diet__Left_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
                            mercury__diet__V_52_52 = (MR_Integer) 0;
#line 513 "diet.m"
                          else
#line 514 "diet.m"
                            {
#line 514 "diet.m"
                              MR_Tuple mercury__diet__V_62_62 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Left_12, (MR_Integer) 0)));
#line 514 "diet.m"
                              MR_Word mercury__diet__V_64_64;
#line 514 "diet.m"
                              MR_Word mercury__diet__V_65_65;

#line 514 "diet.m"
                              mercury__diet__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Left_12, (MR_Integer) 1)));
#line 514 "diet.m"
                              mercury__diet__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Left_12, (MR_Integer) 2)));
#line 514 "diet.m"
                              mercury__diet__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Left_12, (MR_Integer) 3)));
#line 514 "diet.m"
                            }
#line 513 "diet.m"
                          if ((mercury__diet__Right_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "diet.m"
                            mercury__diet__V_53_53 = (MR_Integer) 0;
#line 513 "diet.m"
                          else
#line 514 "diet.m"
                            {
#line 514 "diet.m"
                              MR_Tuple mercury__diet__V_66_66 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Right_13, (MR_Integer) 0)));
#line 514 "diet.m"
                              MR_Word mercury__diet__V_68_68;
#line 514 "diet.m"
                              MR_Word mercury__diet__V_69_69;

#line 514 "diet.m"
                              mercury__diet__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Right_13, (MR_Integer) 1)));
#line 514 "diet.m"
                              mercury__diet__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Right_13, (MR_Integer) 2)));
#line 514 "diet.m"
                              mercury__diet__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Right_13, (MR_Integer) 3)));
#line 514 "diet.m"
                            }
#line 494 "diet.m"
                          mercury__diet__succeeded = (mercury__diet__V_52_52 > mercury__diet__V_53_53);
#line 645 "diet.m"
                          if (mercury__diet__succeeded)
#line 640 "diet.m"
                            if ((mercury__diet__Left_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 638 "diet.m"
                              {
#line 639 "diet.m"
                                {
#line 639 "diet.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.reroot\'/2", (MR_String) "L empty");
                                }
#line 638 "diet.m"
                              }
#line 640 "diet.m"
                            else
#line 641 "diet.m"
                              {
#line 641 "diet.m"
                                MR_Tuple mercury__diet__I_45;
#line 641 "diet.m"
                                MR_Word mercury__diet__L1_46;

#line 642 "diet.m"
                                {
#line 642 "diet.m"
                                  mercury__diet__take_max_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__Left_12, &mercury__diet__I_45, &mercury__diet__L1_46);
                                }
#line 643 "diet.m"
                                {
#line 643 "diet.m"
                                  *mercury__diet__HeadVar__3_3 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__I_45, mercury__diet__L1_46, mercury__diet__Right_13);
                                }
#line 641 "diet.m"
                              }
#line 645 "diet.m"
                          else
#line 648 "diet.m"
                          if ((mercury__diet__Right_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "diet.m"
                            *mercury__diet__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 648 "diet.m"
                          else
#line 649 "diet.m"
                            {
#line 649 "diet.m"
                              MR_Word mercury__diet__R1_51;
#line 649 "diet.m"
                              MR_Tuple mercury__diet__I_57;

#line 650 "diet.m"
                              {
#line 650 "diet.m"
                                mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__Right_13, &mercury__diet__I_57, &mercury__diet__R1_51);
                              }
#line 651 "diet.m"
                              {
#line 651 "diet.m"
                                *mercury__diet__HeadVar__3_3 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__I_57, mercury__diet__Left_12, mercury__diet__R1_51);
                              }
#line 649 "diet.m"
                            }
#line 645 "diet.m"
                        }
#line 1073 "diet.m"
                        break;
#line 1073 "diet.m"
                      case (MR_Integer) 2:
#line 1074 "diet.m"
                        {
#line 1074 "diet.m"
                          MR_Tuple mercury__diet__V_27_27;
#line 1074 "diet.m"
                          MR_Box mercury__diet__V_28_28;
#line 20676 "diet.c"
                          MR_Box MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_30, (MR_Integer) 0)), (MR_Integer) 7)));

#line 20679 "diet.c"
                          {
#line 20681 "diet.c"
                            mercury__diet__V_28_28 = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_30), mercury__diet__Y_10);
                          }
#line 1075 "diet.m"
                          {
#line 1075 "diet.m"
                            mercury__diet__V_27_27 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1075 "diet.m"
                            MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, 0) = mercury__diet__X_9;
#line 1075 "diet.m"
                            MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, 1) = mercury__diet__V_28_28;
#line 1075 "diet.m"
                          }
#line 1075 "diet.m"
                          {
#line 1075 "diet.m"
                            MR_Word base;
#line 1075 "diet.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "diet.m"
                            *mercury__diet__HeadVar__3_3 = base;
#line 1075 "diet.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_27_27));
#line 1075 "diet.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_11));
#line 1075 "diet.m"
                            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_12));
#line 1075 "diet.m"
                            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_13));
#line 1075 "diet.m"
                          }
#line 1074 "diet.m"
                        }
#line 1073 "diet.m"
                        break;
#line 1073 "diet.m"
                    }
#line 1073 "diet.m"
                    mercury__diet__succeeded = MR_TRUE;
#line 1073 "diet.m"
                  }
#line 1077 "diet.m"
                  break;
#line 1077 "diet.m"
                case (MR_Integer) 2:
#line 1088 "diet.m"
                  {
#line 1088 "diet.m"
                    MR_Word mercury__diet__R_17;

#line 1089 "diet.m"
                    {
#line 1089 "diet.m"
                      mercury__diet__succeeded = mercury__diet__remove_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__HeadVar__1_1, mercury__diet__Right_13, &mercury__diet__R_17);
                    }
#line 1088 "diet.m"
                    if (mercury__diet__succeeded)
#line 1088 "diet.m"
                      {
#line 1090 "diet.m"
                        {
#line 1090 "diet.m"
                          *mercury__diet__HeadVar__3_3 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_30, mercury__diet__V_34_34, mercury__diet__Left_12, mercury__diet__R_17);
                        }
#line 1090 "diet.m"
                        mercury__diet__succeeded = MR_TRUE;
#line 1088 "diet.m"
                      }
#line 1088 "diet.m"
                  }
#line 1077 "diet.m"
                  break;
#line 1077 "diet.m"
              }
#line 1066 "diet.m"
            }
#line 1063 "diet.m"
            break;
#line 1063 "diet.m"
        }
#line 20761 "diet.c"
      }
#line 20763 "diet.c"
    return mercury__diet__succeeded;
#line 20765 "diet.c"
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
#line 1049 "diet.m"
  {
#line 1049 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1049 "diet.m"
    MR_Word mercury__diet__V_7_7;

#line 1767 "diet.m"
    {
#line 1767 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__List_4, &mercury__diet__V_7_7);
    }
#line 1373 "diet.m"
    if ((mercury__diet__Set0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1373 "diet.m"
      *mercury__diet__Set_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1373 "diet.m"
    else
#line 1373 "diet.m"
    if ((mercury__diet__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1378 "diet.m"
      *mercury__diet__Set_6 = mercury__diet__Set0_5;
#line 1373 "diet.m"
    else
#line 1380 "diet.m"
      {
#line 1380 "diet.m"
        MR_Tuple mercury__diet__Head_26;
#line 1380 "diet.m"
        MR_Word mercury__diet__Stream_27;
#line 1380 "diet.m"
        MR_Word mercury__diet__V_30_30;
#line 1383 "diet.m"
        MR_Word mercury__diet___RemHead_28;
#line 1383 "diet.m"
        MR_Word mercury__diet___RemStream_29;

#line 1382 "diet.m"
        {
#line 1382 "diet.m"
          mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__V_7_7, &mercury__diet__Head_26, &mercury__diet__Stream_27);
        }
#line 1383 "diet.m"
        {
#line 1383 "diet.m"
          mercury__diet__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1383 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__V_30_30, 0) = ((MR_Box) (mercury__diet__Head_26));
#line 1383 "diet.m"
        }
#line 1383 "diet.m"
        {
#line 1383 "diet.m"
          mercury__diet__diff_6_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__Set0_5, mercury__diet__V_30_30, mercury__diet__Stream_27, mercury__diet__Set_6, &mercury__diet___RemHead_28, &mercury__diet___RemStream_29);
        }
#line 1380 "diet.m"
      }
#line 1049 "diet.m"
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
#line 1047 "diet.m"
  {
#line 1047 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1047 "diet.m"
    MR_Word mercury__diet__Set_6;

#line 1047 "diet.m"
    {
#line 1047 "diet.m"
      mercury__diet__delete_list_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__List_5, mercury__diet__Set0_4, &mercury__diet__Set_6);
    }
#line 1047 "diet.m"
    return mercury__diet__Set_6;
#line 1047 "diet.m"
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
#line 1040 "diet.m"
  {
#line 1040 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1040 "diet.m"
    MR_Word mercury__diet__Set1_7;

#line 1038 "diet.m"
    {
#line 1038 "diet.m"
      mercury__diet__succeeded = mercury__diet__remove_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__Elem_4, mercury__diet__Set0_5, &mercury__diet__Set1_7);
    }
#line 1040 "diet.m"
    if (mercury__diet__succeeded)
#line 1039 "diet.m"
      *mercury__diet__Set_6 = mercury__diet__Set1_7;
#line 1040 "diet.m"
    else
#line 1041 "diet.m"
      *mercury__diet__Set_6 = mercury__diet__Set0_5;
#line 1040 "diet.m"
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
#line 1040 "diet.m"
  {
#line 1040 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1040 "diet.m"
    MR_Word mercury__diet__Set_6;
#line 1040 "diet.m"
    MR_Word mercury__diet__Set1_11;

#line 1038 "diet.m"
    {
#line 1038 "diet.m"
      mercury__diet__succeeded = mercury__diet__remove_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__Elem_5, mercury__diet__Set0_4, &mercury__diet__Set1_11);
    }
#line 1040 "diet.m"
    if (mercury__diet__succeeded)
#line 1039 "diet.m"
      mercury__diet__Set_6 = mercury__diet__Set1_11;
#line 1040 "diet.m"
    else
#line 1041 "diet.m"
      mercury__diet__Set_6 = mercury__diet__Set0_4;
#line 1040 "diet.m"
    return mercury__diet__Set_6;
#line 1040 "diet.m"
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
#line 954 "diet.m"
  {
#line 954 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 20972 "diet.c"
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_11, (MR_Integer) 0)), (MR_Integer) 5)));

#line 20975 "diet.c"
    {
#line 20977 "diet.c"
      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_11), mercury__diet__Y_6, mercury__diet__X_5);
    }
#line 481 "diet.m"
    mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 954 "diet.m"
    if (mercury__diet__succeeded)
#line 953 "diet.m"
      {
#line 953 "diet.m"
        MR_Tuple mercury__diet__V_9_9;

#line 953 "diet.m"
        {
#line 953 "diet.m"
          mercury__diet__V_9_9 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 953 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_9_9, 0) = mercury__diet__X_5;
#line 953 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_9_9, 1) = mercury__diet__Y_6;
#line 953 "diet.m"
        }
#line 953 "diet.m"
        {
#line 953 "diet.m"
          *mercury__diet__Set_8 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_11, mercury__diet__V_9_9, mercury__diet__Set0_7);
        }
#line 953 "diet.m"
      }
#line 954 "diet.m"
    else
#line 955 "diet.m"
      {
#line 955 "diet.m"
        MR_Word mercury__diet__TypeInfo_13_13;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__insert_interval_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_11 ;
	Index =  (MR_Integer) 1 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 21028 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_13_13  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 955 "diet.m"
        {
#line 955 "diet.m"
          mercury__diet__unexpected_interval_3_p_0(mercury__diet__TypeInfo_13_13, (MR_String) "predicate \140diet.insert_interval\'/4", mercury__diet__X_5, mercury__diet__Y_6);
#line 955 "diet.m"
          return;
        }
#line 955 "diet.m"
      }
#line 954 "diet.m"
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
#line 947 "diet.m"
  {
#line 947 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 947 "diet.m"
    {
#line 947 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_diet_element_8, mercury__diet__Elems_4, mercury__diet__Set0_5, mercury__diet__Set_6);
#line 947 "diet.m"
      return;
    }
#line 947 "diet.m"
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
#line 947 "diet.m"
  {
#line 947 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 947 "diet.m"
    MR_Word mercury__diet__Set_6;

#line 947 "diet.m"
    {
#line 947 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__Elems_5, mercury__diet__Set0_4, &mercury__diet__Set_6);
    }
#line 947 "diet.m"
    return mercury__diet__Set_6;
#line 947 "diet.m"
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
#line 897 "diet.m"
  {
#line 897 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 897 "diet.m"
    if ((mercury__diet__T0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 897 "diet.m"
      {
#line 897 "diet.m"
        MR_Tuple mercury__diet__V_37_37;
#line 897 "diet.m"
        MR_Word mercury__diet__V_40_40;
#line 897 "diet.m"
        MR_Word mercury__diet__V_41_41;

#line 898 "diet.m"
        {
#line 898 "diet.m"
          mercury__diet__V_37_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 898 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_37_37, 0) = mercury__diet__P_4;
#line 898 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_37_37, 1) = mercury__diet__P_4;
#line 898 "diet.m"
        }
#line 898 "diet.m"
        mercury__diet__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 898 "diet.m"
        mercury__diet__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 898 "diet.m"
        {
#line 898 "diet.m"
          MR_Word base;
#line 898 "diet.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 898 "diet.m"
          *mercury__diet__T_6 = base;
#line 898 "diet.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_37_37));
#line 898 "diet.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 898 "diet.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__V_40_40));
#line 898 "diet.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__V_41_41));
#line 898 "diet.m"
        }
#line 897 "diet.m"
        mercury__diet__succeeded = MR_TRUE;
#line 897 "diet.m"
      }
#line 897 "diet.m"
    else
#line 900 "diet.m"
      {
#line 900 "diet.m"
        MR_Box mercury__diet__X_7;
#line 900 "diet.m"
        MR_Box mercury__diet__Y_8;
#line 900 "diet.m"
        MR_Integer mercury__diet__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 1)));
#line 900 "diet.m"
        MR_Word mercury__diet__Left_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 2)));
#line 900 "diet.m"
        MR_Word mercury__diet__Right_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 3)));
#line 900 "diet.m"
        MR_Tuple mercury__diet__V_24_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 0)));
#line 21190 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

#line 900 "diet.m"
        mercury__diet__X_7 = (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 0));
#line 900 "diet.m"
        mercury__diet__Y_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 1));
#line 21197 "diet.c"
        mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21199 "diet.c"
        {
#line 21201 "diet.c"
          mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__P_4, mercury__diet__X_7);
        }
#line 475 "diet.m"
        mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 922 "diet.m"
        if (mercury__diet__succeeded)
#line 905 "diet.m"
          {
#line 21210 "diet.c"
            MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 21213 "diet.c"
            {
#line 21215 "diet.c"
              mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__Y_8, mercury__diet__P_4);
            }
#line 481 "diet.m"
            mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 905 "diet.m"
            if (mercury__diet__succeeded)
#line 904 "diet.m"
              mercury__diet__succeeded = MR_FALSE;
#line 905 "diet.m"
            else
#line 908 "diet.m"
              {
#line 905 "diet.m"
                MR_Box mercury__diet__V_25_25;
#line 21230 "diet.c"
                MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 6)));
#line 21232 "diet.c"
                MR_bool MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box, MR_Box);

#line 21235 "diet.c"
                {
#line 21237 "diet.c"
                  mercury__diet__V_25_25 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__Y_8);
                }
#line 21240 "diet.c"
                mercury__diet__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21242 "diet.c"
                {
#line 21244 "diet.c"
                  mercury__diet__succeeded = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__V_25_25, mercury__diet__P_4);
                }
#line 908 "diet.m"
                if (mercury__diet__succeeded)
#line 906 "diet.m"
                  {
#line 906 "diet.m"
                    MR_Word mercury__diet__R_12;

#line 906 "diet.m"
                    {
#line 906 "diet.m"
                      mercury__diet__succeeded = mercury__diet__insert_new_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__P_4, mercury__diet__Right_11, &mercury__diet__R_12);
                    }
#line 906 "diet.m"
                    if (mercury__diet__succeeded)
#line 906 "diet.m"
                      {
#line 907 "diet.m"
                        {
#line 907 "diet.m"
                          *mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__V_24_24, mercury__diet__Left_10, mercury__diet__R_12);
                        }
#line 907 "diet.m"
                        mercury__diet__succeeded = MR_TRUE;
#line 906 "diet.m"
                      }
#line 906 "diet.m"
                  }
#line 908 "diet.m"
                else
#line 912 "diet.m"
                  {
#line 912 "diet.m"
                    if ((mercury__diet__Right_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 910 "diet.m"
                      {
#line 910 "diet.m"
                        MR_Tuple mercury__diet__V_30_30;

#line 911 "diet.m"
                        {
#line 911 "diet.m"
                          mercury__diet__V_30_30 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 911 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, 0) = mercury__diet__X_7;
#line 911 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, 1) = mercury__diet__P_4;
#line 911 "diet.m"
                        }
#line 911 "diet.m"
                        {
#line 911 "diet.m"
                          MR_Word base;
#line 911 "diet.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 911 "diet.m"
                          *mercury__diet__T_6 = base;
#line 911 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_30_30));
#line 911 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_9));
#line 911 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 911 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 911 "diet.m"
                        }
#line 910 "diet.m"
                      }
#line 912 "diet.m"
                    else
#line 913 "diet.m"
                      {
#line 913 "diet.m"
                        MR_Box mercury__diet__U_17;
#line 913 "diet.m"
                        MR_Box mercury__diet__V_18;
#line 913 "diet.m"
                        MR_Tuple mercury__diet__V_27_27;
#line 913 "diet.m"
                        MR_Word mercury__diet__R_42;
#line 915 "diet.m"
                        MR_Word mercury__diet__TypeInfo_56_56;
#line 915 "diet.m"
                        MR_Box mercury__diet__V_53_53;
#line 21331 "diet.c"
                        MR_Box MR_CALL (* mercury__diet__func_4)(MR_Box, MR_Box);

#line 914 "diet.m"
                        {
#line 914 "diet.m"
                          mercury__diet__take_min_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__Right_11, &mercury__diet__V_27_27, &mercury__diet__R_42);
                        }
#line 914 "diet.m"
                        mercury__diet__U_17 = (MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, (MR_Integer) 0));
#line 914 "diet.m"
                        mercury__diet__V_18 = (MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, (MR_Integer) 1));
#line 21343 "diet.c"
                        mercury__diet__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 7)));
#line 21345 "diet.c"
                        {
#line 21347 "diet.c"
                          mercury__diet__V_53_53 = mercury__diet__func_4(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__U_17);
                        }
#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_52 ;
	Index =  (MR_Integer) 1 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 21365 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_56_56  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 915 "diet.m"
                        {
#line 915 "diet.m"
                          mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_56_56, mercury__diet__P_4, mercury__diet__V_53_53);
                        }
#line 917 "diet.m"
                        if (mercury__diet__succeeded)
#line 916 "diet.m"
                          {
#line 916 "diet.m"
                            MR_Tuple mercury__diet__V_28_28;

#line 916 "diet.m"
                            {
#line 916 "diet.m"
                              mercury__diet__V_28_28 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 916 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, 0) = mercury__diet__X_7;
#line 916 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, 1) = mercury__diet__V_18;
#line 916 "diet.m"
                            }
#line 916 "diet.m"
                            {
#line 916 "diet.m"
                              *mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__V_28_28, mercury__diet__Left_10, mercury__diet__R_42);
                            }
#line 916 "diet.m"
                          }
#line 917 "diet.m"
                        else
#line 918 "diet.m"
                          {
#line 918 "diet.m"
                            MR_Tuple mercury__diet__V_29_29;

#line 918 "diet.m"
                            {
#line 918 "diet.m"
                              mercury__diet__V_29_29 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 918 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_29_29, 0) = mercury__diet__X_7;
#line 918 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_29_29, 1) = mercury__diet__P_4;
#line 918 "diet.m"
                            }
#line 918 "diet.m"
                            {
#line 918 "diet.m"
                              MR_Word base;
#line 918 "diet.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 918 "diet.m"
                              *mercury__diet__T_6 = base;
#line 918 "diet.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_29_29));
#line 918 "diet.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_9));
#line 918 "diet.m"
                              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 918 "diet.m"
                              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 918 "diet.m"
                            }
#line 918 "diet.m"
                          }
#line 913 "diet.m"
                      }
#line 912 "diet.m"
                    mercury__diet__succeeded = MR_TRUE;
#line 912 "diet.m"
                  }
#line 908 "diet.m"
              }
#line 905 "diet.m"
          }
#line 922 "diet.m"
        else
#line 925 "diet.m"
          {
#line 922 "diet.m"
            MR_Box mercury__diet__V_31_31;
#line 21454 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_5)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 7)));
#line 21456 "diet.c"
            MR_bool MR_CALL (* mercury__diet__func_6)(MR_Box, MR_Box, MR_Box);

#line 21459 "diet.c"
            {
#line 21461 "diet.c"
              mercury__diet__V_31_31 = mercury__diet__func_5(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__X_7);
            }
#line 21464 "diet.c"
            mercury__diet__func_6 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21466 "diet.c"
            {
#line 21468 "diet.c"
              mercury__diet__succeeded = mercury__diet__func_6(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__P_4, mercury__diet__V_31_31);
            }
#line 925 "diet.m"
            if (mercury__diet__succeeded)
#line 923 "diet.m"
              {
#line 923 "diet.m"
                MR_Word mercury__diet__L_19;

#line 923 "diet.m"
                {
#line 923 "diet.m"
                  mercury__diet__succeeded = mercury__diet__insert_new_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__P_4, mercury__diet__Left_10, &mercury__diet__L_19);
                }
#line 923 "diet.m"
                if (mercury__diet__succeeded)
#line 923 "diet.m"
                  {
#line 924 "diet.m"
                    {
#line 924 "diet.m"
                      *mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__V_24_24, mercury__diet__L_19, mercury__diet__Right_11);
                    }
#line 924 "diet.m"
                    mercury__diet__succeeded = MR_TRUE;
#line 923 "diet.m"
                  }
#line 923 "diet.m"
              }
#line 925 "diet.m"
            else
#line 929 "diet.m"
              {
#line 929 "diet.m"
                if ((mercury__diet__Left_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "diet.m"
                  {
#line 927 "diet.m"
                    MR_Tuple mercury__diet__V_36_36;

#line 928 "diet.m"
                    {
#line 928 "diet.m"
                      mercury__diet__V_36_36 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 928 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_36_36, 0) = mercury__diet__P_4;
#line 928 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_36_36, 1) = mercury__diet__Y_8;
#line 928 "diet.m"
                    }
#line 928 "diet.m"
                    {
#line 928 "diet.m"
                      MR_Word base;
#line 928 "diet.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 928 "diet.m"
                      *mercury__diet__T_6 = base;
#line 928 "diet.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_36_36));
#line 928 "diet.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_9));
#line 928 "diet.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 928 "diet.m"
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 928 "diet.m"
                    }
#line 927 "diet.m"
                  }
#line 929 "diet.m"
                else
#line 930 "diet.m"
                  {
#line 930 "diet.m"
                    MR_Tuple mercury__diet__V_33_33;
#line 930 "diet.m"
                    MR_Box mercury__diet__V_45;
#line 930 "diet.m"
                    MR_Word mercury__diet__L_46;
#line 931 "diet.m"
                    MR_Box mercury__diet__U_44;
#line 932 "diet.m"
                    MR_Word mercury__diet__TypeInfo_58_58;
#line 932 "diet.m"
                    MR_Box mercury__diet__V_54_54;
#line 21555 "diet.c"
                    MR_Box MR_CALL (* mercury__diet__func_7)(MR_Box, MR_Box);

#line 931 "diet.m"
                    {
#line 931 "diet.m"
                      mercury__diet__take_max_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__Left_10, &mercury__diet__V_33_33, &mercury__diet__L_46);
                    }
#line 931 "diet.m"
                    mercury__diet__U_44 = (MR_hl_field(MR_mktag(0), mercury__diet__V_33_33, (MR_Integer) 0));
#line 931 "diet.m"
                    mercury__diet__V_45 = (MR_hl_field(MR_mktag(0), mercury__diet__V_33_33, (MR_Integer) 1));
#line 21567 "diet.c"
                    mercury__diet__func_7 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_52, (MR_Integer) 0)), (MR_Integer) 6)));
#line 21569 "diet.c"
                    {
#line 21571 "diet.c"
                      mercury__diet__V_54_54 = mercury__diet__func_7(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_52), mercury__diet__V_45);
                    }
#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_52 ;
	Index =  (MR_Integer) 1 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 21589 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_58_58  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 932 "diet.m"
                    {
#line 932 "diet.m"
                      mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_58_58, mercury__diet__P_4, mercury__diet__V_54_54);
                    }
#line 934 "diet.m"
                    if (mercury__diet__succeeded)
#line 933 "diet.m"
                      {
#line 933 "diet.m"
                        *mercury__diet__T_6 = mercury__diet__join_3_f_0(mercury__diet__TypeClassInfo_for_diet_element_52, mercury__diet__V_33_33, mercury__diet__L_46, mercury__diet__Right_11);
                      }
#line 934 "diet.m"
                    else
#line 935 "diet.m"
                      {
#line 935 "diet.m"
                        MR_Tuple mercury__diet__V_35_35;

#line 935 "diet.m"
                        {
#line 935 "diet.m"
                          mercury__diet__V_35_35 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 935 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, 0) = mercury__diet__P_4;
#line 935 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, 1) = mercury__diet__Y_8;
#line 935 "diet.m"
                        }
#line 935 "diet.m"
                        {
#line 935 "diet.m"
                          MR_Word base;
#line 935 "diet.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 935 "diet.m"
                          *mercury__diet__T_6 = base;
#line 935 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_35_35));
#line 935 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_9));
#line 935 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 935 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 935 "diet.m"
                        }
#line 935 "diet.m"
                      }
#line 930 "diet.m"
                  }
#line 929 "diet.m"
                mercury__diet__succeeded = MR_TRUE;
#line 929 "diet.m"
              }
#line 925 "diet.m"
          }
#line 900 "diet.m"
      }
#line 897 "diet.m"
    return mercury__diet__succeeded;
#line 897 "diet.m"
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
#line 846 "diet.m"
  {
#line 846 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 846 "diet.m"
    {
#line 846 "diet.m"
      *mercury__diet__Set_6 = mercury__diet__add_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__Elem_4, mercury__diet__Set0_5);
    }
#line 846 "diet.m"
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
#line 846 "diet.m"
  {
#line 846 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 846 "diet.m"
    MR_Word mercury__diet__Set_6;

#line 846 "diet.m"
    {
#line 846 "diet.m"
      return mercury__diet__Set_6 = mercury__diet__add_2_f_0(mercury__diet__TypeClassInfo_for_diet_element_7, mercury__diet__Elem_5, mercury__diet__Set0_4);
    }
#line 846 "diet.m"
    return mercury__diet__Set_6;
#line 846 "diet.m"
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
#line 777 "diet.m"
  {
#line 777 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 777 "diet.m"
    if ((mercury__diet__Set_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 777 "diet.m"
      mercury__diet__succeeded = MR_TRUE;
#line 777 "diet.m"
    else
#line 779 "diet.m"
      {
#line 779 "diet.m"
        MR_Tuple mercury__diet__XY1_16;
#line 779 "diet.m"
        MR_Word mercury__diet__R1_17;
#line 779 "diet.m"
        MR_Tuple mercury__diet__XY2_18;
#line 779 "diet.m"
        MR_Word mercury__diet__R2_19;
#line 779 "diet.m"
        MR_Word mercury__diet__V_20_20;
#line 779 "diet.m"
        MR_Word mercury__diet__V_21_21;
#line 780 "diet.m"
        MR_Tuple mercury__diet__V_12_12;
#line 780 "diet.m"
        MR_Integer mercury__diet__V_13_13;
#line 780 "diet.m"
        MR_Word mercury__diet__V_14_14;
#line 780 "diet.m"
        MR_Word mercury__diet__V_15_15;

#line 780 "diet.m"
        mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Superset_3)) == (MR_mktag((MR_Integer) 1)));
#line 780 "diet.m"
        if (mercury__diet__succeeded)
#line 780 "diet.m"
          {
#line 780 "diet.m"
            mercury__diet__V_12_12 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Superset_3, (MR_Integer) 0)));
#line 780 "diet.m"
            mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Superset_3, (MR_Integer) 1)));
#line 780 "diet.m"
            mercury__diet__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Superset_3, (MR_Integer) 2)));
#line 780 "diet.m"
            mercury__diet__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Superset_3, (MR_Integer) 3)));
#line 781 "diet.m"
            {
#line 781 "diet.m"
              mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__Set_4, &mercury__diet__XY1_16, &mercury__diet__R1_17);
            }
#line 782 "diet.m"
            {
#line 782 "diet.m"
              mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__Superset_3, &mercury__diet__XY2_18, &mercury__diet__R2_19);
            }
#line 783 "diet.m"
            mercury__diet__V_20_20 = (MR_Integer) 1;
#line 783 "diet.m"
            {
#line 783 "diet.m"
              mercury__diet__subset_2_5_p_0(mercury__diet__TypeClassInfo_for_diet_element_5, mercury__diet__XY1_16, mercury__diet__R1_17, mercury__diet__XY2_18, mercury__diet__R2_19, &mercury__diet__V_21_21);
            }
#line 783 "diet.m"
            mercury__diet__succeeded = (mercury__diet__V_20_20 == mercury__diet__V_21_21);
#line 780 "diet.m"
          }
#line 779 "diet.m"
      }
#line 777 "diet.m"
    return mercury__diet__succeeded;
#line 777 "diet.m"
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
#line 777 "diet.m"
  {
#line 777 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 777 "diet.m"
    if ((mercury__diet__T1_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 777 "diet.m"
      mercury__diet__succeeded = MR_TRUE;
#line 777 "diet.m"
    else
#line 779 "diet.m"
      {
#line 779 "diet.m"
        MR_Tuple mercury__diet__XY1_13;
#line 779 "diet.m"
        MR_Word mercury__diet__R1_14;
#line 779 "diet.m"
        MR_Tuple mercury__diet__XY2_15;
#line 779 "diet.m"
        MR_Word mercury__diet__R2_16;
#line 779 "diet.m"
        MR_Word mercury__diet__V_17_17;
#line 779 "diet.m"
        MR_Word mercury__diet__V_19_19;
#line 780 "diet.m"
        MR_Tuple mercury__diet__V_9_9;
#line 780 "diet.m"
        MR_Integer mercury__diet__V_10_10;
#line 780 "diet.m"
        MR_Word mercury__diet__V_11_11;
#line 780 "diet.m"
        MR_Word mercury__diet__V_12_12;

#line 780 "diet.m"
        mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__T2_4)) == (MR_mktag((MR_Integer) 1)));
#line 780 "diet.m"
        if (mercury__diet__succeeded)
#line 780 "diet.m"
          {
#line 780 "diet.m"
            mercury__diet__V_9_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 0)));
#line 780 "diet.m"
            mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 1)));
#line 780 "diet.m"
            mercury__diet__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 2)));
#line 780 "diet.m"
            mercury__diet__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 3)));
#line 781 "diet.m"
            {
#line 781 "diet.m"
              mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__T1_3, &mercury__diet__XY1_13, &mercury__diet__R1_14);
            }
#line 782 "diet.m"
            {
#line 782 "diet.m"
              mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__T2_4, &mercury__diet__XY2_15, &mercury__diet__R2_16);
            }
#line 783 "diet.m"
            mercury__diet__V_17_17 = (MR_Integer) 1;
#line 783 "diet.m"
            {
#line 783 "diet.m"
              mercury__diet__subset_2_5_p_0(mercury__diet__TypeClassInfo_for_diet_element_18, mercury__diet__XY1_13, mercury__diet__R1_14, mercury__diet__XY2_15, mercury__diet__R2_16, &mercury__diet__V_19_19);
            }
#line 783 "diet.m"
            mercury__diet__succeeded = (mercury__diet__V_17_17 == mercury__diet__V_19_19);
#line 780 "diet.m"
          }
#line 779 "diet.m"
      }
#line 777 "diet.m"
    return mercury__diet__succeeded;
#line 777 "diet.m"
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
#line 748 "diet.m"
  while (MR_TRUE)
#line 748 "diet.m"
    {
#line 748 "diet.m"
      /* tailcall optimized into a loop */
#line 748 "diet.m"
      {
#line 748 "diet.m"
        MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Set_2)) == (MR_mktag((MR_Integer) 1)));
#line 748 "diet.m"
        MR_Box mercury__diet__X_7;
#line 748 "diet.m"
        MR_Box mercury__diet__Y_8;
#line 748 "diet.m"
        MR_Word mercury__diet__Left_10;
#line 748 "diet.m"
        MR_Word mercury__diet__Right_11;
#line 748 "diet.m"
        MR_Tuple mercury__diet__V_12_12;
#line 749 "diet.m"
        MR_Integer mercury__diet__V_9_9;

#line 749 "diet.m"
        if (mercury__diet__succeeded)
#line 749 "diet.m"
          {
#line 749 "diet.m"
            mercury__diet__V_12_12 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set_2, (MR_Integer) 0)));
#line 749 "diet.m"
            mercury__diet__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set_2, (MR_Integer) 1)));
#line 749 "diet.m"
            mercury__diet__Left_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_2, (MR_Integer) 2)));
#line 749 "diet.m"
            mercury__diet__Right_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_2, (MR_Integer) 3)));
#line 749 "diet.m"
            mercury__diet__X_7 = (MR_hl_field(MR_mktag(0), mercury__diet__V_12_12, (MR_Integer) 0));
#line 749 "diet.m"
            mercury__diet__Y_8 = (MR_hl_field(MR_mktag(0), mercury__diet__V_12_12, (MR_Integer) 1));
#line 751 "diet.m"
            {
#line 751 "diet.m"
              mercury__diet__member_2_p_1(mercury__diet__TypeClassInfo_for_diet_element_13, mercury__diet__Elem_1, mercury__diet__Left_10, mercury__diet__cont, mercury__diet__cont_env_ptr);
            }
#line 753 "diet.m"
            {
#line 753 "diet.m"
              mercury__diet__member_in_range_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_13, mercury__diet__X_7, mercury__diet__Y_8, mercury__diet__Elem_1, mercury__diet__cont, mercury__diet__cont_env_ptr);
            }
#line 755 "diet.m"
            {
#line 755 "diet.m"
              /* direct tailcall eliminated */
#line 755 "diet.m"
              {
#line 755 "diet.m"
                MR_Word mercury__diet__Set__tmp_copy_2 = mercury__diet__Right_11;

#line 755 "diet.m"
                mercury__diet__Set_2 = mercury__diet__Set__tmp_copy_2;
#line 755 "diet.m"
              }
#line 755 "diet.m"
              continue;
#line 755 "diet.m"
            }
#line 749 "diet.m"
          }
#line 748 "diet.m"
      }
#line 748 "diet.m"
      break;
#line 748 "diet.m"
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
#line 747 "diet.m"
  {
#line 747 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 747 "diet.m"
    {
#line 747 "diet.m"
      return mercury__diet__succeeded = mercury__diet__contains_2_p_0(mercury__diet__TypeClassInfo_for_diet_element_13, mercury__diet__Set_2, mercury__diet__Elem_1);
    }
#line 747 "diet.m"
    return mercury__diet__succeeded;
#line 747 "diet.m"
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
#line 732 "diet.m"
  while (MR_TRUE)
#line 732 "diet.m"
    {
#line 732 "diet.m"
      /* tailcall optimized into a loop */
#line 732 "diet.m"
      {
#line 732 "diet.m"
        MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__T_3)) == (MR_mktag((MR_Integer) 1)));
#line 732 "diet.m"
        MR_Box mercury__diet__X_5;
#line 732 "diet.m"
        MR_Box mercury__diet__Y_6;
#line 732 "diet.m"
        MR_Word mercury__diet__L_8;
#line 732 "diet.m"
        MR_Word mercury__diet__R_9;
#line 732 "diet.m"
        MR_Tuple mercury__diet__V_10_10;
#line 733 "diet.m"
        MR_Integer mercury__diet__V_7_7;
#line 22051 "diet.c"
        MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

#line 733 "diet.m"
        if (mercury__diet__succeeded)
#line 733 "diet.m"
          {
#line 733 "diet.m"
            mercury__diet__V_10_10 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_3, (MR_Integer) 0)));
#line 733 "diet.m"
            mercury__diet__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_3, (MR_Integer) 1)));
#line 733 "diet.m"
            mercury__diet__L_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_3, (MR_Integer) 2)));
#line 733 "diet.m"
            mercury__diet__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_3, (MR_Integer) 3)));
#line 733 "diet.m"
            mercury__diet__X_5 = (MR_hl_field(MR_mktag(0), mercury__diet__V_10_10, (MR_Integer) 0));
#line 733 "diet.m"
            mercury__diet__Y_6 = (MR_hl_field(MR_mktag(0), mercury__diet__V_10_10, (MR_Integer) 1));
#line 22070 "diet.c"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_11, (MR_Integer) 0)), (MR_Integer) 5)));
#line 22072 "diet.c"
            {
#line 22074 "diet.c"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_11), mercury__diet__Z_4, mercury__diet__X_5);
            }
#line 736 "diet.m"
            if (mercury__diet__succeeded)
#line 735 "diet.m"
              {
#line 735 "diet.m"
                /* direct tailcall eliminated */
#line 735 "diet.m"
                {
#line 735 "diet.m"
                  MR_Word mercury__diet__T__tmp_copy_3 = mercury__diet__L_8;

#line 735 "diet.m"
                  mercury__diet__T_3 = mercury__diet__T__tmp_copy_3;
#line 735 "diet.m"
                }
#line 735 "diet.m"
                continue;
#line 735 "diet.m"
              }
#line 736 "diet.m"
            else
#line 738 "diet.m"
              {
#line 22100 "diet.c"
                MR_bool MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_11, (MR_Integer) 0)), (MR_Integer) 5)));

#line 22103 "diet.c"
                {
#line 22105 "diet.c"
                  mercury__diet__succeeded = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_11), mercury__diet__Y_6, mercury__diet__Z_4);
                }
#line 738 "diet.m"
                if (mercury__diet__succeeded)
#line 737 "diet.m"
                  {
#line 737 "diet.m"
                    /* direct tailcall eliminated */
#line 737 "diet.m"
                    {
#line 737 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_3 = mercury__diet__R_9;

#line 737 "diet.m"
                      mercury__diet__T_3 = mercury__diet__T__tmp_copy_3;
#line 737 "diet.m"
                    }
#line 737 "diet.m"
                    continue;
#line 737 "diet.m"
                  }
#line 738 "diet.m"
                else
#line 739 "diet.m"
                  mercury__diet__succeeded = MR_TRUE;
#line 738 "diet.m"
              }
#line 733 "diet.m"
          }
#line 732 "diet.m"
        return mercury__diet__succeeded;
#line 732 "diet.m"
      }
#line 732 "diet.m"
      break;
#line 732 "diet.m"
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
#line 727 "diet.m"
  {
#line 727 "diet.m"
    MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Set_3)) == (MR_mktag((MR_Integer) 1)));
#line 727 "diet.m"
    MR_Word mercury__diet__TypeInfo_12_12;
#line 727 "diet.m"
    MR_Tuple mercury__diet__V_6_6;
#line 727 "diet.m"
    MR_Box mercury__diet__V_7_7;
#line 727 "diet.m"
    MR_Word mercury__diet__V_8_8;
#line 727 "diet.m"
    MR_Word mercury__diet__V_9_9;
#line 727 "diet.m"
    MR_Integer mercury__diet__TypeInfoIndex_11;
#line 728 "diet.m"
    MR_Integer mercury__diet__V_5_5;

#line 728 "diet.m"
    if (mercury__diet__succeeded)
#line 728 "diet.m"
      {
#line 728 "diet.m"
        mercury__diet__V_6_6 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set_3, (MR_Integer) 0)));
#line 728 "diet.m"
        mercury__diet__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set_3, (MR_Integer) 1)));
#line 728 "diet.m"
        mercury__diet__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_3, (MR_Integer) 2)));
#line 728 "diet.m"
        mercury__diet__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_3, (MR_Integer) 3)));
#line 728 "diet.m"
        *mercury__diet__X_4 = (MR_hl_field(MR_mktag(0), mercury__diet__V_6_6, (MR_Integer) 0));
#line 728 "diet.m"
        mercury__diet__V_7_7 = (MR_hl_field(MR_mktag(0), mercury__diet__V_6_6, (MR_Integer) 1));
#line 22192 "diet.c"
        mercury__diet__TypeInfoIndex_11 = (MR_Integer) 1;
#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__is_singleton_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_10 ;
	Index =  mercury__diet__TypeInfoIndex_11 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 22209 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_12_12  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 728 "diet.m"
        {
#line 728 "diet.m"
          mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_12_12, mercury__diet__V_7_7, *mercury__diet__X_4);
        }
#line 727 "diet.m"
        if (mercury__diet__succeeded)
#line 727 "diet.m"
          {
#line 728 "diet.m"
            mercury__diet__succeeded = (mercury__diet__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "diet.m"
            if (mercury__diet__succeeded)
#line 728 "diet.m"
              mercury__diet__succeeded = (mercury__diet__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "diet.m"
          }
#line 728 "diet.m"
      }
#line 727 "diet.m"
    return mercury__diet__succeeded;
#line 727 "diet.m"
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
#line 723 "diet.m"
  {
#line 723 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 723 "diet.m"
    MR_Word mercury__diet__T_6;
#line 22259 "diet.c"
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_9, (MR_Integer) 0)), (MR_Integer) 5)));

#line 22262 "diet.c"
    {
#line 22264 "diet.c"
      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_9), mercury__diet__Y_5, mercury__diet__X_4);
    }
#line 481 "diet.m"
    mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 723 "diet.m"
    if (mercury__diet__succeeded)
#line 722 "diet.m"
      {
#line 722 "diet.m"
        MR_Tuple mercury__diet__V_7_7;
#line 722 "diet.m"
        MR_Word mercury__diet__V_18_18;
#line 722 "diet.m"
        MR_Word mercury__diet__V_19_19;
#line 102 "private_builtin.opt"
        MR_Word mercury__diet__TypeInfo_11_11;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__make_interval_set_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_9 ;
	Index =  (MR_Integer) 1 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 22297 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_11_11  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 722 "diet.m"
        {
#line 722 "diet.m"
          mercury__diet__V_7_7 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 722 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_7_7, 0) = mercury__diet__X_4;
#line 722 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_7_7, 1) = mercury__diet__Y_5;
#line 722 "diet.m"
        }
#line 509 "diet.m"
        mercury__diet__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 509 "diet.m"
        mercury__diet__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 509 "diet.m"
        {
#line 509 "diet.m"
          mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 509 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__V_7_7));
#line 509 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) ((MR_Integer) 1));
#line 509 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__V_18_18));
#line 509 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__V_19_19));
#line 509 "diet.m"
        }
#line 722 "diet.m"
      }
#line 723 "diet.m"
    else
#line 724 "diet.m"
      {
#line 724 "diet.m"
        MR_Word mercury__diet__TypeInfo_13_13;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__make_interval_set_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_9 ;
	Index =  (MR_Integer) 1 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 22356 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_13_13  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 724 "diet.m"
        {
#line 724 "diet.m"
          mercury__diet__unexpected_interval_3_p_0(mercury__diet__TypeInfo_13_13, (MR_String) "function \140diet.make_interval_set\'/2", mercury__diet__X_4, mercury__diet__Y_5);
        }
#line 724 "diet.m"
      }
#line 723 "diet.m"
    return mercury__diet__T_6;
#line 723 "diet.m"
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
#line 718 "diet.m"
  {
#line 718 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 718 "diet.m"
    MR_Word mercury__diet__HeadVar__2_2;
#line 718 "diet.m"
    MR_Tuple mercury__diet__V_4_4;
#line 718 "diet.m"
    MR_Word mercury__diet__V_11_11;
#line 718 "diet.m"
    MR_Word mercury__diet__V_12_12;
#line 102 "private_builtin.opt"
    MR_Word mercury__diet__TypeInfo_8_8;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__make_singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_6 ;
	Index =  (MR_Integer) 1 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 22416 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_8_8  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 718 "diet.m"
    {
#line 718 "diet.m"
      mercury__diet__V_4_4 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 718 "diet.m"
      MR_hl_field(MR_mktag(0), mercury__diet__V_4_4, 0) = mercury__diet__X_3;
#line 718 "diet.m"
      MR_hl_field(MR_mktag(0), mercury__diet__V_4_4, 1) = mercury__diet__X_3;
#line 718 "diet.m"
    }
#line 509 "diet.m"
    mercury__diet__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 509 "diet.m"
    mercury__diet__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 509 "diet.m"
    {
#line 509 "diet.m"
      mercury__diet__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 509 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 0) = ((MR_Box) (mercury__diet__V_4_4));
#line 509 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 1));
#line 509 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 2) = ((MR_Box) (mercury__diet__V_11_11));
#line 509 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 3) = ((MR_Box) (mercury__diet__V_12_12));
#line 509 "diet.m"
    }
#line 718 "diet.m"
    return mercury__diet__HeadVar__2_2;
#line 718 "diet.m"
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
#line 706 "diet.m"
  while (MR_TRUE)
#line 706 "diet.m"
    {
#line 706 "diet.m"
      /* tailcall optimized into a loop */
#line 706 "diet.m"
      {
#line 706 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 706 "diet.m"
        if ((mercury__diet__T1_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 707 "diet.m"
          mercury__diet__succeeded = (mercury__diet__T2_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 706 "diet.m"
        else
#line 709 "diet.m"
          {
#line 709 "diet.m"
            MR_Word mercury__diet__TypeInfo_22_22;
#line 709 "diet.m"
            MR_Word mercury__diet__TypeInfo_23_23;
#line 709 "diet.m"
            MR_Word mercury__diet__TypeCtorInfo_24_24;
#line 709 "diet.m"
            MR_Word mercury__diet__TypeInfo_26_26;
#line 709 "diet.m"
            MR_Word mercury__diet__R1_15;
#line 709 "diet.m"
            MR_Word mercury__diet__R2_16;
#line 709 "diet.m"
            MR_Tuple mercury__diet__V_17_17;
#line 709 "diet.m"
            MR_Tuple mercury__diet__V_20_20;
#line 709 "diet.m"
            MR_Integer mercury__diet__PolyConst1_21;
#line 709 "diet.m"
            MR_Integer mercury__diet__PolyConst2_25;
#line 710 "diet.m"
            MR_Tuple mercury__diet__V_9_9;
#line 710 "diet.m"
            MR_Integer mercury__diet__V_10_10;
#line 710 "diet.m"
            MR_Word mercury__diet__V_11_11;
#line 710 "diet.m"
            MR_Word mercury__diet__V_12_12;

#line 710 "diet.m"
            mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__T2_4)) == (MR_mktag((MR_Integer) 1)));
#line 710 "diet.m"
            if (mercury__diet__succeeded)
#line 710 "diet.m"
              {
#line 710 "diet.m"
                mercury__diet__V_9_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 0)));
#line 710 "diet.m"
                mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 1)));
#line 710 "diet.m"
                mercury__diet__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 2)));
#line 710 "diet.m"
                mercury__diet__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 3)));
#line 711 "diet.m"
                {
#line 711 "diet.m"
                  mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__T1_3, &mercury__diet__V_17_17, &mercury__diet__R1_15);
                }
#line 712 "diet.m"
                {
#line 712 "diet.m"
                  mercury__diet__take_min_iter_3_p_0(mercury__diet__TypeClassInfo_for_diet_element_19, mercury__diet__T2_4, &mercury__diet__V_20_20, &mercury__diet__R2_16);
                }
#line 22541 "diet.c"
                mercury__diet__TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 22543 "diet.c"
                mercury__diet__PolyConst2_25 = (MR_Integer) 2;
#line 22545 "diet.c"
                mercury__diet__PolyConst1_21 = (MR_Integer) 1;
#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__equal_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_19 ;
	Index =  mercury__diet__PolyConst1_21 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 22562 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_22_22  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__equal_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_diet_element_19 ;
	Index =  mercury__diet__PolyConst1_21 ;
		{
#line 102 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 22584 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_23_23  = TypeInfo;
#line 102 "private_builtin.opt"
}
#line 22591 "diet.c"
                {
#line 22593 "diet.c"
                  mercury__diet__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 22595 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_26_26, 0) = ((MR_Box) (mercury__diet__TypeCtorInfo_24_24));
#line 22597 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_26_26, 1) = ((MR_Box) (mercury__diet__PolyConst2_25));
#line 22599 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_26_26, 2) = ((MR_Box) (mercury__diet__TypeInfo_22_22));
#line 22601 "diet.c"
                  MR_hl_field(MR_mktag(0), mercury__diet__TypeInfo_26_26, 3) = ((MR_Box) (mercury__diet__TypeInfo_23_23));
#line 22603 "diet.c"
                }
#line 712 "diet.m"
                {
#line 712 "diet.m"
                  mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_26_26, ((MR_Box) (mercury__diet__V_17_17)), ((MR_Box) (mercury__diet__V_20_20)));
                }
#line 709 "diet.m"
                if (mercury__diet__succeeded)
#line 713 "diet.m"
                  {
#line 713 "diet.m"
                    /* direct tailcall eliminated */
#line 713 "diet.m"
                    {
#line 713 "diet.m"
                      MR_Word mercury__diet__T1__tmp_copy_3 = mercury__diet__R1_15;
#line 713 "diet.m"
                      MR_Word mercury__diet__T2__tmp_copy_4 = mercury__diet__R2_16;

#line 713 "diet.m"
                      mercury__diet__T2_4 = mercury__diet__T2__tmp_copy_4;
#line 713 "diet.m"
                      mercury__diet__T1_3 = mercury__diet__T1__tmp_copy_3;
#line 713 "diet.m"
                    }
#line 713 "diet.m"
                    continue;
#line 713 "diet.m"
                  }
#line 710 "diet.m"
              }
#line 709 "diet.m"
          }
#line 706 "diet.m"
        return mercury__diet__succeeded;
#line 706 "diet.m"
      }
#line 706 "diet.m"
      break;
#line 706 "diet.m"
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
#line 700 "diet.m"
  {
#line 700 "diet.m"
    MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 700 "diet.m"
    MR_Tuple mercury__diet__V_2_2;
#line 700 "diet.m"
    MR_Integer mercury__diet__V_3_3;
#line 700 "diet.m"
    MR_Word mercury__diet__V_4_4;
#line 700 "diet.m"
    MR_Word mercury__diet__V_5_5;

#line 700 "diet.m"
    if (mercury__diet__succeeded)
#line 700 "diet.m"
      {
#line 700 "diet.m"
        mercury__diet__V_2_2 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 0)));
#line 700 "diet.m"
        mercury__diet__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 1)));
#line 700 "diet.m"
        mercury__diet__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 2)));
#line 700 "diet.m"
        mercury__diet__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 3)));
#line 700 "diet.m"
      }
#line 700 "diet.m"
    return mercury__diet__succeeded;
#line 700 "diet.m"
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
#line 698 "diet.m"
  {
#line 698 "diet.m"
    MR_bool mercury__diet__succeeded = (mercury__diet__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 698 "diet.m"
    return mercury__diet__succeeded;
#line 698 "diet.m"
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
#line 692 "diet.m"
  {
#line 692 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 692 "diet.m"
    *mercury__diet__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 692 "diet.m"
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
#line 696 "diet.m"
  {
#line 696 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 696 "diet.m"
    MR_Word mercury__diet__V_3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 696 "diet.m"
    {
#line 696 "diet.m"
      return mercury__diet__succeeded = mercury__diet____Unify____diet_1_0(mercury__diet__TypeInfo_for_T_2, mercury__diet__HeadVar__1_1, mercury__diet__V_3_3);
    }
#line 696 "diet.m"
    return mercury__diet__succeeded;
#line 696 "diet.m"
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
#line 694 "diet.m"
  {
#line 694 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 694 "diet.m"
    *mercury__diet__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 694 "diet.m"
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
#line 692 "diet.m"
  {
#line 692 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 692 "diet.m"
    MR_Word mercury__diet__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 692 "diet.m"
    return mercury__diet__HeadVar__1_1;
#line 692 "diet.m"
  }
#line 54 "diet.m"
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
#line 22812 "diet.c"
  {
#line 22814 "diet.c"
    MR_bool mercury__diet__succeeded;
#line 22816 "diet.c"
    MR_Box mercury__diet__HeadVar__2_2;
#line 22818 "diet.c"
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_3, (MR_Integer) 0)), (MR_Integer) 7)));

#line 22821 "diet.c"
    {
#line 22823 "diet.c"
      mercury__diet__HeadVar__2_2 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_3), mercury__diet__HeadVar__1_1);
    }
#line 22826 "diet.c"
    return mercury__diet__HeadVar__2_2;
#line 22828 "diet.c"
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
#line 22842 "diet.c"
  {
#line 22844 "diet.c"
    MR_bool mercury__diet__succeeded;
#line 22846 "diet.c"
    MR_Box mercury__diet__HeadVar__2_2;
#line 22848 "diet.c"
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_3, (MR_Integer) 0)), (MR_Integer) 6)));

#line 22851 "diet.c"
    {
#line 22853 "diet.c"
      mercury__diet__HeadVar__2_2 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_3), mercury__diet__HeadVar__1_1);
    }
#line 22856 "diet.c"
    return mercury__diet__HeadVar__2_2;
#line 22858 "diet.c"
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
#line 22874 "diet.c"
  {
#line 22876 "diet.c"
    MR_bool mercury__diet__succeeded;
#line 22878 "diet.c"
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_diet_element_3, (MR_Integer) 0)), (MR_Integer) 5)));

#line 22881 "diet.c"
    {
#line 22883 "diet.c"
      return mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_diet_element_3), mercury__diet__HeadVar__1_1, mercury__diet__HeadVar__2_2);
    }
#line 22886 "diet.c"
    return mercury__diet__succeeded;
#line 22888 "diet.c"
  }
#line 39 "diet.m"
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
